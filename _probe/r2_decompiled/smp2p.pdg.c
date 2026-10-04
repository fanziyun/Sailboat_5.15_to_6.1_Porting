// decompiled from smp2p by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 544) =====

//WARNING: Switch with 1 destination removed at 0x080026ec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x30c7f6a5d51944be) {
        if (arg1 < -0x4cb00eb12b4d5ca5) {
            if (arg1 == -0x6e17e11ed1e9a359) {
                pcVar2 = sym.smp2p_update_bits.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt;
            }
            else {
                if (arg1 != -0x68e06357d3edcb86) {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x080026ac;
                    pcVar2 = sym.qcom_smp2p_freeze.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt;
code_r0x080011ec:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x080026ac;
                }
                pcVar2 = sym.handle_level_irq.cfi_jt;
            }
        }
        else if (arg1 == -0x4cb00eb12b4d5ca5) {
            pcVar2 = sym.smp2p_retrigger_irq.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x080026ac;
                pcVar2 = sym.qcom_smp2p_probe.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt;
                goto code_r0x080011ec;
            }
            pcVar2 = sym.qcom_smp2p_intr.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt;
        }
    }
    else if (arg1 < 0x12432ee19d152236) {
        if (arg1 == -0x30c7f6a5d51944be) {
            pcVar2 = sym.smp2p_irq_map.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt;
        }
        else if (arg1 == -0x5d12e6f23a0a14a) {
            pcVar2 = sym.irq_domain_xlate_twocell.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080026ac;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x12432ee19d152236) {
            pcVar2 = sym.smp2p_unmask_irq.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt;
            goto code_r0x080011ec;
        }
        if (arg1 == 0x566cdc1d6ec224d9) {
            pcVar2 = sym.smp2p_set_irq_type.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080026ac;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080026ac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002700);
    (*pcVar1)();
}


// ===== sym.handle_level_irq.cfi_jt @ 0x08001228 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.handle_level_irq.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.smp2p_irq_map.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.smp2p_irq_map.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1,uint param_2)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x20);
    irq_set_chip_and_handler_name(param_2,obj.smp2p_irq_chip,sym.handle_level_irq.cfi_jt,0);
    irq_set_chip_data(param_2,iVar1);
    irq_modify_status(param_2,0,0x8000);
    irq_modify_status(param_2,0,0x400);
    irq_set_parent(param_2,*(*(iVar1 + 0x10) + 0x38));
    irq_modify_status(param_2,0,0x80000);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001238 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_smp2p_probe.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001240 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_smp2p_probe.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_smp2p_probe.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001248 (size 8) =====

uint64_t sym.qcom_smp2p_probe.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t *arg1;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    char *pcVar11;
    char *pcVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t *piVar14;
    int64_t iVar15;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    if (_segment.ehdr == 0) {
        _segment.ehdr = ipc_log_context_create(2,"smp2p",0);
    }
    iVar8 = param_1 + 0x10;
    arg1 = devm_kmalloc(iVar8,0xb0,0xdc0);
    if (arg1 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x0800173c;
    }
    piVar2 = arg1 + 0x12;
    piVar1 = arg1 + 0x14;
    *arg1 = iVar8;
    arg1[0x12] = piVar2;
    arg1[0x13] = piVar2;
    arg1[0x14] = piVar1;
    arg1[0x15] = piVar1;
    *(param_1 + 0xa8) = arg1;
    uVar6 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,smem",arg1 + 3,2,0);
    if (uVar6 < 0) {
        uVar6 = uVar6 & 0xffffffff;
        goto code_r0x0800173c;
    }
    pcVar12 = "qcom,local-pid";
    iVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,local-pid",arg1 + 6,1,0);
    if (iVar4 < 0) {
code_r0x08001404:
        pcVar11 = "failed to read %s\n";
    }
    else {
        pcVar12 = "qcom,remote-pid";
        iVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,remote-pid",arg1 + 0x34,1,0);
        if (iVar4 < 0) goto code_r0x08001404;
        uVar7 = platform_get_irq(param_1,0);
        uVar6 = uVar7 & 0xffffffff;
        if (uVar7 < 0) goto code_r0x0800173c;
        arg1[10] = iVar8;
        *(arg1 + 0xd) = 1;
        uVar6 = mbox_request_channel(arg1 + 10,0);
        arg1[0x11] = uVar6;
        if (uVar6 < 0xfffffffffffff001) goto code_r0x08001494;
        if (uVar6 != 0xffffffffffffffed) {
            uVar6 = uVar6 & 0xffffffff;
            goto code_r0x0800173c;
        }
        iVar15 = *arg1;
        arg1[0x11] = 0;
        iVar9 = of_parse_phandle(*(iVar15 + 0x2f0),"qcom,ipc",0);
        if (iVar9 == 0) {
            _dev_err(iVar15,"no qcom,ipc node\n");
            uVar6 = 0xffffffed;
            goto code_r0x0800173c;
        }
        uVar6 = syscon_node_to_regmap();
        arg1[8] = uVar6;
        if (0xfffffffffffff000 < uVar6) {
            if (uVar6 != 0) goto code_r0x0800173c;
code_r0x08001494:
            uVar5 = sym.qcom_smp2p_alloc_outbound_item(arg1);
            if (uVar5 < 0) {
                uVar6 = uVar5;
            }
            else {
                for (iVar9 = of_get_next_available_child(*(param_1 + 0x300),0); iVar9 != 0;
                    iVar9 = of_get_next_available_child(*(param_1 + 0x300),iVar9)) {
                    piVar10 = kmem_cache_alloc_trace(_handle_level_irq,0xdc0,0x68);
                    if (piVar10 == NULL) goto code_r0x080016c0;
                    piVar10[2] = arg1;
                    *(piVar10 + 0xc) = 0;
                    uVar5 = of_property_read_string(iVar9,"qcom,entry-name",piVar10 + 3);
                    if (uVar5 < 0) {
                        uVar6 = uVar5;
                        goto code_r0x080016cc;
                    }
                    iVar15 = of_find_property(iVar9,"interrupt-controller",0);
                    if (iVar15 == 0) {
                        iVar15 = arg1[2];
                        uStack_78 = 0;
                        uStack_70 = 0;
                        strlcpy(&uStack_78,piVar10[3],0x10);
                        if (0xf < *(iVar15 + 0xe)) goto code_r0x080017e8;
                        iVar13 = iVar15 + *(iVar15 + 0xe) * 0x14;
                        *(iVar13 + 0x14) = uStack_78;
                        *(iVar13 + 0x1c) = uStack_70;
                        piVar10[4] = iVar13 + 0x24;
                        *(iVar15 + 0xe) = *(iVar15 + 0xe) + 1;
                        uVar6 = qcom_smem_state_register
                                          (iVar9,reloc.smp2p_update_bits.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt,
                                           piVar10);
                        piVar10[0xb] = uVar6;
                        if (0xfffffffffffff000 < uVar6) {
                            _dev_err(*arg1,"failed to register qcom_smem_state\n");
                            uVar6 = piVar10[0xb];
                            if (uVar6 < 0) goto code_r0x080016cc;
                        }
                        iVar15 = *piVar1;
                        uVar6 = __list_add_valid(piVar10,piVar1,iVar15);
                        if ((uVar6 & 1) != 0) {
                            *(iVar15 + 8) = piVar10;
                            *piVar10 = iVar15;
                            piVar10[1] = piVar1;
                            *piVar1 = piVar10;
                        }
                    }
                    else {
                        iVar15 = __irq_domain_add(iVar9 + 0x18,0x20,0x20,0,obj.smp2p_irq_ops,piVar10);
                        piVar10[6] = iVar15;
                        if (iVar15 == 0) {
                            _dev_err(*arg1,"failed to add irq_domain\n");
                            uVar6 = 0xfffffff4;
                            goto code_r0x080016cc;
                        }
                        iVar15 = *piVar2;
                        uVar6 = __list_add_valid(piVar10,piVar2,iVar15);
                        if ((uVar6 & 1) != 0) {
                            *(iVar15 + 8) = piVar10;
                            *piVar10 = iVar15;
                            piVar10[1] = piVar2;
                            *piVar2 = piVar10;
                        }
                    }
                }
                DataSynchronizationBarrier(3,2,0);
                if (arg1[0x11] == 0) {
                    regmap_write(arg1[8],arg1[9],1L << (*(arg1 + 0x4c) & 0x3f));
                }
                else {
                    mbox_send_message(arg1[0x11],0);
                    mbox_client_txdone(arg1[0x11],0);
                }
                *(arg1 + 7) = uVar7;
                iVar9 = kasprintf(0xcc0,"smp2p_%d",*(arg1 + 0x34));
                arg1[5] = iVar9;
                if (iVar9 == 0) {
code_r0x080016c0:
                    uVar6 = 0xfffffff4;
                }
                else {
                    uVar7 = devm_request_threaded_irq
                                      (iVar8,uVar7 & 0xffffffff,0,
                                       sym.qcom_smp2p_intr.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt,0x2000,iVar9,arg1)
                    ;
                    uVar6 = uVar7 & 0xffffffff;
                    if (uVar7 == 0) {
                        irq_set_irq_wake(arg1[7],1);
                        goto code_r0x0800173c;
                    }
                    _dev_err(iVar8,"failed to request interrupt\n");
                }
code_r0x080016cc:
                piVar10 = *piVar2;
                while (piVar10 != piVar2) {
                    piVar14 = *piVar10;
                    irq_domain_remove(piVar10[6]);
                    kfree(piVar10);
                    piVar10 = piVar14;
                }
                piVar2 = *piVar1;
                while (piVar2 != piVar1) {
                    piVar10 = *piVar2;
                    qcom_smem_state_unregister(piVar2[0xb]);
                    kfree(piVar2);
                    piVar2 = piVar10;
                }
                kfree(arg1[5]);
                *(arg1[2] + 0xe) = 0;
            }
            mbox_free_channel(arg1[0x11]);
            goto code_r0x0800173c;
        }
        iVar4 = of_property_read_u32_index(*(iVar15 + 0x2f0),"qcom,ipc",1,arg1 + 9);
        if (iVar4 < 0) {
            pcVar11 = "no offset in %s\n";
        }
        else {
            iVar4 = of_property_read_u32_index(*(iVar15 + 0x2f0),"qcom,ipc",2,arg1 + 0x4c);
            if (-1 < iVar4) goto code_r0x08001494;
            pcVar11 = "no bit in %s\n";
        }
        pcVar12 = "qcom,ipc";
        iVar8 = iVar15;
    }
    _dev_err(iVar8,pcVar11,pcVar12);
    uVar6 = 0xffffffea;
code_r0x0800173c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x080017e8:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80017ec);
    (*pcVar3)();
}


// ===== sym.qcom_smp2p_remove.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.qcom_smp2p_remove.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa8);
    piVar1 = *(iVar2 + 0x90);
    while (piVar1 != iVar2 + 0x90) {
        piVar3 = *piVar1;
        irq_domain_remove(piVar1[6]);
        kfree(piVar1);
        piVar1 = piVar3;
    }
    piVar1 = *(iVar2 + 0xa0);
    while (piVar1 != iVar2 + 0xa0) {
        piVar3 = *piVar1;
        qcom_smem_state_unregister(piVar1[0xb]);
        kfree(piVar1);
        piVar1 = piVar3;
    }
    mbox_free_channel(*(iVar2 + 0x88));
    kfree(*(iVar2 + 0x28));
    *(*(iVar2 + 0x10) + 0xe) = 0;
    return 0;
}


// ===== sym.smp2p_set_irq_type.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001258 (size 8) =====

ulong sym.smp2p_set_irq_type.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    
    if ((param_2 & 3) == 0) {
        return 0xffffffea;
    }
    iVar5 = *(param_1 + 0x30);
    uVar6 = *(param_1 + 8) >> 6 & 0x3ffffff;
    uVar4 = 1L << (*(param_1 + 8) & 0x3f);
    puVar1 = iVar5 + uVar6 * 8 + 0x48;
    if ((param_2 & 1) == 0) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & (uVar4 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | uVar4;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    puVar1 = iVar5 + uVar6 * 8 + 0x50;
    if ((param_2 >> 1 & 1) == 0) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & (uVar4 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | uVar4;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return 0;
}


// ===== sym.smp2p_retrigger_irq.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001260 (size 8) =====

ulong sym.smp2p_retrigger_irq.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x30);
    uVar4 = *(param_1 + 8);
    ipc_log_string(_segment.ehdr,"[%s]: %d: %s: %lu\n","smp2p_retrigger_irq",*(*(iVar5 + 0x10) + 0x34),
                   *(iVar5 + 0x18),uVar4);
    puVar1 = iVar5 + (uVar4 >> 6 & 0x3ffffff) * 8 + 0x40;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 | 1L << (uVar4 & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataSynchronizationBarrier(3,3,0);
    return 0;
}


// ===== sym.qcom_smp2p_intr.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001268 (size 8) =====

ulong sym.qcom_smp2p_intr.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(ulong param_1,ulong *param_2)

{
    char cVar1;
    uint8_t uVar2;
    unkuint3 Var3;
    ulong uVar4;
    uint64_t uVar5;
    uchar uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_30 = 0;
    uVar5 = param_2[1];
    if (uVar5 == 0) {
        uVar5 = qcom_smem_get(*(param_2 + 0x34),*(param_2 + 3),&uStack_30);
        if (0xfffffffffffff000 < uVar5) {
            _dev_err(*param_2,"Unable to acquire remote smp2p item\n");
            goto code_r0x08001b88;
        }
        param_2[1] = uVar5;
        cVar1 = *(param_2 + 0x26);
    }
    else {
        cVar1 = *(param_2 + 0x26);
    }
    if (cVar1 == '\0') {
        iVar7 = param_2[2];
        if (*(uVar5 + 4) != *(iVar7 + 4)) goto code_r0x08001b88;
        Var3 = *(iVar7 + 5) & *(uVar5 + 5);
        *(iVar7 + 5) = Var3;
        *(iVar7 + 7) = Var3 >> 0x10;
        if ((Var3 & 1) == 0) {
            uVar6 = *(param_2 + 0x24);
        }
        else {
            uVar6 = 1;
            *(param_2 + 0x24) = 1;
        }
        uVar4 = _segment.ehdr;
        *(param_2 + 0x26) = 1;
        ipc_log_string(uVar4,"[%s]: %d: state=open ssr_ack=%d\n","qcom_smp2p_negotiate",*(param_2 + 0x34),uVar6);
        if (*(param_2 + 0x26) == '\0') goto code_r0x08001b88;
    }
    if ((*(param_2 + 0x24) == '\0') || ((*(param_2[1] + 0x10) & 1) == *(param_2 + 0x25))) {
        sym.qcom_smp2p_notify_in(param_2);
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: %d: SSR DETECTED\n","qcom_smp2p_check_ssr",*(param_2 + 0x34));
        sym.qcom_smp2p_notify_in(param_2);
        uVar2 = *(param_2 + 0x25);
        *(param_2 + 0x25) = uVar2 ^ 1;
        *(param_2[2] + 0x10) = *(param_2[2] + 0x10) & 0xfffffffd | uVar2 << 1 ^ 2;
        DataSynchronizationBarrier(3,2,0);
        if (param_2[0x11] == 0) {
            regmap_write(param_2[8],*(param_2 + 9),1L << (*(param_2 + 0x4c) & 0x3f));
        }
        else {
            mbox_send_message(param_2[0x11],0);
            mbox_client_txdone(param_2[0x11],0);
        }
    }
code_r0x08001b88:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return 1;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.smp2p_irq_map;
    uVar5 = auVar8._8_8_ & 0xffffffff;
    iVar7 = *(auVar8._0_8_ + 0x20);
    irq_set_chip_and_handler_name(uVar5,obj.smp2p_irq_chip,sym.handle_level_irq.cfi_jt,0);
    irq_set_chip_data(uVar5,iVar7);
    irq_modify_status(uVar5,0,0x8000);
    irq_modify_status(uVar5,0,0x400);
    irq_set_parent(uVar5,*(*(iVar7 + 0x10) + 0x38));
    irq_modify_status(uVar5,0,0x80000);
    return 0;
}


// ===== sym.qcom_smp2p_freeze.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001270 (size 8) =====

ulong sym.qcom_smp2p_freeze.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x98);
    irq_set_irq_wake(*(iVar5 + 0x38),0);
    piVar6 = iVar5 + 0xa0;
    piVar3 = *piVar6;
    while (piVar3 != piVar6) {
        piVar7 = *piVar3;
        qcom_smem_state_unregister(piVar3[0xb]);
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3);
        piVar3 = piVar7;
    }
    *(iVar5 + 0xa0) = piVar6;
    *(iVar5 + 0xa8) = piVar6;
    piVar3 = *(iVar5 + 0x90);
    while (piVar3 != iVar5 + 0x90) {
        *(piVar3 + 5) = 0;
        piVar3 = *piVar3;
    }
    *(iVar5 + 8) = 0;
    *(iVar5 + 0x20) = 0;
    return 0;
}


// ===== sym.qcom_smp2p_restore.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001278 (size 8) =====

uchar * sym.qcom_smp2p_restore.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    code *pcVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uchar *puVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    arg1 = *(param_1 + 0x98);
    uVar3 = sym.qcom_smp2p_alloc_outbound_item(arg1);
    uVar9 = uVar3 & 0xffffffff;
    if (uVar3 < 0) {
code_r0x080025f0:
        if (uVar9 == -0x11) {
            uVar9 = 0xffffffef;
        }
        else {
code_r0x0800264c:
            _dev_err(param_1,"failed to alloc items ret = %d\n",uVar9 & 0xffffffff);
        }
    }
    else {
        iVar4 = of_get_next_available_child(*(param_1 + 0x2f0),0);
        if (iVar4 != 0) {
            piVar1 = arg1 + 0x14;
            do {
                piVar5 = kmem_cache_alloc_trace(_handle_level_irq,0xdc0,0x68);
                if (piVar5 == NULL) {
                    uVar9 = 0xfffffff4;
                    goto code_r0x0800264c;
                }
                piVar5[2] = arg1;
                *(piVar5 + 0xc) = 0;
                uVar3 = of_property_read_string(iVar4,"qcom,entry-name",piVar5 + 3);
                uVar9 = uVar3 & 0xffffffff;
                if (uVar3 < 0) {
code_r0x080025e8:
                    kfree(piVar5);
                    goto code_r0x080025f0;
                }
                iVar6 = of_find_property(iVar4,"interrupt-controller",0);
                if (iVar6 == 0) {
                    iVar6 = arg1[2];
                    uStack_78 = 0;
                    uStack_70 = 0;
                    strlcpy(&uStack_78,piVar5[3],0x10);
                    if (0xf < *(iVar6 + 0xe)) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80026a4);
                        (*pcVar2)();
                    }
                    iVar8 = iVar6 + *(iVar6 + 0xe) * 0x14;
                    *(iVar8 + 0x14) = uStack_78;
                    *(iVar8 + 0x1c) = uStack_70;
                    piVar5[4] = iVar8 + 0x24;
                    *(iVar6 + 0xe) = *(iVar6 + 0xe) + 1;
                    uVar3 = qcom_smem_state_register
                                      (iVar4,reloc.smp2p_update_bits.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt,piVar5);
                    piVar5[0xb] = uVar3;
                    if (uVar3 < 0xfffffffffffff001) {
                        uVar9 = 0;
                    }
                    else {
                        _dev_err(*arg1,"failed to register qcom_smem_state\n");
                        uVar9 = piVar5[0xb];
                        if (uVar9 < 0) goto code_r0x080025e8;
                    }
                    iVar6 = *piVar1;
                    uVar3 = __list_add_valid(piVar5,piVar1,iVar6);
                    if ((uVar3 & 1) != 0) {
                        *(iVar6 + 8) = piVar5;
                        *piVar5 = iVar6;
                        piVar5[1] = piVar1;
                        *piVar1 = piVar5;
                    }
                }
                else {
                    kfree(piVar5);
                }
                iVar4 = of_get_next_available_child(*(param_1 + 0x2f0),iVar4);
            } while (iVar4 != 0);
        }
        irq_set_irq_wake(*(arg1 + 7),1);
        DataSynchronizationBarrier(3,2,0);
        if (arg1[0x11] == 0) {
            regmap_write(arg1[8],*(arg1 + 9),1L << (*(arg1 + 0x4c) & 0x3f));
        }
        else {
            mbox_send_message(arg1[0x11],0);
            mbox_client_txdone(arg1[0x11],0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        auVar10 = __stack_chk_fail();
        puVar7 = auVar10._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar10._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8002700);
        (*pcVar2)();
    }
    return uVar9 & 0xffffffff;
}


// ===== sym.irq_domain_xlate_twocell.cfi_jt @ 0x08001280 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.irq_domain_xlate_twocell.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.smp2p_unmask_irq.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001288 (size 8) =====

void sym.smp2p_unmask_irq.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    
    uVar4 = *(param_1 + 8);
    puVar1 = *(param_1 + 0x30) + (uVar4 >> 6 & 0x3ffffff) * 8 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 | 1L << (uVar4 & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    return;
}


// ===== sym.smp2p_mask_irq.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001290 (size 8) =====

void sym.smp2p_mask_irq.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    
    uVar4 = *(param_1 + 8);
    puVar1 = *(param_1 + 0x30) + (uVar4 >> 6 & 0x3ffffff) * 8 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    return;
}


// ===== sym.smp2p_update_bits.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt @ 0x08001298 (size 8) =====

ulong sym.smp2p_update_bits.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(param_1 + 0x60);
    uVar1 = sym.readl(*(param_1 + 0x20));
    param_3 = uVar1 & (param_2 ^ 0xffffffff) | param_3;
    sym.writel(param_3,*(param_1 + 0x20));
    _raw_spin_unlock_irqrestore(param_1 + 0x60,uVar2);
    ipc_log_string(_segment.ehdr,"[%s]: %d: %s: orig:0x%0x new:0x%0x\n","smp2p_update_bits",
                   *(*(param_1 + 0x10) + 0x34),*(param_1 + 0x18),uVar1,param_3);
    if (param_3 != uVar1) {
        iVar3 = *(param_1 + 0x10);
        DataSynchronizationBarrier(3,2,0);
        if (*(iVar3 + 0x88) == 0) {
            regmap_write(*(iVar3 + 0x40),*(iVar3 + 0x48),1L << (*(iVar3 + 0x4c) & 0x3f));
        }
        else {
            mbox_send_message(*(iVar3 + 0x88),0);
            mbox_client_txdone(*(iVar3 + 0x88),0);
        }
    }
    return 0;
}


// ===== sym.qcom_smp2p_probe @ 0x080012a0 (size 1356) =====

uint64_t sym.qcom_smp2p_probe(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t *arg1_00;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    char *pcVar11;
    char *pcVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t *piVar14;
    int64_t iVar15;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    if (_segment.ehdr == 0) {
        _segment.ehdr = ipc_log_context_create(2,"smp2p",0);
    }
    iVar8 = arg1 + 0x10;
    arg1_00 = devm_kmalloc(iVar8,0xb0,0xdc0);
    if (arg1_00 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x0800173c;
    }
    piVar2 = arg1_00 + 0x12;
    piVar1 = arg1_00 + 0x14;
    *arg1_00 = iVar8;
    arg1_00[0x12] = piVar2;
    arg1_00[0x13] = piVar2;
    arg1_00[0x14] = piVar1;
    arg1_00[0x15] = piVar1;
    *(arg1 + 0xa8) = arg1_00;
    uVar6 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,smem",arg1_00 + 3,2,0);
    if (uVar6 < 0) {
        uVar6 = uVar6 & 0xffffffff;
        goto code_r0x0800173c;
    }
    pcVar12 = "qcom,local-pid";
    iVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,local-pid",arg1_00 + 6,1,0);
    if (iVar4 < 0) {
code_r0x08001404:
        pcVar11 = "failed to read %s\n";
    }
    else {
        pcVar12 = "qcom,remote-pid";
        iVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,remote-pid",arg1_00 + 0x34,1,0);
        if (iVar4 < 0) goto code_r0x08001404;
        uVar7 = platform_get_irq(arg1,0);
        uVar6 = uVar7 & 0xffffffff;
        if (uVar7 < 0) goto code_r0x0800173c;
        arg1_00[10] = iVar8;
        *(arg1_00 + 0xd) = 1;
        uVar6 = mbox_request_channel(arg1_00 + 10,0);
        arg1_00[0x11] = uVar6;
        if (uVar6 < 0xfffffffffffff001) goto code_r0x08001494;
        if (uVar6 != 0xffffffffffffffed) {
            uVar6 = uVar6 & 0xffffffff;
            goto code_r0x0800173c;
        }
        iVar15 = *arg1_00;
        arg1_00[0x11] = 0;
        iVar9 = of_parse_phandle(*(iVar15 + 0x2f0),"qcom,ipc",0);
        if (iVar9 == 0) {
            _dev_err(iVar15,"no qcom,ipc node\n");
            uVar6 = 0xffffffed;
            goto code_r0x0800173c;
        }
        uVar6 = syscon_node_to_regmap();
        arg1_00[8] = uVar6;
        if (0xfffffffffffff000 < uVar6) {
            if (uVar6 != 0) goto code_r0x0800173c;
code_r0x08001494:
            uVar5 = sym.qcom_smp2p_alloc_outbound_item(arg1_00);
            if (uVar5 < 0) {
                uVar6 = uVar5;
            }
            else {
                for (iVar9 = of_get_next_available_child(*(arg1 + 0x300),0); iVar9 != 0;
                    iVar9 = of_get_next_available_child(*(arg1 + 0x300),iVar9)) {
                    piVar10 = kmem_cache_alloc_trace(_handle_level_irq,0xdc0,0x68);
                    if (piVar10 == NULL) goto code_r0x080016c0;
                    piVar10[2] = arg1_00;
                    *(piVar10 + 0xc) = 0;
                    uVar5 = of_property_read_string(iVar9,"qcom,entry-name",piVar10 + 3);
                    if (uVar5 < 0) {
                        uVar6 = uVar5;
                        goto code_r0x080016cc;
                    }
                    iVar15 = of_find_property(iVar9,"interrupt-controller",0);
                    if (iVar15 == 0) {
                        iVar15 = arg1_00[2];
                        uStack_78 = 0;
                        uStack_70 = 0;
                        strlcpy(&uStack_78,piVar10[3],0x10);
                        if (0xf < *(iVar15 + 0xe)) goto code_r0x080017e8;
                        iVar13 = iVar15 + *(iVar15 + 0xe) * 0x14;
                        *(iVar13 + 0x14) = uStack_78;
                        *(iVar13 + 0x1c) = uStack_70;
                        piVar10[4] = iVar13 + 0x24;
                        *(iVar15 + 0xe) = *(iVar15 + 0xe) + 1;
                        uVar6 = qcom_smem_state_register
                                          (iVar9,reloc.smp2p_update_bits.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt,
                                           piVar10);
                        piVar10[0xb] = uVar6;
                        if (0xfffffffffffff000 < uVar6) {
                            _dev_err(*arg1_00,"failed to register qcom_smem_state\n");
                            uVar6 = piVar10[0xb];
                            if (uVar6 < 0) goto code_r0x080016cc;
                        }
                        iVar15 = *piVar1;
                        uVar6 = __list_add_valid(piVar10,piVar1,iVar15);
                        if ((uVar6 & 1) != 0) {
                            *(iVar15 + 8) = piVar10;
                            *piVar10 = iVar15;
                            piVar10[1] = piVar1;
                            *piVar1 = piVar10;
                        }
                    }
                    else {
                        iVar15 = __irq_domain_add(iVar9 + 0x18,0x20,0x20,0,obj.smp2p_irq_ops,piVar10);
                        piVar10[6] = iVar15;
                        if (iVar15 == 0) {
                            _dev_err(*arg1_00,"failed to add irq_domain\n");
                            uVar6 = 0xfffffff4;
                            goto code_r0x080016cc;
                        }
                        iVar15 = *piVar2;
                        uVar6 = __list_add_valid(piVar10,piVar2,iVar15);
                        if ((uVar6 & 1) != 0) {
                            *(iVar15 + 8) = piVar10;
                            *piVar10 = iVar15;
                            piVar10[1] = piVar2;
                            *piVar2 = piVar10;
                        }
                    }
                }
                DataSynchronizationBarrier(3,2,0);
                if (arg1_00[0x11] == 0) {
                    regmap_write(arg1_00[8],arg1_00[9],1L << (*(arg1_00 + 0x4c) & 0x3f));
                }
                else {
                    mbox_send_message(arg1_00[0x11],0);
                    mbox_client_txdone(arg1_00[0x11],0);
                }
                *(arg1_00 + 7) = uVar7;
                iVar9 = kasprintf(0xcc0,"smp2p_%d",*(arg1_00 + 0x34));
                arg1_00[5] = iVar9;
                if (iVar9 == 0) {
code_r0x080016c0:
                    uVar6 = 0xfffffff4;
                }
                else {
                    uVar7 = devm_request_threaded_irq
                                      (iVar8,uVar7 & 0xffffffff,0,
                                       sym.qcom_smp2p_intr.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt,0x2000,iVar9,
                                       arg1_00);
                    uVar6 = uVar7 & 0xffffffff;
                    if (uVar7 == 0) {
                        irq_set_irq_wake(arg1_00[7],1);
                        goto code_r0x0800173c;
                    }
                    _dev_err(iVar8,"failed to request interrupt\n");
                }
code_r0x080016cc:
                piVar10 = *piVar2;
                while (piVar10 != piVar2) {
                    piVar14 = *piVar10;
                    irq_domain_remove(piVar10[6]);
                    kfree(piVar10);
                    piVar10 = piVar14;
                }
                piVar2 = *piVar1;
                while (piVar2 != piVar1) {
                    piVar10 = *piVar2;
                    qcom_smem_state_unregister(piVar2[0xb]);
                    kfree(piVar2);
                    piVar2 = piVar10;
                }
                kfree(arg1_00[5]);
                *(arg1_00[2] + 0xe) = 0;
            }
            mbox_free_channel(arg1_00[0x11]);
            goto code_r0x0800173c;
        }
        iVar4 = of_property_read_u32_index(*(iVar15 + 0x2f0),"qcom,ipc",1,arg1_00 + 9);
        if (iVar4 < 0) {
            pcVar11 = "no offset in %s\n";
        }
        else {
            iVar4 = of_property_read_u32_index(*(iVar15 + 0x2f0),"qcom,ipc",2,arg1_00 + 0x4c);
            if (-1 < iVar4) goto code_r0x08001494;
            pcVar11 = "no bit in %s\n";
        }
        pcVar12 = "qcom,ipc";
        iVar8 = iVar15;
    }
    _dev_err(iVar8,pcVar11,pcVar12);
    uVar6 = 0xffffffea;
code_r0x0800173c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x080017e8:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80017ec);
    (*pcVar3)();
}


// ===== sym.qcom_smp2p_remove @ 0x080017ec (size 176) =====

ulong sym.qcom_smp2p_remove(int64_t arg1)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    piVar1 = *(iVar2 + 0x90);
    while (piVar1 != iVar2 + 0x90) {
        piVar3 = *piVar1;
        irq_domain_remove(piVar1[6]);
        kfree(piVar1);
        piVar1 = piVar3;
    }
    piVar1 = *(iVar2 + 0xa0);
    while (piVar1 != iVar2 + 0xa0) {
        piVar3 = *piVar1;
        qcom_smem_state_unregister(piVar1[0xb]);
        kfree(piVar1);
        piVar1 = piVar3;
    }
    mbox_free_channel(*(iVar2 + 0x88));
    kfree(*(iVar2 + 0x28));
    *(*(iVar2 + 0x10) + 0xe) = 0;
    return 0;
}


// ===== sym.qcom_smp2p_alloc_outbound_item @ 0x0800189c (size 316) =====

uint64_t sym.qcom_smp2p_alloc_outbound_item(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x1c);
    uVar2 = *(arg1 + 0x34);
    uVar3 = qcom_smem_alloc(uVar2,uVar1,0x154);
    if ((uVar3 < 0) && (puVar4 = uVar3, uVar3 != 0xffffffef)) {
        if (uVar3 == 0xfffffdfb) {
            puVar4 = 0xfffffdfb;
        }
        else {
            _dev_err(*arg1,"unable to allocate local smp2p item\n");
        }
    }
    else {
        puVar4 = qcom_smem_get(uVar2,uVar1,0);
        if (puVar4 < 0xfffffffffffff001) {
            memset(puVar4 + 1,0,0x150);
            *puVar4 = 0x504d5324;
            *(puVar4 + 2) = *(arg1 + 0x30);
            uVar1 = *(arg1 + 0x34);
            puVar4[3] = 0x10;
            *(puVar4 + 7) = 0;
            *(puVar4 + 10) = uVar1;
            *(puVar4 + 5) = 1;
            DataSynchronizationBarrier(3,2,0);
            *(puVar4 + 1) = 1;
            DataSynchronizationBarrier(3,2,0);
            if (*(arg1 + 0x88) == 0) {
                regmap_write(*(arg1 + 0x40),*(arg1 + 0x48),1L << (*(arg1 + 0x4c) & 0x3f));
            }
            else {
                mbox_send_message(*(arg1 + 0x88),0);
                mbox_client_txdone(*(arg1 + 0x88),0);
            }
            *(arg1 + 0x10) = puVar4;
            puVar4 = NULL;
        }
        else {
            _dev_err(*arg1,"Unable to acquire local smp2p item\n");
        }
    }
    return puVar4 & 0xffffffff;
}


// ===== sym.qcom_smp2p_intr @ 0x080019d8 (size 484) =====

ulong sym.qcom_smp2p_intr(ulong noname_0,int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    unkuint3 Var3;
    ulong uVar4;
    uint64_t uVar5;
    uchar uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_30 = 0;
    uVar5 = *(arg1 + 8);
    if (uVar5 == 0) {
        uVar5 = qcom_smem_get(*(arg1 + 0x34),*(arg1 + 0x18),&uStack_30);
        if (0xfffffffffffff000 < uVar5) {
            _dev_err(*arg1,"Unable to acquire remote smp2p item\n");
            goto code_r0x08001b88;
        }
        *(arg1 + 8) = uVar5;
        cVar1 = *(arg1 + 0x26);
    }
    else {
        cVar1 = *(arg1 + 0x26);
    }
    if (cVar1 == '\0') {
        iVar7 = *(arg1 + 0x10);
        if (*(uVar5 + 4) != *(iVar7 + 4)) goto code_r0x08001b88;
        Var3 = *(iVar7 + 5) & *(uVar5 + 5);
        *(iVar7 + 5) = Var3;
        *(iVar7 + 7) = Var3 >> 0x10;
        if ((Var3 & 1) == 0) {
            uVar6 = *(arg1 + 0x24);
        }
        else {
            uVar6 = 1;
            *(arg1 + 0x24) = 1;
        }
        uVar4 = _segment.ehdr;
        *(arg1 + 0x26) = 1;
        ipc_log_string(uVar4,"[%s]: %d: state=open ssr_ack=%d\n","qcom_smp2p_negotiate",*(arg1 + 0x34),uVar6);
        if (*(arg1 + 0x26) == '\0') goto code_r0x08001b88;
    }
    if ((*(arg1 + 0x24) == '\0') || ((*(*(arg1 + 8) + 0x10) & 1) == *(arg1 + 0x25))) {
        sym.qcom_smp2p_notify_in(arg1);
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: %d: SSR DETECTED\n","qcom_smp2p_check_ssr",*(arg1 + 0x34));
        sym.qcom_smp2p_notify_in(arg1);
        uVar2 = *(arg1 + 0x25);
        *(arg1 + 0x25) = uVar2 ^ 1;
        *(*(arg1 + 0x10) + 0x10) = *(*(arg1 + 0x10) + 0x10) & 0xfffffffd | uVar2 << 1 ^ 2;
        DataSynchronizationBarrier(3,2,0);
        if (*(arg1 + 0x88) == 0) {
            regmap_write(*(arg1 + 0x40),*(arg1 + 0x48),1L << (*(arg1 + 0x4c) & 0x3f));
        }
        else {
            mbox_send_message(*(arg1 + 0x88),0);
            mbox_client_txdone(*(arg1 + 0x88),0);
        }
    }
code_r0x08001b88:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return 1;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.smp2p_irq_map;
    uVar5 = auVar8._8_8_ & 0xffffffff;
    iVar7 = *(auVar8._0_8_ + 0x20);
    irq_set_chip_and_handler_name(uVar5,obj.smp2p_irq_chip,sym.handle_level_irq.cfi_jt,0);
    irq_set_chip_data(uVar5,iVar7);
    irq_modify_status(uVar5,0,0x8000);
    irq_modify_status(uVar5,0,0x400);
    irq_set_parent(uVar5,*(*(iVar7 + 0x10) + 0x38));
    irq_modify_status(uVar5,0,0x80000);
    return 0;
}


// ===== sym.smp2p_irq_map @ 0x08001bbc (size 156) =====

ulong sym.smp2p_irq_map(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    uint64_t uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xffffffff;
    iVar2 = *(arg1 + 0x20);
    irq_set_chip_and_handler_name(uVar1,obj.smp2p_irq_chip,sym.handle_level_irq.cfi_jt,0);
    irq_set_chip_data(uVar1,iVar2);
    irq_modify_status(uVar1,0,0x8000);
    irq_modify_status(uVar1,0,0x400);
    irq_set_parent(uVar1,*(*(iVar2 + 0x10) + 0x38));
    irq_modify_status(uVar1,0,0x80000);
    return 0;
}


// ===== sym.smp2p_mask_irq @ 0x08001c58 (size 92) =====

void sym.smp2p_mask_irq(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    
    uVar4 = *(arg1 + 8);
    puVar1 = *(arg1 + 0x30) + (uVar4 >> 6 & 0x3ffffff) * 8 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    return;
}


// ===== sym.smp2p_unmask_irq @ 0x08001cb4 (size 92) =====

void sym.smp2p_unmask_irq(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    
    uVar4 = *(arg1 + 8);
    puVar1 = *(arg1 + 0x30) + (uVar4 >> 6 & 0x3ffffff) * 8 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 | 1L << (uVar4 & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    return;
}


// ===== sym.smp2p_retrigger_irq @ 0x08001d10 (size 164) =====

ulong sym.smp2p_retrigger_irq(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x30);
    uVar4 = *(arg1 + 8);
    ipc_log_string(_segment.ehdr,"[%s]: %d: %s: %lu\n","smp2p_retrigger_irq",*(*(iVar5 + 0x10) + 0x34),
                   *(iVar5 + 0x18),uVar4);
    puVar1 = iVar5 + (uVar4 >> 6 & 0x3ffffff) * 8 + 0x40;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 | 1L << (uVar4 & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataSynchronizationBarrier(3,3,0);
    return 0;
}


// ===== sym.smp2p_set_irq_type @ 0x08001db4 (size 288) =====

ulong sym.smp2p_set_irq_type(int64_t arg1,uint32_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    
    if ((arg2 & 3) == 0) {
        return 0xffffffea;
    }
    iVar5 = *(arg1 + 0x30);
    uVar6 = *(arg1 + 8) >> 6 & 0x3ffffff;
    uVar4 = 1L << (*(arg1 + 8) & 0x3f);
    puVar1 = iVar5 + uVar6 * 8 + 0x48;
    if ((arg2 & 1) == 0) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & (uVar4 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | uVar4;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    puVar1 = iVar5 + uVar6 * 8 + 0x50;
    if ((arg2 >> 1 & 1) == 0) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & (uVar4 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | uVar4;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return 0;
}


// ===== sym.smp2p_update_bits @ 0x08001ed4 (size 244) =====

ulong sym.smp2p_update_bits(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(arg1 + 0x60);
    uVar2 = sym.readl(*(arg1 + 0x20));
    uVar1 = uVar2 & (arg2 ^ 0xffffffff) | arg3;
    sym.writel(uVar1,*(arg1 + 0x20));
    _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar3);
    ipc_log_string(_segment.ehdr,"[%s]: %d: %s: orig:0x%0x new:0x%0x\n","smp2p_update_bits",*(*(arg1 + 0x10) + 0x34)
                   ,*(arg1 + 0x18),uVar2,uVar1);
    if (uVar1 != uVar2) {
        iVar4 = *(arg1 + 0x10);
        DataSynchronizationBarrier(3,2,0);
        if (*(iVar4 + 0x88) == 0) {
            regmap_write(*(iVar4 + 0x40),*(iVar4 + 0x48),1L << (*(iVar4 + 0x4c) & 0x3f));
        }
        else {
            mbox_send_message(*(iVar4 + 0x88),0);
            mbox_client_txdone(*(iVar4 + 0x88),0);
        }
    }
    return 0;
}


// ===== sym.readl @ 0x08001fc8 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001fcc);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8002010);
    return uVar1;
}


// ===== sym.writel @ 0x08002048 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002064);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002090);
    return;
}


// ===== sym.qcom_smp2p_notify_in @ 0x080020c4 (size 684) =====

void sym.qcom_smp2p_notify_in(int64_t arg1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    uint uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t *extraout_x8;
    uint64_t *puVar12;
    ulong *in_x18;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t unaff_x22;
    uint64_t unaff_x23;
    int64_t *unaff_x24;
    uint64_t unaff_x26;
    int64_t *piVar15;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uint uStack_7c;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    piVar2 = arg1 + 0x90;
    iStack_68 = *(iVar13 + 0x5e0);
    iVar13 = *(arg1 + 8);
    uVar9 = *(arg1 + 0x20);
    uVar14 = *(iVar13 + 0xe);
    if (*(arg1 + 0x20) < *(iVar13 + 0xe)) {
        unaff_x22 = 0x14;
        do {
            unaff_x23 = uVar9;
            unaff_x24 = *piVar2;
            if (unaff_x24 != piVar2) {
                if (0xf < unaff_x23) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x8002354);
                    (*pcVar6)();
                }
                iVar10 = iVar13 + unaff_x23 * 0x14;
                do {
                    uStack_78 = *(iVar10 + 0x14);
                    uStack_70 = *(iVar10 + 0x1c);
                    iVar7 = strcmp(&uStack_78,unaff_x24[3]);
                    if (iVar7 == 0) {
                        unaff_x24[4] = iVar13 + unaff_x23 * 0x14 + 0x24;
                        uVar14 = *(iVar13 + 0xe);
                        break;
                    }
                    unaff_x24 = *unaff_x24;
                } while (unaff_x24 != piVar2);
            }
            uVar1 = unaff_x23 + 1;
            uVar9 = uVar1;
        } while (uVar1 < uVar14);
    }
    *(arg1 + 0x20) = uVar9;
    ipc_log_string(_segment.ehdr,"[%s]: %d: smp2p_num:%d in_num:%d\n","qcom_smp2p_notify_in",*(arg1 + 0x34),uVar9,
                   *(iVar13 + 0xe));
    piVar15 = *(arg1 + 0x90);
    if (piVar15 == piVar2) goto code_r0x08002314;
    unaff_x28 = 0x20;
    iVar13 = 1;
    unaff_x22 = -1;
code_r0x080021fc:
    if (piVar15[4] == 0) {
        ipc_log_string(_segment.ehdr,"[%s]: %d:\t%s: skipping not ready\n","qcom_smp2p_notify_in",*(arg1 + 0x34),
                       piVar15[3]);
        goto code_r0x080021f0;
    }
    uVar8 = sym.readl(piVar15[4]);
    uVar1 = *(piVar15 + 5);
    *(piVar15 + 5) = uVar8;
    DataSynchronizationBarrier(3,3,0);
    uVar9 = piVar15[8];
    unaff_x24 = uVar8;
    unaff_x23 = uVar9 | uVar1 ^ uVar8;
    ipc_log_string(_segment.ehdr,"[%s]: %d:\t%s: status:%0lx val:%0x\n","qcom_smp2p_notify_in",*(arg1 + 0x34),
                   piVar15[3],unaff_x23,uVar8);
    if (unaff_x23 == 0) goto code_r0x080021f0;
    unaff_x26 = uVar9 & 0xffffffff | uVar1 ^ uVar8;
    uVar9 = (unaff_x26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x26 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    unaff_x23 = unaff_x28;
    if (unaff_x26 != 0) {
        unaff_x23 = LZCOUNT((uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    if ((unaff_x23 >> 5 & 1) != 0) goto code_r0x080021f0;
code_r0x08002270:
    uVar9 = unaff_x23 >> 6;
    uVar14 = iVar13 << (unaff_x23 & 0x3f);
    if ((uVar14 & unaff_x24) == 0) {
        uVar11 = piVar15[uVar9 + 10];
    }
    else {
        uVar11 = piVar15[uVar9 + 9];
    }
    if ((uVar11 & uVar14) != 0) {
        uStack_7c = 0;
        iVar10 = __irq_resolve_mapping(piVar15[6],unaff_x23,&uStack_7c);
        uVar3 = 0;
        if (iVar10 != 0) {
            uVar3 = uStack_7c;
        }
        handle_nested_irq(uVar3);
        puVar12 = piVar15 + uVar9 + 8;
        goto code_r0x08002358;
    }
    do {
        if (unaff_x23 < 0x1f) {
            uVar9 = unaff_x22 << (unaff_x23 + 1 & 0x3f) & unaff_x26;
            uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            unaff_x23 = unaff_x28;
            if (uVar9 != 0) {
                unaff_x23 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
            }
            if ((unaff_x23 >> 5 & 1) == 0) goto code_r0x08002270;
        }
code_r0x080021f0:
        piVar15 = *piVar15;
        if (piVar15 != piVar2) goto code_r0x080021fc;
code_r0x08002314:
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
        puVar12 = extraout_x8;
code_r0x08002358:
        Hint_Prefetch(puVar12,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar12,0x10);
            if (bVar5) {
                *puVar12 = *puVar12 & (uVar14 ^ 0xffffffffffffffff);
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
    } while( true );
}


// ===== sym.qcom_smp2p_freeze @ 0x08002370 (size 224) =====

ulong sym.qcom_smp2p_freeze(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x98);
    irq_set_irq_wake(*(iVar5 + 0x38),0);
    piVar6 = iVar5 + 0xa0;
    piVar3 = *piVar6;
    while (piVar3 != piVar6) {
        piVar7 = *piVar3;
        qcom_smem_state_unregister(piVar3[0xb]);
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3);
        piVar3 = piVar7;
    }
    *(iVar5 + 0xa0) = piVar6;
    *(iVar5 + 0xa8) = piVar6;
    piVar3 = *(iVar5 + 0x90);
    while (piVar3 != iVar5 + 0x90) {
        *(piVar3 + 5) = 0;
        piVar3 = *piVar3;
    }
    *(iVar5 + 8) = 0;
    *(iVar5 + 0x20) = 0;
    return 0;
}


// ===== sym.qcom_smp2p_restore @ 0x08002450 (size 600) =====

uchar * sym.qcom_smp2p_restore(int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uchar *puVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1_00;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    arg1_00 = *(arg1 + 0x98);
    uVar3 = sym.qcom_smp2p_alloc_outbound_item(arg1_00);
    uVar9 = uVar3 & 0xffffffff;
    if (uVar3 < 0) {
code_r0x080025f0:
        if (uVar9 == -0x11) {
            uVar9 = 0xffffffef;
        }
        else {
code_r0x0800264c:
            _dev_err(arg1,"failed to alloc items ret = %d\n",uVar9 & 0xffffffff);
        }
    }
    else {
        iVar4 = of_get_next_available_child(*(arg1 + 0x2f0),0);
        if (iVar4 != 0) {
            piVar1 = arg1_00 + 0x14;
            do {
                piVar5 = kmem_cache_alloc_trace(_handle_level_irq,0xdc0,0x68);
                if (piVar5 == NULL) {
                    uVar9 = 0xfffffff4;
                    goto code_r0x0800264c;
                }
                piVar5[2] = arg1_00;
                *(piVar5 + 0xc) = 0;
                uVar3 = of_property_read_string(iVar4,"qcom,entry-name",piVar5 + 3);
                uVar9 = uVar3 & 0xffffffff;
                if (uVar3 < 0) {
code_r0x080025e8:
                    kfree(piVar5);
                    goto code_r0x080025f0;
                }
                iVar6 = of_find_property(iVar4,"interrupt-controller",0);
                if (iVar6 == 0) {
                    iVar6 = arg1_00[2];
                    uStack_78 = 0;
                    uStack_70 = 0;
                    strlcpy(&uStack_78,piVar5[3],0x10);
                    if (0xf < *(iVar6 + 0xe)) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80026a4);
                        (*pcVar2)();
                    }
                    iVar8 = iVar6 + *(iVar6 + 0xe) * 0x14;
                    *(iVar8 + 0x14) = uStack_78;
                    *(iVar8 + 0x1c) = uStack_70;
                    piVar5[4] = iVar8 + 0x24;
                    *(iVar6 + 0xe) = *(iVar6 + 0xe) + 1;
                    uVar3 = qcom_smem_state_register
                                      (iVar4,reloc.smp2p_update_bits.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt,piVar5);
                    piVar5[0xb] = uVar3;
                    if (uVar3 < 0xfffffffffffff001) {
                        uVar9 = 0;
                    }
                    else {
                        _dev_err(*arg1_00,"failed to register qcom_smem_state\n");
                        uVar9 = piVar5[0xb];
                        if (uVar9 < 0) goto code_r0x080025e8;
                    }
                    iVar6 = *piVar1;
                    uVar3 = __list_add_valid(piVar5,piVar1,iVar6);
                    if ((uVar3 & 1) != 0) {
                        *(iVar6 + 8) = piVar5;
                        *piVar5 = iVar6;
                        piVar5[1] = piVar1;
                        *piVar1 = piVar5;
                    }
                }
                else {
                    kfree(piVar5);
                }
                iVar4 = of_get_next_available_child(*(arg1 + 0x2f0),iVar4);
            } while (iVar4 != 0);
        }
        irq_set_irq_wake(*(arg1_00 + 7),1);
        DataSynchronizationBarrier(3,2,0);
        if (arg1_00[0x11] == 0) {
            regmap_write(arg1_00[8],*(arg1_00 + 9),1L << (*(arg1_00 + 0x4c) & 0x3f));
        }
        else {
            mbox_send_message(arg1_00[0x11],0);
            mbox_client_txdone(arg1_00[0x11],0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        auVar10 = __stack_chk_fail();
        puVar7 = auVar10._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar10._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8002700);
        (*pcVar2)();
    }
    return uVar9 & 0xffffffff;
}


// ===== sym.__cfi_check_fail @ 0x080026a8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080026ec

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
    //switch table (4 cases) at 0x8000360
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002700);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002704 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_smp2p_probe.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002738 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_smp2p_probe.6ad07d1f5e3e913aefeb49d2755abed3.cfi_jt);
    return;
}

