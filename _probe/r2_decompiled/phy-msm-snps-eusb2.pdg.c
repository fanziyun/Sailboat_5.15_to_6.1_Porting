// decompiled from phy-msm-snps-eusb2 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x080035ec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (-0x3557318fb8d07b72 < arg1) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.msm_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
            }
            else {
                if (arg1 != -0x8dc801903aca538) {
                    if (arg1 != -0x5e5b96c73454931) goto code_r0x080035ac;
                    pcVar2 = sym.msm_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    goto code_r0x080011c8;
                }
                pcVar2 = sym.single_release.cfi_jt;
            }
code_r0x0800118c:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080035ac;
        }
        if (arg1 == -0x614cf58593a4b8d6) {
            pcVar2 = sym.msm_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
        }
        else {
            if (arg1 != -0x550b9e52359ac614) goto code_r0x080035ac;
            pcVar2 = sym.msm_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
        }
    }
    else if (arg1 < 0x64ea1348e09a6946) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x080035ac;
            pcVar2 = sym.apb_reg_rw_write.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x64ea1348e09a6946) {
            pcVar2 = sym.msm_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
            goto code_r0x0800118c;
        }
        if (arg1 == 0x7cedcdc737e35bbf) {
            pcVar2 = sym.msm_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080035ac;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
code_r0x080011c8:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080035ac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003600);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011e8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.single_release.cfi_jt @ 0x080011f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.apb_reg_rw_open.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x080011f8 (size 8) =====

void sym.apb_reg_rw_open.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,0,*(param_1 + 0x2d8));
    return;
}


// ===== sym.msm_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.msm_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1,int param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != 0) || (*(param_1 + 0x1cf) == '\0')) {
        *(param_1 + 0x1d8) = param_2;
        queue_work_on(0x20,_single_release,param_1 + 0x1e0);
    }
    return 0;
}


// ===== sym.msm_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.msm_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(ulong *param_1)

{
    int64_t *piVar1;
    uint8_t uVar2;
    char cVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint32_t uVar10;
    int iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1[0x30] != 0) && (uVar7 = sym.readl_relaxed(param_1[0x30]), (uVar7 & 1) != 0)) {
        if ((*(param_1 + 2) & 1) == 0) {
            sym.msm_eusb2_phy_power(param_1,1);
            sym.msm_eusb2_phy_clocks(param_1);
            uVar8 = sym.msm_eusb2_repeater_reset_and_init(param_1);
            return uVar8;
        }
        qcom_scm_io_writel(param_1[0x2f],0);
        *(param_1 + 0x32) = 1;
    }
    uVar8 = sym.msm_eusb2_phy_power(param_1,1);
    if (uVar8 != 0) {
        return uVar8;
    }
    uVar8 = sym.msm_eusb2_repeater_reset_and_init(param_1);
    if (uVar8 != 0) {
        return uVar8;
    }
    sym.msm_eusb2_phy_clocks(param_1);
    iVar5 = reset_control_assert(param_1[0x35]);
    if (iVar5 != 0) {
        _dev_err(*param_1,"phy reset assert failed\n");
    }
    usleep_range_state(100,0x96,2);
    iVar5 = reset_control_deassert(param_1[0x35]);
    if (iVar5 != 0) {
        _dev_err(*param_1,"phy reset deassert failed\n");
    }
    piVar1 = param_1 + 0x2e;
    iVar9 = param_1[0x2e] + 0x94;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 2,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 1 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",2,0x94);
    }
    iVar9 = *piVar1 + 0x50;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 2,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 1 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",2,0x50);
    }
    iVar9 = *piVar1 + 0x54;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 9,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if (((uVar6 ^ 0xffffffff) & 9) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",9,0x54);
    }
    iVar9 = *piVar1 + 0x130;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 4,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 2 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",4,0x130);
    }
    iVar9 = *piVar1 + 0x98;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffffbf,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 6 & 1) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x98);
    }
    iVar9 = *piVar1 + 0xb8;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 1,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",1,0xb8);
    }
    iVar9 = clk_get_rate(param_1[0x33]);
    if (iVar9 == 38400000) {
        iVar9 = *piVar1 + 0x54;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff8f | 0x40,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0x70) != 0x40) {
            _printk(0x8000805,"msm_eusb2_write_readback",0x40,0x54);
        }
        iVar9 = *piVar1 + 0x5c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff00 | 200,iVar9);
        cVar3 = sym.readl_relaxed(iVar9);
        if (cVar3 != -0x38) {
            _printk(0x8000805,"msm_eusb2_write_readback",200,0x5c);
        }
        iVar9 = *piVar1 + 0x60;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xfffffff0,iVar9);
        uVar7 = sym.readl_relaxed(iVar9);
        if ((uVar7 & 0xf) == 0) goto code_r0x08001adc;
        uVar8 = 0;
    }
    else {
        if (iVar9 != 19200000) {
            _dev_err(*param_1,"unsupported ref_clk_freq:%lu\n",iVar9);
            goto code_r0x08001adc;
        }
        iVar9 = *piVar1 + 0x54;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff8f,iVar9);
        uVar7 = sym.readl_relaxed(iVar9);
        if ((uVar7 & 0x70) != 0) {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x54);
        }
        iVar9 = *piVar1 + 0x5c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff00 | 0x90,iVar9);
        cVar3 = sym.readl_relaxed(iVar9);
        if (cVar3 != -0x70) {
            _printk(0x8000805,"msm_eusb2_write_readback",0x90,0x5c);
        }
        iVar9 = *piVar1 + 0x60;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xfffffff0 | 1,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0xf) == 1) goto code_r0x08001adc;
        uVar8 = 1;
    }
    _printk(0x8000805,"msm_eusb2_write_readback",uVar8,0x60);
code_r0x08001adc:
    iVar9 = *piVar1 + 0x60;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff0f,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 0xf0) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x60);
    }
    iVar9 = *piVar1 + 0x58;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff01 | 2,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0xfe) != 2) {
        _printk(0x8000805,"msm_eusb2_write_readback",2,0x58);
    }
    iVar9 = *piVar1 + 0x68;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff03 | 0x20,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0xfc) != 0x20) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x20,0x68);
    }
    iVar9 = *piVar1 + 0x68;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffffc | 1,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 3) != 1) {
        _printk(0x8000805,"msm_eusb2_write_readback",1,0x68);
    }
    iVar9 = *piVar1 + 0x6c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffffe0 | 0x10,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0x1f) != 0x10) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x10,0x6c);
    }
    iVar9 = *piVar1 + 0x70;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffff8,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 7) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x70);
    }
    iVar9 = *piVar1 + 0x6c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff3f | 0x40,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0xc0) != 0x40) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x40,0x6c);
    }
    iVar9 = *piVar1 + 100;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 0x10,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 4 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x10,100);
    }
    iVar9 = *piVar1 + 0x7c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffff8,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 7) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x7c);
    }
    iVar9 = *piVar1 + 0x7c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff9f | 0x40,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0x60) != 0x40) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x40,0x7c);
    }
    iVar9 = *piVar1 + 0x7c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffffe7 | 8,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0x18) != 8) {
        _printk(0x8000805,"msm_eusb2_write_readback",8,0x7c);
    }
    iVar9 = *piVar1 + 0x78;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffffc7 | 0x18,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0x38) != 0x18) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x18,0x78);
    }
    iVar9 = *piVar1 + 0x78;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff3f,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 0xc0) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x78);
    }
    iVar5 = *(param_1 + 0x43);
    if (0 < iVar5) {
        iVar11 = 0;
        iVar9 = param_1[0x2e];
        iVar12 = param_1[0x42];
        do {
            sym.writel_relaxed(*(iVar12 + iVar11 * 4),iVar9 + *(iVar12 + (iVar11 + 1) * 4));
            iVar11 = iVar11 + 2;
        } while (iVar11 < iVar5);
    }
    uVar2 = *(param_1 + 0x45);
    if (uVar2 - 1 < 7) {
        iVar9 = *piVar1 + 0x7c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xfffffff8 | uVar2,iVar9);
        uVar4 = sym.readl_relaxed(iVar9);
        if ((uVar4 & 7) != uVar2) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar2,0x7c);
        }
    }
    if (*(param_1 + 0x229) - 1 < 4) {
        uVar10 = *(param_1 + 0x229) << 5;
        iVar9 = *piVar1 + 0x7c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff9f | uVar10,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0x60) != uVar10) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar10,0x7c);
        }
    }
    if (*(param_1 + 0x22a) - 1 < 4) {
        uVar10 = *(param_1 + 0x22a) << 3;
        iVar9 = *piVar1 + 0x7c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffffe7 | uVar10,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0x18) != uVar10) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar10,0x7c);
        }
    }
    if (*(param_1 + 0x22b) - 1 < 7) {
        uVar10 = *(param_1 + 0x22b) << 3;
        iVar9 = *piVar1 + 0x78;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffffc7 | uVar10,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0x38) != uVar10) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar10,0x78);
        }
    }
    if (*(param_1 + 0x22c) - 1 < 4) {
        uVar10 = *(param_1 + 0x22c) << 6;
        iVar9 = *piVar1 + 0x78;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff3f | uVar10,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0xc0) != uVar10) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar10,0x78);
        }
    }
    iVar9 = *piVar1 + 100;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 0xc,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((~uVar6 & 0xc) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0xc,100);
    }
    iVar9 = *piVar1 + 0x3c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 1,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",1,0x3c);
    }
    iVar9 = *piVar1 + 0x54;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 2,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 1 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",2,0x54);
    }
    iVar9 = *piVar1 + 0x54;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffffb,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 2 & 1) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x54);
    }
    iVar9 = *piVar1 + 0x50;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffffd,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 1 & 1) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x50);
    }
    iVar9 = *piVar1 + 100;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffff7,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 3 & 1) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,100);
    }
    return 0;
}


// ===== sym.msm_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001210 (size 8) =====

uint64_t sym.msm_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t *arg1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = param_1 + 0x10;
    arg1 = devm_kmalloc(iVar6,0x238,0xdc0);
    if (arg1 == NULL) {
code_r0x080015b4:
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = devm_usb_get_repeater_by_phandle(iVar6,"usb-repeater",0);
        if (0xfffffffffffff000 < uVar2) goto code_r0x080015b8;
        iVar3 = platform_get_resource_byname(param_1,0x200,"eusb2_phy_base");
        if (iVar3 == 0) {
            pcVar7 = "missing eusb2phy memory resource\n";
        }
        else {
            uVar4 = devm_ioremap_resource(iVar6,iVar3);
            arg1[0x2e] = uVar4;
            if (uVar4 < 0xfffffffffffff001) {
                piVar5 = platform_get_resource_byname(param_1,0x200,"eud_enable_reg");
                if (piVar5 != NULL) {
                    uVar4 = devm_ioremap_resource(iVar6,piVar5);
                    arg1[0x30] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"eud_enable_reg ioremap err:%d\n",uVar4 & 0xffffffff);
                        uVar2 = uVar4 & 0xffffffff;
                        goto code_r0x080015b8;
                    }
                    arg1[0x2f] = *piVar5;
                }
                iVar3 = platform_get_resource_byname(param_1,0x200,"eud_detect_reg");
                if (iVar3 != 0) {
                    uVar4 = devm_ioremap_resource(iVar6,iVar3);
                    arg1[0x31] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"eud_detect_reg ioremap err:%d\n",uVar4 & 0xffffffff);
                        uVar2 = uVar4 & 0xffffffff;
                        goto code_r0x080015b8;
                    }
                    uVar4 = devm_clk_get(iVar6,"ref_clk_src");
                    arg1[0x33] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"clk get failed for ref_clk_src\n");
                        uVar2 = *(arg1 + 0x33);
                        goto code_r0x080015b8;
                    }
                    uVar4 = devm_clk_get(iVar6,"ref_clk");
                    arg1[0x34] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"clk get failed for ref_clk\n");
                        uVar2 = *(arg1 + 0x34);
                        goto code_r0x080015b8;
                    }
                    uVar4 = __devm_reset_control_get(iVar6,"phy_reset",0,0,0,1);
                    arg1[0x35] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        uVar2 = uVar4 & 0xffffffff;
                        goto code_r0x080015b8;
                    }
                    uVar1 = of_property_read_variable_u32_array
                                      (*(param_1 + 0x300),"qcom,vdd-voltage-level",arg1 + 0x38,3,0);
                    if (uVar1 < 0) {
                        uVar2 = uVar1;
                        _dev_err(iVar6,"error reading qcom,vdd-voltage-level property\n");
                        goto code_r0x080015b8;
                    }
                    uVar4 = devm_regulator_get(iVar6,0x80006f6);
                    arg1[0x36] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"unable to get vdd supply\n");
                        uVar2 = *(arg1 + 0x36);
                        goto code_r0x080015b8;
                    }
                    uVar4 = devm_regulator_get(iVar6,"vdda12");
                    arg1[0x37] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"unable to get vdda12 supply\n");
                        uVar2 = *(arg1 + 0x37);
                        goto code_r0x080015b8;
                    }
                    uVar1 = of_property_count_elems_of_size(*(param_1 + 0x300),"qcom,param-override-seq",4);
                    *(arg1 + 0x43) = uVar1;
                    if ((uVar1 & 1) != 0) {
                        _dev_err(iVar6,"invalid param_override_seq_len\n");
                        uVar2 = 0xffffffea;
                        goto code_r0x080015b8;
                    }
                    if (0 < uVar1) {
                        iVar3 = devm_kmalloc(iVar6,uVar1 << 2,0xdc0);
                        arg1[0x42] = iVar3;
                        if (iVar3 == 0) goto code_r0x080015b4;
                        uVar1 = of_property_read_variable_u32_array
                                          (*(param_1 + 0x300),"qcom,param-override-seq",iVar3,arg1[0x43],0);
                        if (uVar1 < 0) {
                            uVar2 = uVar1;
                            _dev_err(iVar6,"qcom,param-override-seq read failed %d\n",uVar2);
                            goto code_r0x080015b8;
                        }
                    }
                    arg1[0x23] = sym.msm_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    arg1[0x29] = sym.msm_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    arg1[0x2a] = sym.msm_eusb2_phy_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    arg1[0x46] = uVar2;
                    *arg1 = iVar6;
                    *(param_1 + 0xa8) = arg1;
                    arg1[0x26] = sym.msm_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    arg1[0x27] = sym.msm_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    *(arg1 + 0x14) = 1;
                    uVar4 = usb_add_phy_dev(arg1);
                    uVar2 = uVar4 & 0xffffffff;
                    if (uVar4 == 0) {
                        arg1[0x3c] = 0xfffffffe0;
                        arg1[0x3d] = arg1 + 0x3d;
                        arg1[0x3e] = arg1 + 0x3d;
                        arg1[0x3f] = sym.msm_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                        iVar6 = (*arg1)[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **arg1;
                        }
                        iVar6 = debugfs_create_dir(iVar6,0);
                        arg1[0x44] = iVar6;
                        debugfs_create_x8("tx_pre_emphasis",0x1a4,iVar6,arg1 + 0x45);
                        debugfs_create_x8("tx_rise_fall_time",0x1a4,arg1[0x44],arg1 + 0x229);
                        debugfs_create_x8("tx_src_imp",0x1a4,arg1[0x44],arg1 + 0x22a);
                        debugfs_create_x8("tx_dc_vref",0x1a4,arg1[0x44],arg1 + 0x22b);
                        debugfs_create_x8("tx_xv",0x1a4,arg1[0x44],arg1 + 0x22c);
                        debugfs_create_file("apb_reg_rw",0x80,arg1[0x44],arg1,obj.apb_reg_rw_fops);
                        if ((arg1[0x30] != 0) && (uVar2 = sym.readl_relaxed(arg1[0x30]), (uVar2 & 1) != 0)) {
                            sym.msm_eusb2_phy_power(arg1,1);
                        }
                        uVar2 = 0;
                    }
                    goto code_r0x080015b8;
                }
                pcVar7 = "missing eud_detect register address\n";
            }
            else {
                pcVar7 = "ioremap failed\n";
            }
        }
        _dev_err(iVar6,pcVar7);
        uVar2 = 0xffffffed;
    }
code_r0x080015b8:
    return uVar2 & 0xffffffff;
}


// ===== sym.msm_eusb2_phy_remove.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.msm_eusb2_phy_remove.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1 != 0) {
        flush_work(arg1 + 0x1e0);
        if (*(arg1 + 0x1d0) != 0) {
            power_supply_put();
        }
        debugfs_remove(*(arg1 + 0x220));
        usb_remove_phy(arg1);
        uVar1 = *(arg1 + 0x1a0);
        clk_disable(uVar1);
        clk_unprepare(uVar1);
        uVar1 = *(arg1 + 0x198);
        clk_disable(uVar1);
        clk_unprepare(uVar1);
        if (*(arg1 + 0x1cc) != '\0') {
            uVar1 = *(arg1 + 0x1a0);
            clk_disable(uVar1);
            clk_unprepare(uVar1);
            uVar1 = *(arg1 + 0x198);
            clk_disable(uVar1);
            clk_unprepare(uVar1);
            *(arg1 + 0x1cc) = 0;
        }
        sym.msm_eusb2_phy_power(arg1,0);
    }
    return 0;
}


// ===== sym.msm_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001220 (size 8) =====

uint64_t sym.msm_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    if (*(param_1 + -0x10) == 0) {
        iVar4 = power_supply_get_by_name(0x8000b67);
        *(param_1 + -0x10) = iVar4;
        if (iVar4 != 0) goto code_r0x08002a14;
        uVar5 = _dev_err(*(param_1 + -0x1e0),"Could not get usb psy\n");
    }
    else {
code_r0x08002a14:
        _dev_info(*(param_1 + -0x1e0),"Avail curr from USB = %u\n",*(param_1 + -8));
        uStack_30 = CONCAT44(uStack_30._4_4_,*(param_1 + -8) * 1000);
        uVar5 = power_supply_set_property(*(param_1 + -0x10),0x25,&uStack_30);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar10 = __stack_chk_fail();
    puVar6 = auVar10._0_8_;
    *extraout_x18 = sym.msm_eusb2_phy_power;
    if (*(puVar6 + 0x1cd) == (auVar10._8_4_ & 1)) {
        uVar2 = 0;
        goto code_r0x08002be4;
    }
    if ((auVar10._8_4_ & 1) == 0) {
        uVar2 = sym.readl_relaxed(puVar6[0x31]);
        sym.writel_relaxed(uVar2 & 0xfffffffe,puVar6[0x31]);
        DataSynchronizationBarrier(3,3,0);
        iVar3 = regulator_disable(puVar6[0x37]);
        if (iVar3 != 0) {
            uVar7 = *puVar6;
            pcVar8 = "Unable to disable vdda12:%d\n";
code_r0x08002ce4:
            _dev_err(uVar7,pcVar8,iVar3);
        }
        iVar3 = regulator_set_voltage(puVar6[0x37],0,1200000);
        if (iVar3 != 0) {
            uVar7 = *puVar6;
            pcVar8 = "Unable to set (0) voltage for vdda12:%d\n";
code_r0x08002ccc:
            _dev_err(uVar7,pcVar8,iVar3);
        }
        iVar3 = regulator_set_load(puVar6[0x37],0);
        if (iVar3 < 0) {
            _dev_err(*puVar6,"Unable to set LPM of vdda12\n");
        }
code_r0x08002b80:
        iVar3 = regulator_disable(puVar6[0x36]);
        if (iVar3 != 0) {
            _dev_err(*puVar6,"Unable to disable vdd:%d\n",iVar3);
        }
code_r0x08002b8c:
        iVar3 = regulator_set_voltage(puVar6[0x36],*(puVar6 + 0x38),*(puVar6 + 0x39));
        if (iVar3 != 0) {
            pcVar8 = "unable to set voltage for hsusb vdd\n";
code_r0x08002c70:
            _dev_err(*puVar6,pcVar8);
        }
        uVar2 = regulator_set_load(puVar6[0x36],0);
        if (uVar2 < 0) {
            _dev_err(*puVar6,"Unable to set LPM of vdd\n");
            cVar1 = *(puVar6 + 0x1cd);
        }
        else {
            cVar1 = *(puVar6 + 0x1cd);
        }
        if (cVar1 == '\0') {
            uVar2 = 0xffffffea;
            goto code_r0x08002be4;
        }
code_r0x08002bbc:
        uVar9 = 0;
    }
    else {
        uVar2 = regulator_set_load(puVar6[0x36],0x1e4d);
        if (uVar2 < 0) {
            _dev_err(*puVar6,"Unable to set HPM of vdd:%d\n",uVar2);
            goto code_r0x08002bbc;
        }
        iVar3 = regulator_set_voltage(puVar6[0x36],*(puVar6 + 0x1c4),*(puVar6 + 0x39));
        if (iVar3 != 0) {
            pcVar8 = "Unable to set voltage for hsusb vdd\n";
            goto code_r0x08002c70;
        }
        iVar3 = regulator_enable(puVar6[0x36]);
        if (iVar3 != 0) {
            _dev_err(*puVar6,"Unable to enable VDD\n");
            goto code_r0x08002b8c;
        }
        iVar3 = regulator_set_load(puVar6[0x37],0x1711);
        if (iVar3 < 0) {
            _dev_err(*puVar6,"Unable to set HPM of vdda12:%d\n",iVar3);
            goto code_r0x08002b80;
        }
        iVar3 = regulator_set_voltage(puVar6[0x37],1200000,1200000);
        if (iVar3 != 0) {
            uVar7 = *puVar6;
            pcVar8 = "Unable to set voltage for vdda12:%d\n";
            goto code_r0x08002ccc;
        }
        iVar3 = regulator_enable(puVar6[0x37]);
        if (iVar3 != 0) {
            uVar7 = *puVar6;
            pcVar8 = "Unable to enable vdda12:%d\n";
            goto code_r0x08002ce4;
        }
        DataSynchronizationBarrier(3,3,0);
        uVar9 = 1;
        sym.writel_relaxed(1,puVar6[0x31]);
        uVar2 = 0;
    }
    *(puVar6 + 0x1cd) = uVar9;
code_r0x08002be4:
    return uVar2;
}


// ===== sym.apb_reg_rw_write.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001228 (size 8) =====

uint64_t sym.apb_reg_rw_write.45e9c221f7851536f223e0cf2954b9a9.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint16_t auStack_78 [2];
    uint8_t auStack_74 [4];
    ulong *puStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    auStack_74[0] = 0;
    puVar8 = *(*(param_1 + 0xd8) + 0x80);
    auStack_78[0] = 0;
    if (*(puVar8 + 0x1cf) == '\0') {
        _dev_err(*puVar8,"eUSB2 PHY is not out of reset.\n");
        param_3 = 0xffffffffffffffea;
    }
    else {
        uVar7 = param_3;
        if (0x1e < param_3) {
            uVar7 = 0x1f;
        }
        __check_object_size(&uStack_68,uVar7,0);
        iVar5 = sym._copy_from_user(&uStack_68,param_2,uVar7);
        if (iVar5 == 0) {
            puStack_70 = &uStack_68;
            pcVar6 = strsep(&puStack_70,0x8000670);
            if ((pcVar6 != NULL) && (*pcVar6 != '\0')) {
                iVar2 = strcmp(pcVar6,"read");
                if ((iVar2 == 0) || (iVar3 = strcmp(pcVar6,"write"), iVar3 == 0)) {
                    iVar5 = strsep(&puStack_70,0x8000670);
                    if (iVar5 == 0) {
                        pcVar6 = "Provide register offset\n";
                    }
                    else {
                        iVar3 = kstrtou8(iVar5,0x10,auStack_74);
                        if (iVar3 == 0) {
                            if (iVar2 == 0) {
                                uVar7 = auStack_74[0];
                                sym.writel(uVar7,puVar8[0x2e] + 0x138);
                                sym.writel(2,puVar8[0x2e] + 0x130);
                                ktime_get();
                                sym.readl(puVar8[0x2e] + 0x134);
                                uVar4 = sym.readl(puVar8[0x2e] + 0x144);
                                iVar2 = sym.readl(puVar8[0x2e] + 0x148);
                                sym.writel(0,puVar8[0x2e] + 0x130);
                                _dev_info(*puVar8,"APB reg(%x) read success, val:%x\n",uVar7,uVar4 | iVar2 << 8);
                                goto code_r0x08003044;
                            }
                            iVar5 = strsep(&puStack_70,0x8000670);
                            if (iVar5 == 0) {
                                pcVar6 = "Provide value to update register\n";
                            }
                            else {
                                iVar2 = kstrtou16(iVar5,0x10,auStack_78);
                                uVar1 = auStack_78[0];
                                if (iVar2 == 0) {
                                    uVar7 = auStack_74[0];
                                    sym.writel(uVar7,puVar8[0x2e] + 0x138);
                                    sym.writel(uVar1 >> 8 & 0xf,puVar8[0x2e] + 0x140);
                                    sym.writel(uVar1 & 0xf,puVar8[0x2e] + 0x13c);
                                    sym.writel(3,puVar8[0x2e] + 0x130);
                                    ktime_get();
                                    sym.readl(puVar8[0x2e] + 0x134);
                                    sym.writel(0,puVar8[0x2e] + 0x130);
                                    _dev_info(*puVar8,"APB reg(%x) updated with %x\n",uVar7,uVar1);
                                    goto code_r0x08003044;
                                }
                                pcVar6 = "Invalid value\n";
                            }
                        }
                        else {
                            pcVar6 = "Invalid register offset\n";
                        }
                    }
                    _dev_err(*puVar8,pcVar6);
                }
            }
            _printk(0x8000af8,"apb_reg_rw_write");
            _printk(0x80007c2,"apb_reg_rw_write");
            _printk(0x8000841,"apb_reg_rw_write");
            _printk(0x800056a,"apb_reg_rw_write");
            _printk(0x80005a0,"apb_reg_rw_write");
        }
        else {
            param_3 = 0xfffffffffffffff2;
        }
    }
code_r0x08003044:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return param_3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.apb_reg_rw_open;
    uVar7 = single_open(auVar9._8_8_,0,*(auVar9._0_8_ + 0x2d8));
    return uVar7;
}


// ===== sym.msm_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.msm_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    char cVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x1cf) = 1;
    if ((4 < param_2) && ((*(param_1 + 0x10) & 1) == 0)) {
        iVar1 = *(param_1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\0') {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x130);
        }
        iVar1 = *(param_1 + 0x170) + 0x138;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 5,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\x05') {
            _printk(0x8000805,"msm_eusb2_write_readback",5,0x138);
        }
        iVar1 = *(param_1 + 0x170) + 0x13c;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 0x80,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != -0x80) {
            _printk(0x8000805,"msm_eusb2_write_readback",0x80,0x13c);
        }
        iVar1 = *(param_1 + 0x170) + 0x13c;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 0xc0,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != -0x40) {
            _printk(0x8000805,"msm_eusb2_write_readback",0xc0,0x13c);
        }
        iVar1 = *(param_1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 3,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\x03') {
            _printk(0x8000805,"msm_eusb2_write_readback",3,0x130);
        }
        __const_udelay(0x218e);
        iVar1 = *(param_1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\0') {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x130);
        }
        iVar1 = *(param_1 + 0x170) + 0x13c;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\0') {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x13c);
        }
        iVar1 = *(param_1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 3,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\x03') {
            _printk(0x8000805,"msm_eusb2_write_readback",3,0x130);
        }
        __const_udelay(0x218e);
        iVar1 = *(param_1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\0') {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x130);
        }
    }
    return 0;
}


// ===== sym.msm_eusb2_phy_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.msm_eusb2_phy_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x1cf) = 0;
    return 0;
}


// ===== sym.msm_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.msm_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1,int param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != 0) && (*(param_1 + 0x1ce) != '\0')) {
        return 0;
    }
    if (param_2 == 0) {
        sym.msm_eusb2_phy_clocks(param_1);
    }
    else if ((*(param_1 + 0x1cf) == '\0') && (uVar1 = *(param_1 + 0x10), (uVar1 & 1) == 0)) {
        if (*(param_1 + 400) != '\0') {
            qcom_scm_io_writel(*(param_1 + 0x178),1);
            uVar1 = *(param_1 + 0x10);
            *(param_1 + 400) = 0;
        }
        if ((uVar1 >> 6 & 1) == 0) {
            if (*(param_1 + 0x1cc) != '\0') {
                uVar2 = *(param_1 + 0x1a0);
                clk_disable(uVar2);
                clk_unprepare(uVar2);
                uVar2 = *(param_1 + 0x198);
                clk_disable(uVar2);
                clk_unprepare(uVar2);
                *(param_1 + 0x1cc) = 0;
            }
            sym.msm_eusb2_phy_power(param_1,0);
            iVar3 = *(param_1 + 0x230);
            if (iVar3 != 0) {
                pcVar4 = *(iVar3 + 0x28);
                if (pcVar4 != NULL) {
                    __cfi_slowpath_diag(0x2795f870d8daa47d,pcVar4,0x8000240);
                    (*pcVar4)(iVar3,0);
                    iVar3 = *(param_1 + 0x230);
                    if (iVar3 == 0) goto code_r0x080025fc;
                }
                pcVar4 = *(iVar3 + 0x48);
                if (pcVar4 != NULL) {
                    __cfi_slowpath_diag(0xe9fb39b578da0cf6,pcVar4,0x8000280);
                    (*pcVar4)(iVar3);
                }
            }
        }
    }
    else if (*(param_1 + 0x1cc) != '\0') {
        uVar2 = *(param_1 + 0x1a0);
        clk_disable(uVar2);
        clk_unprepare(uVar2);
        uVar2 = *(param_1 + 0x198);
        clk_disable(uVar2);
        clk_unprepare(uVar2);
        *(param_1 + 0x1cc) = 0;
    }
code_r0x080025fc:
    *(param_1 + 0x1ce) = param_2 != 0;
    return 0;
}


// ===== sym.msm_eusb2_phy_probe @ 0x08001248 (size 1204) =====

uint64_t sym.msm_eusb2_phy_probe(int64_t arg1)

{
    uint32_t uVar1;
    int64_t *arg1_00;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = arg1 + 0x10;
    arg1_00 = devm_kmalloc(iVar6,0x238,0xdc0);
    if (arg1_00 == NULL) {
code_r0x080015b4:
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = devm_usb_get_repeater_by_phandle(iVar6,"usb-repeater",0);
        if (0xfffffffffffff000 < uVar2) goto code_r0x080015b8;
        iVar3 = platform_get_resource_byname(arg1,0x200,"eusb2_phy_base");
        if (iVar3 == 0) {
            pcVar7 = "missing eusb2phy memory resource\n";
        }
        else {
            uVar4 = devm_ioremap_resource(iVar6,iVar3);
            arg1_00[0x2e] = uVar4;
            if (uVar4 < 0xfffffffffffff001) {
                piVar5 = platform_get_resource_byname(arg1,0x200,"eud_enable_reg");
                if (piVar5 != NULL) {
                    uVar4 = devm_ioremap_resource(iVar6,piVar5);
                    arg1_00[0x30] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"eud_enable_reg ioremap err:%d\n",uVar4 & 0xffffffff);
                        uVar2 = uVar4 & 0xffffffff;
                        goto code_r0x080015b8;
                    }
                    arg1_00[0x2f] = *piVar5;
                }
                iVar3 = platform_get_resource_byname(arg1,0x200,"eud_detect_reg");
                if (iVar3 != 0) {
                    uVar4 = devm_ioremap_resource(iVar6,iVar3);
                    arg1_00[0x31] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"eud_detect_reg ioremap err:%d\n",uVar4 & 0xffffffff);
                        uVar2 = uVar4 & 0xffffffff;
                        goto code_r0x080015b8;
                    }
                    uVar4 = devm_clk_get(iVar6,"ref_clk_src");
                    arg1_00[0x33] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"clk get failed for ref_clk_src\n");
                        uVar2 = *(arg1_00 + 0x33);
                        goto code_r0x080015b8;
                    }
                    uVar4 = devm_clk_get(iVar6,"ref_clk");
                    arg1_00[0x34] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"clk get failed for ref_clk\n");
                        uVar2 = *(arg1_00 + 0x34);
                        goto code_r0x080015b8;
                    }
                    uVar4 = __devm_reset_control_get(iVar6,"phy_reset",0,0,0,1);
                    arg1_00[0x35] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        uVar2 = uVar4 & 0xffffffff;
                        goto code_r0x080015b8;
                    }
                    uVar1 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x300),"qcom,vdd-voltage-level",arg1_00 + 0x38,3,0);
                    if (uVar1 < 0) {
                        uVar2 = uVar1;
                        _dev_err(iVar6,"error reading qcom,vdd-voltage-level property\n");
                        goto code_r0x080015b8;
                    }
                    uVar4 = devm_regulator_get(iVar6,0x80006f6);
                    arg1_00[0x36] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"unable to get vdd supply\n");
                        uVar2 = *(arg1_00 + 0x36);
                        goto code_r0x080015b8;
                    }
                    uVar4 = devm_regulator_get(iVar6,"vdda12");
                    arg1_00[0x37] = uVar4;
                    if (0xfffffffffffff000 < uVar4) {
                        _dev_err(iVar6,"unable to get vdda12 supply\n");
                        uVar2 = *(arg1_00 + 0x37);
                        goto code_r0x080015b8;
                    }
                    uVar1 = of_property_count_elems_of_size(*(arg1 + 0x300),"qcom,param-override-seq",4);
                    *(arg1_00 + 0x43) = uVar1;
                    if ((uVar1 & 1) != 0) {
                        _dev_err(iVar6,"invalid param_override_seq_len\n");
                        uVar2 = 0xffffffea;
                        goto code_r0x080015b8;
                    }
                    if (0 < uVar1) {
                        iVar3 = devm_kmalloc(iVar6,uVar1 << 2,0xdc0);
                        arg1_00[0x42] = iVar3;
                        if (iVar3 == 0) goto code_r0x080015b4;
                        uVar1 = of_property_read_variable_u32_array
                                          (*(arg1 + 0x300),"qcom,param-override-seq",iVar3,arg1_00[0x43],0);
                        if (uVar1 < 0) {
                            uVar2 = uVar1;
                            _dev_err(iVar6,"qcom,param-override-seq read failed %d\n",uVar2);
                            goto code_r0x080015b8;
                        }
                    }
                    arg1_00[0x23] = sym.msm_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    arg1_00[0x29] = sym.msm_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    arg1_00[0x2a] = sym.msm_eusb2_phy_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    arg1_00[0x46] = uVar2;
                    *arg1_00 = iVar6;
                    *(arg1 + 0xa8) = arg1_00;
                    arg1_00[0x26] = sym.msm_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    arg1_00[0x27] = sym.msm_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                    *(arg1_00 + 0x14) = 1;
                    uVar4 = usb_add_phy_dev(arg1_00);
                    uVar2 = uVar4 & 0xffffffff;
                    if (uVar4 == 0) {
                        arg1_00[0x3c] = 0xfffffffe0;
                        arg1_00[0x3d] = arg1_00 + 0x3d;
                        arg1_00[0x3e] = arg1_00 + 0x3d;
                        arg1_00[0x3f] = sym.msm_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                        iVar6 = (*arg1_00)[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **arg1_00;
                        }
                        iVar6 = debugfs_create_dir(iVar6,0);
                        arg1_00[0x44] = iVar6;
                        debugfs_create_x8("tx_pre_emphasis",0x1a4,iVar6,arg1_00 + 0x45);
                        debugfs_create_x8("tx_rise_fall_time",0x1a4,arg1_00[0x44],arg1_00 + 0x229);
                        debugfs_create_x8("tx_src_imp",0x1a4,arg1_00[0x44],arg1_00 + 0x22a);
                        debugfs_create_x8("tx_dc_vref",0x1a4,arg1_00[0x44],arg1_00 + 0x22b);
                        debugfs_create_x8("tx_xv",0x1a4,arg1_00[0x44],arg1_00 + 0x22c);
                        debugfs_create_file("apb_reg_rw",0x80,arg1_00[0x44],arg1_00,obj.apb_reg_rw_fops);
                        if ((arg1_00[0x30] != 0) && (uVar2 = sym.readl_relaxed(arg1_00[0x30]), (uVar2 & 1) != 0)) {
                            sym.msm_eusb2_phy_power(arg1_00,1);
                        }
                        uVar2 = 0;
                    }
                    goto code_r0x080015b8;
                }
                pcVar7 = "missing eud_detect register address\n";
            }
            else {
                pcVar7 = "ioremap failed\n";
            }
        }
        _dev_err(iVar6,pcVar7);
        uVar2 = 0xffffffed;
    }
code_r0x080015b8:
    return uVar2 & 0xffffffff;
}


// ===== sym.msm_eusb2_phy_remove @ 0x080016fc (size 192) =====

ulong sym.msm_eusb2_phy_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00 != 0) {
        flush_work(arg1_00 + 0x1e0);
        if (*(arg1_00 + 0x1d0) != 0) {
            power_supply_put();
        }
        debugfs_remove(*(arg1_00 + 0x220));
        usb_remove_phy(arg1_00);
        uVar1 = *(arg1_00 + 0x1a0);
        clk_disable(uVar1);
        clk_unprepare(uVar1);
        uVar1 = *(arg1_00 + 0x198);
        clk_disable(uVar1);
        clk_unprepare(uVar1);
        if (*(arg1_00 + 0x1cc) != '\0') {
            uVar1 = *(arg1_00 + 0x1a0);
            clk_disable(uVar1);
            clk_unprepare(uVar1);
            uVar1 = *(arg1_00 + 0x198);
            clk_disable(uVar1);
            clk_unprepare(uVar1);
            *(arg1_00 + 0x1cc) = 0;
        }
        sym.msm_eusb2_phy_power(arg1_00,0);
    }
    return 0;
}


// ===== sym.msm_eusb2_phy_init @ 0x080017bc (size 3304) =====

ulong sym.msm_eusb2_phy_init(int64_t arg1)

{
    int64_t *piVar1;
    uint8_t uVar2;
    char cVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint32_t uVar10;
    int iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x180) != 0) && (uVar7 = sym.readl_relaxed(*(arg1 + 0x180)), (uVar7 & 1) != 0)) {
        if ((*(arg1 + 0x10) & 1) == 0) {
            sym.msm_eusb2_phy_power(arg1,1);
            sym.msm_eusb2_phy_clocks(arg1);
            uVar8 = sym.msm_eusb2_repeater_reset_and_init(arg1);
            return uVar8;
        }
        qcom_scm_io_writel(*(arg1 + 0x178),0);
        *(arg1 + 400) = 1;
    }
    uVar8 = sym.msm_eusb2_phy_power(arg1,1);
    if (uVar8 != 0) {
        return uVar8;
    }
    uVar8 = sym.msm_eusb2_repeater_reset_and_init(arg1);
    if (uVar8 != 0) {
        return uVar8;
    }
    sym.msm_eusb2_phy_clocks(arg1);
    iVar5 = reset_control_assert(*(arg1 + 0x1a8));
    if (iVar5 != 0) {
        _dev_err(*arg1,"phy reset assert failed\n");
    }
    usleep_range_state(100,0x96,2);
    iVar5 = reset_control_deassert(*(arg1 + 0x1a8));
    if (iVar5 != 0) {
        _dev_err(*arg1,"phy reset deassert failed\n");
    }
    piVar1 = arg1 + 0x170;
    iVar9 = *(arg1 + 0x170) + 0x94;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 2,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 1 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",2,0x94);
    }
    iVar9 = *piVar1 + 0x50;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 2,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 1 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",2,0x50);
    }
    iVar9 = *piVar1 + 0x54;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 9,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if (((uVar6 ^ 0xffffffff) & 9) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",9,0x54);
    }
    iVar9 = *piVar1 + 0x130;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 4,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 2 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",4,0x130);
    }
    iVar9 = *piVar1 + 0x98;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffffbf,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 6 & 1) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x98);
    }
    iVar9 = *piVar1 + 0xb8;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 1,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",1,0xb8);
    }
    iVar9 = clk_get_rate(*(arg1 + 0x198));
    if (iVar9 == 38400000) {
        iVar9 = *piVar1 + 0x54;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff8f | 0x40,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0x70) != 0x40) {
            _printk(0x8000805,"msm_eusb2_write_readback",0x40,0x54);
        }
        iVar9 = *piVar1 + 0x5c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff00 | 200,iVar9);
        cVar3 = sym.readl_relaxed(iVar9);
        if (cVar3 != -0x38) {
            _printk(0x8000805,"msm_eusb2_write_readback",200,0x5c);
        }
        iVar9 = *piVar1 + 0x60;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xfffffff0,iVar9);
        uVar7 = sym.readl_relaxed(iVar9);
        if ((uVar7 & 0xf) == 0) goto code_r0x08001adc;
        uVar8 = 0;
    }
    else {
        if (iVar9 != 19200000) {
            _dev_err(*arg1,"unsupported ref_clk_freq:%lu\n",iVar9);
            goto code_r0x08001adc;
        }
        iVar9 = *piVar1 + 0x54;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff8f,iVar9);
        uVar7 = sym.readl_relaxed(iVar9);
        if ((uVar7 & 0x70) != 0) {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x54);
        }
        iVar9 = *piVar1 + 0x5c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff00 | 0x90,iVar9);
        cVar3 = sym.readl_relaxed(iVar9);
        if (cVar3 != -0x70) {
            _printk(0x8000805,"msm_eusb2_write_readback",0x90,0x5c);
        }
        iVar9 = *piVar1 + 0x60;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xfffffff0 | 1,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0xf) == 1) goto code_r0x08001adc;
        uVar8 = 1;
    }
    _printk(0x8000805,"msm_eusb2_write_readback",uVar8,0x60);
code_r0x08001adc:
    iVar9 = *piVar1 + 0x60;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff0f,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 0xf0) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x60);
    }
    iVar9 = *piVar1 + 0x58;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff01 | 2,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0xfe) != 2) {
        _printk(0x8000805,"msm_eusb2_write_readback",2,0x58);
    }
    iVar9 = *piVar1 + 0x68;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff03 | 0x20,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0xfc) != 0x20) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x20,0x68);
    }
    iVar9 = *piVar1 + 0x68;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffffc | 1,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 3) != 1) {
        _printk(0x8000805,"msm_eusb2_write_readback",1,0x68);
    }
    iVar9 = *piVar1 + 0x6c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffffe0 | 0x10,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0x1f) != 0x10) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x10,0x6c);
    }
    iVar9 = *piVar1 + 0x70;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffff8,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 7) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x70);
    }
    iVar9 = *piVar1 + 0x6c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff3f | 0x40,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0xc0) != 0x40) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x40,0x6c);
    }
    iVar9 = *piVar1 + 100;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 0x10,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 4 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x10,100);
    }
    iVar9 = *piVar1 + 0x7c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffff8,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 7) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x7c);
    }
    iVar9 = *piVar1 + 0x7c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff9f | 0x40,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0x60) != 0x40) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x40,0x7c);
    }
    iVar9 = *piVar1 + 0x7c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffffe7 | 8,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0x18) != 8) {
        _printk(0x8000805,"msm_eusb2_write_readback",8,0x7c);
    }
    iVar9 = *piVar1 + 0x78;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffffc7 | 0x18,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 & 0x38) != 0x18) {
        _printk(0x8000805,"msm_eusb2_write_readback",0x18,0x78);
    }
    iVar9 = *piVar1 + 0x78;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xffffff3f,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 0xc0) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x78);
    }
    iVar5 = *(arg1 + 0x218);
    if (0 < iVar5) {
        iVar11 = 0;
        iVar9 = *(arg1 + 0x170);
        iVar12 = *(arg1 + 0x210);
        do {
            sym.writel_relaxed(*(iVar12 + iVar11 * 4),iVar9 + *(iVar12 + (iVar11 + 1) * 4));
            iVar11 = iVar11 + 2;
        } while (iVar11 < iVar5);
    }
    uVar2 = *(arg1 + 0x228);
    if (uVar2 - 1 < 7) {
        iVar9 = *piVar1 + 0x7c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xfffffff8 | uVar2,iVar9);
        uVar4 = sym.readl_relaxed(iVar9);
        if ((uVar4 & 7) != uVar2) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar2,0x7c);
        }
    }
    if (*(arg1 + 0x229) - 1 < 4) {
        uVar10 = *(arg1 + 0x229) << 5;
        iVar9 = *piVar1 + 0x7c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff9f | uVar10,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0x60) != uVar10) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar10,0x7c);
        }
    }
    if (*(arg1 + 0x22a) - 1 < 4) {
        uVar10 = *(arg1 + 0x22a) << 3;
        iVar9 = *piVar1 + 0x7c;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffffe7 | uVar10,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0x18) != uVar10) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar10,0x7c);
        }
    }
    if (*(arg1 + 0x22b) - 1 < 7) {
        uVar10 = *(arg1 + 0x22b) << 3;
        iVar9 = *piVar1 + 0x78;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffffc7 | uVar10,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0x38) != uVar10) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar10,0x78);
        }
    }
    if (*(arg1 + 0x22c) - 1 < 4) {
        uVar10 = *(arg1 + 0x22c) << 6;
        iVar9 = *piVar1 + 0x78;
        uVar6 = sym.readl_relaxed(iVar9);
        sym.writel_relaxed(uVar6 & 0xffffff3f | uVar10,iVar9);
        uVar6 = sym.readl_relaxed(iVar9);
        if ((uVar6 & 0xc0) != uVar10) {
            _printk(0x8000805,"msm_eusb2_write_readback",uVar10,0x78);
        }
    }
    iVar9 = *piVar1 + 100;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 0xc,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((~uVar6 & 0xc) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0xc,100);
    }
    iVar9 = *piVar1 + 0x3c;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 1,iVar9);
    uVar7 = sym.readl_relaxed(iVar9);
    if ((uVar7 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",1,0x3c);
    }
    iVar9 = *piVar1 + 0x54;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 | 2,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 1 & 1) == 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",2,0x54);
    }
    iVar9 = *piVar1 + 0x54;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffffb,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 2 & 1) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x54);
    }
    iVar9 = *piVar1 + 0x50;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffffd,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 1 & 1) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,0x50);
    }
    iVar9 = *piVar1 + 100;
    uVar6 = sym.readl_relaxed(iVar9);
    sym.writel_relaxed(uVar6 & 0xfffffff7,iVar9);
    uVar6 = sym.readl_relaxed(iVar9);
    if ((uVar6 >> 3 & 1) != 0) {
        _printk(0x8000805,"msm_eusb2_write_readback",0,100);
    }
    return 0;
}


// ===== sym.msm_eusb2_phy_set_suspend @ 0x080024a4 (size 384) =====

ulong sym.msm_eusb2_phy_set_suspend(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg2;
    if ((iVar1 != 0) && (*(arg1 + 0x1ce) != '\0')) {
        return 0;
    }
    if (iVar1 == 0) {
        sym.msm_eusb2_phy_clocks(arg1);
    }
    else if ((*(arg1 + 0x1cf) == '\0') && (uVar2 = *(arg1 + 0x10), (uVar2 & 1) == 0)) {
        if (*(arg1 + 400) != '\0') {
            qcom_scm_io_writel(*(arg1 + 0x178),1);
            uVar2 = *(arg1 + 0x10);
            *(arg1 + 400) = 0;
        }
        if ((uVar2 >> 6 & 1) == 0) {
            if (*(arg1 + 0x1cc) != '\0') {
                uVar3 = *(arg1 + 0x1a0);
                clk_disable(uVar3);
                clk_unprepare(uVar3);
                uVar3 = *(arg1 + 0x198);
                clk_disable(uVar3);
                clk_unprepare(uVar3);
                *(arg1 + 0x1cc) = 0;
            }
            sym.msm_eusb2_phy_power(arg1,0);
            iVar4 = *(arg1 + 0x230);
            if (iVar4 != 0) {
                pcVar5 = *(iVar4 + 0x28);
                if (pcVar5 != NULL) {
                    __cfi_slowpath_diag(0x2795f870d8daa47d,pcVar5,0x8000240);
                    (*pcVar5)(iVar4,0);
                    iVar4 = *(arg1 + 0x230);
                    if (iVar4 == 0) goto code_r0x080025fc;
                }
                pcVar5 = *(iVar4 + 0x48);
                if (pcVar5 != NULL) {
                    __cfi_slowpath_diag(0xe9fb39b578da0cf6,pcVar5,0x8000280);
                    (*pcVar5)(iVar4);
                }
            }
        }
    }
    else if (*(arg1 + 0x1cc) != '\0') {
        uVar3 = *(arg1 + 0x1a0);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
        uVar3 = *(arg1 + 0x198);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
        *(arg1 + 0x1cc) = 0;
    }
code_r0x080025fc:
    *(arg1 + 0x1ce) = iVar1 != 0;
    return 0;
}


// ===== sym.msm_eusb2_phy_notify_connect @ 0x08002624 (size 812) =====

ulong sym.msm_eusb2_phy_notify_connect(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    char cVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x1cf) = 1;
    if ((4 < arg2) && ((*(arg1 + 0x10) & 1) == 0)) {
        iVar1 = *(arg1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\0') {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x130);
        }
        iVar1 = *(arg1 + 0x170) + 0x138;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 5,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\x05') {
            _printk(0x8000805,"msm_eusb2_write_readback",5,0x138);
        }
        iVar1 = *(arg1 + 0x170) + 0x13c;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 0x80,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != -0x80) {
            _printk(0x8000805,"msm_eusb2_write_readback",0x80,0x13c);
        }
        iVar1 = *(arg1 + 0x170) + 0x13c;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 0xc0,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != -0x40) {
            _printk(0x8000805,"msm_eusb2_write_readback",0xc0,0x13c);
        }
        iVar1 = *(arg1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 3,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\x03') {
            _printk(0x8000805,"msm_eusb2_write_readback",3,0x130);
        }
        __const_udelay(0x218e);
        iVar1 = *(arg1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\0') {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x130);
        }
        iVar1 = *(arg1 + 0x170) + 0x13c;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\0') {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x13c);
        }
        iVar1 = *(arg1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00 | 3,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\x03') {
            _printk(0x8000805,"msm_eusb2_write_readback",3,0x130);
        }
        __const_udelay(0x218e);
        iVar1 = *(arg1 + 0x170) + 0x130;
        uVar3 = sym.readl_relaxed(iVar1);
        sym.writel_relaxed(uVar3 & 0xffffff00,iVar1);
        cVar2 = sym.readl_relaxed(iVar1);
        if (cVar2 != '\0') {
            _printk(0x8000805,"msm_eusb2_write_readback",0,0x130);
        }
    }
    return 0;
}


// ===== sym.msm_eusb2_phy_notify_disconnect @ 0x08002950 (size 24) =====

ulong sym.msm_eusb2_phy_notify_disconnect(int64_t arg1)

{
    *(arg1 + 0x1cf) = 0;
    return 0;
}


// ===== sym.msm_eusb2_phy_set_power @ 0x08002968 (size 76) =====

ulong sym.msm_eusb2_phy_set_power(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) || (*(arg1 + 0x1cf) == '\0')) {
        *(arg1 + 0x1d8) = arg2;
        queue_work_on(0x20,_single_release,arg1 + 0x1e0);
    }
    return 0;
}


// ===== sym.msm_eusb2_phy_vbus_draw_work @ 0x080029b4 (size 196) =====

uint64_t sym.msm_eusb2_phy_vbus_draw_work(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    if (*(arg1 + -0x10) == 0) {
        iVar4 = power_supply_get_by_name(0x8000b67);
        *(arg1 + -0x10) = iVar4;
        if (iVar4 != 0) goto code_r0x08002a14;
        uVar5 = _dev_err(*(arg1 + -0x1e0),"Could not get usb psy\n");
    }
    else {
code_r0x08002a14:
        _dev_info(*(arg1 + -0x1e0),"Avail curr from USB = %u\n",*(arg1 + -8));
        uStack_30 = CONCAT44(uStack_30._4_4_,*(arg1 + -8) * 1000);
        uVar5 = power_supply_set_property(*(arg1 + -0x10),0x25,&uStack_30);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    auVar10 = __stack_chk_fail();
    puVar6 = auVar10._0_8_;
    *extraout_x18 = sym.msm_eusb2_phy_power;
    if (*(puVar6 + 0x1cd) == (auVar10._8_4_ & 1)) {
        uVar2 = 0;
        goto code_r0x08002be4;
    }
    if ((auVar10._8_4_ & 1) == 0) {
        uVar2 = sym.readl_relaxed(puVar6[0x31]);
        sym.writel_relaxed(uVar2 & 0xfffffffe,puVar6[0x31]);
        DataSynchronizationBarrier(3,3,0);
        iVar3 = regulator_disable(puVar6[0x37]);
        if (iVar3 != 0) {
            uVar7 = *puVar6;
            pcVar8 = "Unable to disable vdda12:%d\n";
code_r0x08002ce4:
            _dev_err(uVar7,pcVar8,iVar3);
        }
        iVar3 = regulator_set_voltage(puVar6[0x37],0,1200000);
        if (iVar3 != 0) {
            uVar7 = *puVar6;
            pcVar8 = "Unable to set (0) voltage for vdda12:%d\n";
code_r0x08002ccc:
            _dev_err(uVar7,pcVar8,iVar3);
        }
        iVar3 = regulator_set_load(puVar6[0x37],0);
        if (iVar3 < 0) {
            _dev_err(*puVar6,"Unable to set LPM of vdda12\n");
        }
code_r0x08002b80:
        iVar3 = regulator_disable(puVar6[0x36]);
        if (iVar3 != 0) {
            _dev_err(*puVar6,"Unable to disable vdd:%d\n",iVar3);
        }
code_r0x08002b8c:
        iVar3 = regulator_set_voltage(puVar6[0x36],*(puVar6 + 0x38),*(puVar6 + 0x39));
        if (iVar3 != 0) {
            pcVar8 = "unable to set voltage for hsusb vdd\n";
code_r0x08002c70:
            _dev_err(*puVar6,pcVar8);
        }
        uVar2 = regulator_set_load(puVar6[0x36],0);
        if (uVar2 < 0) {
            _dev_err(*puVar6,"Unable to set LPM of vdd\n");
            cVar1 = *(puVar6 + 0x1cd);
        }
        else {
            cVar1 = *(puVar6 + 0x1cd);
        }
        if (cVar1 == '\0') {
            uVar2 = 0xffffffea;
            goto code_r0x08002be4;
        }
code_r0x08002bbc:
        uVar9 = 0;
    }
    else {
        uVar2 = regulator_set_load(puVar6[0x36],0x1e4d);
        if (uVar2 < 0) {
            _dev_err(*puVar6,"Unable to set HPM of vdd:%d\n",uVar2);
            goto code_r0x08002bbc;
        }
        iVar3 = regulator_set_voltage(puVar6[0x36],*(puVar6 + 0x1c4),*(puVar6 + 0x39));
        if (iVar3 != 0) {
            pcVar8 = "Unable to set voltage for hsusb vdd\n";
            goto code_r0x08002c70;
        }
        iVar3 = regulator_enable(puVar6[0x36]);
        if (iVar3 != 0) {
            _dev_err(*puVar6,"Unable to enable VDD\n");
            goto code_r0x08002b8c;
        }
        iVar3 = regulator_set_load(puVar6[0x37],0x1711);
        if (iVar3 < 0) {
            _dev_err(*puVar6,"Unable to set HPM of vdda12:%d\n",iVar3);
            goto code_r0x08002b80;
        }
        iVar3 = regulator_set_voltage(puVar6[0x37],1200000,1200000);
        if (iVar3 != 0) {
            uVar7 = *puVar6;
            pcVar8 = "Unable to set voltage for vdda12:%d\n";
            goto code_r0x08002ccc;
        }
        iVar3 = regulator_enable(puVar6[0x37]);
        if (iVar3 != 0) {
            uVar7 = *puVar6;
            pcVar8 = "Unable to enable vdda12:%d\n";
            goto code_r0x08002ce4;
        }
        DataSynchronizationBarrier(3,3,0);
        uVar9 = 1;
        sym.writel_relaxed(1,puVar6[0x31]);
        uVar2 = 0;
    }
    *(puVar6 + 0x1cd) = uVar9;
code_r0x08002be4:
    return uVar2;
}


// ===== sym.msm_eusb2_phy_power @ 0x08002a78 (size 628) =====

int sym.msm_eusb2_phy_power(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    uchar uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x1cd) == (arg2 & 1)) {
        return 0;
    }
    if ((arg2 & 1U) == 0) {
        uVar3 = sym.readl_relaxed(*(arg1 + 0x188));
        sym.writel_relaxed(uVar3 & 0xfffffffe,*(arg1 + 0x188));
        DataSynchronizationBarrier(3,3,0);
        iVar2 = regulator_disable(*(arg1 + 0x1b8));
        if (iVar2 != 0) {
            uVar4 = *arg1;
            pcVar5 = "Unable to disable vdda12:%d\n";
code_r0x08002ce4:
            _dev_err(uVar4,pcVar5,iVar2);
        }
        iVar2 = regulator_set_voltage(*(arg1 + 0x1b8),0,1200000);
        if (iVar2 != 0) {
            uVar4 = *arg1;
            pcVar5 = "Unable to set (0) voltage for vdda12:%d\n";
code_r0x08002ccc:
            _dev_err(uVar4,pcVar5,iVar2);
        }
        iVar2 = regulator_set_load(*(arg1 + 0x1b8),0);
        if (iVar2 < 0) {
            _dev_err(*arg1,"Unable to set LPM of vdda12\n");
        }
code_r0x08002b80:
        iVar2 = regulator_disable(*(arg1 + 0x1b0));
        if (iVar2 != 0) {
            _dev_err(*arg1,"Unable to disable vdd:%d\n",iVar2);
        }
code_r0x08002b8c:
        iVar2 = regulator_set_voltage(*(arg1 + 0x1b0),*(arg1 + 0x1c0),*(arg1 + 0x1c8));
        if (iVar2 != 0) {
            pcVar5 = "unable to set voltage for hsusb vdd\n";
code_r0x08002c70:
            _dev_err(*arg1,pcVar5);
        }
        iVar2 = regulator_set_load(*(arg1 + 0x1b0),0);
        if (iVar2 < 0) {
            _dev_err(*arg1,"Unable to set LPM of vdd\n");
            cVar1 = *(arg1 + 0x1cd);
        }
        else {
            cVar1 = *(arg1 + 0x1cd);
        }
        if (cVar1 == '\0') {
            return -0x16;
        }
    }
    else {
        iVar2 = regulator_set_load(*(arg1 + 0x1b0),0x1e4d);
        if (-1 < iVar2) {
            iVar2 = regulator_set_voltage(*(arg1 + 0x1b0),*(arg1 + 0x1c4),*(arg1 + 0x1c8));
            if (iVar2 == 0) {
                iVar2 = regulator_enable(*(arg1 + 0x1b0));
                if (iVar2 == 0) {
                    iVar2 = regulator_set_load(*(arg1 + 0x1b8),0x1711);
                    if (-1 < iVar2) {
                        iVar2 = regulator_set_voltage(*(arg1 + 0x1b8),1200000,1200000);
                        if (iVar2 == 0) {
                            iVar2 = regulator_enable(*(arg1 + 0x1b8));
                            if (iVar2 == 0) {
                                DataSynchronizationBarrier(3,3,0);
                                uVar6 = 1;
                                sym.writel_relaxed(1,*(arg1 + 0x188));
                                iVar2 = 0;
                                goto code_r0x08002bc0;
                            }
                            uVar4 = *arg1;
                            pcVar5 = "Unable to enable vdda12:%d\n";
                            goto code_r0x08002ce4;
                        }
                        uVar4 = *arg1;
                        pcVar5 = "Unable to set voltage for vdda12:%d\n";
                        goto code_r0x08002ccc;
                    }
                    _dev_err(*arg1,"Unable to set HPM of vdda12:%d\n",iVar2);
                    goto code_r0x08002b80;
                }
                _dev_err(*arg1,"Unable to enable VDD\n");
                goto code_r0x08002b8c;
            }
            pcVar5 = "Unable to set voltage for hsusb vdd\n";
            goto code_r0x08002c70;
        }
        _dev_err(*arg1,"Unable to set HPM of vdd:%d\n",iVar2);
    }
    uVar6 = 0;
code_r0x08002bc0:
    *(arg1 + 0x1cd) = uVar6;
    return iVar2;
}


// ===== sym.msm_eusb2_phy_clocks @ 0x08002cec (size 136) =====

void sym.msm_eusb2_phy_clocks(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x1cc) != '\x01') {
        uVar2 = *(arg1 + 0x198);
        iVar1 = clk_prepare(uVar2);
        if ((iVar1 == 0) && (iVar1 = clk_enable(uVar2), iVar1 != 0)) {
            clk_unprepare(uVar2);
        }
        uVar2 = *(arg1 + 0x1a0);
        iVar1 = clk_prepare(uVar2);
        if ((iVar1 == 0) && (iVar1 = clk_enable(uVar2), iVar1 != 0)) {
            clk_unprepare(uVar2);
        }
        *(arg1 + 0x1cc) = 1;
    }
    return;
}


// ===== sym.msm_eusb2_repeater_reset_and_init @ 0x08002d74 (size 348) =====

int sym.msm_eusb2_repeater_reset_and_init(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x230) == 0) {
        return 0;
    }
    *(*(arg1 + 0x230) + 0x10) = *(arg1 + 0x10);
    iVar3 = *(arg1 + 0x230);
    if (iVar3 == 0) {
        return 0;
    }
    pcVar4 = *(iVar3 + 0x40);
    if (pcVar4 == NULL) {
code_r0x08002ddc:
        iVar3 = *(arg1 + 0x230);
        if (iVar3 == 0) {
            return 0;
        }
    }
    else {
        __cfi_slowpath_diag(0xe9fb39b578da0cf6,pcVar4,0x8000220);
        iVar2 = (*pcVar4)(iVar3);
        if (iVar2 == 0) goto code_r0x08002ddc;
        _dev_err(*arg1,"repeater powerup failed.\n");
        iVar3 = *(arg1 + 0x230);
        if (iVar3 == 0) {
            return 0;
        }
    }
    pcVar4 = *(iVar3 + 0x28);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0x2795f870d8daa47d,pcVar4,0x8000240);
        iVar2 = (*pcVar4)(iVar3,1);
        if (iVar2 != 0) {
            _dev_err(*arg1,"repeater reset failed.\n");
            iVar3 = *(arg1 + 0x230);
            if (iVar3 == 0) {
                return 0;
            }
            goto code_r0x08002e24;
        }
    }
    iVar3 = *(arg1 + 0x230);
    if (iVar3 == 0) {
        return 0;
    }
code_r0x08002e24:
    pcVar4 = *(iVar3 + 0x30);
    if (pcVar4 == NULL) {
        return 0;
    }
    uVar1 = *(arg1 + 0x10);
    __cfi_slowpath_diag(0x176ac9d9535a0da,pcVar4,0x8000260);
    iVar2 = (*pcVar4)(iVar3,uVar1);
    if (iVar2 != 0) {
        _dev_err(*arg1,"repeater init failed.\n");
        return iVar2;
    }
    return 0;
}


// ===== sym.readl_relaxed @ 0x08002ed0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002ed4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8002f08);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08002f40 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002f5c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002f84);
    return;
}


// ===== sym.apb_reg_rw_write @ 0x08002fb8 (size 784) =====

uint64_t sym.apb_reg_rw_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint16_t auStack_78 [2];
    uint8_t auStack_74 [4];
    ulong *puStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    uVar7 = arg3;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    auStack_74[0] = 0;
    puVar9 = *(*(arg1 + 0xd8) + 0x80);
    auStack_78[0] = 0;
    if (*(puVar9 + 0x1cf) == '\0') {
        _dev_err(*puVar9,"eUSB2 PHY is not out of reset.\n");
        uVar7 = 0xffffffffffffffea;
    }
    else {
        uVar8 = uVar7;
        if (0x1e < uVar7) {
            uVar8 = 0x1f;
        }
        __check_object_size(&uStack_68,uVar8,0);
        iVar5 = sym._copy_from_user(&uStack_68,arg2,uVar8);
        if (iVar5 == 0) {
            puStack_70 = &uStack_68;
            pcVar6 = strsep(&puStack_70,0x8000670);
            if ((pcVar6 != NULL) && (*pcVar6 != '\0')) {
                iVar2 = strcmp(pcVar6,"read");
                if ((iVar2 == 0) || (iVar3 = strcmp(pcVar6,"write"), iVar3 == 0)) {
                    iVar5 = strsep(&puStack_70,0x8000670);
                    if (iVar5 == 0) {
                        pcVar6 = "Provide register offset\n";
                    }
                    else {
                        iVar3 = kstrtou8(iVar5,0x10,auStack_74);
                        if (iVar3 == 0) {
                            if (iVar2 == 0) {
                                uVar8 = auStack_74[0];
                                sym.writel(uVar8,puVar9[0x2e] + 0x138);
                                sym.writel(2,puVar9[0x2e] + 0x130);
                                ktime_get();
                                sym.readl(puVar9[0x2e] + 0x134);
                                uVar4 = sym.readl(puVar9[0x2e] + 0x144);
                                iVar2 = sym.readl(puVar9[0x2e] + 0x148);
                                sym.writel(0,puVar9[0x2e] + 0x130);
                                _dev_info(*puVar9,"APB reg(%x) read success, val:%x\n",uVar8,uVar4 | iVar2 << 8);
                                goto code_r0x08003044;
                            }
                            iVar5 = strsep(&puStack_70,0x8000670);
                            if (iVar5 == 0) {
                                pcVar6 = "Provide value to update register\n";
                            }
                            else {
                                iVar2 = kstrtou16(iVar5,0x10,auStack_78);
                                uVar1 = auStack_78[0];
                                if (iVar2 == 0) {
                                    uVar8 = auStack_74[0];
                                    sym.writel(uVar8,puVar9[0x2e] + 0x138);
                                    sym.writel(uVar1 >> 8 & 0xf,puVar9[0x2e] + 0x140);
                                    sym.writel(uVar1 & 0xf,puVar9[0x2e] + 0x13c);
                                    sym.writel(3,puVar9[0x2e] + 0x130);
                                    ktime_get();
                                    sym.readl(puVar9[0x2e] + 0x134);
                                    sym.writel(0,puVar9[0x2e] + 0x130);
                                    _dev_info(*puVar9,"APB reg(%x) updated with %x\n",uVar8,uVar1);
                                    goto code_r0x08003044;
                                }
                                pcVar6 = "Invalid value\n";
                            }
                        }
                        else {
                            pcVar6 = "Invalid register offset\n";
                        }
                    }
                    _dev_err(*puVar9,pcVar6);
                }
            }
            _printk(0x8000af8,"apb_reg_rw_write");
            _printk(0x80007c2,"apb_reg_rw_write");
            _printk(0x8000841,"apb_reg_rw_write");
            _printk(0x800056a,"apb_reg_rw_write");
            _printk(0x80005a0,"apb_reg_rw_write");
        }
        else {
            uVar7 = 0xfffffffffffffff2;
        }
    }
code_r0x08003044:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.apb_reg_rw_open;
    uVar7 = single_open(auVar10._8_8_,0,*(auVar10._0_8_ + 0x2d8));
    return uVar7;
}


// ===== sym.apb_reg_rw_open @ 0x080032c8 (size 48) =====

void sym.apb_reg_rw_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,0,*(arg1 + 0x2d8));
    return;
}


// ===== sym._copy_from_user @ 0x080032f8 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_devm_usb_get_repeater_by_phandle >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((_devm_usb_get_repeater_by_phandle >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.writel @ 0x080034ac (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80034c8);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80034f4);
    return;
}


// ===== sym.readl @ 0x08003528 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800352c);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8003570);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x080035a8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080035ec

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
    //switch table (4 cases) at 0x80002a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003600);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003604 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08003638 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt);
    return;
}

