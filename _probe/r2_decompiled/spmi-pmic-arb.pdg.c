// decompiled from spmi-pmic-arb by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1376) =====

//WARNING: Switch with 1 destination removed at 0x08005ae4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (-0x3557318fb8d07b72 < arg1) {
            if (arg1 < -0xfafda0d0613f225) {
                if (arg1 == -0x3557318fb8d07b71) {
                    pcVar2 = sym.spmi_pmic_arb_probe.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
                    goto code_r0x080024b4;
                }
                if (arg1 != -0x2fb3d3a824a39d19) {
                    if ((arg1 == -0x2e2d92ad7f6fa1ed) && ((pcVar1 + -0x8002680 >> 3 | pcVar1 << 0x3d) < 5)) {
                        return;
                    }
                    goto code_r0x08005aa4;
                }
                pcVar2 = sym.__typeid__ZTSFiP13spmi_pmic_arbhtP8resourceE_global_addr;
            }
            else {
                if (-0x79b85ae35401fce < arg1) {
                    if (arg1 == -0x79b85ae35401fcd) {
                        if ((pcVar1 + -0x80026a8 >> 3 | pcVar1 << 0x3d) < 0xe) {
                            return;
                        }
                        goto code_r0x08005aa4;
                    }
                    if (arg1 != 0x2876ef22d8c5508) goto code_r0x08005aa4;
                    pcVar2 = sym.__typeid__ZTSFjtE_global_addr;
                    goto code_r0x08002510;
                }
                if (arg1 == -0xfafda0d0613f225) {
                    pcVar2 = sym.spmi_pmic_arb_map_address.cfi_jt;
                    goto code_r0x08002550;
                }
                if (arg1 != -0x8dc801903aca538) goto code_r0x08005aa4;
                pcVar2 = sym.simple_attr_release.cfi_jt;
            }
code_r0x080024dc:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08005aa4;
        }
        if (arg1 < -0x6445b5cb289f3cba) {
            if (arg1 == -0x76e7814a8afd6df4) {
                pcVar2 = sym.debug_soc_start_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
            }
            else {
                if (arg1 == -0x70d74b9759644a47) {
                    pcVar2 = sym.pmic_arb_read_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
                    goto code_r0x08002550;
                }
                if (arg1 != -0x68e06357d3edcb86) goto code_r0x08005aa4;
                pcVar2 = sym.handle_level_irq.cfi_jt;
            }
code_r0x08002510:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08005aa4;
        }
        if (arg1 < -0x43677211936b66e5) {
            if (arg1 == -0x6445b5cb289f3cba) {
                pcVar2 = sym.qpnpint_get_irqchip_state.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
            }
            else {
                if (arg1 != -0x44ffb07decd4456c) goto code_r0x08005aa4;
                pcVar2 = sym.irq_domain_free_irqs_common.cfi_jt;
            }
        }
        else if (arg1 == -0x43677211936b66e5) {
            pcVar2 = sym.qpnpint_irq_domain_translate.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
        }
        else {
            if (arg1 != -0x3694e78aa0bd29dd) goto code_r0x08005aa4;
            pcVar2 = sym.pmic_arb_write_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
        }
    }
    else if (arg1 < 0x2beea59d77764cf2) {
        if (0xf445eaa7552bd32 < arg1) {
            if (arg1 < 0x1d3ff83f06011f50) {
                if (arg1 == 0xf445eaa7552bd33) {
                    pcVar2 = sym.__typeid__ZTSFiP15spmi_controllerhhE_global_addr;
                }
                else {
                    if (arg1 != 0x12432ee19d152236) goto code_r0x08005aa4;
                    pcVar2 = sym.__typeid__ZTSFvP8irq_dataE_global_addr;
                }
            }
            else {
                if (arg1 != 0x1d3ff83f06011f50) {
                    if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08005aa4;
                    pcVar2 = sym.debugfs_attr_write.cfi_jt;
                    goto code_r0x08002550;
                }
                pcVar2 = sym.__typeid__ZTSFiP13spmi_pmic_arbtE_global_addr;
            }
            goto code_r0x08002510;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x5accacd6c45dadc) {
            pcVar2 = sym.qpnpint_irq_domain_activate.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08005aa4;
            pcVar2 = sym.debugfs_attr_read.cfi_jt;
        }
    }
    else if (arg1 < 0x566cdc1d6ec224d9) {
        if (arg1 == 0x2beea59d77764cf2) {
            pcVar2 = sym.__typeid__ZTSFiP13spmi_pmic_arbht16pmic_arb_channelE_global_addr;
            goto code_r0x080024dc;
        }
        if (arg1 != 0x321969b888d4949e) {
            if (arg1 != 0x37feef2cb920e1c6) goto code_r0x08005aa4;
            pcVar2 = sym.__typeid__ZTSFjhhthE_global_addr;
            goto code_r0x080024b4;
        }
        pcVar2 = sym.no_llseek.cfi_jt;
    }
    else if (arg1 < 0x6b141b54612cf75f) {
        if (arg1 == 0x566cdc1d6ec224d9) {
            pcVar2 = sym.qpnpint_irq_set_wake.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
code_r0x080024b4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08005aa4;
        }
        if (arg1 != 0x666e10f707b56d38) goto code_r0x08005aa4;
        pcVar2 = sym.qpnpint_irq_domain_alloc.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
    }
    else if (arg1 == 0x6b141b54612cf75f) {
        pcVar2 = sym.debug_spmi_addr_set.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005aa4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x08002550:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005aa4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005af8);
    (*pcVar1)();
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x08002568 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.debug_spmi_addr_set.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002570 (size 8) =====

ulong sym.debug_spmi_addr_set.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint param_2)

{
    *(param_1 + 0xe8) = param_2;
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08002578 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.spmi_pmic_arb_probe.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qpnpint_get_irqchip_state.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002580 (size 8) =====

void sym.qpnpint_get_irqchip_state.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
               (int64_t param_1,int param_2,uint8_t *param_3)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar10;
    int64_t iVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    int iStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar8 = *(iVar8 + 0x5e0);
    uVar9 = *(param_1 + 8);
    if (param_2 == 3) {
        iVar11 = *(param_1 + 0x30);
        iVar4 = sym.pmic_arb_read_cmd(*(iVar11 + 0xb0),0x38,uVar9 >> 0x1c & 0xf,uVar9 >> 0xc & 0xffffff00 | 0x10);
        if ((iVar4 != 0) && (iVar4 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar4 != 0)) {
            _dev_err(*(iVar11 + 0xb0),"failed irqchip transaction on %x\n",*(param_1 + 4));
        }
        uVar6 = 0;
        *param_3 = 0U >> (uVar9 >> 0x10 & 7) & 1;
    }
    else {
        uVar6 = 0xffffffea;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iVar8) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar6);
    iVar11 = auVar14._0_8_;
    *extraout_x18 = sym.periph_interrupt;
    pcStack_98 = sym.periph_interrupt;
    iVar8 = sp_el0;
    uVar9 = auVar14._8_8_ & 0xffffffff;
    iStack_a8 = *(iVar8 + 0x5e0);
    pcVar10 = *(*(iVar11 + 0xb8) + 0x38);
    iVar8 = (auVar14._8_8_ & 0xffff) * 4;
    uVar1 = *(*(iVar11 + 0xd0) + iVar8);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (0xd < (pcVar10 + -0x80026a8 >> 3 | pcVar10 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar10,0x8000620);
    }
    iVar7 = (*pcVar10)(iVar11,uVar9);
    uVar5 = sym.readl_relaxed(iVar7);
    if (uVar5 != 0) {
        do {
            while( true ) {
                uVar3 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
                uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
                uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
                uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                iVar13 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
                uVar12 = iVar13;
                iStack_ac = 0;
                uVar3 = 1 << (uVar12 & 0x1f);
                uVar5 = uVar5 & (uVar3 ^ 0xffffffff);
                iVar7 = __irq_resolve_mapping
                                  (*(iVar11 + 0xa8),
                                   (uVar12 & 7) << 0x10 | (uVar1 & 0xff) << 0x14 | (uVar1 >> 8) << 0x1c |
                                   auVar14._8_4_ & 0x3ff,&iStack_ac);
                if ((iVar7 != 0) && (iStack_ac != 0)) break;
                uVar2 = *(*(iVar11 + 0xd0) + iVar8);
                iVar4 = ___ratelimit(obj.cleanup_irq._rs,"cleanup_irq");
                if (iVar4 != 0) {
                    _dev_err(*(iVar11 + 0xb0),"%s apid=%d sid=0x%x per=0x%x irq=%d\n","cleanup_irq",
                             auVar14._8_4_ & 0xffff,uVar2 >> 8,uVar2 & 0xff,iVar13);
                }
                pcVar10 = *(*(iVar11 + 0xb8) + 0x40);
                if (0xd < (pcVar10 + -0x80026a8 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar10,0x8000640);
                }
                iVar7 = (*pcVar10)(iVar11,uVar9);
                sym.writel_relaxed(uVar3 & 0xff,iVar7);
                if (uVar5 == 0) goto code_r0x08005788;
            }
            generic_handle_irq();
        } while (uVar5 != 0);
    }
code_r0x08005788:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_a8) {
        auVar14 = __stack_chk_fail();
        *extraout_x18_00 = sym.debug_spmi_addr_fops_open;
        simple_attr_open(auVar14._0_8_,auVar14._8_8_,sym.debug_spmi_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,
                         sym.debug_spmi_addr_set.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,"0x%05llX\n");
        return;
    }
    return;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x08002588 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.spmi_pmic_arb_probe.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002590 (size 8) =====

uint64_t sym.spmi_pmic_arb_probe.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    char *pcVar10;
    code *pcVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    uint64_t *arg1;
    uint64_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar9 = param_1 + 0x10;
    iStack_58 = *(iVar13 + 0x5e0);
    uStack_5c = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uVar4 = spmi_controller_alloc(iVar9,0xf0);
    if (uVar4 == 0) {
        uVar6 = 0xfffffff4;
        goto code_r0x08002ce0;
    }
    arg1 = *(uVar4 + 0x98);
    arg1[0x16] = uVar4;
    puVar5 = platform_get_resource_byname(param_1,0x200,"core");
    if (puVar5 == NULL) goto code_r0x08002cd4;
    uVar6 = devm_ioremap(uVar4,*puVar5,(puVar5[1] - *puVar5) + 1);
    if (0xfffffffffffff000 < uVar6) goto code_r0x08002cd8;
    arg1[6] = (puVar5[1] - *puVar5) + 1;
    uVar7 = devm_kmalloc(uVar4,0x2000,0xdc0);
    arg1[0x18] = uVar7;
    if (uVar7 == 0) {
code_r0x080029d0:
        uVar6 = 0xfffffff4;
    }
    else {
        uVar7 = sym.readl_relaxed(uVar6);
        uVar14 = uVar7 & 0xffffffff;
        if (uVar7 < 0x20010000) {
            arg1[1] = uVar6;
            arg1[0x17] = obj.pmic_arb_v1;
            uVar7 = 0x200;
            uVar12 = *puVar5;
            *arg1 = uVar6;
            *(arg1 + 0x1b) = 0x200;
            arg1[2] = uVar12;
            goto code_r0x080029ac;
        }
        uVar2 = uVar14 >> 0x1c;
        arg1[5] = uVar6;
        if (uVar2 < 3) {
            pcVar11 = obj.pmic_arb_v2;
        }
        else if (uVar2 < 5) {
            pcVar11 = obj.pmic_arb_v3;
        }
        else if (uVar2 < 7) {
            pcVar11 = obj.pmic_arb_v5;
        }
        else {
            pcVar11 = obj.pmic_arb_v7;
        }
        arg1[0x17] = pcVar11;
        piVar8 = platform_get_resource_byname(param_1,0x200,"obsrvr");
        if (piVar8 == NULL) goto code_r0x08002cd4;
        uVar7 = devm_ioremap(uVar4,*piVar8,(piVar8[1] - *piVar8) + 1);
        *arg1 = uVar7;
        if (0xfffffffffffff000 < uVar7) goto code_r0x08002aa4;
        puVar5 = platform_get_resource_byname(param_1,0x200,"chnls");
        if (puVar5 == NULL) goto code_r0x08002cd4;
        uVar7 = devm_ioremap(uVar4,*puVar5,(puVar5[1] - *puVar5) + 1);
        arg1[1] = uVar7;
        if (0xfffffffffffff000 < uVar7) goto code_r0x08002aa4;
        arg1[2] = *puVar5;
        *(arg1 + 0x1b) = 0x200;
        if (6 < uVar2) {
            *(arg1 + 0x1b) = 0x400;
            of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,bus-id",arg1 + 0x4c,1,0);
            if (*(arg1 + 0x4c) < 2) {
                if (*(arg1 + 0x4c) == 0) {
                    iVar13 = 4;
                    *(arg1 + 0x56) = 0;
                }
                else {
                    uVar1 = sym.readl_relaxed(uVar6 + 4);
                    iVar13 = 8;
                    *(arg1 + 0x56) = uVar1 & 0x7ff;
                }
                uVar2 = sym.readl_relaxed(uVar6 + iVar13);
                uVar7 = arg1[0x1b];
                *(arg1 + 0xb) = uVar2 & 0x7ff;
                if (arg1[0x1b] < (uVar2 & 0x7ff) + *(arg1 + 0x56)) goto code_r0x08002cb8;
                goto code_r0x080029ac;
            }
            pcVar10 = "invalid bus instance (%u) specified\n";
            goto code_r0x08002ccc;
        }
        if (uVar2 < 5) {
            uVar7 = 0x200;
        }
        else {
            *(arg1 + 0x56) = 0;
            uVar2 = sym.readl_relaxed(uVar6 + 4);
            uVar7 = arg1[0x1b];
            *(arg1 + 0xb) = uVar2 & 0x7ff;
            if (arg1[0x1b] < (uVar2 & 0x7ff)) {
code_r0x08002cb8:
                pcVar10 = "Unsupported APID count %d detected\n";
                goto code_r0x08002ccc;
            }
        }
code_r0x080029ac:
        if (uVar7 >> 0x3e != 0) {
            uVar6 = 0xfffffff4;
            arg1[0x1a] = 0;
            goto code_r0x08002cd8;
        }
        uVar6 = devm_kmalloc(uVar4,-(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2,0xdc0);
        arg1[0x1a] = uVar6;
        if (uVar6 == 0) goto code_r0x080029d0;
        _dev_info(uVar4,"PMIC arbiter version %s (0x%x)\n",*arg1[0x17],uVar14);
        iVar13 = platform_get_resource_byname(param_1,0x200,"intr");
        if (iVar13 != 0) {
            uVar7 = devm_ioremap_resource(uVar4,iVar13);
            arg1[3] = uVar7;
            if (0xfffffffffffff000 < uVar7) {
code_r0x08002aa4:
                uVar6 = uVar7 & 0xffffffff;
                goto code_r0x08002cd8;
            }
            iVar13 = platform_get_resource_byname(param_1,0x200,"cnfg");
            if (iVar13 != 0) {
                uVar7 = devm_ioremap_resource(uVar4,iVar13);
                arg1[4] = uVar7;
                if (0xfffffffffffff000 < uVar7) goto code_r0x08002aa4;
                iVar13 = of_find_property(*(param_1 + 0x300),"interrupt-names",0);
                if (iVar13 != 0) {
                    uVar2 = platform_get_irq_byname(param_1,"periph_irq");
                    *(arg1 + 0x44) = uVar2;
                    if (uVar2 < 0) {
                        uVar6 = uVar2;
                        goto code_r0x08002cd8;
                    }
                }
                uVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,channel",&uStack_5c,1,0);
                if (uVar2 < 0) {
                    pcVar10 = "channel unspecified.\n";
code_r0x08002e5c:
                    uVar6 = uVar2;
                    _dev_err(iVar9,pcVar10);
                    goto code_r0x08002cd8;
                }
                if (uStack_5c < 6) {
                    *(arg1 + 8) = uStack_5c;
                    uVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,ee",&uStack_60,1,0);
                    if (uVar2 < 0) {
                        pcVar10 = "EE unspecified.\n";
                        goto code_r0x08002e5c;
                    }
                    if (uStack_60 < 6) {
                        *(arg1 + 9) = uStack_60;
                        *(arg1 + 10) = 0x16;
                        iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,mid",&uStack_64,1,0);
                        if ((iVar3 < 0) || (3 < uStack_64)) {
                            if (iVar3 != -0x16) {
                                pcVar10 = "invalid MID (%u) specified\n";
                                goto code_r0x08002ccc;
                            }
                        }
                        else {
                            *(arg1 + 10) = uStack_64;
                        }
                        uVar6 = devm_kmalloc(uVar4,0x800,0xdc0);
                        if (uVar6 == 0) goto code_r0x080029d0;
                        arg1[0xc] = uVar6;
                        *(arg1 + 0x54) = 0;
                        *(arg1 + 0x52) = arg1[0x1b] + -1;
                        *(param_1 + 0xa8) = uVar4;
                        arg1[7] = 0;
                        *(uVar4 + 0x398) = sym.__typeid__ZTSFiP15spmi_controllerhhE_global_addr;
                        *(uVar4 + 0x3a0) = sym.pmic_arb_read_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
                        *(uVar4 + 0x3a8) = sym.pmic_arb_write_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
                        if (4 < uVar14 >> 0x1c) {
                            sym.pmic_arb_read_apid_map_v5(arg1);
                        }
                        if (0 < *(arg1 + 0x44)) {
                            iVar13 = 0;
                            if (*(param_1 + 0x300) != 0) {
                                iVar13 = *(param_1 + 0x300) + 0x18;
                            }
                            uVar6 = __irq_domain_add(iVar13,0,0xffffffffffffffff,0,obj.pmic_arb_irq_domain_ops,arg1
                                                    );
                            arg1[0x15] = uVar6;
                            if (uVar6 == 0) {
                                _dev_err(iVar9,"unable to create irq_domain\n");
                                uVar6 = 0xfffffff4;
                                goto code_r0x08002cd8;
                            }
                            irq_set_chained_handler_and_data
                                      (*(arg1 + 0x44),sym.pmic_arb_chained_irq.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                                       ,arg1);
                        }
                        uVar7 = spmi_controller_add(uVar4);
                        uVar6 = uVar7 & 0xffffffff;
                        if (uVar7 == 0) {
                            sym.spmi_pmic_arb_debugfs_init(arg1);
                            goto code_r0x08002ce0;
                        }
                        if (0 < *(arg1 + 0x44)) {
                            irq_set_chained_handler_and_data(*(arg1 + 0x44),0,0);
                            irq_domain_remove(arg1[0x15]);
                        }
                        goto code_r0x08002cd8;
                    }
                    pcVar10 = "invalid EE (%u) specified\n";
                }
                else {
                    pcVar10 = "invalid channel (%u) specified.\n";
                }
code_r0x08002ccc:
                _dev_err(iVar9,pcVar10);
            }
        }
code_r0x08002cd4:
        uVar6 = 0xffffffea;
    }
code_r0x08002cd8:
    put_device(uVar4);
code_r0x08002ce0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_58) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.spmi_pmic_arb_remove;
        iVar9 = *(iVar9 + 0xa8);
        iVar13 = *(iVar9 + 0x98);
        debugfs_remove(*(iVar13 + 0xe0));
        spmi_controller_remove(iVar9);
        if (0 < *(iVar13 + 0x44)) {
            irq_set_chained_handler_and_data(*(iVar13 + 0x44),0,0);
            irq_domain_remove(*(iVar13 + 0xa8));
        }
        if (iVar9 != 0) {
            put_device(iVar9);
        }
        return 0;
    }
    return uVar6 & 0xffffffff;
}


// ===== sym.spmi_pmic_arb_remove.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002598 (size 8) =====

ulong sym.spmi_pmic_arb_remove.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    iVar2 = *(iVar1 + 0x98);
    debugfs_remove(*(iVar2 + 0xe0));
    spmi_controller_remove(iVar1);
    if (0 < *(iVar2 + 0x44)) {
        irq_set_chained_handler_and_data(*(iVar2 + 0x44),0,0);
        irq_domain_remove(*(iVar2 + 0xa8));
    }
    if (iVar1 != 0) {
        put_device(iVar1);
    }
    return 0;
}


// ===== sym.no_llseek.cfi_jt @ 0x080025a0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSFjhhthE_global_addr @ 0x080025a8 (size 8) =====

uint32_t sym.__typeid__ZTSFjhhthE_global_addr(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    return param_1 << 0x1b | (param_2 & 0xf) << 0x14 | (param_3 & 0xffff) << 4 | param_4 & 7;
}


// ===== sym.pmic_arb_fmt_cmd_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080025b0 (size 8) =====

uint32_t sym.pmic_arb_fmt_cmd_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                   (int param_1,ulong param_2,uint32_t param_3,uint32_t param_4)

{
    return (param_3 & 0xff) << 4 | param_1 << 0x1b | param_4 & 7;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080025b8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spmi_pmic_arb_probe.c3a56913c2d41c9e522aea419766cf3a.cfi_jt);
    return;
}


// ===== sym.__typeid__ZTSFiP13spmi_pmic_arbhtP8resourceE_global_addr @ 0x080025c0 (size 8) =====

ulong sym.__typeid__ZTSFiP13spmi_pmic_arbhtP8resourceE_global_addr
                (int64_t param_1,uint32_t param_2,uint32_t param_3,int64_t *param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = *(*(param_1 + 0xb8) + 8);
    if (2 < (pcVar4 + -0x8002748 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar4,0x80003e0);
    }
    uVar3 = (*pcVar4)(param_1,(param_2 & 0xff) << 8 | param_3 >> 8 & 0xff);
    uVar2 = uVar3;
    if (-1 < uVar2) {
        if (*(*(param_1 + 0xd0) + (uVar2 & 0xffff) * 4 + 2) == *(param_1 + 0x48)) {
            uVar3 = 0;
            iVar1 = *(param_1 + 0x10) + ((uVar2 & 0xffff) << 0xc);
            *param_4 = iVar1;
            param_4[1] = iVar1 + 0xfff;
        }
        else {
            _dev_err(*(param_1 + 0xb0),"disallowed SPMI write to sid=%u, addr=0x%04X\n",param_2 & 0xff,
                     param_3 & 0xffff);
            uVar3 = 0xffffffff;
        }
    }
    return uVar3;
}


// ===== sym.pmic_arb_wr_addr_map_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080025c8 (size 8) =====

uint sym.pmic_arb_wr_addr_map_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t param_3,int64_t *param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(*(param_1 + 0xc0) + ((param_2 & 0xff) << 8 | param_3 >> 8 & 0xff) * 2);
    uVar2 = uVar3 & 0x7fff;
    uVar4 = 0xffffffed;
    if (uVar3 < 0) {
        if (*(*(param_1 + 0xd0) + uVar2 * 4 + 2) == *(param_1 + 0x48)) {
            uVar4 = 0;
            iVar1 = *(param_1 + 0x10) + (uVar2 << 0x10);
            *param_4 = iVar1;
            param_4[1] = iVar1 + 0xffff;
        }
        else {
            _dev_err(*(param_1 + 0xb0),"disallowed SPMI write to sid=%u, addr=0x%04X\n",param_2 & 0xff,
                     param_3 & 0xffff);
            uVar4 = 0xffffffff;
        }
    }
    return uVar4;
}


// ===== sym.pmic_arb_wr_addr_map_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080025d0 (size 8) =====

ulong sym.pmic_arb_wr_addr_map_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,int64_t *param_4)

{
    int64_t iVar1;
    
    iVar1 = *(param_1 + 0x10) + *(param_1 + 0x40) * 0x80;
    *param_4 = iVar1 + 0x800;
    param_4[1] = iVar1 + 0x87f;
    return 0;
}


// ===== sym.pmic_arb_wr_addr_map_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080025d8 (size 8) =====

ulong sym.pmic_arb_wr_addr_map_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                (int64_t param_1,int64_t param_2,int param_3,int64_t *param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = sym.pmic_arb_ppid_to_apid_v2(param_1,(param_2 << 0x20 | param_3 << 0x10) >> 0x18 & 0xffffffff);
    iVar2 = uVar3;
    if (-1 < iVar2) {
        uVar3 = 0;
        iVar1 = *(param_1 + 0x10) + (iVar2 << 0xf & 0x7fff8000) + *(param_1 + 0x48) * 0x1000;
        *param_4 = iVar1;
        param_4[1] = iVar1 + 0xfff;
    }
    return uVar3;
}


// ===== sym.__typeid__ZTSFiP13spmi_pmic_arbht16pmic_arb_channelE_global_addr @ 0x080025e0 (size 8) =====

uint64_t sym.__typeid__ZTSFiP13spmi_pmic_arbht16pmic_arb_channelE_global_addr
                   (int64_t param_1,int64_t param_2,int param_3)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.pmic_arb_ppid_to_apid_v2(param_1,(param_2 << 0x20 | param_3 << 0x10) >> 0x18 & 0xffffffff);
    if (-1 < uVar1) {
        uVar1 = (uVar1 & 0xffff) * 0x8000 + *(param_1 + 0x48) * 0x1000;
    }
    return uVar1;
}


// ===== sym.pmic_arb_offset_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080025e8 (size 8) =====

int sym.pmic_arb_offset_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
              (int64_t param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(*(param_1 + 0xc0) + ((param_2 & 0xff) << 8 | param_3 >> 8 & 0xff) * 2);
    uVar1 = uVar2 & 0x7fff;
    iVar3 = -0x13;
    if (uVar2 < 0) {
        if (param_4 == 0) {
            if (*(*(param_1 + 0xd0) + uVar1 * 4 + 2) == *(param_1 + 0x48)) {
                iVar3 = uVar1 << 0x10;
            }
            else {
                _dev_err(*(param_1 + 0xb0),"disallowed SPMI write to sid=%u, addr=0x%04X\n",param_2 & 0xff,
                         param_3 & 0xffff);
                iVar3 = -1;
            }
        }
        else if (param_4 == 1) {
            iVar3 = uVar1 * 0x80 + *(param_1 + 0x48) * 0x10000;
        }
        else {
            iVar3 = 0;
        }
    }
    return iVar3;
}


// ===== sym.pmic_arb_offset_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080025f0 (size 8) =====

uint64_t sym.pmic_arb_offset_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                   (int64_t param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = *(*(param_1 + 0xb8) + 8);
    if (2 < (pcVar3 + -0x8002748 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar3,0x80003e0);
    }
    uVar2 = (*pcVar3)(param_1,(param_2 & 0xff) << 8 | param_3 >> 8 & 0xff);
    uVar1 = uVar2;
    if (-1 < uVar1) {
        if (param_4 == 0) {
            if (*(*(param_1 + 0xd0) + (uVar1 & 0xffff) * 4 + 2) == *(param_1 + 0x48)) {
                uVar2 = (uVar1 & 0xffff) << 0xc;
            }
            else {
                _dev_err(*(param_1 + 0xb0),"disallowed SPMI write to sid=%u, addr=0x%04X\n",param_2 & 0xff,
                         param_3 & 0xffff);
                uVar2 = 0xffffffff;
            }
        }
        else if (param_4 == 1) {
            uVar2 = (uVar1 & 0xffff) * 0x20 + *(param_1 + 0x48) * 0x8000;
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.pmic_arb_offset_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080025f8 (size 8) =====

int sym.pmic_arb_offset_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x40) * 0x80 + 0x800;
}


// ===== sym.qpnpint_irq_domain_activate.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002600 (size 8) =====

uint64_t sym.qpnpint_irq_domain_activate.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t *arg3;
    uint32_t *arg4;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar4 = *(iVar4 + 0x5e0);
    iVar6 = *(param_2 + 0x30);
    uVar5 = *(param_2 + 8);
    if (*(*(iVar6 + 0xd0) + (uVar5 & 0x3ff) * 4 + 3) == *(iVar6 + 0x48)) {
        if (((*(iVar6 + 0x50) != '\x16') &&
            (iVar3 = sym.pmic_arb_write_cmd
                               (*(iVar6 + 0xb0),0x30,uVar5 >> 0x1c & 0xf,uVar5 >> 0xc & 0xffffff00 | 0x1a),
            iVar3 != 0)) && (iVar3 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar3 != 0)) {
            _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(param_2 + 4));
        }
        iVar6 = *(param_2 + 0x30);
        iVar3 = sym.pmic_arb_write_cmd
                          (*(iVar6 + 0xb0),0x30,*(param_2 + 8) >> 0x1c & 0xf,
                           *(param_2 + 8) >> 0xc & 0xffffff00 | 0x16);
        if ((iVar3 != 0) && (iVar3 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar3 != 0)) {
            _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(param_2 + 4));
        }
        iVar6 = *(param_2 + 0x30);
        arg3 = *(param_2 + 8) >> 0x1c & 0xf;
        arg4 = *(param_2 + 8) >> 0xc & 0xffffff00 | 0x14;
        uVar5 = sym.pmic_arb_write_cmd(*(iVar6 + 0xb0),0x30,arg3,arg4);
        if ((uVar5 != 0) && (uVar5 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), uVar5 != 0)) {
            arg3 = *(param_2 + 4);
            _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n");
            uVar5 = 0;
        }
    }
    else {
        arg4 = uVar5 >> 0x14 & 0xff;
        arg3 = uVar5 >> 0x1c & 0xf;
        _dev_err(*(iVar6 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u: ee=%u but owner=%u\n",arg3,arg4
                 ,uVar5 >> 0x10 & 7);
        uVar5 = 0xffffffed;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iVar4) {
        auVar10 = __stack_chk_fail(uVar5);
        iVar6 = auVar10._8_8_;
        *extraout_x18 = sym.qpnpint_irq_domain_translate;
        iVar4 = 0;
        uVar5 = *(auVar10._0_8_ + 0x30);
        iVar7 = *(auVar10._0_8_ + 0x20);
        if (((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) && (iVar4 = uVar5 - 0x18, *(uVar5 + 8) != of_fwnode_ops)) {
            iVar4 = 0;
        }
        if (((iVar4 == *(*(iVar7 + 0xb0) + 0x2f0)) && (*(iVar6 + 8) == 4)) &&
           ((uVar1 = *(iVar6 + 0xc), uVar1 < 0x10 &&
            ((uVar2 = *(iVar6 + 0x10), uVar2 < 0x100 && (*(iVar6 + 0x14) < 8)))))) {
            pcVar9 = *(*(iVar7 + 0xb8) + 8);
            if (2 < (pcVar9 + -0x8002748 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar9,0x8000520);
            }
            uVar5 = (*pcVar9)(iVar7,uVar2 | uVar1 << 8);
            uVar8 = uVar5 & 0xffffffff;
            if (uVar5 < 0) {
                _dev_err(*(iVar7 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u rc = %d\n",*(iVar6 + 0xc)
                         ,*(iVar6 + 0x10),*(iVar6 + 0x14),uVar8);
            }
            else {
                uVar1 = uVar5 & 0xffff;
                if (*(iVar7 + 0x54) < uVar1) {
                    *(iVar7 + 0x54) = uVar5;
                }
                if (uVar1 < *(iVar7 + 0x52)) {
                    *(iVar7 + 0x52) = uVar5;
                }
                uVar8 = 0;
                *arg3 = *(iVar6 + 0x10) << 0x14 & 0xff00000 | *(iVar6 + 0xc) << 0x1c | *(iVar6 + 0x14) << 0x10 & 0x70000
                        | uVar5 & 0x3ff;
                *arg4 = *(iVar6 + 0x18) & 0xf;
            }
        }
        else {
            uVar8 = 0xffffffea;
        }
        return uVar8;
    }
    return uVar5;
}


// ===== sym.qpnpint_irq_domain_translate.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002608 (size 8) =====

uint64_t sym.qpnpint_irq_domain_translate.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t *param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    uVar4 = *(param_1 + 0x30);
    iVar5 = *(param_1 + 0x20);
    if (((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) && (iVar3 = uVar4 - 0x18, *(uVar4 + 8) != of_fwnode_ops)) {
        iVar3 = 0;
    }
    if (((iVar3 == *(*(iVar5 + 0xb0) + 0x2f0)) && (*(param_2 + 8) == 4)) &&
       ((uVar1 = *(param_2 + 0xc), uVar1 < 0x10 &&
        ((uVar2 = *(param_2 + 0x10), uVar2 < 0x100 && (*(param_2 + 0x14) < 8)))))) {
        pcVar7 = *(*(iVar5 + 0xb8) + 8);
        if (2 < (pcVar7 + -0x8002748 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar7,0x8000520);
        }
        uVar4 = (*pcVar7)(iVar5,uVar2 | uVar1 << 8);
        uVar6 = uVar4 & 0xffffffff;
        if (uVar4 < 0) {
            _dev_err(*(iVar5 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u rc = %d\n",*(param_2 + 0xc),
                     *(param_2 + 0x10),*(param_2 + 0x14),uVar6);
        }
        else {
            uVar1 = uVar4 & 0xffff;
            if (*(iVar5 + 0x54) < uVar1) {
                *(iVar5 + 0x54) = uVar4;
            }
            if (uVar1 < *(iVar5 + 0x52)) {
                *(iVar5 + 0x52) = uVar4;
            }
            uVar6 = 0;
            *param_3 = *(param_2 + 0x10) << 0x14 & 0xff00000 | *(param_2 + 0xc) << 0x1c |
                       *(param_2 + 0x14) << 0x10 & 0x70000 | uVar4 & 0x3ff;
            *param_4 = *(param_2 + 0x18) & 0xf;
        }
    }
    else {
        uVar6 = 0xffffffea;
    }
    return uVar6;
}


// ===== sym.irq_domain_free_irqs_common.cfi_jt @ 0x08002610 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_domain_free_irqs_common.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qpnpint_irq_domain_alloc.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002618 (size 8) =====

uint64_t sym.qpnpint_irq_domain_alloc.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                   (int64_t param_1,int param_2,int param_3,int64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t extraout_x1;
    uint64_t *arg3;
    uint32_t *arg4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    code *pcVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar7 = *(param_1 + 0x20);
    iStack_60 = 0;
    uStack_64 = 0;
    uVar4 = sym.qpnpint_irq_domain_translate(param_1,param_4,&iStack_60,&uStack_64);
    iVar5 = iStack_60;
    if (uVar4 == 0) {
        pcVar10 = sym.handle_level_irq.cfi_jt;
        if ((uStack_64 & 3) != 0) {
            pcVar10 = sym.handle_edge_irq.cfi_jt;
        }
        if (param_3 != 0) {
            iVar3 = 0;
            do {
                irq_domain_set_info(param_1,param_2 + iVar3,iVar5 + iVar3,obj.pmic_arb_irqchip,uVar7,pcVar10,0,0)
                ;
                iVar3 = iVar3 + 1;
            } while (param_3 != iVar3);
        }
        uVar4 = 0;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        __stack_chk_fail(uVar4);
        *extraout_x18 = sym.qpnpint_irq_domain_activate;
        iVar5 = sp_el0;
        iVar5 = *(iVar5 + 0x5e0);
        iVar6 = *(extraout_x1 + 0x30);
        uVar4 = *(extraout_x1 + 8);
        if (*(*(iVar6 + 0xd0) + (uVar4 & 0x3ff) * 4 + 3) == *(iVar6 + 0x48)) {
            if (((*(iVar6 + 0x50) != '\x16') &&
                (iVar3 = sym.pmic_arb_write_cmd
                                   (*(iVar6 + 0xb0),0x30,uVar4 >> 0x1c & 0xf,uVar4 >> 0xc & 0xffffff00 | 0x1a),
                iVar3 != 0)) && (iVar3 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar3 != 0)) {
                _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(extraout_x1 + 4));
            }
            iVar6 = *(extraout_x1 + 0x30);
            iVar3 = sym.pmic_arb_write_cmd
                              (*(iVar6 + 0xb0),0x30,*(extraout_x1 + 8) >> 0x1c & 0xf,
                               *(extraout_x1 + 8) >> 0xc & 0xffffff00 | 0x16);
            if ((iVar3 != 0) && (iVar3 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar3 != 0)) {
                _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(extraout_x1 + 4));
            }
            iVar6 = *(extraout_x1 + 0x30);
            arg3 = *(extraout_x1 + 8) >> 0x1c & 0xf;
            arg4 = *(extraout_x1 + 8) >> 0xc & 0xffffff00 | 0x14;
            uVar4 = sym.pmic_arb_write_cmd(*(iVar6 + 0xb0),0x30,arg3,arg4);
            if ((uVar4 != 0) && (uVar4 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), uVar4 != 0)) {
                arg3 = *(extraout_x1 + 4);
                _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n");
                uVar4 = 0;
            }
        }
        else {
            arg4 = uVar4 >> 0x14 & 0xff;
            arg3 = uVar4 >> 0x1c & 0xf;
            _dev_err(*(iVar6 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u: ee=%u but owner=%u\n",arg3,
                     arg4,uVar4 >> 0x10 & 7);
            uVar4 = 0xffffffed;
        }
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) != iVar5) {
            auVar11 = __stack_chk_fail(uVar4);
            iVar6 = auVar11._8_8_;
            *extraout_x18_00 = sym.qpnpint_irq_domain_translate;
            iVar5 = 0;
            uVar4 = *(auVar11._0_8_ + 0x30);
            iVar8 = *(auVar11._0_8_ + 0x20);
            if (((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) && (iVar5 = uVar4 - 0x18, *(uVar4 + 8) != of_fwnode_ops)
               ) {
                iVar5 = 0;
            }
            if (((iVar5 == *(*(iVar8 + 0xb0) + 0x2f0)) && (*(iVar6 + 8) == 4)) &&
               ((uVar1 = *(iVar6 + 0xc), uVar1 < 0x10 &&
                ((uVar2 = *(iVar6 + 0x10), uVar2 < 0x100 && (*(iVar6 + 0x14) < 8)))))) {
                pcVar10 = *(*(iVar8 + 0xb8) + 8);
                if (2 < (pcVar10 + -0x8002748 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar10,0x8000520);
                }
                uVar4 = (*pcVar10)(iVar8,uVar2 | uVar1 << 8);
                uVar9 = uVar4 & 0xffffffff;
                if (uVar4 < 0) {
                    _dev_err(*(iVar8 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u rc = %d\n",
                             *(iVar6 + 0xc),*(iVar6 + 0x10),*(iVar6 + 0x14),uVar9);
                }
                else {
                    uVar1 = uVar4 & 0xffff;
                    if (*(iVar8 + 0x54) < uVar1) {
                        *(iVar8 + 0x54) = uVar4;
                    }
                    if (uVar1 < *(iVar8 + 0x52)) {
                        *(iVar8 + 0x52) = uVar4;
                    }
                    uVar9 = 0;
                    *arg3 = *(iVar6 + 0x10) << 0x14 & 0xff00000 | *(iVar6 + 0xc) << 0x1c |
                            *(iVar6 + 0x14) << 0x10 & 0x70000 | uVar4 & 0x3ff;
                    *arg4 = *(iVar6 + 0x18) & 0xf;
                }
            }
            else {
                uVar9 = 0xffffffea;
            }
            return uVar9;
        }
        return uVar4;
    }
    return uVar4;
}


// ===== sym.debug_soc_start_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002620 (size 8) =====

void sym.debug_soc_start_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,ulong *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uVar1 = *(param_1 + 0xe8);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    pcVar4 = *(*(param_1 + 0xb8) + 0x58);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (3 < (pcVar4 + -0x80025c0 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xd04c2c57db5c62e7,pcVar4,0x8000340);
    }
    iVar3 = (*pcVar4)(param_1,uVar1 >> 0x10 & 0xf,uVar1,&uStack_88);
    if (iVar3 == 0) {
        *param_2 = uStack_88;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.debug_soc_end_addr_fops_open;
    simple_attr_open(auVar5._0_8_,auVar5._8_8_,sym.debug_soc_end_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,0,
                     "0x%llX\n");
    return;
}


// ===== sym.debug_spmi_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002628 (size 8) =====

ulong sym.debug_spmi_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(param_1 + 0xe8);
    return 0;
}


// ===== sym.debug_soc_end_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002630 (size 8) =====

void sym.debug_soc_end_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,ulong *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uchar *puVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uVar1 = *(param_1 + 0xe8);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    pcVar5 = *(*(param_1 + 0xb8) + 0x58);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (3 < (pcVar5 + -0x80025c0 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0xd04c2c57db5c62e7,pcVar5,0x8000340);
    }
    iVar3 = (*pcVar5)(param_1,uVar1 >> 0x10 & 0xf,uVar1,&uStack_88);
    if (iVar3 == 0) {
        *param_2 = uStack_80;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8005af8);
        (*pcVar5)();
    }
    return;
}


// ===== sym.pmic_arb_write_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002638 (size 8) =====

uint64_t sym.pmic_arb_write_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                   (int64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,code *param_5,
                   uint64_t param_6)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    code *pcVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t unaff_x26;
    uint64_t uVar10;
    code *unaff_x28;
    ulong unaff_x30;
    code *pcStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    param_4 = param_4 & 0xffffffff;
    uVar10 = param_2 & 0xffffffff;
    iVar6 = *(param_1 + 0x98);
    pcVar7 = *(*(iVar6 + 0xb8) + 0x10);
    if (3 < (pcVar7 + -0x80025e0 >> 3 | pcVar7 << 0x3d)) {
        __cfi_slowpath_diag(0x2beea59d77764cf2,pcVar7,0x8000460);
    }
    uVar2 = (*pcVar7)(iVar6,param_3,param_4,0);
    uVar8 = uVar2;
    if (uVar2 < 0) goto code_r0x080034b8;
    uVar2 = param_6 - 1;
    unaff_x26 = uVar2;
    if ((uVar2 & 0xff) < 8) {
        uVar2 = param_2;
        pcStack_78 = param_5;
        if ((uVar2 & 0xe0) == 0x40) {
            uVar10 = 0xe;
        }
        else if ((uVar2 & 0xff) < 0x10) {
            uVar10 = 2;
        }
        else if ((uVar2 & 0xf8) == 0x30) {
            uVar10 = 0;
        }
        else {
            if ((uVar2 & 0xff) >> 7 == 0) {
                uVar8 = 0xffffffea;
                goto code_r0x080034b8;
            }
            uVar10 = 0x10;
        }
        unaff_x28 = *(*(iVar6 + 0xb8) + 0x18);
        if (1 < (unaff_x28 + -0x80025a8 >> 3 | unaff_x28 << 0x3d)) goto code_r0x08003520;
        while( true ) {
            uVar3 = (*unaff_x28)(uVar10,param_3,param_4,unaff_x26 & 0xffffffff);
            uVar2 = unaff_x26 & 0xff;
            unaff_x26 = iVar6 + 0x38;
            uVar4 = _raw_spin_lock_irqsave(unaff_x26);
            uVar5 = param_6 & 0xff;
            if (2 < uVar2) {
                uVar5 = 4;
            }
            uVar10 = uVar8 + 0x10;
            uStack_6c = 0;
            memcpy(&uStack_6c,pcStack_78,uVar5);
            *(*(iVar6 + 8) + uVar10) = uStack_6c;
            if (3 < uVar2) {
                iVar9 = param_6;
                param_6 = uVar8 + 0x14;
                uStack_6c = 0;
                memcpy(&uStack_6c,pcStack_78 + 4,iVar9 + 0xfcU & 0xff);
                *(*(iVar6 + 8) + param_6) = uStack_6c;
            }
            sym.writel_relaxed(uVar3,*(iVar6 + 8) + uVar8);
            uVar8 = sym.pmic_arb_wait_for_done(param_1,*(iVar6 + 8),param_3,param_4);
            uVar8 = uVar8 & 0xffffffff;
            _raw_spin_unlock_irqrestore(unaff_x26,uVar4);
            unaff_x28 = pcStack_78;
code_r0x080034b8:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_68) break;
            __stack_chk_fail();
code_r0x08003520:
            __cfi_slowpath_diag(0x37feef2cb920e1c6,unaff_x28,0x8000480);
        }
        return uVar8;
    }
    _dev_err(param_1,"pmic-arb supports 1..%d bytes per trans, but:%zu requested",8,param_6);
    uVar8 = 0xffffffea;
    goto code_r0x080034b8;
}


// ===== sym.pmic_arb_read_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002640 (size 8) =====

uint64_t sym.pmic_arb_read_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                   (uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,int64_t param_5,
                   uint64_t param_6)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    code *pcVar7;
    uint32_t unaff_w26;
    int64_t *piVar8;
    code *unaff_x28;
    ulong unaff_x30;
    int64_t iStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    param_4 = param_4 & 0xffffffff;
    piVar8 = param_2 & 0xffffffff;
    piVar6 = *(param_1 + 0x98);
    pcVar7 = *(piVar6[0x17] + 0x10);
    if (3 < (pcVar7 + -0x80025e0 >> 3 | pcVar7 << 0x3d)) {
        __cfi_slowpath_diag(0x2beea59d77764cf2,pcVar7,0x8000420);
    }
    uVar2 = (*pcVar7)(piVar6,param_3,param_4,1);
    uVar5 = uVar2;
    if (-1 < uVar2) {
        unaff_w26 = param_6 - 1;
        if ((unaff_w26 & 0xff) < 8) {
            if (param_2 < '`') {
                if ((param_2 & 0xf0) == 0x20) {
                    piVar8 = 0xd;
                }
                else {
                    if ((param_2 & 0xf8) != 0x38) {
                        uVar5 = 0xffffffea;
                        goto code_r0x08003200;
                    }
                    piVar8 = 0x1;
                }
            }
            else {
                piVar8 = 0xf;
            }
            unaff_x28 = *(piVar6[0x17] + 0x18);
            uVar5 = param_1;
            iStack_78 = param_5;
            if (1 < (unaff_x28 + -0x80025a8 >> 3 | unaff_x28 << 0x3d)) goto code_r0x08003290;
            goto code_r0x08003134;
        }
        _dev_err(param_1,"pmic-arb supports 1..%d bytes per trans, but:%zu requested",8,param_6);
        uVar5 = 0xffffffea;
    }
code_r0x08003200:
    while (iVar1 = sp_el0, *(iVar1 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x08003290:
        __cfi_slowpath_diag(0x37feef2cb920e1c6,unaff_x28,0x8000440);
code_r0x08003134:
        uVar4 = (*unaff_x28)(piVar8 & 0xffffffff,param_3,param_4,unaff_w26);
        piVar8 = piVar6 + 7;
        unaff_x28 = _raw_spin_lock_irqsave(piVar8);
        sym.writel_relaxed(uVar4 & 0xffffffff,*piVar6 + uVar2);
        uVar3 = sym.pmic_arb_wait_for_done(uVar5,*piVar6,param_3,param_4);
        if (uVar3 == 0) {
            uVar5 = param_6 & 0xff;
            if (2 < (unaff_w26 & 0xff)) {
                uVar5 = 4;
            }
            uStack_6c = *(*piVar6 + uVar2 + 0x18);
            memcpy(iStack_78,&uStack_6c,uVar5);
            if (3 < (unaff_w26 & 0xff)) {
                uStack_6c = *(*piVar6 + uVar2 + 0x1c);
                memcpy(iStack_78 + 4,&uStack_6c,param_6 + 0xfcU & 0xff);
            }
        }
        _raw_spin_unlock_irqrestore(piVar8,unaff_x28);
        uVar5 = uVar3;
    }
    return uVar5;
}


// ===== sym.handle_level_irq.cfi_jt @ 0x08002648 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_level_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pmic_arb_chained_irq.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002650 (size 8) =====

void sym.pmic_arb_chained_irq.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1)

{
    uchar uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    bool bVar7;
    uint32_t uVar8;
    int iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t iVar14;
    ulong *in_x18;
    int64_t arg1;
    uint64_t uVar15;
    code *pcVar16;
    uint32_t uVar17;
    int64_t iVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 8);
    iVar18 = *(param_1 + 0x48);
    iVar14 = *(arg1 + 0xb8);
    uVar2 = *(arg1 + 0x56);
    uVar5 = *(arg1 + 0x54) >> 5;
    uVar4 = *(arg1 + 0x52) >> 5;
    uVar17 = uVar4;
    uVar1 = *(arg1 + 0x48);
    if (*(iVar18 + 0x50) == 0) {
        pcVar16 = *(iVar18 + 0x40);
        if (pcVar16 == NULL) {
            pcVar16 = *(iVar18 + 0x38);
            if (2 < (pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d)) {
                __cfi_slowpath_diag(0x12432ee19d152236,pcVar16,0x80005e0);
            }
            (*pcVar16)(param_1 + 0x30);
            pcVar16 = *(iVar18 + 0x30);
            if (pcVar16 != NULL) {
                if (2 < (pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d)) {
                    __cfi_slowpath_diag(0x12432ee19d152236,pcVar16,0x8000600);
                }
                (*pcVar16)(param_1 + 0x30);
            }
        }
        else {
            if (2 < (pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d)) {
                __cfi_slowpath_diag(0x12432ee19d152236,pcVar16,0x80005c0);
            }
            (*pcVar16)(param_1 + 0x30);
        }
    }
    if (uVar5 < uVar4) {
code_r0x0800394c:
        uVar2 = *(arg1 + 0x52);
        if (uVar2 <= *(arg1 + 0x54)) {
            uVar11 = uVar2 << 2 | 3;
            uVar15 = uVar2;
            do {
                if (*(*(arg1 + 0xd0) + uVar11) == *(arg1 + 0x48)) {
                    pcVar16 = *(iVar14 + 0x38);
                    if (0xd < (pcVar16 + -0x80026a8 >> 3 | pcVar16 << 0x3d)) {
                        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar16,0x8000580);
                    }
                    iVar10 = (*pcVar16)(arg1,uVar15 & 0xffffffff);
                    iVar9 = sym.readl_relaxed(iVar10);
                    if (iVar9 != 0) {
                        pcVar16 = *(iVar14 + 0x30);
                        if (0xd < (pcVar16 + -0x80026a8 >> 3 | pcVar16 << 0x3d)) {
                            __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar16,0x80005a0);
                        }
                        iVar10 = (*pcVar16)(arg1,uVar15 & 0xffffffff);
                        uVar12 = sym.readl_relaxed(iVar10);
                        if ((uVar12 & 1) != 0) {
                            sym.periph_interrupt(arg1,uVar15 & 0xffffffff);
                        }
                    }
                }
                uVar11 = uVar11 + 4;
                bVar6 = uVar15 < *(arg1 + 0x54);
                uVar15 = uVar15 + 1;
            } while (bVar6);
        }
    }
    else {
        bVar6 = false;
        do {
            pcVar16 = *(iVar14 + 0x28);
            if (4 < (pcVar16 + -0x8002680 >> 3 | pcVar16 << 0x3d)) {
                __cfi_slowpath_diag(0xd1d26d5280905e13,pcVar16,0x8000540);
            }
            iVar10 = (*pcVar16)(arg1,uVar1,uVar17 - (uVar2 >> 5));
            uVar8 = sym.readl_relaxed(iVar10);
            bVar7 = uVar8 != 0;
            if (uVar8 != 0) {
                do {
                    uVar3 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
                    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
                    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
                    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                    uVar19 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
                    uVar3 = uVar19 | uVar17 << 5;
                    if ((uVar3 < *(arg1 + 0x52)) || (*(arg1 + 0x54) < uVar3)) {
                        if ((obj.pmic_arb_chained_irq.__already_done & 1) == 0) {
                            obj.pmic_arb_chained_irq.__already_done = 0x1;
                            __warn_printk("spurious spmi irq received for apid=%d\n",uVar3);
    //WARNING: Does not return
                            pcVar16 = SoftwareBreakpoint(0x800,0x80038f0);
                            (*pcVar16)();
                        }
                    }
                    else {
                        pcVar16 = *(iVar14 + 0x30);
                        if (0xd < (pcVar16 + -0x80026a8 >> 3 | pcVar16 << 0x3d)) {
                            __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar16,0x8000560);
                        }
                        iVar10 = (*pcVar16)(arg1,uVar3);
                        uVar11 = sym.readl_relaxed(iVar10);
                        if ((uVar11 & 1) != 0) {
                            sym.periph_interrupt(arg1,uVar3);
                        }
                    }
                    uVar8 = uVar8 & (1 << (uVar19 & 0x1f) ^ 0xffffffffU);
                } while (uVar8 != 0);
            }
            bVar6 = bVar7 | bVar6;
            uVar17 = uVar17 + 1;
        } while (uVar17 != uVar5 + 1);
        if (!bVar6) goto code_r0x0800394c;
    }
    pcVar16 = *(iVar18 + 0x50);
    if (pcVar16 == NULL) {
        pcVar16 = *(iVar18 + 0x48);
        if ((pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d) < 3) goto code_r0x08003a9c;
        uVar13 = 0x8000680;
    }
    else {
        if ((pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d) < 3) goto code_r0x08003a9c;
        uVar13 = 0x8000660;
    }
    __cfi_slowpath_diag(0x12432ee19d152236,pcVar16,uVar13);
code_r0x08003a9c:
    (*pcVar16)(param_1 + 0x30);
    return;
}


// ===== sym.handle_edge_irq.cfi_jt @ 0x08002658 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_edge_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.spmi_pmic_arb_map_address.cfi_jt @ 0x08002660 (size 8) =====

ulong sym.spmi_pmic_arb_map_address.cfi_jt(int64_t param_1,uint32_t param_2,int64_t param_3)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 != 0) && (param_3 != 0)) && (*(param_1 + 0x2f0) != 0)) {
        iVar1 = of_parse_phandle(*(param_1 + 0x2f0),"qcom,pmic-arb",0);
        if (iVar1 == 0) {
            _printk(0x800081e,"spmi_pmic_arb_map_address");
        }
        else {
            iVar1 = of_find_device_by_node();
            if ((iVar1 == 0) || (*(iVar1 + 0xa8) == 0)) {
                return 0xfffffdfb;
            }
            iVar1 = *(*(iVar1 + 0xa8) + 0x98);
            if (iVar1 != 0) {
                pcVar3 = *(*(iVar1 + 0xb8) + 0x58);
                if (3 < (pcVar3 + -0x80025c0 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xd04c2c57db5c62e7,pcVar3,0x8000340);
                }
                uVar2 = (*pcVar3)(iVar1,param_2 >> 0x10 & 0xf,param_2,param_3);
                return uVar2;
            }
            _printk(0x80009ff);
        }
        return 0xffffffed;
    }
    _printk(0x8000bfa,"spmi_pmic_arb_map_address");
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP15spmi_controllerhhE_global_addr @ 0x08002668 (size 8) =====

ulong sym.__typeid__ZTSFiP15spmi_controllerhhE_global_addr(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((param_2 - 0x14U & 0xff) < 0xfc) {
        return 0xffffffea;
    }
    *in_x18 = unaff_x30;
    pcVar2 = *(*(*(param_1 + 0x98) + 0xb8) + 0x20);
    if (2 < (pcVar2 + -0x8002668 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0xf445eaa7552bd33,pcVar2,0x8000400);
        param_2 = param_2 & 0xffffffff;
        param_3 = param_3 & 0xffffffff;
    }
    uVar1 = (*pcVar2)(param_1,param_2,param_3);
    return uVar1;
}


// ===== sym.pmic_arb_non_data_cmd_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002670 (size 8) =====

uint64_t sym.pmic_arb_non_data_cmd_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                   (int64_t param_1,int param_2,uint32_t param_3)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    pcVar4 = *(*(iVar3 + 0xb8) + 0x10);
    if (3 < (pcVar4 + -0x80025e0 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0x2beea59d77764cf2,pcVar4,0x8000360);
    }
    uVar1 = (*pcVar4)(iVar3,param_3,0,0);
    uVar5 = uVar1;
    if (-1 < uVar1) {
        uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x38);
        sym.writel_relaxed(param_2 << 0x1b | (param_3 & 0xf) << 0x14,*(iVar3 + 8) + uVar5);
        uVar5 = sym.pmic_arb_wait_for_done(param_1,*(iVar3 + 8),param_3,0);
        uVar5 = uVar5 & 0xffffffff;
        _raw_spin_unlock_irqrestore(iVar3 + 0x38,uVar2);
    }
    return uVar5;
}


// ===== sym.pmic_arb_non_data_cmd_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002678 (size 8) =====

ulong sym.pmic_arb_non_data_cmd_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(void)

{
    return 0xffffffa1;
}


// ===== sym.__typeid__ZTSFPvP13spmi_pmic_arbhtE_global_addr @ 0x08002680 (size 8) =====

int64_t sym.__typeid__ZTSFPvP13spmi_pmic_arbhtE_global_addr(int64_t param_1,uint64_t param_2,uint16_t param_3)

{
    return *(param_1 + 0x18) + (param_2 & 0xff) * 0x1000 + param_3 * 4 + 0x200000;
}


// ===== sym.pmic_arb_owner_acc_status_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002688 (size 8) =====

int64_t sym.pmic_arb_owner_acc_status_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                  (int64_t param_1,uint64_t param_2,uint16_t param_3)

{
    return *(param_1 + 0x18) + (param_2 & 0xff) * 0x10000 + param_3 * 4;
}


// ===== sym.pmic_arb_owner_acc_status_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002690 (size 8) =====

int64_t sym.pmic_arb_owner_acc_status_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                  (int64_t param_1,uint64_t param_2,uint16_t param_3)

{
    return *(param_1 + 0x18) + (param_2 & 0xff) * 0x1000 + param_3 * 4;
}


// ===== sym.pmic_arb_owner_acc_status_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002698 (size 8) =====

int64_t sym.pmic_arb_owner_acc_status_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                  (int64_t param_1,uint64_t param_2,uint16_t param_3)

{
    return *(param_1 + 0x18) + (param_2 & 0xff) * 0x20 + param_3 * 4;
}


// ===== sym.pmic_arb_owner_acc_status_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026a0 (size 8) =====

int64_t sym.pmic_arb_owner_acc_status_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt
                  (int64_t param_1,uint64_t param_2,uint16_t param_3)

{
    return *(param_1 + 0x18) + (param_2 & 0xff) * 0x1000 + param_3 * 4 + 0x100000;
}


// ===== sym.__typeid__ZTSFPvP13spmi_pmic_arbtE_global_addr @ 0x080026a8 (size 8) =====

int64_t sym.__typeid__ZTSFPvP13spmi_pmic_arbtE_global_addr(int64_t param_1,uint64_t param_2)

{
    return *(param_1 + 0x18) + (param_2 & 0xffff) * 0x1000 + 8;
}


// ===== sym.pmic_arb_acc_enable_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026b0 (size 8) =====

int64_t sym.pmic_arb_acc_enable_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint16_t param_2)

{
    return *(param_1 + 0x18) + param_2 * 4 + 0x200;
}


// ===== sym.pmic_arb_apid_owner_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026b8 (size 8) =====

int64_t sym.pmic_arb_apid_owner_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint16_t param_2)

{
    return *(param_1 + 0x20) + param_2 * 4 + 0x700;
}


// ===== sym.pmic_arb_irq_status_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026c0 (size 8) =====

int64_t sym.pmic_arb_irq_status_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,int param_2)

{
    return *(param_1 + 8) + (param_2 << 0x10) + 0x104;
}


// ===== sym.pmic_arb_irq_clear_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026c8 (size 8) =====

int64_t sym.pmic_arb_irq_clear_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint16_t param_2)

{
    return *(param_1 + 0x18) + param_2 * 4 + 0xa00;
}


// ===== sym.pmic_arb_irq_status_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026d0 (size 8) =====

int64_t sym.pmic_arb_irq_status_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint64_t param_2)

{
    return *(param_1 + 8) + (param_2 & 0xffff) * 0x1000 + 0x104;
}


// ===== sym.pmic_arb_irq_status_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026d8 (size 8) =====

int64_t sym.pmic_arb_irq_status_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint16_t param_2)

{
    return *(param_1 + 0x18) + param_2 * 4 + 0x600;
}


// ===== sym.pmic_arb_acc_enable_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026e0 (size 8) =====

int64_t sym.pmic_arb_acc_enable_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,int param_2)

{
    return *(param_1 + 8) + (param_2 << 0x10) + 0x100;
}


// ===== sym.pmic_arb_irq_status_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026e8 (size 8) =====

int64_t sym.pmic_arb_irq_status_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint64_t param_2)

{
    return *(param_1 + 0x18) + (param_2 & 0xffff) * 0x1000 + 4;
}


// ===== sym.pmic_arb_apid_owner_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026f0 (size 8) =====

int64_t sym.pmic_arb_apid_owner_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint32_t param_2)

{
    return *(param_1 + 0x20) + ((param_2 & 0xffff) - *(param_1 + 0x56)) * 4;
}


// ===== sym.pmic_arb_acc_enable_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x080026f8 (size 8) =====

int64_t sym.pmic_arb_acc_enable_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint64_t param_2)

{
    return *(param_1 + 0x18) + (param_2 & 0xffff) * 0x1000;
}


// ===== sym.pmic_arb_irq_clear_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002700 (size 8) =====

int64_t sym.pmic_arb_irq_clear_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint64_t param_2)

{
    return *(param_1 + 8) + (param_2 & 0xffff) * 0x1000 + 0x108;
}


// ===== sym.pmic_arb_acc_enable_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002708 (size 8) =====

int64_t sym.pmic_arb_acc_enable_v7.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint64_t param_2)

{
    return *(param_1 + 8) + (param_2 & 0xffff) * 0x1000 + 0x100;
}


// ===== sym.pmic_arb_irq_clear_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002710 (size 8) =====

int64_t sym.pmic_arb_irq_clear_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,int param_2)

{
    return *(param_1 + 8) + (param_2 << 0x10) + 0x108;
}


// ===== sym.__typeid__ZTSFjtE_global_addr @ 0x08002718 (size 8) =====

int sym.__typeid__ZTSFjtE_global_addr(uint32_t param_1)

{
    return (param_1 & 0xffff) * 4 + 0x2000;
}


// ===== sym.pmic_arb_apid_map_offset_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002720 (size 8) =====

int sym.pmic_arb_apid_map_offset_v2.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(uint32_t param_1)

{
    return (param_1 & 0xffff) * 4 + 0x800;
}


// ===== sym.pmic_arb_apid_map_offset_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002728 (size 8) =====

int sym.pmic_arb_apid_map_offset_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(uint32_t param_1)

{
    return (param_1 & 0xffff) * 4 + 0x900;
}


// ===== sym.__typeid__ZTSFvP8irq_dataE_global_addr @ 0x08002730 (size 8) =====

void sym.__typeid__ZTSFvP8irq_dataE_global_addr(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 0x30);
    uVar5 = *(param_1 + 8);
    pcVar6 = *(*(iVar2 + 0xb8) + 0x30);
    if (0xd < (pcVar6 + -0x80026a8 >> 3 | pcVar6 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar6,0x8000500);
    }
    iVar2 = (*pcVar6)(iVar2,uVar5 & 0x3ff);
    sym.writel_relaxed(1,iVar2);
    iVar2 = *(param_1 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar2 + 0xb0),0x38,*(param_1 + 8) >> 0x1c & 0xf,*(param_1 + 8) >> 0xc & 0xffffff00 | 0x15);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(param_1 + 4));
    }
    iVar2 = *(param_1 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar2 + 0xb0),0x30,*(param_1 + 8) >> 0x1c & 0xf,*(param_1 + 8) >> 0xc & 0xffffff00 | 0x14);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(param_1 + 4));
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar3) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar3 = auVar8._0_8_;
    *extraout_x18 = sym.qpnpint_irq_set_type;
    iVar2 = sp_el0;
    iVar4 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar3 + 0x30) + 0x3c;
    uVar5 = _raw_spin_lock_irqsave(iVar2);
    iVar7 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar7 + 0xb0),0x38,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar7 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    if ((auVar8._8_8_ & 3) == 0) {
        if ((~auVar8._8_4_ & 0xc) == 0) {
            _raw_spin_unlock_irqrestore(iVar2,uVar5);
            uVar5 = 0xffffffea;
            goto code_r0x08005468;
        }
        pcVar6 = sym.handle_level_irq.cfi_jt;
    }
    else {
        pcVar6 = sym.handle_edge_irq.cfi_jt;
    }
    iVar7 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar7 + 0xb0),0x30,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar7 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    _raw_spin_unlock_irqrestore(iVar2,uVar5);
    uVar5 = 0;
    *(*(iVar3 + 0x10) + 0x70) = pcVar6;
code_r0x08005468:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar4) {
        iVar2 = __stack_chk_fail(uVar5);
        *extraout_x18_00 = sym.qpnpint_irq_set_wake;
        irq_set_irq_wake(*(*(iVar2 + 0x30) + 0x44));
        return;
    }
    return;
}


// ===== sym.qpnpint_irq_mask.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002738 (size 8) =====

void sym.qpnpint_irq_mask.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar4;
    ulong uVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar2 = *(iVar2 + 0x5e0);
    iVar4 = *(param_1 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar4 + 0xb0),0x30,*(param_1 + 8) >> 0x1c & 0xf,*(param_1 + 8) >> 0xc & 0xffffff00 | 0x16);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar4 + 0xb0),"failed irqchip transaction on %x\n",*(param_1 + 4));
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iVar2) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qpnpint_irq_unmask;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar4 + 0x30);
    uVar5 = *(iVar4 + 8);
    pcVar6 = *(*(iVar2 + 0xb8) + 0x30);
    if (0xd < (pcVar6 + -0x80026a8 >> 3 | pcVar6 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar6,0x8000500);
    }
    iVar2 = (*pcVar6)(iVar2,uVar5 & 0x3ff);
    sym.writel_relaxed(1,iVar2);
    iVar2 = *(iVar4 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar2 + 0xb0),0x38,*(iVar4 + 8) >> 0x1c & 0xf,*(iVar4 + 8) >> 0xc & 0xffffff00 | 0x15);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(iVar4 + 4));
    }
    iVar2 = *(iVar4 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar2 + 0xb0),0x30,*(iVar4 + 8) >> 0x1c & 0xf,*(iVar4 + 8) >> 0xc & 0xffffff00 | 0x14);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(iVar4 + 4));
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar3) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18_00 = sym.qpnpint_irq_set_type;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar4 + 0x30) + 0x3c;
    uVar5 = _raw_spin_lock_irqsave(iVar2);
    iVar7 = *(iVar4 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar7 + 0xb0),0x38,*(iVar4 + 8) >> 0x1c & 0xf,*(iVar4 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar7 + 0xb0),"failed irqchip transaction on %x\n",*(iVar4 + 4));
    }
    if ((auVar8._8_8_ & 3) == 0) {
        if ((~auVar8._8_4_ & 0xc) == 0) {
            _raw_spin_unlock_irqrestore(iVar2,uVar5);
            uVar5 = 0xffffffea;
            goto code_r0x08005468;
        }
        pcVar6 = sym.handle_level_irq.cfi_jt;
    }
    else {
        pcVar6 = sym.handle_edge_irq.cfi_jt;
    }
    iVar7 = *(iVar4 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar7 + 0xb0),0x30,*(iVar4 + 8) >> 0x1c & 0xf,*(iVar4 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar7 + 0xb0),"failed irqchip transaction on %x\n",*(iVar4 + 4));
    }
    _raw_spin_unlock_irqrestore(iVar2,uVar5);
    uVar5 = 0;
    *(*(iVar4 + 0x10) + 0x70) = pcVar6;
code_r0x08005468:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar3) {
        iVar2 = __stack_chk_fail(uVar5);
        *extraout_x18_01 = sym.qpnpint_irq_set_wake;
        irq_set_irq_wake(*(*(iVar2 + 0x30) + 0x44));
        return;
    }
    return;
}


// ===== sym.qpnpint_irq_ack.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002740 (size 8) =====

void sym.qpnpint_irq_ack.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 0x30);
    uVar7 = *(param_1 + 8);
    pcVar4 = *(*(iVar2 + 0xb8) + 0x40);
    if (0xd < (pcVar4 + -0x80026a8 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar4,0x80004e0);
    }
    iVar2 = (*pcVar4)(iVar2,uVar7 & 0x3ff);
    sym.writel_relaxed(1L << (uVar7 >> 0x10 & 7) & 0xffffffff,iVar2);
    iVar2 = *(param_1 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar2 + 0xb0),0x30,*(param_1 + 8) >> 0x1c & 0xf,*(param_1 + 8) >> 0xc & 0xffffff00 | 0x14);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(param_1 + 4));
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar3) {
        return;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.qpnpint_irq_mask;
    iVar2 = sp_el0;
    iVar2 = *(iVar2 + 0x5e0);
    iVar5 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar5 + 0xb0),0x30,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x16);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar5 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iVar2) {
        return;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.qpnpint_irq_unmask;
    iVar2 = sp_el0;
    iVar5 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar3 + 0x30);
    uVar6 = *(iVar3 + 8);
    pcVar4 = *(*(iVar2 + 0xb8) + 0x30);
    if (0xd < (pcVar4 + -0x80026a8 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar4,0x8000500);
    }
    iVar2 = (*pcVar4)(iVar2,uVar6 & 0x3ff);
    sym.writel_relaxed(1,iVar2);
    iVar2 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar2 + 0xb0),0x38,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x15);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    iVar2 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar2 + 0xb0),0x30,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x14);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar5) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    *extraout_x18_01 = sym.qpnpint_irq_set_type;
    iVar2 = sp_el0;
    iVar5 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar3 + 0x30) + 0x3c;
    uVar6 = _raw_spin_lock_irqsave(iVar2);
    iVar8 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar8 + 0xb0),0x38,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar8 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    if ((auVar9._8_8_ & 3) == 0) {
        if ((~auVar9._8_4_ & 0xc) == 0) {
            _raw_spin_unlock_irqrestore(iVar2,uVar6);
            uVar6 = 0xffffffea;
            goto code_r0x08005468;
        }
        pcVar4 = sym.handle_level_irq.cfi_jt;
    }
    else {
        pcVar4 = sym.handle_edge_irq.cfi_jt;
    }
    iVar8 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar8 + 0xb0),0x30,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar8 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    _raw_spin_unlock_irqrestore(iVar2,uVar6);
    uVar6 = 0;
    *(*(iVar3 + 0x10) + 0x70) = pcVar4;
code_r0x08005468:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar5) {
        iVar2 = __stack_chk_fail(uVar6);
        *extraout_x18_02 = sym.qpnpint_irq_set_wake;
        irq_set_irq_wake(*(*(iVar2 + 0x30) + 0x44));
        return;
    }
    return;
}


// ===== sym.__typeid__ZTSFiP13spmi_pmic_arbtE_global_addr @ 0x08002748 (size 8) =====

uint32_t sym.__typeid__ZTSFiP13spmi_pmic_arbtE_global_addr(int64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t arg1;
    code *pcVar5;
    ulong *in_x18;
    int16_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint8_t *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(*(param_1 + 0xc0) + (param_2 & 0xffff) * 2);
    if (iVar6 < 0) {
        uVar3 = iVar6 & 0x7fff;
    }
    else {
        uVar8 = *(param_1 + 200);
        puVar9 = *(param_1 + 0xd0) + uVar8 * 4 + 3;
        while( true ) {
            uVar7 = uVar8;
            pcVar5 = *(*(param_1 + 0xb8) + 0x48);
            if (2 < (pcVar5 + -0x8002718 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x2876ef22d8c5508,pcVar5,0x80003a0);
            }
            uVar4 = (*pcVar5)(uVar8);
            uVar3 = uVar7;
            if (*(param_1 + 0x30) <= (uVar4 & 0xffffffff)) break;
            pcVar5 = *(*(param_1 + 0xb8) + 0x50);
            if (0xd < (pcVar5 + -0x80026a8 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar5,0x80003c0);
            }
            arg1 = (*pcVar5)(param_1,uVar8);
            uVar2 = sym.readl_relaxed(arg1);
            *puVar9 = uVar2 & 7;
            puVar9[-1] = uVar2 & 7;
            uVar3 = sym.readl_relaxed(*(param_1 + 0x28) + (uVar4 & 0xffffffff));
            if (uVar3 != 0) {
                uVar1 = uVar3 >> 8 & 0xfff;
                uVar3 = uVar7 | 0xffff8000;
                *(*(param_1 + 0xc0) + uVar1 * 2) = uVar3;
                *(puVar9 + -3) = uVar1;
                if (uVar1 == (param_2 & 0xffff)) break;
            }
            uVar8 = uVar7 + 1;
            puVar9 = puVar9 + 4;
        }
        iVar6 = uVar3;
        uVar3 = uVar3 & 0x7fff;
        *(param_1 + 200) = uVar3;
    }
    uVar7 = 0xffffffed;
    if (iVar6 < 0) {
        uVar7 = uVar3;
    }
    return uVar7;
}


// ===== sym.pmic_arb_ppid_to_apid_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002750 (size 8) =====

uint32_t sym.pmic_arb_ppid_to_apid_v1.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint16_t param_2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    int iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = param_2;
    uVar3 = *(*(param_1 + 0xc0) + uVar9 * 2);
    if (uVar3 < 0) {
        uVar6 = uVar3 & 0x7fff;
    }
    else {
        uVar6 = 0;
        iVar10 = *(param_1 + 0x60);
        iVar11 = 0x10;
        do {
            uVar12 = uVar6;
            uVar7 = 1L << (uVar12 & 0x3f);
            puVar1 = param_1 + (uVar6 >> 3 & 0x1ffffff8) + 0x68;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar8 = *puVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 | uVar7;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar8 & uVar7) == 0) {
                uVar7 = sym.readl_relaxed(*(param_1 + 0x20) + uVar6 * 4 + 0xb00);
                *(iVar10 + uVar12 * 4) = uVar7;
            }
            else {
                uVar7 = *(iVar10 + uVar12 * 4);
            }
            uVar6 = uVar7;
            if ((param_2 >> (uVar6 >> 0x12 & 0xf) & 1) == 0) {
                if ((uVar6 >> 0x11 & 1) == 0) {
                    uVar2 = uVar6 >> 9;
                    uVar7 = (uVar7 & 0xffffffff) >> 9;
                    uVar6 = uVar6 >> 9;
                    *(*(param_1 + 0xc0) + uVar9 * 2) = uVar2 & 0xff | 0x8000;
code_r0x08003e14:
                    *(*(param_1 + 0xd0) + (uVar7 & 0xff) * 4) = param_2;
                    return uVar6 & 0xff;
                }
                uVar6 = uVar7 >> 9 & 0x7fffff;
            }
            else if ((uVar6 >> 8 & 1) == 0) {
                *(*(param_1 + 0xc0) + uVar9 * 2) = uVar7 & 0xff | 0x8000;
                goto code_r0x08003e14;
            }
            uVar6 = uVar6 & 0xff;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        uVar6 = 0xffffffed;
    }
    return uVar6;
}


// ===== sym.pmic_arb_ppid_to_apid_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002758 (size 8) =====

uint32_t sym.pmic_arb_ppid_to_apid_v5.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    
    uVar2 = *(*(param_1 + 0xc0) + (param_2 & 0xffff) * 2);
    uVar1 = 0xffffffed;
    if (uVar2 < 0) {
        uVar1 = uVar2 & 0x7fff;
    }
    return uVar1;
}


// ===== sym.simple_attr_release.cfi_jt @ 0x08002760 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.debug_spmi_addr_fops_open.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002768 (size 8) =====

void sym.debug_spmi_addr_fops_open.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debug_spmi_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,
                     sym.debug_spmi_addr_set.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,"0x%05llX\n");
    return;
}


// ===== sym.debug_soc_end_addr_fops_open.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002770 (size 8) =====

void sym.debug_soc_end_addr_fops_open.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debug_soc_end_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,0,"0x%llX\n"
                    );
    return;
}


// ===== sym.debug_soc_start_addr_fops_open.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002778 (size 8) =====

void sym.debug_soc_start_addr_fops_open.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debug_soc_start_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,0,
                     "0x%llX\n");
    return;
}


// ===== sym.qpnpint_irq_set_wake.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002780 (size 8) =====

void sym.qpnpint_irq_set_wake.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    irq_set_irq_wake(*(*(param_1 + 0x30) + 0x44));
    return;
}


// ===== sym.qpnpint_irq_set_type.c3a56913c2d41c9e522aea419766cf3a.cfi_jt @ 0x08002788 (size 8) =====

void sym.qpnpint_irq_set_type.c3a56913c2d41c9e522aea419766cf3a.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar4 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 0x30) + 0x3c;
    uVar2 = _raw_spin_lock_irqsave(iVar3);
    iVar6 = *(param_1 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar6 + 0xb0),0x38,*(param_1 + 8) >> 0x1c & 0xf,*(param_1 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(param_1 + 4));
    }
    if ((param_2 & 3) == 0) {
        if ((~param_2 & 0xc) == 0) {
            _raw_spin_unlock_irqrestore(iVar3,uVar2);
            uVar2 = 0xffffffea;
            goto code_r0x08005468;
        }
        pcVar5 = sym.handle_level_irq.cfi_jt;
    }
    else {
        pcVar5 = sym.handle_edge_irq.cfi_jt;
    }
    iVar6 = *(param_1 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar6 + 0xb0),0x30,*(param_1 + 8) >> 0x1c & 0xf,*(param_1 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(param_1 + 4));
    }
    _raw_spin_unlock_irqrestore(iVar3,uVar2);
    uVar2 = 0;
    *(*(param_1 + 0x10) + 0x70) = pcVar5;
code_r0x08005468:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iVar4) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.qpnpint_irq_set_wake;
    irq_set_irq_wake(*(*(iVar3 + 0x30) + 0x44));
    return;
}


// ===== sym.spmi_pmic_arb_map_address @ 0x08002790 (size 288) =====

ulong sym.spmi_pmic_arb_map_address(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 != 0) && (arg3 != 0)) && (*(arg1 + 0x2f0) != 0)) {
        iVar1 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,pmic-arb",0);
        if (iVar1 == 0) {
            _printk(0x800081e,"spmi_pmic_arb_map_address");
        }
        else {
            iVar1 = of_find_device_by_node();
            if ((iVar1 == 0) || (*(iVar1 + 0xa8) == 0)) {
                return 0xfffffdfb;
            }
            iVar1 = *(*(iVar1 + 0xa8) + 0x98);
            if (iVar1 != 0) {
                pcVar3 = *(*(iVar1 + 0xb8) + 0x58);
                if (3 < (pcVar3 + -0x80025c0 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xd04c2c57db5c62e7,pcVar3,0x8000340);
                }
                uVar2 = (*pcVar3)(iVar1,arg2 >> 0x10 & 0xf,arg2 & 0xffffffff,arg3);
                return uVar2;
            }
            _printk(0x80009ff);
        }
        return 0xffffffed;
    }
    _printk(0x8000bfa,"spmi_pmic_arb_map_address");
    return 0xffffffea;
}


// ===== sym.spmi_pmic_arb_probe @ 0x080028b0 (size 1516) =====

uint64_t sym.spmi_pmic_arb_probe(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    char *pcVar10;
    code *pcVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    uint64_t *arg1_00;
    uint64_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar9 = arg1 + 0x10;
    iStack_58 = *(iVar13 + 0x5e0);
    uStack_5c = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uVar4 = spmi_controller_alloc(iVar9,0xf0);
    if (uVar4 == 0) {
        uVar6 = 0xfffffff4;
        goto code_r0x08002ce0;
    }
    arg1_00 = *(uVar4 + 0x98);
    arg1_00[0x16] = uVar4;
    puVar5 = platform_get_resource_byname(arg1,0x200,"core");
    if (puVar5 == NULL) goto code_r0x08002cd4;
    uVar6 = devm_ioremap(uVar4,*puVar5,(puVar5[1] - *puVar5) + 1);
    if (0xfffffffffffff000 < uVar6) goto code_r0x08002cd8;
    arg1_00[6] = (puVar5[1] - *puVar5) + 1;
    uVar7 = devm_kmalloc(uVar4,0x2000,0xdc0);
    arg1_00[0x18] = uVar7;
    if (uVar7 == 0) {
code_r0x080029d0:
        uVar6 = 0xfffffff4;
    }
    else {
        uVar7 = sym.readl_relaxed(uVar6);
        uVar14 = uVar7 & 0xffffffff;
        if (uVar7 < 0x20010000) {
            arg1_00[1] = uVar6;
            arg1_00[0x17] = obj.pmic_arb_v1;
            uVar7 = 0x200;
            uVar12 = *puVar5;
            *arg1_00 = uVar6;
            *(arg1_00 + 0x1b) = 0x200;
            arg1_00[2] = uVar12;
            goto code_r0x080029ac;
        }
        uVar2 = uVar14 >> 0x1c;
        arg1_00[5] = uVar6;
        if (uVar2 < 3) {
            pcVar11 = obj.pmic_arb_v2;
        }
        else if (uVar2 < 5) {
            pcVar11 = obj.pmic_arb_v3;
        }
        else if (uVar2 < 7) {
            pcVar11 = obj.pmic_arb_v5;
        }
        else {
            pcVar11 = obj.pmic_arb_v7;
        }
        arg1_00[0x17] = pcVar11;
        piVar8 = platform_get_resource_byname(arg1,0x200,"obsrvr");
        if (piVar8 == NULL) goto code_r0x08002cd4;
        uVar7 = devm_ioremap(uVar4,*piVar8,(piVar8[1] - *piVar8) + 1);
        *arg1_00 = uVar7;
        if (0xfffffffffffff000 < uVar7) goto code_r0x08002aa4;
        puVar5 = platform_get_resource_byname(arg1,0x200,"chnls");
        if (puVar5 == NULL) goto code_r0x08002cd4;
        uVar7 = devm_ioremap(uVar4,*puVar5,(puVar5[1] - *puVar5) + 1);
        arg1_00[1] = uVar7;
        if (0xfffffffffffff000 < uVar7) goto code_r0x08002aa4;
        arg1_00[2] = *puVar5;
        *(arg1_00 + 0x1b) = 0x200;
        if (6 < uVar2) {
            *(arg1_00 + 0x1b) = 0x400;
            of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,bus-id",arg1_00 + 0x4c,1,0);
            if (*(arg1_00 + 0x4c) < 2) {
                if (*(arg1_00 + 0x4c) == 0) {
                    iVar13 = 4;
                    *(arg1_00 + 0x56) = 0;
                }
                else {
                    uVar1 = sym.readl_relaxed(uVar6 + 4);
                    iVar13 = 8;
                    *(arg1_00 + 0x56) = uVar1 & 0x7ff;
                }
                uVar2 = sym.readl_relaxed(uVar6 + iVar13);
                uVar7 = arg1_00[0x1b];
                *(arg1_00 + 0xb) = uVar2 & 0x7ff;
                if (arg1_00[0x1b] < (uVar2 & 0x7ff) + *(arg1_00 + 0x56)) goto code_r0x08002cb8;
                goto code_r0x080029ac;
            }
            pcVar10 = "invalid bus instance (%u) specified\n";
            goto code_r0x08002ccc;
        }
        if (uVar2 < 5) {
            uVar7 = 0x200;
        }
        else {
            *(arg1_00 + 0x56) = 0;
            uVar2 = sym.readl_relaxed(uVar6 + 4);
            uVar7 = arg1_00[0x1b];
            *(arg1_00 + 0xb) = uVar2 & 0x7ff;
            if (arg1_00[0x1b] < (uVar2 & 0x7ff)) {
code_r0x08002cb8:
                pcVar10 = "Unsupported APID count %d detected\n";
                goto code_r0x08002ccc;
            }
        }
code_r0x080029ac:
        if (uVar7 >> 0x3e != 0) {
            uVar6 = 0xfffffff4;
            arg1_00[0x1a] = 0;
            goto code_r0x08002cd8;
        }
        uVar6 = devm_kmalloc(uVar4,-(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2,0xdc0);
        arg1_00[0x1a] = uVar6;
        if (uVar6 == 0) goto code_r0x080029d0;
        _dev_info(uVar4,"PMIC arbiter version %s (0x%x)\n",*arg1_00[0x17],uVar14);
        iVar13 = platform_get_resource_byname(arg1,0x200,"intr");
        if (iVar13 != 0) {
            uVar7 = devm_ioremap_resource(uVar4,iVar13);
            arg1_00[3] = uVar7;
            if (0xfffffffffffff000 < uVar7) {
code_r0x08002aa4:
                uVar6 = uVar7 & 0xffffffff;
                goto code_r0x08002cd8;
            }
            iVar13 = platform_get_resource_byname(arg1,0x200,"cnfg");
            if (iVar13 != 0) {
                uVar7 = devm_ioremap_resource(uVar4,iVar13);
                arg1_00[4] = uVar7;
                if (0xfffffffffffff000 < uVar7) goto code_r0x08002aa4;
                iVar13 = of_find_property(*(arg1 + 0x300),"interrupt-names",0);
                if (iVar13 != 0) {
                    uVar2 = platform_get_irq_byname(arg1,"periph_irq");
                    *(arg1_00 + 0x44) = uVar2;
                    if (uVar2 < 0) {
                        uVar6 = uVar2;
                        goto code_r0x08002cd8;
                    }
                }
                uVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,channel",&uStack_5c,1,0);
                if (uVar2 < 0) {
                    pcVar10 = "channel unspecified.\n";
code_r0x08002e5c:
                    uVar6 = uVar2;
                    _dev_err(iVar9,pcVar10);
                    goto code_r0x08002cd8;
                }
                if (uStack_5c < 6) {
                    *(arg1_00 + 8) = uStack_5c;
                    uVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,ee",&uStack_60,1,0);
                    if (uVar2 < 0) {
                        pcVar10 = "EE unspecified.\n";
                        goto code_r0x08002e5c;
                    }
                    if (uStack_60 < 6) {
                        *(arg1_00 + 9) = uStack_60;
                        *(arg1_00 + 10) = 0x16;
                        iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,mid",&uStack_64,1,0);
                        if ((iVar3 < 0) || (3 < uStack_64)) {
                            if (iVar3 != -0x16) {
                                pcVar10 = "invalid MID (%u) specified\n";
                                goto code_r0x08002ccc;
                            }
                        }
                        else {
                            *(arg1_00 + 10) = uStack_64;
                        }
                        uVar6 = devm_kmalloc(uVar4,0x800,0xdc0);
                        if (uVar6 == 0) goto code_r0x080029d0;
                        arg1_00[0xc] = uVar6;
                        *(arg1_00 + 0x54) = 0;
                        *(arg1_00 + 0x52) = arg1_00[0x1b] + -1;
                        *(arg1 + 0xa8) = uVar4;
                        arg1_00[7] = 0;
                        *(uVar4 + 0x398) = sym.__typeid__ZTSFiP15spmi_controllerhhE_global_addr;
                        *(uVar4 + 0x3a0) = sym.pmic_arb_read_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
                        *(uVar4 + 0x3a8) = sym.pmic_arb_write_cmd.c3a56913c2d41c9e522aea419766cf3a.cfi_jt;
                        if (4 < uVar14 >> 0x1c) {
                            sym.pmic_arb_read_apid_map_v5(arg1_00);
                        }
                        if (0 < *(arg1_00 + 0x44)) {
                            iVar13 = 0;
                            if (*(arg1 + 0x300) != 0) {
                                iVar13 = *(arg1 + 0x300) + 0x18;
                            }
                            uVar6 = __irq_domain_add(iVar13,0,0xffffffffffffffff,0,obj.pmic_arb_irq_domain_ops,
                                                     arg1_00);
                            arg1_00[0x15] = uVar6;
                            if (uVar6 == 0) {
                                _dev_err(iVar9,"unable to create irq_domain\n");
                                uVar6 = 0xfffffff4;
                                goto code_r0x08002cd8;
                            }
                            irq_set_chained_handler_and_data
                                      (*(arg1_00 + 0x44),
                                       sym.pmic_arb_chained_irq.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,arg1_00);
                        }
                        uVar7 = spmi_controller_add(uVar4);
                        uVar6 = uVar7 & 0xffffffff;
                        if (uVar7 == 0) {
                            sym.spmi_pmic_arb_debugfs_init(arg1_00);
                            goto code_r0x08002ce0;
                        }
                        if (0 < *(arg1_00 + 0x44)) {
                            irq_set_chained_handler_and_data(*(arg1_00 + 0x44),0,0);
                            irq_domain_remove(arg1_00[0x15]);
                        }
                        goto code_r0x08002cd8;
                    }
                    pcVar10 = "invalid EE (%u) specified\n";
                }
                else {
                    pcVar10 = "invalid channel (%u) specified.\n";
                }
code_r0x08002ccc:
                _dev_err(iVar9,pcVar10);
            }
        }
code_r0x08002cd4:
        uVar6 = 0xffffffea;
    }
code_r0x08002cd8:
    put_device(uVar4);
code_r0x08002ce0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_58) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.spmi_pmic_arb_remove;
        iVar9 = *(iVar9 + 0xa8);
        iVar13 = *(iVar9 + 0x98);
        debugfs_remove(*(iVar13 + 0xe0));
        spmi_controller_remove(iVar9);
        if (0 < *(iVar13 + 0x44)) {
            irq_set_chained_handler_and_data(*(iVar13 + 0x44),0,0);
            irq_domain_remove(*(iVar13 + 0xa8));
        }
        if (iVar9 != 0) {
            put_device(iVar9);
        }
        return 0;
    }
    return uVar6 & 0xffffffff;
}


// ===== sym.spmi_pmic_arb_remove @ 0x08002e9c (size 112) =====

ulong sym.spmi_pmic_arb_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    iVar2 = *(iVar1 + 0x98);
    debugfs_remove(*(iVar2 + 0xe0));
    spmi_controller_remove(iVar1);
    if (0 < *(iVar2 + 0x44)) {
        irq_set_chained_handler_and_data(*(iVar2 + 0x44),0,0);
        irq_domain_remove(*(iVar2 + 0xa8));
    }
    if (iVar1 != 0) {
        put_device(iVar1);
    }
    return 0;
}


// ===== sym.readl_relaxed @ 0x08002f0c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002f10);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8002f44);
    return uVar1;
}


// ===== sym.pmic_arb_cmd @ 0x08002f7c (size 180) =====

ulong sym.pmic_arb_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((arg2 - 0x14U & 0xff) < 0xfc) {
        return 0xffffffea;
    }
    *in_x18 = unaff_x30;
    pcVar2 = *(*(*(arg1 + 0x98) + 0xb8) + 0x20);
    if (2 < (pcVar2 + -0x8002668 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0xf445eaa7552bd33,pcVar2,0x8000400);
        arg2 = arg2 & 0xffffffff;
        arg3 = arg3 & 0xffffffff;
    }
    uVar1 = (*pcVar2)(arg1,arg2,arg3);
    return uVar1;
}


// ===== sym.pmic_arb_read_cmd @ 0x08003030 (size 644) =====

uint64_t sym.pmic_arb_read_cmd(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t in_x4;
    uint32_t in_w5;
    uint32_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    uint64_t arg1_00;
    uint64_t arg4_00;
    code *pcVar7;
    uint64_t arg3_00;
    uint32_t unaff_w26;
    int64_t *piVar8;
    code *unaff_x28;
    ulong unaff_x30;
    int64_t iStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    arg4_00 = arg4 & 0xffffffff;
    arg3_00 = arg3 & 0xffffffff;
    piVar8 = arg2 & 0xffffffff;
    piVar6 = *(arg1 + 0x98);
    pcVar7 = *(piVar6[0x17] + 0x10);
    if (3 < (pcVar7 + -0x80025e0 >> 3 | pcVar7 << 0x3d)) {
        __cfi_slowpath_diag(0x2beea59d77764cf2,pcVar7,0x8000420);
    }
    uVar2 = (*pcVar7)(piVar6,arg3_00,arg4_00,1);
    arg1_00 = uVar2;
    if (-1 < uVar2) {
        unaff_w26 = in_w5 - 1;
        if ((unaff_w26 & 0xff) < 8) {
            if (arg2 < '`') {
                if ((arg2 & 0xf0) == 0x20) {
                    piVar8 = 0xd;
                }
                else {
                    if ((arg2 & 0xf8) != 0x38) {
                        arg1_00 = 0xffffffea;
                        goto code_r0x08003200;
                    }
                    piVar8 = 0x1;
                }
            }
            else {
                piVar8 = 0xf;
            }
            unaff_x28 = *(piVar6[0x17] + 0x18);
            arg1_00 = arg1;
            iStack_78 = in_x4;
            if (1 < (unaff_x28 + -0x80025a8 >> 3 | unaff_x28 << 0x3d)) goto code_r0x08003290;
            goto code_r0x08003134;
        }
        _dev_err(arg1,"pmic-arb supports 1..%d bytes per trans, but:%zu requested",8);
        arg1_00 = 0xffffffea;
    }
code_r0x08003200:
    while (iVar1 = sp_el0, *(iVar1 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x08003290:
        __cfi_slowpath_diag(0x37feef2cb920e1c6,unaff_x28,0x8000440);
code_r0x08003134:
        uVar4 = (*unaff_x28)(piVar8 & 0xffffffff,arg3_00,arg4_00,unaff_w26);
        piVar8 = piVar6 + 7;
        unaff_x28 = _raw_spin_lock_irqsave(piVar8);
        sym.writel_relaxed(uVar4 & 0xffffffff,*piVar6 + uVar2);
        uVar3 = sym.pmic_arb_wait_for_done(arg1_00,*piVar6,arg3_00,arg4_00);
        if (uVar3 == 0) {
            uVar5 = in_w5 & 0xff;
            if (2 < (unaff_w26 & 0xff)) {
                uVar5 = 4;
            }
            uStack_6c = *(*piVar6 + uVar2 + 0x18);
            memcpy(iStack_78,&uStack_6c,uVar5);
            if (3 < (unaff_w26 & 0xff)) {
                uStack_6c = *(*piVar6 + uVar2 + 0x1c);
                memcpy(iStack_78 + 4,&uStack_6c,in_w5 + 0xfc & 0xff);
            }
        }
        _raw_spin_unlock_irqrestore(piVar8,unaff_x28);
        arg1_00 = uVar3;
    }
    return arg1_00;
}


// ===== sym.pmic_arb_write_cmd @ 0x080032bc (size 648) =====

uint64_t sym.pmic_arb_write_cmd(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    code *in_x4;
    uint64_t in_x5;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t arg4_00;
    uint64_t arg3_00;
    int64_t iVar6;
    code *pcVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t unaff_x26;
    uint64_t uVar10;
    code *unaff_x28;
    ulong unaff_x30;
    code *pcStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    arg4_00 = arg4 & 0xffffffff;
    arg3_00 = arg3 & 0xffffffff;
    uVar10 = arg2 & 0xffffffff;
    iVar6 = *(arg1 + 0x98);
    pcVar7 = *(*(iVar6 + 0xb8) + 0x10);
    if (3 < (pcVar7 + -0x80025e0 >> 3 | pcVar7 << 0x3d)) {
        __cfi_slowpath_diag(0x2beea59d77764cf2,pcVar7,0x8000460);
    }
    uVar2 = (*pcVar7)(iVar6,arg3_00,arg4_00,0);
    uVar8 = uVar2;
    if (uVar2 < 0) goto code_r0x080034b8;
    uVar2 = in_x5 - 1;
    unaff_x26 = uVar2;
    if ((uVar2 & 0xff) < 8) {
        uVar2 = arg2;
        pcStack_78 = in_x4;
        if ((uVar2 & 0xe0) == 0x40) {
            uVar10 = 0xe;
        }
        else if ((uVar2 & 0xff) < 0x10) {
            uVar10 = 2;
        }
        else if ((uVar2 & 0xf8) == 0x30) {
            uVar10 = 0;
        }
        else {
            if ((uVar2 & 0xff) >> 7 == 0) {
                uVar8 = 0xffffffea;
                goto code_r0x080034b8;
            }
            uVar10 = 0x10;
        }
        unaff_x28 = *(*(iVar6 + 0xb8) + 0x18);
        if (1 < (unaff_x28 + -0x80025a8 >> 3 | unaff_x28 << 0x3d)) goto code_r0x08003520;
        while( true ) {
            uVar3 = (*unaff_x28)(uVar10,arg3_00,arg4_00,unaff_x26 & 0xffffffff);
            uVar2 = unaff_x26 & 0xff;
            unaff_x26 = iVar6 + 0x38;
            uVar4 = _raw_spin_lock_irqsave(unaff_x26);
            uVar5 = in_x5 & 0xff;
            if (2 < uVar2) {
                uVar5 = 4;
            }
            uVar10 = uVar8 + 0x10;
            uStack_6c = 0;
            memcpy(&uStack_6c,pcStack_78,uVar5);
            *(*(iVar6 + 8) + uVar10) = uStack_6c;
            if (3 < uVar2) {
                iVar9 = in_x5;
                in_x5 = uVar8 + 0x14;
                uStack_6c = 0;
                memcpy(&uStack_6c,pcStack_78 + 4,iVar9 + 0xfcU & 0xff);
                *(*(iVar6 + 8) + in_x5) = uStack_6c;
            }
            sym.writel_relaxed(uVar3,*(iVar6 + 8) + uVar8);
            uVar8 = sym.pmic_arb_wait_for_done(arg1,*(iVar6 + 8),arg3_00,arg4_00);
            uVar8 = uVar8 & 0xffffffff;
            _raw_spin_unlock_irqrestore(unaff_x26,uVar4);
            unaff_x28 = pcStack_78;
code_r0x080034b8:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_68) break;
            __stack_chk_fail();
code_r0x08003520:
            __cfi_slowpath_diag(0x37feef2cb920e1c6,unaff_x28,0x8000480);
        }
        return uVar8;
    }
    _dev_err(arg1,"pmic-arb supports 1..%d bytes per trans, but:%zu requested",8);
    uVar8 = 0xffffffea;
    goto code_r0x080034b8;
}


// ===== sym.pmic_arb_read_apid_map_v5 @ 0x08003544 (size 444) =====

void sym.pmic_arb_read_apid_map_v5(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong *in_x18;
    uint64_t uVar10;
    code *pcVar11;
    uint8_t *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 0x56);
    uVar10 = uVar3;
    uVar1 = uVar3 + *(arg1 + 0x58);
    if (uVar3 < (uVar1 & 0xffff)) {
        puVar12 = *(arg1 + 0xd0) + uVar10 * 4 + 3;
        do {
            pcVar11 = *(*(arg1 + 0xb8) + 0x48);
            if (2 < (pcVar11 + -0x8002718 >> 3 | pcVar11 << 0x3d)) {
                __cfi_slowpath_diag(0x2876ef22d8c5508,pcVar11,0x80004a0);
            }
            uVar7 = (*pcVar11)(uVar10);
            if (*(arg1 + 0x30) <= (uVar7 & 0xffffffff)) {
                return;
            }
            uVar6 = sym.readl_relaxed(*(arg1 + 0x28) + (uVar7 & 0xffffffff));
            if (uVar6 != 0) {
                pcVar11 = *(*(arg1 + 0xb8) + 0x50);
                if (0xd < (pcVar11 + -0x80026a8 >> 3 | pcVar11 << 0x3d)) {
                    __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar11,0x80004c0);
                }
                uVar4 = uVar6 >> 8 & 0xfff;
                iVar8 = (*pcVar11)(arg1,uVar10);
                uVar5 = sym.readl_relaxed(iVar8);
                uVar5 = uVar5 & 7;
                uVar2 = uVar5;
                if ((uVar6 & 0x1000000) == 0) {
                    uVar2 = 0xff;
                }
                puVar12[-1] = uVar5;
                *puVar12 = uVar2;
                uVar9 = *(*(arg1 + 0xc0) + uVar4 * 2);
                if ((uVar9 < 0) && (uVar5 != *(arg1 + 0x48))) {
                    if (((uVar6 >> 0x18 & 1) != 0) &&
                       (iVar8 = *(arg1 + 0xd0) + (uVar9 & 0x7fff) * 4, *(iVar8 + 2) == *(arg1 + 0x48))) {
                        *(iVar8 + 3) = uVar2;
                    }
                }
                else {
                    *(*(arg1 + 0xc0) + uVar4 * 2) = uVar10 | 0x8000;
                }
                *(puVar12 + -3) = uVar4;
                *(arg1 + 200) = uVar10;
            }
            uVar6 = uVar10 + 1;
            uVar10 = uVar6;
            puVar12 = puVar12 + 4;
        } while ((uVar6 & 0xffff) < (uVar1 & 0xffff));
    }
    return;
}


// ===== sym.pmic_arb_chained_irq @ 0x08003700 (size 1116) =====

void sym.pmic_arb_chained_irq(int64_t arg1)

{
    uchar uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    bool bVar7;
    uint32_t uVar8;
    int iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t iVar14;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar15;
    code *pcVar16;
    uint32_t uVar17;
    int64_t iVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 8);
    iVar18 = *(arg1 + 0x48);
    iVar14 = *(arg1_00 + 0xb8);
    uVar2 = *(arg1_00 + 0x56);
    uVar5 = *(arg1_00 + 0x54) >> 5;
    uVar4 = *(arg1_00 + 0x52) >> 5;
    uVar17 = uVar4;
    uVar1 = *(arg1_00 + 0x48);
    if (*(iVar18 + 0x50) == 0) {
        pcVar16 = *(iVar18 + 0x40);
        if (pcVar16 == NULL) {
            pcVar16 = *(iVar18 + 0x38);
            if (2 < (pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d)) {
                __cfi_slowpath_diag(0x12432ee19d152236,pcVar16,0x80005e0);
            }
            (*pcVar16)(arg1 + 0x30);
            pcVar16 = *(iVar18 + 0x30);
            if (pcVar16 != NULL) {
                if (2 < (pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d)) {
                    __cfi_slowpath_diag(0x12432ee19d152236,pcVar16,0x8000600);
                }
                (*pcVar16)(arg1 + 0x30);
            }
        }
        else {
            if (2 < (pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d)) {
                __cfi_slowpath_diag(0x12432ee19d152236,pcVar16,0x80005c0);
            }
            (*pcVar16)(arg1 + 0x30);
        }
    }
    if (uVar5 < uVar4) {
code_r0x0800394c:
        uVar2 = *(arg1_00 + 0x52);
        if (uVar2 <= *(arg1_00 + 0x54)) {
            uVar11 = uVar2 << 2 | 3;
            uVar15 = uVar2;
            do {
                if (*(*(arg1_00 + 0xd0) + uVar11) == *(arg1_00 + 0x48)) {
                    pcVar16 = *(iVar14 + 0x38);
                    if (0xd < (pcVar16 + -0x80026a8 >> 3 | pcVar16 << 0x3d)) {
                        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar16,0x8000580);
                    }
                    iVar10 = (*pcVar16)(arg1_00,uVar15 & 0xffffffff);
                    iVar9 = sym.readl_relaxed(iVar10);
                    if (iVar9 != 0) {
                        pcVar16 = *(iVar14 + 0x30);
                        if (0xd < (pcVar16 + -0x80026a8 >> 3 | pcVar16 << 0x3d)) {
                            __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar16,0x80005a0);
                        }
                        iVar10 = (*pcVar16)(arg1_00,uVar15 & 0xffffffff);
                        uVar12 = sym.readl_relaxed(iVar10);
                        if ((uVar12 & 1) != 0) {
                            sym.periph_interrupt(arg1_00,uVar15 & 0xffffffff);
                        }
                    }
                }
                uVar11 = uVar11 + 4;
                bVar6 = uVar15 < *(arg1_00 + 0x54);
                uVar15 = uVar15 + 1;
            } while (bVar6);
        }
    }
    else {
        bVar6 = false;
        do {
            pcVar16 = *(iVar14 + 0x28);
            if (4 < (pcVar16 + -0x8002680 >> 3 | pcVar16 << 0x3d)) {
                __cfi_slowpath_diag(0xd1d26d5280905e13,pcVar16,0x8000540);
            }
            iVar10 = (*pcVar16)(arg1_00,uVar1,uVar17 - (uVar2 >> 5));
            uVar8 = sym.readl_relaxed(iVar10);
            bVar7 = uVar8 != 0;
            if (uVar8 != 0) {
                do {
                    uVar3 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
                    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
                    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
                    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                    uVar19 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
                    uVar3 = uVar19 | uVar17 << 5;
                    if ((uVar3 < *(arg1_00 + 0x52)) || (*(arg1_00 + 0x54) < uVar3)) {
                        if ((obj.pmic_arb_chained_irq.__already_done & 1) == 0) {
                            obj.pmic_arb_chained_irq.__already_done = 0x1;
                            __warn_printk("spurious spmi irq received for apid=%d\n",uVar3);
    //WARNING: Does not return
                            pcVar16 = SoftwareBreakpoint(0x800,0x80038f0);
                            (*pcVar16)();
                        }
                    }
                    else {
                        pcVar16 = *(iVar14 + 0x30);
                        if (0xd < (pcVar16 + -0x80026a8 >> 3 | pcVar16 << 0x3d)) {
                            __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar16,0x8000560);
                        }
                        iVar10 = (*pcVar16)(arg1_00,uVar3);
                        uVar11 = sym.readl_relaxed(iVar10);
                        if ((uVar11 & 1) != 0) {
                            sym.periph_interrupt(arg1_00,uVar3);
                        }
                    }
                    uVar8 = uVar8 & (1 << (uVar19 & 0x1f) ^ 0xffffffffU);
                } while (uVar8 != 0);
            }
            bVar6 = bVar7 | bVar6;
            uVar17 = uVar17 + 1;
        } while (uVar17 != uVar5 + 1);
        if (!bVar6) goto code_r0x0800394c;
    }
    pcVar16 = *(iVar18 + 0x50);
    if (pcVar16 == NULL) {
        pcVar16 = *(iVar18 + 0x48);
        if ((pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d) < 3) goto code_r0x08003a9c;
        uVar13 = 0x8000680;
    }
    else {
        if ((pcVar16 + -0x8002730 >> 3 | pcVar16 << 0x3d) < 3) goto code_r0x08003a9c;
        uVar13 = 0x8000660;
    }
    __cfi_slowpath_diag(0x12432ee19d152236,pcVar16,uVar13);
code_r0x08003a9c:
    (*pcVar16)(arg1 + 0x30);
    return;
}


// ===== sym.spmi_pmic_arb_debugfs_init @ 0x08003b5c (size 400) =====

uint64_t sym.spmi_pmic_arb_debugfs_init(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    char *pcVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_38;
    ushort uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_30 = 0;
    uStack_38 = 0;
    scnprintf(&uStack_38,10,"spmi%u",*(*(arg1 + 0xb0) + 0x390));
    uVar7 = debugfs_create_dir(&uStack_38,0);
    if (uVar7 < 0xfffffffffffff001) {
        *(arg1 + 0xe0) = uVar7;
        uVar7 = debugfs_create_dir("address_map",uVar7);
        if (uVar7 < 0xfffffffffffff001) {
            uVar8 = debugfs_create_file_unsafe("spmi_addr",0x180,uVar7,arg1,obj.debug_spmi_addr_fops);
            if (uVar8 < 0xfffffffffffff001) {
                uVar8 = debugfs_create_file_unsafe("soc_addr_start",0x100,uVar7,arg1,obj.debug_soc_start_addr_fops);
                if (uVar8 < 0xfffffffffffff001) {
                    uVar7 = debugfs_create_file_unsafe("soc_addr_end",0x100,uVar7,arg1,obj.debug_soc_end_addr_fops);
                    if (uVar7 < 0xfffffffffffff001) goto code_r0x08003cbc;
                    pcVar10 = "Could not create soc_addr_end debugfs file, rc=%ld\n";
                }
                else {
                    pcVar10 = "Could not create soc_addr_start debugfs file, rc=%ld\n";
                    uVar7 = uVar8;
                }
            }
            else {
                pcVar10 = "Could not create spmi_addr debugfs file, rc=%ld\n";
                uVar7 = uVar8;
            }
        }
        else {
            pcVar10 = "Could not create address_map debugfs directory, rc=%ld\n";
        }
        _dev_err(*(arg1 + 0xb0),pcVar10,uVar7);
        uVar7 = debugfs_remove(*(arg1 + 0xe0));
    }
    else {
        uVar7 = _dev_err(*(arg1 + 0xb0),"Could not create %s debugfs directory, rc=%ld\n",&uStack_38);
    }
code_r0x08003cbc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return uVar7;
    }
    auVar15 = __stack_chk_fail();
    iVar9 = auVar15._0_8_;
    *extraout_x18 = sym.pmic_arb_ppid_to_apid_v1;
    uVar7 = auVar15._8_8_ & 0xffff;
    uVar3 = *(*(iVar9 + 0xc0) + uVar7 * 2);
    if (uVar3 < 0) {
        uVar7 = uVar3 & 0x7fff;
    }
    else {
        uVar6 = 0;
        iVar12 = *(iVar9 + 0x60);
        iVar13 = 0x10;
        do {
            uVar14 = uVar6;
            uVar8 = 1L << (uVar14 & 0x3f);
            puVar1 = iVar9 + (uVar6 >> 3 & 0x1ffffff8) + 0x68;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar11 | uVar8;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar11 & uVar8) == 0) {
                uVar8 = sym.readl_relaxed(*(iVar9 + 0x20) + uVar6 * 4 + 0xb00);
                *(iVar12 + uVar14 * 4) = uVar8;
            }
            else {
                uVar8 = *(iVar12 + uVar14 * 4);
            }
            uVar6 = uVar8;
            if ((uVar7 >> (uVar6 >> 0x12 & 0xf) & 1) == 0) {
                if ((uVar6 >> 0x11 & 1) == 0) {
                    uVar2 = uVar6 >> 9;
                    uVar8 = (uVar8 & 0xffffffff) >> 9;
                    uVar6 = uVar6 >> 9;
                    *(*(iVar9 + 0xc0) + uVar7 * 2) = uVar2 & 0xff | 0x8000;
code_r0x08003e14:
                    *(*(iVar9 + 0xd0) + (uVar8 & 0xff) * 4) = auVar15._8_2_;
                    return uVar6 & 0xff;
                }
                uVar6 = uVar8 >> 9 & 0x7fffff;
            }
            else if ((uVar6 >> 8 & 1) == 0) {
                *(*(iVar9 + 0xc0) + uVar7 * 2) = uVar8 & 0xff | 0x8000;
                goto code_r0x08003e14;
            }
            uVar6 = uVar6 & 0xff;
            iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        uVar7 = 0xffffffed;
    }
    return uVar7;
}


// ===== sym.pmic_arb_ppid_to_apid_v1 @ 0x08003cec (size 364) =====

uint32_t sym.pmic_arb_ppid_to_apid_v1(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    int iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = arg2 & 0xffff;
    uVar3 = *(*(arg1 + 0xc0) + uVar9 * 2);
    if (uVar3 < 0) {
        uVar6 = uVar3 & 0x7fff;
    }
    else {
        uVar6 = 0;
        iVar10 = *(arg1 + 0x60);
        iVar11 = 0x10;
        do {
            uVar12 = uVar6;
            uVar7 = 1L << (uVar12 & 0x3f);
            puVar1 = arg1 + (uVar6 >> 3 & 0x1ffffff8) + 0x68;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar8 = *puVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 | uVar7;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar8 & uVar7) == 0) {
                uVar7 = sym.readl_relaxed(*(arg1 + 0x20) + uVar6 * 4 + 0xb00);
                *(iVar10 + uVar12 * 4) = uVar7;
            }
            else {
                uVar7 = *(iVar10 + uVar12 * 4);
            }
            uVar6 = uVar7;
            if ((uVar9 >> (uVar6 >> 0x12 & 0xf) & 1) == 0) {
                if ((uVar6 >> 0x11 & 1) == 0) {
                    uVar2 = uVar6 >> 9;
                    uVar7 = (uVar7 & 0xffffffff) >> 9;
                    uVar6 = uVar6 >> 9;
                    *(*(arg1 + 0xc0) + uVar9 * 2) = uVar2 & 0xff | 0x8000;
code_r0x08003e14:
                    *(*(arg1 + 0xd0) + (uVar7 & 0xff) * 4) = arg2;
                    return uVar6 & 0xff;
                }
                uVar6 = uVar7 >> 9 & 0x7fffff;
            }
            else if ((uVar6 >> 8 & 1) == 0) {
                *(*(arg1 + 0xc0) + uVar9 * 2) = uVar7 & 0xff | 0x8000;
                goto code_r0x08003e14;
            }
            uVar6 = uVar6 & 0xff;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        uVar6 = 0xffffffed;
    }
    return uVar6;
}


// ===== sym.pmic_arb_offset_v1 @ 0x08003e58 (size 24) =====

int sym.pmic_arb_offset_v1(int64_t arg1)

{
    return *(arg1 + 0x40) * 0x80 + 0x800;
}


// ===== sym.pmic_arb_fmt_cmd_v1 @ 0x08003e70 (size 36) =====

uint32_t sym.pmic_arb_fmt_cmd_v1(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    return arg1 << 0x1b | (arg2 & 0xf) << 0x14 | (arg3 & 0xffff) << 4 | arg4 & 7;
}


// ===== sym.pmic_arb_non_data_cmd_v1 @ 0x08003e94 (size 264) =====

uint64_t sym.pmic_arb_non_data_cmd_v1(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    pcVar4 = *(*(iVar3 + 0xb8) + 0x10);
    if (3 < (pcVar4 + -0x80025e0 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0x2beea59d77764cf2,pcVar4,0x8000360);
    }
    uVar1 = (*pcVar4)(iVar3,arg3 & 0xffffffff,0,0);
    uVar5 = uVar1;
    if (-1 < uVar1) {
        uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x38);
        sym.writel_relaxed(arg2 << 0x1b | (arg3 & 0xf) << 0x14,*(iVar3 + 8) + uVar5);
        uVar5 = sym.pmic_arb_wait_for_done(arg1,*(iVar3 + 8),arg3 & 0xffffffff,0);
        uVar5 = uVar5 & 0xffffffff;
        _raw_spin_unlock_irqrestore(iVar3 + 0x38,uVar2);
    }
    return uVar5;
}


// ===== sym.pmic_arb_owner_acc_status_v1 @ 0x08003f9c (size 28) =====

int64_t sym.pmic_arb_owner_acc_status_v1(int64_t arg1,int64_t arg2,int64_t arg3)

{
    return *(arg1 + 0x18) + (arg2 & 0xffU) * 0x20 + (arg3 & 0xffffU) * 4;
}


// ===== sym.pmic_arb_acc_enable_v1 @ 0x08003fb8 (size 24) =====

int64_t sym.pmic_arb_acc_enable_v1(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x18) + (arg2 & 0xffffU) * 4 + 0x200;
}


// ===== sym.pmic_arb_irq_status_v1 @ 0x08003fd0 (size 24) =====

int64_t sym.pmic_arb_irq_status_v1(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x18) + (arg2 & 0xffffU) * 4 + 0x600;
}


// ===== sym.pmic_arb_irq_clear_v1 @ 0x08003fe8 (size 24) =====

int64_t sym.pmic_arb_irq_clear_v1(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x18) + (arg2 & 0xffffU) * 4 + 0xa00;
}


// ===== sym.pmic_arb_apid_map_offset_v2 @ 0x08004000 (size 24) =====

int sym.pmic_arb_apid_map_offset_v2(int64_t arg1)

{
    return (arg1 & 0xffff) * 4 + 0x800;
}


// ===== sym.pmic_arb_wr_addr_map_v1 @ 0x08004018 (size 44) =====

ulong sym.pmic_arb_wr_addr_map_v1(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0x10) + *(arg1 + 0x40) * 0x80;
    *arg2 = iVar1 + 0x800;
    *(arg2 + 8) = iVar1 + 0x87f;
    return 0;
}


// ===== sym.pmic_arb_wait_for_done @ 0x08004044 (size 424) =====

ulong sym.pmic_arb_wait_for_done(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_w4;
    ulong *in_x18;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    pcVar8 = *(*(iVar3 + 0xb8) + 0x10);
    if (3 < (pcVar8 + -0x80025e0 >> 3 | pcVar8 << 0x3d)) {
        __cfi_slowpath_diag(0x2beea59d77764cf2,pcVar8,0x8000380);
    }
    uVar4 = (*pcVar8)(iVar3,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4);
    if (-1 < uVar4) {
        iVar7 = -1000;
        do {
            uVar2 = sym.readl_relaxed(arg2 + uVar4 + 8);
            uVar6 = arg3;
            uVar5 = arg4;
            if ((uVar2 & 1) != 0) {
                if ((uVar2 >> 2 & 1) != 0) {
                    _dev_err(arg1,"%s: %#x %#x: transaction denied (%#x)\n","pmic_arb_wait_for_done",uVar6 & 0xff,
                             uVar5 & 0xffff,uVar2);
                    return 0xffffffff;
                }
                if ((uVar2 >> 1 & 1) == 0) {
                    if ((uVar2 >> 3 & 1) == 0) {
                        return 0;
                    }
                    _dev_err(arg1,"%s: %#x %#x: transaction dropped (%#x)\n","pmic_arb_wait_for_done",uVar6 & 0xff,
                             uVar5 & 0xffff,uVar2);
                    return 0xfffffffb;
                }
                _dev_err(arg1,"%s: %#x %#x: transaction failed (%#x)\n","pmic_arb_wait_for_done",uVar6 & 0xff,
                         uVar5 & 0xffff,uVar2);
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x800,0x8004190);
                (*pcVar8)();
            }
            __const_udelay(0x10c7);
            bVar1 = iVar7 != -1;
            iVar7 = iVar7 + 1;
        } while (bVar1);
        _dev_err(arg1,"%s: %#x %#x: timeout, status %#x\n","pmic_arb_wait_for_done",uVar6 & 0xff,uVar5 & 0xffff,
                 uVar2);
        uVar4 = 0xffffff92;
    }
    return uVar4;
}


// ===== sym.writel_relaxed @ 0x080041ec (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8004208);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8004230);
    return;
}


// ===== sym.pmic_arb_ppid_to_apid_v2 @ 0x08004264 (size 420) =====

uint32_t sym.pmic_arb_ppid_to_apid_v2(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t arg1_00;
    code *pcVar5;
    ulong *in_x18;
    int16_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint8_t *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(*(arg1 + 0xc0) + (arg2 & 0xffffU) * 2);
    if (iVar6 < 0) {
        uVar3 = iVar6 & 0x7fff;
    }
    else {
        uVar8 = *(arg1 + 200);
        puVar9 = *(arg1 + 0xd0) + uVar8 * 4 + 3;
        while( true ) {
            uVar7 = uVar8;
            pcVar5 = *(*(arg1 + 0xb8) + 0x48);
            if (2 < (pcVar5 + -0x8002718 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x2876ef22d8c5508,pcVar5,0x80003a0);
            }
            uVar4 = (*pcVar5)(uVar8);
            uVar3 = uVar7;
            if (*(arg1 + 0x30) <= (uVar4 & 0xffffffff)) break;
            pcVar5 = *(*(arg1 + 0xb8) + 0x50);
            if (0xd < (pcVar5 + -0x80026a8 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar5,0x80003c0);
            }
            arg1_00 = (*pcVar5)(arg1,uVar8);
            uVar2 = sym.readl_relaxed(arg1_00);
            *puVar9 = uVar2 & 7;
            puVar9[-1] = uVar2 & 7;
            uVar3 = sym.readl_relaxed(*(arg1 + 0x28) + (uVar4 & 0xffffffff));
            if (uVar3 != 0) {
                uVar1 = uVar3 >> 8 & 0xfff;
                uVar3 = uVar7 | 0xffff8000;
                *(*(arg1 + 0xc0) + uVar1 * 2) = uVar3;
                *(puVar9 + -3) = uVar1;
                if (uVar1 == (arg2 & 0xffff)) break;
            }
            uVar8 = uVar7 + 1;
            puVar9 = puVar9 + 4;
        }
        iVar6 = uVar3;
        uVar3 = uVar3 & 0x7fff;
        *(arg1 + 200) = uVar3;
    }
    uVar7 = 0xffffffed;
    if (iVar6 < 0) {
        uVar7 = uVar3;
    }
    return uVar7;
}


// ===== sym.pmic_arb_offset_v2 @ 0x08004408 (size 72) =====

uint64_t sym.pmic_arb_offset_v2(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.pmic_arb_ppid_to_apid_v2(arg1,(in_x1 << 0x20 | arg2 << 0x10) >> 0x18 & 0xffffffff);
    if (-1 < uVar1) {
        uVar1 = (uVar1 & 0xffff) * 0x8000 + *(arg1 + 0x48) * 0x1000;
    }
    return uVar1;
}


// ===== sym.pmic_arb_fmt_cmd_v2 @ 0x08004450 (size 28) =====

uint32_t sym.pmic_arb_fmt_cmd_v2(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    return (arg2 & 0xff) << 4 | arg1 << 0x1b | arg3 & 7;
}


// ===== sym.pmic_arb_non_data_cmd_v2 @ 0x0800446c (size 16) =====

ulong sym.pmic_arb_non_data_cmd_v2(void)

{
    return 0xffffffa1;
}


// ===== sym.pmic_arb_owner_acc_status_v2 @ 0x0800447c (size 32) =====

int64_t sym.pmic_arb_owner_acc_status_v2(int64_t arg1,int64_t arg2,int64_t arg3)

{
    return *(arg1 + 0x18) + (arg2 & 0xffU) * 0x1000 + (arg3 & 0xffffU) * 4 + 0x100000;
}


// ===== sym.pmic_arb_acc_enable_v2 @ 0x0800449c (size 24) =====

int64_t sym.pmic_arb_acc_enable_v2(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x18) + (arg2 & 0xffffU) * 0x1000;
}


// ===== sym.pmic_arb_irq_status_v2 @ 0x080044b4 (size 28) =====

int64_t sym.pmic_arb_irq_status_v2(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x18) + (arg2 & 0xffffU) * 0x1000 + 4;
}


// ===== sym.pmic_arb_irq_clear_v2 @ 0x080044d0 (size 28) =====

int64_t sym.pmic_arb_irq_clear_v2(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x18) + (arg2 & 0xffffU) * 0x1000 + 8;
}


// ===== sym.pmic_arb_apid_owner_v2 @ 0x080044ec (size 24) =====

int64_t sym.pmic_arb_apid_owner_v2(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x20) + (arg2 & 0xffffU) * 4 + 0x700;
}


// ===== sym.pmic_arb_wr_addr_map_v2 @ 0x08004504 (size 100) =====

ulong sym.pmic_arb_wr_addr_map_v2(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = sym.pmic_arb_ppid_to_apid_v2(arg1,(in_x1 << 0x20 | arg2 << 0x10) >> 0x18 & 0xffffffff);
    iVar2 = uVar3;
    if (-1 < iVar2) {
        uVar3 = 0;
        iVar1 = *(arg1 + 0x10) + (iVar2 << 0xf & 0x7fff8000) + *(arg1 + 0x48) * 0x1000;
        *arg3 = iVar1;
        *(arg3 + 8) = iVar1 + 0xfff;
    }
    return uVar3;
}


// ===== sym.pmic_arb_owner_acc_status_v3 @ 0x08004568 (size 32) =====

int64_t sym.pmic_arb_owner_acc_status_v3(int64_t arg1,int64_t arg2,int64_t arg3)

{
    return *(arg1 + 0x18) + (arg2 & 0xffU) * 0x1000 + (arg3 & 0xffffU) * 4 + 0x200000;
}


// ===== sym.pmic_arb_ppid_to_apid_v5 @ 0x08004588 (size 44) =====

uint32_t sym.pmic_arb_ppid_to_apid_v5(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    
    uVar2 = *(*(arg1 + 0xc0) + (arg2 & 0xffffU) * 2);
    uVar1 = 0xffffffed;
    if (uVar2 < 0) {
        uVar1 = uVar2 & 0x7fff;
    }
    return uVar1;
}


// ===== sym.pmic_arb_offset_v5 @ 0x080045b4 (size 184) =====

int sym.pmic_arb_offset_v5(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xff;
    uVar3 = *(*(arg1 + 0xc0) + (uVar1 << 8 | arg3 >> 8 & 0xff) * 2);
    uVar2 = uVar3 & 0x7fff;
    iVar4 = -0x13;
    if (uVar3 < 0) {
        if (arg4 == 0) {
            if (*(*(arg1 + 0xd0) + uVar2 * 4 + 2) == *(arg1 + 0x48)) {
                iVar4 = uVar2 << 0x10;
            }
            else {
                _dev_err(*(arg1 + 0xb0),"disallowed SPMI write to sid=%u, addr=0x%04X\n",uVar1,arg3 & 0xffff);
                iVar4 = -1;
            }
        }
        else if (arg4 == 1) {
            iVar4 = uVar2 * 0x80 + *(arg1 + 0x48) * 0x10000;
        }
        else {
            iVar4 = 0;
        }
    }
    return iVar4;
}


// ===== sym.pmic_arb_owner_acc_status_v5 @ 0x0800466c (size 28) =====

int64_t sym.pmic_arb_owner_acc_status_v5(int64_t arg1,int64_t arg2,int64_t arg3)

{
    return *(arg1 + 0x18) + (arg2 & 0xffU) * 0x10000 + (arg3 & 0xffffU) * 4;
}


// ===== sym.pmic_arb_acc_enable_v5 @ 0x08004688 (size 28) =====

int64_t sym.pmic_arb_acc_enable_v5(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 8) + (arg2 << 0x10) + 0x100;
}


// ===== sym.pmic_arb_irq_status_v5 @ 0x080046a4 (size 28) =====

int64_t sym.pmic_arb_irq_status_v5(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 8) + (arg2 << 0x10) + 0x104;
}


// ===== sym.pmic_arb_irq_clear_v5 @ 0x080046c0 (size 28) =====

int64_t sym.pmic_arb_irq_clear_v5(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 8) + (arg2 << 0x10) + 0x108;
}


// ===== sym.pmic_arb_apid_map_offset_v5 @ 0x080046dc (size 24) =====

int sym.pmic_arb_apid_map_offset_v5(int64_t arg1)

{
    return (arg1 & 0xffff) * 4 + 0x900;
}


// ===== sym.pmic_arb_wr_addr_map_v5 @ 0x080046f4 (size 168) =====

uint sym.pmic_arb_wr_addr_map_v5(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    uint uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg2 & 0xff;
    uVar4 = *(*(arg1 + 0xc0) + (uVar2 << 8 | arg3 >> 8 & 0xff) * 2);
    uVar3 = uVar4 & 0x7fff;
    uVar5 = 0xffffffed;
    if (uVar4 < 0) {
        if (*(*(arg1 + 0xd0) + uVar3 * 4 + 2) == *(arg1 + 0x48)) {
            uVar5 = 0;
            iVar1 = *(arg1 + 0x10) + (uVar3 << 0x10);
            *arg4 = iVar1;
            *(arg4 + 8) = iVar1 + 0xffff;
        }
        else {
            _dev_err(*(arg1 + 0xb0),"disallowed SPMI write to sid=%u, addr=0x%04X\n",uVar2,arg3 & 0xffff);
            uVar5 = 0xffffffff;
        }
    }
    return uVar5;
}


// ===== sym.pmic_arb_offset_v7 @ 0x0800479c (size 276) =====

uint64_t sym.pmic_arb_offset_v7(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xff;
    pcVar4 = *(*(arg1 + 0xb8) + 8);
    if (2 < (pcVar4 + -0x8002748 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar4,0x80003e0);
    }
    uVar3 = (*pcVar4)(arg1,uVar1 << 8 | arg3 >> 8 & 0xff);
    uVar2 = uVar3;
    if (-1 < uVar2) {
        if (arg4 == 0) {
            if (*(*(arg1 + 0xd0) + (uVar2 & 0xffff) * 4 + 2) == *(arg1 + 0x48)) {
                uVar3 = (uVar2 & 0xffff) << 0xc;
            }
            else {
                _dev_err(*(arg1 + 0xb0),"disallowed SPMI write to sid=%u, addr=0x%04X\n",uVar1,arg3 & 0xffff);
                uVar3 = 0xffffffff;
            }
        }
        else if (arg4 == 1) {
            uVar3 = (uVar2 & 0xffff) * 0x20 + *(arg1 + 0x48) * 0x8000;
        }
        else {
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.pmic_arb_owner_acc_status_v7 @ 0x080048b0 (size 28) =====

int64_t sym.pmic_arb_owner_acc_status_v7(int64_t arg1,int64_t arg2,int64_t arg3)

{
    return *(arg1 + 0x18) + (arg2 & 0xffU) * 0x1000 + (arg3 & 0xffffU) * 4;
}


// ===== sym.pmic_arb_acc_enable_v7 @ 0x080048cc (size 28) =====

int64_t sym.pmic_arb_acc_enable_v7(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 8) + (arg2 & 0xffffU) * 0x1000 + 0x100;
}


// ===== sym.pmic_arb_irq_status_v7 @ 0x080048e8 (size 28) =====

int64_t sym.pmic_arb_irq_status_v7(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 8) + (arg2 & 0xffffU) * 0x1000 + 0x104;
}


// ===== sym.pmic_arb_irq_clear_v7 @ 0x08004904 (size 28) =====

int64_t sym.pmic_arb_irq_clear_v7(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 8) + (arg2 & 0xffffU) * 0x1000 + 0x108;
}


// ===== sym.pmic_arb_apid_map_offset_v7 @ 0x08004920 (size 24) =====

int sym.pmic_arb_apid_map_offset_v7(int64_t arg1)

{
    return (arg1 & 0xffff) * 4 + 0x2000;
}


// ===== sym.pmic_arb_apid_owner_v7 @ 0x08004938 (size 36) =====

int64_t sym.pmic_arb_apid_owner_v7(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x20) + ((arg2 & 0xffff) - *(arg1 + 0x56)) * 4;
}


// ===== sym.pmic_arb_wr_addr_map_v7 @ 0x0800495c (size 260) =====

ulong sym.pmic_arb_wr_addr_map_v7(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg2 & 0xff;
    pcVar5 = *(*(arg1 + 0xb8) + 8);
    if (2 < (pcVar5 + -0x8002748 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar5,0x80003e0);
    }
    uVar4 = (*pcVar5)(arg1,uVar2 << 8 | arg3 >> 8 & 0xff);
    uVar3 = uVar4;
    if (-1 < uVar3) {
        if (*(*(arg1 + 0xd0) + (uVar3 & 0xffff) * 4 + 2) == *(arg1 + 0x48)) {
            uVar4 = 0;
            iVar1 = *(arg1 + 0x10) + ((uVar3 & 0xffff) << 0xc);
            *arg4 = iVar1;
            *(arg4 + 8) = iVar1 + 0xfff;
        }
        else {
            _dev_err(*(arg1 + 0xb0),"disallowed SPMI write to sid=%u, addr=0x%04X\n",uVar2,arg3 & 0xffff);
            uVar4 = 0xffffffff;
        }
    }
    return uVar4;
}


// ===== sym.qpnpint_irq_domain_alloc @ 0x08004a60 (size 256) =====

uint64_t sym.qpnpint_irq_domain_alloc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t extraout_x1;
    uint64_t *arg3_00;
    uint32_t *arg4_00;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    code *pcVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar7 = *(arg1 + 0x20);
    iStack_60 = 0;
    uStack_64 = 0;
    uVar4 = sym.qpnpint_irq_domain_translate(arg1,arg4,&iStack_60,&uStack_64);
    iVar5 = iStack_60;
    if (uVar4 == 0) {
        pcVar10 = sym.handle_level_irq.cfi_jt;
        if ((uStack_64 & 3) != 0) {
            pcVar10 = sym.handle_edge_irq.cfi_jt;
        }
        if (arg3 != 0) {
            iVar3 = 0;
            do {
                irq_domain_set_info(arg1,arg2 + iVar3,iVar5 + iVar3,obj.pmic_arb_irqchip,uVar7,pcVar10,0,0);
                iVar3 = iVar3 + 1;
            } while (arg3 != iVar3);
        }
        uVar4 = 0;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        __stack_chk_fail(uVar4);
        *extraout_x18 = sym.qpnpint_irq_domain_activate;
        iVar5 = sp_el0;
        iVar5 = *(iVar5 + 0x5e0);
        iVar6 = *(extraout_x1 + 0x30);
        uVar4 = *(extraout_x1 + 8);
        if (*(*(iVar6 + 0xd0) + (uVar4 & 0x3ff) * 4 + 3) == *(iVar6 + 0x48)) {
            if (((*(iVar6 + 0x50) != '\x16') &&
                (iVar3 = sym.pmic_arb_write_cmd
                                   (*(iVar6 + 0xb0),0x30,uVar4 >> 0x1c & 0xf,uVar4 >> 0xc & 0xffffff00 | 0x1a),
                iVar3 != 0)) && (iVar3 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar3 != 0)) {
                _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(extraout_x1 + 4));
            }
            iVar6 = *(extraout_x1 + 0x30);
            iVar3 = sym.pmic_arb_write_cmd
                              (*(iVar6 + 0xb0),0x30,*(extraout_x1 + 8) >> 0x1c & 0xf,
                               *(extraout_x1 + 8) >> 0xc & 0xffffff00 | 0x16);
            if ((iVar3 != 0) && (iVar3 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar3 != 0)) {
                _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(extraout_x1 + 4));
            }
            iVar6 = *(extraout_x1 + 0x30);
            arg3_00 = *(extraout_x1 + 8) >> 0x1c & 0xf;
            arg4_00 = *(extraout_x1 + 8) >> 0xc & 0xffffff00 | 0x14;
            uVar4 = sym.pmic_arb_write_cmd(*(iVar6 + 0xb0),0x30,arg3_00,arg4_00);
            if ((uVar4 != 0) && (uVar4 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), uVar4 != 0)) {
                arg3_00 = *(extraout_x1 + 4);
                _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n");
                uVar4 = 0;
            }
        }
        else {
            arg4_00 = uVar4 >> 0x14 & 0xff;
            arg3_00 = uVar4 >> 0x1c & 0xf;
            _dev_err(*(iVar6 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u: ee=%u but owner=%u\n",arg3_00
                     ,arg4_00,uVar4 >> 0x10 & 7);
            uVar4 = 0xffffffed;
        }
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) != iVar5) {
            auVar11 = __stack_chk_fail(uVar4);
            iVar6 = auVar11._8_8_;
            *extraout_x18_00 = sym.qpnpint_irq_domain_translate;
            iVar5 = 0;
            uVar4 = *(auVar11._0_8_ + 0x30);
            iVar8 = *(auVar11._0_8_ + 0x20);
            if (((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) && (iVar5 = uVar4 - 0x18, *(uVar4 + 8) != of_fwnode_ops)
               ) {
                iVar5 = 0;
            }
            if (((iVar5 == *(*(iVar8 + 0xb0) + 0x2f0)) && (*(iVar6 + 8) == 4)) &&
               ((uVar1 = *(iVar6 + 0xc), uVar1 < 0x10 &&
                ((uVar2 = *(iVar6 + 0x10), uVar2 < 0x100 && (*(iVar6 + 0x14) < 8)))))) {
                pcVar10 = *(*(iVar8 + 0xb8) + 8);
                if (2 < (pcVar10 + -0x8002748 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar10,0x8000520);
                }
                uVar4 = (*pcVar10)(iVar8,uVar2 | uVar1 << 8);
                uVar9 = uVar4 & 0xffffffff;
                if (uVar4 < 0) {
                    _dev_err(*(iVar8 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u rc = %d\n",
                             *(iVar6 + 0xc),*(iVar6 + 0x10),*(iVar6 + 0x14),uVar9);
                }
                else {
                    uVar1 = uVar4 & 0xffff;
                    if (*(iVar8 + 0x54) < uVar1) {
                        *(iVar8 + 0x54) = uVar4;
                    }
                    if (uVar1 < *(iVar8 + 0x52)) {
                        *(iVar8 + 0x52) = uVar4;
                    }
                    uVar9 = 0;
                    *arg3_00 = *(iVar6 + 0x10) << 0x14 & 0xff00000 | *(iVar6 + 0xc) << 0x1c |
                               *(iVar6 + 0x14) << 0x10 & 0x70000 | uVar4 & 0x3ff;
                    *arg4_00 = *(iVar6 + 0x18) & 0xf;
                }
            }
            else {
                uVar9 = 0xffffffea;
            }
            return uVar9;
        }
        return uVar4;
    }
    return uVar4;
}


// ===== sym.qpnpint_irq_domain_activate @ 0x08004b60 (size 480) =====

uint64_t sym.qpnpint_irq_domain_activate(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t *arg3;
    uint32_t *arg4;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar4 = *(iVar4 + 0x5e0);
    iVar6 = *(arg1 + 0x30);
    uVar5 = *(arg1 + 8);
    if (*(*(iVar6 + 0xd0) + (uVar5 & 0x3ff) * 4 + 3) == *(iVar6 + 0x48)) {
        if (((*(iVar6 + 0x50) != '\x16') &&
            (iVar3 = sym.pmic_arb_write_cmd
                               (*(iVar6 + 0xb0),0x30,uVar5 >> 0x1c & 0xf,uVar5 >> 0xc & 0xffffff00 | 0x1a),
            iVar3 != 0)) && (iVar3 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar3 != 0)) {
            _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(arg1 + 4));
        }
        iVar6 = *(arg1 + 0x30);
        iVar3 = sym.pmic_arb_write_cmd
                          (*(iVar6 + 0xb0),0x30,*(arg1 + 8) >> 0x1c & 0xf,*(arg1 + 8) >> 0xc & 0xffffff00 | 0x16);
        if ((iVar3 != 0) && (iVar3 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar3 != 0)) {
            _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(arg1 + 4));
        }
        iVar6 = *(arg1 + 0x30);
        arg3 = *(arg1 + 8) >> 0x1c & 0xf;
        arg4 = *(arg1 + 8) >> 0xc & 0xffffff00 | 0x14;
        uVar5 = sym.pmic_arb_write_cmd(*(iVar6 + 0xb0),0x30,arg3,arg4);
        if ((uVar5 != 0) && (uVar5 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), uVar5 != 0)) {
            arg3 = *(arg1 + 4);
            _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n");
            uVar5 = 0;
        }
    }
    else {
        arg4 = uVar5 >> 0x14 & 0xff;
        arg3 = uVar5 >> 0x1c & 0xf;
        _dev_err(*(iVar6 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u: ee=%u but owner=%u\n",arg3,arg4
                 ,uVar5 >> 0x10 & 7);
        uVar5 = 0xffffffed;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iVar4) {
        auVar10 = __stack_chk_fail(uVar5);
        iVar6 = auVar10._8_8_;
        *extraout_x18 = sym.qpnpint_irq_domain_translate;
        iVar4 = 0;
        uVar5 = *(auVar10._0_8_ + 0x30);
        iVar7 = *(auVar10._0_8_ + 0x20);
        if (((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) && (iVar4 = uVar5 - 0x18, *(uVar5 + 8) != of_fwnode_ops)) {
            iVar4 = 0;
        }
        if (((iVar4 == *(*(iVar7 + 0xb0) + 0x2f0)) && (*(iVar6 + 8) == 4)) &&
           ((uVar1 = *(iVar6 + 0xc), uVar1 < 0x10 &&
            ((uVar2 = *(iVar6 + 0x10), uVar2 < 0x100 && (*(iVar6 + 0x14) < 8)))))) {
            pcVar9 = *(*(iVar7 + 0xb8) + 8);
            if (2 < (pcVar9 + -0x8002748 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar9,0x8000520);
            }
            uVar5 = (*pcVar9)(iVar7,uVar2 | uVar1 << 8);
            uVar8 = uVar5 & 0xffffffff;
            if (uVar5 < 0) {
                _dev_err(*(iVar7 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u rc = %d\n",*(iVar6 + 0xc)
                         ,*(iVar6 + 0x10),*(iVar6 + 0x14),uVar8);
            }
            else {
                uVar1 = uVar5 & 0xffff;
                if (*(iVar7 + 0x54) < uVar1) {
                    *(iVar7 + 0x54) = uVar5;
                }
                if (uVar1 < *(iVar7 + 0x52)) {
                    *(iVar7 + 0x52) = uVar5;
                }
                uVar8 = 0;
                *arg3 = *(iVar6 + 0x10) << 0x14 & 0xff00000 | *(iVar6 + 0xc) << 0x1c | *(iVar6 + 0x14) << 0x10 & 0x70000
                        | uVar5 & 0x3ff;
                *arg4 = *(iVar6 + 0x18) & 0xf;
            }
        }
        else {
            uVar8 = 0xffffffea;
        }
        return uVar8;
    }
    return uVar5;
}


// ===== sym.qpnpint_irq_domain_translate @ 0x08004d40 (size 416) =====

uint64_t sym.qpnpint_irq_domain_translate(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    uVar4 = *(arg1 + 0x30);
    iVar5 = *(arg1 + 0x20);
    if (((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) && (iVar3 = uVar4 - 0x18, *(uVar4 + 8) != of_fwnode_ops)) {
        iVar3 = 0;
    }
    if (((iVar3 == *(*(iVar5 + 0xb0) + 0x2f0)) && (*(arg2 + 8) == 4)) &&
       ((uVar1 = *(arg2 + 0xc), uVar1 < 0x10 && ((uVar2 = *(arg2 + 0x10), uVar2 < 0x100 && (*(arg2 + 0x14) < 8)))))) {
        pcVar7 = *(*(iVar5 + 0xb8) + 8);
        if (2 < (pcVar7 + -0x8002748 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0x1d3ff83f06011f50,pcVar7,0x8000520);
        }
        uVar4 = (*pcVar7)(iVar5,uVar2 | uVar1 << 8);
        uVar6 = uVar4 & 0xffffffff;
        if (uVar4 < 0) {
            _dev_err(*(iVar5 + 0xb0),"failed to xlate sid = %#x, periph = %#x, irq = %u rc = %d\n",*(arg2 + 0xc),
                     *(arg2 + 0x10),*(arg2 + 0x14),uVar6);
        }
        else {
            uVar1 = uVar4 & 0xffff;
            if (*(iVar5 + 0x54) < uVar1) {
                *(iVar5 + 0x54) = uVar4;
            }
            if (uVar1 < *(iVar5 + 0x52)) {
                *(iVar5 + 0x52) = uVar4;
            }
            uVar6 = 0;
            *arg3 = *(arg2 + 0x10) << 0x14 & 0xff00000 | *(arg2 + 0xc) << 0x1c | *(arg2 + 0x14) << 0x10 & 0x70000 |
                    uVar4 & 0x3ff;
            *arg4 = *(arg2 + 0x18) & 0xf;
        }
    }
    else {
        uVar6 = 0xffffffea;
    }
    return uVar6;
}


// ===== sym.qpnpint_irq_ack @ 0x08004ee0 (size 312) =====

void sym.qpnpint_irq_ack(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 0x30);
    uVar7 = *(arg1 + 8);
    pcVar4 = *(*(iVar2 + 0xb8) + 0x40);
    if (0xd < (pcVar4 + -0x80026a8 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar4,0x80004e0);
    }
    iVar2 = (*pcVar4)(iVar2,uVar7 & 0x3ff);
    sym.writel_relaxed(1L << (uVar7 >> 0x10 & 7) & 0xffffffff,iVar2);
    iVar2 = *(arg1 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar2 + 0xb0),0x30,*(arg1 + 8) >> 0x1c & 0xf,*(arg1 + 8) >> 0xc & 0xffffff00 | 0x14);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(arg1 + 4));
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar3) {
        return;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.qpnpint_irq_mask;
    iVar2 = sp_el0;
    iVar2 = *(iVar2 + 0x5e0);
    iVar5 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar5 + 0xb0),0x30,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x16);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar5 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iVar2) {
        return;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.qpnpint_irq_unmask;
    iVar2 = sp_el0;
    iVar5 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar3 + 0x30);
    uVar6 = *(iVar3 + 8);
    pcVar4 = *(*(iVar2 + 0xb8) + 0x30);
    if (0xd < (pcVar4 + -0x80026a8 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar4,0x8000500);
    }
    iVar2 = (*pcVar4)(iVar2,uVar6 & 0x3ff);
    sym.writel_relaxed(1,iVar2);
    iVar2 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar2 + 0xb0),0x38,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x15);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    iVar2 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar2 + 0xb0),0x30,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x14);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar5) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    *extraout_x18_01 = sym.qpnpint_irq_set_type;
    iVar2 = sp_el0;
    iVar5 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar3 + 0x30) + 0x3c;
    uVar6 = _raw_spin_lock_irqsave(iVar2);
    iVar8 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar8 + 0xb0),0x38,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar8 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    if ((auVar9._8_8_ & 3) == 0) {
        if ((~auVar9._8_4_ & 0xc) == 0) {
            _raw_spin_unlock_irqrestore(iVar2,uVar6);
            uVar6 = 0xffffffea;
            goto code_r0x08005468;
        }
        pcVar4 = sym.handle_level_irq.cfi_jt;
    }
    else {
        pcVar4 = sym.handle_edge_irq.cfi_jt;
    }
    iVar8 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar8 + 0xb0),0x30,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar8 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    _raw_spin_unlock_irqrestore(iVar2,uVar6);
    uVar6 = 0;
    *(*(iVar3 + 0x10) + 0x70) = pcVar4;
code_r0x08005468:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar5) {
        iVar2 = __stack_chk_fail(uVar6);
        *extraout_x18_02 = sym.qpnpint_irq_set_wake;
        irq_set_irq_wake(*(*(iVar2 + 0x30) + 0x44));
        return;
    }
    return;
}


// ===== sym.qpnpint_irq_mask @ 0x08005018 (size 200) =====

void sym.qpnpint_irq_mask(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar4;
    ulong uVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar2 = *(iVar2 + 0x5e0);
    iVar4 = *(arg1 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar4 + 0xb0),0x30,*(arg1 + 8) >> 0x1c & 0xf,*(arg1 + 8) >> 0xc & 0xffffff00 | 0x16);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar4 + 0xb0),"failed irqchip transaction on %x\n",*(arg1 + 4));
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iVar2) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qpnpint_irq_unmask;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar4 + 0x30);
    uVar5 = *(iVar4 + 8);
    pcVar6 = *(*(iVar2 + 0xb8) + 0x30);
    if (0xd < (pcVar6 + -0x80026a8 >> 3 | pcVar6 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar6,0x8000500);
    }
    iVar2 = (*pcVar6)(iVar2,uVar5 & 0x3ff);
    sym.writel_relaxed(1,iVar2);
    iVar2 = *(iVar4 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar2 + 0xb0),0x38,*(iVar4 + 8) >> 0x1c & 0xf,*(iVar4 + 8) >> 0xc & 0xffffff00 | 0x15);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(iVar4 + 4));
    }
    iVar2 = *(iVar4 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar2 + 0xb0),0x30,*(iVar4 + 8) >> 0x1c & 0xf,*(iVar4 + 8) >> 0xc & 0xffffff00 | 0x14);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(iVar4 + 4));
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar3) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18_00 = sym.qpnpint_irq_set_type;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar4 + 0x30) + 0x3c;
    uVar5 = _raw_spin_lock_irqsave(iVar2);
    iVar7 = *(iVar4 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar7 + 0xb0),0x38,*(iVar4 + 8) >> 0x1c & 0xf,*(iVar4 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar7 + 0xb0),"failed irqchip transaction on %x\n",*(iVar4 + 4));
    }
    if ((auVar8._8_8_ & 3) == 0) {
        if ((~auVar8._8_4_ & 0xc) == 0) {
            _raw_spin_unlock_irqrestore(iVar2,uVar5);
            uVar5 = 0xffffffea;
            goto code_r0x08005468;
        }
        pcVar6 = sym.handle_level_irq.cfi_jt;
    }
    else {
        pcVar6 = sym.handle_edge_irq.cfi_jt;
    }
    iVar7 = *(iVar4 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar7 + 0xb0),0x30,*(iVar4 + 8) >> 0x1c & 0xf,*(iVar4 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar7 + 0xb0),"failed irqchip transaction on %x\n",*(iVar4 + 4));
    }
    _raw_spin_unlock_irqrestore(iVar2,uVar5);
    uVar5 = 0;
    *(*(iVar4 + 0x10) + 0x70) = pcVar6;
code_r0x08005468:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar3) {
        iVar2 = __stack_chk_fail(uVar5);
        *extraout_x18_01 = sym.qpnpint_irq_set_wake;
        irq_set_irq_wake(*(*(iVar2 + 0x30) + 0x44));
        return;
    }
    return;
}


// ===== sym.qpnpint_irq_unmask @ 0x080050e0 (size 436) =====

void sym.qpnpint_irq_unmask(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar3 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 0x30);
    uVar5 = *(arg1 + 8);
    pcVar6 = *(*(iVar2 + 0xb8) + 0x30);
    if (0xd < (pcVar6 + -0x80026a8 >> 3 | pcVar6 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar6,0x8000500);
    }
    iVar2 = (*pcVar6)(iVar2,uVar5 & 0x3ff);
    sym.writel_relaxed(1,iVar2);
    iVar2 = *(arg1 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar2 + 0xb0),0x38,*(arg1 + 8) >> 0x1c & 0xf,*(arg1 + 8) >> 0xc & 0xffffff00 | 0x15);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(arg1 + 4));
    }
    iVar2 = *(arg1 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar2 + 0xb0),0x30,*(arg1 + 8) >> 0x1c & 0xf,*(arg1 + 8) >> 0xc & 0xffffff00 | 0x14);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar2 + 0xb0),"failed irqchip transaction on %x\n",*(arg1 + 4));
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar3) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar3 = auVar8._0_8_;
    *extraout_x18 = sym.qpnpint_irq_set_type;
    iVar2 = sp_el0;
    iVar4 = *(iVar2 + 0x5e0);
    iVar2 = *(iVar3 + 0x30) + 0x3c;
    uVar5 = _raw_spin_lock_irqsave(iVar2);
    iVar7 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar7 + 0xb0),0x38,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar7 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    if ((auVar8._8_8_ & 3) == 0) {
        if ((~auVar8._8_4_ & 0xc) == 0) {
            _raw_spin_unlock_irqrestore(iVar2,uVar5);
            uVar5 = 0xffffffea;
            goto code_r0x08005468;
        }
        pcVar6 = sym.handle_level_irq.cfi_jt;
    }
    else {
        pcVar6 = sym.handle_edge_irq.cfi_jt;
    }
    iVar7 = *(iVar3 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar7 + 0xb0),0x30,*(iVar3 + 8) >> 0x1c & 0xf,*(iVar3 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar7 + 0xb0),"failed irqchip transaction on %x\n",*(iVar3 + 4));
    }
    _raw_spin_unlock_irqrestore(iVar2,uVar5);
    uVar5 = 0;
    *(*(iVar3 + 0x10) + 0x70) = pcVar6;
code_r0x08005468:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar4) {
        iVar2 = __stack_chk_fail(uVar5);
        *extraout_x18_00 = sym.qpnpint_irq_set_wake;
        irq_set_irq_wake(*(*(iVar2 + 0x30) + 0x44));
        return;
    }
    return;
}


// ===== sym.qpnpint_irq_set_type @ 0x08005294 (size 572) =====

void sym.qpnpint_irq_set_type(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar4 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 0x30) + 0x3c;
    uVar2 = _raw_spin_lock_irqsave(iVar3);
    iVar6 = *(arg1 + 0x30);
    iVar1 = sym.pmic_arb_read_cmd
                      (*(iVar6 + 0xb0),0x38,*(arg1 + 8) >> 0x1c & 0xf,*(arg1 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar1 != 0)) {
        _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(arg1 + 4));
    }
    if ((arg2 & 3U) == 0) {
        if ((~arg2 & 0xc) == 0) {
            _raw_spin_unlock_irqrestore(iVar3,uVar2);
            uVar2 = 0xffffffea;
            goto code_r0x08005468;
        }
        pcVar5 = sym.handle_level_irq.cfi_jt;
    }
    else {
        pcVar5 = sym.handle_edge_irq.cfi_jt;
    }
    iVar6 = *(arg1 + 0x30);
    iVar1 = sym.pmic_arb_write_cmd
                      (*(iVar6 + 0xb0),0x30,*(arg1 + 8) >> 0x1c & 0xf,*(arg1 + 8) >> 0xc & 0xffffff00 | 0x11);
    if ((iVar1 != 0) && (iVar1 = ___ratelimit(obj.qpnpint_spmi_write._rs,"qpnpint_spmi_write"), iVar1 != 0)) {
        _dev_err(*(iVar6 + 0xb0),"failed irqchip transaction on %x\n",*(arg1 + 4));
    }
    _raw_spin_unlock_irqrestore(iVar3,uVar2);
    uVar2 = 0;
    *(*(arg1 + 0x10) + 0x70) = pcVar5;
code_r0x08005468:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iVar4) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.qpnpint_irq_set_wake;
    irq_set_irq_wake(*(*(iVar3 + 0x30) + 0x44));
    return;
}


// ===== sym.qpnpint_irq_set_wake @ 0x080054d0 (size 44) =====

void sym.qpnpint_irq_set_wake(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    irq_set_irq_wake(*(*(arg1 + 0x30) + 0x44));
    return;
}


// ===== sym.qpnpint_get_irqchip_state @ 0x080054fc (size 240) =====

void sym.qpnpint_get_irqchip_state(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar10;
    int64_t iVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    int iStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar8 = *(iVar8 + 0x5e0);
    uVar9 = *(arg1 + 8);
    if (arg2 == 3) {
        iVar11 = *(arg1 + 0x30);
        iVar4 = sym.pmic_arb_read_cmd(*(iVar11 + 0xb0),0x38,uVar9 >> 0x1c & 0xf,uVar9 >> 0xc & 0xffffff00 | 0x10);
        if ((iVar4 != 0) && (iVar4 = ___ratelimit(obj.qpnpint_spmi_read._rs,"qpnpint_spmi_read"), iVar4 != 0)) {
            _dev_err(*(iVar11 + 0xb0),"failed irqchip transaction on %x\n",*(arg1 + 4));
        }
        uVar6 = 0;
        *arg3 = 0U >> (uVar9 >> 0x10 & 7) & 1;
    }
    else {
        uVar6 = 0xffffffea;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iVar8) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar6);
    iVar11 = auVar14._0_8_;
    *extraout_x18 = sym.periph_interrupt;
    pcStack_98 = sym.periph_interrupt;
    iVar8 = sp_el0;
    uVar9 = auVar14._8_8_ & 0xffffffff;
    iStack_a8 = *(iVar8 + 0x5e0);
    pcVar10 = *(*(iVar11 + 0xb8) + 0x38);
    iVar8 = (auVar14._8_8_ & 0xffff) * 4;
    uVar1 = *(*(iVar11 + 0xd0) + iVar8);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (0xd < (pcVar10 + -0x80026a8 >> 3 | pcVar10 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar10,0x8000620);
    }
    iVar7 = (*pcVar10)(iVar11,uVar9);
    uVar5 = sym.readl_relaxed(iVar7);
    if (uVar5 != 0) {
        do {
            while( true ) {
                uVar3 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
                uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
                uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
                uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                iVar13 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
                uVar12 = iVar13;
                iStack_ac = 0;
                uVar3 = 1 << (uVar12 & 0x1f);
                uVar5 = uVar5 & (uVar3 ^ 0xffffffff);
                iVar7 = __irq_resolve_mapping
                                  (*(iVar11 + 0xa8),
                                   (uVar12 & 7) << 0x10 | (uVar1 & 0xff) << 0x14 | (uVar1 >> 8) << 0x1c |
                                   auVar14._8_4_ & 0x3ff,&iStack_ac);
                if ((iVar7 != 0) && (iStack_ac != 0)) break;
                uVar2 = *(*(iVar11 + 0xd0) + iVar8);
                iVar4 = ___ratelimit(obj.cleanup_irq._rs,"cleanup_irq");
                if (iVar4 != 0) {
                    _dev_err(*(iVar11 + 0xb0),"%s apid=%d sid=0x%x per=0x%x irq=%d\n","cleanup_irq",
                             auVar14._8_4_ & 0xffff,uVar2 >> 8,uVar2 & 0xff,iVar13);
                }
                pcVar10 = *(*(iVar11 + 0xb8) + 0x40);
                if (0xd < (pcVar10 + -0x80026a8 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar10,0x8000640);
                }
                iVar7 = (*pcVar10)(iVar11,uVar9);
                sym.writel_relaxed(uVar3 & 0xff,iVar7);
                if (uVar5 == 0) goto code_r0x08005788;
            }
            generic_handle_irq();
        } while (uVar5 != 0);
    }
code_r0x08005788:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_a8) {
        auVar14 = __stack_chk_fail();
        *extraout_x18_00 = sym.debug_spmi_addr_fops_open;
        simple_attr_open(auVar14._0_8_,auVar14._8_8_,sym.debug_spmi_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,
                         sym.debug_spmi_addr_set.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,"0x%05llX\n");
        return;
    }
    return;
}


// ===== sym.periph_interrupt @ 0x080055ec (size 512) =====

void sym.periph_interrupt(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    int64_t iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    pcVar7 = *(*(arg1 + 0xb8) + 0x38);
    iVar8 = (arg2 & 0xffffU) * 4;
    uVar1 = *(*(arg1 + 0xd0) + iVar8);
    if (0xd < (pcVar7 + -0x80026a8 >> 3 | pcVar7 << 0x3d)) {
        __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar7,0x8000620);
    }
    iVar6 = (*pcVar7)(arg1,arg2 & 0xffffffffU);
    uVar4 = sym.readl_relaxed(iVar6);
    if (uVar4 != 0) {
        do {
            while( true ) {
                uVar3 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
                uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
                uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
                uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                iVar10 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
                uVar9 = iVar10;
                iStack_6c = 0;
                uVar3 = 1 << (uVar9 & 0x1f);
                uVar4 = uVar4 & (uVar3 ^ 0xffffffff);
                iVar6 = __irq_resolve_mapping
                                  (*(arg1 + 0xa8),
                                   (uVar9 & 7) << 0x10 | (uVar1 & 0xff) << 0x14 | (uVar1 >> 8) << 0x1c | arg2 & 0x3ff,
                                   &iStack_6c);
                if ((iVar6 != 0) && (iStack_6c != 0)) break;
                uVar2 = *(*(arg1 + 0xd0) + iVar8);
                iVar5 = ___ratelimit(obj.cleanup_irq._rs,"cleanup_irq");
                if (iVar5 != 0) {
                    _dev_err(*(arg1 + 0xb0),"%s apid=%d sid=0x%x per=0x%x irq=%d\n","cleanup_irq",arg2 & 0xffff,
                             uVar2 >> 8,uVar2 & 0xff,iVar10);
                }
                pcVar7 = *(*(arg1 + 0xb8) + 0x40);
                if (0xd < (pcVar7 + -0x80026a8 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0xf8647a51cabfe033,pcVar7,0x8000640);
                }
                iVar6 = (*pcVar7)(arg1,arg2 & 0xffffffffU);
                sym.writel_relaxed(uVar3 & 0xff,iVar6);
                if (uVar4 == 0) goto code_r0x08005788;
            }
            generic_handle_irq();
        } while (uVar4 != 0);
    }
code_r0x08005788:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        *extraout_x18 = sym.debug_spmi_addr_fops_open;
        simple_attr_open(auVar11._0_8_,auVar11._8_8_,sym.debug_spmi_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,
                         sym.debug_spmi_addr_set.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,"0x%05llX\n");
        return;
    }
    return;
}


// ===== sym.debug_spmi_addr_fops_open @ 0x080057ec (size 60) =====

void sym.debug_spmi_addr_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debug_spmi_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,
                     sym.debug_spmi_addr_set.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,"0x%05llX\n");
    return;
}


// ===== sym.debug_spmi_addr_get @ 0x08005828 (size 24) =====

ulong sym.debug_spmi_addr_get(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0xe8);
    return 0;
}


// ===== sym.debug_spmi_addr_set @ 0x08005840 (size 24) =====

ulong sym.debug_spmi_addr_set(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0xe8) = arg2;
    return 0;
}


// ===== sym.debug_soc_start_addr_fops_open @ 0x08005858 (size 56) =====

void sym.debug_soc_start_addr_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debug_soc_start_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,0,
                     "0x%llX\n");
    return;
}


// ===== sym.debug_soc_start_addr_get @ 0x08005890 (size 236) =====

void sym.debug_soc_start_addr_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uVar1 = *(arg1 + 0xe8);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    pcVar4 = *(*(arg1 + 0xb8) + 0x58);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (3 < (pcVar4 + -0x80025c0 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xd04c2c57db5c62e7,pcVar4,0x8000340);
    }
    iVar3 = (*pcVar4)(arg1,uVar1 >> 0x10 & 0xf,uVar1,&uStack_88);
    if (iVar3 == 0) {
        *arg2 = uStack_88;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.debug_soc_end_addr_fops_open;
    simple_attr_open(auVar5._0_8_,auVar5._8_8_,sym.debug_soc_end_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,0,
                     "0x%llX\n");
    return;
}


// ===== sym.debug_soc_end_addr_fops_open @ 0x0800597c (size 56) =====

void sym.debug_soc_end_addr_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debug_soc_end_addr_get.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,0,"0x%llX\n"
                    );
    return;
}


// ===== sym.debug_soc_end_addr_get @ 0x080059b4 (size 236) =====

void sym.debug_soc_end_addr_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uchar *puVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uVar1 = *(arg1 + 0xe8);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    pcVar5 = *(*(arg1 + 0xb8) + 0x58);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (3 < (pcVar5 + -0x80025c0 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0xd04c2c57db5c62e7,pcVar5,0x8000340);
    }
    iVar3 = (*pcVar5)(arg1,uVar1 >> 0x10 & 0xf,uVar1,&uStack_88);
    if (iVar3 == 0) {
        *arg2 = uStack_80;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8005af8);
        (*pcVar5)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08005aa0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005ae4

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
    //switch table (4 cases) at 0x8000d52
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005af8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005b20 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.spmi_pmic_arb_probe.c3a56913c2d41c9e522aea419766cf3a.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08005b54 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spmi_pmic_arb_probe.c3a56913c2d41c9e522aea419766cf3a.cfi_jt);
    return;
}

