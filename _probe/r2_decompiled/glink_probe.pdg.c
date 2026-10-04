// decompiled from glink_probe by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x08001968

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.glink_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0x2ae9e860a59799bb) {
            pcVar2 = sym.__typeid__ZTSFiP9edge_infoE_global_addr;
        }
        else {
            if (arg1 != -0x1d282b0d63e2a858) goto code_r0x08001928;
            pcVar2 = sym.__typeid__ZTSFvP9edge_infoE_global_addr;
        }
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) {
code_r0x08001928:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x800197c);
            (*pcVar1)();
        }
    }
    else {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.glink_probe_ssr_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001928;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
        if (pcVar1 != pcVar2) goto code_r0x08001928;
    }
    return;
}


// ===== sym.glink_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.glink_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong uVar5;
    code *pcVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(param_1 + 0x300);
    for (iVar3 = of_get_next_available_child(uVar5,0); iVar3 != 0; iVar3 = of_get_next_available_child(uVar5,iVar3)) {
        pcVar6 = _obj.edge_infos;
        if (_obj.edge_infos != obj.edge_infos) {
            do {
                pcVar7 = *pcVar6;
                qcom_unregister_ssr_notifier(*(pcVar6 + 0x60),pcVar6 + 0x48);
                uVar4 = __list_del_entry_valid(pcVar6);
                if ((uVar4 & 1) != 0) {
                    iVar1 = *pcVar6;
                    piVar2 = *(pcVar6 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar6 = -0x2152ffffffffff00;
                *(pcVar6 + 8) = -0x2152fffffffffede;
                pcVar6 = pcVar7;
            } while (pcVar7 != obj.edge_infos);
        }
    }
    return 0;
}


// ===== sym.glink_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.glink_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *puVar4;
    int iVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    code *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar12;
    code *pcVar13;
    char *pcVar14;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uVar12 = *(param_1 + 0x300);
    puVar6 = of_get_next_available_child(uVar12,0);
    if (puVar6 != NULL) {
        param_1 = param_1 + 0x10;
        do {
            uStack_70 = 0;
            puVar7 = devm_kmalloc(param_1,0x68,0xdc0);
            if (puVar7 != NULL) {
                puVar1 = puVar7 + 5;
                iVar5 = of_property_read_string(puVar6,"label",puVar1);
                if (iVar5 < 0) {
                    *puVar1 = *puVar6;
                }
                iVar5 = of_property_read_string(puVar6,"qcom,glink-label",puVar7 + 4);
                if (iVar5 < 0) {
                    _dev_err(param_1,"[%s]: no qcom,glink-label for %s\n","probe_subsystem",*puVar1);
                    ipc_log_string(_segment.ehdr,"[%s]: no qcom,glink-label for %s\n","probe_subsystem",*puVar1);
                }
                else {
                    puVar7[2] = param_1;
                    puVar7[3] = puVar6;
                    iVar5 = of_property_read_string(puVar6,"transport",&uStack_70);
                    uVar10 = uStack_70;
                    if (iVar5 < 0) {
                        uVar10 = *puVar1;
                        pcVar14 = "[%s]: %s missing transport\n";
                    }
                    else {
                        iVar5 = strcmp(uStack_70,"smem");
                        if (iVar5 == 0) {
                            pcVar11 = sym.glink_probe_smem_reg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            pcVar13 = sym.__typeid__ZTSFvP9edge_infoE_global_addr;
code_r0x080012c0:
                            puVar7[7] = pcVar11;
                            puVar7[8] = pcVar13;
                        }
                        else {
                            iVar5 = strcmp(uVar10,"spss");
                            if (iVar5 == 0) {
                                pcVar11 = sym.__typeid__ZTSFiP9edge_infoE_global_addr;
                                pcVar13 = sym.glink_probe_spss_unreg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                goto code_r0x080012c0;
                            }
                        }
                        puVar7[9] = sym.glink_probe_ssr_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                        uVar8 = qcom_register_ssr_notifier(puVar7[5]);
                        puVar4 = *0x80001f8;
                        if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
                            puVar7[0xc] = uVar8;
                            uVar8 = __list_add_valid(puVar7,puVar4,obj.edge_infos);
                            if ((uVar8 & 1) != 0) {
                                *0x80001f8 = puVar7;
                                *puVar7 = obj.edge_infos;
                                puVar7[1] = puVar4;
                                *puVar4 = puVar7;
                            }
                            ipc_log_string(_segment.ehdr,"probe successful for %s\n",*puVar1);
                            goto code_r0x080011f0;
                        }
                        uVar10 = *puVar1;
                        pcVar14 = "[%s]: could not register for SSR notifier for %s\n";
                    }
                    _dev_err(param_1,pcVar14,"probe_subsystem",uVar10);
                    ipc_log_string(_segment.ehdr,pcVar14,"probe_subsystem",*puVar1);
                }
            }
code_r0x080011f0:
            puVar6 = of_get_next_available_child(uVar12,puVar6);
        } while (puVar6 != NULL);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return 0;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.glink_remove;
    uVar12 = *(iVar9 + 0x300);
    for (iVar9 = of_get_next_available_child(uVar12,0); iVar9 != 0; iVar9 = of_get_next_available_child(uVar12,iVar9))
    {
        pcVar11 = _obj.edge_infos;
        if (_obj.edge_infos != obj.edge_infos) {
            do {
                pcVar13 = *pcVar11;
                qcom_unregister_ssr_notifier(*(pcVar11 + 0x60),pcVar11 + 0x48);
                uVar8 = __list_del_entry_valid(pcVar11);
                if ((uVar8 & 1) != 0) {
                    iVar2 = *pcVar11;
                    piVar3 = *(pcVar11 + 8);
                    *(iVar2 + 8) = piVar3;
                    *piVar3 = iVar2;
                }
                *pcVar11 = -0x2152ffffffffff00;
                *(pcVar11 + 8) = -0x2152fffffffffede;
                pcVar11 = pcVar13;
            } while (pcVar13 != obj.edge_infos);
        }
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001130 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_context_destroy();
    }
    platform_driver_unregister(reloc.glink_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001138 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = ipc_log_context_create(4,"glink_probe",0);
    iVar1 = __platform_driver_register(reloc.glink_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x800025a,"glink_probe_init",iVar1);
    }
    return iVar1;
}


// ===== sym.glink_probe_ssr_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001140 (size 8) =====

uchar  [16] sym.glink_probe_ssr_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uchar auVar1 [16];
    int64_t iVar2;
    uint64_t uVar3;
    int64_t extraout_x1;
    int64_t extraout_x1_00;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"received %ld for %s\n",param_2,*(param_1 + -0x20));
    if (param_2 == 3) {
        iVar2 = (*(param_1 + -0x38))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(param_1 + -0x38);
        }
        pcVar4 = *(param_1 + -8);
        if (1 < (pcVar4 + -0x8001148 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xe2d7d4f29c1d57a8,pcVar4,0x8000220);
            iVar2 = extraout_x1_00;
        }
        (*pcVar4)(param_1 + -0x48,iVar2);
    }
    else if (param_2 == 1) {
        iVar2 = (*(param_1 + -0x38))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(param_1 + -0x38);
        }
        pcVar4 = *(param_1 + -0x10);
        if (1 < (pcVar4 + -0x8001158 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xd516179f5a686645,pcVar4,0x8000200);
            iVar2 = extraout_x1;
        }
        (*pcVar4)(param_1 + -0x48,iVar2);
    }
    uVar3 = (*(param_1 + -0x38))[0xe];
    if (uVar3 == 0) {
        uVar3 = **(param_1 + -0x38);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3;
    return auVar1 << 0x40;
}


// ===== sym.__typeid__ZTSFvP9edge_infoE_global_addr @ 0x08001148 (size 8) =====

void sym.__typeid__ZTSFvP9edge_infoE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x30) != 0) {
        qcom_glink_smem_unregister();
    }
    *(param_1 + 0x30) = 0;
    ipc_log_string(_segment.ehdr,"unregister for %s\n",*(param_1 + 0x28));
    return;
}


// ===== sym.glink_probe_spss_unreg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001150 (size 8) =====

void sym.glink_probe_spss_unreg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x30) = 0;
    return;
}


// ===== sym.__typeid__ZTSFiP9edge_infoE_global_addr @ 0x08001158 (size 8) =====

ulong sym.__typeid__ZTSFiP9edge_infoE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x30) = 0;
    _dev_err(*(param_1 + 0x10),"[%s]: register failed for %s\n","glink_probe_spss_reg",*(param_1 + 0x28));
    ipc_log_string(_segment.ehdr,"[%s]: register failed for %s\n","glink_probe_spss_reg",*(param_1 + 0x28));
    *(param_1 + 0x30) = 0;
    return 0;
}


// ===== sym.glink_probe_smem_reg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.glink_probe_smem_reg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0x10);
    uVar2 = qcom_glink_smem_register(uVar1,*(param_1 + 0x18));
    *(param_1 + 0x30) = uVar2;
    if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
        _dev_err(uVar1,"[%s]: register failed for %s\n","glink_probe_smem_reg",*(param_1 + 0x28));
        ipc_log_string(_segment.ehdr,"[%s]: register failed for %s\n","glink_probe_smem_reg",*(param_1 + 0x28));
        *(param_1 + 0x30) = 0;
    }
    ipc_log_string(_segment.ehdr,"register successful for %s\n",*(param_1 + 0x28));
    return 0;
}


// ===== sym.glink_probe @ 0x08001168 (size 636) =====

ulong sym.glink_probe(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *puVar4;
    int iVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    code *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar12;
    code *pcVar13;
    char *pcVar14;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uVar12 = *(arg1 + 0x300);
    puVar6 = of_get_next_available_child(uVar12,0);
    if (puVar6 != NULL) {
        arg1 = arg1 + 0x10;
        do {
            uStack_70 = 0;
            puVar7 = devm_kmalloc(arg1,0x68,0xdc0);
            if (puVar7 != NULL) {
                puVar1 = puVar7 + 5;
                iVar5 = of_property_read_string(puVar6,"label",puVar1);
                if (iVar5 < 0) {
                    *puVar1 = *puVar6;
                }
                iVar5 = of_property_read_string(puVar6,"qcom,glink-label",puVar7 + 4);
                if (iVar5 < 0) {
                    _dev_err(arg1,"[%s]: no qcom,glink-label for %s\n","probe_subsystem",*puVar1);
                    ipc_log_string(_segment.ehdr,"[%s]: no qcom,glink-label for %s\n","probe_subsystem",*puVar1);
                }
                else {
                    puVar7[2] = arg1;
                    puVar7[3] = puVar6;
                    iVar5 = of_property_read_string(puVar6,"transport",&uStack_70);
                    uVar10 = uStack_70;
                    if (iVar5 < 0) {
                        uVar10 = *puVar1;
                        pcVar14 = "[%s]: %s missing transport\n";
                    }
                    else {
                        iVar5 = strcmp(uStack_70,"smem");
                        if (iVar5 == 0) {
                            pcVar11 = sym.glink_probe_smem_reg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            pcVar13 = sym.__typeid__ZTSFvP9edge_infoE_global_addr;
code_r0x080012c0:
                            puVar7[7] = pcVar11;
                            puVar7[8] = pcVar13;
                        }
                        else {
                            iVar5 = strcmp(uVar10,"spss");
                            if (iVar5 == 0) {
                                pcVar11 = sym.__typeid__ZTSFiP9edge_infoE_global_addr;
                                pcVar13 = sym.glink_probe_spss_unreg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                goto code_r0x080012c0;
                            }
                        }
                        puVar7[9] = sym.glink_probe_ssr_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                        uVar8 = qcom_register_ssr_notifier(puVar7[5]);
                        puVar4 = *0x80001f8;
                        if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
                            puVar7[0xc] = uVar8;
                            uVar8 = __list_add_valid(puVar7,puVar4,obj.edge_infos);
                            if ((uVar8 & 1) != 0) {
                                *0x80001f8 = puVar7;
                                *puVar7 = obj.edge_infos;
                                puVar7[1] = puVar4;
                                *puVar4 = puVar7;
                            }
                            ipc_log_string(_segment.ehdr,"probe successful for %s\n",*puVar1);
                            goto code_r0x080011f0;
                        }
                        uVar10 = *puVar1;
                        pcVar14 = "[%s]: could not register for SSR notifier for %s\n";
                    }
                    _dev_err(arg1,pcVar14,"probe_subsystem",uVar10);
                    ipc_log_string(_segment.ehdr,pcVar14,"probe_subsystem",*puVar1);
                }
            }
code_r0x080011f0:
            puVar6 = of_get_next_available_child(uVar12,puVar6);
        } while (puVar6 != NULL);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return 0;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.glink_remove;
    uVar12 = *(iVar9 + 0x300);
    for (iVar9 = of_get_next_available_child(uVar12,0); iVar9 != 0; iVar9 = of_get_next_available_child(uVar12,iVar9))
    {
        pcVar11 = _obj.edge_infos;
        if (_obj.edge_infos != obj.edge_infos) {
            do {
                pcVar13 = *pcVar11;
                qcom_unregister_ssr_notifier(*(pcVar11 + 0x60),pcVar11 + 0x48);
                uVar8 = __list_del_entry_valid(pcVar11);
                if ((uVar8 & 1) != 0) {
                    iVar2 = *pcVar11;
                    piVar3 = *(pcVar11 + 8);
                    *(iVar2 + 8) = piVar3;
                    *piVar3 = iVar2;
                }
                *pcVar11 = -0x2152ffffffffff00;
                *(pcVar11 + 8) = -0x2152fffffffffede;
                pcVar11 = pcVar13;
            } while (pcVar13 != obj.edge_infos);
        }
    }
    return 0;
}


// ===== sym.glink_remove @ 0x080013e4 (size 204) =====

ulong sym.glink_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong uVar5;
    code *pcVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(arg1 + 0x300);
    for (iVar3 = of_get_next_available_child(uVar5,0); iVar3 != 0; iVar3 = of_get_next_available_child(uVar5,iVar3)) {
        pcVar6 = _obj.edge_infos;
        if (_obj.edge_infos != obj.edge_infos) {
            do {
                pcVar7 = *pcVar6;
                qcom_unregister_ssr_notifier(*(pcVar6 + 0x60),pcVar6 + 0x48);
                uVar4 = __list_del_entry_valid(pcVar6);
                if ((uVar4 & 1) != 0) {
                    iVar1 = *pcVar6;
                    piVar2 = *(pcVar6 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar6 = -0x2152ffffffffff00;
                *(pcVar6 + 8) = -0x2152fffffffffede;
                pcVar6 = pcVar7;
            } while (pcVar7 != obj.edge_infos);
        }
    }
    return 0;
}


// ===== sym.glink_probe_smem_reg @ 0x080014b0 (size 180) =====

ulong sym.glink_probe_smem_reg(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x10);
    uVar2 = qcom_glink_smem_register(uVar1,*(arg1 + 0x18));
    *(arg1 + 0x30) = uVar2;
    if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
        _dev_err(uVar1,"[%s]: register failed for %s\n","glink_probe_smem_reg",*(arg1 + 0x28));
        ipc_log_string(_segment.ehdr,"[%s]: register failed for %s\n","glink_probe_smem_reg",*(arg1 + 0x28));
        *(arg1 + 0x30) = 0;
    }
    ipc_log_string(_segment.ehdr,"register successful for %s\n",*(arg1 + 0x28));
    return 0;
}


// ===== sym.glink_probe_smem_unreg @ 0x08001564 (size 84) =====

void sym.glink_probe_smem_unreg(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x30) != 0) {
        qcom_glink_smem_unregister();
    }
    *(arg1 + 0x30) = 0;
    ipc_log_string(_segment.ehdr,"unregister for %s\n",*(arg1 + 0x28));
    return;
}


// ===== sym.glink_probe_spss_reg @ 0x080015b8 (size 124) =====

ulong sym.glink_probe_spss_reg(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x30) = 0;
    _dev_err(*(arg1 + 0x10),"[%s]: register failed for %s\n","glink_probe_spss_reg",*(arg1 + 0x28));
    ipc_log_string(_segment.ehdr,"[%s]: register failed for %s\n","glink_probe_spss_reg",*(arg1 + 0x28));
    *(arg1 + 0x30) = 0;
    return 0;
}


// ===== sym.glink_probe_spss_unreg @ 0x08001634 (size 16) =====

void sym.glink_probe_spss_unreg(int64_t arg1)

{
    *(arg1 + 0x30) = 0;
    return;
}


// ===== sym.glink_probe_ssr_cb @ 0x08001644 (size 316) =====

uchar  [16] sym.glink_probe_ssr_cb(int64_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    int64_t iVar2;
    uint64_t uVar3;
    int64_t extraout_x1;
    int64_t extraout_x1_00;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"received %ld for %s\n",arg2,*(arg1 + -0x20));
    if (arg2 == 3) {
        iVar2 = (*(arg1 + -0x38))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + -0x38);
        }
        pcVar4 = *(arg1 + -8);
        if (1 < (pcVar4 + -0x8001148 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xe2d7d4f29c1d57a8,pcVar4,0x8000220);
            iVar2 = extraout_x1_00;
        }
        (*pcVar4)(arg1 + -0x48,iVar2);
    }
    else if (arg2 == 1) {
        iVar2 = (*(arg1 + -0x38))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + -0x38);
        }
        pcVar4 = *(arg1 + -0x10);
        if (1 < (pcVar4 + -0x8001158 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xd516179f5a686645,pcVar4,0x8000200);
            iVar2 = extraout_x1;
        }
        (*pcVar4)(arg1 + -0x48,iVar2);
    }
    uVar3 = (*(arg1 + -0x38))[0xe];
    if (uVar3 == 0) {
        uVar3 = **(arg1 + -0x38);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3;
    return auVar1 << 0x40;
}


// ===== sym.__cfi_check_fail @ 0x08001924 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001968

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
    //switch table (4 cases) at 0x8000240
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800197c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001984 (size 128) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = ipc_log_context_create(4,"glink_probe",0);
    iVar1 = __platform_driver_register(reloc.glink_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x800025a,"glink_probe_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001a04 (size 60) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_context_destroy();
    }
    platform_driver_unregister(reloc.glink_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

