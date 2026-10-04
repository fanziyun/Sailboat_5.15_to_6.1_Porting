// decompiled from phy-msm-ssusb-qmp by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x080040c4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x614cf58593a4b8d6) {
            pcVar2 = sym.msm_ssphy_qmp_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.msm_ssphy_qmp_remove.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
code_r0x080020fc:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08004084;
            }
            if (arg1 != -0x5e5b96c73454931) goto code_r0x08004084;
            pcVar2 = sym.msm_ssphy_qmp_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x64ea1348e09a6946) {
            pcVar2 = sym.msm_ssphy_qmp_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
            goto code_r0x080020fc;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004084;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004084:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80040d8);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002120 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_ssphy_qmp_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002128 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_ssphy_qmp_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.msm_ssphy_qmp_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08002130 (size 8) =====

//WARNING: Type propagation algorithm not settling

int sym.msm_ssphy_qmp_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t *param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint32_t *puVar3;
    uint8_t uVar4;
    bool bVar5;
    bool bVar6;
    uchar uVar7;
    int iVar8;
    uint32_t uVar9;
    uint uVar10;
    uint32_t uVar11;
    char *pcVar12;
    int64_t iVar13;
    ulong *in_x18;
    int iVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x11) >> 1 & 1) != 0) {
        _dev_info(*param_1,"QMP PHY currently in DP mode\n");
        return -0x10;
    }
    iVar16 = param_1[0x47];
    iVar8 = sym.msm_ssusb_qmp_ldo_enable(param_1,1);
    if (iVar8 != 0) {
        _dev_err(*param_1,"msm_ssusb_qmp_ldo_enable(1) failed, ret=%d\n",iVar8);
        return iVar8;
    }
    sym.msm_ssphy_qmp_enable_clks(param_1,1);
    if (*(param_1 + 0x244) == 2) {
        if ((*(param_1 + 0x11) >> 2 & 1) == 0) {
            iVar8 = reset_control_assert(param_1[0x43]);
            if (iVar8 == 0) {
                iVar8 = reset_control_assert(param_1[0x41]);
                if (iVar8 != 0) goto code_r0x08002b6c;
                iVar8 = reset_control_deassert(param_1[0x41]);
                if (iVar8 != 0) {
                    _dev_err(*param_1,"phy_reset deassert failed\n");
                }
                iVar8 = reset_control_deassert(param_1[0x43]);
                if (iVar8 == 0) goto code_r0x08002afc;
                pcVar12 = "global_phy_reset deassert failed\n";
            }
            else {
                pcVar12 = "global_phy_reset assert failed\n";
            }
        }
        else {
            iVar8 = reset_control_assert(param_1[0x41]);
            if (iVar8 == 0) {
                iVar8 = reset_control_deassert(param_1[0x41]);
                if (iVar8 != 0) {
                    pcVar12 = "phy_reset deassert failed\n";
                    goto code_r0x080032dc;
                }
code_r0x08002afc:
                uVar9 = *(param_1 + 2);
                goto joined_r0x08002ba8;
            }
code_r0x08002b6c:
            pcVar12 = "phy_reset assert failed\n";
        }
code_r0x080032dc:
        _dev_err(*param_1,pcVar12);
        uVar9 = *(param_1 + 2);
        if ((uVar9 >> 2 & 1) == 0) goto code_r0x08002b04;
code_r0x08002bac:
        iVar15 = 2;
code_r0x08002bb4:
        bVar5 = false;
        bVar6 = true;
    }
    else {
        iVar8 = reset_control_assert(param_1[0x42]);
        if (iVar8 == 0) {
            iVar8 = reset_control_assert(param_1[0x41]);
            if (iVar8 == 0) {
                if (param_1[0x31] != 0) {
                    sym.writel_relaxed(0,param_1[0x31]);
                }
                iVar8 = reset_control_deassert(param_1[0x41]);
                if (iVar8 != 0) {
                    pcVar12 = "phy_reset deassert failed\n";
                    goto code_r0x08002b8c;
                }
                iVar8 = reset_control_deassert(param_1[0x42]);
                if (iVar8 == 0) goto code_r0x08002afc;
code_r0x08002ad8:
                pcVar12 = "phy_phy_reset deassert failed\n";
                goto code_r0x08002b60;
            }
            pcVar12 = "phy_reset assert failed\n";
code_r0x08002b8c:
            _dev_err(*param_1,pcVar12);
            iVar8 = reset_control_deassert(param_1[0x42]);
            if (iVar8 != 0) goto code_r0x08002ad8;
        }
        else {
            pcVar12 = "phy_phy_reset assert failed\n";
code_r0x08002b60:
            _dev_err(*param_1,pcVar12);
        }
        *(param_1 + 0x223) = 0;
        uVar9 = *(param_1 + 2);
joined_r0x08002ba8:
        if ((uVar9 >> 2 & 1) != 0) goto code_r0x08002bac;
code_r0x08002b04:
        if ((uVar9 >> 3 & 1) != 0) {
            iVar15 = 3;
            goto code_r0x08002bb4;
        }
        bVar6 = false;
        iVar15 = 0xffffffea;
        bVar5 = true;
    }
    if (*(param_1 + 0x244) < 2) {
code_r0x08002be0:
        sym.writel_relaxed(1,param_1[0x2e] + *(param_1[0x45] + 0xc));
    }
    else {
        if (*(param_1 + 0x244) == 2) {
            sym.writel_relaxed(1,param_1[0x2e] + *(param_1[0x45] + 0x1c));
            goto code_r0x08002be0;
        }
        _dev_err(*param_1,"phy_powerup: Unknown USB QMP PHY type\n");
    }
    DataSynchronizationBarrier(3,3,0);
    if (*(param_1 + 0x244) == 1) {
        if (!bVar6) goto code_r0x08002d48;
        _dev_err(*param_1,"USB QMP PHY: Update TYPEC CTRL(%d)\n",iVar15);
        iVar13 = 6;
code_r0x08002d30:
        sym.writel_relaxed(iVar15,param_1[0x2e] + *(param_1[0x45] + iVar13 * 4));
    }
    else if (*(param_1 + 0x244) == 2) {
        piVar1 = param_1 + 0x2e;
        sym.writel_relaxed(1,param_1[0x2e] + *(param_1[0x45] + 0x20));
        sym.writel_relaxed(0,param_1[0x2e] + *(param_1[0x45] + 0x20));
        if (*(param_1[0x45] + 0x34) != 0) {
            sym.readl_relaxed(*piVar1 + *(param_1[0x45] + 0x34));
        }
        piVar2 = param_1 + 0x45;
        if ((*(param_1 + 0x11) >> 2 & 1) == 0) {
            sym.writel_relaxed(0xf,*piVar1 + *(*piVar2 + 0x24));
            if (!bVar6) goto code_r0x08002ce4;
code_r0x08002c84:
            _dev_err(*param_1,"USB DP QMP PHY: Update TYPEC CTRL(%d)\n",iVar15);
            sym.writel_relaxed(iVar15,param_1[0x2e] + *(param_1[0x45] + 0x2c));
            if (bVar5) goto code_r0x08002ce8;
code_r0x08002cf4:
            uVar4 = *(param_1 + 0x11);
        }
        else {
            if (bVar6) goto code_r0x08002c84;
code_r0x08002ce4:
            if (!bVar5) goto code_r0x08002cf4;
code_r0x08002ce8:
            if (*(*param_1 + 0x278) != 0) goto code_r0x08002cf4;
            _dev_err(*param_1,"USB DP QMP PHY: NO SW PORTSELECT\n");
            uVar4 = *(param_1 + 0x11);
        }
        if ((uVar4 >> 2 & 1) == 0) {
            sym.writel_relaxed(3,*piVar1 + *(*piVar2 + 0x28));
            sym.readl_relaxed(*piVar1 + *(*piVar2 + 0x28));
            iVar15 = 0;
            iVar13 = 9;
            goto code_r0x08002d30;
        }
    }
code_r0x08002d48:
    DataSynchronizationBarrier(3,3,0);
    if (1 < *(param_1 + 0x244)) {
        if (*(param_1 + 0x244) != 2) {
            _dev_err(*param_1,"phy_powerup: Unknown USB QMP PHY type\n");
            goto code_r0x08002d8c;
        }
        sym.writel_relaxed(1,param_1[0x2e] + *(param_1[0x45] + 0x1c));
    }
    sym.writel_relaxed(1,param_1[0x2e] + *(param_1[0x45] + 0xc));
code_r0x08002d8c:
    DataSynchronizationBarrier(3,3,0);
    if (param_1[0x47] == 0) {
        _dev_err(*param_1,"NULL PHY configuration\n");
        _dev_err(*param_1,"Failed the main PHY configuration\n");
        iVar8 = -0x16;
    }
    else {
        iVar8 = param_1[0x48];
        if (0 < iVar8) {
            iVar14 = 0;
            puVar17 = param_1[0x47] + 4;
            do {
                sym.writel_relaxed(*puVar17,param_1[0x2e] + puVar17[-1]);
                iVar8 = param_1[0x48];
                iVar14 = iVar14 + 1;
                puVar17 = puVar17 + 2;
            } while (iVar14 < iVar8);
        }
        iVar16 = iVar16 + iVar8 * 8;
        sym.writel_relaxed(0,param_1[0x2e] + *(param_1[0x45] + 0x10));
        sym.writel_relaxed(3,param_1[0x2e] + *(param_1[0x45] + 0x14));
        DataSynchronizationBarrier(3,3,0);
        iVar8 = -1000;
        do {
            uVar9 = sym.readl_relaxed(param_1[0x2e] + *param_1[0x45]);
            if ((uVar9 >> 6 & 1) == 0) {
                if (param_1[0x49] == '\0') {
                    return 0;
                }
                if (param_1[0x4b] != '\0') {
                    _dev_err(*param_1,"TXA_DRV_LVL:0x%02x.\n");
                    if (iVar16 + -0x48 != NULL) {
                        uVar9 = *(iVar16 + -0x48);
                        if (uVar9 != 0xffffffff) {
                            uVar4 = *(param_1 + 0x4b);
                            iVar15 = param_1[0x2e] + uVar9;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar9);
                            }
                            goto code_r0x08002f4c;
                        }
                    }
                    _dev_err(*param_1,"write TXA_DRV_LVL fail.\n");
                }
code_r0x08002f4c:
                if (*(param_1 + 0x259) != '\0') {
                    _dev_err(*param_1,"TXB_DRV_LVL:0x%02x.\n");
                    if (iVar16 + -0x40 != NULL) {
                        uVar9 = *(iVar16 + -0x40);
                        if (uVar9 != 0xffffffff) {
                            uVar4 = *(param_1 + 0x259);
                            iVar15 = param_1[0x2e] + uVar9;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar9);
                            }
                            goto code_r0x08002f88;
                        }
                    }
                    _dev_err(*param_1,"write TXB_DRV_LVL fail.\n");
                }
code_r0x08002f88:
                if (*(param_1 + 0x25a) != '\0') {
                    _dev_err(*param_1,"TXA_PRE_EMPH:0x%02x.\n");
                    if (iVar16 + -0x38 != NULL) {
                        uVar9 = *(iVar16 + -0x38);
                        if (uVar9 != 0xffffffff) {
                            uVar4 = *(param_1 + 0x25a);
                            iVar15 = param_1[0x2e] + uVar9;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar9);
                            }
                            goto code_r0x08002fc4;
                        }
                    }
                    _dev_err(*param_1,"write TXA_PRE_EMPH fail.\n");
                }
code_r0x08002fc4:
                if (*(param_1 + 0x25b) != '\0') {
                    _dev_err(*param_1,"TXB_PRE_EMPH:0x%02x.\n");
                    if (iVar16 + -0x30 != NULL) {
                        uVar9 = *(iVar16 + -0x30);
                        if (uVar9 != 0xffffffff) {
                            uVar4 = *(param_1 + 0x25b);
                            iVar15 = param_1[0x2e] + uVar9;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar9);
                            }
                            goto code_r0x08003000;
                        }
                    }
                    _dev_err(*param_1,"write TXB_PRE_EMPH fail.\n");
                }
code_r0x08003000:
                if (*(param_1 + 0x25c) != '\0') {
                    _dev_err(*param_1,"TXA_POST1_LVL:0x%02x.\n");
                    if (iVar16 + -0x28 != NULL) {
                        uVar9 = *(iVar16 + -0x28);
                        if (uVar9 != 0xffffffff) {
                            uVar4 = *(param_1 + 0x25c);
                            iVar15 = param_1[0x2e] + uVar9;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar9);
                            }
                            goto code_r0x0800303c;
                        }
                    }
                    _dev_err(*param_1,"write TXA_POST1_LVL fail.\n");
                }
code_r0x0800303c:
                if (*(param_1 + 0x25d) != '\0') {
                    _dev_err(*param_1,"TXB_POST1_LVL:0x%02x.\n");
                    if (iVar16 + -0x20 != NULL) {
                        uVar9 = *(iVar16 + -0x20);
                        if (uVar9 != 0xffffffff) {
                            uVar4 = *(param_1 + 0x25d);
                            iVar15 = param_1[0x2e] + uVar9;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar9);
                            }
                            goto code_r0x08003078;
                        }
                    }
                    _dev_err(*param_1,"write TXB_POST1_LVL fail.\n");
                }
code_r0x08003078:
                if (*(param_1 + 0x25e) != '\0') {
                    _dev_err(*param_1,"TXMGN_V0:0x%02x.\n");
                    if (iVar16 + -0x18 != NULL) {
                        uVar9 = *(iVar16 + -0x18);
                        if (uVar9 != 0xffffffff) {
                            uVar4 = *(param_1 + 0x25e);
                            iVar15 = param_1[0x2e] + uVar9;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar9);
                            }
                            goto code_r0x080030b4;
                        }
                    }
                    _dev_err(*param_1,"write TXMGN_V0 fail.\n");
                }
code_r0x080030b4:
                puVar17 = iVar16 + -0x10;
                if (*(param_1 + 0x25f) != '\0') {
                    _dev_err(*param_1,"TXDEEMPH_M3P5DB:0x%02x.\n");
                    if (puVar17 != NULL) {
                        uVar9 = *puVar17;
                        if (uVar9 != 0xffffffff) {
                            uVar4 = *(param_1 + 0x25f);
                            iVar15 = param_1[0x2e] + uVar9;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar9);
                            }
                            goto code_r0x080030f0;
                        }
                    }
                    _dev_err(*param_1,"write TXDEEMPH_M3P5DB fail.\n");
                }
code_r0x080030f0:
                puVar3 = iVar16 + -8;
                if (param_1[0x4c] != '\0') {
                    _dev_err(*param_1,"G3S2_TXMGN_MAIN:0x%02x.\n");
                    if (puVar3 != NULL) {
                        uVar9 = *puVar3;
                        if (uVar9 != 0xffffffff) {
                            uVar4 = *(param_1 + 0x4c);
                            iVar15 = param_1[0x2e] + uVar9;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar9);
                            }
                            goto code_r0x0800312c;
                        }
                    }
                    _dev_err(*param_1,"write G3S2_TXMGN_MAIN fail.\n");
                }
code_r0x0800312c:
                iVar15 = *param_1;
                uVar7 = sym.readl_relaxed(param_1[0x2e] + *(iVar16 + -0x48));
                _dev_err(iVar15,"CRC USB3 PHY CFG:%d:0x%02x.\n",0,uVar7);
                iVar15 = *param_1;
                uVar7 = sym.readl_relaxed(param_1[0x2e] + *(iVar16 + -0x40));
                _dev_err(iVar15,"CRC USB3 PHY CFG:%d:0x%02x.\n",1,uVar7);
                iVar15 = *param_1;
                uVar7 = sym.readl_relaxed(param_1[0x2e] + *(iVar16 + -0x38));
                _dev_err(iVar15,"CRC USB3 PHY CFG:%d:0x%02x.\n",2,uVar7);
                iVar15 = *param_1;
                uVar7 = sym.readl_relaxed(param_1[0x2e] + *(iVar16 + -0x30));
                _dev_err(iVar15,"CRC USB3 PHY CFG:%d:0x%02x.\n",3,uVar7);
                iVar15 = *param_1;
                uVar7 = sym.readl_relaxed(param_1[0x2e] + *(iVar16 + -0x28));
                _dev_err(iVar15,"CRC USB3 PHY CFG:%d:0x%02x.\n",4,uVar7);
                iVar15 = *param_1;
                uVar7 = sym.readl_relaxed(param_1[0x2e] + *(iVar16 + -0x20));
                _dev_err(iVar15,"CRC USB3 PHY CFG:%d:0x%02x.\n",5,uVar7);
                iVar15 = *param_1;
                uVar7 = sym.readl_relaxed(param_1[0x2e] + *(iVar16 + -0x18));
                _dev_err(iVar15,"CRC USB3 PHY CFG:%d:0x%02x.\n",6,uVar7);
                iVar16 = *param_1;
                uVar7 = sym.readl_relaxed(param_1[0x2e] + *puVar17);
                _dev_err(iVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",7,uVar7);
                iVar16 = *param_1;
                uVar7 = sym.readl_relaxed(param_1[0x2e] + *puVar3);
                _dev_err(iVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",8,uVar7);
                return 0;
            }
            usleep_range_state(1,2,2);
            bVar6 = iVar8 != -1;
            iVar8 = iVar8 + 1;
        } while (bVar6);
        _dev_err(*param_1,"QMP PHY initialization timeout\n");
        iVar16 = *param_1;
        uVar10 = sym.readl_relaxed(param_1[0x2e] + *param_1[0x45]);
        _dev_err(iVar16,"USB3_PHY_PCS_STATUS:%x\n",uVar10);
        iVar8 = -0x10;
    }
    *(param_1 + 0x223) = 1;
    sym.writel_relaxed(0,param_1[0x2e] + *(param_1[0x45] + 0xc));
    sym.msm_ssphy_qmp_enable_clks(param_1,0);
    sym.msm_ssusb_qmp_ldo_enable(param_1,0);
    return iVar8;
}


// ===== sym.msm_ssphy_qmp_remove.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08002138 (size 8) =====

ulong sym.msm_ssphy_qmp_remove.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1 != 0) {
        debugfs_remove(*(arg1 + 0x250));
        usb_remove_phy(arg1);
        sym.msm_ssphy_qmp_enable_clks(arg1,0);
        sym.msm_ssusb_qmp_ldo_enable(arg1,0);
        kfree(arg1);
    }
    return 0;
}


// ===== sym.msm_ssphy_qmp_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08002140 (size 8) =====

uint64_t sym.msm_ssphy_qmp_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t *arg1;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar9 = param_1 + 0x10;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_3c = 0;
    uStack_40 = 0;
    arg1 = devm_kmalloc(iVar9,0x268,0xdc0);
    if (arg1 == NULL) {
code_r0x080025d0:
        uVar5 = 0xfffffff4;
        goto code_r0x080025d4;
    }
    uVar4 = *(param_1 + 0x300);
    *(arg1 + 0x244) = 0;
    iVar2 = of_device_is_compatible(uVar4,"qcom,usb-ssphy-qmp-dp-combo");
    if (iVar2 != 0) {
        *(arg1 + 0x244) = 2;
    }
    iVar2 = of_device_is_compatible(*(param_1 + 0x300),"qcom,usb-ssphy-qmp-usb3-or-dp");
    if (iVar2 != 0) {
        *(arg1 + 0x244) = 1;
    }
    uVar5 = devm_clk_get(iVar9,"aux_clk");
    arg1[0x3b] = uVar5;
    if (uVar5 < 0xfffffffffffff001) {
        uVar4 = clk_round_rate(uVar5,0xffffffffffffffff);
        clk_set_rate(uVar5,uVar4);
        iVar2 = of_property_match_string(*(param_1 + 0x300),"clock-names","cfg_ahb_clk");
        if (-1 < iVar2) {
            uVar6 = devm_clk_get(iVar9,"cfg_ahb_clk");
            arg1[0x3d] = uVar6;
            if (uVar6 < 0xfffffffffffff001) goto code_r0x0800228c;
            if (uVar6 == -0x205) goto code_r0x08002380;
            pcVar10 = "failed to get cfg_ahb_clk ret %d\n";
code_r0x08002394:
            uVar5 = uVar6 & 0xffffffff;
            _dev_err(iVar9,pcVar10,uVar5);
            iVar2 = uVar6;
            goto joined_r0x080023a0;
        }
code_r0x0800228c:
        uVar5 = devm_clk_get(iVar9,"pipe_clk");
        arg1[0x3e] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            arg1[0x3e] = 0;
            if (uVar5 != -0x205) {
                uVar5 = uVar5 & 0xffffffff;
                pcVar10 = "failed to get pipe_clk\n";
                goto code_r0x080022c0;
            }
code_r0x08002380:
            uVar5 = 0xfffffdfb;
            goto code_r0x080025d4;
        }
        uVar6 = devm_clk_get(iVar9,"pipe_clk_mux");
        uVar5 = 0;
        if (uVar6 < 0xfffffffffffff001) {
            uVar5 = uVar6;
        }
        arg1[0x3f] = uVar5;
        uVar6 = devm_clk_get(iVar9,"pipe_clk_ext_src");
        uVar5 = 0;
        if (uVar6 < 0xfffffffffffff001) {
            uVar5 = uVar6;
        }
        arg1[0x40] = uVar5;
        uVar6 = devm_clk_get(iVar9,"ref_clk_src");
        uVar5 = 0;
        if (uVar6 < 0xfffffffffffff001) {
            uVar5 = uVar6;
        }
        arg1[0x39] = uVar5;
        uVar6 = devm_clk_get(iVar9,"ref_clk");
        uVar5 = 0;
        if (uVar6 < 0xfffffffffffff001) {
            uVar5 = uVar6;
        }
        uVar4 = *(param_1 + 0x300);
        arg1[0x3a] = uVar5;
        iVar2 = of_property_match_string(uVar4,"clock-names","com_aux_clk");
        if (-1 < iVar2) {
            uVar6 = devm_clk_get(iVar9,"com_aux_clk");
            arg1[0x3c] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                if (uVar6 != -0x205) {
                    pcVar10 = "failed to get com_aux_clk ret %d\n";
                    goto code_r0x08002394;
                }
                goto code_r0x08002380;
            }
        }
    }
    else {
        arg1[0x3b] = 0;
        if (uVar5 == -0x205) goto code_r0x08002380;
        pcVar10 = "failed to get aux_clk\n";
code_r0x080022c0:
        _dev_err(iVar9,pcVar10);
        iVar2 = uVar5;
joined_r0x080023a0:
        if (iVar2 != 0) goto code_r0x080025d4;
    }
    uVar5 = __devm_reset_control_get(iVar9,"phy_reset",0,0,0,1);
    arg1[0x41] = uVar5;
    if (uVar5 < 0xfffffffffffff001) {
        if (*(arg1 + 0x244) == 2) {
            uVar5 = __devm_reset_control_get(iVar9,"global_phy_reset",0,0,0,1);
            arg1[0x43] = uVar5;
        }
        else {
            uVar5 = __devm_reset_control_get(iVar9,"phy_phy_reset",0,0,0,1);
            arg1[0x42] = uVar5;
        }
        if (uVar5 < 0xfffffffffffff001) {
            of_get_property(*(param_1 + 0x300),"qcom,qmp-phy-reg-offset",&uStack_3c);
            if (uStack_3c == 0) {
                pcVar10 = "err provide qcom,qmp-phy-reg-offset\n";
            }
            else {
                iVar7 = devm_kmalloc(iVar9,0x38,0xdc0);
                arg1[0x45] = iVar7;
                if (iVar7 == 0) {
                    _dev_err(iVar9,"err mem alloc for qmp_phy_reg_offset\n");
                    uVar5 = 0xfffffff4;
                    goto code_r0x080025d4;
                }
                *(arg1 + 0x46) = uStack_3c >> 2;
                if (uStack_3c < 0x3c) {
                    of_property_read_variable_u32_array
                              (*(param_1 + 0x300),"qcom,qmp-phy-reg-offset",iVar7,uStack_3c >> 2,0);
                    piVar8 = platform_get_resource_byname(param_1,0x200,"qmp_phy_base");
                    if (piVar8 == NULL) {
                        _dev_err(iVar9,"failed getting qmp_phy_base\n");
                        uVar5 = 0xffffffed;
                        goto code_r0x080025d4;
                    }
                    uVar5 = devm_ioremap(iVar9,*piVar8,(piVar8[1] - *piVar8) + 1);
                    arg1[0x2e] = uVar5;
                    if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) goto code_r0x08002608;
                    iVar7 = platform_get_resource_byname(param_1,0x200,"vls_clamp_reg");
                    if (iVar7 != 0) {
                        uVar5 = devm_ioremap_resource(iVar9,iVar7);
                        arg1[0x2f] = uVar5;
                        if (0xfffffffffffff000 < uVar5) {
                            _dev_err(iVar9,"err getting vls_clamp_reg address\n");
                            uVar5 = *(arg1 + 0x2f);
                            goto code_r0x080025d4;
                        }
                    }
                    iVar7 = platform_get_resource_byname(param_1,0x200,"pcs_clamp_enable_reg");
                    if (iVar7 != 0) {
                        uVar5 = devm_ioremap_resource(iVar9,iVar7);
                        arg1[0x30] = uVar5;
                        if (0xfffffffffffff000 < uVar5) {
                            _dev_err(iVar9,"err getting pcs_clamp_enable_reg address.\n");
                            uVar5 = *(arg1 + 0x30);
                            goto code_r0x080025d4;
                        }
                    }
                    iVar7 = platform_get_resource_byname(param_1,0x200,"tcsr_usb3_dp_phymode");
                    if (iVar7 != 0) {
                        uVar5 = devm_ioremap_resource(iVar9,iVar7);
                        arg1[0x31] = uVar5;
                        if (0xfffffffffffff000 < uVar5) {
                            _dev_err(iVar9,"err getting tcsr_usb3_dp_phymode addr\n");
                            uVar5 = *(arg1 + 0x31);
                            goto code_r0x080025d4;
                        }
                    }
                    of_get_property(*(param_1 + 0x300),"qcom,qmp-phy-init-seq",&uStack_3c);
                    if (uStack_3c == 0) {
                        pcVar10 = "error need qmp-phy-init-seq\n";
                    }
                    else if ((uStack_3c & 7) == 0) {
                        of_get_property(*(param_1 + 0x300),"qcom,qmp-phy-override-seq",&uStack_40);
                        if ((uStack_40 & 7) == 0) {
                            iVar2 = uStack_3c + uStack_40;
                            iStack_44 = iVar2;
                            iVar7 = devm_kmalloc(iVar9,iVar2,0xdc0);
                            arg1[0x47] = iVar7;
                            if (iVar7 == 0) goto code_r0x080025d0;
                            uVar4 = *(param_1 + 0x300);
                            *(arg1 + 0x48) = iVar2 >> 3;
                            of_property_read_variable_u32_array
                                      (uVar4,"qcom,qmp-phy-init-seq",iVar7,uStack_3c >> 2,0);
                            of_property_read_variable_u32_array
                                      (*(param_1 + 0x300),"qcom,qmp-phy-override-seq",arg1[0x47] + uStack_3c,
                                       uStack_40 >> 2,0);
                            uVar4 = *(param_1 + 0x300);
                            arg1[0x36] = 0x124f8000000000;
                            *(arg1 + 0x37) = 1200000;
                            iVar7 = of_get_property(uVar4,"qcom,core-voltage-level",&iStack_44);
                            if (((iVar7 == 0) || (iStack_44 != 0xc)) ||
                               (uVar3 = of_property_read_variable_u32_array
                                                  (*(param_1 + 0x300),"qcom,core-voltage-level",arg1 + 0x36,3,0),
                               -1 < uVar3)) {
                                piVar1 = arg1 + 0x1bc;
                                iVar2 = of_property_read_variable_u32_array
                                                  (*(param_1 + 0x300),"qcom,core-max-load-uA",piVar1,1,0);
                                if ((iVar2 < 0) || (*piVar1 == 0)) {
                                    *piVar1 = 30000;
                                }
                                iVar7 = of_get_property(*(param_1 + 0x300),"qcom,vdd-voltage-level",&iStack_44);
                                if ((iVar7 == 0) || (iStack_44 != 0xc)) {
                                    pcVar10 = "error invalid inputs for vdd-voltage-level\n";
                                    goto code_r0x08002858;
                                }
                                uVar3 = of_property_read_variable_u32_array
                                                  (*(param_1 + 0x300),"qcom,vdd-voltage-level",arg1 + 0x33,3,0);
                                if (-1 < uVar3) {
                                    piVar1 = arg1 + 0x1a4;
                                    iVar2 = of_property_read_variable_u32_array
                                                      (*(param_1 + 0x300),"qcom,vdd-max-load-uA",piVar1,1,0);
                                    if ((iVar2 < 0) || (*piVar1 == 0)) {
                                        *piVar1 = 30000;
                                    }
                                    uVar5 = devm_regulator_get(iVar9,0x80008aa);
                                    arg1[0x32] = uVar5;
                                    if (uVar5 < 0xfffffffffffff001) {
                                        uVar5 = devm_regulator_get(iVar9,"core");
                                        arg1[0x35] = uVar5;
                                        if (uVar5 < 0xfffffffffffff001) {
                                            uVar5 = devm_regulator_get(iVar9,"usb3_dp_phy_gdsc");
                                            arg1[0x38] = uVar5;
                                            if (0xfffffffffffff000 < uVar5) {
                                                if (uVar5 != -0x13) {
                                                    uVar5 = uVar5 & 0xffffffff;
                                                    _dev_err(iVar9,"fail to get usb3_dp_phy_gdsc(%d)\n",uVar5);
                                                    goto code_r0x080025d4;
                                                }
                                                _dev_err(iVar9,"usb3_dp_phy_gdsc optional regulator missing\n");
                                            }
                                            *(param_1 + 0xa8) = arg1;
                                            iVar7 = of_find_property(*(param_1 + 0x300),"usb3,eyegram-tuning",0);
                                            *(arg1 + 0x49) = iVar7 != 0;
                                            _dev_err(param_1 + 0x10,"usb3 eye gram:%d\n");
                                            *arg1 = iVar9;
                                            arg1[0x23] = sym.msm_ssphy_qmp_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                            arg1[0x27] = 
                                            sym.msm_ssphy_qmp_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                            arg1[0x29] = 
                                            sym.msm_ssphy_qmp_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                            arg1[0x2a] = 
                                            sym.msm_ssphy_qmp_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                            uVar5 = usb_add_phy_dev(arg1);
                                            uVar5 = uVar5 & 0xffffffff;
                                            sym.msm_ssphy_create_debugfs(arg1);
                                        }
                                        else {
                                            _dev_err(iVar9,"unable to get core ldo supply\n");
                                            uVar5 = *(arg1 + 0x35);
                                        }
                                    }
                                    else {
                                        _dev_err(iVar9,"unable to get vdd supply\n");
                                        uVar5 = *(arg1 + 0x32);
                                    }
                                    goto code_r0x080025d4;
                                }
                                pcVar10 = "err qcom,vdd-voltage-level property\n";
                            }
                            else {
                                pcVar10 = "err qcom,core-voltage-level property\n";
                            }
                            uVar5 = uVar3;
                            _dev_err(iVar9,pcVar10);
                            goto code_r0x080025d4;
                        }
                        pcVar10 = "invalid override seq len\n";
                    }
                    else {
                        pcVar10 = "invalid init_seq_len\n";
                    }
                }
                else {
                    pcVar10 = "invalid reg offset count\n";
                }
            }
code_r0x08002858:
            _dev_err(iVar9,pcVar10);
            uVar5 = 0xffffffea;
            goto code_r0x080025d4;
        }
    }
code_r0x08002608:
    uVar5 = uVar5 & 0xffffffff;
code_r0x080025d4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar5 & 0xffffffff;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.msm_ssphy_qmp_remove;
    iVar9 = *(iVar9 + 0xa8);
    if (iVar9 != 0) {
        debugfs_remove(*(iVar9 + 0x250));
        usb_remove_phy(iVar9);
        sym.msm_ssphy_qmp_enable_clks(iVar9,0);
        sym.msm_ssusb_qmp_ldo_enable(iVar9,0);
        kfree(iVar9);
    }
    return 0;
}


// ===== sym.msm_ssphy_qmp_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08002148 (size 8) =====

ulong sym.msm_ssphy_qmp_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x222) = 1;
    atomic_notifier_call_chain(param_1 + 0xf0,1);
    return 0;
}


// ===== sym.msm_ssphy_qmp_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08002150 (size 8) =====

ulong sym.msm_ssphy_qmp_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_call_chain(param_1 + 0xf0,0,param_1);
    if ((*(param_1 + 0x10) & 1) != 0) {
        sym.writel_relaxed(0,*(param_1 + 0x170) + *(*(param_1 + 0x228) + 0xc));
        sym.readl_relaxed(*(param_1 + 0x170) + *(*(param_1 + 0x228) + 0xc));
    }
    *(param_1 + 0x222) = 0;
    return 0;
}


// ===== sym.msm_ssphy_qmp_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt @ 0x08002158 (size 8) =====

ulong sym.msm_ssphy_qmp_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt(ulong *param_1,uint32_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x223) != param_2) {
        if (param_2 == 0) {
            if ((*(param_1 + 2) >> 9 & 1) == 0) {
                if ((((*(param_1 + 2) & 1) == 0) && (*(param_1 + 0x222) == '\0')) &&
                   (iVar1 = sym.msm_ssusb_qmp_ldo_enable(param_1,1), iVar1 != 0)) {
                    _dev_err(*param_1,"msm_ssusb_qmp_ldo_enable(1) failed, ret=%d\n",iVar1);
                }
                sym.msm_ssphy_qmp_enable_clks(param_1,1);
                if (*(param_1 + 0x222) == '\0') {
                    sym.writel_relaxed(1,param_1[0x2e] + *(param_1[0x45] + 0xc));
                }
                else {
                    sym.msm_ssusb_qmp_enable_autonomous(param_1);
                }
                DataSynchronizationBarrier(3,2,0);
                if ((*(param_1 + 0x244) == 2) && ((*(param_1 + 0x11) & 6) != 0)) {
                    sym.writel_relaxed(3,param_1[0x2e] + *(param_1[0x45] + 0x28));
                    sym.readl_relaxed(param_1[0x2e] + *(param_1[0x45] + 0x28));
                }
                *(param_1 + 0x223) = 0;
                return 0;
            }
            _dev_info(*param_1,"QMP PHY currently in DP mode\n");
            return 0xfffffff0;
        }
        if (*(param_1 + 0x222) == '\0') {
            if ((*(param_1 + 0x244) == 2) && ((*(param_1 + 0x11) & 6) == 0)) {
                sym.writel_relaxed(1,param_1[0x2e] + *(param_1[0x45] + 0x28));
                sym.readl_relaxed(param_1[0x2e] + *(param_1[0x45] + 0x28));
            }
            sym.writel_relaxed(0,param_1[0x2e] + *(param_1[0x45] + 0xc));
        }
        else {
            sym.msm_ssusb_qmp_enable_autonomous(param_1);
        }
        DataSynchronizationBarrier(3,2,0);
        sym.msm_ssphy_qmp_enable_clks(param_1,0);
        *(param_1 + 0x223) = 1;
        if ((*(param_1 + 2) & 1) != 0) {
            return 0;
        }
        if (*(param_1 + 0x222) == '\0') {
            iVar1 = sym.msm_ssusb_qmp_ldo_enable(param_1,0);
            if (iVar1 == 0) {
                return 0;
            }
            _dev_err(*param_1,"msm_ssusb_qmp_ldo_enable(0) failed, ret=%d\n");
            return 0;
        }
    }
    return 0;
}


// ===== sym.msm_ssphy_qmp_probe @ 0x08002160 (size 2104) =====

uint64_t sym.msm_ssphy_qmp_probe(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t *arg1_00;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar9 = arg1 + 0x10;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_3c = 0;
    uStack_40 = 0;
    arg1_00 = devm_kmalloc(iVar9,0x268,0xdc0);
    if (arg1_00 == NULL) {
code_r0x080025d0:
        uVar5 = 0xfffffff4;
        goto code_r0x080025d4;
    }
    uVar4 = *(arg1 + 0x300);
    *(arg1_00 + 0x244) = 0;
    iVar2 = of_device_is_compatible(uVar4,"qcom,usb-ssphy-qmp-dp-combo");
    if (iVar2 != 0) {
        *(arg1_00 + 0x244) = 2;
    }
    iVar2 = of_device_is_compatible(*(arg1 + 0x300),"qcom,usb-ssphy-qmp-usb3-or-dp");
    if (iVar2 != 0) {
        *(arg1_00 + 0x244) = 1;
    }
    uVar5 = devm_clk_get(iVar9,"aux_clk");
    arg1_00[0x3b] = uVar5;
    if (uVar5 < 0xfffffffffffff001) {
        uVar4 = clk_round_rate(uVar5,0xffffffffffffffff);
        clk_set_rate(uVar5,uVar4);
        iVar2 = of_property_match_string(*(arg1 + 0x300),"clock-names","cfg_ahb_clk");
        if (-1 < iVar2) {
            uVar6 = devm_clk_get(iVar9,"cfg_ahb_clk");
            arg1_00[0x3d] = uVar6;
            if (uVar6 < 0xfffffffffffff001) goto code_r0x0800228c;
            if (uVar6 == -0x205) goto code_r0x08002380;
            pcVar10 = "failed to get cfg_ahb_clk ret %d\n";
code_r0x08002394:
            uVar5 = uVar6 & 0xffffffff;
            _dev_err(iVar9,pcVar10,uVar5);
            iVar2 = uVar6;
            goto joined_r0x080023a0;
        }
code_r0x0800228c:
        uVar5 = devm_clk_get(iVar9,"pipe_clk");
        arg1_00[0x3e] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            arg1_00[0x3e] = 0;
            if (uVar5 != -0x205) {
                uVar5 = uVar5 & 0xffffffff;
                pcVar10 = "failed to get pipe_clk\n";
                goto code_r0x080022c0;
            }
code_r0x08002380:
            uVar5 = 0xfffffdfb;
            goto code_r0x080025d4;
        }
        uVar6 = devm_clk_get(iVar9,"pipe_clk_mux");
        uVar5 = 0;
        if (uVar6 < 0xfffffffffffff001) {
            uVar5 = uVar6;
        }
        arg1_00[0x3f] = uVar5;
        uVar6 = devm_clk_get(iVar9,"pipe_clk_ext_src");
        uVar5 = 0;
        if (uVar6 < 0xfffffffffffff001) {
            uVar5 = uVar6;
        }
        arg1_00[0x40] = uVar5;
        uVar6 = devm_clk_get(iVar9,"ref_clk_src");
        uVar5 = 0;
        if (uVar6 < 0xfffffffffffff001) {
            uVar5 = uVar6;
        }
        arg1_00[0x39] = uVar5;
        uVar6 = devm_clk_get(iVar9,"ref_clk");
        uVar5 = 0;
        if (uVar6 < 0xfffffffffffff001) {
            uVar5 = uVar6;
        }
        uVar4 = *(arg1 + 0x300);
        arg1_00[0x3a] = uVar5;
        iVar2 = of_property_match_string(uVar4,"clock-names","com_aux_clk");
        if (-1 < iVar2) {
            uVar6 = devm_clk_get(iVar9,"com_aux_clk");
            arg1_00[0x3c] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                if (uVar6 != -0x205) {
                    pcVar10 = "failed to get com_aux_clk ret %d\n";
                    goto code_r0x08002394;
                }
                goto code_r0x08002380;
            }
        }
    }
    else {
        arg1_00[0x3b] = 0;
        if (uVar5 == -0x205) goto code_r0x08002380;
        pcVar10 = "failed to get aux_clk\n";
code_r0x080022c0:
        _dev_err(iVar9,pcVar10);
        iVar2 = uVar5;
joined_r0x080023a0:
        if (iVar2 != 0) goto code_r0x080025d4;
    }
    uVar5 = __devm_reset_control_get(iVar9,"phy_reset",0,0,0,1);
    arg1_00[0x41] = uVar5;
    if (uVar5 < 0xfffffffffffff001) {
        if (*(arg1_00 + 0x244) == 2) {
            uVar5 = __devm_reset_control_get(iVar9,"global_phy_reset",0,0,0,1);
            arg1_00[0x43] = uVar5;
        }
        else {
            uVar5 = __devm_reset_control_get(iVar9,"phy_phy_reset",0,0,0,1);
            arg1_00[0x42] = uVar5;
        }
        if (uVar5 < 0xfffffffffffff001) {
            of_get_property(*(arg1 + 0x300),"qcom,qmp-phy-reg-offset",&uStack_3c);
            if (uStack_3c == 0) {
                pcVar10 = "err provide qcom,qmp-phy-reg-offset\n";
            }
            else {
                iVar7 = devm_kmalloc(iVar9,0x38,0xdc0);
                arg1_00[0x45] = iVar7;
                if (iVar7 == 0) {
                    _dev_err(iVar9,"err mem alloc for qmp_phy_reg_offset\n");
                    uVar5 = 0xfffffff4;
                    goto code_r0x080025d4;
                }
                *(arg1_00 + 0x46) = uStack_3c >> 2;
                if (uStack_3c < 0x3c) {
                    of_property_read_variable_u32_array
                              (*(arg1 + 0x300),"qcom,qmp-phy-reg-offset",iVar7,uStack_3c >> 2,0);
                    piVar8 = platform_get_resource_byname(arg1,0x200,"qmp_phy_base");
                    if (piVar8 == NULL) {
                        _dev_err(iVar9,"failed getting qmp_phy_base\n");
                        uVar5 = 0xffffffed;
                        goto code_r0x080025d4;
                    }
                    uVar5 = devm_ioremap(iVar9,*piVar8,(piVar8[1] - *piVar8) + 1);
                    arg1_00[0x2e] = uVar5;
                    if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) goto code_r0x08002608;
                    iVar7 = platform_get_resource_byname(arg1,0x200,"vls_clamp_reg");
                    if (iVar7 != 0) {
                        uVar5 = devm_ioremap_resource(iVar9,iVar7);
                        arg1_00[0x2f] = uVar5;
                        if (0xfffffffffffff000 < uVar5) {
                            _dev_err(iVar9,"err getting vls_clamp_reg address\n");
                            uVar5 = *(arg1_00 + 0x2f);
                            goto code_r0x080025d4;
                        }
                    }
                    iVar7 = platform_get_resource_byname(arg1,0x200,"pcs_clamp_enable_reg");
                    if (iVar7 != 0) {
                        uVar5 = devm_ioremap_resource(iVar9,iVar7);
                        arg1_00[0x30] = uVar5;
                        if (0xfffffffffffff000 < uVar5) {
                            _dev_err(iVar9,"err getting pcs_clamp_enable_reg address.\n");
                            uVar5 = *(arg1_00 + 0x30);
                            goto code_r0x080025d4;
                        }
                    }
                    iVar7 = platform_get_resource_byname(arg1,0x200,"tcsr_usb3_dp_phymode");
                    if (iVar7 != 0) {
                        uVar5 = devm_ioremap_resource(iVar9,iVar7);
                        arg1_00[0x31] = uVar5;
                        if (0xfffffffffffff000 < uVar5) {
                            _dev_err(iVar9,"err getting tcsr_usb3_dp_phymode addr\n");
                            uVar5 = *(arg1_00 + 0x31);
                            goto code_r0x080025d4;
                        }
                    }
                    of_get_property(*(arg1 + 0x300),"qcom,qmp-phy-init-seq",&uStack_3c);
                    if (uStack_3c == 0) {
                        pcVar10 = "error need qmp-phy-init-seq\n";
                    }
                    else if ((uStack_3c & 7) == 0) {
                        of_get_property(*(arg1 + 0x300),"qcom,qmp-phy-override-seq",&uStack_40);
                        if ((uStack_40 & 7) == 0) {
                            iVar2 = uStack_3c + uStack_40;
                            iStack_44 = iVar2;
                            iVar7 = devm_kmalloc(iVar9,iVar2,0xdc0);
                            arg1_00[0x47] = iVar7;
                            if (iVar7 == 0) goto code_r0x080025d0;
                            uVar4 = *(arg1 + 0x300);
                            *(arg1_00 + 0x48) = iVar2 >> 3;
                            of_property_read_variable_u32_array
                                      (uVar4,"qcom,qmp-phy-init-seq",iVar7,uStack_3c >> 2,0);
                            of_property_read_variable_u32_array
                                      (*(arg1 + 0x300),"qcom,qmp-phy-override-seq",arg1_00[0x47] + uStack_3c,
                                       uStack_40 >> 2,0);
                            uVar4 = *(arg1 + 0x300);
                            arg1_00[0x36] = 0x124f8000000000;
                            *(arg1_00 + 0x37) = 1200000;
                            iVar7 = of_get_property(uVar4,"qcom,core-voltage-level",&iStack_44);
                            if (((iVar7 == 0) || (iStack_44 != 0xc)) ||
                               (uVar3 = of_property_read_variable_u32_array
                                                  (*(arg1 + 0x300),"qcom,core-voltage-level",arg1_00 + 0x36,3,0),
                               -1 < uVar3)) {
                                piVar1 = arg1_00 + 0x1bc;
                                iVar2 = of_property_read_variable_u32_array
                                                  (*(arg1 + 0x300),"qcom,core-max-load-uA",piVar1,1,0);
                                if ((iVar2 < 0) || (*piVar1 == 0)) {
                                    *piVar1 = 30000;
                                }
                                iVar7 = of_get_property(*(arg1 + 0x300),"qcom,vdd-voltage-level",&iStack_44);
                                if ((iVar7 == 0) || (iStack_44 != 0xc)) {
                                    pcVar10 = "error invalid inputs for vdd-voltage-level\n";
                                    goto code_r0x08002858;
                                }
                                uVar3 = of_property_read_variable_u32_array
                                                  (*(arg1 + 0x300),"qcom,vdd-voltage-level",arg1_00 + 0x33,3,0);
                                if (-1 < uVar3) {
                                    piVar1 = arg1_00 + 0x1a4;
                                    iVar2 = of_property_read_variable_u32_array
                                                      (*(arg1 + 0x300),"qcom,vdd-max-load-uA",piVar1,1,0);
                                    if ((iVar2 < 0) || (*piVar1 == 0)) {
                                        *piVar1 = 30000;
                                    }
                                    uVar5 = devm_regulator_get(iVar9,0x80008aa);
                                    arg1_00[0x32] = uVar5;
                                    if (uVar5 < 0xfffffffffffff001) {
                                        uVar5 = devm_regulator_get(iVar9,"core");
                                        arg1_00[0x35] = uVar5;
                                        if (uVar5 < 0xfffffffffffff001) {
                                            uVar5 = devm_regulator_get(iVar9,"usb3_dp_phy_gdsc");
                                            arg1_00[0x38] = uVar5;
                                            if (0xfffffffffffff000 < uVar5) {
                                                if (uVar5 != -0x13) {
                                                    uVar5 = uVar5 & 0xffffffff;
                                                    _dev_err(iVar9,"fail to get usb3_dp_phy_gdsc(%d)\n",uVar5);
                                                    goto code_r0x080025d4;
                                                }
                                                _dev_err(iVar9,"usb3_dp_phy_gdsc optional regulator missing\n");
                                            }
                                            *(arg1 + 0xa8) = arg1_00;
                                            iVar7 = of_find_property(*(arg1 + 0x300),"usb3,eyegram-tuning",0);
                                            *(arg1_00 + 0x49) = iVar7 != 0;
                                            _dev_err(arg1 + 0x10,"usb3 eye gram:%d\n");
                                            *arg1_00 = iVar9;
                                            arg1_00[0x23] =
                                                 sym.msm_ssphy_qmp_init.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                            arg1_00[0x27] =
                                                 sym.msm_ssphy_qmp_set_suspend.45e9c221f7851536f223e0cf2954b9a9.cfi_jt;
                                            arg1_00[0x29] =
                                                 sym.msm_ssphy_qmp_notify_connect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt
                                            ;
                                            arg1_00[0x2a] =
                                                 sym.msm_ssphy_qmp_notify_disconnect.45e9c221f7851536f223e0cf2954b9a9.cfi_jt
                                            ;
                                            uVar5 = usb_add_phy_dev(arg1_00);
                                            uVar5 = uVar5 & 0xffffffff;
                                            sym.msm_ssphy_create_debugfs(arg1_00);
                                        }
                                        else {
                                            _dev_err(iVar9,"unable to get core ldo supply\n");
                                            uVar5 = *(arg1_00 + 0x35);
                                        }
                                    }
                                    else {
                                        _dev_err(iVar9,"unable to get vdd supply\n");
                                        uVar5 = *(arg1_00 + 0x32);
                                    }
                                    goto code_r0x080025d4;
                                }
                                pcVar10 = "err qcom,vdd-voltage-level property\n";
                            }
                            else {
                                pcVar10 = "err qcom,core-voltage-level property\n";
                            }
                            uVar5 = uVar3;
                            _dev_err(iVar9,pcVar10);
                            goto code_r0x080025d4;
                        }
                        pcVar10 = "invalid override seq len\n";
                    }
                    else {
                        pcVar10 = "invalid init_seq_len\n";
                    }
                }
                else {
                    pcVar10 = "invalid reg offset count\n";
                }
            }
code_r0x08002858:
            _dev_err(iVar9,pcVar10);
            uVar5 = 0xffffffea;
            goto code_r0x080025d4;
        }
    }
code_r0x08002608:
    uVar5 = uVar5 & 0xffffffff;
code_r0x080025d4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar5 & 0xffffffff;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.msm_ssphy_qmp_remove;
    iVar9 = *(iVar9 + 0xa8);
    if (iVar9 != 0) {
        debugfs_remove(*(iVar9 + 0x250));
        usb_remove_phy(iVar9);
        sym.msm_ssphy_qmp_enable_clks(iVar9,0);
        sym.msm_ssusb_qmp_ldo_enable(iVar9,0);
        kfree(iVar9);
    }
    return 0;
}


// ===== sym.msm_ssphy_qmp_remove @ 0x08002998 (size 100) =====

ulong sym.msm_ssphy_qmp_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00 != 0) {
        debugfs_remove(*(arg1_00 + 0x250));
        usb_remove_phy(arg1_00);
        sym.msm_ssphy_qmp_enable_clks(arg1_00,0);
        sym.msm_ssusb_qmp_ldo_enable(arg1_00,0);
        kfree(arg1_00);
    }
    return 0;
}


// ===== sym.msm_ssphy_qmp_init @ 0x080029fc (size 3092) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.msm_ssphy_qmp_init(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint32_t *puVar3;
    uint8_t uVar4;
    bool bVar5;
    bool bVar6;
    uchar uVar7;
    uint32_t uVar8;
    int iVar9;
    uint uVar10;
    uint32_t uVar11;
    char *pcVar12;
    int64_t iVar13;
    ulong *in_x18;
    int iVar14;
    int64_t iVar15;
    ulong uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    uint32_t *puVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x11) >> 1 & 1) != 0) {
        _dev_info(*arg1,"QMP PHY currently in DP mode\n");
        return 0xfffffff0;
    }
    iVar18 = *(arg1 + 0x238);
    uVar8 = sym.msm_ssusb_qmp_ldo_enable(arg1,1);
    if (uVar8 != 0) {
        _dev_err(*arg1,"msm_ssusb_qmp_ldo_enable(1) failed, ret=%d\n",uVar8);
        return uVar8;
    }
    sym.msm_ssphy_qmp_enable_clks(arg1,1);
    if (*(arg1 + 0x244) == 2) {
        if ((*(arg1 + 0x11) >> 2 & 1) == 0) {
            iVar9 = reset_control_assert(*(arg1 + 0x218));
            if (iVar9 == 0) {
                iVar9 = reset_control_assert(*(arg1 + 0x208));
                if (iVar9 != 0) goto code_r0x08002b6c;
                iVar9 = reset_control_deassert(*(arg1 + 0x208));
                if (iVar9 != 0) {
                    _dev_err(*arg1,"phy_reset deassert failed\n");
                }
                iVar9 = reset_control_deassert(*(arg1 + 0x218));
                if (iVar9 == 0) goto code_r0x08002afc;
                pcVar12 = "global_phy_reset deassert failed\n";
            }
            else {
                pcVar12 = "global_phy_reset assert failed\n";
            }
        }
        else {
            iVar9 = reset_control_assert(*(arg1 + 0x208));
            if (iVar9 == 0) {
                iVar9 = reset_control_deassert(*(arg1 + 0x208));
                if (iVar9 != 0) {
                    pcVar12 = "phy_reset deassert failed\n";
                    goto code_r0x080032dc;
                }
code_r0x08002afc:
                uVar8 = *(arg1 + 0x10);
                goto joined_r0x08002ba8;
            }
code_r0x08002b6c:
            pcVar12 = "phy_reset assert failed\n";
        }
code_r0x080032dc:
        _dev_err(*arg1,pcVar12);
        uVar8 = *(arg1 + 0x10);
        if ((uVar8 >> 2 & 1) == 0) goto code_r0x08002b04;
code_r0x08002bac:
        iVar15 = 2;
code_r0x08002bb4:
        bVar5 = false;
        bVar6 = true;
    }
    else {
        iVar9 = reset_control_assert(*(arg1 + 0x210));
        if (iVar9 == 0) {
            iVar9 = reset_control_assert(*(arg1 + 0x208));
            if (iVar9 == 0) {
                if (*(arg1 + 0x188) != 0) {
                    sym.writel_relaxed(0,*(arg1 + 0x188));
                }
                iVar9 = reset_control_deassert(*(arg1 + 0x208));
                if (iVar9 != 0) {
                    pcVar12 = "phy_reset deassert failed\n";
                    goto code_r0x08002b8c;
                }
                iVar9 = reset_control_deassert(*(arg1 + 0x210));
                if (iVar9 == 0) goto code_r0x08002afc;
code_r0x08002ad8:
                pcVar12 = "phy_phy_reset deassert failed\n";
                goto code_r0x08002b60;
            }
            pcVar12 = "phy_reset assert failed\n";
code_r0x08002b8c:
            _dev_err(*arg1,pcVar12);
            iVar9 = reset_control_deassert(*(arg1 + 0x210));
            if (iVar9 != 0) goto code_r0x08002ad8;
        }
        else {
            pcVar12 = "phy_phy_reset assert failed\n";
code_r0x08002b60:
            _dev_err(*arg1,pcVar12);
        }
        *(arg1 + 0x223) = 0;
        uVar8 = *(arg1 + 0x10);
joined_r0x08002ba8:
        if ((uVar8 >> 2 & 1) != 0) goto code_r0x08002bac;
code_r0x08002b04:
        if ((uVar8 >> 3 & 1) != 0) {
            iVar15 = 3;
            goto code_r0x08002bb4;
        }
        bVar6 = false;
        iVar15 = 0xffffffea;
        bVar5 = true;
    }
    if (*(arg1 + 0x244) < 2) {
code_r0x08002be0:
        sym.writel_relaxed(1,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0xc));
    }
    else {
        if (*(arg1 + 0x244) == 2) {
            sym.writel_relaxed(1,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x1c));
            goto code_r0x08002be0;
        }
        _dev_err(*arg1,"phy_powerup: Unknown USB QMP PHY type\n");
    }
    DataSynchronizationBarrier(3,3,0);
    if (*(arg1 + 0x244) == 1) {
        if (!bVar6) goto code_r0x08002d48;
        _dev_err(*arg1,"USB QMP PHY: Update TYPEC CTRL(%d)\n",iVar15);
        iVar13 = 6;
code_r0x08002d30:
        sym.writel_relaxed(iVar15,*(arg1 + 0x170) + *(*(arg1 + 0x228) + iVar13 * 4));
    }
    else if (*(arg1 + 0x244) == 2) {
        piVar1 = arg1 + 0x170;
        sym.writel_relaxed(1,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x20));
        sym.writel_relaxed(0,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x20));
        uVar8 = *(*(arg1 + 0x228) + 0x34);
        if (uVar8 != 0) {
            sym.readl_relaxed(*piVar1 + uVar8);
        }
        piVar2 = arg1 + 0x228;
        if ((*(arg1 + 0x11) >> 2 & 1) == 0) {
            sym.writel_relaxed(0xf,*piVar1 + *(*piVar2 + 0x24));
            if (!bVar6) goto code_r0x08002ce4;
code_r0x08002c84:
            _dev_err(*arg1,"USB DP QMP PHY: Update TYPEC CTRL(%d)\n",iVar15);
            sym.writel_relaxed(iVar15,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x2c));
            if (bVar5) goto code_r0x08002ce8;
code_r0x08002cf4:
            uVar4 = *(arg1 + 0x11);
        }
        else {
            if (bVar6) goto code_r0x08002c84;
code_r0x08002ce4:
            if (!bVar5) goto code_r0x08002cf4;
code_r0x08002ce8:
            if (*(*arg1 + 0x278) != 0) goto code_r0x08002cf4;
            _dev_err(*arg1,"USB DP QMP PHY: NO SW PORTSELECT\n");
            uVar4 = *(arg1 + 0x11);
        }
        if ((uVar4 >> 2 & 1) == 0) {
            sym.writel_relaxed(3,*piVar1 + *(*piVar2 + 0x28));
            sym.readl_relaxed(*piVar1 + *(*piVar2 + 0x28));
            iVar15 = 0;
            iVar13 = 9;
            goto code_r0x08002d30;
        }
    }
code_r0x08002d48:
    DataSynchronizationBarrier(3,3,0);
    if (1 < *(arg1 + 0x244)) {
        if (*(arg1 + 0x244) != 2) {
            _dev_err(*arg1,"phy_powerup: Unknown USB QMP PHY type\n");
            goto code_r0x08002d8c;
        }
        sym.writel_relaxed(1,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x1c));
    }
    sym.writel_relaxed(1,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0xc));
code_r0x08002d8c:
    DataSynchronizationBarrier(3,3,0);
    if (*(arg1 + 0x238) == 0) {
        _dev_err(*arg1,"NULL PHY configuration\n");
        _dev_err(*arg1,"Failed the main PHY configuration\n");
        uVar17 = 0xffffffea;
    }
    else {
        iVar9 = *(arg1 + 0x240);
        if (0 < iVar9) {
            iVar14 = 0;
            puVar19 = *(arg1 + 0x238) + 4;
            do {
                sym.writel_relaxed(*puVar19,*(arg1 + 0x170) + puVar19[-1]);
                iVar9 = *(arg1 + 0x240);
                iVar14 = iVar14 + 1;
                puVar19 = puVar19 + 2;
            } while (iVar14 < iVar9);
        }
        iVar18 = iVar18 + iVar9 * 8;
        sym.writel_relaxed(0,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x10));
        sym.writel_relaxed(3,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x14));
        DataSynchronizationBarrier(3,3,0);
        iVar9 = -1000;
        do {
            uVar8 = sym.readl_relaxed(*(arg1 + 0x170) + **(arg1 + 0x228));
            if ((uVar8 >> 6 & 1) == 0) {
                if (*(arg1 + 0x248) == '\0') {
                    return 0;
                }
                if (*(arg1 + 600) != '\0') {
                    _dev_err(*arg1,"TXA_DRV_LVL:0x%02x.\n");
                    if (iVar18 + -0x48 != NULL) {
                        uVar8 = *(iVar18 + -0x48);
                        if (uVar8 != 0xffffffff) {
                            uVar4 = *(arg1 + 600);
                            iVar15 = *(arg1 + 0x170) + uVar8;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar8);
                            }
                            goto code_r0x08002f4c;
                        }
                    }
                    _dev_err(*arg1,"write TXA_DRV_LVL fail.\n");
                }
code_r0x08002f4c:
                if (*(arg1 + 0x259) != '\0') {
                    _dev_err(*arg1,"TXB_DRV_LVL:0x%02x.\n");
                    if (iVar18 + -0x40 != NULL) {
                        uVar8 = *(iVar18 + -0x40);
                        if (uVar8 != 0xffffffff) {
                            uVar4 = *(arg1 + 0x259);
                            iVar15 = *(arg1 + 0x170) + uVar8;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar8);
                            }
                            goto code_r0x08002f88;
                        }
                    }
                    _dev_err(*arg1,"write TXB_DRV_LVL fail.\n");
                }
code_r0x08002f88:
                if (*(arg1 + 0x25a) != '\0') {
                    _dev_err(*arg1,"TXA_PRE_EMPH:0x%02x.\n");
                    if (iVar18 + -0x38 != NULL) {
                        uVar8 = *(iVar18 + -0x38);
                        if (uVar8 != 0xffffffff) {
                            uVar4 = *(arg1 + 0x25a);
                            iVar15 = *(arg1 + 0x170) + uVar8;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar8);
                            }
                            goto code_r0x08002fc4;
                        }
                    }
                    _dev_err(*arg1,"write TXA_PRE_EMPH fail.\n");
                }
code_r0x08002fc4:
                if (*(arg1 + 0x25b) != '\0') {
                    _dev_err(*arg1,"TXB_PRE_EMPH:0x%02x.\n");
                    if (iVar18 + -0x30 == NULL) {
code_r0x08002ff0:
                        uVar17 = _dev_err(*arg1,"write TXB_PRE_EMPH fail.\n");
                        return uVar17;
                    }
                    uVar8 = *(iVar18 + -0x30);
                    if (uVar8 == 0xffffffff) goto code_r0x08002ff0;
                    uVar4 = *(arg1 + 0x25b);
                    iVar15 = *(arg1 + 0x170) + uVar8;
                    uVar11 = sym.readl_relaxed(iVar15);
                    sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                    uVar11 = sym.readl_relaxed(iVar15);
                    if (uVar4 != (uVar11 & 0xff)) {
                        _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar8);
                    }
                }
                if (*(arg1 + 0x25c) != '\0') {
                    _dev_err(*arg1,"TXA_POST1_LVL:0x%02x.\n");
                    if (iVar18 + -0x28 != NULL) {
                        uVar8 = *(iVar18 + -0x28);
                        if (uVar8 != 0xffffffff) {
                            uVar4 = *(arg1 + 0x25c);
                            iVar15 = *(arg1 + 0x170) + uVar8;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar8);
                            }
                            goto code_r0x0800303c;
                        }
                    }
                    _dev_err(*arg1,"write TXA_POST1_LVL fail.\n");
                }
code_r0x0800303c:
                if (*(arg1 + 0x25d) != '\0') {
                    _dev_err(*arg1,"TXB_POST1_LVL:0x%02x.\n");
                    if (iVar18 + -0x20 != NULL) {
                        uVar8 = *(iVar18 + -0x20);
                        if (uVar8 != 0xffffffff) {
                            uVar4 = *(arg1 + 0x25d);
                            iVar15 = *(arg1 + 0x170) + uVar8;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar8);
                            }
                            goto code_r0x08003078;
                        }
                    }
                    _dev_err(*arg1,"write TXB_POST1_LVL fail.\n");
                }
code_r0x08003078:
                if (*(arg1 + 0x25e) != '\0') {
                    _dev_err(*arg1,"TXMGN_V0:0x%02x.\n");
                    if (iVar18 + -0x18 != NULL) {
                        uVar8 = *(iVar18 + -0x18);
                        if (uVar8 != 0xffffffff) {
                            uVar4 = *(arg1 + 0x25e);
                            iVar15 = *(arg1 + 0x170) + uVar8;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar8);
                            }
                            goto code_r0x080030b4;
                        }
                    }
                    _dev_err(*arg1,"write TXMGN_V0 fail.\n");
                }
code_r0x080030b4:
                puVar19 = iVar18 + -0x10;
                if (*(arg1 + 0x25f) != '\0') {
                    _dev_err(*arg1,"TXDEEMPH_M3P5DB:0x%02x.\n");
                    if (puVar19 != NULL) {
                        uVar8 = *puVar19;
                        if (uVar8 != 0xffffffff) {
                            uVar4 = *(arg1 + 0x25f);
                            iVar15 = *(arg1 + 0x170) + uVar8;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar8);
                            }
                            goto code_r0x080030f0;
                        }
                    }
                    _dev_err(*arg1,"write TXDEEMPH_M3P5DB fail.\n");
                }
code_r0x080030f0:
                puVar3 = iVar18 + -8;
                if (*(arg1 + 0x260) != '\0') {
                    _dev_err(*arg1,"G3S2_TXMGN_MAIN:0x%02x.\n");
                    if (puVar3 != NULL) {
                        uVar8 = *puVar3;
                        if (uVar8 != 0xffffffff) {
                            uVar4 = *(arg1 + 0x260);
                            iVar15 = *(arg1 + 0x170) + uVar8;
                            uVar11 = sym.readl_relaxed(iVar15);
                            sym.writel_relaxed(uVar11 & 0xffffff00 | uVar4,iVar15);
                            uVar11 = sym.readl_relaxed(iVar15);
                            if (uVar4 != (uVar11 & 0xff)) {
                                _printk(0x80009f5,"msm_usb_write_readback",uVar4,uVar8);
                            }
                            goto code_r0x0800312c;
                        }
                    }
                    _dev_err(*arg1,"write G3S2_TXMGN_MAIN fail.\n");
                }
code_r0x0800312c:
                uVar16 = *arg1;
                uVar7 = sym.readl_relaxed(*(arg1 + 0x170) + *(iVar18 + -0x48));
                _dev_err(uVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",0,uVar7);
                uVar16 = *arg1;
                uVar7 = sym.readl_relaxed(*(arg1 + 0x170) + *(iVar18 + -0x40));
                _dev_err(uVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",1,uVar7);
                uVar16 = *arg1;
                uVar7 = sym.readl_relaxed(*(arg1 + 0x170) + *(iVar18 + -0x38));
                _dev_err(uVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",2,uVar7);
                uVar16 = *arg1;
                uVar7 = sym.readl_relaxed(*(arg1 + 0x170) + *(iVar18 + -0x30));
                _dev_err(uVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",3,uVar7);
                uVar16 = *arg1;
                uVar7 = sym.readl_relaxed(*(arg1 + 0x170) + *(iVar18 + -0x28));
                _dev_err(uVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",4,uVar7);
                uVar16 = *arg1;
                uVar7 = sym.readl_relaxed(*(arg1 + 0x170) + *(iVar18 + -0x20));
                _dev_err(uVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",5,uVar7);
                uVar16 = *arg1;
                uVar7 = sym.readl_relaxed(*(arg1 + 0x170) + *(iVar18 + -0x18));
                _dev_err(uVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",6,uVar7);
                uVar16 = *arg1;
                uVar7 = sym.readl_relaxed(*(arg1 + 0x170) + *puVar19);
                _dev_err(uVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",7,uVar7);
                uVar16 = *arg1;
                uVar7 = sym.readl_relaxed(*(arg1 + 0x170) + *puVar3);
                _dev_err(uVar16,"CRC USB3 PHY CFG:%d:0x%02x.\n",8,uVar7);
                return 0;
            }
            usleep_range_state(1,2,2);
            bVar6 = iVar9 != -1;
            iVar9 = iVar9 + 1;
        } while (bVar6);
        _dev_err(*arg1,"QMP PHY initialization timeout\n");
        uVar16 = *arg1;
        uVar10 = sym.readl_relaxed(*(arg1 + 0x170) + **(arg1 + 0x228));
        _dev_err(uVar16,"USB3_PHY_PCS_STATUS:%x\n",uVar10);
        uVar17 = 0xfffffff0;
    }
    *(arg1 + 0x223) = 1;
    sym.writel_relaxed(0,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0xc));
    sym.msm_ssphy_qmp_enable_clks(arg1,0);
    sym.msm_ssusb_qmp_ldo_enable(arg1,0);
    return uVar17;
}


// ===== sym.msm_ssphy_qmp_set_suspend @ 0x08003610 (size 500) =====

ulong sym.msm_ssphy_qmp_set_suspend(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x223) != arg2) {
        if (arg2 == 0) {
            if ((*(arg1 + 0x10) >> 9 & 1) == 0) {
                if ((((*(arg1 + 0x10) & 1) == 0) && (*(arg1 + 0x222) == '\0')) &&
                   (iVar1 = sym.msm_ssusb_qmp_ldo_enable(arg1,1), iVar1 != 0)) {
                    _dev_err(*arg1,"msm_ssusb_qmp_ldo_enable(1) failed, ret=%d\n",iVar1);
                }
                sym.msm_ssphy_qmp_enable_clks(arg1,1);
                if (*(arg1 + 0x222) == '\0') {
                    sym.writel_relaxed(1,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0xc));
                }
                else {
                    sym.msm_ssusb_qmp_enable_autonomous(arg1);
                }
                DataSynchronizationBarrier(3,2,0);
                if ((*(arg1 + 0x244) == 2) && ((*(arg1 + 0x11) & 6) != 0)) {
                    sym.writel_relaxed(3,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x28));
                    sym.readl_relaxed(*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x28));
                }
                *(arg1 + 0x223) = 0;
                return 0;
            }
            _dev_info(*arg1,"QMP PHY currently in DP mode\n");
            return 0xfffffff0;
        }
        if (*(arg1 + 0x222) == '\0') {
            if ((*(arg1 + 0x244) == 2) && ((*(arg1 + 0x11) & 6) == 0)) {
                sym.writel_relaxed(1,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x28));
                sym.readl_relaxed(*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0x28));
            }
            sym.writel_relaxed(0,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0xc));
        }
        else {
            sym.msm_ssusb_qmp_enable_autonomous(arg1);
        }
        DataSynchronizationBarrier(3,2,0);
        sym.msm_ssphy_qmp_enable_clks(arg1,0);
        *(arg1 + 0x223) = 1;
        if ((*(arg1 + 0x10) & 1) != 0) {
            return 0;
        }
        if (*(arg1 + 0x222) == '\0') {
            iVar1 = sym.msm_ssusb_qmp_ldo_enable(arg1,0);
            if (iVar1 == 0) {
                return 0;
            }
            _dev_err(*arg1,"msm_ssusb_qmp_ldo_enable(0) failed, ret=%d\n");
            return 0;
        }
    }
    return 0;
}


// ===== sym.msm_ssphy_qmp_notify_connect @ 0x08003804 (size 60) =====

ulong sym.msm_ssphy_qmp_notify_connect(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x222) = 1;
    atomic_notifier_call_chain(arg1 + 0xf0,1);
    return 0;
}


// ===== sym.msm_ssphy_qmp_notify_disconnect @ 0x08003840 (size 120) =====

ulong sym.msm_ssphy_qmp_notify_disconnect(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_call_chain(arg1 + 0xf0,0,arg1);
    if ((*(arg1 + 0x10) & 1) != 0) {
        sym.writel_relaxed(0,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0xc));
        sym.readl_relaxed(*(arg1 + 0x170) + *(*(arg1 + 0x228) + 0xc));
    }
    *(arg1 + 0x222) = 0;
    return 0;
}


// ===== sym.msm_ssphy_create_debugfs @ 0x080038b8 (size 288) =====

void sym.msm_ssphy_create_debugfs(int64_t arg1)

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
    *(arg1 + 0x250) = uVar2;
    debugfs_create_x8("txa_drv_lvl",0x1a4,uVar2,arg1 + 600);
    debugfs_create_x8("txb_drv_lvl",0x1a4,*(arg1 + 0x250),arg1 + 0x259);
    debugfs_create_x8("txa_pre_emph",0x1a4,*(arg1 + 0x250),arg1 + 0x25a);
    debugfs_create_x8("txb_pre_emph",0x1a4,*(arg1 + 0x250),arg1 + 0x25b);
    debugfs_create_x8("txa_post1_lvl",0x1a4,*(arg1 + 0x250),arg1 + 0x25c);
    debugfs_create_x8("txb_post1_lvl",0x1a4,*(arg1 + 0x250),arg1 + 0x25d);
    debugfs_create_x8("txmgn_v0",0x1a4,*(arg1 + 0x250),arg1 + 0x25e);
    debugfs_create_x8("txdeemph_m3p5db",0x1a4,*(arg1 + 0x250),arg1 + 0x25f);
    debugfs_create_x8("g3s2_txmgn_main",0x1a4,*(arg1 + 0x250),arg1 + 0x260);
    return;
}


// ===== sym.msm_ssusb_qmp_ldo_enable @ 0x080039d8 (size 644) =====

uint32_t sym.msm_ssusb_qmp_ldo_enable(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x220) == arg2) {
        return 0;
    }
    *(arg1 + 0x220) = arg2 != 0;
    if (arg2 == 0) {
        iVar2 = regulator_disable(*(arg1 + 0x1a8));
        if (iVar2 != 0) {
            pcVar3 = "Unable to disable %s\n";
code_r0x08003bf8:
            _dev_err(*arg1,pcVar3,"core_ldo");
        }
        iVar2 = regulator_set_voltage(*(arg1 + 0x1a8),*(arg1 + 0x1b0),*(arg1 + 0x1b8));
        if (iVar2 != 0) {
code_r0x08003b5c:
            _dev_err(*arg1,"Unable to set voltage for %s\n","core_ldo");
        }
        iVar2 = regulator_set_load(*(arg1 + 0x1a8),0);
        if (iVar2 < 0) {
            pcVar3 = "Unable to set LPM of %s\n";
code_r0x08003bdc:
            _dev_err(*arg1,pcVar3,"core_ldo");
        }
        iVar2 = regulator_disable(*(arg1 + 400));
        if (iVar2 != 0) {
            pcVar3 = "Unable to disable %s\n";
code_r0x08003bc0:
            _dev_err(*arg1,pcVar3,0x80008aa);
        }
        iVar2 = regulator_set_voltage(*(arg1 + 400),*(arg1 + (arg2 != 0) * 4 + 0x198),*(arg1 + 0x1a0));
        if (iVar2 != 0) {
code_r0x08003b40:
            _dev_err(*arg1,"Unable to set voltage for %s\n",0x80008aa);
        }
        iVar2 = regulator_set_load(*(arg1 + 400),0);
        if (-1 < iVar2) goto code_r0x08003b04;
        pcVar3 = "Unable to set LPM of %s\n";
    }
    else {
        if ((((*(arg1 + 0x1c0) != 0) && (*(arg1 + 0x1c0) < 0xfffffffffffff001)) &&
            (uVar1 = regulator_enable(), uVar1 != 0)) &&
           (_dev_err(*arg1,"err:%d fail to %s usb3_dp_phy_gdsc\n",uVar1,"enable"), uVar1 < 0)) {
            return uVar1;
        }
        iVar2 = regulator_set_load(*(arg1 + 400),*(arg1 + 0x1a4));
        if (-1 < iVar2) {
            iVar2 = regulator_set_voltage(*(arg1 + 400),*(arg1 + 0x19c),*(arg1 + 0x1a0));
            if (iVar2 == 0) {
                iVar2 = regulator_enable(*(arg1 + 400));
                if (iVar2 == 0) {
                    iVar2 = regulator_set_load(*(arg1 + 0x1a8),*(arg1 + 0x1bc));
                    if (-1 < iVar2) {
                        iVar2 = regulator_set_voltage(*(arg1 + 0x1a8),*(arg1 + 0x1b4),*(arg1 + 0x1b8));
                        if (iVar2 == 0) {
                            iVar2 = regulator_enable(*(arg1 + 0x1a8));
                            if (iVar2 == 0) {
                                return 0;
                            }
                            pcVar3 = "Unable to enable %s\n";
                            goto code_r0x08003bf8;
                        }
                        goto code_r0x08003b5c;
                    }
                    pcVar3 = "Unable to set HPM of %s\n";
                    goto code_r0x08003bdc;
                }
                pcVar3 = "Unable to enable %s\n";
                goto code_r0x08003bc0;
            }
            goto code_r0x08003b40;
        }
        pcVar3 = "Unable to set HPM of %s\n";
    }
    _dev_err(*arg1,pcVar3,0x80008aa);
code_r0x08003b04:
    if (*(arg1 + 0x1c0) == 0) {
        return 0;
    }
    if (*(arg1 + 0x1c0) < 0xfffffffffffff001) {
        uVar1 = regulator_disable();
        if (uVar1 == 0) {
            return 0;
        }
        _dev_err(*arg1,"err:%d fail to %s usb3_dp_phy_gdsc\n",uVar1,"disable");
        return uVar1 & uVar1 >> 0x1f;
    }
    return 0;
}


// ===== sym.msm_ssphy_qmp_enable_clks @ 0x08003c5c (size 476) =====

void sym.msm_ssphy_qmp_enable_clks(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar2 = *(arg1 + 0x221);
    if ((cVar2 == '\0') && ((arg2 & 1U) != 0)) {
        iVar3 = *(arg1 + 0x1c8);
        if ((iVar3 != 0) && ((iVar1 = clk_prepare(iVar3), iVar1 == 0 && (iVar1 = clk_enable(iVar3), iVar1 != 0)))) {
            clk_unprepare(iVar3);
        }
        iVar3 = *(arg1 + 0x1d0);
        if (((iVar3 != 0) && (iVar1 = clk_prepare(iVar3), iVar1 == 0)) && (iVar1 = clk_enable(iVar3), iVar1 != 0)) {
            clk_unprepare(iVar3);
        }
        iVar3 = *(arg1 + 0x1e0);
        if (((iVar3 != 0) && (iVar1 = clk_prepare(iVar3), iVar1 == 0)) && (iVar1 = clk_enable(iVar3), iVar1 != 0)) {
            clk_unprepare(iVar3);
        }
        uVar4 = *(arg1 + 0x1d8);
        iVar1 = clk_prepare(uVar4);
        if ((iVar1 == 0) && (iVar1 = clk_enable(uVar4), iVar1 != 0)) {
            clk_unprepare(uVar4);
        }
        iVar3 = *(arg1 + 0x1e8);
        if (((iVar3 != 0) && (iVar1 = clk_prepare(iVar3), iVar1 == 0)) && (iVar1 = clk_enable(iVar3), iVar1 != 0)) {
            clk_unprepare(iVar3);
        }
        clk_set_parent(*(arg1 + 0x1f8),*(arg1 + 0x200));
        uVar4 = *(arg1 + 0x1f0);
        iVar1 = clk_prepare(uVar4);
        if ((iVar1 == 0) && (iVar1 = clk_enable(uVar4), iVar1 != 0)) {
            clk_unprepare(uVar4);
        }
        cVar2 = '\x01';
        *(arg1 + 0x221) = 1;
    }
    if ((cVar2 != '\0') && ((arg2 & 1U) == 0)) {
        uVar4 = *(arg1 + 0x1f0);
        clk_disable(uVar4);
        clk_unprepare(uVar4);
        clk_set_parent(*(arg1 + 0x1f8),*(arg1 + 0x1c8));
        iVar3 = *(arg1 + 0x1e8);
        if (iVar3 != 0) {
            clk_disable(iVar3);
            clk_unprepare(iVar3);
        }
        uVar4 = *(arg1 + 0x1d8);
        clk_disable(uVar4);
        clk_unprepare(uVar4);
        iVar3 = *(arg1 + 0x1e0);
        if (iVar3 != 0) {
            clk_disable(iVar3);
            clk_unprepare(iVar3);
        }
        iVar3 = *(arg1 + 0x1d0);
        if (iVar3 != 0) {
            clk_disable(iVar3);
            clk_unprepare(iVar3);
        }
        iVar3 = *(arg1 + 0x1c8);
        if (iVar3 != 0) {
            clk_disable(iVar3);
            clk_unprepare(iVar3);
        }
        *(arg1 + 0x221) = 0;
    }
    return;
}


// ===== sym.writel_relaxed @ 0x08003e38 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003e54);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003e7c);
    return;
}


// ===== sym.readl_relaxed @ 0x08003eb0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003eb4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003ee8);
    return uVar1;
}


// ===== sym.msm_ssusb_qmp_enable_autonomous @ 0x08003f20 (size 352) =====

void sym.msm_ssusb_qmp_enable_autonomous(int64_t arg1)

{
    uint32_t uVar1;
    int in_w1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x228);
    uVar4 = *(iVar3 + 4);
    if (in_w1 == 0) {
        if (*(arg1 + 0x244) < 2) {
            if (*(arg1 + 0x178) != 0) {
                sym.writel_relaxed(0,*(arg1 + 0x178));
            }
            iVar3 = *(arg1 + 0x180);
            if (iVar3 != 0) {
code_r0x08004020:
                sym.writel_relaxed(1,iVar3);
            }
        }
        else if (*(arg1 + 0x244) == 2) {
            iVar3 = *(arg1 + 0x170) + *(iVar3 + 0x30);
            goto code_r0x08004020;
        }
        sym.writel_relaxed(0,*(arg1 + 0x170) + uVar4);
        sym.writel_relaxed(1,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 8));
        DataSynchronizationBarrier(3,2,0);
        iVar3 = *(arg1 + 0x170);
        uVar2 = *(*(arg1 + 0x228) + 8);
    }
    else {
        sym.writel_relaxed(1,*(arg1 + 0x170) + *(iVar3 + 8));
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(arg1 + 0x170) + *(*(arg1 + 0x228) + 8));
        uVar1 = sym.readl_relaxed(*(arg1 + 0x170) + uVar4);
        uVar2 = 0x11;
        if ((*(arg1 + 0x10) & 2) != 0) {
            uVar2 = 3;
        }
        sym.writel_relaxed(uVar2 | uVar1 & 0xffffffec,*(arg1 + 0x170) + uVar4);
        if (*(arg1 + 0x244) < 2) {
            if (*(arg1 + 0x178) != 0) {
                sym.writel_relaxed(1,*(arg1 + 0x178));
            }
            iVar3 = *(arg1 + 0x180);
            if (iVar3 == 0) {
                return;
            }
            goto code_r0x08004064;
        }
        if (*(arg1 + 0x244) != 2) {
            return;
        }
        iVar3 = *(arg1 + 0x170);
        uVar2 = *(*(arg1 + 0x228) + 0x30);
    }
    iVar3 = iVar3 + uVar2;
code_r0x08004064:
    sym.writel_relaxed(0,iVar3);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08004080 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080040c4

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
    //switch table (4 cases) at 0x8000140
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80040d8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080040e4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_ssphy_qmp_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08004118 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_ssphy_qmp_probe.45e9c221f7851536f223e0cf2954b9a9.cfi_jt);
    return;
}

