// decompiled from qcom_q6v5_pas by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08005000 (size 452) =====

//WARNING: Switch with 1 destination removed at 0x0800791c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x3557318fb8d07b71) {
        if (arg1 < -0x433102b91fe690ab) {
            if (arg1 == -0x66d421a09845f9f8) {
                pcVar2 = sym.txn_id_show.7fdbc449ae15d618c663cd08c198be89.cfi_jt;
            }
            else {
                if (arg1 != -0x5e8b297c5f6c70cf) goto code_r0x080078dc;
                pcVar2 = sym.qcom_pas_handover.7fdbc449ae15d618c663cd08c198be89.cfi_jt;
            }
        }
        else if (arg1 == -0x433102b91fe690ab) {
            pcVar2 = sym.adsp_load.7fdbc449ae15d618c663cd08c198be89.cfi_jt;
        }
        else {
            if (arg1 != -0x37028b291bb16e65) goto code_r0x080078dc;
            pcVar2 = sym.adsp_da_to_va.7fdbc449ae15d618c663cd08c198be89.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x3557318fb8d07b71) {
                if ((pcVar1 + -0x80051f0 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
            }
            else if ((arg1 == -0x139c6025929df038) && ((pcVar1 + -0x8005200 >> 3 | pcVar1 << 0x3d) < 3)) {
                return;
            }
            goto code_r0x080078dc;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7f25e1751fd2a794) goto code_r0x080078dc;
            pcVar2 = sym.adsp_panic.7fdbc449ae15d618c663cd08c198be89.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080078dc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007930);
    (*pcVar1)();
}


// ===== sym.adsp_panic.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x080051d0 (size 8) =====

void sym.adsp_panic.7fdbc449ae15d618c663cd08c198be89.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_q6v5_panic(*(param_1 + 0x28) + 0x18);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080051d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080051e0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_pas_handover.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x080051e8 (size 8) =====

void sym.qcom_pas_handover.7fdbc449ae15d618c663cd08c198be89.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0xf0) - 1;
    if (-1 < uVar1) {
        iVar3 = uVar1 << 4;
        do {
            regulator_set_voltage(*(*(param_1 + 0xe8) + iVar3),0,0x7fffffff);
            regulator_set_load(*(*(param_1 + 0xe8) + iVar3),0);
            regulator_disable(*(*(param_1 + 0xe8) + iVar3));
            iVar3 = iVar3 + -0x10;
        } while (iVar3 != -0x10);
    }
    uVar4 = *(param_1 + 0xd0);
    clk_disable(uVar4);
    clk_unprepare(uVar4);
    uVar4 = *(param_1 + 200);
    clk_disable(uVar4);
    clk_unprepare(uVar4);
    iVar2 = *(param_1 + 300);
    if (iVar2 != 0) {
        uVar5 = 0;
        do {
            dev_pm_genpd_set_performance_state(*(param_1 + 0x100 + uVar5 * 8),0);
            __pm_runtime_idle(*(param_1 + 0x100 + uVar5 * 8),5);
            uVar5 = uVar5 + 1;
        } while (uVar5 < iVar2);
    }
    if (*(param_1 + 0x168) < 0xfffffffffffff001) {
        iVar2 = icc_set_bw(*(param_1 + 0x168),0,0);
        if (iVar2 != 0) {
            _dev_err(*(param_1 + -0x18),"bandwidth request failed(rc:%d)\n",iVar2);
        }
    }
    else {
        _dev_err(*(param_1 + -0x18),"Bus scaling not setup for %s\n",*(*(param_1 + -8) + 0x18));
    }
    return;
}


// ===== sym.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x080051f0 (size 8) =====

uint64_t sym.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt(ulong *param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar11;
    int64_t *arg1;
    uint uVar12;
    ulong unaff_x30;
    ulong uStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
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
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    puVar11 = param_1 + 2;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_f0 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    puVar4 = of_device_get_match_data(puVar11);
    if (puVar4 == NULL) {
        uVar5 = 0xffffffea;
        goto code_r0x08005570;
    }
    uVar5 = qcom_scm_is_available();
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xfffffdfb;
        goto code_r0x08005570;
    }
    uStack_f0 = *(puVar4 + 2);
    uVar6 = of_property_read_string(param_1[0x60],"firmware-name",&uStack_f0);
    if ((uVar6 < 0) && (uVar5 = uVar6 & 0xffffffff, uVar6 != -0x16)) goto code_r0x08005570;
    if ((*(puVar4 + 0xb) != '\0') &&
       ((((obj.mpss_dsm_mem_setup & 1) == 0 && (iVar2 = strcmp(uStack_f0,"modem.mdt"), iVar2 == 0)) &&
        (iVar2 = sym.setup_mpss_dsm_mem(param_1), iVar2 != 0)))) {
        _dev_err(puVar11,"failed to setup mpss dsm mem\n");
        uVar5 = 0xffffffea;
        goto code_r0x08005570;
    }
    iVar7 = rproc_alloc(puVar11,*param_1,obj.adsp_ops,uStack_f0,0x358);
    if (iVar7 == 0) {
        _dev_err(puVar11,"unable to allocate remoteproc\n");
        uVar5 = 0xfffffff4;
        goto code_r0x08005570;
    }
    uVar12 = 1;
    *(iVar7 + 0x4c4) = 1;
    *(iVar7 + 0x4f1) = *(puVar4 + 0x2a);
    if (*(puVar4 + 10) != '\0') {
        uVar12 = 2;
    }
    rproc_coredump_set_elf_info(iVar7,uVar12,0);
    arg1 = *(iVar7 + 0x28);
    *arg1 = puVar11;
    arg1[2] = iVar7;
    *(arg1 + 0x2f) = puVar4[9];
    *(arg1 + 0x29) = puVar4[6];
    *(arg1 + 0x14c) = puVar4[7];
    arg1[0x2a] = *(puVar4 + 4);
    *(arg1 + 0x18c) = *(puVar4 + 0x29);
    arg1[0x32] = *(puVar4 + 0x12);
    arg1[0x26] = *(puVar4 + 0x14);
    *(arg1 + 0x18d) = *(puVar4 + 0x2b);
    if (*(puVar4 + 8) != '\0') {
        iVar8 = devm_kmalloc(puVar11,0x18,0xdc0);
        *(arg1 + 0x17c) = 1;
        arg1[0x2b] = iVar8;
    }
    param_1[0x15] = arg1;
    uVar6 = device_init_wakeup(*arg1,1);
    uVar5 = uVar6 & 0xffffffff;
    if (uVar6 == 0) {
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        iStack_e8 = 0;
        iStack_e0 = 0;
        iVar8 = of_parse_phandle(*(*arg1 + 0x2f0),"memory-region",0);
        if (iVar8 == 0) {
            iVar8 = *arg1;
            pcVar9 = "no memory-region specified\n";
code_r0x080057cc:
            _dev_err(iVar8,pcVar9);
            uVar5 = 0xffffffea;
        }
        else {
            uVar6 = of_address_to_resource(iVar8,0,&iStack_e8);
            uVar5 = uVar6 & 0xffffffff;
            if (uVar6 == 0) {
                arg1[0x3f] = iStack_e8;
                arg1[0x40] = iStack_e8;
                arg1[0x42] = (iStack_e0 - iStack_e8) + 1;
                iVar8 = devm_ioremap_wc(*arg1);
                arg1[0x41] = iVar8;
                if (iVar8 == 0) {
                    iVar8 = *arg1;
                    iVar10 = arg1[0x42];
code_r0x080057e0:
                    _dev_err(iVar8,"unable to map memory region: %pa+%zx\n",&iStack_e8,iVar10);
                    uVar5 = 0xfffffff0;
                }
                else {
                    if (*(arg1 + 0x14c) != 0) {
                        iVar8 = of_parse_phandle(*(*arg1 + 0x2f0),"memory-region",1);
                        if (iVar8 == 0) {
                            iVar8 = *arg1;
                            pcVar9 = "no dtb memory-region specified\n";
                            goto code_r0x080057cc;
                        }
                        uVar6 = of_address_to_resource(iVar8,0,&iStack_e8);
                        uVar5 = uVar6 & 0xffffffff;
                        if (uVar6 != 0) goto code_r0x0800554c;
                        arg1[0x3b] = iStack_e8;
                        arg1[0x3c] = iStack_e8;
                        arg1[0x3e] = (iStack_e0 - iStack_e8) + 1;
                        iVar8 = devm_ioremap_wc(*arg1);
                        arg1[0x3d] = iVar8;
                        if (iVar8 == 0) {
                            iVar8 = *arg1;
                            iVar10 = arg1[0x3e];
                            goto code_r0x080057e0;
                        }
                    }
                    if (*(arg1 + 0x18d) == '\0') {
code_r0x0800566c:
                        uVar6 = sym.adsp_init_clock(arg1);
                        uVar5 = uVar6 & 0xffffffff;
                        if (uVar6 == 0) {
                            uVar6 = sym.adsp_init_regulator(arg1);
                            uVar5 = uVar6 & 0xffffffff;
                            if (uVar6 == 0) {
                                sym.adsp_init_bus_scaling(arg1);
                                uVar6 = sym.adsp_pds_attach(puVar11,arg1 + 0x22,*(puVar4 + 0xc));
                                uVar5 = uVar6 & 0xffffffff;
                                if (-1 < uVar6) {
                                    *(arg1 + 0x28) = uVar6;
                                    uVar6 = sym.adsp_pds_attach(puVar11,arg1 + 0x23,*(puVar4 + 0xe));
                                    uVar5 = uVar6 & 0xffffffff;
                                    if (-1 < uVar6) {
                                        *(arg1 + 0x144) = uVar6;
                                        iVar8 = of_find_property(param_1[0x60],"qcom,signal-aop",0);
                                        if (iVar8 == 0) {
code_r0x08005704:
                                            uVar6 = qcom_q6v5_init(arg1 + 3,param_1,iVar7,*puVar4,
                                                                   
                                                            sym.qcom_pas_handover.7fdbc449ae15d618c663cd08c198be89.cfi_jt
                                                            );
                                            uVar5 = uVar6 & 0xffffffff;
                                            if (uVar6 == 0) {
                                                qcom_q6v5_register_ssr_subdev(arg1 + 3,arg1 + 0x5a);
                                                if ((arg1[5] != 0) &&
                                                   (iVar2 = sym.readl_relaxed(arg1[5] + 0x10), iVar2 != 0)) {
                                                    *(iVar7 + 0x3cc) = 6;
                                                }
                                                uVar1 = qcom_pil_timeouts_disabled();
                                                reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt = uVar1 & 1;
                                                qcom_add_glink_subdev(iVar7,arg1 + 0x43,*(puVar4 + 0x10));
                                                qcom_add_smd_subdev(iVar7,arg1 + 0x51);
                                                uVar5 = qcom_add_sysmon_subdev(iVar7,*(puVar4 + 0x12),puVar4[0x16]);
                                                arg1[0x69] = uVar5;
                                                if (uVar5 < 0xfffffffffffff001) {
                                                    qcom_add_ssr_subdev(iVar7,arg1 + 0x5a,*(puVar4 + 0x10));
                                                    uVar6 = device_create_file(*arg1,obj.dev_attr_txn_id);
                                                    uVar5 = uVar6 & 0xffffffff;
                                                    if (uVar6 == 0) {
                                                        snprintf(&uStack_88,0x20,"%s-md",*param_1[0x60]);
                                                        iVar8 = qcom_create_ramdump_device(&uStack_88,0);
                                                        arg1[1] = iVar8;
                                                        if (iVar8 == 0) {
                                                            _dev_err(puVar11,"Unable to create %s minidump device.\n",
                                                                     &uStack_88);
                                                        }
                                                        uVar6 = rproc_add(iVar7);
                                                        uVar5 = uVar6 & 0xffffffff;
                                                        if (uVar6 == 0) goto code_r0x08005570;
                                                        if (arg1[1] != 0) {
                                                            qcom_destroy_ramdump_device();
                                                        }
                                                        device_remove_file(*arg1,obj.dev_attr_txn_id);
                                                    }
                                                    qcom_remove_sysmon_subdev(arg1[0x69]);
                                                }
                                            }
                                        }
                                        else {
                                            uVar6 = qmp_get(*arg1);
                                            arg1[0x27] = uVar6;
                                            if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) goto code_r0x08005704;
                                        }
                                        sym.adsp_pds_detach(arg1,arg1 + 0x23,*(arg1 + 0x144));
                                    }
                                    sym.adsp_pds_detach(arg1,arg1 + 0x22,arg1[0x28]);
                                }
                            }
                        }
                    }
                    else {
                        uVar3 = of_reserved_mem_device_init_by_idx(*arg1,*(*arg1 + 0x2f0),2);
                        iVar8 = *arg1;
                        if (uVar3 == 0) {
                            uVar3 = dma_set_mask(iVar8,0xffffffff);
                            if (uVar3 == 0) {
                                dma_set_coherent_mask(iVar8,0xffffffff);
                                goto code_r0x0800566c;
                            }
                            uVar5 = uVar3;
                            _dev_err(*arg1,"Unable to set the coherent mask to 32-bits!\n");
                        }
                        else {
                            uVar5 = uVar3;
                            _dev_err(iVar8,"Unable to get the CMA area for performing dma_alloc_* calls\n");
                        }
                    }
                }
            }
        }
code_r0x0800554c:
        device_init_wakeup(*arg1,0);
    }
    rproc_free(iVar7);
code_r0x08005570:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.adsp_remove;
        puVar11 = *(iVar7 + 0xa8);
        rproc_del(puVar11[2]);
        if (puVar11[1] != 0) {
            qcom_destroy_ramdump_device();
        }
        device_remove_file(*puVar11,obj.dev_attr_txn_id);
        qcom_remove_glink_subdev(puVar11[2],puVar11 + 0x43);
        qcom_remove_sysmon_subdev(puVar11[0x69]);
        qcom_remove_smd_subdev(puVar11[2],puVar11 + 0x51);
        qcom_remove_ssr_subdev(puVar11[2],puVar11 + 0x5a);
        device_init_wakeup(*puVar11,0);
        rproc_free(puVar11[2]);
        return 0;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.adsp_remove.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x080051f8 (size 8) =====

ulong sym.adsp_remove.7fdbc449ae15d618c663cd08c198be89.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0xa8);
    rproc_del(puVar1[2]);
    if (puVar1[1] != 0) {
        qcom_destroy_ramdump_device();
    }
    device_remove_file(*puVar1,obj.dev_attr_txn_id);
    qcom_remove_glink_subdev(puVar1[2],puVar1 + 0x43);
    qcom_remove_sysmon_subdev(puVar1[0x69]);
    qcom_remove_smd_subdev(puVar1[2],puVar1 + 0x51);
    qcom_remove_ssr_subdev(puVar1[2],puVar1 + 0x5a);
    device_init_wakeup(*puVar1,0);
    rproc_free(puVar1[2]);
    return 0;
}


// ===== sym.adsp_start.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x08005200 (size 8) =====

uint64_t sym.adsp_start.7fdbc449ae15d618c663cd08c198be89.cfi_jt(uint64_t param_1)

{
    ulong *puVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t extraout_x1;
    int64_t extraout_x1_00;
    int64_t extraout_x1_01;
    ulong extraout_x1_02;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    ulong *puVar10;
    uint64_t uVar11;
    ulong uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    ulong *puStack_b0;
    ulong *puStack_a8;
    uchar uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
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
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    puVar9 = *(param_1 + 0x28);
    iStack_90 = 0;
    iVar6 = (*puVar9)[0xe];
    if (iVar6 == 0) {
        iVar6 = **puVar9;
    }
    do {
        puVar1 = puVar9 + 3;
        qcom_q6v5_prepare(puVar1,iVar6);
        if (puVar9[0x30] < 0xfffffffffffff001) {
            uVar3 = icc_set_bw(puVar9[0x30],0xffffffff,0xffffffff);
            if (uVar3 == 0) goto code_r0x080061f0;
            uVar11 = uVar3;
            _dev_err(*puVar9,"bandwidth request failed(rc:%d)\n",uVar11);
            if (-1 < uVar3) goto code_r0x080061f0;
code_r0x080065f4:
            uVar12 = qcom_q6v5_unprepare(puVar1);
code_r0x080065fc:
            iVar6 = (*puVar9)[0xe];
            if (iVar6 == 0) {
                iVar6 = **puVar9;
            }
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_48) {
                return uVar11;
            }
            __stack_chk_fail(uVar12,iVar6);
        }
        else {
            _dev_err(*puVar9,"Bus scaling not setup for %s\n",*(puVar9[2] + 0x18));
code_r0x080061f0:
            uVar3 = sym.adsp_pds_enable(puVar9 + 0x22,*(puVar9 + 0x28));
            if (uVar3 < 0) {
                uVar11 = uVar3;
code_r0x080065d8:
                if (puVar9[0x30] < 0xfffffffffffff001) {
                    iVar4 = icc_set_bw(puVar9[0x30],0,0);
                    if (iVar4 != 0) {
                        _dev_err(*puVar9,"bandwidth request failed(rc:%d)\n",iVar4);
                    }
                }
                else {
                    _dev_err(*puVar9,"Bus scaling not setup for %s\n",*(puVar9[2] + 0x18));
                }
                goto code_r0x080065f4;
            }
            uVar3 = sym.adsp_pds_enable(puVar9 + 0x23,*(puVar9 + 0x144));
            if (uVar3 < 0) {
                uVar11 = uVar3;
code_r0x080065a0:
                param_1 = *(puVar9 + 0x28);
                if (*(puVar9 + 0x28) != 0) {
                    uVar5 = 0;
                    do {
                        dev_pm_genpd_set_performance_state(puVar9[uVar5 + 0x22],0);
                        __pm_runtime_idle(puVar9[uVar5 + 0x22],5);
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < param_1);
                }
                goto code_r0x080065d8;
            }
            iVar6 = puVar9[0x27];
            if (iVar6 != 0) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                snprintf(&uStack_88,0x40,"{class: image, res: load_state, name: %s, val: %s}",puVar9[0x26],0x8000506
                        );
                uVar5 = qmp_send(iVar6,&uStack_88,0x40);
                uVar11 = uVar5 & 0xffffffff;
                if (uVar5 == 0) goto code_r0x08006260;
code_r0x08006568:
                iVar4 = *(puVar9 + 0x144);
                if (iVar4 != 0) {
                    uVar5 = 0;
                    do {
                        dev_pm_genpd_set_performance_state(puVar9[uVar5 + 0x23],0);
                        __pm_runtime_idle(puVar9[uVar5 + 0x23],5);
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < iVar4);
                }
                goto code_r0x080065a0;
            }
code_r0x08006260:
            uVar12 = puVar9[0x1c];
            uVar5 = clk_prepare(uVar12);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x08006520:
                iVar6 = puVar9[0x27];
                if (iVar6 != 0) {
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    snprintf(&uStack_88,0x40,"{class: image, res: load_state, name: %s, val: %s}",puVar9[0x26],
                             0x80008fd);
                    qmp_send(iVar6,&uStack_88,0x40);
                }
                goto code_r0x08006568;
            }
            uVar5 = clk_enable(uVar12);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x08006518:
                clk_unprepare(uVar12);
                goto code_r0x08006520;
            }
            uVar13 = puVar9[0x1d];
            uVar5 = clk_prepare(uVar13);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x0800650c:
                uVar12 = puVar9[0x1c];
                clk_disable(uVar12);
                goto code_r0x08006518;
            }
            uVar5 = clk_enable(uVar13);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x08006504:
                clk_unprepare(uVar13);
                goto code_r0x0800650c;
            }
            uVar5 = sym.enable_regulators(puVar9);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x080064f8:
                uVar13 = puVar9[0x1d];
                clk_disable(uVar13);
                goto code_r0x08006504;
            }
            sym.scm_pas_enable_bw();
            iVar6 = (*puVar9)[0xe];
            if (iVar6 == 0) {
                iVar6 = **puVar9;
            }
            sym.trace_rproc_qcom_event(iVar6,"dtb_auth_reset","enter");
            if (((*(puVar9 + 0x14c) == 0) && (puVar9[0x2a] == 0)) ||
               (iVar4 = qcom_scm_pas_auth_and_reset(), iVar4 == 0)) {
                iVar6 = (*puVar9)[0xe];
                if (iVar6 == 0) {
                    iVar6 = **puVar9;
                }
                sym.trace_rproc_qcom_event(iVar6,"Q6_firmware_loading","enter");
                uVar5 = request_firmware(&iStack_90,*(param_1 + 0x20),*puVar9);
                uVar11 = uVar5 & 0xffffffff;
                if (uVar5 == 0) {
                    uStack_a0 = *(puVar9 + 0x18d);
                    uStack_98 = puVar9[0x2b];
                    uVar3 = qcom_mdt_load_no_free
                                      (*puVar9,iStack_90,*(param_1 + 0x20),*(puVar9 + 0x29),puVar9[0x41],
                                       puVar9[0x3f],puVar9[0x42],puVar9 + 0x40);
                    uVar11 = uVar3;
                    if (uVar3 == 0) {
                        qcom_pil_info_store(puVar9[0x32],puVar9[0x3f],puVar9[0x42]);
                        sym.adsp_add_coredump_segments(puVar9,iStack_90);
                        iVar6 = (*puVar9)[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **puVar9;
                        }
                        sym.trace_rproc_qcom_event(iVar6,"Q6_auth_reset","enter");
                        iVar4 = qcom_scm_pas_auth_and_reset(*(puVar9 + 0x29));
                        if (iVar4 != 0) {
                            panic("Panicking, auth and reset failed for remoteproc %s\n",*(param_1 + 0x18));
                            uVar11 = 0;
                            goto code_r0x08006800;
                        }
                        iVar6 = (*puVar9)[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **puVar9;
                        }
                        sym.trace_rproc_qcom_event(iVar6,"Q6_auth_reset","exit");
                        if (puVar9[5] == 0) {
code_r0x08006418:
                            if (reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt == 0x0) {
                                uVar3 = qcom_q6v5_wait_for_start(puVar1,0x4e2);
                                uVar11 = uVar3;
                                if ((*(param_1 + 0x4c4) != '\0') && (uVar3 != 0)) {
code_r0x08006800:
                                    iVar7 = panic("Panicking, remoteproc %s failed to bootup.\n",*(puVar9[2] + 0x18));
                                    uVar12 = tpidr_el2;
                                    uVar12 = tpidr_el2;
                                    *extraout_x18 = 0x8006814;
                                    uStack_d8 = 0x8006814;
                                    iVar6 = sp_el0;
                                    iStack_e8 = *(iVar6 + 0x5e0);
                                    puVar10 = *(iVar7 + 0x28);
                                    puStack_e0 = &stack0xffffffffffffffc0;
                                    uStack_d0 = uVar13;
                                    uStack_c0 = uVar11;
                                    uStack_b8 = param_1;
                                    puStack_b0 = puVar1;
                                    puStack_a8 = puVar9;
                                    do {
                                        puVar9 = puVar10 + 3;
                                        iVar4 = qcom_q6v5_request_stop(puVar9,puVar10[0x69]);
                                        if (iVar4 == -0x6e) goto code_r0x08006a00;
                                        while( true ) {
                                            sym.scm_pas_enable_bw();
                                            if (*(puVar10 + 0x17c) == '\0') {
                                                iVar4 = qcom_scm_pas_shutdown(*(puVar10 + 0x29));
                                            }
                                            else {
                                                iVar4 = qcom_scm_pas_shutdown_retry();
                                            }
                                            if (iVar4 == 0) break;
                                            panic("Panicking, remoteproc %s failed to shutdown.\n",*(iVar7 + 0x18));
code_r0x08006a00:
                                            _dev_err(*puVar10,"timed out on wait\n");
                                        }
                                        if ((*(puVar10 + 0x14c) == 0) || (iVar4 = qcom_scm_pas_shutdown(), iVar4 == 0))
                                        {
                                            if (CONCAT44(*0x8000004,_segment.ehdr) < 0xfffffffffffff001) {
                                                mutex_lock(obj.scm_pas_bw_mutex);
                                                _segment.ehdr = _segment.ehdr + -1;
                                                if (_segment.ehdr == 0) {
                                                    icc_set_bw(*0x8000004 << 0x20,0,0);
                                                }
                                                mutex_unlock(obj.scm_pas_bw_mutex);
                                            }
                                            iVar4 = *(puVar10 + 0x28);
                                            if (iVar4 != 0) {
                                                uVar11 = 0;
                                                do {
                                                    dev_pm_genpd_set_performance_state(puVar10[uVar11 + 0x22],0);
                                                    __pm_runtime_idle(puVar10[uVar11 + 0x22],5);
                                                    uVar11 = uVar11 + 1;
                                                } while (uVar11 < iVar4);
                                            }
                                            iVar7 = puVar10[0x27];
                                            if (iVar7 != 0) {
                                                uStack_f8 = 0;
                                                uStack_f0 = 0;
                                                uStack_108 = 0;
                                                uStack_100 = 0;
                                                uStack_118 = 0;
                                                uStack_110 = 0;
                                                uStack_128 = 0;
                                                uStack_120 = 0;
                                                snprintf(&uStack_128,0x40,
                                                         "{class: image, res: load_state, name: %s, val: %s}",
                                                         puVar10[0x26],0x80008fd);
                                                qmp_send(iVar7,&uStack_128,0x40);
                                            }
                                            uVar12 = qcom_q6v5_unprepare(puVar9);
                                            if (uVar12 != 0) {
                                                uVar12 = sym.qcom_pas_handover(puVar9);
                                            }
                                            iVar6 = (*puVar10)[0xe];
                                            if (iVar6 == 0) {
                                                iVar6 = **puVar10;
                                            }
                                            iVar8 = sp_el0;
                                            if (*(iVar8 + 0x5e0) == iStack_e8) {
                                                return 0;
                                            }
                                            __stack_chk_fail(uVar12,iVar6);
                                        }
                                        panic("Panicking, remoteproc %s dtb failed to shutdown.\n",*(iVar7 + 0x18));
                                        iVar6 = tpidr_el1;
                                        if ((*(__cpu_online_mask + (*(cpu_number + iVar6) >> 3 & 0x1ffffff8)) >>
                                             (*(cpu_number + iVar6) & 0x3f) & 1) != 0) {
                                            iVar6 = sp_el0;
                                            piVar2 = iVar6 + 0x10;
                                            *(iVar6 + 0x10) = *piVar2 + 1;
                                            __traceiter_rproc_qcom_event(0,extraout_x1_02,"adsp_stop","enter");
                                            iVar8 = *piVar2;
                                            *(iVar6 + 0x10) = iVar8 + -1;
                                            if ((iVar8 + -1 == 0) || (*piVar2 == 0)) {
                                                preempt_schedule_notrace();
                                            }
                                        }
                                    } while( true );
                                }
                                if (uVar3 == 0xffffff92) {
                                    _dev_err(*puVar9,"start timed out\n");
                                }
                            }
                            else {
                                uVar11 = 0;
                            }
                        }
                        else {
                            iVar4 = sym.readl_relaxed(puVar9[5] + 8);
                            if (iVar4 == 0) {
                                uVar13 = 1;
                                do {
                                    msleep(0x14);
                                    if ((0xf9 < uVar13) &&
                                       ((reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt & 1) == 0))
                                    goto code_r0x08006408;
                                    iVar4 = sym.readl_relaxed(puVar9[5] + 8);
                                    uVar13 = uVar13 + 1;
                                } while (iVar4 == 0);
                            }
                            sym.writel_relaxed(puVar9[5],puVar9[5] + 0xc);
code_r0x08006408:
                            iVar4 = sym.readl_relaxed(puVar9[5] + 8);
                            if (iVar4 != 0) goto code_r0x08006418;
                            _dev_err(*puVar9,"Didn\'t get rmb signal from  %s\n",*(param_1 + 0x18));
                            uVar11 = 0;
                        }
                        qcom_mdt_free_metadata(*puVar9,*(puVar9 + 0x29),puVar9[0x2b],*(puVar9 + 0x18d),uVar11);
                    }
                    if (iStack_90 != 0) {
                        release_firmware();
                    }
                }
                if ((*(puVar9 + 0x14c) != 0) || (puVar9[0x2a] != 0)) {
                    qcom_mdt_free_metadata(*puVar9,*(puVar9 + 0x14c),puVar9 + 0x2c,*(puVar9 + 0x18d),uVar11);
                    release_firmware(puVar9[0x6a]);
                }
                uVar12 = sym.scm_pas_disable_bw();
                if (uVar11 != 0) {
                    sym.disable_regulators(puVar9);
                    goto code_r0x080064f8;
                }
                goto code_r0x080065fc;
            }
        }
        panic("Panicking, auth and reset failed for remoteproc %s dtb\n",*(param_1 + 0x18));
        iVar7 = tpidr_el1;
        iVar6 = extraout_x1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar6 = sp_el0;
            piVar2 = iVar6 + 0x10;
            *(iVar6 + 0x10) = *piVar2 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x1,"adsp_start","enter");
            iVar7 = *piVar2;
            *(iVar6 + 0x10) = iVar7 + -1;
            if ((iVar7 + -1 == 0) || (iVar6 = extraout_x1_00, *piVar2 == 0)) {
                preempt_schedule_notrace();
                iVar6 = extraout_x1_01;
            }
        }
    } while( true );
}


// ===== sym.adsp_attach.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x08005208 (size 8) =====

int64_t sym.adsp_attach.7fdbc449ae15d618c663cd08c198be89.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    bool bVar1;
    ulong *puVar2;
    ulong *arg1;
    int64_t iVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    int64_t iStack_90;
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
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    arg1 = *(param_1 + 0x28);
    iStack_90 = 0;
    iVar4 = request_firmware(&iStack_90,*(param_1 + 0x20),param_1 + 0x38);
    if (iVar4 < 0) {
        _dev_err(*arg1,"Failed to request DSP firmware\n");
        _dev_err(*arg1,"Dumps will not be available\n");
    }
    else {
        sym.adsp_add_coredump_segments(arg1,iStack_90);
        release_firmware(iStack_90);
    }
    puVar2 = arg1 + 3;
    qcom_q6v5_prepare(puVar2);
    if (arg1[0x30] < 0xfffffffffffff001) {
        uVar5 = icc_set_bw(arg1[0x30],0xffffffff,0xffffffff);
        if (uVar5 == 0) goto code_r0x08006bc4;
        uVar8 = uVar5;
        _dev_err(*arg1,"bandwidth request failed(rc:%d)\n");
        if (-1 < uVar5) goto code_r0x08006bc4;
code_r0x08006d68:
        qcom_q6v5_unprepare(puVar2);
        iVar7 = sym.adsp_start(param_1);
    }
    else {
        _dev_err(*arg1,"Bus scaling not setup for %s\n",*(arg1[2] + 0x18));
code_r0x08006bc4:
        iVar4 = sym.adsp_pds_enable(arg1 + 0x22,*(arg1 + 0x28));
        if (iVar4 < 0) {
code_r0x08006d4c:
            if (arg1[0x30] < 0xfffffffffffff001) {
                uVar8 = 0;
                uVar5 = icc_set_bw(arg1[0x30],0);
                if (uVar5 != 0) {
                    uVar8 = uVar5;
                    _dev_err(*arg1,"bandwidth request failed(rc:%d)\n");
                }
            }
            else {
                uVar8 = *(arg1[2] + 0x18);
                _dev_err(*arg1,"Bus scaling not setup for %s\n");
            }
            goto code_r0x08006d68;
        }
        if (arg1[5] == 0) {
            _dev_err(*arg1,"Remote proc cannot be late attached\n");
            iVar4 = *(arg1 + 0x28);
joined_r0x08006e54:
            if (iVar4 != 0) {
                uVar8 = 0;
                do {
                    dev_pm_genpd_set_performance_state(arg1[uVar8 + 0x22],0);
                    __pm_runtime_idle(arg1[uVar8 + 0x22],5);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < iVar4);
            }
            goto code_r0x08006d4c;
        }
        iVar4 = sym.adsp_pds_enable(arg1 + 0x23,*(arg1 + 0x144));
        if (iVar4 < 0) {
code_r0x08006d14:
            iVar4 = *(arg1 + 0x28);
            goto joined_r0x08006e54;
        }
        param_4 = arg1[0x26];
        uVar9 = arg1[0x27];
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        snprintf(&uStack_88,0x40,"{class: image, res: load_state, name: %s, val: %s}",param_4,0x8000506);
        uVar8 = 0x40;
        iVar4 = qmp_send(uVar9,&uStack_88);
        if (iVar4 != 0) {
code_r0x08006cdc:
            iVar4 = *(arg1 + 0x144);
            if (iVar4 != 0) {
                uVar8 = 0;
                do {
                    dev_pm_genpd_set_performance_state(arg1[uVar8 + 0x23],0);
                    __pm_runtime_idle(arg1[uVar8 + 0x23],5);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < iVar4);
            }
            goto code_r0x08006d14;
        }
        uVar9 = arg1[0x1c];
        iVar4 = clk_prepare(uVar9);
        if (iVar4 != 0) {
code_r0x08006c9c:
            param_4 = arg1[0x26];
            uVar9 = arg1[0x27];
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            snprintf(&uStack_88,0x40,"{class: image, res: load_state, name: %s, val: %s}",param_4,0x80008fd);
            qmp_send(uVar9,&uStack_88,0x40);
            goto code_r0x08006cdc;
        }
        iVar4 = clk_enable(uVar9);
        if (iVar4 != 0) {
code_r0x08006c94:
            clk_unprepare(uVar9);
            goto code_r0x08006c9c;
        }
        uVar9 = arg1[0x1d];
        iVar4 = clk_prepare(uVar9);
        if (iVar4 != 0) {
code_r0x08006c88:
            uVar9 = arg1[0x1c];
            clk_disable(uVar9);
            goto code_r0x08006c94;
        }
        iVar4 = clk_enable(uVar9);
        if (iVar4 != 0) {
code_r0x08006c80:
            clk_unprepare(uVar9);
            goto code_r0x08006c88;
        }
        iVar4 = sym.enable_regulators(arg1);
        if (iVar4 != 0) {
code_r0x08006c74:
            uVar9 = arg1[0x1d];
            clk_disable(uVar9);
            goto code_r0x08006c80;
        }
        iVar4 = 1;
        do {
            iVar6 = sym.readl_relaxed(arg1[5] + 8);
            if (iVar6 != 0) {
                sym.writel_relaxed(arg1[5],arg1[5] + 0xc);
                break;
            }
            msleep(0x14);
            iVar6 = iVar4 + 1;
            bVar1 = iVar4 < 0xfa;
            iVar4 = iVar6;
        } while ((bVar1) || ((reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt & 1) != 0));
        iVar4 = sym.readl_relaxed(arg1[5] + 8);
        if (iVar4 == 0) {
            _dev_err(*arg1,"Didn\'t get rmb signal from %s\n",*(param_1 + 0x18));
code_r0x08006f14:
            sym.disable_regulators(arg1);
            goto code_r0x08006c74;
        }
        if (reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt == 0x0) {
            iVar7 = qcom_q6v5_wait_for_start(puVar2,0x4e2);
            if ((*(param_1 + 0x4c4) != '\0') && (iVar7 != 0)) goto code_r0x08006f24;
            if (iVar7 == -0x6e) {
                _dev_err(*arg1,"start timed out\n");
                goto code_r0x08006f14;
            }
        }
        else {
            iVar7 = 0;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return iVar7;
    }
    __stack_chk_fail(iVar7);
code_r0x08006f24:
    auVar10 = panic("Panicking, remoteproc %s failed to bootup.\n",*(arg1[2] + 0x18));
    iVar7 = *(auVar10._0_8_ + 0x28);
    iVar4 = auVar10._8_4_ - *(iVar7 + 0x200);
    if ((-1 < iVar4) && (iVar4 + uVar8 <= *(iVar7 + 0x210))) {
        if (param_4 != NULL) {
            *param_4 = 1;
        }
        return *(iVar7 + 0x208) + iVar4;
    }
    return 0;
}


// ===== sym.adsp_stop.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x08005210 (size 8) =====

ulong sym.adsp_stop.7fdbc449ae15d618c663cd08c198be89.cfi_jt(int64_t param_1)

{
    ulong *arg1;
    int64_t *piVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong extraout_x1;
    int64_t iVar5;
    ulong *in_x18;
    ulong *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
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
    puVar6 = *(param_1 + 0x28);
    do {
        arg1 = puVar6 + 3;
        iVar2 = qcom_q6v5_request_stop(arg1,puVar6[0x69]);
        if (iVar2 == -0x6e) goto code_r0x08006a00;
        while( true ) {
            sym.scm_pas_enable_bw();
            if (*(puVar6 + 0x17c) == '\0') {
                iVar2 = qcom_scm_pas_shutdown(*(puVar6 + 0x29));
            }
            else {
                iVar2 = qcom_scm_pas_shutdown_retry();
            }
            if (iVar2 == 0) break;
            panic("Panicking, remoteproc %s failed to shutdown.\n",*(param_1 + 0x18));
code_r0x08006a00:
            _dev_err(*puVar6,"timed out on wait\n");
        }
        if ((*(puVar6 + 0x14c) == 0) || (iVar2 = qcom_scm_pas_shutdown(), iVar2 == 0)) {
            if (CONCAT44(*0x8000004,_segment.ehdr) < 0xfffffffffffff001) {
                mutex_lock(obj.scm_pas_bw_mutex);
                _segment.ehdr = _segment.ehdr + -1;
                if (_segment.ehdr == 0) {
                    icc_set_bw(*0x8000004 << 0x20,0,0);
                }
                mutex_unlock(obj.scm_pas_bw_mutex);
            }
            iVar2 = *(puVar6 + 0x28);
            if (iVar2 != 0) {
                uVar7 = 0;
                do {
                    dev_pm_genpd_set_performance_state(puVar6[uVar7 + 0x22],0);
                    __pm_runtime_idle(puVar6[uVar7 + 0x22],5);
                    uVar7 = uVar7 + 1;
                } while (uVar7 < iVar2);
            }
            param_1 = puVar6[0x27];
            if (param_1 != 0) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                snprintf(&uStack_88,0x40,"{class: image, res: load_state, name: %s, val: %s}",puVar6[0x26],0x80008fd
                        );
                qmp_send(param_1,&uStack_88,0x40);
            }
            uVar3 = qcom_q6v5_unprepare(arg1);
            if (uVar3 != 0) {
                uVar3 = sym.qcom_pas_handover(arg1);
            }
            iVar4 = (*puVar6)[0xe];
            if (iVar4 == 0) {
                iVar4 = **puVar6;
            }
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_48) {
                return 0;
            }
            __stack_chk_fail(uVar3,iVar4);
        }
        panic("Panicking, remoteproc %s dtb failed to shutdown.\n",*(param_1 + 0x18));
        iVar4 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar4) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar4) & 0x3f) & 1) !=
            0) {
            iVar4 = sp_el0;
            piVar1 = iVar4 + 0x10;
            *(iVar4 + 0x10) = *piVar1 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x1,"adsp_stop","enter");
            iVar5 = *piVar1;
            *(iVar4 + 0x10) = iVar5 + -1;
            if ((iVar5 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    } while( true );
}


// ===== sym.adsp_load.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x08005218 (size 8) =====

int sym.adsp_load.7fdbc449ae15d618c663cd08c198be89.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(param_1 + 0x28);
    iVar2 = (*puVar3)[0xe];
    if (iVar2 == 0) {
        iVar2 = **puVar3;
    }
    rproc_coredump_cleanup(puVar3[2],iVar2);
    sym.scm_pas_enable_bw();
    if ((*(puVar3 + 0x14c) == 0) || (puVar3[0x2a] == 0)) {
        if (0xfffffffffffff000 < CONCAT44(*0x8000004,_segment.ehdr)) {
            return 0;
        }
        mutex_lock(obj.scm_pas_bw_mutex);
        iVar1 = 0;
    }
    else {
        iVar1 = request_firmware(puVar3 + 0x6a,puVar3[0x2a],*puVar3);
        if (iVar1 == 0) {
            iVar1 = qcom_mdt_load_no_free
                              (*puVar3,puVar3[0x6a],puVar3[0x2a],*(puVar3 + 0x14c),puVar3[0x3d],puVar3[0x3b],
                               puVar3[0x3e],puVar3 + 0x3c,*(puVar3 + 0x18d),puVar3 + 0x2c);
            if (iVar1 != 0) {
                _dev_err(*puVar3,"failed to load %s: %d\n",puVar3[0x2a],iVar1);
                release_firmware(puVar3[0x6a]);
            }
        }
        else {
            _dev_err(*puVar3,"request_firmware failed for %s: %d\n",puVar3[0x2a],iVar1);
        }
        iVar2 = (*puVar3)[0xe];
        if (iVar2 == 0) {
            iVar2 = **puVar3;
        }
        if (0xfffffffffffff000 < CONCAT44(*0x8000004,_segment.ehdr)) {
            return iVar1;
        }
        mutex_lock(obj.scm_pas_bw_mutex,iVar2);
    }
    _segment.ehdr = _segment.ehdr + -1;
    if (_segment.ehdr == 0) {
        icc_set_bw(*0x8000004 << 0x20,0,0);
    }
    mutex_unlock(obj.scm_pas_bw_mutex);
    return iVar1;
}


// ===== sym.adsp_da_to_va.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x08005220 (size 8) =====

int64_t sym.adsp_da_to_va.7fdbc449ae15d618c663cd08c198be89.cfi_jt
                  (int64_t param_1,int param_2,int64_t param_3,uchar *param_4)

{
    int64_t iVar1;
    
    iVar1 = *(param_1 + 0x28);
    param_2 = param_2 - *(iVar1 + 0x200);
    if ((-1 < param_2) && (param_2 + param_3 <= *(iVar1 + 0x210))) {
        if (param_4 != NULL) {
            *param_4 = 1;
        }
        return *(iVar1 + 0x208) + param_2;
    }
    return 0;
}


// ===== sym.txn_id_show.7fdbc449ae15d618c663cd08c198be89.cfi_jt @ 0x08005228 (size 8) =====

int64_t sym.txn_id_show.7fdbc449ae15d618c663cd08c198be89.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = qcom_sysmon_get_txn_id(*(*(param_1 + 0x98) + 0x348));
    iVar2 = sysfs_emit(param_3,"%zu\n",uVar1);
    return iVar2;
}


// ===== sym.adsp_segment_dump @ 0x08005230 (size 328) =====

void sym.adsp_segment_dump(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t in_x4;
    ulong *in_x18;
    ulong uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg2 + 0x20);
    puVar4 = *(arg1 + 0x28);
    iVar2 = strnlen(uVar3,0xb);
    if ((iVar2 == 10) && (iVar1 = strcmp(uVar3,"md_dbg_buf"), iVar1 == 0)) {
        iVar2 = __ioremap(*(arg2 + 0x10));
        if (iVar2 == 0) {
            _printk(0x8000795);
        }
        else {
            __memcpy_fromio(arg3,iVar2);
            iounmap(iVar2);
        }
    }
    else {
        iVar1 = (*(arg2 + 0x10) + arg4 + *(arg2 + 0x30)) - puVar4[0x3f];
        if ((iVar1 < 0) || (puVar4[0x42] < iVar1 + in_x4)) {
            _dev_err(*puVar4,"invalid copy request for segment %pad with offset %zu and size %zu)\n",arg2 + 0x10,arg4
                    );
            memset(arg3,0xff);
        }
        else {
            __memcpy_fromio(arg3,puVar4[0x41] + iVar1);
        }
    }
    return;
}


// ===== sym.adsp_probe @ 0x08005378 (size 1456) =====

uint64_t sym.adsp_probe(int64_t arg1)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar11;
    int64_t *arg1_00;
    uint uVar12;
    ulong unaff_x30;
    ulong uStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
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
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar9 = arg1 + 0x10;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_f0 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    puVar4 = of_device_get_match_data(iVar9);
    if (puVar4 == NULL) {
        uVar5 = 0xffffffea;
        goto code_r0x08005570;
    }
    uVar5 = qcom_scm_is_available();
    if ((uVar5 & 1) == 0) {
        uVar5 = 0xfffffdfb;
        goto code_r0x08005570;
    }
    uStack_f0 = *(puVar4 + 2);
    uVar6 = of_property_read_string(*(arg1 + 0x300),"firmware-name",&uStack_f0);
    if ((uVar6 < 0) && (uVar5 = uVar6 & 0xffffffff, uVar6 != -0x16)) goto code_r0x08005570;
    if ((*(puVar4 + 0xb) != '\0') &&
       ((((obj.mpss_dsm_mem_setup & 1) == 0 && (iVar2 = strcmp(uStack_f0,"modem.mdt"), iVar2 == 0)) &&
        (iVar2 = sym.setup_mpss_dsm_mem(arg1), iVar2 != 0)))) {
        _dev_err(iVar9,"failed to setup mpss dsm mem\n");
        uVar5 = 0xffffffea;
        goto code_r0x08005570;
    }
    iVar7 = rproc_alloc(iVar9,*arg1,obj.adsp_ops,uStack_f0,0x358);
    if (iVar7 == 0) {
        _dev_err(iVar9,"unable to allocate remoteproc\n");
        uVar5 = 0xfffffff4;
        goto code_r0x08005570;
    }
    uVar12 = 1;
    *(iVar7 + 0x4c4) = 1;
    *(iVar7 + 0x4f1) = *(puVar4 + 0x2a);
    if (*(puVar4 + 10) != '\0') {
        uVar12 = 2;
    }
    rproc_coredump_set_elf_info(iVar7,uVar12,0);
    arg1_00 = *(iVar7 + 0x28);
    *arg1_00 = iVar9;
    arg1_00[2] = iVar7;
    *(arg1_00 + 0x2f) = puVar4[9];
    *(arg1_00 + 0x29) = puVar4[6];
    *(arg1_00 + 0x14c) = puVar4[7];
    arg1_00[0x2a] = *(puVar4 + 4);
    *(arg1_00 + 0x18c) = *(puVar4 + 0x29);
    arg1_00[0x32] = *(puVar4 + 0x12);
    arg1_00[0x26] = *(puVar4 + 0x14);
    *(arg1_00 + 0x18d) = *(puVar4 + 0x2b);
    if (*(puVar4 + 8) != '\0') {
        iVar8 = devm_kmalloc(iVar9,0x18,0xdc0);
        *(arg1_00 + 0x17c) = 1;
        arg1_00[0x2b] = iVar8;
    }
    *(arg1 + 0xa8) = arg1_00;
    uVar6 = device_init_wakeup(*arg1_00,1);
    uVar5 = uVar6 & 0xffffffff;
    if (uVar6 == 0) {
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        iStack_e8 = 0;
        iStack_e0 = 0;
        iVar8 = of_parse_phandle(*(*arg1_00 + 0x2f0),"memory-region",0);
        if (iVar8 == 0) {
            iVar9 = *arg1_00;
            pcVar10 = "no memory-region specified\n";
code_r0x080057cc:
            _dev_err(iVar9,pcVar10);
            uVar5 = 0xffffffea;
        }
        else {
            uVar6 = of_address_to_resource(iVar8,0,&iStack_e8);
            uVar5 = uVar6 & 0xffffffff;
            if (uVar6 == 0) {
                arg1_00[0x3f] = iStack_e8;
                arg1_00[0x40] = iStack_e8;
                arg1_00[0x42] = (iStack_e0 - iStack_e8) + 1;
                iVar8 = devm_ioremap_wc(*arg1_00);
                arg1_00[0x41] = iVar8;
                if (iVar8 == 0) {
                    iVar9 = *arg1_00;
                    iVar8 = arg1_00[0x42];
code_r0x080057e0:
                    _dev_err(iVar9,"unable to map memory region: %pa+%zx\n",&iStack_e8,iVar8);
                    uVar5 = 0xfffffff0;
                }
                else {
                    if (*(arg1_00 + 0x14c) != 0) {
                        iVar8 = of_parse_phandle(*(*arg1_00 + 0x2f0),"memory-region",1);
                        if (iVar8 == 0) {
                            iVar9 = *arg1_00;
                            pcVar10 = "no dtb memory-region specified\n";
                            goto code_r0x080057cc;
                        }
                        uVar6 = of_address_to_resource(iVar8,0,&iStack_e8);
                        uVar5 = uVar6 & 0xffffffff;
                        if (uVar6 != 0) goto code_r0x0800554c;
                        arg1_00[0x3b] = iStack_e8;
                        arg1_00[0x3c] = iStack_e8;
                        arg1_00[0x3e] = (iStack_e0 - iStack_e8) + 1;
                        iVar8 = devm_ioremap_wc(*arg1_00);
                        arg1_00[0x3d] = iVar8;
                        if (iVar8 == 0) {
                            iVar9 = *arg1_00;
                            iVar8 = arg1_00[0x3e];
                            goto code_r0x080057e0;
                        }
                    }
                    if (*(arg1_00 + 0x18d) == '\0') {
code_r0x0800566c:
                        uVar6 = sym.adsp_init_clock(arg1_00);
                        uVar5 = uVar6 & 0xffffffff;
                        if (uVar6 == 0) {
                            uVar6 = sym.adsp_init_regulator(arg1_00);
                            uVar5 = uVar6 & 0xffffffff;
                            if (uVar6 == 0) {
                                sym.adsp_init_bus_scaling(arg1_00);
                                uVar6 = sym.adsp_pds_attach(iVar9,arg1_00 + 0x22,*(puVar4 + 0xc));
                                uVar5 = uVar6 & 0xffffffff;
                                if (-1 < uVar6) {
                                    *(arg1_00 + 0x28) = uVar6;
                                    uVar6 = sym.adsp_pds_attach(iVar9,arg1_00 + 0x23,*(puVar4 + 0xe));
                                    uVar5 = uVar6 & 0xffffffff;
                                    if (-1 < uVar6) {
                                        *(arg1_00 + 0x144) = uVar6;
                                        iVar8 = of_find_property(*(arg1 + 0x300),"qcom,signal-aop",0);
                                        if (iVar8 == 0) {
code_r0x08005704:
                                            uVar6 = qcom_q6v5_init(arg1_00 + 3,arg1,iVar7,*puVar4,
                                                                   
                                                            sym.qcom_pas_handover.7fdbc449ae15d618c663cd08c198be89.cfi_jt
                                                            );
                                            uVar5 = uVar6 & 0xffffffff;
                                            if (uVar6 == 0) {
                                                qcom_q6v5_register_ssr_subdev(arg1_00 + 3,arg1_00 + 0x5a);
                                                if ((arg1_00[5] != 0) &&
                                                   (iVar2 = sym.readl_relaxed(arg1_00[5] + 0x10), iVar2 != 0)) {
                                                    *(iVar7 + 0x3cc) = 6;
                                                }
                                                uVar1 = qcom_pil_timeouts_disabled();
                                                reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt = uVar1 & 1;
                                                qcom_add_glink_subdev(iVar7,arg1_00 + 0x43,*(puVar4 + 0x10));
                                                qcom_add_smd_subdev(iVar7,arg1_00 + 0x51);
                                                uVar5 = qcom_add_sysmon_subdev(iVar7,*(puVar4 + 0x12),puVar4[0x16]);
                                                arg1_00[0x69] = uVar5;
                                                if (uVar5 < 0xfffffffffffff001) {
                                                    qcom_add_ssr_subdev(iVar7,arg1_00 + 0x5a,*(puVar4 + 0x10));
                                                    uVar6 = device_create_file(*arg1_00,obj.dev_attr_txn_id);
                                                    uVar5 = uVar6 & 0xffffffff;
                                                    if (uVar6 == 0) {
                                                        snprintf(&uStack_88,0x20,"%s-md",**(arg1 + 0x300));
                                                        iVar8 = qcom_create_ramdump_device(&uStack_88,0);
                                                        arg1_00[1] = iVar8;
                                                        if (iVar8 == 0) {
                                                            _dev_err(iVar9,"Unable to create %s minidump device.\n",
                                                                     &uStack_88);
                                                        }
                                                        uVar6 = rproc_add(iVar7);
                                                        uVar5 = uVar6 & 0xffffffff;
                                                        if (uVar6 == 0) goto code_r0x08005570;
                                                        if (arg1_00[1] != 0) {
                                                            qcom_destroy_ramdump_device();
                                                        }
                                                        device_remove_file(*arg1_00,obj.dev_attr_txn_id);
                                                    }
                                                    qcom_remove_sysmon_subdev(arg1_00[0x69]);
                                                }
                                            }
                                        }
                                        else {
                                            uVar6 = qmp_get(*arg1_00);
                                            arg1_00[0x27] = uVar6;
                                            if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) goto code_r0x08005704;
                                        }
                                        sym.adsp_pds_detach(arg1_00,arg1_00 + 0x23,*(arg1_00 + 0x144));
                                    }
                                    sym.adsp_pds_detach(arg1_00,arg1_00 + 0x22,arg1_00[0x28]);
                                }
                            }
                        }
                    }
                    else {
                        uVar3 = of_reserved_mem_device_init_by_idx(*arg1_00,*(*arg1_00 + 0x2f0),2);
                        iVar8 = *arg1_00;
                        if (uVar3 == 0) {
                            uVar3 = dma_set_mask(iVar8,0xffffffff);
                            if (uVar3 == 0) {
                                dma_set_coherent_mask(iVar8,0xffffffff);
                                goto code_r0x0800566c;
                            }
                            uVar5 = uVar3;
                            _dev_err(*arg1_00,"Unable to set the coherent mask to 32-bits!\n");
                        }
                        else {
                            uVar5 = uVar3;
                            _dev_err(iVar8,"Unable to get the CMA area for performing dma_alloc_* calls\n");
                        }
                    }
                }
            }
        }
code_r0x0800554c:
        device_init_wakeup(*arg1_00,0);
    }
    rproc_free(iVar7);
code_r0x08005570:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_68) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.adsp_remove;
        puVar11 = *(iVar9 + 0xa8);
        rproc_del(puVar11[2]);
        if (puVar11[1] != 0) {
            qcom_destroy_ramdump_device();
        }
        device_remove_file(*puVar11,obj.dev_attr_txn_id);
        qcom_remove_glink_subdev(puVar11[2],puVar11 + 0x43);
        qcom_remove_sysmon_subdev(puVar11[0x69]);
        qcom_remove_smd_subdev(puVar11[2],puVar11 + 0x51);
        qcom_remove_ssr_subdev(puVar11[2],puVar11 + 0x5a);
        device_init_wakeup(*puVar11,0);
        rproc_free(puVar11[2]);
        return 0;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.adsp_remove @ 0x08005928 (size 148) =====

ulong sym.adsp_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xa8);
    rproc_del(puVar1[2]);
    if (puVar1[1] != 0) {
        qcom_destroy_ramdump_device();
    }
    device_remove_file(*puVar1,obj.dev_attr_txn_id);
    qcom_remove_glink_subdev(puVar1[2],puVar1 + 0x43);
    qcom_remove_sysmon_subdev(puVar1[0x69]);
    qcom_remove_smd_subdev(puVar1[2],puVar1 + 0x51);
    qcom_remove_ssr_subdev(puVar1[2],puVar1 + 0x5a);
    device_init_wakeup(*puVar1,0);
    rproc_free(puVar1[2]);
    return 0;
}


// ===== sym.setup_mpss_dsm_mem @ 0x080059bc (size 308) =====

uint64_t sym.setup_mpss_dsm_mem(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    int64_t iStack_a8;
    int64_t iStack_a0;
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
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_40 = 0xf;
    uStack_3c = 3;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_44 = 6;
    iStack_a8 = 0;
    iStack_a0 = 0;
    iVar2 = of_parse_phandle(*(arg1 + 0x300),"mpss_dsm_mem_reg",0);
    if (iVar2 == 0) {
        _dev_err(arg1 + 0x10,"mpss dsm mem region is missing\n");
        uVar6 = 0xffffffea;
    }
    else {
        uVar1 = of_address_to_resource(iVar2,0,&iStack_a8);
        if (uVar1 == 0) {
            uVar3 = hyp_assign_phys(iStack_a8,(iStack_a0 - iStack_a8) + 1,&uStack_3c,1,&uStack_40,&uStack_44,1);
            uVar6 = uVar3 & 0xffffffff;
            if (uVar3 == 0) {
                obj.mpss_dsm_mem_setup = 0x1;
            }
            else {
                _dev_err(arg1 + 0x10,"hyp assign for mpss dsm mem failed\n");
            }
        }
        else {
            uVar6 = uVar1;
            _dev_err(arg1 + 0x10,"address to resource failed for mpss dsm mem\n");
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym.adsp_init_clock;
    uVar6 = devm_clk_get(*puVar4,0x8000655);
    puVar4[0x1c] = uVar6;
    if (uVar6 < 0xfffffffffffff001) {
        if (*(puVar4 + 0x18c) != '\0') {
            uVar6 = devm_clk_get(*puVar4,"aggre2");
            puVar4[0x1d] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                if (uVar6 == -0x205) goto code_r0x08005b68;
                uVar6 = uVar6 & 0xffffffff;
                pcVar5 = "failed to get aggre2 clock";
                goto code_r0x08005b98;
            }
        }
        uVar6 = 0;
    }
    else {
        if (uVar6 == -0x205) {
code_r0x08005b68:
            uVar6 = 0xfffffdfb;
            goto code_r0x08005b74;
        }
        pcVar5 = "failed to get xo clock";
code_r0x08005b98:
        _dev_err(*puVar4,pcVar5);
    }
code_r0x08005b74:
    return uVar6 & 0xffffffff;
}


// ===== sym.adsp_init_clock @ 0x08005af0 (size 180) =====

uint64_t sym.adsp_init_clock(int64_t arg1)

{
    uint64_t uVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = devm_clk_get(*arg1,0x8000655);
    *(arg1 + 0xe0) = uVar1;
    if (uVar1 < 0xfffffffffffff001) {
        if (*(arg1 + 0x18c) != '\0') {
            uVar1 = devm_clk_get(*arg1,"aggre2");
            *(arg1 + 0xe8) = uVar1;
            if (0xfffffffffffff000 < uVar1) {
                if (uVar1 == -0x205) goto code_r0x08005b68;
                uVar1 = uVar1 & 0xffffffff;
                pcVar2 = "failed to get aggre2 clock";
                goto code_r0x08005b98;
            }
        }
        uVar1 = 0;
    }
    else {
        if (uVar1 == -0x205) {
code_r0x08005b68:
            uVar1 = 0xfffffdfb;
            goto code_r0x08005b74;
        }
        pcVar2 = "failed to get xo clock";
code_r0x08005b98:
        _dev_err(*arg1,pcVar2);
    }
code_r0x08005b74:
    return uVar1 & 0xffffffff;
}


// ===== sym.adsp_init_regulator @ 0x08005ba4 (size 536) =====

uint64_t sym.adsp_init_regulator(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    uint uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ushort uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_84 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar1 = of_property_read_string_helper(*(*arg1 + 0x2f0),"reg-names",0,0,0);
    *(arg1 + 0x108) = uVar1;
    if (uVar1 < 1) {
        _dev_err(*arg1,"No regulators added!\n");
    }
    else {
        iVar2 = devm_kmalloc(*arg1,uVar1 << 4,0xdc0);
        *(arg1 + 0x100) = iVar2;
        if (iVar2 == 0) {
            uVar1 = 0xfffffff4;
            goto code_r0x08005d44;
        }
        if (0 < *(arg1 + 0x108)) {
            iVar2 = 0;
            uVar6 = 0;
            do {
                of_property_read_string_helper(*(*arg1 + 0x2f0),"reg-names",&uStack_98,1,uVar6 & 0xffffffff);
                uVar3 = devm_regulator_get(*arg1,uStack_98);
                *(*(arg1 + 0x100) + iVar2) = uVar3;
                if (0xfffffffffffff000 < *(*(arg1 + 0x100) + iVar2)) {
                    _dev_err(*arg1,"failed to get %s reg\n",uStack_98);
                    uVar1 = *(*(arg1 + 0x100) + iVar2);
                    goto code_r0x08005d44;
                }
                snprintf(&uStack_80,0x32,"%s-uV-uA",uStack_98);
                iVar4 = of_find_property(*(*arg1 + 0x2f0),&uStack_80,&uStack_84);
                if (iVar4 != 0) {
                    uVar1 = of_property_read_variable_u32_array(*(*arg1 + 0x2f0),&uStack_80,&uStack_90,2,0);
                    if (uVar1 < 0) {
                        _dev_err(*arg1,"Failed to read uVuA value(rc:%d)\n",uVar1);
                        goto code_r0x08005d44;
                    }
                    if (uStack_90 != 0) {
                        *(*(arg1 + 0x100) + iVar2 + 8) = uStack_90;
                    }
                    if (uStack_90._4_4_ != 0) {
                        *(*(arg1 + 0x100) + iVar2 + 0xc) = uStack_90._4_4_;
                    }
                }
                uVar6 = uVar6 + 1;
                iVar2 = iVar2 + 0x10;
            } while (uVar6 < *(arg1 + 0x108));
        }
    }
    uVar1 = 0;
code_r0x08005d44:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return uVar1;
    }
    puVar5 = __stack_chk_fail();
    *extraout_x18 = sym.adsp_init_bus_scaling;
    if (_segment.ehdr == 0) {
        _segment.ehdr = of_icc_get(*puVar5,"crypto_ddr");
        if (0xfffffffffffff000 < _segment.ehdr) {
            _dev_warn(*puVar5,"Crypto scaling not setup\n");
        }
    }
    uVar6 = of_icc_get(*puVar5,"rproc_ddr");
    puVar5[0x30] = uVar6;
    if (0xfffffffffffff000 < uVar6) {
        uVar6 = _dev_warn(*puVar5,"%s: No bus client\n","adsp_init_bus_scaling");
    }
    return uVar6;
}


// ===== sym.adsp_init_bus_scaling @ 0x08005dbc (size 160) =====

void sym.adsp_init_bus_scaling(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _segment.ehdr = of_icc_get(*arg1,"crypto_ddr");
        if (0xfffffffffffff000 < _segment.ehdr) {
            _dev_warn(*arg1,"Crypto scaling not setup\n");
        }
    }
    uVar1 = of_icc_get(*arg1,"rproc_ddr");
    *(arg1 + 0x180) = uVar1;
    if (0xfffffffffffff000 < uVar1) {
        _dev_warn(*arg1,"%s: No bus client\n","adsp_init_bus_scaling");
    }
    return;
}


// ===== sym.adsp_pds_attach @ 0x08005e5c (size 252) =====

int sym.adsp_pds_attach(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 == 0) {
        iVar3 = 0;
    }
    else if (*(arg1 + 0x260) == 0) {
        uVar1 = 0;
        do {
            uVar6 = uVar1;
            uVar1 = uVar6 + 1;
        } while (*(arg3 + uVar6 * 8) != 0);
        if (uVar1 != 1) {
            uVar7 = 0;
            do {
                uVar4 = dev_pm_domain_attach_by_name(arg1,*(arg3 + uVar7 * 8));
                *(arg2 + uVar7 * 8) = uVar4;
                if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
                    iVar3 = -0x3d;
                    if (uVar4 != 0) {
                        iVar3 = uVar4;
                    }
                    uVar2 = uVar7 - 1;
                    if (uVar2 < 0) {
                        return iVar3;
                    }
                    iVar5 = uVar2 << 3;
                    do {
                        dev_pm_domain_detach(*(arg2 + iVar5),0);
                        iVar5 = iVar5 + -8;
                    } while (iVar5 != -8);
                    return iVar3;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
        }
        iVar3 = uVar1 + -1;
    }
    else {
        *arg2 = arg1;
        pm_runtime_enable(arg1);
        iVar3 = 1;
    }
    return iVar3;
}


// ===== sym.qcom_pas_handover @ 0x08005f58 (size 316) =====

void sym.qcom_pas_handover(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0xf0) - 1;
    if (-1 < uVar1) {
        iVar3 = uVar1 << 4;
        do {
            regulator_set_voltage(*(*(arg1 + 0xe8) + iVar3),0,0x7fffffff);
            regulator_set_load(*(*(arg1 + 0xe8) + iVar3),0);
            regulator_disable(*(*(arg1 + 0xe8) + iVar3));
            iVar3 = iVar3 + -0x10;
        } while (iVar3 != -0x10);
    }
    uVar4 = *(arg1 + 0xd0);
    clk_disable(uVar4);
    clk_unprepare(uVar4);
    uVar4 = *(arg1 + 200);
    clk_disable(uVar4);
    clk_unprepare(uVar4);
    iVar2 = *(arg1 + 300);
    if (iVar2 != 0) {
        uVar5 = 0;
        do {
            dev_pm_genpd_set_performance_state(*(arg1 + 0x100 + uVar5 * 8),0);
            __pm_runtime_idle(*(arg1 + 0x100 + uVar5 * 8),5);
            uVar5 = uVar5 + 1;
        } while (uVar5 < iVar2);
    }
    if (*(arg1 + 0x168) < 0xfffffffffffff001) {
        iVar2 = icc_set_bw(*(arg1 + 0x168),0,0);
        if (iVar2 != 0) {
            _dev_err(*(arg1 + -0x18),"bandwidth request failed(rc:%d)\n",iVar2);
        }
    }
    else {
        _dev_err(*(arg1 + -0x18),"Bus scaling not setup for %s\n",*(*(arg1 + -8) + 0x18));
    }
    return;
}


// ===== sym.readl_relaxed @ 0x08006094 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8006098);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80060cc);
    return uVar1;
}


// ===== sym.adsp_pds_detach @ 0x08006104 (size 120) =====

void sym.adsp_pds_detach(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg3 != 0) && (*(*arg1 + 0x260) != 0)) {
        __pm_runtime_disable(*arg1,1);
        return;
    }
    if (arg3 != 0) {
        uVar1 = 0;
        do {
            dev_pm_domain_detach(*(arg2 + uVar1 * 8),0);
            uVar1 = uVar1 + 1;
        } while (uVar1 < arg3);
    }
    return;
}


// ===== sym.adsp_start @ 0x0800617c (size 1720) =====

uint64_t sym.adsp_start(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t extraout_x1;
    int64_t extraout_x1_00;
    int64_t extraout_x1_01;
    ulong extraout_x1_02;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    ulong *puVar10;
    uint64_t uVar11;
    ulong uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    ulong *puStack_b0;
    ulong *puStack_a8;
    uchar uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
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
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    puVar9 = *(arg1 + 0x28);
    iStack_90 = 0;
    iVar6 = (*puVar9)[0xe];
    if (iVar6 == 0) {
        iVar6 = **puVar9;
    }
    do {
        puVar1 = puVar9 + 3;
        qcom_q6v5_prepare(puVar1,iVar6);
        if (puVar9[0x30] < 0xfffffffffffff001) {
            uVar3 = icc_set_bw(puVar9[0x30],0xffffffff,0xffffffff);
            if (uVar3 == 0) goto code_r0x080061f0;
            uVar11 = uVar3;
            _dev_err(*puVar9,"bandwidth request failed(rc:%d)\n",uVar11);
            if (-1 < uVar3) goto code_r0x080061f0;
code_r0x080065f4:
            uVar12 = qcom_q6v5_unprepare(puVar1);
code_r0x080065fc:
            iVar6 = (*puVar9)[0xe];
            if (iVar6 == 0) {
                iVar6 = **puVar9;
            }
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_48) {
                return uVar11;
            }
            __stack_chk_fail(uVar12,iVar6);
        }
        else {
            _dev_err(*puVar9,"Bus scaling not setup for %s\n",*(puVar9[2] + 0x18));
code_r0x080061f0:
            uVar3 = sym.adsp_pds_enable(puVar9 + 0x22,*(puVar9 + 0x28));
            if (uVar3 < 0) {
                uVar11 = uVar3;
code_r0x080065d8:
                if (puVar9[0x30] < 0xfffffffffffff001) {
                    iVar4 = icc_set_bw(puVar9[0x30],0,0);
                    if (iVar4 != 0) {
                        _dev_err(*puVar9,"bandwidth request failed(rc:%d)\n",iVar4);
                    }
                }
                else {
                    _dev_err(*puVar9,"Bus scaling not setup for %s\n",*(puVar9[2] + 0x18));
                }
                goto code_r0x080065f4;
            }
            uVar3 = sym.adsp_pds_enable(puVar9 + 0x23,*(puVar9 + 0x144));
            if (uVar3 < 0) {
                uVar11 = uVar3;
code_r0x080065a0:
                arg1 = *(puVar9 + 0x28);
                if (*(puVar9 + 0x28) != 0) {
                    uVar5 = 0;
                    do {
                        dev_pm_genpd_set_performance_state(puVar9[uVar5 + 0x22],0);
                        __pm_runtime_idle(puVar9[uVar5 + 0x22],5);
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < arg1);
                }
                goto code_r0x080065d8;
            }
            iVar6 = puVar9[0x27];
            if (iVar6 != 0) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                snprintf(&stack0xffffffffffffff78,0x40,"{class: image, res: load_state, name: %s, val: %s}",
                         puVar9[0x26],0x8000506);
                uVar5 = qmp_send(iVar6,&stack0xffffffffffffff78,0x40);
                uVar11 = uVar5 & 0xffffffff;
                if (uVar5 == 0) goto code_r0x08006260;
code_r0x08006568:
                iVar4 = *(puVar9 + 0x144);
                if (iVar4 != 0) {
                    uVar5 = 0;
                    do {
                        dev_pm_genpd_set_performance_state(puVar9[uVar5 + 0x23],0);
                        __pm_runtime_idle(puVar9[uVar5 + 0x23],5);
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < iVar4);
                }
                goto code_r0x080065a0;
            }
code_r0x08006260:
            uVar12 = puVar9[0x1c];
            uVar5 = clk_prepare(uVar12);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x08006520:
                iVar6 = puVar9[0x27];
                if (iVar6 != 0) {
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    snprintf(&stack0xffffffffffffff78,0x40,"{class: image, res: load_state, name: %s, val: %s}",
                             puVar9[0x26],0x80008fd);
                    qmp_send(iVar6,&stack0xffffffffffffff78,0x40);
                }
                goto code_r0x08006568;
            }
            uVar5 = clk_enable(uVar12);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x08006518:
                clk_unprepare(uVar12);
                goto code_r0x08006520;
            }
            uVar13 = puVar9[0x1d];
            uVar5 = clk_prepare(uVar13);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x0800650c:
                uVar12 = puVar9[0x1c];
                clk_disable(uVar12);
                goto code_r0x08006518;
            }
            uVar5 = clk_enable(uVar13);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x08006504:
                clk_unprepare(uVar13);
                goto code_r0x0800650c;
            }
            uVar5 = sym.enable_regulators(puVar9);
            uVar11 = uVar5 & 0xffffffff;
            if (uVar5 != 0) {
code_r0x080064f8:
                uVar13 = puVar9[0x1d];
                clk_disable(uVar13);
                goto code_r0x08006504;
            }
            sym.scm_pas_enable_bw();
            iVar6 = (*puVar9)[0xe];
            if (iVar6 == 0) {
                iVar6 = **puVar9;
            }
            sym.trace_rproc_qcom_event(iVar6,"dtb_auth_reset","enter");
            if (((*(puVar9 + 0x14c) == 0) && (puVar9[0x2a] == 0)) ||
               (iVar4 = qcom_scm_pas_auth_and_reset(), iVar4 == 0)) {
                iVar6 = (*puVar9)[0xe];
                if (iVar6 == 0) {
                    iVar6 = **puVar9;
                }
                sym.trace_rproc_qcom_event(iVar6,"Q6_firmware_loading","enter");
                uVar5 = request_firmware(&stack0xffffffffffffff70,*(arg1 + 0x20),*puVar9);
                uVar11 = uVar5 & 0xffffffff;
                if (uVar5 == 0) {
                    uStack_a0 = *(puVar9 + 0x18d);
                    uStack_98 = puVar9[0x2b];
                    uVar3 = qcom_mdt_load_no_free
                                      (*puVar9,iStack_90,*(arg1 + 0x20),*(puVar9 + 0x29),puVar9[0x41],puVar9[0x3f]
                                       ,puVar9[0x42],puVar9 + 0x40);
                    uVar11 = uVar3;
                    if (uVar3 == 0) {
                        qcom_pil_info_store(puVar9[0x32],puVar9[0x3f],puVar9[0x42]);
                        sym.adsp_add_coredump_segments(puVar9,iStack_90);
                        iVar6 = (*puVar9)[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **puVar9;
                        }
                        sym.trace_rproc_qcom_event(iVar6,"Q6_auth_reset","enter");
                        iVar4 = qcom_scm_pas_auth_and_reset(*(puVar9 + 0x29));
                        if (iVar4 != 0) {
                            panic("Panicking, auth and reset failed for remoteproc %s\n",*(arg1 + 0x18));
                            uVar11 = 0;
                            goto code_r0x08006800;
                        }
                        iVar6 = (*puVar9)[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **puVar9;
                        }
                        sym.trace_rproc_qcom_event(iVar6,"Q6_auth_reset","exit");
                        if (puVar9[5] == 0) {
code_r0x08006418:
                            if (reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt == 0x0) {
                                uVar3 = qcom_q6v5_wait_for_start(puVar1,0x4e2);
                                uVar11 = uVar3;
                                if ((*(arg1 + 0x4c4) != '\0') && (uVar3 != 0)) {
code_r0x08006800:
                                    iVar7 = panic("Panicking, remoteproc %s failed to bootup.\n",*(puVar9[2] + 0x18));
                                    uVar12 = tpidr_el2;
                                    uVar12 = tpidr_el2;
                                    *extraout_x18 = 0x8006814;
                                    uStack_d8 = 0x8006814;
                                    iVar6 = sp_el0;
                                    iStack_e8 = *(iVar6 + 0x5e0);
                                    puVar10 = *(iVar7 + 0x28);
                                    puStack_e0 = &stack0xffffffffffffffc0;
                                    uStack_d0 = uVar13;
                                    uStack_c0 = uVar11;
                                    uStack_b8 = arg1;
                                    puStack_b0 = puVar1;
                                    puStack_a8 = puVar9;
                                    do {
                                        puVar9 = puVar10 + 3;
                                        iVar4 = qcom_q6v5_request_stop(puVar9,puVar10[0x69]);
                                        if (iVar4 == -0x6e) goto code_r0x08006a00;
                                        while( true ) {
                                            sym.scm_pas_enable_bw();
                                            if (*(puVar10 + 0x17c) == '\0') {
                                                iVar4 = qcom_scm_pas_shutdown(*(puVar10 + 0x29));
                                            }
                                            else {
                                                iVar4 = qcom_scm_pas_shutdown_retry();
                                            }
                                            if (iVar4 == 0) break;
                                            panic("Panicking, remoteproc %s failed to shutdown.\n",*(iVar7 + 0x18));
code_r0x08006a00:
                                            _dev_err(*puVar10,"timed out on wait\n");
                                        }
                                        if ((*(puVar10 + 0x14c) == 0) || (iVar4 = qcom_scm_pas_shutdown(), iVar4 == 0))
                                        {
                                            if (CONCAT44(*0x8000004,_segment.ehdr) < 0xfffffffffffff001) {
                                                mutex_lock(obj.scm_pas_bw_mutex);
                                                _segment.ehdr = _segment.ehdr + -1;
                                                if (_segment.ehdr == 0) {
                                                    icc_set_bw(*0x8000004 << 0x20,0,0);
                                                }
                                                mutex_unlock(obj.scm_pas_bw_mutex);
                                            }
                                            iVar4 = *(puVar10 + 0x28);
                                            if (iVar4 != 0) {
                                                uVar11 = 0;
                                                do {
                                                    dev_pm_genpd_set_performance_state(puVar10[uVar11 + 0x22],0);
                                                    __pm_runtime_idle(puVar10[uVar11 + 0x22],5);
                                                    uVar11 = uVar11 + 1;
                                                } while (uVar11 < iVar4);
                                            }
                                            iVar7 = puVar10[0x27];
                                            if (iVar7 != 0) {
                                                uStack_f8 = 0;
                                                uStack_f0 = 0;
                                                uStack_108 = 0;
                                                uStack_100 = 0;
                                                uStack_118 = 0;
                                                uStack_110 = 0;
                                                uStack_128 = 0;
                                                uStack_120 = 0;
                                                snprintf(&stack0xfffffffffffffed8,0x40,
                                                         "{class: image, res: load_state, name: %s, val: %s}",
                                                         puVar10[0x26],0x80008fd);
                                                qmp_send(iVar7,&stack0xfffffffffffffed8,0x40);
                                            }
                                            uVar12 = qcom_q6v5_unprepare(puVar9);
                                            if (uVar12 != 0) {
                                                uVar12 = sym.qcom_pas_handover(puVar9);
                                            }
                                            iVar6 = (*puVar10)[0xe];
                                            if (iVar6 == 0) {
                                                iVar6 = **puVar10;
                                            }
                                            iVar8 = sp_el0;
                                            if (*(iVar8 + 0x5e0) == iStack_e8) {
                                                return 0;
                                            }
                                            __stack_chk_fail(uVar12,iVar6);
                                        }
                                        panic("Panicking, remoteproc %s dtb failed to shutdown.\n",*(iVar7 + 0x18));
                                        iVar6 = tpidr_el1;
                                        if ((*(__cpu_online_mask + (*(cpu_number + iVar6) >> 3 & 0x1ffffff8)) >>
                                             (*(cpu_number + iVar6) & 0x3f) & 1) != 0) {
                                            iVar6 = sp_el0;
                                            piVar2 = iVar6 + 0x10;
                                            *(iVar6 + 0x10) = *piVar2 + 1;
                                            __traceiter_rproc_qcom_event(0,extraout_x1_02,"adsp_stop","enter");
                                            iVar8 = *piVar2;
                                            *(iVar6 + 0x10) = iVar8 + -1;
                                            if ((iVar8 + -1 == 0) || (*piVar2 == 0)) {
                                                preempt_schedule_notrace();
                                            }
                                        }
                                    } while( true );
                                }
                                if (uVar3 == 0xffffff92) {
                                    _dev_err(*puVar9,"start timed out\n");
                                }
                            }
                            else {
                                uVar11 = 0;
                            }
                        }
                        else {
                            iVar4 = sym.readl_relaxed(puVar9[5] + 8);
                            if (iVar4 == 0) {
                                uVar13 = 1;
                                do {
                                    msleep(0x14);
                                    if ((0xf9 < uVar13) &&
                                       ((reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt & 1) == 0))
                                    goto code_r0x08006408;
                                    iVar4 = sym.readl_relaxed(puVar9[5] + 8);
                                    uVar13 = uVar13 + 1;
                                } while (iVar4 == 0);
                            }
                            sym.writel_relaxed(puVar9[5],puVar9[5] + 0xc);
code_r0x08006408:
                            iVar4 = sym.readl_relaxed(puVar9[5] + 8);
                            if (iVar4 != 0) goto code_r0x08006418;
                            _dev_err(*puVar9,"Didn\'t get rmb signal from  %s\n",*(arg1 + 0x18));
                            uVar11 = 0;
                        }
                        qcom_mdt_free_metadata(*puVar9,*(puVar9 + 0x29),puVar9[0x2b],*(puVar9 + 0x18d),uVar11);
                    }
                    if (iStack_90 != 0) {
                        release_firmware();
                    }
                }
                if ((*(puVar9 + 0x14c) != 0) || (puVar9[0x2a] != 0)) {
                    qcom_mdt_free_metadata(*puVar9,*(puVar9 + 0x14c),puVar9 + 0x2c,*(puVar9 + 0x18d),uVar11);
                    release_firmware(puVar9[0x6a]);
                }
                uVar12 = sym.scm_pas_disable_bw();
                if (uVar11 != 0) {
                    sym.disable_regulators(puVar9);
                    goto code_r0x080064f8;
                }
                goto code_r0x080065fc;
            }
        }
        panic("Panicking, auth and reset failed for remoteproc %s dtb\n",*(arg1 + 0x18));
        iVar7 = tpidr_el1;
        iVar6 = extraout_x1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar6 = sp_el0;
            piVar2 = iVar6 + 0x10;
            *(iVar6 + 0x10) = *piVar2 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x1,"adsp_start","enter");
            iVar7 = *piVar2;
            *(iVar6 + 0x10) = iVar7 + -1;
            if ((iVar7 + -1 == 0) || (iVar6 = extraout_x1_00, *piVar2 == 0)) {
                preempt_schedule_notrace();
                iVar6 = extraout_x1_01;
            }
        }
    } while( true );
}


// ===== sym.adsp_stop @ 0x08006834 (size 624) =====

ulong sym.adsp_stop(int64_t arg1)

{
    ulong *arg1_00;
    int64_t *piVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong extraout_x1;
    int64_t iVar5;
    ulong *in_x18;
    ulong *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
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
    puVar6 = *(arg1 + 0x28);
    do {
        arg1_00 = puVar6 + 3;
        iVar2 = qcom_q6v5_request_stop(arg1_00,puVar6[0x69]);
        if (iVar2 == -0x6e) goto code_r0x08006a00;
        while( true ) {
            sym.scm_pas_enable_bw();
            if (*(puVar6 + 0x17c) == '\0') {
                iVar2 = qcom_scm_pas_shutdown(*(puVar6 + 0x29));
            }
            else {
                iVar2 = qcom_scm_pas_shutdown_retry();
            }
            if (iVar2 == 0) break;
            panic("Panicking, remoteproc %s failed to shutdown.\n",*(arg1 + 0x18));
code_r0x08006a00:
            _dev_err(*puVar6,"timed out on wait\n");
        }
        if ((*(puVar6 + 0x14c) == 0) || (iVar2 = qcom_scm_pas_shutdown(), iVar2 == 0)) {
            if (CONCAT44(*0x8000004,_segment.ehdr) < 0xfffffffffffff001) {
                mutex_lock(obj.scm_pas_bw_mutex);
                _segment.ehdr = _segment.ehdr + -1;
                if (_segment.ehdr == 0) {
                    icc_set_bw(*0x8000004 << 0x20,0,0);
                }
                mutex_unlock(obj.scm_pas_bw_mutex);
            }
            iVar2 = *(puVar6 + 0x28);
            if (iVar2 != 0) {
                uVar7 = 0;
                do {
                    dev_pm_genpd_set_performance_state(puVar6[uVar7 + 0x22],0);
                    __pm_runtime_idle(puVar6[uVar7 + 0x22],5);
                    uVar7 = uVar7 + 1;
                } while (uVar7 < iVar2);
            }
            arg1 = puVar6[0x27];
            if (arg1 != 0) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                snprintf(&uStack_88,0x40,"{class: image, res: load_state, name: %s, val: %s}",puVar6[0x26],0x80008fd
                        );
                qmp_send(arg1,&uStack_88,0x40);
            }
            uVar3 = qcom_q6v5_unprepare(arg1_00);
            if (uVar3 != 0) {
                uVar3 = sym.qcom_pas_handover(arg1_00);
            }
            iVar4 = (*puVar6)[0xe];
            if (iVar4 == 0) {
                iVar4 = **puVar6;
            }
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_48) {
                return 0;
            }
            __stack_chk_fail(uVar3,iVar4);
        }
        panic("Panicking, remoteproc %s dtb failed to shutdown.\n",*(arg1 + 0x18));
        iVar4 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar4) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar4) & 0x3f) & 1) !=
            0) {
            iVar4 = sp_el0;
            piVar1 = iVar4 + 0x10;
            *(iVar4 + 0x10) = *piVar1 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x1,"adsp_stop","enter");
            iVar5 = *piVar1;
            *(iVar4 + 0x10) = iVar5 + -1;
            if ((iVar5 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    } while( true );
}


// ===== sym.adsp_attach @ 0x08006b40 (size 1016) =====

int64_t sym.adsp_attach(int64_t arg1)

{
    bool bVar1;
    ulong *puVar2;
    ulong *arg1_00;
    int64_t iVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uchar *in_x3;
    ulong *in_x18;
    ulong uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    int64_t iStack_90;
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
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    arg1_00 = *(arg1 + 0x28);
    iStack_90 = 0;
    iVar4 = request_firmware(&iStack_90,*(arg1 + 0x20),arg1 + 0x38);
    if (iVar4 < 0) {
        _dev_err(*arg1_00,"Failed to request DSP firmware\n");
        _dev_err(*arg1_00,"Dumps will not be available\n");
    }
    else {
        sym.adsp_add_coredump_segments(arg1_00,iStack_90);
        release_firmware(iStack_90);
    }
    puVar2 = arg1_00 + 3;
    qcom_q6v5_prepare(puVar2);
    if (arg1_00[0x30] < 0xfffffffffffff001) {
        uVar5 = icc_set_bw(arg1_00[0x30],0xffffffff,0xffffffff);
        if (uVar5 == 0) goto code_r0x08006bc4;
        uVar8 = uVar5;
        _dev_err(*arg1_00,"bandwidth request failed(rc:%d)\n");
        if (-1 < uVar5) goto code_r0x08006bc4;
code_r0x08006d68:
        qcom_q6v5_unprepare(puVar2);
        iVar7 = sym.adsp_start(arg1);
    }
    else {
        _dev_err(*arg1_00,"Bus scaling not setup for %s\n",*(arg1_00[2] + 0x18));
code_r0x08006bc4:
        iVar4 = sym.adsp_pds_enable(arg1_00 + 0x22,*(arg1_00 + 0x28));
        if (iVar4 < 0) {
code_r0x08006d4c:
            if (arg1_00[0x30] < 0xfffffffffffff001) {
                uVar8 = 0;
                uVar5 = icc_set_bw(arg1_00[0x30],0);
                if (uVar5 != 0) {
                    uVar8 = uVar5;
                    _dev_err(*arg1_00,"bandwidth request failed(rc:%d)\n");
                }
            }
            else {
                uVar8 = *(arg1_00[2] + 0x18);
                _dev_err(*arg1_00,"Bus scaling not setup for %s\n");
            }
            goto code_r0x08006d68;
        }
        if (arg1_00[5] == 0) {
            _dev_err(*arg1_00,"Remote proc cannot be late attached\n");
            iVar4 = *(arg1_00 + 0x28);
joined_r0x08006e54:
            if (iVar4 != 0) {
                uVar8 = 0;
                do {
                    dev_pm_genpd_set_performance_state(arg1_00[uVar8 + 0x22],0);
                    __pm_runtime_idle(arg1_00[uVar8 + 0x22],5);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < iVar4);
            }
            goto code_r0x08006d4c;
        }
        iVar4 = sym.adsp_pds_enable(arg1_00 + 0x23,*(arg1_00 + 0x144));
        if (iVar4 < 0) {
code_r0x08006d14:
            iVar4 = *(arg1_00 + 0x28);
            goto joined_r0x08006e54;
        }
        in_x3 = arg1_00[0x26];
        uVar9 = arg1_00[0x27];
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        snprintf(&uStack_88,0x40,"{class: image, res: load_state, name: %s, val: %s}",in_x3,0x8000506);
        uVar8 = 0x40;
        iVar4 = qmp_send(uVar9,&uStack_88);
        if (iVar4 != 0) {
code_r0x08006cdc:
            iVar4 = *(arg1_00 + 0x144);
            if (iVar4 != 0) {
                uVar8 = 0;
                do {
                    dev_pm_genpd_set_performance_state(arg1_00[uVar8 + 0x23],0);
                    __pm_runtime_idle(arg1_00[uVar8 + 0x23],5);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < iVar4);
            }
            goto code_r0x08006d14;
        }
        uVar9 = arg1_00[0x1c];
        iVar4 = clk_prepare(uVar9);
        if (iVar4 != 0) {
code_r0x08006c9c:
            in_x3 = arg1_00[0x26];
            uVar9 = arg1_00[0x27];
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            snprintf(&uStack_88,0x40,"{class: image, res: load_state, name: %s, val: %s}",in_x3,0x80008fd);
            qmp_send(uVar9,&uStack_88,0x40);
            goto code_r0x08006cdc;
        }
        iVar4 = clk_enable(uVar9);
        if (iVar4 != 0) {
code_r0x08006c94:
            clk_unprepare(uVar9);
            goto code_r0x08006c9c;
        }
        uVar9 = arg1_00[0x1d];
        iVar4 = clk_prepare(uVar9);
        if (iVar4 != 0) {
code_r0x08006c88:
            uVar9 = arg1_00[0x1c];
            clk_disable(uVar9);
            goto code_r0x08006c94;
        }
        iVar4 = clk_enable(uVar9);
        if (iVar4 != 0) {
code_r0x08006c80:
            clk_unprepare(uVar9);
            goto code_r0x08006c88;
        }
        iVar4 = sym.enable_regulators(arg1_00);
        if (iVar4 != 0) {
code_r0x08006c74:
            uVar9 = arg1_00[0x1d];
            clk_disable(uVar9);
            goto code_r0x08006c80;
        }
        iVar4 = 1;
        do {
            iVar6 = sym.readl_relaxed(arg1_00[5] + 8);
            if (iVar6 != 0) {
                sym.writel_relaxed(arg1_00[5],arg1_00[5] + 0xc);
                break;
            }
            msleep(0x14);
            iVar6 = iVar4 + 1;
            bVar1 = iVar4 < 0xfa;
            iVar4 = iVar6;
        } while ((bVar1) || ((reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt & 1) != 0));
        iVar4 = sym.readl_relaxed(arg1_00[5] + 8);
        if (iVar4 == 0) {
            _dev_err(*arg1_00,"Didn\'t get rmb signal from %s\n",*(arg1 + 0x18));
code_r0x08006f14:
            sym.disable_regulators(arg1_00);
            goto code_r0x08006c74;
        }
        if (reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt == 0x0) {
            iVar7 = qcom_q6v5_wait_for_start(puVar2,0x4e2);
            if ((*(arg1 + 0x4c4) != '\0') && (iVar7 != 0)) goto code_r0x08006f24;
            if (iVar7 == -0x6e) {
                _dev_err(*arg1_00,"start timed out\n");
                goto code_r0x08006f14;
            }
        }
        else {
            iVar7 = 0;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return iVar7;
    }
    __stack_chk_fail(iVar7);
code_r0x08006f24:
    auVar10 = panic("Panicking, remoteproc %s failed to bootup.\n",*(arg1_00[2] + 0x18));
    iVar7 = *(auVar10._0_8_ + 0x28);
    iVar4 = auVar10._8_4_ - *(iVar7 + 0x200);
    if ((-1 < iVar4) && (iVar4 + uVar8 <= *(iVar7 + 0x210))) {
        if (in_x3 != NULL) {
            *in_x3 = 1;
        }
        return *(iVar7 + 0x208) + iVar4;
    }
    return 0;
}


// ===== sym.adsp_da_to_va @ 0x08006f38 (size 80) =====

int64_t sym.adsp_da_to_va(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    
    iVar1 = *(arg1 + 0x28);
    iVar2 = arg2 - *(iVar1 + 0x200);
    if ((-1 < iVar2) && (iVar2 + arg3 <= *(iVar1 + 0x210))) {
        if (arg4 != 0) {
            *arg4 = 1;
        }
        return *(iVar1 + 0x208) + iVar2;
    }
    return 0;
}


// ===== sym.adsp_load @ 0x08006f88 (size 396) =====

int sym.adsp_load(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0x28);
    iVar2 = (*puVar3)[0xe];
    if (iVar2 == 0) {
        iVar2 = **puVar3;
    }
    rproc_coredump_cleanup(puVar3[2],iVar2);
    sym.scm_pas_enable_bw();
    if ((*(puVar3 + 0x14c) == 0) || (puVar3[0x2a] == 0)) {
        if (0xfffffffffffff000 < CONCAT44(*0x8000004,_segment.ehdr)) {
            return 0;
        }
        mutex_lock(obj.scm_pas_bw_mutex);
        iVar1 = 0;
    }
    else {
        iVar1 = request_firmware(puVar3 + 0x6a,puVar3[0x2a],*puVar3);
        if (iVar1 == 0) {
            iVar1 = qcom_mdt_load_no_free
                              (*puVar3,puVar3[0x6a],puVar3[0x2a],*(puVar3 + 0x14c),puVar3[0x3d],puVar3[0x3b],
                               puVar3[0x3e],puVar3 + 0x3c,*(puVar3 + 0x18d),puVar3 + 0x2c);
            if (iVar1 != 0) {
                _dev_err(*puVar3,"failed to load %s: %d\n",puVar3[0x2a],iVar1);
                release_firmware(puVar3[0x6a]);
            }
        }
        else {
            _dev_err(*puVar3,"request_firmware failed for %s: %d\n",puVar3[0x2a],iVar1);
        }
        iVar2 = (*puVar3)[0xe];
        if (iVar2 == 0) {
            iVar2 = **puVar3;
        }
        if (0xfffffffffffff000 < CONCAT44(*0x8000004,_segment.ehdr)) {
            return iVar1;
        }
        mutex_lock(obj.scm_pas_bw_mutex,iVar2);
    }
    _segment.ehdr = _segment.ehdr + -1;
    if (_segment.ehdr == 0) {
        icc_set_bw(*0x8000004 << 0x20,0,0);
    }
    mutex_unlock(obj.scm_pas_bw_mutex);
    return iVar1;
}


// ===== sym.adsp_panic @ 0x0800722c (size 44) =====

void sym.adsp_panic(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_q6v5_panic(*(arg1 + 0x28) + 0x18);
    return;
}


// ===== sym.trace_rproc_qcom_event @ 0x08007258 (size 44) =====

void sym.trace_rproc_qcom_event(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}


// ===== sym.adsp_pds_enable @ 0x0800730c (size 300) =====

int sym.adsp_pds_enable(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 != 0) {
        uVar9 = 0;
        do {
            dev_pm_genpd_set_performance_state(*(arg1 + uVar9 * 8),0x7fffffff);
            iVar5 = __pm_runtime_resume(*(arg1 + uVar9 * 8),4);
            if (iVar5 < 0) {
                puVar1 = *(arg1 + uVar9 * 8) + 0x1f8;
                uVar7 = *puVar1;
                goto code_r0x0800737c;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < arg2);
    }
    return 0;
code_r0x0800737c:
    do {
        uVar6 = uVar7;
        if (uVar6 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            uVar7 = uVar2;
            if (uVar2 != uVar6) goto code_r0x080073a0;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar6 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080073a0:
    } while (uVar6 != uVar2);
    dev_pm_genpd_set_performance_state(*(arg1 + uVar9 * 8),0);
    uVar6 = uVar9 - 1;
    if (-1 < uVar6) {
        iVar8 = uVar6 << 3;
        do {
            dev_pm_genpd_set_performance_state(*(arg1 + iVar8),0);
            __pm_runtime_idle(*(arg1 + iVar8),5);
            iVar8 = iVar8 + -8;
        } while (iVar8 != -8);
    }
    return iVar5;
}


// ===== sym.enable_regulators @ 0x08007438 (size 264) =====

int sym.enable_regulators(int64_t arg1)

{
    ulong *puVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(arg1 + 0x108)) {
        iVar4 = 0;
        iVar5 = 0;
        do {
            puVar1 = *(arg1 + 0x100) + iVar4;
            regulator_set_voltage(*puVar1,*(puVar1 + 1),0x7fffffff);
            puVar1 = *(arg1 + 0x100) + iVar4;
            regulator_set_load(*puVar1,*(puVar1 + 0xc));
            iVar3 = regulator_enable(*(*(arg1 + 0x100) + iVar4));
            if (iVar3 != 0) {
                _dev_err(*arg1,"Regulator enable failed(rc:%d)\n",iVar3);
                uVar2 = *(arg1 + 0x108) - 1;
                if (uVar2 < 0) {
                    return iVar3;
                }
                iVar5 = uVar2 << 4;
                do {
                    regulator_set_voltage(*(*(arg1 + 0x100) + iVar5),0,0x7fffffff);
                    regulator_set_load(*(*(arg1 + 0x100) + iVar5),0);
                    regulator_disable(*(*(arg1 + 0x100) + iVar5));
                    iVar5 = iVar5 + -0x10;
                } while (iVar5 != -0x10);
                return iVar3;
            }
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 0x10;
        } while (iVar5 < *(arg1 + 0x108));
    }
    return 0;
}


// ===== sym.scm_pas_enable_bw @ 0x08007540 (size 160) =====

void sym.scm_pas_enable_bw(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) < 0xfffffffffffff001) {
        mutex_lock(obj.scm_pas_bw_mutex);
        if ((_segment.ehdr == 0) && (iVar1 = icc_set_bw(*0x8000004 << 0x20,0xffffffff,0xffffffff), iVar1 != 0)) {
            _printk(0x800038a,iVar1);
            icc_set_bw(CONCAT44(*0x8000004,_segment.ehdr),0,0);
        }
        else {
            _segment.ehdr = _segment.ehdr + 1;
        }
        mutex_unlock(obj.scm_pas_bw_mutex);
    }
    return;
}


// ===== sym.adsp_add_coredump_segments @ 0x080075e0 (size 332) =====

void sym.adsp_add_coredump_segments(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg2 + 8);
    iVar6 = *(arg1 + 0x10);
    uVar4 = *(iVar9 + 0x2c);
    if (*(iVar9 + 0x2c) == 0) {
        uVar7 = 0;
        uVar8 = 0xffffffff;
    }
    else {
        uVar10 = 0;
        uVar7 = 0;
        uVar8 = 0xffffffff;
        puVar11 = *(iVar9 + 0x1c) + iVar9 + 0x18;
        do {
            if (((puVar11[-6] == 1) && (uVar1 = *puVar11, (uVar1 & 0x7000000) != 0x2000000)) && (puVar11[-1] != 0)) {
                uVar2 = puVar11[-3];
                iVar3 = rproc_coredump_add_segment(iVar6,uVar2);
                if (iVar3 != 0) {
                    _dev_err(*arg1,"failed to add rproc segment: %d\n",iVar3);
                    rproc_coredump_cleanup(*(arg1 + 0x10));
                    return;
                }
                if (uVar8 <= uVar2) {
                    uVar2 = uVar8;
                }
                uVar7 = uVar7 | (uVar1 & 0x8000000) >> 0x1b;
                uVar4 = *(iVar9 + 0x2c);
                uVar8 = uVar2;
            }
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 8;
        } while (uVar10 < uVar4);
    }
    for (piVar5 = *(iVar6 + 0x4f8); piVar5 != iVar6 + 0x4f8; piVar5 = *piVar5) {
        piVar5[2] = (*(arg1 + 0x1f8) - uVar8) + piVar5[2];
    }
    if (uVar7 != 0) {
        *(arg1 + 0x200) = (*(arg1 + 0x1f8) - uVar8) + *(arg1 + 0x200);
    }
    return;
}


// ===== sym.writel_relaxed @ 0x0800772c (size 112) =====

void sym.writel_relaxed(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(1,0x20,arg1,0x8007730);
    *arg1 = 1;
    log_post_write_mmio(1,0x20,arg1,0x800776c);
    return;
}


// ===== sym.scm_pas_disable_bw @ 0x0800779c (size 116) =====

void sym.scm_pas_disable_bw(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) < 0xfffffffffffff001) {
        mutex_lock(obj.scm_pas_bw_mutex);
        _segment.ehdr = _segment.ehdr + -1;
        if (_segment.ehdr == 0) {
            icc_set_bw(*0x8000004 << 0x20,0,0);
        }
        mutex_unlock(obj.scm_pas_bw_mutex);
    }
    return;
}


// ===== sym.disable_regulators @ 0x08007810 (size 120) =====

void sym.disable_regulators(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x108) - 1;
    if (-1 < uVar1) {
        iVar2 = uVar1 << 4;
        do {
            regulator_set_voltage(*(*(arg1 + 0x100) + iVar2),0,0x7fffffff);
            regulator_set_load(*(*(arg1 + 0x100) + iVar2),0);
            regulator_disable(*(*(arg1 + 0x100) + iVar2));
            iVar2 = iVar2 + -0x10;
        } while (iVar2 != -0x10);
    }
    return;
}


// ===== sym.txn_id_show @ 0x08007888 (size 80) =====

int64_t sym.txn_id_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = qcom_sysmon_get_txn_id(*(*(arg1 + 0x98) + 0x348));
    iVar2 = sysfs_emit(arg2,"%zu\n",uVar1);
    return iVar2;
}


// ===== sym.__cfi_check_fail @ 0x080078d8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800791c

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
    //switch table (4 cases) at 0x8000378
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007930);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08007934 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08007968 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.adsp_probe.7fdbc449ae15d618c663cd08c198be89.cfi_jt);
    return;
}

