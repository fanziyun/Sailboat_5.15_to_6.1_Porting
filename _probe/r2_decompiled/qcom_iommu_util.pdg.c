// decompiled from qcom_iommu_util by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 2120) =====

//WARNING: Switch with 1 destination removed at 0x08003c04

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1442ca2d2a415346) {
        if (arg1 < -0x1828ba6dc988a3bd) {
            if (arg1 < -0x550b9e52359ac614) {
                if (arg1 < -0x68ab8ae7a209cae0) {
                    if (arg1 == -0x799caa0442c3d0e2) {
                        pcVar2 = sym.fast_smmu_map_sg.5a2e0149000a936629ebf63764a9885f.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x6ca307b2ffc88122) goto code_r0x08003bc4;
                        pcVar2 = sym.fast_smmu_mmap_attrs.5a2e0149000a936629ebf63764a9885f.cfi_jt;
                    }
                }
                else {
                    if (arg1 != -0x68ab8ae7a209cae0) {
                        if (arg1 == -0x59a6aa99172a3232) {
                            pcVar2 = sym.__typeid__ZTSFiPKjiiPvE_global_addr;
                        }
                        else {
                            if (arg1 != -0x58467f03f9569502) goto code_r0x08003bc4;
                            pcVar2 = sym.__typeid__ZTSFvP10io_pgtableE_global_addr;
                        }
                        goto code_r0x08002810;
                    }
                    pcVar2 = sym.fast_smmu_map_page.5a2e0149000a936629ebf63764a9885f.cfi_jt;
                }
            }
            else {
                if (-0x3557318fb8d07b72 < arg1) {
                    if (arg1 == -0x3557318fb8d07b71) {
                        pcVar2 = sym.qcom_dma_iommu_remove.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x2769ed5bfcc998a3) {
                            if (arg1 != -0x1cafe5bdca3e2539) goto code_r0x08003bc4;
                            pcVar2 = sym.qcom_skip_tlb_management.cfi_jt;
                            goto code_r0x08002838;
                        }
                        pcVar2 = sym.io_pgtable_alloc_scan_objects.3b8e7fc3d2a98b9a1dd59c7698606bee.cfi_jt;
                    }
                    goto code_r0x08002810;
                }
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.atomic_pool_work_fn.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt;
                }
                else if (arg1 == -0x394376f0a0c643ea) {
                    pcVar2 = sym.qcom_io_pgtable_free_page.cfi_jt;
                }
                else {
                    if (arg1 != -0x36ca545cd543a315) goto code_r0x08003bc4;
                    pcVar2 = sym.__typeid__ZTSFyP12iommu_domainP19qcom_iommu_atos_txnE_global_addr;
                }
            }
        }
        else if (arg1 < 0x603a79faa5d367e) {
            if (arg1 < -0x4f09bfcfd47ea03) {
                if (arg1 == -0x1828ba6dc988a3bd) {
                    pcVar2 = sym.av8l_fast_map.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
                }
                else {
                    if (arg1 != -0xd7b8dfc0789efa7) {
                        if (arg1 != -0x5ed41bd5c6d63c3) goto code_r0x08003bc4;
                        pcVar2 = sym.qcom_iommu_get_fast_iova_range.cfi_jt;
                        goto code_r0x08002838;
                    }
                    pcVar2 = sym.fast_smmu_sync_single_for_device.5a2e0149000a936629ebf63764a9885f.cfi_jt;
                }
                goto code_r0x08002810;
            }
            if (arg1 == -0x4f09bfcfd47ea03) {
                if ((pcVar1 + -0x8002a00 >> 3 | pcVar1 << 0x3d) < 6) {
                    return;
                }
                goto code_r0x08003bc4;
            }
            if (arg1 != -0x2ac316d8df914f8) {
                if ((arg1 == 0x2b3a43e29242445) && ((pcVar1 + -0x80029a0 >> 3 | pcVar1 << 0x3d) < 5)) {
                    return;
                }
                goto code_r0x08003bc4;
            }
            pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
        }
        else if (arg1 < 0xff2b66f0ca4d350) {
            if (arg1 == 0x603a79faa5d367e) {
                pcVar2 = sym.gen_pool_first_fit_order_align.cfi_jt;
            }
            else if (arg1 == 0xe2f461e7800b567) {
                pcVar2 = sym.__fast_smmu_setup_dma_ops.5a2e0149000a936629ebf63764a9885f.cfi_jt;
            }
            else {
                if (arg1 != 0xe46d95c2b4387fc) goto code_r0x08003bc4;
                pcVar2 = sym.fast_smmu_setup_dma_ops.cfi_jt;
            }
        }
        else if (arg1 == 0xff2b66f0ca4d350) {
            pcVar2 = sym.__typeid__ZTSFiP12iommu_domainP20qcom_iommu_fault_idsE_global_addr;
        }
        else {
            if (arg1 != 0x1170a5d7d983f9d1) {
                if (arg1 != 0x138fed1d38b213b7) goto code_r0x08003bc4;
                pcVar2 = sym.av8l_fast_unmap.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
                goto code_r0x08002810;
            }
            pcVar2 = sym.fast_smmu_get_sgtable.5a2e0149000a936629ebf63764a9885f.cfi_jt;
        }
    }
    else if (arg1 < 0x5b663fd2fadeca56) {
        if (arg1 < 0x3a3bdc74315a0779) {
            if (arg1 < 0x1d60727cd295a5ab) {
                if (arg1 != 0x1442ca2d2a415346) {
                    if (arg1 != 0x1a23b7727c32edfa) goto code_r0x08003bc4;
                    pcVar2 = sym.av8l_fast_map_sg.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
                    goto code_r0x08002810;
                }
                pcVar2 = sym.qcom_free_io_pgtable_ops.cfi_jt;
            }
            else if (arg1 == 0x1d60727cd295a5ab) {
                pcVar2 = sym.fast_smmu_free.5a2e0149000a936629ebf63764a9885f.cfi_jt;
            }
            else {
                if (arg1 == 0x1ea828e69ceaad18) {
                    if ((pcVar1 + -0x80028f0 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08003bc4;
                }
                if (arg1 != 0x32f820dcd767696b) goto code_r0x08003bc4;
                pcVar2 = sym.fast_smmu_init_mapping.cfi_jt;
            }
        }
        else if (arg1 < 0x48fa85c07a417c12) {
            if (arg1 == 0x3a3bdc74315a0779) {
                pcVar2 = sym.__typeid__ZTSFiP6device20sid_switch_directionE_global_addr;
            }
            else if (arg1 == 0x3dfe89e98d52c464) {
                pcVar2 = sym.__typeid__ZTSFvP12iommu_domainE_global_addr;
            }
            else {
                if (arg1 != 0x3e2f2472de54d31b) goto code_r0x08003bc4;
                pcVar2 = sym.fast_smmu_unmap_sg.5a2e0149000a936629ebf63764a9885f.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x48fa85c07a417c12) {
                pcVar2 = sym.av8l_fast_iova_to_phys.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
                goto code_r0x08002810;
            }
            if (arg1 != 0x4c7587be72399542) {
                if ((arg1 == 0x54724e8ec07fc596) && ((pcVar1 + -0x8002958 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08003bc4;
            }
            pcVar2 = sym.qcom_alloc_io_pgtable_ops.cfi_jt;
        }
    }
    else if (arg1 < 0x7264df867f1d6ecd) {
        if (arg1 < 0x6a7cc3e6301bd48c) {
            if (arg1 != 0x5b663fd2fadeca56) {
                if (arg1 == 0x6082e5e7653b1999) {
                    pcVar2 = sym.fast_smmu_unmap_page.5a2e0149000a936629ebf63764a9885f.cfi_jt;
                }
                else {
                    if (arg1 != 0x6567c03de765fa28) goto code_r0x08003bc4;
                    pcVar2 = sym.fast_smmu_alloc.5a2e0149000a936629ebf63764a9885f.cfi_jt;
                }
code_r0x08002810:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08003bc4;
            }
            pcVar2 = sym.qcom_iommu_generate_dma_regions.cfi_jt;
        }
        else {
            if (arg1 != 0x6a7cc3e6301bd48c) {
                if (arg1 == 0x6ba5cd56a00915a6) {
                    pcVar2 = sym.fast_smmu_sync_sg_for_device.5a2e0149000a936629ebf63764a9885f.cfi_jt;
                }
                else {
                    if (arg1 != 0x6bcdfb1740954593) goto code_r0x08003bc4;
                    pcVar2 = sym.av8l_fast_map_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
                }
                goto code_r0x08002810;
            }
            pcVar2 = sym.__typeid__ZTSFiP12iommu_domainiE_global_addr;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x7264df867f1d6ecd) {
            pcVar2 = sym.av8l_fast_unmap_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
            goto code_r0x08002810;
        }
        if (arg1 == 0x741b966c574d47b1) {
            pcVar2 = sym.qcom_dma_iommu_is_ready.cfi_jt;
        }
        else {
            if (arg1 != 0x7c04e08174437fa6) goto code_r0x08003bc4;
            pcVar2 = sym.fast_smmu_dma_map_resource.5a2e0149000a936629ebf63764a9885f.cfi_jt;
        }
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.fast_smmu_notify.5a2e0149000a936629ebf63764a9885f.cfi_jt;
    }
    else {
        if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.qcom_io_pgtable_alloc_exit.cfi_jt;
            goto code_r0x08002810;
        }
        if (arg1 != 0x7ecf6384c5ac0123) goto code_r0x08003bc4;
        pcVar2 = sym.__typeid__ZTSFiP12iommu_domain4vmidE_global_addr;
    }
code_r0x08002838:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003bc4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003c18);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFiP6device20sid_switch_directionE_global_addr @ 0x08002850 (size 8) =====

ulong sym.__typeid__ZTSFiP6device20sid_switch_directionE_global_addr(ulong param_1,uint param_2)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = iommu_get_domain_for_dev();
    if ((iVar1 == 0) || (pcVar3 = *(*(iVar1 + 8) + -0x48), pcVar3 == NULL)) {
        uVar2 = 0xffffffea;
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFiP6device20sid_switch_directionE_global_addr) {
            __cfi_slowpath_diag(0x3a3bdc74315a0779,pcVar3,0x80007c0);
        }
        uVar2 = (*pcVar3)(param_1,param_2);
    }
    return uVar2;
}


// ===== sym.qcom_free_io_pgtable_ops.cfi_jt @ 0x08002858 (size 8) =====

void sym.qcom_free_io_pgtable_ops.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *puVar2;
    ulong *in_x18;
    code *pcVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        uVar1 = *(param_1 + -0x68);
        if (uVar1 < 8) {
            free_io_pgtable_ops();
        }
        else {
            if (uVar1 == 0xffffffff) {
                pcVar4 = reloc.av8l_fast_alloc_pgtable.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
                puVar2 = *(param_1 + -0x38);
            }
            else {
                if (uVar1 != 0xfffffffe) {
                    _printk(0x8000bbf);
                    return;
                }
                pcVar4 = reloc.arm_64_lpae_alloc_pgtable_s1.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
                puVar2 = *(param_1 + -0x38);
            }
            if ((puVar2 != NULL) && (pcVar3 = *puVar2, pcVar3 != NULL)) {
                __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar3,0x8000940);
                (*pcVar3)(*(param_1 + -0x60));
            }
            pcVar4 = *(pcVar4 + 8);
            if (1 < (pcVar4 + -0x8002898 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0xa7b980fc06a96afe,pcVar4,0x8000900);
            }
            (*pcVar4)(param_1 + -0x68);
        }
    }
    return;
}


// ===== sym.__typeid__ZTSFvP12iommu_domainE_global_addr @ 0x08002860 (size 8) =====

void sym.__typeid__ZTSFvP12iommu_domainE_global_addr(uint64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t *piVar3;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_write_lock_irqsave(obj.mappings_lock);
    iVar2 = _segment.ehdr;
    do {
        if (iVar2 == 0) {
code_r0x0800613c:
            _raw_write_unlock_irqrestore(obj.mappings_lock,uVar1);
            return;
        }
        if (param_1 < *(iVar2 + -0x80)) {
            piVar3 = iVar2 + 0x10;
        }
        else {
            if (param_1 <= *(iVar2 + -0x80)) {
                if (iVar2 + -0x88 != 0) {
                    rb_erase(iVar2,obj.mappings);
                    _raw_write_unlock_irqrestore(obj.mappings_lock,uVar1);
                    iommu_put_dma_cookie(param_1);
                    if (*(iVar2 + -0x78) != 0) {
                        put_iova_domain();
                        kfree(*(iVar2 + -0x78));
                    }
                    if (*(iVar2 + -0x50) != 0) {
                        kvfree();
                    }
                    if (*(iVar2 + -0x48) != 0) {
                        kvfree();
                    }
                    kfree(iVar2 + -0x88);
                    return;
                }
                goto code_r0x0800613c;
            }
            piVar3 = iVar2 + 8;
        }
        iVar2 = *piVar3;
    } while( true );
}


// ===== sym.qcom_alloc_io_pgtable_ops.cfi_jt @ 0x08002868 (size 8) =====

uint32_t * sym.qcom_alloc_io_pgtable_ops.cfi_jt(uint32_t param_1,ulong *param_2,ulong param_3)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t *puVar3;
    code *pcVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 8) {
        puVar3 = alloc_io_pgtable_ops(param_1,param_2,param_3);
        return puVar3;
    }
    if (param_1 == 0xffffffff) {
        pcVar4 = reloc.av8l_fast_alloc_pgtable.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    }
    else {
        if (param_1 != 0xfffffffe) {
            _printk(0x8000bbf,param_1);
            return NULL;
        }
        pcVar4 = reloc.arm_64_lpae_alloc_pgtable_s1.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
    }
    pcVar4 = *pcVar4;
    if (5 < (pcVar4 + -0x8002a00 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xfb0f640302b815fd,pcVar4,0x80008e0);
    }
    puVar3 = (*pcVar4)(param_2,param_3);
    if (puVar3 == NULL) {
        return NULL;
    }
    *puVar3 = param_1;
    *(puVar3 + 2) = param_3;
    uVar1 = param_2[2];
    uVar5 = *param_2;
    *(puVar3 + 6) = param_2[1];
    *(puVar3 + 8) = uVar1;
    *(puVar3 + 4) = uVar5;
    uVar5 = param_2[6];
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    *(puVar3 + 0xe) = param_2[5];
    *(puVar3 + 0x10) = uVar5;
    *(puVar3 + 10) = uVar1;
    *(puVar3 + 0xc) = uVar2;
    uVar5 = param_2[10];
    uVar1 = param_2[7];
    uVar2 = param_2[8];
    *(puVar3 + 0x16) = param_2[9];
    *(puVar3 + 0x18) = uVar5;
    *(puVar3 + 0x12) = uVar1;
    *(puVar3 + 0x14) = uVar2;
    return puVar3 + 0x1a;
}


// ===== sym.av8l_fast_map_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt @ 0x08002870 (size 8) =====

ulong sym.av8l_fast_map_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt
                (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,int64_t param_5,uint32_t param_6
                ,ulong param_7,uint64_t *param_8)

{
    uint64_t uVar1;
    int64_t arg2;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x58);
    uVar13 = param_5 * param_4;
    uVar7 = param_2 - *(param_1 + 0x70) >> 0xc;
    arg2 = iVar5 + uVar7 * 8;
    if ((param_6 >> 4 & 1) == 0) {
        if ((param_6 >> 2 & 1) == 0) {
            uVar10 = 0x60000000000e03;
            if ((param_6 & 0x40) != 0) {
                uVar10 = 0x60000000000e0f;
            }
        }
        else {
            uVar10 = 0x60000000000e07;
        }
    }
    else {
        uVar10 = 0x60000000000e0b;
    }
    uVar9 = uVar13 >> 0xc;
    uVar2 = 0xc0;
    if ((param_6 & 2) != 0) {
        uVar2 = 0x40;
    }
    if (0xfff < uVar13) {
        uVar10 = uVar10 | uVar2;
        param_3 = param_3 & 0xfffffffff000;
        uVar2 = uVar9;
        if (uVar9 < 2) {
            uVar2 = 1;
        }
        if (uVar2 < 2) {
            uVar12 = 0;
            uVar11 = param_3;
        }
        else {
            uVar12 = uVar2 & 0xffffffffffffe;
            puVar6 = iVar5 + uVar7 * 8 + 8;
            uVar11 = param_3 + uVar12 * 0x1000;
            uVar3 = uVar12;
            do {
                uVar1 = param_3 + 0x1000;
                uVar4 = uVar10 | param_3;
                param_3 = param_3 + 0x2000;
                uVar3 = uVar3 - 2;
                puVar6[-1] = uVar4;
                *puVar6 = uVar10 | uVar1;
                puVar6 = puVar6 + 2;
            } while (uVar3 != 0);
            if (uVar2 == uVar12) goto code_r0x08005f6c;
        }
        iVar8 = uVar2 - uVar12;
        puVar6 = iVar5 + (uVar12 + uVar7) * 8;
        do {
            uVar7 = uVar10 | uVar11;
            uVar11 = uVar11 + 0x1000;
            iVar8 = iVar8 + -1;
            *puVar6 = uVar7;
            puVar6 = puVar6 + 1;
        } while (iVar8 != 0);
    }
code_r0x08005f6c:
    sym.av8l_clean_range(param_1 + -0x58,arg2,arg2 + uVar9 * 8);
    *param_8 = uVar13;
    return 0;
}


// ===== sym.arm_lpae_map_pages.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002878 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009220)
//WARNING: Removing unreachable block (ram,0x0800922c)
//WARNING: Removing unreachable block (ram,0x08009284)
//WARNING: Removing unreachable block (ram,0x08009238)
//WARNING: Removing unreachable block (ram,0x08009288)
//WARNING: Removing unreachable block (ram,0x080093bc)
//WARNING: Removing unreachable block (ram,0x080092b0)
//WARNING: Removing unreachable block (ram,0x080092cc)
//WARNING: Removing unreachable block (ram,0x080092dc)
//WARNING: Removing unreachable block (ram,0x08009310)
//WARNING: Removing unreachable block (ram,0x080093e8)
//WARNING: Removing unreachable block (ram,0x080093f0)
//WARNING: Removing unreachable block (ram,0x08009428)

uint64_t sym.arm_lpae_map_pages.55b984f7a5e21471df6e15a17290fef8.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4,int64_t param_5,
                   uint32_t param_6,int64_t *param_7,ulong param_8)

{
    uint64_t arg2;
    uint uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t *puVar7;
    uint32_t uVar8;
    uint32_t arg2_00;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    ulong unaff_x24;
    int64_t iVar15;
    int64_t unaff_x26;
    int64_t *unaff_x27;
    uint64_t uVar16;
    ulong unaff_x28;
    uint64_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    uint64_t uStack_118;
    int64_t iStack_110;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_f0;
    int64_t *piStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uint64_t *puStack_c0;
    int64_t iStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    uint uStack_90;
    ulong *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    if (((param_4 == 0) || (param_5 == 0)) || (iVar15 = param_1 + -0x68, (*(param_1 + -0x50) & param_4) != param_4)) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8009018);
        (*pcVar2)();
    }
    if ((param_2 >> (*(param_1 + -0x48) & 0x3f) != (*(param_1 + -0x58) << 0x3a) >> 0x3f) ||
       (param_3 >> (*(param_1 + -0x44) & 0x3f) != 0)) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8009024);
        (*pcVar2)();
    }
    puVar7 = param_3;
    uVar16 = param_4;
    iVar9 = param_5;
    if ((param_6 & 3) == 0) {
        uVar4 = 0;
    }
    else {
        uStack_78 = *(param_1 + 0x40);
        unaff_x27 = *(param_1 + 0x34);
        uVar1 = SUB84(param_7,0);
        unaff_x28 = sym.arm_lpae_prot_to_pte(iVar15,param_6);
        unaff_x26 = param_1 + 0x60;
        uStack_70 = _raw_spin_lock_irqsave(unaff_x26);
        puStack_88 = &uStack_70;
        uStack_a0 = 0;
        uStack_98 = 0;
        param_7 = unaff_x27;
        uStack_90 = uVar1;
        uStack_80 = param_8;
        uVar4 = sym.__arm_lpae_map(iVar15,param_2,param_3,param_4);
        uVar4 = uVar4 & 0xffffffff;
        _raw_spin_unlock_irqrestore(unaff_x26,uStack_70);
        DataSynchronizationBarrier(3,2,0);
        unaff_x24 = param_8;
    }
    uVar8 = uVar16;
    arg2_00 = iVar9;
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar18 = __stack_chk_fail();
    iVar5 = auVar18._0_8_;
    *extraout_x18 = sym.arm_lpae_map_sg;
    pcStack_f8 = sym.arm_lpae_map_sg;
    iVar9 = sp_el0;
    iStack_110 = *(iVar9 + 0x5e0);
    *param_7 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_f0 = unaff_x28;
    piStack_e8 = unaff_x27;
    iStack_e0 = unaff_x26;
    iStack_d8 = iVar15;
    uStack_d0 = unaff_x24;
    iStack_c8 = param_2;
    puStack_c0 = param_3;
    iStack_b8 = param_5;
    uStack_b0 = param_4;
    uStack_a8 = uVar4;
    uVar6 = _raw_spin_lock_irqsave();
    uVar16 = 0;
    uVar14 = 0;
    uVar4 = 0;
    do {
        uVar17 = puVar7[1] + ((*puVar7 & 0x3fffffffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                 0x8000000000;
        if (uVar16 == 0) {
code_r0x08009390:
            uVar16 = *(puVar7 + 0xc);
        }
        else {
            if (uVar17 != uVar4 + uVar16) {
                iVar15 = *param_7;
                arg2 = iVar15 + auVar18._8_8_;
                uStack_118 = uVar4;
                sym.arm_lpae_prot_to_pte(iVar5 + -0x68,arg2_00);
                uVar10 = *(iVar5 + -0x50);
                uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                uVar11 = arg2 | uVar4;
                if (((1 << (LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) & 0x1f)) - 1 & (uVar11 | uVar16)) == 0) {
                    if ((arg2 + (uVar16 - 1) >> (*(iVar5 + -0x48) & 0x3f) != (*(iVar5 + -0x58) << 0x3a) >> 0x3f) ||
                       (uVar4 + (uVar16 - 1) >> (*(iVar5 + -0x44) & 0x3f) != 0)) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x8009484);
                        (*pcVar2)();
                    }
                    if ((arg2_00 & 3) == 0) {
                        *param_7 = iVar15 + uVar16;
                    }
                    else {
                        uVar12 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
                        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                        uVar13 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
                        uVar12 = LZCOUNT(uVar16) ^ 0x3fU;
                        if (uVar13 <= (LZCOUNT(uVar16) ^ 0x3fU) && uVar11 != 0) {
                            uVar12 = uVar13;
                        }
                        uVar10 = uVar10 & (-2L << (uVar12 & 0x3f) ^ 0xffffffffffffffffU);
                        while( true ) {
                            if (uVar10 == 0) goto code_r0x080094ac;
                            iVar15 = 1L << ((LZCOUNT(uVar10) ^ 0x3fU) & 0x3f);
                            uVar3 = sym.__arm_lpae_map(iVar5 + -0x68,arg2,uVar4,iVar15);
                            if (uVar3 != 0) {
                                uVar16 = uVar3;
                                goto code_r0x080093c4;
                            }
                            uStack_118 = uVar4 + iVar15;
                            uVar16 = uVar16 - iVar15;
                            *param_7 = *param_7 + iVar15;
                            if (uVar16 == 0) break;
                            arg2 = iVar15 + arg2;
                            uVar10 = uStack_118 | arg2;
                            uVar4 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                            uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
                            uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
                            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
                            uVar12 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
                            uVar4 = LZCOUNT(uVar16) ^ 0x3fU;
                            if (uVar12 <= (LZCOUNT(uVar16) ^ 0x3fU) && uVar10 != 0) {
                                uVar4 = uVar12;
                            }
                            uVar10 = *(iVar5 + -0x50) & (-2L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                            uVar4 = uStack_118;
                        }
                    }
                    goto code_r0x08009390;
                }
                _printk(0x800109c,arg2,&uStack_118,uVar16);
                uVar16 = 0xffffffea;
code_r0x080093c4:
                _raw_spin_unlock_irqrestore(iVar5 + 0x60,uVar6);
                goto code_r0x0800943c;
            }
            uVar16 = uVar16 + *(puVar7 + 0xc);
            uVar17 = uVar4;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 < uVar8) {
            puVar7 = sg_next(puVar7);
        }
        uVar4 = uVar17;
    } while (uVar14 <= uVar8);
    _raw_spin_unlock_irqrestore(iVar5 + 0x60,uVar6);
    DataSynchronizationBarrier(3,2,0);
    uVar16 = 0;
code_r0x0800943c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_110) {
        return uVar16;
    }
    __stack_chk_fail();
code_r0x080094ac:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x80094b0);
    (*pcVar2)();
}


// ===== sym.__typeid__ZTSFiPKjiiPvE_global_addr @ 0x08002880 (size 8) =====

ulong sym.__typeid__ZTSFiPKjiiPvE_global_addr(uint32_t *param_1,int param_2,int param_3,uint64_t *param_4)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        uVar8 = 0;
    }
    else {
        uVar8 = 0;
        puVar5 = param_1;
        iVar4 = param_2;
        do {
            iVar4 = iVar4 + -1;
            uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
            uVar8 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar8 << 0x20;
            puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
    }
    if (param_3 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        puVar5 = param_1 + param_2;
        do {
            param_3 = param_3 + -1;
            uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
            uVar6 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar6 << 0x20;
            puVar5 = puVar5 + 1;
        } while (param_3 != 0);
    }
    if ((uVar8 >> 0x20 == 0) && (uVar6 = (uVar8 + uVar6) - 1, uVar6 >> 0x20 == 0)) {
        uVar7 = *param_4;
        uVar3 = uVar8;
        if (((uVar7 != 0) && (uVar3 = uVar7, uVar8 != 0)) && (uVar8 <= uVar7)) {
            uVar3 = uVar8;
        }
        uVar2 = 0;
        uVar8 = param_4[1];
        if (param_4[1] <= uVar6) {
            uVar8 = uVar6;
        }
        *param_4 = uVar3;
        param_4[1] = uVar8;
    }
    else {
        _printk(0x8000bf9);
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.insert_range.26a21a78fdce4965dbb213a059d6010e.cfi_jt @ 0x08002888 (size 8) =====

ulong sym.insert_range.26a21a78fdce4965dbb213a059d6010e.cfi_jt
                (uint32_t *param_1,int param_2,int param_3,int64_t *param_4)

{
    uint32_t uVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint32_t *puVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        uVar8 = 0;
    }
    else {
        uVar8 = 0;
        puVar4 = param_1;
        iVar5 = param_2;
        do {
            iVar5 = iVar5 + -1;
            uVar1 = (*puVar4 & 0xff00ff00) >> 8 | (*puVar4 & 0xff00ff) << 8;
            uVar8 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar8 << 0x20;
            puVar4 = puVar4 + 1;
        } while (iVar5 != 0);
    }
    if (param_3 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        puVar4 = param_1 + param_2;
        do {
            param_3 = param_3 + -1;
            uVar1 = (*puVar4 & 0xff00ff00) >> 8 | (*puVar4 & 0xff00ff) << 8;
            uVar6 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar6 << 0x20;
            puVar4 = puVar4 + 1;
        } while (param_3 != 0);
    }
    piVar11 = *param_4;
    piVar9 = param_4;
    if (piVar11 != param_4) {
        do {
            uVar7 = piVar11[2];
            if ((uVar7 <= (uVar8 + uVar6) - 1) && (uVar8 <= (uVar7 + piVar11[3]) - 1)) {
                return 0xffffffea;
            }
            piVar9 = piVar11;
        } while ((uVar7 <= uVar8) && (piVar11 = *piVar11, piVar9 = param_4, piVar11 != param_4));
    }
    piVar2 = iommu_alloc_resv_region(uVar8,uVar6,0,2);
    if (piVar2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        piVar10 = piVar11[1];
        uVar8 = __list_add_valid(piVar2,piVar10,piVar9);
        if ((uVar8 & 1) == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = 0;
            piVar11[1] = piVar2;
            *piVar2 = piVar9;
            piVar2[1] = piVar10;
            *piVar10 = piVar2;
        }
    }
    return uVar3;
}


// ===== sym.__fast_smmu_setup_dma_ops.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002890 (size 8) =====

int64_t sym.__fast_smmu_setup_dma_ops.5a2e0149000a936629ebf63764a9885f.cfi_jt(ulong param_1,int64_t param_2)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong in_x6;
    ulong in_x7;
    int64_t *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x23;
    ulong *puVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar *puVar14;
    code *pcVar15;
    ulong *puStack_80;
    uchar *puStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    puVar14 = &stack0xffffffffffffffa0;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    iVar3 = iommu_get_domain_for_dev(param_2);
    iVar4 = 0;
    if ((iVar3 != 0) && (iVar4 = sym.qcom_iommu_get_mappings_configuration(iVar3), (iVar4 & 0x80000004) == 4)) {
        uVar5 = iommu_get_domain_for_dev(param_2);
        if (uVar5 == 0) {
            iVar4 = -0x16;
code_r0x080066bc:
            uVar5 = iommu_get_domain_for_dev(param_2);
            if (uVar5 == 0) {
                iVar3 = -0x16;
            }
            else {
                uVar6 = _raw_read_lock_irqsave(obj.mappings_lock);
                for (iVar11 = _segment.ehdr; iVar11 != 0; iVar11 = *(iVar11 + 0x10)) {
                    while( true ) {
                        iVar3 = iVar11 + -0x88;
                        if (uVar5 < *(iVar11 + -0x80)) break;
                        if (uVar5 <= *(iVar11 + -0x80)) goto code_r0x08006718;
                        iVar11 = *(iVar11 + 8);
                        if (iVar11 == 0) goto code_r0x08006714;
                    }
                }
code_r0x08006714:
                iVar3 = 0;
code_r0x08006718:
                _raw_read_unlock_irqrestore(obj.mappings_lock,uVar6);
            }
            puStack_80 = &puStack_80;
            puStack_78 = &puStack_80;
            if (*(param_2 + 0x80) == pci_bus_type) {
                puStack_80 = &puStack_80;
                puStack_78 = &puStack_80;
                iVar11 = sym.qcom_pci_find_host_bridge(*(param_2 + -0xc0));
                uVar6 = _raw_spin_lock_irqsave(iVar4 + 0x68);
                for (puVar12 = *(iVar11 + 0x3b8); puVar12 != iVar11 + 0x3b8; puVar12 = *puVar12) {
                    piVar7 = puVar12[2];
                    if (((piVar7[3] & 0x1f00U) == 0x200) || ((piVar7[3] & 0x1f00U) == 0x100)) {
                        uVar8 = *piVar7 - puVar12[3] & 0xfffffffffffff000;
                        uVar1 = *(iVar4 + 0x18);
                        uVar9 = piVar7[1] + ~puVar12[3] | 0xfff;
                        uVar5 = *(iVar4 + 0x20) + uVar1;
                        uVar10 = uVar1;
                        if (uVar1 <= uVar8) {
                            uVar10 = uVar8;
                        }
                        if (uVar9 + 1 <= uVar5) {
                            uVar5 = uVar9 + 1;
                        }
                        if (uVar10 < uVar5) {
                            uVar10 = uVar10 - uVar1 >> 0xc;
                            iVar2 = (uVar5 - uVar1 >> 0xc) - uVar10;
                            __bitmap_set(*(iVar4 + 0x38),uVar10 & 0xffffffff,iVar2);
                            __bitmap_set(*(iVar4 + 0x40),uVar10 & 0xffffffff,iVar2);
                        }
                    }
                }
                _raw_spin_unlock_irqrestore(iVar4 + 0x68,uVar6);
            }
            sym.qcom_iommu_get_resv_regions(param_2,&puStack_80);
            uVar6 = _raw_spin_lock_irqsave(iVar3 + 0x68);
            puVar12 = puStack_80;
            if (puStack_80 != &puStack_80) {
                do {
                    uVar10 = *(iVar4 + 0x18);
                    uVar1 = puVar12[2];
                    uVar5 = (uVar10 + *(iVar4 + 0x20)) - 1;
                    uVar8 = (uVar1 + puVar12[3]) - 1;
                    if (uVar8 <= uVar5) {
                        uVar5 = uVar8;
                    }
                    uVar8 = 0;
                    if (uVar10 <= uVar1) {
                        uVar8 = uVar1 - uVar10;
                    }
                    uVar8 = uVar8 >> 0xc;
                    iVar2 = ((uVar5 - uVar10 >> 0xc) - uVar8) + 1;
                    __bitmap_set(*(iVar4 + 0x38),uVar8 & 0xffffffff,iVar2);
                    __bitmap_set(*(iVar4 + 0x40),uVar8 & 0xffffffff,iVar2);
                    puVar12 = *puVar12;
                } while (puVar12 != &puStack_80);
            }
            _raw_spin_unlock_irqrestore(iVar3 + 0x68,uVar6);
            sym.qcom_iommu_put_resv_regions(param_2,&puStack_80);
            uStack_6c = 0;
            mutex_lock(iVar4 + 0xa0);
            iVar3 = iVar4 + 0x68;
            unaff_x23 = _raw_spin_lock_irqsave(iVar3);
            if ((*(*(iVar4 + 8) + 0x40) == 0) && (iVar2 = sym.qcom_iommu_get_msi_size(param_2,&uStack_6c), -1 < iVar2)
               ) {
                iVar11 = sym.__fast_smmu_alloc_iova(iVar4,uStack_6c);
                if (iVar11 == -1) {
                    _dev_err(param_2,"iova allocator failed to reserve MSI range of size: 0x%x\n",uStack_6c);
                }
                else {
                    _raw_spin_unlock_irqrestore(iVar3,unaff_x23);
                    iVar2 = iommu_get_msi_cookie(*(iVar4 + 8),iVar11);
                    unaff_x23 = _raw_spin_lock_irqsave(iVar3);
                    if (iVar2 < 0) {
                        _dev_err(param_2,"failed to obtain MSI iova cookie rc: %d\n",iVar2);
                        __bitmap_clear(*(iVar4 + 0x38),iVar11 - *(iVar4 + 0x18) >> 0xc,uStack_6c >> 0xc);
                        *(iVar4 + 0x50) = 1;
                    }
                }
            }
            _raw_spin_unlock_irqrestore(iVar3,unaff_x23);
            iVar4 = mutex_unlock(iVar4 + 0xa0);
            *(param_2 + 0x298) = reloc.fast_smmu_alloc.5a2e0149000a936629ebf63764a9885f.cfi_jt;
        }
        else {
            uVar6 = _raw_read_lock_irqsave(obj.mappings_lock);
            for (iVar3 = _segment.ehdr; iVar3 != 0; iVar3 = *(iVar3 + 0x10)) {
                while( true ) {
                    iVar4 = iVar3 + -0x88;
                    if (uVar5 < *(iVar3 + -0x80)) break;
                    if (uVar5 <= *(iVar3 + -0x80)) {
                        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar6);
                        if (iVar4 == 0) goto code_r0x080066a4;
                        goto code_r0x080066bc;
                    }
                    iVar3 = *(iVar3 + 8);
                    if (iVar3 == 0) goto code_r0x08006684;
                }
            }
code_r0x08006684:
            _raw_read_unlock_irqrestore(obj.mappings_lock,uVar6);
code_r0x080066a4:
            iVar4 = _dev_err(param_2,"Missing fastmap iova cookie\n");
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return iVar4;
    }
    auVar13 = __stack_chk_fail();
    iVar3 = auVar13._0_8_;
    *extraout_x18 = sym.__fast_smmu_alloc_iova;
    pcVar15 = sym.__fast_smmu_alloc_iova;
    uVar5 = auVar13._8_8_ - 1;
    uVar10 = auVar13._8_8_ >> 0xc;
    iVar11 = *(iVar3 + 8);
    iVar4 = 0;
    if (0xfff < uVar5) {
        iVar4 = ~(-1 << (-LZCOUNT(uVar5 >> 0xc) & 0x1f));
    }
    uVar5 = bitmap_find_next_zero_area_off
                      (*(iVar3 + 0x40),*(iVar3 + 0x28),*(iVar3 + 0x48),uVar10 & 0xffffffff,iVar4,0,in_x6,in_x7,
                       puVar14,sym.__fast_smmu_alloc_iova,unaff_x23);
    if ((*(iVar3 + 0x28) < uVar5) &&
       (uVar5 = bitmap_find_next_zero_area_off
                          (*(iVar3 + 0x40),*(iVar3 + 0x28),0,uVar10 & 0xffffffff,iVar4,0,in_x6,in_x7,puVar14,
                           pcVar15,unaff_x23), *(iVar3 + 0x28) < uVar5)) {
        if (*(iVar3 + 0x50) != '\0') {
            sym.iommu_flush_iotlb_all(iVar11);
            memcpy(*(iVar3 + 0x40),*(iVar3 + 0x38),*(iVar3 + 0x28) + 0x3f >> 3 & 0x3ffffff8);
            *(iVar3 + 0x50) = 0;
            uVar5 = bitmap_find_next_zero_area_off
                              (*(iVar3 + 0x40),*(iVar3 + 0x28),0,uVar10 & 0xffffffff,iVar4,0,in_x6,in_x7,puVar14
                               ,pcVar15,unaff_x23);
            if (uVar5 <= *(iVar3 + 0x28)) goto code_r0x08006a78;
        }
        iVar4 = -1;
    }
    else {
code_r0x08006a78:
        __bitmap_set(*(iVar3 + 0x38),uVar5 & 0xffffffff,uVar10 & 0xffffffff);
        __bitmap_set(*(iVar3 + 0x40),uVar5 & 0xffffffff,uVar10 & 0xffffffff);
        *(iVar3 + 0x48) = uVar5 + uVar10;
        if (*(iVar3 + 0x28) <= uVar5 + uVar10) {
            *(iVar3 + 0x48) = 0;
        }
        iVar4 = *(iVar3 + 0x18) + uVar5 * 0x1000;
    }
    return iVar4;
}


// ===== sym.__typeid__ZTSFvP10io_pgtableE_global_addr @ 0x08002898 (size 8) =====

void sym.__typeid__ZTSFvP10io_pgtableE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__arm_lpae_free_pgtable(param_1,*(param_1 + 0x9c),*(param_1 + 0xa8),0);
    sym.qcom_io_pgtable_allocator_unregister(*(param_1 + 0xb0));
    kfree(param_1);
    return;
}


// ===== sym.av8l_fast_free_pgtable.11a4d76efea7558fbaf9572365c50d63.cfi_jt @ 0x080028a0 (size 8) =====

void sym.av8l_fast_free_pgtable.11a4d76efea7558fbaf9572365c50d63.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    vunmap(*(param_1 + 0xc0));
    if (0 < *(param_1 + 0xd0)) {
        iVar1 = 0;
        do {
            __free_pages(*(*(param_1 + 200) + iVar1 * 8),0);
            iVar1 = iVar1 + 1;
        } while (iVar1 < *(param_1 + 0xd0));
    }
    kvfree(*(param_1 + 200));
    kfree(param_1);
    return;
}


// ===== sym.fast_smmu_setup_dma_ops.cfi_jt @ 0x080028a8 (size 8) =====

void sym.fast_smmu_setup_dma_ops.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__fast_smmu_setup_dma_ops(param_1,param_2);
    return;
}


// ===== sym.qcom_io_pgtable_free_page.cfi_jt @ 0x080028b0 (size 8) =====

void sym.qcom_io_pgtable_free_page.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.free_page_to_pool.llvm.8230901766045713888(param_1);
    return;
}


// ===== sym.fast_smmu_map_page.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x080028b8 (size 8) =====

int64_t sym.fast_smmu_map_page.5a2e0149000a936629ebf63764a9885f.cfi_jt
                  (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint32_t param_5,int64_t param_6
                  )

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t arg2;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1;
    uint32_t uVar5;
    uint64_t arg2_00;
    uint32_t arg2_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        arg1 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                arg1 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x080073e0;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x080073dc;
            }
        }
code_r0x080073dc:
        arg1 = 0;
code_r0x080073e0:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = param_3 + (param_2 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 + 0x8000000000;
    arg2_00 = param_4 + (uVar2 & 0xfff) + 0xfff & 0xfffffffffffff000;
    uVar5 = param_6;
    if ((uVar5 >> 0xf & 1) == 0) {
        if ((uVar5 >> 0x10 & 1) == 0) {
            arg2_01 = *(param_1 + 0x34c) >> 5 & 1;
        }
        else {
            arg2_01 = 0;
        }
        sym.qcom_dma_info_to_prot(param_5,arg2_01,param_6);
        if (((uVar5 >> 5 & 1) == 0) && (arg2_01 == 0)) {
            sym.qcom_arch_sync_dma_for_device(uVar2,param_4,param_5);
        }
    }
    else {
        sym.qcom_dma_info_to_prot(param_5,1,param_6);
    }
    iVar4 = arg1 + 0x68;
    uVar3 = _raw_spin_lock_irqsave(iVar4);
    arg2 = sym.__fast_smmu_alloc_iova(arg1,arg2_00);
    if (arg2 != -1) {
        iVar1 = sym.av8l_fast_map_public(*(arg1 + 0x60),arg2,uVar2 & 0xfffffffffffff000,arg2_00);
        if (iVar1 == 0) {
            _raw_spin_unlock_irqrestore(iVar4,uVar3);
            return arg2 + (uVar2 & 0xfff);
        }
        sym.__fast_smmu_free_iova(arg1,arg2,param_4);
    }
    _raw_spin_unlock_irqrestore(iVar4,uVar3);
    return -1;
}


// ===== sym.av8l_fast_unmap_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt @ 0x080028c0 (size 8) =====

uint64_t sym.av8l_fast_unmap_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt
                   (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    int64_t arg2;
    ulong *in_x18;
    code *pcVar1;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = param_4 * param_3 >> 9 & 0x7ffffffffffff8;
    arg2 = *(param_1 + 0x58) + (param_2 - *(param_1 + 0x70) >> 9 & 0x7ffffffffffff8);
    memset(arg2,0,uVar2);
    sym.av8l_clean_range(param_1 + -0x58,arg2,arg2 + uVar2);
    if ((*(param_1 + -0x38) != NULL) && (pcVar1 = **(param_1 + -0x38), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar1,0x8000960);
        (*pcVar1)(*(param_1 + -0x60));
    }
    return param_4 * param_3;
}


// ===== sym.arm_lpae_unmap_pages.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x080028c8 (size 8) =====

uint64_t sym.arm_lpae_unmap_pages.55b984f7a5e21471df6e15a17290fef8.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,int64_t param_5)

{
    uint64_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int iVar6;
    uint64_t uVar7;
    int iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    code *pcVar10;
    int iVar11;
    int iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar5 = *(iVar5 + 0x5e0);
    if (((param_3 == 0) || (param_4 == 0)) || ((*(param_1 + -0x50) & param_3) != param_3)) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x800,0x80095d8);
        (*pcVar10)();
    }
    if (param_2 >> (*(param_1 + -0x48) & 0x3f) != (*(param_1 + -0x58) << 0x3a) >> 0x3f) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x800,0x800961c);
        (*pcVar10)();
    }
    uVar2 = _raw_spin_lock_irqsave(param_1 + 0x60);
    uVar3 = sym.__arm_lpae_unmap(param_1 + -0x68,param_5,param_2,param_3);
    pcVar10 = *(*(param_1 + 0x50) + 8);
    uVar9 = *(param_1 + -0x60);
    __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar10,0x8000a20);
    (*pcVar10)(uVar9);
    _raw_spin_unlock_irqrestore(param_1 + 0x60,uVar2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iVar5) {
        return uVar3;
    }
    auVar13 = __stack_chk_fail();
    iVar4 = auVar13._0_8_;
    *extraout_x18 = sym.arm_lpae_iova_to_phys;
    iVar5 = iVar4 + 0x60;
    uVar3 = *(iVar4 + 0x40);
    iVar11 = *(iVar4 + 0x34);
    uVar2 = _raw_spin_lock_irqsave(iVar5);
    if (uVar3 != 0) {
        iVar12 = 4 - iVar11;
        uVar7 = *(iVar4 + 0x38);
        do {
            iVar6 = uVar7;
            if (iVar11 == *(iVar4 + 0x34)) {
                iVar8 = *(iVar4 + 0x30) - iVar6;
            }
            else {
                iVar8 = 0;
            }
            uVar3 = *(uVar3 + (auVar13._8_8_ >> (iVar12 * iVar6 + 3 & 0x3f) & ~(-1 << (iVar8 + iVar6 & 0x1f))) * 8);
            if (uVar3 == 0) break;
            uVar7 = 3;
            if (*(iVar4 + -0x68) == 5 || iVar11 != 3) {
                uVar7 = 1;
            }
            if ((uVar3 & 3) == uVar7) {
                _raw_spin_unlock_irqrestore(iVar5,uVar2);
                uVar7 = uVar3 & 0xfffffffff000;
                if (0xffff < 8L << (*(iVar4 + 0x38) & 0x3f)) {
                    uVar7 = (uVar3 & 0xfffffffff000) * 0x1000000001 & 0xfffffffff0000;
                }
                return auVar13._8_8_ & (-1L << (*(iVar4 + 0x38) * iVar12 + 3 & 0x3f) ^ 0xffffffffffffffffU) | uVar7;
            }
            uVar7 = *(iVar4 + 0x38);
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + -1;
            uVar1 = uVar3 & 0xfffffffff000;
            if (0xffff < 8L << (uVar7 & 0x3f)) {
                uVar1 = (uVar3 & 0xfffffffff000) * 0x1000000001 & 0x7fffff0000;
            }
            uVar3 = uVar1 - _gen_pool_first_fit_order_align | 0xffffff8000000000;
        } while (iVar11 < 4);
    }
    _raw_spin_unlock_irqrestore(iVar5,uVar2);
    return 0;
}


// ===== sym.__typeid__ZTSFiP12iommu_domain4vmidE_global_addr @ 0x080028d0 (size 8) =====

ulong sym.__typeid__ZTSFiP12iommu_domain4vmidE_global_addr(int64_t param_1,uint64_t param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(param_1 + 8) + -0x28);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP12iommu_domain4vmidE_global_addr) {
            __cfi_slowpath_diag(0x7ecf6384c5ac0123,pcVar2,0x8000860);
            param_2 = param_2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.io_pgtable_alloc_scan_objects.3b8e7fc3d2a98b9a1dd59c7698606bee.cfi_jt @ 0x080028d8 (size 8) =====

ulong * sym.io_pgtable_alloc_scan_objects.3b8e7fc3d2a98b9a1dd59c7698606bee.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong *arg3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    ulong *puVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    int64_t iVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t *piStack_90;
    uchar *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    puStack_88 = &piStack_90;
    piStack_90 = &piStack_90;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    puVar11 = *(param_2 + 8);
    mutex_lock(obj.page_pool_xa_lock);
    arg3 = 0xffffffffffffffff;
    uStack_80 = 0;
    iVar7 = xa_find(obj.__fast_smmu_create_mapping_sized.__key,&uStack_80,0xffffffffffffffff,8);
    puVar10 = NULL;
    while (iVar7 != 0) {
        arg3 = puVar11 - puVar10;
        iVar7 = sym.scan_page_pool(iVar7,&piStack_90,arg3);
        puVar10 = iVar7 + puVar10;
        if (puVar11 <= puVar10) break;
        arg3 = 0xffffffffffffffff;
        iVar7 = xa_find_after(obj.__fast_smmu_create_mapping_sized.__key,&uStack_80,0xffffffffffffffff,8);
    }
    mutex_unlock(obj.page_pool_xa_lock);
    piVar12 = piStack_90;
    if (&piStack_90 != piStack_90) {
        do {
            piVar15 = *piVar12;
            iVar2 = piVar12[4];
            uVar8 = __list_del_entry_valid(piVar12);
            if ((uVar8 & 1) != 0) {
                iVar7 = *piVar12;
                piVar13 = piVar12[1];
                *(iVar7 + 8) = piVar13;
                *piVar13 = iVar7;
            }
            *piVar12 = -0x2152ffffffffff00;
            piVar12[1] = -0x2152fffffffffede;
            if (iVar2 != 0) {
                arg3 = &uStack_78;
                uStack_78 = CONCAT44(iVar2,3);
                uStack_70 = 7;
                uStack_6c = 3;
                iVar6 = hyp_assign_phys((piVar12 + -1 + (_gen_pool_first_fit_order_align >> 0xc) * 8) * 0x40 +
                                        0x8000000000,0x1000,arg3,2,&uStack_6c,&uStack_70,1);
                if (iVar6 != 0) {
                    __warn_printk("failed to unassign memory from VMID: %u rc: %d\n",iVar2,iVar6);
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x800b4e8);
                    (*pcVar5)();
                }
            }
            __free_pages(piVar12 + -1,0);
            piVar12 = piVar15;
        } while (&piStack_90 != piVar15);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return puVar10;
    }
    auVar16 = __stack_chk_fail();
    piVar12 = auVar16._8_8_;
    *extraout_x18 = sym.scan_page_pool;
    iVar7 = auVar16._0_8_ + 8;
    uVar9 = _raw_spin_lock_irqsave(iVar7);
    puVar10 = NULL;
    puVar11 = puVar10;
    if (arg3 != NULL) {
        piVar15 = auVar16._0_8_ + 0x10;
        do {
            piVar13 = *piVar15;
            puVar11 = puVar10;
            if (piVar15 == piVar13 || piVar13 + -1 == NULL) break;
            uVar8 = __list_del_entry_valid(piVar13);
            if ((uVar8 & 1) != 0) {
                iVar14 = *piVar13;
                piVar1 = piVar13[1];
                *(iVar14 + 8) = piVar1;
                *piVar1 = iVar14;
            }
            *piVar13 = -0x2152ffffffffff00;
            piVar13[1] = -0x2152fffffffffede;
            Hint_Prefetch(0x80005d8,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(0x80005d8,0x10);
                if (bVar4) {
                    cVar3 = ExclusiveMonitorsStatus();
                    _obj.page_pool_count = _obj.page_pool_count + -1;
                }
            } while (cVar3 != '\0');
            dec_node_page_state(piVar13 + -1,0x21);
            iVar14 = *piVar12;
            uVar8 = __list_add_valid(piVar13,piVar12,iVar14);
            if ((uVar8 & 1) != 0) {
                *(iVar14 + 8) = piVar13;
                *piVar13 = iVar14;
                piVar13[1] = piVar12;
                *piVar12 = piVar13;
            }
            puVar10 = puVar10 + 1;
            puVar11 = arg3;
        } while (arg3 != puVar10);
    }
    _raw_spin_unlock_irqrestore(iVar7,uVar9);
    return puVar11;
}


// ===== sym.io_pgtable_alloc_count_objects.3b8e7fc3d2a98b9a1dd59c7698606bee.cfi_jt @ 0x080028e0 (size 8) =====

int64_t sym.io_pgtable_alloc_count_objects.3b8e7fc3d2a98b9a1dd59c7698606bee.cfi_jt(void)

{
    int64_t iVar1;
    
    iVar1 = -2;
    if (_obj.page_pool_count != 0) {
        iVar1 = _obj.page_pool_count;
    }
    return iVar1;
}


// ===== sym.__typeid__ZTSFiP12iommu_domainP20qcom_iommu_fault_idsE_global_addr @ 0x080028e8 (size 8) =====

ulong sym.__typeid__ZTSFiP12iommu_domainP20qcom_iommu_fault_idsE_global_addr(int64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(param_1 + 8) + -0x40);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP12iommu_domainP20qcom_iommu_fault_idsE_global_addr) {
            __cfi_slowpath_diag(0xff2b66f0ca4d350,pcVar2,0x80007e0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP12iommu_domainE_global_addr @ 0x080028f0 (size 8) =====

ulong sym.__typeid__ZTSFiP12iommu_domainE_global_addr(int64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(param_1 + 8) + -0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (3 < (pcVar2 + -0x80028f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1ea828e69ceaad18,pcVar2,0x80008c0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_get_asid_nr.cfi_jt @ 0x080028f8 (size 8) =====

ulong sym.qcom_iommu_get_asid_nr.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(param_1 + 8) + -0x30);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (3 < (pcVar2 + -0x80028f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1ea828e69ceaad18,pcVar2,0x8000840);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_get_context_bank_nr.cfi_jt @ 0x08002900 (size 8) =====

ulong sym.qcom_iommu_get_context_bank_nr.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(param_1 + 8) + -0x38);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (3 < (pcVar2 + -0x80028f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1ea828e69ceaad18,pcVar2,0x8000820);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_enable_s1_translation.cfi_jt @ 0x08002908 (size 8) =====

ulong sym.qcom_iommu_enable_s1_translation.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(param_1 + 8) + -0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (3 < (pcVar2 + -0x80028f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1ea828e69ceaad18,pcVar2,0x80008a0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_generate_dma_regions.cfi_jt @ 0x08002910 (size 8) =====

ulong sym.qcom_iommu_generate_dma_regions.cfi_jt(int param_1,ulong param_2,ulong param_3,int64_t *param_4)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t *piVar6;
    code **arg3;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    uchar auVar14 [12];
    code *pcStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    int64_t iVar5;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_18 = *(iVar5 + 0x5e0);
    arg3 = &pcStack_28;
    pcStack_28 = sym.insert_range.26a21a78fdce4965dbb213a059d6010e.cfi_jt;
    uStack_20 = param_2;
    uVar4 = sym.of_property_walk_each_entry(param_1,0x8000d79,arg3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_18) {
        return uVar4;
    }
    auVar14 = __stack_chk_fail();
    auVar14._8_4_ = auVar14._8_4_;
    iVar5 = auVar14._0_8_;
    *extraout_x18 = sym.insert_range;
    if (auVar14._8_4_ == 0) {
        uVar10 = 0;
    }
    else {
        uVar10 = 0;
        do {
            puVar7 = auVar14._0_8_;
            uVar1 = *puVar7;
            iVar2 = auVar14._8_4_ + -1;
            auVar14._8_4_ = iVar2;
            auVar14._0_8_ = puVar7 + 1;
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            uVar10 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar10 << 0x20;
        } while (iVar2 != 0);
    }
    if (arg3 == 0) {
        uVar8 = 0;
    }
    else {
        uVar8 = 0;
        puVar7 = iVar5 + auVar14._8_4_ * 4;
        do {
            uVar3 = arg3 - 1;
            arg3 = uVar3;
            uVar1 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
            uVar8 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar8 << 0x20;
            puVar7 = puVar7 + 1;
        } while (uVar3 != 0);
    }
    piVar13 = *param_4;
    piVar11 = param_4;
    if (piVar13 != param_4) {
        do {
            uVar9 = piVar13[2];
            if ((uVar9 <= (uVar10 + uVar8) - 1) && (uVar10 <= (uVar9 + piVar13[3]) - 1)) {
                return 0xffffffea;
            }
            piVar11 = piVar13;
        } while ((uVar9 <= uVar10) && (piVar13 = *piVar13, piVar11 = param_4, piVar13 != param_4));
    }
    piVar6 = iommu_alloc_resv_region(uVar10,uVar8,0,2);
    if (piVar6 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        piVar12 = piVar13[1];
        uVar10 = __list_add_valid(piVar6,piVar12,piVar11);
        if ((uVar10 & 1) == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = 0;
            piVar13[1] = piVar6;
            *piVar6 = piVar11;
            piVar6[1] = piVar12;
            *piVar12 = piVar6;
        }
    }
    return uVar4;
}


// ===== sym.av8l_fast_map_sg.11a4d76efea7558fbaf9572365c50d63.cfi_jt @ 0x08002918 (size 8) =====

ulong sym.av8l_fast_map_sg.11a4d76efea7558fbaf9572365c50d63.cfi_jt
                (int64_t param_1,int64_t param_2,uint64_t *param_3,int param_4,uint32_t param_5,ulong param_6,
                int64_t *param_7)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    int iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_4 != 0) {
        uVar3 = 0xc0;
        if ((param_5 & 2) != 0) {
            uVar3 = 0x40;
        }
        uVar14 = 0x60000000000e03;
        if ((param_5 & 0x40) != 0) {
            uVar14 = 0x60000000000e0f;
        }
        if ((param_5 & 4) != 0) {
            uVar14 = 0x60000000000e07;
        }
        if ((param_5 & 0x10) != 0) {
            uVar14 = 0x60000000000e0b;
        }
        iVar13 = 0;
        uVar14 = uVar14 | uVar3;
        do {
            iVar2 = *(param_1 + 0x58);
            uVar4 = param_2 - *(param_1 + 0x70) >> 0xc;
            uVar3 = *(param_3 + 0xc) >> 0xc;
            if (0xfff < *(param_3 + 0xc)) {
                uVar10 = uVar3;
                if (uVar3 < 2) {
                    uVar10 = 1;
                }
                uVar9 = param_3[1] +
                        ((*param_3 & 0x3fffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                        0x8000000000 & 0xfffffffff000;
                if (uVar10 < 2) {
                    uVar7 = 0;
                    uVar5 = uVar9;
                }
                else {
                    uVar7 = uVar10 & 0xffffe;
                    puVar8 = iVar2 + uVar4 * 8 + 8;
                    uVar5 = uVar9 + uVar7 * 0x1000;
                    uVar9 = uVar9 + 0x1000;
                    uVar11 = uVar7;
                    do {
                        uVar12 = uVar9 - 0x1000;
                        uVar1 = uVar14 | uVar9;
                        uVar9 = uVar9 + 0x2000;
                        uVar11 = uVar11 - 2;
                        puVar8[-1] = uVar14 | uVar12;
                        *puVar8 = uVar1;
                        puVar8 = puVar8 + 2;
                    } while (uVar11 != 0);
                    if (uVar10 == uVar7) goto code_r0x08005454;
                }
                iVar6 = uVar10 - uVar7;
                puVar8 = iVar2 + (uVar7 + uVar4) * 8;
                do {
                    uVar10 = uVar14 | uVar5;
                    uVar5 = uVar5 + 0x1000;
                    iVar6 = iVar6 + -1;
                    *puVar8 = uVar10;
                    puVar8 = puVar8 + 1;
                } while (iVar6 != 0);
            }
code_r0x08005454:
            iVar2 = iVar2 + uVar4 * 8;
            sym.av8l_clean_range(param_1 + -0x58,iVar2,iVar2 + uVar3 * 8);
            iVar13 = iVar13 + 1;
            param_2 = param_2 + *(param_3 + 0xc);
            *param_7 = *param_7 + *(param_3 + 0xc);
            param_3 = sg_next(param_3);
        } while (iVar13 != param_4);
    }
    return 0;
}


// ===== sym.arm_lpae_map_sg.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002920 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009220)
//WARNING: Removing unreachable block (ram,0x0800922c)
//WARNING: Removing unreachable block (ram,0x08009284)
//WARNING: Removing unreachable block (ram,0x08009238)
//WARNING: Removing unreachable block (ram,0x08009288)
//WARNING: Removing unreachable block (ram,0x080093bc)
//WARNING: Removing unreachable block (ram,0x080092b0)
//WARNING: Removing unreachable block (ram,0x080092cc)
//WARNING: Removing unreachable block (ram,0x080092dc)
//WARNING: Removing unreachable block (ram,0x08009310)
//WARNING: Removing unreachable block (ram,0x080093e8)
//WARNING: Removing unreachable block (ram,0x080093f0)
//WARNING: Removing unreachable block (ram,0x08009428)

int sym.arm_lpae_map_sg.55b984f7a5e21471df6e15a17290fef8.cfi_jt
              (int64_t param_1,int64_t param_2,uint64_t *param_3,uint32_t param_4,uint32_t param_5,ulong param_6,
              int64_t *param_7)

{
    uint64_t arg2;
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint64_t uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_70 = *(iVar9 + 0x5e0);
    *param_7 = 0;
    uVar3 = _raw_spin_lock_irqsave();
    uVar10 = 0;
    uVar8 = 0;
    uVar11 = 0;
    do {
        uVar12 = param_3[1] + ((*param_3 & 0x3fffffffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40
                 + 0x8000000000;
        if (uVar10 == 0) {
code_r0x08009390:
            uVar10 = *(param_3 + 0xc);
        }
        else {
            if (uVar12 != uVar11 + uVar10) {
                iVar9 = *param_7;
                arg2 = iVar9 + param_2;
                uStack_78 = uVar11;
                sym.arm_lpae_prot_to_pte(param_1 + -0x68,param_5);
                uVar4 = *(param_1 + -0x50);
                uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
                uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                uVar5 = arg2 | uVar11;
                if (((1 << (LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) & 0x1f)) - 1 & (uVar5 | uVar10)) == 0) {
                    if ((arg2 + (uVar10 - 1) >> (*(param_1 + -0x48) & 0x3f) != (*(param_1 + -0x58) << 0x3a) >> 0x3f) ||
                       (uVar11 + (uVar10 - 1) >> (*(param_1 + -0x44) & 0x3f) != 0)) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x800,0x8009484);
                        (*pcVar1)();
                    }
                    if ((param_5 & 3) == 0) {
                        *param_7 = iVar9 + uVar10;
                    }
                    else {
                        uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                        uVar7 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
                        uVar6 = LZCOUNT(uVar10) ^ 0x3fU;
                        if (uVar7 <= (LZCOUNT(uVar10) ^ 0x3fU) && uVar5 != 0) {
                            uVar6 = uVar7;
                        }
                        uVar4 = uVar4 & (-2L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
                        while( true ) {
                            if (uVar4 == 0) goto code_r0x080094ac;
                            iVar9 = 1L << ((LZCOUNT(uVar4) ^ 0x3fU) & 0x3f);
                            iVar2 = sym.__arm_lpae_map(param_1 + -0x68,arg2,uVar11,iVar9);
                            if (iVar2 != 0) goto code_r0x080093c4;
                            uStack_78 = uVar11 + iVar9;
                            uVar10 = uVar10 - iVar9;
                            *param_7 = *param_7 + iVar9;
                            if (uVar10 == 0) break;
                            arg2 = iVar9 + arg2;
                            uVar4 = uStack_78 | arg2;
                            uVar11 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
                            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
                            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                            uVar6 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
                            uVar11 = LZCOUNT(uVar10) ^ 0x3fU;
                            if (uVar6 <= (LZCOUNT(uVar10) ^ 0x3fU) && uVar4 != 0) {
                                uVar11 = uVar6;
                            }
                            uVar4 = *(param_1 + -0x50) & (-2L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
                            uVar11 = uStack_78;
                        }
                    }
                    goto code_r0x08009390;
                }
                _printk(0x800109c,arg2,&uStack_78,uVar10);
                iVar2 = -0x16;
code_r0x080093c4:
                _raw_spin_unlock_irqrestore(param_1 + 0x60,uVar3);
                goto code_r0x0800943c;
            }
            uVar10 = uVar10 + *(param_3 + 0xc);
            uVar12 = uVar11;
        }
        uVar8 = uVar8 + 1;
        if (uVar8 < param_4) {
            param_3 = sg_next(param_3);
        }
        uVar11 = uVar12;
    } while (uVar8 <= param_4);
    _raw_spin_unlock_irqrestore(param_1 + 0x60,uVar3);
    DataSynchronizationBarrier(3,2,0);
    iVar2 = 0;
code_r0x0800943c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_70) {
        return iVar2;
    }
    __stack_chk_fail();
code_r0x080094ac:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80094b0);
    (*pcVar1)();
}


// ===== sym.fast_smmu_free.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002928 (size 8) =====

void sym.fast_smmu_free.5a2e0149000a936629ebf63764a9885f.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    uint64_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong noname_0;
    ulong *in_x18;
    ulong *puVar6;
    uint64_t arg3;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = iommu_get_domain_for_dev();
    if (uVar1 == 0) {
        iVar7 = -0x16;
    }
    else {
        uVar2 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar5 = _segment.ehdr; iVar5 != 0; iVar5 = *(iVar5 + 0x10)) {
            while( true ) {
                iVar7 = iVar5 + -0x88;
                if (uVar1 < *(iVar5 + -0x80)) break;
                if (uVar1 <= *(iVar5 + -0x80)) goto code_r0x080071b8;
                iVar5 = *(iVar5 + 8);
                if (iVar5 == 0) goto code_r0x080071b4;
            }
        }
code_r0x080071b4:
        iVar7 = 0;
code_r0x080071b8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar2);
    }
    uVar1 = param_2 + 0xfff;
    arg3 = uVar1 & 0xfffffffffffff000;
    uVar2 = _raw_spin_lock_irqsave(iVar7 + 0x68);
    sym.av8l_fast_unmap_public(*(iVar7 + 0x60),param_4,arg3);
    __bitmap_clear(*(iVar7 + 0x38),param_4 - *(iVar7 + 0x18) >> 0xc,uVar1 >> 0xc & 0xffffffff);
    *(iVar7 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar7 + 0x68,uVar2);
    uVar3 = sym.qcom_dma_free_from_pool(noname_0,param_3,arg3);
    if ((uVar3 & 1) == 0) {
        uVar3 = is_vmalloc_addr(param_3);
        if ((uVar3 & 1) == 0) {
            iVar7 = (((param_3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
        }
        else {
            puVar4 = sym.qcom_dma_common_find_pages(param_3);
            if (puVar4 != NULL) {
                sym.qcom_dma_common_free_remap(param_3);
                if (0 < uVar1 >> 0xc) {
                    uVar1 = uVar1 >> 0xc & 0xffffffff;
                    puVar6 = puVar4;
                    do {
                        __free_pages(*puVar6,0);
                        uVar1 = uVar1 - 1;
                        puVar6 = puVar6 + 1;
                    } while (uVar1 != 0);
                }
                kvfree(puVar4);
                return;
            }
            iVar7 = vmalloc_to_page(param_3);
            sym.qcom_dma_common_free_remap(param_3);
        }
        if (iVar7 != 0) {
            sym.qcom_dma_free_contiguous(param_1,iVar7,arg3);
        }
    }
    return;
}


// ===== sym.av8l_fast_unmap.11a4d76efea7558fbaf9572365c50d63.cfi_jt @ 0x08002930 (size 8) =====

uint64_t sym.av8l_fast_unmap.11a4d76efea7558fbaf9572365c50d63.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t arg2;
    ulong *in_x18;
    uint64_t uVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = param_3 >> 9 & 0x7ffffffffffff8;
    arg2 = *(param_1 + 0x58) + (param_2 - *(param_1 + 0x70) >> 9 & 0x7ffffffffffff8);
    memset(arg2,0,uVar1);
    sym.av8l_clean_range(param_1 + -0x58,arg2,arg2 + uVar1);
    if ((*(param_1 + -0x38) != NULL) && (pcVar2 = **(param_1 + -0x38), pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar2,0x8000960);
        (*pcVar2)(*(param_1 + -0x60));
    }
    return param_3;
}


// ===== sym.arm_lpae_unmap.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002938 (size 8) =====

void sym.arm_lpae_unmap.55b984f7a5e21471df6e15a17290fef8.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_lpae_unmap_pages(param_1,param_2,param_3,1);
    return;
}


// ===== sym.fast_smmu_unmap_sg.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002940 (size 8) =====

void sym.fast_smmu_unmap_sg.5a2e0149000a936629ebf63764a9885f.cfi_jt
               (ulong param_1,int64_t param_2,uint32_t param_3,uint64_t param_4,uint32_t param_5)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    int iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar7 = -0x16;
        uVar3 = extraout_x8;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar7 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x080078f0;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x080078ec;
            }
        }
code_r0x080078ec:
        iVar7 = 0;
code_r0x080078f0:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
        uVar3 = extraout_x8_00;
    }
    if ((param_5 >> 5 & 1) == 0) {
        sym.fast_smmu_sync_sg_for_cpu(uVar3,param_2,param_3,param_4 & 0xffffffff);
    }
    uVar2 = *(param_2 + 0x10);
    iVar4 = sg_next(param_2);
    iVar6 = param_3 - 1;
    if (0 < iVar6) {
        do {
            iVar5 = iVar4;
            if (*(iVar5 + 0x18) == 0) break;
            iVar4 = sg_next();
            iVar6 = iVar6 + -1;
            param_2 = iVar5;
        } while (iVar6 != 0);
    }
    uVar1 = (*(param_2 + 0x10) - (uVar2 & 0xfffffffffffff000)) + *(param_2 + 0x18) + 0xfff;
    sym.av8l_fast_unmap_public(*(iVar7 + 0x60),uVar2,uVar1 & 0xfffffffffffff000);
    uVar3 = _raw_spin_lock_irqsave(iVar7 + 0x68);
    __bitmap_clear(*(iVar7 + 0x38),uVar2 - *(iVar7 + 0x18) >> 0xc,uVar1 >> 0xc);
    *(iVar7 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar7 + 0x68,uVar3);
    return;
}


// ===== sym.qcom_skip_tlb_management.cfi_jt @ 0x08002948 (size 8) =====

ulong sym.qcom_skip_tlb_management.cfi_jt(ulong param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = iommu_get_domain_for_dev();
    if ((iVar1 != 0) && (pcVar2 = *(*(iVar1 + 8) + -8), pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x984aa404cc097cc5,pcVar2,0x8000800);
        (*pcVar2)(iVar1,param_2 & 1);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP12iommu_domainiE_global_addr @ 0x08002950 (size 8) =====

uint sym.__typeid__ZTSFiP12iommu_domainiE_global_addr(int64_t param_1,uint64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0xffffffea;
    if ((param_2 < 0x10) && (pcVar2 = *(*(param_1 + 8) + -0x20), pcVar2 != NULL)) {
        if (pcVar2 != sym.__typeid__ZTSFiP12iommu_domainiE_global_addr) {
            __cfi_slowpath_diag(0x6a7cc3e6301bd48c,pcVar2,0x8000880);
            param_2 = param_2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFvP6deviceP9list_headE_global_addr @ 0x08002958 (size 8) =====

void sym.__typeid__ZTSFvP6deviceP9list_headE_global_addr(ulong param_1,int64_t ***param_2)

{
    int64_t ***pppiVar1;
    ulong ****ppppuVar2;
    int iVar3;
    int64_t ****ppppiVar4;
    uint64_t uVar5;
    ulong ***pppuVar6;
    int64_t iVar7;
    code *pcVar8;
    int64_t ***pppiVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong ****ppppuVar10;
    ulong ****ppppuVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int64_t ***pppiStack_88;
    int64_t ***pppiStack_80;
    ulong ***pppuStack_78;
    ulong ***pppuStack_70;
    code *pcStack_68;
    ulong ***pppuStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    pppiStack_88 = &pppiStack_88;
    pcStack_68 = sym.insert_range.26a21a78fdce4965dbb213a059d6010e.cfi_jt;
    pppiStack_80 = pppiStack_88;
    pppuStack_78 = &pppuStack_78;
    pppuStack_70 = &pppuStack_78;
    pppuStack_60 = &pppuStack_78;
    iVar3 = sym.of_property_walk_each_entry(param_1,0x8000d79,&pcStack_68);
    if (iVar3 != 0) goto code_r0x08003064;
    if (&pppuStack_78 != pppuStack_78) {
        if (pppuStack_78 == &pppuStack_78) {
            ppppuVar11 = NULL;
            pppuVar6 = pppuStack_78[2];
            if (pppuVar6 != NULL) goto code_r0x08002f54;
code_r0x08002f90:
            if ((ppppuVar11[3] < ~ppppuVar11[2]) && (iVar7 = ppppuVar11[3] + ppppuVar11[2], iVar7 != 0)) {
                ppppiVar4 = iommu_alloc_resv_region(iVar7,-iVar7,0,2);
                pppiVar1 = pppiStack_80;
                if (ppppiVar4 == NULL) goto code_r0x08003034;
                uVar5 = __list_add_valid(ppppiVar4,pppiStack_80,&pppiStack_88);
                if ((uVar5 & 1) != 0) {
                    *ppppiVar4 = &pppiStack_88;
                    ppppiVar4[1] = pppiVar1;
                    pppiStack_80 = ppppiVar4;
                    *pppiVar1 = ppppiVar4;
                }
            }
            generic_iommu_put_resv_regions(param_1,&pppuStack_78);
            pppiVar1 = pppiStack_80;
            for (ppppiVar4 = pppiStack_88; ppppiVar4 != &pppiStack_88; ppppiVar4 = *ppppiVar4) {
            }
            if (&pppiStack_88 != pppiStack_88) {
                pppiVar9 = *param_2;
                pppiStack_88[1] = param_2;
                *param_2 = pppiStack_88;
                *pppiVar1 = pppiVar9;
                pppiVar9[1] = pppiVar1;
            }
            goto code_r0x08003064;
        }
        ppppuVar2 = pppuStack_78;
        ppppuVar10 = NULL;
        do {
            ppppuVar11 = ppppuVar2;
            if (ppppuVar10 != NULL) {
                iVar7 = ppppuVar11[2] - (ppppuVar10[3] + ppppuVar10[2]);
                if (iVar7 != 0) {
                    ppppiVar4 = iommu_alloc_resv_region(ppppuVar10[3] + ppppuVar10[2],iVar7,0,2);
                    pppiVar1 = pppiStack_80;
                    if (ppppiVar4 == NULL) goto code_r0x08003034;
                    uVar5 = __list_add_valid(ppppiVar4,pppiStack_80,&pppiStack_88);
                    if ((uVar5 & 1) != 0) {
                        *ppppiVar4 = &pppiStack_88;
                        ppppiVar4[1] = pppiVar1;
                        pppiStack_80 = ppppiVar4;
                        *pppiVar1 = ppppiVar4;
                    }
                }
            }
            ppppuVar2 = *ppppuVar11;
            ppppuVar10 = ppppuVar11;
        } while (*ppppuVar11 != &pppuStack_78);
        pppuVar6 = pppuStack_78[2];
        if (pppuVar6 == NULL) goto code_r0x08002f90;
code_r0x08002f54:
        ppppiVar4 = iommu_alloc_resv_region(0,pppuVar6,0,2);
        pppiVar1 = pppiStack_88;
        if (ppppiVar4 != NULL) {
            uVar5 = __list_add_valid(ppppiVar4,&pppiStack_88,pppiStack_88);
            if ((uVar5 & 1) != 0) {
                pppiVar1[1] = ppppiVar4;
                *ppppiVar4 = pppiVar1;
                ppppiVar4[1] = &pppiStack_88;
                pppiStack_88 = ppppiVar4;
            }
            goto code_r0x08002f90;
        }
code_r0x08003034:
        ppppiVar4 = pppiStack_88;
        while (ppppiVar4 != &pppiStack_88) {
            ppppiVar4 = *ppppiVar4;
            kfree();
        }
    }
    generic_iommu_put_resv_regions(param_1,&pppuStack_78);
code_r0x08003064:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = 0x80030a0;
    iVar7 = *(*(auVar12._0_8_ + 0x80) + 0x98);
    if ((iVar7 != 0) && (pcVar8 = *(iVar7 + 0xa0), pcVar8 != NULL)) {
        if (2 < (pcVar8 + -0x8002958 >> 3 | pcVar8 << 0x3d)) {
            __cfi_slowpath_diag(0x54724e8ec07fc596,pcVar8,0x8000760);
        }
        (*pcVar8)(auVar12._0_8_,auVar12._8_8_);
    }
    return;
}


// ===== sym.qcom_iommu_put_resv_regions.cfi_jt @ 0x08002960 (size 8) =====

void sym.qcom_iommu_put_resv_regions.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x80) + 0x98);
    if ((iVar1 != 0) && (pcVar2 = *(iVar1 + 0xa8), pcVar2 != NULL)) {
        if (2 < (pcVar2 + -0x8002958 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x54724e8ec07fc596,pcVar2,0x8000780);
        }
        (*pcVar2)(param_1,param_2);
    }
    return;
}


// ===== sym.qcom_iommu_get_resv_regions.cfi_jt @ 0x08002968 (size 8) =====

void sym.qcom_iommu_get_resv_regions.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x80) + 0x98);
    if ((iVar1 != 0) && (pcVar2 = *(iVar1 + 0xa0), pcVar2 != NULL)) {
        if (2 < (pcVar2 + -0x8002958 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x54724e8ec07fc596,pcVar2,0x8000760);
        }
        (*pcVar2)(param_1,param_2);
    }
    return;
}


// ===== sym.atomic_pool_work_fn.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt @ 0x08002970 (size 8) =====

void sym.atomic_pool_work_fn.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt(void)

{
    int64_t arg1;
    uint64_t uVar1;
    int64_t arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *0x800b000;
    if (*0x800b000 != 0) {
        uVar1 = gen_pool_avail(*0x800b000);
        if (uVar1 < _segment.ehdr) {
            arg2 = gen_pool_size(arg1);
            sym.atomic_pool_expand(arg1,arg2);
        }
    }
    return;
}


// ===== sym.qcom_dma_iommu_remove.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt @ 0x08002978 (size 8) =====

ulong sym.qcom_dma_iommu_remove.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_dma_atomic_pool_exit(param_1 + 0x10);
    return 0;
}


// ===== sym.qcom_dma_iommu_probe.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt @ 0x08002980 (size 8) =====

int sym.qcom_dma_iommu_probe.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt(int64_t param_1)

{
    uint64_t arg1;
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    arg1 = param_1 + 0x10;
    iStack_38 = *(iVar2 + 0x5e0);
    _segment.ehdr = arg1;
    if ((*(param_1 + 0x35c) >> 5 & 1) == 0) {
        iVar1 = of_reserved_mem_device_init_by_idx(arg1,*(param_1 + 0x300),0);
        if (iVar1 != 0) goto code_r0x08004bd8;
        if (*(param_1 + 0x2f0) != 0) {
            uVar5 = __totalram_pages >> 0xd;
            if (0x3ff < uVar5) {
                uVar5 = 0x400;
            }
            uVar5 = uVar5 * 0x1000;
            _obj.atomic_pool_work = 0xfffffffe0;
            if (uVar5 < 0x20001) {
                uVar5 = 0x20000;
            }
            *0x8000580 = 0x8000580;
            *0x8000588 = 0x8000580;
            uStack_3c = 0xcc0;
            *0x8000590 = sym.atomic_pool_work_fn.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt;
            _segment.ehdr = uVar5;
            iVar2 = gen_pool_create(0xc,0xffffffff);
            if (iVar2 == 0) {
                iVar1 = -0xc;
                *0x800b000 = 0;
            }
            else {
                gen_pool_set_algo(iVar2,sym.gen_pool_first_fit_order_align.cfi_jt,0);
                iVar1 = sym.atomic_pool_expand(iVar2,uVar5);
                if (iVar1 == 0) {
                    uVar5 = gen_pool_size(iVar2);
                    uVar3 = 0x800113f;
                }
                else {
                    gen_pool_destroy(iVar2);
                    iVar2 = 0;
                    uVar3 = 0x8000df0;
                }
                _printk(uVar3,uVar5 >> 10,&uStack_3c);
                *0x800b000 = iVar2;
                if (iVar2 == 0) {
                    iVar1 = -0xc;
                }
                else {
                    uVar5 = debugfs_create_dir("qcom_dma_pools",0);
                    if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
                        debugfs_create_ulong("pool_size",0x100,uVar5,obj.current_pool_size);
                    }
                    iVar1 = dma_set_mask(arg1,0xffffffffffffffff);
                    if (iVar1 == 0) {
                        dma_set_coherent_mask(arg1,0xffffffffffffffff);
                        obj.probe_finished = 0x1;
                    }
                    else {
                        sym.qcom_dma_atomic_pool_exit(arg1);
                    }
                }
            }
            goto code_r0x08004bd8;
        }
        pcVar4 = "Unable to find cma area\n";
        _segment.ehdr = 0;
    }
    else {
        pcVar4 = "Cannot be dma-coherent\n";
    }
    _dev_err(arg1,pcVar4);
    iVar1 = -0x16;
code_r0x08004bd8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = 0x8004cf4;
    sym.qcom_dma_atomic_pool_exit(iVar2 + 0x10);
    return 0;
}


// ===== sym.fast_smmu_map_sg.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002988 (size 8) =====

uint64_t sym.fast_smmu_map_sg.5a2e0149000a936629ebf63764a9885f.cfi_jt
                   (int64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4,int64_t param_5)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t arg2;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t arg1;
    uint64_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    ulong noname_0;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar9 = *(iVar13 + 0x5e0);
    uVar11 = param_4;
    param_3 = param_3 & 0xffffffff;
    iVar13 = param_5;
    uVar2 = iommu_get_domain_for_dev();
    uVar8 = iVar13;
    uVar12 = param_5;
    if (uVar2 == 0) {
        iVar13 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar13 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08007724;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08007720;
            }
        }
code_r0x08007720:
        iVar13 = 0;
code_r0x08007724:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    if ((uVar12 >> 0xf & 1) == 0) {
        if ((uVar12 >> 0x10 & 1) == 0) {
            uVar1 = *(param_1 + 0x34c) >> 5 & 1;
        }
        else {
            uVar1 = 0;
        }
    }
    else {
        uVar1 = 1;
    }
    uVar1 = sym.qcom_dma_info_to_prot(param_4,uVar1,param_5);
    uVar2 = param_2;
    uVar7 = param_3;
    iVar4 = sym.qcom_iommu_dma_prepare_map_sg(param_1,*(iVar13 + 0x10),param_2,param_3);
    uVar3 = _raw_spin_lock_irqsave(iVar13 + 0x68);
    arg2 = sym.__fast_smmu_alloc_iova(iVar13,iVar4);
    _raw_spin_unlock_irqrestore(iVar13 + 0x68,uVar3);
    if (arg2 == 0xffffffffffffffff) {
        sym.qcom_iommu_dma_invalidate_sg(param_2,param_3);
        uVar5 = 0;
    }
    else {
        uVar8 = uVar1;
        sym.av8l_fast_map_sg(*(iVar13 + 0x60),arg2,param_2,param_3);
        uVar2 = param_3;
        uVar5 = sym.qcom_iommu_dma_finalise_sg(param_1,param_2,param_3,arg2);
        uVar5 = uVar5 & 0xffffffff;
        uVar7 = arg2;
        if ((uVar12 >> 5 & 1) == 0) {
            sym.fast_smmu_sync_sg_for_device(noname_0,param_2,param_3,uVar11);
            uVar2 = param_3;
            uVar7 = uVar11;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iVar9) {
        return uVar5;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.fast_smmu_unmap_sg;
    uVar11 = iommu_get_domain_for_dev();
    if (uVar11 == 0) {
        iVar13 = -0x16;
        uVar3 = extraout_x8;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar9 = _segment.ehdr; iVar9 != 0; iVar9 = *(iVar9 + 0x10)) {
            while( true ) {
                iVar13 = iVar9 + -0x88;
                if (uVar11 < *(iVar9 + -0x80)) break;
                if (uVar11 <= *(iVar9 + -0x80)) goto code_r0x080078f0;
                iVar9 = *(iVar9 + 8);
                if (iVar9 == 0) goto code_r0x080078ec;
            }
        }
code_r0x080078ec:
        iVar13 = 0;
code_r0x080078f0:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
        uVar3 = extraout_x8_00;
    }
    if ((uVar8 >> 5 & 1) == 0) {
        sym.fast_smmu_sync_sg_for_cpu(uVar3,arg1,uVar2 & 0xffffffff,uVar7 & 0xffffffff);
    }
    uVar11 = *(arg1 + 0x10);
    iVar9 = sg_next(arg1);
    iVar10 = uVar2 + -1;
    iVar4 = arg1;
    if (0 < iVar10) {
        do {
            iVar6 = iVar9;
            if (*(iVar6 + 0x18) == 0) break;
            iVar9 = sg_next();
            iVar10 = iVar10 + -1;
            iVar4 = iVar6;
        } while (iVar10 != 0);
    }
    uVar2 = (*(iVar4 + 0x10) - (uVar11 & 0xfffffffffffff000)) + *(iVar4 + 0x18) + 0xfff;
    sym.av8l_fast_unmap_public(*(iVar13 + 0x60),uVar11,uVar2 & 0xfffffffffffff000);
    uVar3 = _raw_spin_lock_irqsave(iVar13 + 0x68);
    __bitmap_clear(*(iVar13 + 0x38),uVar11 - *(iVar13 + 0x18) >> 0xc,uVar2 >> 0xc);
    *(iVar13 + 0x50) = 1;
    uVar2 = _raw_spin_unlock_irqrestore(iVar13 + 0x68,uVar3);
    return uVar2;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08002990 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    int iVar5;
    char cVar6;
    bool bVar7;
    code *pcVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int *piVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    int64_t unaff_x25;
    ulong unaff_x30;
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    piVar11 = param_1 + -4;
    iVar5 = *piVar11;
    xa_erase(obj.__fast_smmu_create_mapping_sized.__key,iVar5);
    piVar1 = param_1 + 0xc;
    piVar13 = *piVar1;
    piVar12 = piVar13 + -1;
    if (piVar13 != piVar1 && piVar12 != NULL) {
        uVar10 = __list_del_entry_valid(piVar13);
        if ((uVar10 & 1) != 0) {
            iVar2 = *piVar13;
            piVar3 = piVar13[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        unaff_x25 = -0x2152ffffffffff00;
        *piVar13 = -0x2152ffffffffff00;
        piVar13[1] = -0x2152fffffffffede;
        goto code_r0x0800af40;
    }
    do {
        kfree(piVar11);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
code_r0x0800af40:
        Hint_Prefetch(0x80005d8,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(0x80005d8,0x10);
            if (bVar7) {
                cVar6 = ExclusiveMonitorsStatus();
                _obj.page_pool_count = _obj.page_pool_count + -1;
            }
        } while (cVar6 != '\0');
        dec_node_page_state(piVar12,0x21);
        while( true ) {
            if (iVar5 != 0) {
                iVar4 = *piVar11;
                uStack_6c = 3;
                uStack_78 = CONCAT44(iVar4,3);
                uStack_70 = 7;
                iVar9 = hyp_assign_phys((piVar12 + (_gen_pool_first_fit_order_align >> 0xc) * 8) * 0x40 + 0x8000000000,
                                        0x1000,&uStack_78,2,&uStack_6c,&uStack_70,1);
                if (iVar9 != 0) {
                    __warn_printk("failed to unassign memory from VMID: %u rc: %d\n",iVar4,iVar9);
    //WARNING: Does not return
                    pcVar8 = SoftwareBreakpoint(0x800,0x800af24);
                    (*pcVar8)();
                }
            }
            __free_pages(piVar12,0);
            piVar12 = NULL;
            if (*piVar1 != piVar1) {
                piVar12 = *piVar1 + -1;
            }
            if (piVar12 == NULL) break;
            uVar10 = __list_del_entry_valid(piVar12 + 1);
            if ((uVar10 & 1) != 0) {
                iVar2 = piVar12[1];
                piVar13 = piVar12[2];
                *(iVar2 + 8) = piVar13;
                *piVar13 = iVar2;
            }
            piVar12[1] = unaff_x25;
            piVar12[2] = unaff_x25 + 0x22;
            Hint_Prefetch(0x80005d8,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(0x80005d8,0x10);
                if (bVar7) {
                    cVar6 = ExclusiveMonitorsStatus();
                    _obj.page_pool_count = _obj.page_pool_count + -1;
                }
            } while (cVar6 != '\0');
            dec_node_page_state(piVar12,0x21);
        }
    } while( true );
}


// ===== sym.fast_smmu_get_sgtable.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002998 (size 8) =====

void sym.fast_smmu_get_sgtable.5a2e0149000a936629ebf63764a9885f.cfi_jt
               (ulong param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_iommu_dma_get_sgtable(param_1,param_3,param_4);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080029a0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800b000 == NULL) {
code_r0x0800b938:
        iVar1 = 0;
    }
    else {
        pcVar2 = *0x800b000;
        uVar4 = 0;
        while (iVar1 = (*pcVar2)(), iVar1 == 0) {
            if (uVar4 - 0x20 < 0xffffffffffffffd8) goto code_r0x0800b9bc;
            pcVar2 = *(reloc.qcom_dma_iommu_generic_driver_init.cfi_jt + uVar4);
            uVar4 = uVar4 + 8;
            if (pcVar2 == NULL) goto code_r0x0800b938;
        }
        _printk(0x8000a45,*(reloc.dma_mapping_fast_init.cfi_jt + uVar4),iVar1);
        if (0x2f < uVar4) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x800b9c4);
            (*pcVar2)();
        }
        uVar3 = uVar4 + 0x8001178;
        while (0x800117f < uVar3) {
            if (0x20 < uVar4 - 8) {
code_r0x0800b9bc:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x800b9c0);
                (*pcVar2)();
            }
            if (*(uVar4 + 0x8001178) != NULL) {
                (**(uVar4 + 0x8001178))();
            }
            uVar3 = uVar4 + 0x8001170;
            uVar4 = uVar4 - 8;
        }
    }
    return iVar1;
}


// ===== sym.dma_mapping_fast_init.cfi_jt @ 0x080029a8 (size 8) =====

void sym.dma_mapping_fast_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    android_rvh_probe_register
              (__tracepoint_android_rvh_iommu_setup_dma_ops,
               sym.__fast_smmu_setup_dma_ops.5a2e0149000a936629ebf63764a9885f.cfi_jt,0);
    return;
}


// ===== sym.qcom_arm_lpae_do_selftests.cfi_jt @ 0x080029b0 (size 8) =====

ulong sym.qcom_arm_lpae_do_selftests.cfi_jt(void)

{
    return 0;
}


// ===== sym.qcom_dma_iommu_generic_driver_init.cfi_jt @ 0x080029b8 (size 8) =====

void sym.qcom_dma_iommu_generic_driver_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dma_iommu_probe.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_io_pgtable_alloc_init.cfi_jt @ 0x080029c0 (size 8) =====

void sym.qcom_io_pgtable_alloc_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    register_shrinker(reloc.io_pgtable_alloc_count_objects.3b8e7fc3d2a98b9a1dd59c7698606bee.cfi_jt);
    return;
}


// ===== sym.fast_smmu_dma_map_resource.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x080029c8 (size 8) =====

int64_t sym.fast_smmu_dma_map_resource.5a2e0149000a936629ebf63764a9885f.cfi_jt
                  (ulong param_1,uint64_t param_2,int64_t param_3,uint32_t param_4,int64_t param_5)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = iommu_get_domain_for_dev();
    if (uVar3 == 0) {
        arg1 = -0x16;
    }
    else {
        uVar4 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar6 = _segment.ehdr; iVar6 != 0; iVar6 = *(iVar6 + 0x10)) {
            while( true ) {
                arg1 = iVar6 + -0x88;
                if (uVar3 < *(iVar6 + -0x80)) break;
                if (uVar3 <= *(iVar6 + -0x80)) goto code_r0x08007a64;
                iVar6 = *(iVar6 + 8);
                if (iVar6 == 0) goto code_r0x08007a60;
            }
        }
code_r0x08007a60:
        arg1 = 0;
code_r0x08007a64:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar4);
    }
    iVar6 = arg1 + 0x68;
    uVar3 = ((param_3 + (param_2 & 0xfff)) - 1 | 0xfff) + 1;
    uVar4 = _raw_spin_lock_irqsave(iVar6);
    iVar5 = sym.__fast_smmu_alloc_iova(arg1,uVar3);
    _raw_spin_unlock_irqrestore(iVar6,uVar4);
    if (iVar5 != -1) {
        uVar1 = sym.qcom_dma_info_to_prot(param_4,0,param_5);
        iVar2 = iommu_map(*(arg1 + 8),iVar5,param_2 & 0xfffffffffffff000,uVar3,uVar1 | 0x10);
        if (iVar2 == 0) {
            return iVar5 + (param_2 & 0xfff);
        }
        uVar4 = _raw_spin_lock_irqsave(iVar6);
        __bitmap_clear(*(arg1 + 0x38),iVar5 - *(arg1 + 0x18) >> 0xc,uVar3 >> 0xc);
        *(arg1 + 0x50) = 1;
        _raw_spin_unlock_irqrestore(iVar6,uVar4);
    }
    return -1;
}


// ===== sym.gen_pool_first_fit_order_align.cfi_jt @ 0x080029d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.gen_pool_first_fit_order_align.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.fast_smmu_mmap_attrs.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x080029d8 (size 8) =====

void sym.fast_smmu_mmap_attrs.5a2e0149000a936629ebf63764a9885f.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_iommu_dma_mmap(param_1,param_2,param_3);
    return;
}


// ===== sym.fast_smmu_sync_sg_for_device.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x080029e0 (size 8) =====

void sym.fast_smmu_sync_sg_for_device.5a2e0149000a936629ebf63764a9885f.cfi_jt
               (ulong param_1,uint64_t *param_2,int param_3,uint32_t param_4)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t arg2;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = param_2[2];
    uVar1 = iommu_get_domain_for_dev();
    if (uVar1 == 0) {
        iVar4 = -0x16;
    }
    else {
        uVar2 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar3 = _segment.ehdr; iVar3 != 0; iVar3 = *(iVar3 + 0x10)) {
            while( true ) {
                iVar4 = iVar3 + -0x88;
                if (uVar1 < *(iVar3 + -0x80)) break;
                if (uVar1 <= *(iVar3 + -0x80)) goto code_r0x08007fd4;
                iVar3 = *(iVar3 + 8);
                if (iVar3 == 0) goto code_r0x08007fd0;
            }
        }
code_r0x08007fd0:
        iVar4 = 0;
code_r0x08007fd4:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar2);
    }
    uVar1 = sym.av8l_fast_iova_coherent_public(*(iVar4 + 0x60),arg2);
    if ((0 < param_3) && ((uVar1 & 1) == 0)) {
        do {
            sym.qcom_arch_sync_dma_for_device
                      (param_2[1] +
                       ((*param_2 & 0x3fffffffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                       0x8000000000,*(param_2 + 0xc),param_4);
            param_2 = sg_next(param_2);
            param_3 = param_3 + -1;
        } while (param_3 != 0);
    }
    return;
}


// ===== sym.fast_smmu_sync_sg_for_cpu.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x080029e8 (size 8) =====

void sym.fast_smmu_sync_sg_for_cpu.5a2e0149000a936629ebf63764a9885f.cfi_jt
               (ulong param_1,uint64_t *param_2,int param_3,uint32_t param_4)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t arg2;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = param_2[2];
    uVar1 = iommu_get_domain_for_dev();
    if (uVar1 == 0) {
        iVar4 = -0x16;
    }
    else {
        uVar2 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar3 = _segment.ehdr; iVar3 != 0; iVar3 = *(iVar3 + 0x10)) {
            while( true ) {
                iVar4 = iVar3 + -0x88;
                if (uVar1 < *(iVar3 + -0x80)) break;
                if (uVar1 <= *(iVar3 + -0x80)) goto code_r0x08007ec0;
                iVar3 = *(iVar3 + 8);
                if (iVar3 == 0) goto code_r0x08007ebc;
            }
        }
code_r0x08007ebc:
        iVar4 = 0;
code_r0x08007ec0:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar2);
    }
    uVar1 = sym.av8l_fast_iova_coherent_public(*(iVar4 + 0x60),arg2);
    if ((0 < param_3) && ((uVar1 & 1) == 0)) {
        do {
            sym.qcom_arch_sync_dma_for_cpu
                      (param_2[1] +
                       ((*param_2 & 0x3fffffffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                       0x8000000000,*(param_2 + 0xc),param_4);
            param_2 = sg_next(param_2);
            param_3 = param_3 + -1;
        } while (param_3 != 0);
    }
    return;
}


// ===== sym.fast_smmu_alloc.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x080029f0 (size 8) =====

uint64_t sym.fast_smmu_alloc.5a2e0149000a936629ebf63764a9885f.cfi_jt
                   (int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,int64_t *param_5)

{
    int64_t arg2;
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t arg2_00;
    ulong *puVar7;
    int64_t *piVar8;
    int64_t *arg3;
    int iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong noname_0;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *puVar12;
    int64_t iVar13;
    uint64_t arg3_00;
    uint32_t arg2_01;
    uint32_t uVar14;
    int64_t *arg2_02;
    uint64_t unaff_x30;
    uchar auVar15 [16];
    int64_t iStack_c0;
    ulong uStack_b8;
    int64_t *piStack_b0;
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
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    uVar2 = param_4;
    uVar4 = iommu_get_domain_for_dev();
    if (uVar4 == 0) {
        iVar13 = -0x16;
    }
    else {
        uVar5 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar11 = _segment.ehdr; iVar11 != 0; iVar11 = *(iVar11 + 0x10)) {
            while( true ) {
                iVar13 = iVar11 + -0x88;
                if (uVar4 < *(iVar11 + -0x80)) break;
                if (uVar4 <= *(iVar11 + -0x80)) goto code_r0x08006cc8;
                iVar11 = *(iVar11 + 8);
                if (iVar11 == 0) goto code_r0x08006cc4;
            }
        }
code_r0x08006cc4:
        iVar13 = 0;
code_r0x08006cc8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar5);
    }
    uVar4 = param_2 + 0xfff;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    piStack_b0 = NULL;
    iStack_c0 = 0;
    uVar14 = param_5;
    if ((uVar14 >> 0xf & 1) == 0) {
        if ((uVar14 >> 0x10 & 1) == 0) {
            arg2_01 = *(param_1 + 0x34c) >> 5 & 1;
        }
        else {
            arg2_01 = 0;
        }
    }
    else {
        arg2_01 = 1;
    }
    piVar10 = uVar4 >> 0xc;
    piVar8 = param_5;
    sym.qcom_dma_info_to_prot(0,arg2_01,param_5);
    arg3 = 0x68000000000703;
    if (arm64_use_ng_mappings != 0x0) {
        arg3 = 0x68000000000f03;
    }
    if (((param_5 & 4) == 0 & arg2_01) == 0) {
        arg3 = arg3 | 0x60000000000008;
    }
    if (uVar4 >> 0x2c == 0) {
        arg2_02 = uVar4 & 0xfffffffffffff000;
        uVar1 = uVar2 | 0x100;
        *param_3 = -1;
        if ((uVar2 >> 10 & 1) == 0) {
            param_3 = uVar1;
            uVar6 = sym.fast_smmu_alloc_atomic(iVar13,arg2_02,param_3,param_5);
            goto code_r0x080070c8;
        }
        if ((uVar14 >> 6 & 1) != 0) {
            param_5 = uVar1;
            uVar6 = sym.__fast_smmu_alloc_contiguous(param_1,arg2_02,param_3,param_5);
            goto code_r0x080070c8;
        }
        iVar9 = piVar10;
        if (iVar9 << 3 < 0x1001) {
            puVar7 = __kmalloc(iVar9 << 3,0xdc0);
        }
        else {
            puVar7 = vzalloc();
        }
        if (puVar7 == NULL) {
code_r0x080070b4:
            _dev_err(param_1,"no pages\n");
            param_3 = piVar8;
            param_5 = param_4;
        }
        else {
            if (iVar9 != 0) {
                uVar6 = 0;
                do {
                    uVar5 = tpidr_el1;
                    piVar8 = NULL;
                    param_4 = NULL;
                    iVar11 = __alloc_pages(uVar5,uVar2 | 0x2102,0);
                    if (iVar11 == 0) {
                        if (0 < uVar6) {
                            uVar4 = 0;
                            do {
                                __free_pages(puVar7[uVar4],0);
                                uVar4 = uVar4 + 1;
                            } while (uVar6 != uVar4);
                        }
                        kvfree(puVar7);
                        goto code_r0x080070b4;
                    }
                    puVar7[uVar6] = iVar11;
                    uVar6 = uVar6 + 1;
                } while ((uVar4 >> 0xc & 0xffffffff) != uVar6);
            }
            param_5 = NULL;
            iVar3 = sg_alloc_table_from_pages_segment(&uStack_78,puVar7,piVar10,0,arg2_02,0xffffffff,uVar1);
            if (iVar3 == 0) {
                if (arg2_01 == 0) {
                    piVar10 = uStack_70 >> 0x20;
                    param_5 = 0x4;
                    sg_miter_start(&iStack_c0,uStack_78);
                    while (uVar6 = sg_miter_next(&iStack_c0), (uVar6 & 1) != 0) {
                        sym.qcom_arch_dma_prep_coherent(iStack_c0,piStack_b0);
                    }
                    sg_miter_stop(&iStack_c0);
                }
                iVar11 = iVar13 + 0x68;
                uVar5 = _raw_spin_lock_irqsave(iVar11);
                arg2_00 = sym.__fast_smmu_alloc_iova(iVar13,arg2_02);
                if (arg2_00 == -1) {
                    _dev_err(param_1,"no iova\n");
                }
                else {
                    sg_miter_start(&iStack_c0,uStack_78,uStack_70._4_4_,5);
                    uVar6 = sg_miter_next(&iStack_c0);
                    arg2 = arg2_00;
                    param_5 = piStack_b0;
                    while (piStack_b0 = param_5, (uVar6 & 1) != 0) {
                        iVar3 = sym.av8l_fast_map_public
                                          (*(iVar13 + 0x60),arg2,
                                           (iStack_c0 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                                           0x8000000000,param_5);
                        if (iVar3 != 0) {
                            _dev_err(param_1,"no map public\n");
                            goto code_r0x0800702c;
                        }
                        arg2 = piStack_b0 + arg2;
                        uVar6 = sg_miter_next(&iStack_c0);
                        param_5 = piStack_b0;
                    }
                    sg_miter_stop(&iStack_c0);
                    _raw_spin_unlock_irqrestore(iVar11,uVar5);
                    uVar6 = -1L << (___cfi_slowpath_diag & 0x3f);
                    param_5 = (~uVar6 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        param_5 = uVar6 | unaff_x30;
                    }
                    uVar6 = sym.qcom_dma_common_pages_remap(puVar7,arg2_02,arg3);
                    if (uVar6 != 0) {
                        *param_3 = arg2_00;
                        sg_free_table(&uStack_78);
                        param_3 = arg3;
                        goto code_r0x080070c8;
                    }
                    _dev_err(param_1,"no common pages\n");
                    uVar5 = _raw_spin_lock_irqsave(iVar11);
                    sym.av8l_fast_unmap_public(*(iVar13 + 0x60),arg2_00,arg2_02);
code_r0x0800702c:
                    sym.__fast_smmu_free_iova(iVar13,arg2_00,arg2_02);
                    piVar10 = arg2_02;
                }
                _raw_spin_unlock_irqrestore(iVar11,uVar5);
                sg_free_table(&uStack_78);
            }
            else {
                _dev_err(param_1,"no sg tablen\n");
            }
            if (0 < iVar9) {
                uVar4 = uVar4 >> 0xc & 0xffffffff;
                puVar12 = puVar7;
                do {
                    __free_pages(*puVar12,0);
                    uVar4 = uVar4 - 1;
                    puVar12 = puVar12 + 1;
                } while (uVar4 != 0);
            }
            kvfree(puVar7);
            param_3 = piVar10;
        }
    }
    else {
        _dev_err(param_1,"count: %zx exceeds UNIT_MAX\n");
        param_3 = piVar10;
        param_5 = param_4;
    }
    uVar6 = 0;
code_r0x080070c8:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    auVar15 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8007128;
    uVar4 = iommu_get_domain_for_dev(uVar5);
    if (uVar4 == 0) {
        iVar13 = -0x16;
    }
    else {
        uVar5 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar11 = _segment.ehdr; iVar11 != 0; iVar11 = *(iVar11 + 0x10)) {
            while( true ) {
                iVar13 = iVar11 + -0x88;
                if (uVar4 < *(iVar11 + -0x80)) break;
                if (uVar4 <= *(iVar11 + -0x80)) goto code_r0x080071b8;
                iVar11 = *(iVar11 + 8);
                if (iVar11 == 0) goto code_r0x080071b4;
            }
        }
code_r0x080071b4:
        iVar13 = 0;
code_r0x080071b8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar5);
    }
    uVar4 = auVar15._8_8_ + 0xfff;
    arg3_00 = uVar4 & 0xfffffffffffff000;
    uVar5 = _raw_spin_lock_irqsave(iVar13 + 0x68);
    sym.av8l_fast_unmap_public(*(iVar13 + 0x60),param_5,arg3_00);
    __bitmap_clear(*(iVar13 + 0x38),param_5 - *(iVar13 + 0x18) >> 0xc,uVar4 >> 0xc & 0xffffffff);
    *(iVar13 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar13 + 0x68,uVar5);
    uVar6 = sym.qcom_dma_free_from_pool(noname_0,param_3,arg3_00);
    if ((uVar6 & 1) == 0) {
        uVar6 = is_vmalloc_addr(param_3);
        if ((uVar6 & 1) == 0) {
            iVar13 = (((param_3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
        }
        else {
            puVar7 = sym.qcom_dma_common_find_pages(param_3);
            if (puVar7 != NULL) {
                sym.qcom_dma_common_free_remap(param_3);
                if (0 < uVar4 >> 0xc) {
                    uVar4 = uVar4 >> 0xc & 0xffffffff;
                    puVar12 = puVar7;
                    do {
                        __free_pages(*puVar12,0);
                        uVar4 = uVar4 - 1;
                        puVar12 = puVar12 + 1;
                    } while (uVar4 != 0);
                }
                uVar4 = kvfree(puVar7);
                return uVar4;
            }
            iVar13 = vmalloc_to_page(param_3);
            uVar6 = sym.qcom_dma_common_free_remap(param_3);
        }
        if (iVar13 != 0) {
            uVar6 = sym.qcom_dma_free_contiguous(auVar15._0_8_,iVar13,arg3_00);
        }
    }
    return uVar6;
}


// ===== sym.__fast_smmu_alloc_contiguous.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x080029f8 (size 8) =====

uint64_t sym.__fast_smmu_alloc_contiguous.5a2e0149000a936629ebf63764a9885f.cfi_jt
                   (int64_t param_1,uint64_t param_2,int64_t *param_3,uint32_t param_4,uint64_t param_5)

{
    uint32_t arg2;
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t arg1;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    uint32_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    uVar5 = param_5;
    if (uVar2 == 0) {
        arg1_00 = -0x16;
        if ((uVar5 >> 0xf & 1) == 0) goto code_r0x08008328;
code_r0x08008340:
        uVar5 = 1;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                arg1_00 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08008318;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08008314;
            }
        }
code_r0x08008314:
        arg1_00 = 0;
code_r0x08008318:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
        if ((uVar5 >> 0xf & 1) != 0) goto code_r0x08008340;
code_r0x08008328:
        if ((uVar5 >> 0x10 & 1) == 0) {
            uVar5 = *(param_1 + 0x34c) >> 5 & 1;
        }
        else {
            uVar5 = 0;
        }
    }
    auVar6 = sym.qcom_dma_info_to_prot(0,uVar5,param_5);
    uVar2 = 0x68000000000703;
    if (arm64_use_ng_mappings != 0x0) {
        uVar2 = 0x68000000000f03;
    }
    if (((param_5 & 4) == 0 & uVar5) == 0) {
        uVar2 = uVar2 | 0x60000000000008;
    }
    arg2 = 0;
    if (0xfff < param_2 - 1) {
        arg2 = 0x40 - LZCOUNT(param_2 - 1 >> 0xc);
    }
    arg1 = sym.qcom_dma_alloc_from_contiguous(param_1,auVar6,arg2,param_4 >> 0xd & 1);
    if (arg1 != 0) {
        uVar3 = _raw_spin_lock_irqsave(arg1_00 + 0x68);
        iVar4 = sym.__fast_smmu_alloc_iova(arg1_00,param_2);
        auVar6 = _raw_spin_unlock_irqrestore(arg1_00 + 0x68,uVar3);
        if (iVar4 != -1) {
            iVar1 = sym.av8l_fast_map_public
                              (*(arg1_00 + 0x60),iVar4,
                               (arg1 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 + 0x8000000000,param_2);
            if (iVar1 == 0) {
                if (uVar5 != 0) {
                    uVar2 = (arg1 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
code_r0x080084fc:
                    memset(uVar2,0,param_2);
                    *param_3 = iVar4;
                    return uVar2;
                }
                uVar2 = sym.qcom_dma_common_contiguous_remap(arg1,param_2,uVar2);
                if (uVar2 != 0) {
                    sym.qcom_arch_dma_prep_coherent(arg1,param_2);
                    goto code_r0x080084fc;
                }
                sym.av8l_fast_unmap_public(*(arg1_00 + 0x60),iVar4,param_2);
            }
            auVar6 = __bitmap_clear(*(arg1_00 + 0x38),iVar4 - *(arg1_00 + 0x18) >> 0xc,param_2 >> 0xc & 0xffffffff);
            *(arg1_00 + 0x50) = 1;
        }
        sym.qcom_dma_release_from_contiguous(param_1,auVar6,param_2 >> 0xc & 0xffffffff);
    }
    return 0;
}


// ===== sym.__typeid__ZTSFP10io_pgtableP14io_pgtable_cfgPvE_global_addr @ 0x08002a00 (size 8) =====

int64_t sym.__typeid__ZTSFP10io_pgtableP14io_pgtable_cfgPvE_global_addr(uint8_t *param_1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    int iVar7;
    int64_t arg1;
    uint32_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = kmem_cache_alloc_trace(___list_add_valid,0xcc0,0xe8);
    if (arg1 == 0) {
        return 0;
    }
    uVar4 = param_1[0x18];
    *(arg1 + 0x68) = sym.av8l_fast_map.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    *(arg1 + 0x70) = sym.av8l_fast_map_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    param_1[0x10] = 0x20;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[8] = 0;
    param_1[9] = 0x10;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(arg1 + 0x78) = sym.av8l_fast_map_sg.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    *(arg1 + 0x80) = sym.av8l_fast_unmap.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    *(arg1 + 0x88) = sym.av8l_fast_unmap_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    *(arg1 + 0x90) = sym.av8l_fast_iova_to_phys.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    uVar3 = *(param_1 + 0x38);
    if (uVar4 == 0) {
        uVar8 = 0x40;
        if ((*param_1 & 0x40) != 0) {
            uVar8 = 0xc0;
        }
        uVar8 = uVar8 | uVar3 & 0xfffff81f;
    }
    else {
        uVar8 = uVar3 & 0xfffff800 | uVar3 & 0x1f | 0x2e0;
        *(param_1 + 0x38) = uVar8;
        if ((*param_1 >> 6 & 1) != 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8005784);
            (*pcVar6)();
        }
    }
    *(param_1 + 0x38) = uVar8 & 0xffffffe7;
    switch(*(param_1 + 0x14) - 0x20U >> 1 | *(param_1 + 0x14) << 0x1f) {
    case 0:
        uVar8 = uVar8 & 0xffffffe0;
        break;
    default:
        goto code_r0x0800585c;
    case 2:
        uVar8 = uVar8 & 0xffffffe0 | 1;
        break;
    case 4:
        uVar8 = uVar8 & 0xffffffe0 | 2;
        break;
    case 5:
        uVar8 = uVar8 & 0xffffffe0 | 3;
        break;
    case 6:
        uVar8 = uVar8 & 0xffffffe0 | 4;
        break;
    case 8:
        uVar8 = uVar8 & 0xffffffe0 | 5;
    }
    *(param_1 + 0x38) = uVar8 & 0xfffe07ff | 0x10000;
    param_1[0x40] = 0x44;
    param_1[0x41] = 0xff;
    param_1[0x42] = 4;
    param_1[0x43] = 0xf4;
    param_1[0x44] = 0xff;
    param_1[0x45] = 0xff;
    param_1[0x46] = 0xff;
    param_1[0x47] = 0xff;
    iVar7 = sym.av8l_fast_prepopulate_pgtables(arg1,param_1);
    if (iVar7 == 0) {
        iVar5 = (*(arg1 + 0x98) << 8) >> 8;
        uVar1 = iVar5 + 0x8000000000;
        iVar2 = uVar1 + _gen_pool_first_fit_order_align;
        if (uVar1 >> 0x26 != 0) {
            iVar2 = iVar5 - _of_n_addr_cells;
        }
        *(param_1 + 0x30) = iVar2;
    }
    else {
code_r0x0800585c:
        kfree(arg1);
        arg1 = 0;
    }
    return arg1;
}


// ===== sym.arm_32_lpae_alloc_pgtable_s1.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002a08 (size 8) =====

ulong sym.arm_32_lpae_alloc_pgtable_s1.55b984f7a5e21471df6e15a17290fef8.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x10) < 0x21) && (*(param_1 + 0x14) < 0x29)) {
        *(param_1 + 8) = *(param_1 + 8) & 0x40201000;
        uVar1 = sym.arm_64_lpae_alloc_pgtable_s1(param_1);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.arm_64_lpae_alloc_pgtable_s2.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002a10 (size 8) =====

int64_t sym.arm_64_lpae_alloc_pgtable_s2.55b984f7a5e21471df6e15a17290fef8.cfi_jt(int64_t *param_1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t arg1;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_1 != 0) {
        return 0;
    }
    arg1 = sym.arm_lpae_alloc_pgtable(param_1);
    if (arg1 == 0) {
        return 0;
    }
    if ((*(arg1 + 0x9c) == 0) && (8L << (*(arg1 + 0x98) & 0x3f) < 0x88)) {
        *(arg1 + 0x98) = *(arg1 + 0xa0) + *(arg1 + 0x98);
        *(arg1 + 0x9c) = 1;
    }
    uVar2 = *(param_1 + 7);
    uVar4 = 0x40;
    if (param_1[3] != '\0') {
        uVar4 = 0x2e0;
    }
    uVar6 = uVar2 & 0xfffff81f | uVar4;
    *(param_1 + 7) = uVar6;
    uVar5 = *(arg1 + 0x9c);
    iVar7 = 8L << (*(arg1 + 0xa0) & 0x3f);
    if (iVar7 == 0x10000) {
        uVar6 = uVar2 & 0xfffff807 | uVar4 | 8;
code_r0x080088b4:
        *(param_1 + 7) = uVar6;
    }
    else {
        if (iVar7 == 0x4000) {
            uVar6 = uVar2 & 0xfffff807 | uVar4 | 0x10;
            goto code_r0x080088b4;
        }
        if (iVar7 == 0x1000) {
            uVar5 = uVar5 + 1;
            uVar6 = uVar2 & 0xfffff807 | uVar4;
            goto code_r0x080088b4;
        }
    }
    switch(*(param_1 + 0x14) - 0x20U >> 1 | *(param_1 + 0x14) << 0x1f) {
    case 0:
        uVar6 = uVar6 & 0xfffffff8;
        break;
    default:
        goto code_r0x080089d4;
    case 2:
        uVar6 = uVar6 & 0xfffffff8 | 1;
        break;
    case 4:
        uVar6 = uVar6 & 0xfffffff8 | 2;
        break;
    case 5:
        uVar6 = uVar6 & 0xfffffff8 | 3;
        break;
    case 6:
        uVar6 = uVar6 & 0xfffffff8 | 4;
        break;
    case 8:
        uVar6 = uVar6 & 0xfffffff8 | 5;
        break;
    case 10:
        uVar6 = uVar6 & 0xfffffff8 | 6;
    }
    *(param_1 + 7) =
         (uVar6 & 0xfff80000 | uVar6 & 0x7ff | (uVar5 & 3) << 0xb | param_1[2] * -0x2000 & 0x7e000U) ^ 0x1800;
    iVar7 = sym.__arm_lpae_alloc_pages(arg1,8L << (*(arg1 + 0x98) & 0x3f),0xcc0,param_1);
    *(arg1 + 0xa8) = iVar7;
    if (iVar7 != 0) {
        DataSynchronizationBarrier(3,2,0);
        iVar3 = (*(arg1 + 0xa8) << 8) >> 8;
        uVar1 = iVar3 + 0x8000000000;
        iVar7 = uVar1 + _gen_pool_first_fit_order_align;
        if (uVar1 >> 0x26 != 0) {
            iVar7 = iVar3 - _of_n_addr_cells;
        }
        param_1[6] = iVar7;
        return arg1;
    }
code_r0x080089d4:
    sym.qcom_io_pgtable_allocator_unregister(*(arg1 + 0xb0));
    kfree(arg1);
    return 0;
}


// ===== sym.arm_64_lpae_alloc_pgtable_s1.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002a18 (size 8) =====

int64_t sym.arm_64_lpae_alloc_pgtable_s1.55b984f7a5e21471df6e15a17290fef8.cfi_jt(uint64_t *param_1)

{
    uint64_t uVar1;
    code *pcVar2;
    int64_t arg1;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*param_1 & 0xffffffff7fffff9e) != 0) {
        return 0;
    }
    arg1 = sym.arm_lpae_alloc_pgtable(param_1);
    if (arg1 == 0) {
        return 0;
    }
    uVar3 = param_1[7];
    if (param_1[3] == '\0') {
        uVar5 = *param_1;
        if ((uVar5 >> 6 & 1) == 0) {
            if (uVar5 < 0) {
                uVar3 = uVar3 & 0xfffff99f | 0x1c0;
            }
            else {
                uVar3 = uVar3 & 0xfffff81f | 0x40;
            }
        }
        else {
            uVar3 = uVar3 & 0xfffff81f | 0xc0;
        }
        *(param_1 + 7) = uVar3;
    }
    else {
        uVar5 = *param_1;
        uVar3 = uVar3 & 0xfffff800 | uVar3 & 0x1f | 0x2e0;
        *(param_1 + 7) = uVar3;
        if ((uVar5 & 0x80000040) != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80085ac);
            (*pcVar2)();
        }
    }
    uVar5 = uVar5 & 0x20;
    iVar7 = 8L << (*(arg1 + 0xa0) & 0x3f);
    if (iVar7 == 0x10000) {
        uVar4 = 8;
        if (uVar5 != 0) {
            uVar4 = 0x18;
        }
code_r0x08008640:
        uVar6 = uVar3 & 0xffffffe7;
code_r0x08008644:
        uVar3 = uVar4 | uVar6;
        *(param_1 + 7) = uVar3;
    }
    else {
        if (iVar7 == 0x4000) {
            uVar4 = 0x10;
            if (uVar5 != 0) {
                uVar4 = 8;
            }
            goto code_r0x08008640;
        }
        if (iVar7 == 0x1000) {
            uVar6 = uVar5 >> 1;
            uVar4 = uVar3 & 0xffffffe7;
            goto code_r0x08008644;
        }
    }
    switch(*(param_1 + 0x14) - 0x20U >> 1 | *(param_1 + 0x14) << 0x1f) {
    case 0:
        uVar3 = uVar3 & 0xfffffff8;
        break;
    default:
        goto code_r0x0800876c;
    case 2:
        uVar3 = uVar3 & 0xfffffff8 | 1;
        break;
    case 4:
        uVar3 = uVar3 & 0xfffffff8 | 2;
        break;
    case 5:
        uVar3 = uVar3 & 0xfffffff8 | 3;
        break;
    case 6:
        uVar3 = uVar3 & 0xfffffff8 | 4;
        break;
    case 8:
        uVar3 = uVar3 & 0xfffffff8 | 5;
        break;
    case 10:
        uVar3 = uVar3 & 0xfffffff8 | 6;
    }
    *(param_1 + 7) = uVar3 & 0xfffe0000 | uVar3 & 0x7ff | (param_1[2] * -0x800 >> 0xb & 0x3f) << 0xb;
    param_1[8] = 0xefe4f404ff44;
    iVar7 = sym.__arm_lpae_alloc_pages(arg1,8L << (*(arg1 + 0x98) & 0x3f),0xcc0,param_1);
    *(arg1 + 0xa8) = iVar7;
    if (iVar7 != 0) {
        DataSynchronizationBarrier(3,2,0);
        iVar7 = (*(arg1 + 0xa8) << 8) >> 8;
        uVar5 = iVar7 + 0x8000000000;
        uVar1 = uVar5 + _gen_pool_first_fit_order_align;
        if (uVar5 >> 0x26 != 0) {
            uVar1 = iVar7 - _of_n_addr_cells;
        }
        param_1[6] = uVar1;
        return arg1;
    }
code_r0x0800876c:
    sym.qcom_io_pgtable_allocator_unregister(*(arg1 + 0xb0));
    kfree(arg1);
    return 0;
}


// ===== sym.arm_32_lpae_alloc_pgtable_s2.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002a20 (size 8) =====

ulong sym.arm_32_lpae_alloc_pgtable_s2.55b984f7a5e21471df6e15a17290fef8.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x10) < 0x29) && (*(param_1 + 0x14) < 0x29)) {
        *(param_1 + 8) = *(param_1 + 8) & 0x40201000;
        uVar1 = sym.arm_64_lpae_alloc_pgtable_s2(param_1);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.arm_mali_lpae_alloc_pgtable.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002a28 (size 8) =====

int64_t sym.arm_mali_lpae_alloc_pgtable.55b984f7a5e21471df6e15a17290fef8.cfi_jt(int64_t *param_1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t arg1;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*param_1 == 0) && (*(param_1 + 2) < 0x31)) && (*(param_1 + 0x14) < 0x29)) {
        param_1[1] = param_1[1] & 0x40201000;
        arg1 = sym.arm_lpae_alloc_pgtable(param_1);
        if (arg1 == 0) {
            return 0;
        }
        if (0 < *(arg1 + 0x9c)) {
            *(arg1 + 0x98) = 0;
        }
        param_1[7] = 0x888d88;
        iVar3 = sym.__arm_lpae_alloc_pages(arg1,8L << (*(arg1 + 0x98) & 0x3f),0xcc0,param_1);
        *(arg1 + 0xa8) = iVar3;
        if (iVar3 != 0) {
            DataSynchronizationBarrier(3,2,0);
            iVar3 = (*(arg1 + 0xa8) << 8) >> 8;
            uVar1 = iVar3 + 0x8000000000;
            uVar2 = uVar1 + _gen_pool_first_fit_order_align;
            if (uVar1 >> 0x26 != 0) {
                uVar2 = iVar3 - _of_n_addr_cells;
            }
            param_1[6] = uVar2 | 7;
            return arg1;
        }
        sym.qcom_io_pgtable_allocator_unregister(*(arg1 + 0xb0));
        kfree(arg1);
    }
    return 0;
}


// ===== sym.av8l_fast_iova_to_phys.11a4d76efea7558fbaf9572365c50d63.cfi_jt @ 0x08002a30 (size 8) =====

uint64_t sym.av8l_fast_iova_to_phys.11a4d76efea7558fbaf9572365c50d63.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint64_t uVar1;
    
    uVar1 = *(param_2 >> 0x1b & 0xff8 | *(param_1 + 0x30));
    if ((~uVar1 & 3) == 0) {
        uVar1 = *((uVar1 & 0x7ffffff000 | param_2 >> 0x12 & 0xff8) - _gen_pool_first_fit_order_align |
                 0xffffff8000000000);
        if (((~uVar1 & 3) == 0) &&
           (uVar1 = *(((param_2 >> 9 & 0xff8) - _gen_pool_first_fit_order_align) + (uVar1 & 0x7ffffff000) |
                     0xffffff8000000000), (~uVar1 & 3) == 0)) {
            return uVar1 & 0xfffffffff000 | param_2 & 0xfff;
        }
    }
    return 0;
}


// ===== sym.arm_lpae_iova_to_phys.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002a38 (size 8) =====

uint64_t sym.arm_lpae_iova_to_phys.55b984f7a5e21471df6e15a17290fef8.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int iVar4;
    uint64_t uVar5;
    int iVar6;
    ulong *in_x18;
    int iVar7;
    int iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x60;
    uVar9 = *(param_1 + 0x40);
    iVar7 = *(param_1 + 0x34);
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    if (uVar9 != 0) {
        iVar8 = 4 - iVar7;
        uVar5 = *(param_1 + 0x38);
        do {
            iVar4 = uVar5;
            if (iVar7 == *(param_1 + 0x34)) {
                iVar6 = *(param_1 + 0x30) - iVar4;
            }
            else {
                iVar6 = 0;
            }
            uVar9 = *(uVar9 + (param_2 >> (iVar8 * iVar4 + 3 & 0x3f) & ~(-1 << (iVar6 + iVar4 & 0x1f))) * 8);
            if (uVar9 == 0) break;
            uVar5 = 3;
            if (*(param_1 + -0x68) == 5 || iVar7 != 3) {
                uVar5 = 1;
            }
            if ((uVar9 & 3) == uVar5) {
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                uVar5 = uVar9 & 0xfffffffff000;
                if (0xffff < 8L << (*(param_1 + 0x38) & 0x3f)) {
                    uVar5 = (uVar9 & 0xfffffffff000) * 0x1000000001 & 0xfffffffff0000;
                }
                return param_2 & (-1L << (*(param_1 + 0x38) * iVar8 + 3 & 0x3f) ^ 0xffffffffffffffffU) | uVar5;
            }
            uVar5 = *(param_1 + 0x38);
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + -1;
            uVar2 = uVar9 & 0xfffffffff000;
            if (0xffff < 8L << (uVar5 & 0x3f)) {
                uVar2 = (uVar9 & 0xfffffffff000) * 0x1000000001 & 0x7fffff0000;
            }
            uVar9 = uVar2 - _gen_pool_first_fit_order_align | 0xffffff8000000000;
        } while (iVar7 < 4);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
    return 0;
}


// ===== sym.av8l_fast_map.11a4d76efea7558fbaf9572365c50d63.cfi_jt @ 0x08002a40 (size 8) =====

ulong sym.av8l_fast_map.11a4d76efea7558fbaf9572365c50d63.cfi_jt
                (int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,uint32_t param_5)

{
    uint64_t uVar1;
    int64_t arg2;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x58);
    uVar7 = param_2 - *(param_1 + 0x70) >> 0xc;
    arg2 = iVar5 + uVar7 * 8;
    if ((param_5 >> 4 & 1) == 0) {
        if ((param_5 >> 2 & 1) == 0) {
            uVar10 = 0x60000000000e03;
            if ((param_5 & 0x40) != 0) {
                uVar10 = 0x60000000000e0f;
            }
        }
        else {
            uVar10 = 0x60000000000e07;
        }
    }
    else {
        uVar10 = 0x60000000000e0b;
    }
    uVar9 = param_4 >> 0xc;
    uVar2 = 0xc0;
    if ((param_5 & 2) != 0) {
        uVar2 = 0x40;
    }
    if (0xfff < param_4) {
        uVar10 = uVar10 | uVar2;
        param_3 = param_3 & 0xfffffffff000;
        uVar2 = uVar9;
        if (uVar9 < 2) {
            uVar2 = 1;
        }
        if (uVar2 < 2) {
            uVar12 = 0;
            uVar11 = param_3;
        }
        else {
            uVar12 = uVar2 & 0xffffffffffffe;
            puVar6 = iVar5 + uVar7 * 8 + 8;
            uVar11 = param_3 + uVar12 * 0x1000;
            uVar3 = uVar12;
            do {
                uVar1 = param_3 + 0x1000;
                uVar4 = uVar10 | param_3;
                param_3 = param_3 + 0x2000;
                uVar3 = uVar3 - 2;
                puVar6[-1] = uVar4;
                *puVar6 = uVar10 | uVar1;
                puVar6 = puVar6 + 2;
            } while (uVar3 != 0);
            if (uVar2 == uVar12) goto code_r0x08005304;
        }
        iVar8 = uVar2 - uVar12;
        puVar6 = iVar5 + (uVar12 + uVar7) * 8;
        do {
            uVar7 = uVar10 | uVar11;
            uVar11 = uVar11 + 0x1000;
            iVar8 = iVar8 + -1;
            *puVar6 = uVar7;
            puVar6 = puVar6 + 1;
        } while (iVar8 != 0);
    }
code_r0x08005304:
    sym.av8l_clean_range(param_1 + -0x58,arg2,arg2 + uVar9 * 8);
    return 0;
}


// ===== sym.arm_lpae_map.55b984f7a5e21471df6e15a17290fef8.cfi_jt @ 0x08002a48 (size 8) =====

void sym.arm_lpae_map.55b984f7a5e21471df6e15a17290fef8.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,uint32_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_lpae_map_pages(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.fast_smmu_init_mapping.cfi_jt @ 0x08002a50 (size 8) =====

ulong sym.fast_smmu_init_mapping.cfi_jt(ulong param_1,uint64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    char *pcVar9;
    code *pcVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_read_lock_irqsave(obj.mappings_lock);
    for (iVar6 = _segment.ehdr; iVar6 != 0; iVar6 = *(iVar6 + 8)) {
        while (param_2 < *(iVar6 + -0x80)) {
            iVar6 = *(iVar6 + 0x10);
            if (iVar6 == 0) goto code_r0x08006268;
        }
        if (param_2 <= *(iVar6 + -0x80)) {
            _raw_read_unlock_irqrestore(obj.mappings_lock,uVar4);
            if (iVar6 == 0x88) goto code_r0x08006288;
            pcVar9 = "Iova cookie already present\n";
            goto code_r0x08006468;
        }
    }
code_r0x08006268:
    _raw_read_unlock_irqrestore(obj.mappings_lock,uVar4);
code_r0x08006288:
    if (param_3 == 0) {
        return 0xffffffea;
    }
    uVar2 = *(param_2 + 0x28);
    uVar3 = *(param_2 + 0x30);
    if (0xfffffffe < uVar3) {
        uVar3 = 0xffffffff;
    }
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
        pcVar9 = "Invalid domain geometry\n";
code_r0x08006468:
        _dev_err(param_1,pcVar9);
        return 0xffffffea;
    }
    puVar5 = kmem_cache_alloc_trace(___list_add_valid,0xdc0,0xd0);
    if (puVar5 == NULL) {
        return 0xfffffff4;
    }
    uVar3 = (uVar3 - uVar2) + 1;
    uVar11 = uVar3 >> 0xc;
    puVar5[3] = uVar2;
    puVar5[4] = uVar3;
    uVar1 = uVar11 + 0x3f >> 3 & 0xfffffff8;
    puVar5[5] = uVar11;
    *(puVar5 + 6) = uVar1;
    iVar6 = __kmalloc(uVar1,0x12dc0);
    puVar5[7] = iVar6;
    if (iVar6 == 0) {
        iVar6 = vzalloc(uVar1);
        puVar5[7] = iVar6;
        if (iVar6 == 0) goto code_r0x080063a0;
    }
    iVar7 = __kmalloc(uVar1,0x12dc0);
    puVar5[8] = iVar7;
    if (iVar7 == 0) {
        iVar7 = vzalloc(uVar1);
        puVar5[8] = iVar7;
        if (iVar7 != 0) goto code_r0x08006338;
    }
    else {
code_r0x08006338:
        *(puVar5 + 0xd) = 0;
        __mutex_init(puVar5 + 0x14,"&fast->msi_cookie_init_lock",obj.__fast_smmu_create_mapping_sized.__key);
        iVar6 = kmem_cache_alloc_trace(___list_add_valid,0xdc0,0x778);
        puVar5[2] = iVar6;
        if (iVar6 != 0) {
            init_iova_domain(iVar6,0x1000,uVar2 >> 0xc);
            if (0xfffffffffffff000 < puVar5) {
                return 0xfffffff4;
            }
            *puVar5 = param_1;
            puVar5[1] = param_2;
            uVar4 = _raw_write_lock_irqsave(obj.mappings_lock);
            pcVar10 = obj.mappings;
            if (_obj.mappings == 0) {
                iVar6 = 0;
            }
            else {
                iVar7 = _obj.mappings;
                do {
                    while (iVar6 = iVar7, *(iVar6 + -0x80) <= puVar5[1]) {
                        if (puVar5[1] <= *(iVar6 + -0x80)) goto code_r0x08006438;
                        pcVar10 = iVar6 + 8;
                        iVar7 = *pcVar10;
                        if (*pcVar10 == 0) goto code_r0x0800641c;
                    }
                    pcVar10 = iVar6 + 0x10;
                    iVar7 = *pcVar10;
                } while (*pcVar10 != 0);
            }
code_r0x0800641c:
            piVar8 = puVar5 + 0x11;
            *piVar8 = iVar6;
            puVar5[0x12] = 0;
            puVar5[0x13] = 0;
            *pcVar10 = piVar8;
            rb_insert_color(piVar8,obj.mappings);
code_r0x08006438:
            _raw_write_unlock_irqrestore(obj.mappings_lock,uVar4);
            puVar5[0xc] = param_3;
            puVar5[0xe] = sym.fast_smmu_notify.5a2e0149000a936629ebf63764a9885f.cfi_jt;
            return 0;
        }
        kvfree(puVar5[8]);
        iVar6 = puVar5[7];
    }
    kvfree(iVar6);
code_r0x080063a0:
    kfree(puVar5);
    return 0xfffffff4;
}


// ===== sym.fast_smmu_unmap_page.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002a58 (size 8) =====

void sym.fast_smmu_unmap_page.5a2e0149000a936629ebf63764a9885f.cfi_jt
               (int64_t param_1,uint64_t param_2,int64_t param_3,uint32_t param_4,uint32_t param_5)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar6 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar6 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x080075a8;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x080075a4;
            }
        }
code_r0x080075a4:
        iVar6 = 0;
code_r0x080075a8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = param_3 + (param_2 & 0xfff) + 0xfff;
    if ((param_5 >> 0xf & 1) == 0) {
        if ((param_5 >> 0x10 & 1) == 0) {
            uVar5 = *(param_1 + 0x34c) >> 5 & 1;
        }
        else {
            uVar5 = 0;
        }
        if (((param_5 >> 5 & 1) == 0) && (uVar5 == 0)) {
            iVar4 = sym.av8l_fast_iova_to_phys_public(*(iVar6 + 0x60),param_2);
            if (iVar4 == 0) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x800767c);
                (*pcVar1)();
            }
            sym.qcom_arch_sync_dma_for_cpu(iVar4,param_3,param_4);
        }
    }
    uVar3 = _raw_spin_lock_irqsave(iVar6 + 0x68);
    sym.av8l_fast_unmap_public(*(iVar6 + 0x60),param_2,uVar2 & 0xfffffffffffff000);
    __bitmap_clear(*(iVar6 + 0x38),param_2 - *(iVar6 + 0x18) >> 0xc,uVar2 >> 0xc);
    *(iVar6 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar6 + 0x68,uVar3);
    return;
}


// ===== sym.fast_smmu_dma_unmap_resource.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002a60 (size 8) =====

void sym.fast_smmu_dma_unmap_resource.5a2e0149000a936629ebf63764a9885f.cfi_jt
               (ulong param_1,uint64_t param_2,int64_t param_3)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = iommu_get_domain_for_dev();
    if (uVar1 == 0) {
        iVar4 = -0x16;
    }
    else {
        uVar2 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar3 = _segment.ehdr; iVar3 != 0; iVar3 = *(iVar3 + 0x10)) {
            while( true ) {
                iVar4 = iVar3 + -0x88;
                if (uVar1 < *(iVar3 + -0x80)) break;
                if (uVar1 <= *(iVar3 + -0x80)) goto code_r0x08007bd8;
                iVar3 = *(iVar3 + 8);
                if (iVar3 == 0) goto code_r0x08007bd4;
            }
        }
code_r0x08007bd4:
        iVar4 = 0;
code_r0x08007bd8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar2);
    }
    uVar1 = ((param_3 + (param_2 & 0xfff)) - 1 | 0xfff) + 1;
    iommu_unmap(*(iVar4 + 8),param_2 & 0xfffffffffffff000,uVar1);
    uVar2 = _raw_spin_lock_irqsave(iVar4 + 0x68);
    __bitmap_clear(*(iVar4 + 0x38),param_2 - *(iVar4 + 0x18) >> 0xc,uVar1 >> 0xc);
    *(iVar4 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar4 + 0x68,uVar2);
    return;
}


// ===== sym.fast_smmu_sync_single_for_device.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002a68 (size 8) =====

void sym.fast_smmu_sync_single_for_device.5a2e0149000a936629ebf63764a9885f.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3,uint32_t param_4)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar5 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar5 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08007dd4;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08007dd0;
            }
        }
code_r0x08007dd0:
        iVar5 = 0;
code_r0x08007dd4:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = sym.av8l_fast_iova_coherent_public(*(iVar5 + 0x60),param_2);
    if ((uVar2 & 1) == 0) {
        iVar5 = sym.av8l_fast_iova_to_phys_public(*(iVar5 + 0x60),param_2);
        if (iVar5 == 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8007e34);
            (*pcVar1)();
        }
        sym.qcom_arch_sync_dma_for_device(iVar5,param_3,param_4);
    }
    return;
}


// ===== sym.fast_smmu_sync_single_for_cpu.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002a70 (size 8) =====

void sym.fast_smmu_sync_single_for_cpu.5a2e0149000a936629ebf63764a9885f.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3,uint32_t param_4)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar5 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar5 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08007cec;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08007ce8;
            }
        }
code_r0x08007ce8:
        iVar5 = 0;
code_r0x08007cec:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = sym.av8l_fast_iova_coherent_public(*(iVar5 + 0x60),param_2);
    if ((uVar2 & 1) == 0) {
        iVar5 = sym.av8l_fast_iova_to_phys_public(*(iVar5 + 0x60),param_2);
        if (iVar5 == 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8007d4c);
            (*pcVar1)();
        }
        sym.qcom_arch_sync_dma_for_cpu(iVar5,param_3,param_4);
    }
    return;
}


// ===== sym.qcom_dma_iommu_is_ready.cfi_jt @ 0x08002a78 (size 8) =====

code sym.qcom_dma_iommu_is_ready.cfi_jt(void)

{
    return obj.probe_finished;
}


// ===== sym.__typeid__ZTSFyP12iommu_domainP19qcom_iommu_atos_txnE_global_addr @ 0x08002a80 (size 8) =====

ulong sym.__typeid__ZTSFyP12iommu_domainP19qcom_iommu_atos_txnE_global_addr(int64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(param_1 + 8) + -0x50);
    if (pcVar2 == NULL) {
        uVar1 = 0;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFyP12iommu_domainP19qcom_iommu_atos_txnE_global_addr) {
            __cfi_slowpath_diag(0xc935aba32abc5ceb,pcVar2,0x80007a0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_get_fast_iova_range.cfi_jt @ 0x08002a88 (size 8) =====

ulong sym.qcom_iommu_get_fast_iova_range.cfi_jt(int64_t param_1,uint64_t *param_2,code **param_3,uint64_t *param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    code **arg3;
    uint64_t uVar5;
    code *pcVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    code *pcStack_68;
    uint64_t *puStack_60;
    uint64_t uStack_58;
    code *pcStack_50;
    uint64_t uStack_48;
    code *pcStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uVar4 = 0xffffffea;
    uStack_48 = 0;
    pcStack_40 = NULL;
    uStack_58 = 0;
    pcStack_50 = NULL;
    pcStack_68 = sym.__typeid__ZTSFiPKjiiPvE_global_addr;
    arg3 = param_3;
    if (((param_1 != 0) && (param_2 != NULL)) && (param_3 != NULL)) {
        puStack_60 = &uStack_48;
        arg3 = &pcStack_68;
        uVar4 = sym.of_property_walk_each_entry(param_1,0x8000d79,arg3);
        if (uVar4 != 0) {
            if (uVar4 != -0x13) goto code_r0x080032a0;
            uStack_48 = 0;
            pcStack_40 = 0xffffffff;
        }
        puStack_60 = &uStack_58;
        arg3 = &pcStack_68;
        uVar4 = sym.of_property_walk_each_entry(param_1,0x8000c5c,arg3);
        if (uVar4 == -0x13) {
            uVar10 = 0;
            pcVar6 = 0xffffffff;
        }
        else {
            uVar10 = uStack_58;
            pcVar6 = pcStack_50;
            if (uVar4 != 0) goto code_r0x080032a0;
        }
        uVar4 = 0;
        if (uStack_48 <= uVar10) {
            uVar10 = uStack_48;
        }
        if (pcVar6 <= pcStack_40) {
            pcVar6 = pcStack_40;
        }
        *param_2 = uVar10;
        *param_3 = pcVar6;
    }
code_r0x080032a0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar11 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.get_addr_range;
    if (auVar11._8_4_ == 0) {
        uVar10 = 0;
    }
    else {
        uVar10 = 0;
        uVar7 = auVar11._8_8_ & 0xffffffff;
        puVar8 = auVar11._0_8_;
        do {
            uVar2 = uVar7 - 1;
            uVar7 = uVar2;
            uVar1 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
            uVar10 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar10 << 0x20;
            puVar8 = puVar8 + 1;
        } while (uVar2 != 0);
    }
    if (arg3 == 0) {
        uVar7 = 0;
    }
    else {
        uVar7 = 0;
        puVar8 = auVar11._0_8_ + auVar11._8_4_;
        do {
            uVar2 = arg3 - 1;
            arg3 = uVar2;
            uVar1 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
            uVar7 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar7 << 0x20;
            puVar8 = puVar8 + 1;
        } while (uVar2 != 0);
    }
    if ((uVar10 >> 0x20 == 0) && (uVar7 = (uVar10 + uVar7) - 1, uVar7 >> 0x20 == 0)) {
        uVar9 = *param_4;
        uVar5 = uVar10;
        if (((uVar9 != 0) && (uVar5 = uVar9, uVar10 != 0)) && (uVar10 <= uVar9)) {
            uVar5 = uVar10;
        }
        uVar4 = 0;
        uVar10 = param_4[1];
        if (param_4[1] <= uVar7) {
            uVar10 = uVar7;
        }
        *param_4 = uVar5;
        param_4[1] = uVar10;
    }
    else {
        _printk(0x8000bf9);
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.qcom_io_pgtable_alloc_exit.cfi_jt @ 0x08002a90 (size 8) =====

void sym.qcom_io_pgtable_alloc_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_shrinker(reloc.io_pgtable_alloc_count_objects.3b8e7fc3d2a98b9a1dd59c7698606bee.cfi_jt);
    return;
}


// ===== sym.qcom_dma_iommu_generic_driver_exit.cfi_jt @ 0x08002a98 (size 8) =====

void sym.qcom_dma_iommu_generic_driver_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_dma_iommu_probe.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt);
    return;
}


// ===== sym.fast_smmu_notify.5a2e0149000a936629ebf63764a9885f.cfi_jt @ 0x08002aa0 (size 8) =====

ulong sym.fast_smmu_notify.5a2e0149000a936629ebf63764a9885f.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (param_2 != 1) {
        __warn_printk("Unhandled notifier action");
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80064d8);
        (*pcVar1)();
    }
    iVar4 = *(*(param_1 + -0x10) + 0x58);
    iVar3 = param_3 - iVar4;
    iStack_40 = iVar3 * 0x200;
    iVar3 = iVar3 >> 3;
    _dev_err(*(param_1 + -0x70),"Mapped over stale tlb at %pa\n",&iStack_40);
    _dev_err(*(param_1 + -0x70),"bitmap (failure at idx %lu):\n",iVar3);
    _dev_err(*(param_1 + -0x70),"ptep: %pK pmds: %pK diff: %lu\n",param_3,iVar4,iVar3);
    print_hex_dump(0x8000eda,"bmap: ",1,0x20,8,*(param_1 + -0x38),*(param_1 + -0x40),0);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 1;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.fast_smmu_setup_dma_ops;
    uVar2 = sym.__fast_smmu_setup_dma_ops(noname_0,iVar3);
    return uVar2;
}


// ===== sym.qcom_iommu_group_parse_phandle @ 0x08002aa8 (size 76) =====

int64_t sym.qcom_iommu_group_parse_phandle(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0;
    if ((*(arg1 + 0x2f0) != 0) && (iVar1 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,iommu-group",0), iVar1 == 0)) {
        iVar1 = *(arg1 + 0x2f0);
    }
    return iVar1;
}


// ===== sym.qcom_iommu_generate_dma_regions @ 0x08002af4 (size 104) =====

ulong sym.qcom_iommu_generate_dma_regions(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t *piVar6;
    code **arg3;
    int64_t *in_x3;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    uchar auVar14 [12];
    code *pcStack_28;
    int64_t iStack_20;
    int64_t iStack_18;
    int64_t iVar5;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_18 = *(iVar5 + 0x5e0);
    arg3 = &pcStack_28;
    pcStack_28 = sym.insert_range.26a21a78fdce4965dbb213a059d6010e.cfi_jt;
    iStack_20 = arg2;
    uVar4 = sym.of_property_walk_each_entry(arg1,0x8000d79,arg3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_18) {
        return uVar4;
    }
    auVar14 = __stack_chk_fail();
    auVar14._8_4_ = auVar14._8_4_;
    iVar5 = auVar14._0_8_;
    *extraout_x18 = sym.insert_range;
    if (auVar14._8_4_ == 0) {
        uVar10 = 0;
    }
    else {
        uVar10 = 0;
        do {
            puVar7 = auVar14._0_8_;
            uVar1 = *puVar7;
            iVar2 = auVar14._8_4_ + -1;
            auVar14._8_4_ = iVar2;
            auVar14._0_8_ = puVar7 + 1;
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            uVar10 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar10 << 0x20;
        } while (iVar2 != 0);
    }
    if (arg3 == 0) {
        uVar8 = 0;
    }
    else {
        uVar8 = 0;
        puVar7 = iVar5 + auVar14._8_4_ * 4;
        do {
            uVar3 = arg3 - 1;
            arg3 = uVar3;
            uVar1 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
            uVar8 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar8 << 0x20;
            puVar7 = puVar7 + 1;
        } while (uVar3 != 0);
    }
    piVar13 = *in_x3;
    piVar11 = in_x3;
    if (piVar13 != in_x3) {
        do {
            uVar9 = piVar13[2];
            if ((uVar9 <= (uVar10 + uVar8) - 1) && (uVar10 <= (uVar9 + piVar13[3]) - 1)) {
                return 0xffffffea;
            }
            piVar11 = piVar13;
        } while ((uVar9 <= uVar10) && (piVar13 = *piVar13, piVar11 = in_x3, piVar13 != in_x3));
    }
    piVar6 = iommu_alloc_resv_region(uVar10,uVar8,0,2);
    if (piVar6 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        piVar12 = piVar13[1];
        uVar10 = __list_add_valid(piVar6,piVar12,piVar11);
        if ((uVar10 & 1) == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = 0;
            piVar13[1] = piVar6;
            *piVar6 = piVar11;
            piVar6[1] = piVar12;
            *piVar12 = piVar6;
        }
    }
    return uVar4;
}


// ===== sym.insert_range @ 0x08002b5c (size 308) =====

ulong sym.insert_range(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar8 = 0;
    }
    else {
        uVar8 = 0;
        uVar6 = arg2 & 0xffffffff;
        puVar5 = arg1;
        do {
            uVar2 = uVar6 - 1;
            uVar6 = uVar2;
            uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
            uVar8 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar8 << 0x20;
            puVar5 = puVar5 + 1;
        } while (uVar2 != 0);
    }
    if (arg3 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        puVar5 = arg1 + arg2 * 4;
        do {
            uVar2 = arg3 - 1;
            arg3 = uVar2;
            uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
            uVar6 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar6 << 0x20;
            puVar5 = puVar5 + 1;
        } while (uVar2 != 0);
    }
    piVar11 = *arg4;
    piVar9 = arg4;
    if (piVar11 != arg4) {
        do {
            uVar7 = piVar11[2];
            if ((uVar7 <= (uVar8 + uVar6) - 1) && (uVar8 <= (uVar7 + piVar11[3]) - 1)) {
                return 0xffffffea;
            }
            piVar9 = piVar11;
        } while ((uVar7 <= uVar8) && (piVar11 = *piVar11, piVar9 = arg4, piVar11 != arg4));
    }
    piVar3 = iommu_alloc_resv_region(uVar8,uVar6,0,2);
    if (piVar3 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        piVar10 = piVar11[1];
        uVar8 = __list_add_valid(piVar3,piVar10,piVar9);
        if ((uVar8 & 1) == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = 0;
            piVar11[1] = piVar3;
            *piVar3 = piVar9;
            piVar3[1] = piVar10;
            *piVar10 = piVar3;
        }
    }
    return uVar4;
}


// ===== sym.of_property_walk_each_entry @ 0x08002c90 (size 436) =====

void sym.of_property_walk_each_entry(int arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t ***pppiVar2;
    ulong ****ppppuVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t ****ppppiVar9;
    uint64_t uVar10;
    int64_t ***pppiVar11;
    ulong ***pppuVar12;
    int64_t iVar13;
    code *pcVar14;
    int64_t ***pppiVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    uint64_t unaff_x21;
    uint64_t unaff_x22;
    ulong ****ppppuVar16;
    ulong ****ppppuVar17;
    code *unaff_x24;
    uint64_t unaff_x25;
    ulong unaff_x30;
    uchar auVar18 [16];
    int64_t ***pppiStack_f8;
    int64_t ***pppiStack_f0;
    ulong ***pppuStack_e8;
    ulong ***pppuStack_e0;
    code *pcStack_d8;
    ulong ***pppuStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    code *pcStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    int iStack_6c;
    int64_t iStack_68;
    
    uVar10 = arg1;
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    iStack_6c = 0;
    if ((*(uVar10 + 0x2f0) == 0) ||
       ((unaff_x22 = of_parse_phandle(*(uVar10 + 0x2f0),"qcom,iommu-group",0), unaff_x19 = arg3, unaff_x24 = arg2,
        unaff_x22 == 0 && (unaff_x22 = *(uVar10 + 0x2f0), unaff_x22 == 0)))) {
code_r0x08002e00:
        arg2 = unaff_x24;
        uVar8 = 0xffffffea;
        arg3 = unaff_x19;
    }
    else {
        uVar7 = of_get_property(unaff_x22,arg2,&iStack_6c);
        if (uVar7 != 0) {
            iStack_6c = iStack_6c >> 2;
            uVar4 = of_n_addr_cells(unaff_x22);
            unaff_x21 = uVar4;
            uVar5 = of_n_size_cells(unaff_x22);
            unaff_x22 = uVar5;
            if ((uVar4 != 0) && (uVar5 != 0)) {
                iVar6 = uVar5 + uVar4;
                iVar1 = 0;
                if (iVar6 != 0) {
                    iVar1 = iStack_6c / iVar6;
                }
                if (iStack_6c == iVar1 * iVar6) {
                    unaff_x25 = uVar7 + iStack_6c * 4;
                    if (uVar7 < unaff_x25) {
                        uVar10 = 0x8000920;
                        do {
                            arg2 = *arg3;
                            if (1 < (arg2 + -0x8002880 >> 3 | arg2 << 0x3d)) {
                                __cfi_slowpath_diag(0xa6595566e8d5cdce,arg2,0x8000920);
                            }
                            uVar8 = (*arg2)(uVar7,uVar4,unaff_x22,*(arg3 + 8));
                            unaff_x20 = uVar7;
                            if (uVar8 != 0) goto code_r0x08002e04;
                            uVar7 = uVar7 + iVar6 * 4;
                        } while (uVar7 < unaff_x25);
                    }
                    uVar8 = 0;
                    unaff_x20 = uVar7;
                    goto code_r0x08002e04;
                }
            }
            _dev_err(uVar10,"%s Invalid length %d. Address cells %d. Size cells %d\n",arg2,iStack_6c,uVar4,
                     unaff_x22);
            unaff_x20 = uVar7;
            goto code_r0x08002e00;
        }
        uVar8 = 0xffffffed;
    }
code_r0x08002e04:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return;
    }
    auVar18 = __stack_chk_fail(uVar8);
    pppiVar11 = auVar18._8_8_;
    *extraout_x18 = sym.qcom_iommu_generate_resv_regions;
    pcStack_b8 = sym.qcom_iommu_generate_resv_regions;
    iVar13 = sp_el0;
    iStack_c8 = *(iVar13 + 0x5e0);
    pppiStack_f8 = &pppiStack_f8;
    pcStack_d8 = sym.insert_range.26a21a78fdce4965dbb213a059d6010e.cfi_jt;
    pppiStack_f0 = pppiStack_f8;
    pppuStack_e8 = &pppuStack_e8;
    pppuStack_e0 = &pppuStack_e8;
    pppuStack_d0 = &pppuStack_e8;
    puStack_c0 = &stack0xffffffffffffffa0;
    uStack_b0 = unaff_x25;
    pcStack_a0 = arg2;
    uStack_98 = uVar10;
    uStack_90 = unaff_x22;
    uStack_88 = unaff_x21;
    uStack_80 = unaff_x20;
    iStack_78 = arg3;
    iVar6 = sym.of_property_walk_each_entry(auVar18._0_4_,0x8000d79,&pcStack_d8);
    if (iVar6 != 0) goto code_r0x08003064;
    if (&pppuStack_e8 != pppuStack_e8) {
        if (pppuStack_e8 == &pppuStack_e8) {
            ppppuVar17 = NULL;
            pppuVar12 = pppuStack_e8[2];
            if (pppuVar12 != NULL) goto code_r0x08002f54;
code_r0x08002f90:
            if ((ppppuVar17[3] < ~ppppuVar17[2]) && (iVar13 = ppppuVar17[3] + ppppuVar17[2], iVar13 != 0)) {
                ppppiVar9 = iommu_alloc_resv_region(iVar13,-iVar13,0,2);
                pppiVar2 = pppiStack_f0;
                if (ppppiVar9 == NULL) goto code_r0x08003034;
                uVar10 = __list_add_valid(ppppiVar9,pppiStack_f0,&pppiStack_f8);
                if ((uVar10 & 1) != 0) {
                    *ppppiVar9 = &pppiStack_f8;
                    ppppiVar9[1] = pppiVar2;
                    pppiStack_f0 = ppppiVar9;
                    *pppiVar2 = ppppiVar9;
                }
            }
            generic_iommu_put_resv_regions(auVar18._0_8_,&pppuStack_e8);
            pppiVar2 = pppiStack_f0;
            for (ppppiVar9 = pppiStack_f8; ppppiVar9 != &pppiStack_f8; ppppiVar9 = *ppppiVar9) {
            }
            if (&pppiStack_f8 != pppiStack_f8) {
                pppiVar15 = *pppiVar11;
                pppiStack_f8[1] = pppiVar11;
                *pppiVar11 = pppiStack_f8;
                *pppiVar2 = pppiVar15;
                pppiVar15[1] = pppiVar2;
            }
            goto code_r0x08003064;
        }
        ppppuVar3 = pppuStack_e8;
        ppppuVar16 = NULL;
        do {
            ppppuVar17 = ppppuVar3;
            if (ppppuVar16 != NULL) {
                iVar13 = ppppuVar17[2] - (ppppuVar16[3] + ppppuVar16[2]);
                if (iVar13 != 0) {
                    ppppiVar9 = iommu_alloc_resv_region(ppppuVar16[3] + ppppuVar16[2],iVar13,0,2);
                    pppiVar2 = pppiStack_f0;
                    if (ppppiVar9 == NULL) goto code_r0x08003034;
                    uVar10 = __list_add_valid(ppppiVar9,pppiStack_f0,&pppiStack_f8);
                    if ((uVar10 & 1) != 0) {
                        *ppppiVar9 = &pppiStack_f8;
                        ppppiVar9[1] = pppiVar2;
                        pppiStack_f0 = ppppiVar9;
                        *pppiVar2 = ppppiVar9;
                    }
                }
            }
            ppppuVar3 = *ppppuVar17;
            ppppuVar16 = ppppuVar17;
        } while (*ppppuVar17 != &pppuStack_e8);
        pppuVar12 = pppuStack_e8[2];
        if (pppuVar12 == NULL) goto code_r0x08002f90;
code_r0x08002f54:
        ppppiVar9 = iommu_alloc_resv_region(0,pppuVar12,0,2);
        pppiVar2 = pppiStack_f8;
        if (ppppiVar9 != NULL) {
            uVar10 = __list_add_valid(ppppiVar9,&pppiStack_f8,pppiStack_f8);
            if ((uVar10 & 1) != 0) {
                pppiVar2[1] = ppppiVar9;
                *ppppiVar9 = pppiVar2;
                ppppiVar9[1] = &pppiStack_f8;
                pppiStack_f8 = ppppiVar9;
            }
            goto code_r0x08002f90;
        }
code_r0x08003034:
        ppppiVar9 = pppiStack_f8;
        while (ppppiVar9 != &pppiStack_f8) {
            ppppiVar9 = *ppppiVar9;
            kfree();
        }
    }
    generic_iommu_put_resv_regions(auVar18._0_8_,&pppuStack_e8);
code_r0x08003064:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_00 = 0x80030a0;
    iVar13 = *(*(auVar18._0_8_ + 0x80) + 0x98);
    if ((iVar13 != 0) && (pcVar14 = *(iVar13 + 0xa0), pcVar14 != NULL)) {
        if (2 < (pcVar14 + -0x8002958 >> 3 | pcVar14 << 0x3d)) {
            __cfi_slowpath_diag(0x54724e8ec07fc596,pcVar14,0x8000760);
        }
        (*pcVar14)(auVar18._0_8_,auVar18._8_8_);
    }
    return;
}


// ===== sym.qcom_iommu_generate_resv_regions @ 0x08002e44 (size 612) =====

void sym.qcom_iommu_generate_resv_regions(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar8;
    ulong *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int64_t *piStack_88;
    int64_t *piStack_80;
    ulong *puStack_78;
    ulong *puStack_70;
    code *pcStack_68;
    ulong *puStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    piStack_88 = &stack0xffffffffffffff78;
    pcStack_68 = sym.insert_range.26a21a78fdce4965dbb213a059d6010e.cfi_jt;
    piStack_80 = piStack_88;
    puStack_78 = &stack0xffffffffffffff88;
    puStack_70 = &stack0xffffffffffffff88;
    puStack_60 = &stack0xffffffffffffff88;
    iVar2 = sym.of_property_walk_each_entry(arg1,0x8000d79,&stack0xffffffffffffff98);
    if (iVar2 != 0) goto code_r0x08003064;
    if (&stack0xffffffffffffff88 != puStack_78) {
        if (puStack_78 == &stack0xffffffffffffff88) {
            puVar9 = NULL;
            iVar5 = puStack_78[2];
            if (iVar5 != 0) goto code_r0x08002f54;
code_r0x08002f90:
            if ((puVar9[3] < ~puVar9[2]) && (iVar5 = puVar9[3] + puVar9[2], iVar5 != 0)) {
                piVar3 = iommu_alloc_resv_region(iVar5,-iVar5,0,2);
                piVar7 = piStack_80;
                if (piVar3 == NULL) goto code_r0x08003034;
                uVar4 = __list_add_valid(piVar3,piStack_80,&stack0xffffffffffffff78);
                if ((uVar4 & 1) != 0) {
                    *piVar3 = &stack0xffffffffffffff78;
                    piVar3[1] = piVar7;
                    piStack_80 = piVar3;
                    *piVar7 = piVar3;
                }
            }
            generic_iommu_put_resv_regions(arg1,&stack0xffffffffffffff88);
            piVar3 = piStack_80;
            for (piVar7 = piStack_88; piVar7 != &stack0xffffffffffffff78; piVar7 = *piVar7) {
            }
            if (&stack0xffffffffffffff78 != piStack_88) {
                iVar5 = *arg2;
                piStack_88[1] = arg2;
                *arg2 = piStack_88;
                *piVar3 = iVar5;
                *(iVar5 + 8) = piVar3;
            }
            goto code_r0x08003064;
        }
        puVar1 = puStack_78;
        puVar8 = NULL;
        do {
            puVar9 = puVar1;
            if (puVar8 != NULL) {
                iVar5 = puVar9[2] - (puVar8[3] + puVar8[2]);
                if (iVar5 != 0) {
                    piVar3 = iommu_alloc_resv_region(puVar8[3] + puVar8[2],iVar5,0,2);
                    piVar7 = piStack_80;
                    if (piVar3 == NULL) goto code_r0x08003034;
                    uVar4 = __list_add_valid(piVar3,piStack_80,&stack0xffffffffffffff78);
                    if ((uVar4 & 1) != 0) {
                        *piVar3 = &stack0xffffffffffffff78;
                        piVar3[1] = piVar7;
                        piStack_80 = piVar3;
                        *piVar7 = piVar3;
                    }
                }
            }
            puVar1 = *puVar9;
            puVar8 = puVar9;
        } while (*puVar9 != &stack0xffffffffffffff88);
        iVar5 = puStack_78[2];
        if (iVar5 == 0) goto code_r0x08002f90;
code_r0x08002f54:
        piVar3 = iommu_alloc_resv_region(0,iVar5,0,2);
        piVar7 = piStack_88;
        if (piVar3 != NULL) {
            uVar4 = __list_add_valid(piVar3,&stack0xffffffffffffff78,piStack_88);
            if ((uVar4 & 1) != 0) {
                piVar7[1] = piVar3;
                *piVar3 = piVar7;
                piVar3[1] = &stack0xffffffffffffff78;
                piStack_88 = piVar3;
            }
            goto code_r0x08002f90;
        }
code_r0x08003034:
        piVar7 = piStack_88;
        while (piVar7 != &stack0xffffffffffffff78) {
            piVar7 = *piVar7;
            kfree();
        }
    }
    generic_iommu_put_resv_regions(arg1,&stack0xffffffffffffff88);
code_r0x08003064:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = 0x80030a0;
    iVar5 = *(*(auVar10._0_8_ + 0x80) + 0x98);
    if ((iVar5 != 0) && (pcVar6 = *(iVar5 + 0xa0), pcVar6 != NULL)) {
        if (2 < (pcVar6 + -0x8002958 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0x54724e8ec07fc596,pcVar6,0x8000760);
        }
        (*pcVar6)(auVar10._0_8_,auVar10._8_8_);
    }
    return;
}


// ===== sym.qcom_iommu_get_resv_regions @ 0x080030a8 (size 140) =====

void sym.qcom_iommu_get_resv_regions(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x80) + 0x98);
    if ((iVar1 != 0) && (pcVar2 = *(iVar1 + 0xa0), pcVar2 != NULL)) {
        if (2 < (pcVar2 + -0x8002958 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x54724e8ec07fc596,pcVar2,0x8000760);
        }
        (*pcVar2)(arg1,arg2);
    }
    return;
}


// ===== sym.qcom_iommu_put_resv_regions @ 0x08003134 (size 140) =====

void sym.qcom_iommu_put_resv_regions(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x80) + 0x98);
    if ((iVar1 != 0) && (pcVar2 = *(iVar1 + 0xa8), pcVar2 != NULL)) {
        if (2 < (pcVar2 + -0x8002958 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x54724e8ec07fc596,pcVar2,0x8000780);
        }
        (*pcVar2)(arg1,arg2);
    }
    return;
}


// ===== sym.qcom_iommu_get_fast_iova_range @ 0x080031c0 (size 276) =====

ulong sym.qcom_iommu_get_fast_iova_range(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    code **arg3_00;
    uint64_t *in_x3;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    code *pcStack_68;
    uint64_t *puStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uVar4 = 0xffffffea;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    pcStack_68 = sym.__typeid__ZTSFiPKjiiPvE_global_addr;
    arg3_00 = arg3;
    if (((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) {
        puStack_60 = &uStack_48;
        arg3_00 = &pcStack_68;
        uVar4 = sym.of_property_walk_each_entry(arg1,0x8000d79,arg3_00);
        if (uVar4 != 0) {
            if (uVar4 != -0x13) goto code_r0x080032a0;
            uStack_48 = 0;
            uStack_40 = 0xffffffff;
        }
        puStack_60 = &uStack_58;
        arg3_00 = &pcStack_68;
        uVar4 = sym.of_property_walk_each_entry(arg1,0x8000c5c,arg3_00);
        if (uVar4 == -0x13) {
            uVar9 = 0;
            uVar6 = 0xffffffff;
        }
        else {
            uVar9 = uStack_58;
            uVar6 = uStack_50;
            if (uVar4 != 0) goto code_r0x080032a0;
        }
        uVar4 = 0;
        if (uStack_48 <= uVar9) {
            uVar9 = uStack_48;
        }
        if (uVar6 <= uStack_40) {
            uVar6 = uStack_40;
        }
        *arg2 = uVar9;
        *arg3 = uVar6;
    }
code_r0x080032a0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.get_addr_range;
    if (auVar10._8_4_ == 0) {
        uVar9 = 0;
    }
    else {
        uVar9 = 0;
        uVar6 = auVar10._8_8_ & 0xffffffff;
        puVar7 = auVar10._0_8_;
        do {
            uVar2 = uVar6 - 1;
            uVar6 = uVar2;
            uVar1 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
            uVar9 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar9 << 0x20;
            puVar7 = puVar7 + 1;
        } while (uVar2 != 0);
    }
    if (arg3_00 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        puVar7 = auVar10._0_8_ + auVar10._8_4_;
        do {
            uVar2 = arg3_00 - 1;
            arg3_00 = uVar2;
            uVar1 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
            uVar6 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar6 << 0x20;
            puVar7 = puVar7 + 1;
        } while (uVar2 != 0);
    }
    if ((uVar9 >> 0x20 == 0) && (uVar6 = (uVar9 + uVar6) - 1, uVar6 >> 0x20 == 0)) {
        uVar8 = *in_x3;
        uVar5 = uVar9;
        if (((uVar8 != 0) && (uVar5 = uVar8, uVar9 != 0)) && (uVar9 <= uVar8)) {
            uVar5 = uVar9;
        }
        uVar4 = 0;
        uVar9 = in_x3[1];
        if (in_x3[1] <= uVar6) {
            uVar9 = uVar6;
        }
        *in_x3 = uVar5;
        in_x3[1] = uVar9;
    }
    else {
        _printk(0x8000bf9);
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.get_addr_range @ 0x080032d4 (size 224) =====

ulong sym.get_addr_range(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar8 = 0;
    }
    else {
        uVar8 = 0;
        uVar5 = arg2 & 0xffffffff;
        puVar6 = arg1;
        do {
            uVar2 = uVar5 - 1;
            uVar5 = uVar2;
            uVar1 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
            uVar8 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar8 << 0x20;
            puVar6 = puVar6 + 1;
        } while (uVar2 != 0);
    }
    if (arg3 == 0) {
        uVar5 = 0;
    }
    else {
        uVar5 = 0;
        puVar6 = arg1 + arg2 * 4;
        do {
            uVar2 = arg3 - 1;
            arg3 = uVar2;
            uVar1 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
            uVar5 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar5 << 0x20;
            puVar6 = puVar6 + 1;
        } while (uVar2 != 0);
    }
    if ((uVar8 >> 0x20 == 0) && (uVar5 = (uVar8 + uVar5) - 1, uVar5 >> 0x20 == 0)) {
        uVar7 = *arg4;
        uVar4 = uVar8;
        if (((uVar7 != 0) && (uVar4 = uVar7, uVar8 != 0)) && (uVar8 <= uVar7)) {
            uVar4 = uVar8;
        }
        uVar3 = 0;
        uVar8 = *(arg4 + 8);
        if (*(arg4 + 8) <= uVar5) {
            uVar8 = uVar5;
        }
        *arg4 = uVar4;
        *(arg4 + 8) = uVar8;
    }
    else {
        _printk(0x8000bf9);
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.qcom_iommu_iova_to_phys_hard @ 0x080033b4 (size 132) =====

ulong sym.qcom_iommu_iova_to_phys_hard(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(arg1 + 8) + -0x50);
    if (pcVar2 == NULL) {
        uVar1 = 0;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFyP12iommu_domainP19qcom_iommu_atos_txnE_global_addr) {
            __cfi_slowpath_diag(0xc935aba32abc5ceb,pcVar2,0x80007a0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_sid_switch @ 0x08003438 (size 156) =====

ulong sym.qcom_iommu_sid_switch(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = iommu_get_domain_for_dev();
    if ((iVar1 == 0) || (pcVar3 = *(*(iVar1 + 8) + -0x48), pcVar3 == NULL)) {
        uVar2 = 0xffffffea;
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFiP6device20sid_switch_directionE_global_addr) {
            __cfi_slowpath_diag(0x3a3bdc74315a0779,pcVar3,0x80007c0);
        }
        uVar2 = (*pcVar3)(arg1,arg2 & 0xffffffff);
    }
    return uVar2;
}


// ===== sym.qcom_iommu_get_fault_ids @ 0x080034d4 (size 132) =====

ulong sym.qcom_iommu_get_fault_ids(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(arg1 + 8) + -0x40);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP12iommu_domainP20qcom_iommu_fault_idsE_global_addr) {
            __cfi_slowpath_diag(0xff2b66f0ca4d350,pcVar2,0x80007e0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.qcom_skip_tlb_management @ 0x08003558 (size 132) =====

ulong sym.qcom_skip_tlb_management(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = iommu_get_domain_for_dev();
    if ((iVar1 != 0) && (pcVar2 = *(*(iVar1 + 8) + -8), pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x984aa404cc097cc5,pcVar2,0x8000800);
        (*pcVar2)(iVar1,arg1 & 1);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qcom_iommu_get_msi_size @ 0x080035dc (size 120) =====

uint32_t sym.qcom_iommu_get_msi_size(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x2f0) == 0) ||
       ((iVar2 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,iommu-group",0), iVar2 == 0 &&
        (iVar2 = *(arg1 + 0x2f0), iVar2 == 0)))) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = of_property_read_variable_u32_array(iVar2,"qcom,iommu-msi-size",arg2,1,0);
        uVar1 = uVar1 & uVar1 >> 0x1f;
    }
    return uVar1;
}


// ===== sym.qcom_iommu_get_context_bank_nr @ 0x08003654 (size 132) =====

ulong sym.qcom_iommu_get_context_bank_nr(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(arg1 + 8) + -0x38);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (3 < (pcVar2 + -0x80028f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1ea828e69ceaad18,pcVar2,0x8000820);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_get_asid_nr @ 0x080036d8 (size 132) =====

ulong sym.qcom_iommu_get_asid_nr(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(arg1 + 8) + -0x30);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (3 < (pcVar2 + -0x80028f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1ea828e69ceaad18,pcVar2,0x8000840);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_set_secure_vmid @ 0x0800375c (size 140) =====

ulong sym.qcom_iommu_set_secure_vmid(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(arg1 + 8) + -0x28);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP12iommu_domain4vmidE_global_addr) {
            __cfi_slowpath_diag(0x7ecf6384c5ac0123,pcVar2,0x8000860);
            arg2 = arg2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_set_fault_model @ 0x080037e8 (size 152) =====

uint sym.qcom_iommu_set_fault_model(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0xffffffea;
    if ((arg2 < 0x10) && (pcVar2 = *(*(arg1 + 8) + -0x20), pcVar2 != NULL)) {
        if (pcVar2 != sym.__typeid__ZTSFiP12iommu_domainiE_global_addr) {
            __cfi_slowpath_diag(0x6a7cc3e6301bd48c,pcVar2,0x8000880);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_enable_s1_translation @ 0x08003880 (size 132) =====

ulong sym.qcom_iommu_enable_s1_translation(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(arg1 + 8) + -0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (3 < (pcVar2 + -0x80028f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1ea828e69ceaad18,pcVar2,0x80008a0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.qcom_iommu_get_mappings_configuration @ 0x08003904 (size 132) =====

ulong sym.qcom_iommu_get_mappings_configuration(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*(arg1 + 8) + -0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xffffffea;
    }
    else {
        if (3 < (pcVar2 + -0x80028f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1ea828e69ceaad18,pcVar2,0x80008c0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.qcom_alloc_io_pgtable_ops @ 0x08003988 (size 304) =====

uint32_t * sym.qcom_alloc_io_pgtable_ops(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t *puVar3;
    code *pcVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 8) {
        puVar3 = alloc_io_pgtable_ops(arg1,arg2,arg3);
        return puVar3;
    }
    if (arg1 == 0xffffffff) {
        pcVar4 = reloc.av8l_fast_alloc_pgtable.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    }
    else {
        if (arg1 != 0xfffffffe) {
            _printk(0x8000bbf,arg1);
            return NULL;
        }
        pcVar4 = reloc.arm_64_lpae_alloc_pgtable_s1.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
    }
    pcVar4 = *pcVar4;
    if (5 < (pcVar4 + -0x8002a00 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0xfb0f640302b815fd,pcVar4,0x80008e0);
    }
    puVar3 = (*pcVar4)(arg2,arg3);
    if (puVar3 == NULL) {
        return NULL;
    }
    *puVar3 = arg1;
    *(puVar3 + 2) = arg3;
    uVar1 = *(arg2 + 0x10);
    uVar5 = *arg2;
    *(puVar3 + 6) = *(arg2 + 8);
    *(puVar3 + 8) = uVar1;
    *(puVar3 + 4) = uVar5;
    uVar5 = *(arg2 + 0x30);
    uVar1 = *(arg2 + 0x18);
    uVar2 = *(arg2 + 0x20);
    *(puVar3 + 0xe) = *(arg2 + 0x28);
    *(puVar3 + 0x10) = uVar5;
    *(puVar3 + 10) = uVar1;
    *(puVar3 + 0xc) = uVar2;
    uVar5 = *(arg2 + 0x50);
    uVar1 = *(arg2 + 0x38);
    uVar2 = *(arg2 + 0x40);
    *(puVar3 + 0x16) = *(arg2 + 0x48);
    *(puVar3 + 0x18) = uVar5;
    *(puVar3 + 0x12) = uVar1;
    *(puVar3 + 0x14) = uVar2;
    return puVar3 + 0x1a;
}


// ===== sym.qcom_free_io_pgtable_ops @ 0x08003ab8 (size 264) =====

void sym.qcom_free_io_pgtable_ops(int64_t arg1)

{
    uint32_t uVar1;
    ulong *puVar2;
    ulong *in_x18;
    code *pcVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        uVar1 = *(arg1 + -0x68);
        if (uVar1 < 8) {
            free_io_pgtable_ops();
        }
        else {
            if (uVar1 == 0xffffffff) {
                pcVar4 = reloc.av8l_fast_alloc_pgtable.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
                puVar2 = *(arg1 + -0x38);
            }
            else {
                if (uVar1 != 0xfffffffe) {
                    _printk(0x8000bbf);
                    return;
                }
                pcVar4 = reloc.arm_64_lpae_alloc_pgtable_s1.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
                puVar2 = *(arg1 + -0x38);
            }
            if ((puVar2 != NULL) && (pcVar3 = *puVar2, pcVar3 != NULL)) {
                __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar3,0x8000940);
                (*pcVar3)(*(arg1 + -0x60));
            }
            pcVar4 = *(pcVar4 + 8);
            if (1 < (pcVar4 + -0x8002898 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0xa7b980fc06a96afe,pcVar4,0x8000900);
            }
            (*pcVar4)(arg1 + -0x68);
        }
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08003bc0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003c04

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
    //switch table (4 cases) at 0x8000a40
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003c18);
    (*pcVar1)();
}


// ===== sym.qcom_pci_find_host_bridge @ 0x08003c18 (size 28) =====

ulong sym.qcom_pci_find_host_bridge(int64_t arg1)

{
    int64_t iVar1;
    
    do {
        iVar1 = arg1;
        arg1 = *(iVar1 + 0x10);
    } while (arg1 != 0);
    return *(iVar1 + 0x138);
}


// ===== sym.qcom_arch_sync_dma_for_device @ 0x08003c34 (size 120) =====

void sym.qcom_arch_sync_dma_for_device(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(_segment.ehdr + 0x2b8);
    if (puVar2 != NULL) {
        uVar3 = puVar2[2];
        while (uVar3 != 0) {
            if (*puVar2 <= arg1 && arg1 - *puVar2 < uVar3) {
                arg1 = arg1 - puVar2[3];
                goto code_r0x08003c94;
            }
            puVar1 = puVar2 + 6;
            puVar2 = puVar2 + 4;
            uVar3 = *puVar1;
        }
        arg1 = -1;
    }
code_r0x08003c94:
    dma_sync_single_for_device(_segment.ehdr,arg1,arg2,arg3 & 0xffffffff);
    return;
}


// ===== sym.qcom_arch_sync_dma_for_cpu @ 0x08003cac (size 120) =====

void sym.qcom_arch_sync_dma_for_cpu(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(_segment.ehdr + 0x2b8);
    if (puVar2 != NULL) {
        uVar3 = puVar2[2];
        while (uVar3 != 0) {
            if (*puVar2 <= arg1 && arg1 - *puVar2 < uVar3) {
                arg1 = arg1 - puVar2[3];
                goto code_r0x08003d0c;
            }
            puVar1 = puVar2 + 6;
            puVar2 = puVar2 + 4;
            uVar3 = *puVar1;
        }
        arg1 = -1;
    }
code_r0x08003d0c:
    dma_sync_single_for_cpu(_segment.ehdr,arg1,arg2,arg3 & 0xffffffff);
    return;
}


// ===== sym.qcom_arch_dma_prep_coherent @ 0x08003d24 (size 140) =====

void sym.qcom_arch_dma_prep_coherent(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    uint64_t *puVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(_segment.ehdr + 0x2b8);
    uVar2 = (arg1 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 + 0x8000000000;
    if (puVar3 != NULL) {
        uVar4 = puVar3[2];
        while (uVar4 != 0) {
            if (*puVar3 <= uVar2 && uVar2 - *puVar3 < uVar4) {
                uVar2 = uVar2 - puVar3[3];
                goto code_r0x08003d98;
            }
            puVar1 = puVar3 + 6;
            puVar3 = puVar3 + 4;
            uVar4 = *puVar1;
        }
        uVar2 = 0xffffffffffffffff;
    }
code_r0x08003d98:
    dma_sync_single_for_device(_segment.ehdr,uVar2,arg2,1);
    return;
}


// ===== sym.qcom_dma_alloc_from_contiguous @ 0x08003db0 (size 72) =====

void sym.qcom_dma_alloc_from_contiguous(int64_t arg1,uchar noname_1 [16],uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar1 = *(arg1 + 0x2e0), *(arg1 + 0x2e0) == 0)) {
        iVar1 = _segment.ehdr;
    }
    if (7 < arg2) {
        arg2 = 8;
    }
    cma_alloc(iVar1,in_x1,arg2,arg3 & 1);
    return;
}


// ===== sym.qcom_dma_release_from_contiguous @ 0x08003df8 (size 64) =====

uint32_t sym.qcom_dma_release_from_contiguous(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar2 = *(arg1 + 0x2e0), *(arg1 + 0x2e0) == 0)) {
        iVar2 = _segment.ehdr;
    }
    uVar1 = cma_release(iVar2,in_x1,arg2);
    return uVar1 & 1;
}


// ===== sym.qcom_dma_alloc_contiguous @ 0x08003e38 (size 192) =====

ulong sym.qcom_dma_alloc_contiguous(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar3 = arg2;
    *in_x18 = unaff_x30;
    if ((arg3 >> 10 & 1) == 0) {
        uVar1 = 0;
    }
    else {
        iVar2 = *(arg1 + 0x2e0);
        if (iVar2 == 0) {
            if (uVar3 < 0x1001) {
                return 0;
            }
            if (_segment.ehdr == 0) {
                return 0;
            }
            iVar4 = 0x40 - LZCOUNT(uVar3 - 1 >> 0xc);
            iVar2 = _segment.ehdr;
            if (7 < iVar4) {
                iVar4 = 8;
            }
        }
        else if (uVar3 - 1 < 0x1000) {
            iVar4 = 0;
        }
        else {
            uVar5 = LZCOUNT(uVar3 - 1 >> 0xc);
            if (uVar5 < 0x39) {
                iVar4 = 8;
            }
            else {
                iVar4 = 0x40 - uVar5;
            }
        }
        uVar1 = cma_alloc(iVar2,arg2 >> 0xc,iVar4,arg3 >> 0xd & 1);
    }
    return uVar1;
}


// ===== sym.qcom_dma_free_contiguous @ 0x08003ef8 (size 124) =====

void sym.qcom_dma_free_contiguous(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar2 = *(arg1 + 0x2e0), *(arg1 + 0x2e0) == 0)) {
        iVar2 = _segment.ehdr;
    }
    uVar3 = cma_release(iVar2,arg2,arg3 + 0xfffU >> 0xc);
    if ((uVar3 & 1) == 0) {
        iVar1 = 0;
        if (0xfff < arg3 - 1U) {
            iVar1 = 0x40 - LZCOUNT(arg3 - 1U >> 0xc);
        }
        __free_pages(arg2,iVar1);
    }
    return;
}


// ===== sym.qcom_dma_common_find_pages @ 0x08003f74 (size 152) =====

ulong sym.qcom_dma_common_find_pages(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj._root);
    for (iVar1 = *_segment.ehdr; iVar1 != 0; iVar1 = *(iVar1 + 0x10)) {
        while (*(iVar1 + 0x18) <= arg1) {
            if (arg1 <= *(iVar1 + 0x18)) {
                mutex_unlock(obj._root);
                return *(iVar1 + 0x20);
            }
            iVar1 = *(iVar1 + 8);
            if (iVar1 == 0) goto code_r0x08003fd4;
        }
    }
code_r0x08003fd4:
    mutex_unlock(obj._root);
    return 0;
}


// ===== sym.qcom_dma_common_pages_remap @ 0x0800400c (size 316) =====

uint64_t sym.qcom_dma_common_pages_remap(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
    if (piVar3 == NULL) {
        uVar4 = 0;
    }
    else {
        uVar4 = vmap(arg1,arg2 + 0xfffU >> 0xc,0x10,arg3);
        if (uVar4 == 0) {
            kfree(piVar3);
        }
        else {
            piVar3[3] = uVar4;
            piVar3[4] = arg1;
            mutex_lock(obj._root);
            iVar1 = *_segment.ehdr;
            if (*_segment.ehdr == 0) {
                iVar6 = 0;
                piVar5 = _segment.ehdr;
            }
            else {
                do {
                    while (iVar6 = iVar1, *(iVar6 + 0x18) <= uVar4) {
                        if (uVar4 <= *(iVar6 + 0x18)) {
                            mutex_unlock(obj._root);
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x800,0x800412c);
                            (*pcVar2)();
                        }
                        piVar5 = iVar6 + 8;
                        iVar1 = *piVar5;
                        if (*piVar5 == 0) goto code_r0x080040e0;
                    }
                    piVar5 = iVar6 + 0x10;
                    iVar1 = *piVar5;
                } while (*piVar5 != 0);
            }
code_r0x080040e0:
            *piVar3 = iVar6;
            piVar3[1] = 0;
            piVar3[2] = 0;
            *piVar5 = piVar3;
            rb_insert_color(piVar3,_segment.ehdr);
            mutex_unlock(obj._root);
        }
    }
    return uVar4;
}


// ===== sym.qcom_dma_common_contiguous_remap @ 0x08004148 (size 240) =====

ulong sym.qcom_dma_common_contiguous_remap(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 + 0xfff;
    uVar4 = uVar1 * 0x100000 >> 0x20;
    if ((uVar4 >> 0x3d != 0) || (iVar2 = __kmalloc(uVar4 << 3,0xcc0), iVar2 == 0)) {
        return 0;
    }
    if (0 < uVar1 >> 0xc) {
        uVar4 = uVar1 >> 0xc & 0xffffffff;
        if (uVar4 < 2) {
            iVar6 = 0;
        }
        else {
            uVar7 = uVar1 >> 0xc & 1;
            piVar8 = iVar2 + 8;
            iVar6 = uVar4 - uVar7;
            iVar9 = iVar6;
            iVar5 = arg1;
            do {
                iVar9 = iVar9 + -2;
                piVar8[-1] = iVar5;
                *piVar8 = iVar5 + 0x40;
                iVar5 = iVar5 + 0x80;
                piVar8 = piVar8 + 2;
            } while (iVar9 != 0);
            if (uVar7 == 0) goto code_r0x08004200;
        }
        iVar5 = uVar4 - iVar6;
        arg1 = arg1 + iVar6 * 0x40;
        piVar8 = iVar2 + iVar6 * 8;
        do {
            *piVar8 = arg1;
            iVar5 = iVar5 + -1;
            arg1 = arg1 + 0x40;
            piVar8 = piVar8 + 1;
        } while (iVar5 != 0);
    }
code_r0x08004200:
    uVar3 = vmap(iVar2,uVar1 >> 0xc,0x10,arg3);
    kfree(iVar2);
    return uVar3;
}


// ===== sym.qcom_dma_common_free_remap @ 0x08004238 (size 200) =====

void sym.qcom_dma_common_free_remap(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj._root);
    for (iVar1 = *_segment.ehdr; iVar1 != 0; iVar1 = *(iVar1 + 0x10)) {
        while (*(iVar1 + 0x18) <= arg1) {
            if (arg1 <= *(iVar1 + 0x18)) {
                mutex_unlock(obj._root);
                mutex_lock(obj._root);
                rb_erase(iVar1,_segment.ehdr);
                mutex_unlock(obj._root);
                kfree(iVar1);
                goto code_r0x080042e0;
            }
            iVar1 = *(iVar1 + 8);
            if (iVar1 == 0) goto code_r0x0800429c;
        }
    }
code_r0x0800429c:
    mutex_unlock(obj._root);
code_r0x080042e0:
    vunmap(arg1);
    return;
}


// ===== sym.qcom_dma_alloc_from_pool @ 0x08004300 (size 228) =====

int64_t sym.qcom_dma_alloc_from_pool(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800b000 != 0) {
        iVar2 = gen_pool_alloc_algo_owner(*0x800b000,arg1,*(*0x800b000 + 0x20),*(*0x800b000 + 0x28),0);
        if (iVar2 != 0) {
            uVar3 = gen_pool_virt_to_phys(*0x800b000,iVar2);
            *arg2 = (uVar3 >> 6 & 0x3ffffffffffffc0) + (_gen_pool_first_fit_order_align >> 0xc) * -0x40 + -0x200000000;
            memset(iVar2,0,arg1);
        }
        uVar3 = gen_pool_avail(*0x800b000);
        if (uVar3 < _segment.ehdr) {
            queue_work_on(0x20,___stack_chk_fail,obj.atomic_pool_work);
        }
        return iVar2;
    }
    __warn_printk("coherent pool not initialised!\n");
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80043c8);
    (*pcVar1)();
}


// ===== sym.qcom_dma_free_from_pool @ 0x080043e4 (size 108) =====

ulong sym.qcom_dma_free_from_pool(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0;
    if (*0x800b000 != 0) {
        uVar1 = gen_pool_has_addr();
        if ((uVar1 & 1) == 0) {
            uVar2 = 0;
        }
        else {
            gen_pool_free_owner(*0x800b000,arg1,arg2,0);
            uVar2 = 1;
        }
    }
    return uVar2;
}


// ===== sym.qcom_dma_mmap_from_dev_coherent @ 0x08004450 (size 16) =====

ulong sym.qcom_dma_mmap_from_dev_coherent(int64_t arg1)

{
    return 0;
}


// ===== sym.qcom_dma_pgprot @ 0x08004460 (size 40) =====

uint64_t sym.qcom_dma_pgprot(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    
    uVar1 = arg2 & 0xffffffffffffffe3U | 0x60000000000008;
    if ((*(arg1 + 0x34c) & 0x20) != 0) {
        uVar1 = arg2;
    }
    return uVar1;
}


// ===== sym.qcom_dma_info_to_prot @ 0x08004488 (size 100) =====

uint32_t sym.qcom_dma_info_to_prot(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg3 >> 4;
    uVar1 = 4;
    if ((arg2 & 1) == 0) {
        uVar1 = 0;
    }
    uVar1 = uVar2 & 0x20 | uVar1 | uVar2 & 0x40 | uVar2 & 0x80;
    if (arg1 == 2) {
        uVar2 = uVar1 | 2;
    }
    else if (arg1 == 1) {
        uVar2 = uVar1 | 1;
    }
    else {
        uVar2 = 0;
        if (arg1 == 0) {
            uVar2 = uVar1 | 3;
        }
    }
    return uVar2;
}


// ===== sym.qcom_iommu_dma_prepare_map_sg @ 0x080044ec (size 260) =====

int64_t sym.qcom_iommu_dma_prepare_map_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = arg4 & 0xffffffff;
    if ((*(arg1 + 0x2c0) == 0) || (uVar8 = *(*(arg1 + 0x2c0) + 8), uVar8 == 0)) {
        uVar8 = 0xffffffffffffffff;
    }
    if (arg4 < 1) {
        iVar6 = 0;
    }
    else {
        iVar6 = 0;
        iVar7 = 0;
        do {
            iVar2 = arg3;
            uVar1 = *(arg2 + 0x20) - 1U & *(iVar2 + 8);
            *(iVar2 + 0x18) = *(iVar2 + 0xc);
            *(iVar2 + 0x10) = uVar1;
            *(iVar2 + 8) = *(iVar2 + 8) - uVar1;
            uVar4 = (uVar8 + 1) - iVar6 & uVar8;
            uVar3 = (*(iVar2 + 0xc) + uVar1 + *(arg2 + 0x20)) - 1 & -*(arg2 + 0x20);
            *(iVar2 + 0xc) = uVar3;
            if ((uVar4 != 0) && (uVar4 < uVar3 - 1)) {
                iVar6 = uVar4 + iVar6;
                *(iVar7 + 0xc) = *(iVar7 + 0xc) + uVar4;
            }
            iVar6 = iVar6 + uVar3;
            arg3 = sg_next(iVar2);
            uVar1 = uVar5 - 1;
            uVar5 = uVar1;
            iVar7 = iVar2;
        } while (uVar1 != 0);
    }
    return iVar6;
}


// ===== sym.qcom_iommu_dma_finalise_sg @ 0x080045f0 (size 384) =====

int sym.qcom_iommu_dma_finalise_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int iVar7;
    int iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    int iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    int iStack_64;
    
    *in_x18 = unaff_x30;
    piVar5 = *(arg1 + 0x2c0);
    if (piVar5 == NULL) {
        uVar6 = 0xffffffffffffffff;
    }
    else {
        uVar6 = *(piVar5 + 2);
        iStack_64 = *piVar5;
        if (uVar6 == 0) {
            uVar6 = 0xffffffffffffffff;
        }
        if (iStack_64 != 0) goto joined_r0x08004690;
    }
    iStack_64 = 0x10000;
joined_r0x08004690:
    if (arg3 < 1) {
        iVar8 = 0;
    }
    else {
        uVar1 = *(arg2 + 0xc);
        uVar2 = *(arg2 + 0x18);
        iVar8 = *(arg2 + 0x10);
        *(arg2 + 8) = *(arg2 + 8) + iVar8;
        *(arg2 + 0xc) = uVar2;
        *(arg2 + 0x10) = arg4 + (*(arg2 + 0x10) & 0xffffffff);
        iVar4 = sg_next(arg2);
        iVar7 = arg3 + -1;
        if (iVar7 == 0) {
            iVar8 = 1;
        }
        else {
            uVar9 = uVar1 + arg4;
            uVar10 = 0;
            if (uVar1 <= uVar2 + iVar8) {
                uVar10 = uVar2;
            }
            iVar8 = 1;
            do {
                uVar1 = *(iVar4 + 0xc);
                uVar12 = *(iVar4 + 0x10);
                uVar2 = *(iVar4 + 0x18);
                *(iVar4 + 0x18) = 0;
                iVar11 = uVar12;
                *(iVar4 + 0x10) = 0xffffffffffffffff;
                *(iVar4 + 8) = *(iVar4 + 8) + iVar11;
                *(iVar4 + 0xc) = uVar2;
                if ((((uVar10 == 0) || (iVar11 != 0)) || ((uVar9 & uVar6) == 0)) || (iStack_64 - uVar10 < uVar2)) {
                    arg2 = sg_next(arg2);
                    iVar8 = iVar8 + 1;
                    *(arg2 + 0x10) = (uVar12 & 0xffffffff) + uVar9;
                    uVar3 = uVar2;
                }
                else {
                    uVar3 = uVar2 + uVar10;
                }
                uVar9 = uVar9 + uVar1;
                uVar10 = 0;
                if (uVar1 <= uVar2 + iVar11) {
                    uVar10 = uVar3;
                }
                *(arg2 + 0x18) = uVar3;
                iVar4 = sg_next(iVar4);
                iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
        }
    }
    return iVar8;
}


// ===== sym.qcom_iommu_dma_invalidate_sg @ 0x08004770 (size 120) =====

void sym.qcom_iommu_dma_invalidate_sg(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < arg2) {
        uVar2 = arg2 & 0xffffffff;
        do {
            if (*(arg1 + 0x10) != -1) {
                *(arg1 + 8) = *(arg1 + 8) + *(arg1 + 0x10);
            }
            if (*(arg1 + 0x18) != 0) {
                *(arg1 + 0xc) = *(arg1 + 0x18);
            }
            *(arg1 + 0x10) = 0xffffffffffffffff;
            *(arg1 + 0x18) = 0;
            arg1 = sg_next();
            uVar1 = uVar2 - 1;
            uVar2 = uVar1;
        } while (uVar1 != 0);
    }
    return;
}


// ===== sym.qcom_iommu_dma_mmap @ 0x080047e8 (size 352) =====

ulong sym.qcom_iommu_dma_mmap(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t in_x4;
    ulong *in_x18;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(arg2 + 0x98);
    uVar3 = in_x4 + 0xfffU >> 0xc;
    uVar2 = *(arg2 + 0x48) & 0xffffffffffffffe3 | 0x60000000000008;
    if ((*(arg1 + 0x34c) & 0x20) != 0) {
        uVar2 = *(arg2 + 0x48);
    }
    *(arg2 + 0x48) = uVar2;
    if ((uVar4 < uVar3) && (*(arg2 + 8) - *arg2 >> 0xc <= uVar3 - uVar4)) {
        uVar2 = is_vmalloc_addr(arg3);
        if ((uVar2 & 1) == 0) {
            iVar5 = (((arg3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) +
                    (_gen_pool_first_fit_order_align >> 0xc) * 0x40 >> 6;
        }
        else {
            mutex_lock(obj._root);
            for (iVar5 = *_segment.ehdr; iVar5 != 0; iVar5 = *(iVar5 + 0x10)) {
                while (*(iVar5 + 0x18) <= arg3) {
                    if (arg3 <= *(iVar5 + 0x18)) {
                        mutex_unlock(obj._root);
                        if (*(iVar5 + 0x20) != 0) {
                            uVar1 = vm_map_pages(arg2,*(iVar5 + 0x20),uVar3);
                            return uVar1;
                        }
                        goto code_r0x080048bc;
                    }
                    iVar5 = *(iVar5 + 8);
                    if (iVar5 == 0) goto code_r0x080048b0;
                }
            }
code_r0x080048b0:
            mutex_unlock(obj._root);
code_r0x080048bc:
            iVar5 = vmalloc_to_pfn(arg3);
        }
        uVar1 = remap_pfn_range(arg2,*arg2,iVar5 + uVar4,*(arg2 + 8) - *arg2,*(arg2 + 0x48));
    }
    else {
        uVar1 = 0xfffffffa;
    }
    return uVar1;
}


// ===== sym.qcom_iommu_dma_get_sgtable @ 0x08004948 (size 324) =====

ulong sym.qcom_iommu_dma_get_sgtable(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t in_x4;
    uint64_t *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = is_vmalloc_addr(arg2);
    if ((uVar2 & 1) == 0) {
        uVar2 = (((arg2 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
    }
    else {
        mutex_lock(obj._root);
        for (iVar5 = *_segment.ehdr; iVar5 != 0; iVar5 = *(iVar5 + 0x10)) {
            while (*(iVar5 + 0x18) <= arg2) {
                if (arg2 <= *(iVar5 + 0x18)) {
                    mutex_unlock(obj._root);
                    if (*(iVar5 + 0x20) != 0) {
                        uVar3 = sg_alloc_table_from_pages_segment(arg1,*(iVar5 + 0x20),in_x4 + 0xfffU >> 0xc,0);
                        return uVar3;
                    }
                    goto code_r0x080049cc;
                }
                iVar5 = *(iVar5 + 8);
                if (iVar5 == 0) goto code_r0x080049c0;
            }
        }
code_r0x080049c0:
        mutex_unlock(obj._root);
code_r0x080049cc:
        uVar2 = vmalloc_to_page(arg2);
    }
    uVar3 = sg_alloc_table(arg1,1,0xcc0);
    if (uVar3 == 0) {
        if ((uVar2 & 3) != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8004a8c);
            (*pcVar1)();
        }
        puVar4 = *arg1;
        uVar3 = 0;
        *(puVar4 + 1) = 0;
        *(puVar4 + 0xc) = in_x4 + 0xfffU & 0xfffff000;
        *puVar4 = *puVar4 & 3 | uVar2;
    }
    return uVar3;
}


// ===== sym.qcom_dma_iommu_is_ready @ 0x08004a8c (size 20) =====

code sym.qcom_dma_iommu_is_ready(void)

{
    return obj.probe_finished;
}


// ===== sym.qcom_dma_iommu_generic_driver_exit @ 0x08004aa0 (size 44) =====

void sym.qcom_dma_iommu_generic_driver_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_dma_iommu_probe.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt);
    return;
}


// ===== sym.qcom_dma_iommu_probe @ 0x08004acc (size 556) =====

int sym.qcom_dma_iommu_probe(int64_t arg1)

{
    uint64_t arg1_00;
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    arg1_00 = arg1 + 0x10;
    iStack_38 = *(iVar2 + 0x5e0);
    _segment.ehdr = arg1_00;
    if ((*(arg1 + 0x35c) >> 5 & 1) == 0) {
        iVar1 = of_reserved_mem_device_init_by_idx(arg1_00,*(arg1 + 0x300),0);
        if (iVar1 != 0) goto code_r0x08004bd8;
        if (*(arg1 + 0x2f0) != 0) {
            uVar5 = __totalram_pages >> 0xd;
            if (0x3ff < uVar5) {
                uVar5 = 0x400;
            }
            uVar5 = uVar5 * 0x1000;
            _obj.atomic_pool_work = 0xfffffffe0;
            if (uVar5 < 0x20001) {
                uVar5 = 0x20000;
            }
            *0x8000580 = 0x8000580;
            *0x8000588 = 0x8000580;
            uStack_3c = 0xcc0;
            *0x8000590 = sym.atomic_pool_work_fn.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt;
            _segment.ehdr = uVar5;
            iVar2 = gen_pool_create(0xc,0xffffffff);
            if (iVar2 == 0) {
                iVar1 = -0xc;
                *0x800b000 = 0;
            }
            else {
                gen_pool_set_algo(iVar2,sym.gen_pool_first_fit_order_align.cfi_jt,0);
                iVar1 = sym.atomic_pool_expand(iVar2,uVar5);
                if (iVar1 == 0) {
                    uVar5 = gen_pool_size(iVar2);
                    uVar3 = 0x800113f;
                }
                else {
                    gen_pool_destroy(iVar2);
                    iVar2 = 0;
                    uVar3 = 0x8000df0;
                }
                _printk(uVar3,uVar5 >> 10,&stack0xffffffffffffffc4);
                *0x800b000 = iVar2;
                if (iVar2 == 0) {
                    iVar1 = -0xc;
                }
                else {
                    uVar5 = debugfs_create_dir("qcom_dma_pools",0);
                    if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
                        debugfs_create_ulong("pool_size",0x100,uVar5,obj.current_pool_size);
                    }
                    iVar1 = dma_set_mask(arg1_00,0xffffffffffffffff);
                    if (iVar1 == 0) {
                        dma_set_coherent_mask(arg1_00,0xffffffffffffffff);
                        obj.probe_finished = 0x1;
                    }
                    else {
                        sym.qcom_dma_atomic_pool_exit(arg1_00);
                    }
                }
            }
            goto code_r0x08004bd8;
        }
        pcVar4 = "Unable to find cma area\n";
        _segment.ehdr = 0;
    }
    else {
        pcVar4 = "Cannot be dma-coherent\n";
    }
    _dev_err(arg1_00,pcVar4);
    iVar1 = -0x16;
code_r0x08004bd8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = 0x8004cf4;
    sym.qcom_dma_atomic_pool_exit(iVar2 + 0x10);
    return 0;
}


// ===== sym.qcom_dma_iommu_remove @ 0x08004cf8 (size 44) =====

ulong sym.qcom_dma_iommu_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_dma_atomic_pool_exit(arg1 + 0x10);
    return 0;
}


// ===== sym.qcom_dma_atomic_pool_exit @ 0x08004d24 (size 188) =====

void sym.qcom_dma_atomic_pool_exit(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    iVar3 = gen_pool_alloc_algo_owner(*0x800b000,_segment.ehdr,*(*0x800b000 + 0x20),*(*0x800b000 + 0x28),0);
    if (iVar3 != 0) {
        gen_pool_free_owner(*0x800b000,iVar3,_segment.ehdr,0);
        gen_pool_destroy(*0x800b000);
        uVar4 = vmalloc_to_page(iVar3);
        sym.qcom_dma_common_free_remap(iVar3);
        if ((arg1 == 0) || (iVar3 = *(arg1 + 0x2e0), *(arg1 + 0x2e0) == 0)) {
            iVar3 = _segment.ehdr;
        }
        cma_release(iVar3,uVar4,(iVar1 << 0x14) >> 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8004dc4);
    (*pcVar2)();
}


// ===== sym.atomic_pool_work_fn @ 0x08004de0 (size 96) =====

void sym.atomic_pool_work_fn(void)

{
    int64_t arg1;
    uint64_t uVar1;
    int64_t arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *0x800b000;
    if (*0x800b000 != 0) {
        uVar1 = gen_pool_avail(*0x800b000);
        if (uVar1 < _segment.ehdr) {
            arg2 = gen_pool_size(arg1);
            sym.atomic_pool_expand(arg1,arg2);
        }
    }
    return;
}


// ===== sym.atomic_pool_expand @ 0x08004e40 (size 704) =====

int sym.atomic_pool_expand(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    ulong uVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    ulong *in_x18;
    int64_t iVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 - 1U < 0x1000) {
        uVar8 = 0;
    }
    else {
        uVar8 = LZCOUNT(arg2 - 1U >> 0xc);
        if (uVar8 < 0x37) {
            uVar8 = 10;
        }
        else {
            uVar8 = 0x40 - uVar8;
        }
    }
    while( true ) {
        if (_segment.ehdr == 0) {
            uVar2 = tpidr_el1;
            iVar5 = __alloc_pages(uVar2,0xcc0,uVar8,0,0);
        }
        else {
            uVar17 = uVar8;
            if (7 < uVar8) {
                uVar17 = 8;
            }
            iVar5 = cma_alloc(_segment.ehdr,1 << (uVar8 & 0x1f),uVar17,0);
        }
        if (iVar5 != 0) break;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0xffffffff) {
            return -0xc;
        }
    }
    iVar16 = 1 << (uVar8 + 0xc & 0x1f);
    puVar9 = *(_segment.ehdr + 0x2b8);
    uVar7 = (iVar5 + (_gen_pool_first_fit_order_align >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
    if (puVar9 != NULL) {
        uVar11 = puVar9[2];
        while (uVar11 != 0) {
            if (*puVar9 <= uVar7 && uVar7 - *puVar9 < uVar11) {
                uVar7 = uVar7 - puVar9[3];
                goto code_r0x08004f7c;
            }
            puVar1 = puVar9 + 6;
            puVar9 = puVar9 + 4;
            uVar11 = *puVar1;
        }
        uVar7 = 0xffffffffffffffff;
    }
code_r0x08004f7c:
    dma_sync_single_for_device(_segment.ehdr,uVar7,iVar16,1);
    uVar7 = iVar16 + 0xfff;
    uVar2 = 0x6800000000070b;
    if (arm64_use_ng_mappings != 0x0) {
        uVar2 = 0x68000000000f0b;
    }
    if (((uVar7 >> 0xc) >> 0x3d == 0) && (iVar6 = __kmalloc((uVar7 >> 0xc) << 3,0xcc0), iVar6 != 0)) {
        if (0 < uVar7 >> 0xc) {
            uVar11 = uVar7 >> 0xc & 0xffffffff;
            if (uVar11 < 2) {
                iVar12 = 0;
            }
            else {
                uVar14 = uVar7 >> 0xc & 1;
                piVar15 = iVar6 + 8;
                iVar12 = uVar11 - uVar14;
                iVar13 = iVar12;
                iVar10 = iVar5;
                do {
                    iVar13 = iVar13 + -2;
                    piVar15[-1] = iVar10;
                    *piVar15 = iVar10 + 0x40;
                    iVar10 = iVar10 + 0x80;
                    piVar15 = piVar15 + 2;
                } while (iVar13 != 0);
                if (uVar14 == 0) goto code_r0x08005034;
            }
            iVar10 = iVar12 - uVar11;
            iVar13 = iVar5 + iVar12 * 0x40;
            piVar15 = iVar6 + iVar12 * 8;
            do {
                *piVar15 = iVar13;
                bVar3 = iVar10 != -1;
                iVar10 = iVar10 + 1;
                iVar13 = iVar13 + 0x40;
                piVar15 = piVar15 + 1;
            } while (bVar3);
        }
code_r0x08005034:
        iVar10 = vmap(iVar6,uVar7 >> 0xc,0x10,uVar2);
        kfree(iVar6);
        if (iVar10 != 0) {
            iVar4 = gen_pool_add_owner(arg1,iVar10,
                                       (iVar5 + (_gen_pool_first_fit_order_align >> 6 & 0x3ffffffffffffc0) + 0x200000000
                                       ) * 0x40,iVar16,0xffffffff,0);
            if (iVar4 == 0) {
                _segment.ehdr = _segment.ehdr + iVar16;
                return 0;
            }
            sym.qcom_dma_common_free_remap(iVar10);
            goto code_r0x0800509c;
        }
    }
    iVar4 = -0xc;
code_r0x0800509c:
    uVar7 = cma_release(_segment.ehdr,iVar5,1 << (uVar8 & 0x1f));
    if ((uVar7 & 1) == 0) {
        __free_pages(iVar5,uVar8);
    }
    return iVar4;
}


// ===== sym.av8l_fast_map_public @ 0x08005104 (size 272) =====

ulong sym.av8l_fast_map_public(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    int64_t arg2_00;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t in_w4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x58);
    uVar7 = arg2 - *(arg1 + 0x70) >> 0xc;
    arg2_00 = iVar5 + uVar7 * 8;
    if ((in_w4 >> 4 & 1) == 0) {
        if ((in_w4 >> 2 & 1) == 0) {
            uVar10 = 0x60000000000e03;
            if ((in_w4 & 0x40) != 0) {
                uVar10 = 0x60000000000e0f;
            }
        }
        else {
            uVar10 = 0x60000000000e07;
        }
    }
    else {
        uVar10 = 0x60000000000e0b;
    }
    uVar9 = arg4 >> 0xc;
    uVar13 = 0xc0;
    if ((in_w4 & 2) != 0) {
        uVar13 = 0x40;
    }
    if (0xfff < arg4) {
        uVar10 = uVar10 | uVar13;
        uVar13 = arg3 & 0xfffffffff000;
        uVar2 = uVar9;
        if (uVar9 < 2) {
            uVar2 = 1;
        }
        if (uVar2 < 2) {
            uVar12 = 0;
            uVar11 = uVar13;
        }
        else {
            uVar12 = uVar2 & 0xffffffffffffe;
            puVar6 = iVar5 + uVar7 * 8 + 8;
            uVar11 = uVar13 + uVar12 * 0x1000;
            uVar3 = uVar12;
            do {
                uVar1 = uVar13 + 0x1000;
                uVar4 = uVar10 | uVar13;
                uVar13 = uVar13 + 0x2000;
                uVar3 = uVar3 - 2;
                puVar6[-1] = uVar4;
                *puVar6 = uVar10 | uVar1;
                puVar6 = puVar6 + 2;
            } while (uVar3 != 0);
            if (uVar2 == uVar12) goto code_r0x080051f4;
        }
        iVar8 = uVar2 - uVar12;
        puVar6 = iVar5 + (uVar12 + uVar7) * 8;
        do {
            uVar7 = uVar10 | uVar11;
            uVar11 = uVar11 + 0x1000;
            iVar8 = iVar8 + -1;
            *puVar6 = uVar7;
            puVar6 = puVar6 + 1;
        } while (iVar8 != 0);
    }
code_r0x080051f4:
    sym.av8l_clean_range(arg1 + -0x58,arg2_00,arg2_00 + uVar9 * 8);
    return 0;
}


// ===== sym.av8l_fast_map @ 0x08005214 (size 272) =====

ulong sym.av8l_fast_map(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    int64_t arg2_00;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t in_w4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x58);
    uVar7 = arg2 - *(arg1 + 0x70) >> 0xc;
    arg2_00 = iVar5 + uVar7 * 8;
    if ((in_w4 >> 4 & 1) == 0) {
        if ((in_w4 >> 2 & 1) == 0) {
            uVar10 = 0x60000000000e03;
            if ((in_w4 & 0x40) != 0) {
                uVar10 = 0x60000000000e0f;
            }
        }
        else {
            uVar10 = 0x60000000000e07;
        }
    }
    else {
        uVar10 = 0x60000000000e0b;
    }
    uVar9 = arg4 >> 0xc;
    uVar13 = 0xc0;
    if ((in_w4 & 2) != 0) {
        uVar13 = 0x40;
    }
    if (0xfff < arg4) {
        uVar10 = uVar10 | uVar13;
        uVar13 = arg3 & 0xfffffffff000;
        uVar2 = uVar9;
        if (uVar9 < 2) {
            uVar2 = 1;
        }
        if (uVar2 < 2) {
            uVar12 = 0;
            uVar11 = uVar13;
        }
        else {
            uVar12 = uVar2 & 0xffffffffffffe;
            puVar6 = iVar5 + uVar7 * 8 + 8;
            uVar11 = uVar13 + uVar12 * 0x1000;
            uVar3 = uVar12;
            do {
                uVar1 = uVar13 + 0x1000;
                uVar4 = uVar10 | uVar13;
                uVar13 = uVar13 + 0x2000;
                uVar3 = uVar3 - 2;
                puVar6[-1] = uVar4;
                *puVar6 = uVar10 | uVar1;
                puVar6 = puVar6 + 2;
            } while (uVar3 != 0);
            if (uVar2 == uVar12) goto code_r0x08005304;
        }
        iVar8 = uVar2 - uVar12;
        puVar6 = iVar5 + (uVar12 + uVar7) * 8;
        do {
            uVar7 = uVar10 | uVar11;
            uVar11 = uVar11 + 0x1000;
            iVar8 = iVar8 + -1;
            *puVar6 = uVar7;
            puVar6 = puVar6 + 1;
        } while (iVar8 != 0);
    }
code_r0x08005304:
    sym.av8l_clean_range(arg1 + -0x58,arg2_00,arg2_00 + uVar9 * 8);
    return 0;
}


// ===== sym.av8l_fast_unmap_public @ 0x08005324 (size 116) =====

void sym.av8l_fast_unmap_public(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg3 >> 9 & 0x7ffffffffffff8;
    arg2_00 = *(arg1 + 0x58) + (arg2 - *(arg1 + 0x70) >> 9 & 0x7ffffffffffff8);
    memset(arg2_00,0,uVar1);
    sym.av8l_clean_range(arg1 + -0x58,arg2_00,arg2_00 + uVar1);
    return;
}


// ===== sym.av8l_fast_map_sg_public @ 0x08005398 (size 44) =====

ulong sym.av8l_fast_map_sg_public(int64_t arg1,int64_t arg4,int64_t arg3,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.av8l_fast_map_sg(arg1,arg4,arg3,arg2);
    return 0;
}


// ===== sym.av8l_fast_map_sg @ 0x080053c4 (size 440) =====

ulong sym.av8l_fast_map_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t in_w4;
    int64_t *in_x6;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    int iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg4 != 0) {
        uVar3 = 0xc0;
        if ((in_w4 & 2) != 0) {
            uVar3 = 0x40;
        }
        uVar14 = 0x60000000000e03;
        if ((in_w4 & 0x40) != 0) {
            uVar14 = 0x60000000000e0f;
        }
        if ((in_w4 & 4) != 0) {
            uVar14 = 0x60000000000e07;
        }
        if ((in_w4 & 0x10) != 0) {
            uVar14 = 0x60000000000e0b;
        }
        iVar13 = 0;
        uVar14 = uVar14 | uVar3;
        do {
            iVar2 = *(arg1 + 0x58);
            uVar4 = arg2 - *(arg1 + 0x70) >> 0xc;
            uVar3 = *(arg3 + 0xc) >> 0xc;
            if (0xfff < *(arg3 + 0xc)) {
                uVar10 = uVar3;
                if (uVar3 < 2) {
                    uVar10 = 1;
                }
                uVar9 = *(arg3 + 8) + ((*arg3 & 0x3fffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40
                        + 0x8000000000 & 0xfffffffff000;
                if (uVar10 < 2) {
                    uVar7 = 0;
                    uVar5 = uVar9;
                }
                else {
                    uVar7 = uVar10 & 0xffffe;
                    puVar8 = iVar2 + uVar4 * 8 + 8;
                    uVar5 = uVar9 + uVar7 * 0x1000;
                    uVar9 = uVar9 + 0x1000;
                    uVar11 = uVar7;
                    do {
                        uVar12 = uVar9 - 0x1000;
                        uVar1 = uVar14 | uVar9;
                        uVar9 = uVar9 + 0x2000;
                        uVar11 = uVar11 - 2;
                        puVar8[-1] = uVar14 | uVar12;
                        *puVar8 = uVar1;
                        puVar8 = puVar8 + 2;
                    } while (uVar11 != 0);
                    if (uVar10 == uVar7) goto code_r0x08005454;
                }
                iVar6 = uVar10 - uVar7;
                puVar8 = iVar2 + (uVar7 + uVar4) * 8;
                do {
                    uVar10 = uVar14 | uVar5;
                    uVar5 = uVar5 + 0x1000;
                    iVar6 = iVar6 + -1;
                    *puVar8 = uVar10;
                    puVar8 = puVar8 + 1;
                } while (iVar6 != 0);
            }
code_r0x08005454:
            iVar2 = iVar2 + uVar4 * 8;
            sym.av8l_clean_range(arg1 + -0x58,iVar2,iVar2 + uVar3 * 8);
            iVar13 = iVar13 + 1;
            arg2 = arg2 + *(arg3 + 0xc);
            *in_x6 = *in_x6 + *(arg3 + 0xc);
            arg3 = sg_next(arg3);
        } while (iVar13 != arg4);
    }
    return 0;
}


// ===== sym.av8l_fast_iova_to_phys_public @ 0x0800557c (size 152) =====

uint64_t sym.av8l_fast_iova_to_phys_public(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    
    uVar1 = *(arg2 >> 0x1b & 0xff8 | *(arg1 + 0x30));
    if ((~uVar1 & 3) == 0) {
        uVar1 = *((uVar1 & 0x7ffffff000 | arg2 >> 0x12 & 0xff8) - _gen_pool_first_fit_order_align | 0xffffff8000000000);
        if (((~uVar1 & 3) == 0) &&
           (uVar1 = *(((arg2 >> 9 & 0xff8) - _gen_pool_first_fit_order_align) + (uVar1 & 0x7ffffff000) |
                     0xffffff8000000000), (~uVar1 & 3) == 0)) {
            return uVar1 & 0xfffffffff000 | arg2 & 0xfffU;
        }
    }
    return 0;
}


// ===== sym.av8l_fast_iova_to_phys @ 0x08005614 (size 152) =====

uint64_t sym.av8l_fast_iova_to_phys(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    
    uVar1 = *(arg2 >> 0x1b & 0xff8 | *(arg1 + 0x30));
    if ((~uVar1 & 3) == 0) {
        uVar1 = *((uVar1 & 0x7ffffff000 | arg2 >> 0x12 & 0xff8) - _gen_pool_first_fit_order_align | 0xffffff8000000000);
        if (((~uVar1 & 3) == 0) &&
           (uVar1 = *(((arg2 >> 9 & 0xff8) - _gen_pool_first_fit_order_align) + (uVar1 & 0x7ffffff000) |
                     0xffffff8000000000), (~uVar1 & 3) == 0)) {
            return uVar1 & 0xfffffffff000 | arg2 & 0xfffU;
        }
    }
    return 0;
}


// ===== sym.av8l_fast_iova_coherent_public @ 0x080056ac (size 52) =====

bool sym.av8l_fast_iova_coherent_public(int64_t arg1,int64_t arg2)

{
    return (*(*(arg1 + 0x58) + (arg2 - *(arg1 + 0x70) >> 9 & 0x7ffffffffffff8)) & 0x21c) == 0x204;
}


// ===== sym.av8l_fast_alloc_pgtable @ 0x080056e0 (size 476) =====

int64_t sym.av8l_fast_alloc_pgtable(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    int64_t iVar5;
    code *pcVar6;
    int iVar7;
    int64_t arg1_00;
    uint32_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = kmem_cache_alloc_trace(___list_add_valid,0xcc0,0xe8);
    if (arg1_00 == 0) {
        return 0;
    }
    cVar4 = *(arg1 + 0x18);
    *(arg1_00 + 0x68) = sym.av8l_fast_map.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    *(arg1_00 + 0x70) = sym.av8l_fast_map_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    *(arg1 + 0x10) = 0x20;
    *(arg1 + 8) = 0x1000;
    *(arg1_00 + 0x78) = sym.av8l_fast_map_sg.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    *(arg1_00 + 0x80) = sym.av8l_fast_unmap.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    *(arg1_00 + 0x88) = sym.av8l_fast_unmap_pages.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    *(arg1_00 + 0x90) = sym.av8l_fast_iova_to_phys.11a4d76efea7558fbaf9572365c50d63.cfi_jt;
    uVar3 = *(arg1 + 0x38);
    if (cVar4 == '\0') {
        uVar8 = 0x40;
        if ((*arg1 & 0x40) != 0) {
            uVar8 = 0xc0;
        }
        uVar8 = uVar8 | uVar3 & 0xfffff81f;
    }
    else {
        uVar8 = uVar3 & 0xfffff800 | uVar3 & 0x1f | 0x2e0;
        *(arg1 + 0x38) = uVar8;
        if ((*arg1 >> 6 & 1) != 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8005784);
            (*pcVar6)();
        }
    }
    *(arg1 + 0x38) = uVar8 & 0xffffffe7;
    uVar3 = *(arg1 + 0x14) - 0x20U >> 1 | *(arg1 + 0x14) << 0x1f;
    if (uVar3 < 9) {
    //switch table (8 cases) at 0x8001338
        switch(*(uVar3 * 4 + 0x8001338) + 0x80057c8) {
        case 0x80057dc:
            uVar8 = uVar8 & 0xffffffe0;
            break;
        case 0x80057e8:
            uVar8 = uVar8 & 0xffffffe0 | 1;
            break;
        case 0x80057f8:
            uVar8 = uVar8 & 0xffffffe0 | 2;
            break;
        case 0x8005808:
            uVar8 = uVar8 & 0xffffffe0 | 3;
            break;
        case 0x8005818:
            uVar8 = uVar8 & 0xffffffe0 | 4;
            break;
        case 0x8005828:
            uVar8 = uVar8 & 0xffffffe0 | 5;
            break;
        case 0x800585c:
            goto code_r0x0800585c;
        }
        *(arg1 + 0x38) = uVar8 & 0xfffe07ff | 0x10000;
        *(arg1 + 0x40) = 0xfffffffff404ff44;
        iVar7 = sym.av8l_fast_prepopulate_pgtables(arg1_00,arg1);
        if (iVar7 == 0) {
            iVar5 = (*(arg1_00 + 0x98) << 8) >> 8;
            uVar1 = iVar5 + 0x8000000000;
            iVar2 = uVar1 + _gen_pool_first_fit_order_align;
            if (uVar1 >> 0x26 != 0) {
                iVar2 = iVar5 - _of_n_addr_cells;
            }
            *(arg1 + 0x30) = iVar2;
            return arg1_00;
        }
    }
code_r0x0800585c:
    kfree(arg1_00);
    return 0;
}


// ===== sym.av8l_fast_free_pgtable @ 0x080058bc (size 116) =====

void sym.av8l_fast_free_pgtable(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    vunmap(*(arg1 + 0xc0));
    if (0 < *(arg1 + 0xd0)) {
        iVar1 = 0;
        do {
            __free_pages(*(*(arg1 + 200) + iVar1 * 8),0);
            iVar1 = iVar1 + 1;
        } while (iVar1 < *(arg1 + 0xd0));
    }
    kvfree(*(arg1 + 200));
    kfree(arg1);
    return;
}


// ===== sym.av8l_clean_range @ 0x08005930 (size 396) =====

void sym.av8l_clean_range(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x18) == '\0') {
        uVar5 = *(arg1 + 0x28);
        uVar1 = is_vmalloc_addr(arg2);
        if ((uVar1 & 1) == 0) {
            uVar1 = is_vmalloc_addr(arg2);
            if ((uVar1 & 1) == 0) {
                iVar3 = (arg2 << 8) >> 8;
                uVar1 = iVar3 + 0x8000000000;
                iVar4 = _gen_pool_first_fit_order_align + uVar1;
                if (uVar1 >> 0x26 != 0) {
                    iVar4 = iVar3 - _of_n_addr_cells;
                }
            }
            else {
                iVar3 = vmalloc_to_page(arg2);
                iVar4 = (arg2 & 0xfffU) +
                        (iVar3 + (_gen_pool_first_fit_order_align >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            }
            dma_sync_single_for_device(uVar5,iVar4,arg3 - arg2,1);
        }
        else if (arg2 < arg3) {
            do {
                uVar6 = arg2 + 0x1000U & 0xfffffffffffff000;
                uVar1 = arg3;
                if (uVar6 <= arg3) {
                    uVar1 = uVar6;
                }
                uVar2 = is_vmalloc_addr(arg2);
                if ((uVar2 & 1) == 0) {
                    iVar3 = (arg2 << 8) >> 8;
                    uVar2 = iVar3 + 0x8000000000;
                    iVar4 = _gen_pool_first_fit_order_align + uVar2;
                    if (uVar2 >> 0x26 != 0) {
                        iVar4 = iVar3 - _of_n_addr_cells;
                    }
                }
                else {
                    iVar3 = vmalloc_to_page(arg2);
                    iVar4 = (arg2 & 0xfffU) +
                            (iVar3 + (_gen_pool_first_fit_order_align >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                }
                dma_sync_single_for_device(uVar5,iVar4,uVar1 - arg2,1);
                arg2 = uVar1;
            } while (uVar6 < arg3);
        }
    }
    return;
}


// ===== sym.av8l_fast_prepopulate_pgtables @ 0x08005abc (size 936) =====

ulong sym.av8l_fast_prepopulate_pgtables(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    code *pcVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int iVar11;
    uint64_t uVar12;
    ulong *in_x18;
    uint32_t uVar13;
    uint64_t uVar14;
    uint64_t *puVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar14 = *(arg2 + 0x70);
    uVar2 = *(arg2 + 0x78);
    puVar5 = kmalloc_order_trace(0x4028,0x12000,3);
    if ((puVar5 != NULL) || (puVar5 = vmalloc(0x4028), puVar5 != NULL)) {
        uVar3 = tpidr_el1;
        uVar6 = __alloc_pages(uVar3,0xdc0,0,0,0);
        if (uVar6 != 0) {
            *puVar5 = uVar6;
            uVar6 = (uVar6 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
            *(arg1 + 0x98) = uVar6;
            if (uVar14 < uVar2) {
                uVar6 = uVar14 >> 0x1e & 3;
                uVar18 = uVar2 - 1;
                uVar12 = uVar14;
                iVar9 = 0;
                do {
                    iVar16 = iVar9;
                    uVar3 = tpidr_el1;
                    uVar7 = __alloc_pages(uVar3,0xdc0,0,0,0);
                    if (uVar7 == 0) {
                        uVar17 = iVar16 + 1;
                        goto code_r0x08005e08;
                    }
                    puVar5[iVar16 + 1] = uVar7;
                    if ((5 - uVar6) - 1 == iVar16) goto code_r0x08005e60;
                    uVar12 = uVar12 + 0x40000000 & 0xffffffffc0000000;
                    *(arg1 + uVar6 * 8 + 0xa0 + iVar16 * 8) = (uVar7 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
                    if (uVar18 <= uVar12 - 1) {
                        uVar12 = uVar2;
                    }
                    *(*(arg1 + 0x98) + uVar6 * 8 + iVar16 * 8) =
                         (uVar7 + (_gen_pool_first_fit_order_align >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40 | 3;
                    iVar9 = iVar16 + 1;
                } while (uVar12 < uVar2);
                sym.av8l_clean_range(arg2,*(arg1 + 0x98),*(arg1 + 0x98) + 0x20);
                uVar7 = iVar16 + 2U & 0xffffffff;
                uVar12 = uVar14;
                do {
                    uVar10 = uVar12 + 0x40000000 & 0xffffffffc0000000;
                    if (uVar18 <= uVar10 - 1) {
                        uVar10 = uVar2;
                    }
                    piVar1 = arg1 + uVar6 * 8 + 0xa0;
                    if (uVar12 < uVar10) {
                        uVar13 = uVar12 >> 0x15 & 0x1ff;
                        do {
                            uVar17 = uVar7;
                            uVar3 = tpidr_el1;
                            uVar8 = __alloc_pages(uVar3,0xdc0,0,0,0);
                            if (uVar8 == 0) goto code_r0x08005e08;
                            puVar5[uVar17] = uVar8;
                            uVar7 = (uVar8 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
                            sym.av8l_clean_range(arg2,uVar7,uVar7 + 0x1000);
                            if (3 < uVar6) goto code_r0x08005e60;
                            uVar12 = uVar12 + 0x200000 & 0xffffffffffe00000;
                            uVar7 = uVar17 + 1;
                            *(*piVar1 + uVar13 * 8) =
                                 (uVar8 + (_gen_pool_first_fit_order_align >> 6 & 0x3ffffffffffffc0) + 0x200000000) *
                                 0x40 | 3;
                            uVar13 = uVar13 + 1;
                            if (uVar18 <= uVar12 - 1) {
                                uVar12 = uVar2;
                            }
                        } while (uVar12 < uVar10);
                    }
                    uVar17 = uVar7;
                    if (uVar6 == 4) {
code_r0x08005e60:
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8005e64);
                        (*pcVar4)();
                    }
                    iVar9 = *piVar1;
                    sym.av8l_clean_range(arg2,iVar9,iVar9 + 0x1000);
                    uVar6 = uVar6 + 1;
                    uVar12 = uVar10;
                } while (uVar10 < uVar2);
                iVar11 = iVar16 + 2U;
            }
            else {
                sym.av8l_clean_range(arg2,uVar6,uVar6 + 0x20);
                iVar11 = 1;
                uVar17 = 1;
            }
            uVar3 = 0x68000000000703;
            if (arm64_use_ng_mappings != 0x0) {
                uVar3 = 0x68000000000f03;
            }
            iVar9 = vmap(puVar5 + iVar11,uVar17 - iVar11,1,uVar3);
            *(arg1 + 0xc0) = iVar9;
            if (iVar9 != 0) {
                *(arg1 + 200) = puVar5;
                *(arg1 + 0xd8) = uVar14;
                *(arg1 + 0xe0) = uVar2;
                *(arg1 + 0xd0) = uVar17;
                return 0;
            }
code_r0x08005e08:
            if (0 < uVar17) {
                uVar14 = uVar17;
                puVar15 = puVar5;
                do {
                    __free_pages(*puVar15,0);
                    uVar14 = uVar14 - 1;
                    puVar15 = puVar15 + 1;
                } while (uVar14 != 0);
            }
        }
        kvfree(puVar5);
    }
    return 0xfffffff4;
}


// ===== sym.av8l_fast_map_pages @ 0x08005e70 (size 292) =====

ulong sym.av8l_fast_map_pages(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t arg2_00;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t in_x4;
    uint32_t in_w5;
    uint64_t *in_x7;
    int64_t iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x58);
    uVar14 = in_x4 * arg4;
    uVar7 = arg2 - *(arg1 + 0x70) >> 0xc;
    arg2_00 = iVar5 + uVar7 * 8;
    if ((in_w5 >> 4 & 1) == 0) {
        if ((in_w5 >> 2 & 1) == 0) {
            uVar10 = 0x60000000000e03;
            if ((in_w5 & 0x40) != 0) {
                uVar10 = 0x60000000000e0f;
            }
        }
        else {
            uVar10 = 0x60000000000e07;
        }
    }
    else {
        uVar10 = 0x60000000000e0b;
    }
    uVar9 = uVar14 >> 0xc;
    uVar13 = 0xc0;
    if ((in_w5 & 2) != 0) {
        uVar13 = 0x40;
    }
    if (0xfff < uVar14) {
        uVar10 = uVar10 | uVar13;
        uVar13 = arg3 & 0xfffffffff000;
        uVar2 = uVar9;
        if (uVar9 < 2) {
            uVar2 = 1;
        }
        if (uVar2 < 2) {
            uVar12 = 0;
            uVar11 = uVar13;
        }
        else {
            uVar12 = uVar2 & 0xffffffffffffe;
            puVar6 = iVar5 + uVar7 * 8 + 8;
            uVar11 = uVar13 + uVar12 * 0x1000;
            uVar3 = uVar12;
            do {
                uVar1 = uVar13 + 0x1000;
                uVar4 = uVar10 | uVar13;
                uVar13 = uVar13 + 0x2000;
                uVar3 = uVar3 - 2;
                puVar6[-1] = uVar4;
                *puVar6 = uVar10 | uVar1;
                puVar6 = puVar6 + 2;
            } while (uVar3 != 0);
            if (uVar2 == uVar12) goto code_r0x08005f6c;
        }
        iVar8 = uVar2 - uVar12;
        puVar6 = iVar5 + (uVar12 + uVar7) * 8;
        do {
            uVar7 = uVar10 | uVar11;
            uVar11 = uVar11 + 0x1000;
            iVar8 = iVar8 + -1;
            *puVar6 = uVar7;
            puVar6 = puVar6 + 1;
        } while (iVar8 != 0);
    }
code_r0x08005f6c:
    sym.av8l_clean_range(arg1 + -0x58,arg2_00,arg2_00 + uVar9 * 8);
    *in_x7 = uVar14;
    return 0;
}


// ===== sym.av8l_fast_unmap @ 0x08005f94 (size 184) =====

int64_t sym.av8l_fast_unmap(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    ulong *in_x18;
    uint64_t uVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg3 >> 9 & 0x7ffffffffffff8;
    arg2_00 = *(arg1 + 0x58) + (arg2 - *(arg1 + 0x70) >> 9 & 0x7ffffffffffff8);
    memset(arg2_00,0,uVar1);
    sym.av8l_clean_range(arg1 + -0x58,arg2_00,arg2_00 + uVar1);
    if ((*(arg1 + -0x38) != NULL) && (pcVar2 = **(arg1 + -0x38), pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar2,0x8000960);
        (*pcVar2)(*(arg1 + -0x60));
    }
    return arg3;
}


// ===== sym.av8l_fast_unmap_pages @ 0x0800604c (size 184) =====

uint64_t sym.av8l_fast_unmap_pages(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    ulong *in_x18;
    code *pcVar1;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg4 * arg3 >> 9 & 0x7ffffffffffff8;
    arg2_00 = *(arg1 + 0x58) + (arg2 - *(arg1 + 0x70) >> 9 & 0x7ffffffffffff8);
    memset(arg2_00,0,uVar2);
    sym.av8l_clean_range(arg1 + -0x58,arg2_00,arg2_00 + uVar2);
    if ((*(arg1 + -0x38) != NULL) && (pcVar1 = **(arg1 + -0x38), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar1,0x8000960);
        (*pcVar1)(*(arg1 + -0x60));
    }
    return arg4 * arg3;
}


// ===== sym.fast_smmu_put_dma_cookie @ 0x08006104 (size 236) =====

void sym.fast_smmu_put_dma_cookie(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t *piVar3;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_write_lock_irqsave(obj.mappings_lock);
    iVar2 = _segment.ehdr;
    do {
        if (iVar2 == 0) {
code_r0x0800613c:
            _raw_write_unlock_irqrestore(obj.mappings_lock,uVar1);
            return;
        }
        if (arg1 < *(iVar2 + -0x80)) {
            piVar3 = iVar2 + 0x10;
        }
        else {
            if (arg1 <= *(iVar2 + -0x80)) {
                if (iVar2 + -0x88 != 0) {
                    rb_erase(iVar2,obj.mappings);
                    _raw_write_unlock_irqrestore(obj.mappings_lock,uVar1);
                    iommu_put_dma_cookie(arg1);
                    if (*(iVar2 + -0x78) != 0) {
                        put_iova_domain();
                        kfree(*(iVar2 + -0x78));
                    }
                    if (*(iVar2 + -0x50) != 0) {
                        kvfree();
                    }
                    if (*(iVar2 + -0x48) != 0) {
                        kvfree();
                    }
                    kfree(iVar2 + -0x88);
                    return;
                }
                goto code_r0x0800613c;
            }
            piVar3 = iVar2 + 8;
        }
        iVar2 = *piVar3;
    } while( true );
}


// ===== sym.fast_smmu_init_mapping @ 0x080061f0 (size 676) =====

ulong sym.fast_smmu_init_mapping(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    char *pcVar9;
    code *pcVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_read_lock_irqsave(obj.mappings_lock);
    for (iVar6 = _segment.ehdr; iVar6 != 0; iVar6 = *(iVar6 + 8)) {
        while (arg2 < *(iVar6 + -0x80)) {
            iVar6 = *(iVar6 + 0x10);
            if (iVar6 == 0) goto code_r0x08006268;
        }
        if (arg2 <= *(iVar6 + -0x80)) {
            _raw_read_unlock_irqrestore(obj.mappings_lock,uVar4);
            if (iVar6 == 0x88) goto code_r0x08006288;
            pcVar9 = "Iova cookie already present\n";
            goto code_r0x08006468;
        }
    }
code_r0x08006268:
    _raw_read_unlock_irqrestore(obj.mappings_lock,uVar4);
code_r0x08006288:
    if (arg3 == 0) {
        return 0xffffffea;
    }
    uVar2 = *(arg2 + 0x28);
    uVar3 = *(arg2 + 0x30);
    if (0xfffffffe < uVar3) {
        uVar3 = 0xffffffff;
    }
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
        pcVar9 = "Invalid domain geometry\n";
code_r0x08006468:
        _dev_err(arg1,pcVar9);
        return 0xffffffea;
    }
    piVar5 = kmem_cache_alloc_trace(___list_add_valid,0xdc0,0xd0);
    if (piVar5 == NULL) {
        return 0xfffffff4;
    }
    uVar3 = (uVar3 - uVar2) + 1;
    uVar11 = uVar3 >> 0xc;
    piVar5[3] = uVar2;
    piVar5[4] = uVar3;
    uVar1 = uVar11 + 0x3f >> 3 & 0xfffffff8;
    piVar5[5] = uVar11;
    *(piVar5 + 6) = uVar1;
    iVar6 = __kmalloc(uVar1,0x12dc0);
    piVar5[7] = iVar6;
    if (iVar6 == 0) {
        iVar6 = vzalloc(uVar1);
        piVar5[7] = iVar6;
        if (iVar6 == 0) goto code_r0x080063a0;
    }
    iVar7 = __kmalloc(uVar1,0x12dc0);
    piVar5[8] = iVar7;
    if (iVar7 == 0) {
        iVar7 = vzalloc(uVar1);
        piVar5[8] = iVar7;
        if (iVar7 != 0) goto code_r0x08006338;
    }
    else {
code_r0x08006338:
        *(piVar5 + 0xd) = 0;
        __mutex_init(piVar5 + 0x14,"&fast->msi_cookie_init_lock",obj.__fast_smmu_create_mapping_sized.__key);
        iVar6 = kmem_cache_alloc_trace(___list_add_valid,0xdc0,0x778);
        piVar5[2] = iVar6;
        if (iVar6 != 0) {
            init_iova_domain(iVar6,0x1000,uVar2 >> 0xc);
            if (0xfffffffffffff000 < piVar5) {
                return 0xfffffff4;
            }
            *piVar5 = arg1;
            piVar5[1] = arg2;
            uVar4 = _raw_write_lock_irqsave(obj.mappings_lock);
            pcVar10 = obj.mappings;
            if (_obj.mappings == 0) {
                iVar6 = 0;
            }
            else {
                iVar7 = _obj.mappings;
                do {
                    while (iVar6 = iVar7, *(iVar6 + -0x80) <= piVar5[1]) {
                        if (piVar5[1] <= *(iVar6 + -0x80)) goto code_r0x08006438;
                        pcVar10 = iVar6 + 8;
                        iVar7 = *pcVar10;
                        if (*pcVar10 == 0) goto code_r0x0800641c;
                    }
                    pcVar10 = iVar6 + 0x10;
                    iVar7 = *pcVar10;
                } while (*pcVar10 != 0);
            }
code_r0x0800641c:
            piVar8 = piVar5 + 0x11;
            *piVar8 = iVar6;
            piVar5[0x12] = 0;
            piVar5[0x13] = 0;
            *pcVar10 = piVar8;
            rb_insert_color(piVar8,obj.mappings);
code_r0x08006438:
            _raw_write_unlock_irqrestore(obj.mappings_lock,uVar4);
            piVar5[0xc] = arg3;
            piVar5[0xe] = sym.fast_smmu_notify.5a2e0149000a936629ebf63764a9885f.cfi_jt;
            return 0;
        }
        kvfree(piVar5[8]);
        iVar6 = piVar5[7];
    }
    kvfree(iVar6);
code_r0x080063a0:
    kfree(piVar5);
    return 0xfffffff4;
}


// ===== sym.fast_smmu_notify @ 0x08006494 (size 276) =====

ulong sym.fast_smmu_notify(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (arg2 != 1) {
        __warn_printk("Unhandled notifier action");
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80064d8);
        (*pcVar1)();
    }
    iVar4 = *(*(arg1 + -0x10) + 0x58);
    iVar3 = arg3 - iVar4;
    iStack_40 = iVar3 * 0x200;
    iVar3 = iVar3 >> 3;
    _dev_err(*(arg1 + -0x70),"Mapped over stale tlb at %pa\n",&iStack_40);
    _dev_err(*(arg1 + -0x70),"bitmap (failure at idx %lu):\n",iVar3);
    _dev_err(*(arg1 + -0x70),"ptep: %pK pmds: %pK diff: %lu\n",arg3,iVar4,iVar3);
    print_hex_dump(0x8000eda,"bmap: ",1,0x20,8,*(arg1 + -0x38),*(arg1 + -0x40),0);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 1;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.fast_smmu_setup_dma_ops;
    uVar2 = sym.__fast_smmu_setup_dma_ops(noname_0,iVar3);
    return uVar2;
}


// ===== sym.fast_smmu_setup_dma_ops @ 0x080065a8 (size 40) =====

void sym.fast_smmu_setup_dma_ops(int64_t arg1)

{
    ulong in_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__fast_smmu_setup_dma_ops(in_x8,arg1);
    return;
}


// ===== sym.__fast_smmu_setup_dma_ops @ 0x080065d0 (size 1068) =====

int64_t sym.__fast_smmu_setup_dma_ops(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong in_x6;
    ulong in_x7;
    int64_t *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x23;
    ulong *puVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar *puVar14;
    code *pcVar15;
    ulong *puStack_80;
    uchar *puStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    puVar14 = &stack0xffffffffffffffa0;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    iVar3 = iommu_get_domain_for_dev(arg1);
    iVar4 = 0;
    if ((iVar3 != 0) && (iVar4 = sym.qcom_iommu_get_mappings_configuration(iVar3), (iVar4 & 0x80000004) == 4)) {
        uVar5 = iommu_get_domain_for_dev(arg1);
        if (uVar5 == 0) {
            iVar4 = -0x16;
code_r0x080066bc:
            uVar5 = iommu_get_domain_for_dev(arg1);
            if (uVar5 == 0) {
                iVar3 = -0x16;
            }
            else {
                uVar6 = _raw_read_lock_irqsave(obj.mappings_lock);
                for (iVar11 = _segment.ehdr; iVar11 != 0; iVar11 = *(iVar11 + 0x10)) {
                    while( true ) {
                        iVar3 = iVar11 + -0x88;
                        if (uVar5 < *(iVar11 + -0x80)) break;
                        if (uVar5 <= *(iVar11 + -0x80)) goto code_r0x08006718;
                        iVar11 = *(iVar11 + 8);
                        if (iVar11 == 0) goto code_r0x08006714;
                    }
                }
code_r0x08006714:
                iVar3 = 0;
code_r0x08006718:
                _raw_read_unlock_irqrestore(obj.mappings_lock,uVar6);
            }
            puStack_80 = &puStack_80;
            puStack_78 = &puStack_80;
            if (*(arg1 + 0x80) == pci_bus_type) {
                puStack_80 = &puStack_80;
                puStack_78 = &puStack_80;
                iVar11 = sym.qcom_pci_find_host_bridge(*(arg1 + -0xc0));
                uVar6 = _raw_spin_lock_irqsave(iVar4 + 0x68);
                for (puVar12 = *(iVar11 + 0x3b8); puVar12 != iVar11 + 0x3b8; puVar12 = *puVar12) {
                    piVar7 = puVar12[2];
                    if (((piVar7[3] & 0x1f00U) == 0x200) || ((piVar7[3] & 0x1f00U) == 0x100)) {
                        uVar8 = *piVar7 - puVar12[3] & 0xfffffffffffff000;
                        uVar1 = *(iVar4 + 0x18);
                        uVar9 = piVar7[1] + ~puVar12[3] | 0xfff;
                        uVar5 = *(iVar4 + 0x20) + uVar1;
                        uVar10 = uVar1;
                        if (uVar1 <= uVar8) {
                            uVar10 = uVar8;
                        }
                        if (uVar9 + 1 <= uVar5) {
                            uVar5 = uVar9 + 1;
                        }
                        if (uVar10 < uVar5) {
                            uVar10 = uVar10 - uVar1 >> 0xc;
                            iVar2 = (uVar5 - uVar1 >> 0xc) - uVar10;
                            __bitmap_set(*(iVar4 + 0x38),uVar10 & 0xffffffff,iVar2);
                            __bitmap_set(*(iVar4 + 0x40),uVar10 & 0xffffffff,iVar2);
                        }
                    }
                }
                _raw_spin_unlock_irqrestore(iVar4 + 0x68,uVar6);
            }
            sym.qcom_iommu_get_resv_regions(arg1,&puStack_80);
            uVar6 = _raw_spin_lock_irqsave(iVar3 + 0x68);
            puVar12 = puStack_80;
            if (puStack_80 != &puStack_80) {
                do {
                    uVar10 = *(iVar4 + 0x18);
                    uVar1 = puVar12[2];
                    uVar5 = (uVar10 + *(iVar4 + 0x20)) - 1;
                    uVar8 = (uVar1 + puVar12[3]) - 1;
                    if (uVar8 <= uVar5) {
                        uVar5 = uVar8;
                    }
                    uVar8 = 0;
                    if (uVar10 <= uVar1) {
                        uVar8 = uVar1 - uVar10;
                    }
                    uVar8 = uVar8 >> 0xc;
                    iVar2 = ((uVar5 - uVar10 >> 0xc) - uVar8) + 1;
                    __bitmap_set(*(iVar4 + 0x38),uVar8 & 0xffffffff,iVar2);
                    __bitmap_set(*(iVar4 + 0x40),uVar8 & 0xffffffff,iVar2);
                    puVar12 = *puVar12;
                } while (puVar12 != &puStack_80);
            }
            _raw_spin_unlock_irqrestore(iVar3 + 0x68,uVar6);
            sym.qcom_iommu_put_resv_regions(arg1,&puStack_80);
            uStack_6c = 0;
            mutex_lock(iVar4 + 0xa0);
            iVar3 = iVar4 + 0x68;
            unaff_x23 = _raw_spin_lock_irqsave(iVar3);
            if ((*(*(iVar4 + 8) + 0x40) == 0) && (iVar2 = sym.qcom_iommu_get_msi_size(arg1,&uStack_6c), -1 < iVar2)) {
                iVar11 = sym.__fast_smmu_alloc_iova(iVar4,uStack_6c);
                if (iVar11 == -1) {
                    _dev_err(arg1,"iova allocator failed to reserve MSI range of size: 0x%x\n",uStack_6c);
                }
                else {
                    _raw_spin_unlock_irqrestore(iVar3,unaff_x23);
                    iVar2 = iommu_get_msi_cookie(*(iVar4 + 8),iVar11);
                    unaff_x23 = _raw_spin_lock_irqsave(iVar3);
                    if (iVar2 < 0) {
                        _dev_err(arg1,"failed to obtain MSI iova cookie rc: %d\n",iVar2);
                        __bitmap_clear(*(iVar4 + 0x38),iVar11 - *(iVar4 + 0x18) >> 0xc,uStack_6c >> 0xc);
                        *(iVar4 + 0x50) = 1;
                    }
                }
            }
            _raw_spin_unlock_irqrestore(iVar3,unaff_x23);
            iVar4 = mutex_unlock(iVar4 + 0xa0);
            *(arg1 + 0x298) = reloc.fast_smmu_alloc.5a2e0149000a936629ebf63764a9885f.cfi_jt;
        }
        else {
            uVar6 = _raw_read_lock_irqsave(obj.mappings_lock);
            for (iVar3 = _segment.ehdr; iVar3 != 0; iVar3 = *(iVar3 + 0x10)) {
                while( true ) {
                    iVar4 = iVar3 + -0x88;
                    if (uVar5 < *(iVar3 + -0x80)) break;
                    if (uVar5 <= *(iVar3 + -0x80)) {
                        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar6);
                        if (iVar4 == 0) goto code_r0x080066a4;
                        goto code_r0x080066bc;
                    }
                    iVar3 = *(iVar3 + 8);
                    if (iVar3 == 0) goto code_r0x08006684;
                }
            }
code_r0x08006684:
            _raw_read_unlock_irqrestore(obj.mappings_lock,uVar6);
code_r0x080066a4:
            iVar4 = _dev_err(arg1,"Missing fastmap iova cookie\n");
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return iVar4;
    }
    auVar13 = __stack_chk_fail();
    iVar3 = auVar13._0_8_;
    *extraout_x18 = sym.__fast_smmu_alloc_iova;
    pcVar15 = sym.__fast_smmu_alloc_iova;
    uVar5 = auVar13._8_8_ - 1;
    uVar10 = auVar13._8_8_ >> 0xc;
    iVar11 = *(iVar3 + 8);
    iVar4 = 0;
    if (0xfff < uVar5) {
        iVar4 = ~(-1 << (-LZCOUNT(uVar5 >> 0xc) & 0x1f));
    }
    uVar5 = bitmap_find_next_zero_area_off
                      (*(iVar3 + 0x40),*(iVar3 + 0x28),*(iVar3 + 0x48),uVar10 & 0xffffffff,iVar4,0,in_x6,in_x7,
                       puVar14,sym.__fast_smmu_alloc_iova,unaff_x23);
    if ((*(iVar3 + 0x28) < uVar5) &&
       (uVar5 = bitmap_find_next_zero_area_off
                          (*(iVar3 + 0x40),*(iVar3 + 0x28),0,uVar10 & 0xffffffff,iVar4,0,in_x6,in_x7,puVar14,
                           pcVar15,unaff_x23), *(iVar3 + 0x28) < uVar5)) {
        if (*(iVar3 + 0x50) != '\0') {
            sym.iommu_flush_iotlb_all(iVar11);
            memcpy(*(iVar3 + 0x40),*(iVar3 + 0x38),*(iVar3 + 0x28) + 0x3f >> 3 & 0x3ffffff8);
            *(iVar3 + 0x50) = 0;
            uVar5 = bitmap_find_next_zero_area_off
                              (*(iVar3 + 0x40),*(iVar3 + 0x28),0,uVar10 & 0xffffffff,iVar4,0,in_x6,in_x7,puVar14
                               ,pcVar15,unaff_x23);
            if (uVar5 <= *(iVar3 + 0x28)) goto code_r0x08006a78;
        }
        iVar4 = -1;
    }
    else {
code_r0x08006a78:
        __bitmap_set(*(iVar3 + 0x38),uVar5 & 0xffffffff,uVar10 & 0xffffffff);
        __bitmap_set(*(iVar3 + 0x40),uVar5 & 0xffffffff,uVar10 & 0xffffffff);
        *(iVar3 + 0x48) = uVar5 + uVar10;
        if (*(iVar3 + 0x28) <= uVar5 + uVar10) {
            *(iVar3 + 0x48) = 0;
        }
        iVar4 = *(iVar3 + 0x18) + uVar5 * 0x1000;
    }
    return iVar4;
}


// ===== sym.__fast_smmu_alloc_iova @ 0x080069fc (size 356) =====

int64_t sym.__fast_smmu_alloc_iova(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = arg2 >> 0xc;
    arg1_00 = *(arg1 + 8);
    iVar2 = 0;
    if (0xfff < arg2 - 1U) {
        iVar2 = ~(-1 << (-LZCOUNT(arg2 - 1U >> 0xc) & 0x1f));
    }
    uVar1 = bitmap_find_next_zero_area_off(*(arg1 + 0x40),*(arg1 + 0x28),*(arg1 + 0x48),uVar3 & 0xffffffff,iVar2,0)
    ;
    if ((*(arg1 + 0x28) < uVar1) &&
       (uVar1 = bitmap_find_next_zero_area_off(*(arg1 + 0x40),*(arg1 + 0x28),0,uVar3 & 0xffffffff,iVar2,0),
       *(arg1 + 0x28) < uVar1)) {
        if (*(arg1 + 0x50) != '\0') {
            sym.iommu_flush_iotlb_all(arg1_00);
            memcpy(*(arg1 + 0x40),*(arg1 + 0x38),*(arg1 + 0x28) + 0x3f >> 3 & 0x3ffffff8);
            *(arg1 + 0x50) = 0;
            uVar1 = bitmap_find_next_zero_area_off(*(arg1 + 0x40),*(arg1 + 0x28),0,uVar3 & 0xffffffff,iVar2,0);
            if (uVar1 <= *(arg1 + 0x28)) goto code_r0x08006a78;
        }
        iVar2 = -1;
    }
    else {
code_r0x08006a78:
        __bitmap_set(*(arg1 + 0x38),uVar1 & 0xffffffff,uVar3 & 0xffffffff);
        __bitmap_set(*(arg1 + 0x40),uVar1 & 0xffffffff,uVar3 & 0xffffffff);
        *(arg1 + 0x48) = uVar1 + uVar3;
        if (*(arg1 + 0x28) <= uVar1 + uVar3) {
            *(arg1 + 0x48) = 0;
        }
        iVar2 = *(arg1 + 0x18) + uVar1 * 0x1000;
    }
    return iVar2;
}


// ===== sym.__fast_smmu_free_iova @ 0x08006b60 (size 76) =====

void sym.__fast_smmu_free_iova(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __bitmap_clear(*(arg1 + 0x38),arg2 - *(arg1 + 0x18) >> 0xc,arg3 >> 0xc);
    *(arg1 + 0x50) = 1;
    return;
}


// ===== sym.iommu_flush_iotlb_all @ 0x08006bac (size 116) =====

void sym.iommu_flush_iotlb_all(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(*(arg1 + 8) + 0x50);
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFvP12iommu_domainE_global_addr) {
            __cfi_slowpath_diag(0x3dfe89e98d52c464,pcVar1,0x8000980);
        }
        (*pcVar1)(arg1);
    }
    return;
}


// ===== sym.fast_smmu_alloc @ 0x08006c20 (size 1292) =====

uint64_t sym.fast_smmu_alloc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t arg2_01;
    uint64_t uVar6;
    ulong *puVar7;
    uint64_t uVar8;
    uint64_t in_x4;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong noname_0;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    ulong *puVar13;
    int64_t iVar14;
    uint32_t arg2_02;
    uint32_t uVar15;
    uint64_t arg2_03;
    uint64_t unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_c0;
    ulong uStack_b8;
    uint64_t uStack_b0;
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
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uVar2 = arg4;
    uVar4 = iommu_get_domain_for_dev();
    if (uVar4 == 0) {
        iVar14 = -0x16;
    }
    else {
        uVar5 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar11 = _segment.ehdr; iVar11 != 0; iVar11 = *(iVar11 + 0x10)) {
            while( true ) {
                iVar14 = iVar11 + -0x88;
                if (uVar4 < *(iVar11 + -0x80)) break;
                if (uVar4 <= *(iVar11 + -0x80)) goto code_r0x08006cc8;
                iVar11 = *(iVar11 + 8);
                if (iVar11 == 0) goto code_r0x08006cc4;
            }
        }
code_r0x08006cc4:
        iVar14 = 0;
code_r0x08006cc8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar5);
    }
    uVar4 = arg2 + 0xfff;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    iStack_c0 = 0;
    uVar15 = in_x4;
    if ((uVar15 >> 0xf & 1) == 0) {
        if ((uVar15 >> 0x10 & 1) == 0) {
            arg2_02 = *(arg1 + 0x34c) >> 5 & 1;
        }
        else {
            arg2_02 = 0;
        }
    }
    else {
        arg2_02 = 1;
    }
    uVar10 = uVar4 >> 0xc;
    uVar8 = in_x4;
    sym.qcom_dma_info_to_prot(0,arg2_02,in_x4);
    uVar6 = 0x68000000000703;
    if (arm64_use_ng_mappings != 0x0) {
        uVar6 = 0x68000000000f03;
    }
    if (((in_x4 & 4) == 0 & arg2_02) == 0) {
        uVar6 = uVar6 | 0x60000000000008;
    }
    if (uVar4 >> 0x2c == 0) {
        arg2_03 = uVar4 & 0xfffffffffffff000;
        uVar1 = uVar2 | 0x100;
        *arg3 = 0xffffffffffffffff;
        if ((uVar2 >> 10 & 1) == 0) {
            arg3 = uVar1;
            uVar10 = sym.fast_smmu_alloc_atomic(iVar14,arg2_03,arg3,in_x4);
            goto code_r0x080070c8;
        }
        if ((uVar15 >> 6 & 1) != 0) {
            in_x4 = uVar1;
            uVar10 = sym.__fast_smmu_alloc_contiguous(arg1,arg2_03,arg3,in_x4);
            goto code_r0x080070c8;
        }
        iVar9 = uVar10;
        if (iVar9 << 3 < 0x1001) {
            puVar7 = __kmalloc(iVar9 << 3,0xdc0);
        }
        else {
            puVar7 = vzalloc();
        }
        if (puVar7 == NULL) {
code_r0x080070b4:
            _dev_err(arg1,"no pages\n");
            arg3 = uVar8;
            in_x4 = arg4;
        }
        else {
            if (iVar9 != 0) {
                uVar12 = 0;
                do {
                    uVar5 = tpidr_el1;
                    uVar8 = 0;
                    arg4 = 0;
                    iVar11 = __alloc_pages(uVar5,uVar2 | 0x2102,0);
                    if (iVar11 == 0) {
                        if (0 < uVar12) {
                            uVar4 = 0;
                            do {
                                __free_pages(puVar7[uVar4],0);
                                uVar4 = uVar4 + 1;
                            } while (uVar12 != uVar4);
                        }
                        kvfree(puVar7);
                        goto code_r0x080070b4;
                    }
                    puVar7[uVar12] = iVar11;
                    uVar12 = uVar12 + 1;
                } while ((uVar4 >> 0xc & 0xffffffff) != uVar12);
            }
            in_x4 = 0;
            iVar3 = sg_alloc_table_from_pages_segment
                              (&stack0xffffffffffffff88,puVar7,uVar10,0,arg2_03,0xffffffff,uVar1);
            if (iVar3 == 0) {
                if (arg2_02 == 0) {
                    uVar10 = uStack_70 >> 0x20;
                    in_x4 = 4;
                    sg_miter_start(&stack0xffffffffffffff40,uStack_78);
                    while (uVar8 = sg_miter_next(&stack0xffffffffffffff40), (uVar8 & 1) != 0) {
                        sym.qcom_arch_dma_prep_coherent(iStack_c0,uStack_b0);
                    }
                    sg_miter_stop(&stack0xffffffffffffff40);
                }
                iVar11 = iVar14 + 0x68;
                uVar5 = _raw_spin_lock_irqsave(iVar11);
                arg2_01 = sym.__fast_smmu_alloc_iova(iVar14,arg2_03);
                if (arg2_01 == -1) {
                    _dev_err(arg1,"no iova\n");
                }
                else {
                    sg_miter_start(&stack0xffffffffffffff40,uStack_78,uStack_70._4_4_,5);
                    uVar10 = sg_miter_next(&stack0xffffffffffffff40);
                    arg2_00 = arg2_01;
                    in_x4 = uStack_b0;
                    while (uStack_b0 = in_x4, (uVar10 & 1) != 0) {
                        iVar3 = sym.av8l_fast_map_public
                                          (*(iVar14 + 0x60),arg2_00,
                                           (iStack_c0 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                                           0x8000000000,in_x4);
                        if (iVar3 != 0) {
                            _dev_err(arg1,"no map public\n");
                            goto code_r0x0800702c;
                        }
                        arg2_00 = uStack_b0 + arg2_00;
                        uVar10 = sg_miter_next(&stack0xffffffffffffff40);
                        in_x4 = uStack_b0;
                    }
                    sg_miter_stop(&stack0xffffffffffffff40);
                    _raw_spin_unlock_irqrestore(iVar11,uVar5);
                    uVar10 = -1L << (___cfi_slowpath_diag & 0x3f);
                    in_x4 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        in_x4 = uVar10 | unaff_x30;
                    }
                    uVar10 = sym.qcom_dma_common_pages_remap(puVar7,arg2_03,uVar6);
                    if (uVar10 != 0) {
                        *arg3 = arg2_01;
                        sg_free_table(&stack0xffffffffffffff88);
                        arg3 = uVar6;
                        goto code_r0x080070c8;
                    }
                    _dev_err(arg1,"no common pages\n");
                    uVar5 = _raw_spin_lock_irqsave(iVar11);
                    sym.av8l_fast_unmap_public(*(iVar14 + 0x60),arg2_01,arg2_03);
code_r0x0800702c:
                    sym.__fast_smmu_free_iova(iVar14,arg2_01,arg2_03);
                    uVar10 = arg2_03;
                }
                _raw_spin_unlock_irqrestore(iVar11,uVar5);
                sg_free_table(&stack0xffffffffffffff88);
            }
            else {
                _dev_err(arg1,"no sg tablen\n");
            }
            if (0 < iVar9) {
                uVar4 = uVar4 >> 0xc & 0xffffffff;
                puVar13 = puVar7;
                do {
                    __free_pages(*puVar13,0);
                    uVar4 = uVar4 - 1;
                    puVar13 = puVar13 + 1;
                } while (uVar4 != 0);
            }
            kvfree(puVar7);
            arg3 = uVar10;
        }
    }
    else {
        _dev_err(arg1,"count: %zx exceeds UNIT_MAX\n");
        arg3 = uVar10;
        in_x4 = arg4;
    }
    uVar10 = 0;
code_r0x080070c8:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    auVar16 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8007128;
    uVar4 = iommu_get_domain_for_dev(uVar5);
    if (uVar4 == 0) {
        iVar14 = -0x16;
    }
    else {
        uVar5 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar11 = _segment.ehdr; iVar11 != 0; iVar11 = *(iVar11 + 0x10)) {
            while( true ) {
                iVar14 = iVar11 + -0x88;
                if (uVar4 < *(iVar11 + -0x80)) break;
                if (uVar4 <= *(iVar11 + -0x80)) goto code_r0x080071b8;
                iVar11 = *(iVar11 + 8);
                if (iVar11 == 0) goto code_r0x080071b4;
            }
        }
code_r0x080071b4:
        iVar14 = 0;
code_r0x080071b8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar5);
    }
    uVar4 = auVar16._8_8_ + 0xfff;
    uVar10 = uVar4 & 0xfffffffffffff000;
    uVar5 = _raw_spin_lock_irqsave(iVar14 + 0x68);
    sym.av8l_fast_unmap_public(*(iVar14 + 0x60),in_x4,uVar10);
    __bitmap_clear(*(iVar14 + 0x38),in_x4 - *(iVar14 + 0x18) >> 0xc,uVar4 >> 0xc & 0xffffffff);
    *(iVar14 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar14 + 0x68,uVar5);
    uVar6 = sym.qcom_dma_free_from_pool(noname_0,arg3,uVar10);
    if ((uVar6 & 1) == 0) {
        uVar6 = is_vmalloc_addr(arg3);
        if ((uVar6 & 1) == 0) {
            iVar14 = (((arg3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
        }
        else {
            puVar7 = sym.qcom_dma_common_find_pages(arg3);
            if (puVar7 != NULL) {
                sym.qcom_dma_common_free_remap(arg3);
                if (0 < uVar4 >> 0xc) {
                    uVar4 = uVar4 >> 0xc & 0xffffffff;
                    puVar13 = puVar7;
                    do {
                        __free_pages(*puVar13,0);
                        uVar4 = uVar4 - 1;
                        puVar13 = puVar13 + 1;
                    } while (uVar4 != 0);
                }
                uVar4 = kvfree(puVar7);
                return uVar4;
            }
            iVar14 = vmalloc_to_page(arg3);
            uVar6 = sym.qcom_dma_common_free_remap(arg3);
        }
        if (iVar14 != 0) {
            uVar6 = sym.qcom_dma_free_contiguous(auVar16._0_8_,iVar14,uVar10);
        }
    }
    return uVar6;
}


// ===== sym.fast_smmu_free @ 0x0800712c (size 468) =====

void sym.fast_smmu_free(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong noname_0;
    ulong *in_x18;
    ulong *puVar6;
    uint64_t arg3_00;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = iommu_get_domain_for_dev();
    if (uVar1 == 0) {
        iVar7 = -0x16;
    }
    else {
        uVar2 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar5 = _segment.ehdr; iVar5 != 0; iVar5 = *(iVar5 + 0x10)) {
            while( true ) {
                iVar7 = iVar5 + -0x88;
                if (uVar1 < *(iVar5 + -0x80)) break;
                if (uVar1 <= *(iVar5 + -0x80)) goto code_r0x080071b8;
                iVar5 = *(iVar5 + 8);
                if (iVar5 == 0) goto code_r0x080071b4;
            }
        }
code_r0x080071b4:
        iVar7 = 0;
code_r0x080071b8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar2);
    }
    uVar1 = arg2 + 0xfff;
    arg3_00 = uVar1 & 0xfffffffffffff000;
    uVar2 = _raw_spin_lock_irqsave(iVar7 + 0x68);
    sym.av8l_fast_unmap_public(*(iVar7 + 0x60),arg4,arg3_00);
    __bitmap_clear(*(iVar7 + 0x38),arg4 - *(iVar7 + 0x18) >> 0xc,uVar1 >> 0xc & 0xffffffff);
    *(iVar7 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar7 + 0x68,uVar2);
    uVar3 = sym.qcom_dma_free_from_pool(noname_0,arg3,arg3_00);
    if ((uVar3 & 1) == 0) {
        uVar3 = is_vmalloc_addr(arg3);
        if ((uVar3 & 1) == 0) {
            iVar7 = (((arg3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
        }
        else {
            puVar4 = sym.qcom_dma_common_find_pages(arg3);
            if (puVar4 != NULL) {
                sym.qcom_dma_common_free_remap(arg3);
                if (0 < uVar1 >> 0xc) {
                    uVar1 = uVar1 >> 0xc & 0xffffffff;
                    puVar6 = puVar4;
                    do {
                        __free_pages(*puVar6,0);
                        uVar1 = uVar1 - 1;
                        puVar6 = puVar6 + 1;
                    } while (uVar1 != 0);
                }
                kvfree(puVar4);
                return;
            }
            iVar7 = vmalloc_to_page(arg3);
            sym.qcom_dma_common_free_remap(arg3);
        }
        if (iVar7 != 0) {
            sym.qcom_dma_free_contiguous(arg1,iVar7,arg3_00);
        }
    }
    return;
}


// ===== sym.fast_smmu_mmap_attrs @ 0x08007300 (size 36) =====

void sym.fast_smmu_mmap_attrs(int64_t arg2,int64_t arg1,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_iommu_dma_mmap(arg2,arg1,arg3);
    return;
}


// ===== sym.fast_smmu_get_sgtable @ 0x08007324 (size 36) =====

void sym.fast_smmu_get_sgtable(int64_t arg1,int64_t arg2)

{
    int64_t in_x2;
    ulong in_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_iommu_dma_get_sgtable(in_x8,arg2,in_x2);
    return;
}


// ===== sym.fast_smmu_map_page @ 0x08007348 (size 464) =====

int64_t sym.fast_smmu_map_page(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t arg2_00;
    uint32_t in_w4;
    int64_t in_x5;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    uint32_t uVar5;
    uint64_t arg2_01;
    uint32_t arg2_02;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        arg1_00 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                arg1_00 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x080073e0;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x080073dc;
            }
        }
code_r0x080073dc:
        arg1_00 = 0;
code_r0x080073e0:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = arg3 + (arg2 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 + 0x8000000000;
    arg2_01 = arg4 + (uVar2 & 0xfff) + 0xfff & 0xfffffffffffff000;
    uVar5 = in_x5;
    if ((uVar5 >> 0xf & 1) == 0) {
        if ((uVar5 >> 0x10 & 1) == 0) {
            arg2_02 = *(arg1 + 0x34c) >> 5 & 1;
        }
        else {
            arg2_02 = 0;
        }
        sym.qcom_dma_info_to_prot(in_w4,arg2_02,in_x5);
        if (((uVar5 >> 5 & 1) == 0) && (arg2_02 == 0)) {
            sym.qcom_arch_sync_dma_for_device(uVar2,arg4,in_w4);
        }
    }
    else {
        sym.qcom_dma_info_to_prot(in_w4,1,in_x5);
    }
    iVar4 = arg1_00 + 0x68;
    uVar3 = _raw_spin_lock_irqsave(iVar4);
    arg2_00 = sym.__fast_smmu_alloc_iova(arg1_00,arg2_01);
    if (arg2_00 != -1) {
        iVar1 = sym.av8l_fast_map_public(*(arg1_00 + 0x60),arg2_00,uVar2 & 0xfffffffffffff000,arg2_01);
        if (iVar1 == 0) {
            _raw_spin_unlock_irqrestore(iVar4,uVar3);
            return arg2_00 + (uVar2 & 0xfff);
        }
        sym.__fast_smmu_free_iova(arg1_00,arg2_00,arg4);
    }
    _raw_spin_unlock_irqrestore(iVar4,uVar3);
    return -1;
}


// ===== sym.fast_smmu_unmap_page @ 0x08007518 (size 356) =====

void sym.fast_smmu_unmap_page(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint32_t in_w4;
    uint8_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar6 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar6 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x080075a8;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x080075a4;
            }
        }
code_r0x080075a4:
        iVar6 = 0;
code_r0x080075a8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = arg3 + (arg2 & 0xfffU) + 0xfff;
    if ((in_w4 >> 0xf & 1) == 0) {
        if ((in_w4 >> 0x10 & 1) == 0) {
            uVar5 = *(arg1 + 0x34c) >> 5 & 1;
        }
        else {
            uVar5 = 0;
        }
        if (((in_w4 >> 5 & 1) == 0) && (uVar5 == 0)) {
            iVar4 = sym.av8l_fast_iova_to_phys_public(*(iVar6 + 0x60),arg2);
            if (iVar4 == 0) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x800767c);
                (*pcVar1)();
            }
            sym.qcom_arch_sync_dma_for_cpu(iVar4,arg3,arg4 & 0xffffffff);
        }
    }
    uVar3 = _raw_spin_lock_irqsave(iVar6 + 0x68);
    sym.av8l_fast_unmap_public(*(iVar6 + 0x60),arg2,uVar2 & 0xfffffffffffff000);
    __bitmap_clear(*(iVar6 + 0x38),arg2 - *(iVar6 + 0x18) >> 0xc,uVar2 >> 0xc);
    *(iVar6 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar6 + 0x68,uVar3);
    return;
}


// ===== sym.fast_smmu_map_sg @ 0x08007680 (size 480) =====

uint64_t sym.fast_smmu_map_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t arg1_00;
    uint64_t uVar7;
    uint32_t uVar8;
    int64_t in_x4;
    int64_t iVar9;
    ulong noname_0;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    int iVar11;
    uint64_t arg3_00;
    uint32_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar9 = *(iVar13 + 0x5e0);
    arg3_00 = arg4 & 0xffffffff;
    uVar10 = arg3 & 0xffffffff;
    iVar13 = in_x4;
    uVar2 = iommu_get_domain_for_dev();
    uVar8 = iVar13;
    uVar12 = in_x4;
    if (uVar2 == 0) {
        iVar13 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar13 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08007724;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08007720;
            }
        }
code_r0x08007720:
        iVar13 = 0;
code_r0x08007724:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    if ((uVar12 >> 0xf & 1) == 0) {
        if ((uVar12 >> 0x10 & 1) == 0) {
            uVar1 = *(arg1 + 0x34c) >> 5 & 1;
        }
        else {
            uVar1 = 0;
        }
    }
    else {
        uVar1 = 1;
    }
    uVar1 = sym.qcom_dma_info_to_prot(arg4,uVar1,in_x4);
    uVar2 = arg2;
    uVar7 = uVar10;
    iVar4 = sym.qcom_iommu_dma_prepare_map_sg(arg1,*(iVar13 + 0x10),arg2,uVar10);
    uVar3 = _raw_spin_lock_irqsave(iVar13 + 0x68);
    arg2_00 = sym.__fast_smmu_alloc_iova(iVar13,iVar4);
    _raw_spin_unlock_irqrestore(iVar13 + 0x68,uVar3);
    if (arg2_00 == 0xffffffffffffffff) {
        sym.qcom_iommu_dma_invalidate_sg(arg2,uVar10);
        uVar5 = 0;
    }
    else {
        uVar8 = uVar1;
        sym.av8l_fast_map_sg(*(iVar13 + 0x60),arg2_00,arg2,uVar10);
        uVar2 = uVar10;
        uVar5 = sym.qcom_iommu_dma_finalise_sg(arg1,arg2,uVar10,arg2_00);
        uVar5 = uVar5 & 0xffffffff;
        uVar7 = arg2_00;
        if ((uVar12 >> 5 & 1) == 0) {
            sym.fast_smmu_sync_sg_for_device(noname_0,arg2,uVar10,arg3_00);
            uVar2 = uVar10;
            uVar7 = arg3_00;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iVar9) {
        return uVar5;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.fast_smmu_unmap_sg;
    uVar10 = iommu_get_domain_for_dev();
    if (uVar10 == 0) {
        iVar13 = -0x16;
        uVar3 = extraout_x8;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar9 = _segment.ehdr; iVar9 != 0; iVar9 = *(iVar9 + 0x10)) {
            while( true ) {
                iVar13 = iVar9 + -0x88;
                if (uVar10 < *(iVar9 + -0x80)) break;
                if (uVar10 <= *(iVar9 + -0x80)) goto code_r0x080078f0;
                iVar9 = *(iVar9 + 8);
                if (iVar9 == 0) goto code_r0x080078ec;
            }
        }
code_r0x080078ec:
        iVar13 = 0;
code_r0x080078f0:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
        uVar3 = extraout_x8_00;
    }
    if ((uVar8 >> 5 & 1) == 0) {
        sym.fast_smmu_sync_sg_for_cpu(uVar3,arg1_00,uVar2 & 0xffffffff,uVar7 & 0xffffffff);
    }
    uVar10 = *(arg1_00 + 0x10);
    iVar9 = sg_next(arg1_00);
    iVar11 = uVar2 + -1;
    iVar4 = arg1_00;
    if (0 < iVar11) {
        do {
            iVar6 = iVar9;
            if (*(iVar6 + 0x18) == 0) break;
            iVar9 = sg_next();
            iVar11 = iVar11 + -1;
            iVar4 = iVar6;
        } while (iVar11 != 0);
    }
    uVar2 = (*(iVar4 + 0x10) - (uVar10 & 0xfffffffffffff000)) + *(iVar4 + 0x18) + 0xfff;
    sym.av8l_fast_unmap_public(*(iVar13 + 0x60),uVar10,uVar2 & 0xfffffffffffff000);
    uVar3 = _raw_spin_lock_irqsave(iVar13 + 0x68);
    __bitmap_clear(*(iVar13 + 0x38),uVar10 - *(iVar13 + 0x18) >> 0xc,uVar2 >> 0xc);
    *(iVar13 + 0x50) = 1;
    uVar2 = _raw_spin_unlock_irqrestore(iVar13 + 0x68,uVar3);
    return uVar2;
}


// ===== sym.fast_smmu_unmap_sg @ 0x08007860 (size 372) =====

void sym.fast_smmu_unmap_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t in_w4;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    int iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar7 = -0x16;
        uVar3 = extraout_x8;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar7 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x080078f0;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x080078ec;
            }
        }
code_r0x080078ec:
        iVar7 = 0;
code_r0x080078f0:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
        uVar3 = extraout_x8_00;
    }
    if ((in_w4 >> 5 & 1) == 0) {
        sym.fast_smmu_sync_sg_for_cpu(uVar3,arg2,arg3 & 0xffffffff,arg4 & 0xffffffff);
    }
    uVar2 = *(arg2 + 0x10);
    iVar4 = sg_next(arg2);
    iVar6 = arg3 + -1;
    if (0 < iVar6) {
        do {
            iVar5 = iVar4;
            if (*(iVar5 + 0x18) == 0) break;
            iVar4 = sg_next();
            iVar6 = iVar6 + -1;
            arg2 = iVar5;
        } while (iVar6 != 0);
    }
    uVar1 = (*(arg2 + 0x10) - (uVar2 & 0xfffffffffffff000)) + *(arg2 + 0x18) + 0xfff;
    sym.av8l_fast_unmap_public(*(iVar7 + 0x60),uVar2,uVar1 & 0xfffffffffffff000);
    uVar3 = _raw_spin_lock_irqsave(iVar7 + 0x68);
    __bitmap_clear(*(iVar7 + 0x38),uVar2 - *(iVar7 + 0x18) >> 0xc,uVar1 >> 0xc);
    *(iVar7 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar7 + 0x68,uVar3);
    return;
}


// ===== sym.fast_smmu_dma_map_resource @ 0x080079d4 (size 388) =====

int64_t sym.fast_smmu_dma_map_resource(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t in_x4;
    int64_t iVar6;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = iommu_get_domain_for_dev();
    if (uVar3 == 0) {
        arg1_00 = -0x16;
    }
    else {
        uVar4 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar6 = _segment.ehdr; iVar6 != 0; iVar6 = *(iVar6 + 0x10)) {
            while( true ) {
                arg1_00 = iVar6 + -0x88;
                if (uVar3 < *(iVar6 + -0x80)) break;
                if (uVar3 <= *(iVar6 + -0x80)) goto code_r0x08007a64;
                iVar6 = *(iVar6 + 8);
                if (iVar6 == 0) goto code_r0x08007a60;
            }
        }
code_r0x08007a60:
        arg1_00 = 0;
code_r0x08007a64:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar4);
    }
    iVar6 = arg1_00 + 0x68;
    uVar3 = ((arg2 + (arg1 & 0xfffU)) - 1 | 0xfff) + 1;
    uVar4 = _raw_spin_lock_irqsave(iVar6);
    iVar5 = sym.__fast_smmu_alloc_iova(arg1_00,uVar3);
    _raw_spin_unlock_irqrestore(iVar6,uVar4);
    if (iVar5 != -1) {
        uVar1 = sym.qcom_dma_info_to_prot(arg3,0,in_x4);
        iVar2 = iommu_map(*(arg1_00 + 8),iVar5,arg1 & 0xfffffffffffff000,uVar3,uVar1 | 0x10);
        if (iVar2 == 0) {
            return iVar5 + (arg1 & 0xfffU);
        }
        uVar4 = _raw_spin_lock_irqsave(iVar6);
        __bitmap_clear(*(arg1_00 + 0x38),iVar5 - *(arg1_00 + 0x18) >> 0xc,uVar3 >> 0xc);
        *(arg1_00 + 0x50) = 1;
        _raw_spin_unlock_irqrestore(iVar6,uVar4);
    }
    return -1;
}


// ===== sym.fast_smmu_dma_unmap_resource @ 0x08007b58 (size 272) =====

void sym.fast_smmu_dma_unmap_resource(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = iommu_get_domain_for_dev();
    if (uVar1 == 0) {
        iVar4 = -0x16;
    }
    else {
        uVar2 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar3 = _segment.ehdr; iVar3 != 0; iVar3 = *(iVar3 + 0x10)) {
            while( true ) {
                iVar4 = iVar3 + -0x88;
                if (uVar1 < *(iVar3 + -0x80)) break;
                if (uVar1 <= *(iVar3 + -0x80)) goto code_r0x08007bd8;
                iVar3 = *(iVar3 + 8);
                if (iVar3 == 0) goto code_r0x08007bd4;
            }
        }
code_r0x08007bd4:
        iVar4 = 0;
code_r0x08007bd8:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar2);
    }
    uVar1 = ((arg2 + (arg1 & 0xfffU)) - 1 | 0xfff) + 1;
    iommu_unmap(*(iVar4 + 8),arg1 & 0xfffffffffffff000,uVar1);
    uVar2 = _raw_spin_lock_irqsave(iVar4 + 0x68);
    __bitmap_clear(*(iVar4 + 0x38),arg1 - *(iVar4 + 0x18) >> 0xc,uVar1 >> 0xc);
    *(iVar4 + 0x50) = 1;
    _raw_spin_unlock_irqrestore(iVar4 + 0x68,uVar2);
    return;
}


// ===== sym.fast_smmu_sync_single_for_cpu @ 0x08007c68 (size 228) =====

void sym.fast_smmu_sync_single_for_cpu(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar5 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar5 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08007cec;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08007ce8;
            }
        }
code_r0x08007ce8:
        iVar5 = 0;
code_r0x08007cec:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = sym.av8l_fast_iova_coherent_public(*(iVar5 + 0x60),arg1);
    if ((uVar2 & 1) == 0) {
        iVar5 = sym.av8l_fast_iova_to_phys_public(*(iVar5 + 0x60),arg1);
        if (iVar5 == 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8007d4c);
            (*pcVar1)();
        }
        sym.qcom_arch_sync_dma_for_cpu(iVar5,arg2,arg3 & 0xffffffff);
    }
    return;
}


// ===== sym.fast_smmu_sync_single_for_device @ 0x08007d50 (size 228) =====

void sym.fast_smmu_sync_single_for_device(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar5 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar5 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08007dd4;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08007dd0;
            }
        }
code_r0x08007dd0:
        iVar5 = 0;
code_r0x08007dd4:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = sym.av8l_fast_iova_coherent_public(*(iVar5 + 0x60),arg1);
    if ((uVar2 & 1) == 0) {
        iVar5 = sym.av8l_fast_iova_to_phys_public(*(iVar5 + 0x60),arg1);
        if (iVar5 == 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8007e34);
            (*pcVar1)();
        }
        sym.qcom_arch_sync_dma_for_device(iVar5,arg2,arg3 & 0xffffffff);
    }
    return;
}


// ===== sym.fast_smmu_sync_sg_for_cpu @ 0x08007e38 (size 276) =====

void sym.fast_smmu_sync_sg_for_cpu(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t arg2_00;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = *(arg1 + 0x10);
    uVar5 = arg2 & 0xffffffff;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar6 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar6 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08007ec0;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08007ebc;
            }
        }
code_r0x08007ebc:
        iVar6 = 0;
code_r0x08007ec0:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = sym.av8l_fast_iova_coherent_public(*(iVar6 + 0x60),arg2_00);
    if ((0 < arg2) && ((uVar2 & 1) == 0)) {
        do {
            sym.qcom_arch_sync_dma_for_cpu
                      (*(arg1 + 8) +
                       ((*arg1 & 0x3fffffffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                       0x8000000000,*(arg1 + 0xc),arg3 & 0xffffffff);
            arg1 = sg_next(arg1);
            uVar1 = uVar5 - 1;
            uVar5 = uVar1;
        } while (uVar1 != 0);
    }
    return;
}


// ===== sym.fast_smmu_sync_sg_for_device @ 0x08007f4c (size 276) =====

void sym.fast_smmu_sync_sg_for_device(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t arg2_00;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = *(arg1 + 0x10);
    uVar5 = arg2 & 0xffffffff;
    uVar2 = iommu_get_domain_for_dev();
    if (uVar2 == 0) {
        iVar6 = -0x16;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                iVar6 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08007fd4;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08007fd0;
            }
        }
code_r0x08007fd0:
        iVar6 = 0;
code_r0x08007fd4:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
    }
    uVar2 = sym.av8l_fast_iova_coherent_public(*(iVar6 + 0x60),arg2_00);
    if ((0 < arg2) && ((uVar2 & 1) == 0)) {
        do {
            sym.qcom_arch_sync_dma_for_device
                      (*(arg1 + 8) +
                       ((*arg1 & 0x3fffffffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                       0x8000000000,*(arg1 + 0xc),arg3 & 0xffffffff);
            arg1 = sg_next(arg1);
            uVar1 = uVar5 - 1;
            uVar5 = uVar1;
        } while (uVar1 != 0);
    }
    return;
}


// ===== sym.fast_smmu_alloc_atomic @ 0x08008060 (size 544) =====

uint64_t sym.fast_smmu_alloc_atomic(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg2_00;
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t arg1_00;
    int64_t iVar5;
    uint64_t arg2_01;
    int64_t *arg3_00;
    uint32_t uVar6;
    int64_t *in_x4;
    int64_t *arg3_01;
    uint32_t in_w5;
    ulong noname_0;
    ulong noname_0_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uchar auVar11 [16];
    uint64_t uStack_70;
    int64_t iStack_68;
    
    arg3_00 = &stack0xffffffffffffff90;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    uVar6 = arg3;
    iStack_68 = *(iVar3 + 0x5e0);
    uStack_70 = 0;
    arg3_01 = in_x4;
    uVar2 = sym.qcom_dma_info_to_prot(0,in_w5,arg4);
    piVar9 = uVar2 & 0xffffffff;
    if ((in_w5 & 1) == 0) {
        uVar2 = sym.qcom_dma_alloc_from_pool(noname_0,arg2,&stack0xffffffffffffff90);
joined_r0x08008144:
        if (uVar2 != 0) {
            iVar3 = arg1 + 0x68;
            uVar4 = _raw_spin_lock_irqsave(iVar3);
            iVar7 = sym.__fast_smmu_alloc_iova(arg1,arg2);
            if (iVar7 == -1) {
                _dev_err(*arg1,"no iova\n");
            }
            else {
                arg3_00 = (uStack_70 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 + 0x8000000000;
                iVar5 = arg2;
                iVar1 = sym.av8l_fast_map_public(*(arg1 + 0x60),iVar7,arg3_00,arg2);
                uVar6 = iVar5;
                if (iVar1 == 0) {
                    _raw_spin_unlock_irqrestore(iVar3,uVar4);
                    *in_x4 = iVar7;
                    arg3_01 = piVar9;
                    goto code_r0x08008214;
                }
                _dev_err(*arg1,"no map public\n");
                arg3_00 = arg2;
                sym.__fast_smmu_free_iova(arg1,iVar7,arg2);
                arg3_01 = piVar9;
            }
            _raw_spin_unlock_irqrestore(iVar3,uVar4);
            if ((in_w5 & 1) == 0) {
                sym.qcom_dma_free_from_pool(noname_0_00,uVar2,arg2);
                arg3_00 = arg2;
            }
            else {
                iVar1 = 0;
                if (0xfff < arg2 - 1U) {
                    iVar1 = 0x40 - LZCOUNT(arg2 - 1U >> 0xc);
                }
                __free_pages(uStack_70,iVar1);
            }
            goto code_r0x08008210;
        }
    }
    else {
        uVar4 = tpidr_el1;
        iVar1 = 0;
        if (0xfff < arg2 - 1U) {
            iVar1 = 0x40 - LZCOUNT(arg2 - 1U >> 0xc);
        }
        arg3_00 = NULL;
        uVar6 = 0;
        uStack_70 = __alloc_pages(uVar4,arg3 & 0xffffffff,iVar1);
        if (uStack_70 != 0) {
            uVar2 = (uStack_70 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
            goto joined_r0x08008144;
        }
code_r0x08008210:
        uVar2 = 0;
    }
code_r0x08008214:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return uVar2;
    }
    auVar11 = __stack_chk_fail();
    arg2_01 = auVar11._8_8_;
    iVar3 = auVar11._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800827c;
    uVar2 = iommu_get_domain_for_dev(uVar4);
    uVar8 = arg3_01;
    if (uVar2 == 0) {
        iVar7 = -0x16;
        if ((uVar8 >> 0xf & 1) == 0) goto code_r0x08008328;
code_r0x08008340:
        uVar8 = 1;
    }
    else {
        uVar4 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar5 = _segment.ehdr; iVar5 != 0; iVar5 = *(iVar5 + 0x10)) {
            while( true ) {
                iVar7 = iVar5 + -0x88;
                if (uVar2 < *(iVar5 + -0x80)) break;
                if (uVar2 <= *(iVar5 + -0x80)) goto code_r0x08008318;
                iVar5 = *(iVar5 + 8);
                if (iVar5 == 0) goto code_r0x08008314;
            }
        }
code_r0x08008314:
        iVar7 = 0;
code_r0x08008318:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar4);
        if ((uVar8 >> 0xf & 1) != 0) goto code_r0x08008340;
code_r0x08008328:
        if ((uVar8 >> 0x10 & 1) == 0) {
            uVar8 = *(iVar3 + 0x34c) >> 5 & 1;
        }
        else {
            uVar8 = 0;
        }
    }
    auVar10 = sym.qcom_dma_info_to_prot(0,uVar8,arg3_01);
    uVar2 = 0x68000000000703;
    if (arm64_use_ng_mappings != 0x0) {
        uVar2 = 0x68000000000f03;
    }
    if (((arg3_01 & 4) == 0 & uVar8) == 0) {
        uVar2 = uVar2 | 0x60000000000008;
    }
    arg2_00 = 0;
    if (0xfff < arg2_01 - 1) {
        arg2_00 = 0x40 - LZCOUNT(arg2_01 - 1 >> 0xc);
    }
    arg1_00 = sym.qcom_dma_alloc_from_contiguous(iVar3,auVar10,arg2_00,uVar6 >> 0xd & 1);
    if (arg1_00 != 0) {
        uVar4 = _raw_spin_lock_irqsave(iVar7 + 0x68);
        iVar5 = sym.__fast_smmu_alloc_iova(iVar7,arg2_01);
        auVar10 = _raw_spin_unlock_irqrestore(iVar7 + 0x68,uVar4);
        if (iVar5 != -1) {
            iVar1 = sym.av8l_fast_map_public
                              (*(iVar7 + 0x60),iVar5,
                               (arg1_00 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 + 0x8000000000,
                               auVar11._8_4_);
            if (iVar1 == 0) {
                if (uVar8 != 0) {
                    uVar2 = (arg1_00 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
code_r0x080084fc:
                    memset(uVar2,0,arg2_01);
                    *arg3_00 = iVar5;
                    return uVar2;
                }
                uVar2 = sym.qcom_dma_common_contiguous_remap(arg1_00,arg2_01,uVar2);
                if (uVar2 != 0) {
                    sym.qcom_arch_dma_prep_coherent(arg1_00,arg2_01);
                    goto code_r0x080084fc;
                }
                sym.av8l_fast_unmap_public(*(iVar7 + 0x60),iVar5,arg2_01);
            }
            auVar10 = __bitmap_clear(*(iVar7 + 0x38),iVar5 - *(iVar7 + 0x18) >> 0xc,arg2_01 >> 0xc & 0xffffffff);
            *(iVar7 + 0x50) = 1;
        }
        sym.qcom_dma_release_from_contiguous(iVar3,auVar10,arg2_01 >> 0xc & 0xffffffff);
    }
    return 0;
}


// ===== sym.__fast_smmu_alloc_contiguous @ 0x08008280 (size 680) =====

uint64_t sym.__fast_smmu_alloc_contiguous(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg2_00;
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t arg1_00;
    int64_t iVar4;
    uint64_t in_x4;
    ulong *in_x18;
    int64_t arg1_01;
    uint32_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_get_domain_for_dev();
    uVar5 = in_x4;
    if (uVar2 == 0) {
        arg1_01 = -0x16;
        if ((uVar5 >> 0xf & 1) == 0) goto code_r0x08008328;
code_r0x08008340:
        uVar5 = 1;
    }
    else {
        uVar3 = _raw_read_lock_irqsave(obj.mappings_lock);
        for (iVar4 = _segment.ehdr; iVar4 != 0; iVar4 = *(iVar4 + 0x10)) {
            while( true ) {
                arg1_01 = iVar4 + -0x88;
                if (uVar2 < *(iVar4 + -0x80)) break;
                if (uVar2 <= *(iVar4 + -0x80)) goto code_r0x08008318;
                iVar4 = *(iVar4 + 8);
                if (iVar4 == 0) goto code_r0x08008314;
            }
        }
code_r0x08008314:
        arg1_01 = 0;
code_r0x08008318:
        _raw_read_unlock_irqrestore(obj.mappings_lock,uVar3);
        if ((uVar5 >> 0xf & 1) != 0) goto code_r0x08008340;
code_r0x08008328:
        if ((uVar5 >> 0x10 & 1) == 0) {
            uVar5 = *(arg1 + 0x34c) >> 5 & 1;
        }
        else {
            uVar5 = 0;
        }
    }
    auVar6 = sym.qcom_dma_info_to_prot(0,uVar5,in_x4);
    uVar2 = 0x68000000000703;
    if (arm64_use_ng_mappings != 0x0) {
        uVar2 = 0x68000000000f03;
    }
    if (((in_x4 & 4) == 0 & uVar5) == 0) {
        uVar2 = uVar2 | 0x60000000000008;
    }
    arg2_00 = 0;
    if (0xfff < arg2 - 1U) {
        arg2_00 = 0x40 - LZCOUNT(arg2 - 1U >> 0xc);
    }
    arg1_00 = sym.qcom_dma_alloc_from_contiguous(arg1,auVar6,arg2_00,arg4 >> 0xd & 1);
    if (arg1_00 != 0) {
        uVar3 = _raw_spin_lock_irqsave(arg1_01 + 0x68);
        iVar4 = sym.__fast_smmu_alloc_iova(arg1_01,arg2);
        auVar6 = _raw_spin_unlock_irqrestore(arg1_01 + 0x68,uVar3);
        if (iVar4 != -1) {
            iVar1 = sym.av8l_fast_map_public
                              (*(arg1_01 + 0x60),iVar4,
                               (arg1_00 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 + 0x8000000000,arg2);
            if (iVar1 == 0) {
                if (uVar5 != 0) {
                    uVar2 = (arg1_00 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
code_r0x080084fc:
                    memset(uVar2,0,arg2);
                    *arg3 = iVar4;
                    return uVar2;
                }
                uVar2 = sym.qcom_dma_common_contiguous_remap(arg1_00,arg2,uVar2);
                if (uVar2 != 0) {
                    sym.qcom_arch_dma_prep_coherent(arg1_00,arg2);
                    goto code_r0x080084fc;
                }
                sym.av8l_fast_unmap_public(*(arg1_01 + 0x60),iVar4,arg2);
            }
            auVar6 = __bitmap_clear(*(arg1_01 + 0x38),iVar4 - *(arg1_01 + 0x18) >> 0xc,arg2 >> 0xc & 0xffffffff);
            *(arg1_01 + 0x50) = 1;
        }
        sym.qcom_dma_release_from_contiguous(arg1,auVar6,arg2 >> 0xc & 0xffffffff);
    }
    return 0;
}


// ===== sym.arm_64_lpae_alloc_pgtable_s1 @ 0x08008528 (size 600) =====

int64_t sym.arm_64_lpae_alloc_pgtable_s1(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t arg1_00;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*arg1 & 0xffffffff7fffff9e) != 0) {
        return 0;
    }
    arg1_00 = sym.arm_lpae_alloc_pgtable(arg1);
    if (arg1_00 == 0) {
        return 0;
    }
    uVar3 = *(arg1 + 0x38);
    if (*(arg1 + 0x18) == '\0') {
        uVar5 = *arg1;
        if ((uVar5 >> 6 & 1) == 0) {
            if (uVar5 < 0) {
                uVar3 = uVar3 & 0xfffff99f | 0x1c0;
            }
            else {
                uVar3 = uVar3 & 0xfffff81f | 0x40;
            }
        }
        else {
            uVar3 = uVar3 & 0xfffff81f | 0xc0;
        }
        *(arg1 + 0x38) = uVar3;
    }
    else {
        uVar5 = *arg1;
        uVar3 = uVar3 & 0xfffff800 | uVar3 & 0x1f | 0x2e0;
        *(arg1 + 0x38) = uVar3;
        if ((uVar5 & 0x80000040) != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80085ac);
            (*pcVar2)();
        }
    }
    uVar5 = uVar5 & 0x20;
    iVar7 = 8L << (*(arg1_00 + 0xa0) & 0x3f);
    if (iVar7 == 0x10000) {
        uVar4 = 8;
        if (uVar5 != 0) {
            uVar4 = 0x18;
        }
code_r0x08008640:
        uVar6 = uVar3 & 0xffffffe7;
code_r0x08008644:
        uVar3 = uVar4 | uVar6;
        *(arg1 + 0x38) = uVar3;
    }
    else {
        if (iVar7 == 0x4000) {
            uVar4 = 0x10;
            if (uVar5 != 0) {
                uVar4 = 8;
            }
            goto code_r0x08008640;
        }
        if (iVar7 == 0x1000) {
            uVar6 = uVar5 >> 1;
            uVar4 = uVar3 & 0xffffffe7;
            goto code_r0x08008644;
        }
    }
    uVar4 = *(arg1 + 0x14) - 0x20U >> 1 | *(arg1 + 0x14) << 0x1f;
    if (uVar4 < 0xb) {
    //switch table (11 cases) at 0x8001438
        switch(*(uVar4 * 4 + 0x8001438) + 0x8008668) {
        case 0x800867c:
            uVar3 = uVar3 & 0xfffffff8;
            break;
        case 0x8008688:
            uVar3 = uVar3 & 0xfffffff8 | 1;
            break;
        case 0x8008698:
            uVar3 = uVar3 & 0xfffffff8 | 2;
            break;
        case 0x80086a8:
            uVar3 = uVar3 & 0xfffffff8 | 3;
            break;
        case 0x80086b8:
            uVar3 = uVar3 & 0xfffffff8 | 4;
            break;
        case 0x80086c8:
            uVar3 = uVar3 & 0xfffffff8 | 5;
            break;
        case 0x80086d8:
            uVar3 = uVar3 & 0xfffffff8 | 6;
            break;
        case 0x800876c:
            goto code_r0x0800876c;
        }
        *(arg1 + 0x38) = uVar3 & 0xfffe0000 | uVar3 & 0x7ff | (*(arg1 + 0x10) * -0x800 >> 0xb & 0x3f) << 0xb;
        *(arg1 + 0x40) = 0xefe4f404ff44;
        iVar7 = sym.__arm_lpae_alloc_pages(arg1_00,8L << (*(arg1_00 + 0x98) & 0x3f),0xcc0,arg1);
        *(arg1_00 + 0xa8) = iVar7;
        if (iVar7 != 0) {
            DataSynchronizationBarrier(3,2,0);
            iVar1 = (*(arg1_00 + 0xa8) << 8) >> 8;
            uVar5 = iVar1 + 0x8000000000;
            iVar7 = uVar5 + _gen_pool_first_fit_order_align;
            if (uVar5 >> 0x26 != 0) {
                iVar7 = iVar1 - _of_n_addr_cells;
            }
            *(arg1 + 0x30) = iVar7;
            return arg1_00;
        }
    }
code_r0x0800876c:
    sym.qcom_io_pgtable_allocator_unregister(*(arg1_00 + 0xb0));
    kfree(arg1_00);
    return 0;
}


// ===== sym.arm_lpae_free_pgtable @ 0x08008780 (size 76) =====

void sym.arm_lpae_free_pgtable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__arm_lpae_free_pgtable(arg1,*(arg1 + 0x9c),*(arg1 + 0xa8),0);
    sym.qcom_io_pgtable_allocator_unregister(*(arg1 + 0xb0));
    kfree(arg1);
    return;
}


// ===== sym.arm_64_lpae_alloc_pgtable_s2 @ 0x080087cc (size 540) =====

int64_t sym.arm_64_lpae_alloc_pgtable_s2(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t arg1_00;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg1 != 0) {
        return 0;
    }
    arg1_00 = sym.arm_lpae_alloc_pgtable(arg1);
    if (arg1_00 == 0) {
        return 0;
    }
    if ((*(arg1_00 + 0x9c) == 0) && (8L << (*(arg1_00 + 0x98) & 0x3f) < 0x88)) {
        *(arg1_00 + 0x98) = *(arg1_00 + 0xa0) + *(arg1_00 + 0x98);
        *(arg1_00 + 0x9c) = 1;
    }
    uVar2 = *(arg1 + 0x38);
    uVar4 = 0x40;
    if (*(arg1 + 0x18) != '\0') {
        uVar4 = 0x2e0;
    }
    uVar6 = uVar2 & 0xfffff81f | uVar4;
    *(arg1 + 0x38) = uVar6;
    uVar5 = *(arg1_00 + 0x9c);
    iVar7 = 8L << (*(arg1_00 + 0xa0) & 0x3f);
    if (iVar7 == 0x10000) {
        uVar6 = uVar2 & 0xfffff807 | uVar4 | 8;
code_r0x080088b4:
        *(arg1 + 0x38) = uVar6;
    }
    else {
        if (iVar7 == 0x4000) {
            uVar6 = uVar2 & 0xfffff807 | uVar4 | 0x10;
            goto code_r0x080088b4;
        }
        if (iVar7 == 0x1000) {
            uVar5 = uVar5 + 1;
            uVar6 = uVar2 & 0xfffff807 | uVar4;
            goto code_r0x080088b4;
        }
    }
    uVar4 = *(arg1 + 0x14) - 0x20U >> 1 | *(arg1 + 0x14) << 0x1f;
    if (uVar4 < 0xb) {
    //switch table (11 cases) at 0x8001464
        switch(*(uVar4 * 4 + 0x8001464) + 0x80088d4) {
        case 0x80088e8:
            uVar6 = uVar6 & 0xfffffff8;
            break;
        case 0x80088f4:
            uVar6 = uVar6 & 0xfffffff8 | 1;
            break;
        case 0x8008904:
            uVar6 = uVar6 & 0xfffffff8 | 2;
            break;
        case 0x8008914:
            uVar6 = uVar6 & 0xfffffff8 | 3;
            break;
        case 0x8008924:
            uVar6 = uVar6 & 0xfffffff8 | 5;
            break;
        case 0x8008934:
            uVar6 = uVar6 & 0xfffffff8 | 6;
            break;
        case 0x8008944:
            uVar6 = uVar6 & 0xfffffff8 | 4;
            break;
        case 0x80089d4:
            goto code_r0x080089d4;
        }
        *(arg1 + 0x38) =
             (uVar6 & 0xfff80000 | uVar6 & 0x7ff | (uVar5 & 3) << 0xb | *(arg1 + 0x10) * -0x2000 & 0x7e000U) ^ 0x1800;
        iVar7 = sym.__arm_lpae_alloc_pages(arg1_00,8L << (*(arg1_00 + 0x98) & 0x3f),0xcc0,arg1);
        *(arg1_00 + 0xa8) = iVar7;
        if (iVar7 != 0) {
            DataSynchronizationBarrier(3,2,0);
            iVar3 = (*(arg1_00 + 0xa8) << 8) >> 8;
            uVar1 = iVar3 + 0x8000000000;
            iVar7 = uVar1 + _gen_pool_first_fit_order_align;
            if (uVar1 >> 0x26 != 0) {
                iVar7 = iVar3 - _of_n_addr_cells;
            }
            *(arg1 + 0x30) = iVar7;
            return arg1_00;
        }
    }
code_r0x080089d4:
    sym.qcom_io_pgtable_allocator_unregister(*(arg1_00 + 0xb0));
    kfree(arg1_00);
    return 0;
}


// ===== sym.arm_32_lpae_alloc_pgtable_s1 @ 0x080089e8 (size 88) =====

ulong sym.arm_32_lpae_alloc_pgtable_s1(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x10) < 0x21) && (*(arg1 + 0x14) < 0x29)) {
        *(arg1 + 8) = *(arg1 + 8) & 0x40201000;
        uVar1 = sym.arm_64_lpae_alloc_pgtable_s1(arg1);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.arm_32_lpae_alloc_pgtable_s2 @ 0x08008a40 (size 88) =====

ulong sym.arm_32_lpae_alloc_pgtable_s2(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x10) < 0x29) && (*(arg1 + 0x14) < 0x29)) {
        *(arg1 + 8) = *(arg1 + 8) & 0x40201000;
        uVar1 = sym.arm_64_lpae_alloc_pgtable_s2(arg1);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.arm_mali_lpae_alloc_pgtable @ 0x08008a98 (size 268) =====

int64_t sym.arm_mali_lpae_alloc_pgtable(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t arg1_00;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*arg1 == 0) && (*(arg1 + 0x10) < 0x31)) && (*(arg1 + 0x14) < 0x29)) {
        *(arg1 + 8) = *(arg1 + 8) & 0x40201000;
        arg1_00 = sym.arm_lpae_alloc_pgtable(arg1);
        if (arg1_00 == 0) {
            return 0;
        }
        if (0 < *(arg1_00 + 0x9c)) {
            *(arg1_00 + 0x98) = 0;
        }
        *(arg1 + 0x38) = 0x888d88;
        iVar3 = sym.__arm_lpae_alloc_pages(arg1_00,8L << (*(arg1_00 + 0x98) & 0x3f),0xcc0,arg1);
        *(arg1_00 + 0xa8) = iVar3;
        if (iVar3 != 0) {
            DataSynchronizationBarrier(3,2,0);
            iVar3 = (*(arg1_00 + 0xa8) << 8) >> 8;
            uVar1 = iVar3 + 0x8000000000;
            uVar2 = uVar1 + _gen_pool_first_fit_order_align;
            if (uVar1 >> 0x26 != 0) {
                uVar2 = iVar3 - _of_n_addr_cells;
            }
            *(arg1 + 0x30) = uVar2 | 7;
            return arg1_00;
        }
        sym.qcom_io_pgtable_allocator_unregister(*(arg1_00 + 0xb0));
        kfree(arg1_00);
    }
    return 0;
}


// ===== sym.arm_lpae_alloc_pgtable @ 0x08008ba4 (size 420) =====

int64_t sym.arm_lpae_alloc_pgtable(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = *(arg1 + 8);
    uVar10 = 0x40201000;
    if ((uVar9 >> 0xc & 1) == 0) {
        if ((uVar9 & 0xfff) == 0) {
            if ((uVar9 & 0xfffffffffffff000) != 0) {
                uVar12 = (uVar9 & 0xaaaaaaaaaaaaa000) >> 1 | (uVar9 & 0x5555555555555000) << 1;
                uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
                goto code_r0x08008bf0;
            }
        }
        else {
            uVar12 = LZCOUNT(uVar9 & 0xfff) ^ 0x3f;
code_r0x08008bf0:
            iVar13 = 1L << (uVar12 & 0x3f);
            if (iVar13 == 0x1000) goto code_r0x08008c24;
            if (iVar13 == 0x10000) {
                uVar10 = 0x40020010000;
                if (*(arg1 + 0x14) < 0x31) {
                    uVar10 = 0x20010000;
                }
                uVar11 = 0x34;
                goto code_r0x08008c28;
            }
            if (iVar13 == 0x4000) {
                uVar11 = 0x30;
                uVar10 = 0x2004000;
                goto code_r0x08008c28;
            }
        }
        uVar10 = 0;
    }
code_r0x08008c24:
    uVar11 = 0x30;
code_r0x08008c28:
    *(arg1 + 8) = uVar10 & uVar9;
    uVar1 = *(arg1 + 0x10);
    if (uVar11 <= *(arg1 + 0x10)) {
        uVar1 = uVar11;
    }
    uVar2 = *(arg1 + 0x14);
    if (uVar11 <= *(arg1 + 0x14)) {
        uVar2 = uVar11;
    }
    *(arg1 + 0x10) = uVar1;
    *(arg1 + 0x14) = uVar2;
    if ((uVar10 & uVar9 & 0x15000) != 0) {
        iVar13 = kmem_cache_alloc_trace(___list_add_valid,0xcc0,0xd0);
        if (iVar13 == 0) {
            return 0;
        }
        iVar7 = *(arg1 + 0x10);
        uVar10 = (*(arg1 + 8) & 0xaaaaaaaaaaaaaaaa) >> 1 | (*(arg1 + 8) & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        *(iVar13 + 0x68) = sym.arm_lpae_map.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
        *(iVar13 + 0x70) = sym.arm_lpae_map_pages.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
        iVar8 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
        iVar6 = iVar8 + -3;
        iVar5 = 0;
        if (iVar6 != 0) {
            iVar5 = (iVar7 + -4) / iVar6;
        }
        uVar11 = *(arg1 + 0x68);
        *(iVar13 + 200) = 0;
        *(iVar13 + 0x78) = sym.arm_lpae_map_sg.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
        *(iVar13 + 0x80) = sym.arm_lpae_unmap.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
        *(iVar13 + 0xb0) = uVar11;
        *(iVar13 + 0x88) = sym.arm_lpae_unmap_pages.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
        *(iVar13 + 0x90) = sym.arm_lpae_iova_to_phys.55b984f7a5e21471df6e15a17290fef8.cfi_jt;
        uVar3 = *(arg1 + 0x58);
        uVar4 = *(arg1 + 0x60);
        *(iVar13 + 0x9c) = 4 - iVar5;
        *(iVar13 + 0xa0) = iVar6;
        *(iVar13 + 0xb8) = uVar3;
        *(iVar13 + 0xc0) = uVar4;
        *(iVar13 + 0x98) = (iVar7 - iVar8) + (iVar6 - iVar6 * iVar5);
        iVar7 = sym.qcom_io_pgtable_allocator_register(uVar11);
        if (iVar7 == 0) {
            return iVar13;
        }
        kfree(iVar13);
    }
    return 0;
}


// ===== sym.__arm_lpae_alloc_pages @ 0x08008d48 (size 384) =====

uint64_t sym.__arm_lpae_alloc_pages(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t arg1_00;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *piVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar7 = *(arg4 + 0x28);
    arg1_00 = sym.qcom_io_pgtable_alloc_page(*(arg1 + 0xb0),arg3 | 0x100);
    if (arg1_00 != 0) {
        uVar8 = (arg1_00 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
        if (*(arg4 + 0x18) != '\0') {
            return uVar8;
        }
        uVar3 = is_vmalloc_addr(uVar8);
        if (((uVar3 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar5 = dev_driver_string(piVar7);
            iVar6 = piVar7[0xe];
            if (iVar6 == 0) {
                iVar6 = *piVar7;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar5,iVar6);
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008ec8);
            (*pcVar2)();
        }
        if ((uVar3 & 1) == 0) {
            iVar6 = ((arg1_00 & 0x3ffffffffffc0) << 0xe) >> 8;
            uVar3 = iVar6 + 0x8000000000;
            iVar4 = dma_map_page_attrs(piVar7,(uVar3 >> 6) - 0x200000000,0,arg2,1,0);
            if (iVar4 != -1) {
                iVar1 = _gen_pool_first_fit_order_align + uVar3;
                if (uVar3 >> 0x26 != 0) {
                    iVar1 = iVar6 - _of_n_addr_cells;
                }
                if (iVar4 == iVar1) {
                    return uVar8;
                }
                _dev_err(piVar7,"Cannot accommodate DMA translation for IOMMU page tables\n");
                dma_unmap_page_attrs(piVar7,iVar4,arg2,1,0);
            }
        }
        sym.free_page_to_pool.llvm.8230901766045713888(arg1_00);
    }
    return 0;
}


// ===== sym.arm_lpae_map @ 0x08008ed0 (size 52) =====

void sym.arm_lpae_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_lpae_map_pages(arg1,arg2,arg3,arg4);
    return;
}


// ===== sym.arm_lpae_map_pages @ 0x08008f04 (size 364) =====

//WARNING: Removing unreachable block (ram,0x08009220)
//WARNING: Removing unreachable block (ram,0x0800922c)
//WARNING: Removing unreachable block (ram,0x08009284)
//WARNING: Removing unreachable block (ram,0x08009238)
//WARNING: Removing unreachable block (ram,0x08009288)
//WARNING: Removing unreachable block (ram,0x080093bc)
//WARNING: Removing unreachable block (ram,0x080092b0)
//WARNING: Removing unreachable block (ram,0x080092cc)
//WARNING: Removing unreachable block (ram,0x080092dc)
//WARNING: Removing unreachable block (ram,0x08009310)
//WARNING: Removing unreachable block (ram,0x080093e8)
//WARNING: Removing unreachable block (ram,0x080093f0)
//WARNING: Removing unreachable block (ram,0x08009428)

uint64_t sym.arm_lpae_map_pages(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t arg2_00;
    int64_t iVar1;
    uint uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint32_t arg2_01;
    int64_t in_x4;
    uint32_t in_w5;
    int64_t *in_x6;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    int64_t iVar15;
    int64_t unaff_x26;
    int64_t *unaff_x27;
    uint64_t uVar16;
    ulong unaff_x28;
    ulong unaff_x30;
    uchar auVar17 [16];
    uint64_t uStack_118;
    int64_t iStack_110;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_f0;
    int64_t *piStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    int64_t iStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    uint uStack_90;
    ulong *puStack_88;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    uVar16 = arg4;
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    if (((uVar16 == 0) || (in_x4 == 0)) || (iVar15 = arg1 + -0x68, (*(arg1 + -0x50) & uVar16) != uVar16)) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8009018);
        (*pcVar3)();
    }
    if ((arg2 >> (*(arg1 + -0x48) & 0x3f) != (*(arg1 + -0x58) << 0x3a) >> 0x3f) ||
       (arg3 >> (*(arg1 + -0x44) & 0x3f) != 0)) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8009024);
        (*pcVar3)();
    }
    puVar8 = arg3;
    if ((in_w5 & 3) == 0) {
        uVar5 = 0;
    }
    else {
        uStack_78 = *(arg1 + 0x40);
        unaff_x27 = *(arg1 + 0x34);
        uVar2 = SUB84(in_x6,0);
        unaff_x28 = sym.arm_lpae_prot_to_pte(iVar15,in_w5);
        unaff_x26 = arg1 + 0x60;
        uStack_70 = _raw_spin_lock_irqsave(unaff_x26);
        puStack_88 = &uStack_70;
        uStack_a0 = 0;
        uStack_98 = 0;
        uVar9 = uVar16;
        in_x6 = unaff_x27;
        uStack_90 = uVar2;
        uVar5 = sym.__arm_lpae_map(iVar15,arg2,arg3,uVar16);
        arg4 = uVar9;
        uVar5 = uVar5 & 0xffffffff;
        _raw_spin_unlock_irqrestore(unaff_x26,uStack_70);
        DataSynchronizationBarrier(3,2,0);
    }
    arg2_01 = in_x4;
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar17 = __stack_chk_fail();
    iVar6 = auVar17._0_8_;
    *extraout_x18 = sym.arm_lpae_map_sg;
    pcStack_f8 = sym.arm_lpae_map_sg;
    iVar1 = sp_el0;
    iStack_110 = *(iVar1 + 0x5e0);
    *in_x6 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_f0 = unaff_x28;
    piStack_e8 = unaff_x27;
    iStack_e0 = unaff_x26;
    iStack_d8 = iVar15;
    iStack_c8 = arg2;
    iStack_c0 = arg3;
    uStack_b0 = uVar16;
    uStack_a8 = uVar5;
    uVar7 = _raw_spin_lock_irqsave();
    uVar16 = 0;
    uVar14 = 0;
    uVar5 = 0;
    do {
        uVar9 = puVar8[1] + ((*puVar8 & 0x3fffffffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                0x8000000000;
        if (uVar16 == 0) {
code_r0x08009390:
            uVar16 = *(puVar8 + 0xc);
        }
        else {
            if (uVar9 != uVar5 + uVar16) {
                iVar15 = *in_x6;
                arg2_00 = iVar15 + auVar17._8_8_;
                uStack_118 = uVar5;
                sym.arm_lpae_prot_to_pte(iVar6 + -0x68,arg2_01);
                uVar10 = *(iVar6 + -0x50);
                uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                uVar11 = arg2_00 | uVar5;
                if (((1 << (LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) & 0x1f)) - 1 & (uVar11 | uVar16)) == 0) {
                    if ((arg2_00 + (uVar16 - 1) >> (*(iVar6 + -0x48) & 0x3f) != (*(iVar6 + -0x58) << 0x3a) >> 0x3f) ||
                       (uVar5 + (uVar16 - 1) >> (*(iVar6 + -0x44) & 0x3f) != 0)) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8009484);
                        (*pcVar3)();
                    }
                    if ((arg2_01 & 3) == 0) {
                        *in_x6 = iVar15 + uVar16;
                    }
                    else {
                        uVar12 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
                        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                        uVar13 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
                        uVar12 = LZCOUNT(uVar16) ^ 0x3fU;
                        if (uVar13 <= (LZCOUNT(uVar16) ^ 0x3fU) && uVar11 != 0) {
                            uVar12 = uVar13;
                        }
                        uVar10 = uVar10 & (-2L << (uVar12 & 0x3f) ^ 0xffffffffffffffffU);
                        while( true ) {
                            if (uVar10 == 0) goto code_r0x080094ac;
                            iVar15 = 1L << ((LZCOUNT(uVar10) ^ 0x3fU) & 0x3f);
                            uVar4 = sym.__arm_lpae_map(iVar6 + -0x68,arg2_00,uVar5,iVar15);
                            if (uVar4 != 0) {
                                uVar16 = uVar4;
                                goto code_r0x080093c4;
                            }
                            uStack_118 = uVar5 + iVar15;
                            uVar16 = uVar16 - iVar15;
                            *in_x6 = *in_x6 + iVar15;
                            if (uVar16 == 0) break;
                            arg2_00 = iVar15 + arg2_00;
                            uVar10 = uStack_118 | arg2_00;
                            uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                            uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                            uVar12 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
                            uVar5 = LZCOUNT(uVar16) ^ 0x3fU;
                            if (uVar12 <= (LZCOUNT(uVar16) ^ 0x3fU) && uVar10 != 0) {
                                uVar5 = uVar12;
                            }
                            uVar10 = *(iVar6 + -0x50) & (-2L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
                            uVar5 = uStack_118;
                        }
                    }
                    goto code_r0x08009390;
                }
                _printk(0x800109c,arg2_00,&uStack_118,uVar16);
                uVar16 = 0xffffffea;
code_r0x080093c4:
                _raw_spin_unlock_irqrestore(iVar6 + 0x60,uVar7);
                goto code_r0x0800943c;
            }
            uVar16 = uVar16 + *(puVar8 + 0xc);
            uVar9 = uVar5;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 < arg4) {
            puVar8 = sg_next(puVar8);
        }
        uVar5 = uVar9;
    } while (uVar14 <= arg4);
    _raw_spin_unlock_irqrestore(iVar6 + 0x60,uVar7);
    DataSynchronizationBarrier(3,2,0);
    uVar16 = 0;
code_r0x0800943c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_110) {
        return uVar16;
    }
    __stack_chk_fail();
code_r0x080094ac:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x80094b0);
    (*pcVar3)();
}


// ===== sym.arm_lpae_map_sg @ 0x08009070 (size 1088) =====

//WARNING: Removing unreachable block (ram,0x08009220)
//WARNING: Removing unreachable block (ram,0x0800922c)
//WARNING: Removing unreachable block (ram,0x08009284)
//WARNING: Removing unreachable block (ram,0x08009238)
//WARNING: Removing unreachable block (ram,0x08009288)
//WARNING: Removing unreachable block (ram,0x080093bc)
//WARNING: Removing unreachable block (ram,0x080092b0)
//WARNING: Removing unreachable block (ram,0x080092cc)
//WARNING: Removing unreachable block (ram,0x080092dc)
//WARNING: Removing unreachable block (ram,0x08009310)
//WARNING: Removing unreachable block (ram,0x080093e8)
//WARNING: Removing unreachable block (ram,0x080093f0)
//WARNING: Removing unreachable block (ram,0x08009428)

int sym.arm_lpae_map_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t arg2_00;
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t in_w4;
    int64_t *in_x6;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint64_t uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_70 = *(iVar9 + 0x5e0);
    *in_x6 = 0;
    uVar3 = _raw_spin_lock_irqsave();
    uVar10 = 0;
    uVar8 = 0;
    uVar11 = 0;
    do {
        uVar12 = *(arg3 + 8) + ((*arg3 & 0x3fffffffffffffc) + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                 0x8000000000;
        if (uVar10 == 0) {
code_r0x08009390:
            uVar10 = *(arg3 + 0xc);
        }
        else {
            if (uVar12 != uVar11 + uVar10) {
                iVar9 = *in_x6;
                arg2_00 = iVar9 + arg2;
                uStack_78 = uVar11;
                sym.arm_lpae_prot_to_pte(arg1 + -0x68,in_w4);
                uVar4 = *(arg1 + -0x50);
                uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
                uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                uVar5 = arg2_00 | uVar11;
                if (((1 << (LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) & 0x1f)) - 1 & (uVar5 | uVar10)) == 0) {
                    if ((arg2_00 + (uVar10 - 1) >> (*(arg1 + -0x48) & 0x3f) != (*(arg1 + -0x58) << 0x3a) >> 0x3f) ||
                       (uVar11 + (uVar10 - 1) >> (*(arg1 + -0x44) & 0x3f) != 0)) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x800,0x8009484);
                        (*pcVar1)();
                    }
                    if ((in_w4 & 3) == 0) {
                        *in_x6 = iVar9 + uVar10;
                    }
                    else {
                        uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                        uVar7 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
                        uVar6 = LZCOUNT(uVar10) ^ 0x3fU;
                        if (uVar7 <= (LZCOUNT(uVar10) ^ 0x3fU) && uVar5 != 0) {
                            uVar6 = uVar7;
                        }
                        uVar4 = uVar4 & (-2L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
                        while( true ) {
                            if (uVar4 == 0) goto code_r0x080094ac;
                            iVar9 = 1L << ((LZCOUNT(uVar4) ^ 0x3fU) & 0x3f);
                            iVar2 = sym.__arm_lpae_map(arg1 + -0x68,arg2_00,uVar11,iVar9);
                            if (iVar2 != 0) goto code_r0x080093c4;
                            uStack_78 = uVar11 + iVar9;
                            uVar10 = uVar10 - iVar9;
                            *in_x6 = *in_x6 + iVar9;
                            if (uVar10 == 0) break;
                            arg2_00 = iVar9 + arg2_00;
                            uVar4 = uStack_78 | arg2_00;
                            uVar11 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
                            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
                            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                            uVar6 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
                            uVar11 = LZCOUNT(uVar10) ^ 0x3fU;
                            if (uVar6 <= (LZCOUNT(uVar10) ^ 0x3fU) && uVar4 != 0) {
                                uVar11 = uVar6;
                            }
                            uVar4 = *(arg1 + -0x50) & (-2L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
                            uVar11 = uStack_78;
                        }
                    }
                    goto code_r0x08009390;
                }
                _printk(0x800109c,arg2_00,&uStack_78,uVar10);
                iVar2 = -0x16;
code_r0x080093c4:
                _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar3);
                goto code_r0x0800943c;
            }
            uVar10 = uVar10 + *(arg3 + 0xc);
            uVar12 = uVar11;
        }
        uVar8 = uVar8 + 1;
        if (uVar8 < arg4) {
            arg3 = sg_next(arg3);
        }
        uVar11 = uVar12;
    } while (uVar8 <= arg4);
    _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar3);
    DataSynchronizationBarrier(3,2,0);
    iVar2 = 0;
code_r0x0800943c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_70) {
        return iVar2;
    }
    __stack_chk_fail();
code_r0x080094ac:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80094b0);
    (*pcVar1)();
}


// ===== sym.arm_lpae_unmap @ 0x080094b0 (size 44) =====

void sym.arm_lpae_unmap(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_lpae_unmap_pages(arg1,arg2,arg3,1);
    return;
}


// ===== sym.arm_lpae_unmap_pages @ 0x080094dc (size 328) =====

uint64_t sym.arm_lpae_unmap_pages(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t in_x4;
    int64_t iVar5;
    int iVar6;
    uint64_t uVar7;
    int iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    code *pcVar10;
    int iVar11;
    int iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    
    uVar3 = arg3;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar5 = *(iVar5 + 0x5e0);
    if (((uVar3 == 0) || (arg4 == 0)) || ((*(arg1 + -0x50) & uVar3) != uVar3)) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x800,0x80095d8);
        (*pcVar10)();
    }
    if (arg2 >> (*(arg1 + -0x48) & 0x3f) != (*(arg1 + -0x58) << 0x3a) >> 0x3f) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x800,0x800961c);
        (*pcVar10)();
    }
    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x60);
    uVar3 = sym.__arm_lpae_unmap(arg1 + -0x68,in_x4,arg2,uVar3);
    pcVar10 = *(*(arg1 + 0x50) + 8);
    uVar9 = *(arg1 + -0x60);
    __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar10,0x8000a20);
    (*pcVar10)(uVar9);
    _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iVar5) {
        return uVar3;
    }
    auVar13 = __stack_chk_fail();
    iVar4 = auVar13._0_8_;
    *extraout_x18 = sym.arm_lpae_iova_to_phys;
    iVar5 = iVar4 + 0x60;
    uVar3 = *(iVar4 + 0x40);
    iVar11 = *(iVar4 + 0x34);
    uVar2 = _raw_spin_lock_irqsave(iVar5);
    if (uVar3 != 0) {
        iVar12 = 4 - iVar11;
        uVar7 = *(iVar4 + 0x38);
        do {
            iVar6 = uVar7;
            if (iVar11 == *(iVar4 + 0x34)) {
                iVar8 = *(iVar4 + 0x30) - iVar6;
            }
            else {
                iVar8 = 0;
            }
            uVar3 = *(uVar3 + (auVar13._8_8_ >> (iVar12 * iVar6 + 3 & 0x3f) & ~(-1 << (iVar8 + iVar6 & 0x1f))) * 8);
            if (uVar3 == 0) break;
            uVar7 = 3;
            if (*(iVar4 + -0x68) == 5 || iVar11 != 3) {
                uVar7 = 1;
            }
            if ((uVar3 & 3) == uVar7) {
                _raw_spin_unlock_irqrestore(iVar5,uVar2);
                uVar7 = uVar3 & 0xfffffffff000;
                if (0xffff < 8L << (*(iVar4 + 0x38) & 0x3f)) {
                    uVar7 = (uVar3 & 0xfffffffff000) * 0x1000000001 & 0xfffffffff0000;
                }
                return auVar13._8_8_ & (-1L << (*(iVar4 + 0x38) * iVar12 + 3 & 0x3f) ^ 0xffffffffffffffffU) | uVar7;
            }
            uVar7 = *(iVar4 + 0x38);
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + -1;
            uVar1 = uVar3 & 0xfffffffff000;
            if (0xffff < 8L << (uVar7 & 0x3f)) {
                uVar1 = (uVar3 & 0xfffffffff000) * 0x1000000001 & 0x7fffff0000;
            }
            uVar3 = uVar1 - _gen_pool_first_fit_order_align | 0xffffff8000000000;
        } while (iVar11 < 4);
    }
    _raw_spin_unlock_irqrestore(iVar5,uVar2);
    return 0;
}


// ===== sym.arm_lpae_iova_to_phys @ 0x08009624 (size 376) =====

uint64_t sym.arm_lpae_iova_to_phys(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int iVar4;
    uint64_t uVar5;
    int iVar6;
    ulong *in_x18;
    int iVar7;
    int iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x60;
    uVar9 = *(arg1 + 0x40);
    iVar7 = *(arg1 + 0x34);
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    if (uVar9 != 0) {
        iVar8 = 4 - iVar7;
        uVar5 = *(arg1 + 0x38);
        do {
            iVar4 = uVar5;
            if (iVar7 == *(arg1 + 0x34)) {
                iVar6 = *(arg1 + 0x30) - iVar4;
            }
            else {
                iVar6 = 0;
            }
            uVar9 = *(uVar9 + (arg2 >> (iVar8 * iVar4 + 3 & 0x3f) & ~(-1 << (iVar6 + iVar4 & 0x1f))) * 8);
            if (uVar9 == 0) break;
            uVar5 = 3;
            if (*(arg1 + -0x68) == 5 || iVar7 != 3) {
                uVar5 = 1;
            }
            if ((uVar9 & 3) == uVar5) {
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                uVar5 = uVar9 & 0xfffffffff000;
                if (0xffff < 8L << (*(arg1 + 0x38) & 0x3f)) {
                    uVar5 = (uVar9 & 0xfffffffff000) * 0x1000000001 & 0xfffffffff0000;
                }
                return arg2 & (-1L << (*(arg1 + 0x38) * iVar8 + 3 & 0x3f) ^ 0xffffffffffffffffU) | uVar5;
            }
            uVar5 = *(arg1 + 0x38);
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + -1;
            uVar2 = uVar9 & 0xfffffffff000;
            if (0xffff < 8L << (uVar5 & 0x3f)) {
                uVar2 = (uVar9 & 0xfffffffff000) * 0x1000000001 & 0x7fffff0000;
            }
            uVar9 = uVar2 - _gen_pool_first_fit_order_align | 0xffffff8000000000;
        } while (iVar7 < 4);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
    return 0;
}


// ===== sym.arm_lpae_prot_to_pte @ 0x080097a0 (size 232) =====

uint64_t sym.arm_lpae_prot_to_pte(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar2 = *arg1;
    if ((uVar2 == 0) || (uVar2 == 0xfffffffe)) {
        uVar4 = 0x880;
        if ((arg2 & 3) != 1) {
            uVar4 = 0x800;
        }
        uVar3 = uVar4 | 0x40;
        if ((arg2 & 0x20) != 0) {
            uVar3 = uVar4;
        }
    }
    else {
        uVar3 = (arg2 & 3) << 6;
    }
    if ((uVar2 | 2) == 3) {
        if ((arg2 >> 4 & 1) == 0) {
            uVar4 = 0x14;
            if ((arg2 & 4) != 0) {
                uVar4 = 0x3c;
            }
            goto code_r0x08009838;
        }
    }
    else {
        if ((arg2 >> 4 & 1) != 0) {
            uVar4 = 8;
            goto code_r0x08009838;
        }
        if (((arg2 ^ 0xffffffff) & 0x84) == 0) {
            uVar4 = 0x14;
            goto code_r0x08009838;
        }
        if ((arg2 >> 2 & 1) == 0) {
            if ((arg2 >> 6 & 1) == 0) {
                uVar4 = arg2 >> 3 & 0x10;
            }
            else {
                uVar4 = 0xc;
            }
            goto code_r0x08009838;
        }
    }
    uVar4 = 4;
code_r0x08009838:
    uVar1 = 0x200;
    if ((arg2 & 4) != 0) {
        uVar1 = 0x300;
    }
    uVar4 = uVar3 | uVar1 | uVar4;
    if ((arg2 & 8) != 0) {
        uVar4 = uVar4 | 0x60000000000000;
    }
    uVar4 = uVar4 | *(arg1 + 0x10) << 5 & 0x20;
    if (uVar2 != 5) {
        uVar4 = uVar4 | 0x400;
    }
    return uVar4;
}


// ===== sym.__arm_lpae_map @ 0x08009888 (size 1276) =====

ulong sym.__arm_lpae_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *arg2_00;
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong uVar6;
    int in_w4;
    int64_t in_x5;
    uint32_t in_w6;
    int64_t in_x7;
    uint64_t uVar7;
    int iVar8;
    ulong *in_x18;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    int64_t in_stack_00000000;
    int64_t *in_stack_00000008;
    uint32_t in_stack_00000010;
    ulong *in_stack_00000018;
    int64_t *in_stack_00000020;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0xa0);
    uVar7 = uVar2 * (4 - in_w6) + 3;
    iVar9 = 1L << (uVar7 & 0x3f);
    if (*(arg1 + 0x9c) == in_w6) {
        iVar8 = *(arg1 + 0x98) - uVar2;
    }
    else {
        iVar8 = 0;
    }
    uVar11 = 8L << (uVar2 & 0x3f);
    uVar1 = arg2 >> (uVar7 & 0x3f) & (-1 << (iVar8 + uVar2 & 0x1f) ^ 0xffffffffU);
    arg2_00 = in_x7 + uVar1 * 8;
    if (iVar9 == arg4) {
        if (in_stack_00000008 == NULL) {
            iVar8 = (uVar11 >> 3) - uVar1;
            if (iVar8 <= in_w4) {
                in_w4 = iVar8;
            }
            uVar6 = sym.arm_lpae_init_pte(arg1,arg3,in_x5,in_w6);
            if (in_stack_00000020 == NULL) {
                return uVar6;
            }
            if (uVar6 != 0) {
                return uVar6;
            }
            *in_stack_00000020 = *in_stack_00000020 + in_w4 * arg4;
            return uVar6;
        }
        if (in_w6 == 3) {
            iVar9 = 1L << (uVar2 * 2 + 3 & 0x3f);
            if ((in_stack_00000008[2] != 0) && (*(arg1 + 0x28) == '\0')) {
                iVar3 = (in_stack_00000008[4] << 8) >> 8;
                uVar7 = iVar3 + 0x8000000000;
                iVar5 = uVar7 + _gen_pool_first_fit_order_align;
                if (uVar7 >> 0x26 != 0) {
                    iVar5 = iVar3 - _of_n_addr_cells;
                }
                dma_sync_single_for_device(*(arg1 + 0x38),iVar5,*(in_stack_00000008 + 5) << 3,1);
            }
            in_stack_00000008[2] = in_x7;
            in_stack_00000008[3] = in_stack_00000000;
            *(in_stack_00000008 + 1) = arg4;
            in_stack_00000008[4] = arg2_00;
            *(in_stack_00000008 + 5) = 1;
            *in_stack_00000008 = (-iVar9 & arg2) + iVar9;
        }
        else {
            if ((in_stack_00000008[2] != 0) && (*(arg1 + 0x28) == '\0')) {
                iVar5 = (in_stack_00000008[4] << 8) >> 8;
                uVar7 = iVar5 + 0x8000000000;
                iVar9 = uVar7 + _gen_pool_first_fit_order_align;
                if (uVar7 >> 0x26 != 0) {
                    iVar9 = iVar5 - _of_n_addr_cells;
                }
                dma_sync_single_for_device(*(arg1 + 0x38),iVar9,*(in_stack_00000008 + 5) << 3,1);
            }
            in_stack_00000008[4] = 0;
            in_stack_00000008[5] = 0;
            in_stack_00000008[2] = 0;
            in_stack_00000008[3] = 0;
            *in_stack_00000008 = 0;
            in_stack_00000008[1] = 0;
        }
        uVar6 = sym.arm_lpae_init_pte(arg1,arg3,in_x5,in_w6);
        if (in_stack_00000020 == NULL) {
            return uVar6;
        }
        if (uVar6 != 0) {
            return uVar6;
        }
        *in_stack_00000020 = *in_stack_00000020 + arg4;
        return uVar6;
    }
    if (2 < in_w6) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x8009d84);
        (*pcVar4)();
    }
    uVar7 = *arg2_00;
    if (uVar7 == 0) {
        _raw_spin_unlock_irqrestore(arg1 + 200,*in_stack_00000018);
        iVar5 = sym.__arm_lpae_alloc_pages(arg1,uVar11,in_stack_00000010,arg1 + 0x10);
        uVar6 = _raw_spin_lock_irqsave(arg1 + 200);
        *in_stack_00000018 = uVar6;
        if (iVar5 == 0) {
            return 0xfffffff4;
        }
        uVar7 = sym.arm_lpae_install_table(iVar5,arg2_00,0,arg1 + 0x10);
        if (uVar7 == 0) {
            pcVar4 = **(arg1 + 0xc0);
            uVar6 = *(arg1 + 8);
            __cfi_slowpath_diag(0xf6dcb37efa268262,pcVar4,0x80009e0);
            (*pcVar4)(uVar6,iVar5,-iVar9 & arg2,iVar9);
            goto code_r0x08009d2c;
        }
        if (*(arg1 + 0x28) == '\0') {
            iVar5 = (iVar5 << 8) >> 8;
            uVar10 = iVar5 + 0x8000000000;
            iVar9 = _gen_pool_first_fit_order_align + uVar10;
            if (uVar10 >> 0x26 != 0) {
                iVar9 = iVar5 - _of_n_addr_cells;
            }
            dma_unmap_page_attrs(*(arg1 + 0x38),iVar9,uVar11,1,0);
        }
        else {
            uVar10 = ((iVar5 << 8) >> 8) + 0x8000000000;
        }
        sym.free_page_to_pool.llvm.8230901766045713888((uVar10 >> 6 & 0x3ffffffffffffc0) - 0x200000000);
    }
    else if ((*(arg1 + 0x28) == '\0') && ((uVar7 >> 0x37 & 1) == 0)) {
        iVar5 = arg2_00 * 0x100 >> 8;
        uVar11 = iVar5 + 0x8000000000;
        iVar9 = _gen_pool_first_fit_order_align + uVar11;
        if (uVar11 >> 0x26 != 0) {
            iVar9 = iVar5 - _of_n_addr_cells;
        }
        dma_sync_single_for_device(*(arg1 + 0x38),iVar9,8,1);
    }
    if ((uVar7 & 3) == 1) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x8009cf4);
        (*pcVar4)();
    }
code_r0x08009d2c:
    uVar6 = sym.__arm_lpae_map(arg1,arg2,arg3,arg4);
    return uVar6;
}


// ===== sym.arm_lpae_init_pte @ 0x08009d8c (size 432) =====

ulong sym.arm_lpae_init_pte(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint32_t in_w4;
    uint8_t *in_x5;
    uint64_t *in_x6;
    uint32_t in_w7;
    uint64_t uVar7;
    uint8_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar12 = in_w4;
    uVar9 = uVar12;
    puVar8 = in_x5;
    if (0 < in_w4) {
        do {
            if ((*puVar8 & 1) != 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8009e1c);
                (*pcVar6)();
            }
            uVar9 = uVar9 - 1;
            puVar8 = puVar8 + 8;
        } while (uVar9 != 0);
    }
    uVar9 = 3;
    if (*arg1 == 5 || arg4 != 3) {
        uVar9 = 1;
    }
    if (0 < in_w4) {
        uVar9 = uVar9 | arg3;
        uVar7 = *(arg1 + 0xa0) * (4 - arg4) + 3;
        if (in_w4 == 1) {
            uVar10 = 0;
        }
        else {
            uVar11 = 0;
            uVar10 = uVar12 & 0xfffffffe;
            do {
                uVar3 = (uVar11 << (uVar7 & 0x3f)) + arg2;
                uVar4 = (uVar11 + 1 << (uVar7 & 0x3f)) + arg2;
                iVar1 = uVar11 * 8;
                uVar11 = uVar11 + 2;
                *(in_x5 + iVar1) = uVar9 | (uVar3 | uVar3 >> 0x24) & 0xfffffffff000;
                *(in_x5 + iVar1 + 8) = uVar9 | (uVar4 | uVar4 >> 0x24) & 0xfffffffff000;
            } while (uVar11 != uVar10);
            if (uVar10 == uVar12) goto code_r0x08009e94;
        }
        do {
            uVar11 = (uVar10 << (uVar7 & 0x3f)) + arg2;
            *(in_x5 + uVar10 * 8) = uVar9 | (uVar11 | uVar11 >> 0x24) & 0xfffffffff000;
            uVar10 = uVar10 + 1;
        } while (uVar12 != uVar10);
    }
code_r0x08009e94:
    if (((in_w7 & 1) != 0) && (*(arg1 + 0x28) == '\0')) {
        iVar5 = (in_x5 << 8) >> 8;
        uVar9 = iVar5 + 0x8000000000;
        iVar1 = _gen_pool_first_fit_order_align + uVar9;
        if (uVar9 >> 0x26 != 0) {
            iVar1 = iVar5 - _of_n_addr_cells;
        }
        dma_sync_single_for_device(*(arg1 + 0x38),iVar1,-(in_w4 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3,1);
    }
    if (in_x6 != NULL) {
        uVar9 = *in_x6;
        uVar2 = (uVar9 >> 0x2a & 0x1c00 | uVar9 >> 2 & 0x3ff) + in_w4;
        *in_x6 = (uVar2 & 0x3ff) << 2 | (uVar2 >> 10 & 7) << 0x34 | uVar9 & 0xff8ffffffffff003;
    }
    return 0;
}


// ===== sym.arm_lpae_install_table @ 0x08009f3c (size 452) =====

uint64_t sym.arm_lpae_install_table(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    char cVar4;
    bool bVar5;
    uint32_t in_w4;
    int64_t in_x5;
    ulong *in_x6;
    ulong *in_x18;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_unlock_irqrestore(in_x5 + 200,*in_x6);
    pcVar9 = *(*(in_x5 + 0xb8) + 0x10);
    uVar7 = *(in_x5 + 8);
    __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar9,0x80009a0);
    (*pcVar9)(uVar7);
    uVar7 = _raw_spin_lock_irqsave(in_x5 + 200);
    iVar2 = (arg1 << 8) >> 8;
    *in_x6 = uVar7;
    uVar6 = iVar2 + 0x8000000000;
    uVar8 = _gen_pool_first_fit_order_align + uVar6;
    if (uVar6 >> 0x26 != 0) {
        uVar8 = iVar2 - _of_n_addr_cells;
    }
    uVar6 = 3;
    if ((*arg4 & 1) != 0) {
        uVar6 = 0x8000000000000003;
    }
    DataMemoryBarrier(0,2);
    uVar6 = uVar8 & 0xff8ffffffffff000 | uVar6 | (in_w4 & 0x3ff) << 2 | (in_w4 >> 10 & 7) << 0x34;
    Hint_Prefetch(arg2,2,0,1);
    do {
        uVar8 = *arg2;
        if (uVar8 != arg3) break;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(arg2,0x10);
        if (bVar5) {
            *arg2 = uVar6;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if ((*(arg4 + 0x18) == '\0') && ((uVar8 >> 0x37 & 1) == 0)) {
        iVar3 = (arg2 << 8) >> 8;
        uVar1 = iVar3 + 0x8000000000;
        iVar2 = _gen_pool_first_fit_order_align + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iVar2 = iVar3 - _of_n_addr_cells;
        }
        dma_sync_single_for_device(*(arg4 + 0x28),iVar2,8,1);
        if (uVar8 == arg3) {
            *arg2 = uVar6 | 0x80000000000000;
        }
    }
    return uVar8;
}


// ===== sym.__arm_lpae_unmap @ 0x0800a100 (size 2048) =====

int64_t sym.__arm_lpae_unmap(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t in_w4;
    int in_w5;
    int64_t in_x6;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint32_t uVar12;
    ulong uVar13;
    uint64_t uVar14;
    uint64_t *arg2_00;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_w5 == 4) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x800a8e8);
        (*pcVar3)();
    }
    uVar12 = *(arg1 + 0xa0);
    if (*(arg1 + 0x9c) == in_w5) {
        iVar6 = *(arg1 + 0x98) - uVar12;
    }
    else {
        iVar6 = 0;
    }
    uVar9 = arg3 >> (uVar12 * (4 - in_w5) + 3 & 0x3f) & (-1 << (iVar6 + uVar12 & 0x1f) ^ 0xffffffffU);
    arg2_00 = in_x6 + uVar9 * 8;
    uVar10 = *arg2_00;
    if (uVar10 == 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x800a8f4);
        (*pcVar3)();
    }
    uVar2 = *(arg1 + 0xa0);
    iVar6 = (8L << (uVar12 & 0x3f)) >> 3;
    if (1L << (uVar2 * (4 - in_w5) + 3 & 0x3f) == arg4) {
        uVar12 = iVar6 - uVar9;
        if (uVar12 <= in_w4) {
            in_w4 = uVar12;
        }
        if (in_w4 < 1) {
            in_w4 = 0;
        }
        else {
            uVar12 = 0;
            iVar15 = uVar9 * 0x800 + in_x6 * 0x100;
            do {
                uVar10 = *arg2_00;
                if (uVar10 == 0) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x800,0x800a8dc);
                    (*pcVar3)();
                }
                *arg2_00 = 0;
                if (*(arg1 + 0x28) == '\0') {
                    uVar4 = (iVar15 >> 8) + 0x8000000000;
                    iVar17 = _gen_pool_first_fit_order_align + uVar4;
                    if (uVar4 >> 0x26 != 0) {
                        iVar17 = (iVar15 >> 8) - _of_n_addr_cells;
                    }
                    dma_sync_single_for_device(*(arg1 + 0x38),iVar17,8,1);
                }
                uVar4 = 3;
                if (*arg1 == 5 || in_w5 != 3) {
                    uVar4 = 1;
                }
                if ((uVar10 & 3) == uVar4) {
                    if ((arg2 == 0) || (*(arg2 + 0x20) == '\0')) {
                        DataMemoryBarrier(2,2);
                    }
                }
                else {
                    uVar4 = uVar10 & 0xfffffffff000;
                    if (0xffff < 8L << (*(arg1 + 0xa0) & 0x3f)) {
                        uVar4 = (uVar10 & 0xfffffffff000) * 0x1000000001 & 0x7fffff0000;
                    }
                    sym.__arm_lpae_free_pgtable
                              (arg1,in_w5 + 1,uVar4 - _gen_pool_first_fit_order_align | 0xffffff8000000000,1);
                }
                arg2_00 = arg2_00 + 1;
                uVar12 = uVar12 + 1;
                iVar15 = iVar15 + 0x800;
            } while (in_w4 != uVar12);
        }
        arg4 = in_w4 * arg4;
    }
    else if ((in_w5 == 2) && ((uVar10 & 3) != 1)) {
        uVar4 = uVar10 & 0xfffffffff000;
        if (0xffff < 8L << (uVar2 & 0x3f)) {
            uVar4 = uVar10 & 0x7fffff0000;
        }
        uVar10 = uVar4 - _gen_pool_first_fit_order_align | 0xffffff8000000000;
        if (*(arg1 + 0x9c) == 3) {
            iVar7 = *(arg1 + 0x98) - uVar2;
        }
        else {
            iVar7 = 0;
        }
        uVar12 = arg3 >> (uVar2 + 3 & 0x3f) & (-1 << (iVar7 + uVar2 & 0x1f) ^ 0xffffffffU);
        uVar9 = iVar6 - uVar12;
        iVar15 = uVar10 + uVar12 * 8;
        if (uVar9 <= in_w4) {
            in_w4 = uVar9;
        }
        if (0 < in_w4) {
            memset(iVar15,0,in_w4 << 3);
        }
        if (*(arg1 + 0x28) == '\0') {
            iVar17 = _gen_pool_first_fit_order_align + iVar15 + 0x8000000000U;
            if (iVar15 + 0x8000000000U >> 0x26 != 0) {
                iVar17 = iVar15 - _of_n_addr_cells;
            }
            dma_sync_single_for_device(*(arg1 + 0x38),iVar17,-(in_w4 >> 0x1f) & 0xfffffff800000000 | in_w4 << 3,1);
        }
        uVar4 = *arg2_00;
        uVar12 = (uVar4 >> 0x2a & 0x1c00 | uVar4 >> 2 & 0x3ff) - in_w4;
        *arg2_00 = (uVar12 & 0x3ff) << 2 | (uVar12 >> 10 & 7) << 0x34 | uVar4 & 0xff8ffffffffff003;
        if ((uVar12 & 0x1fff) == 0) {
            iVar6 = *(arg1 + 0xa0);
            *arg2_00 = 0;
            iVar15 = 1L << (iVar6 * 2 + 3 & 0x3f);
            if (*(arg1 + 0x28) == '\0') {
                iVar16 = arg2_00 * 0x100 >> 8;
                uVar4 = iVar16 + 0x8000000000;
                iVar17 = _gen_pool_first_fit_order_align + uVar4;
                if (uVar4 >> 0x26 != 0) {
                    iVar17 = iVar16 - _of_n_addr_cells;
                }
                dma_sync_single_for_device(*(arg1 + 0x38),iVar17,8,1);
            }
            sym.__arm_lpae_free_pgtable(arg1,3,uVar10,1);
            pcVar3 = *(*(arg1 + 0xc0) + 8);
            uVar13 = *(arg1 + 8);
            __cfi_slowpath_diag(0xf6dcb37efa268262,pcVar3,0x8000a00);
            (*pcVar3)(uVar13,uVar10,-iVar15 & arg3,iVar15);
        }
        arg4 = in_w4 * arg4;
    }
    else {
        uVar4 = 3;
        if (*arg1 == 5 || in_w5 != 3) {
            uVar4 = 1;
        }
        if ((uVar10 & 3) == uVar4) {
            iVar6 = in_w5 + 1;
            if (iVar6 == 4) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x800a900);
                (*pcVar3)();
            }
            uVar4 = 8L << (uVar2 & 0x3f);
            iVar15 = sym.__arm_lpae_alloc_pages(arg1,uVar4,0xa20,arg1 + 0x10);
            if (iVar15 == 0) {
                return 0;
            }
            iVar17 = 1L << (uVar2 * (3 - in_w5) + 3 & 0x3f);
            uVar12 = *(arg1 + 0xa0);
            iVar7 = uVar4 >> 3;
            if (iVar17 == arg4) {
                if (*(arg1 + 0x9c) == iVar6) {
                    iVar8 = *(arg1 + 0x98) - uVar12;
                }
                else {
                    iVar8 = 0;
                }
                uVar9 = arg3 >> (uVar12 * (3 - in_w5) + 3 & 0x3f) & (-1 << (iVar8 + uVar12 & 0x1f) ^ 0xffffffffU);
                uVar2 = iVar7 - uVar9;
                if (uVar2 <= in_w4) {
                    in_w4 = uVar2;
                }
            }
            else {
                uVar9 = 0xffffffff;
                in_w4 = 0;
            }
            if (0 < iVar7) {
                uVar14 = 0;
                iVar16 = iVar15 << 8;
                uVar5 = uVar10 & 0xfffffffff000;
                if (0xffff < 8L << (uVar12 & 0x3f)) {
                    uVar5 = uVar5 + (uVar5 << 0x24) & 0xfffffffff0000;
                }
                do {
                    uVar11 = 3;
                    if ((uVar14 < uVar9) || (in_w4 + uVar9 <= uVar14)) {
                        if (*arg1 == 5 || iVar6 != 3) {
                            uVar11 = 1;
                        }
                        *(iVar15 + uVar14 * 8) =
                             (uVar5 | uVar5 >> 0x24) & 0xfffffffff000 | uVar10 & 0x60000000000ffc | uVar11;
                        if (*(arg1 + 0x28) == '\0') {
                            uVar11 = (iVar16 >> 8) + 0x8000000000;
                            iVar1 = _gen_pool_first_fit_order_align + uVar11;
                            if (uVar11 >> 0x26 != 0) {
                                iVar1 = (iVar16 >> 8) - _of_n_addr_cells;
                            }
                            dma_sync_single_for_device(*(arg1 + 0x38),iVar1,8,1);
                        }
                    }
                    uVar14 = uVar14 + 1;
                    uVar5 = uVar5 + iVar17;
                    iVar16 = iVar16 + 0x800;
                } while ((uVar4 >> 3 & 0xffffffff) != uVar14);
            }
            uVar14 = sym.arm_lpae_install_table(iVar15,arg2_00,uVar10,arg1 + 0x10);
            if (uVar14 == uVar10) {
                if (-1 < uVar9) {
                    pcVar3 = **(arg1 + 0xc0);
                    iVar17 = 1L << (*(arg1 + 0xa0) * (2 - in_w5) + 3 & 0x3f);
                    uVar13 = *(arg1 + 8);
                    __cfi_slowpath_diag(0xf6dcb37efa268262,pcVar3,0x80009e0);
                    (*pcVar3)(uVar13,iVar15,0xdeaU - iVar17 & arg3,iVar17);
                    return in_w4 * arg4;
                }
            }
            else {
                if (*(arg1 + 0x28) == '\0') {
                    iVar17 = (iVar15 << 8) >> 8;
                    uVar10 = iVar17 + 0x8000000000;
                    iVar15 = _gen_pool_first_fit_order_align + uVar10;
                    if (uVar10 >> 0x26 != 0) {
                        iVar15 = iVar17 - _of_n_addr_cells;
                    }
                    dma_unmap_page_attrs(*(arg1 + 0x38),iVar15,uVar4,1,0);
                }
                else {
                    uVar10 = ((iVar15 << 8) >> 8) + 0x8000000000;
                }
                sym.free_page_to_pool.llvm.8230901766045713888((uVar10 >> 6 & 0x3ffffffffffffc0) - 0x200000000);
                if ((~uVar14 & 3) != 0) {
                    return 0;
                }
            }
        }
        arg4 = sym.__arm_lpae_unmap(arg1,arg2,arg3,arg4);
    }
    return arg4;
}


// ===== sym.__arm_lpae_free_pgtable @ 0x0800a90c (size 536) =====

void sym.__arm_lpae_free_pgtable(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    uint64_t *puVar9;
    code *pcVar11;
    ulong unaff_x30;
    uint64_t *puVar10;
    
    *in_x18 = unaff_x30;
    uVar8 = *(arg1 + 8);
    iVar6 = 0x98;
    if (*(arg1 + 0x9c) != arg2) {
        iVar6 = 0xa0;
    }
    iVar6 = 8L << (*(arg1 + iVar6) & 0x3f);
    puVar1 = arg3;
    if (arg2 != 3) {
        puVar1 = arg3 + iVar6;
    }
    if (puVar1 != arg3) {
        puVar9 = arg3;
        do {
            puVar10 = puVar9 + 1;
            uVar7 = *puVar9;
            if (uVar7 != 0) {
                uVar3 = 3;
                if (*arg1 == 5 || arg2 != 3) {
                    uVar3 = 1;
                }
                if ((uVar7 & 3) != uVar3) {
                    uVar3 = uVar7 & 0xfffffffff000;
                    if (0xffff < 8L << (*(arg1 + 0xa0) & 0x3f)) {
                        uVar3 = uVar7 & 0x7fffff0000;
                    }
                    sym.__arm_lpae_free_pgtable
                              (arg1,arg2 + 1,uVar3 - _gen_pool_first_fit_order_align | 0xffffff8000000000,arg4 & 1);
                }
            }
            puVar9 = puVar10;
        } while (puVar10 != puVar1);
    }
    if (*(arg1 + 0x28) == '\0') {
        iVar5 = (arg3 << 8) >> 8;
        uVar7 = iVar5 + 0x8000000000;
        iVar2 = _gen_pool_first_fit_order_align + uVar7;
        if (uVar7 >> 0x26 != 0) {
            iVar2 = iVar5 - _of_n_addr_cells;
        }
        dma_unmap_page_attrs(*(arg1 + 0x38),iVar2,iVar6,1,0);
    }
    if ((arg4 & 1U) == 0) {
        sym.free_page_to_pool.llvm.8230901766045713888
                  ((((arg3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000);
    }
    else {
        pcVar11 = **(arg1 + 0xb8);
        __cfi_slowpath_diag(0xf10b7dab8c45da7d,pcVar11,0x80009c0);
        (*pcVar11)(uVar8,arg3);
    }
    uVar8 = *(arg1 + 8);
    iVar4 = *(arg1 + 0xa0);
    pcVar11 = *(*(arg1 + 0xc0) + 8);
    __cfi_slowpath_diag(0xf6dcb37efa268262,pcVar11,0x8000a00);
    (*pcVar11)(uVar8,arg3,0,1L << (iVar4 * (5 - arg2) + 3 & 0x3f));
    return;
}


// ===== sym.qcom_io_pgtable_allocator_register @ 0x0800ab24 (size 360) =====

int sym.qcom_io_pgtable_allocator_register(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    uint *puVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    int iVar9;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.page_pool_xa_lock);
    iVar5 = xa_load(obj.__fast_smmu_create_mapping_sized.__key,arg1 & 0xffffffffU);
    if (iVar5 == 0) {
        iVar5 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar5 = 0x30;
        }
        puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xcc0,0x20);
        if (puVar6 == NULL) {
            iVar9 = -0xc;
        }
        else {
            *puVar6 = arg1;
            puVar6[1] = 1;
            puVar6[2] = 0;
            *(puVar6 + 4) = puVar6 + 4;
            *(puVar6 + 6) = puVar6 + 4;
            uVar7 = xa_store(obj.__fast_smmu_create_mapping_sized.__key,arg1 & 0xffffffffU,puVar6,0xcc0);
            iVar10 = uVar7 >> 2;
            iVar9 = iVar10;
            if ((uVar7 & 3) != 2 || uVar7 < 0xffffffffffffc006) {
                iVar9 = 0;
            }
            if (iVar9 < 0) {
                kfree(puVar6);
                iVar9 = iVar10;
            }
        }
        goto code_r0x0800ab8c;
    }
    puVar1 = iVar5 + 4;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar8 = 2;
code_r0x0800ac6c:
        refcount_warn_saturate(puVar1,uVar8);
    }
    else if ((uVar2 + 1 | uVar2) < 0) {
        uVar8 = 1;
        goto code_r0x0800ac6c;
    }
    iVar9 = 0;
code_r0x0800ab8c:
    mutex_unlock(obj.page_pool_xa_lock);
    return iVar9;
}


// ===== sym.qcom_io_pgtable_allocator_unregister @ 0x0800ac8c (size 192) =====

void sym.qcom_io_pgtable_allocator_unregister(int64_t arg1)

{
    int *arg1_00;
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.page_pool_xa_lock);
    iVar4 = xa_load(obj.__fast_smmu_create_mapping_sized.__key,arg1 & 0xffffffff);
    arg1_00 = iVar4 + 4;
    Hint_Prefetch(arg1_00,2,0,1);
    do {
        iVar1 = *arg1_00;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
        if (bVar3) {
            *arg1_00 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        sym.io_pgtable_pool_release(arg1_00);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(arg1_00,3);
    }
    mutex_unlock(obj.page_pool_xa_lock);
    return;
}


// ===== sym.io_pgtable_pool_release @ 0x0800ad4c (size 576) =====

void sym.io_pgtable_pool_release(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    int iVar5;
    char cVar6;
    bool bVar7;
    code *pcVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int *piVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    int64_t unaff_x25;
    ulong unaff_x30;
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    piVar11 = arg1 + -4;
    iVar5 = *piVar11;
    xa_erase(obj.__fast_smmu_create_mapping_sized.__key,iVar5);
    piVar1 = arg1 + 0xc;
    piVar13 = *piVar1;
    piVar12 = piVar13 + -1;
    if (piVar13 != piVar1 && piVar12 != NULL) {
        uVar10 = __list_del_entry_valid(piVar13);
        if ((uVar10 & 1) != 0) {
            iVar2 = *piVar13;
            piVar3 = piVar13[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        unaff_x25 = -0x2152ffffffffff00;
        *piVar13 = -0x2152ffffffffff00;
        piVar13[1] = -0x2152fffffffffede;
        goto code_r0x0800af40;
    }
    do {
        kfree(piVar11);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
code_r0x0800af40:
        Hint_Prefetch(0x80005d8,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(0x80005d8,0x10);
            if (bVar7) {
                cVar6 = ExclusiveMonitorsStatus();
                _obj.page_pool_count = _obj.page_pool_count + -1;
            }
        } while (cVar6 != '\0');
        dec_node_page_state(piVar12,0x21);
        while( true ) {
            if (iVar5 != 0) {
                iVar4 = *piVar11;
                uStack_6c = 3;
                uStack_78 = CONCAT44(iVar4,3);
                uStack_70 = 7;
                iVar9 = hyp_assign_phys((piVar12 + (_gen_pool_first_fit_order_align >> 0xc) * 8) * 0x40 + 0x8000000000,
                                        0x1000,&uStack_78,2,&uStack_6c,&uStack_70,1);
                if (iVar9 != 0) {
                    __warn_printk("failed to unassign memory from VMID: %u rc: %d\n",iVar4,iVar9);
    //WARNING: Does not return
                    pcVar8 = SoftwareBreakpoint(0x800,0x800af24);
                    (*pcVar8)();
                }
            }
            __free_pages(piVar12,0);
            piVar12 = NULL;
            if (*piVar1 != piVar1) {
                piVar12 = *piVar1 + -1;
            }
            if (piVar12 == NULL) break;
            uVar10 = __list_del_entry_valid(piVar12 + 1);
            if ((uVar10 & 1) != 0) {
                iVar2 = piVar12[1];
                piVar13 = piVar12[2];
                *(iVar2 + 8) = piVar13;
                *piVar13 = iVar2;
            }
            piVar12[1] = unaff_x25;
            piVar12[2] = unaff_x25 + 0x22;
            Hint_Prefetch(0x80005d8,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(0x80005d8,0x10);
                if (bVar7) {
                    cVar6 = ExclusiveMonitorsStatus();
                    _obj.page_pool_count = _obj.page_pool_count + -1;
                }
            } while (cVar6 != '\0');
            dec_node_page_state(piVar12,0x21);
        }
    } while( true );
}


// ===== sym.qcom_io_pgtable_alloc_page @ 0x0800af8c (size 288) =====

int64_t sym.qcom_io_pgtable_alloc_page(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_50;
    uint uStack_48;
    int iStack_44;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar4 = arg1;
    if ((iVar4 == 0) || ((arg2 >> 10 & 1) != 0)) {
        iVar5 = sym.alloc_page_from_pool(arg1 & 0xffffffff);
        if (iVar5 == 0) {
            uVar2 = tpidr_el1;
            iVar5 = __alloc_pages(uVar2,arg2 & 0xffffffff,0,0,0);
            if (iVar5 != 0) {
                if (iVar4 != 0) {
                    uStack_3c = 3;
                    uStack_50 = 0x400000006;
                    _uStack_48 = CONCAT44(iVar4,3);
                    iVar4 = hyp_assign_phys((iVar5 + (_gen_pool_first_fit_order_align >> 0xc) * 0x40) * 0x40 +
                                            0x8000000000,0x1000,&uStack_3c,1,&uStack_48,&uStack_50,2);
                    if (iVar4 != 0) {
                        __warn_printk("failed to assign memory to VMID: %u rc:%d\n",arg1 & 0xffffffff,iVar4);
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x800b0a0);
                        (*pcVar3)();
                    }
                }
                *(iVar5 + 0x28) = arg1 & 0xffffffff;
            }
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) {
            return iVar5;
        }
        __stack_chk_fail();
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x800b0ac);
    (*pcVar3)();
}


// ===== sym.alloc_page_from_pool @ 0x0800b0b0 (size 260) =====

int64_t sym.alloc_page_from_pool(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = xa_load(obj.__fast_smmu_create_mapping_sized.__key,arg1 & 0xffffffff);
    uVar6 = _raw_spin_lock_irqsave(iVar5 + 8);
    piVar8 = *(iVar5 + 0x10);
    iVar1 = 0;
    if (piVar8 != iVar5 + 0x10) {
        iVar1 = piVar8 + -1;
    }
    if (iVar1 != 0) {
        uVar7 = __list_del_entry_valid(iVar1 + 8);
        if ((uVar7 & 1) != 0) {
            iVar2 = *(iVar1 + 8);
            piVar8 = *(iVar1 + 0x10);
            *(iVar2 + 8) = piVar8;
            *piVar8 = iVar2;
        }
        *(iVar1 + 8) = 0xdead000000000100;
        *(iVar1 + 0x10) = 0xdead000000000122;
        Hint_Prefetch(0x80005d8,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(0x80005d8,0x10);
            if (bVar4) {
                cVar3 = ExclusiveMonitorsStatus();
                _obj.page_pool_count = _obj.page_pool_count + -1;
            }
        } while (cVar3 != '\0');
        dec_node_page_state(iVar1,0x21);
    }
    _raw_spin_unlock_irqrestore(iVar5 + 8,uVar6);
    return iVar1;
}


// ===== sym.qcom_io_pgtable_free_page @ 0x0800b1b4 (size 36) =====

void sym.qcom_io_pgtable_free_page(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.free_page_to_pool.llvm.8230901766045713888(arg1);
    return;
}


// ===== sym.free_page_to_pool.llvm.8230901766045713888 @ 0x0800b1d8 (size 272) =====

void sym.free_page_to_pool.llvm.8230901766045713888(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = xa_load(obj.__fast_smmu_create_mapping_sized.__key,*(arg1 + 0x28));
    clear_page((arg1 & 0x3ffffffffffc0U) << 6 | 0xff00000000000000);
    uVar5 = _raw_spin_lock_irqsave(iVar4 + 8);
    piVar7 = iVar4 + 0x10;
    iVar8 = *piVar7;
    iVar1 = arg1 + 8;
    uVar6 = __list_add_valid(iVar1,piVar7,iVar8);
    if ((uVar6 & 1) != 0) {
        *(iVar8 + 8) = iVar1;
        *(arg1 + 8) = iVar8;
        *(arg1 + 0x10) = piVar7;
        *piVar7 = iVar1;
    }
    Hint_Prefetch(0x80005d8,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(0x80005d8,0x10);
        if (bVar3) {
            cVar2 = ExclusiveMonitorsStatus();
            _obj.page_pool_count = _obj.page_pool_count + 1;
        }
    } while (cVar2 != '\0');
    inc_node_page_state(arg1,0x21);
    _raw_spin_unlock_irqrestore(iVar4 + 8,uVar5);
    return;
}


// ===== sym.qcom_io_pgtable_alloc_init @ 0x0800b2e8 (size 44) =====

void sym.qcom_io_pgtable_alloc_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    register_shrinker(reloc.io_pgtable_alloc_count_objects.3b8e7fc3d2a98b9a1dd59c7698606bee.cfi_jt);
    return;
}


// ===== sym.qcom_io_pgtable_alloc_exit @ 0x0800b314 (size 44) =====

void sym.qcom_io_pgtable_alloc_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_shrinker(reloc.io_pgtable_alloc_count_objects.3b8e7fc3d2a98b9a1dd59c7698606bee.cfi_jt);
    return;
}


// ===== sym.io_pgtable_alloc_count_objects @ 0x0800b340 (size 36) =====

int64_t sym.io_pgtable_alloc_count_objects(void)

{
    int64_t iVar1;
    
    iVar1 = -2;
    if (_obj.page_pool_count != 0) {
        iVar1 = _obj.page_pool_count;
    }
    return iVar1;
}


// ===== sym.io_pgtable_alloc_scan_objects @ 0x0800b368 (size 456) =====

ulong * sym.io_pgtable_alloc_scan_objects(ulong noname_0,int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong *arg3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    ulong *puVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    int64_t iVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t *piStack_90;
    uchar *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    puStack_88 = &piStack_90;
    piStack_90 = &piStack_90;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    puVar11 = *(arg1 + 8);
    mutex_lock(obj.page_pool_xa_lock);
    arg3 = 0xffffffffffffffff;
    uStack_80 = 0;
    iVar7 = xa_find(obj.__fast_smmu_create_mapping_sized.__key,&uStack_80,0xffffffffffffffff,8);
    puVar10 = NULL;
    while (iVar7 != 0) {
        arg3 = puVar11 - puVar10;
        iVar7 = sym.scan_page_pool(iVar7,&piStack_90,arg3);
        puVar10 = iVar7 + puVar10;
        if (puVar11 <= puVar10) break;
        arg3 = 0xffffffffffffffff;
        iVar7 = xa_find_after(obj.__fast_smmu_create_mapping_sized.__key,&uStack_80,0xffffffffffffffff,8);
    }
    mutex_unlock(obj.page_pool_xa_lock);
    piVar12 = piStack_90;
    if (&piStack_90 != piStack_90) {
        do {
            piVar15 = *piVar12;
            iVar2 = piVar12[4];
            uVar8 = __list_del_entry_valid(piVar12);
            if ((uVar8 & 1) != 0) {
                iVar7 = *piVar12;
                piVar13 = piVar12[1];
                *(iVar7 + 8) = piVar13;
                *piVar13 = iVar7;
            }
            *piVar12 = -0x2152ffffffffff00;
            piVar12[1] = -0x2152fffffffffede;
            if (iVar2 != 0) {
                arg3 = &uStack_78;
                uStack_78 = CONCAT44(iVar2,3);
                uStack_70 = 7;
                uStack_6c = 3;
                iVar6 = hyp_assign_phys((piVar12 + -1 + (_gen_pool_first_fit_order_align >> 0xc) * 8) * 0x40 +
                                        0x8000000000,0x1000,arg3,2,&uStack_6c,&uStack_70,1);
                if (iVar6 != 0) {
                    __warn_printk("failed to unassign memory from VMID: %u rc: %d\n",iVar2,iVar6);
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x800b4e8);
                    (*pcVar5)();
                }
            }
            __free_pages(piVar12 + -1,0);
            piVar12 = piVar15;
        } while (&piStack_90 != piVar15);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return puVar10;
    }
    auVar16 = __stack_chk_fail();
    piVar12 = auVar16._8_8_;
    *extraout_x18 = sym.scan_page_pool;
    iVar7 = auVar16._0_8_ + 8;
    uVar9 = _raw_spin_lock_irqsave(iVar7);
    puVar10 = NULL;
    puVar11 = puVar10;
    if (arg3 != NULL) {
        piVar15 = auVar16._0_8_ + 0x10;
        do {
            piVar13 = *piVar15;
            puVar11 = puVar10;
            if (piVar15 == piVar13 || piVar13 + -1 == NULL) break;
            uVar8 = __list_del_entry_valid(piVar13);
            if ((uVar8 & 1) != 0) {
                iVar14 = *piVar13;
                piVar1 = piVar13[1];
                *(iVar14 + 8) = piVar1;
                *piVar1 = iVar14;
            }
            *piVar13 = -0x2152ffffffffff00;
            piVar13[1] = -0x2152fffffffffede;
            Hint_Prefetch(0x80005d8,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(0x80005d8,0x10);
                if (bVar4) {
                    cVar3 = ExclusiveMonitorsStatus();
                    _obj.page_pool_count = _obj.page_pool_count + -1;
                }
            } while (cVar3 != '\0');
            dec_node_page_state(piVar13 + -1,0x21);
            iVar14 = *piVar12;
            uVar8 = __list_add_valid(piVar13,piVar12,iVar14);
            if ((uVar8 & 1) != 0) {
                *(iVar14 + 8) = piVar13;
                *piVar13 = iVar14;
                piVar13[1] = piVar12;
                *piVar12 = piVar13;
            }
            puVar10 = puVar10 + 1;
            puVar11 = arg3;
        } while (arg3 != puVar10);
    }
    _raw_spin_unlock_irqrestore(iVar7,uVar9);
    return puVar11;
}


// ===== sym.scan_page_pool @ 0x0800b530 (size 332) =====

int64_t sym.scan_page_pool(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_spin_lock_irqsave(arg1 + 8);
    iVar6 = 0;
    iVar8 = iVar6;
    if (arg3 != 0) {
        do {
            piVar7 = *(arg1 + 0x10);
            iVar8 = iVar6;
            if (arg1 + 0x10 == piVar7 || piVar7 + -1 == NULL) break;
            uVar5 = __list_del_entry_valid(piVar7);
            if ((uVar5 & 1) != 0) {
                iVar8 = *piVar7;
                piVar1 = piVar7[1];
                *(iVar8 + 8) = piVar1;
                *piVar1 = iVar8;
            }
            *piVar7 = -0x2152ffffffffff00;
            piVar7[1] = -0x2152fffffffffede;
            Hint_Prefetch(0x80005d8,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x80005d8,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    _obj.page_pool_count = _obj.page_pool_count + -1;
                }
            } while (cVar2 != '\0');
            dec_node_page_state(piVar7 + -1,0x21);
            iVar8 = *arg2;
            uVar5 = __list_add_valid(piVar7,arg2,iVar8);
            if ((uVar5 & 1) != 0) {
                *(iVar8 + 8) = piVar7;
                *piVar7 = iVar8;
                piVar7[1] = arg2;
                *arg2 = piVar7;
            }
            iVar6 = iVar6 + 1;
            iVar8 = arg3;
        } while (arg3 != iVar6);
    }
    _raw_spin_unlock_irqrestore(arg1 + 8,uVar4);
    return iVar8;
}


// ===== sym.init_module @ 0x0800b8e4 (size 224) =====

int sym.init_module(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800b000 == NULL) {
code_r0x0800b938:
        iVar1 = 0;
    }
    else {
        pcVar2 = *0x800b000;
        uVar4 = 0;
        while( true ) {
            arg1 = (*pcVar2)(arg1);
            iVar1 = arg1;
            if (iVar1 != 0) break;
            if (uVar4 - 0x20 < 0xffffffffffffffd8) goto code_r0x0800b9bc;
            pcVar2 = *(reloc.qcom_dma_iommu_generic_driver_init.cfi_jt + uVar4);
            uVar4 = uVar4 + 8;
            if (pcVar2 == NULL) goto code_r0x0800b938;
        }
        _printk(0x8000a45,*(reloc.dma_mapping_fast_init.cfi_jt + uVar4),arg1 & 0xffffffff);
        if (0x2f < uVar4) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x800b9c4);
            (*pcVar2)();
        }
        uVar3 = uVar4 + 0x8001178;
        while (0x800117f < uVar3) {
            if (0x20 < uVar4 - 8) {
code_r0x0800b9bc:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x800b9c0);
                (*pcVar2)();
            }
            if (*(uVar4 + 0x8001178) != NULL) {
                (**(uVar4 + 0x8001178))();
            }
            uVar3 = uVar4 + 0x8001170;
            uVar4 = uVar4 - 8;
        }
    }
    return iVar1;
}


// ===== sym.qcom_dma_iommu_generic_driver_init @ 0x0800b9c4 (size 52) =====

void sym.qcom_dma_iommu_generic_driver_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dma_iommu_probe.b539c54d027b7e1a7b0bf62125cecd45.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.dma_mapping_fast_init @ 0x0800b9f8 (size 56) =====

void sym.dma_mapping_fast_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    android_rvh_probe_register
              (__tracepoint_android_rvh_iommu_setup_dma_ops,
               sym.__fast_smmu_setup_dma_ops.5a2e0149000a936629ebf63764a9885f.cfi_jt,0);
    return;
}


// ===== sym.qcom_arm_lpae_do_selftests @ 0x0800ba30 (size 16) =====

ulong sym.qcom_arm_lpae_do_selftests(int64_t arg1)

{
    return 0;
}

