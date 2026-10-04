// decompiled from qcom_edac by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x080018a0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x138916eaf287ba09) {
        if (arg1 != -0x3987c0e26ee29729) {
            if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x8001120 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x08001860;
        }
        pcVar2 = sym.llcc_ecc_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else if (arg1 == -0x138916eaf287ba09) {
        pcVar2 = sym.qcom_llcc_poll_cache_errors.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001860;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001860:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018b4);
    (*pcVar1)();
}


// ===== sym.llcc_ecc_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001100 (size 8) =====

void sym.llcc_ecc_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2,ulong *param_3)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    int64_t iVar12;
    ulong uVar13;
    uchar *puVar14;
    char *pcVar15;
    ulong *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    uint64_t unaff_x21;
    int64_t unaff_x22;
    ulong uVar17;
    int iVar18;
    ulong *puVar19;
    uint64_t unaff_x24;
    uint64_t uVar20;
    ulong unaff_x25;
    ulong *puVar21;
    ulong unaff_x26;
    uint64_t uVar22;
    ulong unaff_x27;
    ulong unaff_x28;
    ulong unaff_x30;
    uchar auVar23 [16];
    uint uStack_e4;
    uint32_t uStack_e0;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong *puStack_98;
    int64_t iStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    puVar19 = *(param_2 + 0x100);
    uStack_70 = 0;
    if (*(puVar19 + 0x54) == 0) {
        uVar20 = 0;
        param_2 = unaff_x19;
    }
    else {
        unaff_x20 = 0;
        uVar20 = 0;
        unaff_x27 = 0x8000000;
        unaff_x28 = 0x20480;
        unaff_x26 = 0x80003ec;
        unaff_x25 = 0x8000368;
        do {
            uVar9 = regmap_read(*puVar19,*(_segment.ehdr + 0x14) + *(puVar19[0xc] + unaff_x20 * 4),&uStack_70 + 4);
            unaff_x21 = uVar9;
            if (uVar9 == 0) {
                if ((uStack_70 & 0x100000000) == 0) {
                    if ((uStack_70._4_4_ >> 1 & 1) == 0) {
                        unaff_x21 = 0;
                        goto code_r0x080014cc;
                    }
                    uVar9 = 1;
                    uVar13 = 0x800044c;
                }
                else {
                    uVar9 = 0;
                    uVar13 = 0x8000559;
                }
                _printk(uVar13);
                uVar22 = sym.dump_syn_reg(param_2,uVar9,unaff_x20 & 0xffffffff);
                unaff_x21 = uVar22 & 0xffffffff;
            }
code_r0x080014cc:
            param_3 = &uStack_70;
            iVar10 = regmap_read(*puVar19,*(puVar19[0xc] + unaff_x20 * 4) + 0x20480);
            if (iVar10 == 0) {
                if ((uStack_70 & 1) == 0) {
                    if ((uStack_70 >> 1 & 1) == 0) {
                        iVar10 = 0;
                        goto code_r0x0800146c;
                    }
                    unaff_x22 = 3;
                    uVar13 = unaff_x25;
                }
                else {
                    unaff_x22 = 2;
                    uVar13 = unaff_x26;
                }
                _printk(uVar13);
                param_3 = unaff_x20 & 0xffffffff;
                iVar10 = sym.dump_syn_reg(param_2,unaff_x22,param_3);
            }
code_r0x0800146c:
            unaff_x20 = unaff_x20 + 1;
            uVar20 = (iVar10 == 0 || unaff_x21 == 0) | uVar20;
            unaff_x24 = uVar20;
        } while (unaff_x20 < *(puVar19 + 0x54));
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    auVar23 = __stack_chk_fail(uVar20);
    uVar20 = auVar23._8_8_;
    iVar12 = auVar23._0_8_;
    *extraout_x18 = sym.dump_syn_reg;
    pcStack_c8 = sym.dump_syn_reg;
    iVar7 = sp_el0;
    iStack_d8 = *(iVar7 + 0x5e0);
    uVar22 = param_3 & 0xffffffff;
    puVar21 = *(iVar12 + 0x100);
    puVar16 = _segment.ehdr + (uVar20 & 0xffffffff) * 0x30;
    uVar13 = puVar16[2];
    uVar2 = puVar16[3];
    iVar1 = *(puVar16 + 4);
    uVar9 = *(puVar16 + 0x24);
    uVar17 = *puVar16;
    iVar10 = *(puVar16 + 1);
    uVar3 = *(puVar16 + 5);
    uVar5 = *(puVar16 + 0x2c);
    uVar6 = *(puVar16 + 0x2d);
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_e4 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = unaff_x28;
    uStack_b8 = unaff_x27;
    uStack_b0 = unaff_x26;
    uStack_a8 = unaff_x25;
    uStack_a0 = unaff_x24;
    puStack_98 = puVar19;
    iStack_90 = unaff_x22;
    uStack_88 = unaff_x21;
    uStack_80 = unaff_x20;
    iStack_78 = param_2;
    if (iVar1 != 0) {
        iVar18 = 0;
        do {
            iVar11 = regmap_read(*puVar21,iVar10 + *(puVar21[0xc] + uVar22 * 4),&uStack_e4);
            if (iVar11 != 0) goto code_r0x08001690;
            _printk(0x8000340,uVar17,iVar18,uStack_e4);
            iVar18 = iVar18 + 1;
            iVar10 = iVar10 + 4;
        } while (iVar1 != iVar18);
    }
    iVar10 = regmap_read(*puVar21,*(puVar21[0xc] + uVar22 * 4) + uVar13,&uStack_dc);
    if (iVar10 == 0) {
        uStack_dc = (uStack_dc & uVar9) >> (uVar5 & 0x1f);
        _printk(0x80004b3,uVar17);
        iVar10 = regmap_read(*puVar21,*(puVar21[0xc] + uVar22 * 4) + uVar2,&uStack_e0);
        if (iVar10 == 0) {
            uStack_e0 = (uStack_e0 & uVar3) >> (uVar6 & 0x1f);
            _printk(0x8000592,uVar17);
        }
    }
code_r0x08001690:
    if (1 < auVar23._8_4_ - 2) {
        if (auVar23._8_4_ < 2) {
            uVar13 = regmap_write(puVar21[1],*(_segment.ehdr + 0x18),3);
            if (uVar13 != 0) goto code_r0x0800181c;
            uVar13 = puVar21[1];
            uVar4 = *(_segment.ehdr + 0x1c);
            goto code_r0x080016f8;
        }
code_r0x08001808:
        _printk(0x80003aa,uVar20 & 0xffffffff);
        uVar13 = 0xffffffea;
        goto code_r0x0800181c;
    }
    uVar13 = regmap_write(puVar21[1],0x20484,3);
    if (uVar13 != 0) goto code_r0x0800181c;
    uVar13 = puVar21[1];
    uVar4 = 0x20440;
code_r0x080016f8:
    uVar13 = regmap_write(uVar13,uVar4,3);
    if (uVar13 != 0) goto code_r0x0800181c;
    switch(uVar20 & 0xffffffff) {
    case 0:
        pcVar15 = "LLCC Data RAM correctable Error";
        break;
    case 1:
        pcVar15 = "LLCC Data RAM uncorrectable Error";
        goto code_r0x0800177c;
    case 2:
        pcVar15 = "LLCC Tag RAM correctable Error";
        break;
    case 3:
        pcVar15 = "LLCC Tag RAM uncorrectable Error";
code_r0x0800177c:
        edac_device_handle_ue_count(iVar12,1,0,param_3,pcVar15);
        uVar13 = 0;
        goto code_r0x0800181c;
    default:
        goto code_r0x08001808;
    }
    edac_device_handle_ce_count(iVar12,1,0,param_3,pcVar15);
    uVar13 = 0;
code_r0x0800181c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_d8) {
        auVar23 = __stack_chk_fail(uVar13);
        puVar14 = auVar23._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar14 != NULL) {
            switch(*puVar14) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar14,auVar23._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x5502,0x80018b4);
        (*pcVar8)();
    }
    return;
}


// ===== sym.qcom_llcc_poll_cache_errors.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001108 (size 8) =====

void sym.qcom_llcc_poll_cache_errors.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.llcc_ecc_irq_handler(param_1,param_1);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001110 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_llcc_edac_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001118 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_llcc_edac_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_llcc_edac_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001120 (size 8) =====

int sym.qcom_llcc_edac_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0xa0);
    if (0x14 < *(iVar8 + 0x6c)) {
        _segment.ehdr = obj.edac_regs_v21;
    }
    uVar2 = *(iVar8 + 0x54);
    uVar4 = edac_device_alloc_index();
    iVar6 = edac_device_alloc_ctl_info(0,"qcom-llcc",1,"bank",uVar2,1,0,0,uVar4);
    if (iVar6 == 0) {
        return -0xc;
    }
    piVar1 = param_1 + 0x10;
    *(iVar6 + 0xe0) = piVar1;
    iVar7 = *(param_1 + 0x80);
    if (iVar7 == 0) {
        iVar7 = *piVar1;
    }
    *(iVar6 + 0xe8) = iVar7;
    iVar7 = *(param_1 + 0x80);
    if (iVar7 == 0) {
        iVar7 = *piVar1;
    }
    *(iVar6 + 0x100) = iVar8;
    *(iVar6 + 0x24) = 1;
    *(iVar6 + 0xf0) = "llcc";
    *(iVar6 + 0xf8) = iVar7;
    iVar3 = *(iVar8 + 0x68);
    if (iVar3 < 0) {
        _dev_info(piVar1,"No ECC IRQ; defaulting to polling mode\n");
        uVar2 = _segment.ehdr;
        *(iVar6 + 0xd8) = sym.qcom_llcc_poll_cache_errors.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *(iVar6 + 0x28) = uVar2;
    }
    iVar5 = edac_device_add_device(iVar6);
    if (iVar5 == 0) {
        if (iVar3 < 0) {
code_r0x08001358:
            *(param_1 + 0xa8) = iVar6;
            return 0;
        }
        uVar9 = *(iVar8 + 8);
        iVar5 = regmap_update_bits_base(uVar9,*(_segment.ehdr + 0x24),1,1,0,0,0);
        if (iVar5 == 0) {
            iVar5 = regmap_update_bits_base(uVar9,0x20488,3,3,0,0,0);
            if (iVar5 == 0) {
                iVar5 = regmap_write(uVar9,*(_segment.ehdr + 0x20),0x1000000);
                if (iVar5 == 0) {
                    iVar5 = regmap_update_bits_base(uVar9,*(_segment.ehdr + 0x24),0x40,0x40,0,0,0);
                    if (iVar5 == 0) {
                        iVar5 = regmap_write(uVar9,*(_segment.ehdr + 0x2c),3);
                        if (iVar5 == 0) {
                            iVar5 = devm_request_threaded_irq
                                              (piVar1,iVar3,
                                               sym.llcc_ecc_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,
                                               0x2084,"llcc_ecc",iVar6);
                            if (iVar5 == 0) goto code_r0x08001358;
                        }
                    }
                }
            }
        }
        edac_device_del_device(*(iVar6 + 0xe0));
    }
    edac_device_free_ctl_info(iVar6);
    return iVar5;
}


// ===== sym.qcom_llcc_edac_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.qcom_llcc_edac_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    edac_device_del_device(*(iVar1 + 0xe0));
    edac_device_free_ctl_info(iVar1);
    return 0;
}


// ===== sym.qcom_llcc_edac_probe @ 0x08001130 (size 608) =====

int sym.qcom_llcc_edac_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0xa0);
    if (0x14 < *(iVar8 + 0x6c)) {
        _segment.ehdr = obj.edac_regs_v21;
    }
    uVar2 = *(iVar8 + 0x54);
    uVar4 = edac_device_alloc_index();
    iVar6 = edac_device_alloc_ctl_info(0,"qcom-llcc",1,"bank",uVar2,1,0,0,uVar4);
    if (iVar6 == 0) {
        return -0xc;
    }
    piVar1 = arg1 + 0x10;
    *(iVar6 + 0xe0) = piVar1;
    iVar7 = *(arg1 + 0x80);
    if (iVar7 == 0) {
        iVar7 = *piVar1;
    }
    *(iVar6 + 0xe8) = iVar7;
    iVar7 = *(arg1 + 0x80);
    if (iVar7 == 0) {
        iVar7 = *piVar1;
    }
    *(iVar6 + 0x100) = iVar8;
    *(iVar6 + 0x24) = 1;
    *(iVar6 + 0xf0) = "llcc";
    *(iVar6 + 0xf8) = iVar7;
    iVar3 = *(iVar8 + 0x68);
    if (iVar3 < 0) {
        _dev_info(piVar1,"No ECC IRQ; defaulting to polling mode\n");
        uVar2 = _segment.ehdr;
        *(iVar6 + 0xd8) = sym.qcom_llcc_poll_cache_errors.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *(iVar6 + 0x28) = uVar2;
    }
    iVar5 = edac_device_add_device(iVar6);
    if (iVar5 == 0) {
        if (iVar3 < 0) {
code_r0x08001358:
            *(arg1 + 0xa8) = iVar6;
            return 0;
        }
        uVar9 = *(iVar8 + 8);
        iVar5 = regmap_update_bits_base(uVar9,*(_segment.ehdr + 0x24),1,1,0,0,0);
        if (iVar5 == 0) {
            iVar5 = regmap_update_bits_base(uVar9,0x20488,3,3,0,0,0);
            if (iVar5 == 0) {
                iVar5 = regmap_write(uVar9,*(_segment.ehdr + 0x20),0x1000000);
                if (iVar5 == 0) {
                    iVar5 = regmap_update_bits_base(uVar9,*(_segment.ehdr + 0x24),0x40,0x40,0,0,0);
                    if (iVar5 == 0) {
                        iVar5 = regmap_write(uVar9,*(_segment.ehdr + 0x2c),3);
                        if (iVar5 == 0) {
                            iVar5 = devm_request_threaded_irq
                                              (piVar1,iVar3,
                                               sym.llcc_ecc_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,
                                               0x2084,"llcc_ecc",iVar6);
                            if (iVar5 == 0) goto code_r0x08001358;
                        }
                    }
                }
            }
        }
        edac_device_del_device(*(iVar6 + 0xe0));
    }
    edac_device_free_ctl_info(iVar6);
    return iVar5;
}


// ===== sym.qcom_llcc_edac_remove @ 0x08001390 (size 64) =====

ulong sym.qcom_llcc_edac_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    edac_device_del_device(*(iVar1 + 0xe0));
    edac_device_free_ctl_info(iVar1);
    return 0;
}


// ===== sym.qcom_llcc_poll_cache_errors @ 0x080013d0 (size 40) =====

void sym.qcom_llcc_poll_cache_errors(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.llcc_ecc_irq_handler(arg1,arg1);
    return;
}


// ===== sym.llcc_ecc_irq_handler @ 0x080013f8 (size 428) =====

void sym.llcc_ecc_irq_handler(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    int64_t iVar12;
    ulong uVar13;
    uchar *puVar14;
    ulong *in_x2;
    char *pcVar15;
    ulong *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    uint64_t unaff_x21;
    int64_t unaff_x22;
    ulong uVar17;
    int iVar18;
    ulong *puVar19;
    uint64_t unaff_x24;
    uint64_t uVar20;
    ulong unaff_x25;
    ulong *puVar21;
    ulong unaff_x26;
    uint64_t uVar22;
    ulong unaff_x27;
    ulong unaff_x28;
    ulong unaff_x30;
    uchar auVar23 [16];
    uint uStack_e4;
    uint32_t uStack_e0;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong *puStack_98;
    int64_t iStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    puVar19 = *(arg2 + 0x100);
    uStack_70 = 0;
    if (*(puVar19 + 0x54) == 0) {
        uVar20 = 0;
        arg2 = unaff_x19;
    }
    else {
        unaff_x20 = 0;
        uVar20 = 0;
        unaff_x27 = 0x8000000;
        unaff_x28 = 0x20480;
        unaff_x26 = 0x80003ec;
        unaff_x25 = 0x8000368;
        do {
            uVar9 = regmap_read(*puVar19,*(_segment.ehdr + 0x14) + *(puVar19[0xc] + unaff_x20 * 4),&uStack_70 + 4);
            unaff_x21 = uVar9;
            if (uVar9 == 0) {
                if ((uStack_70 & 0x100000000) == 0) {
                    if ((uStack_70._4_4_ >> 1 & 1) == 0) {
                        unaff_x21 = 0;
                        goto code_r0x080014cc;
                    }
                    uVar9 = 1;
                    uVar13 = 0x800044c;
                }
                else {
                    uVar9 = 0;
                    uVar13 = 0x8000559;
                }
                _printk(uVar13);
                uVar22 = sym.dump_syn_reg(arg2,uVar9,unaff_x20 & 0xffffffff);
                unaff_x21 = uVar22 & 0xffffffff;
            }
code_r0x080014cc:
            in_x2 = &uStack_70;
            iVar10 = regmap_read(*puVar19,*(puVar19[0xc] + unaff_x20 * 4) + 0x20480);
            if (iVar10 == 0) {
                if ((uStack_70 & 1) == 0) {
                    if ((uStack_70 >> 1 & 1) == 0) {
                        iVar10 = 0;
                        goto code_r0x0800146c;
                    }
                    unaff_x22 = 3;
                    uVar13 = unaff_x25;
                }
                else {
                    unaff_x22 = 2;
                    uVar13 = unaff_x26;
                }
                _printk(uVar13);
                in_x2 = unaff_x20 & 0xffffffff;
                iVar10 = sym.dump_syn_reg(arg2,unaff_x22,in_x2);
            }
code_r0x0800146c:
            unaff_x20 = unaff_x20 + 1;
            uVar20 = (iVar10 == 0 || unaff_x21 == 0) | uVar20;
            unaff_x24 = uVar20;
        } while (unaff_x20 < *(puVar19 + 0x54));
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    auVar23 = __stack_chk_fail(uVar20);
    uVar20 = auVar23._8_8_;
    iVar12 = auVar23._0_8_;
    *extraout_x18 = sym.dump_syn_reg;
    pcStack_c8 = sym.dump_syn_reg;
    iVar7 = sp_el0;
    iStack_d8 = *(iVar7 + 0x5e0);
    uVar22 = in_x2 & 0xffffffff;
    puVar21 = *(iVar12 + 0x100);
    puVar16 = _segment.ehdr + (uVar20 & 0xffffffff) * 0x30;
    uVar13 = puVar16[2];
    uVar2 = puVar16[3];
    iVar1 = *(puVar16 + 4);
    uVar9 = *(puVar16 + 0x24);
    uVar17 = *puVar16;
    iVar10 = *(puVar16 + 1);
    uVar3 = *(puVar16 + 5);
    uVar5 = *(puVar16 + 0x2c);
    uVar6 = *(puVar16 + 0x2d);
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_e4 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = unaff_x28;
    uStack_b8 = unaff_x27;
    uStack_b0 = unaff_x26;
    uStack_a8 = unaff_x25;
    uStack_a0 = unaff_x24;
    puStack_98 = puVar19;
    iStack_90 = unaff_x22;
    uStack_88 = unaff_x21;
    uStack_80 = unaff_x20;
    iStack_78 = arg2;
    if (iVar1 != 0) {
        iVar18 = 0;
        do {
            iVar11 = regmap_read(*puVar21,iVar10 + *(puVar21[0xc] + uVar22 * 4),&uStack_e4);
            if (iVar11 != 0) goto code_r0x08001690;
            _printk(0x8000340,uVar17,iVar18,uStack_e4);
            iVar18 = iVar18 + 1;
            iVar10 = iVar10 + 4;
        } while (iVar1 != iVar18);
    }
    iVar10 = regmap_read(*puVar21,*(puVar21[0xc] + uVar22 * 4) + uVar13,&uStack_dc);
    if (iVar10 == 0) {
        uStack_dc = (uStack_dc & uVar9) >> (uVar5 & 0x1f);
        _printk(0x80004b3,uVar17);
        iVar10 = regmap_read(*puVar21,*(puVar21[0xc] + uVar22 * 4) + uVar2,&uStack_e0);
        if (iVar10 == 0) {
            uStack_e0 = (uStack_e0 & uVar3) >> (uVar6 & 0x1f);
            _printk(0x8000592,uVar17);
        }
    }
code_r0x08001690:
    if (1 < auVar23._8_4_ - 2) {
        if (auVar23._8_4_ < 2) {
            uVar13 = regmap_write(puVar21[1],*(_segment.ehdr + 0x18),3);
            if (uVar13 != 0) goto code_r0x0800181c;
            uVar13 = puVar21[1];
            uVar4 = *(_segment.ehdr + 0x1c);
            goto code_r0x080016f8;
        }
code_r0x08001808:
        _printk(0x80003aa,uVar20 & 0xffffffff);
        uVar13 = 0xffffffea;
        goto code_r0x0800181c;
    }
    uVar13 = regmap_write(puVar21[1],0x20484,3);
    if (uVar13 != 0) goto code_r0x0800181c;
    uVar13 = puVar21[1];
    uVar4 = 0x20440;
code_r0x080016f8:
    uVar13 = regmap_write(uVar13,uVar4,3);
    if (uVar13 != 0) goto code_r0x0800181c;
    switch(uVar20 & 0xffffffff) {
    case 0:
        pcVar15 = "LLCC Data RAM correctable Error";
        break;
    case 1:
        pcVar15 = "LLCC Data RAM uncorrectable Error";
        goto code_r0x0800177c;
    case 2:
        pcVar15 = "LLCC Tag RAM correctable Error";
        break;
    case 3:
        pcVar15 = "LLCC Tag RAM uncorrectable Error";
code_r0x0800177c:
        edac_device_handle_ue_count(iVar12,1,0,in_x2,pcVar15);
        uVar13 = 0;
        goto code_r0x0800181c;
    default:
        goto code_r0x08001808;
    }
    edac_device_handle_ce_count(iVar12,1,0,in_x2,pcVar15);
    uVar13 = 0;
code_r0x0800181c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_d8) {
        auVar23 = __stack_chk_fail(uVar13);
        puVar14 = auVar23._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar14 != NULL) {
            switch(*puVar14) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar14,auVar23._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x5502,0x80018b4);
        (*pcVar8)();
    }
    return;
}


// ===== sym.dump_syn_reg @ 0x080015a4 (size 696) =====

void sym.dump_syn_reg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    code *pcVar10;
    int iVar11;
    int iVar12;
    ulong uVar13;
    uchar *puVar14;
    char *pcVar15;
    ulong *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar17;
    int iVar18;
    ulong *puVar19;
    uint64_t uVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uint uStack_74;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar9 = arg2;
    uVar20 = arg3 & 0xffffffff;
    puVar19 = *(arg1 + 0x100);
    puVar16 = _segment.ehdr + (arg2 & 0xffffffffU) * 0x30;
    uVar13 = puVar16[2];
    uVar3 = puVar16[3];
    iVar1 = *(puVar16 + 4);
    uVar2 = *(puVar16 + 0x24);
    uVar17 = *puVar16;
    iVar12 = *(puVar16 + 1);
    uVar4 = *(puVar16 + 5);
    uVar6 = *(puVar16 + 0x2c);
    uVar7 = *(puVar16 + 0x2d);
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_74 = 0;
    if (iVar1 != 0) {
        iVar18 = 0;
        do {
            iVar11 = regmap_read(*puVar19,iVar12 + *(puVar19[0xc] + uVar20 * 4),&stack0xffffffffffffff8c);
            if (iVar11 != 0) goto code_r0x08001690;
            _printk(0x8000340,uVar17,iVar18,uStack_74);
            iVar18 = iVar18 + 1;
            iVar12 = iVar12 + 4;
        } while (iVar1 != iVar18);
    }
    iVar12 = regmap_read(*puVar19,*(puVar19[0xc] + uVar20 * 4) + uVar13,&stack0xffffffffffffff94);
    if (iVar12 == 0) {
        uStack_6c = (uStack_6c & uVar2) >> (uVar6 & 0x1f);
        _printk(0x80004b3,uVar17);
        iVar12 = regmap_read(*puVar19,*(puVar19[0xc] + uVar20 * 4) + uVar3,&stack0xffffffffffffff90);
        if (iVar12 == 0) {
            uStack_70 = (uStack_70 & uVar4) >> (uVar7 & 0x1f);
            _printk(0x8000592,uVar17);
        }
    }
code_r0x08001690:
    if (1 < uVar9 - 2) {
        if (uVar9 < 2) {
            uVar13 = regmap_write(puVar19[1],*(_segment.ehdr + 0x18),3);
            if (uVar13 != 0) goto code_r0x0800181c;
            uVar13 = puVar19[1];
            uVar5 = *(_segment.ehdr + 0x1c);
            goto code_r0x080016f8;
        }
code_r0x08001808:
        _printk(0x80003aa,arg2 & 0xffffffff);
        uVar13 = 0xffffffea;
        goto code_r0x0800181c;
    }
    uVar13 = regmap_write(puVar19[1],0x20484,3);
    if (uVar13 != 0) goto code_r0x0800181c;
    uVar13 = puVar19[1];
    uVar5 = 0x20440;
code_r0x080016f8:
    uVar13 = regmap_write(uVar13,uVar5,3);
    if (uVar13 != 0) goto code_r0x0800181c;
    if (3 < uVar9) goto code_r0x08001808;
    //switch table (4 cases) at 0x8000328
    switch(*((arg2 & 0xffffffffU) + 0x8000328) * 4 + 0x8001728) {
    case 0x800172c:
        pcVar15 = "LLCC Data RAM correctable Error";
        break;
    case 0x800173c:
        pcVar15 = "LLCC Data RAM uncorrectable Error";
        goto code_r0x0800177c;
    case 0x800174c:
        pcVar15 = "LLCC Tag RAM correctable Error";
        break;
    case 0x8001774:
        pcVar15 = "LLCC Tag RAM uncorrectable Error";
code_r0x0800177c:
        edac_device_handle_ue_count(arg1,1,0,arg3,pcVar15);
        uVar13 = 0;
        goto code_r0x0800181c;
    }
    edac_device_handle_ce_count(arg1,1,0,arg3,pcVar15);
    uVar13 = 0;
code_r0x0800181c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        auVar21 = __stack_chk_fail(uVar13);
        puVar14 = auVar21._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar14 != NULL) {
            switch(*puVar14) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar14,auVar21._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x5502,0x80018b4);
        (*pcVar10)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800185c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018a0

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
    //switch table (4 cases) at 0x800032c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018b4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080018c4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_llcc_edac_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080018f8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_llcc_edac_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

