// decompiled from phy-qcom-ufs-qmp-v4-kalama by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 468) =====

//WARNING: Switch with 1 destination removed at 0x08001e18

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x6edc81d3392d56bb) {
                pcVar2 = sym.ufs_qcom_phy_qmp_v4_is_pcs_ready.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt;
            }
            else {
                if (arg1 != -0x455404aa44fc3e9e) goto code_r0x08001dd8;
                pcVar2 = sym.ufs_qcom_phy_qmp_v4_set_mode.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) {
                if ((arg1 == -0x28b25d28ae1a7975) && ((pcVar1 + -0x8001248 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08001dd8;
            }
            pcVar2 = sym.ufs_qcom_phy_qmp_v4_probe.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt;
        }
    }
    else if (arg1 < 0x2a6ae6abaabab82a) {
        if (arg1 != 0x2b3a43e29242445) {
            if ((arg1 == 0x13ab0b68aedb5b17) && ((pcVar1 + -0x8001208 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x08001dd8;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x2a6ae6abaabab82a) {
        pcVar2 = sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) {
            if ((arg1 == 0x7fd06733b9cd884f) && ((pcVar1 + -0x8001218 >> 3 | pcVar1 << 0x3d) < 5)) {
                return;
            }
            goto code_r0x08001dd8;
        }
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001dd8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e2c);
    (*pcVar1)();
}


// ===== sym.ufs_qcom_phy_qmp_v4_is_pcs_ready.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x080011e0 (size 8) =====

uint sym.ufs_qcom_phy_qmp_v4_is_pcs_ready.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ktime_get();
    uVar2 = sym.readl(*(param_1 + 0x18) + 0x5a8);
    if ((uVar2 & 1) == 0) {
        do {
            iVar3 = ktime_get();
            if (iVar1 + 1000000000 < iVar3) {
                uVar2 = sym.readl(*(param_1 + 0x18) + 0x5a8);
                break;
            }
            usleep_range_state(3,10,2);
            uVar2 = sym.readl(*(param_1 + 0x18) + 0x5a8);
        } while ((uVar2 & 1) == 0);
    }
    uVar4 = 0xffffff92;
    if ((uVar2 & 1) != 0) {
        uVar4 = 0;
    }
    if ((uVar2 & 1) == 0) {
        _dev_err(*(param_1 + 0x10),"%s: poll for pcs failed err = %d\n","ufs_qcom_phy_qmp_v4_is_pcs_ready",uVar4);
    }
    return uVar4;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ufs_qcom_phy_qmp_v4_probe.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011f0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.ufs_qcom_phy_qmp_v4_probe.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_set_mode.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.ufs_qcom_phy_qmp_v4_set_mode.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt
                (ulong param_1,uint param_2,uint param_3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_ufs_qcom_phy();
    *(iVar1 + 0x188) = param_2;
    *(iVar1 + 0x18c) = param_3;
    return 0;
}


// ===== sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001200 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(void)

{
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_power_control.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001208 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_power_control.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 1) == 0) {
        sym.writel_relaxed(0,*(param_1 + 0x18) + 0x404);
        DataSynchronizationBarrier(3,3,0);
        uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0x13e0);
        sym.writel_relaxed(uVar1 | 0x40,*(param_1 + 0x18) + 0x13e0);
        if (*(param_1 + 0x140) != 1) {
            uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0x1be0);
            sym.writel_relaxed(uVar1 | 0x40,*(param_1 + 0x18) + 0x1be0);
        }
        DataSynchronizationBarrier(3,3,0);
    }
    else {
        uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0x13e0);
        sym.writel_relaxed(uVar1 & 0xffffffbf,*(param_1 + 0x18) + 0x13e0);
        if (*(param_1 + 0x140) != 1) {
            uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0x1be0);
            sym.writel_relaxed(uVar1 & 0xffffffbf,*(param_1 + 0x18) + 0x1be0);
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*(param_1 + 0x18) + 0x404);
        DataSynchronizationBarrier(3,3,0);
    }
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_ctrl_rx_linecfg.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001210 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_ctrl_rx_linecfg.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0x57c);
    uVar2 = 0;
    if ((param_2 & 1) == 0) {
        uVar2 = 2;
    }
    sym.writel_relaxed(uVar1 & 0xfffffffd | uVar2,*(param_1 + 0x18) + 0x57c);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_phy_calibrate.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001218 (size 8) =====

uint64_t sym.ufs_qcom_phy_qmp_v4_phy_calibrate.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(void)

{
    uint64_t uVar1;
    char *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong uVar10;
    char *pcVar11;
    uint *puVar12;
    ulong uVar13;
    ulong uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar15;
    int64_t iVar16;
    int iVar17;
    uint64_t uVar18;
    bool bVar19;
    code *pcVar20;
    int64_t iVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    char *pcStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iVar6 = get_ufs_qcom_phy();
    uVar13 = *(iVar6 + 0x10);
    uVar3 = reset_control_assert(*(iVar6 + 400));
    if (uVar3 == 0) {
        iVar4 = *(iVar6 + 0x18c);
        iVar17 = *(iVar6 + 0x188);
        sym.writel_relaxed(1,*(iVar6 + 0x18) + 0x408);
        DataSynchronizationBarrier(3,2,0);
        if (iVar4 == 1) {
            ufs_qcom_phy_write_tbl(iVar6,obj.phy_cal_table_rate_A_g4,0x3a);
            if (*(iVar6 + 0x140) == 2) {
                ufs_qcom_phy_write_tbl(iVar6,obj.phy_cal_table_2nd_lane,1);
            }
            if (iVar17 == 0xd) {
                pcVar20 = obj.phy_cal_table_rate_B;
code_r0x080014e0:
                ufs_qcom_phy_write_tbl(iVar6,pcVar20,1);
            }
        }
        else {
            if (iVar4 != 2) {
                _dev_err(uVar13,"%s: unsupported submode.\n");
                uVar15 = 0xffffffa1;
                goto code_r0x080017d0;
            }
            ufs_qcom_phy_write_tbl(iVar6,obj.phy_cal_table_rate_A_g5,0x51);
            if (*(iVar6 + 0x140) == 2) {
                pcVar20 = obj.phy_cal_table_2nd_lane;
                goto code_r0x080014e0;
            }
        }
        pcStack_78 = NULL;
        iVar7 = of_find_node_opts_by_path("/memory/ebuff",0);
        if (iVar7 == 0) {
            _dev_info(uVar13,"Failed to set ebuff to PHY\n");
        }
        else {
            iVar21 = 0;
            do {
                pcVar20 = obj.ebuffphy_data + iVar21 * 0xc;
                iVar4 = of_property_read_string(iVar7,pcVar20,&pcStack_78);
                pcVar11 = pcStack_78;
                if ((iVar4 == 0 && pcStack_78 != NULL) && (*pcStack_78 != '\0')) {
                    uVar15 = 0;
                    iVar4 = 0;
                    uVar14 = *(iVar6 + 0x10);
                    do {
                        pcVar2 = pcVar11 + uVar15;
                        uStack_70 = 0;
                        if ((pcVar2 == NULL) || (uVar15 = strlen(pcVar2), uVar15 == 0)) break;
                        uVar18 = 0;
                        while( true ) {
                            iVar17 = uVar18;
                            if ((pcVar2[uVar18] == '\0') || (pcVar2[uVar18] == ';')) break;
                            uVar18 = iVar17 + 1;
                            if (uVar15 <= uVar18) goto code_r0x08001540;
                        }
                        if (iVar17 == 0) break;
                        iVar8 = __kmalloc(iVar17 + 1,0xdc0);
                        memcpy(iVar8,pcVar2,uVar18);
                        if (iVar8 == 0) break;
                        uVar3 = strlen(iVar8);
                        if (uVar3 < 1) {
code_r0x08001520:
                            _dev_err(uVar14,"Failed to paser ebuff phy arg %s %s\n",pcVar20,iVar8);
                            kfree(iVar8);
                            break;
                        }
                        iVar16 = uVar3;
                        uVar18 = uVar3;
                        bVar19 = true;
                        uVar15 = 0;
                        do {
                            uVar1 = uVar15 + 1;
                            if (*(iVar8 + uVar15) == '=') {
                                uVar9 = __kmalloc(uVar1,0xdc0);
                                memcpy(uVar9,iVar8,uVar15);
                                uVar10 = __kmalloc(uVar3,0xdc0);
                                memcpy(uVar10,iVar8 + uVar15 + 1,uVar3 - 1);
                                iVar5 = kstrtouint(uVar9,0,&uStack_70 + 4);
                                if (iVar5 == 0) {
                                    iVar5 = kstrtouint(uVar10,0,&uStack_70);
                                    kfree(uVar9);
                                    kfree(uVar10);
                                    if (iVar5 == 0) break;
                                }
                                else {
                                    kfree(uVar9);
                                    kfree(uVar10);
                                }
                            }
                            uVar3 = uVar3 - 1;
                            bVar19 = uVar1 < iVar16;
                            uVar15 = uVar1;
                        } while (uVar18 != uVar1);
                        if (!bVar19) goto code_r0x08001520;
                        sym.writel_relaxed(uStack_70 & 0xffffffff,
                                           *(iVar6 + 0x18) + *(iVar21 * 0xc + 0x8000060) + (uStack_70 >> 0x20));
                        _printk(0x80009dc,pcVar20,uStack_70._4_4_,uStack_70 & 0xffffffff);
                        kfree(iVar8);
                        iVar4 = iVar17 + 1 + iVar4;
                        uVar15 = iVar4;
                        uVar18 = strlen(pcVar11);
                    } while (uVar15 < uVar18);
                }
code_r0x08001540:
                iVar21 = iVar21 + 1;
            } while (iVar21 != 6);
        }
        uVar15 = of_obtain_ebuffphyha_info();
        if ((uVar15 & 1) == 0) {
            _dev_info(uVar13,"Failed to set ebuff to PHY Host Adapter\n");
        }
        sym.writel_relaxed(0,*(iVar6 + 0x18) + 0x408);
        DataSynchronizationBarrier(3,2,0);
        uVar3 = reset_control_deassert(*(iVar6 + 400));
        if (uVar3 == 0) {
            uVar3 = sym.readl_relaxed(*(iVar6 + 0x18) + 0x400);
            sym.writel_relaxed(uVar3 | 1,*(iVar6 + 0x18) + 0x400);
            DataSynchronizationBarrier(3,3,0);
            uVar15 = sym.ufs_qcom_phy_qmp_v4_is_pcs_ready(iVar6);
            uVar15 = uVar15 & 0xffffffff;
            goto code_r0x080017d0;
        }
        pcVar11 = "Failed to deassert UFS PHY reset %d\n";
    }
    else {
        pcVar11 = "Failed to assert UFS PHY reset %d\n";
    }
    uVar15 = uVar3;
    _dev_err(uVar13,pcVar11,uVar15);
code_r0x080017d0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar15;
    }
    auVar22 = __stack_chk_fail();
    puVar12 = auVar22._8_8_;
    *extraout_x18 = sym.writel_relaxed;
    uVar15 = auVar22._0_8_ & 0xffffffff;
    log_write_mmio(uVar15,0x20,puVar12,0x8001878);
    *puVar12 = auVar22._0_4_;
    uVar15 = log_post_write_mmio(uVar15,0x20,puVar12,0x80018a0);
    return uVar15;
}


// ===== sym.ufs_qcom_phy_power_on.cfi_jt @ 0x08001220 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.ufs_qcom_phy_power_on.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ufs_qcom_phy_qmp_v4_exit.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.ufs_qcom_phy_qmp_v4_exit.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(void)

{
    return 0;
}


// ===== sym.ufs_qcom_phy_qmp_v4_init.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001230 (size 8) =====

int sym.ufs_qcom_phy_qmp_v4_init.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    iVar1 = ufs_qcom_phy_init_clks(iVar4);
    if (iVar1 == 0) {
        iVar1 = ufs_qcom_phy_init_vregulators(iVar4);
        if (iVar1 == 0) {
            ufs_qcom_phy_get_reset(iVar4);
            return 0;
        }
        uVar2 = *(iVar4 + 0x10);
        pcVar3 = "%s: ufs_qcom_phy_init_vregulators() failed %d\n";
    }
    else {
        uVar2 = *(iVar4 + 0x10);
        pcVar3 = "%s: ufs_qcom_phy_init_clks() failed %d\n";
    }
    _dev_err(uVar2,pcVar3,"ufs_qcom_phy_qmp_v4_init",iVar1);
    return iVar1;
}


// ===== sym.ufs_qcom_phy_power_off.cfi_jt @ 0x08001238 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.ufs_qcom_phy_power_off.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ufs_qcom_phy_qmp_v4_probe.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.ufs_qcom_phy_qmp_v4_probe.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = devm_kmalloc(param_1 + 0x10,0x1a8,0xdc0);
    if (iVar1 == 0) {
        uVar3 = 0xfffffff4;
    }
    else {
        iVar2 = ufs_qcom_phy_generic_probe
                          (param_1,iVar1,reloc.ufs_qcom_phy_qmp_v4_init.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt,
                           obj.phy_v4_ops);
        if (iVar2 == 0) {
            _dev_err(param_1 + 0x10,"%s: ufs_qcom_phy_generic_probe() failed\n","ufs_qcom_phy_qmp_v4_probe");
            uVar3 = 0xfffffffb;
        }
        else {
            *(iVar2 + 0x98) = iVar1;
            strscpy(iVar1 + 0x14e,"ufs_phy_qmp_v4_kalama",0x1e);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.ufs_qcom_phy_qmp_v4_dbg_register_dump.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001248 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_dbg_register_dump.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ufs_qcom_phy_dump_regs(param_1,0,0x200,"PHY QSERDES COM Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x800,100,"PHY PCS2 Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x400,600,"PHY Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x1200,0x3d8,"PHY RX0 Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x1000,0x134,"PHY TX0 Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x1a00,0x3d8,"PHY RX1 Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x1800,0x134,"PHY TX1 Registers ");
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_dbg_register_save.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001250 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_dbg_register_save.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ufs_qcom_phy_save_regs(param_1,0,0x200,"PHY QSERDES COM Registers ");
    ufs_qcom_phy_save_regs(param_1,0x800,100,"PHY PCS2 Registers ");
    ufs_qcom_phy_save_regs(param_1,0x400,600,"PHY Registers ");
    ufs_qcom_phy_save_regs(param_1,0x1200,0x3d8,"PHY RX0 Registers ");
    ufs_qcom_phy_save_regs(param_1,0x1000,0x134,"PHY TX0 Registers ");
    ufs_qcom_phy_save_regs(param_1,0x1a00,0x3d8,"PHY RX1 Registers ");
    ufs_qcom_phy_save_regs(param_1,0x1800,0x134,"PHY TX1 Registers ");
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_start_serdes.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt @ 0x08001258 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_start_serdes.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0x400);
    sym.writel_relaxed(uVar1 | 1,*(param_1 + 0x18) + 0x400);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_probe @ 0x08001260 (size 184) =====

ulong sym.ufs_qcom_phy_qmp_v4_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = devm_kmalloc(arg1 + 0x10,0x1a8,0xdc0);
    if (iVar1 == 0) {
        uVar3 = 0xfffffff4;
    }
    else {
        iVar2 = ufs_qcom_phy_generic_probe
                          (arg1,iVar1,reloc.ufs_qcom_phy_qmp_v4_init.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt,
                           obj.phy_v4_ops);
        if (iVar2 == 0) {
            _dev_err(arg1 + 0x10,"%s: ufs_qcom_phy_generic_probe() failed\n","ufs_qcom_phy_qmp_v4_probe");
            uVar3 = 0xfffffffb;
        }
        else {
            *(iVar2 + 0x98) = iVar1;
            strscpy(iVar1 + 0x14e,"ufs_phy_qmp_v4_kalama",0x1e);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.ufs_qcom_phy_qmp_v4_init @ 0x08001318 (size 136) =====

int sym.ufs_qcom_phy_qmp_v4_init(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    iVar1 = ufs_qcom_phy_init_clks(iVar4);
    if (iVar1 == 0) {
        iVar1 = ufs_qcom_phy_init_vregulators(iVar4);
        if (iVar1 == 0) {
            ufs_qcom_phy_get_reset(iVar4);
            return 0;
        }
        uVar2 = *(iVar4 + 0x10);
        pcVar3 = "%s: ufs_qcom_phy_init_vregulators() failed %d\n";
    }
    else {
        uVar2 = *(iVar4 + 0x10);
        pcVar3 = "%s: ufs_qcom_phy_init_clks() failed %d\n";
    }
    _dev_err(uVar2,pcVar3,"ufs_qcom_phy_qmp_v4_init",iVar1);
    return iVar1;
}


// ===== sym.ufs_qcom_phy_qmp_v4_exit @ 0x080013a0 (size 16) =====

ulong sym.ufs_qcom_phy_qmp_v4_exit(int64_t arg1)

{
    return 0;
}


// ===== sym.ufs_qcom_phy_qmp_v4_set_mode @ 0x080013b0 (size 68) =====

ulong sym.ufs_qcom_phy_qmp_v4_set_mode(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_ufs_qcom_phy();
    *(iVar1 + 0x188) = arg1;
    *(iVar1 + 0x18c) = arg2;
    return 0;
}


// ===== sym.ufs_qcom_phy_qmp_v4_phy_calibrate @ 0x080013f4 (size 1128) =====

uint64_t sym.ufs_qcom_phy_qmp_v4_phy_calibrate(void)

{
    uint64_t uVar1;
    char *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong uVar10;
    char *pcVar11;
    uint *puVar12;
    ulong uVar13;
    ulong uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar15;
    int64_t iVar16;
    int iVar17;
    uint64_t uVar18;
    bool bVar19;
    code *pcVar20;
    int64_t iVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    char *pcStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iVar6 = get_ufs_qcom_phy();
    uVar13 = *(iVar6 + 0x10);
    uVar3 = reset_control_assert(*(iVar6 + 400));
    if (uVar3 == 0) {
        iVar4 = *(iVar6 + 0x18c);
        iVar17 = *(iVar6 + 0x188);
        sym.writel_relaxed(1,*(iVar6 + 0x18) + 0x408);
        DataSynchronizationBarrier(3,2,0);
        if (iVar4 == 1) {
            ufs_qcom_phy_write_tbl(iVar6,obj.phy_cal_table_rate_A_g4,0x3a);
            if (*(iVar6 + 0x140) == 2) {
                ufs_qcom_phy_write_tbl(iVar6,obj.phy_cal_table_2nd_lane,1);
            }
            if (iVar17 == 0xd) {
                pcVar20 = obj.phy_cal_table_rate_B;
code_r0x080014e0:
                ufs_qcom_phy_write_tbl(iVar6,pcVar20,1);
            }
        }
        else {
            if (iVar4 != 2) {
                _dev_err(uVar13,"%s: unsupported submode.\n");
                uVar15 = 0xffffffa1;
                goto code_r0x080017d0;
            }
            ufs_qcom_phy_write_tbl(iVar6,obj.phy_cal_table_rate_A_g5,0x51);
            if (*(iVar6 + 0x140) == 2) {
                pcVar20 = obj.phy_cal_table_2nd_lane;
                goto code_r0x080014e0;
            }
        }
        pcStack_78 = NULL;
        iVar7 = of_find_node_opts_by_path("/memory/ebuff",0);
        if (iVar7 == 0) {
            _dev_info(uVar13,"Failed to set ebuff to PHY\n");
        }
        else {
            iVar21 = 0;
            do {
                pcVar20 = obj.ebuffphy_data + iVar21 * 0xc;
                iVar4 = of_property_read_string(iVar7,pcVar20,&pcStack_78);
                pcVar11 = pcStack_78;
                if ((iVar4 == 0 && pcStack_78 != NULL) && (*pcStack_78 != '\0')) {
                    uVar15 = 0;
                    iVar4 = 0;
                    uVar14 = *(iVar6 + 0x10);
                    do {
                        pcVar2 = pcVar11 + uVar15;
                        uStack_70 = 0;
                        if ((pcVar2 == NULL) || (uVar15 = strlen(pcVar2), uVar15 == 0)) break;
                        uVar18 = 0;
                        while( true ) {
                            iVar17 = uVar18;
                            if ((pcVar2[uVar18] == '\0') || (pcVar2[uVar18] == ';')) break;
                            uVar18 = iVar17 + 1;
                            if (uVar15 <= uVar18) goto code_r0x08001540;
                        }
                        if (iVar17 == 0) break;
                        iVar8 = __kmalloc(iVar17 + 1,0xdc0);
                        memcpy(iVar8,pcVar2,uVar18);
                        if (iVar8 == 0) break;
                        uVar3 = strlen(iVar8);
                        if (uVar3 < 1) {
code_r0x08001520:
                            _dev_err(uVar14,"Failed to paser ebuff phy arg %s %s\n",pcVar20,iVar8);
                            kfree(iVar8);
                            break;
                        }
                        iVar16 = uVar3;
                        uVar18 = uVar3;
                        bVar19 = true;
                        uVar15 = 0;
                        do {
                            uVar1 = uVar15 + 1;
                            if (*(iVar8 + uVar15) == '=') {
                                uVar9 = __kmalloc(uVar1,0xdc0);
                                memcpy(uVar9,iVar8,uVar15);
                                uVar10 = __kmalloc(uVar3,0xdc0);
                                memcpy(uVar10,iVar8 + uVar15 + 1,uVar3 - 1);
                                iVar5 = kstrtouint(uVar9,0,&uStack_70 + 4);
                                if (iVar5 == 0) {
                                    iVar5 = kstrtouint(uVar10,0,&uStack_70);
                                    kfree(uVar9);
                                    kfree(uVar10);
                                    if (iVar5 == 0) break;
                                }
                                else {
                                    kfree(uVar9);
                                    kfree(uVar10);
                                }
                            }
                            uVar3 = uVar3 - 1;
                            bVar19 = uVar1 < iVar16;
                            uVar15 = uVar1;
                        } while (uVar18 != uVar1);
                        if (!bVar19) goto code_r0x08001520;
                        sym.writel_relaxed(uStack_70 & 0xffffffff,
                                           *(iVar6 + 0x18) + *(iVar21 * 0xc + 0x8000060) + (uStack_70 >> 0x20));
                        _printk(0x80009dc,pcVar20,uStack_70._4_4_,uStack_70 & 0xffffffff);
                        kfree(iVar8);
                        iVar4 = iVar17 + 1 + iVar4;
                        uVar15 = iVar4;
                        uVar18 = strlen(pcVar11);
                    } while (uVar15 < uVar18);
                }
code_r0x08001540:
                iVar21 = iVar21 + 1;
            } while (iVar21 != 6);
        }
        uVar15 = of_obtain_ebuffphyha_info();
        if ((uVar15 & 1) == 0) {
            _dev_info(uVar13,"Failed to set ebuff to PHY Host Adapter\n");
        }
        sym.writel_relaxed(0,*(iVar6 + 0x18) + 0x408);
        DataSynchronizationBarrier(3,2,0);
        uVar3 = reset_control_deassert(*(iVar6 + 400));
        if (uVar3 == 0) {
            uVar3 = sym.readl_relaxed(*(iVar6 + 0x18) + 0x400);
            sym.writel_relaxed(uVar3 | 1,*(iVar6 + 0x18) + 0x400);
            DataSynchronizationBarrier(3,3,0);
            uVar15 = sym.ufs_qcom_phy_qmp_v4_is_pcs_ready(iVar6);
            uVar15 = uVar15 & 0xffffffff;
            goto code_r0x080017d0;
        }
        pcVar11 = "Failed to deassert UFS PHY reset %d\n";
    }
    else {
        pcVar11 = "Failed to assert UFS PHY reset %d\n";
    }
    uVar15 = uVar3;
    _dev_err(uVar13,pcVar11,uVar15);
code_r0x080017d0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar15;
    }
    auVar22 = __stack_chk_fail();
    puVar12 = auVar22._8_8_;
    *extraout_x18 = sym.writel_relaxed;
    uVar15 = auVar22._0_8_ & 0xffffffff;
    log_write_mmio(uVar15,0x20,puVar12,0x8001878);
    *puVar12 = auVar22._0_4_;
    uVar15 = log_post_write_mmio(uVar15,0x20,puVar12,0x80018a0);
    return uVar15;
}


// ===== sym.writel_relaxed @ 0x0800185c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001878);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80018a0);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_start_serdes @ 0x080018d4 (size 76) =====

void sym.ufs_qcom_phy_qmp_v4_start_serdes(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0x400);
    sym.writel_relaxed(uVar1 | 1,*(arg1 + 0x18) + 0x400);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_is_pcs_ready @ 0x08001920 (size 192) =====

uint sym.ufs_qcom_phy_qmp_v4_is_pcs_ready(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ktime_get();
    uVar2 = sym.readl(*(arg1 + 0x18) + 0x5a8);
    if ((uVar2 & 1) == 0) {
        do {
            iVar3 = ktime_get();
            if (iVar1 + 1000000000 < iVar3) {
                uVar2 = sym.readl(*(arg1 + 0x18) + 0x5a8);
                break;
            }
            usleep_range_state(3,10,2);
            uVar2 = sym.readl(*(arg1 + 0x18) + 0x5a8);
        } while ((uVar2 & 1) == 0);
    }
    uVar4 = 0xffffff92;
    if ((uVar2 & 1) != 0) {
        uVar4 = 0;
    }
    if ((uVar2 & 1) == 0) {
        _dev_err(*(arg1 + 0x10),"%s: poll for pcs failed err = %d\n","ufs_qcom_phy_qmp_v4_is_pcs_ready",uVar4);
    }
    return uVar4;
}


// ===== sym.readl_relaxed @ 0x080019e0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80019e4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001a18);
    return uVar1;
}


// ===== sym.readl @ 0x08001a50 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001a54);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8001a98);
    return uVar1;
}


// ===== sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable @ 0x08001ad0 (size 12) =====

void sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable(void)

{
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_power_control @ 0x08001adc (size 248) =====

void sym.ufs_qcom_phy_qmp_v4_power_control(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        sym.writel_relaxed(0,*(arg1 + 0x18) + 0x404);
        DataSynchronizationBarrier(3,3,0);
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0x13e0);
        sym.writel_relaxed(uVar1 | 0x40,*(arg1 + 0x18) + 0x13e0);
        if (*(arg1 + 0x140) != 1) {
            uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0x1be0);
            sym.writel_relaxed(uVar1 | 0x40,*(arg1 + 0x18) + 0x1be0);
        }
        DataSynchronizationBarrier(3,3,0);
    }
    else {
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0x13e0);
        sym.writel_relaxed(uVar1 & 0xffffffbf,*(arg1 + 0x18) + 0x13e0);
        if (*(arg1 + 0x140) != 1) {
            uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0x1be0);
            sym.writel_relaxed(uVar1 & 0xffffffbf,*(arg1 + 0x18) + 0x1be0);
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*(arg1 + 0x18) + 0x404);
        DataSynchronizationBarrier(3,3,0);
    }
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_ctrl_rx_linecfg @ 0x08001bd4 (size 96) =====

void sym.ufs_qcom_phy_qmp_v4_ctrl_rx_linecfg(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0x57c);
    uVar2 = 0;
    if ((arg2 & 1U) == 0) {
        uVar2 = 2;
    }
    sym.writel_relaxed(uVar1 & 0xfffffffd | uVar2,*(arg1 + 0x18) + 0x57c);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_dbg_register_dump @ 0x08001c34 (size 208) =====

void sym.ufs_qcom_phy_qmp_v4_dbg_register_dump(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ufs_qcom_phy_dump_regs(arg1,0,0x200,"PHY QSERDES COM Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x800,100,"PHY PCS2 Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x400,600,"PHY Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x1200,0x3d8,"PHY RX0 Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x1000,0x134,"PHY TX0 Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x1a00,0x3d8,"PHY RX1 Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x1800,0x134,"PHY TX1 Registers ");
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_dbg_register_save @ 0x08001d04 (size 208) =====

void sym.ufs_qcom_phy_qmp_v4_dbg_register_save(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ufs_qcom_phy_save_regs(arg1,0,0x200,"PHY QSERDES COM Registers ");
    ufs_qcom_phy_save_regs(arg1,0x800,100,"PHY PCS2 Registers ");
    ufs_qcom_phy_save_regs(arg1,0x400,600,"PHY Registers ");
    ufs_qcom_phy_save_regs(arg1,0x1200,0x3d8,"PHY RX0 Registers ");
    ufs_qcom_phy_save_regs(arg1,0x1000,0x134,"PHY TX0 Registers ");
    ufs_qcom_phy_save_regs(arg1,0x1a00,0x3d8,"PHY RX1 Registers ");
    ufs_qcom_phy_save_regs(arg1,0x1800,0x134,"PHY TX1 Registers ");
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001dd4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001e18

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
    //switch table (4 cases) at 0x8000638
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e2c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001e34 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.ufs_qcom_phy_qmp_v4_probe.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001e68 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ufs_qcom_phy_qmp_v4_probe.35a420fd5b9cfd9eca2fab09a680c7e7.cfi_jt);
    return;
}

