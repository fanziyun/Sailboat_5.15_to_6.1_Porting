// decompiled from icc-rpmh by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x08002118

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x3557318fb8d07b71) {
        if (arg1 < -0x47d1742e34f6f43b) {
            if (arg1 != -0x6bdc4207f0438b83) {
                if (arg1 != -0x5573b19c60012535) goto code_r0x080020d8;
                pcVar2 = sym.qcom_icc_aggregate_stub.cfi_jt;
code_r0x08001180:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080020d8;
            }
            pcVar2 = sym.qcom_icc_rpmh_configure_qos.cfi_jt;
        }
        else {
            if (arg1 != -0x47d1742e34f6f43b) {
                if (arg1 != -0x38bba01b3e1d68de) goto code_r0x080020d8;
                pcVar2 = sym.qcom_icc_set_stub.cfi_jt;
                goto code_r0x08001180;
            }
            pcVar2 = sym.qcom_icc_bcm_init.cfi_jt;
        }
    }
    else if (arg1 < 0x32f26b06b58450ae) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.qcom_icc_rpmh_remove.cfi_jt;
            goto code_r0x08001180;
        }
        if (arg1 != -0xe09c713c6537453) goto code_r0x080020d8;
        pcVar2 = sym.qcom_icc_get_bw_stub.cfi_jt;
    }
    else if (arg1 == 0x32f26b06b58450ae) {
        pcVar2 = sym.qcom_icc_xlate_extended.cfi_jt;
    }
    else {
        if (arg1 != 0x5b83a3fd302a5421) {
            if (arg1 != 0x5c9a80fde6c1337f) goto code_r0x080020d8;
            pcVar2 = sym.qcom_icc_pre_aggregate_stub.e9cd3a949b3ac4d9056053b76c31cee4.cfi_jt;
            goto code_r0x08001180;
        }
        pcVar2 = sym.qcom_icc_rpmh_sync_state.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080020d8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800212c);
    (*pcVar1)();
}


// ===== sym.qcom_icc_rpmh_configure_qos.cfi_jt @ 0x080011c0 (size 8) =====

int sym.qcom_icc_rpmh_configure_qos.cfi_jt(int64_t param_1)

{
    uint uVar1;
    uchar uVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(param_1 + 0x78);
    if (uVar4 != 0) {
        uVar9 = 0;
        do {
            puVar6 = *(*(param_1 + 0x70) + uVar9 * 8);
            iVar3 = *(puVar6 + 0x10);
            if (*(puVar6 + 0x53) == '\0') {
                if ((iVar3 == 0) && (puVar6[0x11] != 0)) {
                    uVar5 = 0;
                    do {
                        if (*(puVar6[uVar5 + 0x12] + 0x170) != 0) {
                            iVar3 = 0;
                            goto code_r0x0800190c;
                        }
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < puVar6[0x11]);
                }
            }
            else {
code_r0x0800190c:
                uVar2 = *(puVar6 + 0x51);
                *(puVar6 + 0x51) = 1;
                uVar7 = *(*(param_1 + 0xb8) + iVar3 * 8);
                qcom_icc_bcm_voter_add(uVar7,puVar6);
                iVar3 = qcom_icc_bcm_voter_commit(uVar7);
                *(puVar6 + 0x51) = uVar2;
                if (iVar3 != 0) {
                    _dev_err(*(param_1 + 0x68),"failed to vote BW to %s for QoS\n",*puVar6);
                    return iVar3;
                }
                uVar4 = *(param_1 + 0x78);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar4);
    }
    uVar1 = *(param_1 + 0xb0);
    uVar7 = *(param_1 + 0xa8);
    iVar3 = clk_bulk_prepare(uVar1,uVar7);
    if (iVar3 == 0) {
        iVar3 = clk_bulk_enable(uVar1,uVar7);
        if (iVar3 == 0) {
            uVar4 = *(param_1 + 0x88);
            if (uVar4 != 0) {
                uVar9 = 0;
                do {
                    iVar8 = *(*(param_1 + 0x80) + uVar9 * 8);
                    if ((iVar8 != 0) && (*(iVar8 + 0x170) != 0)) {
                        pcVar10 = **(iVar8 + 0x178);
                        __cfi_slowpath_diag(0x5be4ec59ae83617c,pcVar10,0x8000160);
                        (*pcVar10)(iVar8);
                        *(*(iVar8 + 0x170) + 0x10) = 1;
                        uVar4 = *(param_1 + 0x88);
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar4);
            }
            uVar1 = *(param_1 + 0xb0);
            uVar7 = *(param_1 + 0xa8);
            clk_bulk_disable(uVar1,uVar7);
            clk_bulk_unprepare(uVar1,uVar7);
            uVar4 = *(param_1 + 0x78);
            if (uVar4 != 0) {
                uVar9 = 0;
                do {
                    iVar8 = *(*(param_1 + 0x70) + uVar9 * 8);
                    iVar3 = *(iVar8 + 0x80);
                    if (*(iVar8 + 0x53) == '\0') {
                        if ((iVar3 == 0) && (*(iVar8 + 0x88) != 0)) {
                            uVar5 = 0;
                            do {
                                if (*(*(iVar8 + uVar5 * 8 + 0x90) + 0x170) != 0) {
                                    iVar3 = 0;
                                    goto code_r0x08001a4c;
                                }
                                uVar5 = uVar5 + 1;
                            } while (uVar5 < *(iVar8 + 0x88));
                        }
                    }
                    else {
code_r0x08001a4c:
                        uVar7 = *(*(param_1 + 0xb8) + iVar3 * 8);
                        qcom_icc_bcm_voter_add(uVar7);
                        qcom_icc_bcm_voter_commit(uVar7);
                        uVar4 = *(param_1 + 0x78);
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar4);
            }
            return 0;
        }
        clk_bulk_unprepare(uVar1,uVar7);
    }
    _dev_err(*(param_1 + 0x68),"failed to enable clocks for QoS\n");
    return iVar3;
}


// ===== sym.qcom_icc_rpmh_remove.cfi_jt @ 0x080011c8 (size 8) =====

void sym.qcom_icc_rpmh_remove.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    qcom_icc_debug_unregister(iVar1);
    clk_bulk_put_all(*(iVar1 + 0xb0),*(iVar1 + 0xa8));
    icc_nodes_remove(iVar1);
    icc_provider_del(iVar1);
    return;
}


// ===== sym.qcom_icc_rpmh_probe.cfi_jt @ 0x080011d0 (size 8) =====

uint64_t sym.qcom_icc_rpmh_probe.cfi_jt(int64_t param_1)

{
    int64_t arg3;
    int64_t iVar1;
    char cVar2;
    int64_t *piVar3;
    code *pcVar4;
    uint32_t uVar5;
    ulong *puVar6;
    int64_t arg1;
    uint *puVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = param_1 + 0x10;
    puVar6 = of_device_get_match_data(arg3);
    if (puVar6 == NULL) {
        uVar11 = 0xffffffea;
        goto code_r0x08001d44;
    }
    iVar1 = puVar6[1];
    uVar13 = puVar6[2];
    arg1 = devm_kmalloc(arg3,0xd0,0xdc0);
    if (arg1 != 0) {
        iVar8 = uVar13 * 8 + 8;
        if (0xfffffffffffffff7 < uVar13 * 8) {
            iVar8 = -1;
        }
        if (uVar13 >> 0x3d != 0) {
            iVar8 = -1;
        }
        puVar7 = devm_kmalloc(arg3,iVar8,0xdc0);
        if (puVar7 != NULL) {
            iVar8 = of_find_property(*(param_1 + 0x300),"qcom,stub",0);
            uVar9 = *(param_1 + 0x300);
            *(arg1 + 200) = iVar8 != 0;
            iVar8 = of_find_property(uVar9,"qcom,skip-qos",0);
            *(arg1 + 0xc9) = iVar8 != 0;
            *(arg1 + 0x20) = sym.qcom_icc_set_stub.cfi_jt;
            *(arg1 + 0x28) = sym.qcom_icc_aggregate_stub.cfi_jt;
            *(arg1 + 0x30) = sym.qcom_icc_pre_aggregate_stub.e9cd3a949b3ac4d9056053b76c31cee4.cfi_jt;
            *(arg1 + 0x48) = sym.qcom_icc_xlate_extended.cfi_jt;
            *(arg1 + 0x50) = arg3;
            *(arg1 + 0x10) = arg1 + 0x10;
            *(arg1 + 0x18) = arg1 + 0x10;
            *(arg1 + 0x60) = puVar7;
            *(arg1 + 0x68) = arg3;
            *(arg1 + 0x38) = sym.qcom_icc_get_bw_stub.cfi_jt;
            *(arg1 + 0x70) = puVar6[3];
            *(arg1 + 0x80) = puVar6[1];
            *(arg1 + 0x88) = puVar6[2];
            if (*(arg1 + 200) == '\0') {
                *(arg1 + 0x78) = puVar6[4];
                uVar11 = puVar6[6];
                *(arg1 + 0xc0) = uVar11;
                if (uVar11 >> 0x3d != 0) {
                    uVar11 = 0xfffffff4;
                    *(arg1 + 0xb8) = 0;
                    goto code_r0x08001d44;
                }
                iVar8 = devm_kmalloc(arg3,uVar11 << 3,0xdc0);
                *(arg1 + 0xb8) = iVar8;
                if (iVar8 == 0) goto code_r0x08001d40;
                if (*(arg1 + 0xc0) != 0) {
                    uVar12 = 0;
                    do {
                        iVar8 = uVar12 * 8;
                        uVar9 = of_bcm_voter_get(*(arg1 + 0x68),*(puVar6[5] + iVar8));
                        *(*(arg1 + 0xb8) + iVar8) = uVar9;
                        uVar11 = *(*(arg1 + 0xb8) + iVar8);
                        if (0xfffffffffffff000 < uVar11) goto code_r0x08001d44;
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < *(arg1 + 0xc0));
                }
            }
            piVar10 = platform_get_resource(param_1,0x200,0);
            if (piVar10 == NULL) {
                *(arg1 + 0xa0) = 0;
            }
            else {
                uVar11 = devm_ioremap(arg3,*piVar10,(piVar10[1] - *piVar10) + 1);
                if (uVar11 < 0xfffffffffffff001) {
                    uVar11 = __devm_regmap_init_mmio_clk(arg3,0,uVar11,*puVar6,0,0);
                }
                *(arg1 + 0xa0) = uVar11;
                if (0xfffffffffffff000 < uVar11) {
                    uVar11 = uVar11 & 0xffffffff;
                    goto code_r0x08001d44;
                }
            }
            uVar12 = icc_provider_add(arg1);
            uVar11 = uVar12 & 0xffffffff;
            if (uVar12 == 0) {
                uVar5 = devm_clk_bulk_get_all(*(arg1 + 0x68),arg1 + 0xa8);
                *(arg1 + 0xb0) = uVar5;
                if (uVar5 < 0) {
                    uVar11 = uVar5;
                }
                else {
                    if (*(arg1 + 0x78) != 0) {
                        uVar11 = 0;
                        do {
                            sym.qcom_icc_bcm_init(arg1,*(*(arg1 + 0x70) + uVar11 * 8),arg3);
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < *(arg1 + 0x78));
                    }
                    if (uVar13 != 0) {
                        uVar12 = 0;
                        do {
                            puVar6 = *(iVar1 + uVar12 * 8);
                            if (puVar6 != NULL) {
                                uVar9 = dev_get_regmap(*(arg1 + 0x68),0);
                                puVar6[0x2d] = uVar9;
                                uVar11 = icc_node_create(*(puVar6 + 0x21));
                                if (0xfffffffffffff000 < uVar11) goto code_r0x08001f1c;
                                uVar9 = *puVar6;
                                *(uVar11 + 0x70) = puVar6;
                                *(uVar11 + 8) = uVar9;
                                icc_node_add(uVar11,arg1);
                                if (*(puVar6 + 0x10a) != 0) {
                                    uVar14 = 0;
                                    do {
                                        if (uVar14 == 0x80) {
    //WARNING: Does not return
                                            pcVar4 = SoftwareBreakpoint(0x5512,0x8001f4c);
                                            (*pcVar4)();
                                        }
                                        icc_link_create(uVar11,*(puVar6 + uVar14 * 2 + 8));
                                        uVar14 = uVar14 + 1;
                                    } while (uVar14 < *(puVar6 + 0x10a));
                                }
                                *(puVar7 + uVar12 * 2 + 2) = uVar11;
                            }
                            uVar12 = uVar12 + 1;
                        } while (uVar12 != uVar13);
                    }
                    cVar2 = *(arg1 + 0xc9);
                    *puVar7 = uVar13;
                    if (cVar2 == '\0') {
                        uVar13 = sym.qcom_icc_rpmh_configure_qos(arg1);
                        uVar11 = uVar13 & 0xffffffff;
                        if (uVar13 != 0) {
code_r0x08001f1c:
                            clk_bulk_put_all(*(arg1 + 0xb0),*(arg1 + 0xa8));
                            icc_nodes_remove(arg1);
                            icc_provider_del(arg1);
                            goto code_r0x08001d44;
                        }
                    }
                    cVar2 = *(arg1 + 200);
                    *(param_1 + 0xa8) = arg1;
                    if (cVar2 == '\0') {
                        *(arg1 + 0x20) = sym.qcom_icc_set.cfi_jt;
                        *(arg1 + 0x28) = sym.qcom_icc_aggregate.cfi_jt;
                        *(arg1 + 0x30) = sym.qcom_icc_pre_aggregate.cfi_jt;
                    }
                    qcom_icc_debug_register(arg1);
                    mutex_lock(obj.probe_list_lock);
                    piVar3 = *0x8000138;
                    piVar10 = arg1 + 0x90;
                    uVar11 = __list_add_valid(piVar10,*0x8000138,obj.qnoc_probe_list);
                    if ((uVar11 & 1) != 0) {
                        *0x8000138 = piVar10;
                        *(arg1 + 0x90) = obj.qnoc_probe_list;
                        *(arg1 + 0x98) = piVar3;
                        *piVar3 = piVar10;
                    }
                    mutex_unlock(obj.probe_list_lock);
                    uVar11 = 0;
                }
            }
            goto code_r0x08001d44;
        }
    }
code_r0x08001d40:
    uVar11 = 0xfffffff4;
code_r0x08001d44:
    return uVar11 & 0xffffffff;
}


// ===== sym.qcom_icc_bcm_init.cfi_jt @ 0x080011d8 (size 8) =====

uint64_t sym.qcom_icc_bcm_init.cfi_jt(int64_t param_1,ulong *param_2,ulong param_3)

{
    int16_t iVar1;
    uint uVar2;
    uchar uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    ulong uVar11;
    int64_t iVar12;
    int *piVar13;
    uint64_t uVar14;
    code *pcVar15;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_40 = 0;
    if (*(param_2 + 0xc) == 0) {
        iVar4 = cmd_db_read_addr(*param_2);
        uVar11 = *param_2;
        *(param_2 + 0xc) = iVar4;
        if (iVar4 == 0) {
            pcVar7 = "%s could not find RPMh address\n";
code_r0x08001880:
            _dev_err(param_3,pcVar7,uVar11);
            piVar13 = 0xffffffea;
        }
        else {
            piVar13 = cmd_db_read_aux_data(uVar11,&iStack_40);
            if (piVar13 < 0xfffffffffffff001) {
                if (iStack_40 == 0) {
                    uVar11 = *param_2;
                    pcVar7 = "%s command db missing or partial aux data\n";
                    goto code_r0x08001880;
                }
                iVar4 = *piVar13;
                if (iVar4 == 0) {
                    iVar4 = 1;
                }
                *(param_2 + 0x54) = iVar4;
                iVar1 = piVar13[1];
                if (iVar1 == 0) {
                    iVar1 = 1;
                }
                *(param_2 + 0xb) = iVar1;
                *(param_2 + 0x5a) = *(piVar13 + 6);
                *(param_2 + 0x5b) = *(piVar13 + 7);
                param_2[0xc] = param_2 + 0xc;
                param_2[0xd] = param_2 + 0xc;
                param_2[0xe] = param_2 + 0xe;
                param_2[0xf] = param_2 + 0xe;
                if (param_2[8] == 0) {
                    param_2[8] = 1000;
                    iVar6 = param_2[0x11];
                }
                else {
                    iVar6 = param_2[0x11];
                }
                if (iVar6 != 0) {
                    uVar8 = 0;
                    do {
                        iVar6 = param_2[uVar8 + 0x12];
                        if (2 < *(iVar6 + 0x160)) {
    //WARNING: Does not return
                            pcVar15 = SoftwareBreakpoint(0x5512,0x80018ac);
                            (*pcVar15)();
                        }
                        uVar8 = uVar8 + 1;
                        *(iVar6 + *(iVar6 + 0x160) * 8 + 0x148) = param_2;
                        *(iVar6 + 0x160) = *(iVar6 + 0x160) + 1;
                    } while (uVar8 < param_2[0x11]);
                }
                if ((*(param_2 + 0x51) == '\0') && (*(param_2 + 0x52) == '\0')) goto code_r0x080016ec;
                uVar11 = *(*(param_1 + 0xb8) + *(param_2 + 0x10) * 8);
                qcom_icc_bcm_voter_add(uVar11,param_2);
                uVar8 = qcom_icc_bcm_voter_commit(uVar11);
                piVar13 = uVar8 & 0xffffffff;
                if (uVar8 != 0) {
                    _dev_err(param_3,"failed to place initial vote for %s\n",*param_2);
                }
            }
            else {
                _dev_err(param_3,"%s command db read error (%ld)\n",*param_2,piVar13);
            }
        }
    }
    else {
code_r0x080016ec:
        piVar13 = NULL;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return piVar13 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_icc_rpmh_configure_qos;
    uVar8 = *(iVar6 + 0x78);
    if (uVar8 != 0) {
        uVar14 = 0;
        do {
            puVar10 = *(*(iVar6 + 0x70) + uVar14 * 8);
            iVar4 = *(puVar10 + 0x10);
            if (*(puVar10 + 0x53) == '\0') {
                if ((iVar4 == 0) && (puVar10[0x11] != 0)) {
                    uVar9 = 0;
                    do {
                        if (*(puVar10[uVar9 + 0x12] + 0x170) != 0) {
                            iVar4 = 0;
                            goto code_r0x0800190c;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < puVar10[0x11]);
                }
            }
            else {
code_r0x0800190c:
                uVar3 = *(puVar10 + 0x51);
                *(puVar10 + 0x51) = 1;
                uVar11 = *(*(iVar6 + 0xb8) + iVar4 * 8);
                qcom_icc_bcm_voter_add(uVar11,puVar10);
                uVar5 = qcom_icc_bcm_voter_commit(uVar11);
                *(puVar10 + 0x51) = uVar3;
                if (uVar5 != 0) {
                    _dev_err(*(iVar6 + 0x68),"failed to vote BW to %s for QoS\n",*puVar10);
                    goto code_r0x08001ac4;
                }
                uVar8 = *(iVar6 + 0x78);
            }
            uVar14 = uVar14 + 1;
        } while (uVar14 < uVar8);
    }
    uVar2 = *(iVar6 + 0xb0);
    uVar11 = *(iVar6 + 0xa8);
    uVar5 = clk_bulk_prepare(uVar2,uVar11);
    if (uVar5 == 0) {
        uVar5 = clk_bulk_enable(uVar2,uVar11);
        if (uVar5 == 0) {
            uVar8 = *(iVar6 + 0x88);
            if (uVar8 != 0) {
                uVar14 = 0;
                do {
                    iVar12 = *(*(iVar6 + 0x80) + uVar14 * 8);
                    if ((iVar12 != 0) && (*(iVar12 + 0x170) != 0)) {
                        pcVar15 = **(iVar12 + 0x178);
                        __cfi_slowpath_diag(0x5be4ec59ae83617c,pcVar15,0x8000160);
                        (*pcVar15)(iVar12);
                        *(*(iVar12 + 0x170) + 0x10) = 1;
                        uVar8 = *(iVar6 + 0x88);
                    }
                    uVar14 = uVar14 + 1;
                } while (uVar14 < uVar8);
            }
            uVar2 = *(iVar6 + 0xb0);
            uVar11 = *(iVar6 + 0xa8);
            clk_bulk_disable(uVar2,uVar11);
            clk_bulk_unprepare(uVar2,uVar11);
            uVar8 = *(iVar6 + 0x78);
            if (uVar8 != 0) {
                uVar14 = 0;
                do {
                    iVar12 = *(*(iVar6 + 0x70) + uVar14 * 8);
                    iVar4 = *(iVar12 + 0x80);
                    if (*(iVar12 + 0x53) == '\0') {
                        if ((iVar4 == 0) && (*(iVar12 + 0x88) != 0)) {
                            uVar9 = 0;
                            do {
                                if (*(*(iVar12 + uVar9 * 8 + 0x90) + 0x170) != 0) {
                                    iVar4 = 0;
                                    goto code_r0x08001a4c;
                                }
                                uVar9 = uVar9 + 1;
                            } while (uVar9 < *(iVar12 + 0x88));
                        }
                    }
                    else {
code_r0x08001a4c:
                        uVar11 = *(*(iVar6 + 0xb8) + iVar4 * 8);
                        qcom_icc_bcm_voter_add(uVar11);
                        qcom_icc_bcm_voter_commit(uVar11);
                        uVar8 = *(iVar6 + 0x78);
                    }
                    uVar14 = uVar14 + 1;
                } while (uVar14 < uVar8);
            }
            uVar5 = 0;
            goto code_r0x08001ac4;
        }
        clk_bulk_unprepare(uVar2,uVar11);
    }
    _dev_err(*(iVar6 + 0x68),"failed to enable clocks for QoS\n");
code_r0x08001ac4:
    return uVar5;
}


// ===== sym.qcom_icc_get_bw_stub.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.qcom_icc_get_bw_stub.cfi_jt(ulong param_1,uint *param_2,uint *param_3)

{
    *param_2 = 0;
    *param_3 = 0;
    return 0;
}


// ===== sym.qcom_icc_aggregate_stub.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.qcom_icc_aggregate_stub.cfi_jt(void)

{
    return 0;
}


// ===== sym.qcom_icc_aggregate.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.qcom_icc_aggregate.cfi_jt
                (int64_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,int *param_5,uint32_t *param_6)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int64_t iVar7;
    uint64_t uVar8;
    
    uVar3 = 7;
    if (param_2 != 0) {
        uVar3 = param_2;
    }
    bVar6 = (uVar3 & 8) != 0;
    uVar8 = param_3;
    bVar4 = param_4 != 0;
    bVar5 = param_3 != 0;
    iVar7 = *(param_1 + 0x70);
    if ((uVar3 & 1) != 0) {
        uVar2 = *(iVar7 + 0x128);
        if (*(iVar7 + 0x128) <= param_4) {
            uVar2 = param_4;
        }
        *(iVar7 + 0x110) = *(iVar7 + 0x110) + uVar8;
        *(iVar7 + 0x128) = uVar2;
        if (bVar6 && (bVar4 || bVar5)) {
            *(iVar7 + 0x140) = 1;
        }
    }
    uVar2 = *(param_1 + 0x68);
    if ((uVar2 != 0) || (*(param_1 + 0x6c) != 0)) {
        uVar1 = *(iVar7 + 0x110);
        if (*(iVar7 + 0x110) <= uVar2) {
            uVar1 = uVar2;
        }
        *(iVar7 + 0x110) = uVar1;
        uVar1 = *(iVar7 + 0x128);
        if (*(iVar7 + 0x128) <= *(param_1 + 0x6c)) {
            uVar1 = *(param_1 + 0x6c);
        }
        *(iVar7 + 0x128) = uVar1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
        uVar2 = *(iVar7 + 0x130);
        if (*(iVar7 + 0x130) <= param_4) {
            uVar2 = param_4;
        }
        *(iVar7 + 0x118) = *(iVar7 + 0x118) + uVar8;
        *(iVar7 + 0x130) = uVar2;
        if (bVar6 && (bVar4 || bVar5)) {
            *(iVar7 + 0x141) = 1;
        }
    }
    uVar2 = *(param_1 + 0x68);
    if ((uVar2 != 0) || (*(param_1 + 0x6c) != 0)) {
        uVar1 = *(iVar7 + 0x118);
        if (*(iVar7 + 0x118) <= uVar2) {
            uVar1 = uVar2;
        }
        *(iVar7 + 0x118) = uVar1;
        uVar1 = *(iVar7 + 0x130);
        if (*(iVar7 + 0x130) <= *(param_1 + 0x6c)) {
            uVar1 = *(param_1 + 0x6c);
        }
        *(iVar7 + 0x130) = uVar1;
    }
    if ((uVar3 >> 2 & 1) != 0) {
        uVar3 = *(iVar7 + 0x138);
        if (*(iVar7 + 0x138) <= param_4) {
            uVar3 = param_4;
        }
        *(iVar7 + 0x120) = *(iVar7 + 0x120) + uVar8;
        *(iVar7 + 0x138) = uVar3;
        if (bVar6 && (bVar4 || bVar5)) {
            *(iVar7 + 0x142) = 1;
        }
    }
    uVar3 = *(param_1 + 0x68);
    if ((uVar3 != 0) || (*(param_1 + 0x6c) != 0)) {
        uVar8 = *(iVar7 + 0x120);
        if (*(iVar7 + 0x120) <= uVar3) {
            uVar8 = uVar3;
        }
        *(iVar7 + 0x120) = uVar8;
        uVar8 = *(iVar7 + 0x138);
        if (*(iVar7 + 0x138) <= *(param_1 + 0x6c)) {
            uVar8 = *(param_1 + 0x6c);
        }
        *(iVar7 + 0x138) = uVar8;
    }
    *param_5 = *param_5 + param_3;
    uVar3 = *param_6;
    if (*param_6 <= param_4) {
        uVar3 = param_4;
    }
    *param_6 = uVar3;
    return 0;
}


// ===== sym.qcom_icc_rpmh_sync_state.cfi_jt @ 0x080011f8 (size 8) =====

void sym.qcom_icc_rpmh_sync_state.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    code *pcVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = -1;
    do {
        iVar2 = iVar2 + 1;
    } while (*(*(*(param_1 + 0x88) + 0x28) + iVar2 * 200 + 0xc0) != 0);
    mutex_lock(obj.probe_list_lock);
    _segment.ehdr = _segment.ehdr + 1;
    if (iVar2 <= _segment.ehdr) {
        for (pcVar5 = CONCAT44(*0x8000004,_segment.ehdr); pcVar5 != obj.qnoc_probe_list; pcVar5 = *pcVar5) {
            if (*(pcVar5 + 0x30) != 0) {
                uVar3 = 0;
                do {
                    qcom_icc_bcm_voter_clear_init(*(*(pcVar5 + 0x28) + uVar3 * 8));
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(pcVar5 + 0x30));
            }
            uVar3 = *(pcVar5 + -0x18);
            if (uVar3 != 0) {
                uVar6 = 0;
                do {
                    iVar1 = *(*(pcVar5 + -0x20) + uVar6 * 8);
                    if ((*(iVar1 + 0x51) != '\0') || (*(iVar1 + 0x52) != '\0')) {
                        *(iVar1 + 0x52) = 0;
                        uVar4 = *(*(pcVar5 + 0x28) + *(iVar1 + 0x80) * 8);
                        qcom_icc_bcm_voter_add(uVar4);
                        qcom_icc_bcm_voter_commit(uVar4);
                        uVar3 = *(pcVar5 + -0x18);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar3);
            }
        }
    }
    mutex_unlock(obj.probe_list_lock);
    return;
}


// ===== sym.qcom_icc_pre_aggregate_stub.e9cd3a949b3ac4d9056053b76c31cee4.cfi_jt @ 0x08001200 (size 8) =====

void sym.qcom_icc_pre_aggregate_stub.e9cd3a949b3ac4d9056053b76c31cee4.cfi_jt(void)

{
    return;
}


// ===== sym.qcom_icc_pre_aggregate.cfi_jt @ 0x08001208 (size 8) =====

void sym.qcom_icc_pre_aggregate.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x70);
    iVar3 = *(param_1 + 0x20);
    *(iVar2 + 0x130) = 0;
    *(iVar2 + 0x138) = 0;
    *(iVar2 + 0x120) = 0;
    *(iVar2 + 0x128) = 0;
    *(iVar2 + 0x110) = 0;
    *(iVar2 + 0x118) = 0;
    *(iVar2 + 0x13f) = 0;
    if ((((*(iVar2 + 0x160) != 0) &&
         (qcom_icc_bcm_voter_add(*(*(iVar3 + 0xb8) + *(*(iVar2 + 0x148) + 0x80) * 8)), 1 < *(iVar2 + 0x160))) &&
        (qcom_icc_bcm_voter_add(*(*(iVar3 + 0xb8) + *(*(iVar2 + 0x150) + 0x80) * 8)), 2 < *(iVar2 + 0x160))) &&
       (qcom_icc_bcm_voter_add(*(*(iVar3 + 0xb8) + *(*(iVar2 + 0x158) + 0x80) * 8)), 3 < *(iVar2 + 0x160))) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x80012d8);
        (*pcVar1)();
    }
    return;
}


// ===== sym.qcom_icc_xlate_extended.cfi_jt @ 0x08001210 (size 8) =====

uint64_t * sym.qcom_icc_xlate_extended.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = of_icc_xlate_onecell();
    if (puVar3 < 0xfffffffffffff001) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
        if (puVar4 == NULL) {
            puVar3 = 0xfffffffffffffff4;
        }
        else {
            iVar2 = *(param_1 + 1);
            *puVar4 = puVar3;
            puVar3 = puVar4;
            if (iVar2 == 2) {
                *(puVar4 + 1) = *(param_1 + 2);
            }
            else if (2 < iVar2) {
                _printk(0x8000318,*param_1);
            }
        }
    }
    return puVar3;
}


// ===== sym.qcom_icc_set_stub.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.qcom_icc_set_stub.cfi_jt(void)

{
    return 0;
}


// ===== sym.qcom_icc_set.cfi_jt @ 0x08001220 (size 8) =====

int sym.qcom_icc_set.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        param_2 = param_1;
    }
    iVar7 = *(param_2 + 0x20);
    iVar3 = *(param_2 + 0x70);
    if (*(iVar7 + 0xc0) != 0) {
        uVar4 = 0;
        do {
            qcom_icc_bcm_voter_commit(*(*(iVar7 + 0xb8) + uVar4 * 8));
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar7 + 0xc0));
    }
    if ((((iVar3 == 0) || (*(iVar3 + 0x170) == 0)) || (*(*(iVar3 + 0x170) + 0x10) != '\0')) ||
       ((*(iVar7 + 0xc9) != '\0' || ((*(param_2 + 0x60) == 0 && (*(param_2 + 100) == 0)))))) {
        iVar2 = 0;
    }
    else {
        uVar1 = *(iVar7 + 0xb0);
        uVar6 = *(iVar7 + 0xa8);
        iVar2 = clk_bulk_prepare(uVar1,uVar6);
        if (iVar2 == 0) {
            iVar2 = clk_bulk_enable(uVar1,uVar6);
            if (iVar2 == 0) {
                pcVar5 = **(iVar3 + 0x178);
                __cfi_slowpath_diag(0x5be4ec59ae83617c,pcVar5,0x8000140);
                (*pcVar5)(iVar3);
                uVar1 = *(iVar7 + 0xb0);
                uVar6 = *(iVar7 + 0xa8);
                clk_bulk_disable(uVar1,uVar6);
                clk_bulk_unprepare(uVar1,uVar6);
                *(*(iVar3 + 0x170) + 0x10) = 1;
                return 0;
            }
            clk_bulk_unprepare(uVar1,uVar6);
        }
        _printk(0x80002e4,"qcom_icc_set",*(param_2 + 8));
    }
    return iVar2;
}


// ===== sym.qcom_icc_pre_aggregate @ 0x08001228 (size 176) =====

void sym.qcom_icc_pre_aggregate(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x70);
    iVar3 = *(arg1 + 0x20);
    *(iVar2 + 0x130) = 0;
    *(iVar2 + 0x138) = 0;
    *(iVar2 + 0x120) = 0;
    *(iVar2 + 0x128) = 0;
    *(iVar2 + 0x110) = 0;
    *(iVar2 + 0x118) = 0;
    *(iVar2 + 0x13f) = 0;
    if ((((*(iVar2 + 0x160) != 0) &&
         (qcom_icc_bcm_voter_add(*(*(iVar3 + 0xb8) + *(*(iVar2 + 0x148) + 0x80) * 8)), 1 < *(iVar2 + 0x160))) &&
        (qcom_icc_bcm_voter_add(*(*(iVar3 + 0xb8) + *(*(iVar2 + 0x150) + 0x80) * 8)), 2 < *(iVar2 + 0x160))) &&
       (qcom_icc_bcm_voter_add(*(*(iVar3 + 0xb8) + *(*(iVar2 + 0x158) + 0x80) * 8)), 3 < *(iVar2 + 0x160))) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x80012d8);
        (*pcVar1)();
    }
    return;
}


// ===== sym.qcom_icc_aggregate @ 0x080012d8 (size 376) =====

ulong sym.qcom_icc_aggregate(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    uint32_t uVar7;
    int *in_x4;
    uint32_t *in_x5;
    int64_t iVar8;
    uint64_t uVar9;
    
    uVar7 = arg4;
    uVar3 = 7;
    if (arg2 != 0) {
        uVar3 = arg2;
    }
    bVar6 = (uVar3 & 8) != 0;
    uVar9 = arg3 & 0xffffffff;
    bVar4 = uVar7 != 0;
    bVar5 = arg3 != 0;
    iVar8 = *(arg1 + 0x70);
    if ((uVar3 & 1) != 0) {
        uVar2 = *(iVar8 + 0x128);
        if (*(iVar8 + 0x128) <= uVar7) {
            uVar2 = uVar7;
        }
        *(iVar8 + 0x110) = *(iVar8 + 0x110) + uVar9;
        *(iVar8 + 0x128) = uVar2;
        if (bVar6 && (bVar4 || bVar5)) {
            *(iVar8 + 0x140) = 1;
        }
    }
    uVar2 = *(arg1 + 0x68);
    if ((uVar2 != 0) || (*(arg1 + 0x6c) != 0)) {
        uVar1 = *(iVar8 + 0x110);
        if (*(iVar8 + 0x110) <= uVar2) {
            uVar1 = uVar2;
        }
        *(iVar8 + 0x110) = uVar1;
        uVar1 = *(iVar8 + 0x128);
        if (*(iVar8 + 0x128) <= *(arg1 + 0x6c)) {
            uVar1 = *(arg1 + 0x6c);
        }
        *(iVar8 + 0x128) = uVar1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
        uVar2 = *(iVar8 + 0x130);
        if (*(iVar8 + 0x130) <= uVar7) {
            uVar2 = uVar7;
        }
        *(iVar8 + 0x118) = *(iVar8 + 0x118) + uVar9;
        *(iVar8 + 0x130) = uVar2;
        if (bVar6 && (bVar4 || bVar5)) {
            *(iVar8 + 0x141) = 1;
        }
    }
    uVar2 = *(arg1 + 0x68);
    if ((uVar2 != 0) || (*(arg1 + 0x6c) != 0)) {
        uVar1 = *(iVar8 + 0x118);
        if (*(iVar8 + 0x118) <= uVar2) {
            uVar1 = uVar2;
        }
        *(iVar8 + 0x118) = uVar1;
        uVar1 = *(iVar8 + 0x130);
        if (*(iVar8 + 0x130) <= *(arg1 + 0x6c)) {
            uVar1 = *(arg1 + 0x6c);
        }
        *(iVar8 + 0x130) = uVar1;
    }
    if ((uVar3 >> 2 & 1) != 0) {
        uVar3 = *(iVar8 + 0x138);
        if (*(iVar8 + 0x138) <= uVar7) {
            uVar3 = uVar7;
        }
        *(iVar8 + 0x120) = *(iVar8 + 0x120) + uVar9;
        *(iVar8 + 0x138) = uVar3;
        if (bVar6 && (bVar4 || bVar5)) {
            *(iVar8 + 0x142) = 1;
        }
    }
    uVar3 = *(arg1 + 0x68);
    if ((uVar3 != 0) || (*(arg1 + 0x6c) != 0)) {
        uVar9 = *(iVar8 + 0x120);
        if (*(iVar8 + 0x120) <= uVar3) {
            uVar9 = uVar3;
        }
        *(iVar8 + 0x120) = uVar9;
        uVar9 = *(iVar8 + 0x138);
        if (*(iVar8 + 0x138) <= *(arg1 + 0x6c)) {
            uVar9 = *(arg1 + 0x6c);
        }
        *(iVar8 + 0x138) = uVar9;
    }
    *in_x4 = *in_x4 + arg3;
    uVar3 = *in_x5;
    if (*in_x5 <= uVar7) {
        uVar3 = uVar7;
    }
    *in_x5 = uVar3;
    return 0;
}


// ===== sym.qcom_icc_aggregate_stub @ 0x08001450 (size 16) =====

ulong sym.qcom_icc_aggregate_stub(int64_t arg1)

{
    return 0;
}


// ===== sym.qcom_icc_set @ 0x08001460 (size 360) =====

int sym.qcom_icc_set(uint32_t arg1)

{
    uint uVar1;
    int iVar2;
    uint64_t in_x1;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        in_x1 = arg1;
    }
    iVar7 = *(in_x1 + 0x20);
    iVar3 = *(in_x1 + 0x70);
    if (*(iVar7 + 0xc0) != 0) {
        uVar4 = 0;
        do {
            qcom_icc_bcm_voter_commit(*(*(iVar7 + 0xb8) + uVar4 * 8));
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar7 + 0xc0));
    }
    if ((((iVar3 == 0) || (*(iVar3 + 0x170) == 0)) || (*(*(iVar3 + 0x170) + 0x10) != '\0')) ||
       ((*(iVar7 + 0xc9) != '\0' || ((*(in_x1 + 0x60) == 0 && (*(in_x1 + 100) == 0)))))) {
        iVar2 = 0;
    }
    else {
        uVar1 = *(iVar7 + 0xb0);
        uVar6 = *(iVar7 + 0xa8);
        iVar2 = clk_bulk_prepare(uVar1,uVar6);
        if (iVar2 == 0) {
            iVar2 = clk_bulk_enable(uVar1,uVar6);
            if (iVar2 == 0) {
                pcVar5 = **(iVar3 + 0x178);
                __cfi_slowpath_diag(0x5be4ec59ae83617c,pcVar5,0x8000140);
                (*pcVar5)(iVar3);
                uVar1 = *(iVar7 + 0xb0);
                uVar6 = *(iVar7 + 0xa8);
                clk_bulk_disable(uVar1,uVar6);
                clk_bulk_unprepare(uVar1,uVar6);
                *(*(iVar3 + 0x170) + 0x10) = 1;
                return 0;
            }
            clk_bulk_unprepare(uVar1,uVar6);
        }
        _printk(0x80002e4,"qcom_icc_set",*(in_x1 + 8));
    }
    return iVar2;
}


// ===== sym.qcom_icc_set_stub @ 0x080015c8 (size 16) =====

ulong sym.qcom_icc_set_stub(int64_t arg1)

{
    return 0;
}


// ===== sym.qcom_icc_get_bw_stub @ 0x080015d8 (size 24) =====

ulong sym.qcom_icc_get_bw_stub(int64_t arg1,int64_t arg2,int64_t arg3)

{
    *arg2 = 0;
    *arg3 = 0;
    return 0;
}


// ===== sym.qcom_icc_xlate_extended @ 0x080015f0 (size 200) =====

uint64_t * sym.qcom_icc_xlate_extended(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = of_icc_xlate_onecell();
    if (puVar3 < 0xfffffffffffff001) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
        if (puVar4 == NULL) {
            puVar3 = 0xfffffffffffffff4;
        }
        else {
            iVar2 = *(arg1 + 8);
            *puVar4 = puVar3;
            puVar3 = puVar4;
            if (iVar2 == 2) {
                *(puVar4 + 1) = *(arg1 + 0x10);
            }
            else if (2 < iVar2) {
                _printk(0x8000318,*arg1);
            }
        }
    }
    return puVar3;
}


// ===== sym.qcom_icc_bcm_init @ 0x080016b8 (size 504) =====

uint64_t sym.qcom_icc_bcm_init(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint uVar2;
    uchar uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    ulong uVar11;
    int64_t iVar12;
    int *piVar13;
    uint64_t uVar14;
    code *pcVar15;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_40 = 0;
    if (*(arg2 + 0xc) == 0) {
        iVar4 = cmd_db_read_addr(*arg2);
        uVar11 = *arg2;
        *(arg2 + 0xc) = iVar4;
        if (iVar4 == 0) {
            pcVar7 = "%s could not find RPMh address\n";
code_r0x08001880:
            _dev_err(arg3,pcVar7,uVar11);
            piVar13 = 0xffffffea;
        }
        else {
            piVar13 = cmd_db_read_aux_data(uVar11,&iStack_40);
            if (piVar13 < 0xfffffffffffff001) {
                if (iStack_40 == 0) {
                    uVar11 = *arg2;
                    pcVar7 = "%s command db missing or partial aux data\n";
                    goto code_r0x08001880;
                }
                iVar4 = *piVar13;
                if (iVar4 == 0) {
                    iVar4 = 1;
                }
                *(arg2 + 0x54) = iVar4;
                iVar1 = piVar13[1];
                if (iVar1 == 0) {
                    iVar1 = 1;
                }
                *(arg2 + 0x58) = iVar1;
                *(arg2 + 0x5a) = *(piVar13 + 6);
                *(arg2 + 0x5b) = *(piVar13 + 7);
                *(arg2 + 0x60) = arg2 + 0x60;
                *(arg2 + 0x68) = arg2 + 0x60;
                *(arg2 + 0x70) = arg2 + 0x70;
                *(arg2 + 0x78) = arg2 + 0x70;
                if (*(arg2 + 0x40) == 0) {
                    *(arg2 + 0x40) = 1000;
                    iVar6 = *(arg2 + 0x88);
                }
                else {
                    iVar6 = *(arg2 + 0x88);
                }
                if (iVar6 != 0) {
                    uVar8 = 0;
                    do {
                        iVar6 = *(arg2 + uVar8 * 8 + 0x90);
                        if (2 < *(iVar6 + 0x160)) {
    //WARNING: Does not return
                            pcVar15 = SoftwareBreakpoint(0x5512,0x80018ac);
                            (*pcVar15)();
                        }
                        uVar8 = uVar8 + 1;
                        *(iVar6 + *(iVar6 + 0x160) * 8 + 0x148) = arg2;
                        *(iVar6 + 0x160) = *(iVar6 + 0x160) + 1;
                    } while (uVar8 < *(arg2 + 0x88));
                }
                if ((*(arg2 + 0x51) == '\0') && (*(arg2 + 0x52) == '\0')) goto code_r0x080016ec;
                uVar11 = *(*(arg1 + 0xb8) + *(arg2 + 0x80) * 8);
                qcom_icc_bcm_voter_add(uVar11,arg2);
                uVar8 = qcom_icc_bcm_voter_commit(uVar11);
                piVar13 = uVar8 & 0xffffffff;
                if (uVar8 != 0) {
                    _dev_err(arg3,"failed to place initial vote for %s\n",*arg2);
                }
            }
            else {
                _dev_err(arg3,"%s command db read error (%ld)\n",*arg2,piVar13);
            }
        }
    }
    else {
code_r0x080016ec:
        piVar13 = NULL;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return piVar13 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_icc_rpmh_configure_qos;
    uVar8 = *(iVar6 + 0x78);
    if (uVar8 != 0) {
        uVar14 = 0;
        do {
            puVar10 = *(*(iVar6 + 0x70) + uVar14 * 8);
            iVar4 = *(puVar10 + 0x10);
            if (*(puVar10 + 0x53) == '\0') {
                if ((iVar4 == 0) && (puVar10[0x11] != 0)) {
                    uVar9 = 0;
                    do {
                        if (*(puVar10[uVar9 + 0x12] + 0x170) != 0) {
                            iVar4 = 0;
                            goto code_r0x0800190c;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < puVar10[0x11]);
                }
            }
            else {
code_r0x0800190c:
                uVar3 = *(puVar10 + 0x51);
                *(puVar10 + 0x51) = 1;
                uVar11 = *(*(iVar6 + 0xb8) + iVar4 * 8);
                qcom_icc_bcm_voter_add(uVar11,puVar10);
                uVar5 = qcom_icc_bcm_voter_commit(uVar11);
                *(puVar10 + 0x51) = uVar3;
                if (uVar5 != 0) {
                    _dev_err(*(iVar6 + 0x68),"failed to vote BW to %s for QoS\n",*puVar10);
                    goto code_r0x08001ac4;
                }
                uVar8 = *(iVar6 + 0x78);
            }
            uVar14 = uVar14 + 1;
        } while (uVar14 < uVar8);
    }
    uVar2 = *(iVar6 + 0xb0);
    uVar11 = *(iVar6 + 0xa8);
    uVar5 = clk_bulk_prepare(uVar2,uVar11);
    if (uVar5 == 0) {
        uVar5 = clk_bulk_enable(uVar2,uVar11);
        if (uVar5 == 0) {
            uVar8 = *(iVar6 + 0x88);
            if (uVar8 != 0) {
                uVar14 = 0;
                do {
                    iVar12 = *(*(iVar6 + 0x80) + uVar14 * 8);
                    if ((iVar12 != 0) && (*(iVar12 + 0x170) != 0)) {
                        pcVar15 = **(iVar12 + 0x178);
                        __cfi_slowpath_diag(0x5be4ec59ae83617c,pcVar15,0x8000160);
                        (*pcVar15)(iVar12);
                        *(*(iVar12 + 0x170) + 0x10) = 1;
                        uVar8 = *(iVar6 + 0x88);
                    }
                    uVar14 = uVar14 + 1;
                } while (uVar14 < uVar8);
            }
            uVar2 = *(iVar6 + 0xb0);
            uVar11 = *(iVar6 + 0xa8);
            clk_bulk_disable(uVar2,uVar11);
            clk_bulk_unprepare(uVar2,uVar11);
            uVar8 = *(iVar6 + 0x78);
            if (uVar8 != 0) {
                uVar14 = 0;
                do {
                    iVar12 = *(*(iVar6 + 0x70) + uVar14 * 8);
                    iVar4 = *(iVar12 + 0x80);
                    if (*(iVar12 + 0x53) == '\0') {
                        if ((iVar4 == 0) && (*(iVar12 + 0x88) != 0)) {
                            uVar9 = 0;
                            do {
                                if (*(*(iVar12 + uVar9 * 8 + 0x90) + 0x170) != 0) {
                                    iVar4 = 0;
                                    goto code_r0x08001a4c;
                                }
                                uVar9 = uVar9 + 1;
                            } while (uVar9 < *(iVar12 + 0x88));
                        }
                    }
                    else {
code_r0x08001a4c:
                        uVar11 = *(*(iVar6 + 0xb8) + iVar4 * 8);
                        qcom_icc_bcm_voter_add(uVar11);
                        qcom_icc_bcm_voter_commit(uVar11);
                        uVar8 = *(iVar6 + 0x78);
                    }
                    uVar14 = uVar14 + 1;
                } while (uVar14 < uVar8);
            }
            uVar5 = 0;
            goto code_r0x08001ac4;
        }
        clk_bulk_unprepare(uVar2,uVar11);
    }
    _dev_err(*(iVar6 + 0x68),"failed to enable clocks for QoS\n");
code_r0x08001ac4:
    return uVar5;
}


// ===== sym.qcom_icc_rpmh_configure_qos @ 0x080018b0 (size 636) =====

int sym.qcom_icc_rpmh_configure_qos(int64_t arg1)

{
    uint uVar1;
    uchar uVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(arg1 + 0x78);
    if (uVar4 != 0) {
        uVar9 = 0;
        do {
            puVar6 = *(*(arg1 + 0x70) + uVar9 * 8);
            iVar3 = *(puVar6 + 0x10);
            if (*(puVar6 + 0x53) == '\0') {
                if ((iVar3 == 0) && (puVar6[0x11] != 0)) {
                    uVar5 = 0;
                    do {
                        if (*(puVar6[uVar5 + 0x12] + 0x170) != 0) {
                            iVar3 = 0;
                            goto code_r0x0800190c;
                        }
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < puVar6[0x11]);
                }
            }
            else {
code_r0x0800190c:
                uVar2 = *(puVar6 + 0x51);
                *(puVar6 + 0x51) = 1;
                uVar7 = *(*(arg1 + 0xb8) + iVar3 * 8);
                qcom_icc_bcm_voter_add(uVar7,puVar6);
                iVar3 = qcom_icc_bcm_voter_commit(uVar7);
                *(puVar6 + 0x51) = uVar2;
                if (iVar3 != 0) {
                    _dev_err(*(arg1 + 0x68),"failed to vote BW to %s for QoS\n",*puVar6);
                    return iVar3;
                }
                uVar4 = *(arg1 + 0x78);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar4);
    }
    uVar1 = *(arg1 + 0xb0);
    uVar7 = *(arg1 + 0xa8);
    iVar3 = clk_bulk_prepare(uVar1,uVar7);
    if (iVar3 == 0) {
        iVar3 = clk_bulk_enable(uVar1,uVar7);
        if (iVar3 == 0) {
            uVar4 = *(arg1 + 0x88);
            if (uVar4 != 0) {
                uVar9 = 0;
                do {
                    iVar8 = *(*(arg1 + 0x80) + uVar9 * 8);
                    if ((iVar8 != 0) && (*(iVar8 + 0x170) != 0)) {
                        pcVar10 = **(iVar8 + 0x178);
                        __cfi_slowpath_diag(0x5be4ec59ae83617c,pcVar10,0x8000160);
                        (*pcVar10)(iVar8);
                        *(*(iVar8 + 0x170) + 0x10) = 1;
                        uVar4 = *(arg1 + 0x88);
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar4);
            }
            uVar1 = *(arg1 + 0xb0);
            uVar7 = *(arg1 + 0xa8);
            clk_bulk_disable(uVar1,uVar7);
            clk_bulk_unprepare(uVar1,uVar7);
            uVar4 = *(arg1 + 0x78);
            if (uVar4 != 0) {
                uVar9 = 0;
                do {
                    iVar8 = *(*(arg1 + 0x70) + uVar9 * 8);
                    iVar3 = *(iVar8 + 0x80);
                    if (*(iVar8 + 0x53) == '\0') {
                        if ((iVar3 == 0) && (*(iVar8 + 0x88) != 0)) {
                            uVar5 = 0;
                            do {
                                if (*(*(iVar8 + uVar5 * 8 + 0x90) + 0x170) != 0) {
                                    iVar3 = 0;
                                    goto code_r0x08001a4c;
                                }
                                uVar5 = uVar5 + 1;
                            } while (uVar5 < *(iVar8 + 0x88));
                        }
                    }
                    else {
code_r0x08001a4c:
                        uVar7 = *(*(arg1 + 0xb8) + iVar3 * 8);
                        qcom_icc_bcm_voter_add(uVar7);
                        qcom_icc_bcm_voter_commit(uVar7);
                        uVar4 = *(arg1 + 0x78);
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar4);
            }
            return 0;
        }
        clk_bulk_unprepare(uVar1,uVar7);
    }
    _dev_err(*(arg1 + 0x68),"failed to enable clocks for QoS\n");
    return iVar3;
}


// ===== sym.qcom_icc_rpmh_probe @ 0x08001b2c (size 1056) =====

uint64_t sym.qcom_icc_rpmh_probe(int64_t arg1)

{
    int64_t arg3;
    int64_t iVar1;
    char cVar2;
    int64_t *piVar3;
    code *pcVar4;
    uint32_t uVar5;
    ulong *puVar6;
    int64_t arg1_00;
    uint *puVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = arg1 + 0x10;
    puVar6 = of_device_get_match_data(arg3);
    if (puVar6 == NULL) {
        uVar11 = 0xffffffea;
        goto code_r0x08001d44;
    }
    iVar1 = puVar6[1];
    uVar13 = puVar6[2];
    arg1_00 = devm_kmalloc(arg3,0xd0,0xdc0);
    if (arg1_00 != 0) {
        iVar8 = uVar13 * 8 + 8;
        if (0xfffffffffffffff7 < uVar13 * 8) {
            iVar8 = -1;
        }
        if (uVar13 >> 0x3d != 0) {
            iVar8 = -1;
        }
        puVar7 = devm_kmalloc(arg3,iVar8,0xdc0);
        if (puVar7 != NULL) {
            iVar8 = of_find_property(*(arg1 + 0x300),"qcom,stub",0);
            uVar9 = *(arg1 + 0x300);
            *(arg1_00 + 200) = iVar8 != 0;
            iVar8 = of_find_property(uVar9,"qcom,skip-qos",0);
            *(arg1_00 + 0xc9) = iVar8 != 0;
            *(arg1_00 + 0x20) = sym.qcom_icc_set_stub.cfi_jt;
            *(arg1_00 + 0x28) = sym.qcom_icc_aggregate_stub.cfi_jt;
            *(arg1_00 + 0x30) = sym.qcom_icc_pre_aggregate_stub.e9cd3a949b3ac4d9056053b76c31cee4.cfi_jt;
            *(arg1_00 + 0x48) = sym.qcom_icc_xlate_extended.cfi_jt;
            *(arg1_00 + 0x50) = arg3;
            *(arg1_00 + 0x10) = arg1_00 + 0x10;
            *(arg1_00 + 0x18) = arg1_00 + 0x10;
            *(arg1_00 + 0x60) = puVar7;
            *(arg1_00 + 0x68) = arg3;
            *(arg1_00 + 0x38) = sym.qcom_icc_get_bw_stub.cfi_jt;
            *(arg1_00 + 0x70) = puVar6[3];
            *(arg1_00 + 0x80) = puVar6[1];
            *(arg1_00 + 0x88) = puVar6[2];
            if (*(arg1_00 + 200) == '\0') {
                *(arg1_00 + 0x78) = puVar6[4];
                uVar11 = puVar6[6];
                *(arg1_00 + 0xc0) = uVar11;
                if (uVar11 >> 0x3d != 0) {
                    uVar11 = 0xfffffff4;
                    *(arg1_00 + 0xb8) = 0;
                    goto code_r0x08001d44;
                }
                iVar8 = devm_kmalloc(arg3,uVar11 << 3,0xdc0);
                *(arg1_00 + 0xb8) = iVar8;
                if (iVar8 == 0) goto code_r0x08001d40;
                if (*(arg1_00 + 0xc0) != 0) {
                    uVar12 = 0;
                    do {
                        iVar8 = uVar12 * 8;
                        uVar9 = of_bcm_voter_get(*(arg1_00 + 0x68),*(puVar6[5] + iVar8));
                        *(*(arg1_00 + 0xb8) + iVar8) = uVar9;
                        uVar11 = *(*(arg1_00 + 0xb8) + iVar8);
                        if (0xfffffffffffff000 < uVar11) goto code_r0x08001d44;
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < *(arg1_00 + 0xc0));
                }
            }
            piVar10 = platform_get_resource(arg1,0x200,0);
            if (piVar10 == NULL) {
                *(arg1_00 + 0xa0) = 0;
            }
            else {
                uVar11 = devm_ioremap(arg3,*piVar10,(piVar10[1] - *piVar10) + 1);
                if (uVar11 < 0xfffffffffffff001) {
                    uVar11 = __devm_regmap_init_mmio_clk(arg3,0,uVar11,*puVar6,0,0);
                }
                *(arg1_00 + 0xa0) = uVar11;
                if (0xfffffffffffff000 < uVar11) {
                    uVar11 = uVar11 & 0xffffffff;
                    goto code_r0x08001d44;
                }
            }
            uVar12 = icc_provider_add(arg1_00);
            uVar11 = uVar12 & 0xffffffff;
            if (uVar12 == 0) {
                uVar5 = devm_clk_bulk_get_all(*(arg1_00 + 0x68),arg1_00 + 0xa8);
                *(arg1_00 + 0xb0) = uVar5;
                if (uVar5 < 0) {
                    uVar11 = uVar5;
                }
                else {
                    if (*(arg1_00 + 0x78) != 0) {
                        uVar11 = 0;
                        do {
                            sym.qcom_icc_bcm_init(arg1_00,*(*(arg1_00 + 0x70) + uVar11 * 8),arg3);
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < *(arg1_00 + 0x78));
                    }
                    if (uVar13 != 0) {
                        uVar12 = 0;
                        do {
                            puVar6 = *(iVar1 + uVar12 * 8);
                            if (puVar6 != NULL) {
                                uVar9 = dev_get_regmap(*(arg1_00 + 0x68),0);
                                puVar6[0x2d] = uVar9;
                                uVar11 = icc_node_create(*(puVar6 + 0x21));
                                if (0xfffffffffffff000 < uVar11) goto code_r0x08001f1c;
                                uVar9 = *puVar6;
                                *(uVar11 + 0x70) = puVar6;
                                *(uVar11 + 8) = uVar9;
                                icc_node_add(uVar11,arg1_00);
                                if (*(puVar6 + 0x10a) != 0) {
                                    uVar14 = 0;
                                    do {
                                        if (uVar14 == 0x80) {
    //WARNING: Does not return
                                            pcVar4 = SoftwareBreakpoint(0x5512,0x8001f4c);
                                            (*pcVar4)();
                                        }
                                        icc_link_create(uVar11,*(puVar6 + uVar14 * 2 + 8));
                                        uVar14 = uVar14 + 1;
                                    } while (uVar14 < *(puVar6 + 0x10a));
                                }
                                *(puVar7 + uVar12 * 2 + 2) = uVar11;
                            }
                            uVar12 = uVar12 + 1;
                        } while (uVar12 != uVar13);
                    }
                    cVar2 = *(arg1_00 + 0xc9);
                    *puVar7 = uVar13;
                    if (cVar2 == '\0') {
                        uVar13 = sym.qcom_icc_rpmh_configure_qos(arg1_00);
                        uVar11 = uVar13 & 0xffffffff;
                        if (uVar13 != 0) {
code_r0x08001f1c:
                            clk_bulk_put_all(*(arg1_00 + 0xb0),*(arg1_00 + 0xa8));
                            icc_nodes_remove(arg1_00);
                            icc_provider_del(arg1_00);
                            goto code_r0x08001d44;
                        }
                    }
                    cVar2 = *(arg1_00 + 200);
                    *(arg1 + 0xa8) = arg1_00;
                    if (cVar2 == '\0') {
                        *(arg1_00 + 0x20) = sym.qcom_icc_set.cfi_jt;
                        *(arg1_00 + 0x28) = sym.qcom_icc_aggregate.cfi_jt;
                        *(arg1_00 + 0x30) = sym.qcom_icc_pre_aggregate.cfi_jt;
                    }
                    qcom_icc_debug_register(arg1_00);
                    mutex_lock(obj.probe_list_lock);
                    piVar3 = *0x8000138;
                    piVar10 = arg1_00 + 0x90;
                    uVar11 = __list_add_valid(piVar10,*0x8000138,obj.qnoc_probe_list);
                    if ((uVar11 & 1) != 0) {
                        *0x8000138 = piVar10;
                        *(arg1_00 + 0x90) = obj.qnoc_probe_list;
                        *(arg1_00 + 0x98) = piVar3;
                        *piVar3 = piVar10;
                    }
                    mutex_unlock(obj.probe_list_lock);
                    uVar11 = 0;
                }
            }
            goto code_r0x08001d44;
        }
    }
code_r0x08001d40:
    uVar11 = 0xfffffff4;
code_r0x08001d44:
    return uVar11 & 0xffffffff;
}


// ===== sym.qcom_icc_pre_aggregate_stub @ 0x08001f4c (size 12) =====

void sym.qcom_icc_pre_aggregate_stub(void)

{
    return;
}


// ===== sym.qcom_icc_rpmh_remove @ 0x08001f58 (size 80) =====

void sym.qcom_icc_rpmh_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    qcom_icc_debug_unregister(iVar1);
    clk_bulk_put_all(*(iVar1 + 0xb0),*(iVar1 + 0xa8));
    icc_nodes_remove(iVar1);
    icc_provider_del(iVar1);
    return;
}


// ===== sym.qcom_icc_rpmh_sync_state @ 0x08001fa8 (size 300) =====

void sym.qcom_icc_rpmh_sync_state(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    code *pcVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = -1;
    do {
        iVar2 = iVar2 + 1;
    } while (*(*(*(arg1 + 0x88) + 0x28) + iVar2 * 200 + 0xc0) != 0);
    mutex_lock(obj.probe_list_lock);
    _segment.ehdr = _segment.ehdr + 1;
    if (iVar2 <= _segment.ehdr) {
        for (pcVar5 = CONCAT44(*0x8000004,_segment.ehdr); pcVar5 != obj.qnoc_probe_list; pcVar5 = *pcVar5) {
            if (*(pcVar5 + 0x30) != 0) {
                uVar3 = 0;
                do {
                    qcom_icc_bcm_voter_clear_init(*(*(pcVar5 + 0x28) + uVar3 * 8));
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(pcVar5 + 0x30));
            }
            uVar3 = *(pcVar5 + -0x18);
            if (uVar3 != 0) {
                uVar6 = 0;
                do {
                    iVar1 = *(*(pcVar5 + -0x20) + uVar6 * 8);
                    if ((*(iVar1 + 0x51) != '\0') || (*(iVar1 + 0x52) != '\0')) {
                        *(iVar1 + 0x52) = 0;
                        uVar4 = *(*(pcVar5 + 0x28) + *(iVar1 + 0x80) * 8);
                        qcom_icc_bcm_voter_add(uVar4);
                        qcom_icc_bcm_voter_commit(uVar4);
                        uVar3 = *(pcVar5 + -0x18);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar3);
            }
        }
    }
    mutex_unlock(obj.probe_list_lock);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080020d4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002118

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
    //switch table (4 cases) at 0x8000180
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800212c);
    (*pcVar1)();
}

