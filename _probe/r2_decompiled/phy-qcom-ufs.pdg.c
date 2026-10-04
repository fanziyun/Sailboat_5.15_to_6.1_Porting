// decompiled from phy-qcom-ufs by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 636) =====

//WARNING: Switch with 1 destination removed at 0x08002fe8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b4049829b6be5dd) {
        if (arg1 < -0x4361743d81b36062) {
            if (arg1 == -0x6edc81d3392d56bb) {
                if ((pcVar1 + -0x80012f0 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08002fa8;
            }
            if (arg1 == -0x6853f2c988991718) {
                pcVar2 = sym.ufs_qcom_phy_set_tx_lane_enable.cfi_jt;
            }
            else {
                if (arg1 != -0x61139720a6818f52) goto code_r0x08002fa8;
                pcVar2 = sym.ufs_qcom_phy_ctrl_rx_linecfg.cfi_jt;
            }
        }
        else if (arg1 == -0x4361743d81b36062) {
            pcVar2 = sym.of_phy_simple_xlate.cfi_jt;
        }
        else {
            if (arg1 == -0x1386d58a4c42adba) {
                if ((pcVar1 + -0x80012b8 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08002fa8;
            }
            if (arg1 != -0x998d15a3122bc7a) goto code_r0x08002fa8;
            pcVar2 = sym.ufs_qcom_phy_calibrate.cfi_jt;
        }
    }
    else if (arg1 < 0x741b966c574d47b1) {
        if (arg1 == 0x2b4049829b6be5dd) {
            pcVar2 = sym.ufs_qcom_phy_save_controller_version.cfi_jt;
        }
        else if (arg1 == 0x7012fa7947431a97) {
            pcVar2 = sym.ufs_qcom_phy_write_tbl.cfi_jt;
        }
        else {
            if (arg1 != 0x71e982dcaef10fd3) goto code_r0x08002fa8;
            pcVar2 = sym.ufs_qcom_phy_generic_probe.cfi_jt;
        }
    }
    else if (arg1 < 0x7b88abb111c9a489) {
        if (arg1 != 0x741b966c574d47b1) {
            if (arg1 != 0x766aba4f21e60e88) goto code_r0x08002fa8;
            pcVar2 = sym.ufs_qcom_phy_dump_regs.cfi_jt;
code_r0x080011d4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002fa8;
        }
        pcVar2 = sym.of_obtain_ebuffphyha_info.cfi_jt;
    }
    else {
        if (arg1 != 0x7b88abb111c9a489) {
            if (arg1 != 0x7fd06733b9cd884f) goto code_r0x08002fa8;
            pcVar2 = sym.ufs_qcom_phy_power_on.cfi_jt;
            goto code_r0x080011d4;
        }
        pcVar2 = sym.get_ufs_qcom_phy.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002fa8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002ffc);
    (*pcVar1)();
}


// ===== sym.ufs_qcom_phy_save_controller_version.cfi_jt @ 0x08001288 (size 8) =====

void sym.ufs_qcom_phy_save_controller_version.cfi_jt(int64_t param_1,uchar param_2,ushort param_3,ushort param_4)

{
    int64_t iVar1;
    
    iVar1 = *(param_1 + 0x98);
    *(iVar1 + 0x148) = param_2;
    *(iVar1 + 0x14a) = param_3;
    *(iVar1 + 0x14c) = param_4;
    return;
}


// ===== sym.of_obtain_ebuffphyha_info.cfi_jt @ 0x08001290 (size 8) =====

void sym.of_obtain_ebuffphyha_info.cfi_jt(ulong param_1,ulong param_2,uint32_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    uint32_t *puVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_34;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_30 = 0;
    uStack_34 = 0;
    iVar3 = of_find_node_opts_by_path("/memory/ebuff",0);
    if (iVar3 != 0) {
        param_3 = &iStack_30;
        iVar2 = of_property_read_string(iVar3,"REFCLKALWAYSON");
        if ((iVar2 == 0) && (iStack_30 != 0)) {
            iVar2 = kstrtouint(iStack_30,0,&uStack_34);
            param_3 = _segment.ehdr;
            if (iVar2 == 0) {
                *0x80001b4 = uStack_34;
                *0x80001b0 = 1;
                param_3 = uStack_34;
            }
            _printk(0x80004f8,"REFCLKALWAYSON");
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail(iVar3 != 0);
        *extraout_x18 = sym.ufs_qcom_phy_write_tbl;
        if (0 < param_3) {
            uVar4 = param_3;
            puVar5 = auVar6._8_8_ + 4;
            do {
                sym.writel_relaxed(*puVar5,*(auVar6._0_8_ + 0x18) + puVar5[-1]);
                uVar4 = uVar4 - 1;
                puVar5 = puVar5 + 2;
            } while (uVar4 != 0);
        }
        return;
    }
    return;
}


// ===== sym.ufs_qcom_phy_ctrl_rx_linecfg.cfi_jt @ 0x08001298 (size 8) =====

void sym.ufs_qcom_phy_ctrl_rx_linecfg.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    pcVar2 = *(*(iVar1 + 0x180) + 0x28);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0x13ab0b68aedb5b17,pcVar2,0x8000220);
        (*pcVar2)(iVar1,param_2 & 1);
    }
    return;
}


// ===== sym.get_ufs_qcom_phy.cfi_jt @ 0x080012a0 (size 8) =====

ulong sym.get_ufs_qcom_phy.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x98);
}


// ===== sym.ufs_qcom_phy_generic_probe.cfi_jt @ 0x080012a8 (size 8) =====

uint64_t sym.ufs_qcom_phy_generic_probe.cfi_jt
                   (int64_t param_1,int64_t param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
                   ulong param_7,ulong param_8)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    iVar5 = param_1 + 0x10;
    iStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    iStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar2 = platform_get_resource_byname(param_1,0x200,"phy_mem");
    uVar3 = devm_ioremap_resource(iVar5,uVar2);
    *(param_2 + 0x18) = uVar3;
    if (uVar3 < 0xfffffffffffff001) {
code_r0x080017e0:
        uVar3 = __devm_of_phy_provider_register(iVar5,0,obj.__this_module,sym.of_phy_simple_xlate.cfi_jt);
        if (uVar3 < 0xfffffffffffff001) {
            uVar3 = devm_phy_create(iVar5,0,param_3);
            if (uVar3 < 0xfffffffffffff001) {
                iVar1 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x300),"lanes-per-direction",param_2 + 0x140,1,0);
                if (iVar1 < 0) {
                    *(param_2 + 0x140) = 1;
                }
                pm_runtime_no_callbacks(uVar3);
                *(param_2 + 0x180) = param_4;
                *(param_2 + 0x10) = iVar5;
                uVar4 = msm_minidump_enabled();
                if ((uVar4 & 1) != 0) {
                    scnprintf(&uStack_78,0xd,"UFS_QC_PHY");
                    iVar5 = (param_2 << 8) >> 8;
                    uVar4 = iVar5 + 0x8000000000;
                    iStack_58 = _of_phy_simple_xlate + uVar4;
                    if (uVar4 >> 0x26 != 0) {
                        iStack_58 = iVar5 - _of_find_node_opts_by_path;
                    }
                    uStack_50 = 0x1a8;
                    iStack_60 = param_2;
                    iVar1 = msm_minidump_add_region(&uStack_78);
                    if (iVar1 < 0) {
                        _printk(0x8000a35,iVar1);
                    }
                }
                *(param_2 + 0x198) = param_2 + 0x198;
                *(param_2 + 0x1a0) = param_2 + 0x198;
                goto code_r0x080018cc;
            }
            pcVar6 = "%s: failed to create phy %d\n";
            uVar3 = uVar3 & 0xffffffff;
        }
        else {
            pcVar6 = "%s: failed to register phy %d\n";
        }
    }
    else {
        *(param_2 + 0x18) = 0;
        _dev_err(iVar5,"%s: ioremap for phy_mem resource failed %d\n","ufs_qcom_phy_base_init",uVar3 & 0xffffffff);
        if (uVar3 == 0) goto code_r0x080017e0;
        pcVar6 = "%s: phy base init failed %d\n";
        uVar3 = uVar3 & 0xffffffff;
    }
    _dev_err(iVar5,pcVar6,"ufs_qcom_phy_generic_probe",uVar3);
    uVar3 = 0;
code_r0x080018cc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.ufs_qcom_phy_get_reset;
    if (*(iVar5 + 400) == 0) {
        uVar3 = __devm_reset_control_get
                          (*(iVar5 + 0x10),0,0,0,0,1,param_7,param_8,&stack0xffffffffffffffc0,
                           sym.ufs_qcom_phy_get_reset,param_2);
        if (0xfffffffffffff000 < uVar3) {
            return uVar3;
        }
        *(iVar5 + 400) = uVar3;
    }
    return 0;
}


// ===== sym.ufs_qcom_phy_calibrate.cfi_jt @ 0x080012b0 (size 8) =====

int sym.ufs_qcom_phy_calibrate.cfi_jt
              (int64_t param_1,int64_t param_2,uint32_t param_3,int64_t param_4,uint32_t param_5,uint32_t param_6)

{
    int iVar1;
    char *pcVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong uVar4;
    code *pcVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(param_1 + 0x10);
    uVar7 = param_3;
    iVar1 = reset_control_assert(*(param_1 + 400));
    if (iVar1 != 0) {
        _dev_err(uVar4,"Failed to assert UFS PHY reset %d\n",iVar1);
        return iVar1;
    }
    if (param_2 == 0) {
        pcVar2 = "%s: tbl_A is NULL\n";
code_r0x08001720:
        _dev_err(uVar4,pcVar2,"ufs_qcom_phy_calibrate");
        iVar1 = 0x16;
    }
    else {
        if (0 < param_3) {
            puVar6 = param_2 + 4;
            do {
                sym.writel_relaxed(*puVar6,*(param_1 + 0x18) + puVar6[-1]);
                uVar7 = uVar7 - 1;
                puVar6 = puVar6 + 2;
            } while (uVar7 != 0);
        }
        if ((param_6 & 1) != 0) {
            if (param_4 == 0) {
                pcVar2 = "%s: tbl_B is NULL\n";
                goto code_r0x08001720;
            }
            if (0 < param_5) {
                uVar7 = param_5;
                puVar6 = param_4 + 4;
                do {
                    sym.writel_relaxed(*puVar6,*(param_1 + 0x18) + puVar6[-1]);
                    uVar7 = uVar7 - 1;
                    puVar6 = puVar6 + 2;
                } while (uVar7 != 0);
            }
        }
        DataSynchronizationBarrier(3,3,0);
        iVar1 = reset_control_deassert(*(param_1 + 400));
        if (iVar1 != 0) {
            _dev_err(uVar4,"Failed to deassert UFS PHY reset %d\n",iVar1);
        }
        pcVar5 = *(*(param_1 + 0x180) + 8);
        if (pcVar5 == NULL) {
            uVar4 = *(param_1 + 0x10);
            pcVar2 = "%s: start_serdes() callback is not supported\n";
            pcVar3 = "ufs_qcom_phy_start_serdes";
        }
        else {
            __cfi_slowpath_diag(0xd74da2d751e5868b,pcVar5,0x8000280);
            (*pcVar5)(param_1);
            pcVar5 = *(*(param_1 + 0x180) + 0x10);
            if (pcVar5 != NULL) {
                if (2 < (pcVar5 + -0x80012f0 >> 3 | pcVar5 << 0x3d)) {
                    __cfi_slowpath_diag(0x91237e2cc6d2a945,pcVar5,0x80002a0);
                }
                iVar1 = (*pcVar5)(param_1);
                return iVar1;
            }
            uVar4 = *(param_1 + 0x10);
            pcVar2 = "%s: is_physical_coding_sublayer_ready() callback is not supported\n";
            pcVar3 = "ufs_qcom_phy_is_pcs_ready";
        }
        _dev_err(uVar4,pcVar2,pcVar3);
        iVar1 = -0x5f;
    }
    return iVar1;
}


// ===== sym.ufs_qcom_phy_set_src_clk_h8_exit.cfi_jt @ 0x080012b8 (size 8) =====

void sym.ufs_qcom_phy_set_src_clk_h8_exit.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if ((((*(iVar1 + 0x68) != 0) && (*(iVar1 + 0x70) != 0)) && (*(iVar1 + 0x78) != 0)) &&
       (((*(iVar1 + 0x80) != 0 && (*(iVar1 + 0x88) != 0)) && (*(iVar1 + 0x90) != 0)))) {
        clk_set_parent();
        clk_set_parent(*(iVar1 + 0x70),*(iVar1 + 0x88));
        clk_set_parent(*(iVar1 + 0x78),*(iVar1 + 0x90));
    }
    return;
}


// ===== sym.ufs_qcom_phy_dbg_register_dump.cfi_jt @ 0x080012c0 (size 8) =====

void sym.ufs_qcom_phy_dbg_register_dump.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    pcVar2 = *(*(iVar1 + 0x180) + 0x30);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0xd74da2d751e5868b,pcVar2,0x8000240);
        (*pcVar2)(iVar1);
    }
    return;
}


// ===== sym.ufs_qcom_phy_dbg_register_save.cfi_jt @ 0x080012c8 (size 8) =====

void sym.ufs_qcom_phy_dbg_register_save.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    pcVar2 = *(*(iVar1 + 0x180) + 0x38);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0xd74da2d751e5868b,pcVar2,0x8000260);
        (*pcVar2)(iVar1);
    }
    return;
}


// ===== sym.ufs_qcom_phy_set_src_clk_h8_enter.cfi_jt @ 0x080012d0 (size 8) =====

void sym.ufs_qcom_phy_set_src_clk_h8_enter.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if ((((*(iVar1 + 0x68) != 0) && (*(iVar1 + 0x70) != 0)) && (*(iVar1 + 0x78) != 0)) && (*(iVar1 + 0x40) != 0)) {
        clk_set_parent();
        clk_set_parent(*(iVar1 + 0x70),*(iVar1 + 0x40));
        clk_set_parent(*(iVar1 + 0x78),*(iVar1 + 0x40));
    }
    return;
}


// ===== sym.ufs_qcom_phy_set_tx_lane_enable.cfi_jt @ 0x080012d8 (size 8) =====

void sym.ufs_qcom_phy_set_tx_lane_enable.cfi_jt(int64_t param_1,uint param_2)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    pcVar2 = *(*(iVar1 + 0x180) + 0x18);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0x2a6ae6abaabab82a,pcVar2,0x80001c0);
        (*pcVar2)(iVar1,param_2);
    }
    return;
}


// ===== sym.ufs_qcom_phy_power_on.cfi_jt @ 0x080012e0 (size 8) =====

int sym.ufs_qcom_phy_power_on.cfi_jt(int64_t param_1)

{
    ulong *arg2;
    ulong *arg2_00;
    int iVar1;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1;
    int64_t arg1_00;
    code *pcVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(param_1 + 0x98);
    arg1 = *(arg1_00 + 0x10);
    if ((*(arg1_00 + 0x108) != 0 && arg1_00 + 0x100 != 0) && (*(arg1_00 + 0x11c) == '\0')) {
        iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1,arg1_00 + 0x100,1);
        if (iVar1 == 0) {
            iVar1 = regulator_enable(*(arg1_00 + 0x108));
            if (iVar1 == 0) {
                *(arg1_00 + 0x11c) = 1;
                iVar4 = *(arg1_00 + 0x128);
                goto joined_r0x08002138;
            }
            pcVar3 = "%s: enable failed, err=%d\n";
        }
        else {
            pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
        }
        _dev_err(arg1,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
        pcVar3 = "%s enable phy_gdsc failed, err=%d\n";
        goto code_r0x080026ac;
    }
    iVar4 = *(arg1_00 + 0x128);
joined_r0x08002138:
    if (((iVar4 != 0) && (arg1_00 + 0x120 != 0)) && (*(arg1_00 + 0x13c) == '\0')) {
        iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1,arg1_00 + 0x120,1);
        if (iVar1 == 0) {
            iVar1 = regulator_enable(*(arg1_00 + 0x128));
            if (iVar1 == 0) {
                *(arg1_00 + 0x13c) = 1;
                goto code_r0x0800213c;
            }
            pcVar3 = "%s: enable failed, err=%d\n";
        }
        else {
            pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
        }
        _dev_err(arg1,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
        pcVar3 = "%s enable vdda_qref failed, err=%d\n";
        goto code_r0x080026ac;
    }
code_r0x0800213c:
    arg2 = arg1_00 + 0xc0;
    if ((arg2 != NULL) && (*(arg1_00 + 0xdc) == '\0')) {
        iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1,arg2,1);
        if (iVar1 == 0) {
            iVar1 = regulator_enable(*(arg1_00 + 200));
            if (iVar1 == 0) {
                *(arg1_00 + 0xdc) = 1;
                goto code_r0x08002174;
            }
            pcVar3 = "%s: enable failed, err=%d\n";
        }
        else {
            pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
        }
        _dev_err(arg1,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
        pcVar3 = "%s enable vdda_phy failed, err=%d\n";
code_r0x080026ac:
        _dev_err(arg1,pcVar3,"ufs_qcom_phy_power_on",iVar1);
        return iVar1;
    }
code_r0x08002174:
    pcVar5 = *(*(arg1_00 + 0x180) + 0x20);
    __cfi_slowpath_diag(0x13ab0b68aedb5b17,pcVar5,0x80001e0);
    (*pcVar5)(arg1_00,1);
    arg2_00 = arg1_00 + 0xa0;
    if ((arg2_00 != NULL) && (*(arg1_00 + 0xbc) == '\0')) {
        iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1,arg2_00,1);
        if (iVar1 == 0) {
            iVar1 = regulator_enable(*(arg1_00 + 0xa8));
            if (iVar1 == 0) {
                *(arg1_00 + 0xbc) = 1;
                if (*(arg1_00 + 0x38) == '\0') goto code_r0x080021c0;
                goto code_r0x08002238;
            }
            pcVar3 = "%s: enable failed, err=%d\n";
        }
        else {
            pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
        }
        _dev_err(arg1,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
        _dev_err(arg1,"%s enable vdda_pll failed, err=%d\n","ufs_qcom_phy_power_on",iVar1);
        goto joined_r0x08002764;
    }
    if (*(arg1_00 + 0x38) == '\0') {
code_r0x080021c0:
        iVar4 = *(arg1_00 + 0x28);
        if (iVar4 == 0) goto code_r0x08002238;
        iVar1 = clk_prepare(iVar4);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar4);
            if (iVar1 != 0) {
                clk_unprepare(iVar4);
                goto code_r0x08002438;
            }
            uVar6 = *(arg1_00 + 0x30);
            iVar1 = clk_prepare(uVar6);
            if (iVar1 == 0) {
                iVar1 = clk_enable(uVar6);
                if (iVar1 == 0) {
                    *(arg1_00 + 0x38) = 1;
                    goto code_r0x08002238;
                }
                clk_unprepare(uVar6);
            }
            uVar6 = *(arg1_00 + 0x28);
            clk_disable(uVar6);
            clk_unprepare(uVar6);
            uVar6 = *(arg1_00 + 0x10);
            pcVar3 = "%s: rx_iface_clk enable failed %d. disabling also tx_iface_clk\n";
        }
        else {
code_r0x08002438:
            uVar6 = *(arg1_00 + 0x10);
            pcVar3 = "%s: tx_iface_clk enable failed %d\n";
        }
        _dev_err(uVar6,pcVar3,"ufs_qcom_phy_enable_iface_clk",iVar1);
        _dev_err(arg1,"%s enable phy iface clock failed, err=%d\n","ufs_qcom_phy_power_on",iVar1);
    }
    else {
code_r0x08002238:
        if (*(arg1_00 + 0x98) == '\0') {
            iVar4 = *(arg1_00 + 0x60);
            if (((iVar4 != 0) && (iVar1 = clk_prepare(iVar4), iVar1 == 0)) && (iVar1 = clk_enable(iVar4), iVar1 != 0))
            {
                clk_unprepare(iVar4);
            }
            uVar6 = *(arg1_00 + 0x40);
            iVar1 = clk_prepare(uVar6);
            if (iVar1 == 0) {
                iVar1 = clk_enable(uVar6);
                if (iVar1 != 0) {
                    clk_unprepare(uVar6);
                    goto code_r0x08002374;
                }
                iVar4 = *(arg1_00 + 0x48);
                if (iVar4 == 0) {
code_r0x080022b0:
                    iVar4 = *(arg1_00 + 0x50);
                    if (iVar4 == 0) {
code_r0x080022d0:
                        iVar4 = *(arg1_00 + 0x58);
                        if (iVar4 == 0) {
code_r0x080022f0:
                            *(arg1_00 + 0x98) = 1;
                            iVar4 = *(arg1_00 + 0xe8);
                            goto joined_r0x08002244;
                        }
                        iVar1 = clk_prepare(iVar4);
                        if (iVar1 == 0) {
                            iVar1 = clk_enable(iVar4);
                            if (iVar1 == 0) goto code_r0x080022f0;
                            clk_unprepare(iVar4);
                        }
                        _dev_err(*(arg1_00 + 0x10),"%s: ref_aux_clk enable failed %d\n","ufs_qcom_phy_enable_ref_clk"
                                 ,iVar1);
                        iVar4 = *(arg1_00 + 0x50);
                        if (iVar4 != 0) {
                            clk_disable(iVar4);
                            clk_unprepare(iVar4);
                        }
                    }
                    else {
                        iVar1 = clk_prepare(iVar4);
                        if (iVar1 == 0) {
                            iVar1 = clk_enable(iVar4);
                            if (iVar1 == 0) goto code_r0x080022d0;
                            clk_unprepare(iVar4);
                        }
                        _dev_err(*(arg1_00 + 0x10),"%s: ref_clk enable failed %d\n","ufs_qcom_phy_enable_ref_clk",
                                 iVar1);
                    }
                    iVar4 = *(arg1_00 + 0x48);
                    if (iVar4 != 0) {
                        clk_disable(iVar4);
                        clk_unprepare(iVar4);
                    }
                }
                else {
                    iVar1 = clk_prepare(iVar4);
                    if (iVar1 == 0) {
                        iVar1 = clk_enable(iVar4);
                        if (iVar1 == 0) goto code_r0x080022b0;
                        clk_unprepare(iVar4);
                    }
                    _dev_err(*(arg1_00 + 0x10),"%s: ref_clk_parent enable failed %d\n","ufs_qcom_phy_enable_ref_clk",
                             iVar1);
                }
                uVar6 = *(arg1_00 + 0x40);
                clk_disable(uVar6);
                clk_unprepare(uVar6);
            }
            else {
code_r0x08002374:
                _dev_err(*(arg1_00 + 0x10),"%s: ref_clk_src enable failed %d\n","ufs_qcom_phy_enable_ref_clk",iVar1);
            }
            _dev_err(arg1,"%s enable phy ref clock failed, err=%d\n","ufs_qcom_phy_power_on",iVar1);
            iVar4 = *(arg1_00 + 0x28);
        }
        else {
            iVar4 = *(arg1_00 + 0xe8);
joined_r0x08002244:
            if (((iVar4 == 0) || (arg1_00 + 0xe0 == 0)) || (*(arg1_00 + 0xfc) != '\0')) {
                return 0;
            }
            iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1,arg1_00 + 0xe0,1);
            if (iVar1 == 0) {
                iVar1 = regulator_enable(*(arg1_00 + 0xe8));
                if (iVar1 == 0) {
                    *(arg1_00 + 0xfc) = 1;
                    return 0;
                }
                pcVar3 = "%s: enable failed, err=%d\n";
            }
            else {
                pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
            }
            _dev_err(arg1,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
            _dev_err(arg1,"%s enable vddp_ref_clk failed, err=%d\n","ufs_qcom_phy_power_on",iVar1);
            sym.ufs_qcom_phy_disable_ref_clk(arg1_00);
            iVar4 = *(arg1_00 + 0x28);
        }
        if ((iVar4 != 0) && (*(arg1_00 + 0x38) != '\0')) {
            clk_disable(iVar4);
            clk_unprepare(iVar4);
            uVar6 = *(arg1_00 + 0x30);
            clk_disable(uVar6);
            clk_unprepare(uVar6);
            *(arg1_00 + 0x38) = 0;
        }
    }
    if ((arg2_00 != NULL) && (*(arg1_00 + 0xbc) != '\0')) {
        iVar2 = regulator_disable(*(arg1_00 + 0xa8));
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(arg1,arg2_00,0);
            *(arg1_00 + 0xbc) = 0;
        }
        else {
            _dev_err(arg1,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*arg2_00,iVar2);
        }
    }
joined_r0x08002764:
    if (arg2 == NULL) {
        return iVar1;
    }
    if (*(arg1_00 + 0xdc) == '\0') {
        return iVar1;
    }
    iVar2 = regulator_disable(*(arg1_00 + 200));
    if (iVar2 == 0) {
        sym.ufs_qcom_phy_cfg_vreg(arg1,arg2,0);
        *(arg1_00 + 0xdc) = 0;
        return iVar1;
    }
    _dev_err(arg1,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*arg2,iVar2);
    return iVar1;
}


// ===== sym.ufs_qcom_phy_power_off.cfi_jt @ 0x080012e8 (size 8) =====

ulong sym.ufs_qcom_phy_power_off.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1;
    code *pcVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    pcVar3 = *(*(arg1 + 0x180) + 0x20);
    __cfi_slowpath_diag(0x13ab0b68aedb5b17,pcVar3,0x8000200);
    (*pcVar3)(arg1,0);
    if (((*(arg1 + 0xe8) != 0) && (puVar1 = arg1 + 0xe0, puVar1 != NULL)) && (*(arg1 + 0xfc) != '\0')) {
        iVar5 = *(arg1 + 0x10);
        iVar2 = regulator_disable();
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(iVar5,puVar1,0);
            *(arg1 + 0xfc) = 0;
        }
        else {
            _dev_err(iVar5,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*puVar1,iVar2);
        }
    }
    sym.ufs_qcom_phy_disable_ref_clk(arg1);
    iVar5 = *(arg1 + 0x28);
    if ((iVar5 != 0) && (*(arg1 + 0x38) != '\0')) {
        clk_disable(iVar5);
        clk_unprepare(iVar5);
        uVar4 = *(arg1 + 0x30);
        clk_disable(uVar4);
        clk_unprepare(uVar4);
        *(arg1 + 0x38) = 0;
    }
    puVar1 = arg1 + 0xa0;
    if ((puVar1 != NULL) && (*(arg1 + 0xbc) != '\0')) {
        iVar5 = *(arg1 + 0x10);
        iVar2 = regulator_disable(*(arg1 + 0xa8));
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(iVar5,puVar1,0);
            *(arg1 + 0xbc) = 0;
        }
        else {
            _dev_err(iVar5,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*puVar1,iVar2);
        }
    }
    if ((arg1 != -0xc0) && (*(arg1 + 0xdc) != '\0')) {
        iVar5 = *(arg1 + 0x10);
        iVar2 = regulator_disable(*(arg1 + 200));
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(iVar5,arg1 + 0xc0,0);
            *(arg1 + 0xdc) = 0;
        }
        else {
            _dev_err(iVar5,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*(arg1 + 0xc0),iVar2);
        }
    }
    if (((*(arg1 + 0x128) != 0) && (puVar1 = arg1 + 0x120, puVar1 != NULL)) && (*(arg1 + 0x13c) != '\0')) {
        iVar5 = *(arg1 + 0x10);
        iVar2 = regulator_disable();
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(iVar5,puVar1,0);
            *(arg1 + 0x13c) = 0;
        }
        else {
            _dev_err(iVar5,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*puVar1,iVar2);
        }
    }
    return 0;
}


// ===== sym.__typeid__ZTSFiP12ufs_qcom_phyE_global_addr @ 0x080012f0 (size 8) =====

ulong sym.__typeid__ZTSFiP12ufs_qcom_phyE_global_addr(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.ufs_qcom_phy_init_vreg(*(param_1 + 0x10),param_1 + 0xa0,0x800093f);
    if ((uVar1 == 0) && (uVar1 = sym.ufs_qcom_phy_init_vreg(*(param_1 + 0x10),param_1 + 0xc0,0x80002eb), uVar1 == 0))
    {
        sym.ufs_qcom_phy_init_vreg(*(param_1 + 0x10),param_1 + 0xe0,0x80003b6);
        sym.ufs_qcom_phy_init_vreg(*(param_1 + 0x10),param_1 + 0x100,0x8000676);
        sym.ufs_qcom_phy_init_vreg(*(param_1 + 0x10),param_1 + 0x120,0x80009a6);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.ufs_qcom_phy_get_reset.cfi_jt @ 0x080012f8 (size 8) =====

uint64_t sym.ufs_qcom_phy_get_reset.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 400) == 0) {
        uVar1 = __devm_reset_control_get(*(param_1 + 0x10),0,0,0,0,1);
        if (0xfffffffffffff000 < uVar1) {
            return uVar1;
        }
        *(param_1 + 400) = uVar1;
    }
    return 0;
}


// ===== sym.ufs_qcom_phy_init_clks.cfi_jt @ 0x08001300 (size 8) =====

uint64_t sym.ufs_qcom_phy_init_clks.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_device_is_compatible(*(*(param_1 + 0x10) + 0x2f0),"qcom,msm8996-ufs-phy-qmp-14nm");
    if (iVar1 == 0) {
        uVar2 = devm_clk_get(*(param_1 + 0x10),"tx_iface_clk");
        if (uVar2 < 0xfffffffffffff001) {
            *(param_1 + 0x28) = uVar2;
        }
        uVar2 = devm_clk_get(*(param_1 + 0x10),"rx_iface_clk");
        if (uVar2 < 0xfffffffffffff001) {
            *(param_1 + 0x30) = uVar2;
        }
    }
    uVar3 = *(param_1 + 0x10);
    uVar2 = devm_clk_get(uVar3,"ref_clk_src");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x40) = uVar2;
    }
    else {
        _dev_err(uVar3,"failed get %s, %d\n","ref_clk_src",uVar2 & 0xffffffff);
        if (uVar2 != 0) goto code_r0x08001bfc;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"ref_clk_parent");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x48) = uVar2;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"ref_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x50) = uVar2;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"ref_aux_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x58) = uVar2;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"qref_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x60) = uVar2;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"rx_sym0_mux_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x68) = uVar2;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"rx_sym1_mux_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x70) = uVar2;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"tx_sym0_mux_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x78) = uVar2;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"rx_sym0_phy_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x80) = uVar2;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"rx_sym1_phy_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x88) = uVar2;
    }
    uVar2 = devm_clk_get(*(param_1 + 0x10),"tx_sym0_phy_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(param_1 + 0x90) = uVar2;
    }
    if ((((*(param_1 + 0x68) == 0) || (*(param_1 + 0x70) == 0)) || (*(param_1 + 0x78) == 0)) ||
       (((*(param_1 + 0x40) == 0 || (*(param_1 + 0x80) == 0)) || ((*(param_1 + 0x88) == 0 || (*(param_1 + 0x90) == 0))))
       )) {
        _dev_err(*(param_1 + 0x10),"%s: null clock\n","ufs_qcom_phy_init_clks");
    }
    uVar2 = 0;
code_r0x08001bfc:
    return uVar2 & 0xffffffff;
}


// ===== sym.of_phy_simple_xlate.cfi_jt @ 0x08001308 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.of_phy_simple_xlate.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ufs_qcom_phy_write_tbl.cfi_jt @ 0x08001310 (size 8) =====

void sym.ufs_qcom_phy_write_tbl.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    uint64_t uVar1;
    uint32_t *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < param_3) {
        uVar1 = param_3;
        puVar2 = param_2 + 4;
        do {
            sym.writel_relaxed(*puVar2,*(param_1 + 0x18) + puVar2[-1]);
            uVar1 = uVar1 - 1;
            puVar2 = puVar2 + 2;
        } while (uVar1 != 0);
    }
    return;
}


// ===== sym.ufs_qcom_phy_dump_regs.cfi_jt @ 0x08001318 (size 8) =====

ulong sym.ufs_qcom_phy_dump_regs.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t param_3,ulong param_4)

{
    uint uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_3 | param_2) & 3) == 0) {
        uVar4 = param_3;
        iVar3 = __kmalloc(uVar4,0xdc0);
        if (iVar3 == 0) {
            uVar2 = 0xfffffff4;
        }
        else {
            if (param_3 != 0) {
                uVar5 = 0;
                do {
                    uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + param_2 + uVar5);
                    *(iVar3 + uVar5) = uVar1;
                    uVar5 = uVar5 + 4;
                } while (uVar5 < uVar4);
            }
            print_hex_dump(0x80008a2,param_4,(4 < param_3) << 1,0x10,4,iVar3,uVar4,0);
            kfree(iVar3);
            uVar2 = 0;
        }
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.ufs_qcom_phy_save_regs.cfi_jt @ 0x08001320 (size 8) =====

ulong sym.ufs_qcom_phy_save_regs.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t param_3,int64_t param_4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint uVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_3 | param_2) & 3) == 0) {
        piVar1 = param_1 + 0x198;
        for (piVar9 = *piVar1; piVar9 != piVar1; piVar9 = *piVar9) {
            if ((piVar9[2] != 0) && (iVar4 = strcmp(piVar9[2],param_4), iVar4 == 0)) goto code_r0x08002d7c;
        }
        iVar3 = sp_el0;
        uVar2 = *(iVar3 + 0x3c) & 0x80000;
        *(iVar3 + 0x3c) = *(iVar3 + 0x3c) | 0x80000;
        piVar9 = devm_kmalloc(*(param_1 + 0x10),0x28,0xb20);
        if (piVar9 != NULL) {
            iVar7 = devm_kmalloc(*(param_1 + 0x10),param_3,0xb20);
            piVar9[3] = iVar7;
            if (iVar7 != 0) {
                *(iVar3 + 0x3c) = *(iVar3 + 0x3c) & 0xfff7ffff | uVar2;
                puVar10 = *(param_1 + 0x1a0);
                piVar9[2] = param_4;
                piVar9[4] = param_3;
                uVar8 = __list_add_valid(piVar9,puVar10,piVar1);
                if ((uVar8 & 1) != 0) {
                    *(param_1 + 0x1a0) = piVar9;
                    *piVar9 = piVar1;
                    piVar9[1] = puVar10;
                    *puVar10 = piVar9;
                }
code_r0x08002d7c:
                if (param_3 != 0) {
                    uVar8 = 0;
                    do {
                        uVar5 = sym.readl_relaxed(*(param_1 + 0x18) + param_2 + uVar8);
                        *(piVar9[3] + uVar8) = uVar5;
                        uVar8 = uVar8 + 4;
                    } while (uVar8 < param_3);
                }
                return 0;
            }
        }
        uVar6 = 0xfffffff4;
        *(iVar3 + 0x3c) = *(iVar3 + 0x3c) & 0xfff7ffff | uVar2;
    }
    else {
        uVar6 = 0xffffffea;
    }
    return uVar6;
}


// ===== sym.ebuffphyha_value_u32 @ 0x08001328 (size 116) =====

bool sym.ebuffphyha_value_u32(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x80001b0 == '\0') || (iVar2 = strncmp(0x8000198,arg1,0x18), iVar2 != 0)) {
        bVar1 = false;
    }
    else {
        *arg2 = *0x80001b4;
        bVar1 = *0x80001b0 != '\0';
    }
    return bVar1;
}


// ===== sym.of_obtain_ebuffphyha_info @ 0x0800139c (size 232) =====

void sym.of_obtain_ebuffphyha_info(ulong param_1,ulong param_2,uint32_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    uint32_t *puVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_34;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_30 = 0;
    uStack_34 = 0;
    iVar3 = of_find_node_opts_by_path("/memory/ebuff",0);
    if (iVar3 != 0) {
        param_3 = &iStack_30;
        iVar2 = of_property_read_string(iVar3,"REFCLKALWAYSON");
        if ((iVar2 == 0) && (iStack_30 != 0)) {
            iVar2 = kstrtouint(iStack_30,0,&uStack_34);
            param_3 = _segment.ehdr;
            if (iVar2 == 0) {
                *0x80001b4 = uStack_34;
                *0x80001b0 = 1;
                param_3 = uStack_34;
            }
            _printk(0x80004f8,"REFCLKALWAYSON");
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail(iVar3 != 0);
        *extraout_x18 = sym.ufs_qcom_phy_write_tbl;
        if (0 < param_3) {
            uVar4 = param_3;
            puVar5 = auVar6._8_8_ + 4;
            do {
                sym.writel_relaxed(*puVar5,*(auVar6._0_8_ + 0x18) + puVar5[-1]);
                uVar4 = uVar4 - 1;
                puVar5 = puVar5 + 2;
            } while (uVar4 != 0);
        }
        return;
    }
    return;
}


// ===== sym.ufs_qcom_phy_write_tbl @ 0x08001484 (size 96) =====

void sym.ufs_qcom_phy_write_tbl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    uint64_t uVar1;
    uint32_t *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < arg3) {
        uVar1 = arg3 & 0xffffffff;
        puVar2 = arg2 + 4;
        do {
            sym.writel_relaxed(*puVar2,*(arg1 + 0x18) + puVar2[-1]);
            uVar1 = uVar1 - 1;
            puVar2 = puVar2 + 2;
        } while (uVar1 != 0);
    }
    return;
}


// ===== sym.writel_relaxed @ 0x080014e4 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001500);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001528);
    return;
}


// ===== sym.ufs_qcom_phy_calibrate @ 0x0800155c (size 512) =====

int sym.ufs_qcom_phy_calibrate(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    char *pcVar2;
    char *pcVar3;
    uint32_t in_w4;
    uint32_t in_w5;
    ulong *in_x18;
    ulong uVar4;
    code *pcVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(arg1 + 0x10);
    uVar7 = arg3 & 0xffffffff;
    iVar1 = reset_control_assert(*(arg1 + 400));
    if (iVar1 != 0) {
        _dev_err(uVar4,"Failed to assert UFS PHY reset %d\n",iVar1);
        return iVar1;
    }
    if (arg2 == 0) {
        pcVar2 = "%s: tbl_A is NULL\n";
code_r0x08001720:
        _dev_err(uVar4,pcVar2,"ufs_qcom_phy_calibrate");
        iVar1 = 0x16;
    }
    else {
        if (0 < arg3) {
            puVar6 = arg2 + 4;
            do {
                sym.writel_relaxed(*puVar6,*(arg1 + 0x18) + puVar6[-1]);
                uVar7 = uVar7 - 1;
                puVar6 = puVar6 + 2;
            } while (uVar7 != 0);
        }
        if ((in_w5 & 1) != 0) {
            if (arg4 == 0) {
                pcVar2 = "%s: tbl_B is NULL\n";
                goto code_r0x08001720;
            }
            if (0 < in_w4) {
                uVar7 = in_w4;
                puVar6 = arg4 + 4;
                do {
                    sym.writel_relaxed(*puVar6,*(arg1 + 0x18) + puVar6[-1]);
                    uVar7 = uVar7 - 1;
                    puVar6 = puVar6 + 2;
                } while (uVar7 != 0);
            }
        }
        DataSynchronizationBarrier(3,3,0);
        iVar1 = reset_control_deassert(*(arg1 + 400));
        if (iVar1 != 0) {
            _dev_err(uVar4,"Failed to deassert UFS PHY reset %d\n",iVar1);
        }
        pcVar5 = *(*(arg1 + 0x180) + 8);
        if (pcVar5 == NULL) {
            uVar4 = *(arg1 + 0x10);
            pcVar2 = "%s: start_serdes() callback is not supported\n";
            pcVar3 = "ufs_qcom_phy_start_serdes";
        }
        else {
            __cfi_slowpath_diag(0xd74da2d751e5868b,pcVar5,0x8000280);
            (*pcVar5)(arg1);
            pcVar5 = *(*(arg1 + 0x180) + 0x10);
            if (pcVar5 != NULL) {
                if (2 < (pcVar5 + -0x80012f0 >> 3 | pcVar5 << 0x3d)) {
                    __cfi_slowpath_diag(0x91237e2cc6d2a945,pcVar5,0x80002a0);
                }
                iVar1 = (*pcVar5)(arg1);
                return iVar1;
            }
            uVar4 = *(arg1 + 0x10);
            pcVar2 = "%s: is_physical_coding_sublayer_ready() callback is not supported\n";
            pcVar3 = "ufs_qcom_phy_is_pcs_ready";
        }
        _dev_err(uVar4,pcVar2,pcVar3);
        iVar1 = -0x5f;
    }
    return iVar1;
}


// ===== sym.get_ufs_qcom_phy @ 0x0800175c (size 16) =====

ulong sym.get_ufs_qcom_phy(int64_t arg1)

{
    return *(arg1 + 0x98);
}


// ===== sym.ufs_qcom_phy_generic_probe @ 0x0800176c (size 564) =====

uint64_t sym.ufs_qcom_phy_generic_probe(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong in_x6;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    iVar5 = arg1 + 0x10;
    iStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    iStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar2 = platform_get_resource_byname(arg1,0x200,"phy_mem");
    uVar3 = devm_ioremap_resource(iVar5,uVar2);
    *(arg2 + 0x18) = uVar3;
    if (uVar3 < 0xfffffffffffff001) {
code_r0x080017e0:
        uVar3 = __devm_of_phy_provider_register(iVar5,0,obj.__this_module,sym.of_phy_simple_xlate.cfi_jt);
        if (uVar3 < 0xfffffffffffff001) {
            uVar3 = devm_phy_create(iVar5,0,arg3);
            if (uVar3 < 0xfffffffffffff001) {
                iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"lanes-per-direction",arg2 + 0x140,1,0);
                if (iVar1 < 0) {
                    *(arg2 + 0x140) = 1;
                }
                pm_runtime_no_callbacks(uVar3);
                *(arg2 + 0x180) = arg4;
                *(arg2 + 0x10) = iVar5;
                uVar4 = msm_minidump_enabled();
                if ((uVar4 & 1) != 0) {
                    scnprintf(&uStack_78,0xd,"UFS_QC_PHY");
                    iVar5 = (arg2 << 8) >> 8;
                    uVar4 = iVar5 + 0x8000000000;
                    iStack_58 = _of_phy_simple_xlate + uVar4;
                    if (uVar4 >> 0x26 != 0) {
                        iStack_58 = iVar5 - _of_find_node_opts_by_path;
                    }
                    uStack_50 = 0x1a8;
                    iStack_60 = arg2;
                    iVar1 = msm_minidump_add_region(&uStack_78);
                    if (iVar1 < 0) {
                        _printk(0x8000a35,iVar1);
                    }
                }
                *(arg2 + 0x198) = arg2 + 0x198;
                *(arg2 + 0x1a0) = arg2 + 0x198;
                goto code_r0x080018cc;
            }
            pcVar6 = "%s: failed to create phy %d\n";
            uVar3 = uVar3 & 0xffffffff;
        }
        else {
            pcVar6 = "%s: failed to register phy %d\n";
        }
    }
    else {
        *(arg2 + 0x18) = 0;
        _dev_err(iVar5,"%s: ioremap for phy_mem resource failed %d\n","ufs_qcom_phy_base_init",uVar3 & 0xffffffff);
        if (uVar3 == 0) goto code_r0x080017e0;
        pcVar6 = "%s: phy base init failed %d\n";
        uVar3 = uVar3 & 0xffffffff;
    }
    _dev_err(iVar5,pcVar6,"ufs_qcom_phy_generic_probe",uVar3);
    uVar3 = 0;
code_r0x080018cc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.ufs_qcom_phy_get_reset;
    if (*(iVar5 + 400) == 0) {
        uVar3 = __devm_reset_control_get
                          (*(iVar5 + 0x10),0,0,0,0,1,in_x6,in_x7,&stack0xffffffffffffffc0,
                           sym.ufs_qcom_phy_get_reset,arg2);
        if (0xfffffffffffff000 < uVar3) {
            return uVar3;
        }
        *(iVar5 + 400) = uVar3;
    }
    return 0;
}


// ===== sym.ufs_qcom_phy_get_reset @ 0x080019a0 (size 96) =====

uint64_t sym.ufs_qcom_phy_get_reset(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 400) == 0) {
        uVar1 = __devm_reset_control_get(*(arg1 + 0x10),0,0,0,0,1);
        if (0xfffffffffffff000 < uVar1) {
            return uVar1;
        }
        *(arg1 + 400) = uVar1;
    }
    return 0;
}


// ===== sym.ufs_qcom_phy_init_clks @ 0x08001a00 (size 572) =====

uint64_t sym.ufs_qcom_phy_init_clks(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_device_is_compatible(*(*(arg1 + 0x10) + 0x2f0),"qcom,msm8996-ufs-phy-qmp-14nm");
    if (iVar1 == 0) {
        uVar2 = devm_clk_get(*(arg1 + 0x10),"tx_iface_clk");
        if (uVar2 < 0xfffffffffffff001) {
            *(arg1 + 0x28) = uVar2;
        }
        uVar2 = devm_clk_get(*(arg1 + 0x10),"rx_iface_clk");
        if (uVar2 < 0xfffffffffffff001) {
            *(arg1 + 0x30) = uVar2;
        }
    }
    uVar3 = *(arg1 + 0x10);
    uVar2 = devm_clk_get(uVar3,"ref_clk_src");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x40) = uVar2;
    }
    else {
        _dev_err(uVar3,"failed get %s, %d\n","ref_clk_src",uVar2 & 0xffffffff);
        if (uVar2 != 0) goto code_r0x08001bfc;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"ref_clk_parent");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x48) = uVar2;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"ref_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x50) = uVar2;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"ref_aux_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x58) = uVar2;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"qref_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x60) = uVar2;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"rx_sym0_mux_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x68) = uVar2;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"rx_sym1_mux_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x70) = uVar2;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"tx_sym0_mux_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x78) = uVar2;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"rx_sym0_phy_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x80) = uVar2;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"rx_sym1_phy_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x88) = uVar2;
    }
    uVar2 = devm_clk_get(*(arg1 + 0x10),"tx_sym0_phy_clk");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x90) = uVar2;
    }
    if ((((*(arg1 + 0x68) == 0) || (*(arg1 + 0x70) == 0)) || (*(arg1 + 0x78) == 0)) ||
       (((*(arg1 + 0x40) == 0 || (*(arg1 + 0x80) == 0)) || ((*(arg1 + 0x88) == 0 || (*(arg1 + 0x90) == 0)))))) {
        _dev_err(*(arg1 + 0x10),"%s: null clock\n","ufs_qcom_phy_init_clks");
    }
    uVar2 = 0;
code_r0x08001bfc:
    return uVar2 & 0xffffffff;
}


// ===== sym.ufs_qcom_phy_init_vregulators @ 0x08001c3c (size 156) =====

ulong sym.ufs_qcom_phy_init_vregulators(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.ufs_qcom_phy_init_vreg(*(arg1 + 0x10),arg1 + 0xa0,0x800093f);
    if ((uVar1 == 0) && (uVar1 = sym.ufs_qcom_phy_init_vreg(*(arg1 + 0x10),arg1 + 0xc0,0x80002eb), uVar1 == 0)) {
        sym.ufs_qcom_phy_init_vreg(*(arg1 + 0x10),arg1 + 0xe0,0x80003b6);
        sym.ufs_qcom_phy_init_vreg(*(arg1 + 0x10),arg1 + 0x100,0x8000676);
        sym.ufs_qcom_phy_init_vreg(*(arg1 + 0x10),arg1 + 0x120,0x80009a6);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.ufs_qcom_phy_init_vreg @ 0x08001cd8 (size 588) =====

uint64_t sym.ufs_qcom_phy_init_vreg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if (*(arg1 + 0x2f0) != 0) {
        snprintf(&uStack_68,0x20,"%s-supply",arg3);
        iVar4 = of_parse_phandle(*(arg1 + 0x2f0),&uStack_68,0);
        if (iVar4 == 0) {
            uVar5 = 0xffffffc3;
            goto code_r0x08001ea4;
        }
    }
    *arg2 = arg3;
    uVar5 = devm_regulator_get(arg1,arg3);
    *(arg2 + 8) = uVar5;
    if (0xfffffffffffff000 < uVar5) {
        _dev_err(arg1,"failed to get %s, %d\n",arg3,uVar5 & 0xffffffff);
        goto code_r0x08001ea4;
    }
    if (*(arg1 + 0x2f0) != 0) {
        snprintf(&uStack_68,0x20,"%s-max-microamp",arg3);
        uVar2 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),&uStack_68,arg2 + 0x10,1,0);
        uVar1 = uVar2 & uVar2 >> 0x1f;
        if (uVar1 == 0xffffffea) {
            if ((*(arg2 + 0x10) != 0) && (iVar3 = regulator_count_voltages(*(arg2 + 8)), 0 < iVar3)) {
                _dev_err(arg1,"%s: %s is mandatory\n","ufs_qcom_phy_init_vreg",&uStack_68);
                uVar5 = 0xffffffea;
                goto code_r0x08001ea4;
            }
        }
        else if (uVar1 != 0) {
            uVar5 = uVar2;
            _dev_err(arg1,"%s: failed to read %s\n","ufs_qcom_phy_init_vreg",&uStack_68);
            goto code_r0x08001ea4;
        }
    }
    iVar3 = strcmp(arg3,"vdda-pll");
    if (iVar3 == 0) {
        uVar6 = 0x1b774000124f80;
    }
    else {
        iVar3 = strcmp(arg3,"vdda-phy");
        if (iVar3 == 0) {
            uVar6 = 0xe1d48000d6d80;
        }
        else {
            iVar3 = strcmp(arg3,"vddp-ref-clk");
            if (iVar3 == 0) {
                uVar6 = 0x124f8000124f80;
            }
            else {
                iVar3 = strcmp(arg3,"vdda-qref");
                if (iVar3 != 0) {
                    uVar5 = 0;
                    goto code_r0x08001ea4;
                }
                uVar6 = 0xdea80000d6d80;
            }
        }
    }
    uVar5 = 0;
    *(arg2 + 0x14) = uVar6;
code_r0x08001ea4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar5 & 0xffffffff;
    }
    auVar8 = __stack_chk_fail();
    uVar5 = auVar8._0_8_;
    *extraout_x18 = sym.ufs_qcom_phy_set_tx_lane_enable;
    iVar4 = *(uVar5 + 0x98);
    pcVar7 = *(*(iVar4 + 0x180) + 0x18);
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0x2a6ae6abaabab82a,pcVar7,0x80001c0);
        uVar5 = (*pcVar7)(iVar4,auVar8._8_8_ & 0xffffffff);
    }
    return uVar5;
}


// ===== sym.ufs_qcom_phy_set_tx_lane_enable @ 0x08001f24 (size 112) =====

void sym.ufs_qcom_phy_set_tx_lane_enable(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    pcVar2 = *(*(iVar1 + 0x180) + 0x18);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0x2a6ae6abaabab82a,pcVar2,0x80001c0);
        (*pcVar2)(iVar1,arg2 & 0xffffffff);
    }
    return;
}


// ===== sym.ufs_qcom_phy_save_controller_version @ 0x08001f94 (size 28) =====

void sym.ufs_qcom_phy_save_controller_version(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0x98);
    *(iVar1 + 0x148) = arg2;
    *(iVar1 + 0x14a) = arg3;
    *(iVar1 + 0x14c) = arg4;
    return;
}


// ===== sym.ufs_qcom_phy_set_src_clk_h8_enter @ 0x08001fb0 (size 104) =====

void sym.ufs_qcom_phy_set_src_clk_h8_enter(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if ((((*(iVar1 + 0x68) != 0) && (*(iVar1 + 0x70) != 0)) && (*(iVar1 + 0x78) != 0)) && (*(iVar1 + 0x40) != 0)) {
        clk_set_parent();
        clk_set_parent(*(iVar1 + 0x70),*(iVar1 + 0x40));
        clk_set_parent(*(iVar1 + 0x78),*(iVar1 + 0x40));
    }
    return;
}


// ===== sym.ufs_qcom_phy_set_src_clk_h8_exit @ 0x08002018 (size 120) =====

void sym.ufs_qcom_phy_set_src_clk_h8_exit(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if ((((*(iVar1 + 0x68) != 0) && (*(iVar1 + 0x70) != 0)) && (*(iVar1 + 0x78) != 0)) &&
       (((*(iVar1 + 0x80) != 0 && (*(iVar1 + 0x88) != 0)) && (*(iVar1 + 0x90) != 0)))) {
        clk_set_parent();
        clk_set_parent(*(iVar1 + 0x70),*(iVar1 + 0x88));
        clk_set_parent(*(iVar1 + 0x78),*(iVar1 + 0x90));
    }
    return;
}


// ===== sym.ufs_qcom_phy_power_on @ 0x08002090 (size 1756) =====

int sym.ufs_qcom_phy_power_on(int64_t arg1)

{
    ulong *arg2;
    ulong *arg2_00;
    int iVar1;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t arg1_01;
    code *pcVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_01 = *(arg1 + 0x98);
    arg1_00 = *(arg1_01 + 0x10);
    if ((*(arg1_01 + 0x108) != 0 && arg1_01 + 0x100 != 0) && (*(arg1_01 + 0x11c) == '\0')) {
        iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1_00,arg1_01 + 0x100,1);
        if (iVar1 == 0) {
            iVar1 = regulator_enable(*(arg1_01 + 0x108));
            if (iVar1 == 0) {
                *(arg1_01 + 0x11c) = 1;
                iVar4 = *(arg1_01 + 0x128);
                goto joined_r0x08002138;
            }
            pcVar3 = "%s: enable failed, err=%d\n";
        }
        else {
            pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
        }
        _dev_err(arg1_00,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
        pcVar3 = "%s enable phy_gdsc failed, err=%d\n";
        goto code_r0x080026ac;
    }
    iVar4 = *(arg1_01 + 0x128);
joined_r0x08002138:
    if (((iVar4 != 0) && (arg1_01 + 0x120 != 0)) && (*(arg1_01 + 0x13c) == '\0')) {
        iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1_00,arg1_01 + 0x120,1);
        if (iVar1 == 0) {
            iVar1 = regulator_enable(*(arg1_01 + 0x128));
            if (iVar1 == 0) {
                *(arg1_01 + 0x13c) = 1;
                goto code_r0x0800213c;
            }
            pcVar3 = "%s: enable failed, err=%d\n";
        }
        else {
            pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
        }
        _dev_err(arg1_00,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
        pcVar3 = "%s enable vdda_qref failed, err=%d\n";
        goto code_r0x080026ac;
    }
code_r0x0800213c:
    arg2 = arg1_01 + 0xc0;
    if ((arg2 != NULL) && (*(arg1_01 + 0xdc) == '\0')) {
        iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1_00,arg2,1);
        if (iVar1 == 0) {
            iVar1 = regulator_enable(*(arg1_01 + 200));
            if (iVar1 == 0) {
                *(arg1_01 + 0xdc) = 1;
                goto code_r0x08002174;
            }
            pcVar3 = "%s: enable failed, err=%d\n";
        }
        else {
            pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
        }
        _dev_err(arg1_00,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
        pcVar3 = "%s enable vdda_phy failed, err=%d\n";
code_r0x080026ac:
        _dev_err(arg1_00,pcVar3,"ufs_qcom_phy_power_on",iVar1);
        return iVar1;
    }
code_r0x08002174:
    pcVar5 = *(*(arg1_01 + 0x180) + 0x20);
    __cfi_slowpath_diag(0x13ab0b68aedb5b17,pcVar5,0x80001e0);
    (*pcVar5)(arg1_01,1);
    arg2_00 = arg1_01 + 0xa0;
    if ((arg2_00 != NULL) && (*(arg1_01 + 0xbc) == '\0')) {
        iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1_00,arg2_00,1);
        if (iVar1 == 0) {
            iVar1 = regulator_enable(*(arg1_01 + 0xa8));
            if (iVar1 == 0) {
                *(arg1_01 + 0xbc) = 1;
                if (*(arg1_01 + 0x38) == '\0') goto code_r0x080021c0;
                goto code_r0x08002238;
            }
            pcVar3 = "%s: enable failed, err=%d\n";
        }
        else {
            pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
        }
        _dev_err(arg1_00,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
        _dev_err(arg1_00,"%s enable vdda_pll failed, err=%d\n","ufs_qcom_phy_power_on",iVar1);
        goto joined_r0x08002764;
    }
    if (*(arg1_01 + 0x38) == '\0') {
code_r0x080021c0:
        iVar4 = *(arg1_01 + 0x28);
        if (iVar4 == 0) goto code_r0x08002238;
        iVar1 = clk_prepare(iVar4);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar4);
            if (iVar1 != 0) {
                clk_unprepare(iVar4);
                goto code_r0x08002438;
            }
            uVar6 = *(arg1_01 + 0x30);
            iVar1 = clk_prepare(uVar6);
            if (iVar1 == 0) {
                iVar1 = clk_enable(uVar6);
                if (iVar1 == 0) {
                    *(arg1_01 + 0x38) = 1;
                    goto code_r0x08002238;
                }
                clk_unprepare(uVar6);
            }
            uVar6 = *(arg1_01 + 0x28);
            clk_disable(uVar6);
            clk_unprepare(uVar6);
            uVar6 = *(arg1_01 + 0x10);
            pcVar3 = "%s: rx_iface_clk enable failed %d. disabling also tx_iface_clk\n";
        }
        else {
code_r0x08002438:
            uVar6 = *(arg1_01 + 0x10);
            pcVar3 = "%s: tx_iface_clk enable failed %d\n";
        }
        _dev_err(uVar6,pcVar3,"ufs_qcom_phy_enable_iface_clk",iVar1);
        _dev_err(arg1_00,"%s enable phy iface clock failed, err=%d\n","ufs_qcom_phy_power_on",iVar1);
    }
    else {
code_r0x08002238:
        if (*(arg1_01 + 0x98) == '\0') {
            iVar4 = *(arg1_01 + 0x60);
            if (((iVar4 != 0) && (iVar1 = clk_prepare(iVar4), iVar1 == 0)) && (iVar1 = clk_enable(iVar4), iVar1 != 0))
            {
                clk_unprepare(iVar4);
            }
            uVar6 = *(arg1_01 + 0x40);
            iVar1 = clk_prepare(uVar6);
            if (iVar1 == 0) {
                iVar1 = clk_enable(uVar6);
                if (iVar1 != 0) {
                    clk_unprepare(uVar6);
                    goto code_r0x08002374;
                }
                iVar4 = *(arg1_01 + 0x48);
                if (iVar4 == 0) {
code_r0x080022b0:
                    iVar4 = *(arg1_01 + 0x50);
                    if (iVar4 == 0) {
code_r0x080022d0:
                        iVar4 = *(arg1_01 + 0x58);
                        if (iVar4 == 0) {
code_r0x080022f0:
                            *(arg1_01 + 0x98) = 1;
                            iVar4 = *(arg1_01 + 0xe8);
                            goto joined_r0x08002244;
                        }
                        iVar1 = clk_prepare(iVar4);
                        if (iVar1 == 0) {
                            iVar1 = clk_enable(iVar4);
                            if (iVar1 == 0) goto code_r0x080022f0;
                            clk_unprepare(iVar4);
                        }
                        _dev_err(*(arg1_01 + 0x10),"%s: ref_aux_clk enable failed %d\n","ufs_qcom_phy_enable_ref_clk"
                                 ,iVar1);
                        iVar4 = *(arg1_01 + 0x50);
                        if (iVar4 != 0) {
                            clk_disable(iVar4);
                            clk_unprepare(iVar4);
                        }
                    }
                    else {
                        iVar1 = clk_prepare(iVar4);
                        if (iVar1 == 0) {
                            iVar1 = clk_enable(iVar4);
                            if (iVar1 == 0) goto code_r0x080022d0;
                            clk_unprepare(iVar4);
                        }
                        _dev_err(*(arg1_01 + 0x10),"%s: ref_clk enable failed %d\n","ufs_qcom_phy_enable_ref_clk",
                                 iVar1);
                    }
                    iVar4 = *(arg1_01 + 0x48);
                    if (iVar4 != 0) {
                        clk_disable(iVar4);
                        clk_unprepare(iVar4);
                    }
                }
                else {
                    iVar1 = clk_prepare(iVar4);
                    if (iVar1 == 0) {
                        iVar1 = clk_enable(iVar4);
                        if (iVar1 == 0) goto code_r0x080022b0;
                        clk_unprepare(iVar4);
                    }
                    _dev_err(*(arg1_01 + 0x10),"%s: ref_clk_parent enable failed %d\n","ufs_qcom_phy_enable_ref_clk",
                             iVar1);
                }
                uVar6 = *(arg1_01 + 0x40);
                clk_disable(uVar6);
                clk_unprepare(uVar6);
            }
            else {
code_r0x08002374:
                _dev_err(*(arg1_01 + 0x10),"%s: ref_clk_src enable failed %d\n","ufs_qcom_phy_enable_ref_clk",iVar1);
            }
            _dev_err(arg1_00,"%s enable phy ref clock failed, err=%d\n","ufs_qcom_phy_power_on",iVar1);
            iVar4 = *(arg1_01 + 0x28);
        }
        else {
            iVar4 = *(arg1_01 + 0xe8);
joined_r0x08002244:
            if (((iVar4 == 0) || (arg1_01 + 0xe0 == 0)) || (*(arg1_01 + 0xfc) != '\0')) {
                return 0;
            }
            iVar1 = sym.ufs_qcom_phy_cfg_vreg(arg1_00,arg1_01 + 0xe0,1);
            if (iVar1 == 0) {
                iVar1 = regulator_enable(*(arg1_01 + 0xe8));
                if (iVar1 == 0) {
                    *(arg1_01 + 0xfc) = 1;
                    return 0;
                }
                pcVar3 = "%s: enable failed, err=%d\n";
            }
            else {
                pcVar3 = "%s: ufs_qcom_phy_cfg_vreg() failed, err=%d\n";
            }
            _dev_err(arg1_00,pcVar3,"ufs_qcom_phy_enable_vreg",iVar1);
            _dev_err(arg1_00,"%s enable vddp_ref_clk failed, err=%d\n","ufs_qcom_phy_power_on",iVar1);
            sym.ufs_qcom_phy_disable_ref_clk(arg1_01);
            iVar4 = *(arg1_01 + 0x28);
        }
        if ((iVar4 != 0) && (*(arg1_01 + 0x38) != '\0')) {
            clk_disable(iVar4);
            clk_unprepare(iVar4);
            uVar6 = *(arg1_01 + 0x30);
            clk_disable(uVar6);
            clk_unprepare(uVar6);
            *(arg1_01 + 0x38) = 0;
        }
    }
    if ((arg2_00 != NULL) && (*(arg1_01 + 0xbc) != '\0')) {
        iVar2 = regulator_disable(*(arg1_01 + 0xa8));
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(arg1_00,arg2_00,0);
            *(arg1_01 + 0xbc) = 0;
        }
        else {
            _dev_err(arg1_00,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*arg2_00,iVar2);
        }
    }
joined_r0x08002764:
    if (arg2 == NULL) {
        return iVar1;
    }
    if (*(arg1_01 + 0xdc) == '\0') {
        return iVar1;
    }
    iVar2 = regulator_disable(*(arg1_01 + 200));
    if (iVar2 == 0) {
        sym.ufs_qcom_phy_cfg_vreg(arg1_00,arg2,0);
        *(arg1_01 + 0xdc) = 0;
        return iVar1;
    }
    _dev_err(arg1_00,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*arg2,iVar2);
    return iVar1;
}


// ===== sym.ufs_qcom_phy_disable_ref_clk @ 0x0800276c (size 292) =====

void sym.ufs_qcom_phy_disable_ref_clk(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x80001b0 == '\0') ||
       ((*0x8000198 != 0x5f6b6c635f666572 || *0x80001a0 != 0x6f5f737961776c61) || *0x80001a8 != 0x6e)) {
        if (*(arg1 + 0x98) != '\0') {
            iVar1 = *(arg1 + 0x58);
            if (iVar1 != 0) {
                clk_disable(iVar1);
                clk_unprepare(iVar1);
            }
            iVar1 = *(arg1 + 0x50);
            if (iVar1 != 0) {
                clk_disable(iVar1);
                clk_unprepare(iVar1);
            }
            iVar1 = *(arg1 + 0x48);
            if (iVar1 != 0) {
                clk_disable(iVar1);
                clk_unprepare(iVar1);
            }
            uVar2 = *(arg1 + 0x40);
            clk_disable(uVar2);
            clk_unprepare(uVar2);
            iVar1 = *(arg1 + 0x60);
            if (iVar1 != 0) {
                clk_disable(iVar1);
                clk_unprepare(iVar1);
            }
            *(arg1 + 0x98) = 0;
        }
    }
    else {
        _printk(0x8000780,"ufs_qcom_phy_disable_ref_clk",_segment.ehdr);
    }
    return;
}


// ===== sym.ufs_qcom_phy_power_off @ 0x08002890 (size 540) =====

ulong sym.ufs_qcom_phy_power_off(int64_t arg1)

{
    ulong *puVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    code *pcVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    pcVar3 = *(*(arg1_00 + 0x180) + 0x20);
    __cfi_slowpath_diag(0x13ab0b68aedb5b17,pcVar3,0x8000200);
    (*pcVar3)(arg1_00,0);
    if (((*(arg1_00 + 0xe8) != 0) && (puVar1 = arg1_00 + 0xe0, puVar1 != NULL)) && (*(arg1_00 + 0xfc) != '\0')) {
        iVar5 = *(arg1_00 + 0x10);
        iVar2 = regulator_disable();
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(iVar5,puVar1,0);
            *(arg1_00 + 0xfc) = 0;
        }
        else {
            _dev_err(iVar5,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*puVar1,iVar2);
        }
    }
    sym.ufs_qcom_phy_disable_ref_clk(arg1_00);
    iVar5 = *(arg1_00 + 0x28);
    if ((iVar5 != 0) && (*(arg1_00 + 0x38) != '\0')) {
        clk_disable(iVar5);
        clk_unprepare(iVar5);
        uVar4 = *(arg1_00 + 0x30);
        clk_disable(uVar4);
        clk_unprepare(uVar4);
        *(arg1_00 + 0x38) = 0;
    }
    puVar1 = arg1_00 + 0xa0;
    if ((puVar1 != NULL) && (*(arg1_00 + 0xbc) != '\0')) {
        iVar5 = *(arg1_00 + 0x10);
        iVar2 = regulator_disable(*(arg1_00 + 0xa8));
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(iVar5,puVar1,0);
            *(arg1_00 + 0xbc) = 0;
        }
        else {
            _dev_err(iVar5,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*puVar1,iVar2);
        }
    }
    if ((arg1_00 != -0xc0) && (*(arg1_00 + 0xdc) != '\0')) {
        iVar5 = *(arg1_00 + 0x10);
        iVar2 = regulator_disable(*(arg1_00 + 200));
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(iVar5,arg1_00 + 0xc0,0);
            *(arg1_00 + 0xdc) = 0;
        }
        else {
            _dev_err(iVar5,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*(arg1_00 + 0xc0),iVar2);
        }
    }
    if (((*(arg1_00 + 0x128) != 0) && (puVar1 = arg1_00 + 0x120, puVar1 != NULL)) && (*(arg1_00 + 0x13c) != '\0')) {
        iVar5 = *(arg1_00 + 0x10);
        iVar2 = regulator_disable();
        if (iVar2 == 0) {
            sym.ufs_qcom_phy_cfg_vreg(iVar5,puVar1,0);
            *(arg1_00 + 0x13c) = 0;
        }
        else {
            _dev_err(iVar5,"%s: %s disable failed, err=%d\n","ufs_qcom_phy_disable_vreg",*puVar1,iVar2);
        }
    }
    return 0;
}


// ===== sym.ufs_qcom_phy_ctrl_rx_linecfg @ 0x08002aac (size 112) =====

void sym.ufs_qcom_phy_ctrl_rx_linecfg(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    pcVar2 = *(*(iVar1 + 0x180) + 0x28);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0x13ab0b68aedb5b17,pcVar2,0x8000220);
        (*pcVar2)(iVar1,arg2 & 1);
    }
    return;
}


// ===== sym.ufs_qcom_phy_dump_regs @ 0x08002b1c (size 236) =====

ulong sym.ufs_qcom_phy_dump_regs(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg3;
    if (((uVar4 | arg2) & 3) == 0) {
        uVar5 = uVar4;
        iVar3 = __kmalloc(uVar5,0xdc0);
        if (iVar3 == 0) {
            uVar2 = 0xfffffff4;
        }
        else {
            if (uVar4 != 0) {
                uVar6 = 0;
                do {
                    uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + arg2 + uVar6);
                    *(iVar3 + uVar6) = uVar1;
                    uVar6 = uVar6 + 4;
                } while (uVar6 < uVar5);
            }
            print_hex_dump(0x80008a2,arg4,(4 < uVar4) << 1,0x10,4,iVar3,uVar5,0);
            kfree(iVar3);
            uVar2 = 0;
        }
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.readl_relaxed @ 0x08002c08 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002c0c);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8002c40);
    return uVar1;
}


// ===== sym.ufs_qcom_phy_save_regs @ 0x08002c78 (size 372) =====

ulong sym.ufs_qcom_phy_save_regs(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t *piVar10;
    ulong *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = arg3;
    if (((uVar8 | arg2) & 3) == 0) {
        piVar1 = arg1 + 0x198;
        for (piVar10 = *piVar1; piVar10 != piVar1; piVar10 = *piVar10) {
            if ((piVar10[2] != 0) && (iVar4 = strcmp(piVar10[2],arg4), iVar4 == 0)) goto code_r0x08002d7c;
        }
        iVar3 = sp_el0;
        uVar2 = *(iVar3 + 0x3c) & 0x80000;
        *(iVar3 + 0x3c) = *(iVar3 + 0x3c) | 0x80000;
        piVar10 = devm_kmalloc(*(arg1 + 0x10),0x28,0xb20);
        if (piVar10 != NULL) {
            iVar7 = devm_kmalloc(*(arg1 + 0x10),uVar8,0xb20);
            piVar10[3] = iVar7;
            if (iVar7 != 0) {
                *(iVar3 + 0x3c) = *(iVar3 + 0x3c) & 0xfff7ffff | uVar2;
                puVar11 = *(arg1 + 0x1a0);
                piVar10[2] = arg4;
                piVar10[4] = uVar8;
                uVar9 = __list_add_valid(piVar10,puVar11,piVar1);
                if ((uVar9 & 1) != 0) {
                    *(arg1 + 0x1a0) = piVar10;
                    *piVar10 = piVar1;
                    piVar10[1] = puVar11;
                    *puVar11 = piVar10;
                }
code_r0x08002d7c:
                if (uVar8 != 0) {
                    uVar9 = 0;
                    do {
                        uVar5 = sym.readl_relaxed(*(arg1 + 0x18) + arg2 + uVar9);
                        *(piVar10[3] + uVar9) = uVar5;
                        uVar9 = uVar9 + 4;
                    } while (uVar9 < uVar8);
                }
                return 0;
            }
        }
        uVar6 = 0xfffffff4;
        *(iVar3 + 0x3c) = *(iVar3 + 0x3c) & 0xfff7ffff | uVar2;
    }
    else {
        uVar6 = 0xffffffea;
    }
    return uVar6;
}


// ===== sym.ufs_qcom_phy_dbg_register_dump @ 0x08002dec (size 96) =====

void sym.ufs_qcom_phy_dbg_register_dump(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    pcVar2 = *(*(iVar1 + 0x180) + 0x30);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0xd74da2d751e5868b,pcVar2,0x8000240);
        (*pcVar2)(iVar1);
    }
    return;
}


// ===== sym.ufs_qcom_phy_dbg_register_save @ 0x08002e4c (size 96) =====

void sym.ufs_qcom_phy_dbg_register_save(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    pcVar2 = *(*(iVar1 + 0x180) + 0x38);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0xd74da2d751e5868b,pcVar2,0x8000260);
        (*pcVar2)(iVar1);
    }
    return;
}


// ===== sym.ufs_qcom_phy_cfg_vreg @ 0x08002eac (size 248) =====

int sym.ufs_qcom_phy_cfg_vreg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    int iVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *arg2;
    uVar2 = *(arg2 + 8);
    iVar3 = regulator_count_voltages(uVar2);
    if (0 < iVar3) {
        if ((arg3 & 1U) == 0) {
            iVar3 = regulator_set_voltage(uVar2,0,*(arg2 + 0x18));
            uVar4 = 0;
            if (iVar3 != 0) goto code_r0x08002f50;
        }
        else {
            iVar3 = regulator_set_voltage(uVar2,*(arg2 + 0x14),*(arg2 + 0x18));
            if (iVar3 != 0) {
code_r0x08002f50:
                _dev_err(arg1,"%s: %s set voltage failed, err=%d\n","ufs_qcom_phy_cfg_vreg",uVar1,iVar3);
                return iVar3;
            }
            uVar4 = *(arg2 + 0x10);
        }
        iVar3 = regulator_set_load(uVar2,uVar4);
        if (iVar3 < 0) {
            _dev_err(arg1,"%s: %s set optimum mode(uA_load=%d) failed, err=%d\n","ufs_qcom_phy_cfg_vreg",uVar1,uVar4
                     ,iVar3);
            return iVar3;
        }
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08002fa4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002fe8

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
    //switch table (4 cases) at 0x80002c0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002ffc);
    (*pcVar1)();
}

