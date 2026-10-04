// decompiled from phy-msm-m31-eusb2 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x080024c0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x614cf58593a4b8d6) {
                pcVar2 = sym.msm_m31_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) goto code_r0x08002480;
                pcVar2 = sym.msm_m31_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.msm_m31_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
code_r0x0800115c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002480;
            }
            if (arg1 != -0x5e5b96c73454931) goto code_r0x08002480;
            pcVar2 = sym.msm_m31_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
        }
    }
    else if (arg1 < 0x7cedcdc737e35bbf) {
        if (arg1 != 0x2b3a43e29242445) {
            if (arg1 != 0x64ea1348e09a6946) goto code_r0x08002480;
            pcVar2 = sym.msm_m31_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
            goto code_r0x0800115c;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x7cedcdc737e35bbf) {
        pcVar2 = sym.msm_m31_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002480;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002480:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024d4);
    (*pcVar1)();
}


// ===== sym.msm_m31_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.msm_m31_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong uVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != 0) && (*(param_1 + 0x1ce) != '\0')) {
        return 0;
    }
    if (param_2 == 0) {
        sym.msm_m31_eusb2_phy_clocks(param_1);
    }
    else if ((*(param_1 + 0x1cf) == '\0') && (uVar2 = *(param_1 + 0x10), (uVar2 & 1) == 0)) {
        if (*(param_1 + 400) != '\0') {
            qcom_scm_io_writel(*(param_1 + 0x178),1);
            uVar2 = *(param_1 + 0x10);
            *(param_1 + 400) = 0;
        }
        if ((uVar2 >> 6 & 1) == 0) {
            iVar3 = *(param_1 + 0x1a0);
            if ((iVar3 != 0) && (*(param_1 + 0x1d0) != '\0')) {
                clk_disable(iVar3);
                clk_unprepare(iVar3);
                *(param_1 + 0x1d0) = 0;
            }
            if (*(param_1 + 0x1cc) != '\0') {
                iVar3 = *(param_1 + 0x1a0);
                if (iVar3 != 0) {
                    clk_disable(iVar3);
                    clk_unprepare(iVar3);
                }
                uVar4 = *(param_1 + 0x198);
                clk_disable(uVar4);
                clk_unprepare(uVar4);
                *(param_1 + 0x1cc) = 0;
            }
            sym.msm_m31_eusb2_phy_power(param_1,0);
            iVar3 = *(param_1 + 0x238);
            if (iVar3 != 0) {
                pcVar5 = *(iVar3 + 0x28);
                if (pcVar5 != NULL) {
                    __cfi_slowpath_diag(0x2795f870d8daa47d,pcVar5,0x8000190);
                    (*pcVar5)(iVar3,0);
                    iVar3 = *(param_1 + 0x238);
                    if (iVar3 == 0) goto code_r0x08001d30;
                }
                pcVar5 = *(iVar3 + 0x48);
                if (pcVar5 != NULL) {
                    __cfi_slowpath_diag(0xe9fb39b578da0cf6,pcVar5,0x80001d0);
                    (*pcVar5)(iVar3);
                }
            }
        }
    }
    else {
        if (*(param_1 + 0x1cc) != '\0') {
            iVar3 = *(param_1 + 0x1a0);
            if (iVar3 != 0) {
                clk_disable(iVar3);
                clk_unprepare(iVar3);
            }
            uVar4 = *(param_1 + 0x198);
            clk_disable(uVar4);
            clk_unprepare(uVar4);
            *(param_1 + 0x1cc) = 0;
        }
        iVar3 = *(param_1 + 0x1a0);
        if ((iVar3 != 0) && (*(param_1 + 0x1d0) == '\0')) {
            *(param_1 + 0x1d0) = 1;
            iVar1 = clk_prepare(iVar3);
            if ((iVar1 == 0) && (iVar1 = clk_enable(iVar3), iVar1 != 0)) {
                clk_unprepare(iVar3);
            }
        }
    }
code_r0x08001d30:
    *(param_1 + 0x1ce) = param_2 != 0;
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011a0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_m31_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011a8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_m31_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt,obj.__this_module)
    ;
    return;
}


// ===== sym.msm_m31_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x080011b0 (size 8) =====

void sym.msm_m31_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    if (*(param_1 + -0x10) == 0) {
        iVar1 = power_supply_get_by_name(0x8000675);
        *(param_1 + -0x10) = iVar1;
        if (iVar1 == 0) {
            _dev_err(*(param_1 + -0x1e8),"Could not get usb psy\n");
            goto code_r0x08001e5c;
        }
    }
    _dev_info(*(param_1 + -0x1e8),"Avail curr from USB = %u\n",*(param_1 + -8));
    uStack_30 = CONCAT44(uStack_30._4_4_,*(param_1 + -8) * 1000);
    power_supply_set_property(*(param_1 + -0x10),0x25,&uStack_30);
code_r0x08001e5c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    puVar2 = __stack_chk_fail();
    *extraout_x18 = sym.msm_m31_eusb2_phy_create_debugfs;
    iVar1 = (*puVar2)[0xe];
    if (iVar1 == 0) {
        iVar1 = **puVar2;
    }
    uVar3 = debugfs_create_dir(iVar1,0);
    puVar2[0x45] = uVar3;
    debugfs_create_x8("xcfgi_39_32",0x1a4,uVar3,puVar2 + 0x46);
    *(puVar2 + 0x46) = 0xff;
    debugfs_create_x8("xcfgi_71_64",0x1a4,puVar2[0x45],puVar2 + 0x231);
    *(puVar2 + 0x231) = 0xff;
    debugfs_create_x8("xcfgi_31_24",0x1a4,puVar2[0x45],puVar2 + 0x232);
    *(puVar2 + 0x232) = 0xff;
    debugfs_create_x8("xcfgi_7_0",0x1a4,puVar2[0x45],puVar2 + 0x233);
    *(puVar2 + 0x233) = 0xff;
    return;
}


// ===== sym.msm_m31_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x080011b8 (size 8) =====

ulong sym.msm_m31_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1,uint param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x1e0) = param_2;
    queue_work_on(0x20,_devm_kmalloc,param_1 + 0x1e8);
    return 0;
}


// ===== sym.msm_m31_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x080011c0 (size 8) =====

int sym.msm_m31_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(ulong *param_1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int iVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    int64_t *piVar12;
    int *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar12 = param_1[0x48];
    if ((param_1[0x30] != 0) && (uVar8 = sym.readl_relaxed(param_1[0x30]), (uVar8 & 1) != 0)) {
        if ((*(param_1 + 2) & 1) == 0) {
            sym.msm_m31_eusb2_phy_power(param_1,1);
            iVar4 = sym.msm_m31_eusb2_repeater_reset_and_init(param_1);
            return iVar4;
        }
        qcom_scm_io_writel(param_1[0x2f],0);
        *(param_1 + 0x32) = 1;
    }
    iVar4 = sym.msm_m31_eusb2_phy_power(param_1,1);
    if (iVar4 == 0) {
        iVar4 = sym.msm_m31_eusb2_repeater_reset_and_init(param_1);
        if (iVar4 == 0) {
            sym.msm_m31_eusb2_phy_clocks(param_1);
            iVar4 = reset_control_assert(param_1[0x35]);
            if (iVar4 != 0) {
                _dev_err(*param_1,"phy reset assert failed\n");
            }
            usleep_range_state(100,0x96,2);
            iVar4 = reset_control_deassert(param_1[0x35]);
            if (iVar4 != 0) {
                _dev_err(*param_1,"phy reset deassert failed\n");
            }
            iVar4 = piVar12[1];
            if (0 < iVar4) {
                piVar13 = *piVar12 + 8;
                do {
                    uVar6 = piVar13[-1];
                    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
                    uVar2 = *piVar13 << (LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20) & 0x1f);
                    if (uVar6 < uVar2) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001b6c);
                        (*pcVar3)();
                    }
                    uVar7 = piVar13[-2];
                    iVar10 = param_1[0x2e] + uVar7;
                    uVar5 = sym.readl_relaxed(iVar10);
                    sym.writel_relaxed(uVar5 & (uVar6 ^ 0xffffffff) | uVar2,iVar10);
                    uVar5 = sym.readl_relaxed(iVar10);
                    if ((uVar5 & uVar6) != uVar2) {
                        _printk(0x800047b,uVar2,uVar7);
                    }
                    piVar13 = piVar13 + 3;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
            iVar10 = param_1[0x2e] + 0x54;
            uVar6 = sym.readl_relaxed(iVar10);
            sym.writel_relaxed(uVar6 & 0xffffff8f,iVar10);
            uVar8 = sym.readl_relaxed(iVar10);
            if ((uVar8 & 0x70) != 0) {
                _printk(0x800047b,0,0x54);
            }
            iVar4 = piVar12[3];
            if (0 < iVar4) {
                piVar13 = piVar12[2] + 8;
                do {
                    uVar6 = piVar13[-1];
                    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
                    uVar2 = *piVar13 << (LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20) & 0x1f);
                    if (uVar6 < uVar2) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001b70);
                        (*pcVar3)();
                    }
                    uVar7 = piVar13[-2];
                    iVar10 = param_1[0x2e] + uVar7;
                    uVar5 = sym.readl_relaxed(iVar10);
                    sym.writel_relaxed(uVar5 & (uVar6 ^ 0xffffffff) | uVar2,iVar10);
                    uVar5 = sym.readl_relaxed(iVar10);
                    if ((uVar5 & uVar6) != uVar2) {
                        _printk(0x800047b,uVar2,uVar7);
                    }
                    piVar13 = piVar13 + 3;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
            iVar4 = *(param_1 + 0x44);
            puVar11 = *(param_1[0x48] + 0x10);
            if (0 < iVar4) {
                iVar9 = 0;
                iVar10 = param_1[0x43];
                do {
                    sym.writel_relaxed(*(iVar10 + iVar9 * 4),param_1[0x2e] + *(iVar10 + (iVar9 + 1) * 4));
                    iVar9 = iVar9 + 2;
                } while (iVar9 < iVar4);
            }
            if (*(param_1 + 0x46) != 0xff) {
                uVar6 = *puVar11;
                uVar2 = puVar11[1];
                uVar5 = *(param_1 + 0x46) << 2;
                iVar10 = param_1[0x2e] + uVar6;
                uVar7 = sym.readl_relaxed(iVar10);
                sym.writel_relaxed(uVar7 & (uVar2 ^ 0xffffffff) | uVar5,iVar10);
                uVar7 = sym.readl_relaxed(iVar10);
                if ((uVar7 & uVar2) != uVar5) {
                    _printk(0x800047b,uVar5,uVar6);
                }
            }
            uVar1 = *(param_1 + 0x231);
            if (uVar1 != 0xff) {
                uVar6 = puVar11[3];
                uVar2 = puVar11[4];
                iVar10 = param_1[0x2e] + uVar6;
                uVar7 = sym.readl_relaxed(iVar10);
                sym.writel_relaxed(uVar7 & (uVar2 ^ 0xffffffff) | uVar1,iVar10);
                uVar7 = sym.readl_relaxed(iVar10);
                if ((uVar7 & uVar2) != uVar1) {
                    _printk(0x800047b,uVar1,uVar6);
                }
            }
            uVar1 = *(param_1 + 0x232);
            if (uVar1 != 0xff) {
                uVar6 = puVar11[6];
                uVar2 = puVar11[7];
                iVar10 = param_1[0x2e] + uVar6;
                uVar7 = sym.readl_relaxed(iVar10);
                sym.writel_relaxed(uVar7 & (uVar2 ^ 0xffffffff) | uVar1,iVar10);
                uVar7 = sym.readl_relaxed(iVar10);
                if ((uVar7 & uVar2) != uVar1) {
                    _printk(0x800047b,uVar1,uVar6);
                }
            }
            uVar1 = *(param_1 + 0x233);
            if (uVar1 != 0xff) {
                uVar6 = puVar11[9];
                uVar2 = puVar11[10];
                iVar10 = param_1[0x2e] + uVar6;
                uVar7 = sym.readl_relaxed(iVar10);
                sym.writel_relaxed(uVar7 & (uVar2 ^ 0xffffffff) | uVar1,iVar10);
                uVar7 = sym.readl_relaxed(iVar10);
                if ((uVar7 & uVar2) != uVar1) {
                    _printk(0x800047b,uVar1,uVar6);
                }
            }
            iVar4 = piVar12[5];
            if (0 < iVar4) {
                piVar13 = piVar12[4] + 8;
                do {
                    uVar6 = piVar13[-1];
                    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
                    uVar2 = *piVar13 << (LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20) & 0x1f);
                    if (uVar6 < uVar2) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001b74);
                        (*pcVar3)();
                    }
                    uVar7 = piVar13[-2];
                    iVar10 = param_1[0x2e] + uVar7;
                    uVar5 = sym.readl_relaxed(iVar10);
                    sym.writel_relaxed(uVar5 & (uVar6 ^ 0xffffffff) | uVar2,iVar10);
                    uVar5 = sym.readl_relaxed(iVar10);
                    if ((uVar5 & uVar6) != uVar2) {
                        _printk(0x800047b,uVar2,uVar7);
                    }
                    piVar13 = piVar13 + 3;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
            iVar4 = 0;
        }
        else {
            _dev_err(*param_1,"repeater powerup failed.\n");
        }
    }
    return iVar4;
}


// ===== sym.msm_m31_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x080011c8 (size 8) =====

uint64_t sym.msm_m31_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t *arg1;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    arg1 = devm_kmalloc(iVar1,0x248,0xdc0);
    if (arg1 == NULL) {
code_r0x080014bc:
        uVar4 = 0xfffffff4;
    }
    else {
        iVar3 = of_device_get_match_data(iVar1);
        arg1[0x48] = iVar3;
        if (iVar3 != 0) {
            uVar4 = devm_usb_get_repeater_by_phandle(iVar1,"usb-repeater",0);
            if (0xfffffffffffff000 < uVar4) goto code_r0x080014fc;
            iVar3 = platform_get_resource_byname(param_1,0x200,"eusb2_phy_base");
            if (iVar3 == 0) {
                pcVar7 = "missing eusb2phy memory resource\n";
            }
            else {
                uVar5 = devm_ioremap_resource(iVar1,iVar3);
                arg1[0x2e] = uVar5;
                if (0xfffffffffffff000 < uVar5) {
                    _dev_err(iVar1,"ioremap failed\n");
                    uVar4 = *(arg1 + 0x2e);
                    goto code_r0x080014fc;
                }
                piVar6 = platform_get_resource_byname(param_1,0x200,"eud_enable_reg");
                if (piVar6 != NULL) {
                    uVar5 = devm_ioremap_resource(iVar1,piVar6);
                    arg1[0x30] = uVar5;
                    if (0xfffffffffffff000 < uVar5) {
                        _dev_err(iVar1,"eud_enable_reg ioremap err:%d\n",uVar5 & 0xffffffff);
                        uVar4 = uVar5 & 0xffffffff;
                        goto code_r0x080014fc;
                    }
                    arg1[0x2f] = *piVar6;
                }
                iVar3 = platform_get_resource_byname(param_1,0x200,"eud_detect_reg");
                if (iVar3 != 0) {
                    uVar5 = devm_ioremap_resource(iVar1,iVar3);
                    arg1[0x31] = uVar5;
                    if (0xfffffffffffff000 < uVar5) {
                        _dev_err(iVar1,"eud_detect_reg ioremap err:%d\n",uVar5 & 0xffffffff);
                        uVar4 = uVar5 & 0xffffffff;
                        goto code_r0x080014fc;
                    }
                    uVar5 = devm_clk_get(iVar1,"ref_clk_src");
                    arg1[0x33] = uVar5;
                    if (uVar5 < 0xfffffffffffff001) {
                        uVar5 = devm_clk_get_optional(iVar1,"ref_clk");
                        arg1[0x34] = uVar5;
                        if (uVar5 < 0xfffffffffffff001) {
                            uVar5 = __devm_reset_control_get(iVar1,"phy_reset",0,0,0,1);
                            arg1[0x35] = uVar5;
                            if (uVar5 < 0xfffffffffffff001) {
                                uVar2 = of_property_read_variable_u32_array
                                                  (*(param_1 + 0x300),"qcom,vdd-voltage-level",arg1 + 0x38,0,3);
                                if (uVar2 < 2) {
                                    uVar4 = uVar2;
                                    _dev_err(iVar1,"error reading qcom,vdd-voltage-level property\n");
                                    goto code_r0x080014fc;
                                }
                                uVar5 = devm_regulator_get(iVar1,0x80003dc);
                                arg1[0x36] = uVar5;
                                if (0xfffffffffffff000 < uVar5) {
                                    _dev_err(iVar1,"unable to get vdd supply\n");
                                    uVar4 = *(arg1 + 0x36);
                                    goto code_r0x080014fc;
                                }
                                uVar5 = devm_regulator_get(iVar1,"vdda12");
                                arg1[0x37] = uVar5;
                                if (0xfffffffffffff000 < uVar5) {
                                    _dev_err(iVar1,"unable to get vdda12 supply\n");
                                    uVar4 = *(arg1 + 0x37);
                                    goto code_r0x080014fc;
                                }
                                uVar2 = of_property_count_elems_of_size
                                                  (*(param_1 + 0x300),"qcom,param-override-seq",4);
                                *(arg1 + 0x44) = uVar2;
                                if (0 < uVar2) {
                                    if ((uVar2 & 1) != 0) {
                                        _dev_err(iVar1,"invalid param_override_seq_len\n");
                                        uVar4 = 0xffffffea;
                                        goto code_r0x080014fc;
                                    }
                                    iVar3 = devm_kmalloc(iVar1,uVar2 << 2,0xdc0);
                                    arg1[0x43] = iVar3;
                                    if (iVar3 == 0) goto code_r0x080014bc;
                                    uVar5 = of_property_read_variable_u32_array
                                                      (*(param_1 + 0x300),"qcom,param-override-seq",iVar3,0,
                                                       arg1[0x44]);
                                    if ((uVar5 & 1) != 0) {
                                        uVar4 = uVar5 & 0xffffffff;
                                        _dev_err(iVar1,"qcom,param-override-seq read failed %d\n",uVar4);
                                        goto code_r0x080014fc;
                                    }
                                }
                                arg1[0x23] = sym.msm_m31_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                arg1[0x29] = 
                                sym.msm_m31_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                arg1[0x2a] = 
                                sym.msm_m31_eusb2_phy_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                arg1[0x47] = uVar4;
                                *arg1 = iVar1;
                                *(param_1 + 0xa8) = arg1;
                                arg1[0x26] = sym.msm_m31_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                arg1[0x27] = sym.msm_m31_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                *(arg1 + 0x14) = 1;
                                uVar5 = usb_add_phy_dev(arg1);
                                uVar4 = uVar5 & 0xffffffff;
                                if (uVar5 == 0) {
                                    arg1[0x3d] = 0xfffffffe0;
                                    arg1[0x3e] = arg1 + 0x3e;
                                    arg1[0x3f] = arg1 + 0x3e;
                                    arg1[0x40] = 
                                    sym.msm_m31_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                    sym.msm_m31_eusb2_phy_create_debugfs(arg1);
                                    if ((arg1[0x30] != 0) && (uVar4 = sym.readl_relaxed(arg1[0x30]), (uVar4 & 1) != 0))
                                    {
                                        sym.msm_m31_eusb2_phy_power(arg1,1);
                                    }
                                    uVar4 = 0;
                                }
                                goto code_r0x080014fc;
                            }
                        }
                    }
                    uVar4 = uVar5 & 0xffffffff;
                    goto code_r0x080014fc;
                }
                pcVar7 = "missing eud_detect register address\n";
            }
            _dev_err(iVar1,pcVar7);
        }
        uVar4 = 0xffffffed;
    }
code_r0x080014fc:
    return uVar4 & 0xffffffff;
}


// ===== sym.msm_m31_eusb2_phy_remove.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x080011d0 (size 8) =====

ulong sym.msm_m31_eusb2_phy_remove.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar1;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    flush_work(arg1 + 0x1e8);
    if (*(arg1 + 0x1d8) != 0) {
        power_supply_put();
    }
    debugfs_remove(*(arg1 + 0x228));
    usb_remove_phy(arg1);
    iVar1 = *(arg1 + 0x1a0);
    if (iVar1 != 0) {
        clk_disable(iVar1);
        clk_unprepare(iVar1);
    }
    if (*(arg1 + 0x1cc) != '\0') {
        iVar1 = *(arg1 + 0x1a0);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
        uVar2 = *(arg1 + 0x198);
        clk_disable(uVar2);
        clk_unprepare(uVar2);
        *(arg1 + 0x1cc) = 0;
    }
    sym.msm_m31_eusb2_phy_power(arg1,0);
    return 0;
}


// ===== sym.msm_m31_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x080011d8 (size 8) =====

ulong sym.msm_m31_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x1cf) = 1;
    return 0;
}


// ===== sym.msm_m31_eusb2_phy_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.msm_m31_eusb2_phy_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x1cf) = 0;
    return 0;
}


// ===== sym.msm_m31_eusb2_phy_probe @ 0x080011e8 (size 1016) =====

uint64_t sym.msm_m31_eusb2_phy_probe(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t *arg1_00;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    arg1_00 = devm_kmalloc(iVar1,0x248,0xdc0);
    if (arg1_00 == NULL) {
code_r0x080014bc:
        uVar4 = 0xfffffff4;
    }
    else {
        iVar3 = of_device_get_match_data(iVar1);
        arg1_00[0x48] = iVar3;
        if (iVar3 != 0) {
            uVar4 = devm_usb_get_repeater_by_phandle(iVar1,"usb-repeater",0);
            if (0xfffffffffffff000 < uVar4) goto code_r0x080014fc;
            iVar3 = platform_get_resource_byname(arg1,0x200,"eusb2_phy_base");
            if (iVar3 == 0) {
                pcVar7 = "missing eusb2phy memory resource\n";
            }
            else {
                uVar5 = devm_ioremap_resource(iVar1,iVar3);
                arg1_00[0x2e] = uVar5;
                if (0xfffffffffffff000 < uVar5) {
                    _dev_err(iVar1,"ioremap failed\n");
                    uVar4 = *(arg1_00 + 0x2e);
                    goto code_r0x080014fc;
                }
                piVar6 = platform_get_resource_byname(arg1,0x200,"eud_enable_reg");
                if (piVar6 != NULL) {
                    uVar5 = devm_ioremap_resource(iVar1,piVar6);
                    arg1_00[0x30] = uVar5;
                    if (0xfffffffffffff000 < uVar5) {
                        _dev_err(iVar1,"eud_enable_reg ioremap err:%d\n",uVar5 & 0xffffffff);
                        uVar4 = uVar5 & 0xffffffff;
                        goto code_r0x080014fc;
                    }
                    arg1_00[0x2f] = *piVar6;
                }
                iVar3 = platform_get_resource_byname(arg1,0x200,"eud_detect_reg");
                if (iVar3 != 0) {
                    uVar5 = devm_ioremap_resource(iVar1,iVar3);
                    arg1_00[0x31] = uVar5;
                    if (0xfffffffffffff000 < uVar5) {
                        _dev_err(iVar1,"eud_detect_reg ioremap err:%d\n",uVar5 & 0xffffffff);
                        uVar4 = uVar5 & 0xffffffff;
                        goto code_r0x080014fc;
                    }
                    uVar5 = devm_clk_get(iVar1,"ref_clk_src");
                    arg1_00[0x33] = uVar5;
                    if (uVar5 < 0xfffffffffffff001) {
                        uVar5 = devm_clk_get_optional(iVar1,"ref_clk");
                        arg1_00[0x34] = uVar5;
                        if (uVar5 < 0xfffffffffffff001) {
                            uVar5 = __devm_reset_control_get(iVar1,"phy_reset",0,0,0,1);
                            arg1_00[0x35] = uVar5;
                            if (uVar5 < 0xfffffffffffff001) {
                                uVar2 = of_property_read_variable_u32_array
                                                  (*(arg1 + 0x300),"qcom,vdd-voltage-level",arg1_00 + 0x38,0,3);
                                if (uVar2 < 2) {
                                    uVar4 = uVar2;
                                    _dev_err(iVar1,"error reading qcom,vdd-voltage-level property\n");
                                    goto code_r0x080014fc;
                                }
                                uVar5 = devm_regulator_get(iVar1,0x80003dc);
                                arg1_00[0x36] = uVar5;
                                if (0xfffffffffffff000 < uVar5) {
                                    _dev_err(iVar1,"unable to get vdd supply\n");
                                    uVar4 = *(arg1_00 + 0x36);
                                    goto code_r0x080014fc;
                                }
                                uVar5 = devm_regulator_get(iVar1,"vdda12");
                                arg1_00[0x37] = uVar5;
                                if (0xfffffffffffff000 < uVar5) {
                                    _dev_err(iVar1,"unable to get vdda12 supply\n");
                                    uVar4 = *(arg1_00 + 0x37);
                                    goto code_r0x080014fc;
                                }
                                uVar2 = of_property_count_elems_of_size(*(arg1 + 0x300),"qcom,param-override-seq",4);
                                *(arg1_00 + 0x44) = uVar2;
                                if (0 < uVar2) {
                                    if ((uVar2 & 1) != 0) {
                                        _dev_err(iVar1,"invalid param_override_seq_len\n");
                                        uVar4 = 0xffffffea;
                                        goto code_r0x080014fc;
                                    }
                                    iVar3 = devm_kmalloc(iVar1,uVar2 << 2,0xdc0);
                                    arg1_00[0x43] = iVar3;
                                    if (iVar3 == 0) goto code_r0x080014bc;
                                    uVar5 = of_property_read_variable_u32_array
                                                      (*(arg1 + 0x300),"qcom,param-override-seq",iVar3,0,
                                                       arg1_00[0x44]);
                                    if ((uVar5 & 1) != 0) {
                                        uVar4 = uVar5 & 0xffffffff;
                                        _dev_err(iVar1,"qcom,param-override-seq read failed %d\n",uVar4);
                                        goto code_r0x080014fc;
                                    }
                                }
                                arg1_00[0x23] = sym.msm_m31_eusb2_phy_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                arg1_00[0x29] =
                                     sym.msm_m31_eusb2_phy_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                arg1_00[0x2a] =
                                     sym.msm_m31_eusb2_phy_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                arg1_00[0x47] = uVar4;
                                *arg1_00 = iVar1;
                                *(arg1 + 0xa8) = arg1_00;
                                arg1_00[0x26] = sym.msm_m31_eusb2_phy_set_power.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                arg1_00[0x27] =
                                     sym.msm_m31_eusb2_phy_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                *(arg1_00 + 0x14) = 1;
                                uVar5 = usb_add_phy_dev(arg1_00);
                                uVar4 = uVar5 & 0xffffffff;
                                if (uVar5 == 0) {
                                    arg1_00[0x3d] = 0xfffffffe0;
                                    arg1_00[0x3e] = arg1_00 + 0x3e;
                                    arg1_00[0x3f] = arg1_00 + 0x3e;
                                    arg1_00[0x40] =
                                         sym.msm_m31_eusb2_phy_vbus_draw_work.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                    sym.msm_m31_eusb2_phy_create_debugfs(arg1_00);
                                    if ((arg1_00[0x30] != 0) &&
                                       (uVar4 = sym.readl_relaxed(arg1_00[0x30]), (uVar4 & 1) != 0)) {
                                        sym.msm_m31_eusb2_phy_power(arg1_00,1);
                                    }
                                    uVar4 = 0;
                                }
                                goto code_r0x080014fc;
                            }
                        }
                    }
                    uVar4 = uVar5 & 0xffffffff;
                    goto code_r0x080014fc;
                }
                pcVar7 = "missing eud_detect register address\n";
            }
            _dev_err(iVar1,pcVar7);
        }
        uVar4 = 0xffffffed;
    }
code_r0x080014fc:
    return uVar4 & 0xffffffff;
}


// ===== sym.msm_m31_eusb2_phy_remove @ 0x080015e0 (size 176) =====

ulong sym.msm_m31_eusb2_phy_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar1;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    flush_work(arg1_00 + 0x1e8);
    if (*(arg1_00 + 0x1d8) != 0) {
        power_supply_put();
    }
    debugfs_remove(*(arg1_00 + 0x228));
    usb_remove_phy(arg1_00);
    iVar1 = *(arg1_00 + 0x1a0);
    if (iVar1 != 0) {
        clk_disable(iVar1);
        clk_unprepare(iVar1);
    }
    if (*(arg1_00 + 0x1cc) != '\0') {
        iVar1 = *(arg1_00 + 0x1a0);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
        uVar2 = *(arg1_00 + 0x198);
        clk_disable(uVar2);
        clk_unprepare(uVar2);
        *(arg1_00 + 0x1cc) = 0;
    }
    sym.msm_m31_eusb2_phy_power(arg1_00,0);
    return 0;
}


// ===== sym.msm_m31_eusb2_phy_init @ 0x08001690 (size 1252) =====

int sym.msm_m31_eusb2_phy_init(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int iVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    int64_t *piVar12;
    int *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar12 = *(arg1 + 0x240);
    if ((*(arg1 + 0x180) != 0) && (uVar8 = sym.readl_relaxed(*(arg1 + 0x180)), (uVar8 & 1) != 0)) {
        if ((*(arg1 + 0x10) & 1) == 0) {
            sym.msm_m31_eusb2_phy_power(arg1,1);
            iVar4 = sym.msm_m31_eusb2_repeater_reset_and_init(arg1);
            return iVar4;
        }
        qcom_scm_io_writel(*(arg1 + 0x178),0);
        *(arg1 + 400) = 1;
    }
    iVar4 = sym.msm_m31_eusb2_phy_power(arg1,1);
    if (iVar4 == 0) {
        iVar4 = sym.msm_m31_eusb2_repeater_reset_and_init(arg1);
        if (iVar4 == 0) {
            sym.msm_m31_eusb2_phy_clocks(arg1);
            iVar4 = reset_control_assert(*(arg1 + 0x1a8));
            if (iVar4 != 0) {
                _dev_err(*arg1,"phy reset assert failed\n");
            }
            usleep_range_state(100,0x96,2);
            iVar4 = reset_control_deassert(*(arg1 + 0x1a8));
            if (iVar4 != 0) {
                _dev_err(*arg1,"phy reset deassert failed\n");
            }
            iVar4 = piVar12[1];
            if (0 < iVar4) {
                piVar13 = *piVar12 + 8;
                do {
                    uVar6 = piVar13[-1];
                    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
                    uVar2 = *piVar13 << (LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20) & 0x1f);
                    if (uVar6 < uVar2) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001b6c);
                        (*pcVar3)();
                    }
                    uVar7 = piVar13[-2];
                    iVar10 = *(arg1 + 0x170) + uVar7;
                    uVar5 = sym.readl_relaxed(iVar10);
                    sym.writel_relaxed(uVar5 & (uVar6 ^ 0xffffffff) | uVar2,iVar10);
                    uVar5 = sym.readl_relaxed(iVar10);
                    if ((uVar5 & uVar6) != uVar2) {
                        _printk(0x800047b,uVar2,uVar7);
                    }
                    piVar13 = piVar13 + 3;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
            iVar10 = *(arg1 + 0x170) + 0x54;
            uVar6 = sym.readl_relaxed(iVar10);
            sym.writel_relaxed(uVar6 & 0xffffff8f,iVar10);
            uVar8 = sym.readl_relaxed(iVar10);
            if ((uVar8 & 0x70) != 0) {
                _printk(0x800047b,0,0x54);
            }
            iVar4 = piVar12[3];
            if (0 < iVar4) {
                piVar13 = piVar12[2] + 8;
                do {
                    uVar6 = piVar13[-1];
                    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
                    uVar2 = *piVar13 << (LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20) & 0x1f);
                    if (uVar6 < uVar2) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001b70);
                        (*pcVar3)();
                    }
                    uVar7 = piVar13[-2];
                    iVar10 = *(arg1 + 0x170) + uVar7;
                    uVar5 = sym.readl_relaxed(iVar10);
                    sym.writel_relaxed(uVar5 & (uVar6 ^ 0xffffffff) | uVar2,iVar10);
                    uVar5 = sym.readl_relaxed(iVar10);
                    if ((uVar5 & uVar6) != uVar2) {
                        _printk(0x800047b,uVar2,uVar7);
                    }
                    piVar13 = piVar13 + 3;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
            iVar4 = *(arg1 + 0x220);
            puVar11 = *(*(arg1 + 0x240) + 0x10);
            if (0 < iVar4) {
                iVar9 = 0;
                iVar10 = *(arg1 + 0x218);
                do {
                    sym.writel_relaxed(*(iVar10 + iVar9 * 4),*(arg1 + 0x170) + *(iVar10 + (iVar9 + 1) * 4));
                    iVar9 = iVar9 + 2;
                } while (iVar9 < iVar4);
            }
            if (*(arg1 + 0x230) != 0xff) {
                uVar6 = *puVar11;
                uVar2 = puVar11[1];
                uVar5 = *(arg1 + 0x230) << 2;
                iVar10 = *(arg1 + 0x170) + uVar6;
                uVar7 = sym.readl_relaxed(iVar10);
                sym.writel_relaxed(uVar7 & (uVar2 ^ 0xffffffff) | uVar5,iVar10);
                uVar7 = sym.readl_relaxed(iVar10);
                if ((uVar7 & uVar2) != uVar5) {
                    _printk(0x800047b,uVar5,uVar6);
                }
            }
            uVar1 = *(arg1 + 0x231);
            if (uVar1 != 0xff) {
                uVar6 = puVar11[3];
                uVar2 = puVar11[4];
                iVar10 = *(arg1 + 0x170) + uVar6;
                uVar7 = sym.readl_relaxed(iVar10);
                sym.writel_relaxed(uVar7 & (uVar2 ^ 0xffffffff) | uVar1,iVar10);
                uVar7 = sym.readl_relaxed(iVar10);
                if ((uVar7 & uVar2) != uVar1) {
                    _printk(0x800047b,uVar1,uVar6);
                }
            }
            uVar1 = *(arg1 + 0x232);
            if (uVar1 != 0xff) {
                uVar6 = puVar11[6];
                uVar2 = puVar11[7];
                iVar10 = *(arg1 + 0x170) + uVar6;
                uVar7 = sym.readl_relaxed(iVar10);
                sym.writel_relaxed(uVar7 & (uVar2 ^ 0xffffffff) | uVar1,iVar10);
                uVar7 = sym.readl_relaxed(iVar10);
                if ((uVar7 & uVar2) != uVar1) {
                    _printk(0x800047b,uVar1,uVar6);
                }
            }
            uVar1 = *(arg1 + 0x233);
            if (uVar1 != 0xff) {
                uVar6 = puVar11[9];
                uVar2 = puVar11[10];
                iVar10 = *(arg1 + 0x170) + uVar6;
                uVar7 = sym.readl_relaxed(iVar10);
                sym.writel_relaxed(uVar7 & (uVar2 ^ 0xffffffff) | uVar1,iVar10);
                uVar7 = sym.readl_relaxed(iVar10);
                if ((uVar7 & uVar2) != uVar1) {
                    _printk(0x800047b,uVar1,uVar6);
                }
            }
            iVar4 = piVar12[5];
            if (0 < iVar4) {
                piVar13 = piVar12[4] + 8;
                do {
                    uVar6 = piVar13[-1];
                    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
                    uVar2 = *piVar13 << (LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20) & 0x1f);
                    if (uVar6 < uVar2) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001b74);
                        (*pcVar3)();
                    }
                    uVar7 = piVar13[-2];
                    iVar10 = *(arg1 + 0x170) + uVar7;
                    uVar5 = sym.readl_relaxed(iVar10);
                    sym.writel_relaxed(uVar5 & (uVar6 ^ 0xffffffff) | uVar2,iVar10);
                    uVar5 = sym.readl_relaxed(iVar10);
                    if ((uVar5 & uVar6) != uVar2) {
                        _printk(0x800047b,uVar2,uVar7);
                    }
                    piVar13 = piVar13 + 3;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
            iVar4 = 0;
        }
        else {
            _dev_err(*arg1,"repeater powerup failed.\n");
        }
    }
    return iVar4;
}


// ===== sym.msm_m31_eusb2_phy_set_suspend @ 0x08001b74 (size 484) =====

ulong sym.msm_m31_eusb2_phy_set_suspend(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong uVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg2;
    if ((iVar1 != 0) && (*(arg1 + 0x1ce) != '\0')) {
        return 0;
    }
    if (iVar1 == 0) {
        sym.msm_m31_eusb2_phy_clocks(arg1);
    }
    else if ((*(arg1 + 0x1cf) == '\0') && (uVar3 = *(arg1 + 0x10), (uVar3 & 1) == 0)) {
        if (*(arg1 + 400) != '\0') {
            qcom_scm_io_writel(*(arg1 + 0x178),1);
            uVar3 = *(arg1 + 0x10);
            *(arg1 + 400) = 0;
        }
        if ((uVar3 >> 6 & 1) == 0) {
            iVar4 = *(arg1 + 0x1a0);
            if ((iVar4 != 0) && (*(arg1 + 0x1d0) != '\0')) {
                clk_disable(iVar4);
                clk_unprepare(iVar4);
                *(arg1 + 0x1d0) = 0;
            }
            if (*(arg1 + 0x1cc) != '\0') {
                iVar4 = *(arg1 + 0x1a0);
                if (iVar4 != 0) {
                    clk_disable(iVar4);
                    clk_unprepare(iVar4);
                }
                uVar5 = *(arg1 + 0x198);
                clk_disable(uVar5);
                clk_unprepare(uVar5);
                *(arg1 + 0x1cc) = 0;
            }
            sym.msm_m31_eusb2_phy_power(arg1,0);
            iVar4 = *(arg1 + 0x238);
            if (iVar4 != 0) {
                pcVar6 = *(iVar4 + 0x28);
                if (pcVar6 != NULL) {
                    __cfi_slowpath_diag(0x2795f870d8daa47d,pcVar6,0x8000190);
                    (*pcVar6)(iVar4,0);
                    iVar4 = *(arg1 + 0x238);
                    if (iVar4 == 0) goto code_r0x08001d30;
                }
                pcVar6 = *(iVar4 + 0x48);
                if (pcVar6 != NULL) {
                    __cfi_slowpath_diag(0xe9fb39b578da0cf6,pcVar6,0x80001d0);
                    (*pcVar6)(iVar4);
                }
            }
        }
    }
    else {
        if (*(arg1 + 0x1cc) != '\0') {
            iVar4 = *(arg1 + 0x1a0);
            if (iVar4 != 0) {
                clk_disable(iVar4);
                clk_unprepare(iVar4);
            }
            uVar5 = *(arg1 + 0x198);
            clk_disable(uVar5);
            clk_unprepare(uVar5);
            *(arg1 + 0x1cc) = 0;
        }
        iVar4 = *(arg1 + 0x1a0);
        if ((iVar4 != 0) && (*(arg1 + 0x1d0) == '\0')) {
            *(arg1 + 0x1d0) = 1;
            iVar2 = clk_prepare(iVar4);
            if ((iVar2 == 0) && (iVar2 = clk_enable(iVar4), iVar2 != 0)) {
                clk_unprepare(iVar4);
            }
        }
    }
code_r0x08001d30:
    *(arg1 + 0x1ce) = iVar1 != 0;
    return 0;
}


// ===== sym.msm_m31_eusb2_phy_notify_connect @ 0x08001d58 (size 28) =====

ulong sym.msm_m31_eusb2_phy_notify_connect(int64_t arg1)

{
    *(arg1 + 0x1cf) = 1;
    return 0;
}


// ===== sym.msm_m31_eusb2_phy_notify_disconnect @ 0x08001d74 (size 24) =====

ulong sym.msm_m31_eusb2_phy_notify_disconnect(int64_t arg1)

{
    *(arg1 + 0x1cf) = 0;
    return 0;
}


// ===== sym.msm_m31_eusb2_phy_set_power @ 0x08001d8c (size 64) =====

ulong sym.msm_m31_eusb2_phy_set_power(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x1e0) = arg2;
    queue_work_on(0x20,_devm_kmalloc,arg1 + 0x1e8);
    return 0;
}


// ===== sym.msm_m31_eusb2_phy_vbus_draw_work @ 0x08001dcc (size 192) =====

void sym.msm_m31_eusb2_phy_vbus_draw_work(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    if (*(arg1 + -0x10) == 0) {
        iVar1 = power_supply_get_by_name(0x8000675);
        *(arg1 + -0x10) = iVar1;
        if (iVar1 == 0) {
            _dev_err(*(arg1 + -0x1e8),"Could not get usb psy\n");
            goto code_r0x08001e5c;
        }
    }
    _dev_info(*(arg1 + -0x1e8),"Avail curr from USB = %u\n",*(arg1 + -8));
    uStack_30 = CONCAT44(uStack_30._4_4_,*(arg1 + -8) * 1000);
    power_supply_set_property(*(arg1 + -0x10),0x25,&uStack_30);
code_r0x08001e5c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    puVar2 = __stack_chk_fail();
    *extraout_x18 = sym.msm_m31_eusb2_phy_create_debugfs;
    iVar1 = (*puVar2)[0xe];
    if (iVar1 == 0) {
        iVar1 = **puVar2;
    }
    uVar3 = debugfs_create_dir(iVar1,0);
    puVar2[0x45] = uVar3;
    debugfs_create_x8("xcfgi_39_32",0x1a4,uVar3,puVar2 + 0x46);
    *(puVar2 + 0x46) = 0xff;
    debugfs_create_x8("xcfgi_71_64",0x1a4,puVar2[0x45],puVar2 + 0x231);
    *(puVar2 + 0x231) = 0xff;
    debugfs_create_x8("xcfgi_31_24",0x1a4,puVar2[0x45],puVar2 + 0x232);
    *(puVar2 + 0x232) = 0xff;
    debugfs_create_x8("xcfgi_7_0",0x1a4,puVar2[0x45],puVar2 + 0x233);
    *(puVar2 + 0x233) = 0xff;
    return;
}


// ===== sym.msm_m31_eusb2_phy_create_debugfs @ 0x08001e8c (size 188) =====

void sym.msm_m31_eusb2_phy_create_debugfs(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = (*arg1)[0xe];
    if (iVar1 == 0) {
        iVar1 = **arg1;
    }
    uVar2 = debugfs_create_dir(iVar1,0);
    *(arg1 + 0x228) = uVar2;
    debugfs_create_x8("xcfgi_39_32",0x1a4,uVar2,arg1 + 0x230);
    *(arg1 + 0x230) = 0xff;
    debugfs_create_x8("xcfgi_71_64",0x1a4,*(arg1 + 0x228),arg1 + 0x231);
    *(arg1 + 0x231) = 0xff;
    debugfs_create_x8("xcfgi_31_24",0x1a4,*(arg1 + 0x228),arg1 + 0x232);
    *(arg1 + 0x232) = 0xff;
    debugfs_create_x8("xcfgi_7_0",0x1a4,*(arg1 + 0x228),arg1 + 0x233);
    *(arg1 + 0x233) = 0xff;
    return;
}


// ===== sym.msm_m31_eusb2_phy_power @ 0x08001f48 (size 628) =====

int sym.msm_m31_eusb2_phy_power(int64_t arg1,int64_t arg2)

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
code_r0x080021b4:
            _dev_err(uVar4,pcVar5,iVar2);
        }
        iVar2 = regulator_set_voltage(*(arg1 + 0x1b8),0,1200000);
        if (iVar2 != 0) {
            uVar4 = *arg1;
            pcVar5 = "Unable to set (0) voltage for vdda12:%d\n";
code_r0x0800219c:
            _dev_err(uVar4,pcVar5,iVar2);
        }
        iVar2 = regulator_set_load(*(arg1 + 0x1b8),0);
        if (iVar2 < 0) {
            _dev_err(*arg1,"Unable to set LPM of vdda12\n");
        }
code_r0x08002050:
        iVar2 = regulator_disable(*(arg1 + 0x1b0));
        if (iVar2 != 0) {
            _dev_err(*arg1,"Unable to disable vdd:%d\n",iVar2);
        }
code_r0x0800205c:
        iVar2 = regulator_set_voltage(*(arg1 + 0x1b0),*(arg1 + 0x1c0),*(arg1 + 0x1c8));
        if (iVar2 != 0) {
            pcVar5 = "unable to set voltage for hsusb vdd\n";
code_r0x08002140:
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
                                goto code_r0x08002090;
                            }
                            uVar4 = *arg1;
                            pcVar5 = "Unable to enable vdda12:%d\n";
                            goto code_r0x080021b4;
                        }
                        uVar4 = *arg1;
                        pcVar5 = "Unable to set voltage for vdda12:%d\n";
                        goto code_r0x0800219c;
                    }
                    _dev_err(*arg1,"Unable to set HPM of vdda12:%d\n",iVar2);
                    goto code_r0x08002050;
                }
                _dev_err(*arg1,"Unable to enable VDD\n");
                goto code_r0x0800205c;
            }
            pcVar5 = "Unable to set voltage for hsusb vdd\n";
            goto code_r0x08002140;
        }
        _dev_err(*arg1,"Unable to set HPM of vdd:%d\n",iVar2);
    }
    uVar6 = 0;
code_r0x08002090:
    *(arg1 + 0x1cd) = uVar6;
    return iVar2;
}


// ===== sym.msm_m31_eusb2_repeater_reset_and_init @ 0x080021bc (size 332) =====

int sym.msm_m31_eusb2_repeater_reset_and_init(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x238);
    if (iVar3 == 0) {
        return 0;
    }
    pcVar4 = *(iVar3 + 0x40);
    if (pcVar4 == NULL) {
code_r0x08002214:
        iVar3 = *(arg1 + 0x238);
        if (iVar3 == 0) {
            return 0;
        }
    }
    else {
        __cfi_slowpath_diag(0xe9fb39b578da0cf6,pcVar4,0x8000170);
        iVar2 = (*pcVar4)(iVar3);
        if (iVar2 == 0) goto code_r0x08002214;
        _dev_err(*arg1,"repeater powerup failed.\n");
        iVar3 = *(arg1 + 0x238);
        if (iVar3 == 0) {
            return 0;
        }
    }
    pcVar4 = *(iVar3 + 0x28);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0x2795f870d8daa47d,pcVar4,0x8000190);
        iVar2 = (*pcVar4)(iVar3,1);
        if (iVar2 != 0) {
            _dev_err(*arg1,"repeater reset failed.\n");
            iVar3 = *(arg1 + 0x238);
            if (iVar3 == 0) {
                return 0;
            }
            goto code_r0x0800225c;
        }
    }
    iVar3 = *(arg1 + 0x238);
    if (iVar3 == 0) {
        return 0;
    }
code_r0x0800225c:
    pcVar4 = *(iVar3 + 0x30);
    if (pcVar4 == NULL) {
        iVar2 = 0;
    }
    else {
        uVar1 = *(arg1 + 0x10);
        __cfi_slowpath_diag(0x176ac9d9535a0da,pcVar4,0x80001b0);
        iVar2 = (*pcVar4)(iVar3,uVar1);
        if (iVar2 != 0) {
            _dev_err(*arg1,"repeater init failed.\n");
        }
    }
    return iVar2;
}


// ===== sym.msm_m31_eusb2_phy_clocks @ 0x08002308 (size 140) =====

void sym.msm_m31_eusb2_phy_clocks(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x1cc) != '\x01') {
        uVar2 = *(arg1 + 0x198);
        iVar1 = clk_prepare(uVar2);
        if ((iVar1 == 0) && (iVar1 = clk_enable(uVar2), iVar1 != 0)) {
            clk_unprepare(uVar2);
        }
        iVar3 = *(arg1 + 0x1a0);
        if (((iVar3 != 0) && (iVar1 = clk_prepare(iVar3), iVar1 == 0)) && (iVar1 = clk_enable(iVar3), iVar1 != 0)) {
            clk_unprepare(iVar3);
        }
        *(arg1 + 0x1cc) = 1;
    }
    return;
}


// ===== sym.readl_relaxed @ 0x08002394 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002398);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80023cc);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08002404 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002420);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002448);
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800247c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080024c0

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
    //switch table (4 cases) at 0x80006df
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024d4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080024e4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_m31_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt,obj.__this_module)
    ;
    return;
}


// ===== sym.cleanup_module @ 0x08002518 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_m31_eusb2_phy_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt);
    return;
}

