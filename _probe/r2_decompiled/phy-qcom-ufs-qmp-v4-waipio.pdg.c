// decompiled from phy-qcom-ufs-qmp-v4-waipio by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 452) =====

//WARNING: Switch with 1 destination removed at 0x08001a18

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
                pcVar2 = sym.ufs_qcom_phy_qmp_v4_is_pcs_ready.e324ed93a50f944c7b770e9964aec00c.cfi_jt;
            }
            else {
                if (arg1 != -0x455404aa44fc3e9e) goto code_r0x080019d8;
                pcVar2 = sym.ufs_qcom_phy_qmp_v4_set_mode.e324ed93a50f944c7b770e9964aec00c.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) {
                if (arg1 != -0x28b25d28ae1a7975) goto code_r0x080019d8;
                pcVar2 = sym.ufs_qcom_phy_qmp_v4_start_serdes.e324ed93a50f944c7b770e9964aec00c.cfi_jt;
                goto code_r0x08001160;
            }
            pcVar2 = sym.ufs_qcom_phy_qmp_v4_probe.e324ed93a50f944c7b770e9964aec00c.cfi_jt;
        }
    }
    else if (arg1 < 0x2a6ae6abaabab82a) {
        if (arg1 != 0x2b3a43e29242445) {
            if (arg1 != 0x13ab0b68aedb5b17) goto code_r0x080019d8;
            pcVar2 = sym.ufs_qcom_phy_qmp_v4_ctrl_rx_linecfg.e324ed93a50f944c7b770e9964aec00c.cfi_jt;
code_r0x08001160:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080019d8;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x2a6ae6abaabab82a) {
        pcVar2 = sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable.e324ed93a50f944c7b770e9964aec00c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) {
            if ((arg1 == 0x7fd06733b9cd884f) && ((pcVar1 + -0x8001220 >> 3 | pcVar1 << 0x3d) < 5)) {
                return;
            }
            goto code_r0x080019d8;
        }
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080019d8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001a2c);
    (*pcVar1)();
}


// ===== sym.ufs_qcom_phy_qmp_v4_is_pcs_ready.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x080011d0 (size 8) =====

uint sym.ufs_qcom_phy_qmp_v4_is_pcs_ready.e324ed93a50f944c7b770e9964aec00c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ktime_get();
    uVar2 = sym.readl(*(param_1 + 0x18) + 0xd80);
    if ((uVar2 & 1) == 0) {
        do {
            iVar3 = ktime_get();
            if (iVar1 + 1000000000 < iVar3) {
                uVar2 = sym.readl(*(param_1 + 0x18) + 0xd80);
                break;
            }
            usleep_range_state(3,10,2);
            uVar2 = sym.readl(*(param_1 + 0x18) + 0xd80);
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


// ===== sym.cleanup_module.cfi_jt @ 0x080011d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ufs_qcom_phy_qmp_v4_probe.e324ed93a50f944c7b770e9964aec00c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011e0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.ufs_qcom_phy_qmp_v4_probe.e324ed93a50f944c7b770e9964aec00c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_set_mode.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.ufs_qcom_phy_qmp_v4_set_mode.e324ed93a50f944c7b770e9964aec00c.cfi_jt
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


// ===== sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x080011f0 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable.e324ed93a50f944c7b770e9964aec00c.cfi_jt(void)

{
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_ctrl_rx_linecfg.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x080011f8 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_ctrl_rx_linecfg.e324ed93a50f944c7b770e9964aec00c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0xd48);
    uVar2 = 0;
    if ((param_2 & 1) == 0) {
        uVar2 = 2;
    }
    sym.writel_relaxed(uVar1 & 0xfffffffd | uVar2,*(param_1 + 0x18) + 0xd48);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_power_control.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x08001200 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_power_control.e324ed93a50f944c7b770e9964aec00c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 1) == 0) {
        sym.writel_relaxed(0,*(param_1 + 0x18) + 0xc04);
        DataSynchronizationBarrier(3,3,0);
        uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0x734);
        sym.writel_relaxed(uVar1 | 0x20,*(param_1 + 0x18) + 0x734);
        if (*(param_1 + 0x140) != 1) {
            uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0xb34);
            sym.writel_relaxed(uVar1 | 0x20,*(param_1 + 0x18) + 0xb34);
        }
        DataSynchronizationBarrier(3,3,0);
    }
    else {
        uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0x734);
        sym.writel_relaxed(uVar1 & 0xffffffdf,*(param_1 + 0x18) + 0x734);
        if (*(param_1 + 0x140) != 1) {
            uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0xb34);
            sym.writel_relaxed(uVar1 & 0xffffffdf,*(param_1 + 0x18) + 0xb34);
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*(param_1 + 0x18) + 0xc04);
        DataSynchronizationBarrier(3,3,0);
    }
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_probe.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.ufs_qcom_phy_qmp_v4_probe.e324ed93a50f944c7b770e9964aec00c.cfi_jt(int64_t param_1)

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
                          (param_1,iVar1,reloc.ufs_qcom_phy_qmp_v4_init.e324ed93a50f944c7b770e9964aec00c.cfi_jt,
                           obj.phy_v4_ops);
        if (iVar2 == 0) {
            _dev_err(param_1 + 0x10,"%s: ufs_qcom_phy_generic_probe() failed\n","ufs_qcom_phy_qmp_v4_probe");
            uVar3 = 0xfffffffb;
        }
        else {
            *(iVar2 + 0x98) = iVar1;
            strlcpy(iVar1 + 0x14e,"ufs_phy_qmp_v4_waipio",0x1e);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.ufs_qcom_phy_qmp_v4_start_serdes.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x08001210 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_start_serdes.e324ed93a50f944c7b770e9964aec00c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0xc00);
    sym.writel_relaxed(uVar1 | 1,*(param_1 + 0x18) + 0xc00);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_dbg_register_dump.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x08001218 (size 8) =====

void sym.ufs_qcom_phy_qmp_v4_dbg_register_dump.e324ed93a50f944c7b770e9964aec00c.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ufs_qcom_phy_dump_regs(param_1,0,0x1c0,"PHY QSERDES COM Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x200,0x40,"PHY PCS2 Registers ");
    ufs_qcom_phy_dump_regs(param_1,0xc00,0x200,"PHY Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x600,0x200,"PHY RX0 Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x400,0x188,"PHY TX0 Registers ");
    ufs_qcom_phy_dump_regs(param_1,0xa00,0x200,"PHY RX1 Registers ");
    ufs_qcom_phy_dump_regs(param_1,0x800,0x188,"PHY TX1 Registers ");
    return;
}


// ===== sym.ufs_qcom_phy_power_on.cfi_jt @ 0x08001220 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.ufs_qcom_phy_power_on.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ufs_qcom_phy_qmp_v4_exit.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.ufs_qcom_phy_qmp_v4_exit.e324ed93a50f944c7b770e9964aec00c.cfi_jt(void)

{
    return 0;
}


// ===== sym.ufs_qcom_phy_power_off.cfi_jt @ 0x08001230 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.ufs_qcom_phy_power_off.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ufs_qcom_phy_qmp_v4_init.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x08001238 (size 8) =====

int sym.ufs_qcom_phy_qmp_v4_init.e324ed93a50f944c7b770e9964aec00c.cfi_jt(int64_t param_1)

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


// ===== sym.ufs_qcom_phy_qmp_v4_phy_calibrate.e324ed93a50f944c7b770e9964aec00c.cfi_jt @ 0x08001240 (size 8) =====

int sym.ufs_qcom_phy_qmp_v4_phy_calibrate.e324ed93a50f944c7b770e9964aec00c.cfi_jt(void)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t arg1;
    code *pcVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = get_ufs_qcom_phy();
    uVar6 = *(arg1 + 0x10);
    iVar2 = reset_control_assert(*(arg1 + 400));
    if (iVar2 != 0) {
        pcVar5 = "Failed to assert UFS PHY reset %d\n";
        goto code_r0x0800152c;
    }
    iVar2 = *(arg1 + 0x18c);
    iVar1 = *(arg1 + 0x188);
    sym.writel_relaxed(1,*(arg1 + 0x18) + 0xc08);
    DataSynchronizationBarrier(3,2,0);
    if (iVar2 == 0) {
        ufs_qcom_phy_write_tbl(arg1,obj.phy_cal_table_rate_A_no_g4,0x55);
        if (*(arg1 + 0x140) == 2) {
            pcVar4 = obj.phy_cal_table_2nd_lane_no_g4;
            goto code_r0x08001480;
        }
    }
    else {
        ufs_qcom_phy_write_tbl(arg1,obj.phy_cal_table_rate_A,0x4f);
        if (*(arg1 + 0x140) == 2) {
            pcVar4 = obj.phy_cal_table_2nd_lane;
code_r0x08001480:
            ufs_qcom_phy_write_tbl(arg1,pcVar4,0x2f);
        }
    }
    if (iVar1 == 0xd) {
        ufs_qcom_phy_write_tbl(arg1,obj.phy_cal_table_rate_B,1);
    }
    sym.writel_relaxed(0,*(arg1 + 0x18) + 0xc08);
    DataSynchronizationBarrier(3,2,0);
    iVar2 = reset_control_deassert(*(arg1 + 400));
    if (iVar2 == 0) {
        uVar3 = sym.readl_relaxed(*(arg1 + 0x18) + 0xc00);
        sym.writel_relaxed(uVar3 | 1,*(arg1 + 0x18) + 0xc00);
        DataSynchronizationBarrier(3,3,0);
        iVar2 = sym.ufs_qcom_phy_qmp_v4_is_pcs_ready(arg1);
        return iVar2;
    }
    pcVar5 = "Failed to deassert UFS PHY reset %d\n";
code_r0x0800152c:
    _dev_err(uVar6,pcVar5,iVar2);
    return iVar2;
}


// ===== sym.ufs_qcom_phy_qmp_v4_probe @ 0x08001248 (size 184) =====

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
                          (arg1,iVar1,reloc.ufs_qcom_phy_qmp_v4_init.e324ed93a50f944c7b770e9964aec00c.cfi_jt,
                           obj.phy_v4_ops);
        if (iVar2 == 0) {
            _dev_err(arg1 + 0x10,"%s: ufs_qcom_phy_generic_probe() failed\n","ufs_qcom_phy_qmp_v4_probe");
            uVar3 = 0xfffffffb;
        }
        else {
            *(iVar2 + 0x98) = iVar1;
            strlcpy(iVar1 + 0x14e,"ufs_phy_qmp_v4_waipio",0x1e);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.ufs_qcom_phy_qmp_v4_init @ 0x08001300 (size 136) =====

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


// ===== sym.ufs_qcom_phy_qmp_v4_exit @ 0x08001388 (size 16) =====

ulong sym.ufs_qcom_phy_qmp_v4_exit(int64_t arg1)

{
    return 0;
}


// ===== sym.ufs_qcom_phy_qmp_v4_set_mode @ 0x08001398 (size 68) =====

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


// ===== sym.ufs_qcom_phy_qmp_v4_phy_calibrate @ 0x080013dc (size 352) =====

int sym.ufs_qcom_phy_qmp_v4_phy_calibrate(void)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t arg1;
    code *pcVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = get_ufs_qcom_phy();
    uVar6 = *(arg1 + 0x10);
    iVar2 = reset_control_assert(*(arg1 + 400));
    if (iVar2 != 0) {
        pcVar5 = "Failed to assert UFS PHY reset %d\n";
        goto code_r0x0800152c;
    }
    iVar2 = *(arg1 + 0x18c);
    iVar1 = *(arg1 + 0x188);
    sym.writel_relaxed(1,*(arg1 + 0x18) + 0xc08);
    DataSynchronizationBarrier(3,2,0);
    if (iVar2 == 0) {
        ufs_qcom_phy_write_tbl(arg1,obj.phy_cal_table_rate_A_no_g4,0x55);
        if (*(arg1 + 0x140) == 2) {
            pcVar4 = obj.phy_cal_table_2nd_lane_no_g4;
            goto code_r0x08001480;
        }
    }
    else {
        ufs_qcom_phy_write_tbl(arg1,obj.phy_cal_table_rate_A,0x4f);
        if (*(arg1 + 0x140) == 2) {
            pcVar4 = obj.phy_cal_table_2nd_lane;
code_r0x08001480:
            ufs_qcom_phy_write_tbl(arg1,pcVar4,0x2f);
        }
    }
    if (iVar1 == 0xd) {
        ufs_qcom_phy_write_tbl(arg1,obj.phy_cal_table_rate_B,1);
    }
    sym.writel_relaxed(0,*(arg1 + 0x18) + 0xc08);
    DataSynchronizationBarrier(3,2,0);
    iVar2 = reset_control_deassert(*(arg1 + 400));
    if (iVar2 == 0) {
        uVar3 = sym.readl_relaxed(*(arg1 + 0x18) + 0xc00);
        sym.writel_relaxed(uVar3 | 1,*(arg1 + 0x18) + 0xc00);
        DataSynchronizationBarrier(3,3,0);
        iVar2 = sym.ufs_qcom_phy_qmp_v4_is_pcs_ready(arg1);
        return iVar2;
    }
    pcVar5 = "Failed to deassert UFS PHY reset %d\n";
code_r0x0800152c:
    _dev_err(uVar6,pcVar5,iVar2);
    return iVar2;
}


// ===== sym.writel_relaxed @ 0x0800153c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001558);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001580);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_start_serdes @ 0x080015b4 (size 76) =====

void sym.ufs_qcom_phy_qmp_v4_start_serdes(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0xc00);
    sym.writel_relaxed(uVar1 | 1,*(arg1 + 0x18) + 0xc00);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_is_pcs_ready @ 0x08001600 (size 192) =====

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
    uVar2 = sym.readl(*(arg1 + 0x18) + 0xd80);
    if ((uVar2 & 1) == 0) {
        do {
            iVar3 = ktime_get();
            if (iVar1 + 1000000000 < iVar3) {
                uVar2 = sym.readl(*(arg1 + 0x18) + 0xd80);
                break;
            }
            usleep_range_state(3,10,2);
            uVar2 = sym.readl(*(arg1 + 0x18) + 0xd80);
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


// ===== sym.readl_relaxed @ 0x080016c0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80016c4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80016f8);
    return uVar1;
}


// ===== sym.readl @ 0x08001730 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001734);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8001778);
    return uVar1;
}


// ===== sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable @ 0x080017b0 (size 12) =====

void sym.ufs_qcom_phy_qmp_v4_set_tx_lane_enable(void)

{
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_power_control @ 0x080017bc (size 232) =====

void sym.ufs_qcom_phy_qmp_v4_power_control(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        sym.writel_relaxed(0,*(arg1 + 0x18) + 0xc04);
        DataSynchronizationBarrier(3,3,0);
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0x734);
        sym.writel_relaxed(uVar1 | 0x20,*(arg1 + 0x18) + 0x734);
        if (*(arg1 + 0x140) != 1) {
            uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0xb34);
            sym.writel_relaxed(uVar1 | 0x20,*(arg1 + 0x18) + 0xb34);
        }
        DataSynchronizationBarrier(3,3,0);
    }
    else {
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0x734);
        sym.writel_relaxed(uVar1 & 0xffffffdf,*(arg1 + 0x18) + 0x734);
        if (*(arg1 + 0x140) != 1) {
            uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0xb34);
            sym.writel_relaxed(uVar1 & 0xffffffdf,*(arg1 + 0x18) + 0xb34);
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*(arg1 + 0x18) + 0xc04);
        DataSynchronizationBarrier(3,3,0);
    }
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_ctrl_rx_linecfg @ 0x080018a4 (size 96) =====

void sym.ufs_qcom_phy_qmp_v4_ctrl_rx_linecfg(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0xd48);
    uVar2 = 0;
    if ((arg2 & 1U) == 0) {
        uVar2 = 2;
    }
    sym.writel_relaxed(uVar1 & 0xfffffffd | uVar2,*(arg1 + 0x18) + 0xd48);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qmp_v4_dbg_register_dump @ 0x08001904 (size 208) =====

void sym.ufs_qcom_phy_qmp_v4_dbg_register_dump(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ufs_qcom_phy_dump_regs(arg1,0,0x1c0,"PHY QSERDES COM Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x200,0x40,"PHY PCS2 Registers ");
    ufs_qcom_phy_dump_regs(arg1,0xc00,0x200,"PHY Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x600,0x200,"PHY RX0 Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x400,0x188,"PHY TX0 Registers ");
    ufs_qcom_phy_dump_regs(arg1,0xa00,0x200,"PHY RX1 Registers ");
    ufs_qcom_phy_dump_regs(arg1,0x800,0x188,"PHY TX1 Registers ");
    return;
}


// ===== sym.__cfi_check_fail @ 0x080019d4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001a18

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
    //switch table (4 cases) at 0x80009a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001a2c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001a34 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.ufs_qcom_phy_qmp_v4_probe.e324ed93a50f944c7b770e9964aec00c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001a68 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ufs_qcom_phy_qmp_v4_probe.e324ed93a50f944c7b770e9964aec00c.cfi_jt);
    return;
}

