// decompiled from phy-qcom-ufs-qrbtc-sdm845 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x08001660

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x28b25d28ae1a7975) {
        if (arg1 == -0x6edc81d3392d56bb) {
            pcVar2 = sym.ufs_qcom_phy_qrbtc_sdm845_is_pcs_ready.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt;
        }
        else if (arg1 == -0x455404aa44fc3e9e) {
            pcVar2 = sym.ufs_qcom_phy_qrbtc_sdm845_set_mode.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt;
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001620;
            pcVar2 = sym.ufs_qcom_phy_qrbtc_sdm845_probe.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 == -0x28b25d28ae1a7975) {
            pcVar2 = sym.ufs_qcom_phy_qrbtc_sdm845_start_serdes.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001620;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) {
            if ((arg1 == 0x7fd06733b9cd884f) && ((pcVar1 + -0x8001190 >> 3 | pcVar1 << 0x3d) < 3)) {
                return;
            }
            goto code_r0x08001620;
        }
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001620:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001674);
    (*pcVar1)();
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_probe.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.ufs_qcom_phy_qrbtc_sdm845_probe.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt(int64_t param_1)

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
                          (param_1,iVar1,reloc.ufs_qcom_phy_qrbtc_sdm845_init.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt
                           ,obj.phy_qrbtc_sdm845_ops);
        if (iVar2 == 0) {
            _dev_err(param_1 + 0x10,"%s: ufs_qcom_phy_generic_probe() failed\n","ufs_qcom_phy_qrbtc_sdm845_probe");
            uVar3 = 0xfffffffb;
        }
        else {
            *(iVar2 + 0x98) = iVar1;
            strscpy(iVar1 + 0x14e,"ufs_phy_qrbtc_sdm845",0x1e);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_start_serdes.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt @ 0x08001168 (size 8) =====

void sym.ufs_qcom_phy_qrbtc_sdm845_start_serdes.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(1,*(param_1 + 0x18) + 0xc04);
    uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + 0xc00);
    sym.writel_relaxed(uVar1 | 1,*(param_1 + 0x18) + 0xc00);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_is_pcs_ready.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt @ 0x08001170 (size 8) =====

uint sym.ufs_qcom_phy_qrbtc_sdm845_is_pcs_ready.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = ktime_get();
    iVar1 = sym.readl(*(param_1 + 0x18) + 0xbc);
    if (iVar1 != 0x3d) {
        do {
            iVar3 = ktime_get();
            if (iVar2 + 1000000000 < iVar3) {
                iVar1 = sym.readl(*(param_1 + 0x18) + 0xbc);
                if (iVar1 == 0x3d) {
                    return 0;
                }
                _dev_err(*(param_1 + 0x10),"%s: poll for pcs failed err = %d\n",
                         "ufs_qcom_phy_qrbtc_sdm845_is_pcs_ready",0xffffff92);
                return 0xffffff92;
            }
            usleep_range_state(3,10,2);
            iVar1 = sym.readl(*(param_1 + 0x18) + 0xbc);
        } while (iVar1 != 0x3d);
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001178 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ufs_qcom_phy_qrbtc_sdm845_probe.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001180 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.ufs_qcom_phy_qrbtc_sdm845_probe.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_set_mode.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.ufs_qcom_phy_qrbtc_sdm845_set_mode.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt
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


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_init.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt @ 0x08001190 (size 8) =====

int sym.ufs_qcom_phy_qrbtc_sdm845_init.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_ufs_qcom_phy();
    iVar1 = ufs_qcom_phy_get_reset();
    if (iVar1 != 0) {
        _dev_err(*(iVar2 + 0x10),"Failed to get reset control\n",iVar1);
    }
    return iVar1;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_phy_calibrate.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt @ 0x08001198 (size 8) =====

int sym.ufs_qcom_phy_qrbtc_sdm845_phy_calibrate.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_ufs_qcom_phy();
    iVar1 = ufs_qcom_phy_calibrate
                      (iVar2,obj.phy_cal_table_rate_A,0x35,obj.phy_cal_table_rate_B,0xd,*(iVar2 + 0x188) == 0xd);
    if (iVar1 != 0) {
        _dev_err(*(iVar2 + 0x10),"%s: ufs_qcom_phy_calibrate() failed %d\n","ufs_qcom_phy_qrbtc_sdm845_phy_calibrate"
                 ,iVar1);
    }
    return iVar1;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_exit.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt @ 0x080011a0 (size 8) =====

ulong sym.ufs_qcom_phy_qrbtc_sdm845_exit.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt(void)

{
    return 0;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_probe @ 0x080011a8 (size 184) =====

ulong sym.ufs_qcom_phy_qrbtc_sdm845_probe(int64_t arg1)

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
                          (arg1,iVar1,reloc.ufs_qcom_phy_qrbtc_sdm845_init.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt,
                           obj.phy_qrbtc_sdm845_ops);
        if (iVar2 == 0) {
            _dev_err(arg1 + 0x10,"%s: ufs_qcom_phy_generic_probe() failed\n","ufs_qcom_phy_qrbtc_sdm845_probe");
            uVar3 = 0xfffffffb;
        }
        else {
            *(iVar2 + 0x98) = iVar1;
            strscpy(iVar1 + 0x14e,"ufs_phy_qrbtc_sdm845",0x1e);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_init @ 0x08001260 (size 88) =====

int sym.ufs_qcom_phy_qrbtc_sdm845_init(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_ufs_qcom_phy();
    iVar1 = ufs_qcom_phy_get_reset();
    if (iVar1 != 0) {
        _dev_err(*(iVar2 + 0x10),"Failed to get reset control\n",iVar1);
    }
    return iVar1;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_exit @ 0x080012b8 (size 16) =====

ulong sym.ufs_qcom_phy_qrbtc_sdm845_exit(int64_t arg1)

{
    return 0;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_set_mode @ 0x080012c8 (size 68) =====

ulong sym.ufs_qcom_phy_qrbtc_sdm845_set_mode(ulong noname_0,int64_t arg1,int64_t arg2)

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


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_phy_calibrate @ 0x0800130c (size 132) =====

int sym.ufs_qcom_phy_qrbtc_sdm845_phy_calibrate(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_ufs_qcom_phy();
    iVar1 = ufs_qcom_phy_calibrate
                      (iVar2,obj.phy_cal_table_rate_A,0x35,obj.phy_cal_table_rate_B,0xd,*(iVar2 + 0x188) == 0xd);
    if (iVar1 != 0) {
        _dev_err(*(iVar2 + 0x10),"%s: ufs_qcom_phy_calibrate() failed %d\n","ufs_qcom_phy_qrbtc_sdm845_phy_calibrate"
                 ,iVar1);
    }
    return iVar1;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_start_serdes @ 0x08001390 (size 92) =====

void sym.ufs_qcom_phy_qrbtc_sdm845_start_serdes(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(1,*(arg1 + 0x18) + 0xc04);
    uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + 0xc00);
    sym.writel_relaxed(uVar1 | 1,*(arg1 + 0x18) + 0xc00);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.ufs_qcom_phy_qrbtc_sdm845_is_pcs_ready @ 0x080013ec (size 200) =====

uint sym.ufs_qcom_phy_qrbtc_sdm845_is_pcs_ready(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = ktime_get();
    iVar1 = sym.readl(*(arg1 + 0x18) + 0xbc);
    if (iVar1 != 0x3d) {
        do {
            iVar3 = ktime_get();
            if (iVar2 + 1000000000 < iVar3) {
                iVar1 = sym.readl(*(arg1 + 0x18) + 0xbc);
                if (iVar1 == 0x3d) {
                    return 0;
                }
                _dev_err(*(arg1 + 0x10),"%s: poll for pcs failed err = %d\n","ufs_qcom_phy_qrbtc_sdm845_is_pcs_ready"
                         ,0xffffff92);
                return 0xffffff92;
            }
            usleep_range_state(3,10,2);
            iVar1 = sym.readl(*(arg1 + 0x18) + 0xbc);
        } while (iVar1 != 0x3d);
    }
    return 0;
}


// ===== sym.writel_relaxed @ 0x080014b4 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80014d0);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80014f8);
    return;
}


// ===== sym.readl_relaxed @ 0x0800152c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001530);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001564);
    return uVar1;
}


// ===== sym.readl @ 0x0800159c (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80015a0);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x80015e4);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x0800161c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001660

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
    //switch table (4 cases) at 0x8000398
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001674);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001684 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.ufs_qcom_phy_qrbtc_sdm845_probe.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080016b8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ufs_qcom_phy_qrbtc_sdm845_probe.8cfdc7c1a44ca6433b1e74f4eb46f39c.cfi_jt);
    return;
}

