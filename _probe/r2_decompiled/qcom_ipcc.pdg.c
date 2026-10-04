// decompiled from qcom_ipcc by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 508) =====

//WARNING: Switch with 1 destination removed at 0x08001ac8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x30c7f6a5d51944be) {
        if (arg1 < -0x3ac64e6681b1b5a7) {
            if (arg1 == -0x68e06357d3edcb86) {
                pcVar2 = sym.handle_level_irq.cfi_jt;
            }
            else {
                if (arg1 != -0x3e637c87541bd604) goto code_r0x08001a88;
                pcVar2 = sym.qcom_ipcc_mbox_send_data.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
            }
        }
        else if (arg1 == -0x3ac64e6681b1b5a7) {
            pcVar2 = sym.qcom_ipcc_mbox_xlate.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001a88;
                pcVar2 = sym.qcom_ipcc_remove.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
                goto code_r0x080011c8;
            }
            pcVar2 = sym.qcom_ipcc_irq_fn.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
        }
    }
    else if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x30c7f6a5d51944be) {
            pcVar2 = sym.qcom_ipcc_domain_map.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
        }
        else if (arg1 == -0x8962c8020a87446) {
            pcVar2 = sym.qcom_ipcc_mbox_shutdown.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
        }
        else {
            if (arg1 != -0x5d12e6f23a0a14a) goto code_r0x08001a88;
            pcVar2 = sym.qcom_ipcc_domain_xlate.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x12432ee19d152236) {
            pcVar2 = sym.qcom_ipcc_mask_irq.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
code_r0x080011c8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001a88;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001a88;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001a88:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001adc);
    (*pcVar1)();
}


// ===== sym.handle_level_irq.cfi_jt @ 0x08001208 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_level_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001210 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_ipcc_probe.2115a09dc4d4efca76b67d048bad1668.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001218 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.qcom_ipcc_probe.2115a09dc4d4efca76b67d048bad1668.cfi_jt,obj.__this_module)
    ;
    if (iVar1 != 0) {
        _printk(0x8000270,"qcom_ipcc_init",iVar1);
    }
    return iVar1;
}


// ===== sym.qcom_ipcc_mask_irq.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001220 (size 8) =====

void sym.qcom_ipcc_mask_irq.2115a09dc4d4efca76b67d048bad1668.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(*(param_1 + 8),*(*(param_1 + 0x30) + 0x98) + 0x18);
    return;
}


// ===== sym.qcom_ipcc_unmask_irq.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001228 (size 8) =====

void sym.qcom_ipcc_unmask_irq.2115a09dc4d4efca76b67d048bad1668.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(*(param_1 + 8),*(*(param_1 + 0x30) + 0x98) + 0x14);
    return;
}


// ===== sym.qcom_ipcc_mbox_xlate.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.qcom_ipcc_mbox_xlate.2115a09dc4d4efca76b67d048bad1668.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    code *pcVar3;
    ushort *puVar4;
    uint16_t *puVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 + -8 == 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80019ac);
        (*pcVar3)();
    }
    if (*(param_2 + 8) == 2) {
        iVar2 = *(param_1 + 0x18);
        if (iVar2 < 1) {
code_r0x08001940:
            uVar7 = 0xfffffffffffffff0;
        }
        else {
            uVar8 = 0;
            puVar5 = *(*(param_1 + 0x88) + 0xf0);
            if (puVar5 != NULL) {
                do {
                    if (*(param_2 + 0xc) == *puVar5) {
                        if (*(param_2 + 0x10) == puVar5[1]) {
                            return 0xfffffffffffffff0;
                        }
                        if (iVar2 <= uVar8 + 1) {
                            return 0xfffffffffffffff0;
                        }
                    }
                    else if (iVar2 <= uVar8 + 1) goto code_r0x08001940;
                    uVar8 = uVar8 + 1;
                    puVar5 = *(*(param_1 + 0x88) + uVar8 * 0xf8 + 0xf0);
                } while (puVar5 != NULL);
            }
            puVar4 = devm_kmalloc(*(param_1 + 0x98),0x18,0xdc0);
            if (puVar4 == NULL) {
                uVar7 = 0xfffffffffffffff4;
            }
            else {
                uVar1 = *(param_2 + 0x10);
                iVar6 = *(param_1 + 0x88) + uVar8 * 0xf8;
                *puVar4 = *(param_2 + 0xc);
                puVar4[1] = uVar1;
                *(puVar4 + 4) = iVar6;
                *(puVar4 + 8) = param_1 + -8;
                *(iVar6 + 0xf0) = puVar4;
                uVar7 = *(puVar4 + 4);
            }
        }
    }
    else {
        uVar7 = 0xffffffffffffffea;
    }
    return uVar7;
}


// ===== sym.qcom_ipcc_irq_fn.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.qcom_ipcc_irq_fn.2115a09dc4d4efca76b67d048bad1668.cfi_jt(ulong param_1,ulong *param_2)

{
    uint uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    ulong uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uVar2 = sym.readl(param_2[0x13] + 0x10);
    while (uVar2 != 0xffffffff) {
        uStack_3c = 0;
        iVar3 = __irq_resolve_mapping(*param_2,uVar2,&uStack_3c);
        uVar1 = 0;
        if (iVar3 != 0) {
            uVar1 = uStack_3c;
        }
        sym.writel(uVar2,param_2[0x13] + 0x1c);
        generic_handle_irq(uVar1);
        uVar2 = sym.readl(param_2[0x13] + 0x10);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 1;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ipcc_domain_map;
    uVar4 = auVar6._8_8_ & 0xffffffff;
    uVar5 = *(auVar6._0_8_ + 0x20);
    irq_set_chip_and_handler_name(uVar4,obj.qcom_ipcc_irq_chip,sym.handle_level_irq.cfi_jt,0);
    irq_set_chip_data(uVar4,uVar5);
    irq_modify_status(uVar4,0,0x400);
    return 0;
}


// ===== sym.qcom_ipcc_mbox_send_data.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.qcom_ipcc_mbox_send_data.2115a09dc4d4efca76b67d048bad1668.cfi_jt(int64_t param_1)

{
    ushort *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0xf0);
    sym.writel(CONCAT22(*puVar1,puVar1[1]),*(*(puVar1 + 8) + 0x98) + 0xc);
    return 0;
}


// ===== sym.qcom_ipcc_mbox_shutdown.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001248 (size 8) =====

void sym.qcom_ipcc_mbox_shutdown.2115a09dc4d4efca76b67d048bad1668.cfi_jt(int64_t param_1)

{
    *(param_1 + 0xf0) = 0;
    return;
}


// ===== sym.qcom_ipcc_remove.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.qcom_ipcc_remove.2115a09dc4d4efca76b67d048bad1668.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0xa8);
    irq_set_irq_wake(*(puVar1 + 0xac),0);
    if (*(puVar1 + 0x15) != 0) {
        mbox_controller_unregister(puVar1 + 1);
    }
    irq_domain_remove(*puVar1);
    return 0;
}


// ===== sym.qcom_ipcc_probe.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001258 (size 8) =====

uint64_t sym.qcom_ipcc_probe.2115a09dc4d4efca76b67d048bad1668.cfi_jt(int64_t param_1)

{
    uchar auVar1 [16];
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar12;
    int64_t iVar13;
    int iVar14;
    ulong unaff_x30;
    int64_t iStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar9 = param_1 + 0x10;
    iStack_68 = *(iVar6 + 0x5e0);
    piVar5 = devm_kmalloc(iVar9,0xb0,0xdc0);
    if (piVar5 == NULL) {
code_r0x08001440:
        uVar7 = 0xfffffff4;
    }
    else {
        piVar5[0x14] = iVar9;
        iVar6 = platform_get_resource(param_1,0x200,0);
        if (iVar6 == 0) {
            _dev_err(iVar9,"Failed to get the device base address\n");
            uVar7 = 0xffffffed;
            goto code_r0x080014e4;
        }
        uVar7 = devm_ioremap_resource(iVar9,iVar6);
        piVar5[0x13] = uVar7;
        if (uVar7 < 0xfffffffffffff001) {
            _segment.ehdr = _segment.ehdr + 1;
            iVar6 = devm_kasprintf(iVar9,0xcc0,"ipcc_%d");
            if (iVar6 == 0) goto code_r0x08001440;
            uVar2 = platform_get_irq(param_1,0);
            *(piVar5 + 0xac) = uVar2;
            if (-1 < uVar2) {
                iVar8 = 0;
                if (*(param_1 + 0x300) != 0) {
                    iVar8 = *(param_1 + 0x300) + 0x18;
                }
                iVar8 = __irq_domain_add(iVar8,0,0xffffffffffffffff,0,obj.qcom_ipcc_irq_ops,piVar5);
                *piVar5 = iVar8;
                if (iVar8 == 0) {
                    _dev_err(iVar9,"Failed to add irq_domain\n");
                    uVar7 = 0xfffffff4;
                    goto code_r0x080014e4;
                }
                iVar11 = piVar5[0x14];
                iVar13 = *(param_1 + 0x300);
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                iStack_b8 = 0;
                uStack_b0 = 0;
                *(piVar5 + 0x15) = 0;
                for (iVar8 = of_find_node_with_property(0,"mboxes"); iVar8 != 0;
                    iVar8 = of_find_node_with_property(iVar8,"mboxes")) {
                    uVar7 = of_device_is_available(iVar8);
                    if (((uVar7 & 1) != 0) &&
                       (iVar3 = of_count_phandle_with_args(iVar8,"mboxes","#mbox-cells"), 0 < iVar3)) {
                        iVar14 = 0;
                        do {
                            iVar4 = of_parse_phandle_with_args(iVar8,"mboxes","#mbox-cells",iVar14,&iStack_b8);
                            if ((iVar4 == 0) && (iStack_b8 == iVar13)) {
                                *(piVar5 + 0x15) = piVar5[0x15] + 1;
                                break;
                            }
                            iVar14 = iVar14 + 1;
                        } while (iVar3 != iVar14);
                    }
                }
                iVar3 = piVar5[0x15];
                if (iVar3 == 0) {
code_r0x080014b4:
                    uVar7 = devm_request_threaded_irq
                                      (iVar9,*(piVar5 + 0xac),
                                       sym.qcom_ipcc_irq_fn.2115a09dc4d4efca76b67d048bad1668.cfi_jt,0,0x4004,iVar6,
                                       piVar5);
                    if (-1 < uVar7) {
                        uVar7 = 0;
                        *(param_1 + 0xa8) = piVar5;
                        goto code_r0x080014e4;
                    }
                    uVar7 = uVar7 & 0xffffffff;
                    _dev_err(iVar9,"Failed to register the irq: %d\n",uVar7);
                    if (piVar5[0x15] != 0) {
                        mbox_controller_unregister(piVar5 + 1);
                    }
                }
                else {
                    auVar1._8_8_ = 0;
                    auVar1._0_8_ = iVar3;
                    if (SUB168(auVar1 * ZEXT816(0xf8),8) == 0) {
                        iVar8 = devm_kmalloc(iVar11,iVar3 * 0xf8,0xdc0);
                        piVar5[0x12] = iVar8;
                        if (iVar8 == 0) {
                            uVar7 = 0xfffffff4;
                        }
                        else {
                            piVar5[1] = iVar11;
                            piVar5[2] = reloc.qcom_ipcc_mbox_send_data.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
                            piVar5[3] = iVar8;
                            piVar5[6] = sym.qcom_ipcc_mbox_xlate.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
                            *(piVar5 + 0x24) = 0;
                            *(piVar5 + 4) = piVar5[0x15];
                            uVar2 = mbox_controller_register(piVar5 + 1);
                            if (uVar2 == 0) goto code_r0x080014b4;
                            uVar7 = uVar2;
                        }
                    }
                    else {
                        piVar5[0x12] = 0;
                        uVar7 = 0xfffffff4;
                    }
                    _dev_err(iVar9,"Failed to create mailbox\n");
                }
                irq_domain_remove(*piVar5);
                goto code_r0x080014e4;
            }
            uVar7 = uVar2;
            pcVar10 = "Failed to get the IRQ\n";
        }
        else {
            pcVar10 = "Failed to ioremap the ipcc base addr\n";
        }
        _dev_err(iVar9,pcVar10);
    }
code_r0x080014e4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar7 & 0xffffffff;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ipcc_remove;
    puVar12 = *(iVar9 + 0xa8);
    irq_set_irq_wake(*(puVar12 + 0xac),0);
    if (*(puVar12 + 0x15) != 0) {
        mbox_controller_unregister(puVar12 + 1);
    }
    irq_domain_remove(*puVar12);
    return 0;
}


// ===== sym.qcom_ipcc_domain_map.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001260 (size 8) =====

ulong sym.qcom_ipcc_domain_map.2115a09dc4d4efca76b67d048bad1668.cfi_jt(int64_t param_1,uint param_2)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0x20);
    irq_set_chip_and_handler_name(param_2,obj.qcom_ipcc_irq_chip,sym.handle_level_irq.cfi_jt,0);
    irq_set_chip_data(param_2,uVar1);
    irq_modify_status(param_2,0,0x400);
    return 0;
}


// ===== sym.qcom_ipcc_domain_xlate.2115a09dc4d4efca76b67d048bad1668.cfi_jt @ 0x08001268 (size 8) =====

ulong sym.qcom_ipcc_domain_xlate.2115a09dc4d4efca76b67d048bad1668.cfi_jt
                (ulong param_1,ulong param_2,int *param_3,int param_4,uint64_t *param_5,uint32_t *param_6)

{
    if (param_4 == 3) {
        *param_5 = *(param_3 + 1) | *param_3 << 0x10;
        *param_6 = param_3[2] & 0xf;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qcom_ipcc_probe @ 0x08001270 (size 880) =====

uint64_t sym.qcom_ipcc_probe(int64_t arg1)

{
    uchar auVar1 [16];
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar12;
    int64_t iVar13;
    int iVar14;
    ulong unaff_x30;
    int64_t iStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar9 = arg1 + 0x10;
    iStack_68 = *(iVar6 + 0x5e0);
    piVar5 = devm_kmalloc(iVar9,0xb0,0xdc0);
    if (piVar5 == NULL) {
code_r0x08001440:
        uVar7 = 0xfffffff4;
    }
    else {
        piVar5[0x14] = iVar9;
        iVar6 = platform_get_resource(arg1,0x200,0);
        if (iVar6 == 0) {
            _dev_err(iVar9,"Failed to get the device base address\n");
            uVar7 = 0xffffffed;
            goto code_r0x080014e4;
        }
        uVar7 = devm_ioremap_resource(iVar9,iVar6);
        piVar5[0x13] = uVar7;
        if (uVar7 < 0xfffffffffffff001) {
            _segment.ehdr = _segment.ehdr + 1;
            iVar6 = devm_kasprintf(iVar9,0xcc0,"ipcc_%d");
            if (iVar6 == 0) goto code_r0x08001440;
            uVar2 = platform_get_irq(arg1,0);
            *(piVar5 + 0xac) = uVar2;
            if (-1 < uVar2) {
                iVar8 = 0;
                if (*(arg1 + 0x300) != 0) {
                    iVar8 = *(arg1 + 0x300) + 0x18;
                }
                iVar8 = __irq_domain_add(iVar8,0,0xffffffffffffffff,0,obj.qcom_ipcc_irq_ops,piVar5);
                *piVar5 = iVar8;
                if (iVar8 == 0) {
                    _dev_err(iVar9,"Failed to add irq_domain\n");
                    uVar7 = 0xfffffff4;
                    goto code_r0x080014e4;
                }
                iVar11 = piVar5[0x14];
                iVar13 = *(arg1 + 0x300);
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                iStack_b8 = 0;
                uStack_b0 = 0;
                *(piVar5 + 0x15) = 0;
                for (iVar8 = of_find_node_with_property(0,"mboxes"); iVar8 != 0;
                    iVar8 = of_find_node_with_property(iVar8,"mboxes")) {
                    uVar7 = of_device_is_available(iVar8);
                    if (((uVar7 & 1) != 0) &&
                       (iVar3 = of_count_phandle_with_args(iVar8,"mboxes","#mbox-cells"), 0 < iVar3)) {
                        iVar14 = 0;
                        do {
                            iVar4 = of_parse_phandle_with_args(iVar8,"mboxes","#mbox-cells",iVar14,&iStack_b8);
                            if ((iVar4 == 0) && (iStack_b8 == iVar13)) {
                                *(piVar5 + 0x15) = piVar5[0x15] + 1;
                                break;
                            }
                            iVar14 = iVar14 + 1;
                        } while (iVar3 != iVar14);
                    }
                }
                iVar3 = piVar5[0x15];
                if (iVar3 == 0) {
code_r0x080014b4:
                    uVar7 = devm_request_threaded_irq
                                      (iVar9,*(piVar5 + 0xac),
                                       sym.qcom_ipcc_irq_fn.2115a09dc4d4efca76b67d048bad1668.cfi_jt,0,0x4004,iVar6,
                                       piVar5);
                    if (-1 < uVar7) {
                        uVar7 = 0;
                        *(arg1 + 0xa8) = piVar5;
                        goto code_r0x080014e4;
                    }
                    uVar7 = uVar7 & 0xffffffff;
                    _dev_err(iVar9,"Failed to register the irq: %d\n",uVar7);
                    if (piVar5[0x15] != 0) {
                        mbox_controller_unregister(piVar5 + 1);
                    }
                }
                else {
                    auVar1._8_8_ = 0;
                    auVar1._0_8_ = iVar3;
                    if (SUB168(auVar1 * ZEXT816(0xf8),8) == 0) {
                        iVar8 = devm_kmalloc(iVar11,iVar3 * 0xf8,0xdc0);
                        piVar5[0x12] = iVar8;
                        if (iVar8 == 0) {
                            uVar7 = 0xfffffff4;
                        }
                        else {
                            piVar5[1] = iVar11;
                            piVar5[2] = reloc.qcom_ipcc_mbox_send_data.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
                            piVar5[3] = iVar8;
                            piVar5[6] = sym.qcom_ipcc_mbox_xlate.2115a09dc4d4efca76b67d048bad1668.cfi_jt;
                            *(piVar5 + 0x24) = 0;
                            *(piVar5 + 4) = piVar5[0x15];
                            uVar2 = mbox_controller_register(piVar5 + 1);
                            if (uVar2 == 0) goto code_r0x080014b4;
                            uVar7 = uVar2;
                        }
                    }
                    else {
                        piVar5[0x12] = 0;
                        uVar7 = 0xfffffff4;
                    }
                    _dev_err(iVar9,"Failed to create mailbox\n");
                }
                irq_domain_remove(*piVar5);
                goto code_r0x080014e4;
            }
            uVar7 = uVar2;
            pcVar10 = "Failed to get the IRQ\n";
        }
        else {
            pcVar10 = "Failed to ioremap the ipcc base addr\n";
        }
        _dev_err(iVar9,pcVar10);
    }
code_r0x080014e4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar7 & 0xffffffff;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ipcc_remove;
    puVar12 = *(iVar9 + 0xa8);
    irq_set_irq_wake(*(puVar12 + 0xac),0);
    if (*(puVar12 + 0x15) != 0) {
        mbox_controller_unregister(puVar12 + 1);
    }
    irq_domain_remove(*puVar12);
    return 0;
}


// ===== sym.qcom_ipcc_remove @ 0x080015e0 (size 84) =====

ulong sym.qcom_ipcc_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xa8);
    irq_set_irq_wake(*(puVar1 + 0xac),0);
    if (*(puVar1 + 0x15) != 0) {
        mbox_controller_unregister(puVar1 + 1);
    }
    irq_domain_remove(*puVar1);
    return 0;
}


// ===== sym.qcom_ipcc_irq_fn @ 0x08001634 (size 204) =====

ulong sym.qcom_ipcc_irq_fn(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    ulong uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uVar2 = sym.readl(*(arg1 + 0x98) + 0x10);
    while (uVar2 != 0xffffffff) {
        uStack_3c = 0;
        iVar3 = __irq_resolve_mapping(*arg1,uVar2,&uStack_3c);
        uVar1 = 0;
        if (iVar3 != 0) {
            uVar1 = uStack_3c;
        }
        sym.writel(uVar2,*(arg1 + 0x98) + 0x1c);
        generic_handle_irq(uVar1);
        uVar2 = sym.readl(*(arg1 + 0x98) + 0x10);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 1;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ipcc_domain_map;
    uVar4 = auVar6._8_8_ & 0xffffffff;
    uVar5 = *(auVar6._0_8_ + 0x20);
    irq_set_chip_and_handler_name(uVar4,obj.qcom_ipcc_irq_chip,sym.handle_level_irq.cfi_jt,0);
    irq_set_chip_data(uVar4,uVar5);
    irq_modify_status(uVar4,0,0x400);
    return 0;
}


// ===== sym.qcom_ipcc_domain_map @ 0x08001700 (size 108) =====

ulong sym.qcom_ipcc_domain_map(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xffffffff;
    uVar2 = *(arg1 + 0x20);
    irq_set_chip_and_handler_name(uVar1,obj.qcom_ipcc_irq_chip,sym.handle_level_irq.cfi_jt,0);
    irq_set_chip_data(uVar1,uVar2);
    irq_modify_status(uVar1,0,0x400);
    return 0;
}


// ===== sym.qcom_ipcc_domain_xlate @ 0x0800176c (size 68) =====

ulong sym.qcom_ipcc_domain_xlate(int64_t arg1,uchar noname_1 [16],int64_t arg2,uint32_t arg3)

{
    uint64_t *in_x4;
    uint32_t *in_x5;
    
    if (arg3 == 3) {
        *in_x4 = *(arg2 + 4) | *arg2 << 0x10;
        *in_x5 = *(arg2 + 8) & 0xf;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qcom_ipcc_mask_irq @ 0x080017b0 (size 52) =====

void sym.qcom_ipcc_mask_irq(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(*(arg1 + 8),*(*(arg1 + 0x30) + 0x98) + 0x18);
    return;
}


// ===== sym.qcom_ipcc_unmask_irq @ 0x080017e4 (size 52) =====

void sym.qcom_ipcc_unmask_irq(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(*(arg1 + 8),*(*(arg1 + 0x30) + 0x98) + 0x14);
    return;
}


// ===== sym.writel @ 0x08001818 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001834);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001860);
    return;
}


// ===== sym.qcom_ipcc_mbox_xlate @ 0x08001894 (size 280) =====

ulong sym.qcom_ipcc_mbox_xlate(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    code *pcVar3;
    ushort *puVar4;
    uint16_t *puVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 + -8 == 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80019ac);
        (*pcVar3)();
    }
    if (*(arg2 + 8) == 2) {
        iVar2 = *(arg1 + 0x18);
        if (iVar2 < 1) {
code_r0x08001940:
            uVar7 = 0xfffffffffffffff0;
        }
        else {
            uVar8 = 0;
            puVar5 = *(*(arg1 + 0x88) + 0xf0);
            if (puVar5 != NULL) {
                do {
                    if (*(arg2 + 0xc) == *puVar5) {
                        if (*(arg2 + 0x10) == puVar5[1]) {
                            return 0xfffffffffffffff0;
                        }
                        if (iVar2 <= uVar8 + 1) {
                            return 0xfffffffffffffff0;
                        }
                    }
                    else if (iVar2 <= uVar8 + 1) goto code_r0x08001940;
                    uVar8 = uVar8 + 1;
                    puVar5 = *(*(arg1 + 0x88) + uVar8 * 0xf8 + 0xf0);
                } while (puVar5 != NULL);
            }
            puVar4 = devm_kmalloc(*(arg1 + 0x98),0x18,0xdc0);
            if (puVar4 == NULL) {
                uVar7 = 0xfffffffffffffff4;
            }
            else {
                uVar1 = *(arg2 + 0x10);
                iVar6 = *(arg1 + 0x88) + uVar8 * 0xf8;
                *puVar4 = *(arg2 + 0xc);
                puVar4[1] = uVar1;
                *(puVar4 + 4) = iVar6;
                *(puVar4 + 8) = arg1 + -8;
                *(iVar6 + 0xf0) = puVar4;
                uVar7 = *(puVar4 + 4);
            }
        }
    }
    else {
        uVar7 = 0xffffffffffffffea;
    }
    return uVar7;
}


// ===== sym.qcom_ipcc_mbox_send_data @ 0x080019b0 (size 68) =====

ulong sym.qcom_ipcc_mbox_send_data(int64_t arg1)

{
    ushort *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xf0);
    sym.writel(CONCAT22(*puVar1,puVar1[1]),*(*(puVar1 + 8) + 0x98) + 0xc);
    return 0;
}


// ===== sym.qcom_ipcc_mbox_shutdown @ 0x080019f4 (size 16) =====

void sym.qcom_ipcc_mbox_shutdown(int64_t arg1)

{
    *(arg1 + 0xf0) = 0;
    return;
}


// ===== sym.readl @ 0x08001a04 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001a08);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8001a4c);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x08001a84 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001ac8

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
    //switch table (4 cases) at 0x80003a2
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001adc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001ae4 (size 100) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.qcom_ipcc_probe.2115a09dc4d4efca76b67d048bad1668.cfi_jt,obj.__this_module)
    ;
    if (iVar1 != 0) {
        _printk(0x8000270,"qcom_ipcc_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001b48 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_ipcc_probe.2115a09dc4d4efca76b67d048bad1668.cfi_jt);
    return;
}

