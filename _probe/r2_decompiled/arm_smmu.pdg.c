// decompiled from arm_smmu by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08007000 (size 3492) =====

//WARNING: Switch with 1 destination removed at 0x08012cb0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xcf4515141d0eb27) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 < -0x45de3d78798e40a6) {
                if (arg1 < -0x67b55bfb33f6833b) {
                    if (arg1 < -0x6c3c12b940225964) {
                        if (arg1 == -0x774f64b55e2d1862) {
                            pcVar2 = sym.__typeid__ZTSFyP20qsmmuv500_tbu_deviceyjmE_global_addr;
                            goto code_r0x08007d10;
                        }
                        if (arg1 != -0x6e2cca9239df7da4) goto code_r0x08012c70;
                        pcVar2 = sym.arm_smmu_iova_to_phys.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                    }
                    else if (arg1 == -0x6c3c12b940225964) {
                        pcVar2 = sym.arm_smmu_attach_dev.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x6a197831a72fdc99) goto code_r0x08012c70;
                        pcVar2 = sym.__typeid__ZTSFiP6deviceP11iommu_groupE_global_addr;
                    }
                }
                else if (arg1 < -0x57be845bca9148ef) {
                    if (arg1 == -0x67b55bfb33f6833b) {
                        pcVar2 = sym.arm_smmu_skip_tlb_management.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x636b7c234ab1069c) goto code_r0x08012c70;
                        pcVar2 = sym.qcom_adreno_smmu_get_ttbr1_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
                    }
                }
                else {
                    if (arg1 == -0x57be845bca9148ef) {
                        if ((pcVar1 + -0x80080e8 >> 3 | pcVar1 << 0x3d) < 10) {
                            return;
                        }
                        goto code_r0x08012c70;
                    }
                    if (arg1 == -0x550b9e52359ac614) {
                        pcVar2 = sym.qsmmuv500_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x4dd2458570ef6a73) goto code_r0x08012c70;
                        pcVar2 = sym.arm_smmu_iotlb_sync.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                    }
                }
            }
            else {
                if (-0x3c8572109da8e95d < arg1) {
                    if (arg1 < -0x3987c0e26ee29729) {
                        if (arg1 == -0x3c8572109da8e95c) {
                            pcVar2 = sym.__traceiter_map_pages.cfi_jt;
                            goto code_r0x08007d10;
                        }
                        if (arg1 != -0x3bc9b480f1d71c20) goto code_r0x08012c70;
                        pcVar2 = sym.arm_smmu_tlb_inv_walk_s2.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x3987c0e26ee29729) {
                            if (arg1 == -0x36ca545cd543a315) {
                                pcVar2 = sym.arm_smmu_iova_to_phys_hard.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                            }
                            else {
                                if (arg1 != -0x35f86003cacdfe54) goto code_r0x08012c70;
                                pcVar2 = sym.arm_smmu_probe_device.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                            }
                            goto code_r0x08007d94;
                        }
                        pcVar2 = sym.arm_smmu_global_fault.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                    }
code_r0x08007d44:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08012c70;
                }
                if (arg1 < -0x44dc00a6ea4418c9) {
                    if (arg1 == -0x45de3d78798e40a6) {
                        pcVar2 = sym.perf_trace_iommu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                        goto code_r0x08007d44;
                    }
                    if (arg1 != -0x456f1acda78e3a69) goto code_r0x08012c70;
                    pcVar2 = sym.device_match_fwnode.cfi_jt;
                }
                else if (arg1 == -0x44dc00a6ea4418c9) {
                    pcVar2 = sym.__typeid__ZTSFvP15arm_smmu_deviceiE_global_addr;
                }
                else {
                    if (arg1 != -0x4260ebb633ab377a) goto code_r0x08012c70;
                    pcVar2 = sym.arm_smmu_device_shutdown.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                }
            }
        }
        else if (arg1 < -0x6cb6549e6771d56) {
            if (arg1 < -0x2a945561443eaee2) {
                if (arg1 < -0x2d1ef4d8549a89e5) {
                    if (arg1 != -0x3557318fb8d07b71) {
                        if (arg1 != -0x335288e2cab80e0c) goto code_r0x08012c70;
                        pcVar2 = sym.__typeid__ZTSFvP15arm_smmu_deviceiiyE_global_addr;
                        goto code_r0x08007d94;
                    }
                    pcVar2 = sym.arm_smmu_device_probe.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                }
                else if (arg1 == -0x2d1ef4d8549a89e5) {
                    pcVar2 = sym.__arm_smmu_sid_switch.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                }
                else {
                    if (arg1 != -0x2aba91b95aac9091) goto code_r0x08012c70;
                    pcVar2 = sym.trace_event_raw_event_tlbsync_timeout.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                }
                goto code_r0x08007d44;
            }
            if (arg1 < -0xef4825473ba2583) {
                if (arg1 == -0x2a945561443eaee2) {
                    pcVar2 = sym.__traceiter_tlbsync_timeout.cfi_jt;
                }
                else {
                    if (arg1 != -0x218c0108fde83420) goto code_r0x08012c70;
                    pcVar2 = sym.trace_event_raw_init.cfi_jt;
                }
            }
            else if (arg1 == -0xef4825473ba2583) {
                pcVar2 = sym.arm_smmu_tlb_add_walk_page.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
            else {
                if (arg1 != -0x9a018921d50e85f) {
                    if (arg1 != -0x9234c8105d97d9e) goto code_r0x08012c70;
                    pcVar2 = sym.arm_smmu_log_new_table.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                    goto code_r0x08007d10;
                }
                pcVar2 = sym.arm_smmu_of_xlate.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
        }
        else if (arg1 < 0x2b3a43e29242445) {
            if (arg1 < -0x52e73fb8bfc204e) {
                if (arg1 != -0x6cb6549e6771d56) {
                    if (arg1 != -0x6c05c1e7ad171d1) goto code_r0x08012c70;
                    pcVar2 = sym.__typeid__ZTSFiP15arm_smmu_deviceE_global_addr;
                    goto code_r0x08007ca0;
                }
                pcVar2 = sym.arm_smmu_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
            else if (arg1 == -0x52e73fb8bfc204e) {
                pcVar2 = sym.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
            else {
                if (arg1 != -0x33eb120d7d733ce) goto code_r0x08012c70;
                pcVar2 = sym.arm_smmu_unmap_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
        }
        else if (arg1 < 0x76fe840679a9431) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x70946a4aad3ff8f) goto code_r0x08012c70;
                pcVar2 = sym.arm_smmu_domain_alloc.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
        }
        else if (arg1 == 0x76fe840679a9431) {
            pcVar2 = sym.__typeid__ZTSFvP15arm_smmu_deviceijE_global_addr;
        }
        else {
            if (arg1 != 0x9f6c1d97e51850d) {
                if (arg1 != 0xcd35180f8b2a3c8) goto code_r0x08012c70;
                pcVar2 = sym.__bpf_trace_iommu_pgtable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                goto code_r0x08007d44;
            }
            pcVar2 = sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr;
        }
    }
    else if (arg1 < 0x43edafbdd92b67ea) {
        if (arg1 < 0x2a9690a8bb705fa8) {
            if (0x1acb1f92dcf098e6 < arg1) {
                if (arg1 < 0x1ea828e69ceaad18) {
                    if (arg1 != 0x1acb1f92dcf098e7) {
                        if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x08012c70;
                        pcVar2 = sym.trace_event_reg.cfi_jt;
                        goto code_r0x08007d94;
                    }
                    pcVar2 = sym.qcom_adreno_smmu_resume_translation.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
                }
                else {
                    if (arg1 == 0x1ea828e69ceaad18) {
                        pcVar2 = sym.arm_smmu_enable_nesting.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                        goto code_r0x08007d60;
                    }
                    if (arg1 != 0x26d8a99cd42ad740) {
                        if (arg1 != 0x287adb0a78bd811c) goto code_r0x08012c70;
                        pcVar2 = sym.__bpf_trace_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                        goto code_r0x08007d44;
                    }
                    pcVar2 = sym.__typeid__ZTSFvP15arm_smmu_deviceE_global_addr;
                }
code_r0x08007d10:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08012c70;
            }
            if (arg1 < 0x15da15aecd422bc2) {
                if (arg1 == 0xcf4515141d0eb27) {
                    pcVar2 = sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr;
                }
                else {
                    if (arg1 != 0xff2b66f0ca4d350) goto code_r0x08012c70;
                    pcVar2 = sym.arm_smmu_get_fault_ids.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                }
            }
            else if (arg1 == 0x15da15aecd422bc2) {
                pcVar2 = sym.__traceiter_map_sg.cfi_jt;
            }
            else {
                if (arg1 != 0x18dcb57789f1ef81) goto code_r0x08012c70;
                pcVar2 = sym.__typeid__ZTSFiP15arm_smmu_domainP15arm_smmu_deviceP6deviceiE_global_addr;
            }
        }
        else if (arg1 < 0x3a3bdc74315a0779) {
            if (arg1 < 0x2ed85573a26ee4d8) {
                if (arg1 == 0x2a9690a8bb705fa8) {
                    pcVar2 = sym.__traceiter_iommu_pgtable_remove.cfi_jt;
                    goto code_r0x08007d10;
                }
                if (arg1 != 0x2c3f18b28ea970d3) goto code_r0x08012c70;
                pcVar2 = sym.arm_smmu_device_group.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
            else if (arg1 == 0x2ed85573a26ee4d8) {
                pcVar2 = sym.qcom_adreno_smmu_set_ttbr0_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
            }
            else {
                if (arg1 != 0x3a3ba0831f9e2cb2) goto code_r0x08012c70;
                pcVar2 = sym.__typeid__ZTSFiP24arm_smmu_power_resourcesE_global_addr;
            }
        }
        else if (arg1 < 0x3dd1a39e589289fe) {
            if (arg1 == 0x3a3bdc74315a0779) {
                pcVar2 = sym.arm_smmu_sid_switch.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
            else {
                if (arg1 != 0x3aa8aaf8ee3bbce9) goto code_r0x08012c70;
                pcVar2 = sym.arm_smmu_set_pgtable_quirks.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x3dd1a39e589289fe) {
                pcVar2 = sym.trace_raw_output_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                goto code_r0x08007ca0;
            }
            if (arg1 == 0x3dfe89e98d52c464) {
                pcVar2 = sym.__typeid__ZTSFvP12iommu_domainE_global_addr;
                goto code_r0x08007d10;
            }
            if (arg1 != 0x3e1b0d8473e23260) goto code_r0x08012c70;
            pcVar2 = sym.__typeid__ZTSFvP15arm_smmu_domainP6deviceE_global_addr;
        }
    }
    else {
        if (arg1 < 0x6175088cc6504702) {
            if (arg1 < 0x54724e8ec07fc596) {
                if (arg1 < 0x4c550309df1cf4c1) {
                    if (arg1 != 0x43edafbdd92b67ea) {
                        if (arg1 != 0x4b7e4d32fdaed076) goto code_r0x08012c70;
                        pcVar2 = sym.__typeid__ZTSFyP15arm_smmu_domainP19qcom_iommu_atos_txnE_global_addr;
                        goto code_r0x08007d94;
                    }
                    pcVar2 = sym.trace_event_raw_event_smmu_init.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                }
                else {
                    if (arg1 == 0x4c550309df1cf4c1) {
                        pcVar2 = sym.__typeid__ZTSFvPvE_global_addr;
code_r0x08007d60:
                        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 5) {
                            return;
                        }
                        goto code_r0x08012c70;
                    }
                    if (arg1 != 0x50e9a6b9ee897901) goto code_r0x08012c70;
                    pcVar2 = sym.arm_smmu_tlb_add_page_s1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                }
                goto code_r0x08007d44;
            }
            if (arg1 < 0x5b83a3fd302a5421) {
                if (arg1 != 0x54724e8ec07fc596) {
                    if (arg1 != 0x59ec9da796b5bdee) goto code_r0x08012c70;
                    pcVar2 = sym.__typeid__ZTSFiP15arm_smmu_domainP14io_pgtable_cfgP6deviceE_global_addr;
                    goto code_r0x08007d44;
                }
                pcVar2 = sym.generic_iommu_put_resv_regions.cfi_jt;
            }
            else {
                if (arg1 != 0x5b83a3fd302a5421) {
                    if (arg1 == 0x5ed43b2957f5c7af) {
                        pcVar2 = sym.qcom_adreno_smmu_get_fault_info.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
                        goto code_r0x08007d94;
                    }
                    if (arg1 != 0x60fb03be70327eb4) goto code_r0x08012c70;
                    pcVar2 = sym.__bpf_trace_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                    goto code_r0x08007d44;
                }
                pcVar2 = sym.arm_smmu_release_device.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
            goto code_r0x08007d10;
        }
        if (arg1 < 0x6f088117328ca63a) {
            if (arg1 < 0x6809a6077d3a8c69) {
                if (arg1 != 0x6175088cc6504702) {
                    if ((arg1 == 0x62199a7fe1774e2e) && ((pcVar1 + -0x8007fa0 >> 3 | pcVar1 << 0x3d) < 4)) {
                        return;
                    }
                    goto code_r0x08012c70;
                }
                pcVar2 = sym.__typeid__ZTSFvP20qsmmuv500_tbu_deviceE_global_addr;
code_r0x08007ca0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 6) {
                    return;
                }
                goto code_r0x08012c70;
            }
            if (arg1 == 0x6809a6077d3a8c69) {
                pcVar2 = sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr;
            }
            else if (arg1 == 0x6a7cc3e6301bd48c) {
                pcVar2 = sym.arm_smmu_set_fault_model.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
            else {
                if (arg1 != 0x6b141b54612cf75f) goto code_r0x08012c70;
                pcVar2 = sym.__traceiter_smmu_init.cfi_jt;
            }
        }
        else if (arg1 < 0x7487daee08ce7a03) {
            if (arg1 == 0x6f088117328ca63a) {
                pcVar2 = sym.__traceiter_tlbi_start.cfi_jt;
                goto code_r0x08007d10;
            }
            if (arg1 != 0x71e4e2d72ed65c92) goto code_r0x08012c70;
            pcVar2 = sym.arm_smmu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
        }
        else if (arg1 == 0x7487daee08ce7a03) {
            pcVar2 = sym.__typeid__ZTSFvP24arm_smmu_power_resourcesE_global_addr;
        }
        else if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ecf6384c5ac0123) goto code_r0x08012c70;
            pcVar2 = sym.arm_smmu_set_secure_vmid.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
        }
    }
code_r0x08007d94:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08012c70:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8012cc4);
    (*pcVar1)();
}


// ===== sym.arm_smmu_sid_switch.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007db0 (size 8) =====

uint sym.arm_smmu_sid_switch.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(ulong param_1,uint param_2)

{
    uint uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_group_get();
    uVar1 = iommu_group_for_each_dev(uVar2,param_2,sym.__arm_smmu_sid_switch.73c668e47250e1a2d5221ed72817c1f7.cfi_jt);
    iommu_group_put(uVar2);
    return uVar1;
}


// ===== sym.qcom_adreno_smmu_get_fault_info.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007db8 (size 8) =====

void sym.qcom_adreno_smmu_get_fault_info.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t *param_1,ulong *param_2)

{
    int iVar1;
    uint uVar2;
    ulong uVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *param_1;
    iVar1 = *(iVar6 + 0x10) + *(param_1 + 6);
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x58);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,iVar1,0x58);
    }
    *(param_2 + 0x14) = uVar2;
    iVar1 = *(iVar6 + 0x10) + *(param_1 + 6);
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x68);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,iVar1,0x68);
    }
    *(param_2 + 3) = uVar2;
    iVar1 = *(iVar6 + 0x10) + *(param_1 + 6);
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x6c);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,iVar1,0x6c);
    }
    *(param_2 + 0x1c) = uVar2;
    iVar1 = *(iVar6 + 0x10) + *(param_1 + 6);
    if ((*(iVar6 + 0x28) == 0) || (pcVar5 = *(*(iVar6 + 0x28) + 0x10), pcVar5 == NULL)) {
        uVar3 = sym.readq_relaxed_1(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x60);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar5,0x8001ef0);
        }
        uVar3 = (*pcVar5)(iVar6,iVar1,0x60);
    }
    *param_2 = uVar3;
    uVar4 = *(param_1 + 6) << 2 | 0x400;
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (1 << (*(iVar6 + 0x14) & 0x1f)) + uVar4);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,1,uVar4);
    }
    *(param_2 + 4) = uVar2;
    iVar1 = *(iVar6 + 0x10) + *(param_1 + 6);
    if ((*(iVar6 + 0x28) == 0) || (pcVar5 = *(*(iVar6 + 0x28) + 0x10), pcVar5 == NULL)) {
        uVar3 = sym.readq_relaxed_1(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x20);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar5,0x8001ef0);
        }
        uVar3 = (*pcVar5)(iVar6,iVar1,0x20);
    }
    param_2[1] = uVar3;
    iVar1 = *(iVar6 + 0x10) + *(param_1 + 6);
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x34);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,iVar1,0x34);
    }
    *(param_2 + 2) = uVar2;
    return;
}


// ===== sym.__typeid__ZTSFvP15arm_smmu_deviceijE_global_addr @ 0x08007dc0 (size 8) =====

void sym.__typeid__ZTSFvP15arm_smmu_deviceijE_global_addr(int64_t param_1,uint64_t param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0x100;
    if ((*(param_1 + 0x134) >> (param_2 & 0x3f) & 1) != 0) {
        uVar2 = 0x180;
    }
    iVar1 = *(param_1 + 0x10) + param_2;
    if ((*(param_1 + 0x28) == 0) || (pcVar3 = *(*(param_1 + 0x28) + 8), pcVar3 == NULL)) {
        sym.writel_relaxed_2(uVar2 | param_3,*(param_1 + 8) + (iVar1 << (*(param_1 + 0x14) & 0x1f)));
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar3,0x8001eb0);
        }
        (*pcVar3)(param_1,iVar1,0,uVar2 | param_3);
    }
    return;
}


// ===== sym.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007dc8 (size 8) =====

bool sym.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(uint64_t param_1)

{
    return (param_1 & 0xfffffffd) == 0;
}


// ===== sym.__typeid__ZTSFvP15arm_smmu_deviceiiyE_global_addr @ 0x08007dd0 (size 8) =====

void sym.__typeid__ZTSFvP15arm_smmu_deviceiiyE_global_addr(int64_t param_1,int param_2,int param_3,uint64_t param_4)

{
    int64_t arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(param_1 + 8) + (param_2 << (*(param_1 + 0x14) & 0x1f)) + param_3;
    sym.writel_relaxed_1(param_4 >> 0x20,arg2 + 4);
    sym.writel_relaxed_1(param_4 & 0xffffffff,arg2);
    return;
}


// ===== sym.arm_smmu_set_fault_model.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007dd8 (size 8) =====

uint sym.arm_smmu_set_fault_model.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,uint8_t param_2)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + -0x60);
    if (*(param_1 + -0xb0) == 0) {
        uVar1 = 0;
        *(param_1 + -0x28) = *(param_1 + -0x28) & 0xf0 | param_2 & 0xf;
    }
    else {
        uVar1 = 0xffffffff;
    }
    mutex_unlock(param_1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_iova_to_phys_hard.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007de0 (size 8) =====

ulong sym.arm_smmu_iova_to_phys_hard.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,int64_t *param_2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    code *pcVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = param_1 + -0xb0;
    piVar13 = *piVar11;
    if ((*(piVar13 + 0x1c) >> 4 & 1) == 0) {
        iVar12 = *piVar13;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar12,4), iVar5 < 0)) {
            puVar1 = iVar12 + 0x1f8;
            uVar10 = *puVar1;
            do {
                uVar9 = uVar10;
                if (uVar9 == 0) goto code_r0x0800cb7c;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar10 = uVar2;
                    if (uVar2 != uVar9) goto code_r0x0800cb5c;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar9 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800cb5c:
                uVar6 = 0;
            } while (uVar9 != uVar2);
        }
        else {
            if ((piVar13[5] == 0) || (pcVar8 = *(piVar13[5] + 0x40), pcVar8 == NULL)) {
                if (((*(*piVar11 + 0x18) >> 5 & 1) == 0) || (*(param_1 + -0x68) != 0)) {
                    uVar6 = 0;
                }
                else {
                    uVar6 = sym.__arm_smmu_iova_to_phys_hard(param_1,*param_2);
                }
            }
            else {
                if (pcVar8 != sym.__typeid__ZTSFyP15arm_smmu_domainP19qcom_iommu_atos_txnE_global_addr) {
                    __cfi_slowpath_diag(0x4b7e4d32fdaed076,pcVar8,0x8001bf0);
                }
                uVar6 = (*pcVar8)(piVar11,param_2);
            }
            iVar12 = *piVar13;
            if ((*(iVar12 + 0x200) & 7) == 0) {
                uVar7 = ktime_get_mono_fast_ns();
                *(iVar12 + 0x218) = uVar7;
                __pm_runtime_idle(*piVar13,5);
            }
        }
    }
    else {
code_r0x0800cb7c:
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.__bpf_trace_iommu_pgtable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007de8 (size 8) =====

void sym.__bpf_trace_iommu_pgtable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4();
    return;
}


// ===== sym.trace_event_raw_event_iommu_pgtable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007df0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08008b44)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_iommu_pgtable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,uint32_t *param_3,int64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    int64_t iVar18;
    char *pcVar19;
    ulong *puVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    uint32_t uVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar25 [16];
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auStack_4a0 [12];
    uint uStack_494;
    int64_t iStack_490;
    int64_t iStack_488;
    ulong ***pppuStack_480;
    code *pcStack_478;
    int64_t *piStack_470;
    ulong uStack_468;
    uchar auStack_460 [16];
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    int64_t iStack_418;
    ulong ***pppuStack_410;
    ulong uStack_408;
    int64_t *piStack_400;
    ulong *puStack_3f0;
    int64_t iStack_3e8;
    uchar auStack_3e0 [12];
    uint uStack_3d4;
    int64_t iStack_3d0;
    int64_t iStack_3c8;
    ulong ***pppuStack_3c0;
    code *pcStack_3b8;
    uint64_t uStack_3b0;
    uint64_t uStack_3a0;
    uint32_t *puStack_398;
    int64_t *piStack_390;
    uint64_t uStack_388;
    uchar auStack_380 [16];
    ulong uStack_368;
    ulong uStack_360;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    int64_t iStack_338;
    ulong ***pppuStack_330;
    ulong uStack_328;
    int64_t iStack_320;
    uint64_t uStack_310;
    int64_t iStack_308;
    uchar auStack_300 [12];
    uint uStack_2f4;
    int64_t iStack_2f0;
    int64_t iStack_2e8;
    ulong ***pppuStack_2e0;
    code *pcStack_2d8;
    ulong uStack_2d0;
    int64_t iStack_2c8;
    code *pcStack_2c0;
    uint64_t uStack_2b8;
    uint64_t uStack_2b0;
    int64_t iStack_2a8;
    int64_t iStack_2a0;
    uint32_t *puStack_298;
    int64_t iStack_290;
    uint64_t uStack_288;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    ulong ***pppuStack_240;
    ulong uStack_238;
    int64_t *piStack_230;
    int64_t iStack_228;
    uint32_t *puStack_220;
    int64_t iStack_218;
    uint64_t uStack_210;
    int64_t iStack_208;
    uchar auStack_200 [12];
    uint32_t uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    uchar ***pppuStack_1e0;
    code *pcStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    uint64_t uStack_1b0;
    int64_t iStack_1a8;
    int64_t iStack_1a0;
    uint32_t *puStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    int64_t iStack_128;
    uint32_t *puStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iVar7;
    int64_t iVar12;
    int64_t iVar13;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_48 = *(iVar17 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar21 = *(param_1 + 0x48);
    iVar17 = param_4;
    uVar9 = param_5;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar17 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(param_1), (uVar4 & 1) == 0))))
        goto code_r0x08008984;
    }
    else {
code_r0x08008984:
        pcVar5 = (*(param_2 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar19 = **(param_2 + 8);
            pcVar5 = "(null)";
            if (pcVar19 != NULL) {
                pcVar5 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar5);
        puVar14 = iVar3 + 1 + 0x28;
        iVar6 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            pcVar5 = (*(param_2 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(param_2 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            *(iVar6 + 0x10) = param_3;
            *(iVar6 + 0x18) = param_4;
            *(iVar6 + 0x20) = param_5;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar12 = auVar25._8_8_;
    iVar7 = auVar25._0_8_;
    *extraout_x18 = sym.perf_trace_iommu_pgtable;
    pcStack_d8 = sym.perf_trace_iommu_pgtable;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    pcVar5 = (*(iVar12 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar19 = **(iVar12 + 8);
        pcVar5 = "(null)";
        if (pcVar19 != NULL) {
            pcVar5 = pcVar19;
        }
    }
    puVar15 = puVar14;
    iVar18 = iVar17;
    uVar4 = uVar9;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar8 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar15 = &uStack_f4;
        unaff_x25 = (uVar8 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x25,&iStack_f0);
        uVar10 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x8008a44;
            *(iStack_f0 + 0x108) = 5;
            *(iVar6 + 8) = uVar8 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar12 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(iVar12 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            puVar15 = uStack_f4;
            uVar4 = 1;
            *(iVar6 + 0x10) = puVar14;
            *(iVar6 + 0x18) = iVar17;
            *(iVar6 + 0x20) = uVar9;
            iVar18 = iVar7;
            perf_trace_run_bpf_submit(iVar6,unaff_x25);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar13 = auVar26._8_8_;
    iVar11 = auVar26._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_00 = 0x8008bf0;
    uStack_138 = 0x8008bf0;
    iVar6 = sp_el0;
    iStack_148 = *(iVar6 + 0x5e0);
    uVar23 = *(iVar11 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar21 = uVar23;
    iVar6 = iVar18;
    uVar10 = uVar4;
    ppuStack_140 = &puStack_e0;
    piStack_130 = piVar22;
    puStack_120 = puVar14;
    iStack_118 = iVar17;
    uStack_110 = uVar9;
    iStack_1a8 = iVar11;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar6 = 0;
            iStack_128 = iVar12;
            iStack_108 = iVar7;
            event_triggers_call(iVar11,0);
            auVar25._8_8_ = iStack_128;
            auVar25._0_8_ = iStack_108;
        }
        iStack_128 = auVar25._8_8_;
        iStack_108 = auVar25._0_8_;
        if ((uVar21 >> 6 & 1) == 0) {
            if ((uVar21 >> 9 & 1) != 0) {
                uVar9 = trace_event_ignore_this_pid(iVar11);
                auVar25._8_8_ = iStack_128;
                auVar25._0_8_ = iStack_108;
                if ((uVar9 & 1) != 0) goto code_r0x08008d04;
            }
            goto code_r0x08008c7c;
        }
    }
    else {
code_r0x08008c7c:
        iStack_128 = auVar25._8_8_;
        iStack_108 = auVar25._0_8_;
        pcVar5 = (*(iVar13 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar19 = **(iVar13 + 8);
            pcVar5 = "(null)";
            if (pcVar19 != NULL) {
                pcVar5 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar21 = iVar3 + 1;
        uVar23 = uVar21;
        puVar14 = uVar21 + 0x28;
        iVar17 = trace_event_buffer_reserve(&uStack_178,iVar11);
        auVar25._8_8_ = iStack_128;
        auVar25._0_8_ = iStack_108;
        if (iVar17 != 0) {
            *(iVar17 + 8) = uVar21 * 0x10000 | 0x28;
            pcVar5 = (*(iVar13 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(iVar13 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar17 + 0x28,pcVar5);
            *(iVar17 + 0x10) = puVar15;
            *(iVar17 + 0x18) = iVar18;
            *(iVar17 + 0x20) = uVar4;
            trace_event_buffer_commit(&uStack_178);
            auVar25._8_8_ = iStack_128;
            auVar25._0_8_ = iStack_108;
            iStack_1a8 = iVar17;
        }
    }
code_r0x08008d04:
    iStack_128 = auVar25._8_8_;
    iStack_108 = auVar25._0_8_;
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_148) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar12 = auVar26._8_8_;
    iVar7 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_iommu_map_pages;
    pcStack_1d8 = sym.perf_trace_iommu_map_pages;
    pcStack_1c0 = sym.perf_trace_iommu_pgtable;
    iVar17 = sp_el0;
    iStack_1e8 = *(iVar17 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    pcVar5 = (*(iVar12 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar19 = **(iVar12 + 8);
        pcVar5 = "(null)";
        if (pcVar19 != NULL) {
            pcVar5 = pcVar19;
        }
    }
    puVar16 = puVar14;
    iVar11 = iVar6;
    uVar9 = uVar10;
    pppuStack_1e0 = &ppuStack_140;
    uStack_1d0 = uVar8;
    iStack_1c8 = unaff_x27;
    uStack_1b8 = unaff_x25;
    uStack_1b0 = uVar23;
    iStack_1a0 = iVar13;
    puStack_198 = puVar15;
    iStack_190 = iVar18;
    uStack_188 = uVar4;
    uVar8 = strlen(pcVar5);
    iVar17 = tpidr_el1;
    piVar22 = iVar17 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar16 = &uStack_1f4;
        unaff_x25 = (uVar8 + 0x34U & 0xfffffff8) - 4;
        iVar17 = perf_trace_buf_alloc(unaff_x25,&iStack_1f0);
        uVar4 = _trace_event_reg;
        if (iVar17 != 0) {
            *(iStack_1f0 + 0xe8) = &pppuStack_1e0;
            *(iStack_1f0 + 0xf8) = auStack_200;
            *(iStack_1f0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x8008d3c;
            *(iStack_1f0 + 0x108) = 5;
            *(iVar17 + 8) = uVar8 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar12 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(iVar12 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar17 + 0x28,pcVar5);
            puVar16 = uStack_1f4;
            uVar9 = 1;
            *(iVar17 + 0x10) = puVar14;
            *(iVar17 + 0x18) = iVar6;
            *(iVar17 + 0x20) = uVar10;
            iVar11 = iVar7;
            perf_trace_run_bpf_submit(iVar17,unaff_x25);
            unaff_x27 = iVar17;
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar13 = auVar25._8_8_;
    iVar18 = auVar25._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_02 = 0x8008ee8;
    uStack_238 = 0x8008ee8;
    iVar17 = sp_el0;
    uVar4 = uVar9 & 0xffffffff;
    iStack_248 = *(iVar17 + 0x5e0);
    uVar24 = *(iVar18 + 0x48);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uVar21 = uVar24;
    iVar17 = iVar11;
    uVar23 = uVar9;
    pppuStack_240 = &pppuStack_1e0;
    piStack_230 = piVar22;
    puStack_220 = puVar14;
    iStack_218 = iVar6;
    uStack_210 = uVar10;
    iStack_2a8 = iVar18;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = puVar16;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar17 = 0;
            iStack_228 = iVar12;
            iStack_208 = iVar7;
            event_triggers_call(iVar18,0);
            auVar26._8_8_ = iStack_228;
            auVar26._0_8_ = iStack_208;
        }
        iStack_228 = auVar26._8_8_;
        iStack_208 = auVar26._0_8_;
        if ((uVar21 >> 6 & 1) == 0) {
            if ((uVar21 >> 9 & 1) != 0) {
                uVar10 = trace_event_ignore_this_pid(iVar18);
                auVar26._8_8_ = iStack_228;
                auVar26._0_8_ = iStack_208;
                if ((uVar10 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_228 = auVar26._8_8_;
        iStack_208 = auVar26._0_8_;
        pcVar5 = (*(iVar13 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar19 = **(iVar13 + 8);
            pcVar5 = "(null)";
            if (pcVar19 != NULL) {
                pcVar5 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar21 = iVar3 + 1;
        uVar24 = uVar21;
        puVar14 = uVar21 + 0x20;
        iVar6 = trace_event_buffer_reserve(&uStack_278,iVar18);
        auVar26._8_8_ = iStack_228;
        auVar26._0_8_ = iStack_208;
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar21 * 0x10000 | 0x20;
            pcVar5 = (*(iVar13 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(iVar13 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x20,pcVar5);
            *(iVar6 + 0x10) = puVar16;
            puVar16 = NULL;
            uVar21 = uVar9;
            while (uVar21 != 0) {
                puVar16 = puVar16 + *(iVar11 + 0xc);
                iVar11 = sg_next(iVar11);
                uVar21 = uVar4 - 1;
                uVar4 = uVar21;
            }
            *(iVar6 + 0x18) = puVar16;
            trace_event_buffer_commit(&uStack_278);
            auVar26._8_8_ = iStack_228;
            auVar26._0_8_ = iStack_208;
            iStack_2a8 = iVar6;
        }
    }
code_r0x08009020:
    iStack_228 = auVar26._8_8_;
    iStack_208 = auVar26._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_248) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar7 = auVar25._0_8_;
    *extraout_x18_03 = sym.perf_trace_map_sg;
    pcStack_2d8 = sym.perf_trace_map_sg;
    pcStack_2c0 = sym.perf_trace_iommu_map_pages;
    iVar6 = sp_el0;
    iStack_2e8 = *(iVar6 + 0x5e0);
    uVar9 = uVar23 & 0xffffffff;
    puVar20 = *(auVar25._8_8_ + 8);
    iStack_2f0 = 0;
    uStack_2f4 = 0;
    pcVar5 = puVar20[0xe];
    if (pcVar5 == NULL) {
        pcVar19 = *puVar20;
        pcVar5 = "(null)";
        if (pcVar19 != NULL) {
            pcVar5 = pcVar19;
        }
    }
    pppuStack_2e0 = &pppuStack_240;
    uStack_2d0 = uVar8;
    iStack_2c8 = unaff_x27;
    uStack_2b8 = unaff_x25;
    uStack_2b0 = uVar24;
    iStack_2a0 = iVar13;
    puStack_298 = puVar16;
    iStack_290 = iVar11;
    uStack_288 = uVar4;
    iVar3 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        uVar24 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(uVar24,&iStack_2f0,&uStack_2f4);
        uVar4 = _trace_event_reg;
        if (uVar10 != 0) {
            *(iStack_2f0 + 0xe8) = &pppuStack_2e0;
            *(iStack_2f0 + 0xf8) = auStack_300;
            *(iStack_2f0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x8009058;
            *(iStack_2f0 + 0x108) = 5;
            *(uVar10 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar20 = *(auVar25._8_8_ + 8);
            pcVar5 = puVar20[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = *puVar20;
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(uVar10 + 0x20,pcVar5);
            *(uVar10 + 0x10) = puVar14;
            puVar14 = NULL;
            uVar21 = uVar23;
            while (uVar21 != 0) {
                puVar14 = puVar14 + *(iVar17 + 0xc);
                iVar17 = sg_next(iVar17);
                uVar21 = uVar9 - 1;
                uVar9 = uVar21;
            }
            *(uVar10 + 0x18) = puVar14;
            perf_trace_run_bpf_submit(uVar10,uVar24,uStack_2f4,iVar7,1,iStack_2f0,piVar22,0);
            unaff_x25 = uVar10;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2e8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar20 = auVar25._8_8_;
    iVar12 = auVar25._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x8009228;
    uStack_328 = 0x8009228;
    iVar6 = sp_el0;
    iStack_338 = *(iVar6 + 0x5e0);
    uVar4 = *(iVar12 + 0x48);
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uVar21 = uVar4;
    pppuStack_330 = &pppuStack_2e0;
    iStack_320 = iVar17;
    uStack_310 = uVar9;
    iStack_308 = iVar7;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            event_triggers_call(iVar12,0,0,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar9 = trace_event_ignore_this_pid(iVar12), (uVar9 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar5 = puVar20[0xe];
        if (puVar20[0xe] == NULL) {
            pcVar5 = "(null)";
            if (*puVar20 != NULL) {
                pcVar5 = *puVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar21 = iVar3 + 1;
        uVar4 = uVar21;
        iVar17 = trace_event_buffer_reserve(&uStack_368,iVar12,uVar21 + 0xc);
        if (iVar17 != 0) {
            *(iVar17 + 8) = uVar21 * 0x10000 | 0xc;
            pcVar5 = puVar20[0xe];
            if (puVar20[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar20 != NULL) {
                    pcVar5 = *puVar20;
                }
            }
            strcpy(iVar17 + 0xc,pcVar5);
            trace_event_buffer_commit(&uStack_368);
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_338) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar20 = auVar27._8_8_;
    iVar6 = auVar27._0_8_;
    *extraout_x18_05 = sym.perf_trace_tlbsync_timeout;
    pcStack_3b8 = sym.perf_trace_tlbsync_timeout;
    iVar17 = sp_el0;
    iStack_3c8 = *(iVar17 + 0x5e0);
    iStack_3d0 = 0;
    uStack_3d4 = 0;
    pcVar5 = puVar20[0xe];
    if (puVar20[0xe] == NULL) {
        pcVar5 = "(null)";
        if (*puVar20 != NULL) {
            pcVar5 = *puVar20;
        }
    }
    pppuStack_3c0 = &pppuStack_330;
    uStack_3b0 = unaff_x25;
    uStack_3a0 = uVar24;
    puStack_398 = puVar14;
    piStack_390 = piVar22;
    uStack_388 = uVar4;
    auStack_380 = auVar25;
    iVar3 = strlen(pcVar5);
    iVar17 = tpidr_el1;
    piVar1 = iVar17 + *(iVar6 + 0x78);
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar22 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar17 = perf_trace_buf_alloc(piVar22,&iStack_3d0,&uStack_3d4);
        uVar9 = _trace_event_reg;
        if (iVar17 != 0) {
            *(iStack_3d0 + 0xe8) = &pppuStack_3c0;
            *(iStack_3d0 + 0xf8) = auStack_3e0;
            *(iStack_3d0 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x800934c;
            *(iStack_3d0 + 0x108) = 5;
            *(iVar17 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar5 = puVar20[0xe];
            if (puVar20[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar20 != NULL) {
                    pcVar5 = *puVar20;
                }
            }
            strcpy(iVar17 + 0xc,pcVar5);
            perf_trace_run_bpf_submit(iVar17,piVar22,uStack_3d4,iVar6,1,iStack_3d0,piVar1,0);
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_3c8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar7 = auVar25._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_06 = 0x80094d4;
    uStack_408 = 0x80094d4;
    iVar17 = sp_el0;
    iStack_418 = *(iVar17 + 0x5e0);
    uVar8 = *(iVar7 + 0x48);
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uVar21 = uVar8;
    pppuStack_410 = &pppuStack_3c0;
    piStack_400 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            puStack_3f0 = puVar20;
            iStack_3e8 = iVar6;
            event_triggers_call(iVar7,0,0,0);
            auVar27._8_8_ = puStack_3f0;
            auVar27._0_8_ = iStack_3e8;
        }
        puStack_3f0 = auVar27._8_8_;
        iStack_3e8 = auVar27._0_8_;
        if ((uVar21 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar21 >> 9 & 1) != 0) {
            uVar9 = trace_event_ignore_this_pid(iVar7);
            auVar27._8_8_ = puStack_3f0;
            auVar27._0_8_ = iStack_3e8;
            if ((uVar9 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_3f0 = auVar27._8_8_;
    iStack_3e8 = auVar27._0_8_;
    iVar17 = trace_event_buffer_reserve(&uStack_448,iVar7,0x10);
    auVar27._8_8_ = puStack_3f0;
    auVar27._0_8_ = iStack_3e8;
    if (iVar17 != 0) {
        *(iVar17 + 8) = auVar25._8_8_;
        trace_event_buffer_commit(&uStack_448);
        auVar27._8_8_ = puStack_3f0;
        auVar27._0_8_ = iStack_3e8;
    }
code_r0x08009570:
    puStack_3f0 = auVar27._8_8_;
    iStack_3e8 = auVar27._0_8_;
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_418) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar6 = auVar26._0_8_;
    *extraout_x18_07 = sym.perf_trace_smmu_init;
    pcStack_478 = sym.perf_trace_smmu_init;
    iVar17 = sp_el0;
    iStack_488 = *(iVar17 + 0x5e0);
    iStack_490 = 0;
    uStack_494 = 0;
    iVar17 = tpidr_el1;
    piVar1 = iVar17 + *(iVar6 + 0x78);
    pppuStack_480 = &pppuStack_410;
    piStack_470 = piVar22;
    uStack_468 = uVar8;
    auStack_460 = auVar25;
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar17 = perf_trace_buf_alloc(0x14,&iStack_490,&uStack_494);
        uVar9 = _trace_event_reg;
        if (iVar17 != 0) {
            *(iStack_490 + 0xe8) = &pppuStack_480;
            *(iStack_490 + 0xf8) = auStack_4a0;
            *(iStack_490 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x80095a4;
            *(iStack_490 + 0x108) = 5;
            *(iVar17 + 8) = auVar26._8_8_;
            perf_trace_run_bpf_submit(iVar17,0x14,uStack_494,iVar6,1,iStack_490,piVar1,0);
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) != iStack_488) {
        __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_08 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_iommu_pgtable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007df8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_iommu_pgtable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,uint32_t *param_3,int64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    char *pcVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    char *pcVar18;
    ulong *puVar19;
    uint64_t uVar20;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint32_t uVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    uchar auStack_420 [12];
    uint uStack_414;
    int64_t iStack_410;
    int64_t iStack_408;
    ulong ***pppuStack_400;
    code *pcStack_3f8;
    int64_t *piStack_3f0;
    ulong uStack_3e8;
    uchar auStack_3e0 [16];
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    int64_t iStack_398;
    ulong ***pppuStack_390;
    ulong uStack_388;
    int64_t *piStack_380;
    ulong *puStack_370;
    int64_t iStack_368;
    uchar auStack_360 [12];
    uint uStack_354;
    int64_t iStack_350;
    int64_t iStack_348;
    ulong ***pppuStack_340;
    code *pcStack_338;
    uint64_t uStack_330;
    uint64_t uStack_320;
    uint32_t *puStack_318;
    int64_t *piStack_310;
    uint64_t uStack_308;
    uchar auStack_300 [16];
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    int64_t iStack_2b8;
    ulong ***pppuStack_2b0;
    ulong uStack_2a8;
    int64_t iStack_2a0;
    uint64_t uStack_290;
    int64_t iStack_288;
    uchar auStack_280 [12];
    uint uStack_274;
    int64_t iStack_270;
    int64_t iStack_268;
    ulong ***pppuStack_260;
    code *pcStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    code *pcStack_240;
    uint64_t uStack_238;
    uint64_t uStack_230;
    int64_t iStack_228;
    int64_t iStack_220;
    uint32_t *puStack_218;
    int64_t iStack_210;
    uint64_t uStack_208;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    uchar ***pppuStack_1c0;
    ulong uStack_1b8;
    int64_t *piStack_1b0;
    int64_t iStack_1a8;
    uint32_t *puStack_1a0;
    int64_t iStack_198;
    uint64_t uStack_190;
    int64_t iStack_188;
    uchar auStack_180 [12];
    uint32_t uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    int64_t *piStack_b0;
    int64_t iStack_a8;
    uint32_t *puStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iVar10;
    int64_t iVar13;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    pcVar4 = (*(param_2 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar18 = **(param_2 + 8);
        pcVar4 = "(null)";
        if (pcVar18 != NULL) {
            pcVar4 = pcVar18;
        }
    }
    puVar14 = param_3;
    iVar9 = param_4;
    uVar16 = param_5;
    uVar5 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar14 = &uStack_74;
        unaff_x25 = (uVar5 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x25,&iStack_70);
        uVar20 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar20 = -1L << (uVar20 & 0x3f);
            uVar16 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar16 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar16;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x10028;
            pcVar4 = (*(param_2 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = **(param_2 + 8);
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(iVar6 + 0x28,pcVar4);
            puVar14 = uStack_74;
            uVar16 = 1;
            *(iVar6 + 0x10) = param_3;
            *(iVar6 + 0x18) = param_4;
            *(iVar6 + 0x20) = param_5;
            iVar9 = param_1;
            perf_trace_run_bpf_submit(iVar6,unaff_x25);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar8 = auVar24._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8008bf0;
    uStack_b8 = 0x8008bf0;
    iVar6 = sp_el0;
    iStack_c8 = *(iVar6 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar21 = *(iVar8 + 0x48);
    iVar6 = iVar9;
    uVar20 = uVar16;
    puStack_c0 = &stack0xffffffffffffffa0;
    piStack_b0 = piVar22;
    iStack_a8 = param_2;
    puStack_a0 = param_3;
    iStack_98 = param_4;
    uStack_90 = param_5;
    iStack_88 = param_1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar15 = puVar14;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar6 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(iVar8), (uVar7 & 1) == 0))))
        goto code_r0x08008c7c;
    }
    else {
code_r0x08008c7c:
        puVar19 = *(auVar24._8_8_ + 8);
        pcVar4 = puVar19[0xe];
        if (pcVar4 == NULL) {
            pcVar18 = *puVar19;
            pcVar4 = "(null)";
            if (pcVar18 != NULL) {
                pcVar4 = pcVar18;
            }
        }
        iVar3 = strlen(pcVar4);
        puVar15 = iVar3 + 1 + 0x28;
        iVar8 = trace_event_buffer_reserve(&uStack_f8,iVar8);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            puVar19 = *(auVar24._8_8_ + 8);
            pcVar4 = puVar19[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = *puVar19;
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(iVar8 + 0x28,pcVar4);
            *(iVar8 + 0x10) = puVar14;
            *(iVar8 + 0x18) = iVar9;
            *(iVar8 + 0x20) = uVar16;
            trace_event_buffer_commit(&uStack_f8);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar12 = auVar24._8_8_;
    iVar8 = auVar24._0_8_;
    *extraout_x18_00 = sym.perf_trace_iommu_map_pages;
    pcStack_158 = sym.perf_trace_iommu_map_pages;
    iVar9 = sp_el0;
    iStack_168 = *(iVar9 + 0x5e0);
    iStack_170 = 0;
    uStack_174 = 0;
    pcVar4 = (*(iVar12 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar18 = **(iVar12 + 8);
        pcVar4 = "(null)";
        if (pcVar18 != NULL) {
            pcVar4 = pcVar18;
        }
    }
    puVar14 = puVar15;
    iVar11 = iVar6;
    uVar16 = uVar20;
    ppuStack_160 = &puStack_c0;
    uStack_150 = uVar5;
    iStack_148 = unaff_x27;
    uVar5 = strlen(pcVar4);
    iVar9 = tpidr_el1;
    piVar22 = iVar9 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar14 = &uStack_174;
        unaff_x25 = (uVar5 + 0x34U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(unaff_x25,&iStack_170);
        uVar7 = _trace_event_reg;
        if (iVar9 != 0) {
            *(iStack_170 + 0xe8) = &ppuStack_160;
            *(iStack_170 + 0xf8) = auStack_180;
            *(iStack_170 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8008d3c;
            *(iStack_170 + 0x108) = 5;
            *(iVar9 + 8) = uVar5 * 0x10000 + 0x10028;
            pcVar4 = (*(iVar12 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = **(iVar12 + 8);
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(iVar9 + 0x28,pcVar4);
            puVar14 = uStack_174;
            uVar16 = 1;
            *(iVar9 + 0x10) = puVar15;
            *(iVar9 + 0x18) = iVar6;
            *(iVar9 + 0x20) = uVar20;
            iVar11 = iVar8;
            perf_trace_run_bpf_submit(iVar9,unaff_x25);
            unaff_x27 = iVar9;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_168) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar13 = auVar25._8_8_;
    iVar10 = auVar25._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_01 = 0x8008ee8;
    uStack_1b8 = 0x8008ee8;
    iVar9 = sp_el0;
    uVar7 = uVar16 & 0xffffffff;
    iStack_1c8 = *(iVar9 + 0x5e0);
    uVar23 = *(iVar10 + 0x48);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uVar21 = uVar23;
    iVar9 = iVar11;
    uVar17 = uVar16;
    pppuStack_1c0 = &ppuStack_160;
    piStack_1b0 = piVar22;
    puStack_1a0 = puVar15;
    iStack_198 = iVar6;
    uStack_190 = uVar20;
    iStack_228 = iVar10;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar15 = puVar14;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar9 = 0;
            iStack_1a8 = iVar12;
            iStack_188 = iVar8;
            event_triggers_call(iVar10,0);
            auVar24._8_8_ = iStack_1a8;
            auVar24._0_8_ = iStack_188;
        }
        iStack_1a8 = auVar24._8_8_;
        iStack_188 = auVar24._0_8_;
        if ((uVar21 >> 6 & 1) == 0) {
            if ((uVar21 >> 9 & 1) != 0) {
                uVar20 = trace_event_ignore_this_pid(iVar10);
                auVar24._8_8_ = iStack_1a8;
                auVar24._0_8_ = iStack_188;
                if ((uVar20 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_1a8 = auVar24._8_8_;
        iStack_188 = auVar24._0_8_;
        pcVar4 = (*(iVar13 + 8))[0xe];
        if (pcVar4 == NULL) {
            pcVar18 = **(iVar13 + 8);
            pcVar4 = "(null)";
            if (pcVar18 != NULL) {
                pcVar4 = pcVar18;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar21 = iVar3 + 1;
        uVar23 = uVar21;
        puVar15 = uVar21 + 0x20;
        iVar6 = trace_event_buffer_reserve(&uStack_1f8,iVar10);
        auVar24._8_8_ = iStack_1a8;
        auVar24._0_8_ = iStack_188;
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar21 * 0x10000 | 0x20;
            pcVar4 = (*(iVar13 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = **(iVar13 + 8);
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(iVar6 + 0x20,pcVar4);
            *(iVar6 + 0x10) = puVar14;
            puVar14 = NULL;
            uVar21 = uVar16;
            while (uVar21 != 0) {
                puVar14 = puVar14 + *(iVar11 + 0xc);
                iVar11 = sg_next(iVar11);
                uVar21 = uVar7 - 1;
                uVar7 = uVar21;
            }
            *(iVar6 + 0x18) = puVar14;
            trace_event_buffer_commit(&uStack_1f8);
            auVar24._8_8_ = iStack_1a8;
            auVar24._0_8_ = iStack_188;
            iStack_228 = iVar6;
        }
    }
code_r0x08009020:
    iStack_1a8 = auVar24._8_8_;
    iStack_188 = auVar24._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar8 = auVar24._0_8_;
    *extraout_x18_02 = sym.perf_trace_map_sg;
    pcStack_258 = sym.perf_trace_map_sg;
    pcStack_240 = sym.perf_trace_iommu_map_pages;
    iVar6 = sp_el0;
    iStack_268 = *(iVar6 + 0x5e0);
    uVar16 = uVar17 & 0xffffffff;
    puVar19 = *(auVar24._8_8_ + 8);
    iStack_270 = 0;
    uStack_274 = 0;
    pcVar4 = puVar19[0xe];
    if (pcVar4 == NULL) {
        pcVar18 = *puVar19;
        pcVar4 = "(null)";
        if (pcVar18 != NULL) {
            pcVar4 = pcVar18;
        }
    }
    pppuStack_260 = &pppuStack_1c0;
    uStack_250 = uVar5;
    iStack_248 = unaff_x27;
    uStack_238 = unaff_x25;
    uStack_230 = uVar23;
    iStack_220 = iVar13;
    puStack_218 = puVar14;
    iStack_210 = iVar11;
    uStack_208 = uVar7;
    iVar3 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar22 != 0)) {
        uVar23 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar7 = perf_trace_buf_alloc(uVar23,&iStack_270,&uStack_274);
        uVar20 = _trace_event_reg;
        if (uVar7 != 0) {
            *(iStack_270 + 0xe8) = &pppuStack_260;
            *(iStack_270 + 0xf8) = auStack_280;
            *(iStack_270 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x8009058;
            *(iStack_270 + 0x108) = 5;
            *(uVar7 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar19 = *(auVar24._8_8_ + 8);
            pcVar4 = puVar19[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = *puVar19;
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(uVar7 + 0x20,pcVar4);
            *(uVar7 + 0x10) = puVar15;
            puVar15 = NULL;
            uVar21 = uVar17;
            while (uVar21 != 0) {
                puVar15 = puVar15 + *(iVar9 + 0xc);
                iVar9 = sg_next(iVar9);
                uVar21 = uVar16 - 1;
                uVar16 = uVar21;
            }
            *(uVar7 + 0x18) = puVar15;
            perf_trace_run_bpf_submit(uVar7,uVar23,uStack_274,iVar8,1,iStack_270,piVar22,0);
            unaff_x25 = uVar7;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_268) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar19 = auVar24._8_8_;
    iVar12 = auVar24._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_03 = 0x8009228;
    uStack_2a8 = 0x8009228;
    iVar6 = sp_el0;
    iStack_2b8 = *(iVar6 + 0x5e0);
    uVar20 = *(iVar12 + 0x48);
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uVar21 = uVar20;
    pppuStack_2b0 = &pppuStack_260;
    iStack_2a0 = iVar9;
    uStack_290 = uVar16;
    iStack_288 = iVar8;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            event_triggers_call(iVar12,0,0,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar12), (uVar16 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar4 = puVar19[0xe];
        if (puVar19[0xe] == NULL) {
            pcVar4 = "(null)";
            if (*puVar19 != NULL) {
                pcVar4 = *puVar19;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar21 = iVar3 + 1;
        uVar20 = uVar21;
        iVar6 = trace_event_buffer_reserve(&uStack_2e8,iVar12,uVar21 + 0xc);
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar21 * 0x10000 | 0xc;
            pcVar4 = puVar19[0xe];
            if (puVar19[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar19 != NULL) {
                    pcVar4 = *puVar19;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            trace_event_buffer_commit(&uStack_2e8);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar19 = auVar25._8_8_;
    iVar9 = auVar25._0_8_;
    *extraout_x18_04 = sym.perf_trace_tlbsync_timeout;
    pcStack_338 = sym.perf_trace_tlbsync_timeout;
    iVar6 = sp_el0;
    iStack_348 = *(iVar6 + 0x5e0);
    iStack_350 = 0;
    uStack_354 = 0;
    pcVar4 = puVar19[0xe];
    if (puVar19[0xe] == NULL) {
        pcVar4 = "(null)";
        if (*puVar19 != NULL) {
            pcVar4 = *puVar19;
        }
    }
    pppuStack_340 = &pppuStack_2b0;
    uStack_330 = unaff_x25;
    uStack_320 = uVar23;
    puStack_318 = puVar15;
    piStack_310 = piVar22;
    uStack_308 = uVar20;
    auStack_300 = auVar24;
    iVar3 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar22 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(piVar22,&iStack_350,&uStack_354);
        uVar16 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_350 + 0xe8) = &pppuStack_340;
            *(iStack_350 + 0xf8) = auStack_360;
            *(iStack_350 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x800934c;
            *(iStack_350 + 0x108) = 5;
            *(iVar6 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar4 = puVar19[0xe];
            if (puVar19[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar19 != NULL) {
                    pcVar4 = *puVar19;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            perf_trace_run_bpf_submit(iVar6,piVar22,uStack_354,iVar9,1,iStack_350,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_348) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar8 = auVar24._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_05 = 0x80094d4;
    uStack_388 = 0x80094d4;
    iVar6 = sp_el0;
    iStack_398 = *(iVar6 + 0x5e0);
    uVar5 = *(iVar8 + 0x48);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uVar21 = uVar5;
    pppuStack_390 = &pppuStack_340;
    piStack_380 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            puStack_370 = puVar19;
            iStack_368 = iVar9;
            event_triggers_call(iVar8,0,0,0);
            auVar25._8_8_ = puStack_370;
            auVar25._0_8_ = iStack_368;
        }
        puStack_370 = auVar25._8_8_;
        iStack_368 = auVar25._0_8_;
        if ((uVar21 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar21 >> 9 & 1) != 0) {
            uVar16 = trace_event_ignore_this_pid(iVar8);
            auVar25._8_8_ = puStack_370;
            auVar25._0_8_ = iStack_368;
            if ((uVar16 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_370 = auVar25._8_8_;
    iStack_368 = auVar25._0_8_;
    iVar6 = trace_event_buffer_reserve(&uStack_3c8,iVar8,0x10);
    auVar25._8_8_ = puStack_370;
    auVar25._0_8_ = iStack_368;
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar24._8_8_;
        trace_event_buffer_commit(&uStack_3c8);
        auVar25._8_8_ = puStack_370;
        auVar25._0_8_ = iStack_368;
    }
code_r0x08009570:
    puStack_370 = auVar25._8_8_;
    iStack_368 = auVar25._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_398) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar9 = auVar25._0_8_;
    *extraout_x18_06 = sym.perf_trace_smmu_init;
    pcStack_3f8 = sym.perf_trace_smmu_init;
    iVar6 = sp_el0;
    iStack_408 = *(iVar6 + 0x5e0);
    iStack_410 = 0;
    uStack_414 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    pppuStack_400 = &pppuStack_390;
    piStack_3f0 = piVar22;
    uStack_3e8 = uVar5;
    auStack_3e0 = auVar24;
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_410,&uStack_414);
        uVar16 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_410 + 0xe8) = &pppuStack_400;
            *(iStack_410 + 0xf8) = auStack_420;
            *(iStack_410 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x80095a4;
            *(iStack_410 + 0x108) = 5;
            *(iVar6 + 8) = auVar25._8_8_;
            perf_trace_run_bpf_submit(iVar6,0x14,uStack_414,iVar9,1,iStack_410,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_408) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_07 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.arm_smmu_probe_device.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e00 (size 8) =====

int64_t * sym.arm_smmu_probe_device.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t *arg1;
    ulong *puVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x340) == 0) {
        if ((obj.using_legacy_binding & 1) == 0) {
            return 0xffffffffffffffed;
        }
    }
    else if ((obj.using_legacy_binding & 1) == 0) {
        puVar12 = *(*(param_1 + 0x340) + 0x40);
        if ((puVar12 == NULL) || (*puVar12 != reloc.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt)) {
            return 0xffffffffffffffed;
        }
        iVar7 = driver_find_device(0x8001478,0,puVar12[1],sym.device_match_fwnode.cfi_jt);
        put_device();
        if (iVar7 == 0) {
            return 0xffffffffffffffed;
        }
        arg1 = *(iVar7 + 0x98);
        if (arg1 == NULL) {
            return 0xffffffffffffffed;
        }
        uVar10 = *(puVar12 + 0x14);
        if (uVar10 != 0) {
            uVar9 = *(arg1 + 0xb);
            uVar13 = 0;
            do {
                uVar3 = *(puVar12 + uVar13 * 4 + 0x18);
                uVar2 = uVar3 & 0xffff;
                if ((uVar2 & ~*(arg1 + 0xb)) != 0) {
                    pcVar8 = "stream ID 0x%x out of range for SMMU (0x%x)\n";
code_r0x0800e294:
                    _dev_err(param_1,pcVar8,uVar2,uVar9);
                    iVar6 = -0x16;
                    goto code_r0x0800e1d8;
                }
                uVar2 = uVar3 >> 0x10;
                if ((uVar2 & (*(arg1 + 0x5a) ^ 0xffffffff)) != 0) {
                    pcVar8 = "SMR mask 0x%x out of range for SMMU (0x%x)\n";
                    uVar9 = *(arg1 + 0x5a);
                    goto code_r0x0800e294;
                }
                uVar13 = uVar13 + 1;
            } while (uVar10 != uVar13);
        }
        puVar12 = __kmalloc(uVar10 * 2 + 8,0xdc0);
        if (puVar12 == NULL) {
            iVar6 = -0xc;
            goto code_r0x0800e1d8;
        }
        iVar7 = *(param_1 + 0x340);
        *puVar12 = arg1;
        *(iVar7 + 0x50) = puVar12;
        if (uVar10 != 0) {
            uVar13 = uVar10;
            if (0x80000000 < uVar10 + 0x7fffffff) {
                uVar13 = uVar10 & 1;
                uVar9 = uVar10 & 0xfffffffe;
                uVar2 = uVar10;
                do {
                    uVar9 = uVar9 - 2;
                    *(puVar12 + (uVar2 - 2) * 2 + 8) = 0xffff;
                    *(puVar12 + (uVar2 - 1) * 2 + 8) = 0xffff;
                    uVar2 = uVar2 - 2;
                } while (uVar9 != 0);
                if (uVar10 == (uVar10 & 0xfffffffe)) goto code_r0x0800e188;
            }
            iVar6 = uVar13 - 1;
            do {
                *(puVar12 + iVar6 * 2 + 8) = 0xffff;
                iVar6 = iVar6 + -1;
            } while (iVar6 != -1);
        }
code_r0x0800e188:
        iVar7 = *arg1;
        if (((*(iVar7 + 0x200) & 7) == 0) && (iVar6 = __pm_runtime_resume(iVar7,4), iVar6 < 0)) {
            puVar1 = iVar7 + 0x1f8;
            uVar11 = *puVar1;
            do {
                uVar10 = uVar11;
                if (uVar10 == 0) break;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar13 = *puVar1;
                    uVar11 = uVar13;
                    if (uVar13 != uVar10) goto code_r0x0800e258;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = uVar10 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800e258:
            } while (uVar10 != uVar13);
        }
        else {
            iVar6 = sym.arm_smmu_master_alloc_smes(param_1);
            sym.arm_smmu_rpm_put(arg1);
            if (iVar6 == 0) {
                device_link_add(param_1,*arg1,0x14);
                return arg1 + 0x1c;
            }
        }
        kfree(puVar12);
        goto code_r0x0800e1d8;
    }
    iVar6 = -0x13;
code_r0x0800e1d8:
    iommu_fwspec_free(param_1);
    return iVar6;
}


// ===== sym.arm_smmu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e08 (size 8) =====

int sym.arm_smmu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
              (int64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,uint param_6,ulong param_7
              ,ulong param_8)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    uint uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t iVar12;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + -0xa0);
    if (iVar11 == 0) {
        iVar5 = -0x13;
    }
    else {
        piVar10 = *(param_1 + -0xb0);
        iVar12 = *piVar10;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar12,4), iVar5 < 0)) {
            puVar1 = iVar12 + 0x1f8;
            uVar9 = *puVar1;
            do {
                uVar8 = uVar9;
                if (uVar8 == 0) {
                    return iVar5;
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar9 = uVar2;
                    if (uVar2 != uVar8) goto code_r0x0800d838;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar8 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800d838:
            } while (uVar8 != uVar2);
        }
        else {
            pcVar13 = *(iVar11 + 8);
            uVar7 = 0xcc0;
            if ((*(param_1 + -0x27) & 2) != 0) {
                uVar7 = 0xa20;
            }
            __cfi_slowpath_diag(0xa20,0x6bcdfb1740954593,pcVar13,0x8001d30);
            iVar5 = (*pcVar13)(iVar11,param_2,param_3,param_4,param_5,param_6,uVar7,param_8);
            iVar11 = *piVar10;
            if ((*(iVar11 + 0x200) & 7) == 0) {
                uVar6 = ktime_get_mono_fast_ns();
                *(iVar11 + 0x218) = uVar6;
                __pm_runtime_idle(*piVar10,5);
            }
            if (iVar5 == 0) {
                iVar5 = 0;
            }
        }
    }
    return iVar5;
}


// ===== sym.__typeid__ZTSFiP15arm_smmu_domainP15arm_smmu_deviceP6deviceiE_global_addr @ 0x08007e10 (size 8) =====

uint64_t sym.__typeid__ZTSFiP15arm_smmu_domainP15arm_smmu_deviceP6deviceiE_global_addr
                   (ulong param_1,int64_t param_2,int64_t param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = 0;
    if (*(param_3 + 0x340) != 0) {
        iVar8 = *(*(param_3 + 0x340) + 0x40);
    }
    uVar2 = *(iVar8 + 0x14);
    if (uVar2 == 0) {
code_r0x08016144:
        iVar7 = *(param_2 + 0x30);
        uVar12 = 2;
    }
    else {
        if ((*(iVar8 + 0x18) & 0xfffe) != 0) {
            uVar5 = 1;
            do {
                uVar10 = uVar5;
                if (uVar2 == uVar10) goto code_r0x08016144;
                uVar5 = uVar10 + 1;
            } while ((*(iVar8 + uVar10 * 4 + 0x18) & 0xfffe) != 0);
            if (uVar2 <= uVar10) goto code_r0x08016144;
        }
        uVar12 = 0;
        iVar7 = 2;
    }
    do {
        uVar6 = _find_next_bit(param_2 + 0x38,0,iVar7,uVar12,0xffffffffffffffff,0);
        if (iVar7 == uVar6) {
            return 0xffffffe4;
        }
        uVar9 = 1L << (uVar6 & 0x3f);
        puVar1 = param_2 + (uVar6 >> 6 & 0x3ffffff) * 8 + 0x38;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar11 | uVar9;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
    } while ((uVar11 & uVar9) != 0);
    return uVar6;
}


// ===== sym.arm_smmu_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e18 (size 8) =====

int sym.arm_smmu_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
              (int64_t param_1,ulong param_2,ulong param_3,uint param_4,uint param_5,ulong param_6,ulong param_7)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    uint uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    code *pcVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + -0xa0);
    if (iVar10 == 0) {
        iVar5 = -0x13;
    }
    else {
        piVar13 = *(param_1 + -0xb0);
        iVar11 = *piVar13;
        if (((*(iVar11 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar11,4), iVar5 < 0)) {
            puVar1 = iVar11 + 0x1f8;
            uVar9 = *puVar1;
            do {
                uVar8 = uVar9;
                if (uVar8 == 0) {
                    return iVar5;
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar9 = uVar2;
                    if (uVar2 != uVar8) goto code_r0x0800da88;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar8 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800da88:
            } while (uVar8 != uVar2);
        }
        else {
            pcVar12 = *(iVar10 + 0x10);
            uVar7 = 0xcc0;
            if ((*(param_1 + -0x27) & 2) != 0) {
                uVar7 = 0xa20;
            }
            __cfi_slowpath_diag(0xa20,0x1a23b7727c32edfa,pcVar12,0x8001d50);
            iVar5 = (*pcVar12)(iVar10,param_2,param_3,param_4,param_5,uVar7,param_7);
            iVar10 = *piVar13;
            if ((*(iVar10 + 0x200) & 7) == 0) {
                uVar6 = ktime_get_mono_fast_ns();
                *(iVar10 + 0x218) = uVar6;
                __pm_runtime_idle(*piVar13,5);
            }
            if (iVar5 == 0) {
                iVar5 = 0;
            }
        }
    }
    return iVar5;
}


// ===== sym.qcom_adreno_smmu_set_ttbr0_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007e20 (size 8) =====

ulong sym.qcom_adreno_smmu_set_ttbr0_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt
                (uchar param_1 [16],uchar param_2 [16],int64_t *param_3,uint64_t *param_4,ulong param_5,
                int64_t param_6)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t *puVar4;
    int64_t iVar5;
    uint8_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *(param_3 + 6);
    iVar5 = *(*param_3 + 0x48);
    puVar4 = iVar5 + uVar7 * 0x30;
    puVar9 = puVar4 + 2;
    uVar2 = *puVar9;
    if ((uVar2 >> 0x17 & 1) == 0) {
        if (param_4 == NULL) {
            if ((uVar2 >> 7 & 1) != 0) goto code_r0x08016328;
            uVar2 = *(param_3[2] + -0x20);
            uVar2 = (uVar2 & 0x60) << 7 | (uVar2 >> 3 & 3) << 0xe | (uVar2 >> 7 & 3) << 10 | uVar2 >> 1 & 0x300 |
                    uVar2 >> 0xb & 0x3f;
            uVar1 = uVar2 | 0x800000;
            if ((*(param_3[2] + -0x58) & 0x20) != 0) {
                uVar1 = uVar2 << 0x10 | 0x80;
            }
            puVar6 = *(iVar5 + uVar7 * 0x30 + 0x28);
            *puVar9 = uVar1;
            uVar8 = *(puVar6 + 2) << 0x30;
        }
        else {
            if ((uVar2 >> 7 & 1) == 0) goto code_r0x08016328;
            uVar1 = param_4[7];
            uVar1 = (uVar1 & 0x60) << 7 | (uVar1 >> 3 & 3) << 0xe | (uVar1 >> 7 & 3) << 10 | uVar1 >> 1 & 0x300 |
                    uVar1 >> 0xb & 0x3f;
            if ((*param_4 & 0x20) != 0) {
                uVar1 = uVar1 << 0x10;
            }
            *puVar9 = uVar1 | uVar2 & 0xff7fff7f;
            uVar8 = param_4[6];
            puVar6 = *(iVar5 + uVar7 * 0x30 + 0x28);
            *puVar4 = uVar8;
            uVar8 = uVar8 | *(puVar6 + 2) << 0x30;
        }
        *puVar4 = uVar8;
        sym.arm_smmu_write_context_bank(*param_3,*puVar6,param_2,param_6);
        uVar3 = 0;
    }
    else {
code_r0x08016328:
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08007e28 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.arm_smmu_device_probe.73c668e47250e1a2d5221ed72817c1f7.cfi_jt);
    platform_driver_unregister(reloc.qsmmuv500_tbu_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt);
    return;
}


// ===== sym.arm_smmu_iotlb_sync.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e30 (size 8) =====

void sym.arm_smmu_iotlb_sync.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0xb0) != 0) {
        sym.arm_smmu_flush_iotlb_all(param_1);
    }
    return;
}


// ===== sym.__typeid__ZTSFyP15arm_smmu_domainP19qcom_iommu_atos_txnE_global_addr @ 0x08007e38 (size 8) =====

int64_t sym.__typeid__ZTSFyP15arm_smmu_domainP19qcom_iommu_atos_txnE_global_addr(code *param_1,uint64_t *param_2)

{
    uint32_t uVar1;
    code cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    code *unaff_x20;
    code *pcVar10;
    int64_t iVar11;
    uint64_t uVar12;
    code *unaff_x24;
    code *unaff_x25;
    int64_t iVar13;
    uint32_t unaff_w27;
    uint32_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_88;
    int64_t iStack_80;
    uint32_t uStack_74;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iVar11 = *param_1;
    uVar14 = param_2[1];
    uVar1 = *(param_2 + 0xc);
    uVar12 = *param_2;
    piVar9 = *(iVar11 + 0x130);
    uStack_70 = uVar12;
    if (piVar9 != iVar11 + 0x130) {
        uStack_74 = param_1[0x30];
        do {
            unaff_x20 = param_1;
            if ((*(piVar9 + 7) <= uVar1) && (uVar1 < *(piVar9 + 0x3c) + *(piVar9 + 7))) {
                if ((piVar9 != NULL) && (iVar4 = sym.arm_smmu_power_on(piVar9[6]), iVar4 == 0)) {
                    if (uVar12 >> (*(piVar9 + 8) & 0x3f) == 0) {
                        iVar13 = *param_1;
                        cVar2 = param_1[0x30];
                        unaff_w27 = cVar2;
                        iVar7 = of_find_property(*(piVar9[2] + 0x2f0),"qcom,opt-out-tbu-halting",0);
                        unaff_x24 = sym.__typeid__ZTSFvP20qsmmuv500_tbu_deviceE_global_addr;
                        if (iVar7 != 0) {
                            _dev_notice(piVar9[2],"TBU opted-out for halting!\n");
                            iVar13 = 0;
                            goto code_r0x08015568;
                        }
                        iStack_80 = piVar9 + 0x44;
                        unaff_x25 = _raw_spin_lock_irqsave(iStack_80);
                        if (piVar9[9] == 0) {
                            pcVar10 = *piVar9[5];
                            if (3 < (pcVar10 + -0x8007fa0 >> 3 | pcVar10 << 0x3d)) {
                                __cfi_slowpath_diag(0x62199a7fe1774e2e,pcVar10,0x8001f70);
                            }
                            iVar4 = (*pcVar10)(piVar9);
                            if (iVar4 != 0) goto code_r0x08015520;
                            uVar6 = *(iVar13 + 0x10) + cVar2;
                            if ((*(iVar13 + 0x28) != NULL) &&
                               (unaff_x20 = **(iVar13 + 0x28), uStack_88 = uVar14, unaff_x20 != NULL))
                            goto code_r0x080156f8;
                            uVar6 = sym.readl_relaxed_2(*(iVar13 + 8) + (uVar6 << (*(iVar13 + 0x14) & 0x1f)) + 0x58);
                            if ((uVar6 >> 0x1e & 1) == 0) goto code_r0x080154f0;
                            goto code_r0x080153ec;
                        }
                        iVar4 = piVar9[9] + 1;
                        goto code_r0x08014fa8;
                    }
                    iVar4 = ___ratelimit(obj.qsmmuv500_iova_to_phys._rs,"qsmmuv500_iova_to_phys");
                    if (iVar4 != 0) {
                        _dev_err(piVar9[2],"ECATS: address too large: %pad\n",&uStack_70);
                    }
                }
                break;
            }
            piVar9 = *piVar9;
        } while (piVar9 != iVar11 + 0x130);
    }
    iVar13 = 0;
    do {
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_68) {
            return iVar13;
        }
        __stack_chk_fail();
        uVar6 = uVar14;
code_r0x080156f8:
        uVar14 = uStack_88;
        if (unaff_x20 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,unaff_x20,0x8001e90);
        }
        uVar6 = (*unaff_x20)(iVar13,uVar6,0x58);
        if ((uVar6 >> 0x1e & 1) != 0) {
code_r0x080153ec:
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == NULL) || (pcVar10 = **(iVar13 + 0x28), pcVar10 == NULL)) {
                uVar5 = sym.readl_relaxed_2(*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                }
                uVar5 = (*pcVar10)(iVar13,iVar4,0);
            }
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == 0) || (pcVar10 = *(*(iVar13 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uVar5 & 0xffffff3f,*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar13,iVar4,0,uVar5 & 0xffffff3f);
                unaff_x24 = sym.__typeid__ZTSFvP20qsmmuv500_tbu_deviceE_global_addr;
            }
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == 0) || (pcVar10 = *(*(iVar13 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uVar6,*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)) + 0x58);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar13,iVar4,0x58,uVar6);
            }
            DataSynchronizationBarrier(3,2,0);
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == 0) || (pcVar10 = *(*(iVar13 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(1,*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)) + 8);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar13,iVar4,8,1);
            }
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == 0) || (pcVar10 = *(*(iVar13 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uVar5,*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar13,iVar4,0,uVar5);
            }
        }
code_r0x080154f0:
        pcVar10 = *(piVar9[5] + 8);
        if (3 < (pcVar10 + -0x8007fa0 >> 3 | pcVar10 << 0x3d)) {
            __cfi_slowpath_diag(0x62199a7fe1774e2e,pcVar10,0x8001f90);
        }
        iVar4 = (*pcVar10)(piVar9);
        uStack_88 = uVar14;
        if (iVar4 == 0) {
            iVar4 = 1;
code_r0x08014fa8:
            *(piVar9 + 9) = iVar4;
            _raw_spin_unlock_irqrestore(iStack_80,unaff_x25);
            iVar4 = *(iVar11 + 0x10) + uStack_74;
            if ((*(iVar11 + 0x28) == NULL) || (pcVar10 = **(iVar11 + 0x28), pcVar10 == NULL)) {
                uStack_88 = sym.readl_relaxed_2(*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                }
                uStack_88 = (*pcVar10)(iVar11,iVar4,0);
            }
            iVar4 = *(iVar11 + 0x10) + uStack_74;
            if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uStack_88 & 0xffffff3f,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar11,iVar4,0,uStack_88 & 0xffffff3f);
            }
            iVar4 = *(iVar11 + 0x10) + uStack_74;
            if ((*(iVar11 + 0x28) == NULL) || (pcVar10 = **(iVar11 + 0x28), pcVar10 == NULL)) {
                uVar6 = sym.readl_relaxed_2(*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 0x58);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                }
                uVar6 = (*pcVar10)(iVar11,iVar4,0x58);
            }
            if ((uVar6 & 0xc00001fe) != 0) {
                iVar4 = *(iVar11 + 0x10) + uStack_74;
                if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                    sym.writel_relaxed_2(uVar6,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 0x58);
                    DataSynchronizationBarrier(3,2,0);
                }
                else {
                    if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                        __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                    }
                    (*pcVar10)(iVar11,iVar4,0x58,uVar6);
                    DataSynchronizationBarrier(3,2,0);
                }
                if ((uVar6 >> 0x1e & 1) != 0) {
                    iVar4 = *(iVar11 + 0x10) + uStack_74;
                    if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                        sym.writel_relaxed_2(1,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 8);
                    }
                    else {
                        if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                        }
                        (*pcVar10)(iVar11,iVar4,8,1);
                    }
                }
            }
            uVar8 = _raw_spin_lock_irqsave();
            uVar6 = 0;
            do {
                pcVar10 = *(piVar9[5] + 0x18);
                if (1 < (pcVar10 + -0x8007f30 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0x88b09b4aa1d2e79e,pcVar10,0x8001f30);
                }
                iVar13 = (*pcVar10)(piVar9,uVar12,uVar1,uVar14);
                iVar4 = *(iVar11 + 0x10) + uStack_74;
                if ((*(iVar11 + 0x28) == NULL) || (pcVar10 = **(iVar11 + 0x28), pcVar10 == NULL)) {
                    uVar5 = sym.readl_relaxed_2(*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 0x58);
                }
                else {
                    if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                    }
                    uVar5 = (*pcVar10)(iVar11,iVar4,0x58);
                }
                unaff_x25 = uVar5;
                if ((uVar5 & 0xc00001fe) != 0) {
                    iVar4 = *(iVar11 + 0x10) + uStack_74;
                    if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                        sym.writel_relaxed_2(unaff_x25,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 0x58);
                    }
                    else {
                        if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                        }
                        (*pcVar10)(iVar11,iVar4,0x58,unaff_x25);
                    }
                    DataSynchronizationBarrier(3,2,0);
                    unaff_w27 = uVar14;
                    if ((uVar5 >> 0x1e & 1) != 0) {
                        iVar4 = *(iVar11 + 0x10) + uStack_74;
                        if ((*(iVar11 + 0x28) == 0) || (unaff_x25 = *(*(iVar11 + 0x28) + 8), unaff_x25 == NULL)) {
                            sym.writel_relaxed_2(1,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 8);
                        }
                        else {
                            if (unaff_x25 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                                __cfi_slowpath_diag(0x6809a6077d3a8c69,unaff_x25,0x8001eb0);
                            }
                            (*unaff_x25)(iVar11,iVar4,8,1);
                        }
                    }
                }
            } while ((iVar13 == 0) && (bVar3 = uVar6 < 2, uVar6 = uVar6 + 1, bVar3));
            uVar6 = *(iVar11 + 0x10) + uStack_74;
            uVar12 = uVar6;
            if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uStack_88,*(iVar11 + 8) + (uVar6 << (*(iVar11 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar11,uVar12,0,uStack_88);
            }
            unaff_x24 = sym.__typeid__ZTSFvP20qsmmuv500_tbu_deviceE_global_addr;
            _raw_spin_unlock_irqrestore(iVar11 + 0x180,uVar8);
            iVar11 = _raw_spin_lock_irqsave(iStack_80);
            iVar4 = piVar9[9] + -1;
            if (iVar4 == 0) {
                pcVar10 = *(piVar9[5] + 0x10);
                if (5 < (pcVar10 + -0x80081f0 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0x6175088cc6504702,pcVar10,0x8001fb0);
                }
                (*pcVar10)(piVar9);
                *(piVar9 + 9) = 0;
            }
            else {
                if (piVar9[9] == 0) {
                    iVar11 = piVar9[2][0xe];
                    if (iVar11 == 0) {
                        iVar11 = *piVar9[2];
                    }
                    __warn_printk("%s bad tbu->halt_count",iVar11);
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x800,0x80155fc);
                    (*pcVar10)();
                }
                *(piVar9 + 9) = iVar4;
            }
            _raw_spin_unlock_irqrestore(iStack_80,iVar11);
        }
        else {
code_r0x08015520:
            _raw_spin_unlock_irqrestore(iStack_80,unaff_x25);
            iVar13 = 0;
        }
code_r0x08015568:
        unaff_x20 = *(piVar9[5] + 0x20);
        if (5 < (unaff_x20 - unaff_x24 >> 3 | unaff_x20 - unaff_x24 << 0x3d)) {
            __cfi_slowpath_diag(0x6175088cc6504702,unaff_x20,0x8001f50);
        }
        (*unaff_x20)(piVar9);
        DataSynchronizationBarrier(3,1,0);
        sym.arm_smmu_power_off(piVar9[3],piVar9[6]);
    } while( true );
}


// ===== sym.arm_smmu_skip_tlb_management.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e40 (size 8) =====

void sym.arm_smmu_skip_tlb_management.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,uchar param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(param_1 + -0x20);
    *(param_1 + 0xcd) = param_2;
    _raw_spin_unlock_irqrestore(param_1 + -0x20,uVar1);
    return;
}


// ===== sym.arm_smmu_unmap_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e48 (size 8) =====

ulong sym.arm_smmu_unmap_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + -0xa0);
    if (iVar2 == 0) {
        uVar1 = 0;
    }
    else {
        pcVar3 = *(iVar2 + 0x20);
        __cfi_slowpath_diag(0x7264df867f1d6ecd,pcVar3,0x8001d70);
        uVar1 = (*pcVar3)(iVar2,param_2,param_3,param_4,param_5);
    }
    return uVar1;
}


// ===== sym.arm_smmu_device_group.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e50 (size 8) =====

uint64_t sym.arm_smmu_device_group.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    code *extraout_x8;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0x340);
    if (iVar4 == 0) {
        piVar9 = NULL;
        iVar4 = 0;
    }
    else {
        piVar9 = *(iVar4 + 0x50);
        iVar4 = *(iVar4 + 0x40);
    }
    iVar8 = *piVar9;
    mutex_lock(iVar8 + 0x70);
    uStack_50 = 0;
    iStack_58 = of_parse_phandle(*(param_1 + 0x2f0),"qcom,iommu-group",0);
    if (((iStack_58 == 0) ||
        (((iVar2 = bus_for_each_dev(platform_bus_type,0,&iStack_58,
                                    sym.__bus_lookup_iommu_group.73c668e47250e1a2d5221ed72817c1f7.cfi_jt),
          uVar7 = uStack_50, iVar2 < 1 &&
          (iVar2 = bus_for_each_dev(pci_bus_type,0,&iStack_58,
                                    sym.__bus_lookup_iommu_group.73c668e47250e1a2d5221ed72817c1f7.cfi_jt),
          uVar7 = uStack_50, iVar2 < 1)) && (uVar7 = generic_device_group(param_1), 0xfffffffffffff000 < uVar7)))) ||
       (uVar7 == 0)) {
        if (*(iVar4 + 0x14) != 0) {
            iVar2 = 0;
            uVar6 = 0;
            do {
                uVar7 = *(*(iVar8 + 0x68) + *(piVar9 + iVar2 * 2 + 8) * 0x18);
                if ((uVar6 != 0) && (uVar7 != 0 && uVar6 != uVar7)) {
                    _dev_err(param_1,"ID:%x IDX:%x is already in a group!\n",*(iVar4 + iVar2 * 4 + 0x18));
                    uVar7 = 0xffffffffffffffea;
                    goto code_r0x0800e76c;
                }
                iVar2 = iVar2 + 1;
                uVar6 = uVar7;
            } while (*(iVar4 + 0x14) != iVar2);
            if (uVar7 != 0) {
                iommu_group_ref_get(uVar7);
                goto code_r0x0800e6f0;
            }
        }
        if (*(param_1 + 0x80) == pci_bus_type) {
            uVar7 = pci_device_group(param_1);
        }
        else {
            uVar7 = generic_device_group();
        }
        if (0xfffffffffffff000 < uVar7) {
            uVar7 = 0;
            goto code_r0x0800e76c;
        }
    }
code_r0x0800e6f0:
    if (uVar7 < 0xfffffffffffff001) {
        if (*(iVar8 + 0x28) == 0) goto code_r0x0800e738;
        pcVar5 = *(*(iVar8 + 0x28) + 0x58);
        if (pcVar5 == NULL) goto code_r0x0800e738;
        if (pcVar5 != sym.__typeid__ZTSFiP6deviceP11iommu_groupE_global_addr) goto code_r0x0800e7c8;
        goto code_r0x0800e718;
    }
code_r0x0800e76c:
    while( true ) {
        mutex_unlock(iVar8 + 0x70);
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        pcVar5 = extraout_x8;
code_r0x0800e7c8:
        __cfi_slowpath_diag(0x95e687ce58d02367,pcVar5,0x8001dd0);
code_r0x0800e718:
        iVar2 = (*pcVar5)(param_1,uVar7);
        if (iVar2 == 0) {
code_r0x0800e738:
            if (*(iVar4 + 0x14) != 0) {
                uVar3 = 0;
                do {
                    iVar1 = uVar3;
                    uVar3 = uVar3 + 1;
                    *(*(iVar8 + 0x68) + *(piVar9 + iVar1 * 2 + 8) * 0x18) = uVar7;
                } while (uVar3 < *(iVar4 + 0x14));
            }
        }
        else {
            iommu_group_put(uVar7);
            uVar7 = 0xffffffffffffffea;
        }
    }
    return uVar7;
}


// ===== sym.__typeid__ZTSFvPvE_global_addr @ 0x08007e58 (size 8) =====

void sym.__typeid__ZTSFvPvE_global_addr(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.arm_smmu_qcom_tlb_add_inv.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e60 (size 8) =====

void sym.arm_smmu_qcom_tlb_add_inv.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(param_1 + 0x90);
    *(param_1 + 0xa0) = *(param_1 + 0x17d) ^ 1;
    _raw_spin_unlock_irqrestore(param_1 + 0x90,uVar1);
    return;
}


// ===== sym.arm_smmu_qcom_tlb_sync.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e68 (size 8) =====

void sym.arm_smmu_qcom_tlb_sync.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(ulong *param_1)

{
    ulong *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    code *pcVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_1 + 0x12;
    uVar7 = _raw_spin_lock_irqsave(puVar1);
    if (*(param_1 + 0x17d) == '\0') {
        _raw_spin_unlock_irqrestore(puVar1,uVar7);
        iVar12 = **param_1;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar6 = __pm_runtime_resume(iVar12,4), iVar6 < 0)) {
            puVar2 = iVar12 + 0x1f8;
            uVar10 = *puVar2;
            do {
                uVar9 = uVar10;
                if (uVar9 == 0) break;
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    uVar3 = *puVar2;
                    uVar10 = uVar3;
                    if (uVar3 != uVar9) goto code_r0x080121f4;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar5) {
                        *puVar2 = uVar9 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                DataMemoryBarrier(2,3);
code_r0x080121f4:
            } while (uVar9 != uVar3);
        }
        uVar7 = _raw_spin_lock_irqsave(puVar1);
        if ((*(param_1 + 0x17d) == '\0') && (*(param_1 + 0x14) != '\0')) {
            pcVar8 = *param_1[5];
            if (4 < (pcVar8 + -0x8007e58 >> 3 | pcVar8 << 0x3d)) {
                __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar8,0x8001cf0);
            }
            (*pcVar8)(param_1);
            iVar12 = param_1[0x13];
            *(param_1 + 0x14) = 0;
            param_1[0x13] = 0;
            while (iVar12 != 0) {
                iVar12 = *(iVar12 + 0x20);
                qcom_io_pgtable_free_page();
            }
        }
        _raw_spin_unlock_irqrestore(puVar1,uVar7);
        piVar11 = *param_1;
        iVar12 = *piVar11;
        if ((*(iVar12 + 0x200) & 7) == 0) {
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar12 + 0x218) = uVar7;
            __pm_runtime_idle(*piVar11,5);
        }
    }
    else {
        *(param_1 + 0x14) = 0;
        _raw_spin_unlock_irqrestore(puVar1,uVar7);
    }
    return;
}


// ===== sym.arm_smmu_tlb_inv_context_s1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e70 (size 8) =====

void sym.arm_smmu_tlb_inv_context_s1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t *param_1)

{
    int iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    DataSynchronizationBarrier(3,2,0);
    iVar3 = *param_1;
    uVar2 = *(param_1 + 0x32);
    iVar1 = *(iVar3 + 0x10) + *(param_1 + 6);
    if ((*(iVar3 + 0x28) == 0) || (pcVar4 = *(*(iVar3 + 0x28) + 8), pcVar4 == NULL)) {
        sym.writel_relaxed(uVar2,*(iVar3 + 8) + (iVar1 << (*(iVar3 + 0x14) & 0x1f)) + 0x610);
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001b70);
        }
        (*pcVar4)(iVar3,iVar1,0x610,uVar2);
    }
    sym.arm_smmu_tlb_sync_context(param_1);
    return;
}


// ===== sym.arm_smmu_tlb_inv_context_s2.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e78 (size 8) =====

void sym.arm_smmu_tlb_inv_context_s2.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(ulong *param_1)

{
    uint16_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *arg1;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *param_1;
    DataSynchronizationBarrier(3,2,0);
    uVar1 = *(param_1 + 0x32);
    if ((arg1[5] == 0) || (pcVar4 = *(arg1[5] + 8), pcVar4 == NULL)) {
        sym.writel_relaxed(uVar1,arg1[1] + 100);
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001b70);
        }
        (*pcVar4)(arg1,0,100,uVar1);
    }
    uVar3 = _raw_spin_lock_irqsave(arg1 + 0xdc);
    iVar2 = sym.__arm_smmu_tlb_sync(arg1,0,0x70,0x74);
    if ((iVar2 != 0) &&
       (iVar2 = ___ratelimit(obj.arm_smmu_tlb_sync_global._rs,"arm_smmu_tlb_sync_global"), iVar2 != 0)) {
        _dev_err(*arg1,"TLB global sync failed!\n");
    }
    _raw_spin_unlock_irqrestore(arg1 + 0xdc,uVar3);
    return;
}


// ===== sym.__typeid__ZTSFvP15arm_smmu_deviceiE_global_addr @ 0x08007e80 (size 8) =====

void sym.__typeid__ZTSFvP15arm_smmu_deviceiE_global_addr(int64_t param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x68) + param_2 * 0x18;
    uVar2 = *(iVar5 + 0x14);
    uVar4 = *(iVar5 + 0xc);
    if (*(param_1 + 0x130) != '\0') {
        if (uVar4 == 2) {
            uVar2 = 0xff;
            uVar4 = 1;
        }
        else if (uVar4 == 1) {
            uVar2 = *(param_1 + 0x131);
            uVar4 = 0;
        }
    }
    iVar1 = param_2 * 4 + 0xc00;
    uVar4 = uVar2 | (uVar4 & 3) << 0x10 | (*(*(param_1 + 0x68) + param_2 * 0x18 + 0x10) & 3) << 0x18;
    if ((*(param_1 + 0x28) == 0) || (pcVar3 = *(*(param_1 + 0x28) + 8), pcVar3 == NULL)) {
        sym.writel_relaxed_2(uVar4,*(param_1 + 8) + iVar1);
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar3,0x8001eb0);
        }
        (*pcVar3)(param_1,0,iVar1,uVar4);
    }
    return;
}


// ===== sym.arm_smmu_tlb_add_walk_page.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e88 (size 8) =====

void sym.arm_smmu_tlb_add_walk_page.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = ((param_2 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
    uVar1 = _raw_spin_lock_irqsave(param_1 + 0x90);
    *(param_1 + 0xa0) = 1;
    *(uVar2 - 0x1ffffffe0) = *(param_1 + 0x98);
    *(param_1 + 0x98) = uVar2 - 0x200000000;
    _raw_spin_unlock_irqrestore(param_1 + 0x90,uVar1);
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08007e90 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.arm_smmu_release_device.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007e98 (size 8) =====

void sym.arm_smmu_release_device.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    uchar uVar3;
    uint32_t uVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *puVar12;
    ulong *in_x18;
    ulong *puVar13;
    int64_t *arg1;
    int64_t *piVar14;
    int16_t *piVar15;
    ulong *puVar16;
    uint uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x340);
    if (((iVar8 != 0) && (puVar16 = *(iVar8 + 0x40), puVar16 != NULL)) &&
       (*puVar16 == reloc.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt)) {
        puVar13 = *(iVar8 + 0x50);
        piVar14 = *puVar13;
        iVar8 = *piVar14;
        arg1 = piVar14;
        if ((*(iVar8 + 0x200) & 7) == 0) {
            iVar6 = __pm_runtime_resume(iVar8,4);
            if (iVar6 < 0) {
                puVar1 = iVar8 + 0x1f8;
                uVar10 = *puVar1;
                do {
                    uVar9 = uVar10;
                    if (uVar9 == 0) {
                        return;
                    }
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar4 = *puVar1;
                        uVar10 = uVar4;
                        if (uVar4 != uVar9) goto code_r0x0800e4ac;
                        cVar2 = '\x01';
                        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                            *puVar1 = uVar9 - 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800e4ac:
                    if (uVar9 == uVar4) {
                        return;
                    }
                } while( true );
            }
            arg1 = *puVar13;
        }
        mutex_lock();
        if (*(puVar16 + 0x14) != 0) {
            uVar9 = 0;
            do {
                piVar15 = puVar13 + uVar9 * 2 + 8;
                iVar8 = *piVar15;
                iVar11 = arg1[0xd] + iVar8 * 0x18;
                cVar2 = *(iVar11 + 0x15);
                iVar6 = *(iVar11 + 8) + -1;
                uVar3 = *(iVar11 + 0x14);
                *(iVar11 + 8) = iVar6;
                if (iVar6 == 0) {
                    puVar12 = arg1[0xd] + iVar8 * 0x18;
                    uVar17 = 1;
                    if (obj.disable_bypass != 0x0) {
                        uVar17 = 2;
                    }
                    *puVar12 = 0;
                    *(puVar12 + 1) = 0;
                    *(puVar12 + 0xc) = uVar17;
                    puVar12[2] = 0;
                    if (cVar2 == '\0') {
                        if (arg1[0xc] != 0) {
                            *(arg1[0xc] + iVar8 * 6 + 4) = 0;
                        }
                    }
                    else {
                        *(arg1[0xd] + iVar8 * 0x18 + 0x15) = 1;
                        *(arg1[0xd] + iVar8 * 0x18 + 0x14) = uVar3;
                    }
                    sym.arm_smmu_write_sme(arg1,iVar8);
                }
                *piVar15 = -1;
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(puVar16 + 0x14));
        }
        mutex_unlock(arg1 + 0xe);
        iVar8 = *piVar14;
        if ((*(iVar8 + 0x200) & 7) == 0) {
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar8 + 0x218) = uVar7;
            __pm_runtime_idle(*piVar14,5);
        }
        *(*(param_1 + 0x340) + 0x50) = 0;
        kfree(puVar13);
        iommu_fwspec_free(param_1);
    }
    return;
}


// ===== sym.arm_smmu_probe_finalize.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007ea0 (size 8) =====

void sym.arm_smmu_probe_finalize.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = NULL;
    if (*(param_1 + 0x340) != 0) {
        piVar1 = *(*(param_1 + 0x340) + 0x50);
    }
    iVar3 = *piVar1;
    iVar2 = *(iVar3 + 0x28);
    if ((iVar2 != 0) && (pcVar4 = *(iVar2 + 0x98), pcVar4 != NULL)) {
        __cfi_slowpath_diag(0xee78c6b915643417,pcVar4,0x8001db0);
        (*pcVar4)(iVar3,param_1);
    }
    return;
}


// ===== sym.qcom_adreno_smmu_get_ttbr1_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007ea8 (size 8) =====

int64_t sym.qcom_adreno_smmu_get_ttbr1_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x10) + -0x58;
}


// ===== sym.arm_smmu_iova_to_phys.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007eb0 (size 8) =====

ulong sym.arm_smmu_iova_to_phys.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    code *pcVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + -0xa0);
    if (iVar11 == 0) {
code_r0x0800dfec:
        uVar6 = 0;
    }
    else {
        piVar12 = *(param_1 + -0xb0);
        if (((*(piVar12 + 3) >> 5 & 1) == 0) || (*(param_1 + -0x68) != 0)) {
            pcVar10 = *(iVar11 + 0x28);
            __cfi_slowpath_diag(0x48fa85c07a417c12,pcVar10,0x8001d90);
            uVar6 = (*pcVar10)(iVar11,param_2);
        }
        else {
            iVar11 = *piVar12;
            if (((*(iVar11 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar11,4), iVar5 < 0)) {
                puVar1 = iVar11 + 0x1f8;
                uVar9 = *puVar1;
                do {
                    uVar8 = uVar9;
                    if (uVar8 == 0) goto code_r0x0800dfec;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar9 = uVar2;
                        if (uVar2 != uVar8) goto code_r0x0800dfcc;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar8 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800dfcc:
                    uVar6 = 0;
                } while (uVar8 != uVar2);
            }
            else {
                uVar6 = sym.__arm_smmu_iova_to_phys_hard(param_1,param_2);
                iVar11 = *piVar12;
                if ((*(iVar11 + 0x200) & 7) == 0) {
                    uVar7 = ktime_get_mono_fast_ns();
                    *(iVar11 + 0x218) = uVar7;
                    __pm_runtime_idle(*piVar12,5);
                }
            }
        }
    }
    return uVar6;
}


// ===== sym.__traceiter_tlbi_start.cfi_jt @ 0x08007eb8 (size 8) =====

ulong sym.__traceiter_tlbi_start.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018890;
    piVar1 = *0x8018890;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_tlbi_end.cfi_jt @ 0x08007ec0 (size 8) =====

ulong sym.__traceiter_tlbi_end.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80188d8;
    piVar1 = *0x80188d8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.arm_smmu_get_fault_ids.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007ec8 (size 8) =====

int sym.arm_smmu_get_fault_ids.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    code *pcVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = -0x16;
    if ((param_1 != 0) && (param_2 != NULL)) {
        piVar11 = *(param_1 + -0xb0);
        uVar2 = *(param_1 + -0x80);
        iVar12 = *piVar11;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar6 = __pm_runtime_resume(iVar12,4), iVar6 < 0)) {
            puVar1 = iVar12 + 0x1f8;
            uVar8 = *puVar1;
            do {
                uVar7 = uVar8;
                if (uVar7 == 0) {
                    return iVar6;
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar3 = *puVar1;
                    uVar8 = uVar3;
                    if (uVar3 != uVar7) goto code_r0x0800cdfc;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = uVar7 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800cdfc:
            } while (uVar7 != uVar3);
        }
        else {
            iVar6 = piVar11[2] + uVar2;
            if ((piVar11[5] == NULL) || (pcVar10 = *piVar11[5], pcVar10 == NULL)) {
                uVar8 = sym.readl_relaxed(piVar11[1] + (iVar6 << (*(piVar11 + 0x14) & 0x1f)) + 0x58);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001bd0);
                }
                uVar8 = (*pcVar10)(piVar11,iVar6,0x58);
            }
            if ((uVar8 & 0xc00001fe) == 0) {
                iVar12 = *piVar11;
                if ((*(iVar12 + 0x200) & 7) == 0) {
                    uVar9 = ktime_get_mono_fast_ns();
                    *(iVar12 + 0x218) = uVar9;
                    __pm_runtime_idle(*piVar11,5);
                }
                iVar6 = -0x16;
            }
            else {
                iVar6 = piVar11[2] + uVar2;
                if ((piVar11[5] == NULL) || (pcVar10 = *piVar11[5], pcVar10 == NULL)) {
                    uVar7 = sym.readl_relaxed(piVar11[1] + (iVar6 << (*(piVar11 + 0x14) & 0x1f)) + 0x6c);
                }
                else {
                    if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001bd0);
                    }
                    uVar7 = (*pcVar10)(piVar11,iVar6,0x6c);
                }
                iVar12 = *piVar11;
                if ((*(iVar12 + 0x200) & 7) == 0) {
                    uVar9 = ktime_get_mono_fast_ns();
                    *(iVar12 + 0x218) = uVar9;
                    __pm_runtime_idle(*piVar11,5);
                }
                iVar6 = 0;
                *param_2 = uVar7 >> 0xd & 7;
                param_2[1] = uVar7 >> 8 & 0x1f;
                param_2[2] = uVar7 & 0xff;
            }
        }
    }
    return iVar6;
}


// ===== sym.__traceiter_smmu_init.cfi_jt @ 0x08007ed0 (size 8) =====

ulong sym.__traceiter_smmu_init.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018ad0;
    piVar1 = *0x8018ad0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.arm_smmu_enable_nesting.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007ed8 (size 8) =====

uint sym.arm_smmu_enable_nesting.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + -0x60);
    if (*(param_1 + -0xb0) == 0) {
        uVar1 = 0;
        *(param_1 + -0x68) = 2;
    }
    else {
        uVar1 = 0xffffffff;
    }
    mutex_unlock(param_1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_get_context_bank_nr.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007ee0 (size 8) =====

uint64_t sym.arm_smmu_get_context_bank_nr.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + -0x60);
    if (*(param_1 + -0xb0) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = *(param_1 + -0x80);
    }
    mutex_unlock(param_1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_get_mappings_configuration.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007ee8 (size 8) =====

uint32_t sym.arm_smmu_get_mappings_configuration.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint32_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + -0x60);
    if (*(param_1 + -0xb0) == 0) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = *(param_1 + -0x27) & 7;
    }
    mutex_unlock(param_1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_enable_s1_translation.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007ef0 (size 8) =====

int sym.arm_smmu_enable_s1_translation.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t iVar12;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(param_1 + -0xb0);
    mutex_lock(param_1 + -0x60);
    if (*(param_1 + -0xb0) == 0) {
        iVar7 = -1;
    }
    else if (*(param_1 + -0x26) == '\0') {
        iVar7 = 0;
    }
    else {
        iVar12 = *piVar11;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar7 = __pm_runtime_resume(iVar12,4), iVar7 < 0)) {
            puVar1 = iVar12 + 0x1f8;
            uVar10 = *puVar1;
            do {
                uVar9 = uVar10;
                if (uVar9 == 0) break;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar4 = *puVar1;
                    uVar10 = uVar4;
                    if (uVar4 != uVar9) goto code_r0x0800d238;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                        *puVar1 = uVar9 - 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800d238:
            } while (uVar9 != uVar4);
        }
        else {
            uVar3 = *(param_1 + -0x78);
            uVar2 = *(param_1 + -0x80);
            *(param_1 + -0x78) = uVar3 | 0x4000;
            uVar9 = 0x46;
            if (*(param_1 + -0x74) != 0) {
                uVar9 = 0x1046;
            }
            uVar9 = (uVar3 & 3) << 0x1a | (uVar3 >> 2 & 3) << 0x18 |
                    (uVar3 | 0x4000) >> 0xe | uVar3 >> 3 & 0x100 | uVar3 >> 5 & 0x80 | uVar3 >> 8 & 0x20 |
                    (uVar3 >> 4 & 3) << 0x16 | (uVar3 & 0x40) << 0xe | (uVar3 & 0x780) << 9 | uVar9;
            *(piVar11[9] + uVar2 * 0x30 + 0x20) = uVar9;
            iVar7 = piVar11[2] + uVar2;
            if ((piVar11[5] == 0) || (pcVar13 = *(piVar11[5] + 8), pcVar13 == NULL)) {
                sym.writel_relaxed(uVar9,piVar11[1] + (iVar7 << (*(piVar11 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar13 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar13,0x8001b70);
                }
                (*pcVar13)(piVar11,iVar7,0,uVar9);
            }
            iVar12 = *piVar11;
            if ((*(iVar12 + 0x200) & 7) == 0) {
                uVar8 = ktime_get_mono_fast_ns();
                *(iVar12 + 0x218) = uVar8;
                __pm_runtime_idle(*piVar11,5);
            }
            iVar7 = 0;
            *(param_1 + -0x26) = 0;
        }
    }
    mutex_unlock(param_1 + -0x60);
    return iVar7;
}


// ===== sym.arm_smmu_get_asid_nr.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007ef8 (size 8) =====

uint64_t sym.arm_smmu_get_asid_nr.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + -0x60);
    if (*(param_1 + -0xb0) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = *(param_1 + -0x7e);
    }
    mutex_unlock(param_1 + -0x60);
    return uVar1;
}


// ===== sym.__typeid__ZTSFvP24arm_smmu_power_resourcesE_global_addr @ 0x08007f00 (size 8) =====

void sym.__typeid__ZTSFvP24arm_smmu_power_resourcesE_global_addr(int64_t *param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*param_1 + 0x98);
    if (*(iVar1 + 0x58) != '\0') {
        sym.__arm_tbu_micro_idle_cfg(*(iVar1 + 0x18),0,1 << (*(iVar1 + 0x38) >> 10 & 0x1f));
    }
    return;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08007f08 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.arm_smmu_device_probe.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f10 (size 8) =====

uint64_t sym.arm_smmu_device_probe.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint16_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    uint *puVar11;
    ulong uVar12;
    ulong *arg1;
    int64_t iVar13;
    char *pcVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar15;
    uint64_t uVar16;
    ulong *puVar17;
    ulong unaff_x30;
    ulong uStack_68;
    int *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    piStack_60 = NULL;
    uVar8 = qcom_dma_iommu_is_ready();
    if ((uVar8 & 1) == 0) {
        uVar8 = 0xfffffdfb;
        goto code_r0x0800a890;
    }
    iVar13 = param_1 + 0x10;
    piVar9 = devm_kmalloc(iVar13,0x130,0xdc0);
    if (piVar9 == NULL) {
        _dev_err(iVar13,"failed to allocate arm_smmu_device\n");
        uVar8 = 0xfffffff4;
        goto code_r0x0800a890;
    }
    iVar10 = *(param_1 + 0x300);
    *piVar9 = iVar13;
    if (iVar10 != 0) {
        iVar5 = of_property_read_variable_u32_array(iVar10,"#global-interrupts",piVar9 + 0x18,1,0);
        if (-1 < iVar5) {
            puVar11 = of_device_get_match_data(iVar13);
            *(piVar9 + 4) = *puVar11;
            uVar12 = *(param_1 + 0x300);
            *(piVar9 + 0x24) = puVar11[1];
            iVar10 = of_find_property(uVar12,"mmu-masters",0);
            if (iVar10 == 0) {
                if (obj.using_legacy_binding == 0x1) goto code_r0x0800a87c;
                pcVar15 = obj.using_generic_binding;
            }
            else {
                if ((obj.using_generic_binding & 1) != 0) {
code_r0x0800a87c:
                    pcVar14 = "not probing due to mismatched DT properties\n";
                    goto code_r0x0800a884;
                }
                pcVar15 = obj.using_legacy_binding;
                if ((obj.using_legacy_binding & 1) == 0) {
                    _printk(0x800338f,"SMMU");
                    pcVar15 = obj.using_legacy_binding;
                }
            }
            uVar12 = *(param_1 + 0x300);
            *pcVar15 = 0x1;
            uVar8 = of_dma_is_coherent(uVar12);
            if ((uVar8 & 1) != 0) {
                *(piVar9 + 3) = *(piVar9 + 3) | 1;
            }
            uVar8 = devm_platform_get_and_ioremap_resource(param_1,0,&piStack_60);
            piVar9[1] = uVar8;
            if (0xfffffffffffff000 < uVar8) goto code_r0x0800a890;
            uStack_68 = *piStack_60;
            *(piVar9 + 2) = (piStack_60[2] - *piStack_60) + 1;
            arg1 = sym.arm_smmu_impl_init(piVar9);
            if (0xfffffffffffff000 < arg1) {
                uVar8 = arg1 & 0xffffffff;
                goto code_r0x0800a890;
            }
            piStack_60 = platform_get_resource(param_1,0x400,0);
            uVar8 = 0;
            while (iVar5 = uVar8, piStack_60 != NULL) {
                uVar8 = iVar5 + 1U;
                if (*(arg1 + 0x18) < iVar5 + 1U) {
                    *(arg1 + 0xc4) = *(arg1 + 0xc4) + 1;
                }
                piStack_60 = platform_get_resource(param_1,0x400,uVar8);
            }
            if (*(arg1 + 0xc4) == 0) {
                _dev_err(iVar13,"found %d interrupts but expected at least %d\n",uVar8,*(arg1 + 0x18) + 1);
                goto code_r0x0800a88c;
            }
            if (iVar5 >> 0x3e == 0) {
                iVar10 = devm_kmalloc(iVar13,-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2,0xdc0);
                arg1[0x19] = iVar10;
                if (iVar10 != 0) {
                    if (0 < iVar5) {
                        uVar16 = 0;
                        do {
                            iVar5 = platform_get_irq(param_1,uVar16 & 0xffffffff);
                            if (iVar5 < 0) {
                                _dev_err(iVar13,"failed to get irq index %d\n",uVar16 & 0xffffffff);
                                goto code_r0x0800a88c;
                            }
                            *(arg1[0x19] + uVar16 * 4) = iVar5;
                            uVar16 = uVar16 + 1;
                        } while (uVar8 != uVar16);
                    }
                    uVar8 = sym.arm_smmu_init_power_resources(iVar13);
                    arg1[0x23] = uVar8;
                    if (0xfffffffffffff000 < uVar8) {
                        uVar8 = uVar8 & 0xffffffff;
                        goto code_r0x0800a890;
                    }
                    uVar16 = sym.arm_smmu_power_on(uVar8);
                    uVar8 = uVar16 & 0xffffffff;
                    if (uVar16 != 0) goto code_r0x0800a890;
                    uVar16 = sym.arm_smmu_device_cfg_probe(arg1);
                    uVar8 = uVar16 & 0xffffffff;
                    if (uVar16 == 0) {
                        uVar16 = sym.arm_smmu_parse_impl_def_registers(arg1);
                        uVar8 = uVar16 & 0xffffffff;
                        if (uVar16 == 0) {
                            if (*(arg1 + 4) == 2) {
                                if (*(arg1 + 0xc4) < *(arg1 + 6)) {
                                    _dev_err(iVar13,"found only %d context irq(s) but %d required\n");
                                    uVar8 = 0xffffffed;
                                    goto code_r0x0800a860;
                                }
                                *(arg1 + 0xc4) = *(arg1 + 6);
                            }
                            if ((arg1[5] == 0) || (pcVar15 = *(arg1[5] + 0x70), pcVar15 == NULL)) {
                                pcVar15 = sym.arm_smmu_global_fault.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                            }
                            if (*(arg1 + 0x18) != 0) {
                                uVar7 = 0;
                                do {
                                    uVar6 = devm_request_threaded_irq
                                                      (*arg1,*(arg1[0x19] + uVar7 * 4),0,pcVar15,0x2080,0x80030a5,
                                                       arg1);
                                    if (uVar6 != 0) {
                                        uVar8 = uVar6;
                                        _dev_err(iVar13,"failed to request global IRQ %d (%u)\n",uVar7,
                                                 *(arg1[0x19] + uVar7 * 4));
                                        goto code_r0x0800a860;
                                    }
                                    uVar7 = uVar7 + 1;
                                } while (uVar7 < *(arg1 + 0x18));
                            }
                            piStack_60 = platform_get_resource(param_1,0x200,0);
                            if (piStack_60 == NULL) {
                                uVar8 = 0;
                            }
                            else {
                                arg1[0x24] = *piStack_60;
                                sym.parse_driver_options(arg1);
                                uVar16 = sym.arm_smmu_handoff_cbs(arg1);
                                uVar8 = uVar16 & 0xffffffff;
                                if (uVar16 == 0) {
                                    puVar17 = arg1 + 0x1c;
                                    uVar7 = iommu_device_sysfs_add(puVar17,*arg1,0,"smmu.%pa",&uStack_68);
                                    if (uVar7 == 0) {
                                        uVar7 = iommu_device_register
                                                          (puVar17,
                                                           reloc.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
                                                           ,iVar13);
                                        if (uVar7 == 0) {
                                            *(param_1 + 0xa8) = arg1;
                                            sym.arm_smmu_device_reset(arg1);
                                            sym.arm_smmu_test_smr_masks(arg1);
                                            if (*(arg1[0x23] + 0x20) != 0) {
                                                __pm_runtime_set_status(iVar13,0);
                                                pm_runtime_enable(iVar13);
                                            }
                                            if ((obj.using_legacy_binding & 1) != 0) {
                                                uVar8 = 0;
                                                goto code_r0x0800a890;
                                            }
                                            uVar16 = sym.arm_smmu_bus_init(0x8001590);
                                            uVar8 = uVar16 & 0xffffffff;
                                            if (uVar16 == 0) goto code_r0x0800a890;
                                            iommu_device_unregister(puVar17);
                                        }
                                        else {
                                            uVar8 = uVar7;
                                            _dev_err(iVar13,"Failed to register iommu\n");
                                        }
                                        iommu_device_sysfs_remove(puVar17);
                                    }
                                    else {
                                        uVar8 = uVar7;
                                        _dev_err(iVar13,"Failed to register iommu in sysfs\n");
                                    }
                                }
                            }
                        }
                    }
code_r0x0800a860:
                    sym.arm_smmu_power_off(arg1,arg1[0x23]);
                    goto code_r0x0800a890;
                }
            }
            else {
                arg1[0x19] = 0;
            }
            _dev_err(iVar13,"failed to allocate %d irqs\n",uVar8);
            uVar8 = 0xfffffff4;
            goto code_r0x0800a890;
        }
        pcVar14 = "missing #global-interrupts property\n";
code_r0x0800a884:
        _dev_err(iVar13,pcVar14);
    }
code_r0x0800a88c:
    uVar8 = 0xffffffed;
code_r0x0800a890:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return uVar8 & 0xffffffff;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18 = sym.arm_smmu_device_remove;
    piVar9 = *(iVar13 + 0xa8);
    if (piVar9 == NULL) {
        return 0xffffffed;
    }
    iVar10 = _find_first_bit(piVar9 + 7,0x80);
    if (iVar10 != 0x80) {
        _dev_notice(iVar13 + 0x10,"disabling translation\n");
    }
    sym.arm_smmu_bus_init(0);
    iommu_device_unregister(piVar9 + 0x1c);
    iommu_device_sysfs_remove(piVar9 + 0x1c);
    if ((piVar9[5] != 0) && (pcVar15 = *(piVar9[5] + 0x50), pcVar15 != NULL)) {
        if (1 < (pcVar15 + -0x8008050 >> 3 | pcVar15 << 0x3d)) {
            __cfi_slowpath_diag(0x26d8a99cd42ad740,pcVar15,0x8001e30);
        }
        (*pcVar15)(piVar9);
    }
    iVar13 = *piVar9;
    if (((*(iVar13 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar13,4), iVar5 < 0)) {
        puVar1 = iVar13 + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar6 = *puVar1;
                uVar8 = uVar6;
                if (uVar6 != uVar7) goto code_r0x0800ac64;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800ac64:
        } while (uVar7 != uVar6);
    }
    if ((piVar9[5] == 0) || (pcVar15 = *(piVar9[5] + 8), pcVar15 == NULL)) {
        sym.writel_relaxed(1,piVar9[1]);
    }
    else {
        if (pcVar15 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar15,0x8001b70);
        }
        (*pcVar15)(piVar9,0,0,1);
    }
    iVar13 = *piVar9;
    uVar2 = *(iVar13 + 0x200);
    if ((uVar2 & 7) == 0) {
        uVar12 = ktime_get_mono_fast_ns();
        *(iVar13 + 0x218) = uVar12;
        __pm_runtime_idle(*piVar9,5);
        iVar13 = *piVar9;
        uVar2 = *(iVar13 + 0x200);
    }
    if ((uVar2 & 7) == 0) {
        pm_runtime_force_suspend(iVar13);
    }
    else {
        sym.arm_smmu_power_off(piVar9,piVar9[0x23]);
    }
    return 0;
}


// ===== sym.arm_smmu_device_remove.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f18 (size 8) =====

ulong sym.arm_smmu_device_remove.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *arg1;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1 == NULL) {
        return 0xffffffed;
    }
    iVar7 = _find_first_bit(arg1 + 7,0x80);
    if (iVar7 != 0x80) {
        _dev_notice(param_1 + 0x10,"disabling translation\n");
    }
    sym.arm_smmu_bus_init(0);
    iommu_device_unregister(arg1 + 0x1c);
    iommu_device_sysfs_remove(arg1 + 0x1c);
    if ((arg1[5] != 0) && (pcVar11 = *(arg1[5] + 0x50), pcVar11 != NULL)) {
        if (1 < (pcVar11 + -0x8008050 >> 3 | pcVar11 << 0x3d)) {
            __cfi_slowpath_diag(0x26d8a99cd42ad740,pcVar11,0x8001e30);
        }
        (*pcVar11)(arg1);
    }
    iVar7 = *arg1;
    if (((*(iVar7 + 0x200) & 7) == 0) && (iVar6 = __pm_runtime_resume(iVar7,4), iVar6 < 0)) {
        puVar1 = iVar7 + 0x1f8;
        uVar10 = *puVar1;
        do {
            uVar9 = uVar10;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar10 = uVar3;
                if (uVar3 != uVar9) goto code_r0x0800ac64;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar9 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800ac64:
        } while (uVar9 != uVar3);
    }
    if ((arg1[5] == 0) || (pcVar11 = *(arg1[5] + 8), pcVar11 == NULL)) {
        sym.writel_relaxed(1,arg1[1]);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar11,0x8001b70);
        }
        (*pcVar11)(arg1,0,0,1);
    }
    iVar7 = *arg1;
    uVar2 = *(iVar7 + 0x200);
    if ((uVar2 & 7) == 0) {
        uVar8 = ktime_get_mono_fast_ns();
        *(iVar7 + 0x218) = uVar8;
        __pm_runtime_idle(*arg1,5);
        iVar7 = *arg1;
        uVar2 = *(iVar7 + 0x200);
    }
    if ((uVar2 & 7) == 0) {
        pm_runtime_force_suspend(iVar7);
    }
    else {
        sym.arm_smmu_power_off(arg1,arg1[0x23]);
    }
    return 0;
}


// ===== sym.qsmmuv500_tbu_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007f20 (size 8) =====

uint64_t sym.qsmmuv500_tbu_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_3c = 0;
    iVar3 = devm_kmalloc(iVar7,0x58,0xdc0);
    if (iVar3 == 0) {
code_r0x080137cc:
        uVar4 = 0xfffffff4;
    }
    else {
        *(iVar3 + 0x10) = iVar7;
        uVar4 = sym.arm_smmu_init_power_resources(iVar7);
        *(iVar3 + 0x30) = uVar4;
        if (0xfffffffffffff000 < uVar4) goto code_r0x08013870;
        iVar2 = of_device_is_compatible(*(param_1 + 0x300),"qcom,qtb500");
        if (iVar2 == 0) {
            uVar5 = devm_krealloc(iVar7,iVar3,0x60,0xcc0);
            if (uVar5 != 0) {
                *(uVar5 + 0x28) = reloc.arm_tbu_halt_req.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
                iVar3 = of_find_property(*(param_1 + 0x300),"qcom,micro-idle",0);
                *(uVar5 + 0x58) = iVar3 != 0;
                if (iVar3 != 0) {
                    *(*(uVar5 + 0x30) + 0x68) = sym.__typeid__ZTSFiP24arm_smmu_power_resourcesE_global_addr;
                    *(*(uVar5 + 0x30) + 0x70) = sym.__typeid__ZTSFvP24arm_smmu_power_resourcesE_global_addr;
                }
                goto joined_r0x08013844;
            }
        }
        else {
            uVar5 = devm_krealloc(iVar7,iVar3,0x68,0xcc0);
            if (uVar5 != 0) {
                *(uVar5 + 0x28) = reloc.qtb500_tbu_halt_req.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
                iVar2 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x300),"qcom,num-qtb-ports",uVar5 + 0x5c,1,0);
                if (iVar2 < 0) {
                    uVar5 = iVar2;
                }
                else {
                    iVar3 = of_find_property(*(param_1 + 0x300),"qcom,no-qtb-atos-halt",0);
                    *(uVar5 + 0x58) = iVar3 != 0;
                }
joined_r0x08013844:
                if (0xfffffffffffff000 < uVar5) {
                    uVar4 = uVar5 & 0xffffffff;
                    goto code_r0x08013870;
                }
                *uVar5 = uVar5;
                *(uVar5 + 8) = uVar5;
                *(uVar5 + 0x44) = 0;
                piVar6 = platform_get_resource(param_1,0x200,0);
                if (piVar6 == NULL) {
                    uVar4 = 0xffffffea;
                    goto code_r0x08013870;
                }
                iVar7 = devm_ioremap(iVar7,*piVar6,(piVar6[1] - *piVar6) + 1);
                *(uVar5 + 0x20) = iVar7;
                if (iVar7 != 0) {
                    puVar8 = of_get_property(*(param_1 + 0x300),"qcom,stream-id-range",&iStack_3c);
                    uVar4 = 0xffffffea;
                    if ((puVar8 != NULL) && (7 < iStack_3c)) {
                        uVar1 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
                        *(uVar5 + 0x38) = uVar1 >> 0x10 | uVar1 << 0x10;
                        uVar1 = (puVar8[1] & 0xff00ff00) >> 8 | (puVar8[1] & 0xff00ff) << 8;
                        *(uVar5 + 0x3c) = uVar1 >> 0x10 | uVar1 << 0x10;
                        uVar4 = of_property_read_variable_u32_array
                                          (*(param_1 + 0x300),"qcom,iova-width",uVar5 + 0x40,1,0);
                        if (-1 < uVar4) {
                            uVar4 = 0;
                            *(param_1 + 0xa8) = uVar5;
                        }
                    }
                    goto code_r0x08013870;
                }
                goto code_r0x080137cc;
            }
        }
        uVar4 = 0xfffffff4;
    }
code_r0x08013870:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar9 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.qsmmuv500_create;
    iVar7 = *auVar9._0_8_;
    uVar4 = devm_krealloc(iVar7,auVar9._0_8_,400,0xdc0);
    if (uVar4 == 0) {
        uVar4 = 0xfffffffffffffff4;
    }
    else {
        *(uVar4 + 0x130) = uVar4 + 0x130;
        *(uVar4 + 0x138) = uVar4 + 0x130;
        *(uVar4 + 0x180) = 0;
        *(uVar4 + 0x150) = 0xfffffffe0;
        *(uVar4 + 0x158) = uVar4 + 0x158;
        *(uVar4 + 0x160) = uVar4 + 0x158;
        *(uVar4 + 0x168) = sym.qsmmuv500_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        *(uVar4 + 0x28) = auVar9._8_8_;
        iVar2 = sym.qsmmuv500_read_actlr_tbl(uVar4);
        if ((iVar2 == 0) && (iVar2 = of_platform_populate(*(iVar7 + 0x2f0),0,0,iVar7), iVar2 == 0)) {
            iVar2 = device_for_each_child
                              (iVar7,uVar4,sym.qsmmuv500_tbu_register.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt);
            if (iVar2 != 0) {
                uVar4 = 0xfffffffffffffdfb;
            }
        }
        else {
            uVar4 = iVar2;
        }
    }
    return uVar4;
}


// ===== sym.init_module.cfi_jt @ 0x08007f28 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ktime_get();
    iVar1 = __platform_driver_register
                      (reloc.qsmmuv500_tbu_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register
                          (reloc.arm_smmu_device_probe.73c668e47250e1a2d5221ed72817c1f7.cfi_jt,obj.__this_module);
        if (iVar1 == 0) {
            ktime_get();
            iVar1 = 0;
        }
        else {
            platform_driver_unregister(reloc.qsmmuv500_tbu_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt);
        }
    }
    return iVar1;
}


// ===== sym.__typeid__ZTSFyP20qsmmuv500_tbu_deviceyjmE_global_addr @ 0x08007f30 (size 8) =====

uint64_t sym.__typeid__ZTSFyP20qsmmuv500_tbu_deviceyjmE_global_addr
                   (int64_t param_1,int64_t param_2,uint32_t param_3,uint32_t param_4)

{
    int64_t arg1;
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(param_1 + 0x20);
    uVar3 = sym.readq_relaxed_1(arg1_00);
    sym.writeq_relaxed_1(uVar3 & 0xfffffffffffffc00 | param_3 & 0x3ff,arg1_00);
    sym.writeq_relaxed_1(param_2,arg1_00 + 8);
    sym.writeq_relaxed_1(0xff000000000,arg1_00 + 0x30);
    uVar3 = 0xbc;
    if ((param_4 & 1) != 0) {
        uVar3 = 0xbe;
    }
    sym.writeq_relaxed_1(param_4 << 6 & 0x100 | param_4 << 5 & 0x40 | uVar3 | 1,arg1_00 + 0x18);
    iVar4 = ktime_get();
    arg1 = arg1_00 + 0x28;
    while ((uVar3 = sym.readl_relaxed_2(arg1_00 + 0x20), (uVar3 & 1) != 0 &&
           (uVar3 = sym.readl_relaxed_2(arg1), (uVar3 & 1) == 0))) {
        iVar5 = ktime_get();
        if (iVar4 + 100000 < iVar5) {
            uVar3 = sym.readq_relaxed_1(arg1);
            if ((uVar3 & 1) == 0) {
                iVar1 = ___ratelimit(obj.arm_tbu_trigger_atos._rs,"arm_tbu_trigger_atos");
                if (iVar1 == 0) {
                    uVar3 = 0;
                }
                else {
                    _dev_err(*(param_1 + 0x10),"ECATS translation timed out!\n");
                    uVar3 = 0;
                }
            }
            else {
code_r0x080145e4:
                _dev_err(*(param_1 + 0x10),"ECATS generated a fault interrupt! PAR = %llx, SID=0x%x\n",uVar3,param_3)
                ;
                uVar3 = 0;
            }
code_r0x08014594:
            sym.writeq_relaxed_1(0,arg1_00 + 0x18);
            sym.writeq_relaxed_1(0,arg1_00 + 8);
            uVar2 = sym.readl_relaxed_2(arg1_00);
            sym.writel_relaxed_2(uVar2 & 0xfffffc00,arg1_00);
            return uVar3;
        }
    }
    uVar3 = sym.readq_relaxed_1(arg1);
    if ((uVar3 & 1) != 0) goto code_r0x080145e4;
    uVar3 = uVar3 >> 0xc & 0xfffffffff;
    goto code_r0x08014594;
}


// ===== sym.qtb500_trigger_atos.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007f38 (size 8) =====

uint64_t sym.qtb500_trigger_atos.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt
                   (int64_t param_1,int64_t param_2,uint32_t param_3,uint64_t param_4)

{
    int64_t arg1;
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_4;
    iVar5 = *(param_1 + 0x20);
    sym.writeq_relaxed_1(iVar1 << 0x11 & 0x100000 | param_3 & 0x3ff,iVar5 + 0x430);
    sym.writeq_relaxed_1((iVar1 << 0xc & 0x2000 | param_4 & 9 | iVar1 << 10 & 0x1000) ^ 0x408,iVar5 + 0x438);
    sym.writeq_relaxed_1(param_2,iVar5 + 0x440);
    sym.writeq_relaxed_1(1,iVar5 + 0x448);
    iVar2 = ktime_get();
    arg1 = iVar5 + 0x458;
    while ((uVar3 = sym.readq_relaxed_1(iVar5 + 0x450), (uVar3 & 1) == 0 &&
           (uVar3 = sym.readq_relaxed_1(arg1), (uVar3 & 1) == 0))) {
        iVar4 = ktime_get();
        if (iVar2 + 100000 < iVar4) {
            uVar3 = sym.readq_relaxed_1(arg1);
            if ((uVar3 & 1) == 0) {
                iVar1 = ___ratelimit(obj.qtb500_trigger_atos._rs,"qtb500_trigger_atos");
                if (iVar1 == 0) {
                    uVar3 = 0;
                }
                else {
                    _dev_err(*(param_1 + 0x10),"ECATS translation timed out!\n");
                    uVar3 = 0;
                }
            }
            else {
code_r0x080141f4:
                _dev_err(*(param_1 + 0x10),"ECATS generated a fault interrupt! OUTFLD0 = 0x%llx SID = 0x%x\n",uVar3,
                         param_3);
                uVar3 = 0;
            }
code_r0x080141c8:
            sym.writeq_relaxed_1(0,iVar5 + 0x448);
            return uVar3;
        }
    }
    uVar3 = sym.readq_relaxed_1(arg1);
    if ((uVar3 & 1) != 0) goto code_r0x080141f4;
    uVar3 = uVar3 >> 0xc;
    goto code_r0x080141c8;
}


// ===== sym.arm_smmu_domain_alloc.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f40 (size 8) =====

int64_t sym.arm_smmu_domain_alloc.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 == 1) || (param_1 == 4)) ||
        ((iVar2 = 0, (param_1 & 0xfffffff7) == 3 && ((obj.using_legacy_binding & 1) == 0)))) &&
       (iVar1 = kmem_cache_alloc_trace(_device_match_fwnode,0xdc0,0x180), iVar2 = iVar1, iVar1 != 0)) {
        __mutex_init(iVar1 + 0x50,"&smmu_domain->init_mutex",obj.arm_smmu_device_cfg_probe.__key);
        iVar2 = iVar1 + 0xb0;
        *(iVar1 + 0x80) = 0;
        *(iVar1 + 0x8c) = 0xffffffff;
    }
    return iVar2;
}


// ===== sym.arm_smmu_device_shutdown.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f48 (size 8) =====

void sym.arm_smmu_device_shutdown.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_device_remove(param_1);
    return;
}


// ===== sym.device_match_fwnode.cfi_jt @ 0x08007f50 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.device_match_fwnode.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr @ 0x08007f58 (size 8) =====

void sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr(int64_t param_1,int param_2,int param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((param_2 == 0) &&
       ((((param_3 - 0x48U < 0x11 && ((1 << (param_3 - 0x48U & 0x1f) & 0x11101U) != 0)) || (param_3 == 0x10)) ||
        (param_3 == 0)))) {
        param_3 = param_3 + 0x400;
    }
    *in_x18 = unaff_x30;
    sym.readl_relaxed_1(*(param_1 + 8) + (param_2 << (*(param_1 + 0x14) & 0x1f)) + param_3);
    return;
}


// ===== sym.perf_trace_iommu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f60 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_iommu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,uint32_t *param_3,int64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    char *pcVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    char *pcVar14;
    ulong *puVar15;
    uint64_t uVar16;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint32_t uVar17;
    int64_t iVar18;
    int64_t *piVar19;
    uint64_t uVar20;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auStack_320 [12];
    uint uStack_314;
    int64_t iStack_310;
    int64_t iStack_308;
    ulong ***pppuStack_300;
    code *pcStack_2f8;
    int64_t *piStack_2f0;
    ulong uStack_2e8;
    uchar auStack_2e0 [16];
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    int64_t iStack_298;
    ulong ***pppuStack_290;
    ulong uStack_288;
    int64_t *piStack_280;
    ulong *puStack_270;
    int64_t iStack_268;
    uchar auStack_260 [12];
    uint uStack_254;
    int64_t iStack_250;
    int64_t iStack_248;
    ulong ***pppuStack_240;
    code *pcStack_238;
    uint64_t uStack_230;
    uint64_t uStack_220;
    uint32_t *puStack_218;
    int64_t *piStack_210;
    uint64_t uStack_208;
    uchar auStack_200 [16];
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    uchar ***pppuStack_1b0;
    ulong uStack_1a8;
    int64_t iStack_1a0;
    uint64_t uStack_190;
    int64_t iStack_188;
    uchar auStack_180 [12];
    uint uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    int64_t *piStack_b0;
    int64_t iStack_a8;
    uint32_t *puStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    pcVar4 = (*(param_2 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar14 = **(param_2 + 8);
        pcVar4 = "(null)";
        if (pcVar14 != NULL) {
            pcVar4 = pcVar14;
        }
    }
    puVar10 = param_3;
    iVar9 = param_4;
    uVar12 = param_5;
    uVar5 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar19 = iVar6 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar19 != 0)) {
        puVar10 = &uStack_74;
        unaff_x25 = (uVar5 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x25,&iStack_70);
        uVar16 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar16 = -1L << (uVar16 & 0x3f);
            uVar12 = (~uVar16 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar16 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar12;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x10028;
            pcVar4 = (*(param_2 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar14 = **(param_2 + 8);
                pcVar4 = "(null)";
                if (pcVar14 != NULL) {
                    pcVar4 = pcVar14;
                }
            }
            strcpy(iVar6 + 0x28,pcVar4);
            puVar10 = uStack_74;
            uVar12 = 1;
            *(iVar6 + 0x10) = param_3;
            *(iVar6 + 0x18) = param_4;
            *(iVar6 + 0x20) = param_5;
            iVar9 = param_1;
            perf_trace_run_bpf_submit(iVar6,unaff_x25);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8008ee8;
    uStack_b8 = 0x8008ee8;
    iVar6 = sp_el0;
    uVar16 = uVar12 & 0xffffffff;
    iStack_c8 = *(iVar6 + 0x5e0);
    uVar20 = *(iVar8 + 0x48);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar17 = uVar20;
    iVar6 = iVar9;
    uVar13 = uVar12;
    puStack_c0 = &stack0xffffffffffffffa0;
    piStack_b0 = piVar19;
    iStack_a8 = param_2;
    puStack_a0 = param_3;
    iStack_98 = param_4;
    uStack_90 = param_5;
    iStack_88 = param_1;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar11 = NULL;
            iVar6 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(iVar8), (uVar7 & 1) == 0))))
        goto code_r0x08008f74;
    }
    else {
code_r0x08008f74:
        puVar15 = *(auVar21._8_8_ + 8);
        pcVar4 = puVar15[0xe];
        if (pcVar4 == NULL) {
            pcVar14 = *puVar15;
            pcVar4 = "(null)";
            if (pcVar14 != NULL) {
                pcVar4 = pcVar14;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar17 = iVar3 + 1;
        uVar20 = uVar17;
        puVar11 = uVar17 + 0x20;
        iVar8 = trace_event_buffer_reserve(&uStack_f8,iVar8);
        if (iVar8 != 0) {
            *(iVar8 + 8) = uVar17 * 0x10000 | 0x20;
            puVar15 = *(auVar21._8_8_ + 8);
            pcVar4 = puVar15[0xe];
            if (pcVar4 == NULL) {
                pcVar14 = *puVar15;
                pcVar4 = "(null)";
                if (pcVar14 != NULL) {
                    pcVar4 = pcVar14;
                }
            }
            strcpy(iVar8 + 0x20,pcVar4);
            *(iVar8 + 0x10) = puVar10;
            iVar18 = 0;
            uVar17 = uVar12;
            while (uVar17 != 0) {
                iVar18 = iVar18 + *(iVar9 + 0xc);
                iVar9 = sg_next(iVar9);
                uVar17 = uVar16 - 1;
                uVar16 = uVar17;
            }
            *(iVar8 + 0x18) = iVar18;
            trace_event_buffer_commit(&uStack_f8);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    *extraout_x18_00 = sym.perf_trace_map_sg;
    pcStack_158 = sym.perf_trace_map_sg;
    iVar9 = sp_el0;
    iStack_168 = *(iVar9 + 0x5e0);
    uVar12 = uVar13 & 0xffffffff;
    puVar15 = *(auVar21._8_8_ + 8);
    iStack_170 = 0;
    uStack_174 = 0;
    pcVar4 = puVar15[0xe];
    if (pcVar4 == NULL) {
        pcVar14 = *puVar15;
        pcVar4 = "(null)";
        if (pcVar14 != NULL) {
            pcVar4 = pcVar14;
        }
    }
    ppuStack_160 = &puStack_c0;
    uStack_150 = uVar5;
    iStack_148 = unaff_x27;
    iVar3 = strlen(pcVar4);
    iVar9 = tpidr_el1;
    piVar19 = iVar9 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar19 != 0)) {
        uVar20 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar7 = perf_trace_buf_alloc(uVar20,&iStack_170,&uStack_174);
        uVar16 = _trace_event_reg;
        if (uVar7 != 0) {
            *(iStack_170 + 0xe8) = &ppuStack_160;
            *(iStack_170 + 0xf8) = auStack_180;
            *(iStack_170 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x8009058;
            *(iStack_170 + 0x108) = 5;
            *(uVar7 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar15 = *(auVar21._8_8_ + 8);
            pcVar4 = puVar15[0xe];
            if (pcVar4 == NULL) {
                pcVar14 = *puVar15;
                pcVar4 = "(null)";
                if (pcVar14 != NULL) {
                    pcVar4 = pcVar14;
                }
            }
            strcpy(uVar7 + 0x20,pcVar4);
            *(uVar7 + 0x10) = puVar11;
            puVar11 = NULL;
            uVar17 = uVar13;
            while (uVar17 != 0) {
                puVar11 = puVar11 + *(iVar6 + 0xc);
                iVar6 = sg_next(iVar6);
                uVar17 = uVar12 - 1;
                uVar12 = uVar17;
            }
            *(uVar7 + 0x18) = puVar11;
            perf_trace_run_bpf_submit(uVar7,uVar20,uStack_174,iVar8,1,iStack_170,piVar19,0);
            unaff_x25 = uVar7;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_168) {
        return;
    }
    auVar21 = __stack_chk_fail();
    puVar15 = auVar21._8_8_;
    iVar18 = auVar21._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_01 = 0x8009228;
    uStack_1a8 = 0x8009228;
    iVar9 = sp_el0;
    iStack_1b8 = *(iVar9 + 0x5e0);
    uVar16 = *(iVar18 + 0x48);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uVar17 = uVar16;
    pppuStack_1b0 = &ppuStack_160;
    iStack_1a0 = iVar6;
    uStack_190 = uVar12;
    iStack_188 = iVar8;
    if ((uVar17 >> 8 & 1) == 0) {
        if ((uVar17 >> 7 & 1) != 0) {
            event_triggers_call(iVar18,0,0,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar12 = trace_event_ignore_this_pid(iVar18), (uVar12 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar4 = puVar15[0xe];
        if (puVar15[0xe] == NULL) {
            pcVar4 = "(null)";
            if (*puVar15 != NULL) {
                pcVar4 = *puVar15;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar17 = iVar3 + 1;
        uVar16 = uVar17;
        iVar6 = trace_event_buffer_reserve(&uStack_1e8,iVar18,uVar17 + 0xc);
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar17 * 0x10000 | 0xc;
            pcVar4 = puVar15[0xe];
            if (puVar15[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar15 != NULL) {
                    pcVar4 = *puVar15;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            trace_event_buffer_commit(&uStack_1e8);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    puVar15 = auVar22._8_8_;
    iVar9 = auVar22._0_8_;
    *extraout_x18_02 = sym.perf_trace_tlbsync_timeout;
    pcStack_238 = sym.perf_trace_tlbsync_timeout;
    iVar6 = sp_el0;
    iStack_248 = *(iVar6 + 0x5e0);
    iStack_250 = 0;
    uStack_254 = 0;
    pcVar4 = puVar15[0xe];
    if (puVar15[0xe] == NULL) {
        pcVar4 = "(null)";
        if (*puVar15 != NULL) {
            pcVar4 = *puVar15;
        }
    }
    pppuStack_240 = &pppuStack_1b0;
    uStack_230 = unaff_x25;
    uStack_220 = uVar20;
    puStack_218 = puVar11;
    piStack_210 = piVar19;
    uStack_208 = uVar16;
    auStack_200 = auVar21;
    iVar3 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar19 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(piVar19,&iStack_250,&uStack_254);
        uVar12 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_250 + 0xe8) = &pppuStack_240;
            *(iStack_250 + 0xf8) = auStack_260;
            *(iStack_250 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x800934c;
            *(iStack_250 + 0x108) = 5;
            *(iVar6 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar4 = puVar15[0xe];
            if (puVar15[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar15 != NULL) {
                    pcVar4 = *puVar15;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            perf_trace_run_bpf_submit(iVar6,piVar19,uStack_254,iVar9,1,iStack_250,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_248) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_03 = 0x80094d4;
    uStack_288 = 0x80094d4;
    iVar6 = sp_el0;
    iStack_298 = *(iVar6 + 0x5e0);
    uVar5 = *(iVar8 + 0x48);
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uVar17 = uVar5;
    pppuStack_290 = &pppuStack_240;
    piStack_280 = piVar1;
    if ((uVar17 >> 8 & 1) == 0) {
        if ((uVar17 >> 7 & 1) != 0) {
            puStack_270 = puVar15;
            iStack_268 = iVar9;
            event_triggers_call(iVar8,0,0,0);
            auVar22._8_8_ = puStack_270;
            auVar22._0_8_ = iStack_268;
        }
        puStack_270 = auVar22._8_8_;
        iStack_268 = auVar22._0_8_;
        if ((uVar17 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar17 >> 9 & 1) != 0) {
            uVar12 = trace_event_ignore_this_pid(iVar8);
            auVar22._8_8_ = puStack_270;
            auVar22._0_8_ = iStack_268;
            if ((uVar12 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_270 = auVar22._8_8_;
    iStack_268 = auVar22._0_8_;
    iVar6 = trace_event_buffer_reserve(&uStack_2c8,iVar8,0x10);
    auVar22._8_8_ = puStack_270;
    auVar22._0_8_ = iStack_268;
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar21._8_8_;
        trace_event_buffer_commit(&uStack_2c8);
        auVar22._8_8_ = puStack_270;
        auVar22._0_8_ = iStack_268;
    }
code_r0x08009570:
    puStack_270 = auVar22._8_8_;
    iStack_268 = auVar22._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_298) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar9 = auVar22._0_8_;
    *extraout_x18_04 = sym.perf_trace_smmu_init;
    pcStack_2f8 = sym.perf_trace_smmu_init;
    iVar6 = sp_el0;
    iStack_308 = *(iVar6 + 0x5e0);
    iStack_310 = 0;
    uStack_314 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    pppuStack_300 = &pppuStack_290;
    piStack_2f0 = piVar19;
    uStack_2e8 = uVar5;
    auStack_2e0 = auVar21;
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_310,&uStack_314);
        uVar12 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_310 + 0xe8) = &pppuStack_300;
            *(iStack_310 + 0xf8) = auStack_320;
            *(iStack_310 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x80095a4;
            *(iStack_310 + 0x108) = 5;
            *(iVar6 + 8) = auVar22._8_8_;
            perf_trace_run_bpf_submit(iVar6,0x14,uStack_314,iVar9,1,iStack_310,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_308) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_05 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_iommu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f68 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_iommu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,uint32_t *param_3,int64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong uVar8;
    uint64_t uVar10;
    int64_t iVar11;
    uint32_t *puVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    uint64_t uVar17;
    char *pcVar18;
    ulong *puVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint32_t uVar20;
    uint64_t uVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    uchar auStack_3a0 [12];
    uint uStack_394;
    int64_t iStack_390;
    int64_t iStack_388;
    ulong ***pppuStack_380;
    code *pcStack_378;
    int64_t *piStack_370;
    ulong uStack_368;
    uchar auStack_360 [16];
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    int64_t iStack_318;
    ulong ***pppuStack_310;
    ulong uStack_308;
    int64_t *piStack_300;
    ulong *puStack_2f0;
    int64_t iStack_2e8;
    uchar auStack_2e0 [12];
    uint uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a0;
    uint32_t *puStack_298;
    int64_t *piStack_290;
    uint64_t uStack_288;
    uchar auStack_280 [16];
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    ulong uStack_228;
    int64_t iStack_220;
    uint64_t uStack_210;
    int64_t iStack_208;
    uchar auStack_200 [12];
    uint uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    uchar ***pppuStack_1e0;
    code *pcStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    uint64_t uStack_1b0;
    int64_t iStack_1a8;
    int64_t iStack_1a0;
    uint32_t *puStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    int64_t iStack_128;
    uint32_t *puStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iVar7;
    int64_t iVar9;
    int64_t iVar12;
    int64_t iVar13;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_48 = *(iVar16 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar20 = *(param_1 + 0x48);
    iVar16 = param_4;
    uVar10 = param_5;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar14 = param_3;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar16 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(param_1), (uVar4 & 1) == 0))))
        goto code_r0x08008c7c;
    }
    else {
code_r0x08008c7c:
        pcVar5 = (*(param_2 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar18 = **(param_2 + 8);
            pcVar5 = "(null)";
            if (pcVar18 != NULL) {
                pcVar5 = pcVar18;
            }
        }
        iVar3 = strlen(pcVar5);
        puVar14 = iVar3 + 1 + 0x28;
        iVar6 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            pcVar5 = (*(param_2 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar18 = **(param_2 + 8);
                pcVar5 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar5 = pcVar18;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            *(iVar6 + 0x10) = param_3;
            *(iVar6 + 0x18) = param_4;
            *(iVar6 + 0x20) = param_5;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar12 = auVar24._8_8_;
    iVar7 = auVar24._0_8_;
    *extraout_x18 = sym.perf_trace_iommu_map_pages;
    pcStack_d8 = sym.perf_trace_iommu_map_pages;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    pcVar5 = (*(iVar12 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar18 = **(iVar12 + 8);
        pcVar5 = "(null)";
        if (pcVar18 != NULL) {
            pcVar5 = pcVar18;
        }
    }
    puVar15 = puVar14;
    iVar11 = iVar16;
    uVar4 = uVar10;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar8 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar15 = &uStack_f4;
        unaff_x25 = (uVar8 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x25,&iStack_f0);
        uVar21 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8008d3c;
            *(iStack_f0 + 0x108) = 5;
            *(iVar6 + 8) = uVar8 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar12 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar18 = **(iVar12 + 8);
                pcVar5 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar5 = pcVar18;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            puVar15 = uStack_f4;
            uVar4 = 1;
            *(iVar6 + 0x10) = puVar14;
            *(iVar6 + 0x18) = iVar16;
            *(iVar6 + 0x20) = uVar10;
            iVar11 = iVar7;
            perf_trace_run_bpf_submit(iVar6,unaff_x25);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar13 = auVar25._8_8_;
    iVar9 = auVar25._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_00 = 0x8008ee8;
    uStack_138 = 0x8008ee8;
    iVar6 = sp_el0;
    uVar21 = uVar4 & 0xffffffff;
    iStack_148 = *(iVar6 + 0x5e0);
    uVar23 = *(iVar9 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar20 = uVar23;
    iVar6 = iVar11;
    uVar17 = uVar4;
    ppuStack_140 = &puStack_e0;
    piStack_130 = piVar22;
    puStack_120 = puVar14;
    iStack_118 = iVar16;
    uStack_110 = uVar10;
    iStack_1a8 = iVar9;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar6 = 0;
            iStack_128 = iVar12;
            iStack_108 = iVar7;
            event_triggers_call(iVar9,0);
            auVar24._8_8_ = iStack_128;
            auVar24._0_8_ = iStack_108;
        }
        iStack_128 = auVar24._8_8_;
        iStack_108 = auVar24._0_8_;
        if ((uVar20 >> 6 & 1) == 0) {
            if ((uVar20 >> 9 & 1) != 0) {
                uVar10 = trace_event_ignore_this_pid(iVar9);
                auVar24._8_8_ = iStack_128;
                auVar24._0_8_ = iStack_108;
                if ((uVar10 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_128 = auVar24._8_8_;
        iStack_108 = auVar24._0_8_;
        pcVar5 = (*(iVar13 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar18 = **(iVar13 + 8);
            pcVar5 = "(null)";
            if (pcVar18 != NULL) {
                pcVar5 = pcVar18;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar20 = iVar3 + 1;
        uVar23 = uVar20;
        puVar14 = uVar20 + 0x20;
        iVar16 = trace_event_buffer_reserve(&uStack_178,iVar9);
        auVar24._8_8_ = iStack_128;
        auVar24._0_8_ = iStack_108;
        if (iVar16 != 0) {
            *(iVar16 + 8) = uVar20 * 0x10000 | 0x20;
            pcVar5 = (*(iVar13 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar18 = **(iVar13 + 8);
                pcVar5 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar5 = pcVar18;
                }
            }
            strcpy(iVar16 + 0x20,pcVar5);
            *(iVar16 + 0x10) = puVar15;
            puVar15 = NULL;
            uVar20 = uVar4;
            while (uVar20 != 0) {
                puVar15 = puVar15 + *(iVar11 + 0xc);
                iVar11 = sg_next(iVar11);
                uVar20 = uVar21 - 1;
                uVar21 = uVar20;
            }
            *(iVar16 + 0x18) = puVar15;
            trace_event_buffer_commit(&uStack_178);
            auVar24._8_8_ = iStack_128;
            auVar24._0_8_ = iStack_108;
            iStack_1a8 = iVar16;
        }
    }
code_r0x08009020:
    iStack_128 = auVar24._8_8_;
    iStack_108 = auVar24._0_8_;
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_148) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar7 = auVar24._0_8_;
    *extraout_x18_01 = sym.perf_trace_map_sg;
    pcStack_1d8 = sym.perf_trace_map_sg;
    pcStack_1c0 = sym.perf_trace_iommu_map_pages;
    iVar16 = sp_el0;
    iStack_1e8 = *(iVar16 + 0x5e0);
    uVar10 = uVar17 & 0xffffffff;
    puVar19 = *(auVar24._8_8_ + 8);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    pcVar5 = puVar19[0xe];
    if (pcVar5 == NULL) {
        pcVar18 = *puVar19;
        pcVar5 = "(null)";
        if (pcVar18 != NULL) {
            pcVar5 = pcVar18;
        }
    }
    pppuStack_1e0 = &ppuStack_140;
    uStack_1d0 = uVar8;
    iStack_1c8 = unaff_x27;
    uStack_1b8 = unaff_x25;
    uStack_1b0 = uVar23;
    iStack_1a0 = iVar13;
    puStack_198 = puVar15;
    iStack_190 = iVar11;
    uStack_188 = uVar21;
    iVar3 = strlen(pcVar5);
    iVar16 = tpidr_el1;
    piVar22 = iVar16 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        uVar23 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar21 = perf_trace_buf_alloc(uVar23,&iStack_1f0,&uStack_1f4);
        uVar4 = _trace_event_reg;
        if (uVar21 != 0) {
            *(iStack_1f0 + 0xe8) = &pppuStack_1e0;
            *(iStack_1f0 + 0xf8) = auStack_200;
            *(iStack_1f0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x8009058;
            *(iStack_1f0 + 0x108) = 5;
            *(uVar21 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar19 = *(auVar24._8_8_ + 8);
            pcVar5 = puVar19[0xe];
            if (pcVar5 == NULL) {
                pcVar18 = *puVar19;
                pcVar5 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar5 = pcVar18;
                }
            }
            strcpy(uVar21 + 0x20,pcVar5);
            *(uVar21 + 0x10) = puVar14;
            puVar14 = NULL;
            uVar20 = uVar17;
            while (uVar20 != 0) {
                puVar14 = puVar14 + *(iVar6 + 0xc);
                iVar6 = sg_next(iVar6);
                uVar20 = uVar10 - 1;
                uVar10 = uVar20;
            }
            *(uVar21 + 0x18) = puVar14;
            perf_trace_run_bpf_submit(uVar21,uVar23,uStack_1f4,iVar7,1,iStack_1f0,piVar22,0);
            unaff_x25 = uVar21;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar19 = auVar24._8_8_;
    iVar12 = auVar24._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_02 = 0x8009228;
    uStack_228 = 0x8009228;
    iVar16 = sp_el0;
    iStack_238 = *(iVar16 + 0x5e0);
    uVar4 = *(iVar12 + 0x48);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar20 = uVar4;
    pppuStack_230 = &pppuStack_1e0;
    iStack_220 = iVar6;
    uStack_210 = uVar10;
    iStack_208 = iVar7;
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            event_triggers_call(iVar12,0,0,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar12), (uVar10 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar5 = puVar19[0xe];
        if (puVar19[0xe] == NULL) {
            pcVar5 = "(null)";
            if (*puVar19 != NULL) {
                pcVar5 = *puVar19;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar20 = iVar3 + 1;
        uVar4 = uVar20;
        iVar16 = trace_event_buffer_reserve(&uStack_268,iVar12,uVar20 + 0xc);
        if (iVar16 != 0) {
            *(iVar16 + 8) = uVar20 * 0x10000 | 0xc;
            pcVar5 = puVar19[0xe];
            if (puVar19[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar19 != NULL) {
                    pcVar5 = *puVar19;
                }
            }
            strcpy(iVar16 + 0xc,pcVar5);
            trace_event_buffer_commit(&uStack_268);
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_238) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar19 = auVar25._8_8_;
    iVar6 = auVar25._0_8_;
    *extraout_x18_03 = sym.perf_trace_tlbsync_timeout;
    pcStack_2b8 = sym.perf_trace_tlbsync_timeout;
    iVar16 = sp_el0;
    iStack_2c8 = *(iVar16 + 0x5e0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    pcVar5 = puVar19[0xe];
    if (puVar19[0xe] == NULL) {
        pcVar5 = "(null)";
        if (*puVar19 != NULL) {
            pcVar5 = *puVar19;
        }
    }
    pppuStack_2c0 = &pppuStack_230;
    uStack_2b0 = unaff_x25;
    uStack_2a0 = uVar23;
    puStack_298 = puVar14;
    piStack_290 = piVar22;
    uStack_288 = uVar4;
    auStack_280 = auVar24;
    iVar3 = strlen(pcVar5);
    iVar16 = tpidr_el1;
    piVar1 = iVar16 + *(iVar6 + 0x78);
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar22 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar16 = perf_trace_buf_alloc(piVar22,&iStack_2d0,&uStack_2d4);
        uVar10 = _trace_event_reg;
        if (iVar16 != 0) {
            *(iStack_2d0 + 0xe8) = &pppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800934c;
            *(iStack_2d0 + 0x108) = 5;
            *(iVar16 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar5 = puVar19[0xe];
            if (puVar19[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar19 != NULL) {
                    pcVar5 = *puVar19;
                }
            }
            strcpy(iVar16 + 0xc,pcVar5);
            perf_trace_run_bpf_submit(iVar16,piVar22,uStack_2d4,iVar6,1,iStack_2d0,piVar1,0);
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_2c8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar7 = auVar24._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x80094d4;
    uStack_308 = 0x80094d4;
    iVar16 = sp_el0;
    iStack_318 = *(iVar16 + 0x5e0);
    uVar8 = *(iVar7 + 0x48);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar20 = uVar8;
    pppuStack_310 = &pppuStack_2c0;
    piStack_300 = piVar1;
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            puStack_2f0 = puVar19;
            iStack_2e8 = iVar6;
            event_triggers_call(iVar7,0,0,0);
            auVar25._8_8_ = puStack_2f0;
            auVar25._0_8_ = iStack_2e8;
        }
        puStack_2f0 = auVar25._8_8_;
        iStack_2e8 = auVar25._0_8_;
        if ((uVar20 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar20 >> 9 & 1) != 0) {
            uVar10 = trace_event_ignore_this_pid(iVar7);
            auVar25._8_8_ = puStack_2f0;
            auVar25._0_8_ = iStack_2e8;
            if ((uVar10 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_2f0 = auVar25._8_8_;
    iStack_2e8 = auVar25._0_8_;
    iVar16 = trace_event_buffer_reserve(&uStack_348,iVar7,0x10);
    auVar25._8_8_ = puStack_2f0;
    auVar25._0_8_ = iStack_2e8;
    if (iVar16 != 0) {
        *(iVar16 + 8) = auVar24._8_8_;
        trace_event_buffer_commit(&uStack_348);
        auVar25._8_8_ = puStack_2f0;
        auVar25._0_8_ = iStack_2e8;
    }
code_r0x08009570:
    puStack_2f0 = auVar25._8_8_;
    iStack_2e8 = auVar25._0_8_;
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_318) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    *extraout_x18_05 = sym.perf_trace_smmu_init;
    pcStack_378 = sym.perf_trace_smmu_init;
    iVar16 = sp_el0;
    iStack_388 = *(iVar16 + 0x5e0);
    iStack_390 = 0;
    uStack_394 = 0;
    iVar16 = tpidr_el1;
    piVar1 = iVar16 + *(iVar6 + 0x78);
    pppuStack_380 = &pppuStack_310;
    piStack_370 = piVar22;
    uStack_368 = uVar8;
    auStack_360 = auVar24;
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar16 = perf_trace_buf_alloc(0x14,&iStack_390,&uStack_394);
        uVar10 = _trace_event_reg;
        if (iVar16 != 0) {
            *(iStack_390 + 0xe8) = &pppuStack_380;
            *(iStack_390 + 0xf8) = auStack_3a0;
            *(iStack_390 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x80095a4;
            *(iStack_390 + 0x108) = 5;
            *(iVar16 + 8) = auVar25._8_8_;
            perf_trace_run_bpf_submit(iVar16,0x14,uStack_394,iVar6,1,iStack_390,piVar1,0);
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) != iStack_388) {
        __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_06 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_iommu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f70 (size 8) =====

void sym.__bpf_trace_iommu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4();
    return;
}


// ===== sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr @ 0x08007f78 (size 8) =====

void sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr(int64_t param_1,int param_2,int param_3,uint32_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((param_2 == 0) &&
       ((((param_3 - 0x48U < 0x11 && ((1 << (param_3 - 0x48U & 0x1f) & 0x11101U) != 0)) || (param_3 == 0x10)) ||
        (param_3 == 0)))) {
        param_3 = param_3 + 0x400;
    }
    *in_x18 = unaff_x30;
    sym.writel_relaxed_1(param_4,*(param_1 + 8) + (param_2 << (*(param_1 + 0x14) & 0x1f)) + param_3);
    return;
}


// ===== sym.__typeid__ZTSFvP15arm_smmu_domainP6deviceE_global_addr @ 0x08007f80 (size 8) =====

void sym.__typeid__ZTSFvP15arm_smmu_domainP6deviceE_global_addr(int64_t *param_1,int64_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    char *pcVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *param_1;
    pcVar3 = iommu_group_get_iommudata(*(param_2 + 0x338));
    if (*pcVar3 != '\0') {
        uVar2 = *(pcVar3 + 4);
        iVar1 = *(iVar5 + 0x10) + *(param_1 + 6);
        if ((*(iVar5 + 0x28) == 0) || (pcVar4 = *(*(iVar5 + 0x28) + 8), pcVar4 == NULL)) {
            sym.writel_relaxed_2(uVar2,*(iVar5 + 8) + (iVar1 << (*(iVar5 + 0x14) & 0x1f)) + 4);
        }
        else {
            if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001eb0);
            }
            (*pcVar4)(iVar5,iVar1,4,uVar2);
        }
        pcVar4 = *(param_1[0x17] + 0x50);
        if (pcVar4 != NULL) {
            if (1 < (pcVar4 + -0x8007fc0 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3dfe89e98d52c464,pcVar4,0x8001f10);
            }
            (*pcVar4)(param_1 + 0x16);
        }
    }
    return;
}


// ===== sym.trace_event_raw_event_tlbsync_timeout.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f88 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_tlbsync_timeout.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,ulong *param_2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar9;
    ulong uVar10;
    uint64_t unaff_x22;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    uchar auStack_1a0 [12];
    uint uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar ***pppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    ulong uStack_168;
    uchar auStack_160 [16];
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    int64_t *piStack_100;
    ulong *puStack_f0;
    int64_t iStack_e8;
    uchar auStack_e0 [12];
    uint uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    int64_t iVar5;
    ulong *puVar8;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar9 = *(param_1 + 0x48);
    if ((uVar9 >> 8 & 1) == 0) {
        if ((uVar9 >> 7 & 1) != 0) {
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar9 >> 6 & 1) == 0) &&
           (((uVar9 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar6 = param_2[0xe];
        if (param_2[0xe] == NULL) {
            pcVar6 = "(null)";
            if (*param_2 != NULL) {
                pcVar6 = *param_2;
            }
        }
        iVar2 = strlen(pcVar6);
        iVar4 = trace_event_buffer_reserve(&uStack_68,param_1,iVar2 + 1 + 0xc);
        if (iVar4 != 0) {
            *(iVar4 + 8) = (iVar2 + 1) * 0x10000 | 0xc;
            pcVar6 = param_2[0xe];
            if (param_2[0xe] == NULL) {
                pcVar6 = "(null)";
                if (*param_2 != NULL) {
                    pcVar6 = *param_2;
                }
            }
            strcpy(iVar4 + 0xc,pcVar6);
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar11 = __stack_chk_fail();
    puVar8 = auVar11._8_8_;
    iVar5 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_tlbsync_timeout;
    pcStack_b8 = sym.perf_trace_tlbsync_timeout;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    pcVar6 = puVar8[0xe];
    if (puVar8[0xe] == NULL) {
        pcVar6 = "(null)";
        if (*puVar8 != NULL) {
            pcVar6 = *puVar8;
        }
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    iVar2 = strlen(pcVar6);
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        unaff_x22 = (iVar2 + 0x18U & 0xfffffff8) - 4;
        iVar4 = perf_trace_buf_alloc(unaff_x22,&iStack_d0,&uStack_d4);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x800934c;
            *(iStack_d0 + 0x108) = 5;
            *(iVar4 + 8) = iVar2 * 0x10000 + 0x1000c;
            pcVar6 = puVar8[0xe];
            if (puVar8[0xe] == NULL) {
                pcVar6 = "(null)";
                if (*puVar8 != NULL) {
                    pcVar6 = *puVar8;
                }
            }
            strcpy(iVar4 + 0xc,pcVar6);
            perf_trace_run_bpf_submit(iVar4,unaff_x22,uStack_d4,iVar5,1,iStack_d0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar7 = auVar12._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_00 = 0x80094d4;
    uStack_108 = 0x80094d4;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    uVar10 = *(iVar7 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar9 = uVar10;
    ppuStack_110 = &puStack_c0;
    piStack_100 = piVar1;
    if ((uVar9 >> 8 & 1) == 0) {
        if ((uVar9 >> 7 & 1) != 0) {
            puStack_f0 = puVar8;
            iStack_e8 = iVar5;
            event_triggers_call(iVar7,0,0,0);
            auVar11._8_8_ = puStack_f0;
            auVar11._0_8_ = iStack_e8;
        }
        puStack_f0 = auVar11._8_8_;
        iStack_e8 = auVar11._0_8_;
        if ((uVar9 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar9 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar7);
            auVar11._8_8_ = puStack_f0;
            auVar11._0_8_ = iStack_e8;
            if ((uVar3 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_f0 = auVar11._8_8_;
    iStack_e8 = auVar11._0_8_;
    iVar4 = trace_event_buffer_reserve(&uStack_148,iVar7,0x10);
    auVar11._8_8_ = puStack_f0;
    auVar11._0_8_ = iStack_e8;
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar12._8_8_;
        trace_event_buffer_commit(&uStack_148);
        auVar11._8_8_ = puStack_f0;
        auVar11._0_8_ = iStack_e8;
    }
code_r0x08009570:
    puStack_f0 = auVar11._8_8_;
    iStack_e8 = auVar11._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18_01 = sym.perf_trace_smmu_init;
    pcStack_178 = sym.perf_trace_smmu_init;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    iStack_190 = 0;
    uStack_194 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    pppuStack_180 = &ppuStack_110;
    uStack_170 = unaff_x22;
    uStack_168 = uVar10;
    auStack_160 = auVar12;
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_190,&uStack_194);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_190 + 0xe8) = &pppuStack_180;
            *(iStack_190 + 0xf8) = auStack_1a0;
            *(iStack_190 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x80095a4;
            *(iStack_190 + 0x108) = 5;
            *(iVar4 + 8) = auVar11._8_8_;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_194,iVar5,1,iStack_190,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_188) {
        return;
    }
    __stack_chk_fail();
    uVar10 = tpidr_el2;
    *extraout_x18_02 = 0x80096b4;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.perf_trace_tlbsync_timeout.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f90 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_tlbsync_timeout.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,ulong *param_2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int iVar2;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar8;
    ulong uVar9;
    uint64_t unaff_x22;
    uint64_t unaff_x30;
    uchar auVar10 [16];
    uchar auVar11 [16];
    uchar auStack_130 [12];
    uint uStack_124;
    int64_t iStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    ulong uStack_f8;
    uchar auStack_f0 [16];
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    ulong *puStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    char *pcVar3;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    pcVar3 = param_2[0xe];
    if (param_2[0xe] == NULL) {
        pcVar3 = "(null)";
        if (*param_2 != NULL) {
            pcVar3 = *param_2;
        }
    }
    iVar2 = strlen(pcVar3);
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        unaff_x22 = (iVar2 + 0x18U & 0xfffffff8) - 4;
        iVar4 = perf_trace_buf_alloc(unaff_x22,&iStack_60,&uStack_64);
        uVar6 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = auStack_70;
            uVar7 = -1L << (uVar6 & 0x3f);
            uVar6 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar7 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar6;
            *(iStack_60 + 0x108) = 5;
            *(iVar4 + 8) = iVar2 * 0x10000 + 0x1000c;
            pcVar3 = param_2[0xe];
            if (param_2[0xe] == NULL) {
                pcVar3 = "(null)";
                if (*param_2 != NULL) {
                    pcVar3 = *param_2;
                }
            }
            strcpy(iVar4 + 0xc,pcVar3);
            perf_trace_run_bpf_submit(iVar4,unaff_x22,uStack_64,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar5 = auVar10._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18 = 0x80094d4;
    uStack_98 = 0x80094d4;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    uVar9 = *(iVar5 + 0x48);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar8 = uVar9;
    puStack_a0 = &stack0xffffffffffffffb0;
    piStack_90 = piVar1;
    puStack_80 = param_2;
    iStack_78 = param_1;
    if ((uVar8 >> 8 & 1) == 0) {
        if ((uVar8 >> 7 & 1) != 0) {
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar8 >> 6 & 1) != 0) ||
           (((uVar8 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) != 0))))
        goto code_r0x08009570;
    }
    iVar4 = trace_event_buffer_reserve(&uStack_d8,iVar5,0x10);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar10._8_8_;
        trace_event_buffer_commit(&uStack_d8);
    }
code_r0x08009570:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18_00 = sym.perf_trace_smmu_init;
    pcStack_108 = sym.perf_trace_smmu_init;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    iStack_120 = 0;
    uStack_124 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    ppuStack_110 = &puStack_a0;
    uStack_100 = unaff_x22;
    uStack_f8 = uVar9;
    auStack_f0 = auVar10;
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_120,&uStack_124);
        uVar6 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_120 + 0xe8) = &ppuStack_110;
            *(iStack_120 + 0xf8) = auStack_130;
            *(iStack_120 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x80095a4;
            *(iStack_120 + 0x108) = 5;
            *(iVar4 + 8) = auVar11._8_8_;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_124,iVar5,1,iStack_120,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return;
    }
    __stack_chk_fail();
    uVar9 = tpidr_el2;
    *extraout_x18_01 = 0x80096b4;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_tlbsync_timeout.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007f98 (size 8) =====

void sym.__bpf_trace_tlbsync_timeout.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__typeid__ZTSFiP20qsmmuv500_tbu_deviceE_global_addr @ 0x08007fa0 (size 8) =====

ulong sym.__typeid__ZTSFiP20qsmmuv500_tbu_deviceE_global_addr(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x20);
    iVar2 = ktime_get();
    do {
        uVar1 = sym.readl_1(arg1 + 0x20);
        if ((uVar1 >> 1 & 1) != 0) goto code_r0x080143e8;
        iVar3 = ktime_get();
    } while (iVar3 <= iVar2 + 100000);
    uVar1 = sym.readl_1(arg1 + 0x20);
code_r0x080143e8:
    if ((uVar1 >> 1 & 1) == 0) {
        _dev_err(*(param_1 + 0x10),"Couldn\'t halt TBU!\n");
        uVar1 = sym.readl_relaxed_2(arg1);
        sym.writel_relaxed_2(uVar1 & 0xfffeffff,arg1);
        uVar4 = 0xffffff92;
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.arm_tbu_halt_req.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007fa8 (size 8) =====

ulong sym.arm_tbu_halt_req.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x20);
    uVar1 = sym.readl_relaxed_2(arg1);
    sym.writel_relaxed_2(uVar1 | 0x10000,arg1);
    return 0;
}


// ===== sym.qtb500_tbu_halt_req.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007fb0 (size 8) =====

ulong sym.qtb500_tbu_halt_req.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x58) == '\0') {
        arg1 = *(param_1 + 0x20) + 0x410;
        uVar1 = sym.readq_relaxed_1(arg1);
        sym.writeq_relaxed_1(uVar1 | 1,arg1);
    }
    return 0;
}


// ===== sym.qtb500_tbu_halt_poll.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007fb8 (size 8) =====

ulong sym.qtb500_tbu_halt_poll.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x58) == '\0') {
        iVar4 = *(param_1 + 0x20);
        iVar1 = ktime_get();
        arg1 = iVar4 + 0x418;
        do {
            uVar2 = sym.readq(arg1);
            if ((uVar2 & 1) != 0) goto code_r0x0801401c;
            iVar3 = ktime_get();
        } while (iVar3 <= iVar1 + 100000);
        uVar2 = sym.readq(arg1);
code_r0x0801401c:
        if ((uVar2 & 1) == 0) {
            _dev_err(*(param_1 + 0x10),"Couldn\'t halt QTB\n");
            iVar4 = iVar4 + 0x410;
            uVar2 = sym.readq_relaxed_1(iVar4);
            sym.writeq_relaxed_1(uVar2 & 0xfffffffffffffffe,iVar4);
            return 0xffffff92;
        }
    }
    return 0;
}


// ===== sym.__typeid__ZTSFvP12iommu_domainE_global_addr @ 0x08007fc0 (size 8) =====

void sym.__typeid__ZTSFvP12iommu_domainE_global_addr
               (uchar param_1 [16],int64_t param_2,ulong param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_2 + -0x27) >> 2 & 1) != 0) {
        param_1 = fast_smmu_put_dma_cookie(param_2);
    }
    sym.arm_smmu_destroy_domain_context(param_2,param_1,param_4);
    iommu_logger_unregister(*(param_2 + -8));
    kfree(param_2 + -0xb0);
    return;
}


// ===== sym.arm_smmu_flush_iotlb_all.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007fc8 (size 8) =====

void sym.arm_smmu_flush_iotlb_all.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    code *pcVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar12 = *(param_1 + -0xb0);
    iVar10 = param_1 + -0x20;
    uVar6 = _raw_spin_lock_irqsave(iVar10);
    if (*(param_1 + 0xcd) == '\0') {
        _raw_spin_unlock_irqrestore(iVar10,uVar6);
        if (*(param_1 + -0x88) != 0) {
            iVar11 = *piVar12;
            if (((*(iVar11 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar11,4), iVar5 < 0)) {
                puVar1 = iVar11 + 0x1f8;
                uVar9 = *puVar1;
                do {
                    uVar8 = uVar9;
                    if (uVar8 == 0) break;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar9 = uVar2;
                        if (uVar2 != uVar8) goto code_r0x0800de3c;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar8 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800de3c:
                } while (uVar8 != uVar2);
            }
            uVar6 = _raw_spin_lock_irqsave(iVar10);
            if (*(param_1 + 0xcd) == '\0') {
                pcVar7 = **(param_1 + -0x88);
                if (4 < (pcVar7 + -0x8007e58 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar7,0x8001cf0);
                }
                (*pcVar7)(param_1 + -0xb0);
                iVar11 = *(param_1 + -0x18);
                *(param_1 + -0x10) = 0;
                *(param_1 + -0x18) = 0;
                while (iVar11 != 0) {
                    iVar11 = *(iVar11 + 0x20);
                    qcom_io_pgtable_free_page();
                }
            }
            _raw_spin_unlock_irqrestore(iVar10,uVar6);
            iVar10 = *piVar12;
            if ((*(iVar10 + 0x200) & 7) == 0) {
                uVar6 = ktime_get_mono_fast_ns();
                *(iVar10 + 0x218) = uVar6;
                __pm_runtime_idle(*piVar12,5);
            }
        }
    }
    else {
        *(param_1 + -0x10) = 0;
        _raw_spin_unlock_irqrestore(iVar10,uVar6);
    }
    return;
}


// ===== sym.__typeid__ZTSFiP15arm_smmu_domainP14io_pgtable_cfgP6deviceE_global_addr @ 0x08007fd0 (size 8) =====

ulong sym.__typeid__ZTSFiP15arm_smmu_domainP14io_pgtable_cfgP6deviceE_global_addr(int64_t *param_1)

{
    *(param_1 + 0x32) = *(param_1 + 0x32) + *(*param_1 + 0x130);
    return 0;
}


// ===== sym.qcom_adreno_smmu_init_context.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007fd8 (size 8) =====

ulong sym.qcom_adreno_smmu_init_context.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt
                (ulong *param_1,uint64_t *param_2,int64_t param_3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong uVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = *(**param_1 + 0x2f0);
    *(param_1 + 0x44) = 1;
    iVar7 = 0;
    if (*(param_3 + 0x340) != 0) {
        iVar7 = *(*(param_3 + 0x340) + 0x40);
    }
    uVar4 = *(iVar7 + 0x14);
    if (uVar4 != 0) {
        if ((*(iVar7 + 0x18) & 0xfffe) != 0) {
            uVar5 = 1;
            do {
                uVar8 = uVar5;
                if (uVar4 == uVar8) {
                    return 0;
                }
                uVar5 = uVar8 + 1;
            } while ((*(iVar7 + uVar8 * 4 + 0x18) & 0xfffe) != 0);
            if (uVar4 <= uVar8) {
                return 0;
            }
        }
        iVar6 = of_device_is_compatible(*(**param_1 + 0x2f0),"qcom,msm8996-smmu-v2");
        if (((iVar6 == 0) && (*(param_1 + 9) == 0)) && (*(param_1 + 8) == 1)) {
            *param_2 = *param_2 | 0x20;
        }
        piVar10 = *(param_3 + 0x98);
        *piVar10 = param_1;
        piVar10[1] = sym.qcom_adreno_smmu_get_ttbr1_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        piVar10[2] = sym.qcom_adreno_smmu_set_ttbr0_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        piVar10[3] = sym.qcom_adreno_smmu_get_fault_info.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        uVar2 = param_2[3];
        uVar1 = *param_2;
        uVar3 = param_2[1];
        piVar10[8] = param_2[2];
        piVar10[9] = uVar2;
        piVar10[6] = uVar1;
        piVar10[7] = uVar3;
        uVar2 = param_2[7];
        uVar1 = param_2[4];
        uVar3 = param_2[5];
        piVar10[0xc] = param_2[6];
        piVar10[0xd] = uVar2;
        piVar10[10] = uVar1;
        piVar10[0xb] = uVar3;
        uVar2 = param_2[0xb];
        uVar1 = param_2[8];
        uVar3 = param_2[9];
        piVar10[0x10] = param_2[10];
        piVar10[0x11] = uVar2;
        piVar10[0xe] = uVar1;
        piVar10[0xf] = uVar3;
        uVar2 = param_2[0xf];
        uVar1 = param_2[0xc];
        uVar3 = param_2[0xd];
        piVar10[0x14] = param_2[0xe];
        piVar10[0x15] = uVar2;
        piVar10[0x12] = uVar1;
        piVar10[0x13] = uVar3;
        iVar7 = of_match_node(obj.qcom_smmu_impl_of_match,uVar9);
        if (iVar7 != 0) {
            piVar10[4] = sym.qcom_adreno_smmu_set_stall.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
            piVar10[5] = sym.qcom_adreno_smmu_resume_translation.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        }
    }
    return 0;
}


// ===== sym.qcom_smmu_init_context.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08007fe0 (size 8) =====

ulong sym.qcom_smmu_init_context.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x44) = 1;
    return 0;
}


// ===== sym.arm_smmu_tlb_add_page_s1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007fe8 (size 8) =====

void sym.arm_smmu_tlb_add_page_s1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_tlb_inv_range_s1(param_2,param_3,param_3,param_4);
    return;
}


// ===== sym.arm_smmu_tlb_add_page_s2_v1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007ff0 (size 8) =====

void sym.arm_smmu_tlb_add_page_s2_v1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t *in_x3;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *in_x3;
    if ((*(iVar2 + 0x18) & 1) != 0) {
        DataSynchronizationBarrier(3,2,0);
    }
    uVar1 = *(in_x3 + 0x32);
    if ((*(iVar2 + 0x28) == 0) || (pcVar3 = *(*(iVar2 + 0x28) + 8), pcVar3 == NULL)) {
        sym.writel_relaxed(uVar1,*(iVar2 + 8) + 100);
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar3,0x8001b70);
        }
        (*pcVar3)(iVar2,0,100,uVar1);
    }
    return;
}


// ===== sym.arm_smmu_tlb_add_page_s2.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08007ff8 (size 8) =====

void sym.arm_smmu_tlb_add_page_s2.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_tlb_inv_range_s2(param_2,param_3,param_3,param_4);
    return;
}


// ===== sym.arm_smmu_global_fault.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008000 (size 8) =====

ulong sym.arm_smmu_global_fault.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(ulong param_1,int64_t *param_2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t uVar7;
    uint uVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t iVar10;
    code *pcVar11;
    uint64_t uVar12;
    ulong uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *param_2;
    if (((*(iVar10 + 0x200) & 7) == 0) && (iVar4 = __pm_runtime_resume(iVar10,4), iVar4 < 0)) {
        puVar1 = iVar10 + 0x1f8;
        uVar12 = *puVar1;
        do {
            uVar5 = uVar12;
            if (uVar5 == 0) {
                return 0;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                uVar12 = uVar7;
                if (uVar7 != uVar5) goto code_r0x0800b77c;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = uVar5 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800b77c:
            if (uVar5 == uVar7) {
                return 0;
            }
        } while( true );
    }
    if ((param_2[5] == NULL) || (pcVar11 = *param_2[5], pcVar11 == NULL)) {
        uVar5 = sym.readl_relaxed(param_2[1] + 0x48);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar11,0x8001bd0);
        }
        uVar5 = (*pcVar11)(param_2,0,0x48);
    }
    uVar12 = uVar5;
    if ((param_2[5] == NULL) || (pcVar11 = *param_2[5], pcVar11 == NULL)) {
        uVar6 = sym.readl_relaxed(param_2[1] + 0x50);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar11,0x8001bd0);
        }
        uVar6 = (*pcVar11)(param_2,0,0x50);
    }
    if ((param_2[5] == NULL) || (pcVar11 = *param_2[5], pcVar11 == NULL)) {
        uVar7 = sym.readl_relaxed(param_2[1] + 0x54);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar11,0x8001bd0);
        }
        uVar7 = (*pcVar11)(param_2,0,0x54);
    }
    if ((param_2[5] == NULL) || (pcVar11 = *param_2[5], pcVar11 == NULL)) {
        uVar8 = sym.readl_relaxed(param_2[1] + 0x58);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar11,0x8001bd0);
        }
        uVar8 = (*pcVar11)(param_2,0,0x58);
    }
    if (uVar5 == 0) {
        iVar10 = *param_2;
        uVar13 = 0;
        goto code_r0x0800b888;
    }
    iVar4 = ___ratelimit(obj.arm_smmu_global_fault.rs,"arm_smmu_global_fault");
    if (iVar4 == 0) {
        iVar10 = param_2[5];
        if (iVar10 == 0) goto code_r0x0800b734;
code_r0x0800b72c:
        pcVar11 = *(iVar10 + 8);
        if (pcVar11 == NULL) goto code_r0x0800b734;
        if (pcVar11 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar11,0x8001b70);
        }
        (*pcVar11)(param_2,0,0x48,uVar12);
    }
    else {
        if ((uVar5 >> 1 & 1) == 0) {
            _dev_err(*param_2,"Unexpected global fault, this could be serious\n");
        }
        else {
            _dev_err(*param_2,
                     "Blocked unknown Stream ID 0x%hx; boot with \"arm-smmu.disable_bypass=0\" to allow, but this may have security implications\n"
                     ,uVar7 & 0xffff);
        }
        _dev_err(*param_2,"\tGFSR 0x%08x, GFSYNR0 0x%08x, GFSYNR1 0x%08x, GFSYNR2 0x%08x\n",uVar12,uVar6,uVar7,
                 uVar8);
        iVar10 = param_2[5];
        if (iVar10 != 0) goto code_r0x0800b72c;
code_r0x0800b734:
        sym.writel_relaxed(uVar12,param_2[1] + 0x48);
    }
    iVar10 = *param_2;
    uVar13 = 1;
code_r0x0800b888:
    if ((*(iVar10 + 0x200) & 7) == 0) {
        uVar9 = ktime_get_mono_fast_ns();
        *(iVar10 + 0x218) = uVar9;
        __pm_runtime_idle(*param_2,5);
    }
    return uVar13;
}


// ===== sym.arm_smmu_context_fault.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008008 (size 8) =====

uint64_t sym.arm_smmu_context_fault.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(ulong param_1,uint64_t param_2)

{
    uint64_t *puVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    char *pcVar10;
    char *pcVar11;
    code **ppcVar12;
    uint8_t uVar13;
    char cVar14;
    bool bVar15;
    int iVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint uVar19;
    uint uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    ulong uVar23;
    int64_t iVar24;
    int64_t iVar25;
    ulong *puVar26;
    ulong *in_x18;
    uint64_t *puVar27;
    int iVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    code *unaff_x23;
    code *unaff_x24;
    code *pcVar31;
    code *unaff_x25;
    code *unaff_x26;
    ulong unaff_x30;
    ushort uStack_a0;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar24 = sp_el0;
    iStack_68 = *(iVar24 + 0x5e0);
    puVar27 = *(param_2 - 0xb0);
    uVar13 = *(param_2 - 0x80);
    uVar29 = uVar13;
    uVar30 = *puVar27;
    if (((*(uVar30 + 0x200) & 7) == 0) && (iVar16 = __pm_runtime_resume(uVar30,4), iVar16 < 0)) {
        puVar1 = uVar30 + 0x1f8;
        uVar22 = *puVar1;
        do {
            uVar21 = uVar22;
            if (uVar21 == 0) {
                uVar29 = 0;
                goto code_r0x08010bd4;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar17 = *puVar1;
                uVar22 = uVar17;
                if (uVar17 != uVar21) goto code_r0x08010374;
                cVar14 = '\x01';
                bVar15 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar15) {
                    *puVar1 = uVar21 - 1;
                    cVar14 = ExclusiveMonitorsStatus();
                }
            } while (cVar14 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08010374:
            uVar29 = 0;
            if (uVar21 == uVar17) goto code_r0x08010bd4;
        } while( true );
    }
    iVar16 = puVar27[2] + uVar13;
    if ((puVar27[5] == NULL) || (unaff_x23 = *puVar27[5], unaff_x23 == NULL)) {
        uVar22 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x58);
    }
    else {
        if (unaff_x23 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,unaff_x23,0x8001bd0);
        }
        uVar22 = (*unaff_x23)(puVar27,iVar16,0x58);
    }
    uVar30 = uVar22 & 0xffffffff;
    if ((uVar22 & 0xc00001fe) == 0) {
        uVar29 = 0;
        goto code_r0x08010bb0;
    }
    if (((*(puVar27 + 0x1c) & 1) != 0) && ((uVar22 >> 7 & 1) != 0)) {
        _dev_err(*puVar27,"Took an address size fault.  Refusing to recover.\n");
    //WARNING: Does not return
        pcVar31 = SoftwareBreakpoint(0x800,0x8010fa0);
        (*pcVar31)();
    }
    iVar16 = puVar27[2] + uVar13;
    if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
        uVar22 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x58);
    }
    else {
        if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
        }
        uVar22 = (*pcVar31)(puVar27,iVar16,0x58);
    }
    unaff_x23 = uVar22 & 0xffffffff;
    uVar21 = uVar13;
    iVar16 = puVar27[2] + uVar21;
    if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
        uVar17 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x68);
    }
    else {
        if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
        }
        uVar17 = (*pcVar31)(puVar27,iVar16,0x68);
    }
    unaff_x24 = uVar17;
    uVar18 = puVar27[2] + uVar21;
    unaff_x25 = uVar18;
    if ((puVar27[5] == 0) || (unaff_x26 = *(puVar27[5] + 0x10), unaff_x26 == NULL)) {
        uVar23 = sym.readq_relaxed(puVar27[1] + (uVar18 << (*(puVar27 + 0x14) & 0x1f)) + 0x60);
    }
    else {
        if (unaff_x26 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0x9f6c1d97e51850d,unaff_x26,0x8001c30);
        }
        uVar23 = (*unaff_x26)(puVar27,unaff_x25,0x60);
    }
    iVar16 = report_iommu_fault(param_2,*puVar27,uVar23,
                                uVar22 & 0x18 | (unaff_x23 >> 1 & 1) << 2 | unaff_x23 >> 0x19 & 0x20 | uVar17 >> 4 & 1);
    if (iVar16 == -0x10) goto code_r0x08010338;
    if (iVar16 == -0x26) {
        iVar16 = ___ratelimit(obj.arm_smmu_context_fault._rs,0x800232c);
        if (iVar16 != 0) {
            iVar16 = puVar27[2] + uVar21;
            iVar24 = *(puVar27[9] + uVar21 * 0x30 + 0x28);
            iVar28 = *(iVar24 + 0xc);
            if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
                uVar21 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x58);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uVar21 = (*pcVar31)(puVar27,iVar16,0x58);
            }
            uVar17 = uVar13;
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
                uVar18 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x68);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uVar18 = (*pcVar31)(puVar27,iVar16,0x68);
            }
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
                uStack_9c = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x6c);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uStack_9c = (*pcVar31)(puVar27,iVar16,0x6c);
            }
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] == 0) || (pcVar31 = *(puVar27[5] + 0x10), pcVar31 == NULL)) {
                uVar23 = sym.readq_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x60);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar31,0x8001c30);
                }
                uVar23 = (*pcVar31)(puVar27,iVar16,0x60);
            }
            unaff_x23 = uVar29 << 2 | 0x400;
            if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
                uStack_a0 = sym.readl_relaxed(unaff_x23 + puVar27[1] + (1 << (*(puVar27 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uStack_a0 = (*pcVar31)(puVar27,1,unaff_x23);
            }
            iVar25 = (*(param_2 - 0xa8))[0xe];
            if (iVar25 == 0) {
                iVar25 = **(param_2 - 0xa8);
            }
            _dev_err(*puVar27,"Unhandled arm-smmu context fault from %s!\n",iVar25);
            _dev_err(*puVar27,"FAR    = 0x%016lx\n",uVar23);
            uVar22 = *puVar27;
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] == 0) || (pcVar31 = *(puVar27[5] + 0x10), pcVar31 == NULL)) {
                uVar23 = sym.readq_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x50);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar31,0x8001c30);
                }
                uVar23 = (*pcVar31)(puVar27,iVar16,0x50);
            }
            _dev_err(uVar22,"PAR    = 0x%pK\n",uVar23);
            bVar15 = (uVar18 & 0x10) != 0;
            pcVar4 = "TF R ";
            if (bVar15) {
                pcVar4 = "TF W ";
            }
            pcVar2 = 0x80037b6;
            pcVar6 = "PF R ";
            if (bVar15) {
                pcVar6 = "PF W ";
            }
            pcVar3 = pcVar2;
            if ((uVar21 & 2) != 0) {
                pcVar3 = pcVar4;
            }
            pcVar4 = pcVar2;
            if ((uVar21 & 4) != 0) {
                pcVar4 = "AFF ";
            }
            pcVar5 = pcVar2;
            if ((uVar21 & 8) != 0) {
                pcVar5 = pcVar6;
            }
            pcVar6 = pcVar2;
            if ((uVar21 & 0x10) != 0) {
                pcVar6 = 0x800380e;
            }
            pcVar7 = pcVar2;
            if ((uVar21 & 0x20) != 0) {
                pcVar7 = "TLBMCF ";
            }
            pcVar8 = pcVar2;
            if ((uVar21 & 0x40) != 0) {
                pcVar8 = "TLBLKF ";
            }
            pcVar9 = pcVar2;
            if ((uVar21 & 0x80) != 0) {
                pcVar9 = "ASF ";
            }
            pcVar10 = pcVar2;
            if ((uVar21 & 0x100) != 0) {
                pcVar10 = "UUT ";
            }
            pcVar11 = pcVar2;
            if ((uVar21 & 0x40000000) != 0) {
                pcVar11 = 0x80030dc;
            }
            if ((uVar21 & 0x80000000) != 0) {
                pcVar2 = "MULTI ";
            }
            _dev_err(*puVar27,"FSR    = 0x%08x [%s%s%s%s%s%s%s%s%s%s]\n",uVar21,pcVar3,pcVar4,pcVar5,pcVar6,
                     pcVar7,pcVar8,pcVar9,pcVar10,pcVar11,pcVar2);
            _dev_err(*puVar27,"FSYNR0    = 0x%x\n",uVar18);
            _dev_err(*puVar27,"FSYNR1    = 0x%x\n",uStack_9c);
            _dev_err(*puVar27,"context bank#    = 0x%x\n",uVar17);
            uVar22 = *puVar27;
            iVar16 = puVar27[2] + uVar17;
            puVar26 = puVar27[5];
            if (*(iVar24 + 0x10) != 3) {
                if ((puVar26 == NULL) || (pcVar31 = puVar26[2], pcVar31 == NULL)) {
                    uVar23 = sym.readq_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x20);
                }
                else {
                    if (pcVar31 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar31,0x8001c30);
                    }
                    uVar23 = (*pcVar31)(puVar27,iVar16,0x20);
                }
                _dev_err(uVar22,"TTBR0  = 0x%pK\n",uVar23);
                if (iVar28 == 0) goto code_r0x08010774;
                unaff_x26 = *puVar27;
                uVar17 = puVar27[2] + uVar17;
                unaff_x25 = uVar17;
                if ((puVar27[5] != 0) && (unaff_x24 = *(puVar27[5] + 0x10), unaff_x24 != NULL)) goto code_r0x08010eb4;
                uVar22 = sym.readq_relaxed(puVar27[1] + (uVar17 << (*(puVar27 + 0x14) & 0x1f)) + 0x28);
                goto code_r0x08010764;
            }
            if ((puVar26 == NULL) || (pcVar31 = *puVar26, pcVar31 == NULL)) {
                uVar19 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x20);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uVar19 = (*pcVar31)(puVar27,iVar16,0x20);
            }
            _dev_err(uVar22,"TTBR0  = 0x%pK\n",uVar19);
            unaff_x26 = *puVar27;
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] != NULL) && (pcVar31 = *puVar27[5], pcVar31 != NULL)) {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uVar22 = (*pcVar31)(puVar27,iVar16,0x28);
                uVar22 = uVar22 & 0xffffffff;
                goto code_r0x08010764;
            }
            uVar22 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x28);
            uVar22 = uVar22 & 0xffffffff;
            goto code_r0x08010764;
        }
        if ((*(param_2 - 0x28) & 1) == 0) goto code_r0x08010ab8;
    }
    do {
        iVar16 = puVar27[2] + uVar29;
        if ((puVar27[5] == 0) || (unaff_x23 = *(puVar27[5] + 8), unaff_x23 == NULL)) {
            sym.writel_relaxed(uVar30 & 0xffffffff,puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x58);
            DataSynchronizationBarrier(3,2,0);
            if ((uVar30 >> 0x1e & 1) != 0) goto code_r0x08010b78;
code_r0x08010338:
            uVar29 = 1;
        }
        else {
            if (unaff_x23 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,unaff_x23,0x8001b70);
            }
            (*unaff_x23)(puVar27,iVar16,0x58,uVar30 & 0xffffffff);
            DataSynchronizationBarrier(3,2,0);
            if ((uVar30 >> 0x1e & 1) == 0) goto code_r0x08010338;
code_r0x08010b78:
            iVar16 = puVar27[2] + uVar29;
            if ((puVar27[5] == 0) || (pcVar31 = *(puVar27[5] + 8), pcVar31 == NULL)) {
                uVar29 = 1;
                sym.writel_relaxed(1,puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 8);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar31,0x8001b70);
                }
                uVar29 = 1;
                (*pcVar31)(puVar27,iVar16,8,1);
            }
        }
code_r0x08010bb0:
        param_2 = *puVar27;
        if ((*(param_2 + 0x200) & 7) == 0) {
            uVar23 = ktime_get_mono_fast_ns();
            *(param_2 + 0x218) = uVar23;
            __pm_runtime_idle(*puVar27,5);
        }
code_r0x08010bd4:
        iVar24 = sp_el0;
        if (*(iVar24 + 0x5e0) == iStack_68) {
            return uVar29;
        }
        __stack_chk_fail();
code_r0x08010eb4:
        if (unaff_x24 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0x9f6c1d97e51850d,unaff_x24,0x8001c30);
        }
        uVar22 = (*unaff_x24)(puVar27,unaff_x25 & 0xffffffff,0x28);
code_r0x08010764:
        _dev_err(unaff_x26,"TTBR1  = 0x%pK\n",uVar22);
code_r0x08010774:
        uVar22 = *puVar27;
        iVar28 = uVar29;
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar19 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)));
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar19 = (*pcVar31)(puVar27,iVar16,0);
        }
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar20 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 4);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar20 = (*pcVar31)(puVar27,iVar16,4);
        }
        _dev_err(uVar22,"SCTLR  = 0x%08x ACTLR  = 0x%08x\n",uVar19,uVar20);
        uVar22 = *puVar27;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar19 = sym.readl_relaxed(puVar27[1] + (1 << (*(puVar27 + 0x14) & 0x1f)) + uVar29 * 4);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar19 = (*pcVar31)(puVar27,1,uVar29 * 4);
        }
        _dev_err(uVar22,"CBAR  = 0x%08x\n",uVar19);
        uVar22 = *puVar27;
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar19 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x38);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar19 = (*pcVar31)(puVar27,iVar16,0x38);
        }
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar20 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x3c);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar20 = (*pcVar31)(puVar27,iVar16,0x3c);
        }
        _dev_err(uVar22,"MAIR0   = 0x%08x MAIR1   = 0x%08x\n",uVar19,uVar20);
        _dev_err(*puVar27,"SID = 0x%x\n",uStack_a0);
        _dev_err(*puVar27,"Client info: BID=0x%lx, PID=0x%lx, MID=0x%lx\n",uStack_9c >> 0xd & 7,uStack_9c >> 8 & 0x1f
                 ,uStack_9c & 0xff);
        pcStack_78 = NULL;
        uStack_70 = 0;
        pcStack_88 = NULL;
        pcStack_80 = NULL;
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar21 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x68);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar21 = (*pcVar31)(puVar27,iVar16,0x68);
        }
        iVar28 = puVar27[2] + iVar28;
        if ((puVar27[5] == 0) || (pcVar31 = *(puVar27[5] + 0x10), pcVar31 == NULL)) {
            iVar24 = sym.readq_relaxed(puVar27[1] + (iVar28 << (*(puVar27 + 0x14) & 0x1f)) + 0x60);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar31,0x8001c30);
            }
            iVar24 = (*pcVar31)(puVar27,iVar28,0x60);
        }
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar17 = sym.readl_relaxed(puVar27[1] + (1 << (*(puVar27 + 0x14) & 0x1f)) + (unaff_x23 & 0xffffffff));
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar17 = (*pcVar31)(puVar27,1,unaff_x23 & 0xffffffff);
        }
        uStack_70 = sym.arm_smmu_iova_to_phys(param_2,iVar24);
        _dev_err(*puVar27,"soft iova-to-phys=%pa\n",&uStack_70);
        uVar21 = uVar21 >> 4 & 7;
        unaff_x26 = uVar21;
        uStack_8c = uVar17 & 0xffff;
        iStack_98 = iVar24;
        uStack_90 = uVar21;
        unaff_x23 = sym.arm_smmu_iova_to_phys_hard(param_2,&iStack_98);
        pcStack_78 = unaff_x23;
        if (unaff_x23 == NULL) {
            uStack_90 = 2;
            unaff_x24 = sym.arm_smmu_iova_to_phys_hard(param_2,&iStack_98);
            pcStack_80 = unaff_x24;
        }
        else {
            unaff_x24 = NULL;
        }
        pcVar31 = *(*(param_2 + 8) + 0x50);
        if (pcVar31 != NULL) {
            if (1 < (pcVar31 + -0x8007fc0 >> 3 | pcVar31 << 0x3d)) {
                __cfi_slowpath_diag(0x3dfe89e98d52c464,pcVar31,0x8001d10);
            }
            (*pcVar31)(param_2);
        }
        uStack_90 = uVar21;
        unaff_x25 = sym.arm_smmu_iova_to_phys_hard(param_2,&iStack_98);
        pcStack_88 = unaff_x25;
        if ((unaff_x23 == NULL) && (unaff_x24 != NULL)) {
            _dev_err(*puVar27,"ATOS results differed across access privileges...\nBefore: %pa After: %pa\n",
                     &pcStack_78,&pcStack_80);
            unaff_x23 = pcStack_78;
        }
        if (unaff_x23 != unaff_x25) {
            _dev_err(*puVar27,"ATOS results differed across TLBIALL...\nBefore: %pa After: %pa\n",&pcStack_78,
                     &pcStack_88);
            unaff_x25 = pcStack_78;
        }
        ppcVar12 = &pcStack_88;
        if (unaff_x25 != NULL) {
            ppcVar12 = &pcStack_78;
        }
        _dev_err(*puVar27,"hard iova-to-phys (ATOS)=%pa\n",ppcVar12);
    } while ((*(param_2 - 0x28) & 1) != 0);
code_r0x08010ab8:
    //WARNING: Does not return
    pcVar31 = SoftwareBreakpoint(0x800,0x8010abc);
    (*pcVar31)();
}


// ===== sym.arm_smmu_debug_capture_bus_match.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008010 (size 8) =====

uint sym.arm_smmu_debug_capture_bus_match.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t arg1;
    code *pcVar5;
    ulong *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar7;
    ulong unaff_x30;
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
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    puVar6 = *(param_2 + 0x18);
    iVar4 = *(param_2 + 0x20);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
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
    iVar1 = sym.arm_smmu_power_on(puVar6[0x23]);
    if (iVar1 == 0) {
        iVar1 = sym.arm_smmu_power_on(*(param_2 + 0x30));
        if (iVar1 == 0) {
            iVar1 = mutex_trylock(obj.capture_reg_lock);
            if (iVar1 != 0) {
                uVar3 = sym.readq_relaxed.llvm.17919609518637048961(iVar4 + 0x130);
                sym.arm_smmu_debug_get_mask_and_match(iVar4,&uStack_60,&uStack_78);
                sym.arm_smmu_debug_get_capture_snapshot(iVar4,&uStack_b8);
                sym.writeq_relaxed.llvm.17919609518637048961(0x81,iVar4 + 0x130);
                mutex_unlock(obj.capture_reg_lock);
                sym.arm_smmu_power_off(*(param_2 + 0x18),*(param_2 + 0x30));
                sym.arm_smmu_power_off(puVar6,puVar6[0x23]);
                _dev_info(*(param_2 + 0x10),"TNX_TCR_CNTL : 0x%0llx\n",uVar3);
                uVar7 = 1;
                _dev_info(*(param_2 + 0x10),"Mask_%d : 0x%0llx\n",1,uStack_60);
                _dev_info(*(param_2 + 0x10),"Match_%d : 0x%0llx\n",1,uStack_78);
                _dev_info(*(param_2 + 0x10),"Mask_%d : 0x%0llx\n",2,uStack_58);
                _dev_info(*(param_2 + 0x10),"Match_%d : 0x%0llx\n",2,uStack_70);
                _dev_info(*(param_2 + 0x10),"Mask_%d : 0x%0llx\n",3,uStack_50);
                _dev_info(*(param_2 + 0x10),"Match_%d : 0x%0llx\n",3,uStack_68);
                _dev_info(*(param_2 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",1,1,uStack_b8);
                _dev_info(*(param_2 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",1,2,uStack_b0);
                _dev_info(*(param_2 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",2,1,uStack_a8);
                _dev_info(*(param_2 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",2,2,uStack_a0);
                _dev_info(*(param_2 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",3,1,uStack_98);
                _dev_info(*(param_2 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",3,2,uStack_90);
                _dev_info(*(param_2 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",4,1,uStack_88);
                _dev_info(*(param_2 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",4,2,uStack_80);
                goto code_r0x08014808;
            }
            iVar1 = ___ratelimit(obj.arm_smmu_debug_capture_bus_match._rs,"arm_smmu_debug_capture_bus_match");
            if (iVar1 != 0) {
                _dev_warn(*puVar6,"capture bus regs in use, not dumping it.\n");
            }
        }
        else {
            sym.arm_smmu_power_off(puVar6,puVar6[0x23]);
        }
    }
    uVar7 = 0;
code_r0x08014808:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qsmmuv500_cfg_probe;
    if ((*(iVar4 + 0x28) == NULL) || (pcVar5 = **(iVar4 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar4 + 8) + 0x10);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar4,0,0x10);
    }
    arg1 = uVar2 & 0xfbffffff;
    if ((*(iVar4 + 0x28) == 0) || (pcVar5 = *(*(iVar4 + 0x28) + 8), pcVar5 == NULL)) {
        sym.writel_relaxed_2(arg1,*(iVar4 + 8) + 0x10);
        puVar6 = *(iVar4 + 0x28);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar5,0x8001eb0);
            arg1 = uVar2 & 0xfbffffff;
        }
        (*pcVar5)(iVar4,0,0x10,arg1);
        puVar6 = *(iVar4 + 0x28);
    }
    if ((puVar6 == NULL) || (pcVar5 = *puVar6, pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar4 + 8) + 0x10);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar4,0,0x10);
    }
    if ((uVar2 >> 0x1a & 1) == 0) {
        return 0;
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8014b30);
    (*pcVar5)();
}


// ===== sym.trace_event_raw_event_smmu_init.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008018 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_smmu_init.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uchar auStack_c0 [12];
    uint uStack_b4;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar6 = *(param_1 + 0x48);
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar6 >> 6 & 1) != 0) ||
           (((uVar6 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) != 0))))
        goto code_r0x08009570;
    }
    iVar4 = trace_event_buffer_reserve(&uStack_68,param_1,0x10);
    if (iVar4 != 0) {
        *(iVar4 + 8) = param_2;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08009570:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar7 = __stack_chk_fail();
    iVar5 = auVar7._0_8_;
    *extraout_x18 = sym.perf_trace_smmu_init;
    pcStack_98 = sym.perf_trace_smmu_init;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_b0,&uStack_b4), uVar3 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_b0 + 0xe8) = &puStack_a0;
        *(iStack_b0 + 0xf8) = auStack_c0;
        *(iStack_b0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x80095a4;
        *(iStack_b0 + 0x108) = 5;
        *(iVar4 + 8) = auVar7._8_8_;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_b4,iVar5,1,iStack_b0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_a8) {
        __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_smmu_init.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008020 (size 8) =====

void sym.__bpf_trace_smmu_init.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.perf_trace_smmu_init.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008028 (size 8) =====

void sym.perf_trace_smmu_init.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_50 [12];
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    if (((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_40,&uStack_44), uVar2 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_40 + 0xf8) = auStack_50;
        *(iStack_40 + 0x100) = uVar2;
        *(iStack_40 + 0x108) = 5;
        *(iVar4 + 8) = param_2;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_44,param_1,1,iStack_40,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x80096b4;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.arm_smmu_attach_dev.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008030 (size 8) =====

int sym.arm_smmu_attach_dev.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    ulong *in_x18;
    int64_t *arg2;
    uint32_t uVar13;
    ulong *puVar14;
    ulong *puVar15;
    uint32_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_2 + 0x340);
    if (((iVar7 == 0) || (puVar14 = *(iVar7 + 0x40), puVar14 == NULL)) ||
       (*puVar14 != reloc.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt)) {
        _dev_err(param_2,"cannot attach to SMMU, is it on the same bus?\n");
        iVar4 = -6;
    }
    else {
        puVar15 = *(iVar7 + 0x50);
        if (puVar15 == NULL) {
            iVar4 = -0x13;
        }
        else {
            arg2 = *puVar15;
            iVar7 = *arg2;
            if (((*(iVar7 + 0x200) & 7) == 0) && (iVar4 = __pm_runtime_resume(iVar7,4), iVar4 < 0)) {
                puVar1 = iVar7 + 0x1f8;
                uVar12 = *puVar1;
                do {
                    uVar10 = uVar12;
                    if (uVar10 == 0) {
                        return iVar4;
                    }
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar16 = *puVar1;
                        uVar12 = uVar16;
                        if (uVar16 != uVar10) goto code_r0x0800d654;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = uVar10 - 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800d654:
                } while (uVar10 != uVar16);
            }
            else {
                iVar4 = sym.arm_smmu_init_domain_context(param_1,arg2,param_2);
                if (-1 < iVar4) {
                    if (*(param_1 + -0xb0) == arg2) {
                        iVar4 = *(param_1 + -0x68);
                        iVar7 = arg2[0xd];
                        cVar2 = *(param_1 + -0x80);
                        mutex_lock(arg2 + 0xe);
                        uVar10 = *(puVar14 + 0x14);
                        if (uVar10 != 0) {
                            uVar16 = 0;
                            do {
                                iVar6 = *(puVar15 + uVar16 * 2 + 8);
                                puVar11 = iVar7 + iVar6 * 0x18 + 0xc;
                                uVar13 = iVar4 == 3;
                                if ((*puVar11 != uVar13) || (cVar2 != *(iVar7 + iVar6 * 0x18 + 0x14))) {
                                    iVar8 = iVar7 + iVar6 * 0x18;
                                    *puVar11 = uVar13;
                                    *(iVar8 + 0x10) = 0;
                                    *(iVar8 + 0x14) = cVar2;
                                    sym.arm_smmu_write_s2cr(arg2,iVar6);
                                    uVar10 = *(puVar14 + 0x14);
                                }
                                uVar16 = uVar16 + 1;
                            } while (uVar16 < uVar10);
                        }
                        mutex_unlock(arg2 + 0xe);
                        iVar4 = 0;
                    }
                    else {
                        piVar9 = **(param_1 + -0xb0);
                        iVar7 = piVar9[0xe];
                        if (iVar7 == 0) {
                            iVar7 = *piVar9;
                        }
                        iVar6 = (*arg2)[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **arg2;
                        }
                        _dev_err(param_2,"cannot attach to SMMU %s whilst already attached to domain on SMMU %s\n",
                                 iVar7,iVar6);
                        iVar4 = -0x16;
                    }
                }
                iVar7 = *arg2;
                if ((*(iVar7 + 0x200) & 7) == 0) {
                    uVar5 = ktime_get_mono_fast_ns();
                    *(iVar7 + 0x218) = uVar5;
                    __pm_runtime_idle(*arg2,5);
                }
            }
        }
    }
    return iVar4;
}


// ===== sym.__typeid__ZTSFiP6deviceP11iommu_groupE_global_addr @ 0x08008038 (size 8) =====

ulong sym.__typeid__ZTSFiP6deviceP11iommu_groupE_global_addr(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint16_t *puVar11;
    ulong *in_x18;
    int64_t iVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x340);
    if (iVar5 != 0) {
        iVar12 = *(iVar5 + 0x40);
        piVar13 = *(iVar5 + 0x50);
        if (iVar12 != 0 && piVar13 != NULL) {
            iVar5 = *piVar13;
            pcVar3 = iommu_group_get_iommudata(param_2);
            if (pcVar3 == NULL) {
                iVar1 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar1 = 0x30;
                }
                pcVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
                if (pcVar3 == NULL) {
                    return 0xfffffff4;
                }
                iommu_group_set_iommudata(param_2,pcVar3,sym.__typeid__ZTSFvPvE_global_addr);
                uVar8 = *(iVar5 + 0x148);
            }
            else {
                uVar8 = *(iVar5 + 0x148);
            }
            if (uVar8 != 0) {
                uVar7 = *(iVar12 + 0x14);
                uVar6 = 0;
                uVar10 = uVar7;
                do {
                    if (uVar10 != 0) {
                        uVar9 = 0;
                        puVar11 = *(iVar5 + 0x140) + uVar6 * 0xc;
                        iVar2 = *(puVar11 + 4);
                        do {
                            uVar4 = *(piVar13 + uVar9 * 2 + 8) & 0xffffffff;
                            if (((*(*(iVar5 + 0x60) + uVar4 * 6) & (*puVar11 ^ 0xffff)) == 0) &&
                               (((*(*(iVar5 + 0x60) + uVar4 * 6 + 2) ^ puVar11[1]) & (*puVar11 ^ 0xffff)) == 0)) {
                                if (*pcVar3 == '\0') {
                                    *(pcVar3 + 4) = iVar2;
                                    *pcVar3 = '\x01';
                                    uVar7 = *(iVar12 + 0x14);
                                }
                                else if (*(pcVar3 + 4) != iVar2) {
                                    _dev_err(param_1,"Invalid actlr setting\n");
                                    return 0xffffffea;
                                }
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < uVar7);
                        uVar8 = *(iVar5 + 0x148);
                        uVar10 = uVar7;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar8);
            }
            return 0;
        }
    }
    return 0xffffffea;
}


// ===== sym.arm_smmu_of_xlate.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008040 (size 8) =====

ulong sym.arm_smmu_of_xlate.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(ulong param_1,ulong *param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar8;
    ulong unaff_x30;
    uint32_t uStack_30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    if (*(param_2 + 1) < 1) {
        uVar8 = 0;
code_r0x0800e9a4:
        iStack_2c = 0;
        iVar1 = of_property_read_variable_u32_array(*param_2,"stream-match-mask",&iStack_2c,1,0);
        iVar4 = iStack_2c;
        if (iVar1 < 0) goto code_r0x0800e9d0;
    }
    else {
        uVar8 = *(param_2 + 0xc);
        uStack_30 = *(param_2 + 0xc);
        iStack_2c = 0;
        if (*(param_2 + 1) == 1) goto code_r0x0800e9a4;
        iVar4 = *(param_2 + 2);
    }
    uStack_30 = uVar8 | iVar4 << 0x10;
code_r0x0800e9d0:
    uVar2 = iommu_fwspec_add_ids(param_1,&uStack_30,1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = sym.arm_smmu_def_domain_type;
        if ((((*(iVar3 + 0x340) == 0) || (piVar5 = *(*(iVar3 + 0x340) + 0x50), piVar5 == NULL)) ||
            (iVar6 = *(*piVar5 + 0x28), iVar6 == 0)) || (pcVar7 = *(iVar6 + 0x68), pcVar7 == NULL)) {
            uVar2 = 0;
        }
        else {
            if (9 < (pcVar7 + -0x80080e8 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0xa8417ba4356eb711,pcVar7,0x8001df0);
            }
            uVar2 = (*pcVar7)(iVar3);
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.__typeid__ZTSFiP24arm_smmu_power_resourcesE_global_addr @ 0x08008048 (size 8) =====

ulong sym.__typeid__ZTSFiP24arm_smmu_power_resourcesE_global_addr(int64_t *param_1)

{
    ulong uVar1;
    uint64_t arg2;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*param_1 + 0x98);
    if (*(iVar2 + 0x58) == '\0') {
        uVar1 = 0;
    }
    else {
        arg2 = 1 << (*(iVar2 + 0x38) >> 10 & 0x1f);
        uVar1 = sym.__arm_tbu_micro_idle_cfg(*(iVar2 + 0x18),arg2,arg2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFvP15arm_smmu_deviceE_global_addr @ 0x08008050 (size 8) =====

void sym.__typeid__ZTSFvP15arm_smmu_deviceE_global_addr(ulong *param_1)

{
    char *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong *puVar9;
    ulong *in_x18;
    uint32_t uVar10;
    code *pcVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_70 = 0;
    iVar2 = ___ratelimit(obj.qsmmuv500_tlb_sync_timeout._rs.41,"qsmmuv500_tlb_sync_timeout");
    if (iVar2 == 0) {
        puVar8 = param_1[5];
    }
    else {
        _dev_err(*param_1,"TLB sync timed out -- SMMU may be deadlocked\n");
        puVar8 = param_1[5];
    }
    if ((puVar8 != NULL) && (pcVar11 = *puVar8, pcVar11 != NULL)) {
        if (pcVar11 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) goto code_r0x08015dd0;
        goto code_r0x08015af8;
    }
    uVar3 = sym.readl_relaxed_2(param_1[1] + (7 << (*(param_1 + 0x14) & 0x1f)) + 0x5dc);
    pcVar11 = uVar3;
    if (uVar3 == 0) goto code_r0x08015b10;
code_r0x08015ab8:
    uVar10 = pcVar11;
    uVar3 = uVar10 & 1;
    uVar13 = uVar10 >> 1 & 0x7fff;
    uVar12 = uVar10 >> 0x10 & 1;
    uVar10 = uVar10 >> 0x11;
    do {
        iVar2 = qcom_scm_io_readl(param_1[0x24] + 0x2204,&uStack_70 + 4);
        if (iVar2 == 0) {
            iVar2 = qcom_scm_io_readl(param_1[0x24] + 0x2670,&uStack_70);
            uVar15 = uStack_70;
            if (iVar2 != 0) {
                iVar4 = ___ratelimit(obj.qsmmuv500_tlb_sync_timeout._rs.45,"qsmmuv500_tlb_sync_timeout");
                if (iVar4 != 0) {
                    uVar5 = *param_1;
                    pcVar6 = "SCM read of TBU sync/inv prog fails: %d\n";
                    goto code_r0x08015c00;
                }
                goto code_r0x08015c08;
            }
            if (uStack_70._4_4_ == 0) {
code_r0x08015b70:
                uVar3 = 0;
            }
            else if (uVar12 == 0) {
                if (uVar3 == 0) goto code_r0x08015b70;
                uVar3 = uStack_70._4_4_ & (uVar13 ^ 0xffffffff);
            }
            else {
                uVar3 = uStack_70._4_4_ & (uVar10 ^ 0xffffffff);
            }
            uVar10 = uStack_70;
            iVar2 = ___ratelimit(obj.qsmmuv500_tlb_sync_timeout._rs,"qsmmuv500_tlb_sync_timeout");
            if (iVar2 != 0) {
                uVar14 = uVar3;
                _dev_err(*param_1,"TBU ACK 0x%x TBU PWR 0x%x TCU sync_inv 0x%x\n",pcVar11,uStack_70._4_4_,
                         uStack_70 & 0xffffffff);
                pcVar6 = "completed";
                if ((uVar15 & 0x10000) != 0) {
                    pcVar6 = "pending";
                }
                pcVar1 = "completed";
                if ((uVar10 >> 0x14 & 1) != 0) {
                    pcVar1 = "pending";
                }
                _dev_err(*param_1,"TCU invalidation %s, TCU sync %s\n",pcVar6,pcVar1);
                uVar15 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = LZCOUNT((uVar15 >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10) << 0x20);
                pcVar6 = "check for TBU power status";
                pcVar11 = 0x8002a19;
                if (uVar12 != 0) {
                    pcVar6 = "check pending transactions on TBU";
                    pcVar11 = "sync";
                }
                if (uVar15 < 0x40) {
                    puVar8 = param_1 + 0x26;
                    do {
                        puVar9 = *puVar8;
                        if (puVar9 != puVar8) {
                            uVar3 = (uVar15 & 0x3f) << 10;
                            do {
                                if ((*(puVar9 + 7) <= uVar3) && (uVar3 < *(puVar9 + 0x3c) + *(puVar9 + 7))) {
                                    if (puVar9 != NULL) {
                                        iVar7 = puVar9[2][0xe];
                                        if (iVar7 == 0) {
                                            iVar7 = *puVar9[2];
                                        }
                                        _dev_err(*param_1,"TBU %s ack pending for TBU %s, %s\n",pcVar11,iVar7,pcVar6
                                                );
                                        if (uVar15 < 0x3f) goto code_r0x08015d80;
                                        goto code_r0x08015b90;
                                    }
                                    break;
                                }
                                puVar9 = *puVar9;
                            } while (puVar9 != puVar8);
                        }
                        if (0x3e < uVar15) break;
code_r0x08015d80:
                        uVar15 = -2L << (uVar15 & 0x3f) & uVar14;
                        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                        uVar15 = LZCOUNT((uVar15 >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10) << 0x20);
                    } while (uVar15 < 0x40);
                }
            }
code_r0x08015b90:
            if ((uVar10 >> 0x14 & 1) != 0) {
                queue_work_on(0x20,_strcpy,param_1 + 0x2a);
            }
        }
        else {
            iVar4 = ___ratelimit(obj.qsmmuv500_tlb_sync_timeout._rs.43,"qsmmuv500_tlb_sync_timeout");
            if (iVar4 != 0) {
                uVar5 = *param_1;
                pcVar6 = "SCM read of TBU power status fails: %d\n";
code_r0x08015c00:
                _dev_err(uVar5,pcVar6,iVar2);
            }
code_r0x08015c08:
            if (pcVar11 != 0) {
                pcVar6 = 0x8002a19;
                if (uVar12 != 0) {
                    pcVar6 = "sync";
                }
                pcVar1 = "check for TBU power status";
                if (uVar12 != 0) {
                    pcVar1 = "check pending transactions on TBU";
                    uVar13 = uVar10;
                }
                _dev_err(*param_1,"TBU %s ack pending, got ack for TBUs %d, %s\n",pcVar6,uVar13,pcVar1);
            }
            _dev_err(*param_1,"TBU SYNC_INV_ACK reg 0x%x\n",pcVar11);
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
code_r0x08015dd0:
        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar11,0x8001e90);
code_r0x08015af8:
        uVar3 = (*pcVar11)(param_1,7,0x5dc);
        pcVar11 = uVar3;
        if (uVar3 != 0) goto code_r0x08015ab8;
code_r0x08015b10:
        uVar10 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar3 = 0;
    } while( true );
}


// ===== sym.qsmmuv500_device_remove.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008058 (size 8) =====

void sym.qsmmuv500_device_remove.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cancel_work_sync(param_1 + 0x150);
    return;
}


// ===== sym.__traceiter_tlbsync_timeout.cfi_jt @ 0x08008060 (size 8) =====

ulong sym.__traceiter_tlbsync_timeout.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018a88;
    piVar1 = *0x8018a88;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.arm_smmu_set_secure_vmid.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008068 (size 8) =====

uint sym.arm_smmu_set_secure_vmid.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,uint param_2)

{
    code *pcVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + -0x60);
    if (*(param_1 + -0xb0) == 0) {
        if (*(param_1 + -0x24) != -1) {
            __warn_printk("secure vmid already set");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800d014);
            (*pcVar1)();
        }
        uVar2 = 0;
        *(param_1 + -0x24) = param_2;
    }
    else {
        uVar2 = 0xffffffff;
    }
    mutex_unlock(param_1 + -0x60);
    return uVar2;
}


// ===== sym.__bpf_trace_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008070 (size 8) =====

void sym.__bpf_trace_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.trace_event_raw_event_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008078 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08008858)
//WARNING: Removing unreachable block (ram,0x08008b44)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,uint32_t *param_3,int64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    int64_t iVar6;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    int64_t iVar19;
    char *pcVar20;
    ulong *puVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    uint32_t uVar22;
    uint64_t unaff_x22;
    int64_t *piVar23;
    int64_t unaff_x24;
    uint64_t uVar24;
    uint64_t uVar25;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    uchar auVar29 [16];
    uchar auStack_580 [12];
    uint uStack_574;
    int64_t iStack_570;
    int64_t iStack_568;
    ulong ***pppuStack_560;
    code *pcStack_558;
    int64_t *piStack_550;
    ulong uStack_548;
    uchar auStack_540 [16];
    ulong uStack_528;
    ulong uStack_520;
    ulong uStack_518;
    ulong uStack_510;
    ulong uStack_508;
    ulong uStack_500;
    int64_t iStack_4f8;
    ulong ***pppuStack_4f0;
    ulong uStack_4e8;
    int64_t *piStack_4e0;
    ulong *puStack_4d0;
    int64_t iStack_4c8;
    uchar auStack_4c0 [12];
    uint uStack_4b4;
    int64_t iStack_4b0;
    int64_t iStack_4a8;
    ulong ***pppuStack_4a0;
    code *pcStack_498;
    uint64_t uStack_490;
    uint64_t uStack_480;
    uint32_t *puStack_478;
    int64_t *piStack_470;
    uint64_t uStack_468;
    uchar auStack_460 [16];
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    int64_t iStack_418;
    ulong ***pppuStack_410;
    ulong uStack_408;
    int64_t iStack_400;
    uint64_t uStack_3f0;
    int64_t iStack_3e8;
    uchar auStack_3e0 [12];
    uint uStack_3d4;
    int64_t iStack_3d0;
    int64_t iStack_3c8;
    ulong ***pppuStack_3c0;
    code *pcStack_3b8;
    ulong uStack_3b0;
    int64_t iStack_3a8;
    code *pcStack_3a0;
    uint64_t uStack_398;
    uint64_t uStack_390;
    int64_t iStack_388;
    int64_t iStack_380;
    uint32_t *puStack_378;
    int64_t iStack_370;
    uint64_t uStack_368;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    int64_t iStack_328;
    ulong ***pppuStack_320;
    ulong uStack_318;
    int64_t *piStack_310;
    int64_t iStack_308;
    uint32_t *puStack_300;
    int64_t iStack_2f8;
    uint64_t uStack_2f0;
    int64_t iStack_2e8;
    uchar auStack_2e0 [12];
    uint32_t uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_2a8;
    code *pcStack_2a0;
    uint64_t uStack_298;
    uint64_t uStack_290;
    int64_t iStack_288;
    int64_t iStack_280;
    uint32_t *puStack_278;
    int64_t iStack_270;
    uint64_t uStack_268;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong ***pppuStack_220;
    ulong uStack_218;
    int64_t *piStack_210;
    int64_t iStack_208;
    uint32_t *puStack_200;
    int64_t iStack_1f8;
    uint64_t uStack_1f0;
    int64_t iStack_1e8;
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar ***pppuStack_1c0;
    code *pcStack_1b8;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    int64_t iStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    int64_t *piStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    int64_t iVar7;
    int64_t iVar14;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar22 = *(param_1 + 0x48);
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(param_1), (uVar4 & 1) == 0))))
        goto code_r0x080086b8;
    }
    else {
code_r0x080086b8:
        pcVar5 = (*(param_2 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar20 = **(param_2 + 8);
            pcVar5 = "(null)";
            if (pcVar20 != NULL) {
                pcVar5 = pcVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        param_3 = iVar3 + 1 + 0xc;
        iVar6 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = (iVar3 + 1) * 0x10000 | 0xc;
            pcVar5 = (*(param_2 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(param_2 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar6 + 0xc,pcVar5);
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar14 = auVar26._8_8_;
    iVar9 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_iommu_tlbi;
    pcStack_b8 = sym.perf_trace_iommu_tlbi;
    iVar6 = sp_el0;
    iStack_c8 = *(iVar6 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    pcVar5 = (*(iVar14 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar20 = **(iVar14 + 8);
        pcVar5 = "(null)";
        if (pcVar20 != NULL) {
            pcVar5 = pcVar20;
        }
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    uVar4 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar23 = iVar6 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar23 != 0)) {
        param_3 = &uStack_d4;
        unaff_x22 = (uVar4 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x22,&iStack_d0);
        uVar11 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x8008768;
            *(iStack_d0 + 0x108) = 5;
            *(iVar6 + 8) = uVar4 * 0x10000 + 0x1000c;
            pcVar5 = (*(iVar14 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar14 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar6 + 0xc,pcVar5);
            param_3 = uStack_d4;
            param_5 = 1;
            param_4 = iVar9;
            perf_trace_run_bpf_submit(iVar6,unaff_x22);
            unaff_x24 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_00 = 0x80088f8;
    uStack_118 = 0x80088f8;
    pcStack_108 = sym.perf_trace_iommu_tlbi;
    iVar6 = sp_el0;
    iStack_128 = *(iVar6 + 0x5e0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar22 = *(iVar7 + 0x48);
    iVar6 = param_4;
    uVar11 = param_5;
    ppuStack_120 = &puStack_c0;
    iStack_110 = unaff_x24;
    uStack_100 = unaff_x22;
    piStack_f8 = piVar23;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar16 = param_3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar16 = NULL;
            iVar6 = 0;
            iStack_f0 = iVar14;
            iStack_e8 = iVar9;
            event_triggers_call(iVar7,0);
            auVar26._8_8_ = iStack_f0;
            auVar26._0_8_ = iStack_e8;
        }
        iStack_f0 = auVar26._8_8_;
        iStack_e8 = auVar26._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar8 = trace_event_ignore_this_pid(iVar7);
                auVar26._8_8_ = iStack_f0;
                auVar26._0_8_ = iStack_e8;
                if ((uVar8 & 1) != 0) goto code_r0x08008a0c;
            }
            goto code_r0x08008984;
        }
    }
    else {
code_r0x08008984:
        iStack_f0 = auVar26._8_8_;
        iStack_e8 = auVar26._0_8_;
        puVar21 = *(auVar27._8_8_ + 8);
        pcVar5 = puVar21[0xe];
        if (pcVar5 == NULL) {
            pcVar20 = *puVar21;
            pcVar5 = "(null)";
            if (pcVar20 != NULL) {
                pcVar5 = pcVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        puVar16 = iVar3 + 1 + 0x28;
        iVar9 = trace_event_buffer_reserve(&uStack_158,iVar7);
        auVar26._8_8_ = iStack_f0;
        auVar26._0_8_ = iStack_e8;
        if (iVar9 != 0) {
            *(iVar9 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            puVar21 = *(auVar27._8_8_ + 8);
            pcVar5 = puVar21[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = *puVar21;
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar9 + 0x28,pcVar5);
            *(iVar9 + 0x10) = param_3;
            *(iVar9 + 0x18) = param_4;
            *(iVar9 + 0x20) = param_5;
            trace_event_buffer_commit(&uStack_158);
            auVar26._8_8_ = iStack_f0;
            auVar26._0_8_ = iStack_e8;
        }
    }
code_r0x08008a0c:
    iStack_f0 = auVar26._8_8_;
    iStack_e8 = auVar26._0_8_;
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_128) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._8_8_;
    iVar14 = auVar27._0_8_;
    *extraout_x18_01 = sym.perf_trace_iommu_pgtable;
    pcStack_1b8 = sym.perf_trace_iommu_pgtable;
    iVar9 = sp_el0;
    iStack_1c8 = *(iVar9 + 0x5e0);
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    pcVar5 = (*(iVar7 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar20 = **(iVar7 + 8);
        pcVar5 = "(null)";
        if (pcVar20 != NULL) {
            pcVar5 = pcVar20;
        }
    }
    puVar17 = puVar16;
    iVar19 = iVar6;
    uVar8 = uVar11;
    pppuStack_1c0 = &ppuStack_120;
    uVar10 = strlen(pcVar5);
    iVar9 = tpidr_el1;
    piVar23 = iVar9 + *(iVar14 + 0x78);
    if ((*(iVar14 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar17 = &uStack_1d4;
        uVar4 = (uVar10 + 0x34U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(uVar4,&iStack_1d0);
        uVar12 = _trace_event_reg;
        if (iVar9 != 0) {
            *(iStack_1d0 + 0xe8) = &pppuStack_1c0;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x8008a44;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar9 + 8) = uVar10 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar7 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar7 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar9 + 0x28,pcVar5);
            puVar17 = uStack_1d4;
            uVar8 = 1;
            *(iVar9 + 0x10) = puVar16;
            *(iVar9 + 0x18) = iVar6;
            *(iVar9 + 0x20) = uVar11;
            iVar19 = iVar14;
            perf_trace_run_bpf_submit(iVar9,uVar4);
            unaff_x27 = iVar9;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar15 = auVar26._8_8_;
    iVar13 = auVar26._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_02 = 0x8008bf0;
    uStack_218 = 0x8008bf0;
    iVar9 = sp_el0;
    iStack_228 = *(iVar9 + 0x5e0);
    uVar24 = *(iVar13 + 0x48);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar22 = uVar24;
    iVar9 = iVar19;
    uVar12 = uVar8;
    pppuStack_220 = &pppuStack_1c0;
    piStack_210 = piVar23;
    puStack_200 = puVar16;
    iStack_1f8 = iVar6;
    uStack_1f0 = uVar11;
    iStack_288 = iVar13;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar16 = puVar17;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar16 = NULL;
            iVar9 = 0;
            iStack_208 = iVar7;
            iStack_1e8 = iVar14;
            event_triggers_call(iVar13,0);
            auVar27._8_8_ = iStack_208;
            auVar27._0_8_ = iStack_1e8;
        }
        iStack_208 = auVar27._8_8_;
        iStack_1e8 = auVar27._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar11 = trace_event_ignore_this_pid(iVar13);
                auVar27._8_8_ = iStack_208;
                auVar27._0_8_ = iStack_1e8;
                if ((uVar11 & 1) != 0) goto code_r0x08008d04;
            }
            goto code_r0x08008c7c;
        }
    }
    else {
code_r0x08008c7c:
        iStack_208 = auVar27._8_8_;
        iStack_1e8 = auVar27._0_8_;
        pcVar5 = (*(iVar15 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar20 = **(iVar15 + 8);
            pcVar5 = "(null)";
            if (pcVar20 != NULL) {
                pcVar5 = pcVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar22 = iVar3 + 1;
        uVar24 = uVar22;
        puVar16 = uVar22 + 0x28;
        iVar6 = trace_event_buffer_reserve(&uStack_258,iVar13);
        auVar27._8_8_ = iStack_208;
        auVar27._0_8_ = iStack_1e8;
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar22 * 0x10000 | 0x28;
            pcVar5 = (*(iVar15 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar15 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            *(iVar6 + 0x10) = puVar17;
            *(iVar6 + 0x18) = iVar19;
            *(iVar6 + 0x20) = uVar8;
            trace_event_buffer_commit(&uStack_258);
            auVar27._8_8_ = iStack_208;
            auVar27._0_8_ = iStack_1e8;
            iStack_288 = iVar6;
        }
    }
code_r0x08008d04:
    iStack_208 = auVar27._8_8_;
    iStack_1e8 = auVar27._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_228) {
        return;
    }
    auVar28 = __stack_chk_fail();
    iVar7 = auVar28._8_8_;
    iVar14 = auVar28._0_8_;
    *extraout_x18_03 = sym.perf_trace_iommu_map_pages;
    pcStack_2b8 = sym.perf_trace_iommu_map_pages;
    pcStack_2a0 = sym.perf_trace_iommu_pgtable;
    iVar6 = sp_el0;
    iStack_2c8 = *(iVar6 + 0x5e0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    pcVar5 = (*(iVar7 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar20 = **(iVar7 + 8);
        pcVar5 = "(null)";
        if (pcVar20 != NULL) {
            pcVar5 = pcVar20;
        }
    }
    puVar18 = puVar16;
    iVar13 = iVar9;
    uVar11 = uVar12;
    pppuStack_2c0 = &pppuStack_220;
    uStack_2b0 = uVar10;
    iStack_2a8 = unaff_x27;
    uStack_298 = uVar4;
    uStack_290 = uVar24;
    iStack_280 = iVar15;
    puStack_278 = puVar17;
    iStack_270 = iVar19;
    uStack_268 = uVar8;
    uVar10 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar23 = iVar6 + *(iVar14 + 0x78);
    if ((*(iVar14 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar18 = &uStack_2d4;
        uVar4 = (uVar10 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(uVar4,&iStack_2d0);
        uVar8 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_2d0 + 0xe8) = &pppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << (uVar8 & 0x3f)) & 0x8008d3c;
            *(iStack_2d0 + 0x108) = 5;
            *(iVar6 + 8) = uVar10 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar7 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar7 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            puVar18 = uStack_2d4;
            uVar11 = 1;
            *(iVar6 + 0x10) = puVar16;
            *(iVar6 + 0x18) = iVar9;
            *(iVar6 + 0x20) = uVar12;
            iVar13 = iVar14;
            perf_trace_run_bpf_submit(iVar6,uVar4);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar15 = auVar26._8_8_;
    iVar19 = auVar26._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_04 = 0x8008ee8;
    uStack_318 = 0x8008ee8;
    iVar6 = sp_el0;
    uVar8 = uVar11 & 0xffffffff;
    iStack_328 = *(iVar6 + 0x5e0);
    uVar25 = *(iVar19 + 0x48);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uVar22 = uVar25;
    iVar6 = iVar13;
    uVar24 = uVar11;
    pppuStack_320 = &pppuStack_2c0;
    piStack_310 = piVar23;
    puStack_300 = puVar16;
    iStack_2f8 = iVar9;
    uStack_2f0 = uVar12;
    iStack_388 = iVar19;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar16 = puVar18;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar16 = NULL;
            iVar6 = 0;
            iStack_308 = iVar7;
            iStack_2e8 = iVar14;
            event_triggers_call(iVar19,0);
            auVar28._8_8_ = iStack_308;
            auVar28._0_8_ = iStack_2e8;
        }
        iStack_308 = auVar28._8_8_;
        iStack_2e8 = auVar28._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar12 = trace_event_ignore_this_pid(iVar19);
                auVar28._8_8_ = iStack_308;
                auVar28._0_8_ = iStack_2e8;
                if ((uVar12 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_308 = auVar28._8_8_;
        iStack_2e8 = auVar28._0_8_;
        pcVar5 = (*(iVar15 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar20 = **(iVar15 + 8);
            pcVar5 = "(null)";
            if (pcVar20 != NULL) {
                pcVar5 = pcVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar22 = iVar3 + 1;
        uVar25 = uVar22;
        puVar16 = uVar22 + 0x20;
        iVar9 = trace_event_buffer_reserve(&uStack_358,iVar19);
        auVar28._8_8_ = iStack_308;
        auVar28._0_8_ = iStack_2e8;
        if (iVar9 != 0) {
            *(iVar9 + 8) = uVar22 * 0x10000 | 0x20;
            pcVar5 = (*(iVar15 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar15 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar9 + 0x20,pcVar5);
            *(iVar9 + 0x10) = puVar18;
            puVar18 = NULL;
            uVar22 = uVar11;
            while (uVar22 != 0) {
                puVar18 = puVar18 + *(iVar13 + 0xc);
                iVar13 = sg_next(iVar13);
                uVar22 = uVar8 - 1;
                uVar8 = uVar22;
            }
            *(iVar9 + 0x18) = puVar18;
            trace_event_buffer_commit(&uStack_358);
            auVar28._8_8_ = iStack_308;
            auVar28._0_8_ = iStack_2e8;
            iStack_388 = iVar9;
        }
    }
code_r0x08009020:
    iStack_308 = auVar28._8_8_;
    iStack_2e8 = auVar28._0_8_;
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_328) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar14 = auVar26._0_8_;
    *extraout_x18_05 = sym.perf_trace_map_sg;
    pcStack_3b8 = sym.perf_trace_map_sg;
    pcStack_3a0 = sym.perf_trace_iommu_map_pages;
    iVar9 = sp_el0;
    iStack_3c8 = *(iVar9 + 0x5e0);
    uVar11 = uVar24 & 0xffffffff;
    puVar21 = *(auVar26._8_8_ + 8);
    iStack_3d0 = 0;
    uStack_3d4 = 0;
    pcVar5 = puVar21[0xe];
    if (pcVar5 == NULL) {
        pcVar20 = *puVar21;
        pcVar5 = "(null)";
        if (pcVar20 != NULL) {
            pcVar5 = pcVar20;
        }
    }
    pppuStack_3c0 = &pppuStack_320;
    uStack_3b0 = uVar10;
    iStack_3a8 = unaff_x27;
    uStack_398 = uVar4;
    uStack_390 = uVar25;
    iStack_380 = iVar15;
    puStack_378 = puVar18;
    iStack_370 = iVar13;
    uStack_368 = uVar8;
    iVar3 = strlen(pcVar5);
    iVar9 = tpidr_el1;
    piVar23 = iVar9 + *(iVar14 + 0x78);
    if ((*(iVar14 + 0x80) != 0) || (*piVar23 != 0)) {
        uVar25 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar12 = perf_trace_buf_alloc(uVar25,&iStack_3d0,&uStack_3d4);
        uVar8 = _trace_event_reg;
        if (uVar12 != 0) {
            *(iStack_3d0 + 0xe8) = &pppuStack_3c0;
            *(iStack_3d0 + 0xf8) = auStack_3e0;
            *(iStack_3d0 + 0x100) = ~(-1L << (uVar8 & 0x3f)) & 0x8009058;
            *(iStack_3d0 + 0x108) = 5;
            *(uVar12 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar21 = *(auVar26._8_8_ + 8);
            pcVar5 = puVar21[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = *puVar21;
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(uVar12 + 0x20,pcVar5);
            *(uVar12 + 0x10) = puVar16;
            puVar16 = NULL;
            uVar22 = uVar24;
            while (uVar22 != 0) {
                puVar16 = puVar16 + *(iVar6 + 0xc);
                iVar6 = sg_next(iVar6);
                uVar22 = uVar11 - 1;
                uVar11 = uVar22;
            }
            *(uVar12 + 0x18) = puVar16;
            perf_trace_run_bpf_submit(uVar12,uVar25,uStack_3d4,iVar14,1,iStack_3d0,piVar23,0);
            uVar4 = uVar12;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_3c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar21 = auVar26._8_8_;
    iVar7 = auVar26._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_06 = 0x8009228;
    uStack_408 = 0x8009228;
    iVar9 = sp_el0;
    iStack_418 = *(iVar9 + 0x5e0);
    uVar8 = *(iVar7 + 0x48);
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uVar22 = uVar8;
    pppuStack_410 = &pppuStack_3c0;
    iStack_400 = iVar6;
    uStack_3f0 = uVar11;
    iStack_3e8 = iVar14;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            event_triggers_call(iVar7,0,0,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar11 = trace_event_ignore_this_pid(iVar7), (uVar11 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar5 = puVar21[0xe];
        if (puVar21[0xe] == NULL) {
            pcVar5 = "(null)";
            if (*puVar21 != NULL) {
                pcVar5 = *puVar21;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar22 = iVar3 + 1;
        uVar8 = uVar22;
        iVar6 = trace_event_buffer_reserve(&uStack_448,iVar7,uVar22 + 0xc);
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar22 * 0x10000 | 0xc;
            pcVar5 = puVar21[0xe];
            if (puVar21[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar21 != NULL) {
                    pcVar5 = *puVar21;
                }
            }
            strcpy(iVar6 + 0xc,pcVar5);
            trace_event_buffer_commit(&uStack_448);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_418) {
        return;
    }
    auVar29 = __stack_chk_fail();
    puVar21 = auVar29._8_8_;
    iVar9 = auVar29._0_8_;
    *extraout_x18_07 = sym.perf_trace_tlbsync_timeout;
    pcStack_498 = sym.perf_trace_tlbsync_timeout;
    iVar6 = sp_el0;
    iStack_4a8 = *(iVar6 + 0x5e0);
    iStack_4b0 = 0;
    uStack_4b4 = 0;
    pcVar5 = puVar21[0xe];
    if (puVar21[0xe] == NULL) {
        pcVar5 = "(null)";
        if (*puVar21 != NULL) {
            pcVar5 = *puVar21;
        }
    }
    pppuStack_4a0 = &pppuStack_410;
    uStack_490 = uVar4;
    uStack_480 = uVar25;
    puStack_478 = puVar16;
    piStack_470 = piVar23;
    uStack_468 = uVar8;
    auStack_460 = auVar26;
    iVar3 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar23 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(piVar23,&iStack_4b0,&uStack_4b4);
        uVar4 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_4b0 + 0xe8) = &pppuStack_4a0;
            *(iStack_4b0 + 0xf8) = auStack_4c0;
            *(iStack_4b0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x800934c;
            *(iStack_4b0 + 0x108) = 5;
            *(iVar6 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar5 = puVar21[0xe];
            if (puVar21[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar21 != NULL) {
                    pcVar5 = *puVar21;
                }
            }
            strcpy(iVar6 + 0xc,pcVar5);
            perf_trace_run_bpf_submit(iVar6,piVar23,uStack_4b4,iVar9,1,iStack_4b0,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_4a8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar14 = auVar26._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_08 = 0x80094d4;
    uStack_4e8 = 0x80094d4;
    iVar6 = sp_el0;
    iStack_4f8 = *(iVar6 + 0x5e0);
    uVar10 = *(iVar14 + 0x48);
    uStack_508 = 0;
    uStack_500 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_528 = 0;
    uStack_520 = 0;
    uVar22 = uVar10;
    pppuStack_4f0 = &pppuStack_4a0;
    piStack_4e0 = piVar1;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            puStack_4d0 = puVar21;
            iStack_4c8 = iVar9;
            event_triggers_call(iVar14,0,0,0);
            auVar29._8_8_ = puStack_4d0;
            auVar29._0_8_ = iStack_4c8;
        }
        puStack_4d0 = auVar29._8_8_;
        iStack_4c8 = auVar29._0_8_;
        if ((uVar22 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar22 >> 9 & 1) != 0) {
            uVar4 = trace_event_ignore_this_pid(iVar14);
            auVar29._8_8_ = puStack_4d0;
            auVar29._0_8_ = iStack_4c8;
            if ((uVar4 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_4d0 = auVar29._8_8_;
    iStack_4c8 = auVar29._0_8_;
    iVar6 = trace_event_buffer_reserve(&uStack_528,iVar14,0x10);
    auVar29._8_8_ = puStack_4d0;
    auVar29._0_8_ = iStack_4c8;
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar26._8_8_;
        trace_event_buffer_commit(&uStack_528);
        auVar29._8_8_ = puStack_4d0;
        auVar29._0_8_ = iStack_4c8;
    }
code_r0x08009570:
    puStack_4d0 = auVar29._8_8_;
    iStack_4c8 = auVar29._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_4f8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar9 = auVar27._0_8_;
    *extraout_x18_09 = sym.perf_trace_smmu_init;
    pcStack_558 = sym.perf_trace_smmu_init;
    iVar6 = sp_el0;
    iStack_568 = *(iVar6 + 0x5e0);
    iStack_570 = 0;
    uStack_574 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    pppuStack_560 = &pppuStack_4f0;
    piStack_550 = piVar23;
    uStack_548 = uVar10;
    auStack_540 = auVar26;
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_570,&uStack_574);
        uVar4 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_570 + 0xe8) = &pppuStack_560;
            *(iStack_570 + 0xf8) = auStack_580;
            *(iStack_570 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x80095a4;
            *(iStack_570 + 0x108) = 5;
            *(iVar6 + 8) = auVar27._8_8_;
            perf_trace_run_bpf_submit(iVar6,0x14,uStack_574,iVar9,1,iStack_570,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_568) {
        __stack_chk_fail();
        uVar10 = tpidr_el2;
        *extraout_x18_10 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008080 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08008b44)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,uint32_t *param_3,int64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    char *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    int64_t iVar18;
    char *pcVar19;
    ulong *puVar20;
    uint64_t uVar21;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    uint32_t uVar22;
    int64_t *piVar23;
    int64_t unaff_x24;
    uint64_t uVar24;
    uint64_t uVar25;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    uchar auStack_510 [12];
    uint uStack_504;
    int64_t iStack_500;
    int64_t iStack_4f8;
    ulong ***pppuStack_4f0;
    code *pcStack_4e8;
    int64_t *piStack_4e0;
    ulong uStack_4d8;
    uchar auStack_4d0 [16];
    ulong uStack_4b8;
    ulong uStack_4b0;
    ulong uStack_4a8;
    ulong uStack_4a0;
    ulong uStack_498;
    ulong uStack_490;
    int64_t iStack_488;
    ulong ***pppuStack_480;
    ulong uStack_478;
    int64_t *piStack_470;
    ulong *puStack_460;
    int64_t iStack_458;
    uchar auStack_450 [12];
    uint uStack_444;
    int64_t iStack_440;
    int64_t iStack_438;
    ulong ***pppuStack_430;
    code *pcStack_428;
    uint64_t uStack_420;
    uint64_t uStack_410;
    uint32_t *puStack_408;
    int64_t *piStack_400;
    uint64_t uStack_3f8;
    uchar auStack_3f0 [16];
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    int64_t iStack_3a8;
    ulong ***pppuStack_3a0;
    ulong uStack_398;
    int64_t iStack_390;
    uint64_t uStack_380;
    int64_t iStack_378;
    uchar auStack_370 [12];
    uint uStack_364;
    int64_t iStack_360;
    int64_t iStack_358;
    ulong ***pppuStack_350;
    code *pcStack_348;
    ulong uStack_340;
    int64_t iStack_338;
    code *pcStack_330;
    uint64_t uStack_328;
    uint64_t uStack_320;
    int64_t iStack_318;
    int64_t iStack_310;
    uint32_t *puStack_308;
    int64_t iStack_300;
    uint64_t uStack_2f8;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    int64_t iStack_2b8;
    ulong ***pppuStack_2b0;
    ulong uStack_2a8;
    int64_t *piStack_2a0;
    int64_t iStack_298;
    uint32_t *puStack_290;
    int64_t iStack_288;
    uint64_t uStack_280;
    int64_t iStack_278;
    uchar auStack_270 [12];
    uint32_t uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    ulong ***pppuStack_250;
    code *pcStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    code *pcStack_230;
    uint64_t uStack_228;
    uint64_t uStack_220;
    int64_t iStack_218;
    int64_t iStack_210;
    uint32_t *puStack_208;
    int64_t iStack_200;
    uint64_t uStack_1f8;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    uchar ***pppuStack_1b0;
    ulong uStack_1a8;
    int64_t *piStack_1a0;
    int64_t iStack_198;
    uint32_t *puStack_190;
    int64_t iStack_188;
    uint64_t uStack_180;
    int64_t iStack_178;
    uchar auStack_170 [12];
    uint32_t uStack_164;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iVar14;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    pcVar4 = (*(param_2 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar19 = **(param_2 + 8);
        pcVar4 = "(null)";
        if (pcVar19 != NULL) {
            pcVar4 = pcVar19;
        }
    }
    uVar5 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    if ((*(param_1 + 0x80) != 0) || (*(iVar6 + *(param_1 + 0x78)) != 0)) {
        param_3 = &uStack_64;
        iVar3 = (uVar5 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_60);
        uVar10 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = auStack_70;
            uVar21 = -1L << (uVar10 & 0x3f);
            uVar10 = (~uVar21 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar10 = uVar21 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar10;
            *(iStack_60 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x1000c;
            pcVar4 = (*(param_2 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(param_2 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            param_3 = uStack_64;
            param_5 = 1;
            perf_trace_run_bpf_submit(iVar6,iVar3);
            param_4 = param_1;
            unaff_x24 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar7 = auVar26._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18 = 0x80088f8;
    uStack_a8 = 0x80088f8;
    iVar6 = sp_el0;
    iStack_b8 = *(iVar6 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar22 = *(iVar7 + 0x48);
    iVar6 = param_4;
    uVar10 = param_5;
    puStack_b0 = &stack0xffffffffffffffb0;
    iStack_a0 = unaff_x24;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar15 = param_3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar6 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar21 = trace_event_ignore_this_pid(iVar7), (uVar21 & 1) == 0))))
        goto code_r0x08008984;
    }
    else {
code_r0x08008984:
        puVar20 = *(auVar26._8_8_ + 8);
        pcVar4 = puVar20[0xe];
        if (pcVar4 == NULL) {
            pcVar19 = *puVar20;
            pcVar4 = "(null)";
            if (pcVar19 != NULL) {
                pcVar4 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar4);
        puVar15 = iVar3 + 1 + 0x28;
        iVar7 = trace_event_buffer_reserve(&uStack_e8,iVar7);
        if (iVar7 != 0) {
            *(iVar7 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            puVar20 = *(auVar26._8_8_ + 8);
            pcVar4 = puVar20[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = *puVar20;
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar7 + 0x28,pcVar4);
            *(iVar7 + 0x10) = param_3;
            *(iVar7 + 0x18) = param_4;
            *(iVar7 + 0x20) = param_5;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar13 = auVar26._8_8_;
    iVar8 = auVar26._0_8_;
    *extraout_x18_00 = sym.perf_trace_iommu_pgtable;
    pcStack_148 = sym.perf_trace_iommu_pgtable;
    iVar7 = sp_el0;
    iStack_158 = *(iVar7 + 0x5e0);
    iStack_160 = 0;
    uStack_164 = 0;
    pcVar4 = (*(iVar13 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar19 = **(iVar13 + 8);
        pcVar4 = "(null)";
        if (pcVar19 != NULL) {
            pcVar4 = pcVar19;
        }
    }
    puVar16 = puVar15;
    iVar18 = iVar6;
    uVar21 = uVar10;
    ppuStack_150 = &puStack_b0;
    uVar9 = strlen(pcVar4);
    iVar7 = tpidr_el1;
    piVar23 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar16 = &uStack_164;
        uVar5 = (uVar9 + 0x34U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(uVar5,&iStack_160);
        uVar11 = _trace_event_reg;
        if (iVar7 != 0) {
            *(iStack_160 + 0xe8) = &ppuStack_150;
            *(iStack_160 + 0xf8) = auStack_170;
            *(iStack_160 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x8008a44;
            *(iStack_160 + 0x108) = 5;
            *(iVar7 + 8) = uVar9 * 0x10000 + 0x10028;
            pcVar4 = (*(iVar13 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(iVar13 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar7 + 0x28,pcVar4);
            puVar16 = uStack_164;
            uVar21 = 1;
            *(iVar7 + 0x10) = puVar15;
            *(iVar7 + 0x18) = iVar6;
            *(iVar7 + 0x20) = uVar10;
            iVar18 = iVar8;
            perf_trace_run_bpf_submit(iVar7,uVar5);
            unaff_x27 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_158) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar14 = auVar27._8_8_;
    iVar12 = auVar27._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_01 = 0x8008bf0;
    uStack_1a8 = 0x8008bf0;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    uVar24 = *(iVar12 + 0x48);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uVar22 = uVar24;
    iVar7 = iVar18;
    uVar11 = uVar21;
    pppuStack_1b0 = &ppuStack_150;
    piStack_1a0 = piVar23;
    puStack_190 = puVar15;
    iStack_188 = iVar6;
    uStack_180 = uVar10;
    iStack_218 = iVar12;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar7 = 0;
            iStack_198 = iVar13;
            iStack_178 = iVar8;
            event_triggers_call(iVar12,0);
            auVar26._8_8_ = iStack_198;
            auVar26._0_8_ = iStack_178;
        }
        iStack_198 = auVar26._8_8_;
        iStack_178 = auVar26._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar10 = trace_event_ignore_this_pid(iVar12);
                auVar26._8_8_ = iStack_198;
                auVar26._0_8_ = iStack_178;
                if ((uVar10 & 1) != 0) goto code_r0x08008d04;
            }
            goto code_r0x08008c7c;
        }
    }
    else {
code_r0x08008c7c:
        iStack_198 = auVar26._8_8_;
        iStack_178 = auVar26._0_8_;
        pcVar4 = (*(iVar14 + 8))[0xe];
        if (pcVar4 == NULL) {
            pcVar19 = **(iVar14 + 8);
            pcVar4 = "(null)";
            if (pcVar19 != NULL) {
                pcVar4 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar22 = iVar3 + 1;
        uVar24 = uVar22;
        puVar15 = uVar22 + 0x28;
        iVar6 = trace_event_buffer_reserve(&uStack_1e8,iVar12);
        auVar26._8_8_ = iStack_198;
        auVar26._0_8_ = iStack_178;
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar22 * 0x10000 | 0x28;
            pcVar4 = (*(iVar14 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(iVar14 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x28,pcVar4);
            *(iVar6 + 0x10) = puVar16;
            *(iVar6 + 0x18) = iVar18;
            *(iVar6 + 0x20) = uVar21;
            trace_event_buffer_commit(&uStack_1e8);
            auVar26._8_8_ = iStack_198;
            auVar26._0_8_ = iStack_178;
            iStack_218 = iVar6;
        }
    }
code_r0x08008d04:
    iStack_198 = auVar26._8_8_;
    iStack_178 = auVar26._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar13 = auVar27._8_8_;
    iVar8 = auVar27._0_8_;
    *extraout_x18_02 = sym.perf_trace_iommu_map_pages;
    pcStack_248 = sym.perf_trace_iommu_map_pages;
    pcStack_230 = sym.perf_trace_iommu_pgtable;
    iVar6 = sp_el0;
    iStack_258 = *(iVar6 + 0x5e0);
    iStack_260 = 0;
    uStack_264 = 0;
    pcVar4 = (*(iVar13 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar19 = **(iVar13 + 8);
        pcVar4 = "(null)";
        if (pcVar19 != NULL) {
            pcVar4 = pcVar19;
        }
    }
    puVar17 = puVar15;
    iVar12 = iVar7;
    uVar10 = uVar11;
    pppuStack_250 = &pppuStack_1b0;
    uStack_240 = uVar9;
    iStack_238 = unaff_x27;
    uStack_228 = uVar5;
    uStack_220 = uVar24;
    iStack_210 = iVar14;
    puStack_208 = puVar16;
    iStack_200 = iVar18;
    uStack_1f8 = uVar21;
    uVar9 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar23 = iVar6 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar17 = &uStack_264;
        uVar5 = (uVar9 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(uVar5,&iStack_260);
        uVar21 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_260 + 0xe8) = &pppuStack_250;
            *(iStack_260 + 0xf8) = auStack_270;
            *(iStack_260 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8008d3c;
            *(iStack_260 + 0x108) = 5;
            *(iVar6 + 8) = uVar9 * 0x10000 + 0x10028;
            pcVar4 = (*(iVar13 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(iVar13 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x28,pcVar4);
            puVar17 = uStack_264;
            uVar10 = 1;
            *(iVar6 + 0x10) = puVar15;
            *(iVar6 + 0x18) = iVar7;
            *(iVar6 + 0x20) = uVar11;
            iVar12 = iVar8;
            perf_trace_run_bpf_submit(iVar6,uVar5);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_258) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar14 = auVar26._8_8_;
    iVar18 = auVar26._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_03 = 0x8008ee8;
    uStack_2a8 = 0x8008ee8;
    iVar6 = sp_el0;
    uVar21 = uVar10 & 0xffffffff;
    iStack_2b8 = *(iVar6 + 0x5e0);
    uVar25 = *(iVar18 + 0x48);
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uVar22 = uVar25;
    iVar6 = iVar12;
    uVar24 = uVar10;
    pppuStack_2b0 = &pppuStack_250;
    piStack_2a0 = piVar23;
    puStack_290 = puVar15;
    iStack_288 = iVar7;
    uStack_280 = uVar11;
    iStack_318 = iVar18;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar6 = 0;
            iStack_298 = iVar13;
            iStack_278 = iVar8;
            event_triggers_call(iVar18,0);
            auVar27._8_8_ = iStack_298;
            auVar27._0_8_ = iStack_278;
        }
        iStack_298 = auVar27._8_8_;
        iStack_278 = auVar27._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar11 = trace_event_ignore_this_pid(iVar18);
                auVar27._8_8_ = iStack_298;
                auVar27._0_8_ = iStack_278;
                if ((uVar11 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_298 = auVar27._8_8_;
        iStack_278 = auVar27._0_8_;
        pcVar4 = (*(iVar14 + 8))[0xe];
        if (pcVar4 == NULL) {
            pcVar19 = **(iVar14 + 8);
            pcVar4 = "(null)";
            if (pcVar19 != NULL) {
                pcVar4 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar22 = iVar3 + 1;
        uVar25 = uVar22;
        puVar15 = uVar22 + 0x20;
        iVar7 = trace_event_buffer_reserve(&uStack_2e8,iVar18);
        auVar27._8_8_ = iStack_298;
        auVar27._0_8_ = iStack_278;
        if (iVar7 != 0) {
            *(iVar7 + 8) = uVar22 * 0x10000 | 0x20;
            pcVar4 = (*(iVar14 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(iVar14 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar7 + 0x20,pcVar4);
            *(iVar7 + 0x10) = puVar17;
            puVar17 = NULL;
            uVar22 = uVar10;
            while (uVar22 != 0) {
                puVar17 = puVar17 + *(iVar12 + 0xc);
                iVar12 = sg_next(iVar12);
                uVar22 = uVar21 - 1;
                uVar21 = uVar22;
            }
            *(iVar7 + 0x18) = puVar17;
            trace_event_buffer_commit(&uStack_2e8);
            auVar27._8_8_ = iStack_298;
            auVar27._0_8_ = iStack_278;
            iStack_318 = iVar7;
        }
    }
code_r0x08009020:
    iStack_298 = auVar27._8_8_;
    iStack_278 = auVar27._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    *extraout_x18_04 = sym.perf_trace_map_sg;
    pcStack_348 = sym.perf_trace_map_sg;
    pcStack_330 = sym.perf_trace_iommu_map_pages;
    iVar7 = sp_el0;
    iStack_358 = *(iVar7 + 0x5e0);
    uVar10 = uVar24 & 0xffffffff;
    puVar20 = *(auVar26._8_8_ + 8);
    iStack_360 = 0;
    uStack_364 = 0;
    pcVar4 = puVar20[0xe];
    if (pcVar4 == NULL) {
        pcVar19 = *puVar20;
        pcVar4 = "(null)";
        if (pcVar19 != NULL) {
            pcVar4 = pcVar19;
        }
    }
    pppuStack_350 = &pppuStack_2b0;
    uStack_340 = uVar9;
    iStack_338 = unaff_x27;
    uStack_328 = uVar5;
    uStack_320 = uVar25;
    iStack_310 = iVar14;
    puStack_308 = puVar17;
    iStack_300 = iVar12;
    uStack_2f8 = uVar21;
    iVar3 = strlen(pcVar4);
    iVar7 = tpidr_el1;
    piVar23 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar23 != 0)) {
        uVar25 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(uVar25,&iStack_360,&uStack_364);
        uVar21 = _trace_event_reg;
        if (uVar11 != 0) {
            *(iStack_360 + 0xe8) = &pppuStack_350;
            *(iStack_360 + 0xf8) = auStack_370;
            *(iStack_360 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8009058;
            *(iStack_360 + 0x108) = 5;
            *(uVar11 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar20 = *(auVar26._8_8_ + 8);
            pcVar4 = puVar20[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = *puVar20;
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(uVar11 + 0x20,pcVar4);
            *(uVar11 + 0x10) = puVar15;
            puVar15 = NULL;
            uVar22 = uVar24;
            while (uVar22 != 0) {
                puVar15 = puVar15 + *(iVar6 + 0xc);
                iVar6 = sg_next(iVar6);
                uVar22 = uVar10 - 1;
                uVar10 = uVar22;
            }
            *(uVar11 + 0x18) = puVar15;
            perf_trace_run_bpf_submit(uVar11,uVar25,uStack_364,iVar8,1,iStack_360,piVar23,0);
            uVar5 = uVar11;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_358) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar20 = auVar26._8_8_;
    iVar13 = auVar26._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18_05 = 0x8009228;
    uStack_398 = 0x8009228;
    iVar7 = sp_el0;
    iStack_3a8 = *(iVar7 + 0x5e0);
    uVar21 = *(iVar13 + 0x48);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uVar22 = uVar21;
    pppuStack_3a0 = &pppuStack_350;
    iStack_390 = iVar6;
    uStack_380 = uVar10;
    iStack_378 = iVar8;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            event_triggers_call(iVar13,0,0,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar13), (uVar10 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar4 = puVar20[0xe];
        if (puVar20[0xe] == NULL) {
            pcVar4 = "(null)";
            if (*puVar20 != NULL) {
                pcVar4 = *puVar20;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar22 = iVar3 + 1;
        uVar21 = uVar22;
        iVar6 = trace_event_buffer_reserve(&uStack_3d8,iVar13,uVar22 + 0xc);
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar22 * 0x10000 | 0xc;
            pcVar4 = puVar20[0xe];
            if (puVar20[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar20 != NULL) {
                    pcVar4 = *puVar20;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            trace_event_buffer_commit(&uStack_3d8);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar28 = __stack_chk_fail();
    puVar20 = auVar28._8_8_;
    iVar7 = auVar28._0_8_;
    *extraout_x18_06 = sym.perf_trace_tlbsync_timeout;
    pcStack_428 = sym.perf_trace_tlbsync_timeout;
    iVar6 = sp_el0;
    iStack_438 = *(iVar6 + 0x5e0);
    iStack_440 = 0;
    uStack_444 = 0;
    pcVar4 = puVar20[0xe];
    if (puVar20[0xe] == NULL) {
        pcVar4 = "(null)";
        if (*puVar20 != NULL) {
            pcVar4 = *puVar20;
        }
    }
    pppuStack_430 = &pppuStack_3a0;
    uStack_420 = uVar5;
    uStack_410 = uVar25;
    puStack_408 = puVar15;
    piStack_400 = piVar23;
    uStack_3f8 = uVar21;
    auStack_3f0 = auVar26;
    iVar3 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar23 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(piVar23,&iStack_440,&uStack_444);
        uVar5 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_440 + 0xe8) = &pppuStack_430;
            *(iStack_440 + 0xf8) = auStack_450;
            *(iStack_440 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x800934c;
            *(iStack_440 + 0x108) = 5;
            *(iVar6 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar4 = puVar20[0xe];
            if (puVar20[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar20 != NULL) {
                    pcVar4 = *puVar20;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            perf_trace_run_bpf_submit(iVar6,piVar23,uStack_444,iVar7,1,iStack_440,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_438) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18_07 = 0x80094d4;
    uStack_478 = 0x80094d4;
    iVar6 = sp_el0;
    iStack_488 = *(iVar6 + 0x5e0);
    uVar9 = *(iVar8 + 0x48);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uVar22 = uVar9;
    pppuStack_480 = &pppuStack_430;
    piStack_470 = piVar1;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            puStack_460 = puVar20;
            iStack_458 = iVar7;
            event_triggers_call(iVar8,0,0,0);
            auVar28._8_8_ = puStack_460;
            auVar28._0_8_ = iStack_458;
        }
        puStack_460 = auVar28._8_8_;
        iStack_458 = auVar28._0_8_;
        if ((uVar22 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar22 >> 9 & 1) != 0) {
            uVar5 = trace_event_ignore_this_pid(iVar8);
            auVar28._8_8_ = puStack_460;
            auVar28._0_8_ = iStack_458;
            if ((uVar5 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_460 = auVar28._8_8_;
    iStack_458 = auVar28._0_8_;
    iVar6 = trace_event_buffer_reserve(&uStack_4b8,iVar8,0x10);
    auVar28._8_8_ = puStack_460;
    auVar28._0_8_ = iStack_458;
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar26._8_8_;
        trace_event_buffer_commit(&uStack_4b8);
        auVar28._8_8_ = puStack_460;
        auVar28._0_8_ = iStack_458;
    }
code_r0x08009570:
    puStack_460 = auVar28._8_8_;
    iStack_458 = auVar28._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_488) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._0_8_;
    *extraout_x18_08 = sym.perf_trace_smmu_init;
    pcStack_4e8 = sym.perf_trace_smmu_init;
    iVar6 = sp_el0;
    iStack_4f8 = *(iVar6 + 0x5e0);
    iStack_500 = 0;
    uStack_504 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar7 + 0x78);
    pppuStack_4f0 = &pppuStack_480;
    piStack_4e0 = piVar23;
    uStack_4d8 = uVar9;
    auStack_4d0 = auVar26;
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_500,&uStack_504);
        uVar5 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_500 + 0xe8) = &pppuStack_4f0;
            *(iStack_500 + 0xf8) = auStack_510;
            *(iStack_500 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x80095a4;
            *(iStack_500 + 0x108) = 5;
            *(iVar6 + 8) = auVar27._8_8_;
            perf_trace_run_bpf_submit(iVar6,0x14,uStack_504,iVar7,1,iStack_500,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_4f8) {
        __stack_chk_fail();
        uVar9 = tpidr_el2;
        *extraout_x18_09 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__typeid__ZTSFiP15arm_smmu_deviceE_global_addr @ 0x08008088 (size 8) =====

ulong sym.__typeid__ZTSFiP15arm_smmu_deviceE_global_addr(int64_t param_1)

{
    *(param_1 + 0x18) = *(param_1 + 0x18) & 0xfffffc7f;
    return 0;
}


// ===== sym.qsmmuv500_cfg_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008090 (size 8) =====

ulong sym.qsmmuv500_cfg_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t arg1;
    code *pcVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x28) == NULL) || (pcVar2 = **(param_1 + 0x28), pcVar2 == NULL)) {
        uVar1 = sym.readl_relaxed_2(*(param_1 + 8) + 0x10);
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar2,0x8001e90);
        }
        uVar1 = (*pcVar2)(param_1,0,0x10);
    }
    arg1 = uVar1 & 0xfbffffff;
    if ((*(param_1 + 0x28) == 0) || (pcVar2 = *(*(param_1 + 0x28) + 8), pcVar2 == NULL)) {
        sym.writel_relaxed_2(arg1,*(param_1 + 8) + 0x10);
        puVar3 = *(param_1 + 0x28);
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar2,0x8001eb0);
            arg1 = uVar1 & 0xfbffffff;
        }
        (*pcVar2)(param_1,0,0x10,arg1);
        puVar3 = *(param_1 + 0x28);
    }
    if ((puVar3 == NULL) || (pcVar2 = *puVar3, pcVar2 == NULL)) {
        uVar1 = sym.readl_relaxed_2(*(param_1 + 8) + 0x10);
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar2,0x8001e90);
        }
        uVar1 = (*pcVar2)(param_1,0,0x10);
    }
    if ((uVar1 >> 0x1a & 1) == 0) {
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8014b30);
    (*pcVar2)();
}


// ===== sym.arm_mmu500_reset.cfi_jt @ 0x08008098 (size 8) =====

ulong sym.arm_mmu500_reset.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x28) == NULL) || (pcVar5 = **(param_1 + 0x28), pcVar5 == NULL)) {
        uVar4 = sym.readl_relaxed_1(*(param_1 + 8) + 0x3c);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e50);
        }
        uVar4 = (*pcVar5)(param_1,0,0x3c);
    }
    if ((*(param_1 + 0x28) == NULL) || (pcVar5 = **(param_1 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_1(*(param_1 + 8) + 0x10);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e50);
        }
        uVar2 = (*pcVar5)(param_1,0,0x10);
    }
    if ((uVar4 & 0xe0) != 0) {
        uVar2 = uVar2 & 0xfbfffaff;
    }
    if ((*(param_1 + 0x28) == 0) || (pcVar5 = *(*(param_1 + 0x28) + 8), pcVar5 == NULL)) {
        sym.writel_relaxed_1(uVar2 | 0x500,*(param_1 + 8) + 0x10);
        iVar1 = *(param_1 + 0x30);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar5,0x8001e70);
        }
        (*pcVar5)(param_1,0,0x10,uVar2 | 0x500);
        iVar1 = *(param_1 + 0x30);
    }
    if (iVar1 != 0) {
        uVar2 = 0;
        do {
            iVar1 = uVar2 + *(param_1 + 0x10);
            if ((*(param_1 + 0x28) == NULL) || (pcVar5 = **(param_1 + 0x28), pcVar5 == NULL)) {
                uVar3 = sym.readl_relaxed_1(*(param_1 + 8) + (iVar1 << (*(param_1 + 0x14) & 0x1f)) + 4);
            }
            else {
                if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e50);
                }
                uVar3 = (*pcVar5)(param_1,iVar1,4);
            }
            uVar4 = uVar3 & 0xfffffffd;
            iVar1 = uVar2 + *(param_1 + 0x10);
            if ((*(param_1 + 0x28) == 0) || (pcVar5 = *(*(param_1 + 0x28) + 8), pcVar5 == NULL)) {
                sym.writel_relaxed_1(uVar4,*(param_1 + 8) + (iVar1 << (*(param_1 + 0x14) & 0x1f)) + 4);
            }
            else {
                if (pcVar5 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar5,0x8001e70);
                    uVar4 = uVar3 & 0xfffffffd;
                }
                (*pcVar5)(param_1,iVar1,4,uVar4);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(param_1 + 0x30));
    }
    return 0;
}


// ===== sym.qcom_smmu_cfg_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x080080a0 (size 8) =====

ulong sym.qcom_smmu_cfg_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *puVar6;
    int64_t iVar7;
    ulong *in_x18;
    int iVar8;
    int64_t iVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x54) * 4 + 0xbfc;
    if ((*(param_1 + 0x28) == 0) || (pcVar10 = *(*(param_1 + 0x28) + 8), pcVar10 == NULL)) {
        sym.writel_relaxed_2(0x100ff,*(param_1 + 8) + iVar8);
        puVar6 = *(param_1 + 0x28);
        if (puVar6 != NULL) goto code_r0x08016a60;
code_r0x08016a68:
        uVar4 = sym.readl_relaxed_2(*(param_1 + 8) + iVar8);
    }
    else {
        if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
        }
        (*pcVar10)(param_1,0,iVar8,0x100ff);
        puVar6 = *(param_1 + 0x28);
        if (puVar6 == NULL) goto code_r0x08016a68;
code_r0x08016a60:
        pcVar10 = *puVar6;
        if (pcVar10 == NULL) goto code_r0x08016a68;
        if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
        }
        uVar4 = (*pcVar10)(param_1,0,iVar8);
    }
    if ((uVar4 & 0x30000) != 0x10000) {
        uVar4 = *(param_1 + 0x30) - 1;
        *(param_1 + 0x130) = 1;
        puVar1 = param_1 + (uVar4 >> 3 & 0x18) + 0x38;
        *(param_1 + 0x131) = uVar4;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1L << (uVar4 & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar8 = *(param_1 + 0x10) + *(param_1 + 0x131);
        if ((*(param_1 + 0x28) == 0) || (pcVar10 = *(*(param_1 + 0x28) + 8), pcVar10 == NULL)) {
            sym.writel_relaxed_2(0,*(param_1 + 8) + (iVar8 << (*(param_1 + 0x14) & 0x1f)));
        }
        else {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
            }
            (*pcVar10)(param_1,iVar8,0,0);
        }
        iVar9 = *(param_1 + 0x131) * 4;
        if ((*(param_1 + 0x28) != 0) && (pcVar10 = *(*(param_1 + 0x28) + 8), pcVar10 != NULL)) {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
            }
            (*pcVar10)(param_1,1,iVar9,0x10000);
            iVar8 = *(param_1 + 0x54);
            goto joined_r0x08016ccc;
        }
        sym.writel_relaxed_2(0x10000,*(param_1 + 8) + (1 << (*(param_1 + 0x14) & 0x1f)) + iVar9);
    }
    iVar8 = *(param_1 + 0x54);
joined_r0x08016ccc:
    if (iVar8 != 0) {
        uVar4 = 0;
        iVar8 = 0x800;
        do {
            if ((*(param_1 + 0x28) == NULL) || (pcVar10 = **(param_1 + 0x28), pcVar10 == NULL)) {
                iVar5 = sym.readl_relaxed_2(*(param_1 + 8) + iVar8);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                }
                iVar5 = (*pcVar10)(param_1,0,iVar8);
            }
            if (iVar5 < 0) {
                iVar9 = uVar4 + uVar4 * 2;
                iVar7 = iVar9 * 2;
                iVar9 = iVar9 * 8;
                *(*(param_1 + 0x60) + iVar7 + 2) = iVar5;
                *(*(param_1 + 0x60) + iVar7) = iVar5 >> 0x10 & 0x7fff;
                *(*(param_1 + 0x60) + iVar7 + 4) = 1;
                *(*(param_1 + 0x68) + iVar9 + 0xc) = 1;
                *(*(param_1 + 0x68) + iVar9 + 0x10) = 0;
                *(*(param_1 + 0x68) + iVar9 + 0x14) = 0xff;
            }
            uVar4 = uVar4 + 1;
            iVar8 = iVar8 + 4;
        } while (uVar4 < *(param_1 + 0x54));
    }
    return 0;
}


// ===== sym.qcom_smmu500_reset.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x080080a8 (size 8) =====

uint64_t sym.qcom_smmu500_reset.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t *param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(*param_1 + 0x2f0);
    sym.arm_mmu500_reset(param_1);
    uVar2 = of_device_is_compatible(uVar3,0x8002feb);
    if (uVar2 != 0) {
        uVar1 = qcom_scm_qsmmu500_wait_safe_toggle(0);
        uVar2 = 0;
        if (uVar1 != 0) {
            _dev_warn(*param_1,"Failed to turn off SAFE logic\n");
            uVar2 = uVar1;
        }
    }
    return uVar2;
}


// ===== sym.cavium_cfg_probe.c00fd10d52de7a5ff5332dfa3e30eece.cfi_jt @ 0x080080b0 (size 8) =====

ulong sym.cavium_cfg_probe.c00fd10d52de7a5ff5332dfa3e30eece.cfi_jt(ulong *param_1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    Hint_Prefetch(0x80009e8,2,0,1);
    do {
        iVar3 = _reloc.__traceiter_tlbi_end.cfi_jt;
        cVar1 = '\x01';
        bVar2 = ExclusiveMonitorPass(0x80009e8,0x10);
        if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            _reloc.__traceiter_tlbi_end.cfi_jt = _reloc.__traceiter_tlbi_end.cfi_jt + *(param_1 + 6);
        }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    *(param_1 + 0x26) = iVar3;
    _dev_notice(*param_1,"\tenabling workaround for Cavium erratum 27704\n");
    return 0;
}


// ===== sym.__traceiter_map_sg.cfi_jt @ 0x080080b8 (size 8) =====

ulong sym.__traceiter_map_sg.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018a40;
    piVar1 = *0x8018a40;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.generic_iommu_put_resv_regions.cfi_jt @ 0x080080c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.generic_iommu_put_resv_regions.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.arm_smmu_get_resv_regions.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080080c8 (size 8) =====

void sym.arm_smmu_get_resv_regions.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = iommu_alloc_resv_region(0x8000000,0x100000,0x1a,4);
    if (piVar1 != NULL) {
        piVar3 = *(param_2 + 8);
        uVar2 = __list_add_valid(piVar1,piVar3,param_2);
        if ((uVar2 & 1) != 0) {
            *(param_2 + 8) = piVar1;
            *piVar1 = param_2;
            piVar1[1] = piVar3;
            *piVar3 = piVar1;
        }
        iommu_dma_get_resv_regions(param_1,param_2);
        qcom_iommu_generate_resv_regions(param_1,param_2);
    }
    return;
}


// ===== sym.arm_smmu_tlb_inv_walk_s2.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080080d0 (size 8) =====

void sym.arm_smmu_tlb_inv_walk_s2.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_tlb_inv_range_s2(param_1,param_2,param_3,param_4);
    sym.arm_smmu_tlb_sync_context(param_4);
    return;
}


// ===== sym.arm_smmu_tlb_inv_walk_s2_v1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080080d8 (size 8) =====

void sym.arm_smmu_tlb_inv_walk_s2_v1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_tlb_inv_context_s2(in_x3);
    return;
}


// ===== sym.arm_smmu_tlb_inv_walk_s1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080080e0 (size 8) =====

void sym.arm_smmu_tlb_inv_walk_s1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_4 + 0x44) == '\0') {
        sym.arm_smmu_tlb_inv_range_s1(param_1,param_2,param_3,param_4);
        sym.arm_smmu_tlb_sync_context(param_4);
    }
    else {
        sym.arm_smmu_tlb_inv_context_s1(param_4);
    }
    return;
}


// ===== sym.__typeid__ZTSFiP6deviceE_global_addr @ 0x080080e8 (size 8) =====

ulong sym.__typeid__ZTSFiP6deviceE_global_addr(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    if (((pm_suspend_global_flags & 1) != 0) && (uVar1 = *(iVar4 + 0x30), uVar1 != 0)) {
        uVar2 = 0;
        do {
            if ((((*(iVar4 + 0x48) + uVar2 * 0x30 != 0) &&
                 (iVar3 = *(*(iVar4 + 0x48) + uVar2 * 0x30 + 0x28), iVar3 != 0)) && (iVar3 != 0x30)) &&
               (*(iVar3 + 0x5c) != -1)) {
                qcom_free_io_pgtable_ops(*(iVar3 + -0x20));
                uVar1 = *(iVar4 + 0x30);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
    }
    if ((*(param_1 + 0x20c) != 2) || ((*(param_1 + 0x200) & 7) != 0)) {
        sym.arm_smmu_power_off(*(param_1 + 0x98),*(*(param_1 + 0x98) + 0x118));
    }
    clk_bulk_unprepare(*(iVar4 + 0xd8),*(iVar4 + 0xd0));
    return 0;
}


// ===== sym.arm_smmu_pm_prepare.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080080f0 (size 8) =====

uint64_t sym.arm_smmu_pm_prepare.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = of_device_is_compatible(*(param_1 + 0x2f0),"qcom,adreno-smmu");
    if (uVar1 != 0) {
        if ((*(param_1 + 0x20c) == 2) && ((*(param_1 + 0x200) & 7) == 0)) {
            uVar1 = 0;
        }
        else {
            uVar2 = 0xffffff8d;
            if (*(param_1 + 0x1f8) != 1) {
                uVar2 = 0;
            }
            uVar1 = uVar2;
        }
    }
    return uVar1;
}


// ===== sym.qcom_smmu_def_domain_type.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x080080f8 (size 8) =====

int64_t sym.qcom_smmu_def_domain_type.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_match_device(obj.qcom_smmu_client_of_match,param_1);
    return (iVar1 != 0) << 2;
}


// ===== sym.arm_smmu_runtime_resume.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008100 (size 8) =====

void sym.arm_smmu_runtime_resume.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_power_on(*(*(param_1 + 0x98) + 0x118));
    return;
}


// ===== sym.arm_smmu_pm_resume.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008108 (size 8) =====

int sym.arm_smmu_pm_resume.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((pm_suspend_global_flags & 1) == 0) {
        arg1 = *(param_1 + 0x98);
        iVar1 = clk_bulk_prepare(*(arg1 + 0xd8),*(arg1 + 0xd0));
        if (iVar1 == 0) {
            if ((*(param_1 + 0x20c) == 2) && ((*(param_1 + 0x200) & 7) == 0)) {
                iVar1 = 0;
            }
            else {
                iVar1 = sym.arm_smmu_power_on(*(*(param_1 + 0x98) + 0x118));
                if (iVar1 == 0) {
                    sym.arm_smmu_device_reset(arg1);
                }
                else {
                    clk_bulk_unprepare(*(arg1 + 0xd8),*(arg1 + 0xd0));
                }
            }
        }
    }
    else {
        iVar1 = sym.arm_smmu_pm_restore_early(param_1);
    }
    return iVar1;
}


// ===== sym.arm_smmu_def_domain_type.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008110 (size 8) =====

ulong sym.arm_smmu_def_domain_type.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((*(param_1 + 0x340) == 0) || (piVar2 = *(*(param_1 + 0x340) + 0x50), piVar2 == NULL)) ||
        (iVar3 = *(*piVar2 + 0x28), iVar3 == 0)) || (pcVar4 = *(iVar3 + 0x68), pcVar4 == NULL)) {
        uVar1 = 0;
    }
    else {
        if (9 < (pcVar4 + -0x80080e8 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xa8417ba4356eb711,pcVar4,0x8001df0);
        }
        uVar1 = (*pcVar4)(param_1);
    }
    return uVar1;
}


// ===== sym.arm_smmu_pm_restore_early.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008118 (size 8) =====

ulong sym.arm_smmu_pm_restore_early.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t *param_1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *arg1;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1[0x13];
    uVar3 = *(arg1 + 6);
    if (uVar3 != 0) {
        uVar5 = 0;
        do {
            iVar4 = *(arg1[9] + uVar5 * 0x30 + 0x28);
            if ((iVar4 != 0) && (*(iVar4 + 0x5c) != -1)) {
                iVar2 = qcom_alloc_io_pgtable_ops(*(iVar4 + 0x148),iVar4 + 200,iVar4 + -0x30);
                if (iVar2 == 0) {
                    iVar4 = param_1[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *param_1;
                    }
                    _dev_err(*arg1,"failed to allocate page tables\tduring pm restore for cxt %d %s\n",uVar5,iVar4);
                    return 0xfffffff4;
                }
                *(iVar4 + -0x20) = iVar2;
                sym.arm_smmu_init_context_bank(iVar4 + -0x30,iVar4 + 200);
                uVar3 = *(arg1 + 6);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
        arg1 = param_1[0x13];
    }
    iVar1 = clk_bulk_prepare(*(arg1 + 0x1b),arg1[0x1a]);
    if ((iVar1 == 0) && ((*(param_1 + 0x20c) != 2 || ((*(param_1 + 0x40) & 7) != 0)))) {
        iVar1 = sym.arm_smmu_power_on(*(param_1[0x13] + 0x118));
        if (iVar1 == 0) {
            sym.arm_smmu_device_reset(arg1);
        }
        else {
            clk_bulk_unprepare(*(arg1 + 0x1b),arg1[0x1a]);
        }
    }
    sym.arm_smmu_power_off(param_1[0x13],*(param_1[0x13] + 0x118));
    return 0;
}


// ===== sym.arm_smmu_runtime_suspend.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008120 (size 8) =====

ulong sym.arm_smmu_runtime_suspend.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_power_off(*(param_1 + 0x98),*(*(param_1 + 0x98) + 0x118));
    return 0;
}


// ===== sym.qsmmuv500_def_domain_type.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008128 (size 8) =====

uint64_t sym.qsmmuv500_def_domain_type.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    char *pcVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    int64_t extraout_x1;
    char **ppcVar8;
    ulong in_x6;
    ulong in_x7;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong uVar14;
    ulong unaff_x30;
    uchar *puVar15;
    code *pcVar16;
    char *pcStack_30;
    int64_t iStack_28;
    
    ppcVar8 = &pcStack_30;
    *in_x18 = unaff_x30;
    puVar15 = &stack0xffffffffffffffe0;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    pcStack_30 = NULL;
    iVar7 = of_parse_phandle(*(param_1 + 0x2f0),"qcom,iommu-group",0);
    if (iVar7 == 0) {
        iVar7 = *(param_1 + 0x2f0);
    }
    iVar6 = of_property_read_string(iVar7,"qcom,iommu-dma");
    if (iVar6 != 0) {
        pcStack_30 = "default";
    }
    pcVar4 = pcStack_30;
    iVar6 = strcmp(pcStack_30,"fastmap");
    if ((iVar6 == 0) || (iVar6 = strcmp(pcVar4,"bypass"), iVar6 == 0)) {
        uVar13 = 1;
    }
    else {
        iVar6 = strcmp(pcVar4,"atomic");
        uVar13 = 3;
        if (iVar6 != 0) {
            iVar6 = strcmp(pcVar4,"disabled");
            uVar12 = 3;
            if (iVar6 == 0) {
                uVar12 = 4;
            }
            uVar13 = uVar12;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar13;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_adreno_smmu_alloc_context_bank;
    pcVar16 = sym.qcom_adreno_smmu_alloc_context_bank;
    iVar7 = 0;
    if (*(ppcVar8 + 0x340) != 0) {
        iVar7 = *(*(ppcVar8 + 0x340) + 0x40);
    }
    uVar12 = *(iVar7 + 0x14);
    if (uVar12 == 0) {
code_r0x08016144:
        iVar6 = *(extraout_x1 + 0x30);
        uVar14 = 2;
    }
    else {
        if ((*(iVar7 + 0x18) & 0xfffe) != 0) {
            uVar5 = 1;
            do {
                uVar10 = uVar5;
                if (uVar12 == uVar10) goto code_r0x08016144;
                uVar5 = uVar10 + 1;
            } while ((*(iVar7 + uVar10 * 4 + 0x18) & 0xfffe) != 0);
            if (uVar12 <= uVar10) goto code_r0x08016144;
        }
        uVar14 = 0;
        iVar6 = 2;
    }
    do {
        uVar13 = _find_next_bit(extraout_x1 + 0x38,0,iVar6,uVar14,0xffffffffffffffff,0,in_x6,in_x7,puVar15,
                                pcVar16);
        if (iVar6 == uVar13) {
            return 0xffffffe4;
        }
        uVar9 = 1L << (uVar13 & 0x3f);
        puVar1 = extraout_x1 + (uVar13 >> 6 & 0x3ffffff) * 8 + 0x38;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar11 | uVar9;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
    } while ((uVar11 & uVar9) != 0);
    return uVar13;
}


// ===== sym.arm_smmu_pm_freeze_late.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008130 (size 8) =====

ulong sym.arm_smmu_pm_freeze_late.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    uVar1 = *(iVar4 + 0x30);
    if (uVar1 != 0) {
        uVar2 = 0;
        do {
            if ((((*(iVar4 + 0x48) + uVar2 * 0x30 != 0) &&
                 (iVar3 = *(*(iVar4 + 0x48) + uVar2 * 0x30 + 0x28), iVar3 != 0)) && (iVar3 != 0x30)) &&
               (*(iVar3 + 0x5c) != -1)) {
                qcom_free_io_pgtable_ops(*(iVar3 + -0x20));
                uVar1 = *(iVar4 + 0x30);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
    }
    return 0;
}


// ===== sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr @ 0x08008138 (size 8) =====

uint64_t sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr(int64_t param_1,int param_2,int param_3)

{
    int64_t arg1;
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 8) + (param_2 << (*(param_1 + 0x14) & 0x1f)) + param_3;
    iVar1 = sym.readl_relaxed_1(arg1 + 4);
    uVar2 = sym.readl_relaxed_1(arg1);
    return uVar2 & 0xffffffff | iVar1 << 0x20;
}


// ===== sym.__traceiter_iommu_pgtable_remove.cfi_jt @ 0x08008140 (size 8) =====

ulong sym.__traceiter_iommu_pgtable_remove.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018968;
    piVar1 = *0x8018968;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_iommu_pgtable_add.cfi_jt @ 0x08008148 (size 8) =====

ulong sym.__traceiter_iommu_pgtable_add.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018920;
    piVar1 = *0x8018920;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.qsmmuv500_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008150 (size 8) =====

void sym.qsmmuv500_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong *arg1;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + -0x150;
    iVar1 = mutex_trylock(obj.capture_reg_lock);
    if (iVar1 == 0) {
        iVar1 = ___ratelimit(obj.qsmmuv500_log_outstanding_transactions._rs,"qsmmuv500_log_outstanding_transactions");
        if (iVar1 != 0) {
            _dev_warn(*arg1,"Tnx snapshot regs in use, not dumping OT tnxs.\n");
        }
    }
    else {
        iVar1 = sym.arm_smmu_power_on(*(param_1 + -0x38));
        if (iVar1 == 0) {
            for (piVar3 = *(param_1 + -0x20); piVar3 != param_1 + -0x20; piVar3 = *piVar3) {
                iVar1 = sym.arm_smmu_power_on(piVar3[6]);
                if (iVar1 == 0) {
                    pcVar2 = *(piVar3[5] + 0x28);
                    if (5 < (pcVar2 + -0x80081f0 >> 3 | pcVar2 << 0x3d)) {
                        __cfi_slowpath_diag(0x6175088cc6504702,pcVar2,0x8001ed0);
                    }
                    (*pcVar2)(piVar3);
                    sym.arm_smmu_power_off(arg1,piVar3[6]);
                }
                else {
                    iVar1 = ___ratelimit(obj.qsmmuv500_log_outstanding_transactions._rs.22,
                                         "qsmmuv500_log_outstanding_transactions");
                    if (iVar1 != 0) {
                        _dev_err(piVar3[2],"%s: Failed to power on TBU.\n","qsmmuv500_log_outstanding_transactions");
                    }
                }
            }
            sym.arm_smmu_power_off(arg1,*(param_1 + -0x38));
        }
        else {
            iVar1 = ___ratelimit(obj.qsmmuv500_log_outstanding_transactions._rs.20,
                                 "qsmmuv500_log_outstanding_transactions");
            if (iVar1 != 0) {
                _dev_err(*arg1,"%s: Failed to power on SMMU.\n","qsmmuv500_log_outstanding_transactions");
            }
        }
        mutex_unlock(obj.capture_reg_lock);
    }
    return;
}


// ===== sym.__arm_smmu_sid_switch.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008158 (size 8) =====

ulong sym.__arm_smmu_sid_switch.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,int param_2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *arg1;
    int64_t iVar10;
    ulong *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x340);
    if (iVar7 != 0) {
        iVar10 = *(iVar7 + 0x40);
        puVar11 = *(iVar7 + 0x50);
        if (iVar10 != 0 && puVar11 != NULL) {
            arg1 = *puVar11;
            iVar7 = *arg1;
            if (((*(iVar7 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar7,4), iVar5 < 0)) {
                puVar1 = iVar7 + 0x1f8;
                uVar9 = *puVar1;
                do {
                    uVar8 = uVar9;
                    if (uVar8 == 0) break;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar9 = uVar2;
                        if (uVar2 != uVar8) goto code_r0x0800f0f4;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar8 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800f0f4:
                } while (uVar8 != uVar2);
            }
            mutex_lock(arg1 + 0xe);
            if (*(iVar10 + 0x14) != 0) {
                uVar8 = 0;
                do {
                    iVar7 = *(puVar11 + uVar8 * 2 + 8);
                    *(arg1[0xc] + iVar7 * 6 + 4) = param_2 == 0;
                    sym.arm_smmu_write_sme(arg1,iVar7);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(iVar10 + 0x14));
            }
            mutex_unlock(arg1 + 0xe);
            DataSynchronizationBarrier(3,2,0);
            iVar7 = *arg1;
            if ((*(iVar7 + 0x200) & 7) == 0) {
                uVar6 = ktime_get_mono_fast_ns();
                *(iVar7 + 0x218) = uVar6;
                __pm_runtime_idle(*arg1,5);
            }
        }
    }
    return 0;
}


// ===== sym.qsmmuv500_tbu_register.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008160 (size 8) =====

int sym.qsmmuv500_tbu_register.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x88) == 0) {
        _dev_err(param_1,"TBU failed probe, QSMMUV500 cannot continue!\n");
        iVar3 = -0x16;
    }
    else {
        piVar5 = *(param_1 + 0x98);
        piVar2 = param_2 + 0x130;
        *piVar5 = piVar5;
        piVar5[1] = piVar5;
        piVar5[3] = param_2;
        iVar6 = *(param_2 + 0x130);
        uVar4 = __list_add_valid(piVar5,piVar2,iVar6);
        if ((uVar4 & 1) != 0) {
            *(iVar6 + 8) = piVar5;
            *piVar5 = iVar6;
            piVar5[1] = piVar2;
            *piVar2 = piVar5;
        }
        uVar4 = 0xffffffff;
        do {
            uVar1 = uVar4 + 1;
            uVar4 = uVar1;
            iVar6 = platform_get_resource(param_1 + -0x10,0x400,uVar4);
        } while (iVar6 != 0);
        iVar6 = devm_kmalloc(param_1,-(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2,0xdc0);
        piVar5[10] = iVar6;
        if (iVar6 == 0) {
            iVar3 = -0xc;
        }
        else {
            if (0 < uVar1) {
                uVar7 = 0;
                do {
                    iVar3 = platform_get_irq(param_1 + -0x10,uVar7 & 0xffffffff);
                    if (iVar3 < 0) {
                        _dev_err(param_1,"failed to get irq index %d\n",uVar7 & 0xffffffff);
                        return -0x13;
                    }
                    *(piVar5[10] + uVar7 * 4) = iVar3;
                    iVar3 = devm_request_threaded_irq
                                      (piVar5[2],*(piVar5[10] + uVar7 * 4),0,
                                       sym.arm_smmu_debug_capture_bus_match.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt,
                                       0x2080,"capture bus",piVar5);
                    if (iVar3 != 0) {
                        _dev_err(param_1,"failed to request capture bus irq%d (%u)\n",uVar7 & 0xffffffff,
                                 *(piVar5[10] + uVar7 * 4));
                        return iVar3;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar4 != uVar7);
            }
            iVar3 = 0;
        }
    }
    return iVar3;
}


// ===== sym.__bus_lookup_iommu_group.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008168 (size 8) =====

ulong sym.__bus_lookup_iommu_group.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = iommu_group_get();
    uVar3 = 0;
    if (iVar1 != 0) {
        iVar2 = of_parse_phandle(*(param_1 + 0x2f0),"qcom,iommu-group",0);
        if (iVar2 == *param_2) {
            uVar3 = 1;
            param_2[1] = iVar1;
        }
        else {
            iommu_group_put(iVar1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.arm_smmu_log_new_table.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008170 (size 8) =====

void sym.arm_smmu_log_new_table.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}


// ===== sym.arm_smmu_log_remove_table.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008178 (size 8) =====

void sym.arm_smmu_log_remove_table.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}


// ===== sym.arm_smmu_set_pgtable_quirks.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008180 (size 8) =====

uint sym.arm_smmu_set_pgtable_quirks.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + -0x60);
    if (*(param_1 + -0xb0) == 0) {
        uVar1 = 0;
        *(param_1 + -0x98) = param_2;
    }
    else {
        uVar1 = 0xffffffff;
    }
    mutex_unlock(param_1 + -0x60);
    return uVar1;
}


// ===== sym.__traceiter_map_pages.cfi_jt @ 0x08008188 (size 8) =====

ulong sym.__traceiter_map_pages.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80189b0;
    piVar1 = *0x80189b0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_unmap_pages.cfi_jt @ 0x08008190 (size 8) =====

ulong sym.__traceiter_unmap_pages.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80189f8;
    piVar1 = *0x80189f8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_raw_output_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x08008198 (size 8) =====

void sym.trace_raw_output_iommu_tlbi.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"group=%s\n",iVar2 + *(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080081a0 (size 8) =====

void sym.trace_raw_output_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"group=%s iova=%lx size=%lx\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0x10),
                           *(iVar2 + 0x18));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_tlbsync_timeout.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080081a8 (size 8) =====

void sym.trace_raw_output_tlbsync_timeout.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"smmu=%s\n",iVar2 + *(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_iommu_pgtable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080081b0 (size 8) =====

void sym.trace_raw_output_iommu_pgtable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"group=%s table_base_iova=%lx table_ipa=%llx table_size=%zx\n",iVar2 + *(iVar2 + 8)
                           ,*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_smmu_init.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080081b8 (size 8) =====

void sym.trace_raw_output_smmu_init.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"ARM SMMU init latency: %lld us\n",*(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_iommu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080081c0 (size 8) =====

void sym.trace_raw_output_iommu_map_pages.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"group=%s iova=%lx size=%zx pgsize=%zx pgcount=%zx\n",iVar2 + *(iVar2 + 8),
                           *(iVar2 + 0x10),*(iVar2 + 0x20) * *(iVar2 + 0x18));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.qcom_adreno_smmu_resume_translation.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x080081c8 (size 8) =====

void sym.qcom_adreno_smmu_resume_translation.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t *param_1,uint32_t param_2)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *param_1;
    iVar1 = *(iVar2 + 0x10) + *(param_1 + 6);
    if ((*(iVar2 + 0x28) == 0) || (pcVar3 = *(*(iVar2 + 0x28) + 8), pcVar3 == NULL)) {
        sym.writel_relaxed_2(param_2 & 1,*(iVar2 + 8) + (iVar1 << (*(iVar2 + 0x14) & 0x1f)) + 8);
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar3,0x8001eb0);
        }
        (*pcVar3)(iVar2,iVar1,8,param_2 & 1);
    }
    return;
}


// ===== sym.qcom_adreno_smmu_set_stall.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x080081d0 (size 8) =====

void sym.qcom_adreno_smmu_set_stall.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar2 = *(*param_1 + 0x134);
    uVar3 = 1L << (*(param_1 + 6) & 0x3f);
    uVar1 = uVar2 | uVar3;
    if ((param_2 & 1) == 0) {
        uVar1 = uVar2 & (uVar3 ^ 0xffffffff);
    }
    *(*param_1 + 0x134) = uVar1;
    return;
}


// ===== sym.__bpf_trace_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080081d8 (size 8) =====

void sym.__bpf_trace_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4();
    return;
}


// ===== sym.perf_trace_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080081e0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint32_t param_5)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    char *pcVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t *piVar14;
    uint64_t unaff_x24;
    int64_t unaff_x25;
    uint64_t unaff_x30;
    uchar auVar15 [16];
    uchar auVar16 [16];
    uchar auStack_220 [12];
    uint uStack_214;
    int64_t iStack_210;
    int64_t iStack_208;
    ulong ***pppuStack_200;
    code *pcStack_1f8;
    int64_t *piStack_1f0;
    ulong uStack_1e8;
    uchar auStack_1e0 [16];
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar ***pppuStack_190;
    ulong uStack_188;
    int64_t *piStack_180;
    ulong *puStack_170;
    int64_t iStack_168;
    uchar auStack_160 [12];
    uint uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    int64_t iStack_130;
    uint64_t uStack_120;
    int64_t iStack_118;
    int64_t *piStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [16];
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uVar10 = param_5;
    iStack_70 = 0;
    uStack_74 = 0;
    pcVar3 = (*(param_2 + 8))[0xe];
    if (pcVar3 == NULL) {
        pcVar8 = **(param_2 + 8);
        pcVar3 = "(null)";
        if (pcVar8 != NULL) {
            pcVar3 = pcVar8;
        }
    }
    iVar2 = strlen(pcVar3);
    iVar4 = tpidr_el1;
    piVar14 = iVar4 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar14 != 0)) {
        unaff_x24 = (iVar2 + 0x2cU & 0xfffffff8) - 4;
        iVar4 = perf_trace_buf_alloc(unaff_x24,&iStack_70,&uStack_74);
        uVar12 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar9 = -1L << (uVar12 & 0x3f);
            uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar9 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar12;
            *(iStack_70 + 0x108) = 5;
            *(iVar4 + 8) = iVar2 * 0x10000 + 0x10020;
            pcVar3 = (*(param_2 + 8))[0xe];
            if (pcVar3 == NULL) {
                pcVar8 = **(param_2 + 8);
                pcVar3 = "(null)";
                if (pcVar8 != NULL) {
                    pcVar3 = pcVar8;
                }
            }
            strcpy(iVar4 + 0x20,pcVar3);
            *(iVar4 + 0x10) = param_3;
            param_3 = 0;
            if (param_5 != 0) {
                do {
                    param_3 = param_3 + *(param_4 + 0xc);
                    param_4 = sg_next(param_4);
                    uVar11 = uVar10 - 1;
                    uVar10 = uVar11;
                } while (uVar11 != 0);
            }
            *(iVar4 + 0x18) = param_3;
            perf_trace_run_bpf_submit(iVar4,unaff_x24,uStack_74,param_1,1,iStack_70,piVar14,0);
            unaff_x25 = iVar4;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return;
    }
    auVar15 = __stack_chk_fail();
    puVar7 = auVar15._8_8_;
    iVar5 = auVar15._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x8009228;
    uStack_a8 = 0x8009228;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar12 = *(iVar5 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar11 = uVar12;
    puStack_b0 = &stack0xffffffffffffffa0;
    iStack_a0 = param_4;
    uStack_90 = uVar10;
    iStack_88 = param_1;
    if ((uVar11 >> 8 & 1) == 0) {
        if ((uVar11 >> 7 & 1) != 0) {
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar11 >> 6 & 1) == 0) &&
           (((uVar11 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar5), (uVar10 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar3 = puVar7[0xe];
        if (puVar7[0xe] == NULL) {
            pcVar3 = "(null)";
            if (*puVar7 != NULL) {
                pcVar3 = *puVar7;
            }
        }
        iVar2 = strlen(pcVar3);
        uVar11 = iVar2 + 1;
        uVar12 = uVar11;
        iVar4 = trace_event_buffer_reserve(&uStack_e8,iVar5,uVar11 + 0xc);
        if (iVar4 != 0) {
            *(iVar4 + 8) = uVar11 * 0x10000 | 0xc;
            pcVar3 = puVar7[0xe];
            if (puVar7[0xe] == NULL) {
                pcVar3 = "(null)";
                if (*puVar7 != NULL) {
                    pcVar3 = *puVar7;
                }
            }
            strcpy(iVar4 + 0xc,pcVar3);
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar16 = __stack_chk_fail();
    puVar7 = auVar16._8_8_;
    iVar5 = auVar16._0_8_;
    *extraout_x18_00 = sym.perf_trace_tlbsync_timeout;
    pcStack_138 = sym.perf_trace_tlbsync_timeout;
    iVar4 = sp_el0;
    iStack_148 = *(iVar4 + 0x5e0);
    iStack_150 = 0;
    uStack_154 = 0;
    pcVar3 = puVar7[0xe];
    if (puVar7[0xe] == NULL) {
        pcVar3 = "(null)";
        if (*puVar7 != NULL) {
            pcVar3 = *puVar7;
        }
    }
    ppuStack_140 = &puStack_b0;
    iStack_130 = unaff_x25;
    uStack_120 = unaff_x24;
    iStack_118 = param_3;
    piStack_110 = piVar14;
    uStack_108 = uVar12;
    auStack_100 = auVar15;
    iVar2 = strlen(pcVar3);
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar14 = (iVar2 + 0x18U & 0xfffffff8) - 4;
        iVar4 = perf_trace_buf_alloc(piVar14,&iStack_150,&uStack_154);
        uVar10 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_150 + 0xe8) = &ppuStack_140;
            *(iStack_150 + 0xf8) = auStack_160;
            *(iStack_150 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800934c;
            *(iStack_150 + 0x108) = 5;
            *(iVar4 + 8) = iVar2 * 0x10000 + 0x1000c;
            pcVar3 = puVar7[0xe];
            if (puVar7[0xe] == NULL) {
                pcVar3 = "(null)";
                if (*puVar7 != NULL) {
                    pcVar3 = *puVar7;
                }
            }
            strcpy(iVar4 + 0xc,pcVar3);
            perf_trace_run_bpf_submit(iVar4,piVar14,uStack_154,iVar5,1,iStack_150,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_148) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar6 = auVar15._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_01 = 0x80094d4;
    uStack_188 = 0x80094d4;
    iVar4 = sp_el0;
    iStack_198 = *(iVar4 + 0x5e0);
    uVar13 = *(iVar6 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar11 = uVar13;
    pppuStack_190 = &ppuStack_140;
    piStack_180 = piVar1;
    if ((uVar11 >> 8 & 1) == 0) {
        if ((uVar11 >> 7 & 1) != 0) {
            puStack_170 = puVar7;
            iStack_168 = iVar5;
            event_triggers_call(iVar6,0,0,0);
            auVar16._8_8_ = puStack_170;
            auVar16._0_8_ = iStack_168;
        }
        puStack_170 = auVar16._8_8_;
        iStack_168 = auVar16._0_8_;
        if ((uVar11 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar11 >> 9 & 1) != 0) {
            uVar10 = trace_event_ignore_this_pid(iVar6);
            auVar16._8_8_ = puStack_170;
            auVar16._0_8_ = iStack_168;
            if ((uVar10 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_170 = auVar16._8_8_;
    iStack_168 = auVar16._0_8_;
    iVar4 = trace_event_buffer_reserve(&uStack_1c8,iVar6,0x10);
    auVar16._8_8_ = puStack_170;
    auVar16._0_8_ = iStack_168;
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar15._8_8_;
        trace_event_buffer_commit(&uStack_1c8);
        auVar16._8_8_ = puStack_170;
        auVar16._0_8_ = iStack_168;
    }
code_r0x08009570:
    puStack_170 = auVar16._8_8_;
    iStack_168 = auVar16._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_198) {
        return;
    }
    auVar16 = __stack_chk_fail();
    iVar5 = auVar16._0_8_;
    *extraout_x18_02 = sym.perf_trace_smmu_init;
    pcStack_1f8 = sym.perf_trace_smmu_init;
    iVar4 = sp_el0;
    iStack_208 = *(iVar4 + 0x5e0);
    iStack_210 = 0;
    uStack_214 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    pppuStack_200 = &pppuStack_190;
    piStack_1f0 = piVar14;
    uStack_1e8 = uVar13;
    auStack_1e0 = auVar15;
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_210,&uStack_214);
        uVar10 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_210 + 0xe8) = &pppuStack_200;
            *(iStack_210 + 0xf8) = auStack_220;
            *(iStack_210 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x80095a4;
            *(iStack_210 + 0x108) = 5;
            *(iVar4 + 8) = auVar16._8_8_;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_214,iVar5,1,iStack_210,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_208) {
        return;
    }
    __stack_chk_fail();
    uVar13 = tpidr_el2;
    *extraout_x18_03 = 0x80096b4;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.trace_event_raw_event_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt @ 0x080081e8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_map_sg.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    ulong *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong uVar15;
    int64_t *piVar16;
    uint64_t uVar17;
    int64_t unaff_x25;
    ulong unaff_x30;
    uchar auVar18 [16];
    uchar auVar19 [16];
    uchar auStack_2a0 [12];
    uint uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    int64_t *piStack_270;
    ulong uStack_268;
    uchar auStack_260 [16];
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    ulong *puStack_1f0;
    int64_t iStack_1e8;
    uchar auStack_1e0 [12];
    uint uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar ***pppuStack_1c0;
    code *pcStack_1b8;
    int64_t iStack_1b0;
    uint64_t uStack_1a0;
    int64_t iStack_198;
    int64_t *piStack_190;
    uint64_t uStack_188;
    uchar auStack_180 [16];
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t iStack_120;
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar auStack_100 [12];
    uint uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    uVar12 = param_5 & 0xffffffff;
    iStack_48 = *(iVar8 + 0x5e0);
    uVar17 = *(param_1 + 0x48);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar11 = uVar17;
    iVar8 = param_4;
    uVar14 = param_5;
    if ((uVar11 >> 8 & 1) == 0) {
        iVar7 = param_3;
        if ((uVar11 >> 7 & 1) != 0) {
            iVar7 = 0;
            iVar8 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar11 >> 6 & 1) == 0) &&
           (((uVar11 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x08008f74;
    }
    else {
code_r0x08008f74:
        pcVar4 = (*(param_2 + 8))[0xe];
        if (pcVar4 == NULL) {
            pcVar9 = **(param_2 + 8);
            pcVar4 = "(null)";
            if (pcVar9 != NULL) {
                pcVar4 = pcVar9;
            }
        }
        iVar2 = strlen(pcVar4);
        uVar11 = iVar2 + 1;
        uVar17 = uVar11;
        iVar7 = uVar11 + 0x20;
        iVar5 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar5 != 0) {
            *(iVar5 + 8) = uVar11 * 0x10000 | 0x20;
            pcVar4 = (*(param_2 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar9 = **(param_2 + 8);
                pcVar4 = "(null)";
                if (pcVar9 != NULL) {
                    pcVar4 = pcVar9;
                }
            }
            strcpy(iVar5 + 0x20,pcVar4);
            *(iVar5 + 0x10) = param_3;
            iVar13 = 0;
            uVar11 = param_5;
            while (uVar11 != 0) {
                iVar13 = iVar13 + *(param_4 + 0xc);
                param_4 = sg_next(param_4);
                uVar11 = uVar12 - 1;
                uVar12 = uVar11;
            }
            *(iVar5 + 0x18) = iVar13;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar13 = auVar18._0_8_;
    *extraout_x18 = sym.perf_trace_map_sg;
    pcStack_d8 = sym.perf_trace_map_sg;
    iVar5 = sp_el0;
    iStack_e8 = *(iVar5 + 0x5e0);
    uVar12 = uVar14 & 0xffffffff;
    puVar10 = *(auVar18._8_8_ + 8);
    iStack_f0 = 0;
    uStack_f4 = 0;
    pcVar4 = puVar10[0xe];
    if (pcVar4 == NULL) {
        pcVar9 = *puVar10;
        pcVar4 = "(null)";
        if (pcVar9 != NULL) {
            pcVar4 = pcVar9;
        }
    }
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar2 = strlen(pcVar4);
    iVar5 = tpidr_el1;
    piVar16 = iVar5 + *(iVar13 + 0x78);
    if ((*(iVar13 + 0x80) != 0) || (*piVar16 != 0)) {
        uVar17 = (iVar2 + 0x2cU & 0xfffffff8) - 4;
        iVar5 = perf_trace_buf_alloc(uVar17,&iStack_f0,&uStack_f4);
        uVar3 = _trace_event_reg;
        if (iVar5 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8009058;
            *(iStack_f0 + 0x108) = 5;
            *(iVar5 + 8) = iVar2 * 0x10000 + 0x10020;
            puVar10 = *(auVar18._8_8_ + 8);
            pcVar4 = puVar10[0xe];
            if (pcVar4 == NULL) {
                pcVar9 = *puVar10;
                pcVar4 = "(null)";
                if (pcVar9 != NULL) {
                    pcVar4 = pcVar9;
                }
            }
            strcpy(iVar5 + 0x20,pcVar4);
            *(iVar5 + 0x10) = iVar7;
            iVar7 = 0;
            uVar11 = uVar14;
            while (uVar11 != 0) {
                iVar7 = iVar7 + *(iVar8 + 0xc);
                iVar8 = sg_next(iVar8);
                uVar11 = uVar12 - 1;
                uVar12 = uVar11;
            }
            *(iVar5 + 0x18) = iVar7;
            perf_trace_run_bpf_submit(iVar5,uVar17,uStack_f4,iVar13,1,iStack_f0,piVar16,0);
            unaff_x25 = iVar5;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    puVar10 = auVar18._8_8_;
    iVar6 = auVar18._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_00 = 0x8009228;
    uStack_128 = 0x8009228;
    iVar5 = sp_el0;
    iStack_138 = *(iVar5 + 0x5e0);
    uVar14 = *(iVar6 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar11 = uVar14;
    ppuStack_130 = &puStack_e0;
    iStack_120 = iVar8;
    uStack_110 = uVar12;
    iStack_108 = iVar13;
    if ((uVar11 >> 8 & 1) == 0) {
        if ((uVar11 >> 7 & 1) != 0) {
            event_triggers_call(iVar6,0,0,0);
        }
        if (((uVar11 >> 6 & 1) == 0) &&
           (((uVar11 >> 9 & 1) == 0 || (uVar12 = trace_event_ignore_this_pid(iVar6), (uVar12 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar4 = puVar10[0xe];
        if (puVar10[0xe] == NULL) {
            pcVar4 = "(null)";
            if (*puVar10 != NULL) {
                pcVar4 = *puVar10;
            }
        }
        iVar2 = strlen(pcVar4);
        uVar11 = iVar2 + 1;
        uVar14 = uVar11;
        iVar8 = trace_event_buffer_reserve(&uStack_168,iVar6,uVar11 + 0xc);
        if (iVar8 != 0) {
            *(iVar8 + 8) = uVar11 * 0x10000 | 0xc;
            pcVar4 = puVar10[0xe];
            if (puVar10[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar10 != NULL) {
                    pcVar4 = *puVar10;
                }
            }
            strcpy(iVar8 + 0xc,pcVar4);
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return;
    }
    auVar19 = __stack_chk_fail();
    puVar10 = auVar19._8_8_;
    iVar5 = auVar19._0_8_;
    *extraout_x18_01 = sym.perf_trace_tlbsync_timeout;
    pcStack_1b8 = sym.perf_trace_tlbsync_timeout;
    iVar8 = sp_el0;
    iStack_1c8 = *(iVar8 + 0x5e0);
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    pcVar4 = puVar10[0xe];
    if (puVar10[0xe] == NULL) {
        pcVar4 = "(null)";
        if (*puVar10 != NULL) {
            pcVar4 = *puVar10;
        }
    }
    pppuStack_1c0 = &ppuStack_130;
    iStack_1b0 = unaff_x25;
    uStack_1a0 = uVar17;
    iStack_198 = iVar7;
    piStack_190 = piVar16;
    uStack_188 = uVar14;
    auStack_180 = auVar18;
    iVar2 = strlen(pcVar4);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(iVar5 + 0x78);
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar16 = (iVar2 + 0x18U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(piVar16,&iStack_1d0,&uStack_1d4);
        uVar12 = _trace_event_reg;
        if (iVar8 != 0) {
            *(iStack_1d0 + 0xe8) = &pppuStack_1c0;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x800934c;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar8 + 8) = iVar2 * 0x10000 + 0x1000c;
            pcVar4 = puVar10[0xe];
            if (puVar10[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar10 != NULL) {
                    pcVar4 = *puVar10;
                }
            }
            strcpy(iVar8 + 0xc,pcVar4);
            perf_trace_run_bpf_submit(iVar8,piVar16,uStack_1d4,iVar5,1,iStack_1d0,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar7 = auVar18._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_02 = 0x80094d4;
    uStack_208 = 0x80094d4;
    iVar8 = sp_el0;
    iStack_218 = *(iVar8 + 0x5e0);
    uVar15 = *(iVar7 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar11 = uVar15;
    pppuStack_210 = &pppuStack_1c0;
    piStack_200 = piVar1;
    if ((uVar11 >> 8 & 1) == 0) {
        if ((uVar11 >> 7 & 1) != 0) {
            puStack_1f0 = puVar10;
            iStack_1e8 = iVar5;
            event_triggers_call(iVar7,0,0,0);
            auVar19._8_8_ = puStack_1f0;
            auVar19._0_8_ = iStack_1e8;
        }
        puStack_1f0 = auVar19._8_8_;
        iStack_1e8 = auVar19._0_8_;
        if ((uVar11 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar11 >> 9 & 1) != 0) {
            uVar12 = trace_event_ignore_this_pid(iVar7);
            auVar19._8_8_ = puStack_1f0;
            auVar19._0_8_ = iStack_1e8;
            if ((uVar12 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_1f0 = auVar19._8_8_;
    iStack_1e8 = auVar19._0_8_;
    iVar8 = trace_event_buffer_reserve(&uStack_248,iVar7,0x10);
    auVar19._8_8_ = puStack_1f0;
    auVar19._0_8_ = iStack_1e8;
    if (iVar8 != 0) {
        *(iVar8 + 8) = auVar18._8_8_;
        trace_event_buffer_commit(&uStack_248);
        auVar19._8_8_ = puStack_1f0;
        auVar19._0_8_ = iStack_1e8;
    }
code_r0x08009570:
    puStack_1f0 = auVar19._8_8_;
    iStack_1e8 = auVar19._0_8_;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_218) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar7 = auVar19._0_8_;
    *extraout_x18_03 = sym.perf_trace_smmu_init;
    pcStack_278 = sym.perf_trace_smmu_init;
    iVar8 = sp_el0;
    iStack_288 = *(iVar8 + 0x5e0);
    iStack_290 = 0;
    uStack_294 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(iVar7 + 0x78);
    pppuStack_280 = &pppuStack_210;
    piStack_270 = piVar16;
    uStack_268 = uVar15;
    auStack_260 = auVar18;
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar8 = perf_trace_buf_alloc(0x14,&iStack_290,&uStack_294);
        uVar12 = _trace_event_reg;
        if (iVar8 != 0) {
            *(iStack_290 + 0xe8) = &pppuStack_280;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x80095a4;
            *(iStack_290 + 0x108) = 5;
            *(iVar8 + 8) = auVar19._8_8_;
            perf_trace_run_bpf_submit(iVar8,0x14,uStack_294,iVar7,1,iStack_290,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_288) {
        __stack_chk_fail();
        uVar15 = tpidr_el2;
        *extraout_x18_04 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__typeid__ZTSFvP20qsmmuv500_tbu_deviceE_global_addr @ 0x080081f0 (size 8) =====

void sym.__typeid__ZTSFvP20qsmmuv500_tbu_deviceE_global_addr(int64_t param_1)

{
    int64_t arg1;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x58) == '\0') {
        arg1 = *(param_1 + 0x20) + 0x410;
        uVar1 = sym.readq_relaxed_1(arg1);
        sym.writeq_relaxed_1(uVar1 & 0xfffffffffffffffe,arg1);
    }
    return;
}


// ===== sym.qtb500_tbu_write_sync.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x080081f8 (size 8) =====

void sym.qtb500_tbu_write_sync.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed_2(*(param_1 + 0x20));
    return;
}


// ===== sym.qtb500_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008200 (size 8) =====

void sym.qtb500_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x5c) != 0) {
        uVar2 = 0;
        iVar3 = *(param_1 + 0x20);
        iVar4 = 0xc10;
        do {
            uVar1 = sym.readq_relaxed_1(iVar3 + iVar4);
            _dev_err(*(param_1 + 0x10),"port %d outstanding transactions bitmap: 0x%llx\n",uVar2,uVar1);
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 0x10;
        } while (uVar2 < *(param_1 + 0x5c));
    }
    return;
}


// ===== sym.arm_tbu_write_sync.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008208 (size 8) =====

void sym.arm_tbu_write_sync.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed_2(*(param_1 + 0x20) + 0x20);
    return;
}


// ===== sym.arm_tbu_resume.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008210 (size 8) =====

void sym.arm_tbu_resume.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x20);
    uVar1 = sym.readl_relaxed_2(arg1);
    sym.writel_relaxed_2(uVar1 & 0xfffeffff,arg1);
    return;
}


// ===== sym.arm_tbu_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt @ 0x08008218 (size 8) =====

void sym.arm_tbu_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x20);
    iVar3 = iVar7 + 0x130;
    uVar2 = sym.readq_relaxed_1(iVar3);
    sym.writeq_relaxed_1(uVar2 | 0x80,iVar3);
    sym.writeq_relaxed_1(uVar2 & 0xfffffffffffb7f3f | 0x40000,iVar3);
    iVar3 = ktime_get();
    do {
        uVar4 = sym.readq(iVar7 + 0x178);
        if ((uVar4 & 1) != 0) goto code_r0x080146cc;
        iVar5 = ktime_get();
    } while (iVar5 <= iVar3 + 100000);
    uVar4 = sym.readq(iVar7 + 0x178);
code_r0x080146cc:
    if ((uVar4 & 1) == 0) {
        iVar1 = ___ratelimit(obj.arm_tbu_log_outstanding_transactions._rs,"arm_tbu_log_outstanding_transactions");
        if (iVar1 != 0) {
            _dev_err(*(param_1 + 0x10),"Timeout on TNX snapshot poll\n");
        }
    }
    else {
        uVar6 = sym.readq_relaxed_1(iVar7 + 0x138);
        iVar1 = ___ratelimit(obj.arm_tbu_log_outstanding_transactions._rs.17,"arm_tbu_log_outstanding_transactions");
        if (iVar1 != 0) {
            _dev_err(*(param_1 + 0x10),"Outstanding Transaction Bitmap: 0x%llx\n",uVar6);
        }
    }
    sym.writeq_relaxed_1(uVar2 & 0xfffffffffffb7f3f,*(param_1 + 0x20) + 0x130);
    return;
}


// ===== sym.__traceiter_tlbi_start @ 0x08008220 (size 88) =====

ulong sym.__traceiter_tlbi_start(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018890;
    piVar1 = *0x8018890;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_tlbi_end @ 0x08008280 (size 88) =====

ulong sym.__traceiter_tlbi_end(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80188d8;
    piVar1 = *0x80188d8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_iommu_pgtable_add @ 0x080082e0 (size 128) =====

ulong sym.__traceiter_iommu_pgtable_add(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018920;
    piVar1 = *0x8018920;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_iommu_pgtable_remove @ 0x08008368 (size 128) =====

ulong sym.__traceiter_iommu_pgtable_remove(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018968;
    piVar1 = *0x8018968;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_map_pages @ 0x080083f0 (size 128) =====

ulong sym.__traceiter_map_pages(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80189b0;
    piVar1 = *0x80189b0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_unmap_pages @ 0x08008478 (size 128) =====

ulong sym.__traceiter_unmap_pages(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80189f8;
    piVar1 = *0x80189f8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_map_sg @ 0x08008500 (size 128) =====

ulong sym.__traceiter_map_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018a40;
    piVar1 = *0x8018a40;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4,in_w4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_tlbsync_timeout @ 0x08008588 (size 88) =====

ulong sym.__traceiter_tlbsync_timeout(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018a88;
    piVar1 = *0x8018a88;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_smmu_init @ 0x080085e8 (size 88) =====

ulong sym.__traceiter_smmu_init(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8018ad0;
    piVar1 = *0x8018ad0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_iommu_tlbi @ 0x08008648 (size 288) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08008858)
//WARNING: Removing unreachable block (ram,0x08008b44)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_iommu_tlbi(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    int64_t iVar6;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar15;
    uint32_t *in_x2;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    int64_t in_x3;
    int64_t iVar19;
    uint64_t in_x4;
    char *pcVar20;
    ulong *puVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    uint32_t uVar22;
    uint64_t unaff_x22;
    int64_t *piVar23;
    int64_t unaff_x24;
    uint64_t uVar24;
    uint64_t uVar25;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    uchar auVar29 [16];
    uchar auStack_580 [12];
    uint uStack_574;
    int64_t iStack_570;
    int64_t iStack_568;
    ulong ***pppuStack_560;
    code *pcStack_558;
    int64_t *piStack_550;
    ulong uStack_548;
    uchar auStack_540 [16];
    ulong uStack_528;
    ulong uStack_520;
    ulong uStack_518;
    ulong uStack_510;
    ulong uStack_508;
    ulong uStack_500;
    int64_t iStack_4f8;
    ulong ***pppuStack_4f0;
    ulong uStack_4e8;
    int64_t *piStack_4e0;
    ulong *puStack_4d0;
    int64_t iStack_4c8;
    uchar auStack_4c0 [12];
    uint uStack_4b4;
    int64_t iStack_4b0;
    int64_t iStack_4a8;
    ulong ***pppuStack_4a0;
    code *pcStack_498;
    uint64_t uStack_490;
    uint64_t uStack_480;
    uint32_t *puStack_478;
    int64_t *piStack_470;
    uint64_t uStack_468;
    uchar auStack_460 [16];
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    int64_t iStack_418;
    ulong ***pppuStack_410;
    ulong uStack_408;
    int64_t iStack_400;
    uint64_t uStack_3f0;
    int64_t iStack_3e8;
    uchar auStack_3e0 [12];
    uint uStack_3d4;
    int64_t iStack_3d0;
    int64_t iStack_3c8;
    ulong ***pppuStack_3c0;
    code *pcStack_3b8;
    ulong uStack_3b0;
    int64_t iStack_3a8;
    code *pcStack_3a0;
    uint64_t uStack_398;
    uint64_t uStack_390;
    int64_t iStack_388;
    int64_t iStack_380;
    uint32_t *puStack_378;
    int64_t iStack_370;
    uint64_t uStack_368;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    int64_t iStack_328;
    ulong ***pppuStack_320;
    ulong uStack_318;
    int64_t *piStack_310;
    int64_t iStack_308;
    uint32_t *puStack_300;
    int64_t iStack_2f8;
    uint64_t uStack_2f0;
    int64_t iStack_2e8;
    uchar auStack_2e0 [12];
    uint32_t uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_2a8;
    code *pcStack_2a0;
    uint64_t uStack_298;
    uint64_t uStack_290;
    int64_t iStack_288;
    int64_t iStack_280;
    uint32_t *puStack_278;
    int64_t iStack_270;
    uint64_t uStack_268;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong ***pppuStack_220;
    ulong uStack_218;
    int64_t *piStack_210;
    int64_t iStack_208;
    uint32_t *puStack_200;
    int64_t iStack_1f8;
    uint64_t uStack_1f0;
    int64_t iStack_1e8;
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar ***pppuStack_1c0;
    code *pcStack_1b8;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    int64_t iStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    int64_t *piStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    int64_t iVar7;
    int64_t iVar14;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar22 = *(arg1 + 0x48);
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(arg1), (uVar4 & 1) == 0))))
        goto code_r0x080086b8;
    }
    else {
code_r0x080086b8:
        pcVar5 = (*(arg2 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar20 = **(arg2 + 8);
            pcVar5 = "(null)";
            if (pcVar20 != NULL) {
                pcVar5 = pcVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        in_x2 = iVar3 + 1 + 0xc;
        iVar6 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = (iVar3 + 1) * 0x10000 | 0xc;
            pcVar5 = (*(arg2 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(arg2 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar6 + 0xc,pcVar5);
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar14 = auVar26._8_8_;
    iVar9 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_iommu_tlbi;
    pcStack_b8 = sym.perf_trace_iommu_tlbi;
    iVar6 = sp_el0;
    iStack_c8 = *(iVar6 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    pcVar5 = (*(iVar14 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar20 = **(iVar14 + 8);
        pcVar5 = "(null)";
        if (pcVar20 != NULL) {
            pcVar5 = pcVar20;
        }
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    uVar4 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar23 = iVar6 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar23 != 0)) {
        in_x2 = &uStack_d4;
        unaff_x22 = (uVar4 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x22,&iStack_d0);
        uVar11 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x8008768;
            *(iStack_d0 + 0x108) = 5;
            *(iVar6 + 8) = uVar4 * 0x10000 + 0x1000c;
            pcVar5 = (*(iVar14 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar14 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar6 + 0xc,pcVar5);
            in_x2 = uStack_d4;
            in_x4 = 1;
            in_x3 = iVar9;
            perf_trace_run_bpf_submit(iVar6,unaff_x22);
            unaff_x24 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_00 = 0x80088f8;
    uStack_118 = 0x80088f8;
    pcStack_108 = sym.perf_trace_iommu_tlbi;
    iVar6 = sp_el0;
    iStack_128 = *(iVar6 + 0x5e0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar22 = *(iVar7 + 0x48);
    iVar6 = in_x3;
    uVar11 = in_x4;
    ppuStack_120 = &puStack_c0;
    iStack_110 = unaff_x24;
    uStack_100 = unaff_x22;
    piStack_f8 = piVar23;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar16 = in_x2;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar16 = NULL;
            iVar6 = 0;
            iStack_f0 = iVar14;
            iStack_e8 = iVar9;
            event_triggers_call(iVar7,0);
            auVar26._8_8_ = iStack_f0;
            auVar26._0_8_ = iStack_e8;
        }
        iStack_f0 = auVar26._8_8_;
        iStack_e8 = auVar26._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar8 = trace_event_ignore_this_pid(iVar7);
                auVar26._8_8_ = iStack_f0;
                auVar26._0_8_ = iStack_e8;
                if ((uVar8 & 1) != 0) goto code_r0x08008a0c;
            }
            goto code_r0x08008984;
        }
    }
    else {
code_r0x08008984:
        iStack_f0 = auVar26._8_8_;
        iStack_e8 = auVar26._0_8_;
        puVar21 = *(auVar27._8_8_ + 8);
        pcVar5 = puVar21[0xe];
        if (pcVar5 == NULL) {
            pcVar20 = *puVar21;
            pcVar5 = "(null)";
            if (pcVar20 != NULL) {
                pcVar5 = pcVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        puVar16 = iVar3 + 1 + 0x28;
        iVar9 = trace_event_buffer_reserve(&uStack_158,iVar7);
        auVar26._8_8_ = iStack_f0;
        auVar26._0_8_ = iStack_e8;
        if (iVar9 != 0) {
            *(iVar9 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            puVar21 = *(auVar27._8_8_ + 8);
            pcVar5 = puVar21[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = *puVar21;
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar9 + 0x28,pcVar5);
            *(iVar9 + 0x10) = in_x2;
            *(iVar9 + 0x18) = in_x3;
            *(iVar9 + 0x20) = in_x4;
            trace_event_buffer_commit(&uStack_158);
            auVar26._8_8_ = iStack_f0;
            auVar26._0_8_ = iStack_e8;
        }
    }
code_r0x08008a0c:
    iStack_f0 = auVar26._8_8_;
    iStack_e8 = auVar26._0_8_;
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_128) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._8_8_;
    iVar14 = auVar27._0_8_;
    *extraout_x18_01 = sym.perf_trace_iommu_pgtable;
    pcStack_1b8 = sym.perf_trace_iommu_pgtable;
    iVar9 = sp_el0;
    iStack_1c8 = *(iVar9 + 0x5e0);
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    pcVar5 = (*(iVar7 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar20 = **(iVar7 + 8);
        pcVar5 = "(null)";
        if (pcVar20 != NULL) {
            pcVar5 = pcVar20;
        }
    }
    puVar17 = puVar16;
    iVar19 = iVar6;
    uVar8 = uVar11;
    pppuStack_1c0 = &ppuStack_120;
    uVar10 = strlen(pcVar5);
    iVar9 = tpidr_el1;
    piVar23 = iVar9 + *(iVar14 + 0x78);
    if ((*(iVar14 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar17 = &uStack_1d4;
        uVar4 = (uVar10 + 0x34U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(uVar4,&iStack_1d0);
        uVar12 = _trace_event_reg;
        if (iVar9 != 0) {
            *(iStack_1d0 + 0xe8) = &pppuStack_1c0;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x8008a44;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar9 + 8) = uVar10 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar7 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar7 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar9 + 0x28,pcVar5);
            puVar17 = uStack_1d4;
            uVar8 = 1;
            *(iVar9 + 0x10) = puVar16;
            *(iVar9 + 0x18) = iVar6;
            *(iVar9 + 0x20) = uVar11;
            iVar19 = iVar14;
            perf_trace_run_bpf_submit(iVar9,uVar4);
            unaff_x27 = iVar9;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar15 = auVar26._8_8_;
    iVar13 = auVar26._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_02 = 0x8008bf0;
    uStack_218 = 0x8008bf0;
    iVar9 = sp_el0;
    iStack_228 = *(iVar9 + 0x5e0);
    uVar24 = *(iVar13 + 0x48);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar22 = uVar24;
    iVar9 = iVar19;
    uVar12 = uVar8;
    pppuStack_220 = &pppuStack_1c0;
    piStack_210 = piVar23;
    puStack_200 = puVar16;
    iStack_1f8 = iVar6;
    uStack_1f0 = uVar11;
    iStack_288 = iVar13;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar16 = puVar17;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar16 = NULL;
            iVar9 = 0;
            iStack_208 = iVar7;
            iStack_1e8 = iVar14;
            event_triggers_call(iVar13,0);
            auVar27._8_8_ = iStack_208;
            auVar27._0_8_ = iStack_1e8;
        }
        iStack_208 = auVar27._8_8_;
        iStack_1e8 = auVar27._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar11 = trace_event_ignore_this_pid(iVar13);
                auVar27._8_8_ = iStack_208;
                auVar27._0_8_ = iStack_1e8;
                if ((uVar11 & 1) != 0) goto code_r0x08008d04;
            }
            goto code_r0x08008c7c;
        }
    }
    else {
code_r0x08008c7c:
        iStack_208 = auVar27._8_8_;
        iStack_1e8 = auVar27._0_8_;
        pcVar5 = (*(iVar15 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar20 = **(iVar15 + 8);
            pcVar5 = "(null)";
            if (pcVar20 != NULL) {
                pcVar5 = pcVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar22 = iVar3 + 1;
        uVar24 = uVar22;
        puVar16 = uVar22 + 0x28;
        iVar6 = trace_event_buffer_reserve(&uStack_258,iVar13);
        auVar27._8_8_ = iStack_208;
        auVar27._0_8_ = iStack_1e8;
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar22 * 0x10000 | 0x28;
            pcVar5 = (*(iVar15 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar15 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            *(iVar6 + 0x10) = puVar17;
            *(iVar6 + 0x18) = iVar19;
            *(iVar6 + 0x20) = uVar8;
            trace_event_buffer_commit(&uStack_258);
            auVar27._8_8_ = iStack_208;
            auVar27._0_8_ = iStack_1e8;
            iStack_288 = iVar6;
        }
    }
code_r0x08008d04:
    iStack_208 = auVar27._8_8_;
    iStack_1e8 = auVar27._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_228) {
        return;
    }
    auVar28 = __stack_chk_fail();
    iVar7 = auVar28._8_8_;
    iVar14 = auVar28._0_8_;
    *extraout_x18_03 = sym.perf_trace_iommu_map_pages;
    pcStack_2b8 = sym.perf_trace_iommu_map_pages;
    pcStack_2a0 = sym.perf_trace_iommu_pgtable;
    iVar6 = sp_el0;
    iStack_2c8 = *(iVar6 + 0x5e0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    pcVar5 = (*(iVar7 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar20 = **(iVar7 + 8);
        pcVar5 = "(null)";
        if (pcVar20 != NULL) {
            pcVar5 = pcVar20;
        }
    }
    puVar18 = puVar16;
    iVar13 = iVar9;
    uVar11 = uVar12;
    pppuStack_2c0 = &pppuStack_220;
    uStack_2b0 = uVar10;
    iStack_2a8 = unaff_x27;
    uStack_298 = uVar4;
    uStack_290 = uVar24;
    iStack_280 = iVar15;
    puStack_278 = puVar17;
    iStack_270 = iVar19;
    uStack_268 = uVar8;
    uVar10 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar23 = iVar6 + *(iVar14 + 0x78);
    if ((*(iVar14 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar18 = &uStack_2d4;
        uVar4 = (uVar10 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(uVar4,&iStack_2d0);
        uVar8 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_2d0 + 0xe8) = &pppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << (uVar8 & 0x3f)) & 0x8008d3c;
            *(iStack_2d0 + 0x108) = 5;
            *(iVar6 + 8) = uVar10 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar7 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar7 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            puVar18 = uStack_2d4;
            uVar11 = 1;
            *(iVar6 + 0x10) = puVar16;
            *(iVar6 + 0x18) = iVar9;
            *(iVar6 + 0x20) = uVar12;
            iVar13 = iVar14;
            perf_trace_run_bpf_submit(iVar6,uVar4);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar15 = auVar26._8_8_;
    iVar19 = auVar26._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_04 = 0x8008ee8;
    uStack_318 = 0x8008ee8;
    iVar6 = sp_el0;
    uVar8 = uVar11 & 0xffffffff;
    iStack_328 = *(iVar6 + 0x5e0);
    uVar25 = *(iVar19 + 0x48);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uVar22 = uVar25;
    iVar6 = iVar13;
    uVar24 = uVar11;
    pppuStack_320 = &pppuStack_2c0;
    piStack_310 = piVar23;
    puStack_300 = puVar16;
    iStack_2f8 = iVar9;
    uStack_2f0 = uVar12;
    iStack_388 = iVar19;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar16 = puVar18;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar16 = NULL;
            iVar6 = 0;
            iStack_308 = iVar7;
            iStack_2e8 = iVar14;
            event_triggers_call(iVar19,0);
            auVar28._8_8_ = iStack_308;
            auVar28._0_8_ = iStack_2e8;
        }
        iStack_308 = auVar28._8_8_;
        iStack_2e8 = auVar28._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar12 = trace_event_ignore_this_pid(iVar19);
                auVar28._8_8_ = iStack_308;
                auVar28._0_8_ = iStack_2e8;
                if ((uVar12 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_308 = auVar28._8_8_;
        iStack_2e8 = auVar28._0_8_;
        pcVar5 = (*(iVar15 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar20 = **(iVar15 + 8);
            pcVar5 = "(null)";
            if (pcVar20 != NULL) {
                pcVar5 = pcVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar22 = iVar3 + 1;
        uVar25 = uVar22;
        puVar16 = uVar22 + 0x20;
        iVar9 = trace_event_buffer_reserve(&uStack_358,iVar19);
        auVar28._8_8_ = iStack_308;
        auVar28._0_8_ = iStack_2e8;
        if (iVar9 != 0) {
            *(iVar9 + 8) = uVar22 * 0x10000 | 0x20;
            pcVar5 = (*(iVar15 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = **(iVar15 + 8);
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(iVar9 + 0x20,pcVar5);
            *(iVar9 + 0x10) = puVar18;
            puVar18 = NULL;
            uVar22 = uVar11;
            while (uVar22 != 0) {
                puVar18 = puVar18 + *(iVar13 + 0xc);
                iVar13 = sg_next(iVar13);
                uVar22 = uVar8 - 1;
                uVar8 = uVar22;
            }
            *(iVar9 + 0x18) = puVar18;
            trace_event_buffer_commit(&uStack_358);
            auVar28._8_8_ = iStack_308;
            auVar28._0_8_ = iStack_2e8;
            iStack_388 = iVar9;
        }
    }
code_r0x08009020:
    iStack_308 = auVar28._8_8_;
    iStack_2e8 = auVar28._0_8_;
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_328) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar14 = auVar26._0_8_;
    *extraout_x18_05 = sym.perf_trace_map_sg;
    pcStack_3b8 = sym.perf_trace_map_sg;
    pcStack_3a0 = sym.perf_trace_iommu_map_pages;
    iVar9 = sp_el0;
    iStack_3c8 = *(iVar9 + 0x5e0);
    uVar11 = uVar24 & 0xffffffff;
    puVar21 = *(auVar26._8_8_ + 8);
    iStack_3d0 = 0;
    uStack_3d4 = 0;
    pcVar5 = puVar21[0xe];
    if (pcVar5 == NULL) {
        pcVar20 = *puVar21;
        pcVar5 = "(null)";
        if (pcVar20 != NULL) {
            pcVar5 = pcVar20;
        }
    }
    pppuStack_3c0 = &pppuStack_320;
    uStack_3b0 = uVar10;
    iStack_3a8 = unaff_x27;
    uStack_398 = uVar4;
    uStack_390 = uVar25;
    iStack_380 = iVar15;
    puStack_378 = puVar18;
    iStack_370 = iVar13;
    uStack_368 = uVar8;
    iVar3 = strlen(pcVar5);
    iVar9 = tpidr_el1;
    piVar23 = iVar9 + *(iVar14 + 0x78);
    if ((*(iVar14 + 0x80) != 0) || (*piVar23 != 0)) {
        uVar25 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar12 = perf_trace_buf_alloc(uVar25,&iStack_3d0,&uStack_3d4);
        uVar8 = _trace_event_reg;
        if (uVar12 != 0) {
            *(iStack_3d0 + 0xe8) = &pppuStack_3c0;
            *(iStack_3d0 + 0xf8) = auStack_3e0;
            *(iStack_3d0 + 0x100) = ~(-1L << (uVar8 & 0x3f)) & 0x8009058;
            *(iStack_3d0 + 0x108) = 5;
            *(uVar12 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar21 = *(auVar26._8_8_ + 8);
            pcVar5 = puVar21[0xe];
            if (pcVar5 == NULL) {
                pcVar20 = *puVar21;
                pcVar5 = "(null)";
                if (pcVar20 != NULL) {
                    pcVar5 = pcVar20;
                }
            }
            strcpy(uVar12 + 0x20,pcVar5);
            *(uVar12 + 0x10) = puVar16;
            puVar16 = NULL;
            uVar22 = uVar24;
            while (uVar22 != 0) {
                puVar16 = puVar16 + *(iVar6 + 0xc);
                iVar6 = sg_next(iVar6);
                uVar22 = uVar11 - 1;
                uVar11 = uVar22;
            }
            *(uVar12 + 0x18) = puVar16;
            perf_trace_run_bpf_submit(uVar12,uVar25,uStack_3d4,iVar14,1,iStack_3d0,piVar23,0);
            uVar4 = uVar12;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_3c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar21 = auVar26._8_8_;
    iVar7 = auVar26._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_06 = 0x8009228;
    uStack_408 = 0x8009228;
    iVar9 = sp_el0;
    iStack_418 = *(iVar9 + 0x5e0);
    uVar8 = *(iVar7 + 0x48);
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uVar22 = uVar8;
    pppuStack_410 = &pppuStack_3c0;
    iStack_400 = iVar6;
    uStack_3f0 = uVar11;
    iStack_3e8 = iVar14;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            event_triggers_call(iVar7,0,0,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar11 = trace_event_ignore_this_pid(iVar7), (uVar11 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar5 = puVar21[0xe];
        if (puVar21[0xe] == NULL) {
            pcVar5 = "(null)";
            if (*puVar21 != NULL) {
                pcVar5 = *puVar21;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar22 = iVar3 + 1;
        uVar8 = uVar22;
        iVar6 = trace_event_buffer_reserve(&uStack_448,iVar7,uVar22 + 0xc);
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar22 * 0x10000 | 0xc;
            pcVar5 = puVar21[0xe];
            if (puVar21[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar21 != NULL) {
                    pcVar5 = *puVar21;
                }
            }
            strcpy(iVar6 + 0xc,pcVar5);
            trace_event_buffer_commit(&uStack_448);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_418) {
        return;
    }
    auVar29 = __stack_chk_fail();
    puVar21 = auVar29._8_8_;
    iVar9 = auVar29._0_8_;
    *extraout_x18_07 = sym.perf_trace_tlbsync_timeout;
    pcStack_498 = sym.perf_trace_tlbsync_timeout;
    iVar6 = sp_el0;
    iStack_4a8 = *(iVar6 + 0x5e0);
    iStack_4b0 = 0;
    uStack_4b4 = 0;
    pcVar5 = puVar21[0xe];
    if (puVar21[0xe] == NULL) {
        pcVar5 = "(null)";
        if (*puVar21 != NULL) {
            pcVar5 = *puVar21;
        }
    }
    pppuStack_4a0 = &pppuStack_410;
    uStack_490 = uVar4;
    uStack_480 = uVar25;
    puStack_478 = puVar16;
    piStack_470 = piVar23;
    uStack_468 = uVar8;
    auStack_460 = auVar26;
    iVar3 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar23 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(piVar23,&iStack_4b0,&uStack_4b4);
        uVar4 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_4b0 + 0xe8) = &pppuStack_4a0;
            *(iStack_4b0 + 0xf8) = auStack_4c0;
            *(iStack_4b0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x800934c;
            *(iStack_4b0 + 0x108) = 5;
            *(iVar6 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar5 = puVar21[0xe];
            if (puVar21[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar21 != NULL) {
                    pcVar5 = *puVar21;
                }
            }
            strcpy(iVar6 + 0xc,pcVar5);
            perf_trace_run_bpf_submit(iVar6,piVar23,uStack_4b4,iVar9,1,iStack_4b0,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_4a8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar14 = auVar26._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_08 = 0x80094d4;
    uStack_4e8 = 0x80094d4;
    iVar6 = sp_el0;
    iStack_4f8 = *(iVar6 + 0x5e0);
    uVar10 = *(iVar14 + 0x48);
    uStack_508 = 0;
    uStack_500 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_528 = 0;
    uStack_520 = 0;
    uVar22 = uVar10;
    pppuStack_4f0 = &pppuStack_4a0;
    piStack_4e0 = piVar1;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            puStack_4d0 = puVar21;
            iStack_4c8 = iVar9;
            event_triggers_call(iVar14,0,0,0);
            auVar29._8_8_ = puStack_4d0;
            auVar29._0_8_ = iStack_4c8;
        }
        puStack_4d0 = auVar29._8_8_;
        iStack_4c8 = auVar29._0_8_;
        if ((uVar22 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar22 >> 9 & 1) != 0) {
            uVar4 = trace_event_ignore_this_pid(iVar14);
            auVar29._8_8_ = puStack_4d0;
            auVar29._0_8_ = iStack_4c8;
            if ((uVar4 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_4d0 = auVar29._8_8_;
    iStack_4c8 = auVar29._0_8_;
    iVar6 = trace_event_buffer_reserve(&uStack_528,iVar14,0x10);
    auVar29._8_8_ = puStack_4d0;
    auVar29._0_8_ = iStack_4c8;
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar26._8_8_;
        trace_event_buffer_commit(&uStack_528);
        auVar29._8_8_ = puStack_4d0;
        auVar29._0_8_ = iStack_4c8;
    }
code_r0x08009570:
    puStack_4d0 = auVar29._8_8_;
    iStack_4c8 = auVar29._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_4f8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar9 = auVar27._0_8_;
    *extraout_x18_09 = sym.perf_trace_smmu_init;
    pcStack_558 = sym.perf_trace_smmu_init;
    iVar6 = sp_el0;
    iStack_568 = *(iVar6 + 0x5e0);
    iStack_570 = 0;
    uStack_574 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    pppuStack_560 = &pppuStack_4f0;
    piStack_550 = piVar23;
    uStack_548 = uVar10;
    auStack_540 = auVar26;
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_570,&uStack_574);
        uVar4 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_570 + 0xe8) = &pppuStack_560;
            *(iStack_570 + 0xf8) = auStack_580;
            *(iStack_570 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x80095a4;
            *(iStack_570 + 0x108) = 5;
            *(iVar6 + 8) = auVar27._8_8_;
            perf_trace_run_bpf_submit(iVar6,0x14,uStack_574,iVar9,1,iStack_570,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_568) {
        __stack_chk_fail();
        uVar10 = tpidr_el2;
        *extraout_x18_10 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_iommu_tlbi @ 0x08008768 (size 412) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08008b44)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_iommu_tlbi(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    char *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uchar *in_x2;
    uchar *puVar15;
    uchar *puVar16;
    uchar *puVar17;
    int64_t in_x3;
    int64_t iVar18;
    uint64_t in_x4;
    char *pcVar19;
    ulong *puVar20;
    uint64_t uVar21;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    uint32_t uVar22;
    int64_t *piVar23;
    int64_t unaff_x24;
    uint64_t uVar24;
    uint64_t uVar25;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    uchar auStack_510 [12];
    uint uStack_504;
    int64_t iStack_500;
    int64_t iStack_4f8;
    uchar *puStack_4f0;
    code *pcStack_4e8;
    int64_t *piStack_4e0;
    ulong uStack_4d8;
    uchar auStack_4d0 [16];
    ulong uStack_4b8;
    ulong uStack_4b0;
    ulong uStack_4a8;
    ulong uStack_4a0;
    ulong uStack_498;
    ulong uStack_490;
    int64_t iStack_488;
    uchar *puStack_480;
    ulong uStack_478;
    int64_t *piStack_470;
    ulong *puStack_460;
    int64_t iStack_458;
    uchar auStack_450 [12];
    uint uStack_444;
    int64_t iStack_440;
    int64_t iStack_438;
    uchar *puStack_430;
    code *pcStack_428;
    uint64_t uStack_420;
    uint64_t uStack_410;
    uchar *puStack_408;
    int64_t *piStack_400;
    uint64_t uStack_3f8;
    uchar auStack_3f0 [16];
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    int64_t iStack_3a8;
    uchar *puStack_3a0;
    ulong uStack_398;
    int64_t iStack_390;
    uint64_t uStack_380;
    int64_t iStack_378;
    uchar auStack_370 [12];
    uint uStack_364;
    int64_t iStack_360;
    int64_t iStack_358;
    uchar *puStack_350;
    code *pcStack_348;
    ulong uStack_340;
    int64_t iStack_338;
    code *pcStack_330;
    uint64_t uStack_328;
    uint64_t uStack_320;
    int64_t iStack_318;
    int64_t iStack_310;
    uchar *puStack_308;
    int64_t iStack_300;
    uint64_t uStack_2f8;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    ulong uStack_2a8;
    int64_t *piStack_2a0;
    int64_t iStack_298;
    uchar *puStack_290;
    int64_t iStack_288;
    uint64_t uStack_280;
    int64_t iStack_278;
    uchar auStack_270 [12];
    uint32_t uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    uchar *puStack_250;
    code *pcStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    code *pcStack_230;
    uint64_t uStack_228;
    uint64_t uStack_220;
    int64_t iStack_218;
    int64_t iStack_210;
    uchar *puStack_208;
    int64_t iStack_200;
    uint64_t uStack_1f8;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    uchar *puStack_1b0;
    ulong uStack_1a8;
    int64_t *piStack_1a0;
    int64_t iStack_198;
    uchar *puStack_190;
    int64_t iStack_188;
    uint64_t uStack_180;
    int64_t iStack_178;
    uchar auStack_170 [12];
    uint32_t uStack_164;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iVar14;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    pcVar4 = (*(arg2 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar19 = **(arg2 + 8);
        pcVar4 = "(null)";
        if (pcVar19 != NULL) {
            pcVar4 = pcVar19;
        }
    }
    uVar5 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    if ((*(arg1 + 0x80) != 0) || (*(iVar6 + *(arg1 + 0x78)) != 0)) {
        in_x2 = &stack0xffffffffffffff9c;
        iVar3 = (uVar5 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&stack0xffffffffffffffa0);
        uVar10 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            uVar21 = -1L << (uVar10 & 0x3f);
            uVar10 = (~uVar21 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar10 = uVar21 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar10;
            *(iStack_60 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x1000c;
            pcVar4 = (*(arg2 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(arg2 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            in_x2 = uStack_64;
            in_x4 = 1;
            perf_trace_run_bpf_submit(iVar6,iVar3);
            in_x3 = arg1;
            unaff_x24 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar7 = auVar26._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18 = 0x80088f8;
    uStack_a8 = 0x80088f8;
    iVar6 = sp_el0;
    iStack_b8 = *(iVar6 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar22 = *(iVar7 + 0x48);
    iVar6 = in_x3;
    uVar10 = in_x4;
    puStack_b0 = &stack0xffffffffffffffb0;
    iStack_a0 = unaff_x24;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar15 = in_x2;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar6 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar21 = trace_event_ignore_this_pid(iVar7), (uVar21 & 1) == 0))))
        goto code_r0x08008984;
    }
    else {
code_r0x08008984:
        puVar20 = *(auVar26._8_8_ + 8);
        pcVar4 = puVar20[0xe];
        if (pcVar4 == NULL) {
            pcVar19 = *puVar20;
            pcVar4 = "(null)";
            if (pcVar19 != NULL) {
                pcVar4 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar4);
        puVar15 = iVar3 + 1 + 0x28;
        iVar7 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar7);
        if (iVar7 != 0) {
            *(iVar7 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            puVar20 = *(auVar26._8_8_ + 8);
            pcVar4 = puVar20[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = *puVar20;
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar7 + 0x28,pcVar4);
            *(iVar7 + 0x10) = in_x2;
            *(iVar7 + 0x18) = in_x3;
            *(iVar7 + 0x20) = in_x4;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar13 = auVar26._8_8_;
    iVar8 = auVar26._0_8_;
    *extraout_x18_00 = sym.perf_trace_iommu_pgtable;
    pcStack_148 = sym.perf_trace_iommu_pgtable;
    iVar7 = sp_el0;
    iStack_158 = *(iVar7 + 0x5e0);
    iStack_160 = 0;
    uStack_164 = 0;
    pcVar4 = (*(iVar13 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar19 = **(iVar13 + 8);
        pcVar4 = "(null)";
        if (pcVar19 != NULL) {
            pcVar4 = pcVar19;
        }
    }
    puVar16 = puVar15;
    iVar18 = iVar6;
    uVar21 = uVar10;
    puStack_150 = &stack0xffffffffffffff50;
    uVar9 = strlen(pcVar4);
    iVar7 = tpidr_el1;
    piVar23 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar16 = &stack0xfffffffffffffe9c;
        uVar5 = (uVar9 + 0x34U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(uVar5,&stack0xfffffffffffffea0);
        uVar11 = _trace_event_reg;
        if (iVar7 != 0) {
            *(iStack_160 + 0xe8) = &stack0xfffffffffffffeb0;
            *(iStack_160 + 0xf8) = &stack0xfffffffffffffe90;
            *(iStack_160 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x8008a44;
            *(iStack_160 + 0x108) = 5;
            *(iVar7 + 8) = uVar9 * 0x10000 + 0x10028;
            pcVar4 = (*(iVar13 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(iVar13 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar7 + 0x28,pcVar4);
            puVar16 = uStack_164;
            uVar21 = 1;
            *(iVar7 + 0x10) = puVar15;
            *(iVar7 + 0x18) = iVar6;
            *(iVar7 + 0x20) = uVar10;
            iVar18 = iVar8;
            perf_trace_run_bpf_submit(iVar7,uVar5);
            unaff_x27 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_158) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar14 = auVar27._8_8_;
    iVar12 = auVar27._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_01 = 0x8008bf0;
    uStack_1a8 = 0x8008bf0;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    uVar24 = *(iVar12 + 0x48);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uVar22 = uVar24;
    iVar7 = iVar18;
    uVar11 = uVar21;
    puStack_1b0 = &stack0xfffffffffffffeb0;
    piStack_1a0 = piVar23;
    puStack_190 = puVar15;
    iStack_188 = iVar6;
    uStack_180 = uVar10;
    iStack_218 = iVar12;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar7 = 0;
            iStack_198 = iVar13;
            iStack_178 = iVar8;
            event_triggers_call(iVar12,0);
            auVar26._8_8_ = iStack_198;
            auVar26._0_8_ = iStack_178;
        }
        iStack_198 = auVar26._8_8_;
        iStack_178 = auVar26._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar10 = trace_event_ignore_this_pid(iVar12);
                auVar26._8_8_ = iStack_198;
                auVar26._0_8_ = iStack_178;
                if ((uVar10 & 1) != 0) goto code_r0x08008d04;
            }
            goto code_r0x08008c7c;
        }
    }
    else {
code_r0x08008c7c:
        iStack_198 = auVar26._8_8_;
        iStack_178 = auVar26._0_8_;
        pcVar4 = (*(iVar14 + 8))[0xe];
        if (pcVar4 == NULL) {
            pcVar19 = **(iVar14 + 8);
            pcVar4 = "(null)";
            if (pcVar19 != NULL) {
                pcVar4 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar22 = iVar3 + 1;
        uVar24 = uVar22;
        puVar15 = uVar22 + 0x28;
        iVar6 = trace_event_buffer_reserve(&stack0xfffffffffffffe18,iVar12);
        auVar26._8_8_ = iStack_198;
        auVar26._0_8_ = iStack_178;
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar22 * 0x10000 | 0x28;
            pcVar4 = (*(iVar14 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(iVar14 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x28,pcVar4);
            *(iVar6 + 0x10) = puVar16;
            *(iVar6 + 0x18) = iVar18;
            *(iVar6 + 0x20) = uVar21;
            trace_event_buffer_commit(&stack0xfffffffffffffe18);
            auVar26._8_8_ = iStack_198;
            auVar26._0_8_ = iStack_178;
            iStack_218 = iVar6;
        }
    }
code_r0x08008d04:
    iStack_198 = auVar26._8_8_;
    iStack_178 = auVar26._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar13 = auVar27._8_8_;
    iVar8 = auVar27._0_8_;
    *extraout_x18_02 = sym.perf_trace_iommu_map_pages;
    pcStack_248 = sym.perf_trace_iommu_map_pages;
    pcStack_230 = sym.perf_trace_iommu_pgtable;
    iVar6 = sp_el0;
    iStack_258 = *(iVar6 + 0x5e0);
    iStack_260 = 0;
    uStack_264 = 0;
    pcVar4 = (*(iVar13 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar19 = **(iVar13 + 8);
        pcVar4 = "(null)";
        if (pcVar19 != NULL) {
            pcVar4 = pcVar19;
        }
    }
    puVar17 = puVar15;
    iVar12 = iVar7;
    uVar10 = uVar11;
    puStack_250 = &stack0xfffffffffffffe50;
    uStack_240 = uVar9;
    iStack_238 = unaff_x27;
    uStack_228 = uVar5;
    uStack_220 = uVar24;
    iStack_210 = iVar14;
    puStack_208 = puVar16;
    iStack_200 = iVar18;
    uStack_1f8 = uVar21;
    uVar9 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar23 = iVar6 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar17 = &stack0xfffffffffffffd9c;
        uVar5 = (uVar9 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(uVar5,&stack0xfffffffffffffda0);
        uVar21 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_260 + 0xe8) = &stack0xfffffffffffffdb0;
            *(iStack_260 + 0xf8) = &stack0xfffffffffffffd90;
            *(iStack_260 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8008d3c;
            *(iStack_260 + 0x108) = 5;
            *(iVar6 + 8) = uVar9 * 0x10000 + 0x10028;
            pcVar4 = (*(iVar13 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(iVar13 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x28,pcVar4);
            puVar17 = uStack_264;
            uVar10 = 1;
            *(iVar6 + 0x10) = puVar15;
            *(iVar6 + 0x18) = iVar7;
            *(iVar6 + 0x20) = uVar11;
            iVar12 = iVar8;
            perf_trace_run_bpf_submit(iVar6,uVar5);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_258) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar14 = auVar26._8_8_;
    iVar18 = auVar26._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_03 = 0x8008ee8;
    uStack_2a8 = 0x8008ee8;
    iVar6 = sp_el0;
    uVar21 = uVar10 & 0xffffffff;
    iStack_2b8 = *(iVar6 + 0x5e0);
    uVar25 = *(iVar18 + 0x48);
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uVar22 = uVar25;
    iVar6 = iVar12;
    uVar24 = uVar10;
    puStack_2b0 = &stack0xfffffffffffffdb0;
    piStack_2a0 = piVar23;
    puStack_290 = puVar15;
    iStack_288 = iVar7;
    uStack_280 = uVar11;
    iStack_318 = iVar18;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar6 = 0;
            iStack_298 = iVar13;
            iStack_278 = iVar8;
            event_triggers_call(iVar18,0);
            auVar27._8_8_ = iStack_298;
            auVar27._0_8_ = iStack_278;
        }
        iStack_298 = auVar27._8_8_;
        iStack_278 = auVar27._0_8_;
        if ((uVar22 >> 6 & 1) == 0) {
            if ((uVar22 >> 9 & 1) != 0) {
                uVar11 = trace_event_ignore_this_pid(iVar18);
                auVar27._8_8_ = iStack_298;
                auVar27._0_8_ = iStack_278;
                if ((uVar11 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_298 = auVar27._8_8_;
        iStack_278 = auVar27._0_8_;
        pcVar4 = (*(iVar14 + 8))[0xe];
        if (pcVar4 == NULL) {
            pcVar19 = **(iVar14 + 8);
            pcVar4 = "(null)";
            if (pcVar19 != NULL) {
                pcVar4 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar22 = iVar3 + 1;
        uVar25 = uVar22;
        puVar15 = uVar22 + 0x20;
        iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffd18,iVar18);
        auVar27._8_8_ = iStack_298;
        auVar27._0_8_ = iStack_278;
        if (iVar7 != 0) {
            *(iVar7 + 8) = uVar22 * 0x10000 | 0x20;
            pcVar4 = (*(iVar14 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = **(iVar14 + 8);
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(iVar7 + 0x20,pcVar4);
            *(iVar7 + 0x10) = puVar17;
            puVar17 = NULL;
            uVar22 = uVar10;
            while (uVar22 != 0) {
                puVar17 = puVar17 + *(iVar12 + 0xc);
                iVar12 = sg_next(iVar12);
                uVar22 = uVar21 - 1;
                uVar21 = uVar22;
            }
            *(iVar7 + 0x18) = puVar17;
            trace_event_buffer_commit(&stack0xfffffffffffffd18);
            auVar27._8_8_ = iStack_298;
            auVar27._0_8_ = iStack_278;
            iStack_318 = iVar7;
        }
    }
code_r0x08009020:
    iStack_298 = auVar27._8_8_;
    iStack_278 = auVar27._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    *extraout_x18_04 = sym.perf_trace_map_sg;
    pcStack_348 = sym.perf_trace_map_sg;
    pcStack_330 = sym.perf_trace_iommu_map_pages;
    iVar7 = sp_el0;
    iStack_358 = *(iVar7 + 0x5e0);
    uVar10 = uVar24 & 0xffffffff;
    puVar20 = *(auVar26._8_8_ + 8);
    iStack_360 = 0;
    uStack_364 = 0;
    pcVar4 = puVar20[0xe];
    if (pcVar4 == NULL) {
        pcVar19 = *puVar20;
        pcVar4 = "(null)";
        if (pcVar19 != NULL) {
            pcVar4 = pcVar19;
        }
    }
    puStack_350 = &stack0xfffffffffffffd50;
    uStack_340 = uVar9;
    iStack_338 = unaff_x27;
    uStack_328 = uVar5;
    uStack_320 = uVar25;
    iStack_310 = iVar14;
    puStack_308 = puVar17;
    iStack_300 = iVar12;
    uStack_2f8 = uVar21;
    iVar3 = strlen(pcVar4);
    iVar7 = tpidr_el1;
    piVar23 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar23 != 0)) {
        uVar25 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(uVar25,&stack0xfffffffffffffca0,&stack0xfffffffffffffc9c);
        uVar21 = _trace_event_reg;
        if (uVar11 != 0) {
            *(iStack_360 + 0xe8) = &stack0xfffffffffffffcb0;
            *(iStack_360 + 0xf8) = &stack0xfffffffffffffc90;
            *(iStack_360 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8009058;
            *(iStack_360 + 0x108) = 5;
            *(uVar11 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar20 = *(auVar26._8_8_ + 8);
            pcVar4 = puVar20[0xe];
            if (pcVar4 == NULL) {
                pcVar19 = *puVar20;
                pcVar4 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar4 = pcVar19;
                }
            }
            strcpy(uVar11 + 0x20,pcVar4);
            *(uVar11 + 0x10) = puVar15;
            puVar15 = NULL;
            uVar22 = uVar24;
            while (uVar22 != 0) {
                puVar15 = puVar15 + *(iVar6 + 0xc);
                iVar6 = sg_next(iVar6);
                uVar22 = uVar10 - 1;
                uVar10 = uVar22;
            }
            *(uVar11 + 0x18) = puVar15;
            perf_trace_run_bpf_submit(uVar11,uVar25,uStack_364,iVar8,1,iStack_360,piVar23,0);
            uVar5 = uVar11;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_358) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar20 = auVar26._8_8_;
    iVar13 = auVar26._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18_05 = 0x8009228;
    uStack_398 = 0x8009228;
    iVar7 = sp_el0;
    iStack_3a8 = *(iVar7 + 0x5e0);
    uVar21 = *(iVar13 + 0x48);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uVar22 = uVar21;
    puStack_3a0 = &stack0xfffffffffffffcb0;
    iStack_390 = iVar6;
    uStack_380 = uVar10;
    iStack_378 = iVar8;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            event_triggers_call(iVar13,0,0,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar13), (uVar10 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar4 = puVar20[0xe];
        if (puVar20[0xe] == NULL) {
            pcVar4 = "(null)";
            if (*puVar20 != NULL) {
                pcVar4 = *puVar20;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar22 = iVar3 + 1;
        uVar21 = uVar22;
        iVar6 = trace_event_buffer_reserve(&stack0xfffffffffffffc28,iVar13,uVar22 + 0xc);
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar22 * 0x10000 | 0xc;
            pcVar4 = puVar20[0xe];
            if (puVar20[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar20 != NULL) {
                    pcVar4 = *puVar20;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            trace_event_buffer_commit(&stack0xfffffffffffffc28);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar28 = __stack_chk_fail();
    puVar20 = auVar28._8_8_;
    iVar7 = auVar28._0_8_;
    *extraout_x18_06 = sym.perf_trace_tlbsync_timeout;
    pcStack_428 = sym.perf_trace_tlbsync_timeout;
    iVar6 = sp_el0;
    iStack_438 = *(iVar6 + 0x5e0);
    iStack_440 = 0;
    uStack_444 = 0;
    pcVar4 = puVar20[0xe];
    if (puVar20[0xe] == NULL) {
        pcVar4 = "(null)";
        if (*puVar20 != NULL) {
            pcVar4 = *puVar20;
        }
    }
    puStack_430 = &stack0xfffffffffffffc60;
    uStack_420 = uVar5;
    uStack_410 = uVar25;
    puStack_408 = puVar15;
    piStack_400 = piVar23;
    uStack_3f8 = uVar21;
    auStack_3f0 = auVar26;
    iVar3 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar23 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(piVar23,&stack0xfffffffffffffbc0,&stack0xfffffffffffffbbc);
        uVar5 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_440 + 0xe8) = &stack0xfffffffffffffbd0;
            *(iStack_440 + 0xf8) = &stack0xfffffffffffffbb0;
            *(iStack_440 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x800934c;
            *(iStack_440 + 0x108) = 5;
            *(iVar6 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar4 = puVar20[0xe];
            if (puVar20[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar20 != NULL) {
                    pcVar4 = *puVar20;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            perf_trace_run_bpf_submit(iVar6,piVar23,uStack_444,iVar7,1,iStack_440,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_438) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18_07 = 0x80094d4;
    uStack_478 = 0x80094d4;
    iVar6 = sp_el0;
    iStack_488 = *(iVar6 + 0x5e0);
    uVar9 = *(iVar8 + 0x48);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uVar22 = uVar9;
    puStack_480 = &stack0xfffffffffffffbd0;
    piStack_470 = piVar1;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            puStack_460 = puVar20;
            iStack_458 = iVar7;
            event_triggers_call(iVar8,0,0,0);
            auVar28._8_8_ = puStack_460;
            auVar28._0_8_ = iStack_458;
        }
        puStack_460 = auVar28._8_8_;
        iStack_458 = auVar28._0_8_;
        if ((uVar22 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar22 >> 9 & 1) != 0) {
            uVar5 = trace_event_ignore_this_pid(iVar8);
            auVar28._8_8_ = puStack_460;
            auVar28._0_8_ = iStack_458;
            if ((uVar5 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_460 = auVar28._8_8_;
    iStack_458 = auVar28._0_8_;
    iVar6 = trace_event_buffer_reserve(&stack0xfffffffffffffb48,iVar8,0x10);
    auVar28._8_8_ = puStack_460;
    auVar28._0_8_ = iStack_458;
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar26._8_8_;
        trace_event_buffer_commit(&stack0xfffffffffffffb48);
        auVar28._8_8_ = puStack_460;
        auVar28._0_8_ = iStack_458;
    }
code_r0x08009570:
    puStack_460 = auVar28._8_8_;
    iStack_458 = auVar28._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_488) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._0_8_;
    *extraout_x18_08 = sym.perf_trace_smmu_init;
    pcStack_4e8 = sym.perf_trace_smmu_init;
    iVar6 = sp_el0;
    iStack_4f8 = *(iVar6 + 0x5e0);
    iStack_500 = 0;
    uStack_504 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar7 + 0x78);
    puStack_4f0 = &stack0xfffffffffffffb80;
    piStack_4e0 = piVar23;
    uStack_4d8 = uVar9;
    auStack_4d0 = auVar26;
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar6 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffb00,&stack0xfffffffffffffafc);
        uVar5 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_500 + 0xe8) = &stack0xfffffffffffffb10;
            *(iStack_500 + 0xf8) = &stack0xfffffffffffffaf0;
            *(iStack_500 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x80095a4;
            *(iStack_500 + 0x108) = 5;
            *(iVar6 + 8) = auVar27._8_8_;
            perf_trace_run_bpf_submit(iVar6,0x14,uStack_504,iVar7,1,iStack_500,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_4f8) {
        __stack_chk_fail();
        uVar9 = tpidr_el2;
        *extraout_x18_09 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_iommu_pgtable @ 0x08008904 (size 320) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08008b44)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_iommu_pgtable(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    int64_t iVar18;
    uint64_t in_x4;
    char *pcVar19;
    ulong *puVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    uint32_t uVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar25 [16];
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auStack_4a0 [12];
    uint uStack_494;
    int64_t iStack_490;
    int64_t iStack_488;
    ulong ***pppuStack_480;
    code *pcStack_478;
    int64_t *piStack_470;
    ulong uStack_468;
    uchar auStack_460 [16];
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    int64_t iStack_418;
    ulong ***pppuStack_410;
    ulong uStack_408;
    int64_t *piStack_400;
    ulong *puStack_3f0;
    int64_t iStack_3e8;
    uchar auStack_3e0 [12];
    uint uStack_3d4;
    int64_t iStack_3d0;
    int64_t iStack_3c8;
    ulong ***pppuStack_3c0;
    code *pcStack_3b8;
    uint64_t uStack_3b0;
    uint64_t uStack_3a0;
    uint32_t *puStack_398;
    int64_t *piStack_390;
    uint64_t uStack_388;
    uchar auStack_380 [16];
    ulong uStack_368;
    ulong uStack_360;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    int64_t iStack_338;
    ulong ***pppuStack_330;
    ulong uStack_328;
    int64_t iStack_320;
    uint64_t uStack_310;
    int64_t iStack_308;
    uchar auStack_300 [12];
    uint uStack_2f4;
    int64_t iStack_2f0;
    int64_t iStack_2e8;
    ulong ***pppuStack_2e0;
    code *pcStack_2d8;
    ulong uStack_2d0;
    int64_t iStack_2c8;
    code *pcStack_2c0;
    uint64_t uStack_2b8;
    uint64_t uStack_2b0;
    int64_t iStack_2a8;
    int64_t iStack_2a0;
    uint32_t *puStack_298;
    int64_t iStack_290;
    uint64_t uStack_288;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    ulong ***pppuStack_240;
    ulong uStack_238;
    int64_t *piStack_230;
    int64_t iStack_228;
    uint32_t *puStack_220;
    int64_t iStack_218;
    uint64_t uStack_210;
    int64_t iStack_208;
    uchar auStack_200 [12];
    uint32_t uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    uchar ***pppuStack_1e0;
    code *pcStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    uint64_t uStack_1b0;
    int64_t iStack_1a8;
    int64_t iStack_1a0;
    uint32_t *puStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    int64_t iStack_128;
    uint32_t *puStack_120;
    int64_t iStack_118;
    int64_t iStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iVar7;
    int64_t iVar12;
    int64_t iVar13;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_48 = *(iVar17 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar21 = *(arg1 + 0x48);
    iVar17 = arg4;
    uVar10 = in_x4;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = arg3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar17 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(arg1), (uVar4 & 1) == 0))))
        goto code_r0x08008984;
    }
    else {
code_r0x08008984:
        pcVar5 = (*(arg2 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar19 = **(arg2 + 8);
            pcVar5 = "(null)";
            if (pcVar19 != NULL) {
                pcVar5 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar5);
        puVar14 = iVar3 + 1 + 0x28;
        iVar6 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            pcVar5 = (*(arg2 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(arg2 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            *(iVar6 + 0x10) = arg3;
            *(iVar6 + 0x18) = arg4;
            *(iVar6 + 0x20) = in_x4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar12 = auVar25._8_8_;
    iVar7 = auVar25._0_8_;
    *extraout_x18 = sym.perf_trace_iommu_pgtable;
    pcStack_d8 = sym.perf_trace_iommu_pgtable;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    pcVar5 = (*(iVar12 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar19 = **(iVar12 + 8);
        pcVar5 = "(null)";
        if (pcVar19 != NULL) {
            pcVar5 = pcVar19;
        }
    }
    puVar15 = puVar14;
    iVar18 = iVar17;
    uVar4 = uVar10;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar8 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar15 = &uStack_f4;
        unaff_x25 = (uVar8 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x25,&iStack_f0);
        uVar23 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar23 & 0x3f)) & 0x8008a44;
            *(iStack_f0 + 0x108) = 5;
            *(iVar6 + 8) = uVar8 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar12 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(iVar12 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            puVar15 = uStack_f4;
            uVar4 = 1;
            *(iVar6 + 0x10) = puVar14;
            *(iVar6 + 0x18) = iVar17;
            *(iVar6 + 0x20) = uVar10;
            iVar18 = iVar7;
            perf_trace_run_bpf_submit(iVar6,unaff_x25);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar13 = auVar26._8_8_;
    iVar11 = auVar26._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_00 = 0x8008bf0;
    uStack_138 = 0x8008bf0;
    iVar6 = sp_el0;
    iStack_148 = *(iVar6 + 0x5e0);
    uVar23 = *(iVar11 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar21 = uVar23;
    iVar6 = iVar18;
    uVar10 = uVar4;
    ppuStack_140 = &puStack_e0;
    piStack_130 = piVar22;
    puStack_120 = puVar14;
    iStack_118 = iVar17;
    iStack_1a8 = iVar11;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar6 = 0;
            iStack_128 = iVar12;
            iStack_108 = iVar7;
            event_triggers_call(iVar11,0);
            auVar25._8_8_ = iStack_128;
            auVar25._0_8_ = iStack_108;
        }
        iStack_128 = auVar25._8_8_;
        iStack_108 = auVar25._0_8_;
        if ((uVar21 >> 6 & 1) == 0) {
            if ((uVar21 >> 9 & 1) != 0) {
                uVar9 = trace_event_ignore_this_pid(iVar11);
                auVar25._8_8_ = iStack_128;
                auVar25._0_8_ = iStack_108;
                if ((uVar9 & 1) != 0) goto code_r0x08008d04;
            }
            goto code_r0x08008c7c;
        }
    }
    else {
code_r0x08008c7c:
        iStack_128 = auVar25._8_8_;
        iStack_108 = auVar25._0_8_;
        pcVar5 = (*(iVar13 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar19 = **(iVar13 + 8);
            pcVar5 = "(null)";
            if (pcVar19 != NULL) {
                pcVar5 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar21 = iVar3 + 1;
        uVar23 = uVar21;
        puVar14 = uVar21 + 0x28;
        iVar17 = trace_event_buffer_reserve(&uStack_178,iVar11);
        auVar25._8_8_ = iStack_128;
        auVar25._0_8_ = iStack_108;
        if (iVar17 != 0) {
            *(iVar17 + 8) = uVar21 * 0x10000 | 0x28;
            pcVar5 = (*(iVar13 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(iVar13 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar17 + 0x28,pcVar5);
            *(iVar17 + 0x10) = puVar15;
            *(iVar17 + 0x18) = iVar18;
            *(iVar17 + 0x20) = uVar4;
            trace_event_buffer_commit(&uStack_178);
            auVar25._8_8_ = iStack_128;
            auVar25._0_8_ = iStack_108;
            iStack_1a8 = iVar17;
        }
    }
code_r0x08008d04:
    iStack_128 = auVar25._8_8_;
    iStack_108 = auVar25._0_8_;
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_148) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar12 = auVar26._8_8_;
    iVar7 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_iommu_map_pages;
    pcStack_1d8 = sym.perf_trace_iommu_map_pages;
    pcStack_1c0 = sym.perf_trace_iommu_pgtable;
    iVar17 = sp_el0;
    iStack_1e8 = *(iVar17 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    pcVar5 = (*(iVar12 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar19 = **(iVar12 + 8);
        pcVar5 = "(null)";
        if (pcVar19 != NULL) {
            pcVar5 = pcVar19;
        }
    }
    puVar16 = puVar14;
    iVar11 = iVar6;
    uVar9 = uVar10;
    pppuStack_1e0 = &ppuStack_140;
    uStack_1d0 = uVar8;
    iStack_1c8 = unaff_x27;
    uStack_1b8 = unaff_x25;
    uStack_1b0 = uVar23;
    iStack_1a0 = iVar13;
    puStack_198 = puVar15;
    iStack_190 = iVar18;
    uStack_188 = uVar4;
    uVar8 = strlen(pcVar5);
    iVar17 = tpidr_el1;
    piVar22 = iVar17 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar16 = &uStack_1f4;
        unaff_x25 = (uVar8 + 0x34U & 0xfffffff8) - 4;
        iVar17 = perf_trace_buf_alloc(unaff_x25,&iStack_1f0);
        uVar4 = _trace_event_reg;
        if (iVar17 != 0) {
            *(iStack_1f0 + 0xe8) = &pppuStack_1e0;
            *(iStack_1f0 + 0xf8) = auStack_200;
            *(iStack_1f0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x8008d3c;
            *(iStack_1f0 + 0x108) = 5;
            *(iVar17 + 8) = uVar8 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar12 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(iVar12 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar17 + 0x28,pcVar5);
            puVar16 = uStack_1f4;
            uVar9 = 1;
            *(iVar17 + 0x10) = puVar14;
            *(iVar17 + 0x18) = iVar6;
            *(iVar17 + 0x20) = uVar10;
            iVar11 = iVar7;
            perf_trace_run_bpf_submit(iVar17,unaff_x25);
            unaff_x27 = iVar17;
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar13 = auVar25._8_8_;
    iVar18 = auVar25._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_02 = 0x8008ee8;
    uStack_238 = 0x8008ee8;
    iVar17 = sp_el0;
    uVar4 = uVar9 & 0xffffffff;
    iStack_248 = *(iVar17 + 0x5e0);
    uVar24 = *(iVar18 + 0x48);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uVar21 = uVar24;
    iVar17 = iVar11;
    uVar23 = uVar9;
    pppuStack_240 = &pppuStack_1e0;
    piStack_230 = piVar22;
    puStack_220 = puVar14;
    iStack_218 = iVar6;
    uStack_210 = uVar10;
    iStack_2a8 = iVar18;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = puVar16;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar17 = 0;
            iStack_228 = iVar12;
            iStack_208 = iVar7;
            event_triggers_call(iVar18,0);
            auVar26._8_8_ = iStack_228;
            auVar26._0_8_ = iStack_208;
        }
        iStack_228 = auVar26._8_8_;
        iStack_208 = auVar26._0_8_;
        if ((uVar21 >> 6 & 1) == 0) {
            if ((uVar21 >> 9 & 1) != 0) {
                uVar10 = trace_event_ignore_this_pid(iVar18);
                auVar26._8_8_ = iStack_228;
                auVar26._0_8_ = iStack_208;
                if ((uVar10 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_228 = auVar26._8_8_;
        iStack_208 = auVar26._0_8_;
        pcVar5 = (*(iVar13 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar19 = **(iVar13 + 8);
            pcVar5 = "(null)";
            if (pcVar19 != NULL) {
                pcVar5 = pcVar19;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar21 = iVar3 + 1;
        uVar24 = uVar21;
        puVar14 = uVar21 + 0x20;
        iVar6 = trace_event_buffer_reserve(&uStack_278,iVar18);
        auVar26._8_8_ = iStack_228;
        auVar26._0_8_ = iStack_208;
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar21 * 0x10000 | 0x20;
            pcVar5 = (*(iVar13 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = **(iVar13 + 8);
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(iVar6 + 0x20,pcVar5);
            *(iVar6 + 0x10) = puVar16;
            puVar16 = NULL;
            uVar21 = uVar9;
            while (uVar21 != 0) {
                puVar16 = puVar16 + *(iVar11 + 0xc);
                iVar11 = sg_next(iVar11);
                uVar21 = uVar4 - 1;
                uVar4 = uVar21;
            }
            *(iVar6 + 0x18) = puVar16;
            trace_event_buffer_commit(&uStack_278);
            auVar26._8_8_ = iStack_228;
            auVar26._0_8_ = iStack_208;
            iStack_2a8 = iVar6;
        }
    }
code_r0x08009020:
    iStack_228 = auVar26._8_8_;
    iStack_208 = auVar26._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_248) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar7 = auVar25._0_8_;
    *extraout_x18_03 = sym.perf_trace_map_sg;
    pcStack_2d8 = sym.perf_trace_map_sg;
    pcStack_2c0 = sym.perf_trace_iommu_map_pages;
    iVar6 = sp_el0;
    iStack_2e8 = *(iVar6 + 0x5e0);
    uVar10 = uVar23 & 0xffffffff;
    puVar20 = *(auVar25._8_8_ + 8);
    iStack_2f0 = 0;
    uStack_2f4 = 0;
    pcVar5 = puVar20[0xe];
    if (pcVar5 == NULL) {
        pcVar19 = *puVar20;
        pcVar5 = "(null)";
        if (pcVar19 != NULL) {
            pcVar5 = pcVar19;
        }
    }
    pppuStack_2e0 = &pppuStack_240;
    uStack_2d0 = uVar8;
    iStack_2c8 = unaff_x27;
    uStack_2b8 = unaff_x25;
    uStack_2b0 = uVar24;
    iStack_2a0 = iVar13;
    puStack_298 = puVar16;
    iStack_290 = iVar11;
    uStack_288 = uVar4;
    iVar3 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        uVar24 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar9 = perf_trace_buf_alloc(uVar24,&iStack_2f0,&uStack_2f4);
        uVar4 = _trace_event_reg;
        if (uVar9 != 0) {
            *(iStack_2f0 + 0xe8) = &pppuStack_2e0;
            *(iStack_2f0 + 0xf8) = auStack_300;
            *(iStack_2f0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x8009058;
            *(iStack_2f0 + 0x108) = 5;
            *(uVar9 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar20 = *(auVar25._8_8_ + 8);
            pcVar5 = puVar20[0xe];
            if (pcVar5 == NULL) {
                pcVar19 = *puVar20;
                pcVar5 = "(null)";
                if (pcVar19 != NULL) {
                    pcVar5 = pcVar19;
                }
            }
            strcpy(uVar9 + 0x20,pcVar5);
            *(uVar9 + 0x10) = puVar14;
            puVar14 = NULL;
            uVar21 = uVar23;
            while (uVar21 != 0) {
                puVar14 = puVar14 + *(iVar17 + 0xc);
                iVar17 = sg_next(iVar17);
                uVar21 = uVar10 - 1;
                uVar10 = uVar21;
            }
            *(uVar9 + 0x18) = puVar14;
            perf_trace_run_bpf_submit(uVar9,uVar24,uStack_2f4,iVar7,1,iStack_2f0,piVar22,0);
            unaff_x25 = uVar9;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2e8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar20 = auVar25._8_8_;
    iVar12 = auVar25._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x8009228;
    uStack_328 = 0x8009228;
    iVar6 = sp_el0;
    iStack_338 = *(iVar6 + 0x5e0);
    uVar4 = *(iVar12 + 0x48);
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uVar21 = uVar4;
    pppuStack_330 = &pppuStack_2e0;
    iStack_320 = iVar17;
    uStack_310 = uVar10;
    iStack_308 = iVar7;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            event_triggers_call(iVar12,0,0,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar12), (uVar10 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar5 = puVar20[0xe];
        if (puVar20[0xe] == NULL) {
            pcVar5 = "(null)";
            if (*puVar20 != NULL) {
                pcVar5 = *puVar20;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar21 = iVar3 + 1;
        uVar4 = uVar21;
        iVar17 = trace_event_buffer_reserve(&uStack_368,iVar12,uVar21 + 0xc);
        if (iVar17 != 0) {
            *(iVar17 + 8) = uVar21 * 0x10000 | 0xc;
            pcVar5 = puVar20[0xe];
            if (puVar20[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar20 != NULL) {
                    pcVar5 = *puVar20;
                }
            }
            strcpy(iVar17 + 0xc,pcVar5);
            trace_event_buffer_commit(&uStack_368);
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_338) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar20 = auVar27._8_8_;
    iVar6 = auVar27._0_8_;
    *extraout_x18_05 = sym.perf_trace_tlbsync_timeout;
    pcStack_3b8 = sym.perf_trace_tlbsync_timeout;
    iVar17 = sp_el0;
    iStack_3c8 = *(iVar17 + 0x5e0);
    iStack_3d0 = 0;
    uStack_3d4 = 0;
    pcVar5 = puVar20[0xe];
    if (puVar20[0xe] == NULL) {
        pcVar5 = "(null)";
        if (*puVar20 != NULL) {
            pcVar5 = *puVar20;
        }
    }
    pppuStack_3c0 = &pppuStack_330;
    uStack_3b0 = unaff_x25;
    uStack_3a0 = uVar24;
    puStack_398 = puVar14;
    piStack_390 = piVar22;
    uStack_388 = uVar4;
    auStack_380 = auVar25;
    iVar3 = strlen(pcVar5);
    iVar17 = tpidr_el1;
    piVar1 = iVar17 + *(iVar6 + 0x78);
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar22 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar17 = perf_trace_buf_alloc(piVar22,&iStack_3d0,&uStack_3d4);
        uVar10 = _trace_event_reg;
        if (iVar17 != 0) {
            *(iStack_3d0 + 0xe8) = &pppuStack_3c0;
            *(iStack_3d0 + 0xf8) = auStack_3e0;
            *(iStack_3d0 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800934c;
            *(iStack_3d0 + 0x108) = 5;
            *(iVar17 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar5 = puVar20[0xe];
            if (puVar20[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar20 != NULL) {
                    pcVar5 = *puVar20;
                }
            }
            strcpy(iVar17 + 0xc,pcVar5);
            perf_trace_run_bpf_submit(iVar17,piVar22,uStack_3d4,iVar6,1,iStack_3d0,piVar1,0);
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_3c8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar7 = auVar25._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_06 = 0x80094d4;
    uStack_408 = 0x80094d4;
    iVar17 = sp_el0;
    iStack_418 = *(iVar17 + 0x5e0);
    uVar8 = *(iVar7 + 0x48);
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uVar21 = uVar8;
    pppuStack_410 = &pppuStack_3c0;
    piStack_400 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            puStack_3f0 = puVar20;
            iStack_3e8 = iVar6;
            event_triggers_call(iVar7,0,0,0);
            auVar27._8_8_ = puStack_3f0;
            auVar27._0_8_ = iStack_3e8;
        }
        puStack_3f0 = auVar27._8_8_;
        iStack_3e8 = auVar27._0_8_;
        if ((uVar21 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar21 >> 9 & 1) != 0) {
            uVar10 = trace_event_ignore_this_pid(iVar7);
            auVar27._8_8_ = puStack_3f0;
            auVar27._0_8_ = iStack_3e8;
            if ((uVar10 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_3f0 = auVar27._8_8_;
    iStack_3e8 = auVar27._0_8_;
    iVar17 = trace_event_buffer_reserve(&uStack_448,iVar7,0x10);
    auVar27._8_8_ = puStack_3f0;
    auVar27._0_8_ = iStack_3e8;
    if (iVar17 != 0) {
        *(iVar17 + 8) = auVar25._8_8_;
        trace_event_buffer_commit(&uStack_448);
        auVar27._8_8_ = puStack_3f0;
        auVar27._0_8_ = iStack_3e8;
    }
code_r0x08009570:
    puStack_3f0 = auVar27._8_8_;
    iStack_3e8 = auVar27._0_8_;
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_418) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar6 = auVar26._0_8_;
    *extraout_x18_07 = sym.perf_trace_smmu_init;
    pcStack_478 = sym.perf_trace_smmu_init;
    iVar17 = sp_el0;
    iStack_488 = *(iVar17 + 0x5e0);
    iStack_490 = 0;
    uStack_494 = 0;
    iVar17 = tpidr_el1;
    piVar1 = iVar17 + *(iVar6 + 0x78);
    pppuStack_480 = &pppuStack_410;
    piStack_470 = piVar22;
    uStack_468 = uVar8;
    auStack_460 = auVar25;
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar17 = perf_trace_buf_alloc(0x14,&iStack_490,&uStack_494);
        uVar10 = _trace_event_reg;
        if (iVar17 != 0) {
            *(iStack_490 + 0xe8) = &pppuStack_480;
            *(iStack_490 + 0xf8) = auStack_4a0;
            *(iStack_490 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x80095a4;
            *(iStack_490 + 0x108) = 5;
            *(iVar17 + 8) = auVar26._8_8_;
            perf_trace_run_bpf_submit(iVar17,0x14,uStack_494,iVar6,1,iStack_490,piVar1,0);
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) != iStack_488) {
        __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_08 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_iommu_pgtable @ 0x08008a44 (size 440) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_iommu_pgtable(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    char *pcVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar11;
    int64_t iVar12;
    uchar *puVar14;
    uchar *puVar15;
    uint64_t in_x4;
    uint64_t uVar16;
    uint64_t uVar17;
    char *pcVar18;
    ulong *puVar19;
    uint64_t uVar20;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint32_t uVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    uchar auStack_420 [12];
    uint uStack_414;
    int64_t iStack_410;
    int64_t iStack_408;
    uchar *puStack_400;
    code *pcStack_3f8;
    int64_t *piStack_3f0;
    ulong uStack_3e8;
    uchar auStack_3e0 [16];
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    int64_t iStack_398;
    uchar *puStack_390;
    ulong uStack_388;
    int64_t *piStack_380;
    ulong *puStack_370;
    int64_t iStack_368;
    uchar auStack_360 [12];
    uint uStack_354;
    int64_t iStack_350;
    int64_t iStack_348;
    uchar *puStack_340;
    code *pcStack_338;
    uint64_t uStack_330;
    uint64_t uStack_320;
    uchar *puStack_318;
    int64_t *piStack_310;
    uint64_t uStack_308;
    uchar auStack_300 [16];
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    ulong uStack_2a8;
    int64_t iStack_2a0;
    uint64_t uStack_290;
    int64_t iStack_288;
    uchar auStack_280 [12];
    uint uStack_274;
    int64_t iStack_270;
    int64_t iStack_268;
    uchar *puStack_260;
    code *pcStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    code *pcStack_240;
    uint64_t uStack_238;
    uint64_t uStack_230;
    int64_t iStack_228;
    int64_t iStack_220;
    uchar *puStack_218;
    int64_t iStack_210;
    uint64_t uStack_208;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    uchar *puStack_1c0;
    ulong uStack_1b8;
    int64_t *piStack_1b0;
    int64_t iStack_1a8;
    uchar *puStack_1a0;
    int64_t iStack_198;
    uint64_t uStack_190;
    int64_t iStack_188;
    uchar auStack_180 [12];
    uint32_t uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar *puStack_160;
    code *pcStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    int64_t *piStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iVar10;
    int64_t iVar13;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    pcVar4 = (*(arg2 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar18 = **(arg2 + 8);
        pcVar4 = "(null)";
        if (pcVar18 != NULL) {
            pcVar4 = pcVar18;
        }
    }
    puVar14 = arg3;
    iVar9 = arg4;
    uVar16 = in_x4;
    uVar5 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar14 = &stack0xffffffffffffff8c;
        unaff_x25 = (uVar5 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x25,&stack0xffffffffffffff90);
        uVar20 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar20 = -1L << (uVar20 & 0x3f);
            uVar16 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar16 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar16;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x10028;
            pcVar4 = (*(arg2 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = **(arg2 + 8);
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(iVar6 + 0x28,pcVar4);
            puVar14 = uStack_74;
            uVar16 = 1;
            *(iVar6 + 0x10) = arg3;
            *(iVar6 + 0x18) = arg4;
            *(iVar6 + 0x20) = in_x4;
            iVar9 = arg1;
            perf_trace_run_bpf_submit(iVar6,unaff_x25);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar8 = auVar24._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8008bf0;
    uStack_b8 = 0x8008bf0;
    iVar6 = sp_el0;
    iStack_c8 = *(iVar6 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar21 = *(iVar8 + 0x48);
    iVar6 = iVar9;
    uVar20 = uVar16;
    puStack_c0 = &stack0xffffffffffffffa0;
    piStack_b0 = piVar22;
    iStack_a8 = arg2;
    iStack_a0 = arg3;
    iStack_98 = arg4;
    iStack_88 = arg1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar15 = puVar14;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar6 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(iVar8), (uVar7 & 1) == 0))))
        goto code_r0x08008c7c;
    }
    else {
code_r0x08008c7c:
        puVar19 = *(auVar24._8_8_ + 8);
        pcVar4 = puVar19[0xe];
        if (pcVar4 == NULL) {
            pcVar18 = *puVar19;
            pcVar4 = "(null)";
            if (pcVar18 != NULL) {
                pcVar4 = pcVar18;
            }
        }
        iVar3 = strlen(pcVar4);
        puVar15 = iVar3 + 1 + 0x28;
        iVar8 = trace_event_buffer_reserve(&stack0xffffffffffffff08,iVar8);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            puVar19 = *(auVar24._8_8_ + 8);
            pcVar4 = puVar19[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = *puVar19;
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(iVar8 + 0x28,pcVar4);
            *(iVar8 + 0x10) = puVar14;
            *(iVar8 + 0x18) = iVar9;
            *(iVar8 + 0x20) = uVar16;
            trace_event_buffer_commit(&stack0xffffffffffffff08);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar12 = auVar24._8_8_;
    iVar8 = auVar24._0_8_;
    *extraout_x18_00 = sym.perf_trace_iommu_map_pages;
    pcStack_158 = sym.perf_trace_iommu_map_pages;
    iVar9 = sp_el0;
    iStack_168 = *(iVar9 + 0x5e0);
    iStack_170 = 0;
    uStack_174 = 0;
    pcVar4 = (*(iVar12 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar18 = **(iVar12 + 8);
        pcVar4 = "(null)";
        if (pcVar18 != NULL) {
            pcVar4 = pcVar18;
        }
    }
    puVar14 = puVar15;
    iVar11 = iVar6;
    uVar16 = uVar20;
    puStack_160 = &stack0xffffffffffffff40;
    uStack_150 = uVar5;
    iStack_148 = unaff_x27;
    uVar5 = strlen(pcVar4);
    iVar9 = tpidr_el1;
    piVar22 = iVar9 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar14 = &stack0xfffffffffffffe8c;
        unaff_x25 = (uVar5 + 0x34U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(unaff_x25,&stack0xfffffffffffffe90);
        uVar7 = _trace_event_reg;
        if (iVar9 != 0) {
            *(iStack_170 + 0xe8) = &stack0xfffffffffffffea0;
            *(iStack_170 + 0xf8) = &stack0xfffffffffffffe80;
            *(iStack_170 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8008d3c;
            *(iStack_170 + 0x108) = 5;
            *(iVar9 + 8) = uVar5 * 0x10000 + 0x10028;
            pcVar4 = (*(iVar12 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = **(iVar12 + 8);
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(iVar9 + 0x28,pcVar4);
            puVar14 = uStack_174;
            uVar16 = 1;
            *(iVar9 + 0x10) = puVar15;
            *(iVar9 + 0x18) = iVar6;
            *(iVar9 + 0x20) = uVar20;
            iVar11 = iVar8;
            perf_trace_run_bpf_submit(iVar9,unaff_x25);
            unaff_x27 = iVar9;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_168) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar13 = auVar25._8_8_;
    iVar10 = auVar25._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_01 = 0x8008ee8;
    uStack_1b8 = 0x8008ee8;
    iVar9 = sp_el0;
    uVar7 = uVar16 & 0xffffffff;
    iStack_1c8 = *(iVar9 + 0x5e0);
    uVar23 = *(iVar10 + 0x48);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uVar21 = uVar23;
    iVar9 = iVar11;
    uVar17 = uVar16;
    puStack_1c0 = &stack0xfffffffffffffea0;
    piStack_1b0 = piVar22;
    puStack_1a0 = puVar15;
    iStack_198 = iVar6;
    uStack_190 = uVar20;
    iStack_228 = iVar10;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar15 = puVar14;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar15 = NULL;
            iVar9 = 0;
            iStack_1a8 = iVar12;
            iStack_188 = iVar8;
            event_triggers_call(iVar10,0);
            auVar24._8_8_ = iStack_1a8;
            auVar24._0_8_ = iStack_188;
        }
        iStack_1a8 = auVar24._8_8_;
        iStack_188 = auVar24._0_8_;
        if ((uVar21 >> 6 & 1) == 0) {
            if ((uVar21 >> 9 & 1) != 0) {
                uVar20 = trace_event_ignore_this_pid(iVar10);
                auVar24._8_8_ = iStack_1a8;
                auVar24._0_8_ = iStack_188;
                if ((uVar20 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_1a8 = auVar24._8_8_;
        iStack_188 = auVar24._0_8_;
        pcVar4 = (*(iVar13 + 8))[0xe];
        if (pcVar4 == NULL) {
            pcVar18 = **(iVar13 + 8);
            pcVar4 = "(null)";
            if (pcVar18 != NULL) {
                pcVar4 = pcVar18;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar21 = iVar3 + 1;
        uVar23 = uVar21;
        puVar15 = uVar21 + 0x20;
        iVar6 = trace_event_buffer_reserve(&stack0xfffffffffffffe08,iVar10);
        auVar24._8_8_ = iStack_1a8;
        auVar24._0_8_ = iStack_188;
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar21 * 0x10000 | 0x20;
            pcVar4 = (*(iVar13 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = **(iVar13 + 8);
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(iVar6 + 0x20,pcVar4);
            *(iVar6 + 0x10) = puVar14;
            puVar14 = NULL;
            uVar21 = uVar16;
            while (uVar21 != 0) {
                puVar14 = puVar14 + *(iVar11 + 0xc);
                iVar11 = sg_next(iVar11);
                uVar21 = uVar7 - 1;
                uVar7 = uVar21;
            }
            *(iVar6 + 0x18) = puVar14;
            trace_event_buffer_commit(&stack0xfffffffffffffe08);
            auVar24._8_8_ = iStack_1a8;
            auVar24._0_8_ = iStack_188;
            iStack_228 = iVar6;
        }
    }
code_r0x08009020:
    iStack_1a8 = auVar24._8_8_;
    iStack_188 = auVar24._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar8 = auVar24._0_8_;
    *extraout_x18_02 = sym.perf_trace_map_sg;
    pcStack_258 = sym.perf_trace_map_sg;
    pcStack_240 = sym.perf_trace_iommu_map_pages;
    iVar6 = sp_el0;
    iStack_268 = *(iVar6 + 0x5e0);
    uVar16 = uVar17 & 0xffffffff;
    puVar19 = *(auVar24._8_8_ + 8);
    iStack_270 = 0;
    uStack_274 = 0;
    pcVar4 = puVar19[0xe];
    if (pcVar4 == NULL) {
        pcVar18 = *puVar19;
        pcVar4 = "(null)";
        if (pcVar18 != NULL) {
            pcVar4 = pcVar18;
        }
    }
    puStack_260 = &stack0xfffffffffffffe40;
    uStack_250 = uVar5;
    iStack_248 = unaff_x27;
    uStack_238 = unaff_x25;
    uStack_230 = uVar23;
    iStack_220 = iVar13;
    puStack_218 = puVar14;
    iStack_210 = iVar11;
    uStack_208 = uVar7;
    iVar3 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar22 != 0)) {
        uVar23 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar7 = perf_trace_buf_alloc(uVar23,&stack0xfffffffffffffd90,&stack0xfffffffffffffd8c);
        uVar20 = _trace_event_reg;
        if (uVar7 != 0) {
            *(iStack_270 + 0xe8) = &stack0xfffffffffffffda0;
            *(iStack_270 + 0xf8) = &stack0xfffffffffffffd80;
            *(iStack_270 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x8009058;
            *(iStack_270 + 0x108) = 5;
            *(uVar7 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar19 = *(auVar24._8_8_ + 8);
            pcVar4 = puVar19[0xe];
            if (pcVar4 == NULL) {
                pcVar18 = *puVar19;
                pcVar4 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar4 = pcVar18;
                }
            }
            strcpy(uVar7 + 0x20,pcVar4);
            *(uVar7 + 0x10) = puVar15;
            puVar15 = NULL;
            uVar21 = uVar17;
            while (uVar21 != 0) {
                puVar15 = puVar15 + *(iVar9 + 0xc);
                iVar9 = sg_next(iVar9);
                uVar21 = uVar16 - 1;
                uVar16 = uVar21;
            }
            *(uVar7 + 0x18) = puVar15;
            perf_trace_run_bpf_submit(uVar7,uVar23,uStack_274,iVar8,1,iStack_270,piVar22,0);
            unaff_x25 = uVar7;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_268) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar19 = auVar24._8_8_;
    iVar12 = auVar24._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_03 = 0x8009228;
    uStack_2a8 = 0x8009228;
    iVar6 = sp_el0;
    iStack_2b8 = *(iVar6 + 0x5e0);
    uVar20 = *(iVar12 + 0x48);
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uVar21 = uVar20;
    puStack_2b0 = &stack0xfffffffffffffda0;
    iStack_2a0 = iVar9;
    uStack_290 = uVar16;
    iStack_288 = iVar8;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            event_triggers_call(iVar12,0,0,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar12), (uVar16 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar4 = puVar19[0xe];
        if (puVar19[0xe] == NULL) {
            pcVar4 = "(null)";
            if (*puVar19 != NULL) {
                pcVar4 = *puVar19;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar21 = iVar3 + 1;
        uVar20 = uVar21;
        iVar6 = trace_event_buffer_reserve(&stack0xfffffffffffffd18,iVar12,uVar21 + 0xc);
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar21 * 0x10000 | 0xc;
            pcVar4 = puVar19[0xe];
            if (puVar19[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar19 != NULL) {
                    pcVar4 = *puVar19;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            trace_event_buffer_commit(&stack0xfffffffffffffd18);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar19 = auVar25._8_8_;
    iVar9 = auVar25._0_8_;
    *extraout_x18_04 = sym.perf_trace_tlbsync_timeout;
    pcStack_338 = sym.perf_trace_tlbsync_timeout;
    iVar6 = sp_el0;
    iStack_348 = *(iVar6 + 0x5e0);
    iStack_350 = 0;
    uStack_354 = 0;
    pcVar4 = puVar19[0xe];
    if (puVar19[0xe] == NULL) {
        pcVar4 = "(null)";
        if (*puVar19 != NULL) {
            pcVar4 = *puVar19;
        }
    }
    puStack_340 = &stack0xfffffffffffffd50;
    uStack_330 = unaff_x25;
    uStack_320 = uVar23;
    puStack_318 = puVar15;
    piStack_310 = piVar22;
    uStack_308 = uVar20;
    auStack_300 = auVar24;
    iVar3 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar22 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(piVar22,&stack0xfffffffffffffcb0,&stack0xfffffffffffffcac);
        uVar16 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_350 + 0xe8) = &stack0xfffffffffffffcc0;
            *(iStack_350 + 0xf8) = &stack0xfffffffffffffca0;
            *(iStack_350 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x800934c;
            *(iStack_350 + 0x108) = 5;
            *(iVar6 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar4 = puVar19[0xe];
            if (puVar19[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar19 != NULL) {
                    pcVar4 = *puVar19;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            perf_trace_run_bpf_submit(iVar6,piVar22,uStack_354,iVar9,1,iStack_350,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_348) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar8 = auVar24._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_05 = 0x80094d4;
    uStack_388 = 0x80094d4;
    iVar6 = sp_el0;
    iStack_398 = *(iVar6 + 0x5e0);
    uVar5 = *(iVar8 + 0x48);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uVar21 = uVar5;
    puStack_390 = &stack0xfffffffffffffcc0;
    piStack_380 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            puStack_370 = puVar19;
            iStack_368 = iVar9;
            event_triggers_call(iVar8,0,0,0);
            auVar25._8_8_ = puStack_370;
            auVar25._0_8_ = iStack_368;
        }
        puStack_370 = auVar25._8_8_;
        iStack_368 = auVar25._0_8_;
        if ((uVar21 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar21 >> 9 & 1) != 0) {
            uVar16 = trace_event_ignore_this_pid(iVar8);
            auVar25._8_8_ = puStack_370;
            auVar25._0_8_ = iStack_368;
            if ((uVar16 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_370 = auVar25._8_8_;
    iStack_368 = auVar25._0_8_;
    iVar6 = trace_event_buffer_reserve(&stack0xfffffffffffffc38,iVar8,0x10);
    auVar25._8_8_ = puStack_370;
    auVar25._0_8_ = iStack_368;
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar24._8_8_;
        trace_event_buffer_commit(&stack0xfffffffffffffc38);
        auVar25._8_8_ = puStack_370;
        auVar25._0_8_ = iStack_368;
    }
code_r0x08009570:
    puStack_370 = auVar25._8_8_;
    iStack_368 = auVar25._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_398) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar9 = auVar25._0_8_;
    *extraout_x18_06 = sym.perf_trace_smmu_init;
    pcStack_3f8 = sym.perf_trace_smmu_init;
    iVar6 = sp_el0;
    iStack_408 = *(iVar6 + 0x5e0);
    iStack_410 = 0;
    uStack_414 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    puStack_400 = &stack0xfffffffffffffc70;
    piStack_3f0 = piVar22;
    uStack_3e8 = uVar5;
    auStack_3e0 = auVar24;
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar6 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffbf0,&stack0xfffffffffffffbec);
        uVar16 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_410 + 0xe8) = &stack0xfffffffffffffc00;
            *(iStack_410 + 0xf8) = &stack0xfffffffffffffbe0;
            *(iStack_410 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x80095a4;
            *(iStack_410 + 0x108) = 5;
            *(iVar6 + 8) = auVar25._8_8_;
            perf_trace_run_bpf_submit(iVar6,0x14,uStack_414,iVar9,1,iStack_410,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_408) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_07 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_iommu_map_pages @ 0x08008bfc (size 320) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08008e3c)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_iommu_map_pages(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong uVar8;
    uint64_t uVar10;
    int64_t iVar11;
    uint32_t *puVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    uint64_t in_x4;
    uint64_t uVar17;
    char *pcVar18;
    ulong *puVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint32_t uVar20;
    uint64_t uVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    uchar auStack_3a0 [12];
    uint uStack_394;
    int64_t iStack_390;
    int64_t iStack_388;
    ulong ***pppuStack_380;
    code *pcStack_378;
    int64_t *piStack_370;
    ulong uStack_368;
    uchar auStack_360 [16];
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    int64_t iStack_318;
    ulong ***pppuStack_310;
    ulong uStack_308;
    int64_t *piStack_300;
    ulong *puStack_2f0;
    int64_t iStack_2e8;
    uchar auStack_2e0 [12];
    uint uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a0;
    uint32_t *puStack_298;
    int64_t *piStack_290;
    uint64_t uStack_288;
    uchar auStack_280 [16];
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    ulong uStack_228;
    int64_t iStack_220;
    uint64_t uStack_210;
    int64_t iStack_208;
    uchar auStack_200 [12];
    uint uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    uchar ***pppuStack_1e0;
    code *pcStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    uint64_t uStack_1b0;
    int64_t iStack_1a8;
    int64_t iStack_1a0;
    uint32_t *puStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    int64_t iStack_128;
    uint32_t *puStack_120;
    int64_t iStack_118;
    int64_t iStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iVar7;
    int64_t iVar9;
    int64_t iVar12;
    int64_t iVar13;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_48 = *(iVar16 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar20 = *(arg1 + 0x48);
    iVar16 = arg4;
    uVar21 = in_x4;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar14 = arg3;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar16 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(arg1), (uVar4 & 1) == 0))))
        goto code_r0x08008c7c;
    }
    else {
code_r0x08008c7c:
        pcVar5 = (*(arg2 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar18 = **(arg2 + 8);
            pcVar5 = "(null)";
            if (pcVar18 != NULL) {
                pcVar5 = pcVar18;
            }
        }
        iVar3 = strlen(pcVar5);
        puVar14 = iVar3 + 1 + 0x28;
        iVar6 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = (iVar3 + 1) * 0x10000 | 0x28;
            pcVar5 = (*(arg2 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar18 = **(arg2 + 8);
                pcVar5 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar5 = pcVar18;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            *(iVar6 + 0x10) = arg3;
            *(iVar6 + 0x18) = arg4;
            *(iVar6 + 0x20) = in_x4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar12 = auVar24._8_8_;
    iVar7 = auVar24._0_8_;
    *extraout_x18 = sym.perf_trace_iommu_map_pages;
    pcStack_d8 = sym.perf_trace_iommu_map_pages;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    pcVar5 = (*(iVar12 + 8))[0xe];
    if (pcVar5 == NULL) {
        pcVar18 = **(iVar12 + 8);
        pcVar5 = "(null)";
        if (pcVar18 != NULL) {
            pcVar5 = pcVar18;
        }
    }
    puVar15 = puVar14;
    iVar11 = iVar16;
    uVar4 = uVar21;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar8 = strlen(pcVar5);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar15 = &uStack_f4;
        unaff_x25 = (uVar8 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x25,&iStack_f0);
        uVar17 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x8008d3c;
            *(iStack_f0 + 0x108) = 5;
            *(iVar6 + 8) = uVar8 * 0x10000 + 0x10028;
            pcVar5 = (*(iVar12 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar18 = **(iVar12 + 8);
                pcVar5 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar5 = pcVar18;
                }
            }
            strcpy(iVar6 + 0x28,pcVar5);
            puVar15 = uStack_f4;
            uVar4 = 1;
            *(iVar6 + 0x10) = puVar14;
            *(iVar6 + 0x18) = iVar16;
            *(iVar6 + 0x20) = uVar21;
            iVar11 = iVar7;
            perf_trace_run_bpf_submit(iVar6,unaff_x25);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar13 = auVar25._8_8_;
    iVar9 = auVar25._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18_00 = 0x8008ee8;
    uStack_138 = 0x8008ee8;
    iVar6 = sp_el0;
    uVar21 = uVar4 & 0xffffffff;
    iStack_148 = *(iVar6 + 0x5e0);
    uVar23 = *(iVar9 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar20 = uVar23;
    iVar6 = iVar11;
    uVar17 = uVar4;
    ppuStack_140 = &puStack_e0;
    piStack_130 = piVar22;
    puStack_120 = puVar14;
    iStack_118 = iVar16;
    iStack_1a8 = iVar9;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar14 = NULL;
            iVar6 = 0;
            iStack_128 = iVar12;
            iStack_108 = iVar7;
            event_triggers_call(iVar9,0);
            auVar24._8_8_ = iStack_128;
            auVar24._0_8_ = iStack_108;
        }
        iStack_128 = auVar24._8_8_;
        iStack_108 = auVar24._0_8_;
        if ((uVar20 >> 6 & 1) == 0) {
            if ((uVar20 >> 9 & 1) != 0) {
                uVar10 = trace_event_ignore_this_pid(iVar9);
                auVar24._8_8_ = iStack_128;
                auVar24._0_8_ = iStack_108;
                if ((uVar10 & 1) != 0) goto code_r0x08009020;
            }
            goto code_r0x08008f74;
        }
    }
    else {
code_r0x08008f74:
        iStack_128 = auVar24._8_8_;
        iStack_108 = auVar24._0_8_;
        pcVar5 = (*(iVar13 + 8))[0xe];
        if (pcVar5 == NULL) {
            pcVar18 = **(iVar13 + 8);
            pcVar5 = "(null)";
            if (pcVar18 != NULL) {
                pcVar5 = pcVar18;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar20 = iVar3 + 1;
        uVar23 = uVar20;
        puVar14 = uVar20 + 0x20;
        iVar16 = trace_event_buffer_reserve(&uStack_178,iVar9);
        auVar24._8_8_ = iStack_128;
        auVar24._0_8_ = iStack_108;
        if (iVar16 != 0) {
            *(iVar16 + 8) = uVar20 * 0x10000 | 0x20;
            pcVar5 = (*(iVar13 + 8))[0xe];
            if (pcVar5 == NULL) {
                pcVar18 = **(iVar13 + 8);
                pcVar5 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar5 = pcVar18;
                }
            }
            strcpy(iVar16 + 0x20,pcVar5);
            *(iVar16 + 0x10) = puVar15;
            puVar15 = NULL;
            uVar20 = uVar4;
            while (uVar20 != 0) {
                puVar15 = puVar15 + *(iVar11 + 0xc);
                iVar11 = sg_next(iVar11);
                uVar20 = uVar21 - 1;
                uVar21 = uVar20;
            }
            *(iVar16 + 0x18) = puVar15;
            trace_event_buffer_commit(&uStack_178);
            auVar24._8_8_ = iStack_128;
            auVar24._0_8_ = iStack_108;
            iStack_1a8 = iVar16;
        }
    }
code_r0x08009020:
    iStack_128 = auVar24._8_8_;
    iStack_108 = auVar24._0_8_;
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_148) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar7 = auVar24._0_8_;
    *extraout_x18_01 = sym.perf_trace_map_sg;
    pcStack_1d8 = sym.perf_trace_map_sg;
    pcStack_1c0 = sym.perf_trace_iommu_map_pages;
    iVar16 = sp_el0;
    iStack_1e8 = *(iVar16 + 0x5e0);
    uVar4 = uVar17 & 0xffffffff;
    puVar19 = *(auVar24._8_8_ + 8);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    pcVar5 = puVar19[0xe];
    if (pcVar5 == NULL) {
        pcVar18 = *puVar19;
        pcVar5 = "(null)";
        if (pcVar18 != NULL) {
            pcVar5 = pcVar18;
        }
    }
    pppuStack_1e0 = &ppuStack_140;
    uStack_1d0 = uVar8;
    iStack_1c8 = unaff_x27;
    uStack_1b8 = unaff_x25;
    uStack_1b0 = uVar23;
    iStack_1a0 = iVar13;
    puStack_198 = puVar15;
    iStack_190 = iVar11;
    uStack_188 = uVar21;
    iVar3 = strlen(pcVar5);
    iVar16 = tpidr_el1;
    piVar22 = iVar16 + *(iVar7 + 0x78);
    if ((*(iVar7 + 0x80) != 0) || (*piVar22 != 0)) {
        uVar23 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(uVar23,&iStack_1f0,&uStack_1f4);
        uVar21 = _trace_event_reg;
        if (uVar10 != 0) {
            *(iStack_1f0 + 0xe8) = &pppuStack_1e0;
            *(iStack_1f0 + 0xf8) = auStack_200;
            *(iStack_1f0 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8009058;
            *(iStack_1f0 + 0x108) = 5;
            *(uVar10 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar19 = *(auVar24._8_8_ + 8);
            pcVar5 = puVar19[0xe];
            if (pcVar5 == NULL) {
                pcVar18 = *puVar19;
                pcVar5 = "(null)";
                if (pcVar18 != NULL) {
                    pcVar5 = pcVar18;
                }
            }
            strcpy(uVar10 + 0x20,pcVar5);
            *(uVar10 + 0x10) = puVar14;
            puVar14 = NULL;
            uVar20 = uVar17;
            while (uVar20 != 0) {
                puVar14 = puVar14 + *(iVar6 + 0xc);
                iVar6 = sg_next(iVar6);
                uVar20 = uVar4 - 1;
                uVar4 = uVar20;
            }
            *(uVar10 + 0x18) = puVar14;
            perf_trace_run_bpf_submit(uVar10,uVar23,uStack_1f4,iVar7,1,iStack_1f0,piVar22,0);
            unaff_x25 = uVar10;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar19 = auVar24._8_8_;
    iVar12 = auVar24._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_02 = 0x8009228;
    uStack_228 = 0x8009228;
    iVar16 = sp_el0;
    iStack_238 = *(iVar16 + 0x5e0);
    uVar21 = *(iVar12 + 0x48);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar20 = uVar21;
    pppuStack_230 = &pppuStack_1e0;
    iStack_220 = iVar6;
    uStack_210 = uVar4;
    iStack_208 = iVar7;
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            event_triggers_call(iVar12,0,0,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(iVar12), (uVar4 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar5 = puVar19[0xe];
        if (puVar19[0xe] == NULL) {
            pcVar5 = "(null)";
            if (*puVar19 != NULL) {
                pcVar5 = *puVar19;
            }
        }
        iVar3 = strlen(pcVar5);
        uVar20 = iVar3 + 1;
        uVar21 = uVar20;
        iVar16 = trace_event_buffer_reserve(&uStack_268,iVar12,uVar20 + 0xc);
        if (iVar16 != 0) {
            *(iVar16 + 8) = uVar20 * 0x10000 | 0xc;
            pcVar5 = puVar19[0xe];
            if (puVar19[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar19 != NULL) {
                    pcVar5 = *puVar19;
                }
            }
            strcpy(iVar16 + 0xc,pcVar5);
            trace_event_buffer_commit(&uStack_268);
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_238) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar19 = auVar25._8_8_;
    iVar6 = auVar25._0_8_;
    *extraout_x18_03 = sym.perf_trace_tlbsync_timeout;
    pcStack_2b8 = sym.perf_trace_tlbsync_timeout;
    iVar16 = sp_el0;
    iStack_2c8 = *(iVar16 + 0x5e0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    pcVar5 = puVar19[0xe];
    if (puVar19[0xe] == NULL) {
        pcVar5 = "(null)";
        if (*puVar19 != NULL) {
            pcVar5 = *puVar19;
        }
    }
    pppuStack_2c0 = &pppuStack_230;
    uStack_2b0 = unaff_x25;
    uStack_2a0 = uVar23;
    puStack_298 = puVar14;
    piStack_290 = piVar22;
    uStack_288 = uVar21;
    auStack_280 = auVar24;
    iVar3 = strlen(pcVar5);
    iVar16 = tpidr_el1;
    piVar1 = iVar16 + *(iVar6 + 0x78);
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar22 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar16 = perf_trace_buf_alloc(piVar22,&iStack_2d0,&uStack_2d4);
        uVar21 = _trace_event_reg;
        if (iVar16 != 0) {
            *(iStack_2d0 + 0xe8) = &pppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x800934c;
            *(iStack_2d0 + 0x108) = 5;
            *(iVar16 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar5 = puVar19[0xe];
            if (puVar19[0xe] == NULL) {
                pcVar5 = "(null)";
                if (*puVar19 != NULL) {
                    pcVar5 = *puVar19;
                }
            }
            strcpy(iVar16 + 0xc,pcVar5);
            perf_trace_run_bpf_submit(iVar16,piVar22,uStack_2d4,iVar6,1,iStack_2d0,piVar1,0);
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_2c8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar7 = auVar24._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x80094d4;
    uStack_308 = 0x80094d4;
    iVar16 = sp_el0;
    iStack_318 = *(iVar16 + 0x5e0);
    uVar8 = *(iVar7 + 0x48);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar20 = uVar8;
    pppuStack_310 = &pppuStack_2c0;
    piStack_300 = piVar1;
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            puStack_2f0 = puVar19;
            iStack_2e8 = iVar6;
            event_triggers_call(iVar7,0,0,0);
            auVar25._8_8_ = puStack_2f0;
            auVar25._0_8_ = iStack_2e8;
        }
        puStack_2f0 = auVar25._8_8_;
        iStack_2e8 = auVar25._0_8_;
        if ((uVar20 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar20 >> 9 & 1) != 0) {
            uVar21 = trace_event_ignore_this_pid(iVar7);
            auVar25._8_8_ = puStack_2f0;
            auVar25._0_8_ = iStack_2e8;
            if ((uVar21 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_2f0 = auVar25._8_8_;
    iStack_2e8 = auVar25._0_8_;
    iVar16 = trace_event_buffer_reserve(&uStack_348,iVar7,0x10);
    auVar25._8_8_ = puStack_2f0;
    auVar25._0_8_ = iStack_2e8;
    if (iVar16 != 0) {
        *(iVar16 + 8) = auVar24._8_8_;
        trace_event_buffer_commit(&uStack_348);
        auVar25._8_8_ = puStack_2f0;
        auVar25._0_8_ = iStack_2e8;
    }
code_r0x08009570:
    puStack_2f0 = auVar25._8_8_;
    iStack_2e8 = auVar25._0_8_;
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_318) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    *extraout_x18_05 = sym.perf_trace_smmu_init;
    pcStack_378 = sym.perf_trace_smmu_init;
    iVar16 = sp_el0;
    iStack_388 = *(iVar16 + 0x5e0);
    iStack_390 = 0;
    uStack_394 = 0;
    iVar16 = tpidr_el1;
    piVar1 = iVar16 + *(iVar6 + 0x78);
    pppuStack_380 = &pppuStack_310;
    piStack_370 = piVar22;
    uStack_368 = uVar8;
    auStack_360 = auVar24;
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar16 = perf_trace_buf_alloc(0x14,&iStack_390,&uStack_394);
        uVar21 = _trace_event_reg;
        if (iVar16 != 0) {
            *(iStack_390 + 0xe8) = &pppuStack_380;
            *(iStack_390 + 0xf8) = auStack_3a0;
            *(iStack_390 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x80095a4;
            *(iStack_390 + 0x108) = 5;
            *(iVar16 + 8) = auVar25._8_8_;
            perf_trace_run_bpf_submit(iVar16,0x14,uStack_394,iVar6,1,iStack_390,piVar1,0);
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) != iStack_388) {
        __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_06 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_iommu_map_pages @ 0x08008d3c (size 440) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_iommu_map_pages(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int iVar3;
    char *pcVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    uint64_t in_x4;
    uint64_t uVar12;
    uint64_t uVar13;
    char *pcVar14;
    ulong *puVar15;
    uint64_t uVar16;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint32_t uVar17;
    int64_t iVar18;
    int64_t *piVar19;
    uint64_t uVar20;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auStack_320 [12];
    uint uStack_314;
    int64_t iStack_310;
    int64_t iStack_308;
    uchar *puStack_300;
    code *pcStack_2f8;
    int64_t *piStack_2f0;
    ulong uStack_2e8;
    uchar auStack_2e0 [16];
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    int64_t iStack_298;
    uchar *puStack_290;
    ulong uStack_288;
    int64_t *piStack_280;
    ulong *puStack_270;
    int64_t iStack_268;
    uchar auStack_260 [12];
    uint uStack_254;
    int64_t iStack_250;
    int64_t iStack_248;
    uchar *puStack_240;
    code *pcStack_238;
    uint64_t uStack_230;
    uint64_t uStack_220;
    uchar *puStack_218;
    int64_t *piStack_210;
    uint64_t uStack_208;
    uchar auStack_200 [16];
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    uchar *puStack_1b0;
    ulong uStack_1a8;
    int64_t iStack_1a0;
    uint64_t uStack_190;
    int64_t iStack_188;
    uchar auStack_180 [12];
    uint uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar *puStack_160;
    code *pcStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    int64_t *piStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    pcVar4 = (*(arg2 + 8))[0xe];
    if (pcVar4 == NULL) {
        pcVar14 = **(arg2 + 8);
        pcVar4 = "(null)";
        if (pcVar14 != NULL) {
            pcVar4 = pcVar14;
        }
    }
    puVar10 = arg3;
    iVar9 = arg4;
    uVar12 = in_x4;
    uVar5 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar19 = iVar6 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar19 != 0)) {
        puVar10 = &stack0xffffffffffffff8c;
        unaff_x25 = (uVar5 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x25,&stack0xffffffffffffff90);
        uVar16 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar16 = -1L << (uVar16 & 0x3f);
            uVar12 = (~uVar16 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar16 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar12;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x10028;
            pcVar4 = (*(arg2 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar14 = **(arg2 + 8);
                pcVar4 = "(null)";
                if (pcVar14 != NULL) {
                    pcVar4 = pcVar14;
                }
            }
            strcpy(iVar6 + 0x28,pcVar4);
            puVar10 = uStack_74;
            uVar12 = 1;
            *(iVar6 + 0x10) = arg3;
            *(iVar6 + 0x18) = arg4;
            *(iVar6 + 0x20) = in_x4;
            iVar9 = arg1;
            perf_trace_run_bpf_submit(iVar6,unaff_x25);
            unaff_x27 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8008ee8;
    uStack_b8 = 0x8008ee8;
    iVar6 = sp_el0;
    uVar16 = uVar12 & 0xffffffff;
    iStack_c8 = *(iVar6 + 0x5e0);
    uVar20 = *(iVar8 + 0x48);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar17 = uVar20;
    iVar6 = iVar9;
    uVar13 = uVar12;
    puStack_c0 = &stack0xffffffffffffffa0;
    piStack_b0 = piVar19;
    iStack_a8 = arg2;
    iStack_a0 = arg3;
    iStack_98 = arg4;
    iStack_88 = arg1;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar11 = NULL;
            iVar6 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(iVar8), (uVar7 & 1) == 0))))
        goto code_r0x08008f74;
    }
    else {
code_r0x08008f74:
        puVar15 = *(auVar21._8_8_ + 8);
        pcVar4 = puVar15[0xe];
        if (pcVar4 == NULL) {
            pcVar14 = *puVar15;
            pcVar4 = "(null)";
            if (pcVar14 != NULL) {
                pcVar4 = pcVar14;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar17 = iVar3 + 1;
        uVar20 = uVar17;
        puVar11 = uVar17 + 0x20;
        iVar8 = trace_event_buffer_reserve(&stack0xffffffffffffff08,iVar8);
        if (iVar8 != 0) {
            *(iVar8 + 8) = uVar17 * 0x10000 | 0x20;
            puVar15 = *(auVar21._8_8_ + 8);
            pcVar4 = puVar15[0xe];
            if (pcVar4 == NULL) {
                pcVar14 = *puVar15;
                pcVar4 = "(null)";
                if (pcVar14 != NULL) {
                    pcVar4 = pcVar14;
                }
            }
            strcpy(iVar8 + 0x20,pcVar4);
            *(iVar8 + 0x10) = puVar10;
            iVar18 = 0;
            uVar17 = uVar12;
            while (uVar17 != 0) {
                iVar18 = iVar18 + *(iVar9 + 0xc);
                iVar9 = sg_next(iVar9);
                uVar17 = uVar16 - 1;
                uVar16 = uVar17;
            }
            *(iVar8 + 0x18) = iVar18;
            trace_event_buffer_commit(&stack0xffffffffffffff08);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    *extraout_x18_00 = sym.perf_trace_map_sg;
    pcStack_158 = sym.perf_trace_map_sg;
    iVar9 = sp_el0;
    iStack_168 = *(iVar9 + 0x5e0);
    uVar12 = uVar13 & 0xffffffff;
    puVar15 = *(auVar21._8_8_ + 8);
    iStack_170 = 0;
    uStack_174 = 0;
    pcVar4 = puVar15[0xe];
    if (pcVar4 == NULL) {
        pcVar14 = *puVar15;
        pcVar4 = "(null)";
        if (pcVar14 != NULL) {
            pcVar4 = pcVar14;
        }
    }
    puStack_160 = &stack0xffffffffffffff40;
    uStack_150 = uVar5;
    iStack_148 = unaff_x27;
    iVar3 = strlen(pcVar4);
    iVar9 = tpidr_el1;
    piVar19 = iVar9 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar19 != 0)) {
        uVar20 = (iVar3 + 0x2cU & 0xfffffff8) - 4;
        uVar7 = perf_trace_buf_alloc(uVar20,&stack0xfffffffffffffe90,&stack0xfffffffffffffe8c);
        uVar16 = _trace_event_reg;
        if (uVar7 != 0) {
            *(iStack_170 + 0xe8) = &stack0xfffffffffffffea0;
            *(iStack_170 + 0xf8) = &stack0xfffffffffffffe80;
            *(iStack_170 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x8009058;
            *(iStack_170 + 0x108) = 5;
            *(uVar7 + 8) = iVar3 * 0x10000 + 0x10020;
            puVar15 = *(auVar21._8_8_ + 8);
            pcVar4 = puVar15[0xe];
            if (pcVar4 == NULL) {
                pcVar14 = *puVar15;
                pcVar4 = "(null)";
                if (pcVar14 != NULL) {
                    pcVar4 = pcVar14;
                }
            }
            strcpy(uVar7 + 0x20,pcVar4);
            *(uVar7 + 0x10) = puVar11;
            puVar11 = NULL;
            uVar17 = uVar13;
            while (uVar17 != 0) {
                puVar11 = puVar11 + *(iVar6 + 0xc);
                iVar6 = sg_next(iVar6);
                uVar17 = uVar12 - 1;
                uVar12 = uVar17;
            }
            *(uVar7 + 0x18) = puVar11;
            perf_trace_run_bpf_submit(uVar7,uVar20,uStack_174,iVar8,1,iStack_170,piVar19,0);
            unaff_x25 = uVar7;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_168) {
        return;
    }
    auVar21 = __stack_chk_fail();
    puVar15 = auVar21._8_8_;
    iVar18 = auVar21._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_01 = 0x8009228;
    uStack_1a8 = 0x8009228;
    iVar9 = sp_el0;
    iStack_1b8 = *(iVar9 + 0x5e0);
    uVar16 = *(iVar18 + 0x48);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uVar17 = uVar16;
    puStack_1b0 = &stack0xfffffffffffffea0;
    iStack_1a0 = iVar6;
    uStack_190 = uVar12;
    iStack_188 = iVar8;
    if ((uVar17 >> 8 & 1) == 0) {
        if ((uVar17 >> 7 & 1) != 0) {
            event_triggers_call(iVar18,0,0,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar12 = trace_event_ignore_this_pid(iVar18), (uVar12 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar4 = puVar15[0xe];
        if (puVar15[0xe] == NULL) {
            pcVar4 = "(null)";
            if (*puVar15 != NULL) {
                pcVar4 = *puVar15;
            }
        }
        iVar3 = strlen(pcVar4);
        uVar17 = iVar3 + 1;
        uVar16 = uVar17;
        iVar6 = trace_event_buffer_reserve(&stack0xfffffffffffffe18,iVar18,uVar17 + 0xc);
        if (iVar6 != 0) {
            *(iVar6 + 8) = uVar17 * 0x10000 | 0xc;
            pcVar4 = puVar15[0xe];
            if (puVar15[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar15 != NULL) {
                    pcVar4 = *puVar15;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            trace_event_buffer_commit(&stack0xfffffffffffffe18);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    puVar15 = auVar22._8_8_;
    iVar9 = auVar22._0_8_;
    *extraout_x18_02 = sym.perf_trace_tlbsync_timeout;
    pcStack_238 = sym.perf_trace_tlbsync_timeout;
    iVar6 = sp_el0;
    iStack_248 = *(iVar6 + 0x5e0);
    iStack_250 = 0;
    uStack_254 = 0;
    pcVar4 = puVar15[0xe];
    if (puVar15[0xe] == NULL) {
        pcVar4 = "(null)";
        if (*puVar15 != NULL) {
            pcVar4 = *puVar15;
        }
    }
    puStack_240 = &stack0xfffffffffffffe50;
    uStack_230 = unaff_x25;
    uStack_220 = uVar20;
    puStack_218 = puVar11;
    piStack_210 = piVar19;
    uStack_208 = uVar16;
    auStack_200 = auVar21;
    iVar3 = strlen(pcVar4);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar19 = (iVar3 + 0x18U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(piVar19,&stack0xfffffffffffffdb0,&stack0xfffffffffffffdac);
        uVar12 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_250 + 0xe8) = &stack0xfffffffffffffdc0;
            *(iStack_250 + 0xf8) = &stack0xfffffffffffffda0;
            *(iStack_250 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x800934c;
            *(iStack_250 + 0x108) = 5;
            *(iVar6 + 8) = iVar3 * 0x10000 + 0x1000c;
            pcVar4 = puVar15[0xe];
            if (puVar15[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar15 != NULL) {
                    pcVar4 = *puVar15;
                }
            }
            strcpy(iVar6 + 0xc,pcVar4);
            perf_trace_run_bpf_submit(iVar6,piVar19,uStack_254,iVar9,1,iStack_250,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_248) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_03 = 0x80094d4;
    uStack_288 = 0x80094d4;
    iVar6 = sp_el0;
    iStack_298 = *(iVar6 + 0x5e0);
    uVar5 = *(iVar8 + 0x48);
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uVar17 = uVar5;
    puStack_290 = &stack0xfffffffffffffdc0;
    piStack_280 = piVar1;
    if ((uVar17 >> 8 & 1) == 0) {
        if ((uVar17 >> 7 & 1) != 0) {
            puStack_270 = puVar15;
            iStack_268 = iVar9;
            event_triggers_call(iVar8,0,0,0);
            auVar22._8_8_ = puStack_270;
            auVar22._0_8_ = iStack_268;
        }
        puStack_270 = auVar22._8_8_;
        iStack_268 = auVar22._0_8_;
        if ((uVar17 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar17 >> 9 & 1) != 0) {
            uVar12 = trace_event_ignore_this_pid(iVar8);
            auVar22._8_8_ = puStack_270;
            auVar22._0_8_ = iStack_268;
            if ((uVar12 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_270 = auVar22._8_8_;
    iStack_268 = auVar22._0_8_;
    iVar6 = trace_event_buffer_reserve(&stack0xfffffffffffffd38,iVar8,0x10);
    auVar22._8_8_ = puStack_270;
    auVar22._0_8_ = iStack_268;
    if (iVar6 != 0) {
        *(iVar6 + 8) = auVar21._8_8_;
        trace_event_buffer_commit(&stack0xfffffffffffffd38);
        auVar22._8_8_ = puStack_270;
        auVar22._0_8_ = iStack_268;
    }
code_r0x08009570:
    puStack_270 = auVar22._8_8_;
    iStack_268 = auVar22._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_298) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar9 = auVar22._0_8_;
    *extraout_x18_04 = sym.perf_trace_smmu_init;
    pcStack_2f8 = sym.perf_trace_smmu_init;
    iVar6 = sp_el0;
    iStack_308 = *(iVar6 + 0x5e0);
    iStack_310 = 0;
    uStack_314 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(iVar9 + 0x78);
    puStack_300 = &stack0xfffffffffffffd70;
    piStack_2f0 = piVar19;
    uStack_2e8 = uVar5;
    auStack_2e0 = auVar21;
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar6 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffcf0,&stack0xfffffffffffffcec);
        uVar12 = _trace_event_reg;
        if (iVar6 != 0) {
            *(iStack_310 + 0xe8) = &stack0xfffffffffffffd00;
            *(iStack_310 + 0xf8) = &stack0xfffffffffffffce0;
            *(iStack_310 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x80095a4;
            *(iStack_310 + 0x108) = 5;
            *(iVar6 + 8) = auVar22._8_8_;
            perf_trace_run_bpf_submit(iVar6,0x14,uStack_314,iVar9,1,iStack_310,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_308) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_05 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_map_sg @ 0x08008ef4 (size 356) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08009158)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_map_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t in_x4;
    char *pcVar9;
    ulong *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong uVar15;
    int64_t *piVar16;
    uint64_t uVar17;
    int64_t unaff_x25;
    ulong unaff_x30;
    uchar auVar18 [16];
    uchar auVar19 [16];
    uchar auStack_2a0 [12];
    uint uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    int64_t *piStack_270;
    ulong uStack_268;
    uchar auStack_260 [16];
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    ulong *puStack_1f0;
    int64_t iStack_1e8;
    uchar auStack_1e0 [12];
    uint uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar ***pppuStack_1c0;
    code *pcStack_1b8;
    int64_t iStack_1b0;
    uint64_t uStack_1a0;
    int64_t iStack_198;
    int64_t *piStack_190;
    uint64_t uStack_188;
    uchar auStack_180 [16];
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t iStack_120;
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar auStack_100 [12];
    uint uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    uVar12 = in_x4 & 0xffffffff;
    iStack_48 = *(iVar8 + 0x5e0);
    uVar17 = *(arg1 + 0x48);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar11 = uVar17;
    iVar8 = arg4;
    uVar14 = in_x4;
    if ((uVar11 >> 8 & 1) == 0) {
        iVar7 = arg3;
        if ((uVar11 >> 7 & 1) != 0) {
            iVar7 = 0;
            iVar8 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar11 >> 6 & 1) == 0) &&
           (((uVar11 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x08008f74;
    }
    else {
code_r0x08008f74:
        pcVar4 = (*(arg2 + 8))[0xe];
        if (pcVar4 == NULL) {
            pcVar9 = **(arg2 + 8);
            pcVar4 = "(null)";
            if (pcVar9 != NULL) {
                pcVar4 = pcVar9;
            }
        }
        iVar2 = strlen(pcVar4);
        uVar11 = iVar2 + 1;
        uVar17 = uVar11;
        iVar7 = uVar11 + 0x20;
        iVar5 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar5 != 0) {
            *(iVar5 + 8) = uVar11 * 0x10000 | 0x20;
            pcVar4 = (*(arg2 + 8))[0xe];
            if (pcVar4 == NULL) {
                pcVar9 = **(arg2 + 8);
                pcVar4 = "(null)";
                if (pcVar9 != NULL) {
                    pcVar4 = pcVar9;
                }
            }
            strcpy(iVar5 + 0x20,pcVar4);
            *(iVar5 + 0x10) = arg3;
            iVar13 = 0;
            uVar11 = in_x4;
            while (uVar11 != 0) {
                iVar13 = iVar13 + *(arg4 + 0xc);
                arg4 = sg_next(arg4);
                uVar11 = uVar12 - 1;
                uVar12 = uVar11;
            }
            *(iVar5 + 0x18) = iVar13;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar13 = auVar18._0_8_;
    *extraout_x18 = sym.perf_trace_map_sg;
    pcStack_d8 = sym.perf_trace_map_sg;
    iVar5 = sp_el0;
    iStack_e8 = *(iVar5 + 0x5e0);
    uVar12 = uVar14 & 0xffffffff;
    puVar10 = *(auVar18._8_8_ + 8);
    iStack_f0 = 0;
    uStack_f4 = 0;
    pcVar4 = puVar10[0xe];
    if (pcVar4 == NULL) {
        pcVar9 = *puVar10;
        pcVar4 = "(null)";
        if (pcVar9 != NULL) {
            pcVar4 = pcVar9;
        }
    }
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar2 = strlen(pcVar4);
    iVar5 = tpidr_el1;
    piVar16 = iVar5 + *(iVar13 + 0x78);
    if ((*(iVar13 + 0x80) != 0) || (*piVar16 != 0)) {
        uVar17 = (iVar2 + 0x2cU & 0xfffffff8) - 4;
        iVar5 = perf_trace_buf_alloc(uVar17,&iStack_f0,&uStack_f4);
        uVar3 = _trace_event_reg;
        if (iVar5 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8009058;
            *(iStack_f0 + 0x108) = 5;
            *(iVar5 + 8) = iVar2 * 0x10000 + 0x10020;
            puVar10 = *(auVar18._8_8_ + 8);
            pcVar4 = puVar10[0xe];
            if (pcVar4 == NULL) {
                pcVar9 = *puVar10;
                pcVar4 = "(null)";
                if (pcVar9 != NULL) {
                    pcVar4 = pcVar9;
                }
            }
            strcpy(iVar5 + 0x20,pcVar4);
            *(iVar5 + 0x10) = iVar7;
            iVar7 = 0;
            uVar11 = uVar14;
            while (uVar11 != 0) {
                iVar7 = iVar7 + *(iVar8 + 0xc);
                iVar8 = sg_next(iVar8);
                uVar11 = uVar12 - 1;
                uVar12 = uVar11;
            }
            *(iVar5 + 0x18) = iVar7;
            perf_trace_run_bpf_submit(iVar5,uVar17,uStack_f4,iVar13,1,iStack_f0,piVar16,0);
            unaff_x25 = iVar5;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    puVar10 = auVar18._8_8_;
    iVar6 = auVar18._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_00 = 0x8009228;
    uStack_128 = 0x8009228;
    iVar5 = sp_el0;
    iStack_138 = *(iVar5 + 0x5e0);
    uVar14 = *(iVar6 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar11 = uVar14;
    ppuStack_130 = &puStack_e0;
    iStack_120 = iVar8;
    uStack_110 = uVar12;
    iStack_108 = iVar13;
    if ((uVar11 >> 8 & 1) == 0) {
        if ((uVar11 >> 7 & 1) != 0) {
            event_triggers_call(iVar6,0,0,0);
        }
        if (((uVar11 >> 6 & 1) == 0) &&
           (((uVar11 >> 9 & 1) == 0 || (uVar12 = trace_event_ignore_this_pid(iVar6), (uVar12 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar4 = puVar10[0xe];
        if (puVar10[0xe] == NULL) {
            pcVar4 = "(null)";
            if (*puVar10 != NULL) {
                pcVar4 = *puVar10;
            }
        }
        iVar2 = strlen(pcVar4);
        uVar11 = iVar2 + 1;
        uVar14 = uVar11;
        iVar8 = trace_event_buffer_reserve(&uStack_168,iVar6,uVar11 + 0xc);
        if (iVar8 != 0) {
            *(iVar8 + 8) = uVar11 * 0x10000 | 0xc;
            pcVar4 = puVar10[0xe];
            if (puVar10[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar10 != NULL) {
                    pcVar4 = *puVar10;
                }
            }
            strcpy(iVar8 + 0xc,pcVar4);
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return;
    }
    auVar19 = __stack_chk_fail();
    puVar10 = auVar19._8_8_;
    iVar5 = auVar19._0_8_;
    *extraout_x18_01 = sym.perf_trace_tlbsync_timeout;
    pcStack_1b8 = sym.perf_trace_tlbsync_timeout;
    iVar8 = sp_el0;
    iStack_1c8 = *(iVar8 + 0x5e0);
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    pcVar4 = puVar10[0xe];
    if (puVar10[0xe] == NULL) {
        pcVar4 = "(null)";
        if (*puVar10 != NULL) {
            pcVar4 = *puVar10;
        }
    }
    pppuStack_1c0 = &ppuStack_130;
    iStack_1b0 = unaff_x25;
    uStack_1a0 = uVar17;
    iStack_198 = iVar7;
    piStack_190 = piVar16;
    uStack_188 = uVar14;
    auStack_180 = auVar18;
    iVar2 = strlen(pcVar4);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(iVar5 + 0x78);
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar16 = (iVar2 + 0x18U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(piVar16,&iStack_1d0,&uStack_1d4);
        uVar12 = _trace_event_reg;
        if (iVar8 != 0) {
            *(iStack_1d0 + 0xe8) = &pppuStack_1c0;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x800934c;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar8 + 8) = iVar2 * 0x10000 + 0x1000c;
            pcVar4 = puVar10[0xe];
            if (puVar10[0xe] == NULL) {
                pcVar4 = "(null)";
                if (*puVar10 != NULL) {
                    pcVar4 = *puVar10;
                }
            }
            strcpy(iVar8 + 0xc,pcVar4);
            perf_trace_run_bpf_submit(iVar8,piVar16,uStack_1d4,iVar5,1,iStack_1d0,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar7 = auVar18._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_02 = 0x80094d4;
    uStack_208 = 0x80094d4;
    iVar8 = sp_el0;
    iStack_218 = *(iVar8 + 0x5e0);
    uVar15 = *(iVar7 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar11 = uVar15;
    pppuStack_210 = &pppuStack_1c0;
    piStack_200 = piVar1;
    if ((uVar11 >> 8 & 1) == 0) {
        if ((uVar11 >> 7 & 1) != 0) {
            puStack_1f0 = puVar10;
            iStack_1e8 = iVar5;
            event_triggers_call(iVar7,0,0,0);
            auVar19._8_8_ = puStack_1f0;
            auVar19._0_8_ = iStack_1e8;
        }
        puStack_1f0 = auVar19._8_8_;
        iStack_1e8 = auVar19._0_8_;
        if ((uVar11 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar11 >> 9 & 1) != 0) {
            uVar12 = trace_event_ignore_this_pid(iVar7);
            auVar19._8_8_ = puStack_1f0;
            auVar19._0_8_ = iStack_1e8;
            if ((uVar12 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_1f0 = auVar19._8_8_;
    iStack_1e8 = auVar19._0_8_;
    iVar8 = trace_event_buffer_reserve(&uStack_248,iVar7,0x10);
    auVar19._8_8_ = puStack_1f0;
    auVar19._0_8_ = iStack_1e8;
    if (iVar8 != 0) {
        *(iVar8 + 8) = auVar18._8_8_;
        trace_event_buffer_commit(&uStack_248);
        auVar19._8_8_ = puStack_1f0;
        auVar19._0_8_ = iStack_1e8;
    }
code_r0x08009570:
    puStack_1f0 = auVar19._8_8_;
    iStack_1e8 = auVar19._0_8_;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_218) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar7 = auVar19._0_8_;
    *extraout_x18_03 = sym.perf_trace_smmu_init;
    pcStack_278 = sym.perf_trace_smmu_init;
    iVar8 = sp_el0;
    iStack_288 = *(iVar8 + 0x5e0);
    iStack_290 = 0;
    uStack_294 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(iVar7 + 0x78);
    pppuStack_280 = &pppuStack_210;
    piStack_270 = piVar16;
    uStack_268 = uVar15;
    auStack_260 = auVar18;
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar8 = perf_trace_buf_alloc(0x14,&iStack_290,&uStack_294);
        uVar12 = _trace_event_reg;
        if (iVar8 != 0) {
            *(iStack_290 + 0xe8) = &pppuStack_280;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x80095a4;
            *(iStack_290 + 0x108) = 5;
            *(iVar8 + 8) = auVar19._8_8_;
            perf_trace_run_bpf_submit(iVar8,0x14,uStack_294,iVar7,1,iStack_290,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_288) {
        __stack_chk_fail();
        uVar15 = tpidr_el2;
        *extraout_x18_04 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_map_sg @ 0x08009058 (size 476) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_map_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint32_t in_w4;
    char *pcVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t *piVar14;
    uint64_t unaff_x24;
    int64_t unaff_x25;
    uint64_t unaff_x30;
    uchar auVar15 [16];
    uchar auVar16 [16];
    uchar auStack_220 [12];
    uint uStack_214;
    int64_t iStack_210;
    int64_t iStack_208;
    uchar *puStack_200;
    code *pcStack_1f8;
    int64_t *piStack_1f0;
    ulong uStack_1e8;
    uchar auStack_1e0 [16];
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar *puStack_190;
    ulong uStack_188;
    int64_t *piStack_180;
    ulong *puStack_170;
    int64_t iStack_168;
    uchar auStack_160 [12];
    uint uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    int64_t iStack_130;
    uint64_t uStack_120;
    int64_t iStack_118;
    int64_t *piStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [16];
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uVar10 = in_w4;
    iStack_70 = 0;
    uStack_74 = 0;
    pcVar3 = (*(arg2 + 8))[0xe];
    if (pcVar3 == NULL) {
        pcVar8 = **(arg2 + 8);
        pcVar3 = "(null)";
        if (pcVar8 != NULL) {
            pcVar3 = pcVar8;
        }
    }
    iVar2 = strlen(pcVar3);
    iVar4 = tpidr_el1;
    piVar14 = iVar4 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar14 != 0)) {
        unaff_x24 = (iVar2 + 0x2cU & 0xfffffff8) - 4;
        iVar4 = perf_trace_buf_alloc(unaff_x24,&stack0xffffffffffffff90,&stack0xffffffffffffff8c);
        uVar12 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar9 = -1L << (uVar12 & 0x3f);
            uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar9 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar12;
            *(iStack_70 + 0x108) = 5;
            *(iVar4 + 8) = iVar2 * 0x10000 + 0x10020;
            pcVar3 = (*(arg2 + 8))[0xe];
            if (pcVar3 == NULL) {
                pcVar8 = **(arg2 + 8);
                pcVar3 = "(null)";
                if (pcVar8 != NULL) {
                    pcVar3 = pcVar8;
                }
            }
            strcpy(iVar4 + 0x20,pcVar3);
            *(iVar4 + 0x10) = arg3;
            arg3 = 0;
            if (in_w4 != 0) {
                do {
                    arg3 = arg3 + *(arg4 + 0xc);
                    arg4 = sg_next(arg4);
                    uVar11 = uVar10 - 1;
                    uVar10 = uVar11;
                } while (uVar11 != 0);
            }
            *(iVar4 + 0x18) = arg3;
            perf_trace_run_bpf_submit(iVar4,unaff_x24,uStack_74,arg1,1,iStack_70,piVar14,0);
            unaff_x25 = iVar4;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return;
    }
    auVar15 = __stack_chk_fail();
    puVar7 = auVar15._8_8_;
    iVar5 = auVar15._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x8009228;
    uStack_a8 = 0x8009228;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar12 = *(iVar5 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar11 = uVar12;
    puStack_b0 = &stack0xffffffffffffffa0;
    iStack_a0 = arg4;
    uStack_90 = uVar10;
    iStack_88 = arg1;
    if ((uVar11 >> 8 & 1) == 0) {
        if ((uVar11 >> 7 & 1) != 0) {
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar11 >> 6 & 1) == 0) &&
           (((uVar11 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar5), (uVar10 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar3 = puVar7[0xe];
        if (puVar7[0xe] == NULL) {
            pcVar3 = "(null)";
            if (*puVar7 != NULL) {
                pcVar3 = *puVar7;
            }
        }
        iVar2 = strlen(pcVar3);
        uVar11 = iVar2 + 1;
        uVar12 = uVar11;
        iVar4 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar5,uVar11 + 0xc);
        if (iVar4 != 0) {
            *(iVar4 + 8) = uVar11 * 0x10000 | 0xc;
            pcVar3 = puVar7[0xe];
            if (puVar7[0xe] == NULL) {
                pcVar3 = "(null)";
                if (*puVar7 != NULL) {
                    pcVar3 = *puVar7;
                }
            }
            strcpy(iVar4 + 0xc,pcVar3);
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar16 = __stack_chk_fail();
    puVar7 = auVar16._8_8_;
    iVar5 = auVar16._0_8_;
    *extraout_x18_00 = sym.perf_trace_tlbsync_timeout;
    pcStack_138 = sym.perf_trace_tlbsync_timeout;
    iVar4 = sp_el0;
    iStack_148 = *(iVar4 + 0x5e0);
    iStack_150 = 0;
    uStack_154 = 0;
    pcVar3 = puVar7[0xe];
    if (puVar7[0xe] == NULL) {
        pcVar3 = "(null)";
        if (*puVar7 != NULL) {
            pcVar3 = *puVar7;
        }
    }
    puStack_140 = &stack0xffffffffffffff50;
    iStack_130 = unaff_x25;
    uStack_120 = unaff_x24;
    iStack_118 = arg3;
    piStack_110 = piVar14;
    uStack_108 = uVar12;
    auStack_100 = auVar15;
    iVar2 = strlen(pcVar3);
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        piVar14 = (iVar2 + 0x18U & 0xfffffff8) - 4;
        iVar4 = perf_trace_buf_alloc(piVar14,&stack0xfffffffffffffeb0,&stack0xfffffffffffffeac);
        uVar10 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            *(iStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            *(iStack_150 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800934c;
            *(iStack_150 + 0x108) = 5;
            *(iVar4 + 8) = iVar2 * 0x10000 + 0x1000c;
            pcVar3 = puVar7[0xe];
            if (puVar7[0xe] == NULL) {
                pcVar3 = "(null)";
                if (*puVar7 != NULL) {
                    pcVar3 = *puVar7;
                }
            }
            strcpy(iVar4 + 0xc,pcVar3);
            perf_trace_run_bpf_submit(iVar4,piVar14,uStack_154,iVar5,1,iStack_150,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_148) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar6 = auVar15._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_01 = 0x80094d4;
    uStack_188 = 0x80094d4;
    iVar4 = sp_el0;
    iStack_198 = *(iVar4 + 0x5e0);
    uVar13 = *(iVar6 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar11 = uVar13;
    puStack_190 = &stack0xfffffffffffffec0;
    piStack_180 = piVar1;
    if ((uVar11 >> 8 & 1) == 0) {
        if ((uVar11 >> 7 & 1) != 0) {
            puStack_170 = puVar7;
            iStack_168 = iVar5;
            event_triggers_call(iVar6,0,0,0);
            auVar16._8_8_ = puStack_170;
            auVar16._0_8_ = iStack_168;
        }
        puStack_170 = auVar16._8_8_;
        iStack_168 = auVar16._0_8_;
        if ((uVar11 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar11 >> 9 & 1) != 0) {
            uVar10 = trace_event_ignore_this_pid(iVar6);
            auVar16._8_8_ = puStack_170;
            auVar16._0_8_ = iStack_168;
            if ((uVar10 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_170 = auVar16._8_8_;
    iStack_168 = auVar16._0_8_;
    iVar4 = trace_event_buffer_reserve(&stack0xfffffffffffffe38,iVar6,0x10);
    auVar16._8_8_ = puStack_170;
    auVar16._0_8_ = iStack_168;
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar15._8_8_;
        trace_event_buffer_commit(&stack0xfffffffffffffe38);
        auVar16._8_8_ = puStack_170;
        auVar16._0_8_ = iStack_168;
    }
code_r0x08009570:
    puStack_170 = auVar16._8_8_;
    iStack_168 = auVar16._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_198) {
        return;
    }
    auVar16 = __stack_chk_fail();
    iVar5 = auVar16._0_8_;
    *extraout_x18_02 = sym.perf_trace_smmu_init;
    pcStack_1f8 = sym.perf_trace_smmu_init;
    iVar4 = sp_el0;
    iStack_208 = *(iVar4 + 0x5e0);
    iStack_210 = 0;
    uStack_214 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_200 = &stack0xfffffffffffffe70;
    piStack_1f0 = piVar14;
    uStack_1e8 = uVar13;
    auStack_1e0 = auVar15;
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffdf0,&stack0xfffffffffffffdec);
        uVar10 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_210 + 0xe8) = &stack0xfffffffffffffe00;
            *(iStack_210 + 0xf8) = &stack0xfffffffffffffde0;
            *(iStack_210 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x80095a4;
            *(iStack_210 + 0x108) = 5;
            *(iVar4 + 8) = auVar16._8_8_;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_214,iVar5,1,iStack_210,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_208) {
        return;
    }
    __stack_chk_fail();
    uVar13 = tpidr_el2;
    *extraout_x18_03 = 0x80096b4;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.trace_event_raw_event_tlbsync_timeout @ 0x08009234 (size 280) =====

//WARNING: Removing unreachable block (ram,0x08009438)
//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_tlbsync_timeout(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar9;
    ulong uVar10;
    uint64_t unaff_x22;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    uchar auStack_1a0 [12];
    uint uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar ***pppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    ulong uStack_168;
    uchar auStack_160 [16];
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    int64_t *piStack_100;
    ulong *puStack_f0;
    int64_t iStack_e8;
    uchar auStack_e0 [12];
    uint uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    int64_t iVar5;
    ulong *puVar8;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar9 = *(arg1 + 0x48);
    if ((uVar9 >> 8 & 1) == 0) {
        if ((uVar9 >> 7 & 1) != 0) {
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar9 >> 6 & 1) == 0) &&
           (((uVar9 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x080092a4;
    }
    else {
code_r0x080092a4:
        pcVar6 = *(arg2 + 0x70);
        if (*(arg2 + 0x70) == NULL) {
            pcVar6 = "(null)";
            if (*arg2 != NULL) {
                pcVar6 = *arg2;
            }
        }
        iVar2 = strlen(pcVar6);
        iVar4 = trace_event_buffer_reserve(&uStack_68,arg1,iVar2 + 1 + 0xc);
        if (iVar4 != 0) {
            *(iVar4 + 8) = (iVar2 + 1) * 0x10000 | 0xc;
            pcVar6 = *(arg2 + 0x70);
            if (*(arg2 + 0x70) == NULL) {
                pcVar6 = "(null)";
                if (*arg2 != NULL) {
                    pcVar6 = *arg2;
                }
            }
            strcpy(iVar4 + 0xc,pcVar6);
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar11 = __stack_chk_fail();
    puVar8 = auVar11._8_8_;
    iVar5 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_tlbsync_timeout;
    pcStack_b8 = sym.perf_trace_tlbsync_timeout;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    pcVar6 = puVar8[0xe];
    if (puVar8[0xe] == NULL) {
        pcVar6 = "(null)";
        if (*puVar8 != NULL) {
            pcVar6 = *puVar8;
        }
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    iVar2 = strlen(pcVar6);
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        unaff_x22 = (iVar2 + 0x18U & 0xfffffff8) - 4;
        iVar4 = perf_trace_buf_alloc(unaff_x22,&iStack_d0,&uStack_d4);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x800934c;
            *(iStack_d0 + 0x108) = 5;
            *(iVar4 + 8) = iVar2 * 0x10000 + 0x1000c;
            pcVar6 = puVar8[0xe];
            if (puVar8[0xe] == NULL) {
                pcVar6 = "(null)";
                if (*puVar8 != NULL) {
                    pcVar6 = *puVar8;
                }
            }
            strcpy(iVar4 + 0xc,pcVar6);
            perf_trace_run_bpf_submit(iVar4,unaff_x22,uStack_d4,iVar5,1,iStack_d0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar7 = auVar12._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_00 = 0x80094d4;
    uStack_108 = 0x80094d4;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    uVar10 = *(iVar7 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar9 = uVar10;
    ppuStack_110 = &puStack_c0;
    piStack_100 = piVar1;
    if ((uVar9 >> 8 & 1) == 0) {
        if ((uVar9 >> 7 & 1) != 0) {
            puStack_f0 = puVar8;
            iStack_e8 = iVar5;
            event_triggers_call(iVar7,0,0,0);
            auVar11._8_8_ = puStack_f0;
            auVar11._0_8_ = iStack_e8;
        }
        puStack_f0 = auVar11._8_8_;
        iStack_e8 = auVar11._0_8_;
        if ((uVar9 >> 6 & 1) != 0) goto code_r0x08009570;
        if ((uVar9 >> 9 & 1) != 0) {
            uVar3 = trace_event_ignore_this_pid(iVar7);
            auVar11._8_8_ = puStack_f0;
            auVar11._0_8_ = iStack_e8;
            if ((uVar3 & 1) != 0) goto code_r0x08009570;
        }
    }
    puStack_f0 = auVar11._8_8_;
    iStack_e8 = auVar11._0_8_;
    iVar4 = trace_event_buffer_reserve(&uStack_148,iVar7,0x10);
    auVar11._8_8_ = puStack_f0;
    auVar11._0_8_ = iStack_e8;
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar12._8_8_;
        trace_event_buffer_commit(&uStack_148);
        auVar11._8_8_ = puStack_f0;
        auVar11._0_8_ = iStack_e8;
    }
code_r0x08009570:
    puStack_f0 = auVar11._8_8_;
    iStack_e8 = auVar11._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18_01 = sym.perf_trace_smmu_init;
    pcStack_178 = sym.perf_trace_smmu_init;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    iStack_190 = 0;
    uStack_194 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    pppuStack_180 = &ppuStack_110;
    uStack_170 = unaff_x22;
    uStack_168 = uVar10;
    auStack_160 = auVar12;
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_190,&uStack_194);
        uVar3 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_190 + 0xe8) = &pppuStack_180;
            *(iStack_190 + 0xf8) = auStack_1a0;
            *(iStack_190 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x80095a4;
            *(iStack_190 + 0x108) = 5;
            *(iVar4 + 8) = auVar11._8_8_;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_194,iVar5,1,iStack_190,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_188) {
        return;
    }
    __stack_chk_fail();
    uVar10 = tpidr_el2;
    *extraout_x18_02 = 0x80096b4;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.perf_trace_tlbsync_timeout @ 0x0800934c (size 404) =====

//WARNING: Removing unreachable block (ram,0x08009664)

void sym.perf_trace_tlbsync_timeout(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int iVar2;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar8;
    ulong uVar9;
    uint64_t unaff_x22;
    uint64_t unaff_x30;
    uchar auVar10 [16];
    uchar auVar11 [16];
    uchar auStack_130 [12];
    uint uStack_124;
    int64_t iStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    ulong uStack_f8;
    uchar auStack_f0 [16];
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    char *pcVar3;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    pcVar3 = *(arg2 + 0x70);
    if (*(arg2 + 0x70) == NULL) {
        pcVar3 = "(null)";
        if (*arg2 != NULL) {
            pcVar3 = *arg2;
        }
    }
    iVar2 = strlen(pcVar3);
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        unaff_x22 = (iVar2 + 0x18U & 0xfffffff8) - 4;
        iVar4 = perf_trace_buf_alloc(unaff_x22,&stack0xffffffffffffffa0,&stack0xffffffffffffff9c);
        uVar6 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            uVar7 = -1L << (uVar6 & 0x3f);
            uVar6 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar7 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar6;
            *(iStack_60 + 0x108) = 5;
            *(iVar4 + 8) = iVar2 * 0x10000 + 0x1000c;
            pcVar3 = *(arg2 + 0x70);
            if (*(arg2 + 0x70) == NULL) {
                pcVar3 = "(null)";
                if (*arg2 != NULL) {
                    pcVar3 = *arg2;
                }
            }
            strcpy(iVar4 + 0xc,pcVar3);
            perf_trace_run_bpf_submit(iVar4,unaff_x22,uStack_64,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar5 = auVar10._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18 = 0x80094d4;
    uStack_98 = 0x80094d4;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    uVar9 = *(iVar5 + 0x48);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar8 = uVar9;
    puStack_a0 = &stack0xffffffffffffffb0;
    piStack_90 = piVar1;
    iStack_80 = arg2;
    iStack_78 = arg1;
    if ((uVar8 >> 8 & 1) == 0) {
        if ((uVar8 >> 7 & 1) != 0) {
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar8 >> 6 & 1) != 0) ||
           (((uVar8 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) != 0))))
        goto code_r0x08009570;
    }
    iVar4 = trace_event_buffer_reserve(&stack0xffffffffffffff28,iVar5,0x10);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar10._8_8_;
        trace_event_buffer_commit(&stack0xffffffffffffff28);
    }
code_r0x08009570:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18_00 = sym.perf_trace_smmu_init;
    pcStack_108 = sym.perf_trace_smmu_init;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    iStack_120 = 0;
    uStack_124 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_110 = &stack0xffffffffffffff60;
    uStack_100 = unaff_x22;
    uStack_f8 = uVar9;
    auStack_f0 = auVar10;
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffee0,&stack0xfffffffffffffedc);
        uVar6 = _trace_event_reg;
        if (iVar4 != 0) {
            *(iStack_120 + 0xe8) = &stack0xfffffffffffffef0;
            *(iStack_120 + 0xf8) = &stack0xfffffffffffffed0;
            *(iStack_120 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x80095a4;
            *(iStack_120 + 0x108) = 5;
            *(iVar4 + 8) = auVar11._8_8_;
            perf_trace_run_bpf_submit(iVar4,0x14,uStack_124,iVar5,1,iStack_120,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return;
    }
    __stack_chk_fail();
    uVar9 = tpidr_el2;
    *extraout_x18_01 = 0x80096b4;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.trace_event_raw_event_smmu_init @ 0x080094e0 (size 196) =====

//WARNING: Removing unreachable block (ram,0x08009664)

void sym.trace_event_raw_event_smmu_init(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uchar auStack_c0 [12];
    uint uStack_b4;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar6 = *(arg1 + 0x48);
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar6 >> 6 & 1) != 0) ||
           (((uVar6 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) != 0))))
        goto code_r0x08009570;
    }
    iVar4 = trace_event_buffer_reserve(&uStack_68,arg1,0x10);
    if (iVar4 != 0) {
        *(iVar4 + 8) = arg2;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08009570:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar7 = __stack_chk_fail();
    iVar5 = auVar7._0_8_;
    *extraout_x18 = sym.perf_trace_smmu_init;
    pcStack_98 = sym.perf_trace_smmu_init;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_b0,&uStack_b4), uVar3 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_b0 + 0xe8) = &puStack_a0;
        *(iStack_b0 + 0xf8) = auStack_c0;
        *(iStack_b0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x80095a4;
        *(iStack_b0 + 0x108) = 5;
        *(iVar4 + 8) = auVar7._8_8_;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_b4,iVar5,1,iStack_b0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_a8) {
        __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x80096b4;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_smmu_init @ 0x080095a4 (size 284) =====

void sym.perf_trace_smmu_init(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_50 [12];
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    if (((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffc0,&stack0xffffffffffffffbc),
       uVar2 = _trace_event_reg, iVar4 != 0)) {
        *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_40 + 0xf8) = &stack0xffffffffffffffb0;
        *(iStack_40 + 0x100) = uVar2;
        *(iStack_40 + 0x108) = 5;
        *(iVar4 + 8) = arg2;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_44,arg1,1,iStack_40,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x80096b4;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_iommu_tlbi @ 0x080096c0 (size 36) =====

void sym.__bpf_trace_iommu_tlbi(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_iommu_pgtable @ 0x080096e4 (size 36) =====

void sym.__bpf_trace_iommu_pgtable(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4();
    return;
}


// ===== sym.__bpf_trace_iommu_map_pages @ 0x08009708 (size 36) =====

void sym.__bpf_trace_iommu_map_pages(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4();
    return;
}


// ===== sym.__bpf_trace_map_sg @ 0x0800972c (size 40) =====

void sym.__bpf_trace_map_sg(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4();
    return;
}


// ===== sym.__bpf_trace_tlbsync_timeout @ 0x08009754 (size 36) =====

void sym.__bpf_trace_tlbsync_timeout(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_smmu_init @ 0x08009778 (size 36) =====

void sym.__bpf_trace_smmu_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.arm_smmu_write_context_bank @ 0x0800979c (size 2228) =====

void sym.arm_smmu_write_context_bank(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    int iVar1;
    uint16_t uVar2;
    int iVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    int64_t iVar9;
    code *pcVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0x48);
    iVar5 = arg2;
    puVar12 = iVar9 + iVar5 * 0x30;
    iVar13 = *(puVar12 + 10);
    if (iVar13 == 0) {
        iVar5 = *(arg1 + 0x10) + iVar5;
        if ((*(arg1 + 0x28) != 0) && (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 != NULL)) {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
            }
            (*pcVar10)(arg1,iVar5,0,0);
            return;
        }
        uVar6 = 0;
        iVar9 = *(arg1 + 8);
        iVar5 = iVar5 << (*(arg1 + 0x14) & 0x1f);
        goto code_r0x08009b98;
    }
    iVar3 = iVar5 * 4;
    iVar1 = *(iVar13 + 0xc);
    if (*(arg1 + 0x20) != 0) {
        bVar4 = *(iVar13 + 0x10) == 1;
        uVar6 = bVar4;
        if ((*(arg1 + 0x18) >> 6 & 1) != 0) {
            uVar6 = bVar4 | *(iVar13 + 2) << 0x10;
        }
        if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
            sym.writel_relaxed(uVar6,*(arg1 + 8) + (1 << (*(arg1 + 0x14) & 0x1f)) + iVar3 + 0x800);
        }
        else {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
            }
            (*pcVar10)(arg1,1,iVar3 + 0x800,uVar6);
        }
    }
    uVar8 = (*(iVar13 + 0xc) & 3) << 0x10;
    if (*(arg1 + 0x20) < 2) {
        uVar8 = uVar8 | *(iVar13 + 1) << 0x18;
    }
    if (iVar1 == 0) {
        if ((*(arg1 + 0x18) >> 6 & 1) == 0) {
            uVar7 = *(iVar13 + 2);
            goto code_r0x0800989c;
        }
    }
    else {
        uVar7 = 0xf300;
code_r0x0800989c:
        uVar8 = uVar8 | uVar7;
    }
    if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
        sym.writel_relaxed(uVar8,*(arg1 + 8) + (1 << (*(arg1 + 0x14) & 0x1f)) + iVar3);
    }
    else {
        if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
        }
        (*pcVar10)(arg1,1,iVar3,uVar8);
    }
    if ((iVar1 != 0) && (*(arg1 + 0x20) != 0)) {
        iVar3 = *(arg1 + 0x10) + iVar5;
        uVar8 = *(iVar9 + iVar5 * 0x30 + 0x14);
        if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
            sym.writel_relaxed(uVar8,*(arg1 + 8) + (iVar3 << (*(arg1 + 0x14) & 0x1f)) + 0x10);
        }
        else {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
            }
            (*pcVar10)(arg1,iVar3,0x10,uVar8);
        }
    }
    iVar11 = iVar5;
    iVar3 = *(arg1 + 0x10) + iVar5;
    uVar8 = *(iVar9 + iVar11 * 0x30 + 0x10);
    if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
        sym.writel_relaxed(uVar8,*(arg1 + 8) + (iVar3 << (*(arg1 + 0x14) & 0x1f)) + 0x30);
    }
    else {
        if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
        }
        (*pcVar10)(arg1,iVar3,0x30,uVar8);
    }
    iVar3 = *(arg1 + 0x10) + iVar5;
    if (*(iVar13 + 0x10) == 3) {
        uVar2 = *(iVar13 + 2);
        if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
            sym.writel_relaxed(uVar2,*(arg1 + 8) + (iVar3 << (*(arg1 + 0x14) & 0x1f)) + 0x34);
        }
        else {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
            }
            (*pcVar10)(arg1,iVar3,0x34,uVar2);
        }
        uVar8 = *puVar12;
        iVar3 = *(arg1 + 0x10) + iVar5;
        if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
            sym.writel_relaxed(uVar8,*(arg1 + 8) + (iVar3 << (*(arg1 + 0x14) & 0x1f)) + 0x20);
        }
        else {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
            }
            (*pcVar10)(arg1,iVar3,0x20,uVar8);
        }
        iVar3 = *(arg1 + 0x10) + iVar5;
        uVar8 = *(iVar9 + iVar11 * 0x30 + 8);
        if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
            sym.writel_relaxed(uVar8,*(arg1 + 8) + (iVar3 << (*(arg1 + 0x14) & 0x1f)) + 0x28);
        }
        else {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
            }
            (*pcVar10)(arg1,iVar3,0x28,uVar8);
        }
        if (iVar1 != 0) {
code_r0x08009a98:
            iVar1 = *(arg1 + 0x10) + iVar5;
            uVar8 = *(iVar9 + iVar11 * 0x30 + 0x18);
            if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed(uVar8,*(arg1 + 8) + (iVar1 << (*(arg1 + 0x14) & 0x1f)) + 0x38);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
                }
                (*pcVar10)(arg1,iVar1,0x38,uVar8);
            }
            iVar1 = *(arg1 + 0x10) + iVar5;
            uVar8 = *(iVar9 + iVar11 * 0x30 + 0x1c);
            if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed(uVar8,*(arg1 + 8) + (iVar1 << (*(arg1 + 0x14) & 0x1f)) + 0x3c);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
                }
                (*pcVar10)(arg1,iVar1,0x3c,uVar8);
            }
        }
    }
    else {
        iVar13 = *puVar12;
        if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 0x18), pcVar10 == NULL)) {
            sym.writeq_relaxed(iVar13,*(arg1 + 8) + (iVar3 << (*(arg1 + 0x14) & 0x1f)) + 0x20);
        }
        else {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiiyE_global_addr) {
                __cfi_slowpath_diag(0xccad771d3547f1f4,pcVar10,0x8001b90);
            }
            (*pcVar10)(arg1,iVar3,0x20,iVar13);
        }
        if (iVar1 != 0) {
            iVar1 = *(arg1 + 0x10) + iVar5;
            iVar13 = *(iVar9 + iVar11 * 0x30 + 8);
            if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 0x18), pcVar10 == NULL)) {
                sym.writeq_relaxed(iVar13,*(arg1 + 8) + (iVar1 << (*(arg1 + 0x14) & 0x1f)) + 0x28);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiiyE_global_addr) {
                    __cfi_slowpath_diag(0xccad771d3547f1f4,pcVar10,0x8001b90);
                }
                (*pcVar10)(arg1,iVar1,0x28,iVar13);
            }
            goto code_r0x08009a98;
        }
    }
    iVar13 = *(arg1 + 0x28);
    if (iVar13 == 0) {
        iVar5 = *(arg1 + 0x10) + iVar5;
        uVar8 = *(iVar9 + iVar11 * 0x30 + 0x20);
    }
    else {
        pcVar10 = *(iVar13 + 0x90);
        if (pcVar10 != NULL) {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceijE_global_addr) {
                __cfi_slowpath_diag(0x76fe840679a9431,pcVar10,0x8001b50);
            }
            (*pcVar10)(arg1,arg2 & 0xffffffff,*(iVar9 + iVar11 * 0x30 + 0x20));
            return;
        }
        pcVar10 = *(iVar13 + 8);
        iVar5 = *(arg1 + 0x10) + iVar5;
        uVar8 = *(iVar9 + iVar11 * 0x30 + 0x20);
        if (pcVar10 != NULL) {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001b70);
            }
            (*pcVar10)(arg1,iVar5,0,uVar8);
            return;
        }
    }
    uVar6 = uVar8;
    iVar9 = *(arg1 + 8);
    iVar5 = iVar5 << (*(arg1 + 0x14) & 0x1f);
code_r0x08009b98:
    sym.writel_relaxed(uVar6,iVar9 + iVar5);
    return;
}


// ===== sym.trace_raw_output_iommu_tlbi @ 0x0800a050 (size 112) =====

void sym.trace_raw_output_iommu_tlbi(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"group=%s\n",iVar2 + *(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_iommu_pgtable @ 0x0800a0c0 (size 120) =====

void sym.trace_raw_output_iommu_pgtable(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"group=%s table_base_iova=%lx table_ipa=%llx table_size=%zx\n",iVar2 + *(iVar2 + 8),
                           *(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_iommu_map_pages @ 0x0800a138 (size 124) =====

void sym.trace_raw_output_iommu_map_pages(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"group=%s iova=%lx size=%zx pgsize=%zx pgcount=%zx\n",iVar2 + *(iVar2 + 8),
                           *(iVar2 + 0x10),*(iVar2 + 0x20) * *(iVar2 + 0x18));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_map_sg @ 0x0800a1b4 (size 116) =====

void sym.trace_raw_output_map_sg(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"group=%s iova=%lx size=%lx\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0x10),*(iVar2 + 0x18))
        ;
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_tlbsync_timeout @ 0x0800a228 (size 112) =====

void sym.trace_raw_output_tlbsync_timeout(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"smmu=%s\n",iVar2 + *(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_smmu_init @ 0x0800a298 (size 108) =====

void sym.trace_raw_output_smmu_init(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"ARM SMMU init latency: %lld us\n",*(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.writel_relaxed @ 0x0800a304 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800a320);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800a348);
    return;
}


// ===== sym.writel_relaxed_1 @ 0x0800a37c (size 120) =====

void sym.writel_relaxed_1(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800a398);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800a3c0);
    return;
}


// ===== sym.writel_relaxed_2 @ 0x0800a3f4 (size 120) =====

void sym.writel_relaxed_2(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800a410);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800a438);
    return;
}


// ===== sym.writel_relaxed_3 @ 0x0800a46c (size 120) =====

void sym.writel_relaxed_3(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800a488);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800a4b0);
    return;
}


// ===== sym.writeq_relaxed @ 0x0800a4e4 (size 108) =====

void sym.writeq_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1,0x40,arg2,0x800a4e8);
    *arg2 = arg1;
    log_post_write_mmio(arg1,0x40,arg2,0x800a520);
    return;
}


// ===== sym.writeq_relaxed_1 @ 0x0800a550 (size 108) =====

void sym.writeq_relaxed_1(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1,0x40,arg2,0x800a554);
    *arg2 = arg1;
    log_post_write_mmio(arg1,0x40,arg2,0x800a58c);
    return;
}


// ===== sym.arm_smmu_device_probe @ 0x0800a5bc (size 1356) =====

uint64_t sym.arm_smmu_device_probe(int64_t arg1)

{
    uint64_t *puVar1;
    uint16_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    uint *puVar11;
    ulong uVar12;
    ulong *arg1_00;
    int64_t iVar13;
    char *pcVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar15;
    uint64_t uVar16;
    ulong *puVar17;
    ulong unaff_x30;
    ulong uStack_68;
    int *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    piStack_60 = NULL;
    uVar8 = qcom_dma_iommu_is_ready();
    if ((uVar8 & 1) == 0) {
        uVar8 = 0xfffffdfb;
        goto code_r0x0800a890;
    }
    iVar13 = arg1 + 0x10;
    piVar9 = devm_kmalloc(iVar13,0x130,0xdc0);
    if (piVar9 == NULL) {
        _dev_err(iVar13,"failed to allocate arm_smmu_device\n");
        uVar8 = 0xfffffff4;
        goto code_r0x0800a890;
    }
    iVar10 = *(arg1 + 0x300);
    *piVar9 = iVar13;
    if (iVar10 != 0) {
        iVar5 = of_property_read_variable_u32_array(iVar10,"#global-interrupts",piVar9 + 0x18,1,0);
        if (-1 < iVar5) {
            puVar11 = of_device_get_match_data(iVar13);
            *(piVar9 + 4) = *puVar11;
            uVar12 = *(arg1 + 0x300);
            *(piVar9 + 0x24) = puVar11[1];
            iVar10 = of_find_property(uVar12,"mmu-masters",0);
            if (iVar10 == 0) {
                if (obj.using_legacy_binding == 0x1) goto code_r0x0800a87c;
                pcVar15 = obj.using_generic_binding;
            }
            else {
                if ((obj.using_generic_binding & 1) != 0) {
code_r0x0800a87c:
                    pcVar14 = "not probing due to mismatched DT properties\n";
                    goto code_r0x0800a884;
                }
                pcVar15 = obj.using_legacy_binding;
                if ((obj.using_legacy_binding & 1) == 0) {
                    _printk(0x800338f,"SMMU");
                    pcVar15 = obj.using_legacy_binding;
                }
            }
            uVar12 = *(arg1 + 0x300);
            *pcVar15 = 0x1;
            uVar8 = of_dma_is_coherent(uVar12);
            if ((uVar8 & 1) != 0) {
                *(piVar9 + 3) = *(piVar9 + 3) | 1;
            }
            uVar8 = devm_platform_get_and_ioremap_resource(arg1,0,&piStack_60);
            piVar9[1] = uVar8;
            if (0xfffffffffffff000 < uVar8) goto code_r0x0800a890;
            uStack_68 = *piStack_60;
            *(piVar9 + 2) = (piStack_60[2] - *piStack_60) + 1;
            arg1_00 = sym.arm_smmu_impl_init(piVar9);
            if (0xfffffffffffff000 < arg1_00) {
                uVar8 = arg1_00 & 0xffffffff;
                goto code_r0x0800a890;
            }
            piStack_60 = platform_get_resource(arg1,0x400,0);
            uVar8 = 0;
            while (iVar5 = uVar8, piStack_60 != NULL) {
                uVar8 = iVar5 + 1U;
                if (*(arg1_00 + 0x18) < iVar5 + 1U) {
                    *(arg1_00 + 0xc4) = *(arg1_00 + 0xc4) + 1;
                }
                piStack_60 = platform_get_resource(arg1,0x400,uVar8);
            }
            if (*(arg1_00 + 0xc4) == 0) {
                _dev_err(iVar13,"found %d interrupts but expected at least %d\n",uVar8,*(arg1_00 + 0x18) + 1);
                goto code_r0x0800a88c;
            }
            if (iVar5 >> 0x3e == 0) {
                iVar10 = devm_kmalloc(iVar13,-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2,0xdc0);
                arg1_00[0x19] = iVar10;
                if (iVar10 != 0) {
                    if (0 < iVar5) {
                        uVar16 = 0;
                        do {
                            iVar5 = platform_get_irq(arg1,uVar16 & 0xffffffff);
                            if (iVar5 < 0) {
                                _dev_err(iVar13,"failed to get irq index %d\n",uVar16 & 0xffffffff);
                                goto code_r0x0800a88c;
                            }
                            *(arg1_00[0x19] + uVar16 * 4) = iVar5;
                            uVar16 = uVar16 + 1;
                        } while (uVar8 != uVar16);
                    }
                    uVar8 = sym.arm_smmu_init_power_resources(iVar13);
                    arg1_00[0x23] = uVar8;
                    if (0xfffffffffffff000 < uVar8) {
                        uVar8 = uVar8 & 0xffffffff;
                        goto code_r0x0800a890;
                    }
                    uVar16 = sym.arm_smmu_power_on(uVar8);
                    uVar8 = uVar16 & 0xffffffff;
                    if (uVar16 != 0) goto code_r0x0800a890;
                    uVar16 = sym.arm_smmu_device_cfg_probe(arg1_00);
                    uVar8 = uVar16 & 0xffffffff;
                    if (uVar16 == 0) {
                        uVar16 = sym.arm_smmu_parse_impl_def_registers(arg1_00);
                        uVar8 = uVar16 & 0xffffffff;
                        if (uVar16 == 0) {
                            if (*(arg1_00 + 4) == 2) {
                                if (*(arg1_00 + 0xc4) < *(arg1_00 + 6)) {
                                    _dev_err(iVar13,"found only %d context irq(s) but %d required\n");
                                    uVar8 = 0xffffffed;
                                    goto code_r0x0800a860;
                                }
                                *(arg1_00 + 0xc4) = *(arg1_00 + 6);
                            }
                            if ((arg1_00[5] == 0) || (pcVar15 = *(arg1_00[5] + 0x70), pcVar15 == NULL)) {
                                pcVar15 = sym.arm_smmu_global_fault.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
                            }
                            if (*(arg1_00 + 0x18) != 0) {
                                uVar7 = 0;
                                do {
                                    uVar6 = devm_request_threaded_irq
                                                      (*arg1_00,*(arg1_00[0x19] + uVar7 * 4),0,pcVar15,0x2080,
                                                       0x80030a5,arg1_00);
                                    if (uVar6 != 0) {
                                        uVar8 = uVar6;
                                        _dev_err(iVar13,"failed to request global IRQ %d (%u)\n",uVar7,
                                                 *(arg1_00[0x19] + uVar7 * 4));
                                        goto code_r0x0800a860;
                                    }
                                    uVar7 = uVar7 + 1;
                                } while (uVar7 < *(arg1_00 + 0x18));
                            }
                            piStack_60 = platform_get_resource(arg1,0x200,0);
                            if (piStack_60 == NULL) {
                                uVar8 = 0;
                            }
                            else {
                                arg1_00[0x24] = *piStack_60;
                                sym.parse_driver_options(arg1_00);
                                uVar16 = sym.arm_smmu_handoff_cbs(arg1_00);
                                uVar8 = uVar16 & 0xffffffff;
                                if (uVar16 == 0) {
                                    puVar17 = arg1_00 + 0x1c;
                                    uVar7 = iommu_device_sysfs_add(puVar17,*arg1_00,0,"smmu.%pa",&uStack_68);
                                    if (uVar7 == 0) {
                                        uVar7 = iommu_device_register
                                                          (puVar17,
                                                           reloc.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt
                                                           ,iVar13);
                                        if (uVar7 == 0) {
                                            *(arg1 + 0xa8) = arg1_00;
                                            sym.arm_smmu_device_reset(arg1_00);
                                            sym.arm_smmu_test_smr_masks(arg1_00);
                                            if (*(arg1_00[0x23] + 0x20) != 0) {
                                                __pm_runtime_set_status(iVar13,0);
                                                pm_runtime_enable(iVar13);
                                            }
                                            if ((obj.using_legacy_binding & 1) != 0) {
                                                uVar8 = 0;
                                                goto code_r0x0800a890;
                                            }
                                            uVar16 = sym.arm_smmu_bus_init(0x8001590);
                                            uVar8 = uVar16 & 0xffffffff;
                                            if (uVar16 == 0) goto code_r0x0800a890;
                                            iommu_device_unregister(puVar17);
                                        }
                                        else {
                                            uVar8 = uVar7;
                                            _dev_err(iVar13,"Failed to register iommu\n");
                                        }
                                        iommu_device_sysfs_remove(puVar17);
                                    }
                                    else {
                                        uVar8 = uVar7;
                                        _dev_err(iVar13,"Failed to register iommu in sysfs\n");
                                    }
                                }
                            }
                        }
                    }
code_r0x0800a860:
                    sym.arm_smmu_power_off(arg1_00,arg1_00[0x23]);
                    goto code_r0x0800a890;
                }
            }
            else {
                arg1_00[0x19] = 0;
            }
            _dev_err(iVar13,"failed to allocate %d irqs\n",uVar8);
            uVar8 = 0xfffffff4;
            goto code_r0x0800a890;
        }
        pcVar14 = "missing #global-interrupts property\n";
code_r0x0800a884:
        _dev_err(iVar13,pcVar14);
    }
code_r0x0800a88c:
    uVar8 = 0xffffffed;
code_r0x0800a890:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return uVar8 & 0xffffffff;
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18 = sym.arm_smmu_device_remove;
    piVar9 = *(iVar13 + 0xa8);
    if (piVar9 == NULL) {
        return 0xffffffed;
    }
    iVar10 = _find_first_bit(piVar9 + 7,0x80);
    if (iVar10 != 0x80) {
        _dev_notice(iVar13 + 0x10,"disabling translation\n");
    }
    sym.arm_smmu_bus_init(0);
    iommu_device_unregister(piVar9 + 0x1c);
    iommu_device_sysfs_remove(piVar9 + 0x1c);
    if ((piVar9[5] != 0) && (pcVar15 = *(piVar9[5] + 0x50), pcVar15 != NULL)) {
        if (1 < (pcVar15 + -0x8008050 >> 3 | pcVar15 << 0x3d)) {
            __cfi_slowpath_diag(0x26d8a99cd42ad740,pcVar15,0x8001e30);
        }
        (*pcVar15)(piVar9);
    }
    iVar13 = *piVar9;
    if (((*(iVar13 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar13,4), iVar5 < 0)) {
        puVar1 = iVar13 + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar6 = *puVar1;
                uVar8 = uVar6;
                if (uVar6 != uVar7) goto code_r0x0800ac64;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800ac64:
        } while (uVar7 != uVar6);
    }
    if ((piVar9[5] == 0) || (pcVar15 = *(piVar9[5] + 8), pcVar15 == NULL)) {
        sym.writel_relaxed(1,piVar9[1]);
    }
    else {
        if (pcVar15 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar15,0x8001b70);
        }
        (*pcVar15)(piVar9,0,0,1);
    }
    iVar13 = *piVar9;
    uVar2 = *(iVar13 + 0x200);
    if ((uVar2 & 7) == 0) {
        uVar12 = ktime_get_mono_fast_ns();
        *(iVar13 + 0x218) = uVar12;
        __pm_runtime_idle(*piVar9,5);
        iVar13 = *piVar9;
        uVar2 = *(iVar13 + 0x200);
    }
    if ((uVar2 & 7) == 0) {
        pm_runtime_force_suspend(iVar13);
    }
    else {
        sym.arm_smmu_power_off(piVar9,piVar9[0x23]);
    }
    return 0;
}


// ===== sym.arm_smmu_device_remove @ 0x0800ab08 (size 544) =====

ulong sym.arm_smmu_device_remove(int64_t arg1)

{
    uint64_t *puVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *arg1_00;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00 == NULL) {
        return 0xffffffed;
    }
    iVar7 = _find_first_bit(arg1_00 + 7,0x80);
    if (iVar7 != 0x80) {
        _dev_notice(arg1 + 0x10,"disabling translation\n");
    }
    sym.arm_smmu_bus_init(0);
    iommu_device_unregister(arg1_00 + 0x1c);
    iommu_device_sysfs_remove(arg1_00 + 0x1c);
    if ((arg1_00[5] != 0) && (pcVar11 = *(arg1_00[5] + 0x50), pcVar11 != NULL)) {
        if (1 < (pcVar11 + -0x8008050 >> 3 | pcVar11 << 0x3d)) {
            __cfi_slowpath_diag(0x26d8a99cd42ad740,pcVar11,0x8001e30);
        }
        (*pcVar11)(arg1_00);
    }
    iVar7 = *arg1_00;
    if (((*(iVar7 + 0x200) & 7) == 0) && (iVar6 = __pm_runtime_resume(iVar7,4), iVar6 < 0)) {
        puVar1 = iVar7 + 0x1f8;
        uVar10 = *puVar1;
        do {
            uVar9 = uVar10;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar10 = uVar3;
                if (uVar3 != uVar9) goto code_r0x0800ac64;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar9 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800ac64:
        } while (uVar9 != uVar3);
    }
    if ((arg1_00[5] == 0) || (pcVar11 = *(arg1_00[5] + 8), pcVar11 == NULL)) {
        sym.writel_relaxed(1,arg1_00[1]);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar11,0x8001b70);
        }
        (*pcVar11)(arg1_00,0,0,1);
    }
    iVar7 = *arg1_00;
    uVar2 = *(iVar7 + 0x200);
    if ((uVar2 & 7) == 0) {
        uVar8 = ktime_get_mono_fast_ns();
        *(iVar7 + 0x218) = uVar8;
        __pm_runtime_idle(*arg1_00,5);
        iVar7 = *arg1_00;
        uVar2 = *(iVar7 + 0x200);
    }
    if ((uVar2 & 7) == 0) {
        pm_runtime_force_suspend(iVar7);
    }
    else {
        sym.arm_smmu_power_off(arg1_00,arg1_00[0x23]);
    }
    return 0;
}


// ===== sym.arm_smmu_device_shutdown @ 0x0800ad28 (size 36) =====

void sym.arm_smmu_device_shutdown(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_device_remove(arg1);
    return;
}


// ===== sym.arm_smmu_device_cfg_probe @ 0x0800ad4c (size 1924) =====

void sym.arm_smmu_device_cfg_probe(int64_t arg1)

{
    int64_t iVar1;
    code cVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong uVar7;
    char *pcVar8;
    uint uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    code *pcVar12;
    ulong *in_x18;
    code *unaff_x20;
    uint64_t uVar13;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uVar4 = *(arg1 + 0x18);
    uStack_40 = 0;
    _dev_notice(*arg1,"probing hardware configuration...\n");
    uVar9 = 1;
    if (*(arg1 + 0x20) == 2) {
        uVar9 = 2;
    }
    _dev_notice(*arg1,"SMMUv%d with:\n",uVar9);
    if ((*(arg1 + 0x28) == NULL) || (unaff_x20 = **(arg1 + 0x28), unaff_x20 == NULL)) {
        uVar5 = sym.readl_relaxed(*(arg1 + 8) + 0x20);
    }
    else {
        if (unaff_x20 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,unaff_x20,0x8001bd0);
        }
        uVar5 = (*unaff_x20)(arg1,0,0x20);
    }
    if (_segment.ehdr == 2) {
        uVar13 = uVar5 & 0xafffffff;
code_r0x0800adf0:
        if ((uVar13 >> 0x1d & 1) == 0) goto code_r0x0800adf4;
code_r0x0800b0e8:
        *(arg1 + 0x18) = *(arg1 + 0x18) | 8;
        _dev_notice(*arg1,"\tstage 2 translation\n");
        uVar10 = uVar13;
    }
    else {
        if (_segment.ehdr == 1) {
            uVar5 = uVar5 & 0xcfffffff;
        }
        uVar13 = uVar5 & 0xffffffff;
        if ((uVar5 >> 0x1e & 1) == 0) goto code_r0x0800adf0;
        *(arg1 + 0x18) = *(arg1 + 0x18) | 4;
        _dev_notice(*arg1,"\tstage 1 translation\n");
        if ((uVar5 >> 0x1d & 1) != 0) goto code_r0x0800b0e8;
code_r0x0800adf4:
        uVar10 = uVar13;
    }
    if ((uVar10 >> 0x1c & 1) != 0) {
        *(arg1 + 0x18) = *(arg1 + 0x18) | 0x10;
        _dev_notice(*arg1,"\tnested translation\n");
    }
    if ((*(arg1 + 0x18) & 0xc) == 0) {
        uVar7 = *arg1;
        pcVar8 = "\tno translation support!\n";
code_r0x0800b164:
        _dev_err(uVar7,pcVar8);
        uVar7 = 0xffffffed;
    }
    else {
        uVar4 = uVar4 & 1;
        uVar10 = uVar13;
        if (((uVar10 >> 0x1e & 1) == 0) || ((1 < *(arg1 + 0x20) && ((uVar10 >> 0x1a & 1) != 0)))) {
            if (uVar4 != 0) goto code_r0x0800b190;
code_r0x0800ae24:
            if ((uVar13 & 0x4000) != 0) {
                pcVar8 = "non-";
                goto code_r0x0800b198;
            }
        }
        else {
            *(arg1 + 0x18) = *(arg1 + 0x18) | 0x20;
            _dev_notice(*arg1,"\taddress translation ops\n");
            if (uVar4 == 0) goto code_r0x0800ae24;
code_r0x0800b190:
            pcVar8 = 0x80037b6;
code_r0x0800b198:
            _dev_notice(*arg1,"\t%scoherent table walk\n",pcVar8);
        }
        if (uVar4 != (uVar13 & 0x4000) >> 0xe) {
            _dev_notice(*arg1,"\t(IDR0.CTTW overridden by FW configuration)\n");
        }
        if ((*(arg1 + 0x20) == 2) && ((uVar10 >> 8 & 1) != 0)) {
            unaff_x20 = 0x10000;
            *(arg1 + 0x18) = *(arg1 + 0x18) | 0x1000;
        }
        else {
            unaff_x20 = 1 << (uVar10 >> 9 & 0xf);
        }
        *(arg1 + 0x58) = unaff_x20 + -1;
        if ((uVar10 >> 0x1b & 1) == 0) {
code_r0x0800ae70:
            puVar6 = devm_kmalloc(*arg1,unaff_x20 * 0x18,0xcc0);
            *(arg1 + 0x68) = puVar6;
            if (puVar6 != NULL) {
                *puVar6 = 0;
                puVar6[2] = 0;
                cVar2 = obj.disable_bypass;
                uVar9 = 1;
                if (obj.disable_bypass != 0x0) {
                    uVar9 = 2;
                }
                uVar4 = unaff_x20;
                *(puVar6 + 1) = 0;
                *(puVar6 + 0xc) = uVar9;
                if (uVar4 != 1) {
                    puVar6[3] = 0;
                    uVar9 = 1;
                    if (cVar2 != 0x0) {
                        uVar9 = 2;
                    }
                    puVar6[5] = 0;
                    *(puVar6 + 4) = 0;
                    *(puVar6 + 0x24) = uVar9;
                    if (uVar4 != 2) {
                        iVar11 = 0;
                        pcVar12 = unaff_x20 + -2;
                        do {
                            iVar1 = *(arg1 + 0x68) + iVar11;
                            uVar9 = 1;
                            if (obj.disable_bypass != 0x0) {
                                uVar9 = 2;
                            }
                            iVar11 = iVar11 + 0x18;
                            pcVar12 = pcVar12 + -1;
                            *(iVar1 + 0x30) = 0;
                            *(iVar1 + 0x38) = 0;
                            *(iVar1 + 0x3c) = uVar9;
                            *(iVar1 + 0x40) = 0;
                        } while (pcVar12 != NULL);
                    }
                }
                iVar3 = of_property_read_variable_u32_array
                                  (*(*arg1 + 0x2f0),"qcom,num-smr-override",&uStack_40 + 4,1,0);
                if (-1 < iVar3) {
                    if (uVar4 != uStack_40._4_4_) {
                        if (uStack_40._4_4_ <= uVar4) {
                            uVar4 = uStack_40._4_4_;
                        }
                        unaff_x20 = uVar4;
                    }
                }
                *(arg1 + 0x54) = unaff_x20;
                __mutex_init(arg1 + 0x70,"&smmu->stream_map_mutex",obj.arm_smmu_device_cfg_probe.__key);
                *(arg1 + 0xdc) = 0;
                if ((*(arg1 + 0x20) < 2) || ((uVar10 >> 0x19 & 1) == 0)) {
                    uVar4 = *(arg1 + 0x18);
                    *(arg1 + 0x18) = uVar4 | 0x400;
                    if ((uVar10 >> 0x18 & 1) == 0) {
                        *(arg1 + 0x18) = uVar4 | 0xc00;
                    }
                }
                if ((*(arg1 + 0x28) == NULL) || (pcVar12 = **(arg1 + 0x28), pcVar12 == NULL)) {
                    uVar4 = sym.readl_relaxed(*(arg1 + 8) + 0x24);
                }
                else {
                    if (pcVar12 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar12,0x8001bd0);
                    }
                    uVar4 = (*pcVar12)(arg1,0,0x24);
                }
                uVar10 = 0xc;
                if (uVar4 < 0) {
                    uVar10 = 0x10;
                }
                iVar3 = 2 << (uVar4 >> 0x1c & 7);
                unaff_x20 = uVar4;
                *(arg1 + 0x14) = uVar10;
                if (*(arg1 + 0x10) != (iVar3 << 1) << uVar10) {
                    _dev_warn(*arg1,"SMMU address space size (0x%x) differs from mapped region size (0x%x)!\n");
                }
                *(arg1 + 0x10) = iVar3;
                *(arg1 + 0x30) = uVar4 & 0xff;
                *(arg1 + 0x34) = uVar4 >> 0x10 & 0xff;
                iVar3 = of_property_read_variable_u32_array
                                  (*(*arg1 + 0x2f0),"qcom,num-context-banks-override",&uStack_40,1,0);
                uVar4 = *(arg1 + 0x30);
                if (-1 < iVar3) {
                    if (uVar4 != uStack_40) {
                        if (uStack_40 <= uVar4) {
                            uVar4 = uStack_40;
                        }
                        *(arg1 + 0x30) = uVar4;
                    }
                }
                uVar7 = *arg1;
                if (uVar4 < *(arg1 + 0x34)) {
                    pcVar8 = "impossible number of S2 context banks!\n";
                    goto code_r0x0800b164;
                }
                _dev_notice(uVar7,"\t%u context banks (%u stage-2 only)\n");
                iVar11 = devm_kmalloc(*arg1,*(arg1 + 0x30) * 0x30,0xdc0);
                *(arg1 + 0x48) = iVar11;
                if (iVar11 != 0) {
                    uVar4 = sym.arm_smmu_readl(arg1);
                    unaff_x20 = uVar4;
                    if ((uVar4 & 0xf) < 5) {
                        uVar7 = *((uVar4 & 0xf) * 8 + 0x80063e0);
                    }
                    else {
                        uVar7 = 0x30;
                    }
                    uVar10 = uVar4 >> 4 & 0xf;
                    *(arg1 + 0xa8) = uVar7;
                    if (uVar10 < 5) {
                        uVar5 = *(uVar10 * 8 + 0x80063e0);
                    }
                    else {
                        uVar5 = 0x30;
                    }
                    *(arg1 + 0xb0) = uVar5;
                    if ((uVar4 >> 0xf & 1) != 0) {
                        *(arg1 + 0x18) = *(arg1 + 0x18) | 0x40;
                    }
                    iVar3 = sym.dma_set_mask_and_coherent(*arg1,~(-1L << (uVar5 & 0x3f)));
                    if (iVar3 != 0) {
                        _dev_warn(*arg1,"failed to set DMA mask for table walker\n");
                    }
                    if (*(arg1 + 0x20) < 2) {
                        *(arg1 + 0xa0) = *(arg1 + 0xa8);
                        if (*(arg1 + 0x20) != 1) goto code_r0x0800b2c4;
                    }
                    else {
                        uVar10 = uVar4 >> 8 & 0xf;
                        if (uVar10 < 5) {
                            uVar7 = *(uVar10 * 8 + 0x80063e0);
                        }
                        else {
                            uVar7 = 0x30;
                        }
                        *(arg1 + 0xa0) = uVar7;
                        if ((uVar4 >> 0xc & 1) != 0) {
                            *(arg1 + 0x18) = *(arg1 + 0x18) | 0x80;
                        }
                        if ((uVar4 >> 0xd & 1) != 0) {
                            *(arg1 + 0x18) = *(arg1 + 0x18) | 0x100;
                        }
                        if ((uVar4 >> 0xe & 1) == 0) goto code_r0x0800b2c4;
                    }
                    *(arg1 + 0x18) = *(arg1 + 0x18) | 0x200;
code_r0x0800b2c4:
                    if (*(arg1 + 0x28) == 0) goto code_r0x0800b2f8;
                    unaff_x20 = *(*(arg1 + 0x28) + 0x20);
                    if (unaff_x20 == NULL) goto code_r0x0800b2f8;
                    if (5 < (unaff_x20 + -0x8008088 >> 3 | unaff_x20 << 0x3d)) goto code_r0x0800b464;
                    goto code_r0x0800b2ec;
                }
            }
        }
        else {
            unaff_x20 = uVar10 & 0xff;
            *(arg1 + 0x18) = *(arg1 + 0x18) | 2;
            if ((uVar13 & 0xff) == 0) {
                uVar7 = *arg1;
                pcVar8 = "stream-matching supported, but no SMRs present!\n";
                goto code_r0x0800b164;
            }
            iVar11 = devm_kmalloc(*arg1,(uVar10 & 0xff) * 6,0xdc0);
            *(arg1 + 0x60) = iVar11;
            if (iVar11 != 0) {
                _dev_notice(*arg1,"\tstream matching with %u register groups",unaff_x20);
                goto code_r0x0800ae70;
            }
        }
        uVar7 = 0xfffffff4;
    }
    do {
        do {
            iVar11 = sp_el0;
            if (*(iVar11 + 0x5e0) == iStack_38) {
                return;
            }
            __stack_chk_fail(uVar7);
code_r0x0800b464:
            __cfi_slowpath_diag(0xf93fa3e1852e8e2f,unaff_x20,0x8001bb0);
code_r0x0800b2ec:
            uVar7 = (*unaff_x20)(arg1);
        } while (uVar7 != 0);
code_r0x0800b2f8:
        uVar4 = *(arg1 + 0x18);
        if ((uVar4 >> 0xb & 1) != 0) {
            *(arg1 + 0xb8) = *(arg1 + 0xb8) | 0x1111000;
        }
        if ((uVar4 & 0x480) == 0) {
            if ((uVar4 >> 8 & 1) != 0) goto code_r0x0800b3b4;
code_r0x0800b324:
            uVar5 = *(arg1 + 0xb8);
        }
        else {
            *(arg1 + 0xb8) = *(arg1 + 0xb8) | 0x40201000;
            if ((uVar4 >> 8 & 1) == 0) goto code_r0x0800b324;
code_r0x0800b3b4:
            *(arg1 + 0xb8) = *(arg1 + 0xb8) | 0x2004000;
            uVar5 = *(arg1 + 0xb8);
        }
        if ((uVar4 >> 9 & 1) != 0) {
            uVar5 = uVar5 | 0x20010000;
            *(arg1 + 0xb8) = uVar5;
        }
        uVar13 = 0;
        if (*0x8001000 != 0xffffffffffffffff) {
            uVar13 = *0x8001000;
        }
        *0x8001000 = uVar13 | uVar5;
        _dev_notice(*arg1,"\tSupported page sizes: 0x%08lx\n",*(arg1 + 0xb8));
        uVar4 = *(arg1 + 0x18);
        if ((uVar4 >> 2 & 1) != 0) {
            _dev_notice(*arg1,"\tStage-1: %lu-bit VA -> %lu-bit IPA\n",*(arg1 + 0xa0),*(arg1 + 0xa8));
            uVar4 = *(arg1 + 0x18);
        }
        if ((uVar4 >> 3 & 1) != 0) {
            _dev_notice(*arg1,"\tStage-2: %lu-bit IPA -> %lu-bit PA\n",*(arg1 + 0xa8),*(arg1 + 0xb0));
        }
        uVar7 = 0;
    } while( true );
}


// ===== sym.arm_smmu_parse_impl_def_registers @ 0x0800b4d0 (size 376) =====

//WARNING: Type propagation algorithm not settling

uint32_t sym.arm_smmu_parse_impl_def_registers(int64_t arg1)

{
    uint64_t *puVar1;
    uint *puVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint uVar8;
    uint uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t *extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    code *pcVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar13 = *arg1;
    uStack_3c = 0;
    iVar10 = of_find_property(*(iVar13 + 0x2f0),"attach-impl-defs",&uStack_3c);
    if (iVar10 == 0) {
        uVar7 = 0;
    }
    else {
        uVar7 = uStack_3c >> 2;
        if ((uStack_3c >> 2 & 1) == 0) {
            uStack_3c = uVar7;
            if ((uVar7 >> 0x3d == 0) &&
               (iVar10 = devm_kmalloc(iVar13,-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3,0xcc0), iVar10 != 0))
            {
                uVar7 = uStack_3c << 1;
                if ((uVar7 >> 0x3e == 0) &&
                   (iVar11 = __kmalloc(-(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2,0xcc0), iVar11 != 0)) {
                    uVar5 = of_property_read_variable_u32_array
                                      (*(iVar13 + 0x2f0),"attach-impl-defs",iVar11,uStack_3c,0);
                    uVar7 = uVar5 & uVar5 >> 0x1f;
                    if (-1 < uVar5) {
                        if (0 < uStack_3c) {
                            iVar13 = 0;
                            do {
                                iVar6 = iVar13;
                                puVar2 = iVar10 + iVar13 * 4;
                                iVar13 = iVar13 + 2;
                                uVar8 = *(iVar11 + (iVar6 + 1) * 4);
                                *puVar2 = *(iVar11 + iVar6 * 4);
                                puVar2[1] = uVar8;
                            } while (iVar13 < uStack_3c);
                        }
                        *(arg1 + 0x108) = iVar10;
                        uVar5 = uStack_3c;
                        if (uStack_3c < 0) {
                            uVar5 = uStack_3c + 1;
                        }
                        *(arg1 + 0x110) = uVar5 >> 1;
                    }
                    kfree(iVar11);
                    goto code_r0x0800b5f8;
                }
            }
            uVar7 = 0xfffffff4;
        }
        else {
            uStack_3c = uVar7;
            _dev_err(iVar13,"Invalid number of attach-impl-defs registers: %d\n");
            uVar7 = 0xffffffea;
        }
    }
code_r0x0800b5f8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.arm_smmu_global_fault;
    iVar10 = *extraout_x1;
    if (((*(iVar10 + 0x200) & 7) == 0) && (iVar6 = __pm_runtime_resume(iVar10,4), iVar6 < 0)) {
        puVar1 = iVar10 + 0x1f8;
        uVar15 = *puVar1;
        do {
            uVar7 = uVar15;
            if (uVar7 == 0) {
                return 0;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar5 = *puVar1;
                uVar15 = uVar5;
                if (uVar5 != uVar7) goto code_r0x0800b77c;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800b77c:
            if (uVar7 == uVar5) {
                return 0;
            }
        } while( true );
    }
    if ((extraout_x1[5] == NULL) || (pcVar14 = *extraout_x1[5], pcVar14 == NULL)) {
        uVar7 = sym.readl_relaxed(extraout_x1[1] + 0x48);
    }
    else {
        if (pcVar14 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar14,0x8001bd0);
        }
        uVar7 = (*pcVar14)(extraout_x1,0,0x48);
    }
    uVar15 = uVar7;
    if ((extraout_x1[5] == NULL) || (pcVar14 = *extraout_x1[5], pcVar14 == NULL)) {
        uVar8 = sym.readl_relaxed(extraout_x1[1] + 0x50);
    }
    else {
        if (pcVar14 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar14,0x8001bd0);
        }
        uVar8 = (*pcVar14)(extraout_x1,0,0x50);
    }
    if ((extraout_x1[5] == NULL) || (pcVar14 = *extraout_x1[5], pcVar14 == NULL)) {
        uVar5 = sym.readl_relaxed(extraout_x1[1] + 0x54);
    }
    else {
        if (pcVar14 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar14,0x8001bd0);
        }
        uVar5 = (*pcVar14)(extraout_x1,0,0x54);
    }
    if ((extraout_x1[5] == NULL) || (pcVar14 = *extraout_x1[5], pcVar14 == NULL)) {
        uVar9 = sym.readl_relaxed(extraout_x1[1] + 0x58);
    }
    else {
        if (pcVar14 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar14,0x8001bd0);
        }
        uVar9 = (*pcVar14)(extraout_x1,0,0x58);
    }
    if (uVar7 == 0) {
        iVar10 = *extraout_x1;
        uVar7 = 0;
        goto code_r0x0800b888;
    }
    iVar6 = ___ratelimit(obj.arm_smmu_global_fault.rs,"arm_smmu_global_fault");
    if (iVar6 == 0) {
        iVar10 = extraout_x1[5];
        if (iVar10 == 0) goto code_r0x0800b734;
code_r0x0800b72c:
        pcVar14 = *(iVar10 + 8);
        if (pcVar14 == NULL) goto code_r0x0800b734;
        if (pcVar14 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar14,0x8001b70);
        }
        (*pcVar14)(extraout_x1,0,0x48,uVar15);
    }
    else {
        if ((uVar7 >> 1 & 1) == 0) {
            _dev_err(*extraout_x1,"Unexpected global fault, this could be serious\n");
        }
        else {
            _dev_err(*extraout_x1,
                     "Blocked unknown Stream ID 0x%hx; boot with \"arm-smmu.disable_bypass=0\" to allow, but this may have security implications\n"
                     ,uVar5 & 0xffff);
        }
        _dev_err(*extraout_x1,"\tGFSR 0x%08x, GFSYNR0 0x%08x, GFSYNR1 0x%08x, GFSYNR2 0x%08x\n",uVar15,uVar8,uVar5,
                 uVar9);
        iVar10 = extraout_x1[5];
        if (iVar10 != 0) goto code_r0x0800b72c;
code_r0x0800b734:
        sym.writel_relaxed(uVar15,extraout_x1[1] + 0x48);
    }
    iVar10 = *extraout_x1;
    uVar7 = 1;
code_r0x0800b888:
    if ((*(iVar10 + 0x200) & 7) == 0) {
        uVar12 = ktime_get_mono_fast_ns();
        *(iVar10 + 0x218) = uVar12;
        __pm_runtime_idle(*extraout_x1,5);
    }
    return uVar7;
}


// ===== sym.arm_smmu_global_fault @ 0x0800b648 (size 904) =====

ulong sym.arm_smmu_global_fault(ulong noname_0,int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t uVar7;
    uint uVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t iVar10;
    code *pcVar11;
    uint64_t uVar12;
    ulong uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *arg1;
    if (((*(iVar10 + 0x200) & 7) == 0) && (iVar4 = __pm_runtime_resume(iVar10,4), iVar4 < 0)) {
        puVar1 = iVar10 + 0x1f8;
        uVar12 = *puVar1;
        do {
            uVar5 = uVar12;
            if (uVar5 == 0) {
                return 0;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                uVar12 = uVar7;
                if (uVar7 != uVar5) goto code_r0x0800b77c;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = uVar5 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800b77c:
            if (uVar5 == uVar7) {
                return 0;
            }
        } while( true );
    }
    if ((*(arg1 + 0x28) == NULL) || (pcVar11 = **(arg1 + 0x28), pcVar11 == NULL)) {
        uVar5 = sym.readl_relaxed(*(arg1 + 8) + 0x48);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar11,0x8001bd0);
        }
        uVar5 = (*pcVar11)(arg1,0,0x48);
    }
    uVar12 = uVar5;
    if ((*(arg1 + 0x28) == NULL) || (pcVar11 = **(arg1 + 0x28), pcVar11 == NULL)) {
        uVar6 = sym.readl_relaxed(*(arg1 + 8) + 0x50);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar11,0x8001bd0);
        }
        uVar6 = (*pcVar11)(arg1,0,0x50);
    }
    if ((*(arg1 + 0x28) == NULL) || (pcVar11 = **(arg1 + 0x28), pcVar11 == NULL)) {
        uVar7 = sym.readl_relaxed(*(arg1 + 8) + 0x54);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar11,0x8001bd0);
        }
        uVar7 = (*pcVar11)(arg1,0,0x54);
    }
    if ((*(arg1 + 0x28) == NULL) || (pcVar11 = **(arg1 + 0x28), pcVar11 == NULL)) {
        uVar8 = sym.readl_relaxed(*(arg1 + 8) + 0x58);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar11,0x8001bd0);
        }
        uVar8 = (*pcVar11)(arg1,0,0x58);
    }
    if (uVar5 == 0) {
        iVar10 = *arg1;
        uVar13 = 0;
        goto code_r0x0800b888;
    }
    iVar4 = ___ratelimit(obj.arm_smmu_global_fault.rs,"arm_smmu_global_fault");
    if (iVar4 == 0) {
        iVar10 = *(arg1 + 0x28);
        if (iVar10 == 0) goto code_r0x0800b734;
code_r0x0800b72c:
        pcVar11 = *(iVar10 + 8);
        if (pcVar11 == NULL) goto code_r0x0800b734;
        if (pcVar11 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar11,0x8001b70);
        }
        (*pcVar11)(arg1,0,0x48,uVar12);
    }
    else {
        if ((uVar5 >> 1 & 1) == 0) {
            _dev_err(*arg1,"Unexpected global fault, this could be serious\n");
        }
        else {
            _dev_err(*arg1,
                     "Blocked unknown Stream ID 0x%hx; boot with \"arm-smmu.disable_bypass=0\" to allow, but this may have security implications\n"
                     ,uVar7 & 0xffff);
        }
        _dev_err(*arg1,"\tGFSR 0x%08x, GFSYNR0 0x%08x, GFSYNR1 0x%08x, GFSYNR2 0x%08x\n",uVar12,uVar6,uVar7,uVar8);
        iVar10 = *(arg1 + 0x28);
        if (iVar10 != 0) goto code_r0x0800b72c;
code_r0x0800b734:
        sym.writel_relaxed(uVar12,*(arg1 + 8) + 0x48);
    }
    iVar10 = *arg1;
    uVar13 = 1;
code_r0x0800b888:
    if ((*(iVar10 + 0x200) & 7) == 0) {
        uVar9 = ktime_get_mono_fast_ns();
        *(iVar10 + 0x218) = uVar9;
        __pm_runtime_idle(*arg1,5);
    }
    return uVar13;
}


// ===== sym.parse_driver_options @ 0x0800b9d0 (size 284) =====

void sym.parse_driver_options(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_property(*(*arg1 + 0x2f0),"qcom,fatal-asf",0);
    if (iVar1 != 0) {
        *(arg1 + 0x1c) = *(arg1 + 0x1c) | 1;
    }
    iVar1 = of_find_property(*(*arg1 + 0x2f0),"qcom,use-3-lvl-tables",0);
    if (iVar1 != 0) {
        *(arg1 + 0x1c) = *(arg1 + 0x1c) | 4;
    }
    iVar1 = of_find_property(*(*arg1 + 0x2f0),"qcom,no-asid-retention",0);
    if (iVar1 != 0) {
        *(arg1 + 0x1c) = *(arg1 + 0x1c) | 8;
    }
    iVar1 = of_find_property(*(*arg1 + 0x2f0),"qcom,disable-atos",0);
    if (iVar1 != 0) {
        *(arg1 + 0x1c) = *(arg1 + 0x1c) | 0x10;
    }
    iVar1 = of_find_property(*(*arg1 + 0x2f0),"qcom,context-fault-retry",0);
    if (iVar1 != 0) {
        *(arg1 + 0x1c) = *(arg1 + 0x1c) | 0x20;
    }
    iVar1 = of_find_property(*(*arg1 + 0x2f0),"qcom,multi-match-handoff-smr",0);
    if (iVar1 != 0) {
        *(arg1 + 0x1c) = *(arg1 + 0x1c) | 0x40;
    }
    return;
}


// ===== sym.arm_smmu_handoff_cbs @ 0x0800baec (size 936) =====

ulong sym.arm_smmu_handoff_cbs(int64_t arg1)

{
    uint uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint *puVar9;
    int64_t iVar10;
    uchar *puVar11;
    code *pcVar12;
    ushort *puVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong *in_x18;
    uint64_t uVar16;
    uint32_t uVar17;
    char *pcVar18;
    uchar uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar9 = of_get_property(*(*arg1 + 0x2f0),"qcom,handoff-smrs",0);
    if ((puVar9 != NULL) &&
       (uVar6 = of_property_count_elems_of_size(*(*arg1 + 0x2f0),"qcom,handoff-smrs",8), -1 < uVar6)) {
        uVar16 = uVar6;
        iVar10 = __kmalloc((uVar16 + uVar6 * 2) * 2,0xdc0);
        if (iVar10 == 0) {
            return 0xfffffff4;
        }
        if (uVar6 != 0) {
            puVar11 = iVar10 + 4;
            uVar15 = uVar16;
            do {
                uVar15 = uVar15 - 1;
                *(puVar11 + -2) = *puVar9 >> 0x18 | *puVar9 >> 8 & 0xff00;
                uVar1 = puVar9[1];
                *puVar11 = 1;
                puVar9 = puVar9 + 2;
                *(puVar11 + -4) = uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
                puVar11 = puVar11 + 6;
            } while (uVar15 != 0);
        }
        if (*(arg1 + 0x54) != 0) {
            uVar17 = 0;
            do {
                iVar4 = uVar17 * 4;
                if ((*(arg1 + 0x28) == NULL) || (pcVar12 = **(arg1 + 0x28), pcVar12 == NULL)) {
                    uVar7 = sym.readl_relaxed(*(arg1 + 8) + iVar4 + 0x800);
                }
                else {
                    if (pcVar12 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar12,0x8001bd0);
                    }
                    uVar7 = (*pcVar12)(arg1,0,iVar4 + 0x800);
                }
                if ((*(arg1 + 0x19) >> 4 & 1) == 0) {
                    if (uVar7 < 0) {
                        uVar5 = uVar7 >> 0x10 & 0x7fff;
                        uVar19 = 1;
                        goto joined_r0x0800bc4c;
                    }
                }
                else {
                    if ((*(arg1 + 0x28) == NULL) || (pcVar12 = **(arg1 + 0x28), pcVar12 == NULL)) {
                        uVar8 = sym.readl_relaxed(*(arg1 + 8) + iVar4 + 0xc00);
                    }
                    else {
                        if (pcVar12 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar12,0x8001bd0);
                        }
                        uVar8 = (*pcVar12)(arg1,0,iVar4 + 0xc00);
                    }
                    if ((uVar8 >> 10 & 1) != 0) {
                        uVar5 = uVar7 >> 0x10;
                        uVar19 = (uVar8 & 0x400) >> 10;
joined_r0x0800bc4c:
                        if (uVar6 != 0) {
                            uVar15 = uVar16;
                            pcVar18 = iVar10 + 4;
                            do {
                                if (((*pcVar18 != '\0') && ((*(pcVar18 + -4) & (uVar5 ^ 0xffffffff)) == 0)) &&
                                   (((*(pcVar18 + -2) ^ uVar7 & 0xffff) & ~uVar5) == 0)) {
                                    if ((*(arg1 + 0x28) == NULL) || (pcVar12 = **(arg1 + 0x28), pcVar12 == NULL)) {
                                        uVar8 = sym.readl_relaxed(*(arg1 + 8) + iVar4 + 0xc00);
                                    }
                                    else {
                                        if (pcVar12 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                                            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar12,0x8001bd0);
                                        }
                                        uVar8 = (*pcVar12)(arg1,0,iVar4 + 0xc00);
                                    }
                                    puVar13 = *(arg1 + 0x60) + uVar17 * 6;
                                    *puVar13 = uVar5;
                                    puVar13[1] = uVar7;
                                    *(puVar13 + 2) = uVar19;
                                    *(puVar13 + 5) = 0;
                                    iVar14 = (uVar17 + uVar17 * 2) * 8;
                                    *(*(arg1 + 0x68) + iVar14) = 0;
                                    *(*(arg1 + 0x68) + iVar14 + 8) = 0;
                                    *(*(arg1 + 0x68) + iVar14 + 0xc) = uVar8 >> 0x10 & 3;
                                    *(*(arg1 + 0x68) + iVar14 + 0x10) = uVar8 >> 0x18 & 3;
                                    *(*(arg1 + 0x68) + iVar14 + 0x14) = uVar8;
                                    *(*(arg1 + 0x68) + iVar14 + 0x15) = 1;
                                    uVar2 = *(*(arg1 + 0x68) + iVar14 + 0x14);
                                    iVar14 = arg1 + (uVar2 >> 3 & 0x18);
                                    uVar3 = *(arg1 + 0x1c);
                                    *(iVar14 + 0x38) = 1L << (uVar2 & 0x3f) | *(iVar14 + 0x38);
                                    if ((uVar3 >> 6 & 1) == 0) {
                                        *pcVar18 = '\0';
                                    }
                                    break;
                                }
                                uVar15 = uVar15 - 1;
                                pcVar18 = pcVar18 + 6;
                            } while (uVar15 != 0);
                        }
                    }
                }
                uVar17 = uVar17 + 1;
            } while (uVar17 < *(arg1 + 0x54));
        }
        kfree(iVar10);
    }
    return 0;
}


// ===== sym.arm_smmu_device_reset @ 0x0800be94 (size 1196) =====

void sym.arm_smmu_device_reset(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t in_x3;
    int64_t iVar6;
    ulong *puVar7;
    uint32_t uVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong unaff_x30;
    uchar in_q1 [16];
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x28) == NULL) || (pcVar9 = **(arg1 + 0x28), pcVar9 == NULL)) {
        uVar4 = sym.readl_relaxed(*(arg1 + 8) + 0x48);
    }
    else {
        if (pcVar9 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar9,0x8001bd0);
        }
        uVar4 = (*pcVar9)(arg1,0,0x48);
    }
    uVar4 = uVar4 & 0xffffffff;
    if ((*(arg1 + 0x28) == 0) || (pcVar9 = *(*(arg1 + 0x28) + 8), pcVar9 == NULL)) {
        sym.writel_relaxed(uVar4,*(arg1 + 8) + 0x48);
        iVar3 = *(arg1 + 0x54);
        uVar4 = in_x3;
    }
    else {
        if (pcVar9 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar9,0x8001b70);
        }
        (*pcVar9)(arg1,0,0x48);
        iVar3 = *(arg1 + 0x54);
    }
    if (iVar3 != 0) {
        uVar2 = 0;
        do {
            sym.arm_smmu_write_sme(arg1,uVar2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg1 + 0x54));
    }
    if (*(arg1 + 0x30) != 0) {
        uVar2 = 0;
        do {
            sym.arm_smmu_write_context_bank(arg1,uVar2,in_q1,uVar4);
            iVar3 = uVar2 + *(arg1 + 0x10);
            if ((*(arg1 + 0x28) == 0) || (pcVar9 = *(*(arg1 + 0x28) + 8), pcVar9 == NULL)) {
                sym.writel_relaxed(0xc00001fe,*(arg1 + 8) + (iVar3 << (*(arg1 + 0x14) & 0x1f)) + 0x58);
            }
            else {
                if (pcVar9 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar9,0x8001b70);
                }
                uVar4 = 0xc00001fe;
                (*pcVar9)(arg1,iVar3,0x58);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg1 + 0x30));
    }
    if ((*(arg1 + 0x28) == 0) || (pcVar9 = *(*(arg1 + 0x28) + 8), pcVar9 == NULL)) {
        sym.writel_relaxed(0xffffffff,*(arg1 + 8) + 0x6c);
        iVar6 = *(arg1 + 0x28);
    }
    else {
        if (pcVar9 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar9,0x8001b70);
        }
        (*pcVar9)(arg1,0,0x6c,0xffffffff);
        iVar6 = *(arg1 + 0x28);
    }
    if ((iVar6 == 0) || (pcVar9 = *(iVar6 + 8), pcVar9 == NULL)) {
        sym.writel_relaxed(0xffffffff,*(arg1 + 8) + 0x68);
        puVar7 = *(arg1 + 0x28);
    }
    else {
        if (pcVar9 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar9,0x8001b70);
        }
        (*pcVar9)(arg1,0,0x68,0xffffffff);
        puVar7 = *(arg1 + 0x28);
    }
    if ((puVar7 == NULL) || (pcVar9 = *puVar7, pcVar9 == NULL)) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8));
    }
    else {
        if (pcVar9 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar9,0x8001bd0);
        }
        uVar2 = (*pcVar9)(arg1,0,0);
    }
    uVar1 = *(arg1 + 0x18);
    uVar8 = 0x1836;
    if (obj.disable_bypass != 0x0) {
        uVar8 = 0x1c36;
    }
    if ((*(arg1 + 0x28) != 0) && (pcVar9 = *(*(arg1 + 0x28) + 0x28), pcVar9 != NULL)) {
        if (5 < (pcVar9 + -0x8008088 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0xf93fa3e1852e8e2f,pcVar9,0x8001e10);
        }
        (*pcVar9)(arg1);
    }
    uVar2 = uVar2 & 0xff3f03c8 | uVar8 | (uVar1 & 0x40) << 0x19 | uVar1 >> 9 & 8 | 0xc00000;
    uVar5 = _raw_spin_lock_irqsave(arg1 + 0xdc);
    iVar3 = sym.__arm_smmu_tlb_sync(arg1,0,0x70,0x74);
    if ((iVar3 != 0) &&
       (iVar3 = ___ratelimit(obj.arm_smmu_tlb_sync_global._rs,"arm_smmu_tlb_sync_global"), iVar3 != 0)) {
        _dev_err(*arg1,"TLB global sync failed!\n");
    }
    _raw_spin_unlock_irqrestore(arg1 + 0xdc,uVar5);
    if ((*(arg1 + 0x28) == 0) || (pcVar9 = *(*(arg1 + 0x28) + 8), pcVar9 == NULL)) {
        sym.writel_relaxed(uVar2,*(arg1 + 8));
    }
    else {
        if (pcVar9 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar9,0x8001b70);
        }
        (*pcVar9)(arg1,0,0,uVar2);
    }
    return;
}


// ===== sym.arm_smmu_test_smr_masks @ 0x0800c340 (size 604) =====

void sym.arm_smmu_test_smr_masks(int64_t arg1)

{
    uint16_t uVar1;
    ushort extraout_w0;
    ushort uVar2;
    ushort extraout_w0_00;
    code *pcVar3;
    ulong *puVar4;
    int iVar5;
    ulong *in_x18;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x60) != 0) && (*(arg1 + 0x54) != 0)) {
        iVar5 = 0;
        iVar6 = 0x800;
        do {
            if (*(*(arg1 + 0x60) + iVar5 * 6 + 4) == '\0') {
                uVar1 = *(arg1 + 0x58);
                if ((*(arg1 + 0x28) == 0) || (pcVar3 = *(*(arg1 + 0x28) + 8), pcVar3 == NULL)) {
                    sym.writel_relaxed(uVar1,*(arg1 + 8) + iVar6);
                    puVar4 = *(arg1 + 0x28);
                }
                else {
                    if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                        __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar3,0x8001b70);
                    }
                    (*pcVar3)(arg1,0,iVar6,uVar1);
                    puVar4 = *(arg1 + 0x28);
                }
                if ((puVar4 == NULL) || (pcVar3 = *puVar4, pcVar3 == NULL)) {
                    uVar1 = sym.readl_relaxed(*(arg1 + 8) + iVar6);
                }
                else {
                    if (pcVar3 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar3,0x8001bd0);
                    }
                    uVar1 = (*pcVar3)(arg1,0,iVar6);
                }
                *(arg1 + 0x58) = uVar1;
                if ((*(arg1 + 0x28) == 0) || (pcVar3 = *(*(arg1 + 0x28) + 8), pcVar3 == NULL)) {
                    sym.writel_relaxed(uVar1 << 0x10,*(arg1 + 8) + iVar6);
                    puVar4 = *(arg1 + 0x28);
                }
                else {
                    if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                        __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar3,0x8001b70);
                    }
                    (*pcVar3)(arg1,0,iVar6,uVar1 << 0x10);
                    puVar4 = *(arg1 + 0x28);
                }
                if ((puVar4 == NULL) || (pcVar3 = *puVar4, pcVar3 == NULL)) {
                    sym.readl_relaxed(*(arg1 + 8) + iVar6);
                    uVar2 = extraout_w0;
                }
                else {
                    if (pcVar3 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar3,0x8001bd0);
                    }
                    (*pcVar3)(arg1,0,iVar6);
                    uVar2 = extraout_w0_00;
                }
                *(arg1 + 0x5a) = uVar2;
                return;
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 4;
        } while (*(arg1 + 0x54) != iVar5);
    }
    return;
}


// ===== sym.arm_smmu_bus_init @ 0x0800c59c (size 208) =====

int sym.arm_smmu_bus_init(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_present(platform_bus_type);
    if ((uVar2 & 1) == 0) {
        iVar1 = bus_set_iommu(platform_bus_type,arg1);
        if (iVar1 != 0) {
            return iVar1;
        }
    }
    uVar2 = iommu_present(amba_bustype);
    if ((uVar2 & 1) == 0) {
        iVar1 = bus_set_iommu(amba_bustype,arg1);
        if (iVar1 != 0) goto code_r0x0800c644;
    }
    uVar2 = iommu_present(pci_bus_type);
    if ((uVar2 & 1) != 0) {
        return 0;
    }
    iVar1 = bus_set_iommu(pci_bus_type,arg1);
    if (iVar1 == 0) {
        return 0;
    }
    bus_set_iommu(amba_bustype,0);
code_r0x0800c644:
    bus_set_iommu(platform_bus_type,0);
    return iVar1;
}


// ===== sym.arm_smmu_readl @ 0x0800c66c (size 144) =====

void sym.arm_smmu_readl(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x28) == NULL) || (pcVar1 = **(arg1 + 0x28), pcVar1 == NULL)) {
        sym.readl_relaxed(*(arg1 + 8) + 0x28);
    }
    else {
        if (pcVar1 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar1,0x8001bd0);
        }
        (*pcVar1)(arg1,0,0x28);
    }
    return;
}


// ===== sym.dma_set_mask_and_coherent @ 0x0800c6fc (size 84) =====

int sym.dma_set_mask_and_coherent(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = dma_set_mask();
    if (iVar1 == 0) {
        dma_set_coherent_mask(arg1,arg2);
    }
    return iVar1;
}


// ===== sym.readl_relaxed @ 0x0800c750 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800c754);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800c788);
    return uVar1;
}


// ===== sym.readl_relaxed_1 @ 0x0800c7c0 (size 108) =====

uint sym.readl_relaxed_1(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800c7c4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800c7f8);
    return uVar1;
}


// ===== sym.readl_relaxed_2 @ 0x0800c830 (size 108) =====

uint sym.readl_relaxed_2(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800c834);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800c868);
    return uVar1;
}


// ===== sym.readl_relaxed_3 @ 0x0800c8a0 (size 108) =====

uint sym.readl_relaxed_3(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800c8a4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800c8d8);
    return uVar1;
}


// ===== sym.readl_relaxed_4 @ 0x0800c910 (size 108) =====

uint sym.readl_relaxed_4(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800c914);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800c948);
    return uVar1;
}


// ===== sym.arm_smmu_rpm_get @ 0x0800c980 (size 192) =====

int sym.arm_smmu_rpm_get(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *arg1;
    if (((*(arg1 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(arg1,4), iVar5 < 0)) {
        puVar1 = arg1 + 0x1f8;
        uVar7 = *puVar1;
        do {
            uVar6 = uVar7;
            if (uVar6 == 0) {
                return iVar5;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar7 = uVar2;
                if (uVar2 != uVar6) goto code_r0x0800ca00;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800ca00:
        } while (uVar6 != uVar2);
    }
    else {
        iVar5 = 0;
    }
    return iVar5;
}


// ===== sym.arm_smmu_rpm_put @ 0x0800ca40 (size 80) =====

void sym.arm_smmu_rpm_put(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *arg1;
    if ((*(iVar2 + 0x200) & 7) == 0) {
        uVar1 = ktime_get_mono_fast_ns();
        *(iVar2 + 0x218) = uVar1;
        __pm_runtime_idle(*arg1,5);
    }
    return;
}


// ===== sym.arm_smmu_iova_to_phys_hard @ 0x0800ca90 (size 408) =====

ulong sym.arm_smmu_iova_to_phys_hard(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    code *pcVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = arg1 + -0xb0;
    piVar13 = *piVar11;
    if ((*(piVar13 + 0x1c) >> 4 & 1) == 0) {
        iVar12 = *piVar13;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar12,4), iVar5 < 0)) {
            puVar1 = iVar12 + 0x1f8;
            uVar10 = *puVar1;
            do {
                uVar9 = uVar10;
                if (uVar9 == 0) goto code_r0x0800cb7c;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar10 = uVar2;
                    if (uVar2 != uVar9) goto code_r0x0800cb5c;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar9 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800cb5c:
                uVar6 = 0;
            } while (uVar9 != uVar2);
        }
        else {
            if ((piVar13[5] == 0) || (pcVar8 = *(piVar13[5] + 0x40), pcVar8 == NULL)) {
                if (((*(*piVar11 + 0x18) >> 5 & 1) == 0) || (*(arg1 + -0x68) != 0)) {
                    uVar6 = 0;
                }
                else {
                    uVar6 = sym.__arm_smmu_iova_to_phys_hard(arg1,*arg2);
                }
            }
            else {
                if (pcVar8 != sym.__typeid__ZTSFyP15arm_smmu_domainP19qcom_iommu_atos_txnE_global_addr) {
                    __cfi_slowpath_diag(0x4b7e4d32fdaed076,pcVar8,0x8001bf0);
                }
                uVar6 = (*pcVar8)(piVar11,arg2);
            }
            iVar12 = *piVar13;
            if ((*(iVar12 + 0x200) & 7) == 0) {
                uVar7 = ktime_get_mono_fast_ns();
                *(iVar12 + 0x218) = uVar7;
                __pm_runtime_idle(*piVar13,5);
            }
        }
    }
    else {
code_r0x0800cb7c:
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.arm_smmu_sid_switch @ 0x0800cc28 (size 84) =====

uint sym.arm_smmu_sid_switch(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = iommu_group_get();
    uVar1 = iommu_group_for_each_dev
                      (uVar2,arg1 & 0xffffffff,sym.__arm_smmu_sid_switch.73c668e47250e1a2d5221ed72817c1f7.cfi_jt);
    iommu_group_put(uVar2);
    return uVar1;
}


// ===== sym.arm_smmu_get_fault_ids @ 0x0800cc7c (size 608) =====

int sym.arm_smmu_get_fault_ids(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    code *pcVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = -0x16;
    if ((arg1 != 0) && (arg2 != 0)) {
        piVar11 = *(arg1 + -0xb0);
        uVar2 = *(arg1 + -0x80);
        iVar12 = *piVar11;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar6 = __pm_runtime_resume(iVar12,4), iVar6 < 0)) {
            puVar1 = iVar12 + 0x1f8;
            uVar8 = *puVar1;
            do {
                uVar7 = uVar8;
                if (uVar7 == 0) {
                    return iVar6;
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar3 = *puVar1;
                    uVar8 = uVar3;
                    if (uVar3 != uVar7) goto code_r0x0800cdfc;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = uVar7 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800cdfc:
            } while (uVar7 != uVar3);
        }
        else {
            iVar6 = piVar11[2] + uVar2;
            if ((piVar11[5] == NULL) || (pcVar10 = *piVar11[5], pcVar10 == NULL)) {
                uVar8 = sym.readl_relaxed(piVar11[1] + (iVar6 << (*(piVar11 + 0x14) & 0x1f)) + 0x58);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001bd0);
                }
                uVar8 = (*pcVar10)(piVar11,iVar6,0x58);
            }
            if ((uVar8 & 0xc00001fe) == 0) {
                iVar12 = *piVar11;
                if ((*(iVar12 + 0x200) & 7) == 0) {
                    uVar9 = ktime_get_mono_fast_ns();
                    *(iVar12 + 0x218) = uVar9;
                    __pm_runtime_idle(*piVar11,5);
                }
                iVar6 = -0x16;
            }
            else {
                iVar6 = piVar11[2] + uVar2;
                if ((piVar11[5] == NULL) || (pcVar10 = *piVar11[5], pcVar10 == NULL)) {
                    uVar7 = sym.readl_relaxed(piVar11[1] + (iVar6 << (*(piVar11 + 0x14) & 0x1f)) + 0x6c);
                }
                else {
                    if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001bd0);
                    }
                    uVar7 = (*pcVar10)(piVar11,iVar6,0x6c);
                }
                iVar12 = *piVar11;
                if ((*(iVar12 + 0x200) & 7) == 0) {
                    uVar9 = ktime_get_mono_fast_ns();
                    *(iVar12 + 0x218) = uVar9;
                    __pm_runtime_idle(*piVar11,5);
                }
                iVar6 = 0;
                *arg2 = uVar7 >> 0xd & 7;
                *(arg2 + 4) = uVar7 >> 8 & 0x1f;
                *(arg2 + 8) = uVar7 & 0xff;
            }
        }
    }
    return iVar6;
}


// ===== sym.arm_smmu_get_context_bank_nr @ 0x0800cedc (size 88) =====

uint64_t sym.arm_smmu_get_context_bank_nr(int64_t arg1)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + -0x60);
    if (*(arg1 + -0xb0) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = *(arg1 + -0x80);
    }
    mutex_unlock(arg1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_get_asid_nr @ 0x0800cf34 (size 88) =====

uint64_t sym.arm_smmu_get_asid_nr(int64_t arg1)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + -0x60);
    if (*(arg1 + -0xb0) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = *(arg1 + -0x7e);
    }
    mutex_unlock(arg1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_set_secure_vmid @ 0x0800cf8c (size 136) =====

uint sym.arm_smmu_set_secure_vmid(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + -0x60);
    if (*(arg1 + -0xb0) == 0) {
        if (*(arg1 + -0x24) != -1) {
            __warn_printk("secure vmid already set");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800d014);
            (*pcVar1)();
        }
        uVar2 = 0;
        *(arg1 + -0x24) = arg2;
    }
    else {
        uVar2 = 0xffffffff;
    }
    mutex_unlock(arg1 + -0x60);
    return uVar2;
}


// ===== sym.arm_smmu_set_fault_model @ 0x0800d018 (size 112) =====

uint sym.arm_smmu_set_fault_model(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + -0x60);
    if (*(arg1 + -0xb0) == 0) {
        uVar1 = 0;
        *(arg1 + -0x28) = *(arg1 + -0x28) & 0xf0 | arg2 & 0xf;
    }
    else {
        uVar1 = 0xffffffff;
    }
    mutex_unlock(arg1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_enable_s1_translation @ 0x0800d088 (size 576) =====

int sym.arm_smmu_enable_s1_translation(int64_t arg1)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t iVar12;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(arg1 + -0xb0);
    mutex_lock(arg1 + -0x60);
    if (*(arg1 + -0xb0) == 0) {
        iVar7 = -1;
    }
    else if (*(arg1 + -0x26) == '\0') {
        iVar7 = 0;
    }
    else {
        iVar12 = *piVar11;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar7 = __pm_runtime_resume(iVar12,4), iVar7 < 0)) {
            puVar1 = iVar12 + 0x1f8;
            uVar10 = *puVar1;
            do {
                uVar9 = uVar10;
                if (uVar9 == 0) break;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar4 = *puVar1;
                    uVar10 = uVar4;
                    if (uVar4 != uVar9) goto code_r0x0800d238;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                        *puVar1 = uVar9 - 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800d238:
            } while (uVar9 != uVar4);
        }
        else {
            uVar3 = *(arg1 + -0x78);
            uVar2 = *(arg1 + -0x80);
            *(arg1 + -0x78) = uVar3 | 0x4000;
            uVar9 = 0x46;
            if (*(arg1 + -0x74) != 0) {
                uVar9 = 0x1046;
            }
            uVar9 = (uVar3 & 3) << 0x1a | (uVar3 >> 2 & 3) << 0x18 |
                    (uVar3 | 0x4000) >> 0xe | uVar3 >> 3 & 0x100 | uVar3 >> 5 & 0x80 | uVar3 >> 8 & 0x20 |
                    (uVar3 >> 4 & 3) << 0x16 | (uVar3 & 0x40) << 0xe | (uVar3 & 0x780) << 9 | uVar9;
            *(piVar11[9] + uVar2 * 0x30 + 0x20) = uVar9;
            iVar7 = piVar11[2] + uVar2;
            if ((piVar11[5] == 0) || (pcVar13 = *(piVar11[5] + 8), pcVar13 == NULL)) {
                sym.writel_relaxed(uVar9,piVar11[1] + (iVar7 << (*(piVar11 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar13 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar13,0x8001b70);
                }
                (*pcVar13)(piVar11,iVar7,0,uVar9);
            }
            iVar12 = *piVar11;
            if ((*(iVar12 + 0x200) & 7) == 0) {
                uVar8 = ktime_get_mono_fast_ns();
                *(iVar12 + 0x218) = uVar8;
                __pm_runtime_idle(*piVar11,5);
            }
            iVar7 = 0;
            *(arg1 + -0x26) = 0;
        }
    }
    mutex_unlock(arg1 + -0x60);
    return iVar7;
}


// ===== sym.arm_smmu_get_mappings_configuration @ 0x0800d2c8 (size 92) =====

uint32_t sym.arm_smmu_get_mappings_configuration(int64_t arg1)

{
    ulong *in_x18;
    uint32_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + -0x60);
    if (*(arg1 + -0xb0) == 0) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = *(arg1 + -0x27) & 7;
    }
    mutex_unlock(arg1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_skip_tlb_management @ 0x0800d324 (size 84) =====

void sym.arm_smmu_skip_tlb_management(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + -0x20);
    *(arg1 + 0xcd) = arg2;
    _raw_spin_unlock_irqrestore(arg1 + -0x20,uVar1);
    return;
}


// ===== sym.arm_smmu_capable @ 0x0800d378 (size 20) =====

bool sym.arm_smmu_capable(uint32_t arg1)

{
    return (arg1 & 0xfffffffd) == 0;
}


// ===== sym.arm_smmu_domain_alloc @ 0x0800d38c (size 156) =====

int64_t sym.arm_smmu_domain_alloc(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 == 1) || (arg1 == 4)) ||
        ((iVar2 = 0, (arg1 & 0xfffffff7) == 3 && ((obj.using_legacy_binding & 1) == 0)))) &&
       (iVar1 = kmem_cache_alloc_trace(_device_match_fwnode,0xdc0,0x180), iVar2 = iVar1, iVar1 != 0)) {
        __mutex_init(iVar1 + 0x50,"&smmu_domain->init_mutex",obj.arm_smmu_device_cfg_probe.__key);
        iVar2 = iVar1 + 0xb0;
        *(iVar1 + 0x80) = 0;
        *(iVar1 + 0x8c) = 0xffffffff;
    }
    return iVar2;
}


// ===== sym.arm_smmu_domain_free @ 0x0800d428 (size 88) =====

void sym.arm_smmu_domain_free(int64_t arg1)

{
    int64_t in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + -0x27) >> 2 & 1) != 0) {
        in_q0 = fast_smmu_put_dma_cookie(arg1);
    }
    sym.arm_smmu_destroy_domain_context(arg1,in_q0,in_x2);
    iommu_logger_unregister(*(arg1 + -8));
    kfree(arg1 + -0xb0);
    return;
}


// ===== sym.arm_smmu_attach_dev @ 0x0800d480 (size 588) =====

int sym.arm_smmu_attach_dev(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    ulong *in_x18;
    int64_t *arg2_00;
    uint32_t uVar13;
    ulong *puVar14;
    ulong *puVar15;
    uint32_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg2 + 0x340);
    if (((iVar7 == 0) || (puVar14 = *(iVar7 + 0x40), puVar14 == NULL)) ||
       (*puVar14 != reloc.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt)) {
        _dev_err(arg2,"cannot attach to SMMU, is it on the same bus?\n");
        iVar4 = -6;
    }
    else {
        puVar15 = *(iVar7 + 0x50);
        if (puVar15 == NULL) {
            iVar4 = -0x13;
        }
        else {
            arg2_00 = *puVar15;
            iVar7 = *arg2_00;
            if (((*(iVar7 + 0x200) & 7) == 0) && (iVar4 = __pm_runtime_resume(iVar7,4), iVar4 < 0)) {
                puVar1 = iVar7 + 0x1f8;
                uVar12 = *puVar1;
                do {
                    uVar10 = uVar12;
                    if (uVar10 == 0) {
                        return iVar4;
                    }
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar16 = *puVar1;
                        uVar12 = uVar16;
                        if (uVar16 != uVar10) goto code_r0x0800d654;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = uVar10 - 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800d654:
                } while (uVar10 != uVar16);
            }
            else {
                iVar4 = sym.arm_smmu_init_domain_context(arg1,arg2_00,arg2);
                if (-1 < iVar4) {
                    if (*(arg1 + -0xb0) == arg2_00) {
                        iVar4 = *(arg1 + -0x68);
                        iVar7 = arg2_00[0xd];
                        cVar2 = *(arg1 + -0x80);
                        mutex_lock(arg2_00 + 0xe);
                        uVar10 = *(puVar14 + 0x14);
                        if (uVar10 != 0) {
                            uVar16 = 0;
                            do {
                                iVar6 = *(puVar15 + uVar16 * 2 + 8);
                                puVar11 = iVar7 + iVar6 * 0x18 + 0xc;
                                uVar13 = iVar4 == 3;
                                if ((*puVar11 != uVar13) || (cVar2 != *(iVar7 + iVar6 * 0x18 + 0x14))) {
                                    iVar8 = iVar7 + iVar6 * 0x18;
                                    *puVar11 = uVar13;
                                    *(iVar8 + 0x10) = 0;
                                    *(iVar8 + 0x14) = cVar2;
                                    sym.arm_smmu_write_s2cr(arg2_00,iVar6);
                                    uVar10 = *(puVar14 + 0x14);
                                }
                                uVar16 = uVar16 + 1;
                            } while (uVar16 < uVar10);
                        }
                        mutex_unlock(arg2_00 + 0xe);
                        iVar4 = 0;
                    }
                    else {
                        piVar9 = **(arg1 + -0xb0);
                        iVar7 = piVar9[0xe];
                        if (iVar7 == 0) {
                            iVar7 = *piVar9;
                        }
                        iVar6 = (*arg2_00)[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **arg2_00;
                        }
                        _dev_err(arg2,"cannot attach to SMMU %s whilst already attached to domain on SMMU %s\n",iVar7
                                 ,iVar6);
                        iVar4 = -0x16;
                    }
                }
                iVar7 = *arg2_00;
                if ((*(iVar7 + 0x200) & 7) == 0) {
                    uVar5 = ktime_get_mono_fast_ns();
                    *(iVar7 + 0x218) = uVar5;
                    __pm_runtime_idle(*arg2_00,5);
                }
            }
        }
    }
    return iVar4;
}


// ===== sym.arm_smmu_map_pages @ 0x0800d6cc (size 584) =====

int sym.arm_smmu_map_pages(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong in_x4;
    uint in_w5;
    uint uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t iVar12;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + -0xa0);
    if (iVar11 == 0) {
        iVar5 = -0x13;
    }
    else {
        piVar10 = *(arg1 + -0xb0);
        iVar12 = *piVar10;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar12,4), iVar5 < 0)) {
            puVar1 = iVar12 + 0x1f8;
            uVar9 = *puVar1;
            do {
                uVar8 = uVar9;
                if (uVar8 == 0) {
                    return iVar5;
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar9 = uVar2;
                    if (uVar2 != uVar8) goto code_r0x0800d838;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar8 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800d838:
            } while (uVar8 != uVar2);
        }
        else {
            pcVar13 = *(iVar11 + 8);
            uVar7 = 0xcc0;
            if ((*(arg1 + -0x27) & 2) != 0) {
                uVar7 = 0xa20;
            }
            __cfi_slowpath_diag(0xa20,0x6bcdfb1740954593,pcVar13,0x8001d30);
            iVar5 = (*pcVar13)(iVar11,arg2,arg3,arg4,in_x4,in_w5,uVar7);
            iVar11 = *piVar10;
            if ((*(iVar11 + 0x200) & 7) == 0) {
                uVar6 = ktime_get_mono_fast_ns();
                *(iVar11 + 0x218) = uVar6;
                __pm_runtime_idle(*piVar10,5);
            }
            if (iVar5 == 0) {
                iVar5 = 0;
            }
        }
    }
    return iVar5;
}


// ===== sym.arm_smmu_map_sg @ 0x0800d92c (size 568) =====

int sym.arm_smmu_map_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    uint in_w4;
    uint uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    code *pcVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + -0xa0);
    if (iVar10 == 0) {
        iVar5 = -0x13;
    }
    else {
        piVar13 = *(arg1 + -0xb0);
        iVar11 = *piVar13;
        if (((*(iVar11 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar11,4), iVar5 < 0)) {
            puVar1 = iVar11 + 0x1f8;
            uVar9 = *puVar1;
            do {
                uVar8 = uVar9;
                if (uVar8 == 0) {
                    return iVar5;
                }
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar9 = uVar2;
                    if (uVar2 != uVar8) goto code_r0x0800da88;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar8 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800da88:
            } while (uVar8 != uVar2);
        }
        else {
            pcVar12 = *(iVar10 + 0x10);
            uVar7 = 0xcc0;
            if ((*(arg1 + -0x27) & 2) != 0) {
                uVar7 = 0xa20;
            }
            __cfi_slowpath_diag(0xa20,0x1a23b7727c32edfa,pcVar12,0x8001d50);
            iVar5 = (*pcVar12)(iVar10,arg2,arg3,arg4 & 0xffffffff,in_w4,uVar7);
            iVar10 = *piVar13;
            if ((*(iVar10 + 0x200) & 7) == 0) {
                uVar6 = ktime_get_mono_fast_ns();
                *(iVar10 + 0x218) = uVar6;
                __pm_runtime_idle(*piVar13,5);
            }
            if (iVar5 == 0) {
                iVar5 = 0;
            }
        }
    }
    return iVar5;
}


// ===== sym.arm_smmu_unmap_pages @ 0x0800db7c (size 336) =====

ulong sym.arm_smmu_unmap_pages(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + -0xa0);
    if (iVar2 == 0) {
        uVar1 = 0;
    }
    else {
        pcVar3 = *(iVar2 + 0x20);
        __cfi_slowpath_diag(0x7264df867f1d6ecd,pcVar3,0x8001d70);
        uVar1 = (*pcVar3)(iVar2,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.arm_smmu_flush_iotlb_all @ 0x0800dcec (size 444) =====

void sym.arm_smmu_flush_iotlb_all(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    code *pcVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar12 = *(arg1 + -0xb0);
    iVar10 = arg1 + -0x20;
    uVar6 = _raw_spin_lock_irqsave(iVar10);
    if (*(arg1 + 0xcd) == '\0') {
        _raw_spin_unlock_irqrestore(iVar10,uVar6);
        if (*(arg1 + -0x88) != 0) {
            iVar11 = *piVar12;
            if (((*(iVar11 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar11,4), iVar5 < 0)) {
                puVar1 = iVar11 + 0x1f8;
                uVar9 = *puVar1;
                do {
                    uVar8 = uVar9;
                    if (uVar8 == 0) break;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar9 = uVar2;
                        if (uVar2 != uVar8) goto code_r0x0800de3c;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar8 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800de3c:
                } while (uVar8 != uVar2);
            }
            uVar6 = _raw_spin_lock_irqsave(iVar10);
            if (*(arg1 + 0xcd) == '\0') {
                pcVar7 = **(arg1 + -0x88);
                if (4 < (pcVar7 + -0x8007e58 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar7,0x8001cf0);
                }
                (*pcVar7)(arg1 + -0xb0);
                iVar11 = *(arg1 + -0x18);
                *(arg1 + -0x10) = 0;
                *(arg1 + -0x18) = 0;
                while (iVar11 != 0) {
                    iVar11 = *(iVar11 + 0x20);
                    qcom_io_pgtable_free_page();
                }
            }
            _raw_spin_unlock_irqrestore(iVar10,uVar6);
            iVar10 = *piVar12;
            if ((*(iVar10 + 0x200) & 7) == 0) {
                uVar6 = ktime_get_mono_fast_ns();
                *(iVar10 + 0x218) = uVar6;
                __pm_runtime_idle(*piVar12,5);
            }
        }
    }
    else {
        *(arg1 + -0x10) = 0;
        _raw_spin_unlock_irqrestore(iVar10,uVar6);
    }
    return;
}


// ===== sym.arm_smmu_iotlb_sync @ 0x0800dea8 (size 44) =====

void sym.arm_smmu_iotlb_sync(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0xb0) != 0) {
        sym.arm_smmu_flush_iotlb_all(arg1);
    }
    return;
}


// ===== sym.arm_smmu_iova_to_phys @ 0x0800ded4 (size 348) =====

ulong sym.arm_smmu_iova_to_phys(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    code *pcVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + -0xa0);
    if (iVar11 == 0) {
code_r0x0800dfec:
        uVar6 = 0;
    }
    else {
        piVar12 = *(arg1 + -0xb0);
        if (((*(piVar12 + 3) >> 5 & 1) == 0) || (*(arg1 + -0x68) != 0)) {
            pcVar10 = *(iVar11 + 0x28);
            __cfi_slowpath_diag(0x48fa85c07a417c12,pcVar10,0x8001d90);
            uVar6 = (*pcVar10)(iVar11,arg2);
        }
        else {
            iVar11 = *piVar12;
            if (((*(iVar11 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar11,4), iVar5 < 0)) {
                puVar1 = iVar11 + 0x1f8;
                uVar9 = *puVar1;
                do {
                    uVar8 = uVar9;
                    if (uVar8 == 0) goto code_r0x0800dfec;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar9 = uVar2;
                        if (uVar2 != uVar8) goto code_r0x0800dfcc;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar8 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800dfcc:
                    uVar6 = 0;
                } while (uVar8 != uVar2);
            }
            else {
                uVar6 = sym.__arm_smmu_iova_to_phys_hard(arg1,arg2);
                iVar11 = *piVar12;
                if ((*(iVar11 + 0x200) & 7) == 0) {
                    uVar7 = ktime_get_mono_fast_ns();
                    *(iVar11 + 0x218) = uVar7;
                    __pm_runtime_idle(*piVar12,5);
                }
            }
        }
    }
    return uVar6;
}


// ===== sym.arm_smmu_probe_device @ 0x0800e030 (size 660) =====

int64_t * sym.arm_smmu_probe_device(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t *arg1_00;
    ulong *puVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x340) == 0) {
        if ((obj.using_legacy_binding & 1) == 0) {
            return 0xffffffffffffffed;
        }
    }
    else if ((obj.using_legacy_binding & 1) == 0) {
        puVar12 = *(*(arg1 + 0x340) + 0x40);
        if ((puVar12 == NULL) || (*puVar12 != reloc.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt)) {
            return 0xffffffffffffffed;
        }
        iVar7 = driver_find_device(0x8001478,0,puVar12[1],sym.device_match_fwnode.cfi_jt);
        put_device();
        if (iVar7 == 0) {
            return 0xffffffffffffffed;
        }
        arg1_00 = *(iVar7 + 0x98);
        if (arg1_00 == NULL) {
            return 0xffffffffffffffed;
        }
        uVar10 = *(puVar12 + 0x14);
        if (uVar10 != 0) {
            uVar9 = *(arg1_00 + 0xb);
            uVar13 = 0;
            do {
                uVar3 = *(puVar12 + uVar13 * 4 + 0x18);
                uVar2 = uVar3 & 0xffff;
                if ((uVar2 & ~*(arg1_00 + 0xb)) != 0) {
                    pcVar8 = "stream ID 0x%x out of range for SMMU (0x%x)\n";
code_r0x0800e294:
                    _dev_err(arg1,pcVar8,uVar2,uVar9);
                    iVar6 = -0x16;
                    goto code_r0x0800e1d8;
                }
                uVar2 = uVar3 >> 0x10;
                if ((uVar2 & (*(arg1_00 + 0x5a) ^ 0xffffffff)) != 0) {
                    pcVar8 = "SMR mask 0x%x out of range for SMMU (0x%x)\n";
                    uVar9 = *(arg1_00 + 0x5a);
                    goto code_r0x0800e294;
                }
                uVar13 = uVar13 + 1;
            } while (uVar10 != uVar13);
        }
        puVar12 = __kmalloc(uVar10 * 2 + 8,0xdc0);
        if (puVar12 == NULL) {
            iVar6 = -0xc;
            goto code_r0x0800e1d8;
        }
        iVar7 = *(arg1 + 0x340);
        *puVar12 = arg1_00;
        *(iVar7 + 0x50) = puVar12;
        if (uVar10 != 0) {
            uVar13 = uVar10;
            if (0x80000000 < uVar10 + 0x7fffffff) {
                uVar13 = uVar10 & 1;
                uVar9 = uVar10 & 0xfffffffe;
                uVar2 = uVar10;
                do {
                    uVar9 = uVar9 - 2;
                    *(puVar12 + (uVar2 - 2) * 2 + 8) = 0xffff;
                    *(puVar12 + (uVar2 - 1) * 2 + 8) = 0xffff;
                    uVar2 = uVar2 - 2;
                } while (uVar9 != 0);
                if (uVar10 == (uVar10 & 0xfffffffe)) goto code_r0x0800e188;
            }
            iVar6 = uVar13 - 1;
            do {
                *(puVar12 + iVar6 * 2 + 8) = 0xffff;
                iVar6 = iVar6 + -1;
            } while (iVar6 != -1);
        }
code_r0x0800e188:
        iVar7 = *arg1_00;
        if (((*(iVar7 + 0x200) & 7) == 0) && (iVar6 = __pm_runtime_resume(iVar7,4), iVar6 < 0)) {
            puVar1 = iVar7 + 0x1f8;
            uVar11 = *puVar1;
            do {
                uVar10 = uVar11;
                if (uVar10 == 0) break;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar13 = *puVar1;
                    uVar11 = uVar13;
                    if (uVar13 != uVar10) goto code_r0x0800e258;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = uVar10 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800e258:
            } while (uVar10 != uVar13);
        }
        else {
            iVar6 = sym.arm_smmu_master_alloc_smes(arg1);
            sym.arm_smmu_rpm_put(arg1_00);
            if (iVar6 == 0) {
                device_link_add(arg1,*arg1_00,0x14);
                return arg1_00 + 0x1c;
            }
        }
        kfree(puVar12);
        goto code_r0x0800e1d8;
    }
    iVar6 = -0x13;
code_r0x0800e1d8:
    iommu_fwspec_free(arg1);
    return iVar6;
}


// ===== sym.arm_smmu_release_device @ 0x0800e2c4 (size 552) =====

void sym.arm_smmu_release_device(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    uchar uVar3;
    uint32_t uVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *puVar12;
    ulong *in_x18;
    ulong *puVar13;
    int64_t *arg1_00;
    int64_t *piVar14;
    int16_t *piVar15;
    ulong *puVar16;
    uint uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x340);
    if (((iVar8 != 0) && (puVar16 = *(iVar8 + 0x40), puVar16 != NULL)) &&
       (*puVar16 == reloc.arm_smmu_capable.73c668e47250e1a2d5221ed72817c1f7.cfi_jt)) {
        puVar13 = *(iVar8 + 0x50);
        piVar14 = *puVar13;
        iVar8 = *piVar14;
        arg1_00 = piVar14;
        if ((*(iVar8 + 0x200) & 7) == 0) {
            iVar6 = __pm_runtime_resume(iVar8,4);
            if (iVar6 < 0) {
                puVar1 = iVar8 + 0x1f8;
                uVar10 = *puVar1;
                do {
                    uVar9 = uVar10;
                    if (uVar9 == 0) {
                        return;
                    }
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar4 = *puVar1;
                        uVar10 = uVar4;
                        if (uVar4 != uVar9) goto code_r0x0800e4ac;
                        cVar2 = '\x01';
                        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                            *puVar1 = uVar9 - 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800e4ac:
                    if (uVar9 == uVar4) {
                        return;
                    }
                } while( true );
            }
            arg1_00 = *puVar13;
        }
        mutex_lock();
        if (*(puVar16 + 0x14) != 0) {
            uVar9 = 0;
            do {
                piVar15 = puVar13 + uVar9 * 2 + 8;
                iVar8 = *piVar15;
                iVar11 = arg1_00[0xd] + iVar8 * 0x18;
                cVar2 = *(iVar11 + 0x15);
                iVar6 = *(iVar11 + 8) + -1;
                uVar3 = *(iVar11 + 0x14);
                *(iVar11 + 8) = iVar6;
                if (iVar6 == 0) {
                    puVar12 = arg1_00[0xd] + iVar8 * 0x18;
                    uVar17 = 1;
                    if (obj.disable_bypass != 0x0) {
                        uVar17 = 2;
                    }
                    *puVar12 = 0;
                    *(puVar12 + 1) = 0;
                    *(puVar12 + 0xc) = uVar17;
                    puVar12[2] = 0;
                    if (cVar2 == '\0') {
                        if (arg1_00[0xc] != 0) {
                            *(arg1_00[0xc] + iVar8 * 6 + 4) = 0;
                        }
                    }
                    else {
                        *(arg1_00[0xd] + iVar8 * 0x18 + 0x15) = 1;
                        *(arg1_00[0xd] + iVar8 * 0x18 + 0x14) = uVar3;
                    }
                    sym.arm_smmu_write_sme(arg1_00,iVar8);
                }
                *piVar15 = -1;
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(puVar16 + 0x14));
        }
        mutex_unlock(arg1_00 + 0xe);
        iVar8 = *piVar14;
        if ((*(iVar8 + 0x200) & 7) == 0) {
            uVar7 = ktime_get_mono_fast_ns();
            *(iVar8 + 0x218) = uVar7;
            __pm_runtime_idle(*piVar14,5);
        }
        *(*(arg1 + 0x340) + 0x50) = 0;
        kfree(puVar13);
        iommu_fwspec_free(arg1);
    }
    return;
}


// ===== sym.arm_smmu_probe_finalize @ 0x0800e4ec (size 128) =====

void sym.arm_smmu_probe_finalize(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = NULL;
    if (*(arg1 + 0x340) != 0) {
        piVar1 = *(*(arg1 + 0x340) + 0x50);
    }
    iVar3 = *piVar1;
    iVar2 = *(iVar3 + 0x28);
    if ((iVar2 != 0) && (pcVar4 = *(iVar2 + 0x98), pcVar4 != NULL)) {
        __cfi_slowpath_diag(0xee78c6b915643417,pcVar4,0x8001db0);
        (*pcVar4)(iVar3,arg1);
    }
    return;
}


// ===== sym.arm_smmu_device_group @ 0x0800e56c (size 648) =====

uint64_t sym.arm_smmu_device_group(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    code *extraout_x8;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x340);
    if (iVar4 == 0) {
        piVar9 = NULL;
        iVar4 = 0;
    }
    else {
        piVar9 = *(iVar4 + 0x50);
        iVar4 = *(iVar4 + 0x40);
    }
    iVar8 = *piVar9;
    mutex_lock(iVar8 + 0x70);
    uStack_50 = 0;
    iStack_58 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,iommu-group",0);
    if (((iStack_58 == 0) ||
        (((iVar2 = bus_for_each_dev(platform_bus_type,0,&iStack_58,
                                    sym.__bus_lookup_iommu_group.73c668e47250e1a2d5221ed72817c1f7.cfi_jt),
          uVar7 = uStack_50, iVar2 < 1 &&
          (iVar2 = bus_for_each_dev(pci_bus_type,0,&iStack_58,
                                    sym.__bus_lookup_iommu_group.73c668e47250e1a2d5221ed72817c1f7.cfi_jt),
          uVar7 = uStack_50, iVar2 < 1)) && (uVar7 = generic_device_group(arg1), 0xfffffffffffff000 < uVar7)))) ||
       (uVar7 == 0)) {
        if (*(iVar4 + 0x14) != 0) {
            iVar2 = 0;
            uVar6 = 0;
            do {
                uVar7 = *(*(iVar8 + 0x68) + *(piVar9 + iVar2 * 2 + 8) * 0x18);
                if ((uVar6 != 0) && (uVar7 != 0 && uVar6 != uVar7)) {
                    _dev_err(arg1,"ID:%x IDX:%x is already in a group!\n",*(iVar4 + iVar2 * 4 + 0x18));
                    uVar7 = 0xffffffffffffffea;
                    goto code_r0x0800e76c;
                }
                iVar2 = iVar2 + 1;
                uVar6 = uVar7;
            } while (*(iVar4 + 0x14) != iVar2);
            if (uVar7 != 0) {
                iommu_group_ref_get(uVar7);
                goto code_r0x0800e6f0;
            }
        }
        if (*(arg1 + 0x80) == pci_bus_type) {
            uVar7 = pci_device_group(arg1);
        }
        else {
            uVar7 = generic_device_group();
        }
        if (0xfffffffffffff000 < uVar7) {
            uVar7 = 0;
            goto code_r0x0800e76c;
        }
    }
code_r0x0800e6f0:
    if (uVar7 < 0xfffffffffffff001) {
        if (*(iVar8 + 0x28) == 0) goto code_r0x0800e738;
        pcVar5 = *(*(iVar8 + 0x28) + 0x58);
        if (pcVar5 == NULL) goto code_r0x0800e738;
        if (pcVar5 != sym.__typeid__ZTSFiP6deviceP11iommu_groupE_global_addr) goto code_r0x0800e7c8;
        goto code_r0x0800e718;
    }
code_r0x0800e76c:
    while( true ) {
        mutex_unlock(iVar8 + 0x70);
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        pcVar5 = extraout_x8;
code_r0x0800e7c8:
        __cfi_slowpath_diag(0x95e687ce58d02367,pcVar5,0x8001dd0);
code_r0x0800e718:
        iVar2 = (*pcVar5)(arg1,uVar7);
        if (iVar2 == 0) {
code_r0x0800e738:
            if (*(iVar4 + 0x14) != 0) {
                uVar3 = 0;
                do {
                    iVar1 = uVar3;
                    uVar3 = uVar3 + 1;
                    *(*(iVar8 + 0x68) + *(piVar9 + iVar1 * 2 + 8) * 0x18) = uVar7;
                } while (uVar3 < *(iVar4 + 0x14));
            }
        }
        else {
            iommu_group_put(uVar7);
            uVar7 = 0xffffffffffffffea;
        }
    }
    return uVar7;
}


// ===== sym.arm_smmu_enable_nesting @ 0x0800e7f4 (size 104) =====

uint sym.arm_smmu_enable_nesting(int64_t arg1)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + -0x60);
    if (*(arg1 + -0xb0) == 0) {
        uVar1 = 0;
        *(arg1 + -0x68) = 2;
    }
    else {
        uVar1 = 0xffffffff;
    }
    mutex_unlock(arg1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_set_pgtable_quirks @ 0x0800e85c (size 104) =====

uint sym.arm_smmu_set_pgtable_quirks(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + -0x60);
    if (*(arg1 + -0xb0) == 0) {
        uVar1 = 0;
        *(arg1 + -0x98) = arg2;
    }
    else {
        uVar1 = 0xffffffff;
    }
    mutex_unlock(arg1 + -0x60);
    return uVar1;
}


// ===== sym.arm_smmu_get_resv_regions @ 0x0800e8c4 (size 140) =====

void sym.arm_smmu_get_resv_regions(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = iommu_alloc_resv_region(0x8000000,0x100000,0x1a,4);
    if (piVar1 != NULL) {
        piVar3 = *(arg2 + 8);
        uVar2 = __list_add_valid(piVar1,piVar3,arg2);
        if ((uVar2 & 1) != 0) {
            *(arg2 + 8) = piVar1;
            *piVar1 = arg2;
            piVar1[1] = piVar3;
            *piVar3 = piVar1;
        }
        iommu_dma_get_resv_regions(arg1,arg2);
        qcom_iommu_generate_resv_regions(arg1,arg2);
    }
    return;
}


// ===== sym.arm_smmu_of_xlate @ 0x0800e950 (size 192) =====

ulong sym.arm_smmu_of_xlate(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar8;
    ulong unaff_x30;
    uint32_t uStack_30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    if (*(arg2 + 8) < 1) {
        uVar8 = 0;
code_r0x0800e9a4:
        iStack_2c = 0;
        iVar1 = of_property_read_variable_u32_array(*arg2,"stream-match-mask",&iStack_2c,1,0);
        iVar4 = iStack_2c;
        if (iVar1 < 0) goto code_r0x0800e9d0;
    }
    else {
        uVar8 = *(arg2 + 0xc);
        uStack_30 = *(arg2 + 0xc);
        iStack_2c = 0;
        if (*(arg2 + 8) == 1) goto code_r0x0800e9a4;
        iVar4 = *(arg2 + 0x10);
    }
    uStack_30 = uVar8 | iVar4 << 0x10;
code_r0x0800e9d0:
    uVar2 = iommu_fwspec_add_ids(arg1,&uStack_30,1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = sym.arm_smmu_def_domain_type;
        if ((((*(iVar3 + 0x340) == 0) || (piVar5 = *(*(iVar3 + 0x340) + 0x50), piVar5 == NULL)) ||
            (iVar6 = *(*piVar5 + 0x28), iVar6 == 0)) || (pcVar7 = *(iVar6 + 0x68), pcVar7 == NULL)) {
            uVar2 = 0;
        }
        else {
            if (9 < (pcVar7 + -0x80080e8 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0xa8417ba4356eb711,pcVar7,0x8001df0);
            }
            uVar2 = (*pcVar7)(iVar3);
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.arm_smmu_def_domain_type @ 0x0800ea10 (size 156) =====

ulong sym.arm_smmu_def_domain_type(int64_t arg1)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((*(arg1 + 0x340) == 0) || (piVar2 = *(*(arg1 + 0x340) + 0x50), piVar2 == NULL)) ||
        (iVar3 = *(*piVar2 + 0x28), iVar3 == 0)) || (pcVar4 = *(iVar3 + 0x68), pcVar4 == NULL)) {
        uVar1 = 0;
    }
    else {
        if (9 < (pcVar4 + -0x80080e8 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xa8417ba4356eb711,pcVar4,0x8001df0);
        }
        uVar1 = (*pcVar4)(arg1);
    }
    return uVar1;
}


// ===== sym.__arm_smmu_iova_to_phys_hard @ 0x0800eaac (size 820) =====

void sym.__arm_smmu_iova_to_phys_hard(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint8_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    code *pcVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint64_t uVar10;
    code *pcVar11;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar8 = arg1 + -0x30;
    iStack_68 = *(iVar4 + 0x5e0);
    puVar9 = *(arg1 + -0xb0);
    uVar10 = *(arg1 + -0xa0);
    uVar2 = *(arg1 + -0x80);
    pcVar7 = *puVar9;
    iStack_70 = arg2;
    uVar3 = _raw_spin_lock_irqsave(iVar8);
    uVar6 = arg2 & 0xfffffffffffff000;
    iVar1 = *(puVar9 + 2) + uVar2;
    if (*(arg1 + -0x70) == 1) {
        if ((puVar9[5] == 0) || (pcVar11 = *(puVar9[5] + 0x18), pcVar11 == NULL)) {
            sym.writeq_relaxed(uVar6,puVar9[1] + (iVar1 << (*(puVar9 + 0x14) & 0x1f)) + 0x800);
        }
        else {
            if (pcVar11 != sym.__typeid__ZTSFvP15arm_smmu_deviceiiyE_global_addr) {
                __cfi_slowpath_diag(0xccad771d3547f1f4,pcVar11,0x8001b90);
            }
            (*pcVar11)(puVar9,iVar1,0x800,uVar6);
        }
    }
    else if ((puVar9[5] == 0) || (pcVar11 = *(puVar9[5] + 8), pcVar11 == NULL)) {
        sym.writel_relaxed(arg2 & 0xfffff000,puVar9[1] + (iVar1 << (*(puVar9 + 0x14) & 0x1f)) + 0x800);
    }
    else {
        if (pcVar11 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar11,0x8001b70);
        }
        (*pcVar11)(puVar9,iVar1,0x800,uVar6);
    }
    pcVar11 = puVar9[1] + (*(puVar9 + 2) + uVar2 << (*(puVar9 + 0x14) & 0x1f)) + 0x8f0;
    iVar4 = ktime_get();
    uVar6 = sym.readl(pcVar11);
    if ((uVar6 & 1) != 0) {
        do {
            iVar5 = ktime_get();
            if (iVar4 + 50000 < iVar5) {
                uVar6 = sym.readl(pcVar11);
                break;
            }
            __const_udelay(0x53e3);
            uVar6 = sym.readl(pcVar11);
        } while ((uVar6 & 1) != 0);
    }
    if ((uVar6 & 1) != 0) {
        _raw_spin_unlock_irqrestore(iVar8,uVar3);
        _dev_err(pcVar7,"iova to phys timed out on %pad. Falling back to software table walk.\n",&iStack_70);
        pcVar7 = *(uVar10 + 0x28);
        __cfi_slowpath_diag(0x48fa85c07a417c12,pcVar7,0x8001c10);
        uVar6 = (*pcVar7)(uVar10,iStack_70);
        goto code_r0x0800ec24;
    }
    uVar10 = *(puVar9 + 2) + uVar2;
    if ((puVar9[5] != 0) && (pcVar11 = *(puVar9[5] + 0x10), pcVar11 != NULL)) {
        if (pcVar11 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) goto code_r0x0800ed54;
        goto code_r0x0800ecfc;
    }
    puVar9 = sym.readq_relaxed(puVar9[1] + (*(puVar9 + 2) + uVar2 << (*(puVar9 + 0x14) & 0x1f)) + 0x50);
    while( true ) {
        _raw_spin_unlock_irqrestore(iVar8,uVar3);
        if ((puVar9 & 1) == 0) {
            uVar6 = puVar9 & 0xfffffff000 | arg2 & 0xfffU;
        }
        else {
            _dev_err(pcVar7,"translation fault!\n");
            _dev_err(pcVar7,"PAR = 0x%llx\n",puVar9);
            uVar6 = 0;
        }
code_r0x0800ec24:
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_68) break;
        __stack_chk_fail(uVar6);
code_r0x0800ed54:
        __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar11,0x8001c30);
code_r0x0800ecfc:
        puVar9 = (*pcVar11)(puVar9,uVar10 & 0xffffffff,0x50);
    }
    return;
}


// ===== sym.readl @ 0x0800ede0 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800ede4);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x800ee28);
    return uVar1;
}


// ===== sym.readl_1 @ 0x0800ee60 (size 124) =====

uint sym.readl_1(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800ee64);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x800eea8);
    return uVar1;
}


// ===== sym.readq_relaxed @ 0x0800eee0 (size 108) =====

ulong sym.readq_relaxed(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x800eee4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x40,arg1,0x800ef18);
    return uVar1;
}


// ===== sym.readq_relaxed_1 @ 0x0800ef50 (size 108) =====

ulong sym.readq_relaxed_1(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x800ef54);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x40,arg1,0x800ef88);
    return uVar1;
}


// ===== sym.__arm_smmu_sid_switch @ 0x0800efc0 (size 372) =====

ulong sym.__arm_smmu_sid_switch(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t iVar10;
    ulong *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x340);
    if (iVar7 != 0) {
        iVar10 = *(iVar7 + 0x40);
        puVar11 = *(iVar7 + 0x50);
        if (iVar10 != 0 && puVar11 != NULL) {
            arg1_00 = *puVar11;
            iVar7 = *arg1_00;
            if (((*(iVar7 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar7,4), iVar5 < 0)) {
                puVar1 = iVar7 + 0x1f8;
                uVar9 = *puVar1;
                do {
                    uVar8 = uVar9;
                    if (uVar8 == 0) break;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar9 = uVar2;
                        if (uVar2 != uVar8) goto code_r0x0800f0f4;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar8 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x0800f0f4:
                } while (uVar8 != uVar2);
            }
            mutex_lock(arg1_00 + 0xe);
            if (*(iVar10 + 0x14) != 0) {
                uVar8 = 0;
                do {
                    iVar7 = *(puVar11 + uVar8 * 2 + 8);
                    *(arg1_00[0xc] + iVar7 * 6 + 4) = arg2 == 0;
                    sym.arm_smmu_write_sme(arg1_00,iVar7);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(iVar10 + 0x14));
            }
            mutex_unlock(arg1_00 + 0xe);
            DataSynchronizationBarrier(3,2,0);
            iVar7 = *arg1_00;
            if ((*(iVar7 + 0x200) & 7) == 0) {
                uVar6 = ktime_get_mono_fast_ns();
                *(iVar7 + 0x218) = uVar6;
                __pm_runtime_idle(*arg1_00,5);
            }
        }
    }
    return 0;
}


// ===== sym.arm_smmu_write_sme @ 0x0800f134 (size 252) =====

void sym.arm_smmu_write_sme(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    ushort *puVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg2;
    sym.arm_smmu_write_s2cr(arg1,arg2);
    iVar3 = *(arg1 + 0x60);
    if (iVar3 != 0) {
        puVar5 = iVar3 + iVar1 * 6;
        uVar2 = CONCAT22(*puVar5,puVar5[1]);
        if (((*(arg1 + 0x19) >> 4 & 1) == 0) && (*(iVar3 + iVar1 * 6 + 4) != '\0')) {
            uVar2 = uVar2 | 0x80000000;
        }
        iVar1 = iVar1 * 4 + 0x800;
        if ((*(arg1 + 0x28) == 0) || (pcVar4 = *(*(arg1 + 0x28) + 8), pcVar4 == NULL)) {
            sym.writel_relaxed(uVar2,*(arg1 + 8) + iVar1);
        }
        else {
            if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001b70);
            }
            (*pcVar4)(arg1,0,iVar1,uVar2);
        }
    }
    return;
}


// ===== sym.arm_smmu_write_s2cr @ 0x0800f230 (size 348) =====

void sym.arm_smmu_write_s2cr(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t arg1_00;
    code *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x28) == 0) || (pcVar4 = *(*(arg1 + 0x28) + 0x88), pcVar4 == NULL)) {
        iVar3 = arg2;
        iVar5 = *(arg1 + 0x68) + iVar3 * 0x18;
        uVar1 = *(iVar5 + 0x14) | (*(iVar5 + 0xc) & 3) << 0x10 | (*(iVar5 + 0x10) & 3) << 0x18;
        uVar2 = uVar1 | 0x300;
        arg1_00 = uVar2;
        if (((*(arg1 + 0x19) >> 4 & 1) != 0) && (*(arg1 + 0x60) != 0)) {
            if (*(*(arg1 + 0x60) + iVar3 * 6 + 4) != '\0') {
                uVar2 = uVar1 | 0x700;
            }
            arg1_00 = uVar2;
        }
        iVar3 = iVar3 * 4 + 0xc00;
        if ((*(arg1 + 0x28) == 0) || (pcVar4 = *(*(arg1 + 0x28) + 8), pcVar4 == NULL)) {
            sym.writel_relaxed(arg1_00,*(arg1 + 8) + iVar3);
        }
        else {
            if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001b70);
            }
            (*pcVar4)(arg1,0,iVar3,arg1_00);
        }
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiE_global_addr) {
            __cfi_slowpath_diag(0xbb23ff5915bbe737,pcVar4,0x8001c50);
        }
        (*pcVar4)(arg1,arg2);
    }
    return;
}


// ===== sym.arm_smmu_destroy_domain_context @ 0x0800f38c (size 548) =====

void sym.arm_smmu_destroy_domain_context(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    int64_t in_x3;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t iVar10;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar in_q1 [16];
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + -0xb0);
    if (arg1_00 == NULL) {
        return;
    }
    if (*arg1 == 4) {
        return;
    }
    iVar10 = *arg1_00;
    if (((*(iVar10 + 0x200) & 7) == 0) && (iVar6 = __pm_runtime_resume(iVar10,4), noname_1 = extraout_q0, iVar6 < 0))
    {
        puVar1 = iVar10 + 0x1f8;
        uVar9 = *puVar1;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) {
                return;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar9 = uVar3;
                if (uVar3 != uVar8) goto code_r0x0800f54c;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800f54c:
            if (uVar8 == uVar3) {
                return;
            }
        } while( true );
    }
    if ((*(arg1 + 0xcc) != '\0') && (iVar10 = *arg1_00, (*(iVar10 + 0x200) & 7) == 0)) {
        uVar7 = ktime_get_mono_fast_ns(noname_1);
        *(iVar10 + 0x218) = uVar7;
        __pm_runtime_idle(*arg1_00,5);
    }
    *(arg1_00[9] + *(arg1 + -0x80) * 0x30 + 0x28) = 0;
    sym.arm_smmu_write_context_bank(arg1_00,*(arg1 + -0x80),in_q1,in_x3);
    if (*(arg1 + -0x7f) != 0xff) {
        devm_free_irq(*arg1_00,*(arg1_00[0x19] + (arg1_00[0x18] + *(arg1 + -0x7f)) * 4),arg1);
    }
    qcom_free_io_pgtable_ops(*(arg1 + -0xa0));
    if (*(arg1_00 + 0x54) == 0) {
        uVar2 = *(arg1 + -0x80);
    }
    else {
        bVar5 = false;
        iVar6 = 0;
        uVar2 = *(arg1 + -0x80);
        do {
            if (uVar2 == *(arg1_00[0xd] + iVar6 * 0x18 + 0x14)) {
                bVar5 = *(arg1_00[0xd] + iVar6 * 0x18 + 0x15) != '\0' | bVar5;
            }
            iVar6 = iVar6 + 1;
        } while (*(arg1_00 + 0x54) != iVar6);
        if (bVar5) goto code_r0x0800f4e4;
    }
    puVar1 = arg1_00 + (uVar2 >> 3 & 0x18) + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = *puVar1 & (1L << (uVar2 & 0x3f) ^ 0xffffffffffffffffU);
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
code_r0x0800f4e4:
    iVar10 = *arg1_00;
    if ((*(iVar10 + 0x200) & 7) == 0) {
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar10 + 0x218) = uVar7;
        __pm_runtime_idle(*arg1_00,5);
    }
    return;
}


// ===== sym.arm_smmu_init_domain_context @ 0x0800f5b0 (size 2252) =====

code * sym.arm_smmu_init_domain_context(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    code *arg2_00;
    uint8_t uVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong *in_x18;
    int64_t iVar14;
    int64_t *arg1_00;
    code *unaff_x24;
    code *unaff_x25;
    uint16_t uVar15;
    code *pcVar16;
    uint uVar17;
    uint64_t *unaff_x27;
    ulong *unaff_x28;
    ulong *puVar18;
    ulong unaff_x30;
    uchar in_q1 [16];
    uint uStack_74;
    code *pcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar14 = arg1 + -0x60;
    iStack_68 = *(iVar12 + 0x5e0);
    mutex_lock(iVar14);
    arg1_00 = arg1 + -0xb0;
    if (*arg1_00 != 0) {
        pcVar16 = NULL;
        arg2_00 = unaff_x25;
        goto code_r0x0800fbfc;
    }
    *(arg1 + -0xa8) = arg3;
    pcStack_70 = NULL;
    uStack_74 = 0;
    if ((*(arg3 + 0x2f0) != 0) &&
       ((unaff_x24 = of_parse_phandle(*(arg3 + 0x2f0),"qcom,iommu-group",0), unaff_x24 != NULL ||
        (unaff_x24 = *(arg3 + 0x2f0), unaff_x24 != NULL)))) {
        iVar7 = of_property_read_string(unaff_x24,"qcom,iommu-dma",&pcStack_70);
        if (iVar7 != 0) {
            pcStack_70 = 0x8003583;
        }
        unaff_x25 = pcStack_70;
        iVar7 = strcmp(pcStack_70,"bypass");
        if (iVar7 == 0) {
            uVar8 = 1;
code_r0x0800f6d8:
            *(arg1 + -0x27) = *(arg1 + -0x27) | uVar8;
        }
        else {
            iVar7 = strcmp(unaff_x25,"fastmap");
            if (iVar7 == 0) {
                uVar8 = 6;
                goto code_r0x0800f6d8;
            }
            iVar7 = strcmp(unaff_x25,"atomic");
            if (iVar7 == 0) {
                uVar8 = 2;
                goto code_r0x0800f6d8;
            }
            iVar7 = strcmp(unaff_x25,"disabled");
            if (iVar7 == 0) goto code_r0x0800f850;
        }
        iVar7 = of_property_match_string(unaff_x24,"qcom,iommu-faults","stall-disable");
        if (-1 < iVar7) {
            *(arg1 + -0x28) = *(arg1 + -0x28) | 4;
        }
        iVar7 = of_property_match_string(unaff_x24,"qcom,iommu-faults","no-CFRE");
        if (-1 < iVar7) {
            *(arg1 + -0x28) = *(arg1 + -0x28) | 2;
        }
        iVar7 = of_property_match_string(unaff_x24,"qcom,iommu-faults","HUPCF");
        if (-1 < iVar7) {
            *(arg1 + -0x28) = *(arg1 + -0x28) | 8;
        }
        iVar7 = of_property_match_string(unaff_x24,"qcom,iommu-faults","non-fatal");
        if (-1 < iVar7) {
            *(arg1 + -0x28) = *(arg1 + -0x28) | 1;
        }
        iVar7 = of_property_read_variable_u32_array(unaff_x24,"qcom,iommu-vmid",&uStack_74,1,0);
        if (-1 < iVar7) {
            *(arg1 + -0x24) = uStack_74;
        }
        iVar7 = of_property_read_string(unaff_x24,"qcom,iommu-pagetable",&pcStack_70);
        if (iVar7 != 0) {
            pcStack_70 = 0x800358b;
        }
        unaff_x25 = pcStack_70;
        iVar7 = strcmp(pcStack_70,"coherent");
        if (iVar7 == 0) {
            *(arg1 + -0x90) = 1;
        }
        else {
            iVar7 = strcmp(unaff_x25,0x8002328);
            if (iVar7 == 0) {
                uVar9 = 0x40;
            }
            else {
                iVar7 = strcmp(unaff_x25,"LLC_NWA");
                if (iVar7 != 0) goto code_r0x0800f830;
                uVar9 = 0x80000000;
            }
            *(arg1 + -0x98) = uVar9;
        }
code_r0x0800f830:
        iVar12 = of_find_property(unaff_x24,"qcom,iommu-earlymap",0);
        if (iVar12 != 0) {
            *(arg1 + -0x26) = 1;
        }
    }
code_r0x0800f850:
    if (*arg1 == 4) {
        pcVar16 = NULL;
        *(arg1 + -0x68) = 3;
        goto code_r0x0800f868;
    }
    uVar6 = *(arg2 + 0x18);
    if ((uVar6 >> 2 & 1) == 0) {
        *(arg1 + -0x68) = 1;
        uVar6 = *(arg2 + 0x18);
        if ((uVar6 >> 3 & 1) != 0) goto code_r0x0800f888;
code_r0x0800f8a4:
        *(arg1 + -0x68) = 0;
        uVar6 = *(arg2 + 0x18);
        if ((uVar6 >> 10 & 1) != 0) goto code_r0x0800f8b0;
code_r0x0800f88c:
        if ((uVar6 & 0x380) != 0) goto code_r0x0800f894;
code_r0x0800f8c4:
        iVar7 = *(arg1 + -0x70);
        if (iVar7 != 0) goto code_r0x0800f8cc;
code_r0x0800f980:
        pcVar16 = 0xffffffea;
        arg2_00 = unaff_x25;
    }
    else {
        if ((uVar6 >> 3 & 1) == 0) goto code_r0x0800f8a4;
code_r0x0800f888:
        if ((uVar6 >> 10 & 1) == 0) goto code_r0x0800f88c;
code_r0x0800f8b0:
        *(arg1 + -0x70) = 2;
        if ((*(arg2 + 0x18) & 0x380) == 0) goto code_r0x0800f8c4;
code_r0x0800f894:
        iVar7 = 1;
        *(arg1 + -0x70) = 1;
code_r0x0800f8cc:
        if (*(arg1 + -0x68) - 1U < 2) {
            *(arg1 + -0x74) = 0;
            unaff_x24 = *(arg2 + 0xa8);
            unaff_x27 = *(arg2 + 0xb0);
            bVar5 = iVar7 != 1;
            uVar6 = 3;
            if (bVar5) {
                uVar6 = 1;
            }
            unaff_x28 = uVar6;
            if (bVar5 && 0x27 < unaff_x27) {
                unaff_x27 = 0x28;
            }
            if (bVar5 && 0x27 < unaff_x24) {
                unaff_x24 = 0x28;
            }
            if (*(arg2 + 0x20) == 2) {
                arg2_00 = NULL;
                pcVar16 = obj.arm_smmu_s2_tlb_ops_v2;
            }
            else {
                arg2_00 = NULL;
                pcVar16 = reloc.arm_smmu_tlb_inv_context_s2.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
            }
        }
        else {
            if (*(arg1 + -0x68) != 0) goto code_r0x0800f980;
            *(arg1 + -0x74) = 1;
            unaff_x24 = *(arg2 + 0xa0);
            unaff_x27 = *(arg2 + 0xa8);
            arg2_00 = *(arg2 + 0x34);
            if (iVar7 == 2) {
                if (0x1f < unaff_x24) {
                    unaff_x24 = 0x20;
                }
                unaff_x28 = NULL;
                if (0x27 < unaff_x27) {
                    unaff_x27 = 0x28;
                }
            }
            else if (iVar7 == 1) {
                if (((*(arg2 + 0x1c) >> 2 & 1) != 0) && (0x26 < unaff_x24)) {
                    unaff_x24 = 0x27;
                }
                unaff_x28 = 0xfffffffe;
            }
            else {
                if (0x1f < unaff_x24) {
                    unaff_x24 = 0x20;
                }
                if (0x1f < unaff_x27) {
                    unaff_x27 = 0x20;
                }
                unaff_x28 = 0x4;
            }
            pcVar16 = reloc.arm_smmu_tlb_inv_context_s1.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
        }
        uVar17 = SUB84(unaff_x27,0);
        *(arg1 + -0x88) = pcVar16;
        if ((*(arg1 + -0x27) >> 2 & 1) == 0) {
            if (*(arg1 + -0x24) != -1) {
                *(arg1 + 0xb0) = *(arg1 + -0x24);
            }
            iVar12 = *(arg2 + 0x28);
        }
        else {
            uVar6 = qcom_iommu_get_fast_iova_range(arg3,arg1 + 0xb8,arg1 + 0xc0);
            if (uVar6 < 0) {
                pcVar16 = uVar6;
                goto code_r0x0800fbfc;
            }
            unaff_x28 = 0xffffffff;
            iVar12 = *(arg2 + 0x28);
        }
        if ((iVar12 != 0) && (pcVar16 = *(iVar12 + 0x80), pcVar16 != NULL)) {
            if (pcVar16 != sym.__typeid__ZTSFiP15arm_smmu_domainP15arm_smmu_deviceP6deviceiE_global_addr)
            goto code_r0x0800fdc4;
            goto code_r0x0800fa3c;
        }
        uVar6 = sym.__arm_smmu_alloc_cb(arg2 + 0x38,arg2_00,*(arg2 + 0x30),arg3);
        pcVar16 = uVar6;
        puVar18 = unaff_x28;
        if (-1 < uVar6) goto code_r0x0800fa78;
    }
code_r0x0800fbfc:
    mutex_unlock(iVar14);
    do {
        iVar12 = sp_el0;
        if (*(iVar12 + 0x5e0) == iStack_68) {
            return pcVar16;
        }
        __stack_chk_fail();
code_r0x0800fdc4:
        __cfi_slowpath_diag(0x18dcb57789f1ef81,pcVar16,0x8001cd0);
code_r0x0800fa3c:
        uVar17 = SUB84(unaff_x27,0);
        uVar6 = (*pcVar16)(arg1_00,arg2,arg3,arg2_00 & 0xffffffff);
        pcVar16 = uVar6;
        puVar18 = unaff_x28;
        if (uVar6 < 0) goto code_r0x0800fbfc;
code_r0x0800fa78:
        *arg1_00 = arg2;
        uVar15 = pcVar16;
        *(arg1 + -0x80) = pcVar16;
        if (*(arg2 + 0x20) < 2) {
            puVar1 = arg2 + 0x50;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar6 = *puVar1 + 1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            *(arg1 + -0x7f) = uVar6;
            uVar3 = *(arg2 + 0xc4);
            uVar15 = *(arg1 + -0x80);
            cVar4 = '\0';
            if (uVar3 != 0) {
                cVar4 = (uVar6 & 0xff) / uVar3;
            }
            *(arg1 + -0x7f) = uVar6 - cVar4 * uVar3;
        }
        else {
            *(arg1 + -0x7f) = pcVar16;
        }
        uVar15 = uVar15 & 0xff;
        if (*(arg1 + -0x68) == 1) {
            uVar15 = uVar15 + 1;
        }
        *(arg1 + -0x7e) = uVar15;
        *(arg1 + 0xa0) = reloc.arm_smmu_tlb_add_walk_page.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
        *(arg1 + 0xa8) = reloc.arm_smmu_log_new_table.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
        uVar9 = *(arg2 + 0xb8);
        if (*(arg1 + -0x90) == '\0') {
            uVar8 = 0;
            if (*arg1_00 != NULL) {
                iVar12 = **arg1_00;
                uVar8 = 0;
                if (iVar12 != 0) {
                    uVar8 = *(iVar12 + 0x34c) >> 5 & 1;
                }
            }
        }
        else {
            uVar8 = 1;
        }
        uVar13 = *arg2;
        *(arg1 + 0x48) = 0;
        *(arg1 + 0x50) = uVar9;
        *(arg1 + 0x58) = unaff_x24;
        *(arg1 + 0x5c) = uVar17;
        *(arg1 + 0x60) = uVar8;
        unaff_x27 = arg1 + 0x48;
        *(arg1 + 0x78) = 0;
        *(arg1 + 0x80) = 0;
        *(arg1 + 0x68) = *(arg1 + -0x88);
        *(arg1 + 0x70) = uVar13;
        *(arg1 + 0x88) = 0;
        *(arg1 + 0x90) = 0;
        *(arg1 + 0x98) = 0;
        unaff_x25 = arg2_00;
        if ((*(arg2 + 0x28) != 0) && (unaff_x25 = *(*(arg2 + 0x28) + 0x30), unaff_x25 != NULL)) {
            if (2 < (unaff_x25 + -0x8007fd0 >> 3 | unaff_x25 << 0x3d)) {
                __cfi_slowpath_diag(0x59ec9da796b5bdee,unaff_x25,0x8001c70);
            }
            uVar6 = (*unaff_x25)(arg1_00,unaff_x27,arg3);
            pcVar16 = uVar6;
            if (uVar6 != 0) goto code_r0x0800fc94;
        }
        if (*(arg1 + -0x98) != 0) {
            *unaff_x27 = *unaff_x27 | *(arg1 + -0x98);
        }
        arg2_00 = qcom_alloc_io_pgtable_ops(puVar18 & 0xffffffff,unaff_x27,arg1_00);
        if (arg2_00 == NULL) {
            pcVar16 = 0xfffffff4;
            goto code_r0x0800fc94;
        }
        unaff_x28 = arg1 + -8;
        pcVar16 = arg2_00 + -0x68;
        *(arg1 + 200) = puVar18;
        uVar6 = iommu_logger_register(unaff_x28,arg1,*(arg1 + -0xa8));
        if (uVar6 != 0) {
            _dev_err(arg3,"Log registration failed\n");
            goto code_r0x0800fc8c;
        }
        uVar11 = -1L << (unaff_x24 & 0x3f);
        *(arg1 + 0x10) = *(arg1 + 0x50);
        if ((*(arg1 + 0x48) >> 5 & 1) == 0) {
            uVar10 = ~uVar11;
        }
        else {
            uVar10 = 0xffffffffffffffff;
            *(arg1 + 0x28) = uVar11;
        }
        uVar8 = *(arg1 + -0x27);
        *(arg1 + 0x30) = uVar10;
        *(arg1 + 0x38) = 1;
        if ((uVar8 >> 2 & 1) != 0) {
            uVar6 = fast_smmu_init_mapping(arg3,arg1,arg2_00);
            if (uVar6 != 0) break;
            uVar8 = *(arg1 + -0x27);
        }
        if ((uVar8 >> 1 & 1) != 0) {
            *(arg1 + 0xcc) = 1;
            sym.arm_smmu_rpm_get(arg2);
        }
        sym.arm_smmu_init_context_bank(arg1_00,unaff_x27);
        if ((*(arg2 + 0x28) != 0) && (unaff_x24 = *(*(arg2 + 0x28) + 0x38), unaff_x24 != NULL)) {
            if (unaff_x24 != sym.__typeid__ZTSFvP15arm_smmu_domainP6deviceE_global_addr) {
                __cfi_slowpath_diag(0x3e1b0d8473e23260,unaff_x24,0x8001c90);
            }
            (*unaff_x24)(arg1_00,arg3);
        }
        sym.arm_smmu_write_context_bank(arg2,*(arg1 + -0x80),in_q1,pcVar16);
        arg3 = *(*(arg2 + 200) + (*(arg2 + 0xc0) + *(arg1 + -0x7f)) * 4);
        if ((*(arg2 + 0x28) == 0) || (pcVar16 = *(*(arg2 + 0x28) + 0x78), pcVar16 == NULL)) {
            pcVar16 = sym.arm_smmu_context_fault.73c668e47250e1a2d5221ed72817c1f7.cfi_jt;
        }
        iVar7 = devm_request_threaded_irq(*arg2,arg3,0,pcVar16,0x2080,"arm-smmu-context-fault",arg1);
        if (iVar7 < 0) {
            _dev_err(*arg2,"failed to request context IRQ %d (%u)\n",*(arg1 + -0x7f),arg3);
            *(arg1 + -0x7f) = 0xff;
        }
        mutex_unlock(iVar14);
        pcVar16 = NULL;
        *(arg1 + -0xa0) = arg2_00;
    } while( true );
    iommu_logger_unregister(*unaff_x28);
    *unaff_x28 = 0;
code_r0x0800fc8c:
    pcVar16 = uVar6;
    qcom_free_io_pgtable_ops(*(arg1 + -0xa0));
    unaff_x25 = arg2_00;
    puVar18 = unaff_x28;
code_r0x0800fc94:
    uVar8 = *(arg1 + -0x80);
    puVar2 = arg2 + (uVar8 >> 3 & 0x18) + 0x38;
    Hint_Prefetch(puVar2,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
            *puVar2 = *puVar2 & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    arg2 = 0;
    unaff_x28 = puVar18;
code_r0x0800f868:
    *arg1_00 = arg2;
    arg2_00 = unaff_x25;
    goto code_r0x0800fbfc;
}


// ===== sym.arm_smmu_init_context_bank @ 0x0800fe7c (size 732) =====

void sym.arm_smmu_init_context_bank(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t *puVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t *puVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x3c);
    iVar12 = *(*arg1 + 0x48);
    uVar13 = *(arg1 + 0x30);
    puVar5 = iVar12 + uVar13 * 0x30;
    puVar5[5] = arg1 + 0x30;
    if (iVar1 == 0) {
        uVar4 = *(arg2 + 0x38);
        *(iVar12 + uVar13 * 0x30 + 0x10) =
             (uVar4 & 0x18) << 0xb | (uVar4 & 7) << 0x10 | (uVar4 & 0x60) << 7 | (uVar4 & 0x180) << 3 |
             uVar4 >> 1 & 0x300 | uVar4 >> 5 & 0xc0 | uVar4 >> 0xd & 0x3f | 0x80000000;
        *puVar5 = *(arg2 + 0x30);
    }
    else {
        if (*(arg1 + 0x40) == 3) {
            *(iVar12 + uVar13 * 0x30 + 0x10) = *(arg2 + 0x34);
        }
        else {
            uVar4 = *(arg2 + 0x38);
            uVar4 = (uVar4 & 0x60) << 7 | (uVar4 >> 3 & 3) << 0xe | (uVar4 >> 7 & 3) << 10 | uVar4 >> 1 & 0x300 |
                    uVar4 >> 0xb & 0x3f;
            iVar6 = iVar12 + uVar13 * 0x30;
            uVar7 = uVar4 | 0x800000;
            if ((*arg2 & 0x20) != 0) {
                uVar7 = uVar4 << 0x10 | 0x80;
            }
            puVar9 = iVar6 + 0x10;
            *puVar9 = uVar7;
            uVar4 = *(arg2 + 0x38);
            puVar8 = iVar6 + 0x14;
            *puVar8 = uVar4 & 7 | 0x38000;
            if (*(arg1 + 0x40) == 1) {
                *puVar8 = uVar4 & 7 | 0x38010;
            }
            else {
                *puVar9 = uVar7 | 0x80000000;
            }
        }
        if (*(arg1 + 0x40) == 3) {
            *puVar5 = *(arg2 + 0x30);
            *(iVar12 + uVar13 * 0x30 + 8) = 0;
        }
        else {
            uVar3 = *(arg1 + 0x32) << 0x30;
            *puVar5 = uVar3;
            uVar11 = *(arg1 + 0x32) << 0x30;
            puVar10 = iVar12 + uVar13 * 0x30 + 8;
            *puVar10 = uVar11;
            if ((*arg2 >> 5 & 1) == 0) {
                *puVar5 = *(arg2 + 0x30) | uVar3;
            }
            else {
                *puVar10 = *(arg2 + 0x30) | uVar11;
            }
        }
        if (*(arg1 + 0x40) == 3) {
            iVar6 = iVar12 + uVar13 * 0x30;
            *(iVar6 + 0x18) = *(arg2 + 0x3c);
            *(iVar6 + 0x1c) = *(arg2 + 0x38);
        }
        else {
            iVar6 = iVar12 + uVar13 * 0x30;
            *(iVar6 + 0x18) = *(arg2 + 0x40);
            *(iVar6 + 0x1c) = *(arg2 + 0x44);
        }
    }
    *(arg1 + 0x38) = 0;
    uVar3 = of_dma_is_coherent(*(*(arg1 + 8) + 0x2f0));
    uVar2 = *(arg1 + 0x88);
    uVar4 = *(arg1 + 0x38) & 0xffffc000 | 0x7da;
    if ((uVar3 & 1) == 0) {
        uVar4 = *(arg1 + 0x38) | 0x30;
    }
    uVar4 = uVar4 & 0xffffc000 | ((uVar2 >> 1 ^ 0xffffffff) & 1) << 0xd | ((uVar2 >> 2 ^ 0xffffffff) & 1) << 0xc |
            uVar4 & 0x7ff | (uVar2 >> 3 & 1) << 0xb;
    *(arg1 + 0x38) = uVar4;
    if ((((*(arg1 + 0x89) & 1) == 0) && (*(arg1 + 0x8a) == '\0')) || (iVar1 == 0)) {
        uVar4 = uVar4 | 0x4000;
        *(arg1 + 0x38) = uVar4;
    }
    uVar7 = 0x46;
    if (*(arg1 + 0x3c) != 0) {
        uVar7 = 0x1046;
    }
    *(iVar12 + uVar13 * 0x30 + 0x20) =
         (uVar4 & 3) << 0x1a |
         uVar7 | uVar4 >> 0xe | uVar4 >> 3 & 0x100 | uVar4 >> 5 & 0x80 | uVar4 >> 8 & 0x20 | (uVar4 >> 2 & 3) << 0x18 |
         (uVar4 & 0x30) << 0x12 | (uVar4 & 0x40) << 0xe | (uVar4 & 0x780) << 9;
    return;
}


// ===== sym.arm_smmu_context_fault @ 0x08010158 (size 4412) =====

uint64_t sym.arm_smmu_context_fault(ulong noname_0,int64_t arg1)

{
    uint64_t *puVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    char *pcVar10;
    char *pcVar11;
    code **ppcVar12;
    uint8_t uVar13;
    char cVar14;
    bool bVar15;
    int iVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint uVar19;
    uint uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    ulong uVar23;
    int64_t iVar24;
    int64_t iVar25;
    ulong *puVar26;
    ulong *in_x18;
    uint64_t *puVar27;
    int iVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    code *unaff_x23;
    code *unaff_x24;
    code *pcVar31;
    code *unaff_x25;
    code *unaff_x26;
    ulong unaff_x30;
    ushort uStack_a0;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar24 = sp_el0;
    iStack_68 = *(iVar24 + 0x5e0);
    puVar27 = *(arg1 + -0xb0);
    uVar13 = *(arg1 + -0x80);
    uVar29 = uVar13;
    uVar30 = *puVar27;
    if (((*(uVar30 + 0x200) & 7) == 0) && (iVar16 = __pm_runtime_resume(uVar30,4), iVar16 < 0)) {
        puVar1 = uVar30 + 0x1f8;
        uVar22 = *puVar1;
        do {
            uVar21 = uVar22;
            if (uVar21 == 0) {
                uVar29 = 0;
                goto code_r0x08010bd4;
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar17 = *puVar1;
                uVar22 = uVar17;
                if (uVar17 != uVar21) goto code_r0x08010374;
                cVar14 = '\x01';
                bVar15 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar15) {
                    *puVar1 = uVar21 - 1;
                    cVar14 = ExclusiveMonitorsStatus();
                }
            } while (cVar14 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08010374:
            uVar29 = 0;
            if (uVar21 == uVar17) goto code_r0x08010bd4;
        } while( true );
    }
    iVar16 = puVar27[2] + uVar13;
    if ((puVar27[5] == NULL) || (unaff_x23 = *puVar27[5], unaff_x23 == NULL)) {
        uVar22 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x58);
    }
    else {
        if (unaff_x23 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,unaff_x23,0x8001bd0);
        }
        uVar22 = (*unaff_x23)(puVar27,iVar16,0x58);
    }
    uVar30 = uVar22 & 0xffffffff;
    if ((uVar22 & 0xc00001fe) == 0) {
        uVar29 = 0;
        goto code_r0x08010bb0;
    }
    if (((*(puVar27 + 0x1c) & 1) != 0) && ((uVar22 >> 7 & 1) != 0)) {
        _dev_err(*puVar27,"Took an address size fault.  Refusing to recover.\n");
    //WARNING: Does not return
        pcVar31 = SoftwareBreakpoint(0x800,0x8010fa0);
        (*pcVar31)();
    }
    iVar16 = puVar27[2] + uVar13;
    if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
        uVar22 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x58);
    }
    else {
        if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
        }
        uVar22 = (*pcVar31)(puVar27,iVar16,0x58);
    }
    unaff_x23 = uVar22 & 0xffffffff;
    uVar21 = uVar13;
    iVar16 = puVar27[2] + uVar21;
    if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
        uVar17 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x68);
    }
    else {
        if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
        }
        uVar17 = (*pcVar31)(puVar27,iVar16,0x68);
    }
    unaff_x24 = uVar17;
    uVar18 = puVar27[2] + uVar21;
    unaff_x25 = uVar18;
    if ((puVar27[5] == 0) || (unaff_x26 = *(puVar27[5] + 0x10), unaff_x26 == NULL)) {
        uVar23 = sym.readq_relaxed(puVar27[1] + (uVar18 << (*(puVar27 + 0x14) & 0x1f)) + 0x60);
    }
    else {
        if (unaff_x26 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0x9f6c1d97e51850d,unaff_x26,0x8001c30);
        }
        uVar23 = (*unaff_x26)(puVar27,unaff_x25,0x60);
    }
    iVar16 = report_iommu_fault(arg1,*puVar27,uVar23,
                                uVar22 & 0x18 | (unaff_x23 >> 1 & 1) << 2 | unaff_x23 >> 0x19 & 0x20 | uVar17 >> 4 & 1);
    if (iVar16 == -0x10) goto code_r0x08010338;
    if (iVar16 == -0x26) {
        iVar16 = ___ratelimit(obj.arm_smmu_context_fault._rs,0x800232c);
        if (iVar16 != 0) {
            iVar16 = puVar27[2] + uVar21;
            iVar24 = *(puVar27[9] + uVar21 * 0x30 + 0x28);
            iVar28 = *(iVar24 + 0xc);
            if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
                uVar21 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x58);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uVar21 = (*pcVar31)(puVar27,iVar16,0x58);
            }
            uVar17 = uVar13;
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
                uVar18 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x68);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uVar18 = (*pcVar31)(puVar27,iVar16,0x68);
            }
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
                uStack_9c = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x6c);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uStack_9c = (*pcVar31)(puVar27,iVar16,0x6c);
            }
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] == 0) || (pcVar31 = *(puVar27[5] + 0x10), pcVar31 == NULL)) {
                uVar23 = sym.readq_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x60);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar31,0x8001c30);
                }
                uVar23 = (*pcVar31)(puVar27,iVar16,0x60);
            }
            unaff_x23 = uVar29 << 2 | 0x400;
            if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
                uStack_a0 = sym.readl_relaxed(unaff_x23 + puVar27[1] + (1 << (*(puVar27 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uStack_a0 = (*pcVar31)(puVar27,1,unaff_x23);
            }
            iVar25 = (*(arg1 + -0xa8))[0xe];
            if (iVar25 == 0) {
                iVar25 = **(arg1 + -0xa8);
            }
            _dev_err(*puVar27,"Unhandled arm-smmu context fault from %s!\n",iVar25);
            _dev_err(*puVar27,"FAR    = 0x%016lx\n",uVar23);
            uVar22 = *puVar27;
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] == 0) || (pcVar31 = *(puVar27[5] + 0x10), pcVar31 == NULL)) {
                uVar23 = sym.readq_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x50);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar31,0x8001c30);
                }
                uVar23 = (*pcVar31)(puVar27,iVar16,0x50);
            }
            _dev_err(uVar22,"PAR    = 0x%pK\n",uVar23);
            bVar15 = (uVar18 & 0x10) != 0;
            pcVar4 = "TF R ";
            if (bVar15) {
                pcVar4 = "TF W ";
            }
            pcVar2 = 0x80037b6;
            pcVar6 = "PF R ";
            if (bVar15) {
                pcVar6 = "PF W ";
            }
            pcVar3 = pcVar2;
            if ((uVar21 & 2) != 0) {
                pcVar3 = pcVar4;
            }
            pcVar4 = pcVar2;
            if ((uVar21 & 4) != 0) {
                pcVar4 = "AFF ";
            }
            pcVar5 = pcVar2;
            if ((uVar21 & 8) != 0) {
                pcVar5 = pcVar6;
            }
            pcVar6 = pcVar2;
            if ((uVar21 & 0x10) != 0) {
                pcVar6 = 0x800380e;
            }
            pcVar7 = pcVar2;
            if ((uVar21 & 0x20) != 0) {
                pcVar7 = "TLBMCF ";
            }
            pcVar8 = pcVar2;
            if ((uVar21 & 0x40) != 0) {
                pcVar8 = "TLBLKF ";
            }
            pcVar9 = pcVar2;
            if ((uVar21 & 0x80) != 0) {
                pcVar9 = "ASF ";
            }
            pcVar10 = pcVar2;
            if ((uVar21 & 0x100) != 0) {
                pcVar10 = "UUT ";
            }
            pcVar11 = pcVar2;
            if ((uVar21 & 0x40000000) != 0) {
                pcVar11 = 0x80030dc;
            }
            if ((uVar21 & 0x80000000) != 0) {
                pcVar2 = "MULTI ";
            }
            _dev_err(*puVar27,"FSR    = 0x%08x [%s%s%s%s%s%s%s%s%s%s]\n",uVar21,pcVar3,pcVar4,pcVar5,pcVar6,
                     pcVar7,pcVar8,pcVar9,pcVar10,pcVar11,pcVar2);
            _dev_err(*puVar27,"FSYNR0    = 0x%x\n",uVar18);
            _dev_err(*puVar27,"FSYNR1    = 0x%x\n",uStack_9c);
            _dev_err(*puVar27,"context bank#    = 0x%x\n",uVar17);
            uVar22 = *puVar27;
            iVar16 = puVar27[2] + uVar17;
            puVar26 = puVar27[5];
            if (*(iVar24 + 0x10) != 3) {
                if ((puVar26 == NULL) || (pcVar31 = puVar26[2], pcVar31 == NULL)) {
                    uVar23 = sym.readq_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x20);
                }
                else {
                    if (pcVar31 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar31,0x8001c30);
                    }
                    uVar23 = (*pcVar31)(puVar27,iVar16,0x20);
                }
                _dev_err(uVar22,"TTBR0  = 0x%pK\n",uVar23);
                if (iVar28 == 0) goto code_r0x08010774;
                unaff_x26 = *puVar27;
                uVar17 = puVar27[2] + uVar17;
                unaff_x25 = uVar17;
                if ((puVar27[5] != 0) && (unaff_x24 = *(puVar27[5] + 0x10), unaff_x24 != NULL)) goto code_r0x08010eb4;
                uVar22 = sym.readq_relaxed(puVar27[1] + (uVar17 << (*(puVar27 + 0x14) & 0x1f)) + 0x28);
                goto code_r0x08010764;
            }
            if ((puVar26 == NULL) || (pcVar31 = *puVar26, pcVar31 == NULL)) {
                uVar19 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x20);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uVar19 = (*pcVar31)(puVar27,iVar16,0x20);
            }
            _dev_err(uVar22,"TTBR0  = 0x%pK\n",uVar19);
            unaff_x26 = *puVar27;
            iVar16 = puVar27[2] + uVar17;
            if ((puVar27[5] != NULL) && (pcVar31 = *puVar27[5], pcVar31 != NULL)) {
                if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
                }
                uVar22 = (*pcVar31)(puVar27,iVar16,0x28);
                uVar22 = uVar22 & 0xffffffff;
                goto code_r0x08010764;
            }
            uVar22 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x28);
            uVar22 = uVar22 & 0xffffffff;
            goto code_r0x08010764;
        }
        if ((*(arg1 + -0x28) & 1) == 0) goto code_r0x08010ab8;
    }
    do {
        iVar16 = puVar27[2] + uVar29;
        if ((puVar27[5] == 0) || (unaff_x23 = *(puVar27[5] + 8), unaff_x23 == NULL)) {
            sym.writel_relaxed(uVar30 & 0xffffffff,puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x58);
            DataSynchronizationBarrier(3,2,0);
            if ((uVar30 >> 0x1e & 1) != 0) goto code_r0x08010b78;
code_r0x08010338:
            uVar29 = 1;
        }
        else {
            if (unaff_x23 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,unaff_x23,0x8001b70);
            }
            (*unaff_x23)(puVar27,iVar16,0x58,uVar30 & 0xffffffff);
            DataSynchronizationBarrier(3,2,0);
            if ((uVar30 >> 0x1e & 1) == 0) goto code_r0x08010338;
code_r0x08010b78:
            iVar16 = puVar27[2] + uVar29;
            if ((puVar27[5] == 0) || (pcVar31 = *(puVar27[5] + 8), pcVar31 == NULL)) {
                uVar29 = 1;
                sym.writel_relaxed(1,puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 8);
            }
            else {
                if (pcVar31 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar31,0x8001b70);
                }
                uVar29 = 1;
                (*pcVar31)(puVar27,iVar16,8,1);
            }
        }
code_r0x08010bb0:
        arg1 = *puVar27;
        if ((*(arg1 + 0x200) & 7) == 0) {
            uVar23 = ktime_get_mono_fast_ns();
            *(arg1 + 0x218) = uVar23;
            __pm_runtime_idle(*puVar27,5);
        }
code_r0x08010bd4:
        iVar24 = sp_el0;
        if (*(iVar24 + 0x5e0) == iStack_68) {
            return uVar29;
        }
        __stack_chk_fail();
code_r0x08010eb4:
        if (unaff_x24 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0x9f6c1d97e51850d,unaff_x24,0x8001c30);
        }
        uVar22 = (*unaff_x24)(puVar27,unaff_x25 & 0xffffffff,0x28);
code_r0x08010764:
        _dev_err(unaff_x26,"TTBR1  = 0x%pK\n",uVar22);
code_r0x08010774:
        uVar22 = *puVar27;
        iVar28 = uVar29;
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar19 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)));
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar19 = (*pcVar31)(puVar27,iVar16,0);
        }
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar20 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 4);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar20 = (*pcVar31)(puVar27,iVar16,4);
        }
        _dev_err(uVar22,"SCTLR  = 0x%08x ACTLR  = 0x%08x\n",uVar19,uVar20);
        uVar22 = *puVar27;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar19 = sym.readl_relaxed(puVar27[1] + (1 << (*(puVar27 + 0x14) & 0x1f)) + uVar29 * 4);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar19 = (*pcVar31)(puVar27,1,uVar29 * 4);
        }
        _dev_err(uVar22,"CBAR  = 0x%08x\n",uVar19);
        uVar22 = *puVar27;
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar19 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x38);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar19 = (*pcVar31)(puVar27,iVar16,0x38);
        }
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar20 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x3c);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar20 = (*pcVar31)(puVar27,iVar16,0x3c);
        }
        _dev_err(uVar22,"MAIR0   = 0x%08x MAIR1   = 0x%08x\n",uVar19,uVar20);
        _dev_err(*puVar27,"SID = 0x%x\n",uStack_a0);
        _dev_err(*puVar27,"Client info: BID=0x%lx, PID=0x%lx, MID=0x%lx\n",uStack_9c >> 0xd & 7,uStack_9c >> 8 & 0x1f
                 ,uStack_9c & 0xff);
        pcStack_78 = NULL;
        uStack_70 = 0;
        pcStack_88 = NULL;
        pcStack_80 = NULL;
        iVar16 = puVar27[2] + iVar28;
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar21 = sym.readl_relaxed(puVar27[1] + (iVar16 << (*(puVar27 + 0x14) & 0x1f)) + 0x68);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar21 = (*pcVar31)(puVar27,iVar16,0x68);
        }
        iVar28 = puVar27[2] + iVar28;
        if ((puVar27[5] == 0) || (pcVar31 = *(puVar27[5] + 0x10), pcVar31 == NULL)) {
            iVar24 = sym.readq_relaxed(puVar27[1] + (iVar28 << (*(puVar27 + 0x14) & 0x1f)) + 0x60);
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar31,0x8001c30);
            }
            iVar24 = (*pcVar31)(puVar27,iVar28,0x60);
        }
        if ((puVar27[5] == NULL) || (pcVar31 = *puVar27[5], pcVar31 == NULL)) {
            uVar17 = sym.readl_relaxed(puVar27[1] + (1 << (*(puVar27 + 0x14) & 0x1f)) + (unaff_x23 & 0xffffffff));
        }
        else {
            if (pcVar31 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar31,0x8001bd0);
            }
            uVar17 = (*pcVar31)(puVar27,1,unaff_x23 & 0xffffffff);
        }
        uStack_70 = sym.arm_smmu_iova_to_phys(arg1,iVar24);
        _dev_err(*puVar27,"soft iova-to-phys=%pa\n",&uStack_70);
        uVar21 = uVar21 >> 4 & 7;
        unaff_x26 = uVar21;
        uStack_8c = uVar17 & 0xffff;
        iStack_98 = iVar24;
        uStack_90 = uVar21;
        unaff_x23 = sym.arm_smmu_iova_to_phys_hard(arg1,&iStack_98);
        pcStack_78 = unaff_x23;
        if (unaff_x23 == NULL) {
            uStack_90 = 2;
            unaff_x24 = sym.arm_smmu_iova_to_phys_hard(arg1,&iStack_98);
            pcStack_80 = unaff_x24;
        }
        else {
            unaff_x24 = NULL;
        }
        pcVar31 = *(*(arg1 + 8) + 0x50);
        if (pcVar31 != NULL) {
            if (1 < (pcVar31 + -0x8007fc0 >> 3 | pcVar31 << 0x3d)) {
                __cfi_slowpath_diag(0x3dfe89e98d52c464,pcVar31,0x8001d10);
            }
            (*pcVar31)(arg1);
        }
        uStack_90 = uVar21;
        unaff_x25 = sym.arm_smmu_iova_to_phys_hard(arg1,&iStack_98);
        pcStack_88 = unaff_x25;
        if ((unaff_x23 == NULL) && (unaff_x24 != NULL)) {
            _dev_err(*puVar27,"ATOS results differed across access privileges...\nBefore: %pa After: %pa\n",
                     &pcStack_78,&pcStack_80);
            unaff_x23 = pcStack_78;
        }
        if (unaff_x23 != unaff_x25) {
            _dev_err(*puVar27,"ATOS results differed across TLBIALL...\nBefore: %pa After: %pa\n",&pcStack_78,
                     &pcStack_88);
            unaff_x25 = pcStack_78;
        }
        ppcVar12 = &pcStack_88;
        if (unaff_x25 != NULL) {
            ppcVar12 = &pcStack_78;
        }
        _dev_err(*puVar27,"hard iova-to-phys (ATOS)=%pa\n",ppcVar12);
    } while ((*(arg1 - 0x28) & 1) != 0);
code_r0x08010ab8:
    //WARNING: Does not return
    pcVar31 = SoftwareBreakpoint(0x800,0x8010abc);
    (*pcVar31)();
}


// ===== sym.arm_smmu_tlb_inv_context_s1 @ 0x08011294 (size 520) =====

void sym.arm_smmu_tlb_inv_context_s1(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    DataSynchronizationBarrier(3,2,0);
    iVar3 = *arg1;
    uVar2 = *(arg1 + 0x32);
    iVar1 = *(iVar3 + 0x10) + *(arg1 + 0x30);
    if ((*(iVar3 + 0x28) == 0) || (pcVar4 = *(*(iVar3 + 0x28) + 8), pcVar4 == NULL)) {
        sym.writel_relaxed(uVar2,*(iVar3 + 8) + (iVar1 << (*(iVar3 + 0x14) & 0x1f)) + 0x610);
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001b70);
        }
        (*pcVar4)(iVar3,iVar1,0x610,uVar2);
    }
    sym.arm_smmu_tlb_sync_context(arg1);
    return;
}


// ===== sym.arm_smmu_tlb_inv_walk_s1 @ 0x080114cc (size 84) =====

void sym.arm_smmu_tlb_inv_walk_s1(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg4 + 0x44) == '\0') {
        sym.arm_smmu_tlb_inv_range_s1(arg1,arg2,arg3,arg4);
        sym.arm_smmu_tlb_sync_context(arg4);
    }
    else {
        sym.arm_smmu_tlb_inv_context_s1(arg4);
    }
    return;
}


// ===== sym.arm_smmu_tlb_add_page_s1 @ 0x08011520 (size 48) =====

void sym.arm_smmu_tlb_add_page_s1(ulong noname_0,int64_t arg2,int64_t arg3,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_tlb_inv_range_s1(arg2,arg3,arg3,arg1);
    return;
}


// ===== sym.arm_smmu_tlb_sync_context @ 0x08011550 (size 180) =====

void sym.arm_smmu_tlb_sync_context(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x84);
    iVar1 = sym.__arm_smmu_tlb_sync(arg1_00,*(arg1_00 + 2) + *(arg1 + 0x30),0x7f0,0x7f4);
    if ((iVar1 != 0) &&
       (iVar1 = ___ratelimit(obj.arm_smmu_tlb_sync_context._rs,"arm_smmu_tlb_sync_context"), iVar1 != 0)) {
        iVar3 = (*(arg1 + 8))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 8);
        }
        _dev_err(*arg1_00,"TLB sync on cb%d failed for device %s\n",*(arg1 + 0x30),iVar3);
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x84,uVar2);
    return;
}


// ===== sym.__arm_smmu_tlb_sync @ 0x08011604 (size 512) =====

ulong sym.__arm_smmu_tlb_sync(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x28) == 0) || (pcVar2 = *(*(arg1 + 0x28) + 8), pcVar2 == NULL)) {
        sym.writel_relaxed(0xffffffff,*(arg1 + 8) + (arg2 << (*(arg1 + 0x14) & 0x1f)) + (arg3 & 0xffffffffU));
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar2,0x8001b70);
        }
        (*pcVar2)(arg1,arg2 & 0xffffffffU,arg3 & 0xffffffffU,0xffffffff);
    }
    uVar3 = 1;
    uVar4 = 1;
    while( true ) {
        if ((*(arg1 + 0x28) == NULL) || (pcVar2 = **(arg1 + 0x28), pcVar2 == NULL)) {
            uVar1 = sym.readl_relaxed(*(arg1 + 8) + (arg4 & 0xffffffffU) + (arg2 << (*(arg1 + 0x14) & 0x1f)));
        }
        else {
            if (pcVar2 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar2,0x8001bd0);
            }
            uVar1 = (*pcVar2)(arg1,arg2 & 0xffffffffU,arg4 & 0xffffffffU);
        }
        if ((uVar1 & 1) == 0) break;
        Yield();
        __udelay(uVar4);
        uVar4 = uVar4 << (uVar4 < 1000);
        uVar3 = uVar4 + uVar3;
        if (499999 < uVar3) {
            if ((*(arg1 + 0x28) != 0) && (pcVar2 = *(*(arg1 + 0x28) + 0x48), pcVar2 != NULL)) {
                if (1 < (pcVar2 + -0x8008050 >> 3 | pcVar2 << 0x3d)) {
                    __cfi_slowpath_diag(0x26d8a99cd42ad740,pcVar2,0x8001cb0);
                }
                (*pcVar2)(arg1);
            }
            return 0xffffffea;
        }
    }
    return 0;
}


// ===== sym.arm_smmu_tlb_inv_range_s1 @ 0x080118ac (size 488) =====

void sym.arm_smmu_tlb_inv_range_s1(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint32_t in_w4;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *arg4;
    uVar2 = *(arg4 + 0x30);
    if ((*(iVar5 + 0x18) & 1) != 0) {
        DataSynchronizationBarrier(3,2,0);
    }
    if (*(arg4 + 0x40) == 1) {
        arg2 = -arg2;
        uVar6 = *(arg4 + 0x32) << 0x30 | arg1 >> 0xc;
        do {
            iVar1 = *(iVar5 + 0x10) + uVar2;
            if ((*(iVar5 + 0x28) == 0) || (pcVar4 = *(*(iVar5 + 0x28) + 0x18), pcVar4 == NULL)) {
                sym.writeq_relaxed(uVar6,*(iVar5 + 8) + in_w4 + (iVar1 << (*(iVar5 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiiyE_global_addr) {
                    __cfi_slowpath_diag(0xccad771d3547f1f4,pcVar4,0x8001b90);
                }
                (*pcVar4)(iVar5,iVar1,in_w4,uVar6);
            }
            uVar6 = uVar6 + (arg3 >> 0xc);
            arg2 = arg2 + arg3;
        } while (arg2 != 0);
    }
    else {
        uVar3 = *(arg4 + 0x32);
        iVar7 = 0;
        do {
            uVar6 = (arg1 & 0xfffffffffffff000U | uVar3) + iVar7;
            iVar1 = *(iVar5 + 0x10) + uVar2;
            if ((*(iVar5 + 0x28) == 0) || (pcVar4 = *(*(iVar5 + 0x28) + 8), pcVar4 == NULL)) {
                sym.writel_relaxed(uVar6 & 0xffffffff,*(iVar5 + 8) + in_w4 + (iVar1 << (*(iVar5 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001b70);
                }
                (*pcVar4)(iVar5,iVar1,in_w4,uVar6);
            }
            iVar7 = iVar7 + arg3;
        } while (arg2 != iVar7);
    }
    return;
}


// ===== sym.arm_smmu_tlb_inv_context_s2 @ 0x08011a94 (size 264) =====

void sym.arm_smmu_tlb_inv_context_s2(int64_t arg1)

{
    uint16_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *arg1_00;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    DataSynchronizationBarrier(3,2,0);
    uVar1 = *(arg1 + 0x32);
    if ((arg1_00[5] == 0) || (pcVar4 = *(arg1_00[5] + 8), pcVar4 == NULL)) {
        sym.writel_relaxed(uVar1,arg1_00[1] + 100);
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001b70);
        }
        (*pcVar4)(arg1_00,0,100,uVar1);
    }
    uVar3 = _raw_spin_lock_irqsave(arg1_00 + 0xdc);
    iVar2 = sym.__arm_smmu_tlb_sync(arg1_00,0,0x70,0x74);
    if ((iVar2 != 0) &&
       (iVar2 = ___ratelimit(obj.arm_smmu_tlb_sync_global._rs,"arm_smmu_tlb_sync_global"), iVar2 != 0)) {
        _dev_err(*arg1_00,"TLB global sync failed!\n");
    }
    _raw_spin_unlock_irqrestore(arg1_00 + 0xdc,uVar3);
    return;
}


// ===== sym.arm_smmu_tlb_inv_walk_s2 @ 0x08011b9c (size 60) =====

void sym.arm_smmu_tlb_inv_walk_s2(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_tlb_inv_range_s2(arg1,arg2,arg3,arg4);
    sym.arm_smmu_tlb_sync_context(arg4);
    return;
}


// ===== sym.arm_smmu_tlb_add_page_s2 @ 0x08011bd8 (size 48) =====

void sym.arm_smmu_tlb_add_page_s2(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_tlb_inv_range_s2(arg1,arg2,arg2,in_x3);
    return;
}


// ===== sym.arm_smmu_tlb_inv_range_s2 @ 0x08011c08 (size 436) =====

void sym.arm_smmu_tlb_inv_range_s2(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint8_t uVar2;
    uint32_t in_w4;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *arg4;
    uVar2 = *(arg4 + 0x30);
    if ((*(iVar4 + 0x18) & 1) != 0) {
        DataSynchronizationBarrier(3,2,0);
    }
    arg1_00 = arg1 >> 0xc;
    arg2 = -arg2;
    do {
        iVar1 = *(iVar4 + 0x10) + uVar2;
        if (*(arg4 + 0x40) == 1) {
            if ((*(iVar4 + 0x28) == 0) || (pcVar3 = *(*(iVar4 + 0x28) + 0x18), pcVar3 == NULL)) {
                sym.writeq_relaxed(arg1_00,*(iVar4 + 8) + in_w4 + (iVar1 << (*(iVar4 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiiyE_global_addr) {
                    __cfi_slowpath_diag(0xccad771d3547f1f4,pcVar3,0x8001b90);
                }
                (*pcVar3)(iVar4,iVar1,in_w4,arg1_00);
            }
        }
        else if ((*(iVar4 + 0x28) == 0) || (pcVar3 = *(*(iVar4 + 0x28) + 8), pcVar3 == NULL)) {
            sym.writel_relaxed(arg1_00 & 0xffffffff,*(iVar4 + 8) + in_w4 + (iVar1 << (*(iVar4 + 0x14) & 0x1f)));
        }
        else {
            if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar3,0x8001b70);
            }
            (*pcVar3)(iVar4,iVar1,in_w4,arg1_00 & 0xffffffff);
        }
        arg1_00 = arg1_00 + (arg3 >> 0xc);
        arg2 = arg2 + arg3;
    } while (arg2 != 0);
    return;
}


// ===== sym.arm_smmu_tlb_inv_walk_s2_v1 @ 0x08011dbc (size 40) =====

void sym.arm_smmu_tlb_inv_walk_s2_v1(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_tlb_inv_context_s2(arg1);
    return;
}


// ===== sym.arm_smmu_tlb_add_page_s2_v1 @ 0x08011de4 (size 184) =====

void sym.arm_smmu_tlb_add_page_s2_v1(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *arg1;
    if ((*(iVar2 + 0x18) & 1) != 0) {
        DataSynchronizationBarrier(3,2,0);
    }
    uVar1 = *(arg1 + 0x32);
    if ((*(iVar2 + 0x28) == 0) || (pcVar3 = *(*(iVar2 + 0x28) + 8), pcVar3 == NULL)) {
        sym.writel_relaxed(uVar1,*(iVar2 + 8) + 100);
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar3,0x8001b70);
        }
        (*pcVar3)(iVar2,0,100,uVar1);
    }
    return;
}


// ===== sym.__arm_smmu_alloc_cb @ 0x08011e9c (size 308) =====

uint64_t sym.__arm_smmu_alloc_cb(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg4 + 0x340);
    if (iVar7 == 0) {
        piVar8 = NULL;
        iVar2 = *0x14;
    }
    else {
        piVar8 = *(iVar7 + 0x50);
        iVar2 = *(*(iVar7 + 0x40) + 0x14);
    }
    if (iVar2 != 0) {
        iVar9 = 0;
        do {
            iVar7 = *(piVar8 + iVar9 * 2 + 8);
            if (*(*(*piVar8 + 0x68) + iVar7 * 0x18 + 0x15) != '\0') {
                return *(*(*piVar8 + 0x68) + iVar7 * 0x18 + 0x14);
            }
            iVar9 = iVar9 + 1;
        } while (iVar2 != iVar9);
    }
    do {
        uVar5 = _find_next_bit(arg1,0,arg3,arg2,0xffffffffffffffff,0);
        if (uVar5 == arg3) {
            return 0xffffffe4;
        }
        uVar6 = 1L << (uVar5 & 0x3f);
        puVar1 = arg1 + (uVar5 >> 6 & 0x3ffffff) * 8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar10 | uVar6;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
    } while ((uVar10 & uVar6) != 0);
    return uVar5;
}


// ===== sym.arm_smmu_tlb_add_walk_page @ 0x08011fd0 (size 124) =====

void sym.arm_smmu_tlb_add_walk_page(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = ((arg2 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x90);
    *(arg1 + 0xa0) = 1;
    *(uVar2 - 0x1ffffffe0) = *(arg1 + 0x98);
    *(arg1 + 0x98) = uVar2 - 0x200000000;
    _raw_spin_unlock_irqrestore(arg1 + 0x90,uVar1);
    return;
}


// ===== sym.arm_smmu_qcom_tlb_add_inv @ 0x0801204c (size 80) =====

void sym.arm_smmu_qcom_tlb_add_inv(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x90);
    *(arg1 + 0xa0) = *(arg1 + 0x17d) ^ 1;
    _raw_spin_unlock_irqrestore(arg1 + 0x90,uVar1);
    return;
}


// ===== sym.arm_smmu_qcom_tlb_sync @ 0x0801209c (size 452) =====

void sym.arm_smmu_qcom_tlb_sync(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    code *pcVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = arg1 + 0x90;
    uVar6 = _raw_spin_lock_irqsave(iVar11);
    if (*(arg1 + 0x17d) == '\0') {
        _raw_spin_unlock_irqrestore(iVar11,uVar6);
        iVar12 = **arg1;
        if (((*(iVar12 + 0x200) & 7) == 0) && (iVar5 = __pm_runtime_resume(iVar12,4), iVar5 < 0)) {
            puVar1 = iVar12 + 0x1f8;
            uVar9 = *puVar1;
            do {
                uVar8 = uVar9;
                if (uVar8 == 0) break;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar9 = uVar2;
                    if (uVar2 != uVar8) goto code_r0x080121f4;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar8 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x080121f4:
            } while (uVar8 != uVar2);
        }
        uVar6 = _raw_spin_lock_irqsave(iVar11);
        if ((*(arg1 + 0x17d) == '\0') && (*(arg1 + 0xa0) != '\0')) {
            pcVar7 = **(arg1 + 0x28);
            if (4 < (pcVar7 + -0x8007e58 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar7,0x8001cf0);
            }
            (*pcVar7)(arg1);
            iVar12 = *(arg1 + 0x98);
            *(arg1 + 0xa0) = 0;
            *(arg1 + 0x98) = 0;
            while (iVar12 != 0) {
                iVar12 = *(iVar12 + 0x20);
                qcom_io_pgtable_free_page();
            }
        }
        _raw_spin_unlock_irqrestore(iVar11,uVar6);
        piVar10 = *arg1;
        iVar11 = *piVar10;
        if ((*(iVar11 + 0x200) & 7) == 0) {
            uVar6 = ktime_get_mono_fast_ns();
            *(iVar11 + 0x218) = uVar6;
            __pm_runtime_idle(*piVar10,5);
        }
    }
    else {
        *(arg1 + 0xa0) = 0;
        _raw_spin_unlock_irqrestore(iVar11,uVar6);
    }
    return;
}


// ===== sym.arm_smmu_log_new_table @ 0x08012260 (size 108) =====

void sym.arm_smmu_log_new_table(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}


// ===== sym.arm_smmu_log_remove_table @ 0x0801238c (size 108) =====

void sym.arm_smmu_log_remove_table(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}


// ===== sym.arm_smmu_master_alloc_smes @ 0x080124b8 (size 764) =====

uint64_t sym.arm_smmu_master_alloc_smes(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    uchar uVar3;
    uint16_t uVar4;
    int iVar5;
    code *pcVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int iVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint uVar13;
    uint32_t uVar14;
    int64_t iVar15;
    ushort *puVar16;
    uint32_t uVar17;
    ulong *puVar18;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar19;
    uint64_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 0x340);
    if (iVar11 == 0) {
        iVar21 = 0;
        piVar19 = NULL;
    }
    else {
        iVar21 = *(iVar11 + 0x40);
        piVar19 = *(iVar11 + 0x50);
    }
    arg1_00 = *piVar19;
    iVar22 = *(arg1_00 + 0x60);
    iVar11 = 0;
    if ((*(arg1 + 0x2f0) != 0) && (iVar11 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,iommu-group",0), iVar11 == 0)) {
        iVar11 = *(arg1 + 0x2f0);
    }
    iVar8 = of_find_property(iVar11,"qcom,iommu-defer-smr-config",0);
    iVar11 = arg1_00 + 0x70;
    mutex_lock(iVar11);
    if (*(iVar21 + 0x14) != 0) {
        uVar14 = 0;
        iVar10 = -1;
        do {
            iVar12 = uVar14;
            if (*(piVar19 + uVar14 * 2 + 8) != -1) {
                uVar20 = 0xffffffef;
                goto code_r0x0801268c;
            }
            iVar15 = *(arg1_00 + 0x60);
            uVar1 = *(iVar21 + uVar14 * 4 + 0x18);
            if (iVar15 == 0) {
                uVar20 = uVar1 & 0xffff;
            }
            else {
                if (*(arg1_00 + 0x54) == 0) {
                    uVar20 = 0xffffffe4;
code_r0x0801268c:
                    if (uVar14 != 0) {
                        do {
                            iVar21 = *(piVar19 + iVar10 * 2 + 8);
                            iVar22 = *(arg1_00 + 0x68) + iVar21 * 0x18;
                            cVar2 = *(iVar22 + 0x15);
                            iVar5 = *(iVar22 + 8) + -1;
                            uVar3 = *(iVar22 + 0x14);
                            *(iVar22 + 8) = iVar5;
                            if (iVar5 == 0) {
                                puVar18 = *(arg1_00 + 0x68) + iVar21 * 0x18;
                                uVar13 = 1;
                                if (obj.disable_bypass != 0x0) {
                                    uVar13 = 2;
                                }
                                *puVar18 = 0;
                                *(puVar18 + 1) = 0;
                                *(puVar18 + 0xc) = uVar13;
                                puVar18[2] = 0;
                                if (cVar2 == '\0') {
                                    if (*(arg1_00 + 0x60) != 0) {
                                        *(*(arg1_00 + 0x60) + iVar21 * 6 + 4) = 0;
                                    }
                                }
                                else {
                                    *(*(arg1_00 + 0x68) + iVar21 * 0x18 + 0x15) = 1;
                                    *(*(arg1_00 + 0x68) + iVar21 * 0x18 + 0x14) = uVar3;
                                }
                            }
                            iVar21 = iVar10;
                            iVar10 = iVar10 + -1;
                            *(piVar19 + iVar21 * 2 + 8) = 0xffff;
                        } while (iVar10 != -1);
                    }
                    mutex_unlock(iVar11);
                    return uVar20;
                }
                uVar17 = 0;
                uVar20 = 0xffffffe4;
                do {
                    if (*(iVar15 + uVar17 * 6 + 4) == '\0') {
                        uVar7 = uVar17;
                        if (-1 < uVar20) {
                            uVar7 = uVar20;
                        }
                        uVar20 = uVar7;
                    }
                    else {
                        iVar9 = iVar15 + uVar17 * 6;
                        uVar4 = *(iVar15 + uVar17 * 6);
                        if ((uVar1 >> 0x10 & (uVar4 ^ 0xffffffff)) == 0) {
                            uVar7 = *(iVar9 + 2) ^ uVar1 & 0xffff;
                            if ((uVar7 & (uVar4 ^ 0xffffffff)) == 0) {
                                uVar20 = uVar17;
                                break;
                            }
                        }
                        else {
                            uVar7 = *(iVar9 + 2) ^ uVar1 & 0xffff;
                        }
                        if ((uVar7 & ((uVar4 | uVar1 >> 0x10) ^ 0xffffffff)) == 0) {
                            uVar20 = 0xffffffea;
                            goto code_r0x0801268c;
                        }
                    }
                    uVar17 = uVar17 + 1;
                } while (*(arg1_00 + 0x54) != uVar17);
                if (uVar20 < 0) goto code_r0x0801268c;
            }
            if (iVar22 != 0) {
                if (*(*(arg1_00 + 0x68) + uVar20 * 0x18 + 8) == 0) {
                    puVar16 = iVar22 + uVar20 * 6;
                    puVar16[1] = uVar1;
                    *puVar16 = uVar1 >> 0x10;
                    *(puVar16 + 2) = iVar8 == 0;
                }
                else if (*(iVar22 + uVar20 * 6 + 4) != (iVar8 == 0)) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x80127b4);
                    (*pcVar6)();
                }
            }
            iVar10 = iVar10 + 1;
            iVar15 = *(arg1_00 + 0x68) + uVar20 * 0x18;
            *(iVar15 + 8) = *(iVar15 + 8) + 1;
            uVar14 = uVar14 + 1;
            *(piVar19 + iVar12 * 2 + 8) = uVar20;
        } while (uVar14 < *(iVar21 + 0x14));
    }
    mutex_unlock(iVar11);
    if (*(iVar21 + 0x14) != 0) {
        uVar14 = 0;
        do {
            sym.arm_smmu_write_sme(arg1_00,*(piVar19 + uVar14 * 2 + 8));
            uVar14 = uVar14 + 1;
        } while (uVar14 < *(iVar21 + 0x14));
    }
    return 0;
}


// ===== sym.__bus_lookup_iommu_group @ 0x080127b8 (size 124) =====

ulong sym.__bus_lookup_iommu_group(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = iommu_group_get();
    uVar3 = 0;
    if (iVar1 != 0) {
        iVar2 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,iommu-group",0);
        if (iVar2 == *arg2) {
            uVar3 = 1;
            *(arg2 + 8) = iVar1;
        }
        else {
            iommu_group_put(iVar1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.arm_smmu_pm_prepare @ 0x08012834 (size 116) =====

uint64_t sym.arm_smmu_pm_prepare(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = of_device_is_compatible(*(arg1 + 0x2f0),"qcom,adreno-smmu");
    if (uVar1 != 0) {
        if ((*(arg1 + 0x20c) == 2) && ((*(arg1 + 0x200) & 7) == 0)) {
            uVar1 = 0;
        }
        else {
            uVar2 = 0xffffff8d;
            if (*(arg1 + 0x1f8) != 1) {
                uVar2 = 0;
            }
            uVar1 = uVar2;
        }
    }
    return uVar1;
}


// ===== sym.arm_smmu_pm_suspend @ 0x080128ac (size 216) =====

ulong sym.arm_smmu_pm_suspend(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    if (((pm_suspend_global_flags & 1) != 0) && (uVar1 = *(iVar4 + 0x30), uVar1 != 0)) {
        uVar2 = 0;
        do {
            if ((((*(iVar4 + 0x48) + uVar2 * 0x30 != 0) &&
                 (iVar3 = *(*(iVar4 + 0x48) + uVar2 * 0x30 + 0x28), iVar3 != 0)) && (iVar3 != 0x30)) &&
               (*(iVar3 + 0x5c) != -1)) {
                qcom_free_io_pgtable_ops(*(iVar3 + -0x20));
                uVar1 = *(iVar4 + 0x30);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
    }
    if ((*(arg1 + 0x20c) != 2) || ((*(arg1 + 0x200) & 7) != 0)) {
        sym.arm_smmu_power_off(*(arg1 + 0x98),*(*(arg1 + 0x98) + 0x118));
    }
    clk_bulk_unprepare(*(iVar4 + 0xd8),*(iVar4 + 0xd0));
    return 0;
}


// ===== sym.arm_smmu_pm_resume @ 0x08012984 (size 184) =====

int sym.arm_smmu_pm_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((pm_suspend_global_flags & 1) == 0) {
        arg1_00 = *(arg1 + 0x98);
        iVar1 = clk_bulk_prepare(*(arg1_00 + 0xd8),*(arg1_00 + 0xd0));
        if (iVar1 == 0) {
            if ((*(arg1 + 0x20c) == 2) && ((*(arg1 + 0x200) & 7) == 0)) {
                iVar1 = 0;
            }
            else {
                iVar1 = sym.arm_smmu_power_on(*(*(arg1 + 0x98) + 0x118));
                if (iVar1 == 0) {
                    sym.arm_smmu_device_reset(arg1_00);
                }
                else {
                    clk_bulk_unprepare(*(arg1_00 + 0xd8),*(arg1_00 + 0xd0));
                }
            }
        }
    }
    else {
        iVar1 = sym.arm_smmu_pm_restore_early(arg1);
    }
    return iVar1;
}


// ===== sym.arm_smmu_pm_freeze_late @ 0x08012a3c (size 152) =====

ulong sym.arm_smmu_pm_freeze_late(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    uVar1 = *(iVar4 + 0x30);
    if (uVar1 != 0) {
        uVar2 = 0;
        do {
            if ((((*(iVar4 + 0x48) + uVar2 * 0x30 != 0) &&
                 (iVar3 = *(*(iVar4 + 0x48) + uVar2 * 0x30 + 0x28), iVar3 != 0)) && (iVar3 != 0x30)) &&
               (*(iVar3 + 0x5c) != -1)) {
                qcom_free_io_pgtable_ops(*(iVar3 + -0x20));
                uVar1 = *(iVar4 + 0x30);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
    }
    return 0;
}


// ===== sym.arm_smmu_pm_restore_early @ 0x08012ad4 (size 316) =====

ulong sym.arm_smmu_pm_restore_early(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *arg1_00;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    uVar3 = *(arg1_00 + 6);
    if (uVar3 != 0) {
        uVar5 = 0;
        do {
            iVar4 = *(arg1_00[9] + uVar5 * 0x30 + 0x28);
            if ((iVar4 != 0) && (*(iVar4 + 0x5c) != -1)) {
                iVar2 = qcom_alloc_io_pgtable_ops(*(iVar4 + 0x148),iVar4 + 200,iVar4 + -0x30);
                if (iVar2 == 0) {
                    iVar4 = *(arg1 + 0x70);
                    if (iVar4 == 0) {
                        iVar4 = *arg1;
                    }
                    _dev_err(*arg1_00,"failed to allocate page tables\tduring pm restore for cxt %d %s\n",uVar5,iVar4
                            );
                    return 0xfffffff4;
                }
                *(iVar4 + -0x20) = iVar2;
                sym.arm_smmu_init_context_bank(iVar4 + -0x30,iVar4 + 200);
                uVar3 = *(arg1_00 + 6);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
        arg1_00 = *(arg1 + 0x98);
    }
    iVar1 = clk_bulk_prepare(*(arg1_00 + 0x1b),arg1_00[0x1a]);
    if ((iVar1 == 0) && ((*(arg1 + 0x20c) != 2 || ((*(arg1 + 0x200) & 7) != 0)))) {
        iVar1 = sym.arm_smmu_power_on(*(*(arg1 + 0x98) + 0x118));
        if (iVar1 == 0) {
            sym.arm_smmu_device_reset(arg1_00);
        }
        else {
            clk_bulk_unprepare(*(arg1_00 + 0x1b),arg1_00[0x1a]);
        }
    }
    sym.arm_smmu_power_off(*(arg1 + 0x98),*(*(arg1 + 0x98) + 0x118));
    return 0;
}


// ===== sym.arm_smmu_runtime_suspend @ 0x08012c10 (size 48) =====

ulong sym.arm_smmu_runtime_suspend(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_power_off(*(arg1 + 0x98),*(*(arg1 + 0x98) + 0x118));
    return 0;
}


// ===== sym.arm_smmu_runtime_resume @ 0x08012c40 (size 44) =====

void sym.arm_smmu_runtime_resume(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.arm_smmu_power_on(*(*(arg1 + 0x98) + 0x118));
    return;
}


// ===== sym.__cfi_check_fail @ 0x08012c6c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08012cb0

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
    //switch table (4 cases) at 0x8003c79
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8012cc4);
    (*pcVar1)();
}


// ===== sym.arm_mmu500_reset @ 0x08012cc4 (size 736) =====

ulong sym.arm_mmu500_reset(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x28) == NULL) || (pcVar5 = **(arg1 + 0x28), pcVar5 == NULL)) {
        uVar4 = sym.readl_relaxed_1(*(arg1 + 8) + 0x3c);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e50);
        }
        uVar4 = (*pcVar5)(arg1,0,0x3c);
    }
    if ((*(arg1 + 0x28) == NULL) || (pcVar5 = **(arg1 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_1(*(arg1 + 8) + 0x10);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e50);
        }
        uVar2 = (*pcVar5)(arg1,0,0x10);
    }
    if ((uVar4 & 0xe0) != 0) {
        uVar2 = uVar2 & 0xfbfffaff;
    }
    if ((*(arg1 + 0x28) == 0) || (pcVar5 = *(*(arg1 + 0x28) + 8), pcVar5 == NULL)) {
        sym.writel_relaxed_1(uVar2 | 0x500,*(arg1 + 8) + 0x10);
        iVar1 = *(arg1 + 0x30);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar5,0x8001e70);
        }
        (*pcVar5)(arg1,0,0x10,uVar2 | 0x500);
        iVar1 = *(arg1 + 0x30);
    }
    if (iVar1 != 0) {
        uVar2 = 0;
        do {
            iVar1 = uVar2 + *(arg1 + 0x10);
            if ((*(arg1 + 0x28) == NULL) || (pcVar5 = **(arg1 + 0x28), pcVar5 == NULL)) {
                uVar3 = sym.readl_relaxed_1(*(arg1 + 8) + (iVar1 << (*(arg1 + 0x14) & 0x1f)) + 4);
            }
            else {
                if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e50);
                }
                uVar3 = (*pcVar5)(arg1,iVar1,4);
            }
            uVar4 = uVar3 & 0xfffffffd;
            iVar1 = uVar2 + *(arg1 + 0x10);
            if ((*(arg1 + 0x28) == 0) || (pcVar5 = *(*(arg1 + 0x28) + 8), pcVar5 == NULL)) {
                sym.writel_relaxed_1(uVar4,*(arg1 + 8) + (iVar1 << (*(arg1 + 0x14) & 0x1f)) + 4);
            }
            else {
                if (pcVar5 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar5,0x8001e70);
                    uVar4 = uVar3 & 0xfffffffd;
                }
                (*pcVar5)(arg1,iVar1,4,uVar4);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg1 + 0x30));
    }
    return 0;
}


// ===== sym.arm_smmu_impl_init @ 0x08012fa4 (size 304) =====

int64_t sym.arm_smmu_impl_init(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x24) == 2) {
        iVar2 = devm_krealloc(*arg1,arg1,0x138,0xcc0);
        if (iVar2 == 0) {
            return -0xc;
        }
        pcVar3 = obj.cavium_impl;
    }
    else {
        uVar4 = *(*arg1 + 0x2f0);
        if (*(arg1 + 0x24) == 1) {
            *(arg1 + 0x28) = obj.arm_mmu500_impl;
        }
        iVar2 = of_find_property(uVar4,"calxeda,smmu-secure-config-access",0);
        if (iVar2 != 0) {
            *(arg1 + 0x28) = reloc.arm_smmu_read_ns.c00fd10d52de7a5ff5332dfa3e30eece.cfi_jt;
        }
        iVar1 = of_device_is_compatible(uVar4,"nvidia,tegra194-smmu");
        if ((iVar1 != 0) || (iVar1 = of_device_is_compatible(uVar4,"nvidia,tegra186-smmu"), iVar1 != 0)) {
            iVar2 = sym.nvidia_smmu_impl_init(arg1);
            return iVar2;
        }
        iVar1 = of_device_is_compatible(*(*arg1 + 0x2f0),0x8003249);
        if (iVar1 != 0) {
            iVar2 = sym.qsmmuv500_impl_init(arg1);
            return iVar2;
        }
        iVar2 = sym.qcom_smmu_impl_init(arg1);
        iVar1 = of_device_is_compatible(uVar4,"marvell,ap806-smmu-500");
        if (iVar1 == 0) {
            return iVar2;
        }
        pcVar3 = obj.mrvl_mmu500_impl;
    }
    *(iVar2 + 0x28) = pcVar3;
    return iVar2;
}


// ===== sym.cavium_cfg_probe @ 0x080130d4 (size 136) =====

ulong sym.cavium_cfg_probe(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    Hint_Prefetch(0x80009e8,2,0,1);
    do {
        iVar3 = _reloc.__traceiter_tlbi_end.cfi_jt;
        cVar1 = '\x01';
        bVar2 = ExclusiveMonitorPass(0x80009e8,0x10);
        if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            _reloc.__traceiter_tlbi_end.cfi_jt = _reloc.__traceiter_tlbi_end.cfi_jt + *(arg1 + 0x30);
        }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    *(arg1 + 0x130) = iVar3;
    _dev_notice(*arg1,"\tenabling workaround for Cavium erratum 27704\n");
    return 0;
}


// ===== sym.cavium_init_context @ 0x0801315c (size 40) =====

ulong sym.cavium_init_context(int64_t arg1)

{
    *(arg1 + 0x32) = *(arg1 + 0x32) + *(*arg1 + 0x130);
    return 0;
}


// ===== sym.arm_smmu_read_ns @ 0x08013184 (size 116) =====

void sym.arm_smmu_read_ns(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    iVar1 = arg3;
    if ((arg2 == 0) &&
       ((((iVar1 - 0x48U < 0x11 && ((1 << (iVar1 - 0x48U & 0x1f) & 0x11101U) != 0)) || (iVar1 == 0x10)) || (iVar1 == 0))
       )) {
        iVar1 = iVar1 + 0x400;
    }
    *in_x18 = unaff_x30;
    sym.readl_relaxed_1(*(arg1 + 8) + (arg2 << (*(arg1 + 0x14) & 0x1f)) + iVar1);
    return;
}


// ===== sym.arm_smmu_write_ns @ 0x080131f8 (size 120) =====

void sym.arm_smmu_write_ns(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    iVar1 = arg3;
    if ((arg2 == 0) &&
       ((((iVar1 - 0x48U < 0x11 && ((1 << (iVar1 - 0x48U & 0x1f) & 0x11101U) != 0)) || (iVar1 == 0x10)) || (iVar1 == 0))
       )) {
        iVar1 = iVar1 + 0x400;
    }
    *in_x18 = unaff_x30;
    sym.writel_relaxed_1(arg4 & 0xffffffff,*(arg1 + 8) + (arg2 << (*(arg1 + 0x14) & 0x1f)) + iVar1);
    return;
}


// ===== sym.mrvl_mmu500_readq @ 0x08013270 (size 88) =====

uint64_t sym.mrvl_mmu500_readq(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 8) + (arg2 << (*(arg1 + 0x14) & 0x1f)) + arg3;
    iVar1 = sym.readl_relaxed_1(arg1_00 + 4);
    uVar2 = sym.readl_relaxed_1(arg1_00);
    return uVar2 & 0xffffffff | iVar1 << 0x20;
}


// ===== sym.mrvl_mmu500_writeq @ 0x080132c8 (size 92) =====

void sym.mrvl_mmu500_writeq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = *(arg1 + 8) + (arg2 << (*(arg1 + 0x14) & 0x1f)) + arg3;
    sym.writel_relaxed_1(arg4 >> 0x20,arg2_00 + 4);
    sym.writel_relaxed_1(arg4 & 0xffffffff,arg2_00);
    return;
}


// ===== sym.mrvl_mmu500_cfg_probe @ 0x08013324 (size 32) =====

ulong sym.mrvl_mmu500_cfg_probe(int64_t arg1)

{
    *(arg1 + 0x18) = *(arg1 + 0x18) & 0xfffffc7f;
    return 0;
}


// ===== sym.nvidia_smmu_impl_init @ 0x08013344 (size 76) =====

ulong sym.nvidia_smmu_impl_init(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = devm_krealloc(*arg1,arg1,0x150,0xcc0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffffffffffff4;
    }
    else {
        uVar2 = 0xffffffffffffffed;
        *(iVar1 + 0x148) = 0xffffffffffffffed;
    }
    return uVar2;
}


// ===== sym.arm_tbu_micro_idle_wake @ 0x08013390 (size 84) =====

ulong sym.arm_tbu_micro_idle_wake(int64_t arg1)

{
    ulong uVar1;
    uint64_t arg2;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*arg1 + 0x98);
    if (*(iVar2 + 0x58) == '\0') {
        uVar1 = 0;
    }
    else {
        arg2 = 1 << (*(iVar2 + 0x38) >> 10 & 0x1f);
        uVar1 = sym.__arm_tbu_micro_idle_cfg(*(iVar2 + 0x18),arg2,arg2);
    }
    return uVar1;
}


// ===== sym.__arm_tbu_micro_idle_cfg @ 0x080133e4 (size 520) =====

ulong sym.__arm_tbu_micro_idle_cfg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg3;
    uVar2 = arg2;
    uVar5 = _raw_spin_lock_irqsave(arg1 + 0xdc);
    if ((*(arg1 + 0x28) == NULL) || (pcVar9 = **(arg1 + 0x28), pcVar9 == NULL)) {
        uVar3 = sym.readl_relaxed_2(*(arg1 + 8) + (7 << (*(arg1 + 0x14) & 0x1f)) + 0x5f8);
    }
    else {
        if (pcVar9 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar9,0x8001e90);
        }
        uVar3 = (*pcVar9)(arg1,7,0x5f8);
    }
    uVar3 = uVar3 & (uVar1 ^ 0xffffffff) | uVar2;
    if ((*(arg1 + 0x28) == 0) || (pcVar9 = *(*(arg1 + 0x28) + 8), pcVar9 == NULL)) {
        sym.writel_relaxed_2(uVar3,*(arg1 + 8) + (7 << (*(arg1 + 0x14) & 0x1f)) + 0x5f8);
    }
    else {
        if (pcVar9 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar9,0x8001eb0);
        }
        (*pcVar9)(arg1,7,0x5f8,uVar3);
    }
    iVar8 = *(arg1 + 8) + (7 << (*(arg1 + 0x14) & 0x1f)) + 0x5fc;
    iVar6 = ktime_get();
    do {
        uVar4 = sym.readl_1(iVar8);
        if ((uVar4 & uVar1) == uVar2) goto code_r0x08013520;
        iVar7 = ktime_get();
    } while (iVar7 <= iVar6 + 200000);
    uVar4 = sym.readl_1(iVar8);
    if ((uVar4 & uVar1) != uVar2) {
        uVar5 = dev_driver_string(*arg1);
        iVar8 = (*arg1)[0xe];
        if (iVar8 == 0) {
            iVar8 = **arg1;
        }
        __warn_printk("%s %s: Timed out configuring micro idle! %x instead of %x\n",uVar5,iVar8,uVar4,uVar3);
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x800,0x8013520);
        (*pcVar9)();
    }
code_r0x08013520:
    __const_udelay(0x53e3);
    _raw_spin_unlock_irqrestore(arg1 + 0xdc,uVar5);
    return 0;
}


// ===== sym.arm_tbu_micro_idle_allow @ 0x080135ec (size 76) =====

void sym.arm_tbu_micro_idle_allow(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*arg1 + 0x98);
    if (*(iVar1 + 0x58) != '\0') {
        sym.__arm_tbu_micro_idle_cfg(*(iVar1 + 0x18),0,1 << (*(iVar1 + 0x38) >> 10 & 0x1f));
    }
    return;
}


// ===== sym.qsmmuv500_tbu_probe @ 0x08013638 (size 620) =====

uint64_t sym.qsmmuv500_tbu_probe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_3c = 0;
    iVar3 = devm_kmalloc(iVar7,0x58,0xdc0);
    if (iVar3 == 0) {
code_r0x080137cc:
        uVar4 = 0xfffffff4;
    }
    else {
        *(iVar3 + 0x10) = iVar7;
        uVar4 = sym.arm_smmu_init_power_resources(iVar7);
        *(iVar3 + 0x30) = uVar4;
        if (0xfffffffffffff000 < uVar4) goto code_r0x08013870;
        iVar2 = of_device_is_compatible(*(arg1 + 0x300),"qcom,qtb500");
        if (iVar2 == 0) {
            uVar5 = devm_krealloc(iVar7,iVar3,0x60,0xcc0);
            if (uVar5 != 0) {
                *(uVar5 + 0x28) = reloc.arm_tbu_halt_req.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
                iVar3 = of_find_property(*(arg1 + 0x300),"qcom,micro-idle",0);
                *(uVar5 + 0x58) = iVar3 != 0;
                if (iVar3 != 0) {
                    *(*(uVar5 + 0x30) + 0x68) = sym.__typeid__ZTSFiP24arm_smmu_power_resourcesE_global_addr;
                    *(*(uVar5 + 0x30) + 0x70) = sym.__typeid__ZTSFvP24arm_smmu_power_resourcesE_global_addr;
                }
                goto joined_r0x08013844;
            }
        }
        else {
            uVar5 = devm_krealloc(iVar7,iVar3,0x68,0xcc0);
            if (uVar5 != 0) {
                *(uVar5 + 0x28) = reloc.qtb500_tbu_halt_req.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
                iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,num-qtb-ports",uVar5 + 0x5c,1,0);
                if (iVar2 < 0) {
                    uVar5 = iVar2;
                }
                else {
                    iVar3 = of_find_property(*(arg1 + 0x300),"qcom,no-qtb-atos-halt",0);
                    *(uVar5 + 0x58) = iVar3 != 0;
                }
joined_r0x08013844:
                if (0xfffffffffffff000 < uVar5) {
                    uVar4 = uVar5 & 0xffffffff;
                    goto code_r0x08013870;
                }
                *uVar5 = uVar5;
                *(uVar5 + 8) = uVar5;
                *(uVar5 + 0x44) = 0;
                piVar6 = platform_get_resource(arg1,0x200,0);
                if (piVar6 == NULL) {
                    uVar4 = 0xffffffea;
                    goto code_r0x08013870;
                }
                iVar7 = devm_ioremap(iVar7,*piVar6,(piVar6[1] - *piVar6) + 1);
                *(uVar5 + 0x20) = iVar7;
                if (iVar7 != 0) {
                    puVar8 = of_get_property(*(arg1 + 0x300),"qcom,stream-id-range",&iStack_3c);
                    uVar4 = 0xffffffea;
                    if ((puVar8 != NULL) && (7 < iStack_3c)) {
                        uVar1 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
                        *(uVar5 + 0x38) = uVar1 >> 0x10 | uVar1 << 0x10;
                        uVar1 = (puVar8[1] & 0xff00ff00) >> 8 | (puVar8[1] & 0xff00ff) << 8;
                        *(uVar5 + 0x3c) = uVar1 >> 0x10 | uVar1 << 0x10;
                        uVar4 = of_property_read_variable_u32_array
                                          (*(arg1 + 0x300),"qcom,iova-width",uVar5 + 0x40,1,0);
                        if (-1 < uVar4) {
                            uVar4 = 0;
                            *(arg1 + 0xa8) = uVar5;
                        }
                    }
                    goto code_r0x08013870;
                }
                goto code_r0x080137cc;
            }
        }
        uVar4 = 0xfffffff4;
    }
code_r0x08013870:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar9 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.qsmmuv500_create;
    iVar7 = *auVar9._0_8_;
    uVar4 = devm_krealloc(iVar7,auVar9._0_8_,400,0xdc0);
    if (uVar4 == 0) {
        uVar4 = 0xfffffffffffffff4;
    }
    else {
        *(uVar4 + 0x130) = uVar4 + 0x130;
        *(uVar4 + 0x138) = uVar4 + 0x130;
        *(uVar4 + 0x180) = 0;
        *(uVar4 + 0x150) = 0xfffffffe0;
        *(uVar4 + 0x158) = uVar4 + 0x158;
        *(uVar4 + 0x160) = uVar4 + 0x158;
        *(uVar4 + 0x168) = sym.qsmmuv500_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        *(uVar4 + 0x28) = auVar9._8_8_;
        iVar2 = sym.qsmmuv500_read_actlr_tbl(uVar4);
        if ((iVar2 == 0) && (iVar2 = of_platform_populate(*(iVar7 + 0x2f0),0,0,iVar7), iVar2 == 0)) {
            iVar2 = device_for_each_child
                              (iVar7,uVar4,sym.qsmmuv500_tbu_register.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt);
            if (iVar2 != 0) {
                uVar4 = 0xfffffffffffffdfb;
            }
        }
        else {
            uVar4 = iVar2;
        }
    }
    return uVar4;
}


// ===== sym.qsmmuv500_create @ 0x080138a4 (size 216) =====

int64_t sym.qsmmuv500_create(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg1_00;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *arg1;
    arg1_00 = devm_krealloc(iVar2,arg1,400,0xdc0);
    if (arg1_00 == 0) {
        arg1_00 = -0xc;
    }
    else {
        *(arg1_00 + 0x130) = arg1_00 + 0x130;
        *(arg1_00 + 0x138) = arg1_00 + 0x130;
        *(arg1_00 + 0x180) = 0;
        *(arg1_00 + 0x150) = 0xfffffffe0;
        *(arg1_00 + 0x158) = arg1_00 + 0x158;
        *(arg1_00 + 0x160) = arg1_00 + 0x158;
        *(arg1_00 + 0x168) = sym.qsmmuv500_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        *(arg1_00 + 0x28) = arg2;
        iVar1 = sym.qsmmuv500_read_actlr_tbl(arg1_00);
        if ((iVar1 == 0) && (iVar1 = of_platform_populate(*(iVar2 + 0x2f0),0,0,iVar2), iVar1 == 0)) {
            iVar1 = device_for_each_child
                              (iVar2,arg1_00,sym.qsmmuv500_tbu_register.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt);
            if (iVar1 != 0) {
                arg1_00 = -0x205;
            }
        }
        else {
            arg1_00 = iVar1;
        }
    }
    return arg1_00;
}


// ===== sym.qsmmuv500_log_outstanding_transactions @ 0x0801397c (size 436) =====

void sym.qsmmuv500_log_outstanding_transactions(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong *arg1_00;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + -0x150;
    iVar1 = mutex_trylock(obj.capture_reg_lock);
    if (iVar1 == 0) {
        iVar1 = ___ratelimit(obj.qsmmuv500_log_outstanding_transactions._rs,"qsmmuv500_log_outstanding_transactions");
        if (iVar1 != 0) {
            _dev_warn(*arg1_00,"Tnx snapshot regs in use, not dumping OT tnxs.\n");
        }
    }
    else {
        iVar1 = sym.arm_smmu_power_on(*(arg1 + -0x38));
        if (iVar1 == 0) {
            for (piVar3 = *(arg1 + -0x20); piVar3 != arg1 + -0x20; piVar3 = *piVar3) {
                iVar1 = sym.arm_smmu_power_on(piVar3[6]);
                if (iVar1 == 0) {
                    pcVar2 = *(piVar3[5] + 0x28);
                    if (5 < (pcVar2 + -0x80081f0 >> 3 | pcVar2 << 0x3d)) {
                        __cfi_slowpath_diag(0x6175088cc6504702,pcVar2,0x8001ed0);
                    }
                    (*pcVar2)(piVar3);
                    sym.arm_smmu_power_off(arg1_00,piVar3[6]);
                }
                else {
                    iVar1 = ___ratelimit(obj.qsmmuv500_log_outstanding_transactions._rs.22,
                                         "qsmmuv500_log_outstanding_transactions");
                    if (iVar1 != 0) {
                        _dev_err(piVar3[2],"%s: Failed to power on TBU.\n","qsmmuv500_log_outstanding_transactions");
                    }
                }
            }
            sym.arm_smmu_power_off(arg1_00,*(arg1 + -0x38));
        }
        else {
            iVar1 = ___ratelimit(obj.qsmmuv500_log_outstanding_transactions._rs.20,
                                 "qsmmuv500_log_outstanding_transactions");
            if (iVar1 != 0) {
                _dev_err(*arg1_00,"%s: Failed to power on SMMU.\n","qsmmuv500_log_outstanding_transactions");
            }
        }
        mutex_unlock(obj.capture_reg_lock);
    }
    return;
}


// ===== sym.qsmmuv500_read_actlr_tbl @ 0x08013b30 (size 240) =====

uint sym.qsmmuv500_read_actlr_tbl(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint16_t *puVar5;
    uint uVar6;
    uint16_t *puVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *arg1;
    puVar4 = of_get_property(*(iVar8 + 0x2f0),"qcom,actlr",0);
    if ((puVar4 == NULL) || (uVar3 = of_property_count_elems_of_size(*(iVar8 + 0x2f0),"qcom,actlr",0xc), uVar3 < 0))
    {
        uVar6 = 0;
    }
    else {
        uVar9 = uVar3;
        puVar5 = devm_kmalloc(iVar8,(uVar9 + uVar3 * 2) * 4,0xdc0);
        if (puVar5 == NULL) {
            uVar6 = 0xfffffff4;
        }
        else {
            puVar7 = puVar5;
            if (uVar3 != 0) {
                do {
                    uVar9 = uVar9 - 1;
                    puVar7[1] = *puVar4 >> 0x18 | *puVar4 >> 8 & 0xff00;
                    *puVar7 = puVar4[1] >> 0x18 | puVar4[1] >> 8 & 0xff00;
                    puVar1 = puVar4 + 2;
                    puVar4 = puVar4 + 3;
                    uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
                    *(puVar7 + 4) = uVar2 >> 0x10 | uVar2 << 0x10;
                    puVar7 = puVar7 + 6;
                } while (uVar9 != 0);
            }
            uVar6 = 0;
            *(arg1 + 0x140) = puVar5;
            *(arg1 + 0x148) = uVar3;
        }
    }
    return uVar6;
}


// ===== sym.qsmmuv500_tbu_register @ 0x08013c20 (size 404) =====

int sym.qsmmuv500_tbu_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x88) == 0) {
        _dev_err(arg1,"TBU failed probe, QSMMUV500 cannot continue!\n");
        iVar3 = -0x16;
    }
    else {
        piVar5 = *(arg1 + 0x98);
        piVar2 = arg2 + 0x130;
        *piVar5 = piVar5;
        piVar5[1] = piVar5;
        piVar5[3] = arg2;
        iVar6 = *(arg2 + 0x130);
        uVar4 = __list_add_valid(piVar5,piVar2,iVar6);
        if ((uVar4 & 1) != 0) {
            *(iVar6 + 8) = piVar5;
            *piVar5 = iVar6;
            piVar5[1] = piVar2;
            *piVar2 = piVar5;
        }
        uVar4 = 0xffffffff;
        do {
            uVar1 = uVar4 + 1;
            uVar4 = uVar1;
            iVar6 = platform_get_resource(arg1 + -0x10,0x400,uVar4);
        } while (iVar6 != 0);
        iVar6 = devm_kmalloc(arg1,-(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2,0xdc0);
        piVar5[10] = iVar6;
        if (iVar6 == 0) {
            iVar3 = -0xc;
        }
        else {
            if (0 < uVar1) {
                uVar7 = 0;
                do {
                    iVar3 = platform_get_irq(arg1 + -0x10,uVar7 & 0xffffffff);
                    if (iVar3 < 0) {
                        _dev_err(arg1,"failed to get irq index %d\n",uVar7 & 0xffffffff);
                        return -0x13;
                    }
                    *(piVar5[10] + uVar7 * 4) = iVar3;
                    iVar3 = devm_request_threaded_irq
                                      (piVar5[2],*(piVar5[10] + uVar7 * 4),0,
                                       sym.arm_smmu_debug_capture_bus_match.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt,
                                       0x2080,"capture bus",piVar5);
                    if (iVar3 != 0) {
                        _dev_err(arg1,"failed to request capture bus irq%d (%u)\n",uVar7 & 0xffffffff,
                                 *(piVar5[10] + uVar7 * 4));
                        return iVar3;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar4 != uVar7);
            }
            iVar3 = 0;
        }
    }
    return iVar3;
}


// ===== sym.qsmmuv500_impl_init @ 0x08013db4 (size 240) =====

int64_t sym.qsmmuv500_impl_init(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    code *arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_device_is_compatible(*(*arg1 + 0x2f0),"qcom,adreno-smmu");
    if (iVar1 == 0) {
        iVar1 = of_device_is_compatible(*(*arg1 + 0x2f0),"qcom,virt-smmu");
        if (iVar1 != 0) {
            iVar2 = devm_krealloc(*arg1,arg1,400,0xdc0);
            if (iVar2 == 0) {
                return -0xc;
            }
            *(iVar2 + 0x130) = iVar2 + 0x130;
            *(iVar2 + 0x138) = iVar2 + 0x130;
            *(iVar2 + 0x180) = 0;
            *(iVar2 + 0x150) = 0xfffffffe0;
            *(iVar2 + 0x158) = iVar2 + 0x158;
            *(iVar2 + 0x160) = iVar2 + 0x158;
            *(iVar2 + 0x168) = sym.qsmmuv500_log_outstanding_transactions.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
            *(iVar2 + 0x28) = obj.qsmmuv500_virt_impl;
            iVar1 = sym.qsmmuv500_read_actlr_tbl(iVar2);
            if (iVar1 == 0) {
                return iVar2;
            }
            return iVar1;
        }
        arg2 = obj.qsmmuv500_impl;
    }
    else {
        arg2 = obj.qsmmuv500_adreno_impl;
    }
    iVar2 = sym.qsmmuv500_create(arg1,arg2);
    return iVar2;
}


// ===== sym.qcom_smmu_impl_init @ 0x08013ea4 (size 208) =====

int64_t sym.qcom_smmu_impl_init(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(*arg1 + 0x2f0);
    iVar1 = of_device_is_compatible(uVar5,"qcom,adreno-smmu");
    if (iVar1 == 0) {
        iVar3 = of_match_node(obj.qcom_smmu_impl_of_match,uVar5);
        if (iVar3 == 0) {
            return arg1;
        }
        uVar2 = qcom_scm_is_available();
        if ((uVar2 & 1) == 0) {
            return -0x205;
        }
        iVar3 = devm_krealloc(*arg1,arg1,0x138,0xcc0);
        if (iVar3 == 0) {
            return -0xc;
        }
        pcVar4 = obj.qcom_smmu_impl;
    }
    else {
        uVar2 = qcom_scm_is_available();
        if ((uVar2 & 1) == 0) {
            return -0x205;
        }
        iVar3 = devm_krealloc(*arg1,arg1,0x138,0xcc0);
        if (iVar3 == 0) {
            return -0xc;
        }
        pcVar4 = obj.qcom_adreno_smmu_impl;
    }
    *(iVar3 + 0x28) = pcVar4;
    return iVar3;
}


// ===== sym.qtb500_tbu_halt_req @ 0x08013f74 (size 80) =====

ulong sym.qtb500_tbu_halt_req(int64_t arg1)

{
    int64_t arg1_00;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x58) == '\0') {
        arg1_00 = *(arg1 + 0x20) + 0x410;
        uVar1 = sym.readq_relaxed_1(arg1_00);
        sym.writeq_relaxed_1(uVar1 | 1,arg1_00);
    }
    return 0;
}


// ===== sym.qtb500_tbu_halt_poll @ 0x08013fc4 (size 168) =====

ulong sym.qtb500_tbu_halt_poll(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x58) == '\0') {
        iVar4 = *(arg1 + 0x20);
        iVar1 = ktime_get();
        arg1_00 = iVar4 + 0x418;
        do {
            uVar2 = sym.readq(arg1_00);
            if ((uVar2 & 1) != 0) goto code_r0x0801401c;
            iVar3 = ktime_get();
        } while (iVar3 <= iVar1 + 100000);
        uVar2 = sym.readq(arg1_00);
code_r0x0801401c:
        if ((uVar2 & 1) == 0) {
            _dev_err(*(arg1 + 0x10),"Couldn\'t halt QTB\n");
            iVar4 = iVar4 + 0x410;
            uVar2 = sym.readq_relaxed_1(iVar4);
            sym.writeq_relaxed_1(uVar2 & 0xfffffffffffffffe,iVar4);
            return 0xffffff92;
        }
    }
    return 0;
}


// ===== sym.qtb500_tbu_resume @ 0x0801406c (size 76) =====

void sym.qtb500_tbu_resume(int64_t arg1)

{
    int64_t arg1_00;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x58) == '\0') {
        arg1_00 = *(arg1 + 0x20) + 0x410;
        uVar1 = sym.readq_relaxed_1(arg1_00);
        sym.writeq_relaxed_1(uVar1 & 0xfffffffffffffffe,arg1_00);
    }
    return;
}


// ===== sym.qtb500_trigger_atos @ 0x080140b8 (size 368) =====

uint64_t sym.qtb500_trigger_atos(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg4;
    iVar5 = *(arg1 + 0x20);
    sym.writeq_relaxed_1(iVar1 << 0x11 & 0x100000 | arg3 & 0x3ff,iVar5 + 0x430);
    sym.writeq_relaxed_1((iVar1 << 0xc & 0x2000 | arg4 & 9U | iVar1 << 10 & 0x1000) ^ 0x408,iVar5 + 0x438);
    sym.writeq_relaxed_1(arg2,iVar5 + 0x440);
    sym.writeq_relaxed_1(1,iVar5 + 0x448);
    iVar2 = ktime_get();
    arg1_00 = iVar5 + 0x458;
    while ((uVar3 = sym.readq_relaxed_1(iVar5 + 0x450), (uVar3 & 1) == 0 &&
           (uVar3 = sym.readq_relaxed_1(arg1_00), (uVar3 & 1) == 0))) {
        iVar4 = ktime_get();
        if (iVar2 + 100000 < iVar4) {
            uVar3 = sym.readq_relaxed_1(arg1_00);
            if ((uVar3 & 1) == 0) {
                iVar1 = ___ratelimit(obj.qtb500_trigger_atos._rs,"qtb500_trigger_atos");
                if (iVar1 == 0) {
                    uVar3 = 0;
                }
                else {
                    _dev_err(*(arg1 + 0x10),"ECATS translation timed out!\n");
                    uVar3 = 0;
                }
            }
            else {
code_r0x080141f4:
                _dev_err(*(arg1 + 0x10),"ECATS generated a fault interrupt! OUTFLD0 = 0x%llx SID = 0x%x\n",uVar3,
                         arg3 & 0xffffffff);
                uVar3 = 0;
            }
code_r0x080141c8:
            sym.writeq_relaxed_1(0,iVar5 + 0x448);
            return uVar3;
        }
    }
    uVar3 = sym.readq_relaxed_1(arg1_00);
    if ((uVar3 & 1) != 0) goto code_r0x080141f4;
    uVar3 = uVar3 >> 0xc;
    goto code_r0x080141c8;
}


// ===== sym.qtb500_tbu_write_sync @ 0x08014228 (size 40) =====

void sym.qtb500_tbu_write_sync(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed_2(*(arg1 + 0x20));
    return;
}


// ===== sym.qtb500_log_outstanding_transactions @ 0x08014250 (size 136) =====

void sym.qtb500_log_outstanding_transactions(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x5c) != 0) {
        uVar2 = 0;
        iVar3 = *(arg1 + 0x20);
        iVar4 = 0xc10;
        do {
            uVar1 = sym.readq_relaxed_1(iVar3 + iVar4);
            _dev_err(*(arg1 + 0x10),"port %d outstanding transactions bitmap: 0x%llx\n",uVar2,uVar1);
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 0x10;
        } while (uVar2 < *(arg1 + 0x5c));
    }
    return;
}


// ===== sym.readq @ 0x080142d8 (size 120) =====

ulong sym.readq(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x80142dc);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x40,arg1,0x801431c);
    return uVar1;
}


// ===== sym.arm_tbu_halt_req @ 0x08014354 (size 68) =====

ulong sym.arm_tbu_halt_req(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x20);
    uVar1 = sym.readl_relaxed_2(arg1_00);
    sym.writel_relaxed_2(uVar1 | 0x10000,arg1_00);
    return 0;
}


// ===== sym.arm_tbu_halt_poll @ 0x08014398 (size 156) =====

ulong sym.arm_tbu_halt_poll(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x20);
    iVar2 = ktime_get();
    do {
        uVar1 = sym.readl_1(arg1_00 + 0x20);
        if ((uVar1 >> 1 & 1) != 0) goto code_r0x080143e8;
        iVar3 = ktime_get();
    } while (iVar3 <= iVar2 + 100000);
    uVar1 = sym.readl_1(arg1_00 + 0x20);
code_r0x080143e8:
    if ((uVar1 >> 1 & 1) == 0) {
        _dev_err(*(arg1 + 0x10),"Couldn\'t halt TBU!\n");
        uVar1 = sym.readl_relaxed_2(arg1_00);
        sym.writel_relaxed_2(uVar1 & 0xfffeffff,arg1_00);
        uVar4 = 0xffffff92;
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.arm_tbu_resume @ 0x08014434 (size 64) =====

void sym.arm_tbu_resume(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x20);
    uVar1 = sym.readl_relaxed_2(arg1_00);
    sym.writel_relaxed_2(uVar1 & 0xfffeffff,arg1_00);
    return;
}


// ===== sym.arm_tbu_trigger_atos @ 0x08014474 (size 420) =====

uint64_t sym.arm_tbu_trigger_atos(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_01 = *(arg1 + 0x20);
    uVar3 = sym.readq_relaxed_1(arg1_01);
    sym.writeq_relaxed_1(uVar3 & 0xfffffffffffffc00 | arg3 & 0x3ff,arg1_01);
    sym.writeq_relaxed_1(arg2,arg1_01 + 8);
    sym.writeq_relaxed_1(0xff000000000,arg1_01 + 0x30);
    uVar3 = 0xbc;
    if ((arg4 & 1U) != 0) {
        uVar3 = 0xbe;
    }
    sym.writeq_relaxed_1(arg4 << 6 & 0x100 | arg4 << 5 & 0x40 | uVar3 | 1,arg1_01 + 0x18);
    iVar4 = ktime_get();
    arg1_00 = arg1_01 + 0x28;
    while ((uVar3 = sym.readl_relaxed_2(arg1_01 + 0x20), (uVar3 & 1) != 0 &&
           (uVar3 = sym.readl_relaxed_2(arg1_00), (uVar3 & 1) == 0))) {
        iVar5 = ktime_get();
        if (iVar4 + 100000 < iVar5) {
            uVar3 = sym.readq_relaxed_1(arg1_00);
            if ((uVar3 & 1) == 0) {
                iVar1 = ___ratelimit(obj.arm_tbu_trigger_atos._rs,"arm_tbu_trigger_atos");
                if (iVar1 == 0) {
                    uVar3 = 0;
                }
                else {
                    _dev_err(*(arg1 + 0x10),"ECATS translation timed out!\n");
                    uVar3 = 0;
                }
            }
            else {
code_r0x080145e4:
                _dev_err(*(arg1 + 0x10),"ECATS generated a fault interrupt! PAR = %llx, SID=0x%x\n",uVar3,
                         arg3 & 0xffffffff);
                uVar3 = 0;
            }
code_r0x08014594:
            sym.writeq_relaxed_1(0,arg1_01 + 0x18);
            sym.writeq_relaxed_1(0,arg1_01 + 8);
            uVar2 = sym.readl_relaxed_2(arg1_01);
            sym.writel_relaxed_2(uVar2 & 0xfffffc00,arg1_01);
            return uVar3;
        }
    }
    uVar3 = sym.readq_relaxed_1(arg1_00);
    if ((uVar3 & 1) != 0) goto code_r0x080145e4;
    uVar3 = uVar3 >> 0xc & 0xfffffffff;
    goto code_r0x08014594;
}


// ===== sym.arm_tbu_write_sync @ 0x08014618 (size 44) =====

void sym.arm_tbu_write_sync(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed_2(*(arg1 + 0x20) + 0x20);
    return;
}


// ===== sym.arm_tbu_log_outstanding_transactions @ 0x08014644 (size 288) =====

void sym.arm_tbu_log_outstanding_transactions(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x20);
    iVar3 = iVar7 + 0x130;
    uVar2 = sym.readq_relaxed_1(iVar3);
    sym.writeq_relaxed_1(uVar2 | 0x80,iVar3);
    sym.writeq_relaxed_1(uVar2 & 0xfffffffffffb7f3f | 0x40000,iVar3);
    iVar3 = ktime_get();
    do {
        uVar4 = sym.readq(iVar7 + 0x178);
        if ((uVar4 & 1) != 0) goto code_r0x080146cc;
        iVar5 = ktime_get();
    } while (iVar5 <= iVar3 + 100000);
    uVar4 = sym.readq(iVar7 + 0x178);
code_r0x080146cc:
    if ((uVar4 & 1) == 0) {
        iVar1 = ___ratelimit(obj.arm_tbu_log_outstanding_transactions._rs,"arm_tbu_log_outstanding_transactions");
        if (iVar1 != 0) {
            _dev_err(*(arg1 + 0x10),"Timeout on TNX snapshot poll\n");
        }
    }
    else {
        uVar6 = sym.readq_relaxed_1(iVar7 + 0x138);
        iVar1 = ___ratelimit(obj.arm_tbu_log_outstanding_transactions._rs.17,"arm_tbu_log_outstanding_transactions");
        if (iVar1 != 0) {
            _dev_err(*(arg1 + 0x10),"Outstanding Transaction Bitmap: 0x%llx\n",uVar6);
        }
    }
    sym.writeq_relaxed_1(uVar2 & 0xfffffffffffb7f3f,*(arg1 + 0x20) + 0x130);
    return;
}


// ===== sym.arm_smmu_debug_capture_bus_match @ 0x08014764 (size 700) =====

uint sym.arm_smmu_debug_capture_bus_match(ulong noname_0,int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t arg1_00;
    code *pcVar5;
    ulong *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar7;
    ulong unaff_x30;
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
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    puVar6 = *(arg1 + 0x18);
    iVar4 = *(arg1 + 0x20);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
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
    iVar1 = sym.arm_smmu_power_on(puVar6[0x23]);
    if (iVar1 == 0) {
        iVar1 = sym.arm_smmu_power_on(*(arg1 + 0x30));
        if (iVar1 == 0) {
            iVar1 = mutex_trylock(obj.capture_reg_lock);
            if (iVar1 != 0) {
                uVar3 = sym.readq_relaxed.llvm.17919609518637048961(iVar4 + 0x130);
                sym.arm_smmu_debug_get_mask_and_match(iVar4,&uStack_60,&uStack_78);
                sym.arm_smmu_debug_get_capture_snapshot(iVar4,&uStack_b8);
                sym.writeq_relaxed.llvm.17919609518637048961(0x81,iVar4 + 0x130);
                mutex_unlock(obj.capture_reg_lock);
                sym.arm_smmu_power_off(*(arg1 + 0x18),*(arg1 + 0x30));
                sym.arm_smmu_power_off(puVar6,puVar6[0x23]);
                _dev_info(*(arg1 + 0x10),"TNX_TCR_CNTL : 0x%0llx\n",uVar3);
                uVar7 = 1;
                _dev_info(*(arg1 + 0x10),"Mask_%d : 0x%0llx\n",1,uStack_60);
                _dev_info(*(arg1 + 0x10),"Match_%d : 0x%0llx\n",1,uStack_78);
                _dev_info(*(arg1 + 0x10),"Mask_%d : 0x%0llx\n",2,uStack_58);
                _dev_info(*(arg1 + 0x10),"Match_%d : 0x%0llx\n",2,uStack_70);
                _dev_info(*(arg1 + 0x10),"Mask_%d : 0x%0llx\n",3,uStack_50);
                _dev_info(*(arg1 + 0x10),"Match_%d : 0x%0llx\n",3,uStack_68);
                _dev_info(*(arg1 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",1,1,uStack_b8);
                _dev_info(*(arg1 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",1,2,uStack_b0);
                _dev_info(*(arg1 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",2,1,uStack_a8);
                _dev_info(*(arg1 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",2,2,uStack_a0);
                _dev_info(*(arg1 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",3,1,uStack_98);
                _dev_info(*(arg1 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",3,2,uStack_90);
                _dev_info(*(arg1 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",4,1,uStack_88);
                _dev_info(*(arg1 + 0x10),"Capture_%d_Snapshot_%d : 0x%0llx\n",4,2,uStack_80);
                goto code_r0x08014808;
            }
            iVar1 = ___ratelimit(obj.arm_smmu_debug_capture_bus_match._rs,"arm_smmu_debug_capture_bus_match");
            if (iVar1 != 0) {
                _dev_warn(*puVar6,"capture bus regs in use, not dumping it.\n");
            }
        }
        else {
            sym.arm_smmu_power_off(puVar6,puVar6[0x23]);
        }
    }
    uVar7 = 0;
code_r0x08014808:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qsmmuv500_cfg_probe;
    if ((*(iVar4 + 0x28) == NULL) || (pcVar5 = **(iVar4 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar4 + 8) + 0x10);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar4,0,0x10);
    }
    arg1_00 = uVar2 & 0xfbffffff;
    if ((*(iVar4 + 0x28) == 0) || (pcVar5 = *(*(iVar4 + 0x28) + 8), pcVar5 == NULL)) {
        sym.writel_relaxed_2(arg1_00,*(iVar4 + 8) + 0x10);
        puVar6 = *(iVar4 + 0x28);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar5,0x8001eb0);
            arg1_00 = uVar2 & 0xfbffffff;
        }
        (*pcVar5)(iVar4,0,0x10,arg1_00);
        puVar6 = *(iVar4 + 0x28);
    }
    if ((puVar6 == NULL) || (pcVar5 = *puVar6, pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar4 + 8) + 0x10);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar4,0,0x10);
    }
    if ((uVar2 >> 0x1a & 1) == 0) {
        return 0;
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8014b30);
    (*pcVar5)();
}


// ===== sym.qsmmuv500_cfg_probe @ 0x08014a20 (size 416) =====

ulong sym.qsmmuv500_cfg_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t arg1_00;
    code *pcVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x28) == NULL) || (pcVar2 = **(arg1 + 0x28), pcVar2 == NULL)) {
        uVar1 = sym.readl_relaxed_2(*(arg1 + 8) + 0x10);
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar2,0x8001e90);
        }
        uVar1 = (*pcVar2)(arg1,0,0x10);
    }
    arg1_00 = uVar1 & 0xfbffffff;
    if ((*(arg1 + 0x28) == 0) || (pcVar2 = *(*(arg1 + 0x28) + 8), pcVar2 == NULL)) {
        sym.writel_relaxed_2(arg1_00,*(arg1 + 8) + 0x10);
        puVar3 = *(arg1 + 0x28);
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar2,0x8001eb0);
            arg1_00 = uVar1 & 0xfbffffff;
        }
        (*pcVar2)(arg1,0,0x10,arg1_00);
        puVar3 = *(arg1 + 0x28);
    }
    if ((puVar3 == NULL) || (pcVar2 = *puVar3, pcVar2 == NULL)) {
        uVar1 = sym.readl_relaxed_2(*(arg1 + 8) + 0x10);
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar2,0x8001e90);
        }
        uVar1 = (*pcVar2)(arg1,0,0x10);
    }
    if ((uVar1 >> 0x1a & 1) == 0) {
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8014b30);
    (*pcVar2)();
}


// ===== sym.qcom_adreno_smmu_init_context @ 0x08014bc0 (size 356) =====

ulong sym.qcom_adreno_smmu_init_context(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong uVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *(**arg1 + 0x2f0);
    *(arg1 + 0x44) = 1;
    iVar6 = 0;
    if (*(arg3 + 0x340) != 0) {
        iVar6 = *(*(arg3 + 0x340) + 0x40);
    }
    uVar3 = *(iVar6 + 0x14);
    if (uVar3 != 0) {
        if ((*(iVar6 + 0x18) & 0xfffe) != 0) {
            uVar4 = 1;
            do {
                uVar7 = uVar4;
                if (uVar3 == uVar7) {
                    return 0;
                }
                uVar4 = uVar7 + 1;
            } while ((*(iVar6 + uVar7 * 4 + 0x18) & 0xfffe) != 0);
            if (uVar3 <= uVar7) {
                return 0;
            }
        }
        iVar5 = of_device_is_compatible(*(**arg1 + 0x2f0),"qcom,msm8996-smmu-v2");
        if (((iVar5 == 0) && (*(arg1 + 0x48) == 0)) && (*(arg1 + 0x40) == 1)) {
            *arg2 = *arg2 | 0x20;
        }
        piVar9 = *(arg3 + 0x98);
        *piVar9 = arg1;
        piVar9[1] = sym.qcom_adreno_smmu_get_ttbr1_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        piVar9[2] = sym.qcom_adreno_smmu_set_ttbr0_cfg.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        piVar9[3] = sym.qcom_adreno_smmu_get_fault_info.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        iVar1 = *(arg2 + 0x18);
        iVar6 = *arg2;
        iVar2 = *(arg2 + 8);
        piVar9[8] = *(arg2 + 0x10);
        piVar9[9] = iVar1;
        piVar9[6] = iVar6;
        piVar9[7] = iVar2;
        iVar1 = *(arg2 + 0x38);
        iVar6 = *(arg2 + 0x20);
        iVar2 = *(arg2 + 0x28);
        piVar9[0xc] = *(arg2 + 0x30);
        piVar9[0xd] = iVar1;
        piVar9[10] = iVar6;
        piVar9[0xb] = iVar2;
        iVar1 = *(arg2 + 0x58);
        iVar6 = *(arg2 + 0x40);
        iVar2 = *(arg2 + 0x48);
        piVar9[0x10] = *(arg2 + 0x50);
        piVar9[0x11] = iVar1;
        piVar9[0xe] = iVar6;
        piVar9[0xf] = iVar2;
        iVar1 = *(arg2 + 0x78);
        iVar6 = *(arg2 + 0x60);
        iVar2 = *(arg2 + 0x68);
        piVar9[0x14] = *(arg2 + 0x70);
        piVar9[0x15] = iVar1;
        piVar9[0x12] = iVar6;
        piVar9[0x13] = iVar2;
        iVar6 = of_match_node(obj.qcom_smmu_impl_of_match,uVar8);
        if (iVar6 != 0) {
            piVar9[4] = sym.qcom_adreno_smmu_set_stall.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
            piVar9[5] = sym.qcom_adreno_smmu_resume_translation.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt;
        }
    }
    return 0;
}


// ===== sym.qsmmuv500_init_cb @ 0x08014d24 (size 308) =====

void sym.qsmmuv500_init_cb(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    char *pcVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *arg1;
    pcVar3 = iommu_group_get_iommudata(*(arg2 + 0x338));
    if (*pcVar3 != '\0') {
        uVar2 = *(pcVar3 + 4);
        iVar1 = *(iVar5 + 0x10) + *(arg1 + 0x30);
        if ((*(iVar5 + 0x28) == 0) || (pcVar4 = *(*(iVar5 + 0x28) + 8), pcVar4 == NULL)) {
            sym.writel_relaxed_2(uVar2,*(iVar5 + 8) + (iVar1 << (*(iVar5 + 0x14) & 0x1f)) + 4);
        }
        else {
            if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001eb0);
            }
            (*pcVar4)(iVar5,iVar1,4,uVar2);
        }
        pcVar4 = *(*(arg1 + 0xb8) + 0x50);
        if (pcVar4 != NULL) {
            if (1 < (pcVar4 + -0x8007fc0 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3dfe89e98d52c464,pcVar4,0x8001f10);
            }
            (*pcVar4)(arg1 + 0xb0);
        }
    }
    return;
}


// ===== sym.qsmmuv500_iova_to_phys_hard @ 0x08014e58 (size 3032) =====

int64_t sym.qsmmuv500_iova_to_phys_hard(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    code *unaff_x20;
    code *pcVar10;
    int64_t iVar11;
    uint64_t uVar12;
    code *unaff_x24;
    code *unaff_x25;
    int64_t iVar13;
    uint32_t unaff_w27;
    uint32_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_88;
    int64_t iStack_80;
    uint32_t uStack_74;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iVar11 = *arg1;
    uVar14 = *(arg2 + 8);
    uVar1 = *(arg2 + 0xc);
    uVar12 = *arg2;
    piVar9 = *(iVar11 + 0x130);
    uStack_70 = uVar12;
    if (piVar9 != iVar11 + 0x130) {
        uStack_74 = *(arg1 + 0x30);
        do {
            unaff_x20 = arg1;
            if ((*(piVar9 + 7) <= uVar1) && (uVar1 < *(piVar9 + 0x3c) + *(piVar9 + 7))) {
                if ((piVar9 != NULL) && (iVar4 = sym.arm_smmu_power_on(piVar9[6]), iVar4 == 0)) {
                    if (uVar12 >> (*(piVar9 + 8) & 0x3f) == 0) {
                        iVar13 = *arg1;
                        uVar2 = *(arg1 + 0x30);
                        unaff_w27 = uVar2;
                        iVar7 = of_find_property(*(piVar9[2] + 0x2f0),"qcom,opt-out-tbu-halting",0);
                        unaff_x24 = sym.__typeid__ZTSFvP20qsmmuv500_tbu_deviceE_global_addr;
                        if (iVar7 != 0) {
                            _dev_notice(piVar9[2],"TBU opted-out for halting!\n");
                            iVar13 = 0;
                            goto code_r0x08015568;
                        }
                        iStack_80 = piVar9 + 0x44;
                        unaff_x25 = _raw_spin_lock_irqsave(iStack_80);
                        if (piVar9[9] == 0) {
                            pcVar10 = *piVar9[5];
                            if (3 < (pcVar10 + -0x8007fa0 >> 3 | pcVar10 << 0x3d)) {
                                __cfi_slowpath_diag(0x62199a7fe1774e2e,pcVar10,0x8001f70);
                            }
                            iVar4 = (*pcVar10)(piVar9);
                            if (iVar4 != 0) goto code_r0x08015520;
                            uVar6 = *(iVar13 + 0x10) + uVar2;
                            if ((*(iVar13 + 0x28) != NULL) &&
                               (unaff_x20 = **(iVar13 + 0x28), uStack_88 = uVar14, unaff_x20 != NULL))
                            goto code_r0x080156f8;
                            uVar6 = sym.readl_relaxed_2(*(iVar13 + 8) + (uVar6 << (*(iVar13 + 0x14) & 0x1f)) + 0x58);
                            if ((uVar6 >> 0x1e & 1) == 0) goto code_r0x080154f0;
                            goto code_r0x080153ec;
                        }
                        iVar4 = piVar9[9] + 1;
                        goto code_r0x08014fa8;
                    }
                    iVar4 = ___ratelimit(obj.qsmmuv500_iova_to_phys._rs,"qsmmuv500_iova_to_phys");
                    if (iVar4 != 0) {
                        _dev_err(piVar9[2],"ECATS: address too large: %pad\n",&uStack_70);
                    }
                }
                break;
            }
            piVar9 = *piVar9;
        } while (piVar9 != iVar11 + 0x130);
    }
    iVar13 = 0;
    do {
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_68) {
            return iVar13;
        }
        __stack_chk_fail();
        uVar6 = uVar14;
code_r0x080156f8:
        uVar14 = uStack_88;
        if (unaff_x20 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,unaff_x20,0x8001e90);
        }
        uVar6 = (*unaff_x20)(iVar13,uVar6,0x58);
        if ((uVar6 >> 0x1e & 1) != 0) {
code_r0x080153ec:
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == NULL) || (pcVar10 = **(iVar13 + 0x28), pcVar10 == NULL)) {
                uVar5 = sym.readl_relaxed_2(*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                }
                uVar5 = (*pcVar10)(iVar13,iVar4,0);
            }
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == 0) || (pcVar10 = *(*(iVar13 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uVar5 & 0xffffff3f,*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar13,iVar4,0,uVar5 & 0xffffff3f);
                unaff_x24 = sym.__typeid__ZTSFvP20qsmmuv500_tbu_deviceE_global_addr;
            }
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == 0) || (pcVar10 = *(*(iVar13 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uVar6,*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)) + 0x58);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar13,iVar4,0x58,uVar6);
            }
            DataSynchronizationBarrier(3,2,0);
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == 0) || (pcVar10 = *(*(iVar13 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(1,*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)) + 8);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar13,iVar4,8,1);
            }
            iVar4 = *(iVar13 + 0x10) + unaff_w27;
            if ((*(iVar13 + 0x28) == 0) || (pcVar10 = *(*(iVar13 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uVar5,*(iVar13 + 8) + (iVar4 << (*(iVar13 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar13,iVar4,0,uVar5);
            }
        }
code_r0x080154f0:
        pcVar10 = *(piVar9[5] + 8);
        if (3 < (pcVar10 + -0x8007fa0 >> 3 | pcVar10 << 0x3d)) {
            __cfi_slowpath_diag(0x62199a7fe1774e2e,pcVar10,0x8001f90);
        }
        iVar4 = (*pcVar10)(piVar9);
        uStack_88 = uVar14;
        if (iVar4 == 0) {
            iVar4 = 1;
code_r0x08014fa8:
            *(piVar9 + 9) = iVar4;
            _raw_spin_unlock_irqrestore(iStack_80,unaff_x25);
            iVar4 = *(iVar11 + 0x10) + uStack_74;
            if ((*(iVar11 + 0x28) == NULL) || (pcVar10 = **(iVar11 + 0x28), pcVar10 == NULL)) {
                uStack_88 = sym.readl_relaxed_2(*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                }
                uStack_88 = (*pcVar10)(iVar11,iVar4,0);
            }
            iVar4 = *(iVar11 + 0x10) + uStack_74;
            if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uStack_88 & 0xffffff3f,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar11,iVar4,0,uStack_88 & 0xffffff3f);
            }
            iVar4 = *(iVar11 + 0x10) + uStack_74;
            if ((*(iVar11 + 0x28) == NULL) || (pcVar10 = **(iVar11 + 0x28), pcVar10 == NULL)) {
                uVar6 = sym.readl_relaxed_2(*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 0x58);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                }
                uVar6 = (*pcVar10)(iVar11,iVar4,0x58);
            }
            if ((uVar6 & 0xc00001fe) != 0) {
                iVar4 = *(iVar11 + 0x10) + uStack_74;
                if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                    sym.writel_relaxed_2(uVar6,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 0x58);
                    DataSynchronizationBarrier(3,2,0);
                }
                else {
                    if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                        __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                    }
                    (*pcVar10)(iVar11,iVar4,0x58,uVar6);
                    DataSynchronizationBarrier(3,2,0);
                }
                if ((uVar6 >> 0x1e & 1) != 0) {
                    iVar4 = *(iVar11 + 0x10) + uStack_74;
                    if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                        sym.writel_relaxed_2(1,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 8);
                    }
                    else {
                        if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                        }
                        (*pcVar10)(iVar11,iVar4,8,1);
                    }
                }
            }
            uVar8 = _raw_spin_lock_irqsave();
            uVar6 = 0;
            do {
                pcVar10 = *(piVar9[5] + 0x18);
                if (1 < (pcVar10 + -0x8007f30 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0x88b09b4aa1d2e79e,pcVar10,0x8001f30);
                }
                iVar13 = (*pcVar10)(piVar9,uVar12,uVar1,uVar14);
                iVar4 = *(iVar11 + 0x10) + uStack_74;
                if ((*(iVar11 + 0x28) == NULL) || (pcVar10 = **(iVar11 + 0x28), pcVar10 == NULL)) {
                    uVar5 = sym.readl_relaxed_2(*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 0x58);
                }
                else {
                    if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                    }
                    uVar5 = (*pcVar10)(iVar11,iVar4,0x58);
                }
                unaff_x25 = uVar5;
                if ((uVar5 & 0xc00001fe) != 0) {
                    iVar4 = *(iVar11 + 0x10) + uStack_74;
                    if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                        sym.writel_relaxed_2(unaff_x25,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 0x58);
                    }
                    else {
                        if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                        }
                        (*pcVar10)(iVar11,iVar4,0x58,unaff_x25);
                    }
                    DataSynchronizationBarrier(3,2,0);
                    unaff_w27 = uVar14;
                    if ((uVar5 >> 0x1e & 1) != 0) {
                        iVar4 = *(iVar11 + 0x10) + uStack_74;
                        if ((*(iVar11 + 0x28) == 0) || (unaff_x25 = *(*(iVar11 + 0x28) + 8), unaff_x25 == NULL)) {
                            sym.writel_relaxed_2(1,*(iVar11 + 8) + (iVar4 << (*(iVar11 + 0x14) & 0x1f)) + 8);
                        }
                        else {
                            if (unaff_x25 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                                __cfi_slowpath_diag(0x6809a6077d3a8c69,unaff_x25,0x8001eb0);
                            }
                            (*unaff_x25)(iVar11,iVar4,8,1);
                        }
                    }
                }
            } while ((iVar13 == 0) && (bVar3 = uVar6 < 2, uVar6 = uVar6 + 1, bVar3));
            uVar6 = *(iVar11 + 0x10) + uStack_74;
            uVar12 = uVar6;
            if ((*(iVar11 + 0x28) == 0) || (pcVar10 = *(*(iVar11 + 0x28) + 8), pcVar10 == NULL)) {
                sym.writel_relaxed_2(uStack_88,*(iVar11 + 8) + (uVar6 << (*(iVar11 + 0x14) & 0x1f)));
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                    __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
                }
                (*pcVar10)(iVar11,uVar12,0,uStack_88);
            }
            unaff_x24 = sym.__typeid__ZTSFvP20qsmmuv500_tbu_deviceE_global_addr;
            _raw_spin_unlock_irqrestore(iVar11 + 0x180,uVar8);
            iVar11 = _raw_spin_lock_irqsave(iStack_80);
            iVar4 = piVar9[9] + -1;
            if (iVar4 == 0) {
                pcVar10 = *(piVar9[5] + 0x10);
                if (5 < (pcVar10 + -0x80081f0 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0x6175088cc6504702,pcVar10,0x8001fb0);
                }
                (*pcVar10)(piVar9);
                *(piVar9 + 9) = 0;
            }
            else {
                if (piVar9[9] == 0) {
                    iVar11 = piVar9[2][0xe];
                    if (iVar11 == 0) {
                        iVar11 = *piVar9[2];
                    }
                    __warn_printk("%s bad tbu->halt_count",iVar11);
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x800,0x80155fc);
                    (*pcVar10)();
                }
                *(piVar9 + 9) = iVar4;
            }
            _raw_spin_unlock_irqrestore(iStack_80,iVar11);
        }
        else {
code_r0x08015520:
            _raw_spin_unlock_irqrestore(iStack_80,unaff_x25);
            iVar13 = 0;
        }
code_r0x08015568:
        unaff_x20 = *(piVar9[5] + 0x20);
        if (5 < (unaff_x20 - unaff_x24 >> 3 | unaff_x20 - unaff_x24 << 0x3d)) {
            __cfi_slowpath_diag(0x6175088cc6504702,unaff_x20,0x8001f50);
        }
        (*unaff_x20)(piVar9);
        DataSynchronizationBarrier(3,1,0);
        sym.arm_smmu_power_off(piVar9[3],piVar9[6]);
    } while( true );
}


// ===== sym.qsmmuv500_tlb_sync_timeout @ 0x08015a30 (size 964) =====

void sym.qsmmuv500_tlb_sync_timeout(int64_t arg1)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong *puVar9;
    int64_t *piVar10;
    ulong *in_x18;
    uint32_t uVar11;
    code *pcVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_70 = 0;
    iVar3 = ___ratelimit(obj.qsmmuv500_tlb_sync_timeout._rs.41,"qsmmuv500_tlb_sync_timeout");
    if (iVar3 == 0) {
        puVar9 = *(arg1 + 0x28);
    }
    else {
        _dev_err(*arg1,"TLB sync timed out -- SMMU may be deadlocked\n");
        puVar9 = *(arg1 + 0x28);
    }
    if ((puVar9 != NULL) && (pcVar12 = *puVar9, pcVar12 != NULL)) {
        if (pcVar12 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) goto code_r0x08015dd0;
        goto code_r0x08015af8;
    }
    uVar4 = sym.readl_relaxed_2(*(arg1 + 8) + (7 << (*(arg1 + 0x14) & 0x1f)) + 0x5dc);
    pcVar12 = uVar4;
    if (uVar4 == 0) goto code_r0x08015b10;
code_r0x08015ab8:
    uVar11 = pcVar12;
    uVar4 = uVar11 & 1;
    uVar14 = uVar11 >> 1 & 0x7fff;
    uVar13 = uVar11 >> 0x10 & 1;
    uVar11 = uVar11 >> 0x11;
    do {
        iVar3 = qcom_scm_io_readl(*(arg1 + 0x120) + 0x2204,&uStack_70 + 4);
        if (iVar3 == 0) {
            iVar3 = qcom_scm_io_readl(*(arg1 + 0x120) + 0x2670,&uStack_70);
            uVar16 = uStack_70;
            if (iVar3 != 0) {
                iVar5 = ___ratelimit(obj.qsmmuv500_tlb_sync_timeout._rs.45,"qsmmuv500_tlb_sync_timeout");
                if (iVar5 != 0) {
                    uVar6 = *arg1;
                    pcVar7 = "SCM read of TBU sync/inv prog fails: %d\n";
                    goto code_r0x08015c00;
                }
                goto code_r0x08015c08;
            }
            if (uStack_70._4_4_ == 0) {
code_r0x08015b70:
                uVar4 = 0;
            }
            else if (uVar13 == 0) {
                if (uVar4 == 0) goto code_r0x08015b70;
                uVar4 = uStack_70._4_4_ & (uVar14 ^ 0xffffffff);
            }
            else {
                uVar4 = uStack_70._4_4_ & (uVar11 ^ 0xffffffff);
            }
            uVar11 = uStack_70;
            iVar3 = ___ratelimit(obj.qsmmuv500_tlb_sync_timeout._rs,"qsmmuv500_tlb_sync_timeout");
            if (iVar3 != 0) {
                uVar15 = uVar4;
                _dev_err(*arg1,"TBU ACK 0x%x TBU PWR 0x%x TCU sync_inv 0x%x\n",pcVar12,uStack_70._4_4_,
                         uStack_70 & 0xffffffff);
                pcVar7 = "completed";
                if ((uVar16 & 0x10000) != 0) {
                    pcVar7 = "pending";
                }
                pcVar2 = "completed";
                if ((uVar11 >> 0x14 & 1) != 0) {
                    pcVar2 = "pending";
                }
                _dev_err(*arg1,"TCU invalidation %s, TCU sync %s\n",pcVar7,pcVar2);
                uVar16 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
                pcVar7 = "check for TBU power status";
                pcVar12 = 0x8002a19;
                if (uVar13 != 0) {
                    pcVar7 = "check pending transactions on TBU";
                    pcVar12 = "sync";
                }
                if (uVar16 < 0x40) {
                    piVar1 = arg1 + 0x130;
                    do {
                        piVar10 = *piVar1;
                        if (piVar10 != piVar1) {
                            uVar4 = (uVar16 & 0x3f) << 10;
                            do {
                                if ((*(piVar10 + 7) <= uVar4) && (uVar4 < *(piVar10 + 0x3c) + *(piVar10 + 7))) {
                                    if (piVar10 != NULL) {
                                        iVar8 = piVar10[2][0xe];
                                        if (iVar8 == 0) {
                                            iVar8 = *piVar10[2];
                                        }
                                        _dev_err(*arg1,"TBU %s ack pending for TBU %s, %s\n",pcVar12,iVar8,pcVar7);
                                        if (uVar16 < 0x3f) goto code_r0x08015d80;
                                        goto code_r0x08015b90;
                                    }
                                    break;
                                }
                                piVar10 = *piVar10;
                            } while (piVar10 != piVar1);
                        }
                        if (0x3e < uVar16) break;
code_r0x08015d80:
                        uVar16 = -2L << (uVar16 & 0x3f) & uVar15;
                        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                        uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
                    } while (uVar16 < 0x40);
                }
            }
code_r0x08015b90:
            if ((uVar11 >> 0x14 & 1) != 0) {
                queue_work_on(0x20,_strcpy,arg1 + 0x150);
            }
        }
        else {
            iVar5 = ___ratelimit(obj.qsmmuv500_tlb_sync_timeout._rs.43,"qsmmuv500_tlb_sync_timeout");
            if (iVar5 != 0) {
                uVar6 = *arg1;
                pcVar7 = "SCM read of TBU power status fails: %d\n";
code_r0x08015c00:
                _dev_err(uVar6,pcVar7,iVar3);
            }
code_r0x08015c08:
            if (pcVar12 != 0) {
                pcVar7 = 0x8002a19;
                if (uVar13 != 0) {
                    pcVar7 = "sync";
                }
                pcVar2 = "check for TBU power status";
                if (uVar13 != 0) {
                    pcVar2 = "check pending transactions on TBU";
                    uVar14 = uVar11;
                }
                _dev_err(*arg1,"TBU %s ack pending, got ack for TBUs %d, %s\n",pcVar7,uVar14,pcVar2);
            }
            _dev_err(*arg1,"TBU SYNC_INV_ACK reg 0x%x\n",pcVar12);
        }
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
code_r0x08015dd0:
        __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar12,0x8001e90);
code_r0x08015af8:
        uVar4 = (*pcVar12)(arg1,7,0x5dc);
        pcVar12 = uVar4;
        if (uVar4 != 0) goto code_r0x08015ab8;
code_r0x08015b10:
        uVar11 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar4 = 0;
    } while( true );
}


// ===== sym.qsmmuv500_device_remove @ 0x08015df4 (size 40) =====

void sym.qsmmuv500_device_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cancel_work_sync(arg1 + 0x150);
    return;
}


// ===== sym.qsmmuv500_device_group @ 0x08015e1c (size 428) =====

ulong sym.qsmmuv500_device_group(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint16_t *puVar11;
    ulong *in_x18;
    int64_t iVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x340);
    if (iVar5 != 0) {
        iVar12 = *(iVar5 + 0x40);
        piVar13 = *(iVar5 + 0x50);
        if (iVar12 != 0 && piVar13 != NULL) {
            iVar5 = *piVar13;
            pcVar3 = iommu_group_get_iommudata(arg2);
            if (pcVar3 == NULL) {
                iVar1 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar1 = 0x30;
                }
                pcVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
                if (pcVar3 == NULL) {
                    return 0xfffffff4;
                }
                iommu_group_set_iommudata(arg2,pcVar3,sym.__typeid__ZTSFvPvE_global_addr);
                uVar8 = *(iVar5 + 0x148);
            }
            else {
                uVar8 = *(iVar5 + 0x148);
            }
            if (uVar8 != 0) {
                uVar7 = *(iVar12 + 0x14);
                uVar6 = 0;
                uVar10 = uVar7;
                do {
                    if (uVar10 != 0) {
                        uVar9 = 0;
                        puVar11 = *(iVar5 + 0x140) + uVar6 * 0xc;
                        iVar2 = *(puVar11 + 4);
                        do {
                            uVar4 = *(piVar13 + uVar9 * 2 + 8) & 0xffffffff;
                            if (((*(*(iVar5 + 0x60) + uVar4 * 6) & (*puVar11 ^ 0xffff)) == 0) &&
                               (((*(*(iVar5 + 0x60) + uVar4 * 6 + 2) ^ puVar11[1]) & (*puVar11 ^ 0xffff)) == 0)) {
                                if (*pcVar3 == '\0') {
                                    *(pcVar3 + 4) = iVar2;
                                    *pcVar3 = '\x01';
                                    uVar7 = *(iVar12 + 0x14);
                                }
                                else if (*(pcVar3 + 4) != iVar2) {
                                    _dev_err(arg1,"Invalid actlr setting\n");
                                    return 0xffffffea;
                                }
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < uVar7);
                        uVar8 = *(iVar5 + 0x148);
                        uVar10 = uVar7;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar8);
            }
            return 0;
        }
    }
    return 0xffffffea;
}


// ===== sym.qsmmuv500_def_domain_type @ 0x08015fc8 (size 260) =====

uint64_t sym.qsmmuv500_def_domain_type(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    char *pcVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    int64_t extraout_x1;
    char **ppcVar8;
    ulong in_x6;
    ulong in_x7;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong uVar14;
    ulong unaff_x30;
    uchar *puVar15;
    code *pcVar16;
    char *pcStack_30;
    int64_t iStack_28;
    
    ppcVar8 = &pcStack_30;
    *in_x18 = unaff_x30;
    puVar15 = &stack0xffffffffffffffe0;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    pcStack_30 = NULL;
    iVar7 = of_parse_phandle(*(arg1 + 0x2f0),"qcom,iommu-group",0);
    if (iVar7 == 0) {
        iVar7 = *(arg1 + 0x2f0);
    }
    iVar6 = of_property_read_string(iVar7,"qcom,iommu-dma");
    if (iVar6 != 0) {
        pcStack_30 = "default";
    }
    pcVar4 = pcStack_30;
    iVar6 = strcmp(pcStack_30,"fastmap");
    if ((iVar6 == 0) || (iVar6 = strcmp(pcVar4,"bypass"), iVar6 == 0)) {
        uVar13 = 1;
    }
    else {
        iVar6 = strcmp(pcVar4,"atomic");
        uVar13 = 3;
        if (iVar6 != 0) {
            iVar6 = strcmp(pcVar4,"disabled");
            uVar12 = 3;
            if (iVar6 == 0) {
                uVar12 = 4;
            }
            uVar13 = uVar12;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar13;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_adreno_smmu_alloc_context_bank;
    pcVar16 = sym.qcom_adreno_smmu_alloc_context_bank;
    iVar7 = 0;
    if (*(ppcVar8 + 0x340) != 0) {
        iVar7 = *(*(ppcVar8 + 0x340) + 0x40);
    }
    uVar12 = *(iVar7 + 0x14);
    if (uVar12 == 0) {
code_r0x08016144:
        iVar6 = *(extraout_x1 + 0x30);
        uVar14 = 2;
    }
    else {
        if ((*(iVar7 + 0x18) & 0xfffe) != 0) {
            uVar5 = 1;
            do {
                uVar10 = uVar5;
                if (uVar12 == uVar10) goto code_r0x08016144;
                uVar5 = uVar10 + 1;
            } while ((*(iVar7 + uVar10 * 4 + 0x18) & 0xfffe) != 0);
            if (uVar12 <= uVar10) goto code_r0x08016144;
        }
        uVar14 = 0;
        iVar6 = 2;
    }
    do {
        uVar13 = _find_next_bit(extraout_x1 + 0x38,0,iVar6,uVar14,0xffffffffffffffff,0,in_x6,in_x7,puVar15,
                                pcVar16);
        if (iVar6 == uVar13) {
            return 0xffffffe4;
        }
        uVar9 = 1L << (uVar13 & 0x3f);
        puVar1 = extraout_x1 + (uVar13 >> 6 & 0x3ffffff) * 8 + 0x38;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar11 | uVar9;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
    } while ((uVar11 & uVar9) != 0);
    return uVar13;
}


// ===== sym.qcom_adreno_smmu_alloc_context_bank @ 0x080160cc (size 300) =====

uint64_t sym.qcom_adreno_smmu_alloc_context_bank(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = 0;
    if (*(arg2 + 0x340) != 0) {
        iVar8 = *(*(arg2 + 0x340) + 0x40);
    }
    uVar2 = *(iVar8 + 0x14);
    if (uVar2 == 0) {
code_r0x08016144:
        iVar7 = *(arg1 + 0x30);
        uVar12 = 2;
    }
    else {
        if ((*(iVar8 + 0x18) & 0xfffe) != 0) {
            uVar5 = 1;
            do {
                uVar10 = uVar5;
                if (uVar2 == uVar10) goto code_r0x08016144;
                uVar5 = uVar10 + 1;
            } while ((*(iVar8 + uVar10 * 4 + 0x18) & 0xfffe) != 0);
            if (uVar2 <= uVar10) goto code_r0x08016144;
        }
        uVar12 = 0;
        iVar7 = 2;
    }
    do {
        uVar6 = _find_next_bit(arg1 + 0x38,0,iVar7,uVar12,0xffffffffffffffff,0);
        if (iVar7 == uVar6) {
            return 0xffffffe4;
        }
        uVar9 = 1L << (uVar6 & 0x3f);
        puVar1 = arg1 + (uVar6 >> 6 & 0x3ffffff) * 8 + 0x38;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar11 | uVar9;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
    } while ((uVar11 & uVar9) != 0);
    return uVar6;
}


// ===== sym.qcom_adreno_smmu_get_ttbr1_cfg @ 0x080161f8 (size 20) =====

int64_t sym.qcom_adreno_smmu_get_ttbr1_cfg(int64_t arg1)

{
    return *(arg1 + 0x10) + -0x58;
}


// ===== sym.qcom_adreno_smmu_set_ttbr0_cfg @ 0x0801620c (size 304) =====

ulong sym.qcom_adreno_smmu_set_ttbr0_cfg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t in_x3;
    uint64_t *puVar4;
    int64_t iVar5;
    uint8_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q1 [16];
    
    *in_x18 = unaff_x30;
    uVar7 = *(arg1 + 0x30);
    iVar5 = *(*arg1 + 0x48);
    puVar4 = iVar5 + uVar7 * 0x30;
    puVar9 = puVar4 + 2;
    uVar2 = *puVar9;
    if ((uVar2 >> 0x17 & 1) == 0) {
        if (arg2 == 0) {
            if ((uVar2 >> 7 & 1) != 0) goto code_r0x08016328;
            uVar2 = *(*(arg1 + 0x10) + -0x20);
            uVar2 = (uVar2 & 0x60) << 7 | (uVar2 >> 3 & 3) << 0xe | (uVar2 >> 7 & 3) << 10 | uVar2 >> 1 & 0x300 |
                    uVar2 >> 0xb & 0x3f;
            uVar1 = uVar2 | 0x800000;
            if ((*(*(arg1 + 0x10) + -0x58) & 0x20) != 0) {
                uVar1 = uVar2 << 0x10 | 0x80;
            }
            puVar6 = *(iVar5 + uVar7 * 0x30 + 0x28);
            *puVar9 = uVar1;
            uVar8 = *(puVar6 + 2) << 0x30;
        }
        else {
            if ((uVar2 >> 7 & 1) == 0) goto code_r0x08016328;
            uVar1 = *(arg2 + 0x38);
            uVar1 = (uVar1 & 0x60) << 7 | (uVar1 >> 3 & 3) << 0xe | (uVar1 >> 7 & 3) << 10 | uVar1 >> 1 & 0x300 |
                    uVar1 >> 0xb & 0x3f;
            if ((*arg2 & 0x20) != 0) {
                uVar1 = uVar1 << 0x10;
            }
            *puVar9 = uVar1 | uVar2 & 0xff7fff7f;
            uVar8 = *(arg2 + 0x30);
            puVar6 = *(iVar5 + uVar7 * 0x30 + 0x28);
            *puVar4 = uVar8;
            uVar8 = uVar8 | *(puVar6 + 2) << 0x30;
        }
        *puVar4 = uVar8;
        sym.arm_smmu_write_context_bank(*arg1,*puVar6,in_q1,in_x3);
        uVar3 = 0;
    }
    else {
code_r0x08016328:
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.qcom_adreno_smmu_get_fault_info @ 0x0801633c (size 1052) =====

void sym.qcom_adreno_smmu_get_fault_info(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint uVar2;
    ulong uVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *arg1;
    iVar1 = *(iVar6 + 0x10) + *(arg1 + 0x30);
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x58);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,iVar1,0x58);
    }
    *(arg2 + 0x14) = uVar2;
    iVar1 = *(iVar6 + 0x10) + *(arg1 + 0x30);
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x68);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,iVar1,0x68);
    }
    *(arg2 + 0x18) = uVar2;
    iVar1 = *(iVar6 + 0x10) + *(arg1 + 0x30);
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x6c);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,iVar1,0x6c);
    }
    *(arg2 + 0x1c) = uVar2;
    iVar1 = *(iVar6 + 0x10) + *(arg1 + 0x30);
    if ((*(iVar6 + 0x28) == 0) || (pcVar5 = *(*(iVar6 + 0x28) + 0x10), pcVar5 == NULL)) {
        uVar3 = sym.readq_relaxed_1(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x60);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar5,0x8001ef0);
        }
        uVar3 = (*pcVar5)(iVar6,iVar1,0x60);
    }
    *arg2 = uVar3;
    uVar4 = *(arg1 + 0x30) << 2 | 0x400;
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (1 << (*(iVar6 + 0x14) & 0x1f)) + uVar4);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,1,uVar4);
    }
    *(arg2 + 0x20) = uVar2;
    iVar1 = *(iVar6 + 0x10) + *(arg1 + 0x30);
    if ((*(iVar6 + 0x28) == 0) || (pcVar5 = *(*(iVar6 + 0x28) + 0x10), pcVar5 == NULL)) {
        uVar3 = sym.readq_relaxed_1(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x20);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFyP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0x9f6c1d97e51850d,pcVar5,0x8001ef0);
        }
        uVar3 = (*pcVar5)(iVar6,iVar1,0x20);
    }
    *(arg2 + 8) = uVar3;
    iVar1 = *(iVar6 + 0x10) + *(arg1 + 0x30);
    if ((*(iVar6 + 0x28) == NULL) || (pcVar5 = **(iVar6 + 0x28), pcVar5 == NULL)) {
        uVar2 = sym.readl_relaxed_2(*(iVar6 + 8) + (iVar1 << (*(iVar6 + 0x14) & 0x1f)) + 0x34);
    }
    else {
        if (pcVar5 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar5,0x8001e90);
        }
        uVar2 = (*pcVar5)(iVar6,iVar1,0x34);
    }
    *(arg2 + 0x10) = uVar2;
    return;
}


// ===== sym.qcom_adreno_smmu_set_stall @ 0x08016758 (size 52) =====

void sym.qcom_adreno_smmu_set_stall(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar2 = *(*arg1 + 0x134);
    uVar3 = 1L << (*(arg1 + 0x30) & 0x3f);
    uVar1 = uVar2 | uVar3;
    if ((arg2 & 1) == 0) {
        uVar1 = uVar2 & (uVar3 ^ 0xffffffff);
    }
    *(*arg1 + 0x134) = uVar1;
    return;
}


// ===== sym.qcom_adreno_smmu_resume_translation @ 0x0801678c (size 204) =====

void sym.qcom_adreno_smmu_resume_translation(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *arg1;
    uVar2 = arg2 & 1;
    iVar1 = *(iVar3 + 0x10) + *(arg1 + 0x30);
    if ((*(iVar3 + 0x28) == 0) || (pcVar4 = *(*(iVar3 + 0x28) + 8), pcVar4 == NULL)) {
        sym.writel_relaxed_2(uVar2,*(iVar3 + 8) + (iVar1 << (*(iVar3 + 0x14) & 0x1f)) + 8);
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001eb0);
        }
        (*pcVar4)(iVar3,iVar1,8,uVar2);
    }
    return;
}


// ===== sym.qsmmuv500_release_group_iommudata @ 0x08016858 (size 36) =====

void sym.qsmmuv500_release_group_iommudata(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.qcom_smmu500_reset @ 0x0801687c (size 120) =====

uint64_t sym.qcom_smmu500_reset(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(*arg1 + 0x2f0);
    sym.arm_mmu500_reset(arg1);
    uVar2 = of_device_is_compatible(uVar3,0x8002feb);
    if (uVar2 != 0) {
        uVar1 = qcom_scm_qsmmu500_wait_safe_toggle(0);
        uVar2 = 0;
        if (uVar1 != 0) {
            _dev_warn(*arg1,"Failed to turn off SAFE logic\n");
            uVar2 = uVar1;
        }
    }
    return uVar2;
}


// ===== sym.qcom_smmu_def_domain_type @ 0x080168f4 (size 60) =====

int64_t sym.qcom_smmu_def_domain_type(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_match_device(obj.qcom_smmu_client_of_match,arg1);
    return (iVar1 != 0) << 2;
}


// ===== sym.qcom_adreno_smmu_write_sctlr @ 0x08016930 (size 212) =====

void sym.qcom_adreno_smmu_write_sctlr(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0x100;
    if ((*(arg1 + 0x134) >> (arg2 & 0x3fU) & 1) != 0) {
        uVar2 = 0x180;
    }
    uVar2 = uVar2 | arg3;
    iVar1 = *(arg1 + 0x10) + arg2;
    if ((*(arg1 + 0x28) == 0) || (pcVar3 = *(*(arg1 + 0x28) + 8), pcVar3 == NULL)) {
        sym.writel_relaxed_2(uVar2,*(arg1 + 8) + (iVar1 << (*(arg1 + 0x14) & 0x1f)));
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar3,0x8001eb0);
        }
        (*pcVar3)(arg1,iVar1,0,uVar2);
    }
    return;
}


// ===== sym.qcom_smmu_cfg_probe @ 0x08016a04 (size 932) =====

ulong sym.qcom_smmu_cfg_probe(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *puVar6;
    int64_t iVar7;
    ulong *in_x18;
    int iVar8;
    int64_t iVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x54) * 4 + 0xbfc;
    if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
        sym.writel_relaxed_2(0x100ff,*(arg1 + 8) + iVar8);
        puVar6 = *(arg1 + 0x28);
        if (puVar6 != NULL) goto code_r0x08016a60;
code_r0x08016a68:
        uVar4 = sym.readl_relaxed_2(*(arg1 + 8) + iVar8);
    }
    else {
        if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
        }
        (*pcVar10)(arg1,0,iVar8,0x100ff);
        puVar6 = *(arg1 + 0x28);
        if (puVar6 == NULL) goto code_r0x08016a68;
code_r0x08016a60:
        pcVar10 = *puVar6;
        if (pcVar10 == NULL) goto code_r0x08016a68;
        if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
            __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
        }
        uVar4 = (*pcVar10)(arg1,0,iVar8);
    }
    if ((uVar4 & 0x30000) != 0x10000) {
        uVar4 = *(arg1 + 0x30) - 1;
        *(arg1 + 0x130) = 1;
        puVar1 = arg1 + (uVar4 >> 3 & 0x18) + 0x38;
        *(arg1 + 0x131) = uVar4;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1L << (uVar4 & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar8 = *(arg1 + 0x10) + *(arg1 + 0x131);
        if ((*(arg1 + 0x28) == 0) || (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 == NULL)) {
            sym.writel_relaxed_2(0,*(arg1 + 8) + (iVar8 << (*(arg1 + 0x14) & 0x1f)));
        }
        else {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
            }
            (*pcVar10)(arg1,iVar8,0,0);
        }
        iVar9 = *(arg1 + 0x131) * 4;
        if ((*(arg1 + 0x28) != 0) && (pcVar10 = *(*(arg1 + 0x28) + 8), pcVar10 != NULL)) {
            if (pcVar10 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
                __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar10,0x8001eb0);
            }
            (*pcVar10)(arg1,1,iVar9,0x10000);
            iVar8 = *(arg1 + 0x54);
            goto joined_r0x08016ccc;
        }
        sym.writel_relaxed_2(0x10000,*(arg1 + 8) + (1 << (*(arg1 + 0x14) & 0x1f)) + iVar9);
    }
    iVar8 = *(arg1 + 0x54);
joined_r0x08016ccc:
    if (iVar8 != 0) {
        uVar4 = 0;
        iVar8 = 0x800;
        do {
            if ((*(arg1 + 0x28) == NULL) || (pcVar10 = **(arg1 + 0x28), pcVar10 == NULL)) {
                iVar5 = sym.readl_relaxed_2(*(arg1 + 8) + iVar8);
            }
            else {
                if (pcVar10 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar10,0x8001e90);
                }
                iVar5 = (*pcVar10)(arg1,0,iVar8);
            }
            if (iVar5 < 0) {
                iVar9 = uVar4 + uVar4 * 2;
                iVar7 = iVar9 * 2;
                iVar9 = iVar9 * 8;
                *(*(arg1 + 0x60) + iVar7 + 2) = iVar5;
                *(*(arg1 + 0x60) + iVar7) = iVar5 >> 0x10 & 0x7fff;
                *(*(arg1 + 0x60) + iVar7 + 4) = 1;
                *(*(arg1 + 0x68) + iVar9 + 0xc) = 1;
                *(*(arg1 + 0x68) + iVar9 + 0x10) = 0;
                *(*(arg1 + 0x68) + iVar9 + 0x14) = 0xff;
            }
            uVar4 = uVar4 + 1;
            iVar8 = iVar8 + 4;
        } while (uVar4 < *(arg1 + 0x54));
    }
    return 0;
}


// ===== sym.qcom_smmu_init_context @ 0x08016da8 (size 28) =====

ulong sym.qcom_smmu_init_context(int64_t arg1)

{
    *(arg1 + 0x44) = 1;
    return 0;
}


// ===== sym.qcom_smmu_write_s2cr @ 0x08016dc4 (size 268) =====

void sym.qcom_smmu_write_s2cr(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg2;
    iVar6 = *(arg1 + 0x68) + iVar2 * 0x18;
    uVar3 = *(iVar6 + 0x14);
    uVar5 = *(iVar6 + 0xc);
    if (*(arg1 + 0x130) != '\0') {
        if (uVar5 == 2) {
            uVar3 = 0xff;
            uVar5 = 1;
        }
        else if (uVar5 == 1) {
            uVar3 = *(arg1 + 0x131);
            uVar5 = 0;
        }
    }
    iVar1 = iVar2 * 4 + 0xc00;
    uVar5 = uVar3 | (uVar5 & 3) << 0x10 | (*(*(arg1 + 0x68) + iVar2 * 0x18 + 0x10) & 3) << 0x18;
    if ((*(arg1 + 0x28) == 0) || (pcVar4 = *(*(arg1 + 0x28) + 8), pcVar4 == NULL)) {
        sym.writel_relaxed_2(uVar5,*(arg1 + 8) + iVar1);
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFvP15arm_smmu_deviceiijE_global_addr) {
            __cfi_slowpath_diag(0x6809a6077d3a8c69,pcVar4,0x8001eb0);
        }
        (*pcVar4)(arg1,0,iVar1,uVar5);
    }
    return;
}


// ===== sym.arm_smmu_power_on @ 0x08016ed0 (size 652) =====

int sym.arm_smmu_power_on(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x30);
    if (*(arg1 + 0x60) < 1) {
        if ((*(arg1 + 0x28) != 0) && (iVar2 = icc_set_bw(*(arg1 + 0x28),0,1000), iVar2 != 0)) goto code_r0x08016f14;
        uVar1 = *(arg1 + 0x20);
        if (0 < uVar1) {
            uVar7 = 0;
            puVar5 = *(arg1 + 0x18) + -0x10;
            do {
                iVar2 = regulator_enable(puVar5[3]);
                if (iVar2 != 0) {
                    if (uVar7 != 0) {
                        iVar6 = uVar7 + 1;
                        do {
                            regulator_disable(*puVar5);
                            iVar6 = iVar6 + -1;
                            puVar5 = puVar5 + -3;
                        } while (1 < iVar6);
                    }
                    goto code_r0x080170a0;
                }
                uVar7 = uVar7 + 1;
                puVar5 = puVar5 + 3;
            } while (uVar1 != uVar7);
        }
        if (0 < *(arg1 + 0x10)) {
            uVar7 = 0;
            iVar6 = 8;
            do {
                iVar2 = clk_prepare(*(*(arg1 + 8) + uVar7 * 8));
                if (iVar2 != 0) {
                    _dev_err(*arg1,"Couldn\'t prepare clock #%d\n",uVar7 & 0xffffffff);
                    if (uVar7 != 0) {
                        iVar6 = -iVar6;
                        do {
                            clk_unprepare(*(*(arg1 + 8) + iVar6));
                            iVar6 = iVar6 + -8;
                        } while (iVar6 != -8);
                    }
                    goto code_r0x08017068;
                }
                uVar7 = uVar7 + 1;
                iVar6 = iVar6 + -8;
            } while (uVar7 < *(arg1 + 0x10));
            if (0 < *(arg1 + 0x10)) {
                uVar7 = 0;
                iVar6 = 8;
                do {
                    iVar2 = clk_enable(*(*(arg1 + 8) + uVar7 * 8));
                    if (iVar2 != 0) {
                        _dev_err(*arg1,"Couldn\'t enable clock #%d\n",uVar7 & 0xffffffff);
                        if (uVar7 != 0) {
                            iVar6 = -iVar6;
                            do {
                                clk_disable(*(*(arg1 + 8) + iVar6));
                                iVar6 = iVar6 + -8;
                            } while (iVar6 != -8);
                        }
                        goto code_r0x08017044;
                    }
                    uVar7 = uVar7 + 1;
                    iVar6 = iVar6 + -8;
                } while (uVar7 < *(arg1 + 0x10));
            }
        }
        pcVar4 = *(arg1 + 0x68);
        if (pcVar4 != NULL) {
            if (pcVar4 != sym.__typeid__ZTSFiP24arm_smmu_power_resourcesE_global_addr) {
                __cfi_slowpath_diag(0x3a3ba0831f9e2cb2,pcVar4,0x8001fd0);
            }
            iVar2 = (*pcVar4)(arg1);
            if (iVar2 != 0) {
                if (*(arg1 + 0x10) != 0) {
                    iVar3 = *(arg1 + 0x10) + -1;
                    do {
                        clk_disable(*(*(arg1 + 8) + iVar3 * 8));
                        iVar3 = iVar3 + -1;
                    } while (iVar3 != -1);
code_r0x08017044:
                    if (*(arg1 + 0x10) != 0) {
                        iVar3 = *(arg1 + 0x10) + -1;
                        do {
                            clk_unprepare(*(*(arg1 + 8) + iVar3 * 8));
                            iVar3 = iVar3 + -1;
                        } while (iVar3 != -1);
                    }
                }
code_r0x08017068:
                regulator_bulk_disable(*(arg1 + 0x20),*(arg1 + 0x18));
code_r0x080170a0:
                if ((*(arg1 + 0x28) != 0) && (iVar3 = icc_set_bw(*(arg1 + 0x28),0,0), iVar3 != 0)) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x80170bc);
                    (*pcVar4)();
                }
                goto code_r0x08016f14;
            }
        }
        iVar3 = 1;
    }
    else {
        iVar3 = *(arg1 + 0x60) + 1;
    }
    iVar2 = 0;
    *(arg1 + 0x60) = iVar3;
code_r0x08016f14:
    mutex_unlock(arg1 + 0x30);
    return iVar2;
}


// ===== sym.arm_smmu_power_off @ 0x0801715c (size 452) =====

void sym.arm_smmu_power_off(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg2 + 0x30);
    iVar1 = *(arg2 + 0x60);
    if (iVar1 == 0) {
        iVar2 = (*arg2)[0xe];
        if (iVar2 == 0) {
            iVar2 = **arg2;
        }
        __warn_printk("%s: Bad power count\n",iVar2);
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80171c4);
        (*pcVar3)();
    }
    if (iVar1 < 2) {
        pcVar3 = *(arg2 + 0x70);
        if (pcVar3 != NULL) {
            if (pcVar3 != sym.__typeid__ZTSFvP24arm_smmu_power_resourcesE_global_addr) {
                __cfi_slowpath_diag(0x7487daee08ce7a03,pcVar3,0x8001ff0);
            }
            (*pcVar3)(arg2);
        }
        if (arg1 != 0) {
            if ((*(arg1 + 0x28) == NULL) || (pcVar3 = **(arg1 + 0x28), pcVar3 == NULL)) {
                sym.readl_relaxed_3(*(arg1 + 8) + 0x20);
            }
            else {
                if (pcVar3 != sym.__typeid__ZTSFjP15arm_smmu_deviceiiE_global_addr) {
                    __cfi_slowpath_diag(0xcf4515141d0eb27,pcVar3,0x8002010);
                }
                (*pcVar3)(arg1,0,0x20);
            }
            DataSynchronizationBarrier(3,1,0);
        }
        if (*(arg2 + 0x10) != 0) {
            iVar1 = *(arg2 + 0x10) + -1;
            do {
                clk_disable(*(*(arg2 + 8) + iVar1 * 8));
                iVar1 = iVar1 + -1;
            } while (iVar1 != -1);
            if (*(arg2 + 0x10) != 0) {
                iVar1 = *(arg2 + 0x10) + -1;
                do {
                    clk_unprepare(*(*(arg2 + 8) + iVar1 * 8));
                    iVar1 = iVar1 + -1;
                } while (iVar1 != -1);
            }
        }
        regulator_bulk_disable(*(arg2 + 0x20),*(arg2 + 0x18));
        if ((*(arg2 + 0x28) != 0) && (iVar1 = icc_set_bw(*(arg2 + 0x28),0,0), iVar1 != 0)) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x80172a0);
            (*pcVar3)();
        }
        *(arg2 + 0x60) = 0;
    }
    else {
        *(arg2 + 0x60) = iVar1 + -1;
    }
    mutex_unlock(arg2 + 0x30);
    return;
}


// ===== sym.arm_smmu_init_power_resources @ 0x08017320 (size 736) =====

int64_t * sym.arm_smmu_init_power_resources(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = devm_kmalloc(arg1,0x78,0xdc0);
    if (piVar3 == NULL) {
        return 0xfffffffffffffff4;
    }
    *piVar3 = arg1;
    __mutex_init(piVar3 + 6,"&pwr->power_lock",obj.arm_smmu_init_power_resources.__key);
    iVar9 = *piVar3;
    uVar1 = of_property_read_string_helper(*(iVar9 + 0x2f0),"clock-names",0,0,0);
    *(piVar3 + 2) = uVar1;
    if (uVar1 < 1) {
        *(piVar3 + 2) = 0;
    }
    else {
        iVar4 = devm_kmalloc(iVar9,uVar1 << 3,0xdc0);
        piVar3[1] = iVar4;
        if (iVar4 == 0) {
            return 0xfffffffffffffff4;
        }
        uVar5 = of_find_property(*(iVar9 + 0x2f0),"clock-names",0);
        iVar4 = of_prop_next_string(uVar5,0);
        if (iVar4 != 0) {
            iVar2 = 0;
            do {
                uVar6 = devm_clk_get(iVar9,iVar4);
                if (0xfffffffffffff000 < uVar6) {
                    _dev_err(iVar9,"Couldn\'t get clock: %s\n",iVar4);
                    if (uVar6 != 0) {
                        return uVar6;
                    }
                    break;
                }
                iVar7 = clk_get_rate(uVar6);
                if (iVar7 == 0) {
                    uVar8 = clk_round_rate(uVar6,1000);
                    clk_set_rate(uVar6,uVar8);
                }
                *(piVar3[1] + iVar2 * 8) = uVar6;
                iVar2 = iVar2 + 1;
                iVar4 = of_prop_next_string(uVar5,iVar4);
            } while (iVar4 != 0);
        }
    }
    iVar9 = *piVar3;
    uVar1 = of_property_read_string_helper(*(iVar9 + 0x2f0),"qcom,regulator-names",0,0,0);
    *(piVar3 + 4) = uVar1;
    if (uVar1 < 1) {
        *(piVar3 + 4) = 0;
    }
    else {
        iVar4 = devm_kmalloc(iVar9,uVar1 * 0x18,0xdc0);
        piVar3[3] = iVar4;
        if (iVar4 == 0) {
            return 0xfffffffffffffff4;
        }
        uVar5 = of_find_property(*(iVar9 + 0x2f0),"qcom,regulator-names",0);
        iVar4 = of_prop_next_string(uVar5,0);
        if (iVar4 != 0) {
            iVar2 = 0;
            do {
                iVar7 = iVar2;
                iVar2 = iVar2 + 1;
                *(piVar3[3] + iVar7 * 0x18) = iVar4;
                iVar4 = of_prop_next_string(uVar5);
            } while (iVar4 != 0);
        }
        iVar2 = devm_regulator_bulk_get(iVar9,piVar3[4],piVar3[3]);
        if (iVar2 != 0) {
            return iVar2;
        }
    }
    iVar4 = *piVar3;
    iVar9 = of_find_property(*(iVar4 + 0x2f0),"interconnects",0);
    if (iVar9 == 0) {
        return piVar3;
    }
    uVar6 = devm_of_icc_get(iVar4,0);
    piVar3[5] = uVar6;
    if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
        iVar9 = of_find_property(*(iVar4 + 0x2f0),"qcom,active-only",0);
        if (iVar9 == 0) {
            return piVar3;
        }
        icc_set_tag(piVar3[5],3);
        return piVar3;
    }
    if (uVar6 == 0xfffffffffffffdfb) {
        iVar9 = -0x205;
    }
    else {
        _dev_err(iVar4,"Unable to read interconnect path from devicetree rc: %ld\n");
        iVar9 = piVar3[5];
        if (iVar9 == 0) {
            iVar2 = -0x16;
            goto code_r0x0801759c;
        }
    }
    iVar2 = iVar9;
    if (iVar2 == 0) {
        return piVar3;
    }
code_r0x0801759c:
    return iVar2;
}


// ===== sym.arm_smmu_debug_qtb_debugchain_load @ 0x08017600 (size 76) =====

int sym.arm_smmu_debug_qtb_debugchain_load(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed_4(arg1 + 8);
    uVar2 = sym.readl_relaxed_4(arg1 + 0x18);
    uVar1 = uVar2 >> 5 & 0x3ffffff;
    if ((uVar2 & 0x1f) != 0) {
        uVar1 = uVar1 + 1;
    }
    return uVar1 + 1;
}


// ===== sym.arm_smmu_debug_qtb_debugchain_dump @ 0x0801764c (size 68) =====

uint32_t sym.arm_smmu_debug_qtb_debugchain_dump(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed_4(arg1 + 0x10);
    iVar2 = sym.readl_relaxed_4(arg1 + 0x14);
    return uVar1 | iVar2 << 0x1f;
}


// ===== sym.arm_smmu_debug_dump_debugchain @ 0x08017690 (size 224) =====

void sym.arm_smmu_debug_dump_debugchain(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed_4(arg2 + 8);
    uVar5 = sym.readl_relaxed_4(arg2 + 0x18);
    uVar3 = uVar5 >> 5 & 0x3ffffff;
    bVar2 = (uVar5 & 0x1f) != 0;
    if (bVar2) {
        uVar3 = uVar3 + 1;
    }
    uVar5 = uVar5 >> 5 & 0x3ffffff;
    if (bVar2) {
        uVar5 = uVar5 + 1;
    }
    _dev_info(arg1,"Dumping Debug chain: Length : %d\n",uVar3 + 1);
    sym.readl_relaxed_4(arg2 + 0x10);
    sym.readl_relaxed_4(arg2 + 0x14);
    iVar6 = 0;
    do {
        uVar3 = sym.readl_relaxed_4(arg2 + 0x10);
        iVar4 = sym.readl_relaxed_4(arg2 + 0x14);
        iVar1 = iVar6 + 1;
        _dev_info(arg1,"Debug chain: Index :%ld, val : 0x%lx\n",iVar6,uVar3 | iVar4 << 0x1f);
        iVar6 = iVar1;
    } while (uVar5 + 2 != iVar1);
    return;
}


// ===== sym.arm_smmu_debug_dump_qtb_regs @ 0x08017770 (size 100) =====

void sym.arm_smmu_debug_dump_qtb_regs(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed_4(arg2 + 0xc00);
    uVar2 = sym.readl_relaxed_4(arg2 + 0xc08);
    _dev_info(arg1,"QSMSTATUS: 0x%lx IDLESTATUS: 0x%lx\n",uVar1,uVar2);
    return;
}


// ===== sym.arm_smmu_debug_tbu_testbus_select @ 0x080177d4 (size 72) =====

ulong sym.arm_smmu_debug_tbu_testbus_select(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    uint64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        uVar1 = sym.readl_relaxed_4(arg1 + 0x50);
    }
    else {
        sym.writel_relaxed_3(arg2 & 0xffffffff,arg1 + 0x50);
        DataSynchronizationBarrier(3,2,0);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.arm_smmu_debug_tbu_testbus_output @ 0x0801781c (size 40) =====

void sym.arm_smmu_debug_tbu_testbus_output(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed_4(arg1 + 0x58);
    return;
}


// ===== sym.arm_smmu_debug_tcu_testbus_select @ 0x08017844 (size 288) =====

void sym.arm_smmu_debug_tcu_testbus_select(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t in_x3;
    uint32_t in_w4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x19;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint64_t uStack_40;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    uVar11 = arg3;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    uStack_2c = 0;
    if (arg3 == 1) {
        if ((in_x3 & 1) == 0) {
            uVar7 = sym.readl_relaxed_4(arg2 + 0x28);
        }
        else {
            sym.writel_relaxed_3(in_w4,arg2 + 8);
            DataSynchronizationBarrier(3,2,0);
            uVar7 = 0;
        }
    }
    else if ((in_x3 & 1) == 0) {
        uVar4 = qcom_scm_io_readl(arg1 + 0x25e4,&uStack_2c);
        if (uVar4 == 0) {
            uVar7 = uStack_2c;
        }
        else {
            unaff_x19 = uVar4;
            uVar7 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_select._rs.4,"arm_smmu_debug_tcu_testbus_select");
            if (uVar7 != 0) {
                _printk(0x8003291,unaff_x19);
                uVar7 = 0;
            }
        }
    }
    else {
        uVar4 = qcom_scm_io_writel(arg1 + 0x25e4,in_w4);
        if (uVar4 != 0) {
            unaff_x19 = uVar4;
            iVar1 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_select._rs,"arm_smmu_debug_tcu_testbus_select");
            if (iVar1 != 0) {
                _printk(0x8003291,unaff_x19);
            }
        }
        DataSynchronizationBarrier(3,2,0);
        uVar7 = 0;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return;
    }
    iVar8 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.arm_smmu_debug_tcu_testbus_output;
    pcStack_48 = sym.arm_smmu_debug_tcu_testbus_output;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uStack_40 = unaff_x19;
    iVar1 = qcom_scm_io_readl(iVar8 + 0x25e8,&uStack_5c);
    if (iVar1 == 0) {
        uVar7 = uStack_5c;
    }
    else {
        uVar7 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_output._rs,"arm_smmu_debug_tcu_testbus_output");
        if (uVar7 != 0) {
            _printk(0x800393a,iVar1);
            uVar7 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return;
    }
    auVar12 = __stack_chk_fail(uVar7);
    iVar10 = auVar12._8_8_;
    uVar9 = auVar12._0_8_;
    *extraout_x18_00 = sym.arm_smmu_debug_dump_tbu_testbus;
    uVar4 = uVar11;
    if ((uVar11 & 1) != 0) {
        _dev_info(uVar9,"Dumping TBU clk gate controller:\n");
        iVar8 = iVar10 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar8);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0x40,iVar8);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar8);
        uVar6 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    if ((uVar4 >> 1 & 1) != 0) {
        _dev_info(uVar9,"Dumping TBU qns4 a2q test bus:\n");
        iVar8 = iVar10 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar8);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0x80,iVar8);
        uVar3 = 0;
        DataSynchronizationBarrier(3,2,0);
        do {
            uVar2 = sym.readl_relaxed_4(iVar8);
            sym.writel_relaxed_3(uVar2 & 0xffffffe0 | uVar3,iVar8);
            DataSynchronizationBarrier(3,2,0);
            uVar5 = sym.readl_relaxed_4(iVar8);
            uVar6 = sym.readl_relaxed_4(iVar10 + 0x58);
            _dev_info(uVar9,"testbus_sel: 0x%lx Index: %d val: 0x%llx\n",uVar5,uVar3,uVar6);
            uVar3 = uVar3 + 1;
        } while (uVar3 != 0x20);
    }
    if ((uVar4 >> 2 & 1) != 0) {
        _dev_info(uVar9,"Dumping qns4 q2a test bus:\n");
        iVar8 = iVar10 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar8);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0xa0,iVar8);
        uVar3 = 0;
        DataSynchronizationBarrier(3,2,0);
        do {
            uVar2 = sym.readl_relaxed_4(iVar8);
            sym.writel_relaxed_3(uVar2 & 0xffffffe0 | uVar3,iVar8);
            DataSynchronizationBarrier(3,2,0);
            uVar5 = sym.readl_relaxed_4(iVar8);
            uVar6 = sym.readl_relaxed_4(iVar10 + 0x58);
            _dev_info(uVar9,"testbus_sel: 0x%lx Index: %d val: 0x%llx\n",uVar5,uVar3,uVar6);
            uVar3 = uVar3 + 1;
        } while (uVar3 != 0x20);
    }
    if ((uVar4 >> 3 & 1) != 0) {
        _dev_info(uVar9,"Dumping multi master qchannel:\n");
        iVar8 = iVar10 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar8);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0xc0,iVar8);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar8);
        uVar6 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    if ((uVar4 >> 4 & 1) != 0) {
        _dev_info(uVar9,"Dumping tbu clk gate controller ext:\n");
        iVar8 = iVar10 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar8);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0x100,iVar8);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar8);
        uVar6 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    if ((uVar4 >> 5 & 1) != 0) {
        _dev_info(uVar9,"Dumping tbu low power status:\n");
        iVar8 = iVar10 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar8);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0x140,iVar8);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar8);
        uVar6 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    if ((uVar4 >> 6 & 1) != 0) {
        _dev_info(uVar9,"Dumping tbu qns4 vld rdy:\n");
        iVar8 = iVar10 + 0x50;
        uVar4 = sym.readl_relaxed_4(iVar8);
        sym.writel_relaxed_3(uVar4 & 0xfffffe00 | 0x180,iVar8);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar8);
        uVar6 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    return;
}


// ===== sym.arm_smmu_debug_tcu_testbus_output @ 0x08017964 (size 164) =====

void sym.arm_smmu_debug_tcu_testbus_output(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    uint64_t in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    uStack_2c = 0;
    iVar2 = qcom_scm_io_readl(arg1 + 0x25e8,&uStack_2c);
    if (iVar2 == 0) {
        uVar8 = uStack_2c;
    }
    else {
        uVar8 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_output._rs,"arm_smmu_debug_tcu_testbus_output");
        if (uVar8 != 0) {
            _printk(0x800393a,iVar2);
            uVar8 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return;
    }
    auVar11 = __stack_chk_fail(uVar8);
    iVar10 = auVar11._8_8_;
    uVar9 = auVar11._0_8_;
    *extraout_x18 = sym.arm_smmu_debug_dump_tbu_testbus;
    uVar5 = in_x2;
    if ((in_x2 & 1) != 0) {
        _dev_info(uVar9,"Dumping TBU clk gate controller:\n");
        iVar1 = iVar10 + 0x50;
        uVar4 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar4 & 0xfffffe00 | 0x40,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar6 = sym.readl_relaxed_4(iVar1);
        uVar7 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar6,uVar7);
    }
    if ((uVar5 >> 1 & 1) != 0) {
        _dev_info(uVar9,"Dumping TBU qns4 a2q test bus:\n");
        iVar1 = iVar10 + 0x50;
        uVar4 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar4 & 0xfffffe00 | 0x80,iVar1);
        uVar4 = 0;
        DataSynchronizationBarrier(3,2,0);
        do {
            uVar3 = sym.readl_relaxed_4(iVar1);
            sym.writel_relaxed_3(uVar3 & 0xffffffe0 | uVar4,iVar1);
            DataSynchronizationBarrier(3,2,0);
            uVar6 = sym.readl_relaxed_4(iVar1);
            uVar7 = sym.readl_relaxed_4(iVar10 + 0x58);
            _dev_info(uVar9,"testbus_sel: 0x%lx Index: %d val: 0x%llx\n",uVar6,uVar4,uVar7);
            uVar4 = uVar4 + 1;
        } while (uVar4 != 0x20);
    }
    if ((uVar5 >> 2 & 1) != 0) {
        _dev_info(uVar9,"Dumping qns4 q2a test bus:\n");
        iVar1 = iVar10 + 0x50;
        uVar4 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar4 & 0xfffffe00 | 0xa0,iVar1);
        uVar4 = 0;
        DataSynchronizationBarrier(3,2,0);
        do {
            uVar3 = sym.readl_relaxed_4(iVar1);
            sym.writel_relaxed_3(uVar3 & 0xffffffe0 | uVar4,iVar1);
            DataSynchronizationBarrier(3,2,0);
            uVar6 = sym.readl_relaxed_4(iVar1);
            uVar7 = sym.readl_relaxed_4(iVar10 + 0x58);
            _dev_info(uVar9,"testbus_sel: 0x%lx Index: %d val: 0x%llx\n",uVar6,uVar4,uVar7);
            uVar4 = uVar4 + 1;
        } while (uVar4 != 0x20);
    }
    if ((uVar5 >> 3 & 1) != 0) {
        _dev_info(uVar9,"Dumping multi master qchannel:\n");
        iVar1 = iVar10 + 0x50;
        uVar4 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar4 & 0xfffffe00 | 0xc0,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar6 = sym.readl_relaxed_4(iVar1);
        uVar7 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar6,uVar7);
    }
    if ((uVar5 >> 4 & 1) != 0) {
        _dev_info(uVar9,"Dumping tbu clk gate controller ext:\n");
        iVar1 = iVar10 + 0x50;
        uVar4 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar4 & 0xfffffe00 | 0x100,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar6 = sym.readl_relaxed_4(iVar1);
        uVar7 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar6,uVar7);
    }
    if ((uVar5 >> 5 & 1) != 0) {
        _dev_info(uVar9,"Dumping tbu low power status:\n");
        iVar1 = iVar10 + 0x50;
        uVar4 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar4 & 0xfffffe00 | 0x140,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar6 = sym.readl_relaxed_4(iVar1);
        uVar7 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar6,uVar7);
    }
    if ((uVar5 >> 6 & 1) != 0) {
        _dev_info(uVar9,"Dumping tbu qns4 vld rdy:\n");
        iVar1 = iVar10 + 0x50;
        uVar5 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar5 & 0xfffffe00 | 0x180,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar6 = sym.readl_relaxed_4(iVar1);
        uVar7 = sym.readl_relaxed_4(iVar10 + 0x58);
        _dev_info(uVar9,"testbus_sel: 0x%lx val: 0x%llx\n",uVar6,uVar7);
    }
    return;
}


// ===== sym.arm_smmu_debug_dump_tbu_testbus @ 0x08017a08 (size 896) =====

void sym.arm_smmu_debug_dump_tbu_testbus(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg3;
    if ((arg3 & 1U) != 0) {
        _dev_info(arg1,"Dumping TBU clk gate controller:\n");
        iVar1 = arg2 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0x40,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar1);
        uVar6 = sym.readl_relaxed_4(arg2 + 0x58);
        _dev_info(arg1,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    if ((uVar4 >> 1 & 1) != 0) {
        _dev_info(arg1,"Dumping TBU qns4 a2q test bus:\n");
        iVar1 = arg2 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0x80,iVar1);
        uVar3 = 0;
        DataSynchronizationBarrier(3,2,0);
        do {
            uVar2 = sym.readl_relaxed_4(iVar1);
            sym.writel_relaxed_3(uVar2 & 0xffffffe0 | uVar3,iVar1);
            DataSynchronizationBarrier(3,2,0);
            uVar5 = sym.readl_relaxed_4(iVar1);
            uVar6 = sym.readl_relaxed_4(arg2 + 0x58);
            _dev_info(arg1,"testbus_sel: 0x%lx Index: %d val: 0x%llx\n",uVar5,uVar3,uVar6);
            uVar3 = uVar3 + 1;
        } while (uVar3 != 0x20);
    }
    if ((uVar4 >> 2 & 1) != 0) {
        _dev_info(arg1,"Dumping qns4 q2a test bus:\n");
        iVar1 = arg2 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0xa0,iVar1);
        uVar3 = 0;
        DataSynchronizationBarrier(3,2,0);
        do {
            uVar2 = sym.readl_relaxed_4(iVar1);
            sym.writel_relaxed_3(uVar2 & 0xffffffe0 | uVar3,iVar1);
            DataSynchronizationBarrier(3,2,0);
            uVar5 = sym.readl_relaxed_4(iVar1);
            uVar6 = sym.readl_relaxed_4(arg2 + 0x58);
            _dev_info(arg1,"testbus_sel: 0x%lx Index: %d val: 0x%llx\n",uVar5,uVar3,uVar6);
            uVar3 = uVar3 + 1;
        } while (uVar3 != 0x20);
    }
    if ((uVar4 >> 3 & 1) != 0) {
        _dev_info(arg1,"Dumping multi master qchannel:\n");
        iVar1 = arg2 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0xc0,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar1);
        uVar6 = sym.readl_relaxed_4(arg2 + 0x58);
        _dev_info(arg1,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    if ((uVar4 >> 4 & 1) != 0) {
        _dev_info(arg1,"Dumping tbu clk gate controller ext:\n");
        iVar1 = arg2 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0x100,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar1);
        uVar6 = sym.readl_relaxed_4(arg2 + 0x58);
        _dev_info(arg1,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    if ((uVar4 >> 5 & 1) != 0) {
        _dev_info(arg1,"Dumping tbu low power status:\n");
        iVar1 = arg2 + 0x50;
        uVar3 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar3 & 0xfffffe00 | 0x140,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar1);
        uVar6 = sym.readl_relaxed_4(arg2 + 0x58);
        _dev_info(arg1,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    if ((uVar4 >> 6 & 1) != 0) {
        _dev_info(arg1,"Dumping tbu qns4 vld rdy:\n");
        iVar1 = arg2 + 0x50;
        uVar4 = sym.readl_relaxed_4(iVar1);
        sym.writel_relaxed_3(uVar4 & 0xfffffe00 | 0x180,iVar1);
        DataSynchronizationBarrier(3,2,0);
        uVar5 = sym.readl_relaxed_4(iVar1);
        uVar6 = sym.readl_relaxed_4(arg2 + 0x58);
        _dev_info(arg1,"testbus_sel: 0x%lx val: 0x%llx\n",uVar5,uVar6);
    }
    return;
}


// ===== sym.arm_smmu_debug_dump_tcu_testbus @ 0x08017d88 (size 732) =====

void sym.arm_smmu_debug_dump_tcu_testbus(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t in_w4;
    uint32_t uVar8;
    uint32_t in_w5;
    uint64_t in_x6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x22;
    int64_t unaff_x23;
    uint64_t unaff_x24;
    char *unaff_x25;
    uint64_t unaff_x26;
    uint64_t unaff_x27;
    char *unaff_x28;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint32_t uStack_ec;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    char *pcStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    char *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_78 = arg3;
    uVar7 = arg4;
    if ((arg4 & 1U) != 0) {
        _dev_info(arg1,"Dumping TCU cache testbus:\n");
        sym.arm_smmu_debug_program_tcu_testbus(arg1,arg2,-0x101,0);
        uVar7 = 0;
        in_w4 = 0x20;
        in_w5 = 2;
        in_x6 = 1;
        sym.arm_smmu_debug_program_tcu_testbus(arg1,arg2,-0x100,0);
    }
    uStack_80 = arg4 & 0xffffffff;
    if ((arg4 >> 1 & 1) != 0) {
        _dev_info(arg1,"Dumping TCU PTW test bus:\n");
        sym.arm_smmu_debug_program_tcu_testbus(arg1,arg2,1,0x100);
        sym.arm_smmu_debug_program_tcu_testbus(arg1,arg2,-0xfd,0);
        unaff_x22 = arg2 + 0x25e4;
        unaff_x23 = arg2 + 0x25e8;
        unaff_x24 = 0x20;
        unaff_x25 = "testbus_sel: 0x%lx Index: %d val: 0x%lx\n";
        unaff_x28 = "arm_smmu_debug_tcu_testbus_select";
        do {
            uVar7 = unaff_x24;
            uVar3 = uVar7 + 1;
            unaff_x24 = uVar3;
            sym.arm_smmu_debug_program_tcu_testbus(arg1,arg2,-0x100,uVar7);
            in_w5 = 0;
            in_x6 = 0;
            sym.arm_smmu_debug_program_tcu_testbus(arg1,arg2,-4,3);
            uStack_6c = 0;
            iVar5 = qcom_scm_io_readl(unaff_x22,&uStack_6c);
            if (iVar5 != 0) {
                ___ratelimit(obj.arm_smmu_debug_tcu_testbus_select._rs.4,"arm_smmu_debug_tcu_testbus_select");
                return;
            }
            unaff_x26 = uStack_6c;
            uStack_6c = 0;
            uVar4 = qcom_scm_io_readl(unaff_x23,&uStack_6c);
            in_w4 = uStack_6c;
            if (uVar4 != 0) {
                unaff_x27 = uVar4;
                iVar5 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_output._rs,"arm_smmu_debug_tcu_testbus_output");
                if (iVar5 != 0) {
                    _printk(0x800393a,unaff_x27);
                }
                in_w4 = 0;
            }
            _dev_info(arg1,"testbus_sel: 0x%lx Index: %d val: 0x%lx\n",unaff_x26);
        } while (uVar3 != 0x40);
    }
    if ((uStack_80 >> 2 & 1) != 0) {
        _dev_info(arg1,"Dumping TCU CD testbus:\n");
        sym.arm_smmu_debug_program_tcu_testbus(arg1,arg2,0x100,0);
        uVar7 = 1;
        in_w4 = 2;
        in_w5 = 3;
        in_x6 = 1;
        sym.arm_smmu_debug_program_tcu_testbus(arg1,arg2,-0x100,1);
    }
    iVar2 = iStack_78;
    sym.writel_relaxed_3(0x300,iStack_78 + 8);
    DataSynchronizationBarrier(3,2,0);
    uVar3 = sym.readl_relaxed_4(iVar2 + 0x28);
    _dev_info(arg1,"Programming Tcu clk gate controller: testbus_sel: 0x%lx\n",uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        auVar9 = __stack_chk_fail();
        *extraout_x18 = sym.arm_smmu_debug_program_tcu_testbus;
        pcStack_d8 = sym.arm_smmu_debug_program_tcu_testbus;
        iStack_90 = iVar2;
        iVar1 = sp_el0;
        iStack_e8 = *(iVar1 + 0x5e0);
        puStack_e0 = &stack0xffffffffffffffa0;
        pcStack_d0 = unaff_x28;
        uStack_c8 = unaff_x27;
        uStack_c0 = unaff_x26;
        pcStack_b8 = unaff_x25;
        uStack_b0 = unaff_x24;
        iStack_a8 = unaff_x23;
        iStack_a0 = unaff_x22;
        iStack_98 = arg2;
        iStack_88 = arg1;
        if (uVar7 < in_w4) {
            iVar1 = auVar9._8_8_ + 0x25e4;
            do {
                uStack_ec = 0;
                iVar5 = qcom_scm_io_readl(iVar1,&uStack_ec);
                uVar4 = uStack_ec;
                if (iVar5 != 0) {
                    iVar6 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_select._rs.4,
                                         "arm_smmu_debug_tcu_testbus_select");
                    if (iVar6 == 0) {
                        uVar4 = 0;
                    }
                    else {
                        _printk(0x8003291,iVar5);
                        uVar4 = 0;
                    }
                }
                iVar5 = qcom_scm_io_writel(iVar1,uVar4 & uVar3 | uVar7 << (in_w5 & 0x1f));
                if (iVar5 != 0) {
                    iVar6 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_select._rs,"arm_smmu_debug_tcu_testbus_select")
                    ;
                    if (iVar6 != 0) {
                        _printk(0x8003291,iVar5);
                    }
                }
                DataSynchronizationBarrier(3,2,0);
                if ((in_x6 & 1) != 0) {
                    uStack_ec = 0;
                    iVar5 = qcom_scm_io_readl(iVar1,&uStack_ec);
                    uVar4 = uStack_ec;
                    if (iVar5 != 0) {
                        iVar6 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_select._rs.4,
                                             "arm_smmu_debug_tcu_testbus_select");
                        if (iVar6 != 0) {
                            _printk(0x8003291,iVar5);
                        }
                        uVar4 = 0;
                    }
                    uStack_ec = 0;
                    iVar5 = qcom_scm_io_readl(auVar9._8_8_ + 0x25e8,&uStack_ec);
                    uVar8 = uStack_ec;
                    if (iVar5 != 0) {
                        iVar6 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_output._rs,
                                             "arm_smmu_debug_tcu_testbus_output");
                        if (iVar6 != 0) {
                            _printk(0x800393a,iVar5);
                        }
                        uVar8 = 0;
                    }
                    _dev_info(auVar9._0_8_,"testbus_sel: 0x%lx Index: %d val: 0x%lx\n",uVar4,uVar7,uVar8);
                }
                uVar7 = uVar7 + 1;
            } while (in_w4 != uVar7);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_e8) {
            auVar9 = __stack_chk_fail();
            *extraout_x18_00 = sym.arm_smmu_debug_set_tnx_tcr_cntl;
            iVar1 = auVar9._0_8_ + 0x130;
            uVar7 = sym.readq_relaxed.llvm.17919609518637048961(iVar1);
            if ((uVar7 >> 0x12 & 1) == 0) {
                sym.writeq_relaxed.llvm.17919609518637048961(auVar9._8_8_,iVar1);
            }
            else {
                iVar5 = ___ratelimit(obj.arm_smmu_debug_set_tnx_tcr_cntl._rs,"arm_smmu_debug_set_tnx_tcr_cntl");
                if (iVar5 != 0) {
                    _printk(0x800293e);
                }
            }
            return;
        }
        return;
    }
    return;
}


// ===== sym.arm_smmu_debug_program_tcu_testbus @ 0x08018064 (size 536) =====

void sym.arm_smmu_debug_program_tcu_testbus(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t in_w4;
    uint32_t uVar5;
    uint32_t in_w5;
    uint32_t in_w6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    if (arg4 < in_w4) {
        iVar1 = arg2 + 0x25e4;
        do {
            uStack_6c = 0;
            iVar2 = qcom_scm_io_readl(iVar1,&uStack_6c);
            uVar4 = uStack_6c;
            if (iVar2 != 0) {
                iVar3 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_select._rs.4,"arm_smmu_debug_tcu_testbus_select");
                if (iVar3 == 0) {
                    uVar4 = 0;
                }
                else {
                    _printk(0x8003291,iVar2);
                    uVar4 = 0;
                }
            }
            iVar2 = qcom_scm_io_writel(iVar1,uVar4 & arg3 | arg4 << (in_w5 & 0x1f));
            if (iVar2 != 0) {
                iVar3 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_select._rs,"arm_smmu_debug_tcu_testbus_select");
                if (iVar3 != 0) {
                    _printk(0x8003291,iVar2);
                }
            }
            DataSynchronizationBarrier(3,2,0);
            if ((in_w6 & 1) != 0) {
                uStack_6c = 0;
                iVar2 = qcom_scm_io_readl(iVar1,&uStack_6c);
                uVar4 = uStack_6c;
                if (iVar2 != 0) {
                    iVar3 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_select._rs.4,
                                         "arm_smmu_debug_tcu_testbus_select");
                    if (iVar3 != 0) {
                        _printk(0x8003291,iVar2);
                    }
                    uVar4 = 0;
                }
                uStack_6c = 0;
                iVar2 = qcom_scm_io_readl(arg2 + 0x25e8,&uStack_6c);
                uVar5 = uStack_6c;
                if (iVar2 != 0) {
                    iVar3 = ___ratelimit(obj.arm_smmu_debug_tcu_testbus_output._rs,"arm_smmu_debug_tcu_testbus_output")
                    ;
                    if (iVar3 != 0) {
                        _printk(0x800393a,iVar2);
                    }
                    uVar5 = 0;
                }
                _dev_info(arg1,"testbus_sel: 0x%lx Index: %d val: 0x%lx\n",uVar4,arg4,uVar5);
            }
            arg4 = arg4 + 1;
        } while (in_w4 != arg4);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        auVar6 = __stack_chk_fail();
        *extraout_x18 = sym.arm_smmu_debug_set_tnx_tcr_cntl;
        iVar1 = auVar6._0_8_ + 0x130;
        uVar4 = sym.readq_relaxed.llvm.17919609518637048961(iVar1);
        if ((uVar4 >> 0x12 & 1) == 0) {
            sym.writeq_relaxed.llvm.17919609518637048961(auVar6._8_8_,iVar1);
        }
        else {
            iVar2 = ___ratelimit(obj.arm_smmu_debug_set_tnx_tcr_cntl._rs,"arm_smmu_debug_set_tnx_tcr_cntl");
            if (iVar2 != 0) {
                _printk(0x800293e);
            }
        }
        return;
    }
    return;
}


// ===== sym.arm_smmu_debug_set_tnx_tcr_cntl @ 0x0801827c (size 116) =====

void sym.arm_smmu_debug_set_tnx_tcr_cntl(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x130);
    if ((uVar1 >> 0x12 & 1) == 0) {
        sym.writeq_relaxed.llvm.17919609518637048961(arg2,arg1 + 0x130);
    }
    else {
        iVar2 = ___ratelimit(obj.arm_smmu_debug_set_tnx_tcr_cntl._rs,"arm_smmu_debug_set_tnx_tcr_cntl");
        if (iVar2 != 0) {
            _printk(0x800293e);
        }
    }
    return;
}


// ===== sym.readq_relaxed.llvm.17919609518637048961 @ 0x080182f0 (size 108) =====

ulong sym.readq_relaxed.llvm.17919609518637048961(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x80182f4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x40,arg1,0x8018328);
    return uVar1;
}


// ===== sym.writeq_relaxed.llvm.17919609518637048961 @ 0x08018360 (size 108) =====

void sym.writeq_relaxed.llvm.17919609518637048961(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1,0x40,arg2,0x8018364);
    *arg2 = arg1;
    log_post_write_mmio(arg1,0x40,arg2,0x801839c);
    return;
}


// ===== sym.arm_smmu_debug_get_tnx_tcr_cntl @ 0x080183cc (size 40) =====

void sym.arm_smmu_debug_get_tnx_tcr_cntl(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x130);
    return;
}


// ===== sym.arm_smmu_debug_set_mask_and_match @ 0x080183f4 (size 72) =====

void sym.arm_smmu_debug_set_mask_and_match(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = arg1 + arg2 * 8;
    sym.writeq_relaxed.llvm.17919609518637048961(arg3,arg1 + 0xf8);
    sym.writeq_relaxed.llvm.17919609518637048961(arg4,arg1 + 0x110);
    return;
}


// ===== sym.arm_smmu_debug_get_mask_and_match @ 0x0801843c (size 152) =====

void sym.arm_smmu_debug_get_mask_and_match(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x100);
    *arg2 = uVar1;
    uVar1 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x118);
    *arg3 = uVar1;
    uVar1 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x108);
    *(arg2 + 8) = uVar1;
    uVar1 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x120);
    *(arg3 + 8) = uVar1;
    uVar1 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x110);
    *(arg2 + 0x10) = uVar1;
    uVar1 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x128);
    *(arg3 + 0x10) = uVar1;
    return;
}


// ===== sym.arm_smmu_debug_get_capture_snapshot @ 0x080184d4 (size 276) =====

void sym.arm_smmu_debug_get_capture_snapshot(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = 0xdededede;
    uVar1 = sym.readl_relaxed_4(arg1 + 0x178);
    if ((uVar1 & 1) == 0) {
        *arg2 = 0xdededede;
        *(arg2 + 8) = 0xdededede;
    }
    else {
        uVar2 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x138);
        *arg2 = uVar2;
        uVar2 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x140);
        *(arg2 + 8) = uVar2;
    }
    if ((uVar1 >> 1 & 1) == 0) {
        *(arg2 + 0x10) = 0xdededede;
        *(arg2 + 0x18) = 0xdededede;
    }
    else {
        uVar2 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x148);
        *(arg2 + 0x10) = uVar2;
        uVar2 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x150);
        *(arg2 + 0x18) = uVar2;
    }
    if ((uVar1 >> 2 & 1) == 0) {
        *(arg2 + 0x20) = 0xdededede;
        *(arg2 + 0x28) = 0xdededede;
    }
    else {
        uVar2 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x158);
        *(arg2 + 0x20) = uVar2;
        uVar2 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x160);
        *(arg2 + 0x28) = uVar2;
    }
    if ((uVar1 >> 3 & 1) == 0) {
        *(arg2 + 0x30) = 0xdededede;
    }
    else {
        uVar3 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x168);
        *(arg2 + 0x30) = uVar3;
        uVar3 = sym.readq_relaxed.llvm.17919609518637048961(arg1 + 0x170);
    }
    *(arg2 + 0x38) = uVar3;
    return;
}


// ===== sym.arm_smmu_debug_clear_intr_and_validbits @ 0x080185e8 (size 44) =====

void sym.arm_smmu_debug_clear_intr_and_validbits(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writeq_relaxed.llvm.17919609518637048961(0x81,arg1 + 0x130);
    return;
}


// ===== sym.init_module @ 0x08018648 (size 176) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ktime_get();
    iVar1 = __platform_driver_register
                      (reloc.qsmmuv500_tbu_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register
                          (reloc.arm_smmu_device_probe.73c668e47250e1a2d5221ed72817c1f7.cfi_jt,obj.__this_module);
        if (iVar1 == 0) {
            ktime_get();
            iVar1 = 0;
        }
        else {
            platform_driver_unregister(reloc.qsmmuv500_tbu_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt);
        }
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x080187a4 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.arm_smmu_device_probe.73c668e47250e1a2d5221ed72817c1f7.cfi_jt);
    platform_driver_unregister(reloc.qsmmuv500_tbu_probe.7007853466dcbff6bdbf70f558e4d2d7.cfi_jt);
    return;
}

