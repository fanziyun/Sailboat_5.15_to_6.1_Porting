// decompiled from qcom_iommu_debug by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 572) =====

//WARNING: Switch with 1 destination removed at 0x08003e24

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 != -0x76e7814a8afd6df4) {
                if ((arg1 == -0x3a05d17b0d1e8a64) && ((pcVar1 + -0x8003270 >> 3 | pcVar1 << 0x3d) < 5)) {
                    return;
                }
                goto code_r0x08003de4;
            }
            pcVar2 = sym.iommu_debug_nr_iters_get.aabe0ea5067ace97199e12937638aa45.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.iommu_debug_remove.aabe0ea5067ace97199e12937638aa45.cfi_jt;
                goto code_r0x08003204;
            }
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.iommu_debug_nr_iters_fops_open.aabe0ea5067ace97199e12937638aa45.cfi_jt;
                goto code_r0x080031e8;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08003de4;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x5233d5bc7887ae44) {
            if (arg1 == 0x7ff5a213d37b1a6) {
                if ((pcVar1 + -0x80032f0 >> 3 | pcVar1 << 0x3d) < 6) {
                    return;
                }
                goto code_r0x08003de4;
            }
            if (arg1 != 0x1d7ed092cb04d3f1) {
                if ((arg1 == 0x321969b888d4949e) && ((pcVar1 + -0x80032e0 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08003de4;
            }
            pcVar2 = sym.iommu_debug_unmap_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt;
code_r0x080031e8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 7) {
                return;
            }
            goto code_r0x08003de4;
        }
        if (arg1 == 0x5233d5bc7887ae44) {
            pcVar2 = sym.iommu_debug_profiling_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt;
code_r0x08003204:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08003de4;
        }
        if (arg1 == 0x6b141b54612cf75f) {
            pcVar2 = sym.iommu_debug_nr_iters_set.aabe0ea5067ace97199e12937638aa45.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003de4;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003de4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003e38);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003248 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.iommu_debug_usecase_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt);
    platform_driver_unregister(reloc.iommu_debug_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08003250 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.iommu_debug_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register
                          (reloc.iommu_debug_usecase_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt,obj.__this_module);
        if (iVar1 != 0) {
            platform_driver_unregister(reloc.iommu_debug_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt);
        }
    }
    return iVar1;
}


// ===== sym.iommu_debug_profiling_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003258 (size 8) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.iommu_debug_profiling_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    char *pcVar8;
    ulong *in_x18;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t arg1;
    ulong uVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    ulong unaff_x30;
    uint64_t *puStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    arg1 = *(param_1 + 0x80);
    uStack_88 = *0x8002ac0;
    uStack_80 = *0x8002ac8;
    uStack_78 = *0x8002ad0;
    uStack_70 = *0x8002ad8;
    iStack_a8 = *0x8002aa0;
    uStack_a0 = *0x8002aa8;
    uStack_98 = *0x8002ab0;
    uStack_90 = *0x8002ab8;
    mutex_lock();
    iVar2 = sym.iommu_debug_switch_usecase(arg1,*(arg1 + 0x30));
    if (iVar2 != 0) {
        uVar11 = *(arg1 + 0x28);
        piVar13 = &iStack_a8;
        seq_printf(param_1,"(average over %d iterations)\n",*(arg1 + 0x90));
        seq_printf(param_1,"%8s %19s %16s\n","size","iommu_map","iommu_unmap");
        iVar2 = 0x1000;
        do {
            uVar10 = 0;
            if (iVar2 + -1 != 0) {
                uVar10 = ~(-1L << (-LZCOUNT(iVar2 + -1) & 0x3fU));
            }
            if (*(arg1 + 0x90) == 0) {
                uVar15 = 0;
                uVar12 = 0;
                uVar10 = 0;
                if (iVar2 < 0x200000) goto code_r0x08007b08;
code_r0x08007b44:
                if (iVar2 < 0x1400000) {
                    if (iVar2 == 0x200000) {
                        pcVar8 = 0x8000bbd;
                    }
                    else {
                        if (iVar2 != 0xc00000) goto code_r0x08007bf0;
                        pcVar8 = 0x8001105;
                    }
                }
                else if (iVar2 == 0x1400000) {
                    pcVar8 = 0x8001a76;
                }
                else if (iVar2 == 0x1800000) {
                    pcVar8 = 0x80012cd;
                }
                else {
                    if (iVar2 != 0x2000000) goto code_r0x08007bf0;
                    pcVar8 = 0x8000c3a;
                }
            }
            else {
                uVar16 = 0;
                uVar12 = 0;
                uVar15 = 0;
                uVar14 = uVar10 + 0x10000 & (uVar10 ^ 0xffffffffffffffff);
                do {
                    iVar3 = ktime_get();
                    iVar1 = iommu_map(uVar11,uVar14,iVar2 + 0x7fffffffU & -iVar2,iVar2,3);
                    if (iVar1 == 0) {
                        iVar4 = ktime_get();
                        uVar15 = (iVar4 - iVar3) + uVar15;
                        iVar3 = ktime_get();
                        iVar4 = iommu_unmap(uVar11,uVar14,iVar2);
                        if (iVar4 == iVar2) {
                            iVar4 = ktime_get();
                            uVar12 = (uVar12 - iVar3) + iVar4;
                        }
                        else {
                            seq_printf(param_1,"Only unmapped %zx instead of %zx\n",iVar4,iVar2);
                        }
                    }
                    else {
                        seq_puts(param_1,"Failed to map\n");
                    }
                    uVar10 = *(arg1 + 0x90);
                    uVar16 = uVar16 + 1;
                } while (uVar16 < *(arg1 + 0x90));
                if (0x1fffff < iVar2) goto code_r0x08007b44;
code_r0x08007b08:
                if (iVar2 < 0x4000) {
                    pcVar8 = 0x80012ca;
                    if (iVar2 == 0x1000) goto code_r0x080079bc;
                    if (iVar2 == 0x2000) {
                        pcVar8 = 0x8000c37;
                        goto code_r0x080079bc;
                    }
code_r0x08007bf0:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar8 = "unknown size";
                }
                else if (iVar2 == 0x4000) {
                    pcVar8 = 0x8001936;
                }
                else if (iVar2 == 0x10000) {
                    pcVar8 = 0x8001682;
                }
                else {
                    if (iVar2 != 0x100000) goto code_r0x08007bf0;
                    pcVar8 = 0x80018d6;
                }
            }
code_r0x080079bc:
            uVar14 = 0;
            if (uVar10 != 0) {
                uVar14 = uVar15 / uVar10;
            }
            uVar15 = 0;
            if (uVar10 != 0) {
                uVar15 = uVar12 / uVar10;
            }
            seq_printf(param_1,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar8,uVar14 / 1000,
                       uVar14 + (uVar14 / 1000) * -1000,uVar15 / 1000,uVar15 + (uVar15 / 1000) * -1000);
            piVar13 = piVar13 + 1;
            iVar2 = *piVar13;
        } while (iVar2 != 0);
        piVar13 = &iStack_a8;
        seq_putc(param_1,10);
        seq_printf(param_1,"%8s %19s %16s\n","size","iommu_map_sg","iommu_unmap");
        iVar2 = 0x1000;
        do {
            puStack_b8 = NULL;
            uStack_b0 = 0;
            uVar10 = 0;
            if (iVar2 + -1 != 0) {
                uVar10 = ~(-1L << (-LZCOUNT(iVar2 + -1) & 0x3fU));
            }
            iVar1 = sym.iommu_debug_build_phoney_sg_table(&puStack_b8,iVar2);
            if (iVar1 != 0) {
                seq_puts(param_1,"couldn\'t build phoney sg table! bailing...\n");
                break;
            }
            if (*(arg1 + 0x90) == 0) {
                uVar15 = 0;
                uVar12 = 0;
                uVar16 = 0;
                if (0x1fffff < iVar2) goto code_r0x08007d34;
code_r0x08007d84:
                if (iVar2 < 0x4000) {
                    pcVar8 = 0x80012ca;
                    if (iVar2 != 0x1000) {
                        if (iVar2 != 0x2000) goto code_r0x08007eec;
                        pcVar8 = 0x8000c37;
                    }
                }
                else if (iVar2 == 0x4000) {
                    pcVar8 = 0x8001936;
                }
                else if (iVar2 == 0x10000) {
                    pcVar8 = 0x8001682;
                }
                else {
                    if (iVar2 != 0x100000) goto code_r0x08007eec;
                    pcVar8 = 0x80018d6;
                }
            }
            else {
                uVar9 = 0;
                uVar12 = 0;
                uVar15 = 0;
                uVar10 = uVar10 + 0x10000 & (uVar10 ^ 0xffffffffffffffff);
                do {
                    iVar3 = ktime_get();
                    iVar4 = iommu_map_sg(uVar11,uVar10,puStack_b8,uStack_b0._4_4_,3);
                    if (iVar4 != iVar2) {
                        seq_puts(param_1,"Failed to map_sg\n");
                        goto code_r0x08007eac;
                    }
                    iVar4 = ktime_get();
                    iVar5 = ktime_get();
                    iVar6 = iommu_unmap(uVar11,uVar10,iVar2);
                    if (iVar6 != iVar2) {
                        seq_printf(param_1,"Only unmapped %zx instead of %zx\n",iVar6,iVar2);
                        goto code_r0x08007eac;
                    }
                    uVar15 = iVar4 + (uVar15 - iVar3);
                    iVar3 = ktime_get();
                    uVar16 = *(arg1 + 0x90);
                    uVar12 = iVar3 + (uVar12 - iVar5);
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar16);
                if (iVar2 < 0x200000) goto code_r0x08007d84;
code_r0x08007d34:
                if (iVar2 < 0x1400000) {
                    if (iVar2 == 0x200000) {
                        pcVar8 = 0x8000bbd;
                        goto code_r0x08007e5c;
                    }
                    if (iVar2 == 0xc00000) {
                        pcVar8 = 0x8001105;
                        goto code_r0x08007e5c;
                    }
code_r0x08007eec:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar8 = "unknown size";
                }
                else if (iVar2 == 0x1400000) {
                    pcVar8 = 0x8001a76;
                }
                else if (iVar2 == 0x1800000) {
                    pcVar8 = 0x80012cd;
                }
                else {
                    if (iVar2 != 0x2000000) goto code_r0x08007eec;
                    pcVar8 = 0x8000c3a;
                }
            }
code_r0x08007e5c:
            uVar14 = uVar16;
            uVar10 = 0;
            if (uVar14 != 0) {
                uVar10 = uVar15 / uVar14;
            }
            uVar15 = 0;
            if (uVar14 != 0) {
                uVar15 = uVar12 / uVar14;
            }
            seq_printf(param_1,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar8,uVar10 / 1000,
                       uVar10 + (uVar10 / 1000) * -1000,uVar15 / 1000,uVar15 + (uVar15 / 1000) * -1000);
code_r0x08007eac:
            if (uStack_b0 != 0) {
                uVar16 = 0;
                puVar7 = puStack_b8;
                do {
                    __free_pages(*puVar7 & 0xfffffffffffffffc,0);
                    uVar16 = uVar16 + 1;
                    puVar7 = sg_next(puVar7);
                } while (uVar16 < uStack_b0);
            }
            sg_free_table(&puStack_b8);
            piVar13 = piVar13 + 1;
            iVar2 = *piVar13;
        } while (iVar2 != 0);
    }
    mutex_unlock(arg1 + 0x38);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return 0;
}


// ===== sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003260 (size 8) =====

int sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    bool bVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    char *pcVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint64_t *puStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    int64_t aiStack_78 [5];
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    aiStack_78[4] = *(iVar15 + 0x5e0);
    iVar16 = *(param_1 + 0x80);
    aiStack_78[1] = 0x200000;
    aiStack_78[2] = 0xc00000;
    aiStack_78[3] = 0;
    iStack_80 = 0x1000;
    aiStack_78[0] = 0x10000;
    iVar15 = iVar16 + 0x38;
    mutex_lock(iVar15);
    iVar9 = sym.iommu_debug_switch_usecase(iVar16,*(iVar16 + 0x30));
    if (iVar9 == 0) {
        mutex_unlock(iVar15);
        uVar6 = 0xffffffea;
    }
    else {
        piVar17 = *(iVar16 + 0x20);
        uVar4 = sym.__functional_dma_api_alloc_test(piVar17,param_1);
        uVar5 = sym.__functional_dma_api_basic_test(piVar17,param_1);
        iVar9 = piVar17[0xe];
        if (iVar9 == 0) {
            iVar9 = *piVar17;
        }
        piVar18 = &iStack_80;
        _printk(0x8000f10,iVar9);
        seq_printf(param_1,"Map SG DMA API test");
        iVar9 = 0x1000;
        do {
            puStack_90 = NULL;
            uStack_88 = 0;
            uVar6 = sym.iommu_debug_build_phoney_sg_table(&puStack_90,iVar9);
            if (uVar6 != 0) {
                seq_puts(param_1,"couldn\'t build phoney sg table! bailing...\n");
                goto code_r0x08005400;
            }
            iVar8 = dma_map_sg_attrs(piVar17,puStack_90,uStack_88 & 0xffffffff,0,0);
            if (iVar8 == 0) {
                uVar6 = 0xffffffea;
                puVar10 = puStack_90;
            }
            else {
                uVar6 = sym.iommu_debug_check_mapping_sg_flags
                                  (piVar17,puStack_90,(puStack_90[1] + *(puStack_90 + 0xc) + 0xfffU >> 0xc) - 1,
                                   uStack_88 & 0xffffffff);
                dma_unmap_sg_attrs(piVar17,puStack_90,uStack_88 & 0xffffffff,0,0);
                puVar10 = puStack_90;
            }
            puStack_90 = puVar10;
            if (uStack_88 != 0) {
                uVar19 = 0;
                do {
                    __free_pages(*puVar10 & 0xfffffffffffffffc,0);
                    uVar19 = uVar19 + 1;
                    puVar10 = sg_next(puVar10);
                } while (uVar19 < uStack_88);
            }
            sg_free_table(&puStack_90);
            piVar18 = piVar18 + 1;
            iVar9 = *piVar18;
        } while (iVar9 != 0);
        if (uVar6 == 0) {
            iVar9 = piVar17[0xe];
            if (iVar9 == 0) {
                iVar9 = *piVar17;
            }
            _printk(0x80018bb,iVar9);
            uVar6 = 0;
            pcVar14 = "  -> SUCCEEDED\n";
        }
        else {
code_r0x08005400:
            iVar9 = piVar17[0xe];
            if (iVar9 == 0) {
                iVar9 = *piVar17;
            }
            _printk(0x8001910,iVar9);
            pcVar14 = "  -> FAILED\n";
        }
        seq_printf(param_1,pcVar14);
        uVar6 = uVar5 | uVar4 | uVar6;
        mutex_unlock(iVar15);
        if (uVar6 == 0) {
            seq_puts(param_1,"SUCCESS\n");
            goto code_r0x08005254;
        }
    }
    seq_printf(param_1,"FAIL %d\n",uVar6);
code_r0x08005254:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == aiStack_78[4]) {
        return 0;
    }
    auVar20 = __stack_chk_fail();
    uVar13 = auVar20._8_8_;
    piVar17 = auVar20._0_8_;
    *extraout_x18 = sym.__functional_dma_api_alloc_test;
    pcStack_e8 = sym.__functional_dma_api_alloc_test;
    iVar15 = sp_el0;
    iStack_f8 = *(iVar15 + 0x5e0);
    iVar15 = piVar17[0xe];
    uStack_100 = 0;
    if (iVar15 == 0) {
        iVar15 = *piVar17;
    }
    puStack_f0 = &stack0xffffffffffffffb0;
    _printk(0x800189a,iVar15);
    seq_printf(uVar13,"Allocating coherent buffer");
    iVar15 = dma_alloc_attrs(piVar17,0xb9800,&uStack_100,0xcc0,0);
    if (iVar15 == 0) {
        iVar8 = -0xc;
    }
    else {
        iVar9 = piVar17[0xe];
        if (iVar9 == 0) {
            iVar9 = *piVar17;
        }
        _printk(0x80018bb,iVar9);
        seq_printf(uVar13,"  -> SUCCEEDED\n");
        iVar9 = piVar17[0xe];
        if (iVar9 == 0) {
            iVar9 = *piVar17;
        }
        _printk(0x8001a1a,iVar9);
        seq_printf(uVar13,"Using coherent buffer");
        uVar11 = 0;
        iVar8 = 0;
        bVar2 = true;
        do {
            iVar9 = uVar11 << 10;
            uVar12 = uVar11;
            while( true ) {
                memset(iVar15,0xa5,0xb9800);
                uVar4 = uVar12 + ((uVar12 & 0xffffffff) / 0xff) * -0xff + 1;
                *(iVar15 + iVar9) = uVar4;
                if (uVar4 != (uVar4 & 0xff)) break;
                uVar12 = uVar12 + 1;
                iVar9 = iVar9 + 0x400;
                if (uVar12 == 0x2e6) {
                    if (bVar2) {
                        iVar9 = piVar17[0xe];
                        if (iVar9 == 0) {
                            iVar9 = *piVar17;
                        }
                        _printk(0x80018bb,iVar9);
                        seq_printf(uVar13,"  -> SUCCEEDED\n");
                        iVar8 = 0;
                    }
                    goto code_r0x08005650;
                }
            }
            iVar16 = piVar17[0xe];
            if (iVar16 == 0) {
                iVar16 = *piVar17;
            }
            uVar11 = ((uVar12 & 0xffffffff) / 0xff) * -0xff + uVar12 + 1;
            _printk(0x8000c60,iVar16,uVar12 & 0xffffffff,uVar4 & 0xff,uVar11 & 0xffffffff);
            seq_printf(uVar13,"  -> FAILED on iter %d since %d != %d\n",uVar12 & 0xffffffff,*(iVar15 + iVar9),
                       uVar11 & 0xffffffff);
            bVar2 = false;
            uVar11 = uVar12 + 1;
            iVar8 = -0x16;
        } while (uVar12 != 0x2e5);
code_r0x08005650:
        dma_free_attrs(piVar17,0xb9800,iVar15,uStack_100,0);
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_f8) {
        return iVar8;
    }
    auVar20 = __stack_chk_fail();
    piVar17 = auVar20._0_8_;
    *extraout_x18_00 = sym.__functional_dma_api_basic_test;
    iVar15 = piVar17[0xe];
    if (iVar15 == 0) {
        iVar15 = *piVar17;
    }
    _printk(0x80010cc,iVar15);
    seq_printf(auVar20._8_8_,"Basic DMA API test");
    iVar8 = 0;
    do {
        uVar11 = kmem_cache_alloc_trace(_seq_read,0xcc0,0x5ee);
        if (uVar11 == 0) {
            iVar7 = -0xc;
code_r0x08005880:
            iVar15 = piVar17[0xe];
            if (iVar15 == 0) {
                iVar15 = *piVar17;
            }
            _printk(0x8001910,iVar15);
            pcVar14 = "  -> FAILED\n";
            goto code_r0x080058a4;
        }
        memset(uVar11,0xa5,0x5ee);
        uVar12 = is_vmalloc_addr(uVar11);
        if (((uVar12 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar13 = dev_driver_string(piVar17);
            iVar15 = piVar17[0xe];
            if (iVar15 == 0) {
                iVar15 = *piVar17;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar13,iVar15);
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x800584c);
            (*pcVar3)();
        }
        iVar15 = (uVar11 << 8) >> 8;
        uVar1 = iVar15 + 0x8000000000;
        if ((uVar12 & 1) == 0) {
            iVar9 = dma_map_page_attrs(piVar17,(uVar1 >> 6 & 0x3ffffffffffffc0) - 0x200000000,uVar11 & 0xff8,0x5ee,1
                                       ,0);
        }
        else {
            iVar9 = -1;
        }
        iVar16 = _single_release + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iVar16 = iVar15 - _iommu_get_domain_for_dev;
        }
        iVar7 = sym.iommu_debug_check_mapping_flags(piVar17,iVar9,0x1000,iVar16);
        if (iVar7 != 0) goto code_r0x08005880;
        dma_unmap_page_attrs(piVar17,iVar9,0x5ee,1,0);
        iVar15 = 0;
        do {
            if (*(uVar11 + iVar15) != -0x5b) {
                iVar8 = ___ratelimit(obj.__functional_dma_api_basic_test._rs,"__functional_dma_api_basic_test");
                if (iVar8 != 0) {
                    _dev_err(piVar17,"data[%d] != 0xa5\n",*(uVar11 + iVar15));
                }
                iVar7 = -0x16;
                goto code_r0x08005880;
            }
            iVar15 = iVar15 + 1;
        } while (iVar15 != 0x5ee);
        kfree(uVar11);
        iVar8 = iVar8 + 1;
    } while (iVar8 != 1000);
    iVar15 = piVar17[0xe];
    if (iVar15 == 0) {
        iVar15 = *piVar17;
    }
    _printk(0x80018bb,iVar15);
    iVar7 = 0;
    pcVar14 = "  -> SUCCEEDED\n";
code_r0x080058a4:
    seq_printf(auVar20._8_8_,pcVar14);
    return iVar7;
}


// ===== sym.iommu_debug_functional_fast_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003268 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08006780)
//WARNING: Removing unreachable block (ram,0x080064a4)

void sym.iommu_debug_functional_fast_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t unaff_x19;
    char *pcVar12;
    int64_t iVar13;
    char *unaff_x21;
    int64_t unaff_x22;
    ulong uVar14;
    int64_t iVar15;
    code *unaff_x25;
    int64_t iVar16;
    ulong unaff_x30;
    int64_t aiStack_90 [6];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    aiStack_90[5] = *(iVar7 + 0x5e0);
    pcVar12 = *(param_1 + 0x80);
    piVar10 = *(pcVar12 + 0x20);
    if (piVar10 == NULL) {
        _printk(0x8000c9d,"iommu_debug_functional_fast_dma_api_show");
        uVar4 = 0xffffffea;
        goto code_r0x08005c30;
    }
    if (pcVar12[0x34] == '\0') {
        iVar7 = piVar10[0xe];
        if (iVar7 == 0) {
            iVar7 = *piVar10;
        }
        _printk(0x80014e2,iVar7);
        seq_printf(param_1,"Not a fastmap usecase\n");
        uVar4 = 0;
        unaff_x19 = param_1;
        goto code_r0x08005c30;
    }
    unaff_x21 = pcVar12 + 0x38;
    mutex_lock(unaff_x21);
    iVar7 = sym.iommu_debug_switch_usecase(pcVar12,*(pcVar12 + 0x30));
    unaff_x25 = sym.__typeid__ZTSFiP6deviceP8seq_fileP12iommu_domainPvE_global_addr;
    if (iVar7 == 0) {
        mutex_unlock(unaff_x21);
        uVar4 = 0xffffffea;
        pcVar12 = "FAIL";
        goto code_r0x08005b10;
    }
    unaff_x22 = *(pcVar12 + 0x28);
    pcVar12 = *(pcVar12 + 0x20);
code_r0x08005ac0:
    uVar4 = sym.__typeid__ZTSFiP6deviceP8seq_fileP12iommu_domainPvE_global_addr(pcVar12,param_1,unaff_x22,0);
    mutex_unlock(unaff_x21);
    pcVar12 = "SUCCESS";
    if (uVar4 != 0) {
        pcVar12 = "FAIL";
    }
code_r0x08005b10:
    seq_printf(param_1,0x8001a72,pcVar12);
    iVar13 = *(param_1 + 0x80);
    unaff_x22 = iVar13 + 0x38;
    mutex_lock(unaff_x22);
    iVar7 = sym.iommu_debug_switch_usecase(iVar13,*(iVar13 + 0x30));
    if (iVar7 == 0) {
        mutex_unlock(unaff_x22);
        uVar5 = 0xffffffea;
        pcVar12 = "FAIL";
    }
    else {
        uVar14 = *(iVar13 + 0x20);
        uVar1 = *(iVar13 + 0x28);
        if (4 < (sym.__functional_dma_api_basic_test.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt + -unaff_x25 >> 3 |
                -unaff_x25 << 0x3d)) {
            __cfi_slowpath_diag(0xc5fa2e84f2e1759c,
                                sym.__functional_dma_api_basic_test.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,0x8000ae0);
        }
        uVar5 = sym.__functional_dma_api_basic_test.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(uVar14,param_1,uVar1,0);
        mutex_unlock(unaff_x22);
        pcVar12 = "SUCCESS";
        if (uVar5 != 0) {
            pcVar12 = "FAIL";
        }
    }
    seq_printf(param_1,0x8001a72,pcVar12);
    iVar7 = *(param_1 + 0x80);
    pcVar12 = iVar7 + 0x38;
    aiStack_90[0] = 0x1000;
    aiStack_90[1] = 0x2000;
    aiStack_90[2] = 0x4000;
    aiStack_90[3] = 0x10000;
    aiStack_90[4] = 0;
    mutex_lock(pcVar12);
    piVar10 = *(iVar7 + 0x20);
    if (piVar10 == NULL) {
        mutex_unlock(pcVar12);
        unaff_x21 = 0xffffffed;
    }
    else {
        iVar7 = piVar10[0xe];
        if (iVar7 == 0) {
            iVar7 = *piVar10;
        }
        unaff_x22 = kstrdup(iVar7,0xcc0);
        mutex_unlock(pcVar12);
        if (unaff_x22 != 0) {
            iVar7 = 0;
            uVar9 = 0;
            iVar13 = 0x1000;
            uVar11 = sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt + -unaff_x25 >> 3 | -unaff_x25 << 0x3d;
            do {
                iVar15 = iVar7;
                if (iVar13 < 0x4000) {
                    pcVar12 = 0x80012ca;
                    if (iVar13 != 0x1000) {
                        if (iVar13 != 0x2000) goto code_r0x08005dd0;
                        pcVar12 = 0x8000c37;
                    }
                }
                else if (iVar13 == 0x4000) {
                    pcVar12 = 0x8001936;
                }
                else if (iVar13 == 0x10000) {
                    pcVar12 = 0x8001682;
                }
                else {
                    if (iVar13 != 0x100000) goto code_r0x08005dd4;
                    pcVar12 = 0x80018d6;
                }
code_r0x08005df0:
                _printk(0x8001706,unaff_x22,pcVar12);
                iVar7 = *(aiStack_90 + iVar15);
                if (iVar7 < 0x200000) {
                    if (iVar7 < 0x4000) {
                        pcVar12 = 0x80012ca;
                        if (iVar7 != 0x1000) {
                            if (iVar7 == 0x2000) {
                                pcVar12 = 0x8000c37;
                            }
                            else {
code_r0x08005ee8:
                                _printk(0x80014ff,"_size_to_string");
                                pcVar12 = "unknown size";
                            }
                        }
                    }
                    else if (iVar7 == 0x4000) {
                        pcVar12 = 0x8001936;
                    }
                    else if (iVar7 == 0x10000) {
                        pcVar12 = 0x8001682;
                    }
                    else {
                        if (iVar7 != 0x100000) goto code_r0x08005ee8;
                        pcVar12 = 0x80018d6;
                    }
                }
                else if (iVar7 < 0x1400000) {
                    if (iVar7 == 0x200000) {
                        pcVar12 = 0x8000bbd;
                    }
                    else {
                        if (iVar7 != 0xc00000) goto code_r0x08005ee8;
                        pcVar12 = 0x8001105;
                    }
                }
                else if (iVar7 == 0x1400000) {
                    pcVar12 = 0x8001a76;
                }
                else if (iVar7 == 0x1800000) {
                    pcVar12 = 0x80012cd;
                }
                else {
                    if (iVar7 != 0x2000000) goto code_r0x08005ee8;
                    pcVar12 = 0x8000c3a;
                }
                seq_printf(param_1,"Full VA sweep @%s:",pcVar12);
                iVar16 = *(param_1 + 0x80);
                uVar14 = *(aiStack_90 + iVar15);
                iVar7 = iVar16 + 0x38;
                mutex_lock(iVar7);
                iVar13 = sym.iommu_debug_switch_usecase(iVar16,*(iVar16 + 0x30));
                if (iVar13 == 0) {
                    mutex_unlock(iVar7);
                    iVar6 = -0x16;
                    pcVar12 = "FAIL";
                }
                else {
                    uVar1 = *(iVar16 + 0x20);
                    uVar2 = *(iVar16 + 0x28);
                    if (4 < uVar11) {
                        __cfi_slowpath_diag(0xc5fa2e84f2e1759c,
                                            sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,0x8000ae0);
                    }
                    iVar6 = sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(uVar1,param_1,uVar2,uVar14);
                    mutex_unlock(iVar7);
                    pcVar12 = "SUCCESS";
                    if (iVar6 != 0) {
                        pcVar12 = "FAIL";
                    }
                }
                seq_printf(param_1,0x8001a72,pcVar12);
                uVar14 = 0x80018bb;
                if (iVar6 != 0) {
                    uVar14 = 0x8001910;
                }
                pcVar12 = "  -> SUCCEEDED\n";
                if (iVar6 != 0) {
                    pcVar12 = "  -> FAILED\n";
                }
                _printk(uVar14,unaff_x22);
                seq_printf(param_1,pcVar12);
                if (iVar15 - 0x20U < 0xffffffffffffffd8) {
code_r0x08006700:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x8006704);
                    (*pcVar3)();
                }
                iVar7 = iVar15 + 8;
                if (iVar6 != 0) {
                    uVar9 = 0xffffffea;
                }
                iVar13 = *(aiStack_90 + iVar15 + 8);
                if (0x1fffff < iVar13) {
                    iVar15 = iVar7;
                    if (iVar13 < 0x1400000) {
                        if (iVar13 == 0x200000) {
                            pcVar12 = 0x8000bbd;
                        }
                        else {
                            if (iVar13 != 0xc00000) goto code_r0x08005dd4;
                            pcVar12 = 0x8001105;
                        }
                    }
                    else if (iVar13 == 0x1400000) {
                        pcVar12 = 0x8001a76;
                    }
                    else if (iVar13 == 0x1800000) {
                        pcVar12 = 0x80012cd;
                    }
                    else if (iVar13 == 0x2000000) {
                        pcVar12 = 0x8000c3a;
                    }
                    else {
code_r0x08005dd4:
                        _printk(0x80014ff,"_size_to_string");
                        pcVar12 = "unknown size";
                        iVar15 = iVar7;
                    }
                    goto code_r0x08005df0;
                }
            } while( true );
        }
        unaff_x21 = 0xfffffff4;
    }
    goto code_r0x08005c28;
code_r0x08005dd0:
    if (iVar13 != 0) goto code_r0x08005dd4;
    _printk(0x800133d,unaff_x22,0x80012ca);
    seq_printf(param_1,"bonus map:");
    iVar15 = *(param_1 + 0x80);
    iVar7 = iVar15 + 0x38;
    mutex_lock(iVar7);
    iVar13 = sym.iommu_debug_switch_usecase(iVar15,*(iVar15 + 0x30));
    if (iVar13 == 0) {
        mutex_unlock(iVar7);
        seq_printf(param_1,0x8001a72,"FAIL");
    }
    else {
        uVar14 = *(iVar15 + 0x20);
        uVar1 = *(iVar15 + 0x28);
        if (4 < uVar11) {
            __cfi_slowpath_diag(0xc5fa2e84f2e1759c,sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                                0x8000ae0);
        }
        iVar6 = sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(uVar14,param_1,uVar1,0x1000);
        mutex_unlock(iVar7);
        pcVar12 = "SUCCESS";
        if (iVar6 != 0) {
            pcVar12 = "FAIL";
        }
        seq_printf(param_1,0x8001a72,pcVar12);
        if (iVar6 == 0) {
            pcVar12 = "  -> SUCCEEDED\n";
            uVar14 = 0x80018bb;
            goto code_r0x08006140;
        }
    }
    uVar9 = 0xffffffea;
    pcVar12 = "  -> FAILED\n";
    uVar14 = 0x8001910;
code_r0x08006140:
    _printk(uVar14,unaff_x22);
    seq_printf(param_1,pcVar12);
    iVar7 = 0;
    iVar13 = 0x1000;
    do {
        iVar15 = iVar7;
        if (iVar13 < 0x4000) {
            pcVar12 = 0x80012ca;
            if (iVar13 != 0x1000) {
                if (iVar13 != 0x2000) break;
                pcVar12 = 0x8000c37;
            }
        }
        else if (iVar13 == 0x4000) {
            pcVar12 = 0x8001936;
        }
        else if (iVar13 == 0x10000) {
            pcVar12 = 0x8001682;
        }
        else {
            if (iVar13 != 0x100000) goto code_r0x08006260;
            pcVar12 = 0x80018d6;
        }
code_r0x0800627c:
        _printk(0x8001669,unaff_x22,pcVar12);
        iVar7 = *(aiStack_90 + iVar15);
        if (iVar7 < 0x200000) {
            if (iVar7 < 0x4000) {
                pcVar12 = 0x80012ca;
                if (iVar7 != 0x1000) {
                    if (iVar7 == 0x2000) {
                        pcVar12 = 0x8000c37;
                    }
                    else {
code_r0x08006374:
                        _printk(0x80014ff,"_size_to_string");
                        pcVar12 = "unknown size";
                    }
                }
            }
            else if (iVar7 == 0x4000) {
                pcVar12 = 0x8001936;
            }
            else if (iVar7 == 0x10000) {
                pcVar12 = 0x8001682;
            }
            else {
                if (iVar7 != 0x100000) goto code_r0x08006374;
                pcVar12 = 0x80018d6;
            }
        }
        else if (iVar7 < 0x1400000) {
            if (iVar7 == 0x200000) {
                pcVar12 = 0x8000bbd;
            }
            else {
                if (iVar7 != 0xc00000) goto code_r0x08006374;
                pcVar12 = 0x8001105;
            }
        }
        else if (iVar7 == 0x1400000) {
            pcVar12 = 0x8001a76;
        }
        else if (iVar7 == 0x1800000) {
            pcVar12 = 0x80012cd;
        }
        else {
            if (iVar7 != 0x2000000) goto code_r0x08006374;
            pcVar12 = 0x8000c3a;
        }
        seq_printf(param_1,"Rand VA sweep @%s:",pcVar12);
        iVar16 = *(param_1 + 0x80);
        uVar14 = *(aiStack_90 + iVar15);
        iVar7 = iVar16 + 0x38;
        mutex_lock(iVar7);
        iVar13 = sym.iommu_debug_switch_usecase(iVar16,*(iVar16 + 0x30));
        if (iVar13 == 0) {
            mutex_unlock(iVar7);
            iVar6 = -0x16;
            pcVar12 = "FAIL";
        }
        else {
            iVar6 = sym.__rand_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
                              (*(iVar16 + 0x20),param_1,*(iVar16 + 0x28),uVar14);
            mutex_unlock(iVar7);
            pcVar12 = "SUCCESS";
            if (iVar6 != 0) {
                pcVar12 = "FAIL";
            }
        }
        seq_printf(param_1,0x8001a72,pcVar12);
        uVar14 = 0x80018bb;
        if (iVar6 != 0) {
            uVar14 = 0x8001910;
        }
        pcVar12 = "  -> SUCCEEDED\n";
        if (iVar6 != 0) {
            pcVar12 = "  -> FAILED\n";
        }
        _printk(uVar14,unaff_x22);
        seq_printf(param_1,pcVar12);
        if (iVar15 - 0x20U < 0xffffffffffffffd8) goto code_r0x08006700;
        iVar7 = iVar15 + 8;
        if (iVar6 != 0) {
            uVar9 = 0xffffffea;
        }
        iVar13 = *(aiStack_90 + iVar15 + 8);
        if (0x1fffff < iVar13) {
            iVar15 = iVar7;
            if (iVar13 < 0x1400000) {
                if (iVar13 == 0x200000) {
                    pcVar12 = 0x8000bbd;
                }
                else {
                    if (iVar13 != 0xc00000) goto code_r0x08006260;
                    pcVar12 = 0x8001105;
                }
            }
            else if (iVar13 == 0x1400000) {
                pcVar12 = 0x8001a76;
            }
            else if (iVar13 == 0x1800000) {
                pcVar12 = 0x80012cd;
            }
            else if (iVar13 == 0x2000000) {
                pcVar12 = 0x8000c3a;
            }
            else {
code_r0x08006260:
                _printk(0x80014ff,"_size_to_string");
                pcVar12 = "unknown size";
                iVar15 = iVar7;
            }
            goto code_r0x0800627c;
        }
    } while( true );
    if (iVar13 != 0) goto code_r0x08006260;
    _printk(0x8000e05,unaff_x22,0x80012ca);
    seq_printf(param_1,"TLB stress sweep:");
    iVar15 = *(param_1 + 0x80);
    iVar7 = iVar15 + 0x38;
    mutex_lock(iVar7);
    iVar13 = sym.iommu_debug_switch_usecase(iVar15,*(iVar15 + 0x30));
    if (iVar13 == 0) {
        mutex_unlock(iVar7);
        seq_printf(param_1,0x8001a72,"FAIL");
code_r0x080065b8:
        unaff_x25 = NULL;
        pcVar12 = "  -> FAILED\n";
        uVar14 = 0x8001910;
    }
    else {
        iVar6 = sym.__tlb_stress_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
                          (*(iVar15 + 0x20),param_1,*(iVar15 + 0x28),0);
        mutex_unlock(iVar7);
        pcVar12 = "SUCCESS";
        if (iVar6 != 0) {
            pcVar12 = "FAIL";
        }
        seq_printf(param_1,0x8001a72,pcVar12);
        if (iVar6 != 0) goto code_r0x080065b8;
        unaff_x25 = 0x1;
        pcVar12 = "  -> SUCCEEDED\n";
        uVar14 = 0x80018bb;
    }
    _printk(uVar14,unaff_x22);
    seq_printf(param_1,pcVar12);
    _printk(0x80013d9,unaff_x22);
    seq_printf(param_1,"second bonus map:");
    iVar15 = *(param_1 + 0x80);
    iVar7 = iVar15 + 0x38;
    mutex_lock(iVar7);
    iVar13 = sym.iommu_debug_switch_usecase(iVar15,*(iVar15 + 0x30));
    if (iVar13 == 0) {
        mutex_unlock(iVar7);
        seq_printf(param_1,0x8001a72,"FAIL");
    }
    else {
        uVar14 = *(iVar15 + 0x20);
        uVar1 = *(iVar15 + 0x28);
        if (4 < uVar11) {
            __cfi_slowpath_diag(0xc5fa2e84f2e1759c,sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                                0x8000ae0);
        }
        iVar6 = sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(uVar14,param_1,uVar1,0x1000);
        mutex_unlock(iVar7);
        pcVar12 = "SUCCESS";
        if (iVar6 != 0) {
            pcVar12 = "FAIL";
        }
        seq_printf(param_1,0x8001a72,pcVar12);
        if (iVar6 == 0) {
            uVar8 = 1;
            pcVar12 = "  -> SUCCEEDED\n";
            uVar14 = 0x80018bb;
            goto code_r0x080066d4;
        }
    }
    uVar8 = 0;
    pcVar12 = "  -> FAILED\n";
    uVar14 = 0x8001910;
code_r0x080066d4:
    if ((uVar8 & unaff_x25) == 0) {
        uVar9 = 0xffffffea;
    }
    unaff_x21 = uVar9;
    _printk(uVar14,unaff_x22);
    seq_printf(param_1,pcVar12);
    kfree(unaff_x22);
code_r0x08005c28:
    uVar4 = uVar5 | uVar4 | unaff_x21;
    unaff_x19 = param_1;
code_r0x08005c30:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == aiStack_90[5]) {
        return;
    }
    __stack_chk_fail(uVar4);
    __cfi_slowpath_diag(0xc5fa2e84f2e1759c,sym.__typeid__ZTSFiP6deviceP8seq_fileP12iommu_domainPvE_global_addr,
                        0x8000ae0);
    param_1 = unaff_x19;
    goto code_r0x08005ac0;
}


// ===== sym.__typeid__ZTSFiP6deviceP8seq_fileP12iommu_domainPvE_global_addr @ 0x08003270 (size 8) =====

int sym.__typeid__ZTSFiP6deviceP8seq_fileP12iommu_domainPvE_global_addr(int64_t *param_1,ulong param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int64_t *arg1;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    char *pcVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    iVar12 = param_1[0xe];
    uStack_70 = 0;
    if (iVar12 == 0) {
        iVar12 = *param_1;
    }
    _printk(0x800189a,iVar12);
    seq_printf(param_2,"Allocating coherent buffer");
    iVar12 = dma_alloc_attrs(param_1,0xb9800,&uStack_70,0xcc0,0);
    if (iVar12 == 0) {
        iVar6 = -0xc;
    }
    else {
        iVar13 = param_1[0xe];
        if (iVar13 == 0) {
            iVar13 = *param_1;
        }
        _printk(0x80018bb,iVar13);
        seq_printf(param_2,"  -> SUCCEEDED\n");
        iVar13 = param_1[0xe];
        if (iVar13 == 0) {
            iVar13 = *param_1;
        }
        _printk(0x8001a1a,iVar13);
        seq_printf(param_2,"Using coherent buffer");
        uVar7 = 0;
        iVar6 = 0;
        bVar3 = true;
        do {
            iVar13 = uVar7 << 10;
            uVar8 = uVar7;
            while( true ) {
                memset(iVar12,0xa5,0xb9800);
                uVar1 = uVar8 + ((uVar8 & 0xffffffff) / 0xff) * -0xff + 1;
                *(iVar12 + iVar13) = uVar1;
                if (uVar1 != (uVar1 & 0xff)) break;
                uVar8 = uVar8 + 1;
                iVar13 = iVar13 + 0x400;
                if (uVar8 == 0x2e6) {
                    if (bVar3) {
                        iVar13 = param_1[0xe];
                        if (iVar13 == 0) {
                            iVar13 = *param_1;
                        }
                        _printk(0x80018bb,iVar13);
                        seq_printf(param_2,"  -> SUCCEEDED\n");
                        iVar6 = 0;
                    }
                    goto code_r0x08005650;
                }
            }
            iVar10 = param_1[0xe];
            if (iVar10 == 0) {
                iVar10 = *param_1;
            }
            uVar7 = ((uVar8 & 0xffffffff) / 0xff) * -0xff + uVar8 + 1;
            _printk(0x8000c60,iVar10,uVar8 & 0xffffffff,uVar1 & 0xff,uVar7 & 0xffffffff);
            seq_printf(param_2,"  -> FAILED on iter %d since %d != %d\n",uVar8 & 0xffffffff,*(iVar12 + iVar13),
                       uVar7 & 0xffffffff);
            bVar3 = false;
            uVar7 = uVar8 + 1;
            iVar6 = -0x16;
        } while (uVar8 != 0x2e5);
code_r0x08005650:
        dma_free_attrs(param_1,0xb9800,iVar12,uStack_70,0);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    auVar14 = __stack_chk_fail();
    arg1 = auVar14._0_8_;
    *extraout_x18 = sym.__functional_dma_api_basic_test;
    iVar12 = arg1[0xe];
    if (iVar12 == 0) {
        iVar12 = *arg1;
    }
    _printk(0x80010cc,iVar12);
    seq_printf(auVar14._8_8_,"Basic DMA API test");
    iVar6 = 0;
    do {
        uVar7 = kmem_cache_alloc_trace(_seq_read,0xcc0,0x5ee);
        if (uVar7 == 0) {
            iVar5 = -0xc;
code_r0x08005880:
            iVar12 = arg1[0xe];
            if (iVar12 == 0) {
                iVar12 = *arg1;
            }
            _printk(0x8001910,iVar12);
            pcVar11 = "  -> FAILED\n";
            goto code_r0x080058a4;
        }
        memset(uVar7,0xa5,0x5ee);
        uVar8 = is_vmalloc_addr(uVar7);
        if (((uVar8 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar9 = dev_driver_string(arg1);
            iVar12 = arg1[0xe];
            if (iVar12 == 0) {
                iVar12 = *arg1;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar9,iVar12);
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x800584c);
            (*pcVar4)();
        }
        iVar12 = (uVar7 << 8) >> 8;
        uVar2 = iVar12 + 0x8000000000;
        if ((uVar8 & 1) == 0) {
            iVar13 = dma_map_page_attrs(arg1,(uVar2 >> 6 & 0x3ffffffffffffc0) - 0x200000000,uVar7 & 0xff8,0x5ee,1,0
                                       );
        }
        else {
            iVar13 = -1;
        }
        iVar10 = _single_release + uVar2;
        if (uVar2 >> 0x26 != 0) {
            iVar10 = iVar12 - _iommu_get_domain_for_dev;
        }
        iVar5 = sym.iommu_debug_check_mapping_flags(arg1,iVar13,0x1000,iVar10);
        if (iVar5 != 0) goto code_r0x08005880;
        dma_unmap_page_attrs(arg1,iVar13,0x5ee,1,0);
        iVar12 = 0;
        do {
            if (*(uVar7 + iVar12) != -0x5b) {
                iVar6 = ___ratelimit(obj.__functional_dma_api_basic_test._rs,"__functional_dma_api_basic_test");
                if (iVar6 != 0) {
                    _dev_err(arg1,"data[%d] != 0xa5\n",*(uVar7 + iVar12));
                }
                iVar5 = -0x16;
                goto code_r0x08005880;
            }
            iVar12 = iVar12 + 1;
        } while (iVar12 != 0x5ee);
        kfree(uVar7);
        iVar6 = iVar6 + 1;
    } while (iVar6 != 1000);
    iVar12 = arg1[0xe];
    if (iVar12 == 0) {
        iVar12 = *arg1;
    }
    _printk(0x80018bb,iVar12);
    iVar5 = 0;
    pcVar11 = "  -> SUCCEEDED\n";
code_r0x080058a4:
    seq_printf(auVar14._8_8_,pcVar11);
    return iVar5;
}


// ===== sym.__functional_dma_api_basic_test.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003278 (size 8) =====

int sym.__functional_dma_api_basic_test.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(int64_t *param_1,ulong param_2)

{
    uint64_t uVar1;
    int64_t arg4;
    code *pcVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = param_1[0xe];
    if (iVar9 == 0) {
        iVar9 = *param_1;
    }
    _printk(0x80010cc,iVar9);
    seq_printf(param_2,"Basic DMA API test");
    iVar4 = 0;
    do {
        uVar5 = kmem_cache_alloc_trace(_seq_read,0xcc0,0x5ee);
        if (uVar5 == 0) {
            iVar3 = -0xc;
code_r0x08005880:
            iVar9 = param_1[0xe];
            if (iVar9 == 0) {
                iVar9 = *param_1;
            }
            _printk(0x8001910,iVar9);
            pcVar8 = "  -> FAILED\n";
            goto code_r0x080058a4;
        }
        memset(uVar5,0xa5,0x5ee);
        uVar6 = is_vmalloc_addr(uVar5);
        if (((uVar6 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar7 = dev_driver_string(param_1);
            iVar9 = param_1[0xe];
            if (iVar9 == 0) {
                iVar9 = *param_1;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar7,iVar9);
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800584c);
            (*pcVar2)();
        }
        iVar9 = (uVar5 << 8) >> 8;
        uVar1 = iVar9 + 0x8000000000;
        if ((uVar6 & 1) == 0) {
            arg2 = dma_map_page_attrs(param_1,(uVar1 >> 6 & 0x3ffffffffffffc0) - 0x200000000,uVar5 & 0xff8,0x5ee,1,
                                      0);
        }
        else {
            arg2 = -1;
        }
        arg4 = _single_release + uVar1;
        if (uVar1 >> 0x26 != 0) {
            arg4 = iVar9 - _iommu_get_domain_for_dev;
        }
        iVar3 = sym.iommu_debug_check_mapping_flags(param_1,arg2,0x1000,arg4);
        if (iVar3 != 0) goto code_r0x08005880;
        dma_unmap_page_attrs(param_1,arg2,0x5ee,1,0);
        iVar9 = 0;
        do {
            if (*(uVar5 + iVar9) != -0x5b) {
                iVar4 = ___ratelimit(obj.__functional_dma_api_basic_test._rs,"__functional_dma_api_basic_test");
                if (iVar4 != 0) {
                    _dev_err(param_1,"data[%d] != 0xa5\n",*(uVar5 + iVar9));
                }
                iVar3 = -0x16;
                goto code_r0x08005880;
            }
            iVar9 = iVar9 + 1;
        } while (iVar9 != 0x5ee);
        kfree(uVar5);
        iVar4 = iVar4 + 1;
    } while (iVar4 != 1000);
    iVar9 = param_1[0xe];
    if (iVar9 == 0) {
        iVar9 = *param_1;
    }
    _printk(0x80018bb,iVar9);
    iVar3 = 0;
    pcVar8 = "  -> SUCCEEDED\n";
code_r0x080058a4:
    seq_printf(param_2,pcVar8);
    return iVar3;
}


// ===== sym.__tlb_stress_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003280 (size 8) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.__tlb_stress_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
                   (int64_t *param_1,ulong param_2,uint64_t param_3,uint64_t param_4)

{
    code *pcVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    char *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    int64_t arg1;
    ulong uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    int64_t *piVar20;
    uint64_t unaff_x25;
    uint64_t uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint64_t *puStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    ulong uStack_140;
    uint64_t uStack_138;
    ulong uStack_130;
    uint64_t uStack_128;
    ulong uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    int64_t iStack_f8;
    uint64_t uStack_f0;
    uint uStack_e8;
    uint32_t uStack_e4;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    int64_t *piStack_88;
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    uStack_70 = 0;
    auVar22 = __get_free_pages(0xcc0,1);
    uVar3 = auVar22._8_8_;
    uVar5 = auVar22._0_8_;
    uVar18 = 0;
    uVar19 = 0;
    uVar21 = 0;
    uVar15 = uVar5 & 0xfff;
    iVar13 = (((uVar5 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
    do {
        if (uVar19 != 0x8000000) {
            uVar3 = is_vmalloc_addr(uVar5,uVar3);
            unaff_x25 = uVar3 & 0xffffffff;
            if (((uVar3 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                obj.dma_map_single_attrs.__already_done = 0x1;
                uVar17 = dev_driver_string(param_1);
                iVar13 = param_1[0xe];
                if (iVar13 == 0) {
                    iVar13 = *param_1;
                }
                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x8007308);
                (*pcVar1)();
            }
            if ((uVar3 & 1) == 0) {
                param_4 = 0x2000;
                param_3 = uVar15;
                uVar3 = dma_map_page_attrs(param_1,iVar13,uVar15,0x2000,1,0);
                uStack_70 = uVar3;
                if (uVar3 == 0xffffffffffffffff) goto code_r0x08007314;
                if (uVar3 == uVar19) {
                    uVar21 = uVar21 + 1;
                    uVar16 = uVar19;
                    goto code_r0x0800725c;
                }
                uVar15 = 0x2000;
                param_4 = 1;
                dma_unmap_page_attrs(param_1);
                pcVar1 = obj.__tlb_stress_sweep._rs.116;
            }
            else {
                uStack_70 = 0xffffffffffffffff;
code_r0x08007314:
                uVar15 = param_3;
                pcVar1 = obj.__tlb_stress_sweep._rs;
            }
            iVar2 = ___ratelimit(pcVar1,"__tlb_stress_sweep");
            if (iVar2 != 0) {
                uVar15 = uVar18;
                _dev_err(param_1,"Failed map on iter %d\n");
            }
            goto code_r0x080073bc;
        }
        uVar16 = 0x80fe000;
code_r0x0800725c:
        uVar19 = uVar16 + 0x2000;
        uVar18 = uVar18 + 1;
    } while (uVar16 < 0xffffdfff);
    uVar19 = is_vmalloc_addr(uVar5,uVar3);
    if (((uVar19 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar17 = dev_driver_string(param_1);
        iVar13 = param_1[0xe];
        if (iVar13 == 0) {
            iVar13 = *param_1;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8007414);
        (*pcVar1)();
    }
    if ((uVar19 & 1) == 0) {
        param_4 = 0x1000;
        uVar19 = uVar15;
        iVar4 = dma_map_page_attrs(param_1,iVar13,uVar15,0x1000,1,0);
        if (iVar4 == -1) goto code_r0x08007418;
        iVar2 = ___ratelimit(obj.__tlb_stress_sweep._rs.117,"__tlb_stress_sweep");
        uVar15 = uVar19;
        if (iVar2 != 0) {
            pcVar11 = "dma_map_single unexpectedly (VA should have been exhausted)\n";
code_r0x08007384:
            _dev_err(param_1,pcVar11);
        }
code_r0x080073bc:
        uVar3 = 0;
        uVar16 = 0xffffffea;
        uVar19 = uVar15;
    }
    else {
code_r0x08007418:
        dma_unmap_page_attrs(param_1,0,0x1000,1,0);
        dma_unmap_page_attrs(param_1,0x2000,0x1000,1,0);
        dma_unmap_page_attrs(param_1,0x3000,0x1000,1,0);
        uVar19 = is_vmalloc_addr(uVar5);
        if (((uVar19 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar17 = dev_driver_string(param_1);
            iVar13 = param_1[0xe];
            if (iVar13 == 0) {
                iVar13 = *param_1;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x80074c0);
            (*pcVar1)();
        }
        if ((uVar19 & 1) == 0) {
            uStack_70 = dma_map_page_attrs(param_1,iVar13,uVar15,0x2000,1,0);
            if (uStack_70 == 0x2000) {
                uVar19 = is_vmalloc_addr(uVar5);
                if (((uVar19 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar17 = dev_driver_string(param_1);
                    iVar13 = param_1[0xe];
                    if (iVar13 == 0) {
                        iVar13 = *param_1;
                    }
                    __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x80075c8);
                    (*pcVar1)();
                }
                if ((uVar19 & 1) == 0) {
                    param_4 = 0x1000;
                    uVar19 = uVar15;
                    uStack_70 = dma_map_page_attrs(param_1,iVar13,uVar15,0x1000,1,0);
                    if (uStack_70 == 0) {
                        uVar3 = is_vmalloc_addr(uVar5);
                        if (((uVar3 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                            obj.dma_map_single_attrs.__already_done = 0x1;
                            uVar17 = dev_driver_string(param_1);
                            iVar13 = param_1[0xe];
                            if (iVar13 == 0) {
                                iVar13 = *param_1;
                            }
                            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x800,0x8007784);
                            (*pcVar1)();
                        }
                        if ((uVar3 & 1) == 0) {
                            param_4 = 0x1000;
                            iVar13 = dma_map_page_attrs(param_1,iVar13,uVar15,0x1000,1,0);
                            uVar19 = uVar15;
                            if (iVar13 != -1) {
                                iVar2 = ___ratelimit(obj.__tlb_stress_sweep._rs.122,"__tlb_stress_sweep");
                                if (iVar2 != 0) {
                                    pcVar11 = 
                                    "dma_map_single unexpectedly after remaps (VA should have been exhausted)\n";
                                    goto code_r0x08007384;
                                }
                                goto code_r0x080073bc;
                            }
                        }
                        uVar16 = 0;
                        uVar3 = 0;
                        goto code_r0x08007630;
                    }
                }
                else {
                    uStack_70 = 0xffffffffffffffff;
                }
                uStack_78 = 0;
                iVar2 = ___ratelimit(obj.__tlb_stress_sweep._rs.121,"__tlb_stress_sweep");
                if (iVar2 != 0) {
                    _dev_err(param_1,"Unexpected dma_addr. got: %pa expected: %pa\n",&uStack_70,&uStack_78);
                }
                uVar19 = 0x1000;
                param_4 = 1;
                dma_unmap_page_attrs(param_1,0x1000,0x1000,1,0);
                uVar21 = uVar21 - 1;
                uVar16 = 0xffffffea;
                uVar3 = 0x2000;
                goto code_r0x08007630;
            }
        }
        else {
            uStack_70 = 0xffffffffffffffff;
        }
        uStack_78 = 0x2000;
        iVar2 = ___ratelimit(obj.__tlb_stress_sweep._rs.119,"__tlb_stress_sweep");
        if (iVar2 != 0) {
            _dev_err(param_1,"Unexpected dma_addr. got: %pa expected: %pa\n",&uStack_70,&uStack_78);
        }
        dma_unmap_page_attrs(param_1,0x1000,0x1000,1,0);
        uVar19 = 0x1000;
        param_4 = 1;
        dma_unmap_page_attrs(param_1,0x3000,0x1000,1,0);
        uVar21 = uVar21 - 2;
        uVar16 = 0xffffffea;
        uVar3 = 0x4000;
    }
code_r0x08007630:
    uVar15 = uVar21 + 1;
    do {
        uVar18 = uVar15 - 1;
        uVar15 = uVar18;
        if (uVar18 == 0) break;
        uVar12 = 0x80fe000;
        if (uVar3 != 0x8000000) {
            uVar19 = 0x2000;
            param_4 = 1;
            dma_unmap_page_attrs(param_1,uVar3,0x2000,1,0);
            uVar12 = uVar3;
        }
        uVar3 = uVar12 + 0x2000;
    } while (uVar12 < 0xffffdfff);
    free_pages(uVar5,1);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return uVar16;
    }
    auVar22 = __stack_chk_fail();
    uVar12 = auVar22._8_8_;
    iVar4 = auVar22._0_8_;
    *extraout_x18 = sym.__check_mapping;
    pcStack_b8 = sym.__check_mapping;
    iVar13 = sp_el0;
    iStack_c8 = *(iVar13 + 0x5e0);
    uStack_d8 = param_4;
    uStack_d0 = uVar19;
    puStack_c0 = &stack0xffffffffffffffa0;
    uStack_b0 = uVar15;
    uStack_a0 = uVar3;
    uStack_98 = uVar16;
    uStack_90 = uVar5;
    piStack_88 = param_1;
    if ((*(iVar4 + 0x340) == 0) || (iVar13 = *(*(iVar4 + 0x340) + 0x40), iVar13 == 0)) {
        iVar2 = ___ratelimit(obj.__check_mapping._rs,"__check_mapping");
        if (iVar2 != 0) {
            _dev_err(iVar4,"No fwspec.\n");
        }
    }
    else {
        uStack_e4 = *(iVar13 + 0x18);
        uStack_e8 = 0;
        uStack_f0 = uVar19;
        uVar15 = qcom_iommu_iova_to_phys_hard(uVar12,&uStack_f0);
        uStack_e0 = uVar15;
        uVar5 = iommu_iova_to_phys(uVar12,uVar19);
        if (uVar15 != uVar5) {
            __warn_printk("hard/soft iova_to_phys fns don\'t agree...");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800786c);
            (*pcVar1)();
        }
        uVar5 = param_4;
        uVar16 = uVar19;
        uVar3 = uVar12;
        if (uVar15 == param_4) {
            uVar19 = 0;
            goto code_r0x08007890;
        }
        iVar2 = ___ratelimit(obj.__check_mapping._rs.107,"__check_mapping");
        if (iVar2 != 0) {
            _dev_err(iVar4,"Bad translation for %pa! Expected: %pa Got: %pa\n",&uStack_d0,&uStack_d8,&uStack_e0);
        }
    }
    uVar19 = 0xffffffea;
code_r0x08007890:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_c8) {
        return uVar19;
    }
    iVar6 = __stack_chk_fail(uVar19);
    *extraout_x18_00 = sym.iommu_debug_profiling_show;
    pcStack_148 = sym.iommu_debug_profiling_show;
    uStack_140 = 0x8000000;
    uStack_130 = 0xffffdfff;
    uStack_120 = 0x8000000;
    iVar13 = sp_el0;
    iStack_158 = *(iVar13 + 0x5e0);
    arg1 = *(iVar6 + 0x80);
    uStack_178 = *0x8002ac0;
    uStack_170 = *0x8002ac8;
    uStack_168 = *0x8002ad0;
    uStack_160 = *0x8002ad8;
    iStack_198 = *0x8002aa0;
    uStack_190 = *0x8002aa8;
    uStack_188 = *0x8002ab0;
    uStack_180 = *0x8002ab8;
    ppuStack_150 = &puStack_c0;
    uStack_138 = uVar21;
    uStack_128 = unaff_x25;
    uStack_118 = uVar15;
    uStack_110 = uVar3;
    uStack_108 = uVar16;
    uStack_100 = uVar5;
    iStack_f8 = iVar4;
    mutex_lock();
    iVar13 = sym.iommu_debug_switch_usecase(arg1,*(arg1 + 0x30));
    if (iVar13 != 0) {
        uVar17 = *(arg1 + 0x28);
        piVar20 = &iStack_198;
        seq_printf(iVar6,"(average over %d iterations)\n",*(arg1 + 0x90));
        seq_printf(iVar6,"%8s %19s %16s\n","size","iommu_map","iommu_unmap");
        iVar13 = 0x1000;
        do {
            uVar19 = 0;
            if (iVar13 + -1 != 0) {
                uVar19 = ~(-1L << (-LZCOUNT(iVar13 + -1) & 0x3fU));
            }
            if (*(arg1 + 0x90) == 0) {
                uVar15 = 0;
                uVar5 = 0;
                uVar19 = 0;
                if (iVar13 < 0x200000) goto code_r0x08007b08;
code_r0x08007b44:
                if (iVar13 < 0x1400000) {
                    if (iVar13 == 0x200000) {
                        pcVar11 = 0x8000bbd;
                    }
                    else {
                        if (iVar13 != 0xc00000) goto code_r0x08007bf0;
                        pcVar11 = 0x8001105;
                    }
                }
                else if (iVar13 == 0x1400000) {
                    pcVar11 = 0x8001a76;
                }
                else if (iVar13 == 0x1800000) {
                    pcVar11 = 0x80012cd;
                }
                else {
                    if (iVar13 != 0x2000000) goto code_r0x08007bf0;
                    pcVar11 = 0x8000c3a;
                }
            }
            else {
                uVar18 = 0;
                uVar5 = 0;
                uVar15 = 0;
                uVar3 = uVar19 + 0x10000 & (uVar19 ^ 0xffffffffffffffff);
                do {
                    iVar4 = ktime_get();
                    iVar2 = iommu_map(uVar17,uVar3,iVar13 + 0x7fffffffU & -iVar13,iVar13,3);
                    if (iVar2 == 0) {
                        iVar7 = ktime_get();
                        uVar15 = (iVar7 - iVar4) + uVar15;
                        iVar4 = ktime_get();
                        iVar7 = iommu_unmap(uVar17,uVar3,iVar13);
                        if (iVar7 == iVar13) {
                            iVar7 = ktime_get();
                            uVar5 = (uVar5 - iVar4) + iVar7;
                        }
                        else {
                            seq_printf(iVar6,"Only unmapped %zx instead of %zx\n",iVar7,iVar13);
                        }
                    }
                    else {
                        seq_puts(iVar6,"Failed to map\n");
                    }
                    uVar19 = *(arg1 + 0x90);
                    uVar18 = uVar18 + 1;
                } while (uVar18 < *(arg1 + 0x90));
                if (0x1fffff < iVar13) goto code_r0x08007b44;
code_r0x08007b08:
                if (iVar13 < 0x4000) {
                    pcVar11 = 0x80012ca;
                    if (iVar13 == 0x1000) goto code_r0x080079bc;
                    if (iVar13 == 0x2000) {
                        pcVar11 = 0x8000c37;
                        goto code_r0x080079bc;
                    }
code_r0x08007bf0:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar11 = "unknown size";
                }
                else if (iVar13 == 0x4000) {
                    pcVar11 = 0x8001936;
                }
                else if (iVar13 == 0x10000) {
                    pcVar11 = 0x8001682;
                }
                else {
                    if (iVar13 != 0x100000) goto code_r0x08007bf0;
                    pcVar11 = 0x80018d6;
                }
            }
code_r0x080079bc:
            uVar3 = 0;
            if (uVar19 != 0) {
                uVar3 = uVar15 / uVar19;
            }
            uVar15 = 0;
            if (uVar19 != 0) {
                uVar15 = uVar5 / uVar19;
            }
            seq_printf(iVar6,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar11,uVar3 / 1000,
                       uVar3 + (uVar3 / 1000) * -1000,uVar15 / 1000,uVar15 + (uVar15 / 1000) * -1000);
            piVar20 = piVar20 + 1;
            iVar13 = *piVar20;
        } while (iVar13 != 0);
        piVar20 = &iStack_198;
        seq_putc(iVar6,10);
        seq_printf(iVar6,"%8s %19s %16s\n","size","iommu_map_sg","iommu_unmap");
        iVar13 = 0x1000;
        do {
            puStack_1a8 = NULL;
            uStack_1a0 = 0;
            uVar19 = 0;
            if (iVar13 + -1 != 0) {
                uVar19 = ~(-1L << (-LZCOUNT(iVar13 + -1) & 0x3fU));
            }
            iVar2 = sym.iommu_debug_build_phoney_sg_table(&puStack_1a8,iVar13);
            if (iVar2 != 0) {
                seq_puts(iVar6,"couldn\'t build phoney sg table! bailing...\n");
                break;
            }
            if (*(arg1 + 0x90) == 0) {
                uVar15 = 0;
                uVar5 = 0;
                uVar18 = 0;
                if (0x1fffff < iVar13) goto code_r0x08007d34;
code_r0x08007d84:
                if (iVar13 < 0x4000) {
                    pcVar11 = 0x80012ca;
                    if (iVar13 != 0x1000) {
                        if (iVar13 != 0x2000) goto code_r0x08007eec;
                        pcVar11 = 0x8000c37;
                    }
                }
                else if (iVar13 == 0x4000) {
                    pcVar11 = 0x8001936;
                }
                else if (iVar13 == 0x10000) {
                    pcVar11 = 0x8001682;
                }
                else {
                    if (iVar13 != 0x100000) goto code_r0x08007eec;
                    pcVar11 = 0x80018d6;
                }
            }
            else {
                uVar14 = 0;
                uVar5 = 0;
                uVar15 = 0;
                uVar19 = uVar19 + 0x10000 & (uVar19 ^ 0xffffffffffffffff);
                do {
                    iVar4 = ktime_get();
                    iVar7 = iommu_map_sg(uVar17,uVar19,puStack_1a8,uStack_1a0._4_4_,3);
                    if (iVar7 != iVar13) {
                        seq_puts(iVar6,"Failed to map_sg\n");
                        goto code_r0x08007eac;
                    }
                    iVar7 = ktime_get();
                    iVar8 = ktime_get();
                    iVar9 = iommu_unmap(uVar17,uVar19,iVar13);
                    if (iVar9 != iVar13) {
                        seq_printf(iVar6,"Only unmapped %zx instead of %zx\n",iVar9,iVar13);
                        goto code_r0x08007eac;
                    }
                    uVar15 = iVar7 + (uVar15 - iVar4);
                    iVar4 = ktime_get();
                    uVar18 = *(arg1 + 0x90);
                    uVar5 = iVar4 + (uVar5 - iVar8);
                    uVar14 = uVar14 + 1;
                } while (uVar14 < uVar18);
                if (iVar13 < 0x200000) goto code_r0x08007d84;
code_r0x08007d34:
                if (iVar13 < 0x1400000) {
                    if (iVar13 == 0x200000) {
                        pcVar11 = 0x8000bbd;
                        goto code_r0x08007e5c;
                    }
                    if (iVar13 == 0xc00000) {
                        pcVar11 = 0x8001105;
                        goto code_r0x08007e5c;
                    }
code_r0x08007eec:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar11 = "unknown size";
                }
                else if (iVar13 == 0x1400000) {
                    pcVar11 = 0x8001a76;
                }
                else if (iVar13 == 0x1800000) {
                    pcVar11 = 0x80012cd;
                }
                else {
                    if (iVar13 != 0x2000000) goto code_r0x08007eec;
                    pcVar11 = 0x8000c3a;
                }
            }
code_r0x08007e5c:
            uVar3 = uVar18;
            uVar19 = 0;
            if (uVar3 != 0) {
                uVar19 = uVar15 / uVar3;
            }
            uVar15 = 0;
            if (uVar3 != 0) {
                uVar15 = uVar5 / uVar3;
            }
            seq_printf(iVar6,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar11,uVar19 / 1000,
                       uVar19 + (uVar19 / 1000) * -1000,uVar15 / 1000,uVar15 + (uVar15 / 1000) * -1000);
code_r0x08007eac:
            if (uStack_1a0 != 0) {
                uVar18 = 0;
                puVar10 = puStack_1a8;
                do {
                    __free_pages(*puVar10 & 0xfffffffffffffffc,0);
                    uVar18 = uVar18 + 1;
                    puVar10 = sg_next(puVar10);
                } while (uVar18 < uStack_1a0);
            }
            sg_free_table(&puStack_1a8);
            piVar20 = piVar20 + 1;
            iVar13 = *piVar20;
        } while (iVar13 != 0);
    }
    mutex_unlock(arg1 + 0x38);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_158) {
        __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return 0;
}


// ===== sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003288 (size 8) =====

uint sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
               (int64_t *param_1,ulong param_2,int64_t param_3,uint64_t param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    uint uVar10;
    int64_t arg3;
    int iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = 0;
    if (0xfff < param_4 - 1) {
        iVar4 = 0x40 - LZCOUNT(param_4 - 1 >> 0xc);
    }
    uVar6 = __get_free_pages(0xcc0,iVar4);
    if (uVar6 == 0) {
        if (param_4 < 0x2001) {
            uVar10 = 0xfffffff4;
        }
        else {
            iVar4 = ___ratelimit(obj.__full_va_sweep._rs,"__full_va_sweep");
            if (iVar4 == 0) {
                uVar10 = 0;
            }
            else {
                uVar9 = sym._size_to_string(param_4);
                _dev_err(param_1,"Failed to allocate %s of memory, which is a lot. Skipping test for this size\n",
                         uVar9);
                uVar10 = 0;
            }
        }
    }
    else {
        iVar1 = (uVar6 << 8) >> 8;
        uVar7 = iVar1 + 0x8000000000;
        iVar3 = 0;
        uVar12 = 0;
        iVar11 = 0;
        iVar8 = uVar7 + _single_release;
        if (uVar7 >> 0x26 != 0) {
            iVar8 = iVar1 - _iommu_get_domain_for_dev;
        }
        iVar1 = (uVar7 >> 6 & 0x3ffffffffffffc0) - 0x200000000;
        do {
            uVar7 = 0x8100000 - param_4;
            if (uVar12 != 0x8000000) {
                uVar7 = is_vmalloc_addr(uVar6);
                if (((uVar7 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar9 = dev_driver_string(param_1);
                    iVar8 = param_1[0xe];
                    if (iVar8 == 0) {
                        iVar8 = *param_1;
                    }
                    __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar9,iVar8);
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8006a5c);
                    (*pcVar2)();
                }
                if ((uVar7 & 1) == 0) {
                    uVar7 = dma_map_page_attrs(param_1,iVar1,uVar6 & 0xfff,param_4,1,0);
                    if (uVar7 == uVar12) goto code_r0x08006a84;
                }
                else {
                    uVar7 = 0xffffffffffffffff;
                    if (uVar12 == 0xffffffffffffffff) {
code_r0x08006a84:
                        iVar11 = iVar11 + 1;
                        uVar7 = uVar12;
                        goto code_r0x080069d8;
                    }
                }
                iVar5 = ___ratelimit(obj.__full_va_sweep._rs.98,"__full_va_sweep");
                if (iVar5 != 0) {
                    _dev_err(param_1,"Unexpected iova on iter %d (expected: 0x%lx got: 0x%lx)\n",iVar3,uVar12,uVar7)
                    ;
                }
                if (uVar7 == 0xffffffffffffffff) {
                    uVar10 = 0xffffffea;
                    goto code_r0x08006ce8;
                }
                dma_unmap_page_attrs(param_1,uVar7,param_4,1,0);
                goto code_r0x08006c34;
            }
code_r0x080069d8:
            uVar12 = uVar7 + param_4;
            iVar3 = iVar3 + 1;
        } while (uVar12 < 0xffffffff);
        if (param_3 != 0) {
            iVar3 = 0;
            uVar7 = 0;
            do {
                iVar5 = sym.__check_mapping(param_1,param_3,uVar7,iVar8);
                if (iVar5 != 0) {
                    iVar5 = ___ratelimit(obj.__full_va_sweep._rs.100,"__full_va_sweep");
                    if (iVar5 != 0) {
                        _dev_err(param_1,"iter: %d\n",iVar3);
                    }
                    goto code_r0x08006c34;
                }
                uVar7 = uVar7 + param_4;
                iVar3 = iVar3 + 1;
            } while (uVar7 < 0x600000);
            iVar3 = 0;
            uVar7 = 0;
            arg3 = 0x100000000 - param_4;
            do {
                iVar5 = sym.__check_mapping(param_1,param_3,arg3,iVar8);
                if (iVar5 != 0) {
                    iVar5 = ___ratelimit(obj.__full_va_sweep._rs.102,"__full_va_sweep");
                    if (iVar5 != 0) {
                        _dev_err(param_1,"iter: %d\n",iVar3);
                    }
                    goto code_r0x08006c34;
                }
                uVar7 = uVar7 + param_4;
                iVar3 = iVar3 + 1;
                arg3 = arg3 - param_4;
            } while (uVar7 < 0x600000);
        }
        uVar7 = is_vmalloc_addr(uVar6);
        if (((uVar7 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar9 = dev_driver_string(param_1);
            iVar8 = param_1[0xe];
            if (iVar8 == 0) {
                iVar8 = *param_1;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar9,iVar8);
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006ce0);
            (*pcVar2)();
        }
        if (((uVar7 & 1) == 0) &&
           (iVar8 = dma_map_page_attrs(param_1,iVar1,uVar6 & 0xfff,param_4,1,0), iVar8 != -1)) {
            iVar3 = ___ratelimit(obj.__full_va_sweep._rs.103,"__full_va_sweep");
            if (iVar3 != 0) {
                _dev_err(param_1,"dma_map_single succeeded when it should have failed. Got iova: 0x%lx\n",iVar8);
            }
code_r0x08006c34:
            uVar10 = 0xffffffea;
        }
        else {
            uVar10 = 0;
        }
code_r0x08006ce8:
        uVar7 = 0;
        iVar11 = iVar11 + 1;
        do {
            iVar11 = iVar11 + -1;
            if (iVar11 == 0) break;
            uVar12 = 0x8100000 - param_4;
            if (uVar7 != 0x8000000) {
                dma_unmap_page_attrs(param_1,uVar7,param_4,1,0);
                uVar12 = uVar7;
            }
            uVar7 = uVar12 + param_4;
        } while (uVar7 < 0xffffffff);
        free_pages(uVar6,iVar4);
    }
    return uVar10;
}


// ===== sym.__rand_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003290 (size 8) =====

uint sym.__rand_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
               (int64_t *param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    uint uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    int iStack_64;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    if (0xfff < param_4 - 1) {
        iVar3 = 0x40 - LZCOUNT(param_4 - 1 >> 0xc);
    }
    uVar6 = __get_free_pages(0xcc0,iVar3);
    if (uVar6 == 0) {
        if (param_4 < 0x2001) {
            uVar12 = 0xfffffff4;
        }
        else {
            iVar3 = ___ratelimit(obj.__rand_va_sweep._rs,"__rand_va_sweep");
            if (iVar3 == 0) {
                uVar12 = 0;
            }
            else {
                uVar8 = sym._size_to_string(param_4);
                _dev_err(param_1,"Failed to allocate %s of memory, which is a lot. Skipping test for this size\n",
                         uVar8);
                uVar12 = 0;
            }
        }
    }
    else {
        iVar4 = 0;
        uVar13 = 0;
        iVar9 = (((uVar6 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
        iStack_64 = 0;
        do {
            uVar7 = 0x8100000 - param_4;
            if (uVar13 != 0x8000000) {
                uVar7 = is_vmalloc_addr(uVar6);
                if (((uVar7 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar8 = dev_driver_string(param_1);
                    iVar9 = param_1[0xe];
                    if (iVar9 == 0) {
                        iVar9 = *param_1;
                    }
                    __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar8,iVar9);
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8006ec8);
                    (*pcVar1)();
                }
                if (((uVar7 & 1) != 0) ||
                   (uVar7 = dma_map_page_attrs(param_1,iVar9,uVar6 & 0xfff,param_4,1,0),
                   uVar7 == 0xffffffffffffffff)) {
                    iVar2 = ___ratelimit(obj.__rand_va_sweep._rs.109,"__rand_va_sweep");
                    if (iVar2 != 0) {
                        _dev_err(param_1,"Failed map on iter %d\n",iVar4);
                    }
                    goto code_r0x080070d8;
                }
                if (uVar7 != uVar13) {
                    dma_unmap_page_attrs(param_1,uVar7,param_4,1,0);
                    iVar4 = ___ratelimit(obj.__rand_va_sweep._rs.111,"__rand_va_sweep");
                    if (iVar4 != 0) {
                        _dev_err(param_1,"Unexpected dma_addr. got: %lx, expected: %lx\n",uVar7,uVar13);
                    }
                    goto code_r0x080070d8;
                }
                iStack_64 = iStack_64 + 1;
                uVar7 = uVar13;
            }
            uVar13 = uVar7 + param_4;
            iVar4 = iVar4 + 1;
        } while (uVar13 < 0xffffffff);
        uVar13 = param_4 << 1;
        if (uVar13 < 0xffffffff - param_4) {
            iVar4 = 0;
            iVar10 = 2;
            iVar14 = 1;
            do {
                iVar11 = iVar10;
                uVar7 = 0x100000000 - (uVar13 + param_4);
                if (uVar13 == uVar7) {
                    __warn_printk("%s test needs update! The random number sequence is folding in on itself and should be changed.\n"
                                  ,"__rand_va_sweep");
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800718c);
                    (*pcVar1)();
                }
                if (uVar13 >> 0x14 != 0x80) {
                    dma_unmap_page_attrs(param_1,uVar13,param_4,1,0);
                }
                if (0xfffff < (uVar13 + param_4) - 0xf7f00001) {
                    dma_unmap_page_attrs(param_1,uVar7,param_4,1,0);
                }
                iVar10 = iVar11 + iVar14;
                iVar4 = iVar4 + 2;
                uVar13 = iVar10 * param_4;
                iVar14 = iVar11;
            } while (uVar13 < 0xffffffff - param_4);
        }
        else {
            iVar4 = 0;
        }
        iVar2 = 0;
        while( true ) {
            uVar13 = is_vmalloc_addr(uVar6);
            if (((uVar13 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                obj.dma_map_single_attrs.__already_done = 0x1;
                uVar8 = dev_driver_string(param_1);
                iVar9 = param_1[0xe];
                if (iVar9 == 0) {
                    iVar9 = *param_1;
                }
                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar8,iVar9);
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x8007060);
                (*pcVar1)();
            }
            if (((uVar13 & 1) != 0) ||
               (iVar10 = dma_map_page_attrs(param_1,iVar9,uVar6 & 0xfff,param_4,1,0), iVar10 == -1)) break;
            iVar2 = iVar2 + 1;
        }
        if (iVar4 == iVar2) {
            uVar12 = 0;
        }
        else {
            iVar5 = ___ratelimit(obj.__rand_va_sweep._rs.114,"__rand_va_sweep");
            if (iVar5 != 0) {
                _dev_err(param_1,"Unexpected random remap count! Unmapped %d but remapped %d\n",iVar4,iVar2);
            }
code_r0x080070d8:
            uVar12 = 0xffffffea;
        }
        uVar13 = 0;
        iStack_64 = iStack_64 + 1;
        do {
            iStack_64 = iStack_64 + -1;
            if (iStack_64 == 0) break;
            uVar7 = 0x8100000 - param_4;
            if (uVar13 != 0x8000000) {
                dma_unmap_page_attrs(param_1,uVar13,param_4,1,0);
                uVar7 = uVar13;
            }
            uVar13 = uVar7 + param_4;
        } while (uVar13 < 0xffffffff);
        free_pages(uVar6,iVar3);
    }
    return uVar12;
}


// ===== sym.iommu_debug_nr_iters_set.aabe0ea5067ace97199e12937638aa45.cfi_jt @ 0x08003298 (size 8) =====

ulong sym.iommu_debug_nr_iters_set.aabe0ea5067ace97199e12937638aa45.cfi_jt(int64_t param_1,uint64_t param_2)

{
    if (param_2 == 0) {
        param_2 = 1;
    }
    if (0x270 < param_2 >> 4) {
        param_2 = 10000;
    }
    *(param_1 + 0x90) = param_2;
    return 0;
}


// ===== sym.iommu_debug_nr_iters_get.aabe0ea5067ace97199e12937638aa45.cfi_jt @ 0x080032a0 (size 8) =====

ulong sym.iommu_debug_nr_iters_get.aabe0ea5067ace97199e12937638aa45.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(param_1 + 0x90);
    return 0;
}


// ===== sym.iommu_debug_nr_iters_fops_open.aabe0ea5067ace97199e12937638aa45.cfi_jt @ 0x080032a8 (size 8) =====

void sym.iommu_debug_nr_iters_fops_open.aabe0ea5067ace97199e12937638aa45.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.iommu_debug_nr_iters_get.aabe0ea5067ace97199e12937638aa45.cfi_jt,
                     sym.iommu_debug_nr_iters_set.aabe0ea5067ace97199e12937638aa45.cfi_jt,"%llu\n");
    return;
}


// ===== sym.single_release.cfi_jt @ 0x080032b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.simple_attr_release.cfi_jt @ 0x080032b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.iommu_debug_functional_arm_dma_api_open.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x080032c0 (size 8) =====

void sym.iommu_debug_functional_arm_dma_api_open.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                *(param_1 + 0x2d8));
    return;
}


// ===== sym.simple_open.cfi_jt @ 0x080032c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.iommu_debug_functional_fast_dma_api_open.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x080032d0 (size 8) =====

void sym.iommu_debug_functional_fast_dma_api_open.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
               (int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.iommu_debug_functional_fast_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                *(param_1 + 0x2d8));
    return;
}


// ===== sym.iommu_debug_profiling_open.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x080032d8 (size 8) =====

void sym.iommu_debug_profiling_open.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.iommu_debug_profiling_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.seq_lseek.cfi_jt @ 0x080032e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.no_llseek.cfi_jt @ 0x080032e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.iommu_debug_dma_atos_read.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x080032f0 (size 8) =====

//WARNING: Type propagation algorithm not settling

int64_t *******
sym.iommu_debug_dma_atos_read.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
          (int64_t param_1,ulong param_2,int64_t *******param_3,int64_t *******param_4)

{
    ulong *puVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t *******pppppppiVar4;
    int64_t *******pppppppiVar5;
    int64_t *******pppppppiVar6;
    int64_t ******ppppppiVar7;
    int64_t ******ppppppiVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    int64_t ***pppiVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    int64_t *******unaff_x19;
    int64_t *******pppppppiVar14;
    int64_t *******pppppppiVar15;
    int64_t *******arg3;
    int64_t *******pppppppiVar16;
    int64_t *******unaff_x20;
    ulong uVar17;
    ulong unaff_x21;
    int64_t ******ppppppiVar18;
    int64_t ******unaff_x22;
    code *pcVar19;
    code *pcVar20;
    int64_t ******ppppppiVar21;
    int64_t ******ppppppiVar22;
    uchar *unaff_x24;
    int64_t iVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    ulong uStack_4f8;
    uint32_t uStack_4ec;
    ulong uStack_4e8;
    ulong uStack_4e0;
    ulong uStack_4d8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    ulong uStack_4c0;
    ulong uStack_4b8;
    ulong uStack_4b0;
    ulong uStack_4a8;
    ulong uStack_4a0;
    ulong uStack_498;
    ulong uStack_490;
    ulong uStack_488;
    uint uStack_480;
    int64_t iStack_478;
    uchar ******ppppppuStack_470;
    code *pcStack_468;
    uchar *puStack_460;
    int64_t ******ppppppiStack_458;
    code *pcStack_450;
    int64_t ******ppppppiStack_448;
    int64_t *******pppppppiStack_440;
    int64_t *******pppppppiStack_438;
    uint32_t uStack_42c;
    int64_t *******pppppppiStack_428;
    int64_t *******pppppppiStack_420;
    int64_t ******ppppppiStack_418;
    ulong uStack_410;
    ulong uStack_408;
    ulong uStack_400;
    ulong uStack_3f8;
    ulong uStack_3f0;
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    uint uStack_3b0;
    int64_t iStack_3a8;
    uchar *****pppppuStack_3a0;
    code *pcStack_398;
    uchar *puStack_390;
    int64_t ******ppppppiStack_388;
    code *pcStack_380;
    int64_t ******ppppppiStack_378;
    int64_t *******pppppppiStack_370;
    int64_t *******pppppppiStack_368;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    uint uStack_2f0;
    int64_t iStack_2e8;
    uchar ****ppppuStack_2e0;
    code *pcStack_2d8;
    int64_t ******ppppppiStack_2d0;
    int64_t *******pppppppiStack_2c0;
    int64_t *******pppppppiStack_2b8;
    int64_t *******pppppppiStack_2b0;
    int64_t ******ppppppiStack_2a8;
    int64_t *piStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    uint uStack_240;
    int64_t iStack_238;
    uchar ***pppuStack_230;
    code *pcStack_228;
    int64_t ******ppppppiStack_220;
    int64_t *******pppppppiStack_210;
    int64_t *******pppppppiStack_208;
    uint uStack_1fc;
    int64_t *******pppppppiStack_1f8;
    int64_t *******pppppppiStack_1f0;
    int64_t ******ppppppiStack_1e8;
    int64_t *piStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    uint uStack_180;
    int64_t iStack_178;
    uchar **ppuStack_170;
    code *pcStack_168;
    int64_t ******ppppppiStack_118;
    int64_t ******ppppppiStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    int64_t ******ppppppiStack_f0;
    ulong uStack_e8;
    int64_t *******pppppppiStack_e0;
    int64_t *******pppppppiStack_d8;
    int64_t *****pppppiStack_c8;
    uint uStack_c0;
    uint32_t uStack_bc;
    int64_t aiStack_b8 [13];
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    pppppppiVar4 = NULL;
    uStack_50 = 0;
    ppppppiVar21 = *(param_1 + 0xd8);
    aiStack_b8[0xb] = 0;
    aiStack_b8[0xc] = 0;
    aiStack_b8[9] = 0;
    aiStack_b8[10] = 0;
    aiStack_b8[7] = 0;
    aiStack_b8[8] = 0;
    aiStack_b8[5] = 0;
    aiStack_b8[6] = 0;
    aiStack_b8[3] = 0;
    aiStack_b8[4] = 0;
    aiStack_b8[1] = 0;
    aiStack_b8[2] = 0;
    pppppppiVar14 = param_3;
    pppppppiVar16 = param_4;
    pppppppiStack_d8 = unaff_x19;
    pppppppiStack_e0 = unaff_x20;
    uStack_e8 = unaff_x21;
    if (*param_4 == NULL) {
        unaff_x22 = ppppppiVar21 + 7;
        mutex_lock(unaff_x22);
        pppppppiStack_d8 = param_4;
        pppppppiStack_e0 = param_3;
        uStack_e8 = param_2;
        if (ppppppiVar21[5] == NULL) {
            _printk(0x8001129,"iommu_debug_dma_atos_read");
            mutex_unlock(unaff_x22);
            pppppppiVar4 = 0xffffffffffffffea;
        }
        else if ((ppppppiVar21[4][0x68] == NULL) || (pppiVar12 = ppppppiVar21[4][0x68][8], pppiVar12 == NULL)) {
            _printk(0x8001967,"iommu_debug_dma_atos_read");
            mutex_unlock(unaff_x22);
            pppppppiVar4 = NULL;
        }
        else {
            pppppiStack_c8 = ppppppiVar21[0x11];
            uStack_bc = *(pppiVar12 + 3);
            uStack_c0 = 0;
            aiStack_b8[0] = qcom_iommu_iova_to_phys_hard(ppppppiVar21[5],&pppppiStack_c8);
            if (aiStack_b8[0] == 0) {
                uVar2 = strscpy(aiStack_b8 + 1,"FAIL\n",100);
            }
            else {
                uVar2 = scnprintf(aiStack_b8 + 1,100,"%pa\n",aiStack_b8);
            }
            ppppppiVar21 = uVar2;
            mutex_unlock(unaff_x22);
            pppppppiVar16 = aiStack_b8 + 1;
            pppppppiVar14 = param_4;
            pppppppiVar4 = simple_read_from_buffer(param_2,param_3,param_4,pppppppiVar16,uVar2);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return pppppppiVar4;
    }
    auVar24 = __stack_chk_fail(pppppppiVar4);
    ppppppiVar18 = auVar24._8_8_;
    *extraout_x18 = sym.iommu_debug_atos_write;
    pcStack_f8 = sym.iommu_debug_atos_write;
    iVar9 = sp_el0;
    iStack_108 = *(iVar9 + 0x5e0);
    pcVar19 = *(auVar24._0_8_ + 0xd8);
    ppppppiStack_110 = NULL;
    pppppppiVar4 = pcVar19 + 0x38;
    pppppppiVar15 = pppppppiVar14;
    puStack_100 = &stack0xffffffffffffffc0;
    ppppppiStack_f0 = unaff_x22;
    mutex_lock(pppppppiVar4);
    if (*(pcVar19 + 0x28) == 0) {
        _printk(0x8001129,"iommu_debug_atos_write");
code_r0x080040cc:
        mutex_unlock(pppppppiVar4);
        pppppppiVar14 = 0xffffffffffffffea;
    }
    else {
        pppppppiVar16 = &ppppppiStack_110;
        pppppppiVar15 = NULL;
        iVar3 = kstrtoull_from_user(ppppppiVar18,pppppppiVar14);
        if (iVar3 != 0) {
            _dev_err(*(pcVar19 + 0x20),"Invalid format for iova\n");
            *(pcVar19 + 0x88) = 0;
            goto code_r0x080040cc;
        }
        ppppppiStack_118 = iommu_iova_to_phys(*(pcVar19 + 0x28),ppppppiStack_110);
        if (((ppppppiStack_118 >> 0x30 != 0) || (_simple_open == 0)) ||
           (iVar9 = *(_simple_open + (ppppppiStack_118 >> 0x1f & 0x1fffffff8)), iVar9 == 0)) {
code_r0x080040a0:
            pppppppiVar15 = &ppppppiStack_118;
            _dev_err(*(pcVar19 + 0x20),"Invalid ATOS operation page %pa\n");
            goto code_r0x080040cc;
        }
        uVar13 = ppppppiStack_118 >> 0x1b & 0x7f;
        puVar1 = iVar9 + uVar13 * 0x20;
        if (((puVar1 == NULL) || (uVar2 = *puVar1, (uVar2 >> 1 & 1) == 0)) ||
           (((uVar2 >> 3 & 1) == 0 && ((**(iVar9 + uVar13 * 0x20 + 8) >> (ppppppiStack_118 >> 0x15 & 0x3f) & 1) == 0))))
        goto code_r0x080040a0;
        *(pcVar19 + 0x88) = ppppppiStack_110;
        mutex_unlock(pppppppiVar4);
        _printk(0x80015da,&ppppppiStack_110);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_108) {
        return pppppppiVar14;
    }
    auVar24 = __stack_chk_fail();
    pppppppiVar14 = auVar24._8_8_;
    *extraout_x18_00 = sym.iommu_debug_map_write;
    pcStack_168 = sym.iommu_debug_map_write;
    iVar9 = sp_el0;
    iStack_178 = *(iVar9 + 0x5e0);
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    piStack_1e0 = NULL;
    uStack_1d8 = 0;
    pppppppiStack_1f0 = NULL;
    ppppppiStack_1e8 = NULL;
    pppppppiStack_1f8 = NULL;
    uStack_1fc = 0;
    ppuStack_170 = &puStack_100;
    if (pppppppiVar15 < 0x64) {
        iVar23 = *(auVar24._0_8_ + 0xd8);
        __check_object_size(&piStack_1e0,pppppppiVar15,0);
        iVar9 = sym._copy_from_user(&piStack_1e0,pppppppiVar14,pppppppiVar15);
        if ((iVar9 != 0) &&
           (iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs.8,"iommu_debug_map_write"), iVar3 != 0)) {
            _printk(0x80011fa);
        }
        arg3 = 0x2c;
        ppppppiVar22 = strnchr(&piStack_1e0,pppppppiVar15);
        pppppppiVar4 = pppppppiVar14;
        if (ppppppiVar22 == NULL) {
code_r0x080042ac:
            iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs.14,"iommu_debug_map_write");
            pcVar20 = pcVar19;
            ppppppiVar22 = ppppppiVar21;
            puVar10 = unaff_x24;
            if (iVar3 != 0) {
                uVar17 = 0x8000b1c;
                goto code_r0x0800430c;
            }
            goto code_r0x080042c4;
        }
        ppppppiVar18 = ppppppiVar22 + 1;
        arg3 = 0x2c;
        puVar10 = strnchr(ppppppiVar18,pppppppiVar15);
        ppppppiVar21 = ppppppiVar22;
        if (puVar10 == NULL) goto code_r0x080042ac;
        pppppppiVar4 = puVar10 + 1;
        arg3 = 0x2c;
        pcVar20 = strnchr(pppppppiVar4,pppppppiVar15);
        unaff_x24 = puVar10;
        if (pcVar20 == NULL) goto code_r0x080042ac;
        *pcVar20 = 0x0;
        arg3 = &ppppppiStack_1e8;
        *puVar10 = 0;
        *ppppppiVar22 = 0;
        iVar3 = kstrtoull(&piStack_1e0,0);
        pcVar19 = pcVar20;
        if (iVar3 != 0) goto code_r0x080042ac;
        arg3 = &pppppppiStack_1f0;
        iVar3 = kstrtoull(ppppppiVar18,0);
        if (iVar3 != 0) goto code_r0x080042ac;
        arg3 = &pppppppiStack_1f8;
        iVar3 = kstrtoull(pppppppiVar4,0);
        if (iVar3 != 0) goto code_r0x080042ac;
        arg3 = &uStack_1fc;
        iVar3 = kstrtoint(pcVar20 + 1,0);
        if (iVar3 != 0) goto code_r0x080042ac;
        pppppppiVar4 = iVar23 + 0x38;
        mutex_lock(pppppppiVar4);
        iVar9 = *(iVar23 + 0x28);
        if (iVar9 == 0) {
            iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs.10,"iommu_debug_map_write");
            if (iVar3 != 0) {
                _printk(0x8001129,"iommu_debug_map_write");
            }
            mutex_unlock(pppppppiVar4);
            goto code_r0x080042c4;
        }
        arg3 = pppppppiStack_1f0;
        pppppppiVar16 = pppppppiStack_1f8;
        uVar2 = iommu_map(iVar9,ppppppiStack_1e8,pppppppiStack_1f0,pppppppiStack_1f8,uStack_1fc);
        if (uVar2 == 0) {
            arg3 = &pppppppiStack_1f0;
            pppppppiVar16 = pppppppiStack_1f8;
            _printk(0x80016da,&ppppppiStack_1e8,arg3,pppppppiStack_1f8,uStack_1fc);
        }
        else {
            ppppppiVar18 = uVar2;
            iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs.11,"iommu_debug_map_write");
            if (iVar3 != 0) {
                _printk(0x8001089,ppppppiVar18);
            }
            pppppppiVar15 = 0xfffffffffffffffb;
        }
        mutex_unlock(pppppppiVar4);
    }
    else {
        iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs,"iommu_debug_map_write");
        arg3 = pppppppiVar15;
        pcVar20 = pcVar19;
        ppppppiVar22 = ppppppiVar21;
        puVar10 = unaff_x24;
        if (iVar3 != 0) {
            uVar17 = 0x80016c7;
code_r0x0800430c:
            _printk(uVar17);
            pcVar20 = pcVar19;
            ppppppiVar22 = ppppppiVar21;
            puVar10 = unaff_x24;
        }
code_r0x080042c4:
        pppppppiVar15 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_178) {
        return pppppppiVar15;
    }
    auVar24 = __stack_chk_fail();
    pppppppiVar14 = auVar24._8_8_;
    pppppppiVar6 = &pppppppiStack_2b0;
    *extraout_x18_01 = sym.iommu_debug_unmap_write;
    pcStack_228 = sym.iommu_debug_unmap_write;
    iVar9 = sp_el0;
    iStack_238 = *(iVar9 + 0x5e0);
    uStack_240 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    piStack_2a0 = NULL;
    uStack_298 = 0;
    pppppppiStack_2b0 = NULL;
    ppppppiStack_2a8 = NULL;
    pppuStack_230 = &ppuStack_170;
    ppppppiStack_220 = ppppppiVar18;
    pppppppiStack_210 = pppppppiVar4;
    pppppppiStack_208 = pppppppiVar15;
    if (arg3 < 0x64) {
        ppppppiVar18 = *(auVar24._0_8_ + 0xd8);
        if (ppppppiVar18[5] == NULL) {
            iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.17,"iommu_debug_unmap_write");
            if (iVar3 != 0) {
                _printk(0x8001129,"iommu_debug_unmap_write");
            }
            goto code_r0x08004550;
        }
        __check_object_size(&piStack_2a0,arg3,0);
        pppppppiVar15 = arg3;
        iVar9 = sym._copy_from_user(&piStack_2a0,pppppppiVar14,arg3);
        if (iVar9 == 0) {
            pppppppiVar15 = 0x2c;
            pppppppiVar5 = strnchr(&piStack_2a0,arg3);
            pppppppiVar4 = pppppppiVar14;
            if (pppppppiVar5 != NULL) {
                *pppppppiVar5 = 0;
                pppppppiVar15 = &ppppppiStack_2a8;
                iVar3 = kstrtoull(&piStack_2a0,0);
                pppppppiVar4 = pppppppiVar5;
                if ((iVar3 == 0) && (iVar3 = kstrtoull(pppppppiVar5 + 1,0), pppppppiVar15 = pppppppiVar6, iVar3 == 0)
                   ) {
                    pppppppiVar4 = ppppppiVar18 + 7;
                    mutex_lock(pppppppiVar4);
                    if (ppppppiVar18[5] == NULL) {
                        iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.19,"iommu_debug_unmap_write");
                        arg3 = pppppppiVar6;
                        if (iVar3 != 0) {
                            _printk(0x800161d);
                            arg3 = pppppppiVar6;
                        }
                        mutex_unlock(pppppppiVar4);
                        goto code_r0x08004550;
                    }
                    pppppppiVar15 = pppppppiStack_2b0;
                    pppppppiVar14 = iommu_unmap(ppppppiVar18[5],ppppppiStack_2a8);
                    if (pppppppiVar14 == pppppppiStack_2b0) {
                        pppppppiVar15 = pppppppiVar14;
                        _printk(0x800183c,&ppppppiStack_2a8);
                    }
                    else {
                        iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.21,"iommu_debug_unmap_write");
                        if (iVar3 == 0) {
                            arg3 = 0xfffffffffffffffb;
                        }
                        else {
                            pppppppiVar15 = pppppppiVar14;
                            _printk(0x8000f9c,pppppppiStack_2b0);
                            arg3 = 0xfffffffffffffffb;
                        }
                    }
                    goto code_r0x080044b8;
                }
            }
            arg3 = pppppppiVar15;
            iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.24,"iommu_debug_unmap_write");
            if (iVar3 != 0) {
                uVar17 = 0x8001317;
                goto code_r0x0800445c;
            }
            goto code_r0x08004550;
        }
        iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.18,"iommu_debug_unmap_write");
        if (iVar3 != 0) {
            _printk(0x80011fa);
        }
        arg3 = 0xfffffffffffffff2;
code_r0x080044b8:
        mutex_unlock(ppppppiVar18 + 7);
    }
    else {
        iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs,"iommu_debug_unmap_write");
        if (iVar3 != 0) {
            uVar17 = 0x80016c7;
code_r0x0800445c:
            _printk(uVar17);
        }
code_r0x08004550:
        pppppppiVar15 = arg3;
        arg3 = 0xffffffffffffffea;
        pppppppiVar14 = pppppppiVar4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_238) {
        return arg3;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_02 = sym.iommu_debug_dma_map_read;
    pcStack_2d8 = sym.iommu_debug_dma_map_read;
    iVar9 = sp_el0;
    iStack_2e8 = *(iVar9 + 0x5e0);
    pppppppiVar6 = NULL;
    uStack_2f0 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    pppppppiVar4 = pppppppiVar15;
    ppppuStack_2e0 = &pppuStack_230;
    ppppppiStack_2d0 = ppppppiVar18;
    pppppppiStack_2c0 = pppppppiVar14;
    pppppppiStack_2b8 = arg3;
    if (*pppppppiVar16 == NULL) {
        uStack_358 = *(*(auVar24._0_8_ + 0xd8) + 0x88);
        iVar3 = scnprintf(&uStack_350,100,"%pa\n",&uStack_358);
        pppppppiVar4 = pppppppiVar16;
        pppppppiVar6 = simple_read_from_buffer(auVar24._8_8_,pppppppiVar15,pppppppiVar16,&uStack_350,iVar3);
        arg3 = pppppppiVar16;
        pppppppiVar14 = pppppppiVar15;
        ppppppiVar18 = auVar24._8_8_;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_2e8) {
        return pppppppiVar6;
    }
    auVar24 = __stack_chk_fail(pppppppiVar6);
    ppppppiVar21 = auVar24._8_8_;
    *extraout_x18_03 = sym.iommu_debug_dma_map_write;
    pcStack_398 = sym.iommu_debug_dma_map_write;
    iVar9 = sp_el0;
    iStack_3a8 = *(iVar9 + 0x5e0);
    uStack_3b0 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    ppppppiStack_418 = NULL;
    pppppppiStack_428 = NULL;
    uStack_42c = 0;
    pppppuStack_3a0 = &ppppuStack_2e0;
    puStack_390 = puVar10;
    ppppppiStack_388 = ppppppiVar22;
    pcStack_380 = pcVar20;
    ppppppiStack_378 = ppppppiVar18;
    pppppppiStack_370 = pppppppiVar14;
    pppppppiStack_368 = arg3;
    if (pppppppiVar4 < 0x64) {
        puVar10 = *(auVar24._0_8_ + 0xd8);
        pppppppiVar14 = *(puVar10 + 0x20);
        __check_object_size(&uStack_410,pppppppiVar4,0);
        pppppppiVar16 = pppppppiVar4;
        iVar9 = sym._copy_from_user(&uStack_410,ppppppiVar21,pppppppiVar4);
        if (iVar9 != 0) {
            iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar3 != 0) {
                _printk(0x80011fa);
            }
            pppppppiVar4 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        pppppppiVar16 = 0x2c;
        ppppppiVar7 = strnchr(&uStack_410,pppppppiVar4);
        ppppppiVar18 = ppppppiVar21;
        if (ppppppiVar7 == NULL) {
code_r0x0800487c:
            iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            ppppppiVar21 = ppppppiVar18;
            if (iVar3 != 0) {
                uVar17 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        pcVar20 = ppppppiVar7 + 1;
        pppppppiVar16 = 0x2c;
        ppppppiVar8 = strnchr(pcVar20,pppppppiVar4);
        ppppppiVar18 = ppppppiVar7;
        if (ppppppiVar8 == NULL) goto code_r0x0800487c;
        *ppppppiVar8 = 0;
        pppppppiVar16 = &ppppppiStack_418;
        *ppppppiVar7 = 0;
        iVar3 = kstrtoull(&uStack_410,0);
        ppppppiVar21 = ppppppiStack_418;
        ppppppiVar22 = ppppppiVar8;
        if (iVar3 != 0) goto code_r0x0800487c;
        pppppppiVar16 = &pppppppiStack_428;
        iVar3 = kstrtoull(pcVar20,0);
        ppppppiVar18 = ppppppiVar21;
        if (iVar3 != 0) goto code_r0x0800487c;
        pppppppiVar16 = &uStack_42c;
        iVar3 = kstrtouint(ppppppiVar8 + 1,0);
        if (iVar3 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        ppppppiVar22 = _segment.ehdr;
        pcVar20 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (ppppppiVar22 == NULL) {
                iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar3 != 0) {
                    uVar17 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((ppppppiVar21 < _segment.ehdr) || (_segment.ehdr + 0x20000 < ppppppiVar21 + pppppppiStack_428)) {
                iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar3 != 0) {
                    _printk(0x8000d77,ppppppiVar21);
                }
            }
            else {
                ppppppiVar22 = uStack_42c;
                if (3 < uStack_42c) goto code_r0x0800487c;
                pcVar20 = puVar10 + 0x38;
                mutex_lock(pcVar20);
                if (*(puVar10 + 0x28) != 0) {
                    pppppppiVar16 = pppppppiStack_428;
                    pppppppiVar15 =
                         sym.dma_map_single_attrs
                                   (pppppppiVar14,ppppppiVar21,pppppppiStack_428,*(ppppppiVar22 * 8 + 0x8002a30));
                    pppppppiStack_420 = pppppppiVar15;
                    if (pppppppiVar15 == 0xffffffffffffffff) {
                        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar3 != 0) {
                            _printk(0x8001465);
                        }
                        pppppppiVar4 = 0xffffffffffffffea;
                    }
                    else {
                        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        pppppppiVar14 = pppppppiVar15;
                        if (iVar3 != 0) {
                            pppppppiVar16 = &pppppppiStack_420;
                            _printk(0x8001878,ppppppiVar21,pppppppiVar16,pppppppiStack_428);
                            pppppppiVar14 = pppppppiStack_420;
                        }
                        *(puVar10 + 0x88) = pppppppiVar14;
                        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar3 != 0) {
                            _printk(0x8000ee6,&pppppppiStack_420);
                        }
                    }
                    mutex_unlock(pcVar20);
                    goto code_r0x08004898;
                }
                iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar3 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(pcVar20);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar3 != 0) {
            _printk(0x8000b8c);
        }
        pppppppiVar4 = 0xfffffffffffffff4;
    }
    else {
        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        pppppppiVar16 = pppppppiVar4;
        ppppppiVar21 = ppppppiVar18;
        if (iVar3 == 0) goto code_r0x08004894;
        uVar17 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar17);
code_r0x08004894:
        pppppppiVar4 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_3a8) {
        return pppppppiVar4;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_04 = sym.iommu_debug_dma_unmap_write;
    pcStack_468 = sym.iommu_debug_dma_unmap_write;
    iVar9 = sp_el0;
    iStack_478 = *(iVar9 + 0x5e0);
    uStack_480 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4e8 = 0;
    uStack_4ec = 0;
    uStack_4f8 = 0;
    ppppppuStack_470 = &pppppuStack_3a0;
    puStack_460 = puVar10;
    ppppppiStack_458 = ppppppiVar22;
    pcStack_450 = pcVar20;
    ppppppiStack_448 = ppppppiVar21;
    pppppppiStack_440 = pppppppiVar14;
    pppppppiStack_438 = pppppppiVar4;
    if (pppppppiVar16 < 0x64) {
        iVar23 = *(auVar24._0_8_ + 0xd8);
        uVar17 = *(iVar23 + 0x20);
        __check_object_size(&uStack_4e0,pppppppiVar16,0);
        iVar9 = sym._copy_from_user(&uStack_4e0,auVar24._8_8_,pppppppiVar16);
        if (iVar9 != 0) {
            iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar3 != 0) {
                _printk(0x80011fa);
            }
            pppppppiVar16 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar23 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar10 = strnchr(&uStack_4e0,pppppppiVar16,0x2c);
        if (puVar10 != NULL) {
            puVar11 = strnchr(puVar10 + 1,pppppppiVar16,0x2c);
            if (puVar11 != NULL) {
                *puVar11 = 0;
                *puVar10 = 0;
                iVar3 = kstrtoull(&uStack_4e0,0,&uStack_4f8);
                if ((((iVar3 == 0) && (iVar3 = kstrtoull(puVar10 + 1,0,&uStack_4e8), iVar3 == 0)) &&
                    (iVar3 = kstrtouint(puVar11 + 1,0,&uStack_4ec), iVar3 == 0)) &&
                   (iVar9 = uStack_4ec, uStack_4ec < 4)) {
                    mutex_lock(iVar23 + 0x38);
                    if (*(iVar23 + 0x28) == 0) {
                        iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar3 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar23 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar17,uStack_4f8,uStack_4e8,1,*(iVar9 * 8 + 0x8002a30));
                    iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar3 != 0) {
                        _printk(0x8001489,&uStack_4f8,uStack_4e8);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar3 != 0) {
            uVar17 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar3 != 0) {
            uVar17 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar17);
        }
    }
code_r0x08004cc8:
    pppppppiVar16 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_478) {
        return pppppppiVar16;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_05 = sym.iommu_debug_functional_arm_dma_api_open;
    pppppppiVar16 =
         single_open(auVar24._8_8_,sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
                     ,*(auVar24._0_8_ + 0x2d8));
    return pppppppiVar16;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x080032f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.seq_read.cfi_jt @ 0x08003300 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.iommu_debug_test_virt_addr_read.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003308 (size 8) =====

void sym.iommu_debug_test_virt_addr_read.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,int64_t *param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    uVar3 = 0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    if (*param_4 != 0) goto code_r0x08004ea8;
    mutex_lock(obj.test_virt_addr_lock);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _segment.ehdr = kmalloc_order_trace(0x100000,0xdc0,8);
        if (_segment.ehdr != 0) goto code_r0x08004e6c;
        _segment.ehdr = 0xfffffffffffffff4;
        iVar2 = strscpy(&uStack_a0,"FAIL\n",100,0);
    }
    else {
code_r0x08004e6c:
        iVar2 = scnprintf(&uStack_a0,100,"0x%p\n");
    }
    mutex_unlock(obj.test_virt_addr_lock);
    uVar3 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_a0,iVar2);
code_r0x08004ea8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    auVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.iommu_debug_profiling_open;
    single_open(auVar4._8_8_,sym.iommu_debug_profiling_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                *(auVar4._0_8_ + 0x2d8));
    return;
}


// ===== sym.iommu_debug_dma_map_read.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003310 (size 8) =====

int64_t ****
sym.iommu_debug_dma_map_read.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
          (int64_t param_1,int64_t ***param_2,int64_t ****param_3,int64_t ****param_4)

{
    int iVar1;
    int64_t ****ppppiVar2;
    int64_t ***pppiVar3;
    int64_t ***pppiVar4;
    int64_t ****ppppiVar5;
    int64_t iVar6;
    uchar *puVar7;
    uchar *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t ****ppppiVar9;
    int64_t ****unaff_x20;
    ulong uVar10;
    int64_t ***unaff_x21;
    int64_t ***pppiVar11;
    int64_t ***arg2;
    code *unaff_x22;
    int64_t ***unaff_x23;
    int64_t unaff_x24;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_248;
    uint32_t uStack_23c;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    uint uStack_1d0;
    int64_t iStack_1c8;
    uchar **ppuStack_1c0;
    code *pcStack_1b8;
    int64_t iStack_1b0;
    int64_t **ppiStack_1a8;
    code *pcStack_1a0;
    int64_t **ppiStack_198;
    int64_t ***pppiStack_190;
    int64_t ***pppiStack_188;
    uint32_t uStack_17c;
    int64_t ***pppiStack_178;
    int64_t ***pppiStack_170;
    int64_t **ppiStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    uint uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    ppppiVar2 = NULL;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    ppppiVar9 = param_3;
    if (*param_4 == NULL) {
        uStack_a8 = *(*(param_1 + 0xd8) + 0x88);
        iVar1 = scnprintf(&uStack_a0,100,"%pa\n",&uStack_a8);
        ppppiVar2 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_a0,iVar1);
        ppppiVar9 = param_4;
        unaff_x20 = param_3;
        unaff_x21 = param_2;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return ppppiVar2;
    }
    auVar13 = __stack_chk_fail(ppppiVar2);
    arg2 = auVar13._8_8_;
    *extraout_x18 = sym.iommu_debug_dma_map_write;
    pcStack_e8 = sym.iommu_debug_dma_map_write;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    uStack_100 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    ppiStack_168 = NULL;
    pppiStack_178 = NULL;
    uStack_17c = 0;
    puStack_f0 = &stack0xffffffffffffffd0;
    if (ppppiVar9 < 0x64) {
        unaff_x24 = *(auVar13._0_8_ + 0xd8);
        unaff_x20 = *(unaff_x24 + 0x20);
        __check_object_size(&uStack_160,ppppiVar9,0);
        ppppiVar2 = ppppiVar9;
        iVar6 = sym._copy_from_user(&uStack_160,arg2,ppppiVar9);
        if (iVar6 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            ppppiVar9 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        ppppiVar2 = 0x2c;
        pppiVar3 = strnchr(&uStack_160,ppppiVar9);
        pppiVar11 = arg2;
        if (pppiVar3 == NULL) {
code_r0x0800487c:
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            arg2 = pppiVar11;
            if (iVar1 != 0) {
                uVar10 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        unaff_x22 = pppiVar3 + 1;
        ppppiVar2 = 0x2c;
        pppiVar4 = strnchr(unaff_x22,ppppiVar9);
        pppiVar11 = pppiVar3;
        if (pppiVar4 == NULL) goto code_r0x0800487c;
        *pppiVar4 = 0;
        ppppiVar2 = &ppiStack_168;
        *pppiVar3 = 0;
        iVar1 = kstrtoull(&uStack_160,0);
        arg2 = ppiStack_168;
        unaff_x23 = pppiVar4;
        if (iVar1 != 0) goto code_r0x0800487c;
        ppppiVar2 = &pppiStack_178;
        iVar1 = kstrtoull(unaff_x22,0);
        pppiVar11 = arg2;
        if (iVar1 != 0) goto code_r0x0800487c;
        ppppiVar2 = &uStack_17c;
        iVar1 = kstrtouint(pppiVar4 + 1,0);
        if (iVar1 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        unaff_x23 = _segment.ehdr;
        unaff_x22 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (unaff_x23 == NULL) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    uVar10 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((arg2 < _segment.ehdr) || (_segment.ehdr + 0x20000 < arg2 + pppiStack_178)) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8000d77,arg2);
                }
            }
            else {
                unaff_x23 = uStack_17c;
                if (3 < uStack_17c) goto code_r0x0800487c;
                unaff_x22 = unaff_x24 + 0x38;
                mutex_lock(unaff_x22);
                if (*(unaff_x24 + 0x28) != 0) {
                    ppppiVar2 = pppiStack_178;
                    ppppiVar5 = sym.dma_map_single_attrs(unaff_x20,arg2,pppiStack_178,*(unaff_x23 * 8 + 0x8002a30));
                    pppiStack_170 = ppppiVar5;
                    if (ppppiVar5 == 0xffffffffffffffff) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8001465);
                        }
                        ppppiVar9 = 0xffffffffffffffea;
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        unaff_x20 = ppppiVar5;
                        if (iVar1 != 0) {
                            ppppiVar2 = &pppiStack_170;
                            _printk(0x8001878,arg2,ppppiVar2,pppiStack_178);
                            unaff_x20 = pppiStack_170;
                        }
                        *(unaff_x24 + 0x88) = unaff_x20;
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8000ee6,&pppiStack_170);
                        }
                    }
                    mutex_unlock(unaff_x22);
                    goto code_r0x08004898;
                }
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(unaff_x22);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar1 != 0) {
            _printk(0x8000b8c);
        }
        ppppiVar9 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        ppppiVar2 = ppppiVar9;
        arg2 = unaff_x21;
        if (iVar1 == 0) goto code_r0x08004894;
        uVar10 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar10);
code_r0x08004894:
        ppppiVar9 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_f8) {
        return ppppiVar9;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.iommu_debug_dma_unmap_write;
    pcStack_1b8 = sym.iommu_debug_dma_unmap_write;
    iVar6 = sp_el0;
    iStack_1c8 = *(iVar6 + 0x5e0);
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_238 = 0;
    uStack_23c = 0;
    uStack_248 = 0;
    ppuStack_1c0 = &puStack_f0;
    iStack_1b0 = unaff_x24;
    ppiStack_1a8 = unaff_x23;
    pcStack_1a0 = unaff_x22;
    ppiStack_198 = arg2;
    pppiStack_190 = unaff_x20;
    pppiStack_188 = ppppiVar9;
    if (ppppiVar2 < 0x64) {
        iVar12 = *(auVar13._0_8_ + 0xd8);
        uVar10 = *(iVar12 + 0x20);
        __check_object_size(&uStack_230,ppppiVar2,0);
        iVar6 = sym._copy_from_user(&uStack_230,auVar13._8_8_,ppppiVar2);
        if (iVar6 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            ppppiVar2 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar12 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar7 = strnchr(&uStack_230,ppppiVar2,0x2c);
        if (puVar7 != NULL) {
            puVar8 = strnchr(puVar7 + 1,ppppiVar2,0x2c);
            if (puVar8 != NULL) {
                *puVar8 = 0;
                *puVar7 = 0;
                iVar1 = kstrtoull(&uStack_230,0,&uStack_248);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar7 + 1,0,&uStack_238), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar8 + 1,0,&uStack_23c), iVar1 == 0)) &&
                   (iVar6 = uStack_23c, uStack_23c < 4)) {
                    mutex_lock(iVar12 + 0x38);
                    if (*(iVar12 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar12 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar10,uStack_248,uStack_238,1,*(iVar6 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_248,uStack_238);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar10 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar10 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar10);
        }
    }
code_r0x08004cc8:
    ppppiVar2 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1c8) {
        return ppppiVar2;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_01 = sym.iommu_debug_functional_arm_dma_api_open;
    ppppiVar9 = single_open(auVar13._8_8_,
                            sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                            *(auVar13._0_8_ + 0x2d8));
    return ppppiVar9;
}


// ===== sym.iommu_debug_usecase_read.aabe0ea5067ace97199e12937638aa45.cfi_jt @ 0x08003318 (size 8) =====

void sym.iommu_debug_usecase_read.aabe0ea5067ace97199e12937638aa45.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong uVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(*(param_1 + 0xd8) + 0x10);
    uVar1 = strnlen(uVar2,0x1000);
    simple_read_from_buffer(param_2,param_3,param_4,uVar2,uVar1);
    return;
}


// ===== sym.iommu_debug_remove.aabe0ea5067ace97199e12937638aa45.cfi_jt @ 0x08003320 (size 8) =====

ulong sym.iommu_debug_remove.aabe0ea5067ace97199e12937638aa45.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    debugfs_remove(*(iVar1 + 0x18));
    iVar1 = *(iVar1 + 0x20);
    if (iVar1 != 0) {
        of_platform_device_destroy(iVar1,0);
    }
    return 0;
}


// ===== sym.iommu_debug_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt @ 0x08003328 (size 8) =====

ulong sym.iommu_debug_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    piVar3 = devm_kmalloc(iVar1,0x98,0xdc0);
    if (piVar3 != NULL) {
        *piVar3 = iVar1;
        *(piVar3 + 6) = 0xffffffff;
        *(piVar3 + 0x12) = 1;
        __mutex_init(piVar3 + 7,"&ddev->state_lock",obj.iommu_debug_check_mapping_flags._rs);
        *(piVar3 + 0xd) = 0;
        __init_swait_queue_head(piVar3 + 0xe,"&x->wait",obj.iommu_debug_check_mapping_flags._rs);
        iVar4 = devm_kmalloc(iVar1,0x1000,0xdc0);
        piVar3[2] = iVar4;
        if (iVar4 != 0) {
            uVar5 = *(param_1 + 0x300);
            *(piVar3 + 1) = 0;
            puVar6 = of_get_next_child(uVar5,0);
            if (puVar6 != NULL) {
                iVar8 = 0;
                do {
                    iVar2 = scnprintf(piVar3[2] + iVar8,0x1000 - iVar8,"%d: %s\n",piVar3[1],*puVar6);
                    iVar8 = iVar2 + iVar8;
                    if (iVar8 == 0xfff) {
                        _dev_err(iVar1,"Too many testcases?\n");
                        break;
                    }
                    uVar5 = *(param_1 + 0x300);
                    *(piVar3 + 1) = piVar3[1] + 1;
                    puVar6 = of_get_next_child(uVar5,puVar6);
                } while (puVar6 != NULL);
            }
            *(param_1 + 0xa8) = piVar3;
            uVar7 = debugfs_create_dir("iommu-test",0);
            if (0xfffffffffffff000 < uVar7) {
                return 0xffffffea;
            }
            piVar3[3] = uVar7;
            debugfs_create_file("usecase",0x180,uVar7,piVar3,obj.iommu_debug_usecase_fops);
            debugfs_create_file("functional_arm_dma_api",0x100,uVar7,piVar3,
                                obj.iommu_debug_functional_arm_dma_api_fops);
            debugfs_create_file("functional_fast_dma_api",0x100,uVar7,piVar3,
                                obj.iommu_debug_functional_fast_dma_api_fops);
            debugfs_create_file("atos",0x180,uVar7,piVar3,obj.iommu_debug_atos_fops);
            debugfs_create_file(0x80013a2,0x80,uVar7,piVar3,obj.iommu_debug_map_fops);
            debugfs_create_file("unmap",0x80,uVar7,piVar3,obj.iommu_debug_unmap_fops);
            debugfs_create_file("dma_map",0x80,uVar7,piVar3,obj.iommu_debug_dma_map_fops);
            debugfs_create_file("dma_unmap",0x80,uVar7,piVar3,obj.iommu_debug_dma_unmap_fops);
            debugfs_create_file("nr_iters",0x180,uVar7,piVar3,obj.iommu_debug_nr_iters_fops);
            debugfs_create_file("test_virt_addr",0x100,uVar7,piVar3,obj.iommu_debug_test_virt_addr_fops);
            debugfs_create_file("profiling",0x100,uVar7,piVar3,obj.iommu_debug_profiling_fops);
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.iommu_debug_usecase_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt @ 0x08003330 (size 8) =====

ulong sym.iommu_debug_usecase_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(*(*(param_1 + 0x70) + 0x98) + 0x68);
    return 0;
}


// ===== sym.iommu_debug_unmap_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003338 (size 8) =====

int64_t *****
sym.iommu_debug_unmap_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
          (int64_t param_1,int64_t *****param_2,int64_t *****param_3,int64_t *****param_4)

{
    int iVar1;
    int64_t *****pppppiVar2;
    int64_t ****ppppiVar3;
    int64_t ****ppppiVar4;
    int64_t iVar5;
    uchar *puVar6;
    uchar *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t *****pppppiVar8;
    int64_t *****pppppiVar9;
    int64_t *****unaff_x20;
    ulong uVar10;
    int64_t ****unaff_x21;
    int64_t ****ppppiVar11;
    int64_t ****arg2;
    code *unaff_x22;
    int64_t ****unaff_x23;
    int64_t unaff_x24;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_2f8;
    uint32_t uStack_2ec;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    uint uStack_280;
    int64_t iStack_278;
    uchar ***pppuStack_270;
    code *pcStack_268;
    int64_t iStack_260;
    int64_t ***pppiStack_258;
    code *pcStack_250;
    int64_t ***pppiStack_248;
    int64_t ****ppppiStack_240;
    int64_t ****ppppiStack_238;
    uint32_t uStack_22c;
    int64_t ****ppppiStack_228;
    int64_t ****ppppiStack_220;
    int64_t ***pppiStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    uint uStack_1b0;
    int64_t iStack_1a8;
    uchar **ppuStack_1a0;
    code *pcStack_198;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t ***pppiStack_d0;
    int64_t ****ppppiStack_c0;
    int64_t ****ppppiStack_b8;
    int64_t ****ppppiStack_b0;
    int64_t ***pppiStack_a8;
    int64_t *piStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    pppppiVar8 = &ppppiStack_b0;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    piStack_a0 = NULL;
    uStack_98 = 0;
    ppppiStack_b0 = NULL;
    pppiStack_a8 = NULL;
    if (param_3 < 0x64) {
        unaff_x21 = *(param_1 + 0xd8);
        if (unaff_x21[5] == NULL) {
            iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.17,"iommu_debug_unmap_write");
            if (iVar1 != 0) {
                _printk(0x8001129,"iommu_debug_unmap_write");
            }
            goto code_r0x08004550;
        }
        __check_object_size(&piStack_a0,param_3,0);
        pppppiVar9 = param_3;
        iVar5 = sym._copy_from_user(&piStack_a0,param_2,param_3);
        if (iVar5 == 0) {
            pppppiVar9 = 0x2c;
            pppppiVar2 = strnchr(&piStack_a0,param_3);
            unaff_x20 = param_2;
            if (pppppiVar2 != NULL) {
                *pppppiVar2 = 0;
                pppppiVar9 = &pppiStack_a8;
                iVar1 = kstrtoull(&piStack_a0,0);
                unaff_x20 = pppppiVar2;
                if ((iVar1 == 0) && (iVar1 = kstrtoull(pppppiVar2 + 1,0), pppppiVar9 = pppppiVar8, iVar1 == 0)) {
                    unaff_x20 = unaff_x21 + 7;
                    mutex_lock(unaff_x20);
                    if (unaff_x21[5] == NULL) {
                        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.19,"iommu_debug_unmap_write");
                        param_3 = pppppiVar8;
                        if (iVar1 != 0) {
                            _printk(0x800161d);
                            param_3 = pppppiVar8;
                        }
                        mutex_unlock(unaff_x20);
                        goto code_r0x08004550;
                    }
                    pppppiVar9 = ppppiStack_b0;
                    param_2 = iommu_unmap(unaff_x21[5],pppiStack_a8);
                    if (param_2 == ppppiStack_b0) {
                        pppppiVar9 = param_2;
                        _printk(0x800183c,&pppiStack_a8);
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.21,"iommu_debug_unmap_write");
                        if (iVar1 == 0) {
                            param_3 = 0xfffffffffffffffb;
                        }
                        else {
                            pppppiVar9 = param_2;
                            _printk(0x8000f9c,ppppiStack_b0);
                            param_3 = 0xfffffffffffffffb;
                        }
                    }
                    goto code_r0x080044b8;
                }
            }
            param_3 = pppppiVar9;
            iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.24,"iommu_debug_unmap_write");
            if (iVar1 != 0) {
                uVar10 = 0x8001317;
                goto code_r0x0800445c;
            }
            goto code_r0x08004550;
        }
        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.18,"iommu_debug_unmap_write");
        if (iVar1 != 0) {
            _printk(0x80011fa);
        }
        param_3 = 0xfffffffffffffff2;
code_r0x080044b8:
        mutex_unlock(unaff_x21 + 7);
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs,"iommu_debug_unmap_write");
        if (iVar1 != 0) {
            uVar10 = 0x80016c7;
code_r0x0800445c:
            _printk(uVar10);
        }
code_r0x08004550:
        pppppiVar9 = param_3;
        param_3 = 0xffffffffffffffea;
        param_2 = unaff_x20;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return param_3;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18 = sym.iommu_debug_dma_map_read;
    pcStack_d8 = sym.iommu_debug_dma_map_read;
    iVar5 = sp_el0;
    iStack_e8 = *(iVar5 + 0x5e0);
    pppppiVar2 = NULL;
    uStack_f0 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    pppppiVar8 = pppppiVar9;
    puStack_e0 = &stack0xffffffffffffffd0;
    pppiStack_d0 = unaff_x21;
    ppppiStack_c0 = param_2;
    ppppiStack_b8 = param_3;
    if (*param_4 == NULL) {
        uStack_158 = *(*(auVar13._0_8_ + 0xd8) + 0x88);
        iVar1 = scnprintf(&uStack_150,100,"%pa\n",&uStack_158);
        pppppiVar2 = simple_read_from_buffer(auVar13._8_8_,pppppiVar9,param_4,&uStack_150,iVar1);
        pppppiVar8 = param_4;
        param_2 = pppppiVar9;
        unaff_x21 = auVar13._8_8_;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_e8) {
        return pppppiVar2;
    }
    auVar13 = __stack_chk_fail(pppppiVar2);
    arg2 = auVar13._8_8_;
    *extraout_x18_00 = sym.iommu_debug_dma_map_write;
    pcStack_198 = sym.iommu_debug_dma_map_write;
    iVar5 = sp_el0;
    iStack_1a8 = *(iVar5 + 0x5e0);
    uStack_1b0 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    pppiStack_218 = NULL;
    ppppiStack_228 = NULL;
    uStack_22c = 0;
    ppuStack_1a0 = &puStack_e0;
    if (pppppiVar8 < 0x64) {
        unaff_x24 = *(auVar13._0_8_ + 0xd8);
        param_2 = *(unaff_x24 + 0x20);
        __check_object_size(&uStack_210,pppppiVar8,0);
        pppppiVar9 = pppppiVar8;
        iVar5 = sym._copy_from_user(&uStack_210,arg2,pppppiVar8);
        if (iVar5 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar8 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        pppppiVar9 = 0x2c;
        ppppiVar3 = strnchr(&uStack_210,pppppiVar8);
        ppppiVar11 = arg2;
        if (ppppiVar3 == NULL) {
code_r0x0800487c:
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            arg2 = ppppiVar11;
            if (iVar1 != 0) {
                uVar10 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        unaff_x22 = ppppiVar3 + 1;
        pppppiVar9 = 0x2c;
        ppppiVar4 = strnchr(unaff_x22,pppppiVar8);
        ppppiVar11 = ppppiVar3;
        if (ppppiVar4 == NULL) goto code_r0x0800487c;
        *ppppiVar4 = 0;
        pppppiVar9 = &pppiStack_218;
        *ppppiVar3 = 0;
        iVar1 = kstrtoull(&uStack_210,0);
        arg2 = pppiStack_218;
        unaff_x23 = ppppiVar4;
        if (iVar1 != 0) goto code_r0x0800487c;
        pppppiVar9 = &ppppiStack_228;
        iVar1 = kstrtoull(unaff_x22,0);
        ppppiVar11 = arg2;
        if (iVar1 != 0) goto code_r0x0800487c;
        pppppiVar9 = &uStack_22c;
        iVar1 = kstrtouint(ppppiVar4 + 1,0);
        if (iVar1 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        unaff_x23 = _segment.ehdr;
        unaff_x22 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (unaff_x23 == NULL) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    uVar10 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((arg2 < _segment.ehdr) || (_segment.ehdr + 0x20000 < arg2 + ppppiStack_228)) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8000d77,arg2);
                }
            }
            else {
                unaff_x23 = uStack_22c;
                if (3 < uStack_22c) goto code_r0x0800487c;
                unaff_x22 = unaff_x24 + 0x38;
                mutex_lock(unaff_x22);
                if (*(unaff_x24 + 0x28) != 0) {
                    pppppiVar9 = ppppiStack_228;
                    pppppiVar2 = sym.dma_map_single_attrs(param_2,arg2,ppppiStack_228,*(unaff_x23 * 8 + 0x8002a30));
                    ppppiStack_220 = pppppiVar2;
                    if (pppppiVar2 == 0xffffffffffffffff) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8001465);
                        }
                        pppppiVar8 = 0xffffffffffffffea;
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        param_2 = pppppiVar2;
                        if (iVar1 != 0) {
                            pppppiVar9 = &ppppiStack_220;
                            _printk(0x8001878,arg2,pppppiVar9,ppppiStack_228);
                            param_2 = ppppiStack_220;
                        }
                        *(unaff_x24 + 0x88) = param_2;
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8000ee6,&ppppiStack_220);
                        }
                    }
                    mutex_unlock(unaff_x22);
                    goto code_r0x08004898;
                }
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(unaff_x22);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar1 != 0) {
            _printk(0x8000b8c);
        }
        pppppiVar8 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        pppppiVar9 = pppppiVar8;
        arg2 = unaff_x21;
        if (iVar1 == 0) goto code_r0x08004894;
        uVar10 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar10);
code_r0x08004894:
        pppppiVar8 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1a8) {
        return pppppiVar8;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_01 = sym.iommu_debug_dma_unmap_write;
    pcStack_268 = sym.iommu_debug_dma_unmap_write;
    iVar5 = sp_el0;
    iStack_278 = *(iVar5 + 0x5e0);
    uStack_280 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2e8 = 0;
    uStack_2ec = 0;
    uStack_2f8 = 0;
    pppuStack_270 = &ppuStack_1a0;
    iStack_260 = unaff_x24;
    pppiStack_258 = unaff_x23;
    pcStack_250 = unaff_x22;
    pppiStack_248 = arg2;
    ppppiStack_240 = param_2;
    ppppiStack_238 = pppppiVar8;
    if (pppppiVar9 < 0x64) {
        iVar12 = *(auVar13._0_8_ + 0xd8);
        uVar10 = *(iVar12 + 0x20);
        __check_object_size(&uStack_2e0,pppppiVar9,0);
        iVar5 = sym._copy_from_user(&uStack_2e0,auVar13._8_8_,pppppiVar9);
        if (iVar5 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar9 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar12 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar6 = strnchr(&uStack_2e0,pppppiVar9,0x2c);
        if (puVar6 != NULL) {
            puVar7 = strnchr(puVar6 + 1,pppppiVar9,0x2c);
            if (puVar7 != NULL) {
                *puVar7 = 0;
                *puVar6 = 0;
                iVar1 = kstrtoull(&uStack_2e0,0,&uStack_2f8);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar6 + 1,0,&uStack_2e8), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar7 + 1,0,&uStack_2ec), iVar1 == 0)) &&
                   (iVar5 = uStack_2ec, uStack_2ec < 4)) {
                    mutex_lock(iVar12 + 0x38);
                    if (*(iVar12 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar12 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar10,uStack_2f8,uStack_2e8,1,*(iVar5 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_2f8,uStack_2e8);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar10 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar10 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar10);
        }
    }
code_r0x08004cc8:
    pppppiVar9 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_278) {
        return pppppiVar9;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_02 = sym.iommu_debug_functional_arm_dma_api_open;
    pppppiVar8 = single_open(auVar13._8_8_,
                             sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                             *(auVar13._0_8_ + 0x2d8));
    return pppppiVar8;
}


// ===== sym.iommu_debug_dma_unmap_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003340 (size 8) =====

uint64_t sym.iommu_debug_dma_unmap_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    uchar *puVar3;
    uchar *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_c8;
    uint32_t uStack_bc;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c8 = 0;
    if (param_3 < 100) {
        iVar7 = *(param_1 + 0xd8);
        uVar6 = *(iVar7 + 0x20);
        __check_object_size(&uStack_b0,param_3,0);
        iVar2 = sym._copy_from_user(&uStack_b0,param_2,param_3);
        if (iVar2 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            param_3 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar7 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar3 = strnchr(&uStack_b0,param_3,0x2c);
        if (puVar3 != NULL) {
            puVar4 = strnchr(puVar3 + 1,param_3,0x2c);
            if (puVar4 != NULL) {
                *puVar4 = 0;
                *puVar3 = 0;
                iVar1 = kstrtoull(&uStack_b0,0,&uStack_c8);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar3 + 1,0,&uStack_b8), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar4 + 1,0,&uStack_bc), iVar1 == 0)) && (iVar2 = uStack_bc, uStack_bc < 4)
                   ) {
                    mutex_lock(iVar7 + 0x38);
                    if (*(iVar7 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar7 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar6,uStack_c8,uStack_b8,1,*(iVar2 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_c8,uStack_b8);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar6 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar6 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar6);
        }
    }
code_r0x08004cc8:
    param_3 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return param_3;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.iommu_debug_functional_arm_dma_api_open;
    uVar5 = single_open(auVar8._8_8_,
                        sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                        *(auVar8._0_8_ + 0x2d8));
    return uVar5;
}


// ===== sym.iommu_debug_dma_map_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003348 (size 8) =====

ulong ****
sym.iommu_debug_dma_map_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
          (int64_t param_1,ulong ***param_2,ulong ****param_3)

{
    int iVar1;
    ulong ***pppuVar2;
    ulong ***pppuVar3;
    ulong ***pppuVar4;
    int64_t iVar5;
    uchar *puVar6;
    uchar *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong ****ppppuVar8;
    ulong ***unaff_x20;
    ulong uVar9;
    ulong ***unaff_x21;
    code *unaff_x22;
    ulong ***unaff_x23;
    int64_t unaff_x24;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_198;
    uint32_t uStack_18c;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    ulong **ppuStack_f8;
    code *pcStack_f0;
    ulong **ppuStack_e8;
    ulong **ppuStack_e0;
    ulong ***pppuStack_d8;
    uint32_t uStack_cc;
    ulong ***pppuStack_c8;
    ulong **ppuStack_c0;
    ulong **ppuStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    ppuStack_b8 = NULL;
    pppuStack_c8 = NULL;
    uStack_cc = 0;
    if (param_3 < 0x64) {
        unaff_x24 = *(param_1 + 0xd8);
        unaff_x20 = *(unaff_x24 + 0x20);
        __check_object_size(&uStack_b0,param_3,0);
        ppppuVar8 = param_3;
        iVar5 = sym._copy_from_user(&uStack_b0,param_2,param_3);
        if (iVar5 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            param_3 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        ppppuVar8 = 0x2c;
        pppuVar2 = strnchr(&uStack_b0,param_3);
        pppuVar4 = param_2;
        if (pppuVar2 == NULL) {
code_r0x0800487c:
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            param_2 = pppuVar4;
            if (iVar1 != 0) {
                uVar9 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        unaff_x22 = pppuVar2 + 1;
        ppppuVar8 = 0x2c;
        pppuVar3 = strnchr(unaff_x22,param_3);
        pppuVar4 = pppuVar2;
        if (pppuVar3 == NULL) goto code_r0x0800487c;
        *pppuVar3 = 0;
        ppppuVar8 = &ppuStack_b8;
        *pppuVar2 = 0;
        iVar1 = kstrtoull(&uStack_b0,0);
        param_2 = ppuStack_b8;
        unaff_x23 = pppuVar3;
        if (iVar1 != 0) goto code_r0x0800487c;
        ppppuVar8 = &pppuStack_c8;
        iVar1 = kstrtoull(unaff_x22,0);
        pppuVar4 = param_2;
        if (iVar1 != 0) goto code_r0x0800487c;
        ppppuVar8 = &uStack_cc;
        iVar1 = kstrtouint(pppuVar3 + 1,0);
        if (iVar1 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        unaff_x23 = _segment.ehdr;
        unaff_x22 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (unaff_x23 == NULL) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    uVar9 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((param_2 < _segment.ehdr) || (_segment.ehdr + 0x20000 < param_2 + pppuStack_c8)) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8000d77,param_2);
                }
            }
            else {
                unaff_x23 = uStack_cc;
                if (3 < uStack_cc) goto code_r0x0800487c;
                unaff_x22 = unaff_x24 + 0x38;
                mutex_lock(unaff_x22);
                if (*(unaff_x24 + 0x28) != 0) {
                    ppppuVar8 = pppuStack_c8;
                    pppuVar4 = sym.dma_map_single_attrs(unaff_x20,param_2,pppuStack_c8,*(unaff_x23 * 8 + 0x8002a30));
                    ppuStack_c0 = pppuVar4;
                    if (pppuVar4 == 0xffffffffffffffff) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8001465);
                        }
                        param_3 = 0xffffffffffffffea;
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        unaff_x20 = pppuVar4;
                        if (iVar1 != 0) {
                            ppppuVar8 = &ppuStack_c0;
                            _printk(0x8001878,param_2,ppppuVar8,pppuStack_c8);
                            unaff_x20 = ppuStack_c0;
                        }
                        *(unaff_x24 + 0x88) = unaff_x20;
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8000ee6,&ppuStack_c0);
                        }
                    }
                    mutex_unlock(unaff_x22);
                    goto code_r0x08004898;
                }
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(unaff_x22);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar1 != 0) {
            _printk(0x8000b8c);
        }
        param_3 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        ppppuVar8 = param_3;
        param_2 = unaff_x21;
        if (iVar1 == 0) goto code_r0x08004894;
        uVar9 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar9);
code_r0x08004894:
        param_3 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return param_3;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.iommu_debug_dma_unmap_write;
    pcStack_108 = sym.iommu_debug_dma_unmap_write;
    iVar5 = sp_el0;
    iStack_118 = *(iVar5 + 0x5e0);
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_188 = 0;
    uStack_18c = 0;
    uStack_198 = 0;
    puStack_110 = &stack0xffffffffffffffc0;
    iStack_100 = unaff_x24;
    ppuStack_f8 = unaff_x23;
    pcStack_f0 = unaff_x22;
    ppuStack_e8 = param_2;
    ppuStack_e0 = unaff_x20;
    pppuStack_d8 = param_3;
    if (ppppuVar8 < 0x64) {
        iVar10 = *(auVar11._0_8_ + 0xd8);
        uVar9 = *(iVar10 + 0x20);
        __check_object_size(&uStack_180,ppppuVar8,0);
        iVar5 = sym._copy_from_user(&uStack_180,auVar11._8_8_,ppppuVar8);
        if (iVar5 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            ppppuVar8 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar10 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar6 = strnchr(&uStack_180,ppppuVar8,0x2c);
        if (puVar6 != NULL) {
            puVar7 = strnchr(puVar6 + 1,ppppuVar8,0x2c);
            if (puVar7 != NULL) {
                *puVar7 = 0;
                *puVar6 = 0;
                iVar1 = kstrtoull(&uStack_180,0,&uStack_198);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar6 + 1,0,&uStack_188), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar7 + 1,0,&uStack_18c), iVar1 == 0)) &&
                   (iVar5 = uStack_18c, uStack_18c < 4)) {
                    mutex_lock(iVar10 + 0x38);
                    if (*(iVar10 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar10 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar9,uStack_198,uStack_188,1,*(iVar5 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_198,uStack_188);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar9 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar9 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar9);
        }
    }
code_r0x08004cc8:
    ppppuVar8 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_118) {
        return ppppuVar8;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.iommu_debug_functional_arm_dma_api_open;
    ppppuVar8 = single_open(auVar11._8_8_,
                            sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                            *(auVar11._0_8_ + 0x2d8));
    return ppppuVar8;
}


// ===== sym.iommu_debug_map_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003350 (size 8) =====

int64_t *****
sym.iommu_debug_map_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
          (int64_t param_1,int64_t *****param_2,int64_t *****param_3,int64_t *****param_4)

{
    int iVar1;
    uint32_t uVar2;
    int64_t *****pppppiVar3;
    int64_t ****ppppiVar4;
    int64_t ****ppppiVar5;
    int64_t *****pppppiVar6;
    int64_t iVar7;
    uchar *puVar8;
    uchar *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t *****pppppiVar10;
    int64_t *****pppppiVar11;
    int64_t *****unaff_x20;
    int64_t *****pppppiVar12;
    ulong uVar13;
    int64_t ****unaff_x21;
    int64_t ****ppppiVar14;
    int64_t ****arg2;
    code *unaff_x22;
    code *pcVar15;
    int64_t ****unaff_x23;
    int64_t ****ppppiVar16;
    uchar *unaff_x24;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_3d8;
    uint32_t uStack_3cc;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    ulong uStack_378;
    ulong uStack_370;
    ulong uStack_368;
    uint uStack_360;
    int64_t iStack_358;
    uchar ****ppppuStack_350;
    code *pcStack_348;
    uchar *puStack_340;
    int64_t ***pppiStack_338;
    code *pcStack_330;
    int64_t ***pppiStack_328;
    int64_t ****ppppiStack_320;
    int64_t ****ppppiStack_318;
    uint32_t uStack_30c;
    int64_t ****ppppiStack_308;
    int64_t ****ppppiStack_300;
    int64_t ***pppiStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    uint uStack_290;
    int64_t iStack_288;
    uchar ***pppuStack_280;
    code *pcStack_278;
    uchar *puStack_270;
    int64_t ***pppiStack_268;
    code *pcStack_260;
    int64_t ***pppiStack_258;
    int64_t ****ppppiStack_250;
    int64_t ****ppppiStack_248;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    uint uStack_1d0;
    int64_t iStack_1c8;
    uchar **ppuStack_1c0;
    code *pcStack_1b8;
    int64_t ***pppiStack_1b0;
    int64_t ****ppppiStack_1a0;
    int64_t ****ppppiStack_198;
    int64_t ****ppppiStack_190;
    int64_t ***pppiStack_188;
    int64_t *piStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    int64_t ***pppiStack_100;
    int64_t ****ppppiStack_f0;
    int64_t ****ppppiStack_e8;
    uint uStack_dc;
    int64_t ****ppppiStack_d8;
    int64_t ****ppppiStack_d0;
    int64_t ***pppiStack_c8;
    int64_t *piStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    piStack_c0 = NULL;
    uStack_b8 = 0;
    ppppiStack_d0 = NULL;
    pppiStack_c8 = NULL;
    ppppiStack_d8 = NULL;
    uStack_dc = 0;
    if (param_3 < 0x64) {
        iVar17 = *(param_1 + 0xd8);
        __check_object_size(&piStack_c0,param_3,0);
        iVar7 = sym._copy_from_user(&piStack_c0,param_2,param_3);
        if ((iVar7 != 0) &&
           (iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs.8,"iommu_debug_map_write"), iVar1 != 0)) {
            _printk(0x80011fa);
        }
        pppppiVar11 = 0x2c;
        ppppiVar16 = strnchr(&piStack_c0,param_3);
        unaff_x20 = param_2;
        if (ppppiVar16 == NULL) {
code_r0x080042ac:
            iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs.14,"iommu_debug_map_write");
            pcVar15 = unaff_x22;
            ppppiVar16 = unaff_x23;
            puVar8 = unaff_x24;
            if (iVar1 != 0) {
                uVar13 = 0x8000b1c;
                goto code_r0x0800430c;
            }
            goto code_r0x080042c4;
        }
        unaff_x21 = ppppiVar16 + 1;
        pppppiVar11 = 0x2c;
        puVar8 = strnchr(unaff_x21,param_3);
        unaff_x23 = ppppiVar16;
        if (puVar8 == NULL) goto code_r0x080042ac;
        unaff_x20 = puVar8 + 1;
        pppppiVar11 = 0x2c;
        pcVar15 = strnchr(unaff_x20,param_3);
        unaff_x24 = puVar8;
        if (pcVar15 == NULL) goto code_r0x080042ac;
        *pcVar15 = 0x0;
        pppppiVar11 = &pppiStack_c8;
        *puVar8 = 0;
        *ppppiVar16 = 0;
        iVar1 = kstrtoull(&piStack_c0,0);
        unaff_x22 = pcVar15;
        if (iVar1 != 0) goto code_r0x080042ac;
        pppppiVar11 = &ppppiStack_d0;
        iVar1 = kstrtoull(unaff_x21,0);
        if (iVar1 != 0) goto code_r0x080042ac;
        pppppiVar11 = &ppppiStack_d8;
        iVar1 = kstrtoull(unaff_x20,0);
        if (iVar1 != 0) goto code_r0x080042ac;
        pppppiVar11 = &uStack_dc;
        iVar1 = kstrtoint(pcVar15 + 1,0);
        if (iVar1 != 0) goto code_r0x080042ac;
        unaff_x20 = iVar17 + 0x38;
        mutex_lock(unaff_x20);
        iVar7 = *(iVar17 + 0x28);
        if (iVar7 == 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs.10,"iommu_debug_map_write");
            if (iVar1 != 0) {
                _printk(0x8001129,"iommu_debug_map_write");
            }
            mutex_unlock(unaff_x20);
            goto code_r0x080042c4;
        }
        pppppiVar11 = ppppiStack_d0;
        param_4 = ppppiStack_d8;
        uVar2 = iommu_map(iVar7,pppiStack_c8,ppppiStack_d0,ppppiStack_d8,uStack_dc);
        if (uVar2 == 0) {
            pppppiVar11 = &ppppiStack_d0;
            param_4 = ppppiStack_d8;
            _printk(0x80016da,&pppiStack_c8,pppppiVar11,ppppiStack_d8,uStack_dc);
        }
        else {
            unaff_x21 = uVar2;
            iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs.11,"iommu_debug_map_write");
            if (iVar1 != 0) {
                _printk(0x8001089,unaff_x21);
            }
            param_3 = 0xfffffffffffffffb;
        }
        mutex_unlock(unaff_x20);
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs,"iommu_debug_map_write");
        pppppiVar11 = param_3;
        pcVar15 = unaff_x22;
        ppppiVar16 = unaff_x23;
        puVar8 = unaff_x24;
        if (iVar1 != 0) {
            uVar13 = 0x80016c7;
code_r0x0800430c:
            _printk(uVar13);
            pcVar15 = unaff_x22;
            ppppiVar16 = unaff_x23;
            puVar8 = unaff_x24;
        }
code_r0x080042c4:
        param_3 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return param_3;
    }
    auVar18 = __stack_chk_fail();
    pppppiVar12 = auVar18._8_8_;
    pppppiVar10 = &ppppiStack_190;
    *extraout_x18 = sym.iommu_debug_unmap_write;
    pcStack_108 = sym.iommu_debug_unmap_write;
    iVar7 = sp_el0;
    iStack_118 = *(iVar7 + 0x5e0);
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    piStack_180 = NULL;
    uStack_178 = 0;
    ppppiStack_190 = NULL;
    pppiStack_188 = NULL;
    puStack_110 = &stack0xffffffffffffffb0;
    pppiStack_100 = unaff_x21;
    ppppiStack_f0 = unaff_x20;
    ppppiStack_e8 = param_3;
    if (pppppiVar11 < 0x64) {
        ppppiVar14 = *(auVar18._0_8_ + 0xd8);
        if (ppppiVar14[5] == NULL) {
            iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.17,"iommu_debug_unmap_write");
            if (iVar1 != 0) {
                _printk(0x8001129,"iommu_debug_unmap_write");
            }
            goto code_r0x08004550;
        }
        __check_object_size(&piStack_180,pppppiVar11,0);
        pppppiVar6 = pppppiVar11;
        iVar7 = sym._copy_from_user(&piStack_180,pppppiVar12,pppppiVar11);
        if (iVar7 == 0) {
            pppppiVar6 = 0x2c;
            pppppiVar3 = strnchr(&piStack_180,pppppiVar11);
            unaff_x20 = pppppiVar12;
            if (pppppiVar3 != NULL) {
                *pppppiVar3 = 0;
                pppppiVar6 = &pppiStack_188;
                iVar1 = kstrtoull(&piStack_180,0);
                unaff_x20 = pppppiVar3;
                if ((iVar1 == 0) && (iVar1 = kstrtoull(pppppiVar3 + 1,0), pppppiVar6 = pppppiVar10, iVar1 == 0)) {
                    unaff_x20 = ppppiVar14 + 7;
                    mutex_lock(unaff_x20);
                    if (ppppiVar14[5] == NULL) {
                        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.19,"iommu_debug_unmap_write");
                        pppppiVar11 = pppppiVar10;
                        if (iVar1 != 0) {
                            _printk(0x800161d);
                            pppppiVar11 = pppppiVar10;
                        }
                        mutex_unlock(unaff_x20);
                        goto code_r0x08004550;
                    }
                    pppppiVar6 = ppppiStack_190;
                    pppppiVar12 = iommu_unmap(ppppiVar14[5],pppiStack_188);
                    if (pppppiVar12 == ppppiStack_190) {
                        pppppiVar6 = pppppiVar12;
                        _printk(0x800183c,&pppiStack_188);
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.21,"iommu_debug_unmap_write");
                        if (iVar1 == 0) {
                            pppppiVar11 = 0xfffffffffffffffb;
                        }
                        else {
                            pppppiVar6 = pppppiVar12;
                            _printk(0x8000f9c,ppppiStack_190);
                            pppppiVar11 = 0xfffffffffffffffb;
                        }
                    }
                    goto code_r0x080044b8;
                }
            }
            pppppiVar11 = pppppiVar6;
            iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.24,"iommu_debug_unmap_write");
            if (iVar1 != 0) {
                uVar13 = 0x8001317;
                goto code_r0x0800445c;
            }
            goto code_r0x08004550;
        }
        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.18,"iommu_debug_unmap_write");
        if (iVar1 != 0) {
            _printk(0x80011fa);
        }
        pppppiVar11 = 0xfffffffffffffff2;
code_r0x080044b8:
        mutex_unlock(ppppiVar14 + 7);
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs,"iommu_debug_unmap_write");
        ppppiVar14 = unaff_x21;
        if (iVar1 != 0) {
            uVar13 = 0x80016c7;
code_r0x0800445c:
            _printk(uVar13);
        }
code_r0x08004550:
        pppppiVar6 = pppppiVar11;
        pppppiVar11 = 0xffffffffffffffea;
        pppppiVar12 = unaff_x20;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_118) {
        return pppppiVar11;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_00 = sym.iommu_debug_dma_map_read;
    pcStack_1b8 = sym.iommu_debug_dma_map_read;
    iVar7 = sp_el0;
    iStack_1c8 = *(iVar7 + 0x5e0);
    pppppiVar3 = NULL;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    pppppiVar10 = pppppiVar6;
    ppuStack_1c0 = &puStack_110;
    pppiStack_1b0 = ppppiVar14;
    ppppiStack_1a0 = pppppiVar12;
    ppppiStack_198 = pppppiVar11;
    if (*param_4 == NULL) {
        uStack_238 = *(*(auVar18._0_8_ + 0xd8) + 0x88);
        iVar1 = scnprintf(&uStack_230,100,"%pa\n",&uStack_238);
        pppppiVar10 = param_4;
        pppppiVar3 = simple_read_from_buffer(auVar18._8_8_,pppppiVar6,param_4,&uStack_230,iVar1);
        pppppiVar11 = param_4;
        pppppiVar12 = pppppiVar6;
        ppppiVar14 = auVar18._8_8_;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1c8) {
        return pppppiVar3;
    }
    auVar18 = __stack_chk_fail(pppppiVar3);
    arg2 = auVar18._8_8_;
    *extraout_x18_01 = sym.iommu_debug_dma_map_write;
    pcStack_278 = sym.iommu_debug_dma_map_write;
    iVar7 = sp_el0;
    iStack_288 = *(iVar7 + 0x5e0);
    uStack_290 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    pppiStack_2f8 = NULL;
    ppppiStack_308 = NULL;
    uStack_30c = 0;
    pppuStack_280 = &ppuStack_1c0;
    puStack_270 = puVar8;
    pppiStack_268 = ppppiVar16;
    pcStack_260 = pcVar15;
    pppiStack_258 = ppppiVar14;
    ppppiStack_250 = pppppiVar12;
    ppppiStack_248 = pppppiVar11;
    if (pppppiVar10 < 0x64) {
        puVar8 = *(auVar18._0_8_ + 0xd8);
        pppppiVar12 = *(puVar8 + 0x20);
        __check_object_size(&uStack_2f0,pppppiVar10,0);
        pppppiVar11 = pppppiVar10;
        iVar7 = sym._copy_from_user(&uStack_2f0,arg2,pppppiVar10);
        if (iVar7 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar10 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        pppppiVar11 = 0x2c;
        ppppiVar4 = strnchr(&uStack_2f0,pppppiVar10);
        ppppiVar14 = arg2;
        if (ppppiVar4 == NULL) {
code_r0x0800487c:
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            arg2 = ppppiVar14;
            if (iVar1 != 0) {
                uVar13 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        pcVar15 = ppppiVar4 + 1;
        pppppiVar11 = 0x2c;
        ppppiVar5 = strnchr(pcVar15,pppppiVar10);
        ppppiVar14 = ppppiVar4;
        if (ppppiVar5 == NULL) goto code_r0x0800487c;
        *ppppiVar5 = 0;
        pppppiVar11 = &pppiStack_2f8;
        *ppppiVar4 = 0;
        iVar1 = kstrtoull(&uStack_2f0,0);
        arg2 = pppiStack_2f8;
        ppppiVar16 = ppppiVar5;
        if (iVar1 != 0) goto code_r0x0800487c;
        pppppiVar11 = &ppppiStack_308;
        iVar1 = kstrtoull(pcVar15,0);
        ppppiVar14 = arg2;
        if (iVar1 != 0) goto code_r0x0800487c;
        pppppiVar11 = &uStack_30c;
        iVar1 = kstrtouint(ppppiVar5 + 1,0);
        if (iVar1 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        ppppiVar16 = _segment.ehdr;
        pcVar15 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (ppppiVar16 == NULL) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    uVar13 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((arg2 < _segment.ehdr) || (_segment.ehdr + 0x20000 < arg2 + ppppiStack_308)) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8000d77,arg2);
                }
            }
            else {
                ppppiVar16 = uStack_30c;
                if (3 < uStack_30c) goto code_r0x0800487c;
                pcVar15 = puVar8 + 0x38;
                mutex_lock(pcVar15);
                if (*(puVar8 + 0x28) != 0) {
                    pppppiVar11 = ppppiStack_308;
                    pppppiVar6 = sym.dma_map_single_attrs
                                           (pppppiVar12,arg2,ppppiStack_308,*(ppppiVar16 * 8 + 0x8002a30));
                    ppppiStack_300 = pppppiVar6;
                    if (pppppiVar6 == 0xffffffffffffffff) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8001465);
                        }
                        pppppiVar10 = 0xffffffffffffffea;
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        pppppiVar12 = pppppiVar6;
                        if (iVar1 != 0) {
                            pppppiVar11 = &ppppiStack_300;
                            _printk(0x8001878,arg2,pppppiVar11,ppppiStack_308);
                            pppppiVar12 = ppppiStack_300;
                        }
                        *(puVar8 + 0x88) = pppppiVar12;
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8000ee6,&ppppiStack_300);
                        }
                    }
                    mutex_unlock(pcVar15);
                    goto code_r0x08004898;
                }
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(pcVar15);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar1 != 0) {
            _printk(0x8000b8c);
        }
        pppppiVar10 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        pppppiVar11 = pppppiVar10;
        arg2 = ppppiVar14;
        if (iVar1 == 0) goto code_r0x08004894;
        uVar13 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar13);
code_r0x08004894:
        pppppiVar10 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_288) {
        return pppppiVar10;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_02 = sym.iommu_debug_dma_unmap_write;
    pcStack_348 = sym.iommu_debug_dma_unmap_write;
    iVar7 = sp_el0;
    iStack_358 = *(iVar7 + 0x5e0);
    uStack_360 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3c8 = 0;
    uStack_3cc = 0;
    uStack_3d8 = 0;
    ppppuStack_350 = &pppuStack_280;
    puStack_340 = puVar8;
    pppiStack_338 = ppppiVar16;
    pcStack_330 = pcVar15;
    pppiStack_328 = arg2;
    ppppiStack_320 = pppppiVar12;
    ppppiStack_318 = pppppiVar10;
    if (pppppiVar11 < 0x64) {
        iVar17 = *(auVar18._0_8_ + 0xd8);
        uVar13 = *(iVar17 + 0x20);
        __check_object_size(&uStack_3c0,pppppiVar11,0);
        iVar7 = sym._copy_from_user(&uStack_3c0,auVar18._8_8_,pppppiVar11);
        if (iVar7 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar11 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar17 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar8 = strnchr(&uStack_3c0,pppppiVar11,0x2c);
        if (puVar8 != NULL) {
            puVar9 = strnchr(puVar8 + 1,pppppiVar11,0x2c);
            if (puVar9 != NULL) {
                *puVar9 = 0;
                *puVar8 = 0;
                iVar1 = kstrtoull(&uStack_3c0,0,&uStack_3d8);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar8 + 1,0,&uStack_3c8), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar9 + 1,0,&uStack_3cc), iVar1 == 0)) &&
                   (iVar7 = uStack_3cc, uStack_3cc < 4)) {
                    mutex_lock(iVar17 + 0x38);
                    if (*(iVar17 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar17 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar13,uStack_3d8,uStack_3c8,1,*(iVar7 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_3d8,uStack_3c8);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar13 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar13 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar13);
        }
    }
code_r0x08004cc8:
    pppppiVar11 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_358) {
        return pppppiVar11;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_03 = sym.iommu_debug_functional_arm_dma_api_open;
    pppppiVar11 = single_open(auVar18._8_8_,
                              sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                              *(auVar18._0_8_ + 0x2d8));
    return pppppiVar11;
}


// ===== sym.iommu_debug_usecase_write.aabe0ea5067ace97199e12937638aa45.cfi_jt @ 0x08003358 (size 8) =====

ulong sym.iommu_debug_usecase_write.aabe0ea5067ace97199e12937638aa45.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0xd8);
    uStack_3c = 0;
    iVar1 = kstrtouint_from_user(param_2,param_3,0,&uStack_3c);
    if (iVar1 == 0) {
        uVar3 = 0xffffffffffffffea;
        if (uStack_3c < *(iVar4 + 8)) {
            mutex_lock(iVar4 + 0x38);
            iVar2 = sym.iommu_debug_switch_usecase(iVar4,uStack_3c);
            mutex_unlock(iVar4 + 0x38);
            uVar3 = 0xffffffffffffffea;
            if (iVar2 != 0) {
                uVar3 = param_3;
            }
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        auVar5 = __stack_chk_fail();
        *extraout_x18 = sym.iommu_debug_nr_iters_fops_open;
        uVar3 = simple_attr_open(auVar5._0_8_,auVar5._8_8_,
                                 sym.iommu_debug_nr_iters_get.aabe0ea5067ace97199e12937638aa45.cfi_jt,
                                 sym.iommu_debug_nr_iters_set.aabe0ea5067ace97199e12937638aa45.cfi_jt,"%llu\n");
        return uVar3;
    }
    return uVar3;
}


// ===== sym.iommu_debug_atos_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt @ 0x08003360 (size 8) =====

int64_t *****
sym.iommu_debug_atos_write.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
          (int64_t param_1,int64_t ****param_2,int64_t *****param_3,int64_t *****param_4)

{
    ulong *puVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t *****pppppiVar4;
    int64_t *****pppppiVar5;
    int64_t ****ppppiVar6;
    int64_t ****ppppiVar7;
    int64_t *****pppppiVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int64_t *****pppppiVar13;
    int64_t *****pppppiVar14;
    int64_t *****pppppiVar15;
    ulong uVar16;
    int64_t ****ppppiVar17;
    int64_t ****arg2;
    code *pcVar18;
    code *pcVar19;
    int64_t ****unaff_x23;
    int64_t ****ppppiVar20;
    uchar *unaff_x24;
    int64_t iVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_428;
    uint32_t uStack_41c;
    ulong uStack_418;
    ulong uStack_410;
    ulong uStack_408;
    ulong uStack_400;
    ulong uStack_3f8;
    ulong uStack_3f0;
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    uint uStack_3b0;
    int64_t iStack_3a8;
    ulong ****ppppuStack_3a0;
    code *pcStack_398;
    uchar *puStack_390;
    int64_t ***pppiStack_388;
    code *pcStack_380;
    int64_t ***pppiStack_378;
    int64_t ****ppppiStack_370;
    int64_t ****ppppiStack_368;
    uint32_t uStack_35c;
    int64_t ****ppppiStack_358;
    int64_t ****ppppiStack_350;
    int64_t ***pppiStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    uint uStack_2e0;
    int64_t iStack_2d8;
    uchar ****ppppuStack_2d0;
    code *pcStack_2c8;
    uchar *puStack_2c0;
    int64_t ***pppiStack_2b8;
    code *pcStack_2b0;
    int64_t ***pppiStack_2a8;
    int64_t ****ppppiStack_2a0;
    int64_t ****ppppiStack_298;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    uint uStack_220;
    int64_t iStack_218;
    uchar ***pppuStack_210;
    code *pcStack_208;
    int64_t ***pppiStack_200;
    int64_t ****ppppiStack_1f0;
    int64_t ****ppppiStack_1e8;
    int64_t ****ppppiStack_1e0;
    int64_t ***pppiStack_1d8;
    int64_t *piStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    uint uStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    int64_t ***pppiStack_150;
    int64_t ****ppppiStack_140;
    int64_t ****ppppiStack_138;
    uint uStack_12c;
    int64_t ****ppppiStack_128;
    int64_t ****ppppiStack_120;
    int64_t ***pppiStack_118;
    int64_t *piStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    uint uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t ***pppiStack_48;
    int64_t ***pppiStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    pcVar18 = *(param_1 + 0xd8);
    pppiStack_40 = NULL;
    pppppiVar14 = pcVar18 + 0x38;
    pppppiVar13 = param_3;
    mutex_lock(pppppiVar14);
    if (*(pcVar18 + 0x28) == 0) {
        _printk(0x8001129,"iommu_debug_atos_write");
code_r0x080040cc:
        mutex_unlock(pppppiVar14);
        param_3 = 0xffffffffffffffea;
    }
    else {
        param_4 = &pppiStack_40;
        pppppiVar13 = NULL;
        iVar2 = kstrtoull_from_user(param_2,param_3);
        if (iVar2 != 0) {
            _dev_err(*(pcVar18 + 0x20),"Invalid format for iova\n");
            *(pcVar18 + 0x88) = 0;
            goto code_r0x080040cc;
        }
        pppiStack_48 = iommu_iova_to_phys(*(pcVar18 + 0x28),pppiStack_40);
        if (((pppiStack_48 >> 0x30 != 0) || (_simple_open == 0)) ||
           (iVar9 = *(_simple_open + (pppiStack_48 >> 0x1f & 0x1fffffff8)), iVar9 == 0)) {
code_r0x080040a0:
            pppppiVar13 = &pppiStack_48;
            _dev_err(*(pcVar18 + 0x20),"Invalid ATOS operation page %pa\n");
            goto code_r0x080040cc;
        }
        uVar12 = pppiStack_48 >> 0x1b & 0x7f;
        puVar1 = iVar9 + uVar12 * 0x20;
        if (((puVar1 == NULL) || (uVar3 = *puVar1, (uVar3 >> 1 & 1) == 0)) ||
           (((uVar3 >> 3 & 1) == 0 && ((**(iVar9 + uVar12 * 0x20 + 8) >> (pppiStack_48 >> 0x15 & 0x3f) & 1) == 0))))
        goto code_r0x080040a0;
        *(pcVar18 + 0x88) = pppiStack_40;
        mutex_unlock(pppppiVar14);
        _printk(0x80015da,&pppiStack_40);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return param_3;
    }
    auVar22 = __stack_chk_fail();
    pppppiVar15 = auVar22._8_8_;
    *extraout_x18 = sym.iommu_debug_map_write;
    pcStack_98 = sym.iommu_debug_map_write;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    piStack_110 = NULL;
    uStack_108 = 0;
    ppppiStack_120 = NULL;
    pppiStack_118 = NULL;
    ppppiStack_128 = NULL;
    uStack_12c = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    if (pppppiVar13 < 0x64) {
        iVar21 = *(auVar22._0_8_ + 0xd8);
        __check_object_size(&piStack_110,pppppiVar13,0);
        iVar9 = sym._copy_from_user(&piStack_110,pppppiVar15,pppppiVar13);
        if ((iVar9 != 0) &&
           (iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs.8,"iommu_debug_map_write"), iVar2 != 0)) {
            _printk(0x80011fa);
        }
        pppppiVar8 = 0x2c;
        ppppiVar20 = strnchr(&piStack_110,pppppiVar13);
        pppppiVar14 = pppppiVar15;
        if (ppppiVar20 == NULL) {
code_r0x080042ac:
            iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs.14,"iommu_debug_map_write");
            pcVar19 = pcVar18;
            ppppiVar20 = unaff_x23;
            puVar10 = unaff_x24;
            if (iVar2 != 0) {
                uVar16 = 0x8000b1c;
                goto code_r0x0800430c;
            }
            goto code_r0x080042c4;
        }
        param_2 = ppppiVar20 + 1;
        pppppiVar8 = 0x2c;
        puVar10 = strnchr(param_2,pppppiVar13);
        unaff_x23 = ppppiVar20;
        if (puVar10 == NULL) goto code_r0x080042ac;
        pppppiVar14 = puVar10 + 1;
        pppppiVar8 = 0x2c;
        pcVar19 = strnchr(pppppiVar14,pppppiVar13);
        unaff_x24 = puVar10;
        if (pcVar19 == NULL) goto code_r0x080042ac;
        *pcVar19 = 0x0;
        pppppiVar8 = &pppiStack_118;
        *puVar10 = 0;
        *ppppiVar20 = 0;
        iVar2 = kstrtoull(&piStack_110,0);
        pcVar18 = pcVar19;
        if (iVar2 != 0) goto code_r0x080042ac;
        pppppiVar8 = &ppppiStack_120;
        iVar2 = kstrtoull(param_2,0);
        if (iVar2 != 0) goto code_r0x080042ac;
        pppppiVar8 = &ppppiStack_128;
        iVar2 = kstrtoull(pppppiVar14,0);
        if (iVar2 != 0) goto code_r0x080042ac;
        pppppiVar8 = &uStack_12c;
        iVar2 = kstrtoint(pcVar19 + 1,0);
        if (iVar2 != 0) goto code_r0x080042ac;
        pppppiVar14 = iVar21 + 0x38;
        mutex_lock(pppppiVar14);
        iVar9 = *(iVar21 + 0x28);
        if (iVar9 == 0) {
            iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs.10,"iommu_debug_map_write");
            if (iVar2 != 0) {
                _printk(0x8001129,"iommu_debug_map_write");
            }
            mutex_unlock(pppppiVar14);
            goto code_r0x080042c4;
        }
        pppppiVar8 = ppppiStack_120;
        param_4 = ppppiStack_128;
        uVar3 = iommu_map(iVar9,pppiStack_118,ppppiStack_120,ppppiStack_128,uStack_12c);
        if (uVar3 == 0) {
            pppppiVar8 = &ppppiStack_120;
            param_4 = ppppiStack_128;
            _printk(0x80016da,&pppiStack_118,pppppiVar8,ppppiStack_128,uStack_12c);
        }
        else {
            param_2 = uVar3;
            iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs.11,"iommu_debug_map_write");
            if (iVar2 != 0) {
                _printk(0x8001089,param_2);
            }
            pppppiVar13 = 0xfffffffffffffffb;
        }
        mutex_unlock(pppppiVar14);
    }
    else {
        iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs,"iommu_debug_map_write");
        pppppiVar8 = pppppiVar13;
        pcVar19 = pcVar18;
        ppppiVar20 = unaff_x23;
        puVar10 = unaff_x24;
        if (iVar2 != 0) {
            uVar16 = 0x80016c7;
code_r0x0800430c:
            _printk(uVar16);
            pcVar19 = pcVar18;
            ppppiVar20 = unaff_x23;
            puVar10 = unaff_x24;
        }
code_r0x080042c4:
        pppppiVar13 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return pppppiVar13;
    }
    auVar22 = __stack_chk_fail();
    pppppiVar15 = auVar22._8_8_;
    pppppiVar5 = &ppppiStack_1e0;
    *extraout_x18_00 = sym.iommu_debug_unmap_write;
    pcStack_158 = sym.iommu_debug_unmap_write;
    iVar9 = sp_el0;
    iStack_168 = *(iVar9 + 0x5e0);
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    piStack_1d0 = NULL;
    uStack_1c8 = 0;
    ppppiStack_1e0 = NULL;
    pppiStack_1d8 = NULL;
    ppuStack_160 = &puStack_a0;
    pppiStack_150 = param_2;
    ppppiStack_140 = pppppiVar14;
    ppppiStack_138 = pppppiVar13;
    if (pppppiVar8 < 0x64) {
        param_2 = *(auVar22._0_8_ + 0xd8);
        if (param_2[5] == NULL) {
            iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.17,"iommu_debug_unmap_write");
            if (iVar2 != 0) {
                _printk(0x8001129,"iommu_debug_unmap_write");
            }
            goto code_r0x08004550;
        }
        __check_object_size(&piStack_1d0,pppppiVar8,0);
        pppppiVar13 = pppppiVar8;
        iVar9 = sym._copy_from_user(&piStack_1d0,pppppiVar15,pppppiVar8);
        if (iVar9 == 0) {
            pppppiVar13 = 0x2c;
            pppppiVar4 = strnchr(&piStack_1d0,pppppiVar8);
            pppppiVar14 = pppppiVar15;
            if (pppppiVar4 != NULL) {
                *pppppiVar4 = 0;
                pppppiVar13 = &pppiStack_1d8;
                iVar2 = kstrtoull(&piStack_1d0,0);
                pppppiVar14 = pppppiVar4;
                if ((iVar2 == 0) && (iVar2 = kstrtoull(pppppiVar4 + 1,0), pppppiVar13 = pppppiVar5, iVar2 == 0)) {
                    pppppiVar14 = param_2 + 7;
                    mutex_lock(pppppiVar14);
                    if (param_2[5] == NULL) {
                        iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.19,"iommu_debug_unmap_write");
                        pppppiVar8 = pppppiVar5;
                        if (iVar2 != 0) {
                            _printk(0x800161d);
                            pppppiVar8 = pppppiVar5;
                        }
                        mutex_unlock(pppppiVar14);
                        goto code_r0x08004550;
                    }
                    pppppiVar13 = ppppiStack_1e0;
                    pppppiVar15 = iommu_unmap(param_2[5],pppiStack_1d8);
                    if (pppppiVar15 == ppppiStack_1e0) {
                        pppppiVar13 = pppppiVar15;
                        _printk(0x800183c,&pppiStack_1d8);
                    }
                    else {
                        iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.21,"iommu_debug_unmap_write");
                        if (iVar2 == 0) {
                            pppppiVar8 = 0xfffffffffffffffb;
                        }
                        else {
                            pppppiVar13 = pppppiVar15;
                            _printk(0x8000f9c,ppppiStack_1e0);
                            pppppiVar8 = 0xfffffffffffffffb;
                        }
                    }
                    goto code_r0x080044b8;
                }
            }
            pppppiVar8 = pppppiVar13;
            iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.24,"iommu_debug_unmap_write");
            if (iVar2 != 0) {
                uVar16 = 0x8001317;
                goto code_r0x0800445c;
            }
            goto code_r0x08004550;
        }
        iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.18,"iommu_debug_unmap_write");
        if (iVar2 != 0) {
            _printk(0x80011fa);
        }
        pppppiVar8 = 0xfffffffffffffff2;
code_r0x080044b8:
        mutex_unlock(param_2 + 7);
    }
    else {
        iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs,"iommu_debug_unmap_write");
        if (iVar2 != 0) {
            uVar16 = 0x80016c7;
code_r0x0800445c:
            _printk(uVar16);
        }
code_r0x08004550:
        pppppiVar13 = pppppiVar8;
        pppppiVar8 = 0xffffffffffffffea;
        pppppiVar15 = pppppiVar14;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_168) {
        return pppppiVar8;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_01 = sym.iommu_debug_dma_map_read;
    pcStack_208 = sym.iommu_debug_dma_map_read;
    iVar9 = sp_el0;
    iStack_218 = *(iVar9 + 0x5e0);
    pppppiVar5 = NULL;
    uStack_220 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    pppppiVar14 = pppppiVar13;
    pppuStack_210 = &ppuStack_160;
    pppiStack_200 = param_2;
    ppppiStack_1f0 = pppppiVar15;
    ppppiStack_1e8 = pppppiVar8;
    if (*param_4 == NULL) {
        uStack_288 = *(*(auVar22._0_8_ + 0xd8) + 0x88);
        iVar2 = scnprintf(&uStack_280,100,"%pa\n",&uStack_288);
        pppppiVar14 = param_4;
        pppppiVar5 = simple_read_from_buffer(auVar22._8_8_,pppppiVar13,param_4,&uStack_280,iVar2);
        pppppiVar8 = param_4;
        pppppiVar15 = pppppiVar13;
        param_2 = auVar22._8_8_;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_218) {
        return pppppiVar5;
    }
    auVar22 = __stack_chk_fail(pppppiVar5);
    arg2 = auVar22._8_8_;
    *extraout_x18_02 = sym.iommu_debug_dma_map_write;
    pcStack_2c8 = sym.iommu_debug_dma_map_write;
    iVar9 = sp_el0;
    iStack_2d8 = *(iVar9 + 0x5e0);
    uStack_2e0 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    pppiStack_348 = NULL;
    ppppiStack_358 = NULL;
    uStack_35c = 0;
    ppppuStack_2d0 = &pppuStack_210;
    puStack_2c0 = puVar10;
    pppiStack_2b8 = ppppiVar20;
    pcStack_2b0 = pcVar19;
    pppiStack_2a8 = param_2;
    ppppiStack_2a0 = pppppiVar15;
    ppppiStack_298 = pppppiVar8;
    if (pppppiVar14 < 0x64) {
        puVar10 = *(auVar22._0_8_ + 0xd8);
        pppppiVar15 = *(puVar10 + 0x20);
        __check_object_size(&uStack_340,pppppiVar14,0);
        pppppiVar13 = pppppiVar14;
        iVar9 = sym._copy_from_user(&uStack_340,arg2,pppppiVar14);
        if (iVar9 != 0) {
            iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar2 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar14 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        pppppiVar13 = 0x2c;
        ppppiVar6 = strnchr(&uStack_340,pppppiVar14);
        ppppiVar17 = arg2;
        if (ppppiVar6 == NULL) {
code_r0x0800487c:
            iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            arg2 = ppppiVar17;
            if (iVar2 != 0) {
                uVar16 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        pcVar19 = ppppiVar6 + 1;
        pppppiVar13 = 0x2c;
        ppppiVar7 = strnchr(pcVar19,pppppiVar14);
        ppppiVar17 = ppppiVar6;
        if (ppppiVar7 == NULL) goto code_r0x0800487c;
        *ppppiVar7 = 0;
        pppppiVar13 = &pppiStack_348;
        *ppppiVar6 = 0;
        iVar2 = kstrtoull(&uStack_340,0);
        arg2 = pppiStack_348;
        ppppiVar20 = ppppiVar7;
        if (iVar2 != 0) goto code_r0x0800487c;
        pppppiVar13 = &ppppiStack_358;
        iVar2 = kstrtoull(pcVar19,0);
        ppppiVar17 = arg2;
        if (iVar2 != 0) goto code_r0x0800487c;
        pppppiVar13 = &uStack_35c;
        iVar2 = kstrtouint(ppppiVar7 + 1,0);
        if (iVar2 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        ppppiVar20 = _segment.ehdr;
        pcVar19 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (ppppiVar20 == NULL) {
                iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar2 != 0) {
                    uVar16 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((arg2 < _segment.ehdr) || (_segment.ehdr + 0x20000 < arg2 + ppppiStack_358)) {
                iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar2 != 0) {
                    _printk(0x8000d77,arg2);
                }
            }
            else {
                ppppiVar20 = uStack_35c;
                if (3 < uStack_35c) goto code_r0x0800487c;
                pcVar19 = puVar10 + 0x38;
                mutex_lock(pcVar19);
                if (*(puVar10 + 0x28) != 0) {
                    pppppiVar13 = ppppiStack_358;
                    pppppiVar8 = sym.dma_map_single_attrs
                                           (pppppiVar15,arg2,ppppiStack_358,*(ppppiVar20 * 8 + 0x8002a30));
                    ppppiStack_350 = pppppiVar8;
                    if (pppppiVar8 == 0xffffffffffffffff) {
                        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar2 != 0) {
                            _printk(0x8001465);
                        }
                        pppppiVar14 = 0xffffffffffffffea;
                    }
                    else {
                        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        pppppiVar15 = pppppiVar8;
                        if (iVar2 != 0) {
                            pppppiVar13 = &ppppiStack_350;
                            _printk(0x8001878,arg2,pppppiVar13,ppppiStack_358);
                            pppppiVar15 = ppppiStack_350;
                        }
                        *(puVar10 + 0x88) = pppppiVar15;
                        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar2 != 0) {
                            _printk(0x8000ee6,&ppppiStack_350);
                        }
                    }
                    mutex_unlock(pcVar19);
                    goto code_r0x08004898;
                }
                iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar2 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(pcVar19);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar2 != 0) {
            _printk(0x8000b8c);
        }
        pppppiVar14 = 0xfffffffffffffff4;
    }
    else {
        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        pppppiVar13 = pppppiVar14;
        arg2 = param_2;
        if (iVar2 == 0) goto code_r0x08004894;
        uVar16 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar16);
code_r0x08004894:
        pppppiVar14 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_2d8) {
        return pppppiVar14;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_03 = sym.iommu_debug_dma_unmap_write;
    pcStack_398 = sym.iommu_debug_dma_unmap_write;
    iVar9 = sp_el0;
    iStack_3a8 = *(iVar9 + 0x5e0);
    uStack_3b0 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_418 = 0;
    uStack_41c = 0;
    uStack_428 = 0;
    ppppuStack_3a0 = &ppppuStack_2d0;
    puStack_390 = puVar10;
    pppiStack_388 = ppppiVar20;
    pcStack_380 = pcVar19;
    pppiStack_378 = arg2;
    ppppiStack_370 = pppppiVar15;
    ppppiStack_368 = pppppiVar14;
    if (pppppiVar13 < 0x64) {
        iVar21 = *(auVar22._0_8_ + 0xd8);
        uVar16 = *(iVar21 + 0x20);
        __check_object_size(&uStack_410,pppppiVar13,0);
        iVar9 = sym._copy_from_user(&uStack_410,auVar22._8_8_,pppppiVar13);
        if (iVar9 != 0) {
            iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar2 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar13 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar21 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar10 = strnchr(&uStack_410,pppppiVar13,0x2c);
        if (puVar10 != NULL) {
            puVar11 = strnchr(puVar10 + 1,pppppiVar13,0x2c);
            if (puVar11 != NULL) {
                *puVar11 = 0;
                *puVar10 = 0;
                iVar2 = kstrtoull(&uStack_410,0,&uStack_428);
                if ((((iVar2 == 0) && (iVar2 = kstrtoull(puVar10 + 1,0,&uStack_418), iVar2 == 0)) &&
                    (iVar2 = kstrtouint(puVar11 + 1,0,&uStack_41c), iVar2 == 0)) &&
                   (iVar9 = uStack_41c, uStack_41c < 4)) {
                    mutex_lock(iVar21 + 0x38);
                    if (*(iVar21 + 0x28) == 0) {
                        iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar2 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar21 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar16,uStack_428,uStack_418,1,*(iVar9 * 8 + 0x8002a30));
                    iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar2 != 0) {
                        _printk(0x8001489,&uStack_428,uStack_418);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar2 != 0) {
            uVar16 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar2 != 0) {
            uVar16 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar16);
        }
    }
code_r0x08004cc8:
    pppppiVar13 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_3a8) {
        return pppppiVar13;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_04 = sym.iommu_debug_functional_arm_dma_api_open;
    pppppiVar14 = single_open(auVar22._8_8_,
                              sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                              *(auVar22._0_8_ + 0x2d8));
    return pppppiVar14;
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x08003368 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.iommu_debug_check_mapping_flags @ 0x08003370 (size 360) =====

void sym.iommu_debug_check_mapping_flags(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    int64_t *piVar5;
    uint64_t *puVar6;
    uint64_t *in_x4;
    uint64_t *puVar7;
    uint64_t *in_x5;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar9;
    int64_t unaff_x22;
    uint32_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    char *pcStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    int64_t iStack_130;
    uint64_t uStack_128;
    ulong uStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    uint64_t uStack_108;
    int64_t iStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    uint64_t *puStack_e0;
    uint64_t uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint uStack_60;
    uint32_t uStack_5c;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    uVar11 = in_x4 & 0xffffffff;
    iStack_48 = *(iVar2 + 0x5e0);
    piVar5 = arg3;
    puVar6 = arg4;
    puVar7 = in_x4;
    uStack_58 = arg4;
    iStack_50 = arg2;
    iVar2 = iommu_get_domain_for_dev();
    if (iVar2 == 0) {
        pcVar4 = "iommu_get_domain_for_dev() failed\n";
code_r0x08003494:
        _dev_err(arg1,pcVar4);
code_r0x0800349c:
        uVar3 = 0xffffffea;
    }
    else {
        if ((*(arg1 + 0x340) == 0) || (iVar8 = *(*(arg1 + 0x340) + 0x40), iVar8 == 0)) {
            pcVar4 = "dev_iommu_fwspec_get() failed\n";
            goto code_r0x08003494;
        }
        uStack_60 = SUB84(in_x4,0);
        uStack_5c = *(iVar8 + 0x18);
        iStack_68 = arg2;
        if ((arg3 + 0xfffU & 0xfffffffffffff000) != 0) {
            arg3 = -(arg3 + 0xfffU & 0xfffffffffffff000);
            do {
                uVar11 = qcom_iommu_iova_to_phys_hard(iVar2,&iStack_68);
                uStack_78 = uVar11;
                uStack_70 = iommu_iova_to_phys(iVar2,arg2);
                unaff_x22 = iVar2;
                if ((arg4 != uVar11) || (arg4 != uStack_70)) {
                    iVar1 = ___ratelimit(obj.iommu_debug_check_mapping_flags._rs,"iommu_debug_check_mapping_flags");
                    if (iVar1 != 0) {
                        piVar5 = &iStack_50;
                        puVar6 = &uStack_58;
                        puVar7 = &uStack_78;
                        in_x5 = &uStack_70;
                        _dev_err(arg1,
                                 "Bad translation for %pad! Expected: %pa Got: %pa (ATOS) %pa (Table Walk) sid=%08x\n",
                                 piVar5,puVar6,puVar7,in_x5,uStack_5c);
                    }
                    goto code_r0x0800349c;
                }
                arg2 = arg2 + 0x1000;
                arg4 = arg4 + 0x1000;
                arg3 = arg3 + 0x1000;
                uStack_58 = arg4;
                iStack_50 = arg2;
            } while (arg3 != 0);
        }
        uVar3 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar3);
    iVar8 = auVar14._0_8_;
    *extraout_x18 = sym.iommu_debug_check_mapping_sg_flags;
    pcStack_b8 = sym.iommu_debug_check_mapping_sg_flags;
    iVar2 = sp_el0;
    uVar12 = piVar5 & 0xffffffff;
    iStack_c8 = *(iVar2 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    puStack_e0 = NULL;
    iStack_f8 = 0;
    uStack_f0 = 0;
    puStack_c0 = &stack0xffffffffffffffc0;
    uStack_b0 = uVar11;
    iStack_a0 = unaff_x22;
    iStack_98 = arg2;
    uStack_90 = arg4;
    iStack_88 = arg1;
    __sg_page_iter_start(&puStack_e0,auVar14._8_8_,puVar7 & 0xffffffff,uVar12);
    __sg_page_iter_start(&iStack_f8,auVar14._8_8_,puVar6 & 0xffffffff,uVar12);
    do {
        uVar11 = __sg_page_iter_next(&puStack_e0);
        if (((uVar11 & 1) == 0) || (uVar11 = __sg_page_iter_dma_next(&iStack_f8), (uVar11 & 1) == 0)) {
            uVar3 = 0;
            break;
        }
        uVar3 = sym.iommu_debug_check_mapping_flags
                          (iVar8,*(iStack_f8 + 0x10) + (uStack_f0 << 0xc),0x1000,
                           ((*puStack_e0 & 0x3fffffffffffffc) + (uStack_d8 & 0xffffffff) * 0x40 +
                           (_single_release >> 0xc) * 0x40) * 0x40 + 0x8000000000);
    } while (uVar3 == 0);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar3);
    piVar5 = auVar14._0_8_;
    *extraout_x18_00 = sym.iommu_debug_switch_usecase;
    pcStack_138 = sym.iommu_debug_switch_usecase;
    uStack_120 = 0x8000000000;
    pcStack_118 = single_release;
    iVar2 = sp_el0;
    iStack_148 = *(iVar2 + 0x5e0);
    piVar13 = piVar5 + 4;
    pcStack_150 = NULL;
    ppuStack_140 = &puStack_c0;
    iStack_130 = arg3;
    uStack_128 = uVar12;
    iStack_110 = iVar8;
    uStack_108 = in_x5 & 0xffffffff;
    if (*piVar13 != 0) {
        of_platform_device_destroy(*piVar13,0);
        *piVar13 = 0;
        piVar5[5] = 0;
    }
    uVar3 = *(*piVar5 + 0x2f0);
    iVar2 = of_get_next_child(uVar3,0);
    uVar9 = auVar14._8_4_;
    if (iVar2 != 0) {
        uVar10 = 0;
        do {
            uVar10 = uVar10 + 1;
            iVar2 = of_get_next_child(uVar3,iVar2);
        } while (iVar2 != 0);
        if (uVar9 < uVar10) {
            *(piVar5 + 0xd) = 0;
            iVar2 = of_get_next_child(*(*piVar5 + 0x2f0),0);
            if ((uVar9 != 0) && (uVar10 = uVar9, iVar2 != 0)) {
                do {
                    uVar10 = uVar10 - 1;
                    iVar2 = of_get_next_child(*(*piVar5 + 0x2f0),iVar2);
                } while (iVar2 != 0 && uVar10 != 0);
            }
            iVar8 = of_platform_device_create(iVar2,0,*piVar5);
            if (iVar8 == 0) {
                _dev_err(*piVar5,"Creating platform device failed\n");
                iVar2 = 0;
            }
            else {
                iVar1 = wait_for_completion_interruptible_timeout(piVar5 + 0xd,0x7d);
                if (iVar1 < 1) {
                    pcVar4 = "Timed out waiting for usecase to register\n";
                }
                else {
                    iVar1 = of_property_read_string(iVar2,"qcom,iommu-dma",&pcStack_150);
                    if (iVar1 != 0) {
                        pcStack_150 = "default";
                    }
                    iVar1 = strcmp(pcStack_150,"fastmap");
                    *(piVar5 + 6) = uVar9;
                    piVar5[4] = iVar8 + 0x10;
                    *(piVar5 + 0x34) = iVar1 == 0;
                    iVar2 = iommu_get_domain_for_dev();
                    piVar5[5] = iVar2;
                    if (iVar2 != 0) {
                        iVar2 = *piVar13;
                        goto code_r0x0800375c;
                    }
                    pcVar4 = "Oops, usecase not associated with iommu\n";
                }
                _dev_err(*piVar5,pcVar4);
                iVar2 = 0;
                if (piVar5[4] != 0) {
                    of_platform_device_destroy(piVar5[4],0);
                    iVar2 = 0;
                    *piVar13 = 0;
                    piVar5[5] = 0;
                }
            }
            goto code_r0x0800375c;
        }
    }
    _dev_err(*piVar5,"Invalid usecase nr requested: %u\n",auVar14._8_8_ & 0xffffffff);
    iVar2 = 0;
code_r0x0800375c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_148) {
        return;
    }
    iVar2 = __stack_chk_fail(iVar2);
    *extraout_x18_01 = sym.iommu_debug_usecase_reset;
    sym.iommu_debug_switch_usecase(iVar2,*(iVar2 + 0x30));
    return;
}


// ===== sym.iommu_debug_check_mapping_sg_flags @ 0x080034d8 (size 284) =====

void sym.iommu_debug_check_mapping_sg_flags(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    uint in_w4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar8;
    uint32_t uVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    char *pcStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t *puStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    puStack_60 = NULL;
    iStack_78 = 0;
    uStack_70 = 0;
    __sg_page_iter_start(&puStack_60,arg2,in_w4,arg3 & 0xffffffffU);
    __sg_page_iter_start(&iStack_78,arg2,arg4 & 0xffffffff,arg3 & 0xffffffffU);
    do {
        uVar2 = __sg_page_iter_next(&puStack_60);
        if (((uVar2 & 1) == 0) || (uVar2 = __sg_page_iter_dma_next(&iStack_78), (uVar2 & 1) == 0)) {
            uVar3 = 0;
            break;
        }
        uVar3 = sym.iommu_debug_check_mapping_flags
                          (arg1,*(iStack_78 + 0x10) + (uStack_70 << 0xc),0x1000,
                           ((*puStack_60 & 0x3fffffffffffffc) + (uStack_58 & 0xffffffff) * 0x40 +
                           (_single_release >> 0xc) * 0x40) * 0x40 + 0x8000000000);
    } while (uVar3 == 0);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar11 = __stack_chk_fail(uVar3);
    piVar4 = auVar11._0_8_;
    *extraout_x18 = sym.iommu_debug_switch_usecase;
    pcStack_b8 = sym.iommu_debug_switch_usecase;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    piVar10 = piVar4 + 4;
    pcStack_d0 = NULL;
    puStack_c0 = &stack0xffffffffffffffc0;
    if (*piVar10 != 0) {
        of_platform_device_destroy(*piVar10,0);
        *piVar10 = 0;
        piVar4[5] = 0;
    }
    uVar3 = *(*piVar4 + 0x2f0);
    iVar5 = of_get_next_child(uVar3,0);
    uVar8 = auVar11._8_4_;
    if (iVar5 != 0) {
        uVar9 = 0;
        do {
            uVar9 = uVar9 + 1;
            iVar5 = of_get_next_child(uVar3,iVar5);
        } while (iVar5 != 0);
        if (uVar8 < uVar9) {
            *(piVar4 + 0xd) = 0;
            iVar5 = of_get_next_child(*(*piVar4 + 0x2f0),0);
            if ((uVar8 != 0) && (uVar9 = uVar8, iVar5 != 0)) {
                do {
                    uVar9 = uVar9 - 1;
                    iVar5 = of_get_next_child(*(*piVar4 + 0x2f0),iVar5);
                } while (iVar5 != 0 && uVar9 != 0);
            }
            iVar6 = of_platform_device_create(iVar5,0,*piVar4);
            if (iVar6 == 0) {
                _dev_err(*piVar4,"Creating platform device failed\n");
                iVar5 = 0;
            }
            else {
                iVar1 = wait_for_completion_interruptible_timeout(piVar4 + 0xd,0x7d);
                if (iVar1 < 1) {
                    pcVar7 = "Timed out waiting for usecase to register\n";
                }
                else {
                    iVar1 = of_property_read_string(iVar5,"qcom,iommu-dma",&pcStack_d0);
                    if (iVar1 != 0) {
                        pcStack_d0 = "default";
                    }
                    iVar1 = strcmp(pcStack_d0,"fastmap");
                    *(piVar4 + 6) = uVar8;
                    piVar4[4] = iVar6 + 0x10;
                    *(piVar4 + 0x34) = iVar1 == 0;
                    iVar5 = iommu_get_domain_for_dev();
                    piVar4[5] = iVar5;
                    if (iVar5 != 0) {
                        iVar5 = *piVar10;
                        goto code_r0x0800375c;
                    }
                    pcVar7 = "Oops, usecase not associated with iommu\n";
                }
                _dev_err(*piVar4,pcVar7);
                iVar5 = 0;
                if (piVar4[4] != 0) {
                    of_platform_device_destroy(piVar4[4],0);
                    iVar5 = 0;
                    *piVar10 = 0;
                    piVar4[5] = 0;
                }
            }
            goto code_r0x0800375c;
        }
    }
    _dev_err(*piVar4,"Invalid usecase nr requested: %u\n",auVar11._8_8_ & 0xffffffff);
    iVar5 = 0;
code_r0x0800375c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_c8) {
        return;
    }
    iVar5 = __stack_chk_fail(iVar5);
    *extraout_x18_00 = sym.iommu_debug_usecase_reset;
    sym.iommu_debug_switch_usecase(iVar5,*(iVar5 + 0x30));
    return;
}


// ===== sym.iommu_debug_switch_usecase @ 0x080035f4 (size 524) =====

void sym.iommu_debug_switch_usecase(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar5;
    ulong uVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    char *pcStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    piVar8 = arg1 + 0x20;
    pcStack_50 = NULL;
    if (*piVar8 != 0) {
        of_platform_device_destroy(*piVar8,0);
        *piVar8 = 0;
        *(arg1 + 0x28) = 0;
    }
    uVar6 = *(*arg1 + 0x2f0);
    iVar2 = of_get_next_child(uVar6,0);
    uVar5 = arg2;
    if (iVar2 != 0) {
        uVar7 = 0;
        do {
            uVar7 = uVar7 + 1;
            iVar2 = of_get_next_child(uVar6,iVar2);
        } while (iVar2 != 0);
        if (uVar5 < uVar7) {
            *(arg1 + 0x68) = 0;
            iVar2 = of_get_next_child(*(*arg1 + 0x2f0),0);
            if ((uVar5 != 0) && (uVar7 = uVar5, iVar2 != 0)) {
                do {
                    uVar7 = uVar7 - 1;
                    iVar2 = of_get_next_child(*(*arg1 + 0x2f0),iVar2);
                } while (iVar2 != 0 && uVar7 != 0);
            }
            iVar3 = of_platform_device_create(iVar2,0,*arg1);
            if (iVar3 == 0) {
                _dev_err(*arg1,"Creating platform device failed\n");
                iVar2 = 0;
            }
            else {
                iVar1 = wait_for_completion_interruptible_timeout(arg1 + 0x68,0x7d);
                if (iVar1 < 1) {
                    pcVar4 = "Timed out waiting for usecase to register\n";
                }
                else {
                    iVar1 = of_property_read_string(iVar2,"qcom,iommu-dma",&pcStack_50);
                    if (iVar1 != 0) {
                        pcStack_50 = "default";
                    }
                    iVar1 = strcmp(pcStack_50,"fastmap");
                    *(arg1 + 0x30) = uVar5;
                    *(arg1 + 0x20) = iVar3 + 0x10;
                    *(arg1 + 0x34) = iVar1 == 0;
                    iVar2 = iommu_get_domain_for_dev();
                    *(arg1 + 0x28) = iVar2;
                    if (iVar2 != 0) {
                        iVar2 = *piVar8;
                        goto code_r0x0800375c;
                    }
                    pcVar4 = "Oops, usecase not associated with iommu\n";
                }
                _dev_err(*arg1,pcVar4);
                iVar2 = 0;
                if (*(arg1 + 0x20) != 0) {
                    of_platform_device_destroy(*(arg1 + 0x20),0);
                    iVar2 = 0;
                    *piVar8 = 0;
                    *(arg1 + 0x28) = 0;
                }
            }
            goto code_r0x0800375c;
        }
    }
    _dev_err(*arg1,"Invalid usecase nr requested: %u\n",arg2 & 0xffffffff);
    iVar2 = 0;
code_r0x0800375c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    iVar2 = __stack_chk_fail(iVar2);
    *extraout_x18 = sym.iommu_debug_usecase_reset;
    sym.iommu_debug_switch_usecase(iVar2,*(iVar2 + 0x30));
    return;
}


// ===== sym.iommu_debug_usecase_reset @ 0x08003800 (size 40) =====

void sym.iommu_debug_usecase_reset(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.iommu_debug_switch_usecase(arg1,*(arg1 + 0x30));
    return;
}


// ===== sym.init_module @ 0x08003828 (size 112) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.iommu_debug_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register
                          (reloc.iommu_debug_usecase_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt,obj.__this_module);
        if (iVar1 != 0) {
            platform_driver_unregister(reloc.iommu_debug_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt);
        }
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08003898 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.iommu_debug_usecase_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt);
    platform_driver_unregister(reloc.iommu_debug_probe.aabe0ea5067ace97199e12937638aa45.cfi_jt);
    return;
}


// ===== sym.iommu_debug_probe @ 0x080038d0 (size 732) =====

ulong sym.iommu_debug_probe(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    piVar3 = devm_kmalloc(iVar1,0x98,0xdc0);
    if (piVar3 != NULL) {
        *piVar3 = iVar1;
        *(piVar3 + 6) = 0xffffffff;
        *(piVar3 + 0x12) = 1;
        __mutex_init(piVar3 + 7,"&ddev->state_lock",obj.iommu_debug_check_mapping_flags._rs);
        *(piVar3 + 0xd) = 0;
        __init_swait_queue_head(piVar3 + 0xe,"&x->wait",obj.iommu_debug_check_mapping_flags._rs);
        iVar4 = devm_kmalloc(iVar1,0x1000,0xdc0);
        piVar3[2] = iVar4;
        if (iVar4 != 0) {
            uVar5 = *(arg1 + 0x300);
            *(piVar3 + 1) = 0;
            puVar6 = of_get_next_child(uVar5,0);
            if (puVar6 != NULL) {
                iVar8 = 0;
                do {
                    iVar2 = scnprintf(piVar3[2] + iVar8,0x1000 - iVar8,"%d: %s\n",piVar3[1],*puVar6);
                    iVar8 = iVar2 + iVar8;
                    if (iVar8 == 0xfff) {
                        _dev_err(iVar1,"Too many testcases?\n");
                        break;
                    }
                    uVar5 = *(arg1 + 0x300);
                    *(piVar3 + 1) = piVar3[1] + 1;
                    puVar6 = of_get_next_child(uVar5,puVar6);
                } while (puVar6 != NULL);
            }
            *(arg1 + 0xa8) = piVar3;
            uVar7 = debugfs_create_dir("iommu-test",0);
            if (0xfffffffffffff000 < uVar7) {
                return 0xffffffea;
            }
            piVar3[3] = uVar7;
            debugfs_create_file("usecase",0x180,uVar7,piVar3,obj.iommu_debug_usecase_fops);
            debugfs_create_file("functional_arm_dma_api",0x100,uVar7,piVar3,
                                obj.iommu_debug_functional_arm_dma_api_fops);
            debugfs_create_file("functional_fast_dma_api",0x100,uVar7,piVar3,
                                obj.iommu_debug_functional_fast_dma_api_fops);
            debugfs_create_file("atos",0x180,uVar7,piVar3,obj.iommu_debug_atos_fops);
            debugfs_create_file(0x80013a2,0x80,uVar7,piVar3,obj.iommu_debug_map_fops);
            debugfs_create_file("unmap",0x80,uVar7,piVar3,obj.iommu_debug_unmap_fops);
            debugfs_create_file("dma_map",0x80,uVar7,piVar3,obj.iommu_debug_dma_map_fops);
            debugfs_create_file("dma_unmap",0x80,uVar7,piVar3,obj.iommu_debug_dma_unmap_fops);
            debugfs_create_file("nr_iters",0x180,uVar7,piVar3,obj.iommu_debug_nr_iters_fops);
            debugfs_create_file("test_virt_addr",0x100,uVar7,piVar3,obj.iommu_debug_test_virt_addr_fops);
            debugfs_create_file("profiling",0x100,uVar7,piVar3,obj.iommu_debug_profiling_fops);
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.iommu_debug_remove @ 0x08003bac (size 72) =====

ulong sym.iommu_debug_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    debugfs_remove(*(iVar1 + 0x18));
    iVar1 = *(iVar1 + 0x20);
    if (iVar1 != 0) {
        of_platform_device_destroy(iVar1,0);
    }
    return 0;
}


// ===== sym.iommu_debug_usecase_read @ 0x08003bf4 (size 104) =====

void sym.iommu_debug_usecase_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(*(arg1 + 0xd8) + 0x10);
    uVar1 = strnlen(uVar2,0x1000);
    simple_read_from_buffer(arg2,arg3,arg4,uVar2,uVar1);
    return;
}


// ===== sym.iommu_debug_usecase_write @ 0x08003c5c (size 204) =====

int64_t sym.iommu_debug_usecase_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0xd8);
    uStack_3c = 0;
    iVar1 = kstrtouint_from_user(arg2,arg3,0,&uStack_3c);
    if (iVar1 == 0) {
        iVar3 = -0x16;
        if (uStack_3c < *(iVar4 + 8)) {
            mutex_lock(iVar4 + 0x38);
            iVar2 = sym.iommu_debug_switch_usecase(iVar4,uStack_3c);
            mutex_unlock(iVar4 + 0x38);
            iVar3 = -0x16;
            if (iVar2 != 0) {
                iVar3 = arg3;
            }
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        auVar5 = __stack_chk_fail();
        *extraout_x18 = sym.iommu_debug_nr_iters_fops_open;
        iVar4 = simple_attr_open(auVar5._0_8_,auVar5._8_8_,
                                 sym.iommu_debug_nr_iters_get.aabe0ea5067ace97199e12937638aa45.cfi_jt,
                                 sym.iommu_debug_nr_iters_set.aabe0ea5067ace97199e12937638aa45.cfi_jt,"%llu\n");
        return iVar4;
    }
    return iVar3;
}


// ===== sym.iommu_debug_nr_iters_fops_open @ 0x08003d28 (size 60) =====

void sym.iommu_debug_nr_iters_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.iommu_debug_nr_iters_get.aabe0ea5067ace97199e12937638aa45.cfi_jt,
                     sym.iommu_debug_nr_iters_set.aabe0ea5067ace97199e12937638aa45.cfi_jt,"%llu\n");
    return;
}


// ===== sym.iommu_debug_nr_iters_get @ 0x08003d64 (size 24) =====

ulong sym.iommu_debug_nr_iters_get(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x90);
    return 0;
}


// ===== sym.iommu_debug_nr_iters_set @ 0x08003d7c (size 48) =====

ulong sym.iommu_debug_nr_iters_set(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    uint64_t uVar2;
    
    uVar2 = arg2;
    if (uVar2 == 0) {
        uVar2 = 1;
    }
    uVar1 = uVar2;
    if (0x270 < uVar2 >> 4) {
        uVar1 = 10000;
    }
    *(arg1 + 0x90) = uVar1;
    return 0;
}


// ===== sym.iommu_debug_usecase_probe @ 0x08003dac (size 52) =====

ulong sym.iommu_debug_usecase_probe(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(*(*(arg1 + 0x70) + 0x98) + 0x68);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08003de0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003e24

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
    //switch table (4 cases) at 0x8000b00
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003e38);
    (*pcVar1)();
}


// ===== sym.iommu_debug_dma_atos_read @ 0x08003e38 (size 392) =====

//WARNING: Type propagation algorithm not settling

int64_t ******* sym.iommu_debug_dma_atos_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t *******pppppppiVar4;
    int64_t *******pppppppiVar5;
    int64_t *******pppppppiVar6;
    int64_t ******ppppppiVar7;
    int64_t ******ppppppiVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    int64_t ***pppiVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    int64_t unaff_x19;
    int64_t *******pppppppiVar14;
    int64_t *******pppppppiVar15;
    int64_t *******arg3_00;
    int64_t *******pppppppiVar16;
    int64_t unaff_x20;
    ulong uVar17;
    int64_t unaff_x21;
    int64_t ******ppppppiVar18;
    int64_t ******unaff_x22;
    code *pcVar19;
    code *pcVar20;
    int64_t ******ppppppiVar21;
    int64_t ******ppppppiVar22;
    uchar *unaff_x24;
    int64_t iVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    ulong uStack_4f8;
    uint32_t uStack_4ec;
    ulong uStack_4e8;
    ulong uStack_4e0;
    ulong uStack_4d8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    ulong uStack_4c0;
    ulong uStack_4b8;
    ulong uStack_4b0;
    ulong uStack_4a8;
    ulong uStack_4a0;
    ulong uStack_498;
    ulong uStack_490;
    ulong uStack_488;
    uint uStack_480;
    int64_t iStack_478;
    uchar ******ppppppuStack_470;
    code *pcStack_468;
    uchar *puStack_460;
    int64_t ******ppppppiStack_458;
    code *pcStack_450;
    int64_t ******ppppppiStack_448;
    int64_t *******pppppppiStack_440;
    int64_t *******pppppppiStack_438;
    uint32_t uStack_42c;
    int64_t *******pppppppiStack_428;
    int64_t *******pppppppiStack_420;
    int64_t ******ppppppiStack_418;
    ulong uStack_410;
    ulong uStack_408;
    ulong uStack_400;
    ulong uStack_3f8;
    ulong uStack_3f0;
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    uint uStack_3b0;
    int64_t iStack_3a8;
    uchar *****pppppuStack_3a0;
    code *pcStack_398;
    uchar *puStack_390;
    int64_t ******ppppppiStack_388;
    code *pcStack_380;
    int64_t ******ppppppiStack_378;
    int64_t *******pppppppiStack_370;
    int64_t *******pppppppiStack_368;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    uint uStack_2f0;
    int64_t iStack_2e8;
    uchar ****ppppuStack_2e0;
    code *pcStack_2d8;
    int64_t ******ppppppiStack_2d0;
    int64_t *******pppppppiStack_2c0;
    int64_t *******pppppppiStack_2b8;
    int64_t *******pppppppiStack_2b0;
    int64_t ******ppppppiStack_2a8;
    int64_t *piStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    uint uStack_240;
    int64_t iStack_238;
    uchar ***pppuStack_230;
    code *pcStack_228;
    int64_t ******ppppppiStack_220;
    int64_t *******pppppppiStack_210;
    int64_t *******pppppppiStack_208;
    uint uStack_1fc;
    int64_t *******pppppppiStack_1f8;
    int64_t *******pppppppiStack_1f0;
    int64_t ******ppppppiStack_1e8;
    int64_t *piStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    uint uStack_180;
    int64_t iStack_178;
    uchar **ppuStack_170;
    code *pcStack_168;
    int64_t ******ppppppiStack_118;
    int64_t ******ppppppiStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    int64_t ******ppppppiStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    int64_t *****pppppiStack_c8;
    uint uStack_c0;
    uint32_t uStack_bc;
    int64_t aiStack_b8 [13];
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    pppppppiVar4 = NULL;
    uStack_50 = 0;
    ppppppiVar21 = *(arg1 + 0xd8);
    aiStack_b8[0xb] = 0;
    aiStack_b8[0xc] = 0;
    aiStack_b8[9] = 0;
    aiStack_b8[10] = 0;
    aiStack_b8[7] = 0;
    aiStack_b8[8] = 0;
    aiStack_b8[5] = 0;
    aiStack_b8[6] = 0;
    aiStack_b8[3] = 0;
    aiStack_b8[4] = 0;
    aiStack_b8[1] = 0;
    aiStack_b8[2] = 0;
    pppppppiVar14 = arg3;
    pppppppiVar16 = arg4;
    iStack_d8 = unaff_x19;
    iStack_e0 = unaff_x20;
    iStack_e8 = unaff_x21;
    if (*arg4 == 0) {
        unaff_x22 = ppppppiVar21 + 7;
        mutex_lock(unaff_x22);
        iStack_d8 = arg4;
        iStack_e0 = arg3;
        iStack_e8 = arg2;
        if (ppppppiVar21[5] == NULL) {
            _printk(0x8001129,"iommu_debug_dma_atos_read");
            mutex_unlock(unaff_x22);
            pppppppiVar4 = 0xffffffffffffffea;
        }
        else if ((ppppppiVar21[4][0x68] == NULL) || (pppiVar12 = ppppppiVar21[4][0x68][8], pppiVar12 == NULL)) {
            _printk(0x8001967,"iommu_debug_dma_atos_read");
            mutex_unlock(unaff_x22);
            pppppppiVar4 = NULL;
        }
        else {
            pppppiStack_c8 = ppppppiVar21[0x11];
            uStack_bc = *(pppiVar12 + 3);
            uStack_c0 = 0;
            aiStack_b8[0] = qcom_iommu_iova_to_phys_hard(ppppppiVar21[5],&pppppiStack_c8);
            if (aiStack_b8[0] == 0) {
                uVar2 = strscpy(aiStack_b8 + 1,"FAIL\n",100);
            }
            else {
                uVar2 = scnprintf(aiStack_b8 + 1,100,"%pa\n",aiStack_b8);
            }
            ppppppiVar21 = uVar2;
            mutex_unlock(unaff_x22);
            pppppppiVar16 = aiStack_b8 + 1;
            pppppppiVar14 = arg4;
            pppppppiVar4 = simple_read_from_buffer(arg2,arg3,arg4,pppppppiVar16,uVar2);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return pppppppiVar4;
    }
    auVar24 = __stack_chk_fail(pppppppiVar4);
    ppppppiVar18 = auVar24._8_8_;
    *extraout_x18 = sym.iommu_debug_atos_write;
    pcStack_f8 = sym.iommu_debug_atos_write;
    iVar9 = sp_el0;
    iStack_108 = *(iVar9 + 0x5e0);
    pcVar19 = *(auVar24._0_8_ + 0xd8);
    ppppppiStack_110 = NULL;
    pppppppiVar4 = pcVar19 + 0x38;
    pppppppiVar15 = pppppppiVar14;
    puStack_100 = &stack0xffffffffffffffc0;
    ppppppiStack_f0 = unaff_x22;
    mutex_lock(pppppppiVar4);
    if (*(pcVar19 + 0x28) == 0) {
        _printk(0x8001129,"iommu_debug_atos_write");
code_r0x080040cc:
        mutex_unlock(pppppppiVar4);
        pppppppiVar14 = 0xffffffffffffffea;
    }
    else {
        pppppppiVar16 = &ppppppiStack_110;
        pppppppiVar15 = NULL;
        iVar3 = kstrtoull_from_user(ppppppiVar18,pppppppiVar14);
        if (iVar3 != 0) {
            _dev_err(*(pcVar19 + 0x20),"Invalid format for iova\n");
            *(pcVar19 + 0x88) = 0;
            goto code_r0x080040cc;
        }
        ppppppiStack_118 = iommu_iova_to_phys(*(pcVar19 + 0x28),ppppppiStack_110);
        if (((ppppppiStack_118 >> 0x30 != 0) || (_simple_open == 0)) ||
           (iVar9 = *(_simple_open + (ppppppiStack_118 >> 0x1f & 0x1fffffff8)), iVar9 == 0)) {
code_r0x080040a0:
            pppppppiVar15 = &ppppppiStack_118;
            _dev_err(*(pcVar19 + 0x20),"Invalid ATOS operation page %pa\n");
            goto code_r0x080040cc;
        }
        uVar13 = ppppppiStack_118 >> 0x1b & 0x7f;
        puVar1 = iVar9 + uVar13 * 0x20;
        if (((puVar1 == NULL) || (uVar2 = *puVar1, (uVar2 >> 1 & 1) == 0)) ||
           (((uVar2 >> 3 & 1) == 0 && ((**(iVar9 + uVar13 * 0x20 + 8) >> (ppppppiStack_118 >> 0x15 & 0x3f) & 1) == 0))))
        goto code_r0x080040a0;
        *(pcVar19 + 0x88) = ppppppiStack_110;
        mutex_unlock(pppppppiVar4);
        _printk(0x80015da,&ppppppiStack_110);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_108) {
        return pppppppiVar14;
    }
    auVar24 = __stack_chk_fail();
    pppppppiVar14 = auVar24._8_8_;
    *extraout_x18_00 = sym.iommu_debug_map_write;
    pcStack_168 = sym.iommu_debug_map_write;
    iVar9 = sp_el0;
    iStack_178 = *(iVar9 + 0x5e0);
    uStack_180 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    piStack_1e0 = NULL;
    uStack_1d8 = 0;
    pppppppiStack_1f0 = NULL;
    ppppppiStack_1e8 = NULL;
    pppppppiStack_1f8 = NULL;
    uStack_1fc = 0;
    ppuStack_170 = &puStack_100;
    if (pppppppiVar15 < 0x64) {
        iVar23 = *(auVar24._0_8_ + 0xd8);
        __check_object_size(&piStack_1e0,pppppppiVar15,0);
        iVar9 = sym._copy_from_user(&piStack_1e0,pppppppiVar14,pppppppiVar15);
        if ((iVar9 != 0) &&
           (iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs.8,"iommu_debug_map_write"), iVar3 != 0)) {
            _printk(0x80011fa);
        }
        arg3_00 = 0x2c;
        ppppppiVar22 = strnchr(&piStack_1e0,pppppppiVar15);
        pppppppiVar4 = pppppppiVar14;
        if (ppppppiVar22 == NULL) {
code_r0x080042ac:
            iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs.14,"iommu_debug_map_write");
            pcVar20 = pcVar19;
            ppppppiVar22 = ppppppiVar21;
            puVar10 = unaff_x24;
            if (iVar3 != 0) {
                uVar17 = 0x8000b1c;
                goto code_r0x0800430c;
            }
            goto code_r0x080042c4;
        }
        ppppppiVar18 = ppppppiVar22 + 1;
        arg3_00 = 0x2c;
        puVar10 = strnchr(ppppppiVar18,pppppppiVar15);
        ppppppiVar21 = ppppppiVar22;
        if (puVar10 == NULL) goto code_r0x080042ac;
        pppppppiVar4 = puVar10 + 1;
        arg3_00 = 0x2c;
        pcVar20 = strnchr(pppppppiVar4,pppppppiVar15);
        unaff_x24 = puVar10;
        if (pcVar20 == NULL) goto code_r0x080042ac;
        *pcVar20 = 0x0;
        arg3_00 = &ppppppiStack_1e8;
        *puVar10 = 0;
        *ppppppiVar22 = 0;
        iVar3 = kstrtoull(&piStack_1e0,0);
        pcVar19 = pcVar20;
        if (iVar3 != 0) goto code_r0x080042ac;
        arg3_00 = &pppppppiStack_1f0;
        iVar3 = kstrtoull(ppppppiVar18,0);
        if (iVar3 != 0) goto code_r0x080042ac;
        arg3_00 = &pppppppiStack_1f8;
        iVar3 = kstrtoull(pppppppiVar4,0);
        if (iVar3 != 0) goto code_r0x080042ac;
        arg3_00 = &uStack_1fc;
        iVar3 = kstrtoint(pcVar20 + 1,0);
        if (iVar3 != 0) goto code_r0x080042ac;
        pppppppiVar4 = iVar23 + 0x38;
        mutex_lock(pppppppiVar4);
        iVar9 = *(iVar23 + 0x28);
        if (iVar9 == 0) {
            iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs.10,"iommu_debug_map_write");
            if (iVar3 != 0) {
                _printk(0x8001129,"iommu_debug_map_write");
            }
            mutex_unlock(pppppppiVar4);
            goto code_r0x080042c4;
        }
        arg3_00 = pppppppiStack_1f0;
        pppppppiVar16 = pppppppiStack_1f8;
        uVar2 = iommu_map(iVar9,ppppppiStack_1e8,pppppppiStack_1f0,pppppppiStack_1f8,uStack_1fc);
        if (uVar2 == 0) {
            arg3_00 = &pppppppiStack_1f0;
            pppppppiVar16 = pppppppiStack_1f8;
            _printk(0x80016da,&ppppppiStack_1e8,arg3_00,pppppppiStack_1f8,uStack_1fc);
        }
        else {
            ppppppiVar18 = uVar2;
            iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs.11,"iommu_debug_map_write");
            if (iVar3 != 0) {
                _printk(0x8001089,ppppppiVar18);
            }
            pppppppiVar15 = 0xfffffffffffffffb;
        }
        mutex_unlock(pppppppiVar4);
    }
    else {
        iVar3 = ___ratelimit(obj.iommu_debug_map_write._rs,"iommu_debug_map_write");
        arg3_00 = pppppppiVar15;
        pcVar20 = pcVar19;
        ppppppiVar22 = ppppppiVar21;
        puVar10 = unaff_x24;
        if (iVar3 != 0) {
            uVar17 = 0x80016c7;
code_r0x0800430c:
            _printk(uVar17);
            pcVar20 = pcVar19;
            ppppppiVar22 = ppppppiVar21;
            puVar10 = unaff_x24;
        }
code_r0x080042c4:
        pppppppiVar15 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_178) {
        return pppppppiVar15;
    }
    auVar24 = __stack_chk_fail();
    pppppppiVar14 = auVar24._8_8_;
    pppppppiVar6 = &pppppppiStack_2b0;
    *extraout_x18_01 = sym.iommu_debug_unmap_write;
    pcStack_228 = sym.iommu_debug_unmap_write;
    iVar9 = sp_el0;
    iStack_238 = *(iVar9 + 0x5e0);
    uStack_240 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    piStack_2a0 = NULL;
    uStack_298 = 0;
    pppppppiStack_2b0 = NULL;
    ppppppiStack_2a8 = NULL;
    pppuStack_230 = &ppuStack_170;
    ppppppiStack_220 = ppppppiVar18;
    pppppppiStack_210 = pppppppiVar4;
    pppppppiStack_208 = pppppppiVar15;
    if (arg3_00 < 0x64) {
        ppppppiVar18 = *(auVar24._0_8_ + 0xd8);
        if (ppppppiVar18[5] == NULL) {
            iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.17,"iommu_debug_unmap_write");
            if (iVar3 != 0) {
                _printk(0x8001129,"iommu_debug_unmap_write");
            }
            goto code_r0x08004550;
        }
        __check_object_size(&piStack_2a0,arg3_00,0);
        pppppppiVar15 = arg3_00;
        iVar9 = sym._copy_from_user(&piStack_2a0,pppppppiVar14,arg3_00);
        if (iVar9 == 0) {
            pppppppiVar15 = 0x2c;
            pppppppiVar5 = strnchr(&piStack_2a0,arg3_00);
            pppppppiVar4 = pppppppiVar14;
            if (pppppppiVar5 != NULL) {
                *pppppppiVar5 = 0;
                pppppppiVar15 = &ppppppiStack_2a8;
                iVar3 = kstrtoull(&piStack_2a0,0);
                pppppppiVar4 = pppppppiVar5;
                if ((iVar3 == 0) && (iVar3 = kstrtoull(pppppppiVar5 + 1,0), pppppppiVar15 = pppppppiVar6, iVar3 == 0)
                   ) {
                    pppppppiVar4 = ppppppiVar18 + 7;
                    mutex_lock(pppppppiVar4);
                    if (ppppppiVar18[5] == NULL) {
                        iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.19,"iommu_debug_unmap_write");
                        arg3_00 = pppppppiVar6;
                        if (iVar3 != 0) {
                            _printk(0x800161d);
                            arg3_00 = pppppppiVar6;
                        }
                        mutex_unlock(pppppppiVar4);
                        goto code_r0x08004550;
                    }
                    pppppppiVar15 = pppppppiStack_2b0;
                    pppppppiVar14 = iommu_unmap(ppppppiVar18[5],ppppppiStack_2a8);
                    if (pppppppiVar14 == pppppppiStack_2b0) {
                        pppppppiVar15 = pppppppiVar14;
                        _printk(0x800183c,&ppppppiStack_2a8);
                    }
                    else {
                        iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.21,"iommu_debug_unmap_write");
                        if (iVar3 == 0) {
                            arg3_00 = 0xfffffffffffffffb;
                        }
                        else {
                            pppppppiVar15 = pppppppiVar14;
                            _printk(0x8000f9c,pppppppiStack_2b0);
                            arg3_00 = 0xfffffffffffffffb;
                        }
                    }
                    goto code_r0x080044b8;
                }
            }
            arg3_00 = pppppppiVar15;
            iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.24,"iommu_debug_unmap_write");
            if (iVar3 != 0) {
                uVar17 = 0x8001317;
                goto code_r0x0800445c;
            }
            goto code_r0x08004550;
        }
        iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs.18,"iommu_debug_unmap_write");
        if (iVar3 != 0) {
            _printk(0x80011fa);
        }
        arg3_00 = 0xfffffffffffffff2;
code_r0x080044b8:
        mutex_unlock(ppppppiVar18 + 7);
    }
    else {
        iVar3 = ___ratelimit(obj.iommu_debug_unmap_write._rs,"iommu_debug_unmap_write");
        if (iVar3 != 0) {
            uVar17 = 0x80016c7;
code_r0x0800445c:
            _printk(uVar17);
        }
code_r0x08004550:
        pppppppiVar15 = arg3_00;
        arg3_00 = 0xffffffffffffffea;
        pppppppiVar14 = pppppppiVar4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_238) {
        return arg3_00;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_02 = sym.iommu_debug_dma_map_read;
    pcStack_2d8 = sym.iommu_debug_dma_map_read;
    iVar9 = sp_el0;
    iStack_2e8 = *(iVar9 + 0x5e0);
    pppppppiVar6 = NULL;
    uStack_2f0 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    pppppppiVar4 = pppppppiVar15;
    ppppuStack_2e0 = &pppuStack_230;
    ppppppiStack_2d0 = ppppppiVar18;
    pppppppiStack_2c0 = pppppppiVar14;
    pppppppiStack_2b8 = arg3_00;
    if (*pppppppiVar16 == NULL) {
        uStack_358 = *(*(auVar24._0_8_ + 0xd8) + 0x88);
        iVar3 = scnprintf(&uStack_350,100,"%pa\n",&uStack_358);
        pppppppiVar4 = pppppppiVar16;
        pppppppiVar6 = simple_read_from_buffer(auVar24._8_8_,pppppppiVar15,pppppppiVar16,&uStack_350,iVar3);
        arg3_00 = pppppppiVar16;
        pppppppiVar14 = pppppppiVar15;
        ppppppiVar18 = auVar24._8_8_;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_2e8) {
        return pppppppiVar6;
    }
    auVar24 = __stack_chk_fail(pppppppiVar6);
    ppppppiVar21 = auVar24._8_8_;
    *extraout_x18_03 = sym.iommu_debug_dma_map_write;
    pcStack_398 = sym.iommu_debug_dma_map_write;
    iVar9 = sp_el0;
    iStack_3a8 = *(iVar9 + 0x5e0);
    uStack_3b0 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    ppppppiStack_418 = NULL;
    pppppppiStack_428 = NULL;
    uStack_42c = 0;
    pppppuStack_3a0 = &ppppuStack_2e0;
    puStack_390 = puVar10;
    ppppppiStack_388 = ppppppiVar22;
    pcStack_380 = pcVar20;
    ppppppiStack_378 = ppppppiVar18;
    pppppppiStack_370 = pppppppiVar14;
    pppppppiStack_368 = arg3_00;
    if (pppppppiVar4 < 0x64) {
        puVar10 = *(auVar24._0_8_ + 0xd8);
        pppppppiVar14 = *(puVar10 + 0x20);
        __check_object_size(&uStack_410,pppppppiVar4,0);
        pppppppiVar16 = pppppppiVar4;
        iVar9 = sym._copy_from_user(&uStack_410,ppppppiVar21,pppppppiVar4);
        if (iVar9 != 0) {
            iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar3 != 0) {
                _printk(0x80011fa);
            }
            pppppppiVar4 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        pppppppiVar16 = 0x2c;
        ppppppiVar7 = strnchr(&uStack_410,pppppppiVar4);
        ppppppiVar18 = ppppppiVar21;
        if (ppppppiVar7 == NULL) {
code_r0x0800487c:
            iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            ppppppiVar21 = ppppppiVar18;
            if (iVar3 != 0) {
                uVar17 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        pcVar20 = ppppppiVar7 + 1;
        pppppppiVar16 = 0x2c;
        ppppppiVar8 = strnchr(pcVar20,pppppppiVar4);
        ppppppiVar18 = ppppppiVar7;
        if (ppppppiVar8 == NULL) goto code_r0x0800487c;
        *ppppppiVar8 = 0;
        pppppppiVar16 = &ppppppiStack_418;
        *ppppppiVar7 = 0;
        iVar3 = kstrtoull(&uStack_410,0);
        ppppppiVar21 = ppppppiStack_418;
        ppppppiVar22 = ppppppiVar8;
        if (iVar3 != 0) goto code_r0x0800487c;
        pppppppiVar16 = &pppppppiStack_428;
        iVar3 = kstrtoull(pcVar20,0);
        ppppppiVar18 = ppppppiVar21;
        if (iVar3 != 0) goto code_r0x0800487c;
        pppppppiVar16 = &uStack_42c;
        iVar3 = kstrtouint(ppppppiVar8 + 1,0);
        if (iVar3 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        ppppppiVar22 = _segment.ehdr;
        pcVar20 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (ppppppiVar22 == NULL) {
                iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar3 != 0) {
                    uVar17 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((ppppppiVar21 < _segment.ehdr) || (_segment.ehdr + 0x20000 < ppppppiVar21 + pppppppiStack_428)) {
                iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar3 != 0) {
                    _printk(0x8000d77,ppppppiVar21);
                }
            }
            else {
                ppppppiVar22 = uStack_42c;
                if (3 < uStack_42c) goto code_r0x0800487c;
                pcVar20 = puVar10 + 0x38;
                mutex_lock(pcVar20);
                if (*(puVar10 + 0x28) != 0) {
                    pppppppiVar16 = pppppppiStack_428;
                    pppppppiVar15 =
                         sym.dma_map_single_attrs
                                   (pppppppiVar14,ppppppiVar21,pppppppiStack_428,*(ppppppiVar22 * 8 + 0x8002a30));
                    pppppppiStack_420 = pppppppiVar15;
                    if (pppppppiVar15 == 0xffffffffffffffff) {
                        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar3 != 0) {
                            _printk(0x8001465);
                        }
                        pppppppiVar4 = 0xffffffffffffffea;
                    }
                    else {
                        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        pppppppiVar14 = pppppppiVar15;
                        if (iVar3 != 0) {
                            pppppppiVar16 = &pppppppiStack_420;
                            _printk(0x8001878,ppppppiVar21,pppppppiVar16,pppppppiStack_428);
                            pppppppiVar14 = pppppppiStack_420;
                        }
                        *(puVar10 + 0x88) = pppppppiVar14;
                        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar3 != 0) {
                            _printk(0x8000ee6,&pppppppiStack_420);
                        }
                    }
                    mutex_unlock(pcVar20);
                    goto code_r0x08004898;
                }
                iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar3 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(pcVar20);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar3 != 0) {
            _printk(0x8000b8c);
        }
        pppppppiVar4 = 0xfffffffffffffff4;
    }
    else {
        iVar3 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        pppppppiVar16 = pppppppiVar4;
        ppppppiVar21 = ppppppiVar18;
        if (iVar3 == 0) goto code_r0x08004894;
        uVar17 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar17);
code_r0x08004894:
        pppppppiVar4 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_3a8) {
        return pppppppiVar4;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_04 = sym.iommu_debug_dma_unmap_write;
    pcStack_468 = sym.iommu_debug_dma_unmap_write;
    iVar9 = sp_el0;
    iStack_478 = *(iVar9 + 0x5e0);
    uStack_480 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4e8 = 0;
    uStack_4ec = 0;
    uStack_4f8 = 0;
    ppppppuStack_470 = &pppppuStack_3a0;
    puStack_460 = puVar10;
    ppppppiStack_458 = ppppppiVar22;
    pcStack_450 = pcVar20;
    ppppppiStack_448 = ppppppiVar21;
    pppppppiStack_440 = pppppppiVar14;
    pppppppiStack_438 = pppppppiVar4;
    if (pppppppiVar16 < 0x64) {
        iVar23 = *(auVar24._0_8_ + 0xd8);
        uVar17 = *(iVar23 + 0x20);
        __check_object_size(&uStack_4e0,pppppppiVar16,0);
        iVar9 = sym._copy_from_user(&uStack_4e0,auVar24._8_8_,pppppppiVar16);
        if (iVar9 != 0) {
            iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar3 != 0) {
                _printk(0x80011fa);
            }
            pppppppiVar16 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar23 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar10 = strnchr(&uStack_4e0,pppppppiVar16,0x2c);
        if (puVar10 != NULL) {
            puVar11 = strnchr(puVar10 + 1,pppppppiVar16,0x2c);
            if (puVar11 != NULL) {
                *puVar11 = 0;
                *puVar10 = 0;
                iVar3 = kstrtoull(&uStack_4e0,0,&uStack_4f8);
                if ((((iVar3 == 0) && (iVar3 = kstrtoull(puVar10 + 1,0,&uStack_4e8), iVar3 == 0)) &&
                    (iVar3 = kstrtouint(puVar11 + 1,0,&uStack_4ec), iVar3 == 0)) &&
                   (iVar9 = uStack_4ec, uStack_4ec < 4)) {
                    mutex_lock(iVar23 + 0x38);
                    if (*(iVar23 + 0x28) == 0) {
                        iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar3 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar23 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar17,uStack_4f8,uStack_4e8,1,*(iVar9 * 8 + 0x8002a30));
                    iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar3 != 0) {
                        _printk(0x8001489,&uStack_4f8,uStack_4e8);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar3 != 0) {
            uVar17 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar3 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar3 != 0) {
            uVar17 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar17);
        }
    }
code_r0x08004cc8:
    pppppppiVar16 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_478) {
        return pppppppiVar16;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_05 = sym.iommu_debug_functional_arm_dma_api_open;
    pppppppiVar16 =
         single_open(auVar24._8_8_,sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
                     ,*(auVar24._0_8_ + 0x2d8));
    return pppppppiVar16;
}


// ===== sym.iommu_debug_atos_write @ 0x08003fc0 (size 372) =====

int64_t ***** sym.iommu_debug_atos_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t *****pppppiVar4;
    int64_t *****pppppiVar5;
    int64_t ****ppppiVar6;
    int64_t ****ppppiVar7;
    int64_t *****pppppiVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    int64_t *****in_x3;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int64_t *****pppppiVar13;
    int64_t *****pppppiVar14;
    int64_t *****pppppiVar15;
    ulong uVar16;
    int64_t ****ppppiVar17;
    int64_t ****arg2_00;
    code *pcVar18;
    code *pcVar19;
    int64_t ****unaff_x23;
    int64_t ****ppppiVar20;
    uchar *unaff_x24;
    int64_t iVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_428;
    uint32_t uStack_41c;
    ulong uStack_418;
    ulong uStack_410;
    ulong uStack_408;
    ulong uStack_400;
    ulong uStack_3f8;
    ulong uStack_3f0;
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    uint uStack_3b0;
    int64_t iStack_3a8;
    ulong ****ppppuStack_3a0;
    code *pcStack_398;
    uchar *puStack_390;
    int64_t ***pppiStack_388;
    code *pcStack_380;
    int64_t ***pppiStack_378;
    int64_t ****ppppiStack_370;
    int64_t ****ppppiStack_368;
    uint32_t uStack_35c;
    int64_t ****ppppiStack_358;
    int64_t ****ppppiStack_350;
    int64_t ***pppiStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    uint uStack_2e0;
    int64_t iStack_2d8;
    uchar ****ppppuStack_2d0;
    code *pcStack_2c8;
    uchar *puStack_2c0;
    int64_t ***pppiStack_2b8;
    code *pcStack_2b0;
    int64_t ***pppiStack_2a8;
    int64_t ****ppppiStack_2a0;
    int64_t ****ppppiStack_298;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    uint uStack_220;
    int64_t iStack_218;
    uchar ***pppuStack_210;
    code *pcStack_208;
    int64_t ***pppiStack_200;
    int64_t ****ppppiStack_1f0;
    int64_t ****ppppiStack_1e8;
    int64_t ****ppppiStack_1e0;
    int64_t ***pppiStack_1d8;
    int64_t *piStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    uint uStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    int64_t ***pppiStack_150;
    int64_t ****ppppiStack_140;
    int64_t ****ppppiStack_138;
    uint uStack_12c;
    int64_t ****ppppiStack_128;
    int64_t ****ppppiStack_120;
    int64_t ***pppiStack_118;
    int64_t *piStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    uint uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t ***pppiStack_48;
    int64_t ***pppiStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    pcVar18 = *(arg1 + 0xd8);
    pppiStack_40 = NULL;
    pppppiVar14 = pcVar18 + 0x38;
    pppppiVar13 = arg3;
    mutex_lock(pppppiVar14);
    if (*(pcVar18 + 0x28) == 0) {
        _printk(0x8001129,"iommu_debug_atos_write");
code_r0x080040cc:
        mutex_unlock(pppppiVar14);
        arg3 = -0x16;
    }
    else {
        in_x3 = &pppiStack_40;
        pppppiVar13 = NULL;
        iVar2 = kstrtoull_from_user(arg2,arg3);
        if (iVar2 != 0) {
            _dev_err(*(pcVar18 + 0x20),"Invalid format for iova\n");
            *(pcVar18 + 0x88) = 0;
            goto code_r0x080040cc;
        }
        pppiStack_48 = iommu_iova_to_phys(*(pcVar18 + 0x28),pppiStack_40);
        if (((pppiStack_48 >> 0x30 != 0) || (_simple_open == 0)) ||
           (iVar9 = *(_simple_open + (pppiStack_48 >> 0x1f & 0x1fffffff8)), iVar9 == 0)) {
code_r0x080040a0:
            pppppiVar13 = &pppiStack_48;
            _dev_err(*(pcVar18 + 0x20),"Invalid ATOS operation page %pa\n");
            goto code_r0x080040cc;
        }
        uVar12 = pppiStack_48 >> 0x1b & 0x7f;
        puVar1 = iVar9 + uVar12 * 0x20;
        if (((puVar1 == NULL) || (uVar3 = *puVar1, (uVar3 >> 1 & 1) == 0)) ||
           (((uVar3 >> 3 & 1) == 0 && ((**(iVar9 + uVar12 * 0x20 + 8) >> (pppiStack_48 >> 0x15 & 0x3f) & 1) == 0))))
        goto code_r0x080040a0;
        *(pcVar18 + 0x88) = pppiStack_40;
        mutex_unlock(pppppiVar14);
        _printk(0x80015da,&pppiStack_40);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar22 = __stack_chk_fail();
    pppppiVar15 = auVar22._8_8_;
    *extraout_x18 = sym.iommu_debug_map_write;
    pcStack_98 = sym.iommu_debug_map_write;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    piStack_110 = NULL;
    uStack_108 = 0;
    ppppiStack_120 = NULL;
    pppiStack_118 = NULL;
    ppppiStack_128 = NULL;
    uStack_12c = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    if (pppppiVar13 < 0x64) {
        iVar21 = *(auVar22._0_8_ + 0xd8);
        __check_object_size(&piStack_110,pppppiVar13,0);
        iVar9 = sym._copy_from_user(&piStack_110,pppppiVar15,pppppiVar13);
        if ((iVar9 != 0) &&
           (iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs.8,"iommu_debug_map_write"), iVar2 != 0)) {
            _printk(0x80011fa);
        }
        pppppiVar8 = 0x2c;
        ppppiVar20 = strnchr(&piStack_110,pppppiVar13);
        pppppiVar14 = pppppiVar15;
        if (ppppiVar20 == NULL) {
code_r0x080042ac:
            iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs.14,"iommu_debug_map_write");
            pcVar19 = pcVar18;
            ppppiVar20 = unaff_x23;
            puVar10 = unaff_x24;
            if (iVar2 != 0) {
                uVar16 = 0x8000b1c;
                goto code_r0x0800430c;
            }
            goto code_r0x080042c4;
        }
        arg2 = ppppiVar20 + 1;
        pppppiVar8 = 0x2c;
        puVar10 = strnchr(arg2,pppppiVar13);
        unaff_x23 = ppppiVar20;
        if (puVar10 == NULL) goto code_r0x080042ac;
        pppppiVar14 = puVar10 + 1;
        pppppiVar8 = 0x2c;
        pcVar19 = strnchr(pppppiVar14,pppppiVar13);
        unaff_x24 = puVar10;
        if (pcVar19 == NULL) goto code_r0x080042ac;
        *pcVar19 = 0x0;
        pppppiVar8 = &pppiStack_118;
        *puVar10 = 0;
        *ppppiVar20 = 0;
        iVar2 = kstrtoull(&piStack_110,0);
        pcVar18 = pcVar19;
        if (iVar2 != 0) goto code_r0x080042ac;
        pppppiVar8 = &ppppiStack_120;
        iVar2 = kstrtoull(arg2,0);
        if (iVar2 != 0) goto code_r0x080042ac;
        pppppiVar8 = &ppppiStack_128;
        iVar2 = kstrtoull(pppppiVar14,0);
        if (iVar2 != 0) goto code_r0x080042ac;
        pppppiVar8 = &uStack_12c;
        iVar2 = kstrtoint(pcVar19 + 1,0);
        if (iVar2 != 0) goto code_r0x080042ac;
        pppppiVar14 = iVar21 + 0x38;
        mutex_lock(pppppiVar14);
        iVar9 = *(iVar21 + 0x28);
        if (iVar9 == 0) {
            iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs.10,"iommu_debug_map_write");
            if (iVar2 != 0) {
                _printk(0x8001129,"iommu_debug_map_write");
            }
            mutex_unlock(pppppiVar14);
            goto code_r0x080042c4;
        }
        pppppiVar8 = ppppiStack_120;
        in_x3 = ppppiStack_128;
        uVar3 = iommu_map(iVar9,pppiStack_118,ppppiStack_120,ppppiStack_128,uStack_12c);
        if (uVar3 == 0) {
            pppppiVar8 = &ppppiStack_120;
            in_x3 = ppppiStack_128;
            _printk(0x80016da,&pppiStack_118,pppppiVar8,ppppiStack_128,uStack_12c);
        }
        else {
            arg2 = uVar3;
            iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs.11,"iommu_debug_map_write");
            if (iVar2 != 0) {
                _printk(0x8001089,arg2);
            }
            pppppiVar13 = 0xfffffffffffffffb;
        }
        mutex_unlock(pppppiVar14);
    }
    else {
        iVar2 = ___ratelimit(obj.iommu_debug_map_write._rs,"iommu_debug_map_write");
        pppppiVar8 = pppppiVar13;
        pcVar19 = pcVar18;
        ppppiVar20 = unaff_x23;
        puVar10 = unaff_x24;
        if (iVar2 != 0) {
            uVar16 = 0x80016c7;
code_r0x0800430c:
            _printk(uVar16);
            pcVar19 = pcVar18;
            ppppiVar20 = unaff_x23;
            puVar10 = unaff_x24;
        }
code_r0x080042c4:
        pppppiVar13 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return pppppiVar13;
    }
    auVar22 = __stack_chk_fail();
    pppppiVar15 = auVar22._8_8_;
    pppppiVar5 = &ppppiStack_1e0;
    *extraout_x18_00 = sym.iommu_debug_unmap_write;
    pcStack_158 = sym.iommu_debug_unmap_write;
    iVar9 = sp_el0;
    iStack_168 = *(iVar9 + 0x5e0);
    uStack_170 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    piStack_1d0 = NULL;
    uStack_1c8 = 0;
    ppppiStack_1e0 = NULL;
    pppiStack_1d8 = NULL;
    ppuStack_160 = &puStack_a0;
    pppiStack_150 = arg2;
    ppppiStack_140 = pppppiVar14;
    ppppiStack_138 = pppppiVar13;
    if (pppppiVar8 < 0x64) {
        ppppiVar17 = *(auVar22._0_8_ + 0xd8);
        if (ppppiVar17[5] == NULL) {
            iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.17,"iommu_debug_unmap_write");
            if (iVar2 != 0) {
                _printk(0x8001129,"iommu_debug_unmap_write");
            }
            goto code_r0x08004550;
        }
        __check_object_size(&piStack_1d0,pppppiVar8,0);
        pppppiVar13 = pppppiVar8;
        iVar9 = sym._copy_from_user(&piStack_1d0,pppppiVar15,pppppiVar8);
        if (iVar9 == 0) {
            pppppiVar13 = 0x2c;
            pppppiVar4 = strnchr(&piStack_1d0,pppppiVar8);
            pppppiVar14 = pppppiVar15;
            if (pppppiVar4 != NULL) {
                *pppppiVar4 = 0;
                pppppiVar13 = &pppiStack_1d8;
                iVar2 = kstrtoull(&piStack_1d0,0);
                pppppiVar14 = pppppiVar4;
                if ((iVar2 == 0) && (iVar2 = kstrtoull(pppppiVar4 + 1,0), pppppiVar13 = pppppiVar5, iVar2 == 0)) {
                    pppppiVar14 = ppppiVar17 + 7;
                    mutex_lock(pppppiVar14);
                    if (ppppiVar17[5] == NULL) {
                        iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.19,"iommu_debug_unmap_write");
                        pppppiVar8 = pppppiVar5;
                        if (iVar2 != 0) {
                            _printk(0x800161d);
                            pppppiVar8 = pppppiVar5;
                        }
                        mutex_unlock(pppppiVar14);
                        goto code_r0x08004550;
                    }
                    pppppiVar13 = ppppiStack_1e0;
                    pppppiVar15 = iommu_unmap(ppppiVar17[5],pppiStack_1d8);
                    if (pppppiVar15 == ppppiStack_1e0) {
                        pppppiVar13 = pppppiVar15;
                        _printk(0x800183c,&pppiStack_1d8);
                    }
                    else {
                        iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.21,"iommu_debug_unmap_write");
                        if (iVar2 == 0) {
                            pppppiVar8 = 0xfffffffffffffffb;
                        }
                        else {
                            pppppiVar13 = pppppiVar15;
                            _printk(0x8000f9c,ppppiStack_1e0);
                            pppppiVar8 = 0xfffffffffffffffb;
                        }
                    }
                    goto code_r0x080044b8;
                }
            }
            pppppiVar8 = pppppiVar13;
            iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.24,"iommu_debug_unmap_write");
            if (iVar2 != 0) {
                uVar16 = 0x8001317;
                goto code_r0x0800445c;
            }
            goto code_r0x08004550;
        }
        iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs.18,"iommu_debug_unmap_write");
        if (iVar2 != 0) {
            _printk(0x80011fa);
        }
        pppppiVar8 = 0xfffffffffffffff2;
code_r0x080044b8:
        mutex_unlock(ppppiVar17 + 7);
    }
    else {
        iVar2 = ___ratelimit(obj.iommu_debug_unmap_write._rs,"iommu_debug_unmap_write");
        ppppiVar17 = arg2;
        if (iVar2 != 0) {
            uVar16 = 0x80016c7;
code_r0x0800445c:
            _printk(uVar16);
        }
code_r0x08004550:
        pppppiVar13 = pppppiVar8;
        pppppiVar8 = 0xffffffffffffffea;
        pppppiVar15 = pppppiVar14;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_168) {
        return pppppiVar8;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_01 = sym.iommu_debug_dma_map_read;
    pcStack_208 = sym.iommu_debug_dma_map_read;
    iVar9 = sp_el0;
    iStack_218 = *(iVar9 + 0x5e0);
    pppppiVar5 = NULL;
    uStack_220 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    pppppiVar14 = pppppiVar13;
    pppuStack_210 = &ppuStack_160;
    pppiStack_200 = ppppiVar17;
    ppppiStack_1f0 = pppppiVar15;
    ppppiStack_1e8 = pppppiVar8;
    if (*in_x3 == NULL) {
        uStack_288 = *(*(auVar22._0_8_ + 0xd8) + 0x88);
        iVar2 = scnprintf(&uStack_280,100,"%pa\n",&uStack_288);
        pppppiVar14 = in_x3;
        pppppiVar5 = simple_read_from_buffer(auVar22._8_8_,pppppiVar13,in_x3,&uStack_280,iVar2);
        pppppiVar8 = in_x3;
        pppppiVar15 = pppppiVar13;
        ppppiVar17 = auVar22._8_8_;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_218) {
        return pppppiVar5;
    }
    auVar22 = __stack_chk_fail(pppppiVar5);
    arg2_00 = auVar22._8_8_;
    *extraout_x18_02 = sym.iommu_debug_dma_map_write;
    pcStack_2c8 = sym.iommu_debug_dma_map_write;
    iVar9 = sp_el0;
    iStack_2d8 = *(iVar9 + 0x5e0);
    uStack_2e0 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    pppiStack_348 = NULL;
    ppppiStack_358 = NULL;
    uStack_35c = 0;
    ppppuStack_2d0 = &pppuStack_210;
    puStack_2c0 = puVar10;
    pppiStack_2b8 = ppppiVar20;
    pcStack_2b0 = pcVar19;
    pppiStack_2a8 = ppppiVar17;
    ppppiStack_2a0 = pppppiVar15;
    ppppiStack_298 = pppppiVar8;
    if (pppppiVar14 < 0x64) {
        puVar10 = *(auVar22._0_8_ + 0xd8);
        pppppiVar15 = *(puVar10 + 0x20);
        __check_object_size(&uStack_340,pppppiVar14,0);
        pppppiVar13 = pppppiVar14;
        iVar9 = sym._copy_from_user(&uStack_340,arg2_00,pppppiVar14);
        if (iVar9 != 0) {
            iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar2 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar14 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        pppppiVar13 = 0x2c;
        ppppiVar6 = strnchr(&uStack_340,pppppiVar14);
        ppppiVar17 = arg2_00;
        if (ppppiVar6 == NULL) {
code_r0x0800487c:
            iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            arg2_00 = ppppiVar17;
            if (iVar2 != 0) {
                uVar16 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        pcVar19 = ppppiVar6 + 1;
        pppppiVar13 = 0x2c;
        ppppiVar7 = strnchr(pcVar19,pppppiVar14);
        ppppiVar17 = ppppiVar6;
        if (ppppiVar7 == NULL) goto code_r0x0800487c;
        *ppppiVar7 = 0;
        pppppiVar13 = &pppiStack_348;
        *ppppiVar6 = 0;
        iVar2 = kstrtoull(&uStack_340,0);
        arg2_00 = pppiStack_348;
        ppppiVar20 = ppppiVar7;
        if (iVar2 != 0) goto code_r0x0800487c;
        pppppiVar13 = &ppppiStack_358;
        iVar2 = kstrtoull(pcVar19,0);
        ppppiVar17 = arg2_00;
        if (iVar2 != 0) goto code_r0x0800487c;
        pppppiVar13 = &uStack_35c;
        iVar2 = kstrtouint(ppppiVar7 + 1,0);
        if (iVar2 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        ppppiVar20 = _segment.ehdr;
        pcVar19 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (ppppiVar20 == NULL) {
                iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar2 != 0) {
                    uVar16 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((arg2_00 < _segment.ehdr) || (_segment.ehdr + 0x20000 < arg2_00 + ppppiStack_358)) {
                iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar2 != 0) {
                    _printk(0x8000d77,arg2_00);
                }
            }
            else {
                ppppiVar20 = uStack_35c;
                if (3 < uStack_35c) goto code_r0x0800487c;
                pcVar19 = puVar10 + 0x38;
                mutex_lock(pcVar19);
                if (*(puVar10 + 0x28) != 0) {
                    pppppiVar13 = ppppiStack_358;
                    pppppiVar8 = sym.dma_map_single_attrs
                                           (pppppiVar15,arg2_00,ppppiStack_358,*(ppppiVar20 * 8 + 0x8002a30));
                    ppppiStack_350 = pppppiVar8;
                    if (pppppiVar8 == 0xffffffffffffffff) {
                        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar2 != 0) {
                            _printk(0x8001465);
                        }
                        pppppiVar14 = 0xffffffffffffffea;
                    }
                    else {
                        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        pppppiVar15 = pppppiVar8;
                        if (iVar2 != 0) {
                            pppppiVar13 = &ppppiStack_350;
                            _printk(0x8001878,arg2_00,pppppiVar13,ppppiStack_358);
                            pppppiVar15 = ppppiStack_350;
                        }
                        *(puVar10 + 0x88) = pppppiVar15;
                        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar2 != 0) {
                            _printk(0x8000ee6,&ppppiStack_350);
                        }
                    }
                    mutex_unlock(pcVar19);
                    goto code_r0x08004898;
                }
                iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar2 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(pcVar19);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar2 != 0) {
            _printk(0x8000b8c);
        }
        pppppiVar14 = 0xfffffffffffffff4;
    }
    else {
        iVar2 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        pppppiVar13 = pppppiVar14;
        arg2_00 = ppppiVar17;
        if (iVar2 == 0) goto code_r0x08004894;
        uVar16 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar16);
code_r0x08004894:
        pppppiVar14 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_2d8) {
        return pppppiVar14;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_03 = sym.iommu_debug_dma_unmap_write;
    pcStack_398 = sym.iommu_debug_dma_unmap_write;
    iVar9 = sp_el0;
    iStack_3a8 = *(iVar9 + 0x5e0);
    uStack_3b0 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_418 = 0;
    uStack_41c = 0;
    uStack_428 = 0;
    ppppuStack_3a0 = &ppppuStack_2d0;
    puStack_390 = puVar10;
    pppiStack_388 = ppppiVar20;
    pcStack_380 = pcVar19;
    pppiStack_378 = arg2_00;
    ppppiStack_370 = pppppiVar15;
    ppppiStack_368 = pppppiVar14;
    if (pppppiVar13 < 0x64) {
        iVar21 = *(auVar22._0_8_ + 0xd8);
        uVar16 = *(iVar21 + 0x20);
        __check_object_size(&uStack_410,pppppiVar13,0);
        iVar9 = sym._copy_from_user(&uStack_410,auVar22._8_8_,pppppiVar13);
        if (iVar9 != 0) {
            iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar2 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar13 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar21 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar10 = strnchr(&uStack_410,pppppiVar13,0x2c);
        if (puVar10 != NULL) {
            puVar11 = strnchr(puVar10 + 1,pppppiVar13,0x2c);
            if (puVar11 != NULL) {
                *puVar11 = 0;
                *puVar10 = 0;
                iVar2 = kstrtoull(&uStack_410,0,&uStack_428);
                if ((((iVar2 == 0) && (iVar2 = kstrtoull(puVar10 + 1,0,&uStack_418), iVar2 == 0)) &&
                    (iVar2 = kstrtouint(puVar11 + 1,0,&uStack_41c), iVar2 == 0)) &&
                   (iVar9 = uStack_41c, uStack_41c < 4)) {
                    mutex_lock(iVar21 + 0x38);
                    if (*(iVar21 + 0x28) == 0) {
                        iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar2 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar21 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar16,uStack_428,uStack_418,1,*(iVar9 * 8 + 0x8002a30));
                    iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar2 != 0) {
                        _printk(0x8001489,&uStack_428,uStack_418);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar2 != 0) {
            uVar16 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar2 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar2 != 0) {
            uVar16 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar16);
        }
    }
code_r0x08004cc8:
    pppppiVar13 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_3a8) {
        return pppppiVar13;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_04 = sym.iommu_debug_functional_arm_dma_api_open;
    pppppiVar14 = single_open(auVar22._8_8_,
                              sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                              *(auVar22._0_8_ + 0x2d8));
    return pppppiVar14;
}


// ===== sym.iommu_debug_map_write @ 0x08004134 (size 696) =====

int64_t ***** sym.iommu_debug_map_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t *****pppppiVar3;
    int64_t ****ppppiVar4;
    int64_t ****ppppiVar5;
    int64_t *****pppppiVar6;
    int64_t iVar7;
    uchar *puVar8;
    uchar *puVar9;
    int64_t *****in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t *****pppppiVar10;
    int64_t *****pppppiVar11;
    int64_t *****unaff_x20;
    int64_t *****pppppiVar12;
    ulong uVar13;
    int64_t ****unaff_x21;
    int64_t ****ppppiVar14;
    int64_t ****arg2_00;
    code *unaff_x22;
    code *pcVar15;
    int64_t ****unaff_x23;
    int64_t ****ppppiVar16;
    uchar *unaff_x24;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_3d8;
    uint32_t uStack_3cc;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    ulong uStack_378;
    ulong uStack_370;
    ulong uStack_368;
    uint uStack_360;
    int64_t iStack_358;
    uchar ****ppppuStack_350;
    code *pcStack_348;
    uchar *puStack_340;
    int64_t ***pppiStack_338;
    code *pcStack_330;
    int64_t ***pppiStack_328;
    int64_t ****ppppiStack_320;
    int64_t ****ppppiStack_318;
    uint32_t uStack_30c;
    int64_t ****ppppiStack_308;
    int64_t ****ppppiStack_300;
    int64_t ***pppiStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    uint uStack_290;
    int64_t iStack_288;
    uchar ***pppuStack_280;
    code *pcStack_278;
    uchar *puStack_270;
    int64_t ***pppiStack_268;
    code *pcStack_260;
    int64_t ***pppiStack_258;
    int64_t ****ppppiStack_250;
    int64_t ****ppppiStack_248;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    uint uStack_1d0;
    int64_t iStack_1c8;
    uchar **ppuStack_1c0;
    code *pcStack_1b8;
    int64_t ***pppiStack_1b0;
    int64_t ****ppppiStack_1a0;
    int64_t ****ppppiStack_198;
    int64_t ****ppppiStack_190;
    int64_t ***pppiStack_188;
    int64_t *piStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    int64_t ***pppiStack_100;
    int64_t ****ppppiStack_f0;
    int64_t ****ppppiStack_e8;
    uint uStack_dc;
    int64_t ****ppppiStack_d8;
    int64_t ****ppppiStack_d0;
    int64_t ***pppiStack_c8;
    int64_t *piStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    pppppiVar10 = arg3;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    piStack_c0 = NULL;
    uStack_b8 = 0;
    ppppiStack_d0 = NULL;
    pppiStack_c8 = NULL;
    ppppiStack_d8 = NULL;
    uStack_dc = 0;
    if (pppppiVar10 < 0x64) {
        iVar17 = *(arg1 + 0xd8);
        __check_object_size(&piStack_c0,pppppiVar10,0);
        iVar7 = sym._copy_from_user(&piStack_c0,arg2,pppppiVar10);
        if ((iVar7 != 0) &&
           (iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs.8,"iommu_debug_map_write"), iVar1 != 0)) {
            _printk(0x80011fa);
        }
        pppppiVar6 = 0x2c;
        ppppiVar16 = strnchr(&piStack_c0,pppppiVar10);
        unaff_x20 = arg2;
        if (ppppiVar16 == NULL) {
code_r0x080042ac:
            iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs.14,"iommu_debug_map_write");
            pcVar15 = unaff_x22;
            ppppiVar16 = unaff_x23;
            puVar8 = unaff_x24;
            if (iVar1 != 0) {
                uVar13 = 0x8000b1c;
                goto code_r0x0800430c;
            }
            goto code_r0x080042c4;
        }
        unaff_x21 = ppppiVar16 + 1;
        pppppiVar6 = 0x2c;
        puVar8 = strnchr(unaff_x21,pppppiVar10);
        unaff_x23 = ppppiVar16;
        if (puVar8 == NULL) goto code_r0x080042ac;
        unaff_x20 = puVar8 + 1;
        pppppiVar6 = 0x2c;
        pcVar15 = strnchr(unaff_x20,pppppiVar10);
        unaff_x24 = puVar8;
        if (pcVar15 == NULL) goto code_r0x080042ac;
        *pcVar15 = 0x0;
        pppppiVar6 = &pppiStack_c8;
        *puVar8 = 0;
        *ppppiVar16 = 0;
        iVar1 = kstrtoull(&piStack_c0,0);
        unaff_x22 = pcVar15;
        if (iVar1 != 0) goto code_r0x080042ac;
        pppppiVar6 = &ppppiStack_d0;
        iVar1 = kstrtoull(unaff_x21,0);
        if (iVar1 != 0) goto code_r0x080042ac;
        pppppiVar6 = &ppppiStack_d8;
        iVar1 = kstrtoull(unaff_x20,0);
        if (iVar1 != 0) goto code_r0x080042ac;
        pppppiVar6 = &uStack_dc;
        iVar1 = kstrtoint(pcVar15 + 1,0);
        if (iVar1 != 0) goto code_r0x080042ac;
        unaff_x20 = iVar17 + 0x38;
        mutex_lock(unaff_x20);
        iVar7 = *(iVar17 + 0x28);
        if (iVar7 == 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs.10,"iommu_debug_map_write");
            if (iVar1 != 0) {
                _printk(0x8001129,"iommu_debug_map_write");
            }
            mutex_unlock(unaff_x20);
            goto code_r0x080042c4;
        }
        pppppiVar6 = ppppiStack_d0;
        in_x3 = ppppiStack_d8;
        uVar2 = iommu_map(iVar7,pppiStack_c8,ppppiStack_d0,ppppiStack_d8,uStack_dc);
        if (uVar2 == 0) {
            pppppiVar6 = &ppppiStack_d0;
            in_x3 = ppppiStack_d8;
            _printk(0x80016da,&pppiStack_c8,pppppiVar6,ppppiStack_d8,uStack_dc);
        }
        else {
            unaff_x21 = uVar2;
            iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs.11,"iommu_debug_map_write");
            if (iVar1 != 0) {
                _printk(0x8001089,unaff_x21);
            }
            pppppiVar10 = 0xfffffffffffffffb;
        }
        mutex_unlock(unaff_x20);
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_map_write._rs,"iommu_debug_map_write");
        pppppiVar6 = pppppiVar10;
        pcVar15 = unaff_x22;
        ppppiVar16 = unaff_x23;
        puVar8 = unaff_x24;
        if (iVar1 != 0) {
            uVar13 = 0x80016c7;
code_r0x0800430c:
            _printk(uVar13);
            pcVar15 = unaff_x22;
            ppppiVar16 = unaff_x23;
            puVar8 = unaff_x24;
        }
code_r0x080042c4:
        pppppiVar10 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return pppppiVar10;
    }
    auVar18 = __stack_chk_fail();
    pppppiVar12 = auVar18._8_8_;
    pppppiVar11 = &ppppiStack_190;
    *extraout_x18 = sym.iommu_debug_unmap_write;
    pcStack_108 = sym.iommu_debug_unmap_write;
    iVar7 = sp_el0;
    iStack_118 = *(iVar7 + 0x5e0);
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    piStack_180 = NULL;
    uStack_178 = 0;
    ppppiStack_190 = NULL;
    pppiStack_188 = NULL;
    puStack_110 = &stack0xffffffffffffffb0;
    pppiStack_100 = unaff_x21;
    ppppiStack_f0 = unaff_x20;
    ppppiStack_e8 = pppppiVar10;
    if (pppppiVar6 < 0x64) {
        ppppiVar14 = *(auVar18._0_8_ + 0xd8);
        if (ppppiVar14[5] == NULL) {
            iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.17,"iommu_debug_unmap_write");
            if (iVar1 != 0) {
                _printk(0x8001129,"iommu_debug_unmap_write");
            }
            goto code_r0x08004550;
        }
        __check_object_size(&piStack_180,pppppiVar6,0);
        pppppiVar10 = pppppiVar6;
        iVar7 = sym._copy_from_user(&piStack_180,pppppiVar12,pppppiVar6);
        if (iVar7 == 0) {
            pppppiVar10 = 0x2c;
            pppppiVar3 = strnchr(&piStack_180,pppppiVar6);
            unaff_x20 = pppppiVar12;
            if (pppppiVar3 != NULL) {
                *pppppiVar3 = 0;
                pppppiVar10 = &pppiStack_188;
                iVar1 = kstrtoull(&piStack_180,0);
                unaff_x20 = pppppiVar3;
                if ((iVar1 == 0) && (iVar1 = kstrtoull(pppppiVar3 + 1,0), pppppiVar10 = pppppiVar11, iVar1 == 0)) {
                    unaff_x20 = ppppiVar14 + 7;
                    mutex_lock(unaff_x20);
                    if (ppppiVar14[5] == NULL) {
                        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.19,"iommu_debug_unmap_write");
                        pppppiVar6 = pppppiVar11;
                        if (iVar1 != 0) {
                            _printk(0x800161d);
                            pppppiVar6 = pppppiVar11;
                        }
                        mutex_unlock(unaff_x20);
                        goto code_r0x08004550;
                    }
                    pppppiVar10 = ppppiStack_190;
                    pppppiVar12 = iommu_unmap(ppppiVar14[5],pppiStack_188);
                    if (pppppiVar12 == ppppiStack_190) {
                        pppppiVar10 = pppppiVar12;
                        _printk(0x800183c,&pppiStack_188);
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.21,"iommu_debug_unmap_write");
                        if (iVar1 == 0) {
                            pppppiVar6 = 0xfffffffffffffffb;
                        }
                        else {
                            pppppiVar10 = pppppiVar12;
                            _printk(0x8000f9c,ppppiStack_190);
                            pppppiVar6 = 0xfffffffffffffffb;
                        }
                    }
                    goto code_r0x080044b8;
                }
            }
            pppppiVar6 = pppppiVar10;
            iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.24,"iommu_debug_unmap_write");
            if (iVar1 != 0) {
                uVar13 = 0x8001317;
                goto code_r0x0800445c;
            }
            goto code_r0x08004550;
        }
        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.18,"iommu_debug_unmap_write");
        if (iVar1 != 0) {
            _printk(0x80011fa);
        }
        pppppiVar6 = 0xfffffffffffffff2;
code_r0x080044b8:
        mutex_unlock(ppppiVar14 + 7);
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs,"iommu_debug_unmap_write");
        ppppiVar14 = unaff_x21;
        if (iVar1 != 0) {
            uVar13 = 0x80016c7;
code_r0x0800445c:
            _printk(uVar13);
        }
code_r0x08004550:
        pppppiVar10 = pppppiVar6;
        pppppiVar6 = 0xffffffffffffffea;
        pppppiVar12 = unaff_x20;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_118) {
        return pppppiVar6;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_00 = sym.iommu_debug_dma_map_read;
    pcStack_1b8 = sym.iommu_debug_dma_map_read;
    iVar7 = sp_el0;
    iStack_1c8 = *(iVar7 + 0x5e0);
    pppppiVar3 = NULL;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    pppppiVar11 = pppppiVar10;
    ppuStack_1c0 = &puStack_110;
    pppiStack_1b0 = ppppiVar14;
    ppppiStack_1a0 = pppppiVar12;
    ppppiStack_198 = pppppiVar6;
    if (*in_x3 == NULL) {
        uStack_238 = *(*(auVar18._0_8_ + 0xd8) + 0x88);
        iVar1 = scnprintf(&uStack_230,100,"%pa\n",&uStack_238);
        pppppiVar11 = in_x3;
        pppppiVar3 = simple_read_from_buffer(auVar18._8_8_,pppppiVar10,in_x3,&uStack_230,iVar1);
        pppppiVar6 = in_x3;
        pppppiVar12 = pppppiVar10;
        ppppiVar14 = auVar18._8_8_;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1c8) {
        return pppppiVar3;
    }
    auVar18 = __stack_chk_fail(pppppiVar3);
    arg2_00 = auVar18._8_8_;
    *extraout_x18_01 = sym.iommu_debug_dma_map_write;
    pcStack_278 = sym.iommu_debug_dma_map_write;
    iVar7 = sp_el0;
    iStack_288 = *(iVar7 + 0x5e0);
    uStack_290 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    pppiStack_2f8 = NULL;
    ppppiStack_308 = NULL;
    uStack_30c = 0;
    pppuStack_280 = &ppuStack_1c0;
    puStack_270 = puVar8;
    pppiStack_268 = ppppiVar16;
    pcStack_260 = pcVar15;
    pppiStack_258 = ppppiVar14;
    ppppiStack_250 = pppppiVar12;
    ppppiStack_248 = pppppiVar6;
    if (pppppiVar11 < 0x64) {
        puVar8 = *(auVar18._0_8_ + 0xd8);
        pppppiVar12 = *(puVar8 + 0x20);
        __check_object_size(&uStack_2f0,pppppiVar11,0);
        pppppiVar10 = pppppiVar11;
        iVar7 = sym._copy_from_user(&uStack_2f0,arg2_00,pppppiVar11);
        if (iVar7 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar11 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        pppppiVar10 = 0x2c;
        ppppiVar4 = strnchr(&uStack_2f0,pppppiVar11);
        ppppiVar14 = arg2_00;
        if (ppppiVar4 == NULL) {
code_r0x0800487c:
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            arg2_00 = ppppiVar14;
            if (iVar1 != 0) {
                uVar13 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        pcVar15 = ppppiVar4 + 1;
        pppppiVar10 = 0x2c;
        ppppiVar5 = strnchr(pcVar15,pppppiVar11);
        ppppiVar14 = ppppiVar4;
        if (ppppiVar5 == NULL) goto code_r0x0800487c;
        *ppppiVar5 = 0;
        pppppiVar10 = &pppiStack_2f8;
        *ppppiVar4 = 0;
        iVar1 = kstrtoull(&uStack_2f0,0);
        arg2_00 = pppiStack_2f8;
        ppppiVar16 = ppppiVar5;
        if (iVar1 != 0) goto code_r0x0800487c;
        pppppiVar10 = &ppppiStack_308;
        iVar1 = kstrtoull(pcVar15,0);
        ppppiVar14 = arg2_00;
        if (iVar1 != 0) goto code_r0x0800487c;
        pppppiVar10 = &uStack_30c;
        iVar1 = kstrtouint(ppppiVar5 + 1,0);
        if (iVar1 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        ppppiVar16 = _segment.ehdr;
        pcVar15 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (ppppiVar16 == NULL) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    uVar13 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((arg2_00 < _segment.ehdr) || (_segment.ehdr + 0x20000 < arg2_00 + ppppiStack_308)) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8000d77,arg2_00);
                }
            }
            else {
                ppppiVar16 = uStack_30c;
                if (3 < uStack_30c) goto code_r0x0800487c;
                pcVar15 = puVar8 + 0x38;
                mutex_lock(pcVar15);
                if (*(puVar8 + 0x28) != 0) {
                    pppppiVar10 = ppppiStack_308;
                    pppppiVar6 = sym.dma_map_single_attrs
                                           (pppppiVar12,arg2_00,ppppiStack_308,*(ppppiVar16 * 8 + 0x8002a30));
                    ppppiStack_300 = pppppiVar6;
                    if (pppppiVar6 == 0xffffffffffffffff) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8001465);
                        }
                        pppppiVar11 = 0xffffffffffffffea;
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        pppppiVar12 = pppppiVar6;
                        if (iVar1 != 0) {
                            pppppiVar10 = &ppppiStack_300;
                            _printk(0x8001878,arg2_00,pppppiVar10,ppppiStack_308);
                            pppppiVar12 = ppppiStack_300;
                        }
                        *(puVar8 + 0x88) = pppppiVar12;
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8000ee6,&ppppiStack_300);
                        }
                    }
                    mutex_unlock(pcVar15);
                    goto code_r0x08004898;
                }
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(pcVar15);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar1 != 0) {
            _printk(0x8000b8c);
        }
        pppppiVar11 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        pppppiVar10 = pppppiVar11;
        arg2_00 = ppppiVar14;
        if (iVar1 == 0) goto code_r0x08004894;
        uVar13 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar13);
code_r0x08004894:
        pppppiVar11 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_288) {
        return pppppiVar11;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_02 = sym.iommu_debug_dma_unmap_write;
    pcStack_348 = sym.iommu_debug_dma_unmap_write;
    iVar7 = sp_el0;
    iStack_358 = *(iVar7 + 0x5e0);
    uStack_360 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3c8 = 0;
    uStack_3cc = 0;
    uStack_3d8 = 0;
    ppppuStack_350 = &pppuStack_280;
    puStack_340 = puVar8;
    pppiStack_338 = ppppiVar16;
    pcStack_330 = pcVar15;
    pppiStack_328 = arg2_00;
    ppppiStack_320 = pppppiVar12;
    ppppiStack_318 = pppppiVar11;
    if (pppppiVar10 < 0x64) {
        iVar17 = *(auVar18._0_8_ + 0xd8);
        uVar13 = *(iVar17 + 0x20);
        __check_object_size(&uStack_3c0,pppppiVar10,0);
        iVar7 = sym._copy_from_user(&uStack_3c0,auVar18._8_8_,pppppiVar10);
        if (iVar7 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar10 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar17 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar8 = strnchr(&uStack_3c0,pppppiVar10,0x2c);
        if (puVar8 != NULL) {
            puVar9 = strnchr(puVar8 + 1,pppppiVar10,0x2c);
            if (puVar9 != NULL) {
                *puVar9 = 0;
                *puVar8 = 0;
                iVar1 = kstrtoull(&uStack_3c0,0,&uStack_3d8);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar8 + 1,0,&uStack_3c8), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar9 + 1,0,&uStack_3cc), iVar1 == 0)) &&
                   (iVar7 = uStack_3cc, uStack_3cc < 4)) {
                    mutex_lock(iVar17 + 0x38);
                    if (*(iVar17 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar17 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar13,uStack_3d8,uStack_3c8,1,*(iVar7 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_3d8,uStack_3c8);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar13 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar13 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar13);
        }
    }
code_r0x08004cc8:
    pppppiVar10 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_358) {
        return pppppiVar10;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_03 = sym.iommu_debug_functional_arm_dma_api_open;
    pppppiVar10 = single_open(auVar18._8_8_,
                              sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                              *(auVar18._0_8_ + 0x2d8));
    return pppppiVar10;
}


// ===== sym.iommu_debug_unmap_write @ 0x080043ec (size 624) =====

int64_t ***** sym.iommu_debug_unmap_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int64_t *****pppppiVar2;
    int64_t ****ppppiVar3;
    int64_t ****ppppiVar4;
    int64_t *****pppppiVar5;
    int64_t iVar6;
    uchar *puVar7;
    uchar *puVar8;
    int64_t *****in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t *****pppppiVar9;
    int64_t *****pppppiVar10;
    int64_t *****unaff_x20;
    ulong uVar11;
    int64_t ****unaff_x21;
    int64_t ****ppppiVar12;
    int64_t ****arg2_00;
    code *unaff_x22;
    int64_t ****unaff_x23;
    int64_t unaff_x24;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_2f8;
    uint32_t uStack_2ec;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    uint uStack_280;
    int64_t iStack_278;
    uchar ***pppuStack_270;
    code *pcStack_268;
    int64_t iStack_260;
    int64_t ***pppiStack_258;
    code *pcStack_250;
    int64_t ***pppiStack_248;
    int64_t ****ppppiStack_240;
    int64_t ****ppppiStack_238;
    uint32_t uStack_22c;
    int64_t ****ppppiStack_228;
    int64_t ****ppppiStack_220;
    int64_t ***pppiStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    uint uStack_1b0;
    int64_t iStack_1a8;
    uchar **ppuStack_1a0;
    code *pcStack_198;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t ***pppiStack_d0;
    int64_t ****ppppiStack_c0;
    int64_t ****ppppiStack_b8;
    int64_t ****ppppiStack_b0;
    int64_t ***pppiStack_a8;
    int64_t *piStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    pppppiVar10 = arg3;
    pppppiVar9 = &ppppiStack_b0;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    piStack_a0 = NULL;
    uStack_98 = 0;
    ppppiStack_b0 = NULL;
    pppiStack_a8 = NULL;
    if (pppppiVar10 < 0x64) {
        unaff_x21 = *(arg1 + 0xd8);
        if (unaff_x21[5] == NULL) {
            iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.17,"iommu_debug_unmap_write");
            if (iVar1 != 0) {
                _printk(0x8001129,"iommu_debug_unmap_write");
            }
            goto code_r0x08004550;
        }
        __check_object_size(&piStack_a0,pppppiVar10,0);
        pppppiVar5 = pppppiVar10;
        iVar6 = sym._copy_from_user(&piStack_a0,arg2,pppppiVar10);
        if (iVar6 == 0) {
            pppppiVar5 = 0x2c;
            pppppiVar2 = strnchr(&piStack_a0,pppppiVar10);
            unaff_x20 = arg2;
            if (pppppiVar2 != NULL) {
                *pppppiVar2 = 0;
                pppppiVar5 = &pppiStack_a8;
                iVar1 = kstrtoull(&piStack_a0,0);
                unaff_x20 = pppppiVar2;
                if ((iVar1 == 0) && (iVar1 = kstrtoull(pppppiVar2 + 1,0), pppppiVar5 = pppppiVar9, iVar1 == 0)) {
                    unaff_x20 = unaff_x21 + 7;
                    mutex_lock(unaff_x20);
                    if (unaff_x21[5] == NULL) {
                        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.19,"iommu_debug_unmap_write");
                        pppppiVar10 = pppppiVar9;
                        if (iVar1 != 0) {
                            _printk(0x800161d);
                            pppppiVar10 = pppppiVar9;
                        }
                        mutex_unlock(unaff_x20);
                        goto code_r0x08004550;
                    }
                    pppppiVar5 = ppppiStack_b0;
                    arg2 = iommu_unmap(unaff_x21[5],pppiStack_a8);
                    if (arg2 == ppppiStack_b0) {
                        pppppiVar5 = arg2;
                        _printk(0x800183c,&pppiStack_a8);
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.21,"iommu_debug_unmap_write");
                        if (iVar1 == 0) {
                            pppppiVar10 = 0xfffffffffffffffb;
                        }
                        else {
                            pppppiVar5 = arg2;
                            _printk(0x8000f9c,ppppiStack_b0);
                            pppppiVar10 = 0xfffffffffffffffb;
                        }
                    }
                    goto code_r0x080044b8;
                }
            }
            pppppiVar10 = pppppiVar5;
            iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.24,"iommu_debug_unmap_write");
            if (iVar1 != 0) {
                uVar11 = 0x8001317;
                goto code_r0x0800445c;
            }
            goto code_r0x08004550;
        }
        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs.18,"iommu_debug_unmap_write");
        if (iVar1 != 0) {
            _printk(0x80011fa);
        }
        pppppiVar10 = 0xfffffffffffffff2;
code_r0x080044b8:
        mutex_unlock(unaff_x21 + 7);
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_unmap_write._rs,"iommu_debug_unmap_write");
        if (iVar1 != 0) {
            uVar11 = 0x80016c7;
code_r0x0800445c:
            _printk(uVar11);
        }
code_r0x08004550:
        pppppiVar5 = pppppiVar10;
        pppppiVar10 = 0xffffffffffffffea;
        arg2 = unaff_x20;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return pppppiVar10;
    }
    auVar14 = __stack_chk_fail();
    *extraout_x18 = sym.iommu_debug_dma_map_read;
    pcStack_d8 = sym.iommu_debug_dma_map_read;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    pppppiVar2 = NULL;
    uStack_f0 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    pppppiVar9 = pppppiVar5;
    puStack_e0 = &stack0xffffffffffffffd0;
    pppiStack_d0 = unaff_x21;
    ppppiStack_c0 = arg2;
    ppppiStack_b8 = pppppiVar10;
    if (*in_x3 == NULL) {
        uStack_158 = *(*(auVar14._0_8_ + 0xd8) + 0x88);
        iVar1 = scnprintf(&uStack_150,100,"%pa\n",&uStack_158);
        pppppiVar2 = simple_read_from_buffer(auVar14._8_8_,pppppiVar5,in_x3,&uStack_150,iVar1);
        pppppiVar9 = in_x3;
        arg2 = pppppiVar5;
        unaff_x21 = auVar14._8_8_;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_e8) {
        return pppppiVar2;
    }
    auVar14 = __stack_chk_fail(pppppiVar2);
    arg2_00 = auVar14._8_8_;
    *extraout_x18_00 = sym.iommu_debug_dma_map_write;
    pcStack_198 = sym.iommu_debug_dma_map_write;
    iVar6 = sp_el0;
    iStack_1a8 = *(iVar6 + 0x5e0);
    uStack_1b0 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    pppiStack_218 = NULL;
    ppppiStack_228 = NULL;
    uStack_22c = 0;
    ppuStack_1a0 = &puStack_e0;
    if (pppppiVar9 < 0x64) {
        unaff_x24 = *(auVar14._0_8_ + 0xd8);
        arg2 = *(unaff_x24 + 0x20);
        __check_object_size(&uStack_210,pppppiVar9,0);
        pppppiVar10 = pppppiVar9;
        iVar6 = sym._copy_from_user(&uStack_210,arg2_00,pppppiVar9);
        if (iVar6 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar9 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        pppppiVar10 = 0x2c;
        ppppiVar3 = strnchr(&uStack_210,pppppiVar9);
        ppppiVar12 = arg2_00;
        if (ppppiVar3 == NULL) {
code_r0x0800487c:
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            arg2_00 = ppppiVar12;
            if (iVar1 != 0) {
                uVar11 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        unaff_x22 = ppppiVar3 + 1;
        pppppiVar10 = 0x2c;
        ppppiVar4 = strnchr(unaff_x22,pppppiVar9);
        ppppiVar12 = ppppiVar3;
        if (ppppiVar4 == NULL) goto code_r0x0800487c;
        *ppppiVar4 = 0;
        pppppiVar10 = &pppiStack_218;
        *ppppiVar3 = 0;
        iVar1 = kstrtoull(&uStack_210,0);
        arg2_00 = pppiStack_218;
        unaff_x23 = ppppiVar4;
        if (iVar1 != 0) goto code_r0x0800487c;
        pppppiVar10 = &ppppiStack_228;
        iVar1 = kstrtoull(unaff_x22,0);
        ppppiVar12 = arg2_00;
        if (iVar1 != 0) goto code_r0x0800487c;
        pppppiVar10 = &uStack_22c;
        iVar1 = kstrtouint(ppppiVar4 + 1,0);
        if (iVar1 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        unaff_x23 = _segment.ehdr;
        unaff_x22 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (unaff_x23 == NULL) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    uVar11 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((arg2_00 < _segment.ehdr) || (_segment.ehdr + 0x20000 < arg2_00 + ppppiStack_228)) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8000d77,arg2_00);
                }
            }
            else {
                unaff_x23 = uStack_22c;
                if (3 < uStack_22c) goto code_r0x0800487c;
                unaff_x22 = unaff_x24 + 0x38;
                mutex_lock(unaff_x22);
                if (*(unaff_x24 + 0x28) != 0) {
                    pppppiVar10 = ppppiStack_228;
                    pppppiVar5 = sym.dma_map_single_attrs(arg2,arg2_00,ppppiStack_228,*(unaff_x23 * 8 + 0x8002a30));
                    ppppiStack_220 = pppppiVar5;
                    if (pppppiVar5 == 0xffffffffffffffff) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8001465);
                        }
                        pppppiVar9 = 0xffffffffffffffea;
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        arg2 = pppppiVar5;
                        if (iVar1 != 0) {
                            pppppiVar10 = &ppppiStack_220;
                            _printk(0x8001878,arg2_00,pppppiVar10,ppppiStack_228);
                            arg2 = ppppiStack_220;
                        }
                        *(unaff_x24 + 0x88) = arg2;
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8000ee6,&ppppiStack_220);
                        }
                    }
                    mutex_unlock(unaff_x22);
                    goto code_r0x08004898;
                }
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(unaff_x22);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar1 != 0) {
            _printk(0x8000b8c);
        }
        pppppiVar9 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        pppppiVar10 = pppppiVar9;
        arg2_00 = unaff_x21;
        if (iVar1 == 0) goto code_r0x08004894;
        uVar11 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar11);
code_r0x08004894:
        pppppiVar9 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1a8) {
        return pppppiVar9;
    }
    auVar14 = __stack_chk_fail();
    *extraout_x18_01 = sym.iommu_debug_dma_unmap_write;
    pcStack_268 = sym.iommu_debug_dma_unmap_write;
    iVar6 = sp_el0;
    iStack_278 = *(iVar6 + 0x5e0);
    uStack_280 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2e8 = 0;
    uStack_2ec = 0;
    uStack_2f8 = 0;
    pppuStack_270 = &ppuStack_1a0;
    iStack_260 = unaff_x24;
    pppiStack_258 = unaff_x23;
    pcStack_250 = unaff_x22;
    pppiStack_248 = arg2_00;
    ppppiStack_240 = arg2;
    ppppiStack_238 = pppppiVar9;
    if (pppppiVar10 < 0x64) {
        iVar13 = *(auVar14._0_8_ + 0xd8);
        uVar11 = *(iVar13 + 0x20);
        __check_object_size(&uStack_2e0,pppppiVar10,0);
        iVar6 = sym._copy_from_user(&uStack_2e0,auVar14._8_8_,pppppiVar10);
        if (iVar6 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            pppppiVar10 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar13 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar7 = strnchr(&uStack_2e0,pppppiVar10,0x2c);
        if (puVar7 != NULL) {
            puVar8 = strnchr(puVar7 + 1,pppppiVar10,0x2c);
            if (puVar8 != NULL) {
                *puVar8 = 0;
                *puVar7 = 0;
                iVar1 = kstrtoull(&uStack_2e0,0,&uStack_2f8);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar7 + 1,0,&uStack_2e8), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar8 + 1,0,&uStack_2ec), iVar1 == 0)) &&
                   (iVar6 = uStack_2ec, uStack_2ec < 4)) {
                    mutex_lock(iVar13 + 0x38);
                    if (*(iVar13 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar13 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar11,uStack_2f8,uStack_2e8,1,*(iVar6 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_2f8,uStack_2e8);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar11 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar11 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar11);
        }
    }
code_r0x08004cc8:
    pppppiVar10 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_278) {
        return pppppiVar10;
    }
    auVar14 = __stack_chk_fail();
    *extraout_x18_02 = sym.iommu_debug_functional_arm_dma_api_open;
    pppppiVar10 = single_open(auVar14._8_8_,
                              sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                              *(auVar14._0_8_ + 0x2d8));
    return pppppiVar10;
}


// ===== sym.iommu_debug_dma_map_read @ 0x0800465c (size 208) =====

ulong **** sym.iommu_debug_dma_map_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong ****ppppuVar2;
    ulong ***pppuVar3;
    ulong ***pppuVar4;
    ulong ***pppuVar5;
    int64_t iVar6;
    uchar *puVar7;
    uchar *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong ****ppppuVar9;
    ulong ***unaff_x20;
    ulong uVar10;
    ulong ***unaff_x21;
    ulong ***arg2_00;
    code *unaff_x22;
    ulong ***unaff_x23;
    int64_t unaff_x24;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_248;
    uint32_t uStack_23c;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    uint uStack_1d0;
    int64_t iStack_1c8;
    uchar **ppuStack_1c0;
    code *pcStack_1b8;
    int64_t iStack_1b0;
    ulong **ppuStack_1a8;
    code *pcStack_1a0;
    ulong **ppuStack_198;
    ulong **ppuStack_190;
    ulong ***pppuStack_188;
    uint32_t uStack_17c;
    ulong ***pppuStack_178;
    ulong **ppuStack_170;
    ulong **ppuStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    uint uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    ppppuVar2 = NULL;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    ppppuVar9 = arg3;
    if (*arg4 == 0) {
        uStack_a8 = *(*(arg1 + 0xd8) + 0x88);
        iVar1 = scnprintf(&uStack_a0,100,"%pa\n",&uStack_a8);
        ppppuVar2 = simple_read_from_buffer(arg2,arg3,arg4,&uStack_a0,iVar1);
        ppppuVar9 = arg4;
        unaff_x20 = arg3;
        unaff_x21 = arg2;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return ppppuVar2;
    }
    auVar12 = __stack_chk_fail(ppppuVar2);
    arg2_00 = auVar12._8_8_;
    *extraout_x18 = sym.iommu_debug_dma_map_write;
    pcStack_e8 = sym.iommu_debug_dma_map_write;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    uStack_100 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    ppuStack_168 = NULL;
    pppuStack_178 = NULL;
    uStack_17c = 0;
    puStack_f0 = &stack0xffffffffffffffd0;
    if (ppppuVar9 < 0x64) {
        unaff_x24 = *(auVar12._0_8_ + 0xd8);
        unaff_x20 = *(unaff_x24 + 0x20);
        __check_object_size(&uStack_160,ppppuVar9,0);
        ppppuVar2 = ppppuVar9;
        iVar6 = sym._copy_from_user(&uStack_160,arg2_00,ppppuVar9);
        if (iVar6 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            ppppuVar9 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        ppppuVar2 = 0x2c;
        pppuVar3 = strnchr(&uStack_160,ppppuVar9);
        pppuVar5 = arg2_00;
        if (pppuVar3 == NULL) {
code_r0x0800487c:
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            arg2_00 = pppuVar5;
            if (iVar1 != 0) {
                uVar10 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        unaff_x22 = pppuVar3 + 1;
        ppppuVar2 = 0x2c;
        pppuVar4 = strnchr(unaff_x22,ppppuVar9);
        pppuVar5 = pppuVar3;
        if (pppuVar4 == NULL) goto code_r0x0800487c;
        *pppuVar4 = 0;
        ppppuVar2 = &ppuStack_168;
        *pppuVar3 = 0;
        iVar1 = kstrtoull(&uStack_160,0);
        arg2_00 = ppuStack_168;
        unaff_x23 = pppuVar4;
        if (iVar1 != 0) goto code_r0x0800487c;
        ppppuVar2 = &pppuStack_178;
        iVar1 = kstrtoull(unaff_x22,0);
        pppuVar5 = arg2_00;
        if (iVar1 != 0) goto code_r0x0800487c;
        ppppuVar2 = &uStack_17c;
        iVar1 = kstrtouint(pppuVar4 + 1,0);
        if (iVar1 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        unaff_x23 = _segment.ehdr;
        unaff_x22 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (unaff_x23 == NULL) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    uVar10 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((arg2_00 < _segment.ehdr) || (_segment.ehdr + 0x20000 < arg2_00 + pppuStack_178)) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8000d77,arg2_00);
                }
            }
            else {
                unaff_x23 = uStack_17c;
                if (3 < uStack_17c) goto code_r0x0800487c;
                unaff_x22 = unaff_x24 + 0x38;
                mutex_lock(unaff_x22);
                if (*(unaff_x24 + 0x28) != 0) {
                    ppppuVar2 = pppuStack_178;
                    pppuVar5 = sym.dma_map_single_attrs(unaff_x20,arg2_00,pppuStack_178,*(unaff_x23 * 8 + 0x8002a30))
                    ;
                    ppuStack_170 = pppuVar5;
                    if (pppuVar5 == 0xffffffffffffffff) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8001465);
                        }
                        ppppuVar9 = 0xffffffffffffffea;
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        unaff_x20 = pppuVar5;
                        if (iVar1 != 0) {
                            ppppuVar2 = &ppuStack_170;
                            _printk(0x8001878,arg2_00,ppppuVar2,pppuStack_178);
                            unaff_x20 = ppuStack_170;
                        }
                        *(unaff_x24 + 0x88) = unaff_x20;
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8000ee6,&ppuStack_170);
                        }
                    }
                    mutex_unlock(unaff_x22);
                    goto code_r0x08004898;
                }
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(unaff_x22);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar1 != 0) {
            _printk(0x8000b8c);
        }
        ppppuVar9 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        ppppuVar2 = ppppuVar9;
        arg2_00 = unaff_x21;
        if (iVar1 == 0) goto code_r0x08004894;
        uVar10 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar10);
code_r0x08004894:
        ppppuVar9 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_f8) {
        return ppppuVar9;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.iommu_debug_dma_unmap_write;
    pcStack_1b8 = sym.iommu_debug_dma_unmap_write;
    iVar6 = sp_el0;
    iStack_1c8 = *(iVar6 + 0x5e0);
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_238 = 0;
    uStack_23c = 0;
    uStack_248 = 0;
    ppuStack_1c0 = &puStack_f0;
    iStack_1b0 = unaff_x24;
    ppuStack_1a8 = unaff_x23;
    pcStack_1a0 = unaff_x22;
    ppuStack_198 = arg2_00;
    ppuStack_190 = unaff_x20;
    pppuStack_188 = ppppuVar9;
    if (ppppuVar2 < 0x64) {
        iVar11 = *(auVar12._0_8_ + 0xd8);
        uVar10 = *(iVar11 + 0x20);
        __check_object_size(&uStack_230,ppppuVar2,0);
        iVar6 = sym._copy_from_user(&uStack_230,auVar12._8_8_,ppppuVar2);
        if (iVar6 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            ppppuVar2 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar11 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar7 = strnchr(&uStack_230,ppppuVar2,0x2c);
        if (puVar7 != NULL) {
            puVar8 = strnchr(puVar7 + 1,ppppuVar2,0x2c);
            if (puVar8 != NULL) {
                *puVar8 = 0;
                *puVar7 = 0;
                iVar1 = kstrtoull(&uStack_230,0,&uStack_248);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar7 + 1,0,&uStack_238), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar8 + 1,0,&uStack_23c), iVar1 == 0)) &&
                   (iVar6 = uStack_23c, uStack_23c < 4)) {
                    mutex_lock(iVar11 + 0x38);
                    if (*(iVar11 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar11 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar10,uStack_248,uStack_238,1,*(iVar6 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_248,uStack_238);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar10 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar10 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar10);
        }
    }
code_r0x08004cc8:
    ppppuVar2 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1c8) {
        return ppppuVar2;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.iommu_debug_functional_arm_dma_api_open;
    ppppuVar9 = single_open(auVar12._8_8_,
                            sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                            *(auVar12._0_8_ + 0x2d8));
    return ppppuVar9;
}


// ===== sym.iommu_debug_dma_map_write @ 0x0800472c (size 960) =====

ulong **** sym.iommu_debug_dma_map_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong ***pppuVar2;
    ulong ***pppuVar3;
    ulong ***pppuVar4;
    int64_t iVar5;
    uchar *puVar6;
    uchar *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong ****ppppuVar8;
    ulong ****arg3_00;
    ulong ***unaff_x20;
    ulong uVar9;
    ulong ***unaff_x21;
    code *unaff_x22;
    ulong ***unaff_x23;
    int64_t unaff_x24;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_198;
    uint32_t uStack_18c;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    ulong **ppuStack_f8;
    code *pcStack_f0;
    ulong **ppuStack_e8;
    ulong **ppuStack_e0;
    ulong ***pppuStack_d8;
    uint32_t uStack_cc;
    ulong ***pppuStack_c8;
    ulong **ppuStack_c0;
    ulong **ppuStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    ppppuVar8 = arg3;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    ppuStack_b8 = NULL;
    pppuStack_c8 = NULL;
    uStack_cc = 0;
    if (ppppuVar8 < 0x64) {
        unaff_x24 = *(arg1 + 0xd8);
        unaff_x20 = *(unaff_x24 + 0x20);
        __check_object_size(&uStack_b0,ppppuVar8,0);
        arg3_00 = ppppuVar8;
        iVar5 = sym._copy_from_user(&uStack_b0,arg2,ppppuVar8);
        if (iVar5 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.26,"iommu_debug_dma_map_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            ppppuVar8 = 0xfffffffffffffff2;
            goto code_r0x08004898;
        }
        arg3_00 = 0x2c;
        pppuVar2 = strnchr(&uStack_b0,ppppuVar8);
        pppuVar4 = arg2;
        if (pppuVar2 == NULL) {
code_r0x0800487c:
            iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.34,"iommu_debug_dma_map_write");
            arg2 = pppuVar4;
            if (iVar1 != 0) {
                uVar9 = 0x8001979;
                goto code_r0x080048e8;
            }
            goto code_r0x08004894;
        }
        unaff_x22 = pppuVar2 + 1;
        arg3_00 = 0x2c;
        pppuVar3 = strnchr(unaff_x22,ppppuVar8);
        pppuVar4 = pppuVar2;
        if (pppuVar3 == NULL) goto code_r0x0800487c;
        *pppuVar3 = 0;
        arg3_00 = &ppuStack_b8;
        *pppuVar2 = 0;
        iVar1 = kstrtoull(&uStack_b0,0);
        arg2 = ppuStack_b8;
        unaff_x23 = pppuVar3;
        if (iVar1 != 0) goto code_r0x0800487c;
        arg3_00 = &pppuStack_c8;
        iVar1 = kstrtoull(unaff_x22,0);
        pppuVar4 = arg2;
        if (iVar1 != 0) goto code_r0x0800487c;
        arg3_00 = &uStack_cc;
        iVar1 = kstrtouint(pppuVar3 + 1,0);
        if (iVar1 != 0) goto code_r0x0800487c;
        mutex_lock(obj.test_virt_addr_lock);
        unaff_x23 = _segment.ehdr;
        unaff_x22 = segment.ehdr;
        if (_segment.ehdr < 0xfffffffffffff001) {
            mutex_unlock(obj.test_virt_addr_lock);
            if (unaff_x23 == NULL) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.40,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    uVar9 = 0x8001a7a;
                    goto code_r0x080048e8;
                }
            }
            else if ((arg2 < _segment.ehdr) || (_segment.ehdr + 0x20000 < arg2 + pppuStack_c8)) {
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.36,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8000d77,arg2);
                }
            }
            else {
                unaff_x23 = uStack_cc;
                if (3 < uStack_cc) goto code_r0x0800487c;
                unaff_x22 = unaff_x24 + 0x38;
                mutex_lock(unaff_x22);
                if (*(unaff_x24 + 0x28) != 0) {
                    arg3_00 = pppuStack_c8;
                    pppuVar4 = sym.dma_map_single_attrs(unaff_x20,arg2,pppuStack_c8,*(unaff_x23 * 8 + 0x8002a30));
                    ppuStack_c0 = pppuVar4;
                    if (pppuVar4 == 0xffffffffffffffff) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.28,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8001465);
                        }
                        ppppuVar8 = 0xffffffffffffffea;
                    }
                    else {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.30,"iommu_debug_dma_map_write");
                        unaff_x20 = pppuVar4;
                        if (iVar1 != 0) {
                            arg3_00 = &ppuStack_c0;
                            _printk(0x8001878,arg2,arg3_00,pppuStack_c8);
                            unaff_x20 = ppuStack_c0;
                        }
                        *(unaff_x24 + 0x88) = unaff_x20;
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.32,"iommu_debug_dma_map_write");
                        if (iVar1 != 0) {
                            _printk(0x8000ee6,&ppuStack_c0);
                        }
                    }
                    mutex_unlock(unaff_x22);
                    goto code_r0x08004898;
                }
                iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.27,"iommu_debug_dma_map_write");
                if (iVar1 != 0) {
                    _printk(0x8001129,"iommu_debug_dma_map_write");
                }
                mutex_unlock(unaff_x22);
            }
            goto code_r0x08004894;
        }
        mutex_unlock(obj.test_virt_addr_lock);
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs.38,"iommu_debug_dma_map_write");
        if (iVar1 != 0) {
            _printk(0x8000b8c);
        }
        ppppuVar8 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_map_write._rs,"iommu_debug_dma_map_write");
        arg3_00 = ppppuVar8;
        arg2 = unaff_x21;
        if (iVar1 == 0) goto code_r0x08004894;
        uVar9 = 0x80016c7;
code_r0x080048e8:
        _printk(uVar9);
code_r0x08004894:
        ppppuVar8 = 0xffffffffffffffea;
    }
code_r0x08004898:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return ppppuVar8;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.iommu_debug_dma_unmap_write;
    pcStack_108 = sym.iommu_debug_dma_unmap_write;
    iVar5 = sp_el0;
    iStack_118 = *(iVar5 + 0x5e0);
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_188 = 0;
    uStack_18c = 0;
    uStack_198 = 0;
    puStack_110 = &stack0xffffffffffffffc0;
    iStack_100 = unaff_x24;
    ppuStack_f8 = unaff_x23;
    pcStack_f0 = unaff_x22;
    ppuStack_e8 = arg2;
    ppuStack_e0 = unaff_x20;
    pppuStack_d8 = ppppuVar8;
    if (arg3_00 < 0x64) {
        iVar10 = *(auVar11._0_8_ + 0xd8);
        uVar9 = *(iVar10 + 0x20);
        __check_object_size(&uStack_180,arg3_00,0);
        iVar5 = sym._copy_from_user(&uStack_180,auVar11._8_8_,arg3_00);
        if (iVar5 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            arg3_00 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar10 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar6 = strnchr(&uStack_180,arg3_00,0x2c);
        if (puVar6 != NULL) {
            puVar7 = strnchr(puVar6 + 1,arg3_00,0x2c);
            if (puVar7 != NULL) {
                *puVar7 = 0;
                *puVar6 = 0;
                iVar1 = kstrtoull(&uStack_180,0,&uStack_198);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar6 + 1,0,&uStack_188), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar7 + 1,0,&uStack_18c), iVar1 == 0)) &&
                   (iVar5 = uStack_18c, uStack_18c < 4)) {
                    mutex_lock(iVar10 + 0x38);
                    if (*(iVar10 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar10 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar9,uStack_198,uStack_188,1,*(iVar5 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_198,uStack_188);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar9 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar9 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar9);
        }
    }
code_r0x08004cc8:
    arg3_00 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_118) {
        return arg3_00;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.iommu_debug_functional_arm_dma_api_open;
    ppppuVar8 = single_open(auVar11._8_8_,
                            sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                            *(auVar11._0_8_ + 0x2d8));
    return ppppuVar8;
}


// ===== sym.iommu_debug_dma_unmap_write @ 0x08004aec (size 632) =====

uint64_t sym.iommu_debug_dma_unmap_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uchar *puVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_c8;
    uint32_t uStack_bc;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    uVar5 = arg3;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c8 = 0;
    if (uVar5 < 100) {
        iVar7 = *(arg1 + 0xd8);
        uVar6 = *(iVar7 + 0x20);
        __check_object_size(&uStack_b0,uVar5,0);
        iVar2 = sym._copy_from_user(&uStack_b0,arg2,uVar5);
        if (iVar2 != 0) {
            iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.43,"iommu_debug_dma_unmap_write");
            if (iVar1 != 0) {
                _printk(0x80011fa);
            }
            uVar5 = 0xfffffffffffffff2;
code_r0x08004bbc:
            mutex_unlock(iVar7 + 0x38);
            goto code_r0x08004ccc;
        }
        puVar3 = strnchr(&uStack_b0,uVar5,0x2c);
        if (puVar3 != NULL) {
            puVar4 = strnchr(puVar3 + 1,uVar5,0x2c);
            if (puVar4 != NULL) {
                *puVar4 = 0;
                *puVar3 = 0;
                iVar1 = kstrtoull(&uStack_b0,0,&uStack_c8);
                if ((((iVar1 == 0) && (iVar1 = kstrtoull(puVar3 + 1,0,&uStack_b8), iVar1 == 0)) &&
                    (iVar1 = kstrtouint(puVar4 + 1,0,&uStack_bc), iVar1 == 0)) && (iVar2 = uStack_bc, uStack_bc < 4)
                   ) {
                    mutex_lock(iVar7 + 0x38);
                    if (*(iVar7 + 0x28) == 0) {
                        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.44,"iommu_debug_dma_unmap_write");
                        if (iVar1 != 0) {
                            _printk(0x8001129,"iommu_debug_dma_unmap_write");
                        }
                        mutex_unlock(iVar7 + 0x38);
                        goto code_r0x08004cc8;
                    }
                    dma_unmap_page_attrs(uVar6,uStack_c8,uStack_b8,1,*(iVar2 * 8 + 0x8002a30));
                    iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.45,"iommu_debug_dma_unmap_write");
                    if (iVar1 != 0) {
                        _printk(0x8001489,&uStack_c8,uStack_b8);
                    }
                    goto code_r0x08004bbc;
                }
            }
        }
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs.47,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar6 = 0x8001785;
            goto code_r0x08004d1c;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.iommu_debug_dma_unmap_write._rs,"iommu_debug_dma_unmap_write");
        if (iVar1 != 0) {
            uVar6 = 0x80016c7;
code_r0x08004d1c:
            _printk(uVar6);
        }
    }
code_r0x08004cc8:
    uVar5 = 0xffffffffffffffea;
code_r0x08004ccc:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.iommu_debug_functional_arm_dma_api_open;
    uVar5 = single_open(auVar8._8_8_,
                        sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                        *(auVar8._0_8_ + 0x2d8));
    return uVar5;
}


// ===== sym.iommu_debug_functional_arm_dma_api_open @ 0x08004d64 (size 56) =====

void sym.iommu_debug_functional_arm_dma_api_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.iommu_debug_functional_arm_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                *(arg1 + 0x2d8));
    return;
}


// ===== sym.iommu_debug_functional_fast_dma_api_open @ 0x08004d9c (size 56) =====

void sym.iommu_debug_functional_fast_dma_api_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.iommu_debug_functional_fast_dma_api_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                *(arg1 + 0x2d8));
    return;
}


// ===== sym.iommu_debug_test_virt_addr_read @ 0x08004dd4 (size 300) =====

void sym.iommu_debug_test_virt_addr_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    uVar3 = 0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    if (*arg3 != 0) goto code_r0x08004ea8;
    mutex_lock(obj.test_virt_addr_lock);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _segment.ehdr = kmalloc_order_trace(0x100000,0xdc0,8);
        if (_segment.ehdr != 0) goto code_r0x08004e6c;
        _segment.ehdr = 0xfffffffffffffff4;
        iVar2 = strscpy(&uStack_a0,"FAIL\n",100,0);
    }
    else {
code_r0x08004e6c:
        iVar2 = scnprintf(&uStack_a0,100,"0x%p\n");
    }
    mutex_unlock(obj.test_virt_addr_lock);
    uVar3 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_a0,iVar2);
code_r0x08004ea8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    auVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.iommu_debug_profiling_open;
    single_open(auVar4._8_8_,sym.iommu_debug_profiling_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                *(auVar4._0_8_ + 0x2d8));
    return;
}


// ===== sym.iommu_debug_profiling_open @ 0x08004f00 (size 56) =====

void sym.iommu_debug_profiling_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.iommu_debug_profiling_show.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym._copy_from_user @ 0x08004f38 (size 376) =====

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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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


// ===== sym.dma_map_single_attrs @ 0x080050ec (size 216) =====

ulong sym.dma_map_single_attrs(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = is_vmalloc_addr(arg2);
    if (((uVar2 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar3 = dev_driver_string(arg1);
        iVar4 = *(arg1 + 0x70);
        if (iVar4 == 0) {
            iVar4 = *arg1;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar3,iVar4);
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8005170);
        (*pcVar1)();
    }
    if ((uVar2 & 1) == 0) {
        uVar3 = dma_map_page_attrs(arg1,(((arg2 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000,
                                   arg2 & 0xfff,arg3,1,arg4);
    }
    else {
        uVar3 = 0xffffffffffffffff;
    }
    return uVar3;
}


// ===== sym.iommu_debug_functional_arm_dma_api_show @ 0x080051c4 (size 652) =====

int sym.iommu_debug_functional_arm_dma_api_show(int64_t arg1)

{
    uint64_t uVar1;
    bool bVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    char *pcVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint64_t *puStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    int64_t aiStack_78 [5];
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    aiStack_78[4] = *(iVar15 + 0x5e0);
    iVar16 = *(arg1 + 0x80);
    aiStack_78[1] = 0x200000;
    aiStack_78[2] = 0xc00000;
    aiStack_78[3] = 0;
    iStack_80 = 0x1000;
    aiStack_78[0] = 0x10000;
    iVar15 = iVar16 + 0x38;
    mutex_lock(iVar15);
    iVar9 = sym.iommu_debug_switch_usecase(iVar16,*(iVar16 + 0x30));
    if (iVar9 == 0) {
        mutex_unlock(iVar15);
        uVar6 = 0xffffffea;
    }
    else {
        piVar17 = *(iVar16 + 0x20);
        uVar4 = sym.__functional_dma_api_alloc_test(piVar17,arg1);
        uVar5 = sym.__functional_dma_api_basic_test(piVar17,arg1);
        iVar9 = piVar17[0xe];
        if (iVar9 == 0) {
            iVar9 = *piVar17;
        }
        piVar18 = &iStack_80;
        _printk(0x8000f10,iVar9);
        seq_printf(arg1,"Map SG DMA API test");
        iVar9 = 0x1000;
        do {
            puStack_90 = NULL;
            uStack_88 = 0;
            uVar6 = sym.iommu_debug_build_phoney_sg_table(&puStack_90,iVar9);
            if (uVar6 != 0) {
                seq_puts(arg1,"couldn\'t build phoney sg table! bailing...\n");
                goto code_r0x08005400;
            }
            iVar8 = dma_map_sg_attrs(piVar17,puStack_90,uStack_88 & 0xffffffff,0,0);
            if (iVar8 == 0) {
                uVar6 = 0xffffffea;
                puVar10 = puStack_90;
            }
            else {
                uVar6 = sym.iommu_debug_check_mapping_sg_flags
                                  (piVar17,puStack_90,(puStack_90[1] + *(puStack_90 + 0xc) + 0xfffU >> 0xc) - 1,
                                   uStack_88 & 0xffffffff);
                dma_unmap_sg_attrs(piVar17,puStack_90,uStack_88 & 0xffffffff,0,0);
                puVar10 = puStack_90;
            }
            puStack_90 = puVar10;
            if (uStack_88 != 0) {
                uVar19 = 0;
                do {
                    __free_pages(*puVar10 & 0xfffffffffffffffc,0);
                    uVar19 = uVar19 + 1;
                    puVar10 = sg_next(puVar10);
                } while (uVar19 < uStack_88);
            }
            sg_free_table(&puStack_90);
            piVar18 = piVar18 + 1;
            iVar9 = *piVar18;
        } while (iVar9 != 0);
        if (uVar6 == 0) {
            iVar9 = piVar17[0xe];
            if (iVar9 == 0) {
                iVar9 = *piVar17;
            }
            _printk(0x80018bb,iVar9);
            uVar6 = 0;
            pcVar14 = "  -> SUCCEEDED\n";
        }
        else {
code_r0x08005400:
            iVar9 = piVar17[0xe];
            if (iVar9 == 0) {
                iVar9 = *piVar17;
            }
            _printk(0x8001910,iVar9);
            pcVar14 = "  -> FAILED\n";
        }
        seq_printf(arg1,pcVar14);
        uVar6 = uVar5 | uVar4 | uVar6;
        mutex_unlock(iVar15);
        if (uVar6 == 0) {
            seq_puts(arg1,"SUCCESS\n");
            goto code_r0x08005254;
        }
    }
    seq_printf(arg1,"FAIL %d\n",uVar6);
code_r0x08005254:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == aiStack_78[4]) {
        return 0;
    }
    auVar20 = __stack_chk_fail();
    uVar13 = auVar20._8_8_;
    piVar17 = auVar20._0_8_;
    *extraout_x18 = sym.__functional_dma_api_alloc_test;
    pcStack_e8 = sym.__functional_dma_api_alloc_test;
    iVar15 = sp_el0;
    iStack_f8 = *(iVar15 + 0x5e0);
    iVar15 = piVar17[0xe];
    uStack_100 = 0;
    if (iVar15 == 0) {
        iVar15 = *piVar17;
    }
    puStack_f0 = &stack0xffffffffffffffb0;
    _printk(0x800189a,iVar15);
    seq_printf(uVar13,"Allocating coherent buffer");
    iVar15 = dma_alloc_attrs(piVar17,0xb9800,&uStack_100,0xcc0,0);
    if (iVar15 == 0) {
        iVar8 = -0xc;
    }
    else {
        iVar9 = piVar17[0xe];
        if (iVar9 == 0) {
            iVar9 = *piVar17;
        }
        _printk(0x80018bb,iVar9);
        seq_printf(uVar13,"  -> SUCCEEDED\n");
        iVar9 = piVar17[0xe];
        if (iVar9 == 0) {
            iVar9 = *piVar17;
        }
        _printk(0x8001a1a,iVar9);
        seq_printf(uVar13,"Using coherent buffer");
        uVar11 = 0;
        iVar8 = 0;
        bVar2 = true;
        do {
            iVar9 = uVar11 << 10;
            uVar12 = uVar11;
            while( true ) {
                memset(iVar15,0xa5,0xb9800);
                uVar4 = uVar12 + ((uVar12 & 0xffffffff) / 0xff) * -0xff + 1;
                *(iVar15 + iVar9) = uVar4;
                if (uVar4 != (uVar4 & 0xff)) break;
                uVar12 = uVar12 + 1;
                iVar9 = iVar9 + 0x400;
                if (uVar12 == 0x2e6) {
                    if (bVar2) {
                        iVar9 = piVar17[0xe];
                        if (iVar9 == 0) {
                            iVar9 = *piVar17;
                        }
                        _printk(0x80018bb,iVar9);
                        seq_printf(uVar13,"  -> SUCCEEDED\n");
                        iVar8 = 0;
                    }
                    goto code_r0x08005650;
                }
            }
            iVar16 = piVar17[0xe];
            if (iVar16 == 0) {
                iVar16 = *piVar17;
            }
            uVar11 = ((uVar12 & 0xffffffff) / 0xff) * -0xff + uVar12 + 1;
            _printk(0x8000c60,iVar16,uVar12 & 0xffffffff,uVar4 & 0xff,uVar11 & 0xffffffff);
            seq_printf(uVar13,"  -> FAILED on iter %d since %d != %d\n",uVar12 & 0xffffffff,*(iVar15 + iVar9),
                       uVar11 & 0xffffffff);
            bVar2 = false;
            uVar11 = uVar12 + 1;
            iVar8 = -0x16;
        } while (uVar12 != 0x2e5);
code_r0x08005650:
        dma_free_attrs(piVar17,0xb9800,iVar15,uStack_100,0);
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_f8) {
        return iVar8;
    }
    auVar20 = __stack_chk_fail();
    piVar17 = auVar20._0_8_;
    *extraout_x18_00 = sym.__functional_dma_api_basic_test;
    iVar15 = piVar17[0xe];
    if (iVar15 == 0) {
        iVar15 = *piVar17;
    }
    _printk(0x80010cc,iVar15);
    seq_printf(auVar20._8_8_,"Basic DMA API test");
    iVar8 = 0;
    do {
        uVar11 = kmem_cache_alloc_trace(_seq_read,0xcc0,0x5ee);
        if (uVar11 == 0) {
            iVar7 = -0xc;
code_r0x08005880:
            iVar15 = piVar17[0xe];
            if (iVar15 == 0) {
                iVar15 = *piVar17;
            }
            _printk(0x8001910,iVar15);
            pcVar14 = "  -> FAILED\n";
            goto code_r0x080058a4;
        }
        memset(uVar11,0xa5,0x5ee);
        uVar12 = is_vmalloc_addr(uVar11);
        if (((uVar12 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar13 = dev_driver_string(piVar17);
            iVar15 = piVar17[0xe];
            if (iVar15 == 0) {
                iVar15 = *piVar17;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar13,iVar15);
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x800584c);
            (*pcVar3)();
        }
        iVar15 = (uVar11 << 8) >> 8;
        uVar1 = iVar15 + 0x8000000000;
        if ((uVar12 & 1) == 0) {
            iVar9 = dma_map_page_attrs(piVar17,(uVar1 >> 6 & 0x3ffffffffffffc0) - 0x200000000,uVar11 & 0xff8,0x5ee,1
                                       ,0);
        }
        else {
            iVar9 = -1;
        }
        iVar16 = _single_release + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iVar16 = iVar15 - _iommu_get_domain_for_dev;
        }
        iVar7 = sym.iommu_debug_check_mapping_flags(piVar17,iVar9,0x1000,iVar16);
        if (iVar7 != 0) goto code_r0x08005880;
        dma_unmap_page_attrs(piVar17,iVar9,0x5ee,1,0);
        iVar15 = 0;
        do {
            if (*(uVar11 + iVar15) != -0x5b) {
                iVar8 = ___ratelimit(obj.__functional_dma_api_basic_test._rs,"__functional_dma_api_basic_test");
                if (iVar8 != 0) {
                    _dev_err(piVar17,"data[%d] != 0xa5\n",*(uVar11 + iVar15));
                }
                iVar7 = -0x16;
                goto code_r0x08005880;
            }
            iVar15 = iVar15 + 1;
        } while (iVar15 != 0x5ee);
        kfree(uVar11);
        iVar8 = iVar8 + 1;
    } while (iVar8 != 1000);
    iVar15 = piVar17[0xe];
    if (iVar15 == 0) {
        iVar15 = *piVar17;
    }
    _printk(0x80018bb,iVar15);
    iVar7 = 0;
    pcVar14 = "  -> SUCCEEDED\n";
code_r0x080058a4:
    seq_printf(auVar20._8_8_,pcVar14);
    return iVar7;
}


// ===== sym.__functional_dma_api_alloc_test @ 0x08005450 (size 596) =====

int sym.__functional_dma_api_alloc_test(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int64_t *arg1_00;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    char *pcVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    iVar12 = *(arg1 + 0x70);
    uStack_70 = 0;
    if (iVar12 == 0) {
        iVar12 = *arg1;
    }
    _printk(0x800189a,iVar12);
    seq_printf(arg2,"Allocating coherent buffer");
    iVar12 = dma_alloc_attrs(arg1,0xb9800,&uStack_70,0xcc0,0);
    if (iVar12 == 0) {
        iVar6 = -0xc;
    }
    else {
        iVar13 = *(arg1 + 0x70);
        if (iVar13 == 0) {
            iVar13 = *arg1;
        }
        _printk(0x80018bb,iVar13);
        seq_printf(arg2,"  -> SUCCEEDED\n");
        iVar13 = *(arg1 + 0x70);
        if (iVar13 == 0) {
            iVar13 = *arg1;
        }
        _printk(0x8001a1a,iVar13);
        seq_printf(arg2,"Using coherent buffer");
        uVar7 = 0;
        iVar6 = 0;
        bVar3 = true;
        do {
            iVar13 = uVar7 << 10;
            uVar8 = uVar7;
            while( true ) {
                memset(iVar12,0xa5,0xb9800);
                uVar1 = uVar8 + ((uVar8 & 0xffffffff) / 0xff) * -0xff + 1;
                *(iVar12 + iVar13) = uVar1;
                if (uVar1 != (uVar1 & 0xff)) break;
                uVar8 = uVar8 + 1;
                iVar13 = iVar13 + 0x400;
                if (uVar8 == 0x2e6) {
                    if (bVar3) {
                        iVar13 = *(arg1 + 0x70);
                        if (iVar13 == 0) {
                            iVar13 = *arg1;
                        }
                        _printk(0x80018bb,iVar13);
                        seq_printf(arg2,"  -> SUCCEEDED\n");
                        iVar6 = 0;
                    }
                    goto code_r0x08005650;
                }
            }
            iVar10 = *(arg1 + 0x70);
            if (iVar10 == 0) {
                iVar10 = *arg1;
            }
            uVar7 = ((uVar8 & 0xffffffff) / 0xff) * -0xff + uVar8 + 1;
            _printk(0x8000c60,iVar10,uVar8 & 0xffffffff,uVar1 & 0xff,uVar7 & 0xffffffff);
            seq_printf(arg2,"  -> FAILED on iter %d since %d != %d\n",uVar8 & 0xffffffff,*(iVar12 + iVar13),
                       uVar7 & 0xffffffff);
            bVar3 = false;
            uVar7 = uVar8 + 1;
            iVar6 = -0x16;
        } while (uVar8 != 0x2e5);
code_r0x08005650:
        dma_free_attrs(arg1,0xb9800,iVar12,uStack_70,0);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    auVar14 = __stack_chk_fail();
    arg1_00 = auVar14._0_8_;
    *extraout_x18 = sym.__functional_dma_api_basic_test;
    iVar12 = arg1_00[0xe];
    if (iVar12 == 0) {
        iVar12 = *arg1_00;
    }
    _printk(0x80010cc,iVar12);
    seq_printf(auVar14._8_8_,"Basic DMA API test");
    iVar6 = 0;
    do {
        uVar7 = kmem_cache_alloc_trace(_seq_read,0xcc0,0x5ee);
        if (uVar7 == 0) {
            iVar5 = -0xc;
code_r0x08005880:
            iVar12 = arg1_00[0xe];
            if (iVar12 == 0) {
                iVar12 = *arg1_00;
            }
            _printk(0x8001910,iVar12);
            pcVar11 = "  -> FAILED\n";
            goto code_r0x080058a4;
        }
        memset(uVar7,0xa5,0x5ee);
        uVar8 = is_vmalloc_addr(uVar7);
        if (((uVar8 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar9 = dev_driver_string(arg1_00);
            iVar12 = arg1_00[0xe];
            if (iVar12 == 0) {
                iVar12 = *arg1_00;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar9,iVar12);
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x800584c);
            (*pcVar4)();
        }
        iVar12 = (uVar7 << 8) >> 8;
        uVar2 = iVar12 + 0x8000000000;
        if ((uVar8 & 1) == 0) {
            iVar13 = dma_map_page_attrs(arg1_00,(uVar2 >> 6 & 0x3ffffffffffffc0) - 0x200000000,uVar7 & 0xff8,0x5ee,1
                                        ,0);
        }
        else {
            iVar13 = -1;
        }
        iVar10 = _single_release + uVar2;
        if (uVar2 >> 0x26 != 0) {
            iVar10 = iVar12 - _iommu_get_domain_for_dev;
        }
        iVar5 = sym.iommu_debug_check_mapping_flags(arg1_00,iVar13,0x1000,iVar10);
        if (iVar5 != 0) goto code_r0x08005880;
        dma_unmap_page_attrs(arg1_00,iVar13,0x5ee,1,0);
        iVar12 = 0;
        do {
            if (*(uVar7 + iVar12) != -0x5b) {
                iVar6 = ___ratelimit(obj.__functional_dma_api_basic_test._rs,"__functional_dma_api_basic_test");
                if (iVar6 != 0) {
                    _dev_err(arg1_00,"data[%d] != 0xa5\n",*(uVar7 + iVar12));
                }
                iVar5 = -0x16;
                goto code_r0x08005880;
            }
            iVar12 = iVar12 + 1;
        } while (iVar12 != 0x5ee);
        kfree(uVar7);
        iVar6 = iVar6 + 1;
    } while (iVar6 != 1000);
    iVar12 = arg1_00[0xe];
    if (iVar12 == 0) {
        iVar12 = *arg1_00;
    }
    _printk(0x80018bb,iVar12);
    iVar5 = 0;
    pcVar11 = "  -> SUCCEEDED\n";
code_r0x080058a4:
    seq_printf(auVar14._8_8_,pcVar11);
    return iVar5;
}


// ===== sym.__functional_dma_api_basic_test @ 0x080056a4 (size 624) =====

int sym.__functional_dma_api_basic_test(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t arg4;
    code *pcVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0x70);
    if (iVar9 == 0) {
        iVar9 = *arg1;
    }
    _printk(0x80010cc,iVar9);
    seq_printf(arg2,"Basic DMA API test");
    iVar4 = 0;
    do {
        uVar5 = kmem_cache_alloc_trace(_seq_read,0xcc0,0x5ee);
        if (uVar5 == 0) {
            iVar3 = -0xc;
code_r0x08005880:
            iVar9 = *(arg1 + 0x70);
            if (iVar9 == 0) {
                iVar9 = *arg1;
            }
            _printk(0x8001910,iVar9);
            pcVar8 = "  -> FAILED\n";
            goto code_r0x080058a4;
        }
        memset(uVar5,0xa5,0x5ee);
        uVar6 = is_vmalloc_addr(uVar5);
        if (((uVar6 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar7 = dev_driver_string(arg1);
            iVar9 = *(arg1 + 0x70);
            if (iVar9 == 0) {
                iVar9 = *arg1;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar7,iVar9);
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800584c);
            (*pcVar2)();
        }
        iVar9 = (uVar5 << 8) >> 8;
        uVar1 = iVar9 + 0x8000000000;
        if ((uVar6 & 1) == 0) {
            arg2_00 = dma_map_page_attrs(arg1,(uVar1 >> 6 & 0x3ffffffffffffc0) - 0x200000000,uVar5 & 0xff8,0x5ee,1,
                                         0);
        }
        else {
            arg2_00 = -1;
        }
        arg4 = _single_release + uVar1;
        if (uVar1 >> 0x26 != 0) {
            arg4 = iVar9 - _iommu_get_domain_for_dev;
        }
        iVar3 = sym.iommu_debug_check_mapping_flags(arg1,arg2_00,0x1000,arg4);
        if (iVar3 != 0) goto code_r0x08005880;
        dma_unmap_page_attrs(arg1,arg2_00,0x5ee,1,0);
        iVar9 = 0;
        do {
            if (*(uVar5 + iVar9) != -0x5b) {
                iVar4 = ___ratelimit(obj.__functional_dma_api_basic_test._rs,"__functional_dma_api_basic_test");
                if (iVar4 != 0) {
                    _dev_err(arg1,"data[%d] != 0xa5\n",*(uVar5 + iVar9));
                }
                iVar3 = -0x16;
                goto code_r0x08005880;
            }
            iVar9 = iVar9 + 1;
        } while (iVar9 != 0x5ee);
        kfree(uVar5);
        iVar4 = iVar4 + 1;
    } while (iVar4 != 1000);
    iVar9 = *(arg1 + 0x70);
    if (iVar9 == 0) {
        iVar9 = *arg1;
    }
    _printk(0x80018bb,iVar9);
    iVar3 = 0;
    pcVar8 = "  -> SUCCEEDED\n";
code_r0x080058a4:
    seq_printf(arg2,pcVar8);
    return iVar3;
}


// ===== sym.iommu_debug_build_phoney_sg_table @ 0x08005914 (size 284) =====

ulong sym.iommu_debug_build_phoney_sg_table(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t *puVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg2 & 0xfff) == 0) && (iVar4 = sg_alloc_table(arg1,arg2 >> 0xc,0xcc0), iVar4 == 0)) {
        if (*(arg1 + 8) != 0) {
            puVar7 = *arg1;
            iVar4 = -1;
            do {
                uVar5 = tpidr_el1;
                uVar6 = __alloc_pages(uVar5,0xcc0,0,0,0);
                if (uVar6 == 0) {
                    if (0 < iVar4 + 1) {
                        iVar8 = 0;
                        puVar7 = *arg1;
                        do {
                            __free_pages(*puVar7 & 0xfffffffffffffffc,0);
                            iVar8 = iVar8 + 1;
                            puVar7 = sg_next(puVar7);
                            bVar1 = iVar8 < iVar4;
                            iVar4 = iVar4 + -1;
                        } while (bVar1);
                    }
                    sg_free_table(arg1);
                    return 0xfffffff4;
                }
                if ((uVar6 & 3) != 0) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x800,0x8005a30);
                    (*pcVar3)();
                }
                *puVar7 = *puVar7 & 3 | uVar6;
                puVar7[1] = 0x100000000000;
                puVar7 = sg_next(puVar7);
                uVar2 = iVar4 + 2;
                iVar4 = iVar4 + 1;
            } while (uVar2 < *(arg1 + 8));
        }
        uVar5 = 0;
    }
    else {
        uVar5 = 0xffffffea;
    }
    return uVar5;
}


// ===== sym.iommu_debug_functional_fast_dma_api_show @ 0x08005a34 (size 3484) =====

//WARNING: Removing unreachable block (ram,0x08006780)
//WARNING: Removing unreachable block (ram,0x080064a4)

void sym.iommu_debug_functional_fast_dma_api_show(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t unaff_x19;
    char *pcVar12;
    int64_t iVar13;
    char *unaff_x21;
    int64_t unaff_x22;
    ulong uVar14;
    int64_t iVar15;
    code *unaff_x25;
    int64_t iVar16;
    ulong unaff_x30;
    int64_t aiStack_90 [6];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    aiStack_90[5] = *(iVar7 + 0x5e0);
    pcVar12 = *(arg1 + 0x80);
    piVar10 = *(pcVar12 + 0x20);
    if (piVar10 == NULL) {
        _printk(0x8000c9d,"iommu_debug_functional_fast_dma_api_show");
        uVar4 = 0xffffffea;
        goto code_r0x08005c30;
    }
    if (pcVar12[0x34] == '\0') {
        iVar7 = piVar10[0xe];
        if (iVar7 == 0) {
            iVar7 = *piVar10;
        }
        _printk(0x80014e2,iVar7);
        seq_printf(arg1,"Not a fastmap usecase\n");
        uVar4 = 0;
        unaff_x19 = arg1;
        goto code_r0x08005c30;
    }
    unaff_x21 = pcVar12 + 0x38;
    mutex_lock(unaff_x21);
    iVar7 = sym.iommu_debug_switch_usecase(pcVar12,*(pcVar12 + 0x30));
    unaff_x25 = sym.__typeid__ZTSFiP6deviceP8seq_fileP12iommu_domainPvE_global_addr;
    if (iVar7 == 0) {
        mutex_unlock(unaff_x21);
        uVar4 = 0xffffffea;
        pcVar12 = "FAIL";
        goto code_r0x08005b10;
    }
    unaff_x22 = *(pcVar12 + 0x28);
    pcVar12 = *(pcVar12 + 0x20);
code_r0x08005ac0:
    uVar4 = sym.__typeid__ZTSFiP6deviceP8seq_fileP12iommu_domainPvE_global_addr(pcVar12,arg1,unaff_x22,0);
    mutex_unlock(unaff_x21);
    pcVar12 = "SUCCESS";
    if (uVar4 != 0) {
        pcVar12 = "FAIL";
    }
code_r0x08005b10:
    seq_printf(arg1,0x8001a72,pcVar12);
    iVar13 = *(arg1 + 0x80);
    unaff_x22 = iVar13 + 0x38;
    mutex_lock(unaff_x22);
    iVar7 = sym.iommu_debug_switch_usecase(iVar13,*(iVar13 + 0x30));
    if (iVar7 == 0) {
        mutex_unlock(unaff_x22);
        uVar5 = 0xffffffea;
        pcVar12 = "FAIL";
    }
    else {
        uVar14 = *(iVar13 + 0x20);
        uVar1 = *(iVar13 + 0x28);
        if (4 < (sym.__functional_dma_api_basic_test.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt + -unaff_x25 >> 3 |
                -unaff_x25 << 0x3d)) {
            __cfi_slowpath_diag(0xc5fa2e84f2e1759c,
                                sym.__functional_dma_api_basic_test.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,0x8000ae0);
        }
        uVar5 = sym.__functional_dma_api_basic_test.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(uVar14,arg1,uVar1,0);
        mutex_unlock(unaff_x22);
        pcVar12 = "SUCCESS";
        if (uVar5 != 0) {
            pcVar12 = "FAIL";
        }
    }
    seq_printf(arg1,0x8001a72,pcVar12);
    iVar7 = *(arg1 + 0x80);
    pcVar12 = iVar7 + 0x38;
    aiStack_90[0] = 0x1000;
    aiStack_90[1] = 0x2000;
    aiStack_90[2] = 0x4000;
    aiStack_90[3] = 0x10000;
    aiStack_90[4] = 0;
    mutex_lock(pcVar12);
    piVar10 = *(iVar7 + 0x20);
    if (piVar10 == NULL) {
        mutex_unlock(pcVar12);
        unaff_x21 = 0xffffffed;
    }
    else {
        iVar7 = piVar10[0xe];
        if (iVar7 == 0) {
            iVar7 = *piVar10;
        }
        unaff_x22 = kstrdup(iVar7,0xcc0);
        mutex_unlock(pcVar12);
        if (unaff_x22 != 0) {
            iVar7 = 0;
            uVar9 = 0;
            iVar13 = 0x1000;
            uVar11 = sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt + -unaff_x25 >> 3 | -unaff_x25 << 0x3d;
            do {
                iVar15 = iVar7;
                if (iVar13 < 0x4000) {
                    pcVar12 = 0x80012ca;
                    if (iVar13 != 0x1000) {
                        if (iVar13 != 0x2000) goto code_r0x08005dd0;
                        pcVar12 = 0x8000c37;
                    }
                }
                else if (iVar13 == 0x4000) {
                    pcVar12 = 0x8001936;
                }
                else if (iVar13 == 0x10000) {
                    pcVar12 = 0x8001682;
                }
                else {
                    if (iVar13 != 0x100000) goto code_r0x08005dd4;
                    pcVar12 = 0x80018d6;
                }
code_r0x08005df0:
                _printk(0x8001706,unaff_x22,pcVar12);
                iVar7 = *(aiStack_90 + iVar15);
                if (iVar7 < 0x200000) {
                    if (iVar7 < 0x4000) {
                        pcVar12 = 0x80012ca;
                        if (iVar7 != 0x1000) {
                            if (iVar7 == 0x2000) {
                                pcVar12 = 0x8000c37;
                            }
                            else {
code_r0x08005ee8:
                                _printk(0x80014ff,"_size_to_string");
                                pcVar12 = "unknown size";
                            }
                        }
                    }
                    else if (iVar7 == 0x4000) {
                        pcVar12 = 0x8001936;
                    }
                    else if (iVar7 == 0x10000) {
                        pcVar12 = 0x8001682;
                    }
                    else {
                        if (iVar7 != 0x100000) goto code_r0x08005ee8;
                        pcVar12 = 0x80018d6;
                    }
                }
                else if (iVar7 < 0x1400000) {
                    if (iVar7 == 0x200000) {
                        pcVar12 = 0x8000bbd;
                    }
                    else {
                        if (iVar7 != 0xc00000) goto code_r0x08005ee8;
                        pcVar12 = 0x8001105;
                    }
                }
                else if (iVar7 == 0x1400000) {
                    pcVar12 = 0x8001a76;
                }
                else if (iVar7 == 0x1800000) {
                    pcVar12 = 0x80012cd;
                }
                else {
                    if (iVar7 != 0x2000000) goto code_r0x08005ee8;
                    pcVar12 = 0x8000c3a;
                }
                seq_printf(arg1,"Full VA sweep @%s:",pcVar12);
                iVar16 = *(arg1 + 0x80);
                uVar14 = *(aiStack_90 + iVar15);
                iVar7 = iVar16 + 0x38;
                mutex_lock(iVar7);
                iVar13 = sym.iommu_debug_switch_usecase(iVar16,*(iVar16 + 0x30));
                if (iVar13 == 0) {
                    mutex_unlock(iVar7);
                    iVar6 = -0x16;
                    pcVar12 = "FAIL";
                }
                else {
                    uVar1 = *(iVar16 + 0x20);
                    uVar2 = *(iVar16 + 0x28);
                    if (4 < uVar11) {
                        __cfi_slowpath_diag(0xc5fa2e84f2e1759c,
                                            sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,0x8000ae0);
                    }
                    iVar6 = sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(uVar1,arg1,uVar2,uVar14);
                    mutex_unlock(iVar7);
                    pcVar12 = "SUCCESS";
                    if (iVar6 != 0) {
                        pcVar12 = "FAIL";
                    }
                }
                seq_printf(arg1,0x8001a72,pcVar12);
                uVar14 = 0x80018bb;
                if (iVar6 != 0) {
                    uVar14 = 0x8001910;
                }
                pcVar12 = "  -> SUCCEEDED\n";
                if (iVar6 != 0) {
                    pcVar12 = "  -> FAILED\n";
                }
                _printk(uVar14,unaff_x22);
                seq_printf(arg1,pcVar12);
                if (iVar15 - 0x20U < 0xffffffffffffffd8) {
code_r0x08006700:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x8006704);
                    (*pcVar3)();
                }
                iVar7 = iVar15 + 8;
                if (iVar6 != 0) {
                    uVar9 = 0xffffffea;
                }
                iVar13 = *(aiStack_90 + iVar15 + 8);
                if (0x1fffff < iVar13) {
                    iVar15 = iVar7;
                    if (iVar13 < 0x1400000) {
                        if (iVar13 == 0x200000) {
                            pcVar12 = 0x8000bbd;
                        }
                        else {
                            if (iVar13 != 0xc00000) goto code_r0x08005dd4;
                            pcVar12 = 0x8001105;
                        }
                    }
                    else if (iVar13 == 0x1400000) {
                        pcVar12 = 0x8001a76;
                    }
                    else if (iVar13 == 0x1800000) {
                        pcVar12 = 0x80012cd;
                    }
                    else if (iVar13 == 0x2000000) {
                        pcVar12 = 0x8000c3a;
                    }
                    else {
code_r0x08005dd4:
                        _printk(0x80014ff,"_size_to_string");
                        pcVar12 = "unknown size";
                        iVar15 = iVar7;
                    }
                    goto code_r0x08005df0;
                }
            } while( true );
        }
        unaff_x21 = 0xfffffff4;
    }
    goto code_r0x08005c28;
code_r0x08005dd0:
    if (iVar13 != 0) goto code_r0x08005dd4;
    _printk(0x800133d,unaff_x22,0x80012ca);
    seq_printf(arg1,"bonus map:");
    iVar15 = *(arg1 + 0x80);
    iVar7 = iVar15 + 0x38;
    mutex_lock(iVar7);
    iVar13 = sym.iommu_debug_switch_usecase(iVar15,*(iVar15 + 0x30));
    if (iVar13 == 0) {
        mutex_unlock(iVar7);
        seq_printf(arg1,0x8001a72,"FAIL");
    }
    else {
        uVar14 = *(iVar15 + 0x20);
        uVar1 = *(iVar15 + 0x28);
        if (4 < uVar11) {
            __cfi_slowpath_diag(0xc5fa2e84f2e1759c,sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                                0x8000ae0);
        }
        iVar6 = sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(uVar14,arg1,uVar1,0x1000);
        mutex_unlock(iVar7);
        pcVar12 = "SUCCESS";
        if (iVar6 != 0) {
            pcVar12 = "FAIL";
        }
        seq_printf(arg1,0x8001a72,pcVar12);
        if (iVar6 == 0) {
            pcVar12 = "  -> SUCCEEDED\n";
            uVar14 = 0x80018bb;
            goto code_r0x08006140;
        }
    }
    uVar9 = 0xffffffea;
    pcVar12 = "  -> FAILED\n";
    uVar14 = 0x8001910;
code_r0x08006140:
    _printk(uVar14,unaff_x22);
    seq_printf(arg1,pcVar12);
    iVar7 = 0;
    iVar13 = 0x1000;
    do {
        iVar15 = iVar7;
        if (iVar13 < 0x4000) {
            pcVar12 = 0x80012ca;
            if (iVar13 != 0x1000) {
                if (iVar13 != 0x2000) break;
                pcVar12 = 0x8000c37;
            }
        }
        else if (iVar13 == 0x4000) {
            pcVar12 = 0x8001936;
        }
        else if (iVar13 == 0x10000) {
            pcVar12 = 0x8001682;
        }
        else {
            if (iVar13 != 0x100000) goto code_r0x08006260;
            pcVar12 = 0x80018d6;
        }
code_r0x0800627c:
        _printk(0x8001669,unaff_x22,pcVar12);
        iVar7 = *(aiStack_90 + iVar15);
        if (iVar7 < 0x200000) {
            if (iVar7 < 0x4000) {
                pcVar12 = 0x80012ca;
                if (iVar7 != 0x1000) {
                    if (iVar7 == 0x2000) {
                        pcVar12 = 0x8000c37;
                    }
                    else {
code_r0x08006374:
                        _printk(0x80014ff,"_size_to_string");
                        pcVar12 = "unknown size";
                    }
                }
            }
            else if (iVar7 == 0x4000) {
                pcVar12 = 0x8001936;
            }
            else if (iVar7 == 0x10000) {
                pcVar12 = 0x8001682;
            }
            else {
                if (iVar7 != 0x100000) goto code_r0x08006374;
                pcVar12 = 0x80018d6;
            }
        }
        else if (iVar7 < 0x1400000) {
            if (iVar7 == 0x200000) {
                pcVar12 = 0x8000bbd;
            }
            else {
                if (iVar7 != 0xc00000) goto code_r0x08006374;
                pcVar12 = 0x8001105;
            }
        }
        else if (iVar7 == 0x1400000) {
            pcVar12 = 0x8001a76;
        }
        else if (iVar7 == 0x1800000) {
            pcVar12 = 0x80012cd;
        }
        else {
            if (iVar7 != 0x2000000) goto code_r0x08006374;
            pcVar12 = 0x8000c3a;
        }
        seq_printf(arg1,"Rand VA sweep @%s:",pcVar12);
        iVar16 = *(arg1 + 0x80);
        uVar14 = *(aiStack_90 + iVar15);
        iVar7 = iVar16 + 0x38;
        mutex_lock(iVar7);
        iVar13 = sym.iommu_debug_switch_usecase(iVar16,*(iVar16 + 0x30));
        if (iVar13 == 0) {
            mutex_unlock(iVar7);
            iVar6 = -0x16;
            pcVar12 = "FAIL";
        }
        else {
            iVar6 = sym.__rand_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
                              (*(iVar16 + 0x20),arg1,*(iVar16 + 0x28),uVar14);
            mutex_unlock(iVar7);
            pcVar12 = "SUCCESS";
            if (iVar6 != 0) {
                pcVar12 = "FAIL";
            }
        }
        seq_printf(arg1,0x8001a72,pcVar12);
        uVar14 = 0x80018bb;
        if (iVar6 != 0) {
            uVar14 = 0x8001910;
        }
        pcVar12 = "  -> SUCCEEDED\n";
        if (iVar6 != 0) {
            pcVar12 = "  -> FAILED\n";
        }
        _printk(uVar14,unaff_x22);
        seq_printf(arg1,pcVar12);
        if (iVar15 - 0x20U < 0xffffffffffffffd8) goto code_r0x08006700;
        iVar7 = iVar15 + 8;
        if (iVar6 != 0) {
            uVar9 = 0xffffffea;
        }
        iVar13 = *(aiStack_90 + iVar15 + 8);
        if (0x1fffff < iVar13) {
            iVar15 = iVar7;
            if (iVar13 < 0x1400000) {
                if (iVar13 == 0x200000) {
                    pcVar12 = 0x8000bbd;
                }
                else {
                    if (iVar13 != 0xc00000) goto code_r0x08006260;
                    pcVar12 = 0x8001105;
                }
            }
            else if (iVar13 == 0x1400000) {
                pcVar12 = 0x8001a76;
            }
            else if (iVar13 == 0x1800000) {
                pcVar12 = 0x80012cd;
            }
            else if (iVar13 == 0x2000000) {
                pcVar12 = 0x8000c3a;
            }
            else {
code_r0x08006260:
                _printk(0x80014ff,"_size_to_string");
                pcVar12 = "unknown size";
                iVar15 = iVar7;
            }
            goto code_r0x0800627c;
        }
    } while( true );
    if (iVar13 != 0) goto code_r0x08006260;
    _printk(0x8000e05,unaff_x22,0x80012ca);
    seq_printf(arg1,"TLB stress sweep:");
    iVar15 = *(arg1 + 0x80);
    iVar7 = iVar15 + 0x38;
    mutex_lock(iVar7);
    iVar13 = sym.iommu_debug_switch_usecase(iVar15,*(iVar15 + 0x30));
    if (iVar13 == 0) {
        mutex_unlock(iVar7);
        seq_printf(arg1,0x8001a72,"FAIL");
code_r0x080065b8:
        unaff_x25 = NULL;
        pcVar12 = "  -> FAILED\n";
        uVar14 = 0x8001910;
    }
    else {
        iVar6 = sym.__tlb_stress_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt
                          (*(iVar15 + 0x20),arg1,*(iVar15 + 0x28),0);
        mutex_unlock(iVar7);
        pcVar12 = "SUCCESS";
        if (iVar6 != 0) {
            pcVar12 = "FAIL";
        }
        seq_printf(arg1,0x8001a72,pcVar12);
        if (iVar6 != 0) goto code_r0x080065b8;
        unaff_x25 = 0x1;
        pcVar12 = "  -> SUCCEEDED\n";
        uVar14 = 0x80018bb;
    }
    _printk(uVar14,unaff_x22);
    seq_printf(arg1,pcVar12);
    _printk(0x80013d9,unaff_x22);
    seq_printf(arg1,"second bonus map:");
    iVar15 = *(arg1 + 0x80);
    iVar7 = iVar15 + 0x38;
    mutex_lock(iVar7);
    iVar13 = sym.iommu_debug_switch_usecase(iVar15,*(iVar15 + 0x30));
    if (iVar13 == 0) {
        mutex_unlock(iVar7);
        seq_printf(arg1,0x8001a72,"FAIL");
    }
    else {
        uVar14 = *(iVar15 + 0x20);
        uVar1 = *(iVar15 + 0x28);
        if (4 < uVar11) {
            __cfi_slowpath_diag(0xc5fa2e84f2e1759c,sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt,
                                0x8000ae0);
        }
        iVar6 = sym.__full_va_sweep.4b68402ad213bdb4c8b66c66ec39e2e6.cfi_jt(uVar14,arg1,uVar1,0x1000);
        mutex_unlock(iVar7);
        pcVar12 = "SUCCESS";
        if (iVar6 != 0) {
            pcVar12 = "FAIL";
        }
        seq_printf(arg1,0x8001a72,pcVar12);
        if (iVar6 == 0) {
            uVar8 = 1;
            pcVar12 = "  -> SUCCEEDED\n";
            uVar14 = 0x80018bb;
            goto code_r0x080066d4;
        }
    }
    uVar8 = 0;
    pcVar12 = "  -> FAILED\n";
    uVar14 = 0x8001910;
code_r0x080066d4:
    if ((uVar8 & unaff_x25) == 0) {
        uVar9 = 0xffffffea;
    }
    unaff_x21 = uVar9;
    _printk(uVar14,unaff_x22);
    seq_printf(arg1,pcVar12);
    kfree(unaff_x22);
code_r0x08005c28:
    uVar4 = uVar5 | uVar4 | unaff_x21;
    unaff_x19 = arg1;
code_r0x08005c30:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == aiStack_90[5]) {
        return;
    }
    __stack_chk_fail(uVar4);
    __cfi_slowpath_diag(0xc5fa2e84f2e1759c,sym.__typeid__ZTSFiP6deviceP8seq_fileP12iommu_domainPvE_global_addr,
                        0x8000ae0);
    arg1 = unaff_x19;
    goto code_r0x08005ac0;
}


// ===== sym._size_to_string @ 0x080067d0 (size 300) =====

char * sym._size_to_string(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x200000) {
        if (arg1 < 0x4000) {
            if (arg1 == 0x1000) {
                return 0x80012ca;
            }
            if (arg1 == 0x2000) {
                return 0x8000c37;
            }
        }
        else {
            if (arg1 == 0x4000) {
                return 0x8001936;
            }
            if (arg1 == 0x10000) {
                return 0x8001682;
            }
            if (arg1 == 0x100000) {
                return 0x80018d6;
            }
        }
    }
    else if (arg1 < 0x1400000) {
        if (arg1 == 0x200000) {
            return 0x8000bbd;
        }
        if (arg1 == 0xc00000) {
            return 0x8001105;
        }
    }
    else {
        if (arg1 == 0x1400000) {
            return 0x8001a76;
        }
        if (arg1 == 0x1800000) {
            return 0x80012cd;
        }
        if (arg1 == 0x2000000) {
            return 0x8000c3a;
        }
    }
    *in_x18 = unaff_x30;
    _printk(0x80014ff,"_size_to_string");
    return "unknown size";
}


// ===== sym.__full_va_sweep @ 0x080068fc (size 1144) =====

uint sym.__full_va_sweep(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    uint uVar10;
    int64_t arg3_00;
    int iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = 0;
    if (0xfff < arg3 - 1U) {
        iVar4 = 0x40 - LZCOUNT(arg3 - 1U >> 0xc);
    }
    uVar6 = __get_free_pages(0xcc0,iVar4);
    if (uVar6 == 0) {
        if (arg3 < 0x2001) {
            uVar10 = 0xfffffff4;
        }
        else {
            iVar4 = ___ratelimit(obj.__full_va_sweep._rs,"__full_va_sweep");
            if (iVar4 == 0) {
                uVar10 = 0;
            }
            else {
                uVar9 = sym._size_to_string(arg3);
                _dev_err(arg1,"Failed to allocate %s of memory, which is a lot. Skipping test for this size\n",uVar9);
                uVar10 = 0;
            }
        }
    }
    else {
        iVar1 = (uVar6 << 8) >> 8;
        uVar7 = iVar1 + 0x8000000000;
        iVar3 = 0;
        uVar12 = 0;
        iVar11 = 0;
        iVar8 = uVar7 + _single_release;
        if (uVar7 >> 0x26 != 0) {
            iVar8 = iVar1 - _iommu_get_domain_for_dev;
        }
        iVar1 = (uVar7 >> 6 & 0x3ffffffffffffc0) - 0x200000000;
        do {
            uVar7 = 0x8100000U - arg3;
            if (uVar12 != 0x8000000) {
                uVar7 = is_vmalloc_addr(uVar6);
                if (((uVar7 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar9 = dev_driver_string(arg1);
                    iVar8 = *(arg1 + 0x70);
                    if (iVar8 == 0) {
                        iVar8 = *arg1;
                    }
                    __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar9,iVar8);
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8006a5c);
                    (*pcVar2)();
                }
                if ((uVar7 & 1) == 0) {
                    uVar7 = dma_map_page_attrs(arg1,iVar1,uVar6 & 0xfff,arg3,1,0);
                    if (uVar7 == uVar12) goto code_r0x08006a84;
                }
                else {
                    uVar7 = 0xffffffffffffffff;
                    if (uVar12 == 0xffffffffffffffff) {
code_r0x08006a84:
                        iVar11 = iVar11 + 1;
                        uVar7 = uVar12;
                        goto code_r0x080069d8;
                    }
                }
                iVar5 = ___ratelimit(obj.__full_va_sweep._rs.98,"__full_va_sweep");
                if (iVar5 != 0) {
                    _dev_err(arg1,"Unexpected iova on iter %d (expected: 0x%lx got: 0x%lx)\n",iVar3,uVar12,uVar7);
                }
                if (uVar7 == 0xffffffffffffffff) {
                    uVar10 = 0xffffffea;
                    goto code_r0x08006ce8;
                }
                dma_unmap_page_attrs(arg1,uVar7,arg3,1,0);
                goto code_r0x08006c34;
            }
code_r0x080069d8:
            uVar12 = uVar7 + arg3;
            iVar3 = iVar3 + 1;
        } while (uVar12 < 0xffffffff);
        if (arg2 != 0) {
            iVar3 = 0;
            uVar7 = 0;
            do {
                iVar5 = sym.__check_mapping(arg1,arg2,uVar7,iVar8);
                if (iVar5 != 0) {
                    iVar5 = ___ratelimit(obj.__full_va_sweep._rs.100,"__full_va_sweep");
                    if (iVar5 != 0) {
                        _dev_err(arg1,"iter: %d\n",iVar3);
                    }
                    goto code_r0x08006c34;
                }
                uVar7 = uVar7 + arg3;
                iVar3 = iVar3 + 1;
            } while (uVar7 < 0x600000);
            iVar3 = 0;
            uVar7 = 0;
            arg3_00 = 0x100000000 - arg3;
            do {
                iVar5 = sym.__check_mapping(arg1,arg2,arg3_00,iVar8);
                if (iVar5 != 0) {
                    iVar5 = ___ratelimit(obj.__full_va_sweep._rs.102,"__full_va_sweep");
                    if (iVar5 != 0) {
                        _dev_err(arg1,"iter: %d\n",iVar3);
                    }
                    goto code_r0x08006c34;
                }
                uVar7 = uVar7 + arg3;
                iVar3 = iVar3 + 1;
                arg3_00 = arg3_00 - arg3;
            } while (uVar7 < 0x600000);
        }
        uVar7 = is_vmalloc_addr(uVar6);
        if (((uVar7 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar9 = dev_driver_string(arg1);
            iVar8 = *(arg1 + 0x70);
            if (iVar8 == 0) {
                iVar8 = *arg1;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar9,iVar8);
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006ce0);
            (*pcVar2)();
        }
        if (((uVar7 & 1) == 0) && (iVar8 = dma_map_page_attrs(arg1,iVar1,uVar6 & 0xfff,arg3,1,0), iVar8 != -1)) {
            iVar3 = ___ratelimit(obj.__full_va_sweep._rs.103,"__full_va_sweep");
            if (iVar3 != 0) {
                _dev_err(arg1,"dma_map_single succeeded when it should have failed. Got iova: 0x%lx\n",iVar8);
            }
code_r0x08006c34:
            uVar10 = 0xffffffea;
        }
        else {
            uVar10 = 0;
        }
code_r0x08006ce8:
        uVar7 = 0;
        iVar11 = iVar11 + 1;
        do {
            iVar11 = iVar11 + -1;
            if (iVar11 == 0) break;
            uVar12 = 0x8100000U - arg3;
            if (uVar7 != 0x8000000) {
                dma_unmap_page_attrs(arg1,uVar7,arg3,1,0);
                uVar12 = uVar7;
            }
            uVar7 = uVar12 + arg3;
        } while (uVar7 < 0xffffffff);
        free_pages(uVar6,iVar4);
    }
    return uVar10;
}


// ===== sym.__rand_va_sweep @ 0x08006d74 (size 1116) =====

uint sym.__rand_va_sweep(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    uint uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    int iStack_64;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    if (0xfff < arg2 - 1U) {
        iVar3 = 0x40 - LZCOUNT(arg2 - 1U >> 0xc);
    }
    uVar6 = __get_free_pages(0xcc0,iVar3);
    if (uVar6 == 0) {
        if (arg2 < 0x2001) {
            uVar12 = 0xfffffff4;
        }
        else {
            iVar3 = ___ratelimit(obj.__rand_va_sweep._rs,"__rand_va_sweep");
            if (iVar3 == 0) {
                uVar12 = 0;
            }
            else {
                uVar8 = sym._size_to_string(arg2);
                _dev_err(arg1,"Failed to allocate %s of memory, which is a lot. Skipping test for this size\n",uVar8);
                uVar12 = 0;
            }
        }
    }
    else {
        iVar4 = 0;
        uVar13 = 0;
        iVar9 = (((uVar6 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
        iStack_64 = 0;
        do {
            uVar7 = 0x8100000U - arg2;
            if (uVar13 != 0x8000000) {
                uVar7 = is_vmalloc_addr(uVar6);
                if (((uVar7 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar8 = dev_driver_string(arg1);
                    iVar9 = *(arg1 + 0x70);
                    if (iVar9 == 0) {
                        iVar9 = *arg1;
                    }
                    __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar8,iVar9);
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8006ec8);
                    (*pcVar1)();
                }
                if (((uVar7 & 1) != 0) ||
                   (uVar7 = dma_map_page_attrs(arg1,iVar9,uVar6 & 0xfff,arg2,1,0), uVar7 == 0xffffffffffffffff)) {
                    iVar2 = ___ratelimit(obj.__rand_va_sweep._rs.109,"__rand_va_sweep");
                    if (iVar2 != 0) {
                        _dev_err(arg1,"Failed map on iter %d\n",iVar4);
                    }
                    goto code_r0x080070d8;
                }
                if (uVar7 != uVar13) {
                    dma_unmap_page_attrs(arg1,uVar7,arg2,1,0);
                    iVar4 = ___ratelimit(obj.__rand_va_sweep._rs.111,"__rand_va_sweep");
                    if (iVar4 != 0) {
                        _dev_err(arg1,"Unexpected dma_addr. got: %lx, expected: %lx\n",uVar7,uVar13);
                    }
                    goto code_r0x080070d8;
                }
                iStack_64 = iStack_64 + 1;
                uVar7 = uVar13;
            }
            uVar13 = uVar7 + arg2;
            iVar4 = iVar4 + 1;
        } while (uVar13 < 0xffffffff);
        uVar13 = arg2 << 1;
        if (uVar13 < 0xffffffffU - arg2) {
            iVar4 = 0;
            iVar10 = 2;
            iVar14 = 1;
            do {
                iVar11 = iVar10;
                uVar7 = 0x100000000 - (uVar13 + arg2);
                if (uVar13 == uVar7) {
                    __warn_printk("%s test needs update! The random number sequence is folding in on itself and should be changed.\n"
                                  ,"__rand_va_sweep");
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800718c);
                    (*pcVar1)();
                }
                if (uVar13 >> 0x14 != 0x80) {
                    dma_unmap_page_attrs(arg1,uVar13,arg2,1,0);
                }
                if (0xfffff < (uVar13 + arg2) - 0xf7f00001) {
                    dma_unmap_page_attrs(arg1,uVar7,arg2,1,0);
                }
                iVar10 = iVar11 + iVar14;
                iVar4 = iVar4 + 2;
                uVar13 = iVar10 * arg2;
                iVar14 = iVar11;
            } while (uVar13 < 0xffffffffU - arg2);
        }
        else {
            iVar4 = 0;
        }
        iVar2 = 0;
        while( true ) {
            uVar13 = is_vmalloc_addr(uVar6);
            if (((uVar13 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                obj.dma_map_single_attrs.__already_done = 0x1;
                uVar8 = dev_driver_string(arg1);
                iVar9 = *(arg1 + 0x70);
                if (iVar9 == 0) {
                    iVar9 = *arg1;
                }
                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar8,iVar9);
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x8007060);
                (*pcVar1)();
            }
            if (((uVar13 & 1) != 0) ||
               (iVar10 = dma_map_page_attrs(arg1,iVar9,uVar6 & 0xfff,arg2,1,0), iVar10 == -1)) break;
            iVar2 = iVar2 + 1;
        }
        if (iVar4 == iVar2) {
            uVar12 = 0;
        }
        else {
            iVar5 = ___ratelimit(obj.__rand_va_sweep._rs.114,"__rand_va_sweep");
            if (iVar5 != 0) {
                _dev_err(arg1,"Unexpected random remap count! Unmapped %d but remapped %d\n",iVar4,iVar2);
            }
code_r0x080070d8:
            uVar12 = 0xffffffea;
        }
        uVar13 = 0;
        iStack_64 = iStack_64 + 1;
        do {
            iStack_64 = iStack_64 + -1;
            if (iStack_64 == 0) break;
            uVar7 = 0x8100000U - arg2;
            if (uVar13 != 0x8000000) {
                dma_unmap_page_attrs(arg1,uVar13,arg2,1,0);
                uVar7 = uVar13;
            }
            uVar13 = uVar7 + arg2;
        } while (uVar13 < 0xffffffff);
        free_pages(uVar6,iVar3);
    }
    return uVar12;
}


// ===== sym.__tlb_stress_sweep @ 0x080071d0 (size 1480) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.__tlb_stress_sweep(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    uint64_t in_x2;
    char *pcVar11;
    uint64_t in_x3;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    int64_t arg1_00;
    ulong uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    int64_t *piVar20;
    uint64_t unaff_x25;
    uint64_t uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint64_t *puStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    ulong uStack_140;
    uint64_t uStack_138;
    ulong uStack_130;
    uint64_t uStack_128;
    ulong uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    int64_t iStack_f8;
    uint64_t uStack_f0;
    uint uStack_e8;
    uint32_t uStack_e4;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    uStack_70 = 0;
    auVar22 = __get_free_pages(0xcc0,1);
    uVar3 = auVar22._8_8_;
    uVar5 = auVar22._0_8_;
    uVar18 = 0;
    uVar19 = 0;
    uVar21 = 0;
    uVar15 = uVar5 & 0xfff;
    iVar13 = (((uVar5 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
    do {
        if (uVar19 != 0x8000000) {
            uVar3 = is_vmalloc_addr(uVar5,uVar3);
            unaff_x25 = uVar3 & 0xffffffff;
            if (((uVar3 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                obj.dma_map_single_attrs.__already_done = 0x1;
                uVar17 = dev_driver_string(arg1);
                iVar13 = *(arg1 + 0x70);
                if (iVar13 == 0) {
                    iVar13 = *arg1;
                }
                __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x8007308);
                (*pcVar1)();
            }
            if ((uVar3 & 1) == 0) {
                in_x3 = 0x2000;
                in_x2 = uVar15;
                uVar3 = dma_map_page_attrs(arg1,iVar13,uVar15,0x2000,1,0);
                uStack_70 = uVar3;
                if (uVar3 == 0xffffffffffffffff) goto code_r0x08007314;
                if (uVar3 == uVar19) {
                    uVar21 = uVar21 + 1;
                    uVar16 = uVar19;
                    goto code_r0x0800725c;
                }
                uVar15 = 0x2000;
                in_x3 = 1;
                dma_unmap_page_attrs(arg1);
                pcVar1 = obj.__tlb_stress_sweep._rs.116;
            }
            else {
                uStack_70 = 0xffffffffffffffff;
code_r0x08007314:
                uVar15 = in_x2;
                pcVar1 = obj.__tlb_stress_sweep._rs;
            }
            iVar2 = ___ratelimit(pcVar1,"__tlb_stress_sweep");
            if (iVar2 != 0) {
                uVar15 = uVar18;
                _dev_err(arg1,"Failed map on iter %d\n");
            }
            goto code_r0x080073bc;
        }
        uVar16 = 0x80fe000;
code_r0x0800725c:
        uVar19 = uVar16 + 0x2000;
        uVar18 = uVar18 + 1;
    } while (uVar16 < 0xffffdfff);
    uVar19 = is_vmalloc_addr(uVar5,uVar3);
    if (((uVar19 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar17 = dev_driver_string(arg1);
        iVar13 = *(arg1 + 0x70);
        if (iVar13 == 0) {
            iVar13 = *arg1;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8007414);
        (*pcVar1)();
    }
    if ((uVar19 & 1) == 0) {
        in_x3 = 0x1000;
        uVar19 = uVar15;
        iVar4 = dma_map_page_attrs(arg1,iVar13,uVar15,0x1000,1,0);
        if (iVar4 == -1) goto code_r0x08007418;
        iVar2 = ___ratelimit(obj.__tlb_stress_sweep._rs.117,"__tlb_stress_sweep");
        uVar15 = uVar19;
        if (iVar2 != 0) {
            pcVar11 = "dma_map_single unexpectedly (VA should have been exhausted)\n";
code_r0x08007384:
            _dev_err(arg1,pcVar11);
        }
code_r0x080073bc:
        uVar3 = 0;
        uVar16 = 0xffffffea;
        uVar19 = uVar15;
    }
    else {
code_r0x08007418:
        dma_unmap_page_attrs(arg1,0,0x1000,1,0);
        dma_unmap_page_attrs(arg1,0x2000,0x1000,1,0);
        dma_unmap_page_attrs(arg1,0x3000,0x1000,1,0);
        uVar19 = is_vmalloc_addr(uVar5);
        if (((uVar19 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar17 = dev_driver_string(arg1);
            iVar13 = *(arg1 + 0x70);
            if (iVar13 == 0) {
                iVar13 = *arg1;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x80074c0);
            (*pcVar1)();
        }
        if ((uVar19 & 1) == 0) {
            uStack_70 = dma_map_page_attrs(arg1,iVar13,uVar15,0x2000,1,0);
            if (uStack_70 == 0x2000) {
                uVar19 = is_vmalloc_addr(uVar5);
                if (((uVar19 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar17 = dev_driver_string(arg1);
                    iVar13 = *(arg1 + 0x70);
                    if (iVar13 == 0) {
                        iVar13 = *arg1;
                    }
                    __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x80075c8);
                    (*pcVar1)();
                }
                if ((uVar19 & 1) == 0) {
                    in_x3 = 0x1000;
                    uVar19 = uVar15;
                    uStack_70 = dma_map_page_attrs(arg1,iVar13,uVar15,0x1000,1,0);
                    if (uStack_70 == 0) {
                        uVar3 = is_vmalloc_addr(uVar5);
                        if (((uVar3 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                            obj.dma_map_single_attrs.__already_done = 0x1;
                            uVar17 = dev_driver_string(arg1);
                            iVar13 = *(arg1 + 0x70);
                            if (iVar13 == 0) {
                                iVar13 = *arg1;
                            }
                            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar13);
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x800,0x8007784);
                            (*pcVar1)();
                        }
                        if ((uVar3 & 1) == 0) {
                            in_x3 = 0x1000;
                            iVar13 = dma_map_page_attrs(arg1,iVar13,uVar15,0x1000,1,0);
                            uVar19 = uVar15;
                            if (iVar13 != -1) {
                                iVar2 = ___ratelimit(obj.__tlb_stress_sweep._rs.122,"__tlb_stress_sweep");
                                if (iVar2 != 0) {
                                    pcVar11 = 
                                    "dma_map_single unexpectedly after remaps (VA should have been exhausted)\n";
                                    goto code_r0x08007384;
                                }
                                goto code_r0x080073bc;
                            }
                        }
                        uVar16 = 0;
                        uVar3 = 0;
                        goto code_r0x08007630;
                    }
                }
                else {
                    uStack_70 = 0xffffffffffffffff;
                }
                uStack_78 = 0;
                iVar2 = ___ratelimit(obj.__tlb_stress_sweep._rs.121,"__tlb_stress_sweep");
                if (iVar2 != 0) {
                    _dev_err(arg1,"Unexpected dma_addr. got: %pa expected: %pa\n",&uStack_70,&uStack_78);
                }
                uVar19 = 0x1000;
                in_x3 = 1;
                dma_unmap_page_attrs(arg1,0x1000,0x1000,1,0);
                uVar21 = uVar21 - 1;
                uVar16 = 0xffffffea;
                uVar3 = 0x2000;
                goto code_r0x08007630;
            }
        }
        else {
            uStack_70 = 0xffffffffffffffff;
        }
        uStack_78 = 0x2000;
        iVar2 = ___ratelimit(obj.__tlb_stress_sweep._rs.119,"__tlb_stress_sweep");
        if (iVar2 != 0) {
            _dev_err(arg1,"Unexpected dma_addr. got: %pa expected: %pa\n",&uStack_70,&uStack_78);
        }
        dma_unmap_page_attrs(arg1,0x1000,0x1000,1,0);
        uVar19 = 0x1000;
        in_x3 = 1;
        dma_unmap_page_attrs(arg1,0x3000,0x1000,1,0);
        uVar21 = uVar21 - 2;
        uVar16 = 0xffffffea;
        uVar3 = 0x4000;
    }
code_r0x08007630:
    uVar15 = uVar21 + 1;
    do {
        uVar18 = uVar15 - 1;
        uVar15 = uVar18;
        if (uVar18 == 0) break;
        uVar12 = 0x80fe000;
        if (uVar3 != 0x8000000) {
            uVar19 = 0x2000;
            in_x3 = 1;
            dma_unmap_page_attrs(arg1,uVar3,0x2000,1,0);
            uVar12 = uVar3;
        }
        uVar3 = uVar12 + 0x2000;
    } while (uVar12 < 0xffffdfff);
    free_pages(uVar5,1);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return uVar16;
    }
    auVar22 = __stack_chk_fail();
    uVar12 = auVar22._8_8_;
    iVar4 = auVar22._0_8_;
    *extraout_x18 = sym.__check_mapping;
    pcStack_b8 = sym.__check_mapping;
    iVar13 = sp_el0;
    iStack_c8 = *(iVar13 + 0x5e0);
    uStack_d8 = in_x3;
    uStack_d0 = uVar19;
    puStack_c0 = &stack0xffffffffffffffa0;
    uStack_b0 = uVar15;
    uStack_a0 = uVar3;
    uStack_98 = uVar16;
    uStack_90 = uVar5;
    iStack_88 = arg1;
    if ((*(iVar4 + 0x340) == 0) || (iVar13 = *(*(iVar4 + 0x340) + 0x40), iVar13 == 0)) {
        iVar2 = ___ratelimit(obj.__check_mapping._rs,"__check_mapping");
        if (iVar2 != 0) {
            _dev_err(iVar4,"No fwspec.\n");
        }
    }
    else {
        uStack_e4 = *(iVar13 + 0x18);
        uStack_e8 = 0;
        uStack_f0 = uVar19;
        uVar15 = qcom_iommu_iova_to_phys_hard(uVar12,&uStack_f0);
        uStack_e0 = uVar15;
        uVar5 = iommu_iova_to_phys(uVar12,uVar19);
        if (uVar15 != uVar5) {
            __warn_printk("hard/soft iova_to_phys fns don\'t agree...");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800786c);
            (*pcVar1)();
        }
        uVar5 = in_x3;
        uVar16 = uVar19;
        uVar3 = uVar12;
        if (uVar15 == in_x3) {
            uVar19 = 0;
            goto code_r0x08007890;
        }
        iVar2 = ___ratelimit(obj.__check_mapping._rs.107,"__check_mapping");
        if (iVar2 != 0) {
            _dev_err(iVar4,"Bad translation for %pa! Expected: %pa Got: %pa\n",&uStack_d0,&uStack_d8,&uStack_e0);
        }
    }
    uVar19 = 0xffffffea;
code_r0x08007890:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_c8) {
        return uVar19;
    }
    iVar6 = __stack_chk_fail(uVar19);
    *extraout_x18_00 = sym.iommu_debug_profiling_show;
    pcStack_148 = sym.iommu_debug_profiling_show;
    uStack_140 = 0x8000000;
    uStack_130 = 0xffffdfff;
    uStack_120 = 0x8000000;
    iVar13 = sp_el0;
    iStack_158 = *(iVar13 + 0x5e0);
    arg1_00 = *(iVar6 + 0x80);
    uStack_178 = *0x8002ac0;
    uStack_170 = *0x8002ac8;
    uStack_168 = *0x8002ad0;
    uStack_160 = *0x8002ad8;
    iStack_198 = *0x8002aa0;
    uStack_190 = *0x8002aa8;
    uStack_188 = *0x8002ab0;
    uStack_180 = *0x8002ab8;
    ppuStack_150 = &puStack_c0;
    uStack_138 = uVar21;
    uStack_128 = unaff_x25;
    uStack_118 = uVar15;
    uStack_110 = uVar3;
    uStack_108 = uVar16;
    uStack_100 = uVar5;
    iStack_f8 = iVar4;
    mutex_lock();
    iVar13 = sym.iommu_debug_switch_usecase(arg1_00,*(arg1_00 + 0x30));
    if (iVar13 != 0) {
        uVar17 = *(arg1_00 + 0x28);
        piVar20 = &iStack_198;
        seq_printf(iVar6,"(average over %d iterations)\n",*(arg1_00 + 0x90));
        seq_printf(iVar6,"%8s %19s %16s\n","size","iommu_map","iommu_unmap");
        iVar13 = 0x1000;
        do {
            uVar19 = 0;
            if (iVar13 + -1 != 0) {
                uVar19 = ~(-1L << (-LZCOUNT(iVar13 + -1) & 0x3fU));
            }
            if (*(arg1_00 + 0x90) == 0) {
                uVar15 = 0;
                uVar5 = 0;
                uVar19 = 0;
                if (iVar13 < 0x200000) goto code_r0x08007b08;
code_r0x08007b44:
                if (iVar13 < 0x1400000) {
                    if (iVar13 == 0x200000) {
                        pcVar11 = 0x8000bbd;
                    }
                    else {
                        if (iVar13 != 0xc00000) goto code_r0x08007bf0;
                        pcVar11 = 0x8001105;
                    }
                }
                else if (iVar13 == 0x1400000) {
                    pcVar11 = 0x8001a76;
                }
                else if (iVar13 == 0x1800000) {
                    pcVar11 = 0x80012cd;
                }
                else {
                    if (iVar13 != 0x2000000) goto code_r0x08007bf0;
                    pcVar11 = 0x8000c3a;
                }
            }
            else {
                uVar18 = 0;
                uVar5 = 0;
                uVar15 = 0;
                uVar3 = uVar19 + 0x10000 & (uVar19 ^ 0xffffffffffffffff);
                do {
                    iVar4 = ktime_get();
                    iVar2 = iommu_map(uVar17,uVar3,iVar13 + 0x7fffffffU & -iVar13,iVar13,3);
                    if (iVar2 == 0) {
                        iVar7 = ktime_get();
                        uVar15 = (iVar7 - iVar4) + uVar15;
                        iVar4 = ktime_get();
                        iVar7 = iommu_unmap(uVar17,uVar3,iVar13);
                        if (iVar7 == iVar13) {
                            iVar7 = ktime_get();
                            uVar5 = (uVar5 - iVar4) + iVar7;
                        }
                        else {
                            seq_printf(iVar6,"Only unmapped %zx instead of %zx\n",iVar7,iVar13);
                        }
                    }
                    else {
                        seq_puts(iVar6,"Failed to map\n");
                    }
                    uVar19 = *(arg1_00 + 0x90);
                    uVar18 = uVar18 + 1;
                } while (uVar18 < *(arg1_00 + 0x90));
                if (0x1fffff < iVar13) goto code_r0x08007b44;
code_r0x08007b08:
                if (iVar13 < 0x4000) {
                    pcVar11 = 0x80012ca;
                    if (iVar13 == 0x1000) goto code_r0x080079bc;
                    if (iVar13 == 0x2000) {
                        pcVar11 = 0x8000c37;
                        goto code_r0x080079bc;
                    }
code_r0x08007bf0:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar11 = "unknown size";
                }
                else if (iVar13 == 0x4000) {
                    pcVar11 = 0x8001936;
                }
                else if (iVar13 == 0x10000) {
                    pcVar11 = 0x8001682;
                }
                else {
                    if (iVar13 != 0x100000) goto code_r0x08007bf0;
                    pcVar11 = 0x80018d6;
                }
            }
code_r0x080079bc:
            uVar3 = 0;
            if (uVar19 != 0) {
                uVar3 = uVar15 / uVar19;
            }
            uVar15 = 0;
            if (uVar19 != 0) {
                uVar15 = uVar5 / uVar19;
            }
            seq_printf(iVar6,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar11,uVar3 / 1000,
                       uVar3 + (uVar3 / 1000) * -1000,uVar15 / 1000,uVar15 + (uVar15 / 1000) * -1000);
            piVar20 = piVar20 + 1;
            iVar13 = *piVar20;
        } while (iVar13 != 0);
        piVar20 = &iStack_198;
        seq_putc(iVar6,10);
        seq_printf(iVar6,"%8s %19s %16s\n","size","iommu_map_sg","iommu_unmap");
        iVar13 = 0x1000;
        do {
            puStack_1a8 = NULL;
            uStack_1a0 = 0;
            uVar19 = 0;
            if (iVar13 + -1 != 0) {
                uVar19 = ~(-1L << (-LZCOUNT(iVar13 + -1) & 0x3fU));
            }
            iVar2 = sym.iommu_debug_build_phoney_sg_table(&puStack_1a8,iVar13);
            if (iVar2 != 0) {
                seq_puts(iVar6,"couldn\'t build phoney sg table! bailing...\n");
                break;
            }
            if (*(arg1_00 + 0x90) == 0) {
                uVar15 = 0;
                uVar5 = 0;
                uVar18 = 0;
                if (0x1fffff < iVar13) goto code_r0x08007d34;
code_r0x08007d84:
                if (iVar13 < 0x4000) {
                    pcVar11 = 0x80012ca;
                    if (iVar13 != 0x1000) {
                        if (iVar13 != 0x2000) goto code_r0x08007eec;
                        pcVar11 = 0x8000c37;
                    }
                }
                else if (iVar13 == 0x4000) {
                    pcVar11 = 0x8001936;
                }
                else if (iVar13 == 0x10000) {
                    pcVar11 = 0x8001682;
                }
                else {
                    if (iVar13 != 0x100000) goto code_r0x08007eec;
                    pcVar11 = 0x80018d6;
                }
            }
            else {
                uVar14 = 0;
                uVar5 = 0;
                uVar15 = 0;
                uVar19 = uVar19 + 0x10000 & (uVar19 ^ 0xffffffffffffffff);
                do {
                    iVar4 = ktime_get();
                    iVar7 = iommu_map_sg(uVar17,uVar19,puStack_1a8,uStack_1a0._4_4_,3);
                    if (iVar7 != iVar13) {
                        seq_puts(iVar6,"Failed to map_sg\n");
                        goto code_r0x08007eac;
                    }
                    iVar7 = ktime_get();
                    iVar8 = ktime_get();
                    iVar9 = iommu_unmap(uVar17,uVar19,iVar13);
                    if (iVar9 != iVar13) {
                        seq_printf(iVar6,"Only unmapped %zx instead of %zx\n",iVar9,iVar13);
                        goto code_r0x08007eac;
                    }
                    uVar15 = iVar7 + (uVar15 - iVar4);
                    iVar4 = ktime_get();
                    uVar18 = *(arg1_00 + 0x90);
                    uVar5 = iVar4 + (uVar5 - iVar8);
                    uVar14 = uVar14 + 1;
                } while (uVar14 < uVar18);
                if (iVar13 < 0x200000) goto code_r0x08007d84;
code_r0x08007d34:
                if (iVar13 < 0x1400000) {
                    if (iVar13 == 0x200000) {
                        pcVar11 = 0x8000bbd;
                        goto code_r0x08007e5c;
                    }
                    if (iVar13 == 0xc00000) {
                        pcVar11 = 0x8001105;
                        goto code_r0x08007e5c;
                    }
code_r0x08007eec:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar11 = "unknown size";
                }
                else if (iVar13 == 0x1400000) {
                    pcVar11 = 0x8001a76;
                }
                else if (iVar13 == 0x1800000) {
                    pcVar11 = 0x80012cd;
                }
                else {
                    if (iVar13 != 0x2000000) goto code_r0x08007eec;
                    pcVar11 = 0x8000c3a;
                }
            }
code_r0x08007e5c:
            uVar3 = uVar18;
            uVar19 = 0;
            if (uVar3 != 0) {
                uVar19 = uVar15 / uVar3;
            }
            uVar15 = 0;
            if (uVar3 != 0) {
                uVar15 = uVar5 / uVar3;
            }
            seq_printf(iVar6,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar11,uVar19 / 1000,
                       uVar19 + (uVar19 / 1000) * -1000,uVar15 / 1000,uVar15 + (uVar15 / 1000) * -1000);
code_r0x08007eac:
            if (uStack_1a0 != 0) {
                uVar18 = 0;
                puVar10 = puStack_1a8;
                do {
                    __free_pages(*puVar10 & 0xfffffffffffffffc,0);
                    uVar18 = uVar18 + 1;
                    puVar10 = sg_next(puVar10);
                } while (uVar18 < uStack_1a0);
            }
            sg_free_table(&puStack_1a8);
            piVar20 = piVar20 + 1;
            iVar13 = *piVar20;
        } while (iVar13 != 0);
    }
    mutex_unlock(arg1_00 + 0x38);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_158) {
        __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return 0;
}


// ===== sym.__check_mapping @ 0x08007798 (size 336) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.__check_mapping(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t *puVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar12;
    uint64_t uVar13;
    int64_t arg1_00;
    uint64_t uVar14;
    int64_t *piVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    uint64_t *puStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_70;
    uint uStack_68;
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    iStack_58 = arg4;
    iStack_50 = arg3;
    if ((*(arg1 + 0x340) == 0) || (iVar11 = *(*(arg1 + 0x340) + 0x40), iVar11 == 0)) {
        iVar2 = ___ratelimit(obj.__check_mapping._rs,"__check_mapping");
        if (iVar2 != 0) {
            _dev_err(arg1,"No fwspec.\n");
        }
    }
    else {
        uStack_64 = *(iVar11 + 0x18);
        uStack_68 = 0;
        iStack_70 = arg3;
        iVar11 = qcom_iommu_iova_to_phys_hard(arg2,&iStack_70);
        iStack_60 = iVar11;
        iVar3 = iommu_iova_to_phys(arg2,arg3);
        if (iVar11 != iVar3) {
            __warn_printk("hard/soft iova_to_phys fns don\'t agree...");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800786c);
            (*pcVar1)();
        }
        if (iVar11 == arg4) {
            uVar4 = 0;
            goto code_r0x08007890;
        }
        iVar2 = ___ratelimit(obj.__check_mapping._rs.107,"__check_mapping");
        if (iVar2 != 0) {
            _dev_err(arg1,"Bad translation for %pa! Expected: %pa Got: %pa\n",&iStack_50,&iStack_58,&iStack_60);
        }
    }
    uVar4 = 0xffffffea;
code_r0x08007890:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.iommu_debug_profiling_show;
    pcStack_c8 = sym.iommu_debug_profiling_show;
    iVar11 = sp_el0;
    iStack_d8 = *(iVar11 + 0x5e0);
    arg1_00 = *(iVar3 + 0x80);
    uStack_f8 = *0x8002ac0;
    uStack_f0 = *0x8002ac8;
    uStack_e8 = *0x8002ad0;
    uStack_e0 = *0x8002ad8;
    iStack_118 = *0x8002aa0;
    uStack_110 = *0x8002aa8;
    uStack_108 = *0x8002ab0;
    uStack_100 = *0x8002ab8;
    puStack_d0 = &stack0xffffffffffffffc0;
    mutex_lock();
    iVar11 = sym.iommu_debug_switch_usecase(arg1_00,*(arg1_00 + 0x30));
    if (iVar11 != 0) {
        uVar4 = *(arg1_00 + 0x28);
        piVar15 = &iStack_118;
        seq_printf(iVar3,"(average over %d iterations)\n",*(arg1_00 + 0x90));
        seq_printf(iVar3,"%8s %19s %16s\n","size","iommu_map","iommu_unmap");
        iVar11 = 0x1000;
        do {
            uVar13 = 0;
            if (iVar11 + -1 != 0) {
                uVar13 = ~(-1L << (-LZCOUNT(iVar11 + -1) & 0x3fU));
            }
            if (*(arg1_00 + 0x90) == 0) {
                uVar17 = 0;
                uVar14 = 0;
                uVar13 = 0;
                if (iVar11 < 0x200000) goto code_r0x08007b08;
code_r0x08007b44:
                if (iVar11 < 0x1400000) {
                    if (iVar11 == 0x200000) {
                        pcVar10 = 0x8000bbd;
                    }
                    else {
                        if (iVar11 != 0xc00000) goto code_r0x08007bf0;
                        pcVar10 = 0x8001105;
                    }
                }
                else if (iVar11 == 0x1400000) {
                    pcVar10 = 0x8001a76;
                }
                else if (iVar11 == 0x1800000) {
                    pcVar10 = 0x80012cd;
                }
                else {
                    if (iVar11 != 0x2000000) goto code_r0x08007bf0;
                    pcVar10 = 0x8000c3a;
                }
            }
            else {
                uVar18 = 0;
                uVar14 = 0;
                uVar17 = 0;
                uVar16 = uVar13 + 0x10000 & (uVar13 ^ 0xffffffffffffffff);
                do {
                    iVar5 = ktime_get();
                    iVar2 = iommu_map(uVar4,uVar16,iVar11 + 0x7fffffffU & -iVar11,iVar11,3);
                    if (iVar2 == 0) {
                        iVar6 = ktime_get();
                        uVar17 = (iVar6 - iVar5) + uVar17;
                        iVar5 = ktime_get();
                        iVar6 = iommu_unmap(uVar4,uVar16,iVar11);
                        if (iVar6 == iVar11) {
                            iVar6 = ktime_get();
                            uVar14 = (uVar14 - iVar5) + iVar6;
                        }
                        else {
                            seq_printf(iVar3,"Only unmapped %zx instead of %zx\n",iVar6,iVar11);
                        }
                    }
                    else {
                        seq_puts(iVar3,"Failed to map\n");
                    }
                    uVar13 = *(arg1_00 + 0x90);
                    uVar18 = uVar18 + 1;
                } while (uVar18 < *(arg1_00 + 0x90));
                if (0x1fffff < iVar11) goto code_r0x08007b44;
code_r0x08007b08:
                if (iVar11 < 0x4000) {
                    pcVar10 = 0x80012ca;
                    if (iVar11 == 0x1000) goto code_r0x080079bc;
                    if (iVar11 == 0x2000) {
                        pcVar10 = 0x8000c37;
                        goto code_r0x080079bc;
                    }
code_r0x08007bf0:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar10 = "unknown size";
                }
                else if (iVar11 == 0x4000) {
                    pcVar10 = 0x8001936;
                }
                else if (iVar11 == 0x10000) {
                    pcVar10 = 0x8001682;
                }
                else {
                    if (iVar11 != 0x100000) goto code_r0x08007bf0;
                    pcVar10 = 0x80018d6;
                }
            }
code_r0x080079bc:
            uVar16 = 0;
            if (uVar13 != 0) {
                uVar16 = uVar17 / uVar13;
            }
            uVar17 = 0;
            if (uVar13 != 0) {
                uVar17 = uVar14 / uVar13;
            }
            seq_printf(iVar3,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar10,uVar16 / 1000,
                       uVar16 + (uVar16 / 1000) * -1000,uVar17 / 1000,uVar17 + (uVar17 / 1000) * -1000);
            piVar15 = piVar15 + 1;
            iVar11 = *piVar15;
        } while (iVar11 != 0);
        piVar15 = &iStack_118;
        seq_putc(iVar3,10);
        seq_printf(iVar3,"%8s %19s %16s\n","size","iommu_map_sg","iommu_unmap");
        iVar11 = 0x1000;
        do {
            puStack_128 = NULL;
            uStack_120 = 0;
            uVar13 = 0;
            if (iVar11 + -1 != 0) {
                uVar13 = ~(-1L << (-LZCOUNT(iVar11 + -1) & 0x3fU));
            }
            iVar2 = sym.iommu_debug_build_phoney_sg_table(&puStack_128,iVar11);
            if (iVar2 != 0) {
                seq_puts(iVar3,"couldn\'t build phoney sg table! bailing...\n");
                break;
            }
            if (*(arg1_00 + 0x90) == 0) {
                uVar17 = 0;
                uVar14 = 0;
                uVar18 = 0;
                if (0x1fffff < iVar11) goto code_r0x08007d34;
code_r0x08007d84:
                if (iVar11 < 0x4000) {
                    pcVar10 = 0x80012ca;
                    if (iVar11 != 0x1000) {
                        if (iVar11 != 0x2000) goto code_r0x08007eec;
                        pcVar10 = 0x8000c37;
                    }
                }
                else if (iVar11 == 0x4000) {
                    pcVar10 = 0x8001936;
                }
                else if (iVar11 == 0x10000) {
                    pcVar10 = 0x8001682;
                }
                else {
                    if (iVar11 != 0x100000) goto code_r0x08007eec;
                    pcVar10 = 0x80018d6;
                }
            }
            else {
                uVar12 = 0;
                uVar14 = 0;
                uVar17 = 0;
                uVar13 = uVar13 + 0x10000 & (uVar13 ^ 0xffffffffffffffff);
                do {
                    iVar5 = ktime_get();
                    iVar6 = iommu_map_sg(uVar4,uVar13,puStack_128,uStack_120._4_4_,3);
                    if (iVar6 != iVar11) {
                        seq_puts(iVar3,"Failed to map_sg\n");
                        goto code_r0x08007eac;
                    }
                    iVar6 = ktime_get();
                    iVar7 = ktime_get();
                    iVar8 = iommu_unmap(uVar4,uVar13,iVar11);
                    if (iVar8 != iVar11) {
                        seq_printf(iVar3,"Only unmapped %zx instead of %zx\n",iVar8,iVar11);
                        goto code_r0x08007eac;
                    }
                    uVar17 = iVar6 + (uVar17 - iVar5);
                    iVar5 = ktime_get();
                    uVar18 = *(arg1_00 + 0x90);
                    uVar14 = iVar5 + (uVar14 - iVar7);
                    uVar12 = uVar12 + 1;
                } while (uVar12 < uVar18);
                if (iVar11 < 0x200000) goto code_r0x08007d84;
code_r0x08007d34:
                if (iVar11 < 0x1400000) {
                    if (iVar11 == 0x200000) {
                        pcVar10 = 0x8000bbd;
                        goto code_r0x08007e5c;
                    }
                    if (iVar11 == 0xc00000) {
                        pcVar10 = 0x8001105;
                        goto code_r0x08007e5c;
                    }
code_r0x08007eec:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar10 = "unknown size";
                }
                else if (iVar11 == 0x1400000) {
                    pcVar10 = 0x8001a76;
                }
                else if (iVar11 == 0x1800000) {
                    pcVar10 = 0x80012cd;
                }
                else {
                    if (iVar11 != 0x2000000) goto code_r0x08007eec;
                    pcVar10 = 0x8000c3a;
                }
            }
code_r0x08007e5c:
            uVar16 = uVar18;
            uVar13 = 0;
            if (uVar16 != 0) {
                uVar13 = uVar17 / uVar16;
            }
            uVar17 = 0;
            if (uVar16 != 0) {
                uVar17 = uVar14 / uVar16;
            }
            seq_printf(iVar3,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar10,uVar13 / 1000,
                       uVar13 + (uVar13 / 1000) * -1000,uVar17 / 1000,uVar17 + (uVar17 / 1000) * -1000);
code_r0x08007eac:
            if (uStack_120 != 0) {
                uVar18 = 0;
                puVar9 = puStack_128;
                do {
                    __free_pages(*puVar9 & 0xfffffffffffffffc,0);
                    uVar18 = uVar18 + 1;
                    puVar9 = sg_next(puVar9);
                } while (uVar18 < uStack_120);
            }
            sg_free_table(&puStack_128);
            piVar15 = piVar15 + 1;
            iVar11 = *piVar15;
        } while (iVar11 != 0);
    }
    mutex_unlock(arg1_00 + 0x38);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_d8) {
        __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return 0;
}


// ===== sym.iommu_debug_profiling_show @ 0x080078e8 (size 1664) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.iommu_debug_profiling_show(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    char *pcVar8;
    ulong *in_x18;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t arg1_00;
    ulong uVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    ulong unaff_x30;
    uint64_t *puStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    arg1_00 = *(arg1 + 0x80);
    uStack_88 = *0x8002ac0;
    uStack_80 = *0x8002ac8;
    uStack_78 = *0x8002ad0;
    uStack_70 = *0x8002ad8;
    iStack_a8 = *0x8002aa0;
    uStack_a0 = *0x8002aa8;
    uStack_98 = *0x8002ab0;
    uStack_90 = *0x8002ab8;
    mutex_lock();
    iVar2 = sym.iommu_debug_switch_usecase(arg1_00,*(arg1_00 + 0x30));
    if (iVar2 != 0) {
        uVar11 = *(arg1_00 + 0x28);
        piVar13 = &iStack_a8;
        seq_printf(arg1,"(average over %d iterations)\n",*(arg1_00 + 0x90));
        seq_printf(arg1,"%8s %19s %16s\n","size","iommu_map","iommu_unmap");
        iVar2 = 0x1000;
        do {
            uVar10 = 0;
            if (iVar2 + -1 != 0) {
                uVar10 = ~(-1L << (-LZCOUNT(iVar2 + -1) & 0x3fU));
            }
            if (*(arg1_00 + 0x90) == 0) {
                uVar15 = 0;
                uVar12 = 0;
                uVar10 = 0;
                if (iVar2 < 0x200000) goto code_r0x08007b08;
code_r0x08007b44:
                if (iVar2 < 0x1400000) {
                    if (iVar2 == 0x200000) {
                        pcVar8 = 0x8000bbd;
                    }
                    else {
                        if (iVar2 != 0xc00000) goto code_r0x08007bf0;
                        pcVar8 = 0x8001105;
                    }
                }
                else if (iVar2 == 0x1400000) {
                    pcVar8 = 0x8001a76;
                }
                else if (iVar2 == 0x1800000) {
                    pcVar8 = 0x80012cd;
                }
                else {
                    if (iVar2 != 0x2000000) goto code_r0x08007bf0;
                    pcVar8 = 0x8000c3a;
                }
            }
            else {
                uVar16 = 0;
                uVar12 = 0;
                uVar15 = 0;
                uVar14 = uVar10 + 0x10000 & (uVar10 ^ 0xffffffffffffffff);
                do {
                    iVar3 = ktime_get();
                    iVar1 = iommu_map(uVar11,uVar14,iVar2 + 0x7fffffffU & -iVar2,iVar2,3);
                    if (iVar1 == 0) {
                        iVar4 = ktime_get();
                        uVar15 = (iVar4 - iVar3) + uVar15;
                        iVar3 = ktime_get();
                        iVar4 = iommu_unmap(uVar11,uVar14,iVar2);
                        if (iVar4 == iVar2) {
                            iVar4 = ktime_get();
                            uVar12 = (uVar12 - iVar3) + iVar4;
                        }
                        else {
                            seq_printf(arg1,"Only unmapped %zx instead of %zx\n",iVar4,iVar2);
                        }
                    }
                    else {
                        seq_puts(arg1,"Failed to map\n");
                    }
                    uVar10 = *(arg1_00 + 0x90);
                    uVar16 = uVar16 + 1;
                } while (uVar16 < *(arg1_00 + 0x90));
                if (0x1fffff < iVar2) goto code_r0x08007b44;
code_r0x08007b08:
                if (iVar2 < 0x4000) {
                    pcVar8 = 0x80012ca;
                    if (iVar2 == 0x1000) goto code_r0x080079bc;
                    if (iVar2 == 0x2000) {
                        pcVar8 = 0x8000c37;
                        goto code_r0x080079bc;
                    }
code_r0x08007bf0:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar8 = "unknown size";
                }
                else if (iVar2 == 0x4000) {
                    pcVar8 = 0x8001936;
                }
                else if (iVar2 == 0x10000) {
                    pcVar8 = 0x8001682;
                }
                else {
                    if (iVar2 != 0x100000) goto code_r0x08007bf0;
                    pcVar8 = 0x80018d6;
                }
            }
code_r0x080079bc:
            uVar14 = 0;
            if (uVar10 != 0) {
                uVar14 = uVar15 / uVar10;
            }
            uVar15 = 0;
            if (uVar10 != 0) {
                uVar15 = uVar12 / uVar10;
            }
            seq_printf(arg1,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar8,uVar14 / 1000,
                       uVar14 + (uVar14 / 1000) * -1000,uVar15 / 1000,uVar15 + (uVar15 / 1000) * -1000);
            piVar13 = piVar13 + 1;
            iVar2 = *piVar13;
        } while (iVar2 != 0);
        piVar13 = &iStack_a8;
        seq_putc(arg1,10);
        seq_printf(arg1,"%8s %19s %16s\n","size","iommu_map_sg","iommu_unmap");
        iVar2 = 0x1000;
        do {
            puStack_b8 = NULL;
            uStack_b0 = 0;
            uVar10 = 0;
            if (iVar2 + -1 != 0) {
                uVar10 = ~(-1L << (-LZCOUNT(iVar2 + -1) & 0x3fU));
            }
            iVar1 = sym.iommu_debug_build_phoney_sg_table(&puStack_b8,iVar2);
            if (iVar1 != 0) {
                seq_puts(arg1,"couldn\'t build phoney sg table! bailing...\n");
                break;
            }
            if (*(arg1_00 + 0x90) == 0) {
                uVar15 = 0;
                uVar12 = 0;
                uVar16 = 0;
                if (0x1fffff < iVar2) goto code_r0x08007d34;
code_r0x08007d84:
                if (iVar2 < 0x4000) {
                    pcVar8 = 0x80012ca;
                    if (iVar2 != 0x1000) {
                        if (iVar2 != 0x2000) goto code_r0x08007eec;
                        pcVar8 = 0x8000c37;
                    }
                }
                else if (iVar2 == 0x4000) {
                    pcVar8 = 0x8001936;
                }
                else if (iVar2 == 0x10000) {
                    pcVar8 = 0x8001682;
                }
                else {
                    if (iVar2 != 0x100000) goto code_r0x08007eec;
                    pcVar8 = 0x80018d6;
                }
            }
            else {
                uVar9 = 0;
                uVar12 = 0;
                uVar15 = 0;
                uVar10 = uVar10 + 0x10000 & (uVar10 ^ 0xffffffffffffffff);
                do {
                    iVar3 = ktime_get();
                    iVar4 = iommu_map_sg(uVar11,uVar10,puStack_b8,uStack_b0._4_4_,3);
                    if (iVar4 != iVar2) {
                        seq_puts(arg1,"Failed to map_sg\n");
                        goto code_r0x08007eac;
                    }
                    iVar4 = ktime_get();
                    iVar5 = ktime_get();
                    iVar6 = iommu_unmap(uVar11,uVar10,iVar2);
                    if (iVar6 != iVar2) {
                        seq_printf(arg1,"Only unmapped %zx instead of %zx\n",iVar6,iVar2);
                        goto code_r0x08007eac;
                    }
                    uVar15 = iVar4 + (uVar15 - iVar3);
                    iVar3 = ktime_get();
                    uVar16 = *(arg1_00 + 0x90);
                    uVar12 = iVar3 + (uVar12 - iVar5);
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar16);
                if (iVar2 < 0x200000) goto code_r0x08007d84;
code_r0x08007d34:
                if (iVar2 < 0x1400000) {
                    if (iVar2 == 0x200000) {
                        pcVar8 = 0x8000bbd;
                        goto code_r0x08007e5c;
                    }
                    if (iVar2 == 0xc00000) {
                        pcVar8 = 0x8001105;
                        goto code_r0x08007e5c;
                    }
code_r0x08007eec:
                    _printk(0x80014ff,"_size_to_string");
                    pcVar8 = "unknown size";
                }
                else if (iVar2 == 0x1400000) {
                    pcVar8 = 0x8001a76;
                }
                else if (iVar2 == 0x1800000) {
                    pcVar8 = 0x80012cd;
                }
                else {
                    if (iVar2 != 0x2000000) goto code_r0x08007eec;
                    pcVar8 = 0x8000c3a;
                }
            }
code_r0x08007e5c:
            uVar14 = uVar16;
            uVar10 = 0;
            if (uVar14 != 0) {
                uVar10 = uVar15 / uVar14;
            }
            uVar15 = 0;
            if (uVar14 != 0) {
                uVar15 = uVar12 / uVar14;
            }
            seq_printf(arg1,"%8s %12lld.%03d us %9lld.%03d us\n",pcVar8,uVar10 / 1000,
                       uVar10 + (uVar10 / 1000) * -1000,uVar15 / 1000,uVar15 + (uVar15 / 1000) * -1000);
code_r0x08007eac:
            if (uStack_b0 != 0) {
                uVar16 = 0;
                puVar7 = puStack_b8;
                do {
                    __free_pages(*puVar7 & 0xfffffffffffffffc,0);
                    uVar16 = uVar16 + 1;
                    puVar7 = sg_next(puVar7);
                } while (uVar16 < uStack_b0);
            }
            sg_free_table(&puStack_b8);
            piVar13 = piVar13 + 1;
            iVar2 = *piVar13;
        } while (iVar2 != 0);
    }
    mutex_unlock(arg1_00 + 0x38);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return 0;
}

