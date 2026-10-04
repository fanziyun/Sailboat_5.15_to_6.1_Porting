// decompiled from qcom-pdc by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 800) =====

//WARNING: Switch with 1 destination removed at 0x080025b0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x12432ee19d152236) {
        if (arg1 < -0x44ffb07decd4456c) {
            if (arg1 < -0x5a6edac1c20882c3) {
                if (arg1 == -0x6445b5cb289f3cba) {
                    pcVar2 = sym.irq_chip_get_parent_state.cfi_jt;
                }
                else {
                    if (arg1 != -0x60cb512353a42fef) goto code_r0x08002570;
                    pcVar2 = sym.irq_chip_set_vcpu_affinity_parent.cfi_jt;
                }
            }
            else if (arg1 == -0x5a6edac1c20882c3) {
                pcVar2 = sym.qcom_pdc_gpio_domain_select.47355ed22d87406ff8918f723a765f79.cfi_jt;
            }
            else {
                if (arg1 != -0x4cb00eb12b4d5ca5) goto code_r0x08002570;
                pcVar2 = sym.irq_chip_retrigger_hierarchy.cfi_jt;
            }
        }
        else if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x44ffb07decd4456c) {
                pcVar2 = sym.irq_domain_free_irqs_common.cfi_jt;
            }
            else {
                if (arg1 != -0x43677211936b66e5) goto code_r0x08002570;
                pcVar2 = sym.qcom_pdc_translate.47355ed22d87406ff8918f723a765f79.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08002570;
                pcVar2 = sym.init_module.cfi_jt;
code_r0x0800124c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002570;
            }
            pcVar2 = sym.platform_irqchip_probe.cfi_jt;
        }
    }
    else if (arg1 < 0x58e1238e0783df2b) {
        if (arg1 < 0x528d382ad7c933fb) {
            if (arg1 == 0x12432ee19d152236) {
                if ((pcVar1 + -0x8001380 >> 3 | pcVar1 << 0x3d) < 5) {
                    return;
                }
                goto code_r0x08002570;
            }
            if (arg1 != 0x4e17b8192f3ba4d5) goto code_r0x08002570;
            pcVar2 = sym.irq_chip_set_affinity_parent.cfi_jt;
        }
        else if (arg1 == 0x528d382ad7c933fb) {
            pcVar2 = sym.qcom_pdc_init.47355ed22d87406ff8918f723a765f79.cfi_jt;
        }
        else {
            if (arg1 != 0x566cdc1d6ec224d9) goto code_r0x08002570;
            pcVar2 = sym.qcom_pdc_gic_set_type.47355ed22d87406ff8918f723a765f79.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 != 0x58e1238e0783df2b) {
            if (arg1 != 0x666e10f707b56d38) goto code_r0x08002570;
            pcVar2 = sym.qcom_pdc_gpio_alloc.47355ed22d87406ff8918f723a765f79.cfi_jt;
            goto code_r0x0800124c;
        }
        pcVar2 = sym.irq_chip_set_parent_state.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.pdc_suspend_notifier.47355ed22d87406ff8918f723a765f79.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002570;
        pcVar2 = sym.pdc_resume.47355ed22d87406ff8918f723a765f79.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002570:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80025c4);
    (*pcVar1)();
}


// ===== sym.irq_chip_set_parent_state.cfi_jt @ 0x08001328 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_set_parent_state.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.irq_chip_set_vcpu_affinity_parent.cfi_jt @ 0x08001330 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_set_vcpu_affinity_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.platform_irqchip_probe.cfi_jt @ 0x08001338 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.platform_irqchip_probe.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_pdc_init.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x08001340 (size 8) =====

int sym.qcom_pdc_init.47355ed22d87406ff8918f723a765f79.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    int iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int *piVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    int64_t iStack_120;
    int64_t iStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    int64_t aiStack_c0 [12];
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    aiStack_c0[10] = *(iVar10 + 0x5e0);
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    iStack_120 = 0;
    iStack_118 = 0;
    _segment.ehdr = of_iomap(param_1,0);
    if (_segment.ehdr == NULL) {
        _printk(0x8000358,param_1);
        iVar6 = -6;
        goto code_r0x08001838;
    }
    iVar10 = 0;
    if (param_2 != 0) {
        iVar10 = param_2 + 0x18;
    }
    aiStack_c0[8] = 0;
    aiStack_c0[9] = 0;
    aiStack_c0[6] = 0;
    aiStack_c0[7] = 0;
    aiStack_c0[4] = 0;
    aiStack_c0[5] = 0;
    aiStack_c0[2] = 0;
    aiStack_c0[3] = 0;
    aiStack_c0[1] = 0;
    aiStack_c0[0] = iVar10;
    iVar8 = irq_find_matching_fwspec(aiStack_c0,1);
    if (iVar8 == 0) {
        aiStack_c0[8] = 0;
        aiStack_c0[9] = 0;
        aiStack_c0[6] = 0;
        aiStack_c0[7] = 0;
        aiStack_c0[4] = 0;
        aiStack_c0[5] = 0;
        aiStack_c0[2] = 0;
        aiStack_c0[3] = 0;
        aiStack_c0[1] = 0;
        aiStack_c0[0] = iVar10;
        iVar8 = irq_find_matching_fwspec(aiStack_c0,0);
        if (iVar8 != 0) goto code_r0x080014a0;
        _printk(0x80003eb,param_1);
        iVar6 = -6;
    }
    else {
code_r0x080014a0:
        uVar5 = of_property_count_elems_of_size(param_1,"",4);
        iVar6 = -0x16;
        if ((0 < uVar5) && (uVar5 % 3 == 0)) {
            _segment.ehdr = CONCAT44(*0x8000004,uVar5 / 3);
            _segment.ehdr = __kmalloc((uVar5 / 3) * 0xc,0xdc0);
            if (_segment.ehdr != NULL) {
                if (0 < _segment.ehdr) {
                    uVar15 = 0;
                    do {
                        iVar3 = uVar15 * 3;
                        iVar6 = of_property_read_u32_index(param_1,"",iVar3,_segment.ehdr + uVar15 * 0xc);
                        if (((iVar6 != 0) ||
                            (iVar6 = of_property_read_u32_index
                                               (param_1,"",iVar3 + 1,_segment.ehdr + uVar15 * 0xc + 4), iVar6 != 0))
                           || (iVar6 = of_property_read_u32_index
                                                 (param_1,"",iVar3 + 2,_segment.ehdr + uVar15 * 0xc + 8), iVar6 != 0
                              )) goto code_r0x080017d4;
                        if (*(_segment.ehdr + uVar15 * 0xc + 8) != 0) {
                            uVar5 = 0;
                            do {
                                uVar1 = uVar5 + *(_segment.ehdr + uVar15 * 0xc);
                                uVar14 = uVar1 >> 3 & 0x1ffffffc;
                                uVar7 = sym.readl_relaxed(_segment.ehdr + uVar14 + 0x10);
                                sym.writel_relaxed(uVar7 & (1 << (uVar1 & 0x1f) ^ 0xffffffffU),
                                                   _segment.ehdr + uVar14 + 0x10);
                                uVar5 = uVar5 + 1;
                            } while (uVar5 < *(_segment.ehdr + uVar15 * 0xc + 8));
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < (_segment.ehdr & 0xffffffff));
                }
                iVar10 = 0;
                if (param_1 != 0) {
                    iVar10 = param_1 + 0x18;
                }
                iVar9 = irq_domain_create_hierarchy(iVar8,0,0xf0,iVar10,obj.qcom_pdc_ops,0);
                if (iVar9 == 0) {
                    _printk(0x80003bb,param_1);
                    iVar6 = -0xc;
                    goto code_r0x08001828;
                }
                iVar6 = of_address_to_resource(param_1,1,&iStack_120);
                if (iVar6 == 0) {
                    iVar12 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar12 = 0x30;
                    }
                    _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x18);
                    if (_segment.ehdr != NULL) {
                        iVar11 = of_find_property(param_1,"",0);
                        piVar4 = _segment.ehdr;
                        *(_segment.ehdr + 2) = iVar11 != 0;
                        iVar12 = (iStack_118 - iStack_120) + 1;
                        piVar4[1] = iVar12;
                        if (iVar11 == 0) {
                            uVar2 = 0x68000000000713;
                            if (arm64_use_ng_mappings != 0x0) {
                                uVar2 = 0x68000000000f13;
                            }
                            iVar12 = __ioremap(iStack_120,iVar12,uVar2);
                            *_segment.ehdr = iVar12;
                            if (iVar12 == 0) goto code_r0x08001810;
                        }
                        else {
                            *piVar4 = iStack_120;
                        }
                        goto code_r0x08001684;
                    }
                }
                else {
code_r0x08001684:
                    iVar10 = irq_domain_create_hierarchy(iVar8,0x10000,0x100,iVar10,obj.qcom_pdc_gpio_ops,0);
                    if (iVar10 != 0) {
                        irq_domain_update_bus_token(iVar10,9);
                        register_syscore_ops(obj.pdc_syscore_ops);
                        iVar6 = register_pm_notifier(reloc.pdc_suspend_notifier.47355ed22d87406ff8918f723a765f79.cfi_jt)
                        ;
                        if (iVar6 != 0) {
                            unregister_syscore_ops(obj.pdc_syscore_ops);
                        }
                        _segment.ehdr = ipc_log_context_create(2,0x80002d3,0);
                        iVar6 = 0;
                        goto code_r0x08001838;
                    }
                    _printk(0x800043e,param_1);
                }
code_r0x08001810:
                irq_domain_remove(iVar9);
                kfree(_segment.ehdr);
                iVar6 = -0xc;
                goto code_r0x08001828;
            }
            iVar6 = -0xc;
            _segment.ehdr = NULL;
        }
code_r0x080017d4:
        _printk(0x800038d,param_1);
    }
code_r0x08001828:
    kfree(_segment.ehdr);
    iounmap(_segment.ehdr);
code_r0x08001838:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != aiStack_c0[10]) {
        piVar13 = __stack_chk_fail();
        *extraout_x18 = sym.readl_relaxed;
        log_read_mmio(0x20,piVar13,0x8001898);
        iVar6 = *piVar13;
        log_post_read_mmio(iVar6,0x20,piVar13,0x80018cc);
        return iVar6;
    }
    return iVar6;
}


// ===== sym.qcom_pdc_gic_set_type.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x08001348 (size 8) =====

void sym.qcom_pdc_gic_set_type.47355ed22d87406ff8918f723a765f79.cfi_jt(int64_t param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    code *pcVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int iVar12;
    ulong uVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar4 = param_2 - 1;
    iStack_68 = *(iVar6 + 0x5e0);
    if ((7 < uVar4) || ((0x8fU >> (uVar4 & 0x1f) & 1) == 0)) {
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x800,0x8001d5c);
        (*pcVar8)();
    }
    uVar11 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
    uVar2 = *(uVar11 + 0x80006a8);
    uVar3 = *(uVar11 + 0x80006c8);
    uVar13 = *(*(param_1 + 0x28) + 8);
    uVar9 = sym.readl_relaxed(_segment.ehdr + (*(param_1 + 8) & 0xffffffff) * 4 + 0x110);
    sym.writel_relaxed(uVar3,_segment.ehdr + (*(param_1 + 8) & 0xffffffff) * 4 + 0x110);
    ipc_log_string(_segment.ehdr,"",*(param_1 + 8),uVar3,uVar2);
    uVar11 = *(param_1 + 8);
    if (0xef < uVar11) goto code_r0x08001f98;
    *(reloc.qcom_pdc_gic_disable.47355ed22d87406ff8918f723a765f79.cfi_jt + uVar11 * 8) = uVar3;
    piVar7 = _segment.ehdr;
    if (0x780 < (uVar11 << 3 | 4)) {
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(1,0x8001fa0);
        (*pcVar8)();
    }
    iVar12 = uVar13;
    iVar5 = iVar12 + -0x20;
    iVar12 = iVar12 + -1;
    if (-1 < iVar5) {
        iVar12 = iVar5;
    }
    *(uVar11 * 8 + 0x8000094) = 1;
    if (piVar7 == NULL) {
code_r0x08001f64:
        uVar13 = irq_chip_set_type_parent(param_1,uVar2);
        if (uVar13 == 0) {
            if (uVar9 != uVar3) {
                irq_chip_set_parent_state(param_1,0,0);
            }
            uVar13 = 0;
        }
    }
    else {
        uVar11 = (iVar12 >> 5) << 2;
        if (uVar11 <= piVar7[1]) {
            uVar13 = _raw_spin_lock_irqsave(obj.pdc_lock);
            if (_segment.ehdr[2] == '\0') {
                uVar10 = sym.readl(*_segment.ehdr + uVar11);
            }
            else {
                uStack_6c = 0;
                qcom_scm_io_readl(*_segment.ehdr + uVar11,&uStack_6c);
                uVar10 = uStack_6c;
            }
            uVar14 = 1L << (iVar5 % 0x20 & 0x3f);
            uVar1 = uVar10 | uVar14;
            if ((uVar4 & 0xfffffffb) != 3) {
                uVar1 = uVar10 & (uVar14 ^ 0xffffffff);
            }
            if (_segment.ehdr[2] == '\0') {
                sym.writel(uVar1,*_segment.ehdr + uVar11);
            }
            else {
                qcom_scm_io_writel(*_segment.ehdr + uVar11);
            }
            ipc_log_string(_segment.ehdr,"",iVar5,iVar12 >> 5,iVar5 % 0x20,uVar2 & 4);
            _raw_spin_unlock_irqrestore(obj.pdc_lock,uVar13);
            goto code_r0x08001f64;
        }
        uVar13 = 0xfffffff2;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar13);
code_r0x08001f98:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8001f9c);
    (*pcVar8)();
}


// ===== sym.pdc_resume.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x08001350 (size 8) =====

void sym.pdc_resume.47355ed22d87406ff8918f723a765f79.cfi_jt(void)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.in_hibernation == 0x1) {
        iVar2 = 0;
        do {
            if (*(iVar2 * 8 + 0x8000094) != '\0') {
                sym.writel_relaxed(*(reloc.qcom_pdc_gic_disable.47355ed22d87406ff8918f723a765f79.cfi_jt + iVar2 * 8),
                                   CONCAT44(*0x8000004,_segment.ehdr) + iVar2 * 4 + 0x110);
                while( true ) {
                    uVar1 = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + iVar2 * 4 + 0x110);
                    if (uVar1 == *(reloc.qcom_pdc_gic_disable.47355ed22d87406ff8918f723a765f79.cfi_jt + iVar2 * 8))
                    break;
                    __const_udelay(0x53e3);
                }
            }
            iVar2 = iVar2 + 1;
        } while (iVar2 != 0xf0);
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x18);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x1c);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x20);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x24);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x28);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x2c);
        }
    }
    return;
}


// ===== sym.irq_domain_free_irqs_common.cfi_jt @ 0x08001358 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_domain_free_irqs_common.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08001360 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.platform_irqchip_probe.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.pdc_suspend.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x08001368 (size 8) =====

ulong sym.pdc_suspend.47355ed22d87406ff8918f723a765f79.cfi_jt(void)

{
    uint32_t uVar1;
    code *pcVar2;
    int *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.in_hibernation == 0x1) {
        piVar3 = CONCAT44(*0x8000004,_segment.ehdr) + (_segment.ehdr + -1) * 0xc;
        uVar1 = piVar3[2] + *piVar3;
        _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        if (0x1f < uVar1) {
            uVar1 = uVar1 >> 5;
            _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
            if (uVar1 != 1) {
                _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x18);
                if (uVar1 != 2) {
                    _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x1c);
                    if (uVar1 != 3) {
                        _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x20);
                        if (uVar1 != 4) {
                            _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x24);
                            if (uVar1 != 5) {
                                _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x28);
                                if (uVar1 != 6) {
                                    _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c);
                                    if (uVar1 != 7) {
                                        sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x30);
    //WARNING: Does not return
                                        pcVar2 = SoftwareBreakpoint(0x5512,0x80023c0);
                                        (*pcVar2)();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}


// ===== sym.irq_chip_set_affinity_parent.cfi_jt @ 0x08001370 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_set_affinity_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.irq_chip_retrigger_hierarchy.cfi_jt @ 0x08001378 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_retrigger_hierarchy.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_pdc_gic_disable.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x08001380 (size 8) =====

void sym.qcom_pdc_gic_disable.47355ed22d87406ff8918f723a765f79.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 8);
    uVar2 = uVar1 + 0x1f;
    if (-1 < uVar1) {
        uVar2 = uVar1;
    }
    uVar3 = _raw_spin_lock_irqsave(obj.pdc_lock);
    iVar4 = (uVar2 >> 5) * 4;
    uVar2 = sym.readl_relaxed(_segment.ehdr + iVar4 + 0x10);
    sym.writel_relaxed(uVar2 & (1 << (uVar1 & 0x1f) ^ 0xffffffffU),_segment.ehdr + iVar4 + 0x10);
    _raw_spin_unlock_irqrestore(obj.pdc_lock,uVar3);
    ipc_log_string(_segment.ehdr,"",*(param_1 + 8),0);
    irq_chip_disable_parent(param_1);
    return;
}


// ===== sym.irq_chip_mask_parent.cfi_jt @ 0x08001388 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_mask_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_pdc_gic_enable.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x08001390 (size 8) =====

void sym.qcom_pdc_gic_enable.47355ed22d87406ff8918f723a765f79.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 8);
    uVar2 = uVar1 + 0x1f;
    if (-1 < uVar1) {
        uVar2 = uVar1;
    }
    uVar3 = _raw_spin_lock_irqsave(obj.pdc_lock);
    iVar4 = (uVar2 >> 5) * 4;
    uVar2 = sym.readl_relaxed(_segment.ehdr + iVar4 + 0x10);
    sym.writel_relaxed(uVar2 | 1 << (uVar1 & 0x1f),_segment.ehdr + iVar4 + 0x10);
    _raw_spin_unlock_irqrestore(obj.pdc_lock,uVar3);
    ipc_log_string(_segment.ehdr,"",*(param_1 + 8),1);
    irq_chip_enable_parent(param_1);
    return;
}


// ===== sym.irq_chip_eoi_parent.cfi_jt @ 0x08001398 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_eoi_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.irq_chip_unmask_parent.cfi_jt @ 0x080013a0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_unmask_parent.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_pdc_translate.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x080013a8 (size 8) =====

ulong sym.qcom_pdc_translate.47355ed22d87406ff8918f723a765f79.cfi_jt
                (ulong param_1,uint64_t *param_2,uint64_t *param_3,uint32_t *param_4)

{
    ulong uVar1;
    uint64_t uVar2;
    
    uVar2 = *param_2;
    uVar1 = 0xffffffea;
    if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
        if ((*(uVar2 + 8) != of_fwnode_ops) || (param_2[1] != 2)) {
            return 0xffffffea;
        }
        uVar1 = 0;
        *param_3 = *(param_2 + 0xc);
        *param_4 = param_2[2] & 0xf;
    }
    return uVar1;
}


// ===== sym.irq_chip_get_parent_state.cfi_jt @ 0x080013b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_chip_get_parent_state.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pdc_suspend_notifier.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x080013b8 (size 8) =====

ulong sym.pdc_suspend_notifier.47355ed22d87406ff8918f723a765f79.cfi_jt(ulong param_1,int64_t param_2)

{
    if (param_2 == 1) {
        obj.in_hibernation = 0x1;
    }
    else if (param_2 == 2) {
        obj.in_hibernation = 0x0;
    }
    return 1;
}


// ===== sym.qcom_pdc_gpio_domain_select.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x080013c0 (size 8) =====

bool sym.qcom_pdc_gpio_domain_select.47355ed22d87406ff8918f723a765f79.cfi_jt(ulong param_1,ulong param_2,int param_3)

{
    return param_3 == 9;
}


// ===== sym.qcom_pdc_gpio_alloc.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x080013c8 (size 8) =====

ulong sym.qcom_pdc_gpio_alloc.47355ed22d87406ff8918f723a765f79.cfi_jt
                (int64_t param_1,uint param_2,uint param_3,uint64_t *param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong uVar7;
    uint64_t uVar8;
    int *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    int iStack_88;
    uint32_t uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uVar7 = 0xffffffea;
    uVar8 = *param_4;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
        if ((*(uVar8 + 8) == of_fwnode_ops) && (param_4[1] == 2)) {
            uVar2 = *(param_4 + 0xc);
            if (uVar2 != 0xffffffff) {
                uVar3 = param_4[2];
                uVar7 = irq_domain_set_hwirq_and_chip(param_1,param_2,uVar2,obj.pdc_base,0);
                if (uVar7 != 0) goto code_r0x08002184;
                uVar8 = _segment.ehdr;
                if (0 < _segment.ehdr) {
                    uVar1 = uVar3 & 0xf;
                    piVar9 = CONCAT44(*0x8000004,_segment.ehdr) + 4;
                    do {
                        uVar4 = piVar9[-1];
                        if ((uVar4 <= uVar2) && (uVar2 < piVar9[1] + uVar4)) {
                            if ((uVar3 & 0xc) != 0) {
                                uVar1 = 4;
                            }
                            uStack_98 = *(*(param_1 + 0x48) + 0x30);
                            iStack_88 = *piVar9 + (uVar2 - uVar4);
                            if ((uVar3 & 3) != 0) {
                                uVar1 = 1;
                            }
                            uStack_90 = 3;
                            uStack_84 = uVar1;
                            ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"",uVar2);
                            uVar7 = irq_domain_alloc_irqs_parent(param_1,param_2,param_3,&uStack_98);
                            goto code_r0x08002184;
                        }
                        piVar9 = piVar9 + 3;
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                }
                param_1 = *(param_1 + 0x48);
            }
            uVar7 = irq_domain_disconnect_hierarchy(param_1,param_2);
        }
        else {
            uVar7 = 0xffffffea;
        }
    }
code_r0x08002184:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    __stack_chk_fail(uVar7);
    *extraout_x18 = sym.pdc_suspend;
    if (obj.in_hibernation == 0x1) {
        piVar9 = CONCAT44(*0x8000004,_segment.ehdr) + (_segment.ehdr - 1) * 0xc;
        uVar2 = piVar9[2] + *piVar9;
        _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        if (0x1f < uVar2) {
            uVar2 = uVar2 >> 5;
            _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
            if ((((uVar2 != 1) &&
                 (_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x18), uVar2 != 2)) &&
                (_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x1c), uVar2 != 3)) &&
               (((_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x20), uVar2 != 4 &&
                 (_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x24), uVar2 != 5)) &&
                ((_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x28), uVar2 != 6 &&
                 (_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c), uVar2 != 7)))))) {
                sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x30);
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x80023c0);
                (*pcVar6)();
            }
        }
    }
    return 0;
}


// ===== sym.qcom_pdc_alloc.47355ed22d87406ff8918f723a765f79.cfi_jt @ 0x080013d0 (size 8) =====

ulong sym.qcom_pdc_alloc.47355ed22d87406ff8918f723a765f79.cfi_jt
                (int64_t param_1,uint param_2,uint64_t *param_3,code *param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t *extraout_x1;
    uint64_t uVar7;
    int *piVar8;
    ulong *in_x18;
    uint64_t *puVar9;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    int iStack_88;
    uint32_t uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uVar6 = 0xffffffea;
    uVar7 = *param_4;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
        if ((*(uVar7 + 8) == of_fwnode_ops) && (*(param_4 + 8) == 2)) {
            uVar2 = *(param_4 + 0xc);
            uVar3 = *(param_4 + 0x10);
            puVar9 = param_3 & 0xffffffff;
            param_4 = obj.pdc_base;
            param_3 = uVar2;
            uVar6 = irq_domain_set_hwirq_and_chip(param_1);
            if (uVar6 == 0) {
                uVar7 = _segment.ehdr;
                if (0 < _segment.ehdr) {
                    uVar1 = uVar3 & 0xf;
                    piVar8 = CONCAT44(*0x8000004,_segment.ehdr) + 4;
                    do {
                        uVar4 = piVar8[-1];
                        if ((uVar4 <= uVar2) && (uVar2 < piVar8[1] + uVar4)) {
                            if ((uVar3 & 0xc) != 0) {
                                uVar1 = 4;
                            }
                            uStack_98 = *(*(param_1 + 0x48) + 0x30);
                            iStack_88 = *piVar8 + (uVar2 - uVar4);
                            if ((uVar3 & 3) != 0) {
                                uVar1 = 1;
                            }
                            uStack_90 = 3;
                            uStack_84 = uVar1;
                            ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"",uVar2);
                            param_4 = &uStack_98;
                            uVar6 = irq_domain_alloc_irqs_parent(param_1,param_2);
                            param_3 = puVar9;
                            goto code_r0x08001acc;
                        }
                        piVar8 = piVar8 + 3;
                        uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                }
                uVar6 = irq_domain_disconnect_hierarchy(*(param_1 + 0x48),param_2);
            }
        }
        else {
            uVar6 = 0xffffffea;
        }
    }
code_r0x08001acc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    __stack_chk_fail(uVar6);
    uVar7 = *extraout_x1;
    uVar6 = 0xffffffea;
    if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
        if ((*(uVar7 + 8) != of_fwnode_ops) || (extraout_x1[1] != 2)) {
            return 0xffffffea;
        }
        uVar6 = 0;
        *param_3 = *(extraout_x1 + 0xc);
        *param_4 = extraout_x1[2] & 0xf;
    }
    return uVar6;
}


// ===== sym.qcom_pdc_init @ 0x080013d8 (size 1212) =====

int sym.qcom_pdc_init(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int *piVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    int64_t iStack_120;
    int64_t iStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    int64_t aiStack_c0 [12];
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    aiStack_c0[10] = *(iVar10 + 0x5e0);
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    iStack_120 = 0;
    iStack_118 = 0;
    _segment.ehdr = of_iomap(arg1,0);
    if (_segment.ehdr == NULL) {
        _printk(0x8000358,arg1);
        iVar6 = -6;
        goto code_r0x08001838;
    }
    iVar10 = 0;
    if (arg2 != 0) {
        iVar10 = arg2 + 0x18;
    }
    aiStack_c0[8] = 0;
    aiStack_c0[9] = 0;
    aiStack_c0[6] = 0;
    aiStack_c0[7] = 0;
    aiStack_c0[4] = 0;
    aiStack_c0[5] = 0;
    aiStack_c0[2] = 0;
    aiStack_c0[3] = 0;
    aiStack_c0[1] = 0;
    aiStack_c0[0] = iVar10;
    iVar8 = irq_find_matching_fwspec(aiStack_c0,1);
    if (iVar8 == 0) {
        aiStack_c0[8] = 0;
        aiStack_c0[9] = 0;
        aiStack_c0[6] = 0;
        aiStack_c0[7] = 0;
        aiStack_c0[4] = 0;
        aiStack_c0[5] = 0;
        aiStack_c0[2] = 0;
        aiStack_c0[3] = 0;
        aiStack_c0[1] = 0;
        aiStack_c0[0] = iVar10;
        iVar8 = irq_find_matching_fwspec(aiStack_c0,0);
        if (iVar8 != 0) goto code_r0x080014a0;
        _printk(0x80003eb,arg1);
        iVar6 = -6;
    }
    else {
code_r0x080014a0:
        uVar5 = of_property_count_elems_of_size(arg1,"",4);
        iVar6 = -0x16;
        if ((0 < uVar5) && (uVar5 % 3 == 0)) {
            _segment.ehdr = CONCAT44(*0x8000004,uVar5 / 3);
            _segment.ehdr = __kmalloc((uVar5 / 3) * 0xc,0xdc0);
            if (_segment.ehdr != NULL) {
                if (0 < _segment.ehdr) {
                    uVar15 = 0;
                    do {
                        iVar3 = uVar15 * 3;
                        iVar6 = of_property_read_u32_index(arg1,"",iVar3,_segment.ehdr + uVar15 * 0xc);
                        if (((iVar6 != 0) ||
                            (iVar6 = of_property_read_u32_index(arg1,"",iVar3 + 1,_segment.ehdr + uVar15 * 0xc + 4),
                            iVar6 != 0)) ||
                           (iVar6 = of_property_read_u32_index(arg1,"",iVar3 + 2,_segment.ehdr + uVar15 * 0xc + 8),
                           iVar6 != 0)) goto code_r0x080017d4;
                        if (*(_segment.ehdr + uVar15 * 0xc + 8) != 0) {
                            uVar5 = 0;
                            do {
                                uVar1 = uVar5 + *(_segment.ehdr + uVar15 * 0xc);
                                uVar14 = uVar1 >> 3 & 0x1ffffffc;
                                uVar7 = sym.readl_relaxed(_segment.ehdr + uVar14 + 0x10);
                                sym.writel_relaxed(uVar7 & (1 << (uVar1 & 0x1f) ^ 0xffffffffU),
                                                   _segment.ehdr + uVar14 + 0x10);
                                uVar5 = uVar5 + 1;
                            } while (uVar5 < *(_segment.ehdr + uVar15 * 0xc + 8));
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < (_segment.ehdr & 0xffffffff));
                }
                iVar10 = 0;
                if (arg1 != 0) {
                    iVar10 = arg1 + 0x18;
                }
                iVar9 = irq_domain_create_hierarchy(iVar8,0,0xf0,iVar10,obj.qcom_pdc_ops,0);
                if (iVar9 == 0) {
                    _printk(0x80003bb,arg1);
                    iVar6 = -0xc;
                    goto code_r0x08001828;
                }
                iVar6 = of_address_to_resource(arg1,1,&iStack_120);
                if (iVar6 == 0) {
                    iVar12 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar12 = 0x30;
                    }
                    _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x18);
                    if (_segment.ehdr != NULL) {
                        iVar11 = of_find_property(arg1,"",0);
                        piVar4 = _segment.ehdr;
                        *(_segment.ehdr + 2) = iVar11 != 0;
                        iVar12 = (iStack_118 - iStack_120) + 1;
                        piVar4[1] = iVar12;
                        if (iVar11 == 0) {
                            uVar2 = 0x68000000000713;
                            if (arm64_use_ng_mappings != 0x0) {
                                uVar2 = 0x68000000000f13;
                            }
                            iVar12 = __ioremap(iStack_120,iVar12,uVar2);
                            *_segment.ehdr = iVar12;
                            if (iVar12 == 0) goto code_r0x08001810;
                        }
                        else {
                            *piVar4 = iStack_120;
                        }
                        goto code_r0x08001684;
                    }
                }
                else {
code_r0x08001684:
                    iVar10 = irq_domain_create_hierarchy(iVar8,0x10000,0x100,iVar10,obj.qcom_pdc_gpio_ops,0);
                    if (iVar10 != 0) {
                        irq_domain_update_bus_token(iVar10,9);
                        register_syscore_ops(obj.pdc_syscore_ops);
                        iVar6 = register_pm_notifier(reloc.pdc_suspend_notifier.47355ed22d87406ff8918f723a765f79.cfi_jt)
                        ;
                        if (iVar6 != 0) {
                            unregister_syscore_ops(obj.pdc_syscore_ops);
                        }
                        _segment.ehdr = ipc_log_context_create(2,0x80002d3,0);
                        iVar6 = 0;
                        goto code_r0x08001838;
                    }
                    _printk(0x800043e,arg1);
                }
code_r0x08001810:
                irq_domain_remove(iVar9);
                kfree(_segment.ehdr);
                iVar6 = -0xc;
                goto code_r0x08001828;
            }
            iVar6 = -0xc;
            _segment.ehdr = NULL;
        }
code_r0x080017d4:
        _printk(0x800038d,arg1);
    }
code_r0x08001828:
    kfree(_segment.ehdr);
    iounmap(_segment.ehdr);
code_r0x08001838:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != aiStack_c0[10]) {
        piVar13 = __stack_chk_fail();
        *extraout_x18 = sym.readl_relaxed;
        log_read_mmio(0x20,piVar13,0x8001898);
        iVar6 = *piVar13;
        log_post_read_mmio(iVar6,0x20,piVar13,0x80018cc);
        return iVar6;
    }
    return iVar6;
}


// ===== sym.readl_relaxed @ 0x08001894 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001898);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80018cc);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08001904 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001920);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001948);
    return;
}


// ===== sym.qcom_pdc_alloc @ 0x0800197c (size 408) =====

ulong sym.qcom_pdc_alloc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t *extraout_x1;
    code *pcVar7;
    uint64_t uVar8;
    int *piVar9;
    ulong *in_x18;
    uint64_t *puVar10;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    int iStack_88;
    uint32_t uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uVar6 = 0xffffffea;
    uVar8 = *arg4;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
        if ((*(uVar8 + 8) == of_fwnode_ops) && (*(arg4 + 8) == 2)) {
            uVar2 = *(arg4 + 0xc);
            uVar3 = *(arg4 + 0x10);
            puVar10 = arg3 & 0xffffffff;
            pcVar7 = obj.pdc_base;
            arg3 = uVar2;
            uVar6 = irq_domain_set_hwirq_and_chip(arg1);
            arg4 = pcVar7;
            if (uVar6 == 0) {
                uVar8 = _segment.ehdr;
                if (0 < _segment.ehdr) {
                    uVar1 = uVar3 & 0xf;
                    piVar9 = CONCAT44(*0x8000004,_segment.ehdr) + 4;
                    do {
                        uVar4 = piVar9[-1];
                        if ((uVar4 <= uVar2) && (uVar2 < piVar9[1] + uVar4)) {
                            if ((uVar3 & 0xc) != 0) {
                                uVar1 = 4;
                            }
                            uStack_98 = *(*(arg1 + 0x48) + 0x30);
                            iStack_88 = *piVar9 + (uVar2 - uVar4);
                            if ((uVar3 & 3) != 0) {
                                uVar1 = 1;
                            }
                            uStack_90 = 3;
                            uStack_84 = uVar1;
                            ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"",uVar2);
                            arg4 = &uStack_98;
                            uVar6 = irq_domain_alloc_irqs_parent(arg1,arg2 & 0xffffffffU);
                            arg3 = puVar10;
                            goto code_r0x08001acc;
                        }
                        piVar9 = piVar9 + 3;
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                }
                uVar6 = irq_domain_disconnect_hierarchy(*(arg1 + 0x48),arg2 & 0xffffffffU);
                arg4 = pcVar7;
            }
        }
        else {
            uVar6 = 0xffffffea;
        }
    }
code_r0x08001acc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    __stack_chk_fail(uVar6);
    uVar8 = *extraout_x1;
    uVar6 = 0xffffffea;
    if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
        if ((*(uVar8 + 8) != of_fwnode_ops) || (extraout_x1[1] != 2)) {
            return 0xffffffea;
        }
        uVar6 = 0;
        *arg3 = *(extraout_x1 + 0xc);
        *arg4 = extraout_x1[2] & 0xf;
    }
    return uVar6;
}


// ===== sym.qcom_pdc_translate @ 0x08001b14 (size 100) =====

ulong sym.qcom_pdc_translate(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint64_t uVar2;
    
    uVar2 = *arg1;
    uVar1 = 0xffffffea;
    if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
        if ((*(uVar2 + 8) != of_fwnode_ops) || (*(arg1 + 8) != 2)) {
            return 0xffffffea;
        }
        uVar1 = 0;
        *arg2 = *(arg1 + 0xc);
        *arg3 = *(arg1 + 0x10) & 0xf;
    }
    return uVar1;
}


// ===== sym.qcom_pdc_gic_enable @ 0x08001b78 (size 200) =====

void sym.qcom_pdc_gic_enable(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 8);
    uVar2 = uVar1 + 0x1f;
    if (-1 < uVar1) {
        uVar2 = uVar1;
    }
    uVar3 = _raw_spin_lock_irqsave(obj.pdc_lock);
    iVar4 = (uVar2 >> 5) * 4;
    uVar2 = sym.readl_relaxed(_segment.ehdr + iVar4 + 0x10);
    sym.writel_relaxed(uVar2 | 1 << (uVar1 & 0x1f),_segment.ehdr + iVar4 + 0x10);
    _raw_spin_unlock_irqrestore(obj.pdc_lock,uVar3);
    ipc_log_string(_segment.ehdr,"",*(arg1 + 8),1);
    irq_chip_enable_parent(arg1);
    return;
}


// ===== sym.qcom_pdc_gic_disable @ 0x08001c40 (size 200) =====

void sym.qcom_pdc_gic_disable(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 8);
    uVar2 = uVar1 + 0x1f;
    if (-1 < uVar1) {
        uVar2 = uVar1;
    }
    uVar3 = _raw_spin_lock_irqsave(obj.pdc_lock);
    iVar4 = (uVar2 >> 5) * 4;
    uVar2 = sym.readl_relaxed(_segment.ehdr + iVar4 + 0x10);
    sym.writel_relaxed(uVar2 & (1 << (uVar1 & 0x1f) ^ 0xffffffffU),_segment.ehdr + iVar4 + 0x10);
    _raw_spin_unlock_irqrestore(obj.pdc_lock,uVar3);
    ipc_log_string(_segment.ehdr,"",*(arg1 + 8),0);
    irq_chip_disable_parent(arg1);
    return;
}


// ===== sym.qcom_pdc_gic_set_type @ 0x08001d08 (size 664) =====

void sym.qcom_pdc_gic_set_type(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    code *pcVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int iVar12;
    ulong uVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar4 = arg2 - 1;
    iStack_68 = *(iVar6 + 0x5e0);
    if ((7 < uVar4) || ((0x8fU >> (uVar4 & 0x1f) & 1) == 0)) {
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x800,0x8001d5c);
        (*pcVar8)();
    }
    uVar11 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
    uVar2 = *(uVar11 + 0x80006a8);
    uVar3 = *(uVar11 + 0x80006c8);
    uVar13 = *(*(arg1 + 0x28) + 8);
    uVar9 = sym.readl_relaxed(_segment.ehdr + (*(arg1 + 8) & 0xffffffff) * 4 + 0x110);
    sym.writel_relaxed(uVar3,_segment.ehdr + (*(arg1 + 8) & 0xffffffff) * 4 + 0x110);
    ipc_log_string(_segment.ehdr,"",*(arg1 + 8),uVar3,uVar2);
    uVar11 = *(arg1 + 8);
    if (0xef < uVar11) goto code_r0x08001f98;
    *(reloc.qcom_pdc_gic_disable.47355ed22d87406ff8918f723a765f79.cfi_jt + uVar11 * 8) = uVar3;
    piVar7 = _segment.ehdr;
    if (0x780 < (uVar11 << 3 | 4)) {
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(1,0x8001fa0);
        (*pcVar8)();
    }
    iVar12 = uVar13;
    iVar5 = iVar12 + -0x20;
    iVar12 = iVar12 + -1;
    if (-1 < iVar5) {
        iVar12 = iVar5;
    }
    *(uVar11 * 8 + 0x8000094) = 1;
    if (piVar7 == NULL) {
code_r0x08001f64:
        uVar13 = irq_chip_set_type_parent(arg1,uVar2);
        if (uVar13 == 0) {
            if (uVar9 != uVar3) {
                irq_chip_set_parent_state(arg1,0,0);
            }
            uVar13 = 0;
        }
    }
    else {
        uVar11 = (iVar12 >> 5) << 2;
        if (uVar11 <= piVar7[1]) {
            uVar13 = _raw_spin_lock_irqsave(obj.pdc_lock);
            if (_segment.ehdr[2] == '\0') {
                uVar10 = sym.readl(*_segment.ehdr + uVar11);
            }
            else {
                uStack_6c = 0;
                qcom_scm_io_readl(*_segment.ehdr + uVar11,&uStack_6c);
                uVar10 = uStack_6c;
            }
            uVar14 = 1L << (iVar5 % 0x20 & 0x3f);
            uVar1 = uVar10 | uVar14;
            if ((uVar4 & 0xfffffffb) != 3) {
                uVar1 = uVar10 & (uVar14 ^ 0xffffffff);
            }
            if (_segment.ehdr[2] == '\0') {
                sym.writel(uVar1,*_segment.ehdr + uVar11);
            }
            else {
                qcom_scm_io_writel(*_segment.ehdr + uVar11);
            }
            ipc_log_string(_segment.ehdr,"",iVar5,iVar12 >> 5,iVar5 % 0x20,uVar2 & 4);
            _raw_spin_unlock_irqrestore(obj.pdc_lock,uVar13);
            goto code_r0x08001f64;
        }
        uVar13 = 0xfffffff2;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar13);
code_r0x08001f98:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8001f9c);
    (*pcVar8)();
}


// ===== sym.readl @ 0x08001fa0 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001fa4);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8001fe8);
    return uVar1;
}


// ===== sym.writel @ 0x08002020 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800203c);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002068);
    return;
}


// ===== sym.qcom_pdc_gpio_domain_select @ 0x0800209c (size 20) =====

bool sym.qcom_pdc_gpio_domain_select(ulong noname_0,uchar noname_1 [16],uint32_t arg1)

{
    return arg1 == 9;
}


// ===== sym.qcom_pdc_gpio_alloc @ 0x080020b0 (size 432) =====

ulong sym.qcom_pdc_gpio_alloc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong uVar7;
    uint64_t uVar8;
    int *piVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    int iStack_88;
    uint32_t uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uVar7 = 0xffffffea;
    uVar8 = *arg4;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
        if ((*(uVar8 + 8) == of_fwnode_ops) && (*(arg4 + 8) == 2)) {
            uVar2 = *(arg4 + 0xc);
            uVar8 = arg2 & 0xffffffff;
            if (uVar2 != 0xffffffff) {
                uVar3 = *(arg4 + 0x10);
                uVar7 = irq_domain_set_hwirq_and_chip(arg1,uVar8,uVar2,obj.pdc_base,0);
                if (uVar7 != 0) goto code_r0x08002184;
                uVar10 = _segment.ehdr;
                if (0 < _segment.ehdr) {
                    uVar1 = uVar3 & 0xf;
                    piVar9 = CONCAT44(*0x8000004,_segment.ehdr) + 4;
                    do {
                        uVar4 = piVar9[-1];
                        if ((uVar4 <= uVar2) && (uVar2 < piVar9[1] + uVar4)) {
                            if ((uVar3 & 0xc) != 0) {
                                uVar1 = 4;
                            }
                            uStack_98 = *(*(arg1 + 0x48) + 0x30);
                            iStack_88 = *piVar9 + (uVar2 - uVar4);
                            if ((uVar3 & 3) != 0) {
                                uVar1 = 1;
                            }
                            uStack_90 = 3;
                            uStack_84 = uVar1;
                            ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"",uVar2);
                            uVar7 = irq_domain_alloc_irqs_parent(arg1,uVar8,arg3 & 0xffffffff,&uStack_98);
                            goto code_r0x08002184;
                        }
                        piVar9 = piVar9 + 3;
                        uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                }
                arg1 = *(arg1 + 0x48);
            }
            uVar7 = irq_domain_disconnect_hierarchy(arg1,uVar8);
        }
        else {
            uVar7 = 0xffffffea;
        }
    }
code_r0x08002184:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    __stack_chk_fail(uVar7);
    *extraout_x18 = sym.pdc_suspend;
    if (obj.in_hibernation == 0x1) {
        piVar9 = CONCAT44(*0x8000004,_segment.ehdr) + (_segment.ehdr - 1) * 0xc;
        uVar2 = piVar9[2] + *piVar9;
        _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        if (0x1f < uVar2) {
            uVar2 = uVar2 >> 5;
            _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
            if ((((uVar2 != 1) &&
                 (_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x18), uVar2 != 2)) &&
                (_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x1c), uVar2 != 3)) &&
               (((_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x20), uVar2 != 4 &&
                 (_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x24), uVar2 != 5)) &&
                ((_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x28), uVar2 != 6 &&
                 (_segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c), uVar2 != 7)))))) {
                sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x30);
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x80023c0);
                (*pcVar6)();
            }
        }
    }
    return 0;
}


// ===== sym.pdc_suspend @ 0x08002260 (size 352) =====

ulong sym.pdc_suspend(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    int *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.in_hibernation == 0x1) {
        piVar3 = CONCAT44(*0x8000004,_segment.ehdr) + (_segment.ehdr + -1) * 0xc;
        uVar1 = piVar3[2] + *piVar3;
        _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        if (0x1f < uVar1) {
            uVar1 = uVar1 >> 5;
            _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
            if (uVar1 != 1) {
                _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x18);
                if (uVar1 != 2) {
                    _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x1c);
                    if (uVar1 != 3) {
                        _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x20);
                        if (uVar1 != 4) {
                            _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x24);
                            if (uVar1 != 5) {
                                _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x28);
                                if (uVar1 != 6) {
                                    _segment.ehdr = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c);
                                    if (uVar1 != 7) {
                                        sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + 0x30);
    //WARNING: Does not return
                                        pcVar2 = SoftwareBreakpoint(0x5512,0x80023c0);
                                        (*pcVar2)();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}


// ===== sym.pdc_resume @ 0x080023c0 (size 372) =====

void sym.pdc_resume(void)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.in_hibernation == 0x1) {
        iVar2 = 0;
        do {
            if (*(iVar2 * 8 + 0x8000094) != '\0') {
                sym.writel_relaxed(*(reloc.qcom_pdc_gic_disable.47355ed22d87406ff8918f723a765f79.cfi_jt + iVar2 * 8),
                                   CONCAT44(*0x8000004,_segment.ehdr) + iVar2 * 4 + 0x110);
                while( true ) {
                    uVar1 = sym.readl_relaxed(CONCAT44(*0x8000004,_segment.ehdr) + iVar2 * 4 + 0x110);
                    if (uVar1 == *(reloc.qcom_pdc_gic_disable.47355ed22d87406ff8918f723a765f79.cfi_jt + iVar2 * 8))
                    break;
                    __const_udelay(0x53e3);
                }
            }
            iVar2 = iVar2 + 1;
        } while (iVar2 != 0xf0);
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x18);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x1c);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x20);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x24);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x28);
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(_segment.ehdr,CONCAT44(*0x8000004,_segment.ehdr) + 0x2c);
        }
    }
    return;
}


// ===== sym.pdc_suspend_notifier @ 0x08002534 (size 56) =====

ulong sym.pdc_suspend_notifier(int64_t arg1,uint32_t arg2)

{
    if (arg2 == 1) {
        obj.in_hibernation = 0x1;
    }
    else if (arg2 == 2) {
        obj.in_hibernation = 0x0;
    }
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x0800256c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080025b0

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
    //switch table (4 cases) at 0x8000471
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80025c4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080025d4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.platform_irqchip_probe.cfi_jt,obj.__this_module);
    return;
}

