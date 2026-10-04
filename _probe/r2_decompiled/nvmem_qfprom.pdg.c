// decompiled from nvmem_qfprom by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x08001b78

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x60ced7460c6fa41e) {
            if ((pcVar1 + -0x8001120 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001b38;
        }
        if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001b38;
        pcVar2 = sym.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x4c550309df1cf4c1) {
        pcVar2 = sym.__typeid__ZTSFvPvE_global_addr;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001b38;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001b38:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b8c);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt @ 0x08001110 (size 8) =====

uint64_t sym.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint64_t *puVar7;
    int *piVar8;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    code *pcVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    uint64_t auStack_d0 [7];
    ulong uStack_98;
    uint uStack_90;
    code *pcStack_68;
    int iStack_60;
    uint64_t *puStack_50;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    memcpy(auStack_d0,0x8000730,0x98);
    uVar13 = param_1 + 0x10;
    uVar14 = 0xdc0;
    puVar7 = devm_kmalloc(uVar13,0x40,0xdc0);
    if (puVar7 == NULL) {
        uVar9 = 0xfffffff4;
        goto code_r0x080012e0;
    }
    uVar14 = 0;
    piVar8 = platform_get_resource(param_1,0x200,0);
    uVar9 = devm_ioremap_resource(uVar13,piVar8);
    puVar7[2] = uVar9;
    if (0xfffffffffffff000 < uVar9) goto code_r0x080012dc;
    iVar2 = piVar8[2];
    iVar3 = *piVar8;
    puVar7[4] = uVar13;
    iStack_60 = (iVar2 - iVar3) + 1;
    auStack_d0[0] = uVar13;
    puStack_50 = puVar7;
    puVar10 = device_get_match_data(uVar13);
    if (puVar10 != NULL) {
        uStack_98 = *puVar10;
        uStack_90 = *(puVar10 + 1);
    }
    uVar14 = 1;
    iVar11 = platform_get_resource(param_1,0x200,1);
    if (iVar11 == 0) {
code_r0x08001358:
        pm_runtime_enable(uVar13);
        uVar14 = uVar13;
        uVar5 = devm_add_action(uVar13,sym.__typeid__ZTSFvPvE_global_addr,uVar13);
        if (uVar5 == 0) {
            uVar13 = devm_nvmem_register(uVar13,auStack_d0);
            uVar5 = uVar13;
            if (uVar13 < 0xfffffffffffff001) {
                uVar5 = 0;
            }
            uVar9 = uVar5;
        }
        else {
            uVar9 = uVar5;
            __pm_runtime_disable(uVar13,1);
        }
    }
    else {
        uVar9 = devm_ioremap_resource(uVar13,iVar11);
        *puVar7 = uVar9;
        if (uVar9 < 0xfffffffffffff001) {
            uVar14 = 2;
            uVar12 = platform_get_resource(param_1,0x200,2);
            uVar9 = devm_ioremap_resource(uVar13,uVar12);
            puVar7[1] = uVar9;
            if (uVar9 < 0xfffffffffffff001) {
                uVar14 = 3;
                uVar12 = platform_get_resource(param_1,0x200,3);
                uVar9 = devm_ioremap_resource(uVar13,uVar12);
                puVar7[3] = uVar9;
                if (uVar9 < 0xfffffffffffff001) {
                    uVar4 = sym.readl(uVar9);
                    uVar5 = uVar4 >> 0x10 & 0xfff;
                    if (((uVar4 & 0xf0000000) == 0x70000000) && (uVar5 == 8)) {
                        pcVar15 = obj.qfprom_7_8_data;
code_r0x080012bc:
                        puVar7[7] = pcVar15;
                    }
                    else if (((uVar4 & 0xf0000000) == 0x70000000) && (uVar5 == 0xf)) {
                        pcVar15 = obj.qfprom_7_15_data;
                        goto code_r0x080012bc;
                    }
                    uVar9 = devm_regulator_get(uVar13,0x8000500);
                    puVar7[6] = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        uVar9 = devm_clk_get(uVar13,"core");
                        puVar7[5] = uVar9;
                        if (0xfffffffffffff000 < uVar9) {
                            if (uVar9 == -0x205) {
                                uVar9 = 0xfffffdfb;
                            }
                            else {
                                uVar14 = uVar9 & 0xffffffff;
                                _dev_err(uVar13,"Error getting clock: %d\n",uVar14);
                            }
                            goto code_r0x080012e0;
                        }
                        if (puVar7[7] != 0) {
                            pcStack_68 = sym.qfprom_reg_write.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt;
                        }
                        goto code_r0x08001358;
                    }
                }
            }
        }
code_r0x080012dc:
        uVar9 = uVar9 & 0xffffffff;
    }
code_r0x080012e0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_38) {
        auVar18 = __stack_chk_fail();
        uVar5 = auVar18._8_4_;
        *extraout_x18 = sym.qfprom_reg_read;
        iVar11 = auVar18._0_8_[2];
        if ((reloc.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt != 0x0) &&
           (iVar16 = *auVar18._0_8_, iVar16 != 0)) {
            iVar11 = iVar16;
        }
        uVar4 = uVar5 & 0xfffffffc;
        uVar1 = uVar5 + param_4 + 3 & 0xfffffffc;
        iVar16 = __kmalloc(uVar1 - uVar4,0xdc0);
        if (iVar16 == 0) {
            _printk(0x80006d5,"qfprom_reg_read");
            uVar13 = 0xfffffff4;
        }
        else {
            if (uVar4 < uVar1) {
                iVar17 = 0;
                do {
                    uVar6 = sym.readl_relaxed(iVar11 + uVar4 + iVar17);
                    *(iVar16 + iVar17) = uVar6;
                    iVar17 = iVar17 + 4;
                } while (uVar4 + iVar17 < uVar1);
            }
            memcpy(uVar14,iVar16 + (uVar5 & 3),param_4);
            kfree(iVar16);
            uVar13 = 0;
        }
        return uVar13;
    }
    return uVar9 & 0xffffffff;
}


// ===== sym.__typeid__ZTSFvPvE_global_addr @ 0x08001118 (size 8) =====

void sym.__typeid__ZTSFvPvE_global_addr(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pm_runtime_disable(param_1,1);
    return;
}


// ===== sym.qfprom_reg_read.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.qfprom_reg_read.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt
                (int64_t *param_1,uint32_t param_2,ulong param_3,ulong param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = param_1[2];
    if ((reloc.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt != 0x0) && (*param_1 != 0)) {
        iVar6 = *param_1;
    }
    uVar1 = param_2 & 0xfffffffc;
    uVar2 = param_2 + param_4 + 3 & 0xfffffffc;
    iVar4 = __kmalloc(uVar2 - uVar1,0xdc0);
    if (iVar4 == 0) {
        _printk(0x80006d5,"qfprom_reg_read");
        uVar5 = 0xfffffff4;
    }
    else {
        if (uVar1 < uVar2) {
            iVar7 = 0;
            do {
                uVar3 = sym.readl_relaxed(iVar6 + uVar1 + iVar7);
                *(iVar4 + iVar7) = uVar3;
                iVar7 = iVar7 + 4;
            } while (uVar1 + iVar7 < uVar2);
        }
        memcpy(param_3,iVar4 + (param_2 & 3),param_4);
        kfree(iVar4);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.qfprom_reg_write.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt @ 0x08001128 (size 8) =====

uint64_t sym.qfprom_reg_write.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt
                   (int64_t *param_1,uint32_t param_2,int64_t param_3,uint64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    if ((param_4 & 3) == 0) {
        if ((param_2 & 3) == 0) {
            uVar1 = sym.qfprom_enable_fuse_blowing(param_1,&uStack_58);
            uVar7 = uVar1;
            if (uVar1 == 0) {
                iVar3 = ktime_get();
                iVar2 = sym.readl_relaxed(param_1[1] + 0x48);
                if (iVar2 != 0) {
                    do {
                        iVar4 = ktime_get();
                        if (iVar3 + 1000000 < iVar4) {
                            iVar2 = sym.readl_relaxed(param_1[1] + 0x48);
                            if (iVar2 != 0) {
                                pcVar6 = "Timeout waiting for initial ready; aborting.\n";
                                goto code_r0x080017e0;
                            }
                            break;
                        }
                        usleep_range_state(0x1a,100,2);
                        iVar2 = sym.readl_relaxed(param_1[1] + 0x48);
                    } while (iVar2 != 0);
                }
                if (0 < param_4 >> 2) {
                    iVar3 = 0;
                    do {
                        sym.writel(*(param_3 + iVar3),*param_1 + param_2 + iVar3);
                        iVar3 = iVar3 + 4;
                    } while ((param_4 >> 2 & 0xffffffff) * 4 - iVar3 != 0);
                }
                iVar3 = ktime_get();
                iVar2 = sym.readl_relaxed(param_1[1] + 0x48);
                if (iVar2 != 0) {
code_r0x08001660:
                    iVar4 = ktime_get();
                    if (iVar4 <= iVar3 + 1000000) goto code_r0x0800166c;
                    iVar2 = sym.readl_relaxed(param_1[1] + 0x48);
                    if (iVar2 != 0) {
                        pcVar6 = "Timeout waiting for finish.\n";
code_r0x080017e0:
                        _dev_err(param_1[4],pcVar6);
                        uVar7 = 0xffffff92;
                        goto code_r0x080016a4;
                    }
                }
code_r0x080016a0:
                uVar7 = 0;
code_r0x080016a4:
                sym.writel(uStack_50 >> 0x20,param_1[1] + 0x3c);
                sym.writel(uStack_50 & 0xffffffff,param_1[1] + 0x44);
                dev_pm_genpd_set_performance_state(param_1[4],0);
                __pm_runtime_idle(param_1[4],5);
                iVar2 = regulator_set_voltage(param_1[6],0,0x7fffffff);
                if (iVar2 != 0) {
                    _dev_warn(param_1[4],"Failed to set 0 voltage (ignoring)\n");
                }
                iVar2 = regulator_disable(param_1[6]);
                if (iVar2 != 0) {
                    _dev_warn(param_1[4],"Failed to disable regulator (ignoring)\n");
                }
                iVar2 = clk_set_rate(param_1[5],uStack_58);
                if (iVar2 != 0) {
                    _dev_warn(param_1[4],"Failed to set clock rate for disable (ignoring)\n");
                }
                iVar3 = param_1[5];
                clk_disable(iVar3);
                clk_unprepare(iVar3);
            }
        }
        else {
            _dev_err(param_1[4],"Invalid offset: %#x.  Must be word aligned\n",param_2);
            uVar7 = 0xffffffea;
        }
    }
    else {
        _dev_err(param_1[4],"%zu is not an integral number of words\n",param_4);
        uVar7 = 0xffffffea;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        uVar5 = __stack_chk_fail();
        *extraout_x18 = sym.qfprom_runtime_disable;
        uVar7 = __pm_runtime_disable(uVar5,1);
        return uVar7;
    }
    return uVar7;
code_r0x0800166c:
    usleep_range_state(0x1a,100,2);
    iVar2 = sym.readl_relaxed(param_1[1] + 0x48);
    if (iVar2 == 0) goto code_r0x080016a0;
    goto code_r0x08001660;
}


// ===== sym.qfprom_probe @ 0x08001130 (size 656) =====

uint64_t sym.qfprom_probe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint64_t *puVar7;
    int *piVar8;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong in_x3;
    code *pcVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    uint64_t auStack_d0 [7];
    ulong uStack_98;
    uint uStack_90;
    code *pcStack_68;
    int iStack_60;
    uint64_t *puStack_50;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    memcpy(auStack_d0,0x8000730,0x98);
    uVar13 = arg1 + 0x10;
    uVar14 = 0xdc0;
    puVar7 = devm_kmalloc(uVar13,0x40,0xdc0);
    if (puVar7 == NULL) {
        uVar9 = 0xfffffff4;
        goto code_r0x080012e0;
    }
    uVar14 = 0;
    piVar8 = platform_get_resource(arg1,0x200,0);
    uVar9 = devm_ioremap_resource(uVar13,piVar8);
    puVar7[2] = uVar9;
    if (0xfffffffffffff000 < uVar9) goto code_r0x080012dc;
    iVar2 = piVar8[2];
    iVar3 = *piVar8;
    puVar7[4] = uVar13;
    iStack_60 = (iVar2 - iVar3) + 1;
    auStack_d0[0] = uVar13;
    puStack_50 = puVar7;
    puVar10 = device_get_match_data(uVar13);
    if (puVar10 != NULL) {
        uStack_98 = *puVar10;
        uStack_90 = *(puVar10 + 1);
    }
    uVar14 = 1;
    iVar11 = platform_get_resource(arg1,0x200,1);
    if (iVar11 == 0) {
code_r0x08001358:
        pm_runtime_enable(uVar13);
        uVar14 = uVar13;
        uVar5 = devm_add_action(uVar13,sym.__typeid__ZTSFvPvE_global_addr,uVar13);
        if (uVar5 == 0) {
            uVar13 = devm_nvmem_register(uVar13,auStack_d0);
            uVar5 = uVar13;
            if (uVar13 < 0xfffffffffffff001) {
                uVar5 = 0;
            }
            uVar9 = uVar5;
        }
        else {
            uVar9 = uVar5;
            __pm_runtime_disable(uVar13,1);
        }
    }
    else {
        uVar9 = devm_ioremap_resource(uVar13,iVar11);
        *puVar7 = uVar9;
        if (uVar9 < 0xfffffffffffff001) {
            uVar14 = 2;
            uVar12 = platform_get_resource(arg1,0x200,2);
            uVar9 = devm_ioremap_resource(uVar13,uVar12);
            puVar7[1] = uVar9;
            if (uVar9 < 0xfffffffffffff001) {
                uVar14 = 3;
                uVar12 = platform_get_resource(arg1,0x200,3);
                uVar9 = devm_ioremap_resource(uVar13,uVar12);
                puVar7[3] = uVar9;
                if (uVar9 < 0xfffffffffffff001) {
                    uVar4 = sym.readl(uVar9);
                    uVar5 = uVar4 >> 0x10 & 0xfff;
                    if (((uVar4 & 0xf0000000) == 0x70000000) && (uVar5 == 8)) {
                        pcVar15 = obj.qfprom_7_8_data;
code_r0x080012bc:
                        puVar7[7] = pcVar15;
                    }
                    else if (((uVar4 & 0xf0000000) == 0x70000000) && (uVar5 == 0xf)) {
                        pcVar15 = obj.qfprom_7_15_data;
                        goto code_r0x080012bc;
                    }
                    uVar9 = devm_regulator_get(uVar13,0x8000500);
                    puVar7[6] = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        uVar9 = devm_clk_get(uVar13,"core");
                        puVar7[5] = uVar9;
                        if (0xfffffffffffff000 < uVar9) {
                            if (uVar9 == -0x205) {
                                uVar9 = 0xfffffdfb;
                            }
                            else {
                                uVar14 = uVar9 & 0xffffffff;
                                _dev_err(uVar13,"Error getting clock: %d\n",uVar14);
                            }
                            goto code_r0x080012e0;
                        }
                        if (puVar7[7] != 0) {
                            pcStack_68 = sym.qfprom_reg_write.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt;
                        }
                        goto code_r0x08001358;
                    }
                }
            }
        }
code_r0x080012dc:
        uVar9 = uVar9 & 0xffffffff;
    }
code_r0x080012e0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_38) {
        auVar18 = __stack_chk_fail();
        uVar5 = auVar18._8_4_;
        *extraout_x18 = sym.qfprom_reg_read;
        iVar11 = auVar18._0_8_[2];
        if ((reloc.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt != 0x0) &&
           (iVar16 = *auVar18._0_8_, iVar16 != 0)) {
            iVar11 = iVar16;
        }
        uVar4 = uVar5 & 0xfffffffc;
        uVar1 = uVar5 + in_x3 + 3 & 0xfffffffc;
        iVar16 = __kmalloc(uVar1 - uVar4,0xdc0);
        if (iVar16 == 0) {
            _printk(0x80006d5,"qfprom_reg_read");
            uVar13 = 0xfffffff4;
        }
        else {
            if (uVar4 < uVar1) {
                iVar17 = 0;
                do {
                    uVar6 = sym.readl_relaxed(iVar11 + uVar4 + iVar17);
                    *(iVar16 + iVar17) = uVar6;
                    iVar17 = iVar17 + 4;
                } while (uVar4 + iVar17 < uVar1);
            }
            memcpy(uVar14,iVar16 + (uVar5 & 3),in_x3);
            kfree(iVar16);
            uVar13 = 0;
        }
        return uVar13;
    }
    return uVar9 & 0xffffffff;
}


// ===== sym.qfprom_reg_read @ 0x080013c0 (size 256) =====

ulong sym.qfprom_reg_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = arg2;
    iVar7 = *(arg1 + 0x10);
    if ((reloc.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt != 0x0) && (*arg1 != 0)) {
        iVar7 = *arg1;
    }
    uVar1 = uVar3 & 0xfffffffc;
    uVar2 = uVar3 + arg4 + 3 & 0xfffffffc;
    iVar5 = __kmalloc(uVar2 - uVar1,0xdc0);
    if (iVar5 == 0) {
        _printk(0x80006d5,"qfprom_reg_read");
        uVar6 = 0xfffffff4;
    }
    else {
        if (uVar1 < uVar2) {
            iVar8 = 0;
            do {
                uVar4 = sym.readl_relaxed(iVar7 + uVar1 + iVar8);
                *(iVar5 + iVar8) = uVar4;
                iVar8 = iVar8 + 4;
            } while (uVar1 + iVar8 < uVar2);
        }
        memcpy(arg3,iVar5 + (uVar3 & 3),arg4);
        kfree(iVar5);
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.readl @ 0x080014c0 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80014c4);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8001508);
    return uVar1;
}


// ===== sym.qfprom_reg_write @ 0x08001540 (size 692) =====

uint64_t sym.qfprom_reg_write(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    if ((arg4 & 3) == 0) {
        if ((arg2 & 3) == 0) {
            uVar1 = sym.qfprom_enable_fuse_blowing(arg1,&uStack_58);
            uVar7 = uVar1;
            if (uVar1 == 0) {
                iVar3 = ktime_get();
                iVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x48);
                if (iVar2 != 0) {
                    do {
                        iVar4 = ktime_get();
                        if (iVar3 + 1000000 < iVar4) {
                            iVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x48);
                            if (iVar2 != 0) {
                                pcVar5 = "Timeout waiting for initial ready; aborting.\n";
                                goto code_r0x080017e0;
                            }
                            break;
                        }
                        usleep_range_state(0x1a,100,2);
                        iVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x48);
                    } while (iVar2 != 0);
                }
                if (arg4 >> 2 != 0) {
                    iVar3 = 0;
                    do {
                        sym.writel(*(arg3 + iVar3),*arg1 + arg2 + iVar3);
                        iVar3 = iVar3 + 4;
                    } while ((arg4 >> 2) * 4 - iVar3 != 0);
                }
                iVar3 = ktime_get();
                iVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x48);
                if (iVar2 != 0) {
code_r0x08001660:
                    iVar4 = ktime_get();
                    if (iVar4 <= iVar3 + 1000000) goto code_r0x0800166c;
                    iVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x48);
                    if (iVar2 != 0) {
                        pcVar5 = "Timeout waiting for finish.\n";
code_r0x080017e0:
                        _dev_err(*(arg1 + 0x20),pcVar5);
                        uVar7 = 0xffffff92;
                        goto code_r0x080016a4;
                    }
                }
code_r0x080016a0:
                uVar7 = 0;
code_r0x080016a4:
                sym.writel(uStack_50 >> 0x20,*(arg1 + 8) + 0x3c);
                sym.writel(uStack_50 & 0xffffffff,*(arg1 + 8) + 0x44);
                dev_pm_genpd_set_performance_state(*(arg1 + 0x20),0);
                __pm_runtime_idle(*(arg1 + 0x20),5);
                iVar2 = regulator_set_voltage(*(arg1 + 0x30),0,0x7fffffff);
                if (iVar2 != 0) {
                    _dev_warn(*(arg1 + 0x20),"Failed to set 0 voltage (ignoring)\n");
                }
                iVar2 = regulator_disable(*(arg1 + 0x30));
                if (iVar2 != 0) {
                    _dev_warn(*(arg1 + 0x20),"Failed to disable regulator (ignoring)\n");
                }
                iVar2 = clk_set_rate(*(arg1 + 0x28),uStack_58);
                if (iVar2 != 0) {
                    _dev_warn(*(arg1 + 0x20),"Failed to set clock rate for disable (ignoring)\n");
                }
                uVar6 = *(arg1 + 0x28);
                clk_disable(uVar6);
                clk_unprepare(uVar6);
            }
        }
        else {
            _dev_err(*(arg1 + 0x20),"Invalid offset: %#x.  Must be word aligned\n",arg2);
            uVar7 = 0xffffffea;
        }
    }
    else {
        _dev_err(*(arg1 + 0x20),"%zu is not an integral number of words\n",arg4);
        uVar7 = 0xffffffea;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        uVar6 = __stack_chk_fail();
        *extraout_x18 = sym.qfprom_runtime_disable;
        uVar7 = __pm_runtime_disable(uVar6,1);
        return uVar7;
    }
    return uVar7;
code_r0x0800166c:
    usleep_range_state(0x1a,100,2);
    iVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x48);
    if (iVar2 == 0) goto code_r0x080016a0;
    goto code_r0x08001660;
}


// ===== sym.qfprom_runtime_disable @ 0x080017f4 (size 40) =====

void sym.qfprom_runtime_disable(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pm_runtime_disable(param_1,1);
    return;
}


// ===== sym.readl_relaxed @ 0x0800181c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001820);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001854);
    return uVar1;
}


// ===== sym.qfprom_enable_fuse_blowing @ 0x0800188c (size 556) =====

int sym.qfprom_enable_fuse_blowing(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = *(arg1 + 0x28);
    uVar6 = *(*(arg1 + 0x38) + 0xc);
    iVar5 = clk_prepare(uVar9);
    if (iVar5 == 0) {
        iVar5 = clk_enable(uVar9);
        if (iVar5 == 0) {
            uVar9 = clk_get_rate(*(arg1 + 0x28));
            *arg2 = uVar9;
            iVar5 = clk_set_rate(*(arg1 + 0x28),*(*(arg1 + 0x38) + 8));
            if (iVar5 == 0) {
                iVar5 = regulator_set_voltage(*(arg1 + 0x30),uVar6,0x7fffffff);
                if (iVar5 == 0) {
                    iVar5 = regulator_enable(*(arg1 + 0x30));
                    if (iVar5 == 0) {
                        iVar5 = __pm_runtime_resume(*(arg1 + 0x20),4);
                        if (-1 < iVar5) {
                            dev_pm_genpd_set_performance_state(*(arg1 + 0x20),0x7fffffff);
                            uVar6 = sym.readl(*(arg1 + 8) + 0x3c);
                            *(arg2 + 0xc) = uVar6;
                            uVar6 = sym.readl(*(arg1 + 8) + 0x44);
                            *(arg2 + 8) = uVar6;
                            sym.writel(*(*(arg1 + 0x38) + 4),*(arg1 + 8) + 0x3c);
                            sym.writel(**(arg1 + 0x38),*(arg1 + 8) + 0x44);
                            return 0;
                        }
                        puVar1 = *(arg1 + 0x20) + 0x1f8;
                        uVar8 = *puVar1;
                        do {
                            uVar7 = uVar8;
                            if (uVar7 == 0) break;
                            Hint_Prefetch(puVar1,2,0,1);
                            do {
                                uVar2 = *puVar1;
                                uVar8 = uVar2;
                                if (uVar2 != uVar7) goto code_r0x08001a20;
                                cVar3 = '\x01';
                                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar4) {
                                    *puVar1 = uVar7 - 1;
                                    cVar3 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar3 != '\0');
                            DataMemoryBarrier(2,3);
code_r0x08001a20:
                        } while (uVar7 != uVar2);
                        _dev_err(*(arg1 + 0x20),"Failed to enable power-domain\n");
                        regulator_disable(*(arg1 + 0x30));
                    }
                    else {
                        _dev_err(*(arg1 + 0x20),"Failed to enable regulator\n");
                    }
                }
                else {
                    _dev_err(*(arg1 + 0x20),"Failed to set %duV\n",uVar6);
                }
                clk_set_rate(*(arg1 + 0x28),*arg2);
            }
            else {
                _dev_err(*(arg1 + 0x20),"Failed to set clock rate for enable\n");
            }
            uVar9 = *(arg1 + 0x28);
            clk_disable(uVar9);
            clk_unprepare(uVar9);
            return iVar5;
        }
        clk_unprepare(uVar9);
    }
    _dev_err(*(arg1 + 0x20),"Failed to enable clock\n");
    return iVar5;
}


// ===== sym.writel @ 0x08001ab8 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001ad4);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001b00);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001b34 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001b78

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
    //switch table (4 cases) at 0x8000178
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b8c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001b94 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001bc8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qfprom_probe.ea71d8a4bccd84ceaa467d57ffbe3117.cfi_jt);
    return;
}

