// decompiled from nvme by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1672) =====

//WARNING: Switch with 1 destination removed at 0x08007598

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x18cb069a6cd6e3b9) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 < -0x550b9e52359ac614) {
                if (arg1 < -0x59a5c433c680bb00) {
                    if (arg1 == -0x7c70029a9f3a5b39) {
                        if ((pcVar1 + -0x80027e0 >> 3 | pcVar1 << 0x3d) < 5) {
                            return;
                        }
                        goto code_r0x08007558;
                    }
                    if (arg1 != -0x66d421a09845f9f8) goto code_r0x08007558;
                    pcVar2 = sym.cmb_show.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                }
                else {
                    if (arg1 == -0x59a5c433c680bb00) {
                        pcVar2 = sym.nvme_init_hctx.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                        goto code_r0x08002674;
                    }
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x08007558;
                    pcVar2 = sym.nvme_resume.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                }
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08007558;
            }
            if (arg1 < -0x3db7f943f28066d7) {
                if (arg1 != -0x550b9e52359ac614) {
                    if ((arg1 == -0x4dd8a868e2da8fa7) && ((pcVar1 + -0x80026f0 >> 3 | pcVar1 << 0x3d) < 3)) {
                        return;
                    }
                    goto code_r0x08007558;
                }
                pcVar2 = sym.nvme_remove_dead_ctrl_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
code_r0x08002674:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08007558;
            }
            if (arg1 == -0x3db7f943f28066d7) {
                pcVar2 = sym.nvme_pci_attrs_are_visible.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
            else {
                if (arg1 != -0x3c2d6ce49874252e) goto code_r0x08007558;
                pcVar2 = sym.nvme_slot_reset.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
        }
        else if (arg1 < -0x9bae815ac5e2dac) {
            if (arg1 < -0x10de3120ac56a18b) {
                if (arg1 == -0x3987c0e26ee29729) {
                    pcVar2 = sym.nvme_irq_check.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                    goto code_r0x08002674;
                }
                if (arg1 != -0x29c88ab9be8d785e) goto code_r0x08007558;
                pcVar2 = sym.nvme_poll.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
            else if (arg1 == -0x10de3120ac56a18b) {
                pcVar2 = sym.nvme_cancel_request.cfi_jt;
            }
            else {
                if (arg1 != -0xef4825473ba2583) goto code_r0x08007558;
                pcVar2 = sym.mempool_kfree.cfi_jt;
            }
        }
        else if (arg1 < -0x323ea04e3ec6a03) {
            if (arg1 == -0x9bae815ac5e2dac) {
                pcVar2 = sym.nvme_timeout.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
            else {
                if (arg1 != -0x44c152abec6d3f5) goto code_r0x08007558;
                pcVar2 = sym.nvme_commit_rqs.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
        }
        else if (arg1 == -0x323ea04e3ec6a03) {
            pcVar2 = sym.nvme_pci_complete_rq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x106b543f60d7de6a) goto code_r0x08007558;
            pcVar2 = sym.nvme_queue_rq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        }
    }
    else if (arg1 < 0x3f8bba164a9b54e6) {
        if (arg1 < 0x1e7b88cd19195fe6) {
            if (arg1 < 0x1a0be5b44477ba67) {
                if (arg1 != 0x18cb069a6cd6e3b9) {
                    if (arg1 != 0x199c66976d43c92e) goto code_r0x08007558;
                    pcVar2 = sym.io_queue_depth_set.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                    goto code_r0x08002674;
                }
                pcVar2 = sym.nvme_pci_reg_read64.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
            else if (arg1 == 0x1a0be5b44477ba67) {
                pcVar2 = sym.nvme_init_request.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
            else {
                if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08007558;
                pcVar2 = sym.hmb_store.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
        }
        else if (arg1 < 0x33d2dab7d229586b) {
            if (arg1 == 0x1e7b88cd19195fe6) {
                pcVar2 = sym.pci_sriov_configure_simple.cfi_jt;
            }
            else {
                if (arg1 != 0x222ad1c8395346c6) goto code_r0x08007558;
                pcVar2 = sym.nvme_pci_map_queues.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x33d2dab7d229586b) {
                pcVar2 = sym.nvme_pci_submit_async_event.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                goto code_r0x08002674;
            }
            if (arg1 != 0x3bf7fdd18a5d1ac8) goto code_r0x08007558;
            pcVar2 = sym.nvme_calc_irq_sets.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        }
    }
    else if (arg1 < 0x53c4d649265157ae) {
        if (arg1 < 0x43edafbdd92b67ea) {
            if (arg1 == 0x3f8bba164a9b54e6) {
                pcVar2 = sym.nvme_error_detected.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
            else {
                if (arg1 != 0x4103278d02edc7b1) goto code_r0x08007558;
                pcVar2 = sym.mempool_kmalloc.cfi_jt;
            }
        }
        else if (arg1 == 0x43edafbdd92b67ea) {
            pcVar2 = sym.nvme_async_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        }
        else {
            if (arg1 != 0x4a220a35dbe7fc62) goto code_r0x08007558;
            pcVar2 = sym.param_get_uint.cfi_jt;
        }
    }
    else if (arg1 < 0x5fd0dd7266111d21) {
        if (arg1 == 0x53c4d649265157ae) {
            pcVar2 = sym.nvme_pci_get_address.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        }
        else {
            if (arg1 != 0x57a1365f607de20a) goto code_r0x08007558;
            pcVar2 = sym.nvme_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        }
    }
    else if (arg1 == 0x5fd0dd7266111d21) {
        pcVar2 = sym.nvme_pci_reg_write32.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    }
    else if (arg1 == 0x79bc8fe92a26dc5e) {
        pcVar2 = sym.nvme_pci_reg_read32.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08007558;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08007558:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80075ac);
    (*pcVar1)();
}


// ===== sym.nvme_slot_reset.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002690 (size 8) =====

ulong sym.nvme_slot_reset.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x168);
    _dev_info(*(iVar1 + 0x790),"restart after slot reset\n");
    pci_restore_state(param_1);
    nvme_reset_ctrl(iVar1 + 0x330);
    return 5;
}


// ===== sym.nvme_cancel_request.cfi_jt @ 0x08002698 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.nvme_cancel_request.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nvme_commit_rqs.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080026a0 (size 8) =====

void sym.nvme_commit_rqs.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0xf8);
    _raw_spin_lock(iVar5 + 8);
    uVar1 = *(iVar5 + 0x6e);
    if (uVar1 == *(iVar5 + 0x70)) goto code_r0x08006994;
    puVar3 = *(iVar5 + 0x80);
    if (puVar3 == NULL) {
code_r0x08006984:
        sym.writel(uVar1,*(iVar5 + 0x60));
    }
    else {
        puVar4 = *(iVar5 + 0x90);
        DataSynchronizationBarrier(3,2,0);
        uVar2 = *puVar3;
        *puVar3 = uVar1;
        DataSynchronizationBarrier(3,3,0);
        if ((uVar1 + ~*puVar4 & 0xffff) < (uVar1 - uVar2 & 0xffff)) {
            uVar1 = *(iVar5 + 0x6e);
            goto code_r0x08006984;
        }
    }
    *(iVar5 + 0x70) = *(iVar5 + 0x6e);
code_r0x08006994:
    _raw_spin_unlock(iVar5 + 8);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080026a8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pci_register_driver(obj.nvme_driver,obj.__this_module,"nvme");
    return;
}


// ===== sym.nvme_error_detected.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080026b0 (size 8) =====

ulong sym.nvme_error_detected.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,int param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 1) {
        uVar1 = 2;
    }
    else {
        arg1 = *(param_1 + 0x168);
        if (param_2 == 3) {
            _dev_warn(*(arg1 + 0x790),"failure state error detected, request disconnect\n");
            uVar1 = 4;
        }
        else {
            if (param_2 == 2) {
                _dev_warn(*(arg1 + 0x790),"frozen state error detected, reset controller\n");
                sym.nvme_dev_disable(arg1,0);
            }
            uVar1 = 3;
        }
    }
    return uVar1;
}


// ===== sym.nvme_pci_submit_async_event.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080026b8 (size 8) =====

void sym.nvme_pci_submit_async_event.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    iVar1 = 1;
    uStack_50 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0x1f000c;
    sym.nvme_submit_cmd(*(param_1 + -0x330),&uStack_58,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_pci_get_address;
    piVar3 = *(auVar4._0_8_ + -0xd0);
    iVar2 = piVar3[0xe];
    if (iVar2 == 0) {
        iVar2 = *piVar3;
    }
    snprintf(auVar4._8_8_,iVar1,0x8000beb,iVar2);
    return;
}


// ===== sym.nvme_pci_free_ctrl.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080026c0 (size 8) =====

void sym.nvme_pci_free_ctrl.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xcc0) * *(param_1 + -0x98) * 8;
    if (*(param_1 + 0xc78) != 0) {
        dma_free_attrs(*(param_1 + -0xd0),iVar1,*(param_1 + 0xc78),*(param_1 + 0xc80),0);
        *(param_1 + 0xc78) = 0;
    }
    if (*(param_1 + 0xc88) != 0) {
        dma_free_attrs(*(param_1 + -0xd0),iVar1,*(param_1 + 0xc88),*(param_1 + 0xc90),0);
        *(param_1 + 0xc88) = 0;
    }
    if (*(param_1 + -0x248) != 0) {
        blk_mq_free_tag_set(param_1 + -0x328);
    }
    *(param_1 + 0x70) = 0;
    if (*(param_1 + 0x48) != 0) {
        blk_put_queue();
    }
    mempool_destroy(*(param_1 + 0xc70));
    put_device(*(param_1 + -0xd0));
    kfree(*(param_1 + -0x330));
    kfree(param_1 + -0x330);
    return;
}


// ===== sym.pci_sriov_configure_simple.cfi_jt @ 0x080026c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pci_sriov_configure_simple.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mempool_kfree.cfi_jt @ 0x080026d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.mempool_kfree.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nvme_pci_attrs_are_visible.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080026d8 (size 8) =====

ushort sym.nvme_pci_attrs_are_visible.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,code *param_2)

{
    if (((((param_2 != obj.dev_attr_cmbsz) && (param_2 != obj.dev_attr_cmb)) && (param_2 != obj.dev_attr_cmbloc)) ||
        (*(*(param_1 + 0x98) + -0xc) != 0)) && ((param_2 != obj.dev_attr_hmb || (*(*(param_1 + 0x98) + 0xc24) != 0)))) {
        return *(param_2 + 8);
    }
    return 0;
}


// ===== sym.nvme_irq_check.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080026e0 (size 8) =====

int64_t sym.nvme_irq_check.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(ulong param_1,int64_t param_2)

{
    return ((*(*(param_2 + 0x48) + *(param_2 + 0x72) * 0x10 + 0xe) & 1) == *(param_2 + 0x76)) << 1;
}


// ===== sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080026e8 (size 8) =====

ulong sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(ulong param_1,int64_t *param_2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_2[9] + *(param_2 + 0x72) * 0x10 + 0xe) & 1) != *(param_2 + 0x76)) {
        return 0;
    }
    iVar6 = 0;
    do {
        DataMemoryBarrier(0,1);
        sym.nvme_handle_cqe(param_2,*(param_2 + 0x72));
        iVar3 = *(param_2 + 0x72) + 1;
        if (iVar3 == param_2[0xd]) {
            iVar3 = 0;
            *(param_2 + 0x72) = 0;
            *(param_2 + 0x76) = *(param_2 + 0x76) ^ 1;
        }
        else {
            *(param_2 + 0x72) = iVar3;
        }
        iVar6 = iVar6 + -1;
    } while ((*(param_2[9] + iVar3 * 0x10 + 0xe) & 1) == *(param_2 + 0x76));
    if (iVar6 != 0) {
        puVar4 = param_2[0x11];
        uVar1 = *(param_2 + 0x72);
        if (puVar4 != NULL) {
            puVar5 = param_2[0x13];
            DataSynchronizationBarrier(3,2,0);
            uVar2 = *puVar4;
            *puVar4 = uVar1;
            DataSynchronizationBarrier(3,3,0);
            if ((uVar1 - uVar2 & 0xffff) <= (uVar1 + ~*puVar5 & 0xffff)) {
                return 1;
            }
        }
        sym.writel(uVar1,param_2[0xc] + *(*param_2 + 0x298) * 4);
        return 1;
    }
    return 0;
}


// ===== sym.nvme_del_queue_end.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080026f0 (size 8) =====

void sym.nvme_del_queue_end.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x120);
    blk_mq_free_request();
    complete(iVar1 + 0xa0);
    return;
}


// ===== sym.abort_endio.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080026f8 (size 8) =====

void sym.abort_endio.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(param_1 + 400);
    _dev_warn(*(*piVar4 + 0x790),"Abort status: 0x%x",*(param_1 + 0x144));
    piVar1 = *piVar4 + 0x90c;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    blk_mq_free_request(param_1);
    return;
}


// ===== sym.nvme_del_cq_end.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002700 (size 8) =====

void sym.nvme_del_cq_end.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,char param_2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != '\0') {
        puVar1 = *(param_1 + 0x120) + 0x78;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 4;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    iVar4 = *(param_1 + 0x120);
    blk_mq_free_request();
    complete(iVar4 + 0xa0);
    return;
}


// ===== sym.nvme_pci_complete_rq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002708 (size 8) =====

void sym.nvme_pci_complete_rq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int iVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong uVar4;
    uint uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = **(param_1 + 400);
    if (((*(param_1 + 0x1e) >> 2 & 1) != 0) || (*(param_1 + 0xca) != 0)) {
        if (*(param_1 + 0x1b0) == 0) {
            if (*(param_1 + 0x1a4) == 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8004fbc);
                (*pcVar2)();
            }
            uVar5 = 1;
            if ((*(param_1 + 0x18) & 1) == 0) {
                uVar5 = 2;
            }
            dma_unmap_sg_attrs(*(iVar7 + 0x260),*(param_1 + 0x1c0),*(param_1 + 0x1a4),uVar5,0);
            iVar1 = *(param_1 + 0x1a0);
            if (iVar1 == 0) {
                if ((*(param_1 + 0x1e) >> 2 & 1) == 0) {
                    uVar6 = *(param_1 + 0xca);
                }
                else {
                    uVar6 = 1;
                }
                dma_pool_free(*(iVar7 + 0x270),*(*(param_1 + 0x1c0) + uVar6 * 0x20),*(param_1 + 0x1a8));
            }
            else if (*(param_1 + 0x198) == '\0') {
                if (0 < iVar1) {
                    iVar8 = 0;
                    uVar4 = *(param_1 + 0x1a8);
                    do {
                        if ((*(param_1 + 0x1e) >> 2 & 1) == 0) {
                            uVar6 = *(param_1 + 0xca);
                        }
                        else {
                            uVar6 = 1;
                        }
                        iVar3 = *(*(param_1 + 0x1c0) + uVar6 * 0x20 + iVar8 * 8);
                        uVar9 = *(iVar3 + 0xff8);
                        dma_pool_free(*(iVar7 + 0x268),iVar3,uVar4);
                        iVar8 = iVar8 + 1;
                        uVar4 = uVar9;
                    } while (iVar8 < *(param_1 + 0x1a0));
                }
            }
            else if (0 < iVar1) {
                iVar8 = 0;
                uVar4 = *(param_1 + 0x1a8);
                do {
                    if ((*(param_1 + 0x1e) >> 2 & 1) == 0) {
                        uVar6 = *(param_1 + 0xca);
                    }
                    else {
                        uVar6 = 1;
                    }
                    iVar3 = *(*(param_1 + 0x1c0) + uVar6 * 0x20 + iVar8 * 8);
                    uVar9 = *(iVar3 + 0xff0);
                    dma_pool_free(*(iVar7 + 0x268),iVar3,uVar4);
                    iVar8 = iVar8 + 1;
                    uVar4 = uVar9;
                } while (iVar8 < *(param_1 + 0x1a0));
            }
            mempool_free(*(param_1 + 0x1c0),*(iVar7 + 4000));
        }
        else {
            uVar5 = 1;
            if ((*(param_1 + 0x18) & 1) == 0) {
                uVar5 = 2;
            }
            dma_unmap_page_attrs(*(iVar7 + 0x260),*(param_1 + 0x1a8),*(param_1 + 0x1b0),uVar5,0);
        }
    }
    nvme_complete_rq(param_1);
    return;
}


// ===== sym.nvme_queue_rq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002710 (size 8) =====

uint32_t sym.nvme_queue_rq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,ulong *param_2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    ulong *puVar8;
    ulong *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ushort uVar12;
    char *pcVar13;
    uint uVar14;
    int64_t iVar15;
    int iVar16;
    uchar uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg2;
    ulong *unaff_x20;
    ulong *arg1;
    int64_t *arg1_00;
    int *arg1_01;
    ulong uVar18;
    uint32_t uVar19;
    ulong uVar20;
    int iVar21;
    ulong unaff_x30;
    uint16_t auStack_fc [2];
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int *piStack_a0;
    ulong *puStack_98;
    ulong *puStack_90;
    ulong *puStack_88;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    arg2 = *param_2;
    arg1 = *(param_1 + 0xf8);
    uVar18 = *(*(param_1 + 0xe8) + 0x58);
    arg1_01 = *arg1;
    *(arg2 + 0x1a4) = 0;
    *(arg2 + 0x19c) = 0xffffffff00000000;
    if ((arg1[0xf] & 1) == 0) {
        uVar6 = 10;
    }
    else {
        unaff_x20 = param_2;
        if ((arg1_01[0xcd] != 1) && (((*(*(arg1_01 + 0xdc) + 0x10) & 1) == 0 || (arg1_01[0xcd] != 4)))) {
            uVar11 = __nvme_check_ready(arg1_01 + 0xcc,arg2,1);
            if ((uVar11 & 1) == 0) {
                uVar6 = nvme_fail_nonready_command(arg1_01 + 0xcc,arg2);
                goto code_r0x08005738;
            }
        }
        uVar6 = nvme_setup_cmd(uVar18,arg2);
        if ((uVar6 & 0xff) == 0) {
            if ((*(arg2 + 0x1e) >> 2 & 1) == 0) {
                if (*(arg2 + 0xca) != 0) {
                    if (*(arg2 + 0xca) == 1) {
                        iVar15 = arg2[7];
                        puVar8 = *(iVar15 + 0x78) + *(iVar15 + 0x2c) * 0x10;
                        uVar19 = *(puVar8 + 1) - *(iVar15 + 0x30);
                        uVar6 = *(iVar15 + 0x28);
                        if (uVar19 <= *(iVar15 + 0x28)) {
                            uVar6 = uVar19;
                        }
                        uVar11 = CONCAT44(*(puVar8 + 0xc) + *(iVar15 + 0x30),uVar6);
                        goto code_r0x080054b0;
                    }
code_r0x0800558c:
                    *(arg2 + 0x36) = 0;
                    iVar15 = mempool_alloc(*(arg1_01 + 1000),0xa20);
                    arg2[0x38] = iVar15;
                    if (iVar15 != 0) {
                        if ((*(arg2 + 0x1e) >> 2 & 1) == 0) {
                            uVar12 = *(arg2 + 0xca);
                        }
                        else {
                            uVar12 = 1;
                        }
                        sg_init_table(iVar15,uVar12);
                        uStack_70 = 0;
                        iVar7 = __blk_rq_map_sg(*arg2,arg2,arg2[0x38],&uStack_70);
                        *(arg2 + 0x1a4) = iVar7;
                        if (iVar7 != 0) {
                            uVar14 = 1;
                            if ((*(arg2 + 3) & 1) == 0) {
                                uVar14 = 2;
                            }
                            uVar6 = dma_map_sg_attrs(*(arg1_01 + 0x98),arg2[0x38],iVar7,uVar14,0x100);
                            if (uVar6 != 0) {
                                if ((*(arg2 + 0x1c) >> 0x12 & 1) == 0) {
                                    uVar19 = *(arg2 + 0xca);
                                }
                                else {
                                    uVar19 = 1;
                                }
                                iVar15 = 0x28;
                                if ((*(arg2 + 0x1c) & 0x40000) != 0) {
                                    iVar15 = 0x70;
                                }
                                if (((*(arg1_01 + 0x246) & 3) == 0) || (*(arg2[0x32] + 0x74) == 0)) {
                                    *(arg2 + 0x33) = 0;
                                }
                                else {
                                    uVar2 = 0;
                                    if (uVar19 != 0) {
                                        uVar2 = ((uVar19 + *(arg2 + iVar15)) - 1) / uVar19;
                                    }
                                    bVar5 = _segment.ehdr != 0;
                                    bVar4 = _segment.ehdr <= uVar2;
                                    *(arg2 + 0x33) = bVar5 && bVar4;
                                    if (bVar5 && bVar4) {
                                        iVar15 = arg2[0x38];
                                        uStack_70 = 0;
                                        *(arg2 + 0x151) = 0x40;
                                        if (uVar6 == 1) {
                                            uVar6 = 0;
                                            arg2[0x2d] = *(iVar15 + 0x10);
                                            uVar14 = *(iVar15 + 0x18);
                                            *(arg2 + 0x177) = 0;
                                            *(arg2 + 0x2e) = uVar14;
                                        }
                                        else {
                                            iVar10 = 0x270;
                                            if (0x10 < uVar6) {
                                                iVar10 = 0x268;
                                            }
                                            uStack_78 = *(arg1_01 + iVar10);
                                            *(arg2 + 0x34) = 0x10 < uVar6;
                                            puVar8 = dma_pool_alloc(uStack_78,0xa20,&uStack_70);
                                            if (puVar8 != NULL) {
                                                if ((*(arg2 + 0x1e) >> 2 & 1) == 0) {
                                                    uVar11 = *(arg2 + 0xca);
                                                }
                                                else {
                                                    uVar11 = 1;
                                                }
                                                iVar21 = uVar6 << 4;
                                                iVar7 = 0;
                                                *(arg2[0x38] + uVar11 * 0x20) = puVar8;
                                                iVar16 = iVar21;
                                                if (0xff < uVar6) {
                                                    iVar16 = 0x1000;
                                                }
                                                uVar17 = 0x30;
                                                if (0xff < uVar6) {
                                                    uVar17 = 0x20;
                                                }
                                                *(arg2 + 0x2e) = iVar16;
                                                arg2[0x35] = uStack_70;
                                                arg2[0x2d] = uStack_70;
                                                *(arg2 + 0x177) = uVar17;
code_r0x080058ac:
                                                puVar9 = puVar8;
                                                if (iVar7 != 0x100) goto code_r0x08005874;
                                                puVar9 = dma_pool_alloc(uStack_78,0xa20,&uStack_70);
                                                if (puVar9 != NULL) {
                                                    if ((*(arg2 + 0x1e) >> 2 & 1) == 0) {
                                                        uVar11 = *(arg2 + 0xca);
                                                    }
                                                    else {
                                                        uVar11 = 1;
                                                    }
                                                    iVar16 = *(arg2 + 0x34);
                                                    iVar7 = 1;
                                                    *(arg2 + 0x34) = iVar16 + 1;
                                                    *(arg2[0x38] + uVar11 * 0x20 + iVar16 * 8) = puVar9;
                                                    uVar18 = puVar8[0x1ff];
                                                    iVar16 = iVar21;
                                                    if (0xff < uVar6) {
                                                        iVar16 = 0x1000;
                                                    }
                                                    *puVar9 = puVar8[0x1fe];
                                                    puVar9[1] = uVar18;
                                                    *(puVar8 + 0x1ff) = iVar16;
                                                    uVar17 = 0x30;
                                                    if (0xff < uVar6) {
                                                        uVar17 = 0x20;
                                                    }
                                                    puVar8[0x1fe] = uStack_70;
                                                    *(puVar8 + 0xfff) = uVar17;
                                                    goto code_r0x08005874;
                                                }
                                                if (0 < *(arg2 + 0x34)) {
                                                    iVar15 = 0;
                                                    uVar18 = arg2[0x35];
                                                    do {
                                                        if ((*(arg2 + 0x1e) >> 2 & 1) == 0) {
                                                            uVar11 = *(arg2 + 0xca);
                                                        }
                                                        else {
                                                            uVar11 = 1;
                                                        }
                                                        iVar10 = *(arg2[0x38] + uVar11 * 0x20 + iVar15 * 8);
                                                        uVar20 = *(iVar10 + 0xff0);
                                                        dma_pool_free(*(arg1_01 + 0x9a),iVar10,uVar18);
                                                        iVar15 = iVar15 + 1;
                                                        uVar18 = uVar20;
                                                    } while (iVar15 < *(arg2 + 0x34));
                                                }
                                                uVar6 = 9;
                                                goto code_r0x080056d8;
                                            }
                                            uVar6 = 9;
                                            *(arg2 + 0x34) = 0xffffffff;
                                        }
                                        goto code_r0x080056d8;
                                    }
                                }
                                uVar6 = sym.nvme_pci_setup_prps(arg1_01,arg2,arg2 + 0x2a);
                                goto code_r0x080056d8;
                            }
                        }
                        uVar6 = 9;
                        goto code_r0x08005704;
                    }
code_r0x080055b4:
                    uVar6 = 9;
                    goto code_r0x08005710;
                }
            }
            else {
                uVar11 = arg2[0xe];
                puVar8 = arg2 + 0xd;
code_r0x080054b0:
                uVar19 = uVar11;
                uVar6 = uVar11 >> 0x20;
                if (uVar6 + uVar19 < 0x2001) {
                    uVar14 = 1;
                    if ((*(arg2 + 3) & 1) == 0) {
                        uVar14 = 2;
                    }
                    iVar15 = dma_map_page_attrs(*(arg1_01 + 0x98),*puVar8,uVar11 >> 0x20,uVar11 & 0xffffffff,uVar14
                                                ,0);
                    arg2[0x35] = iVar15;
                    if (iVar15 == -1) goto code_r0x080055b4;
                    uVar6 = 0x1000 - (uVar6 & 0xfff);
                    *(arg2 + 0x36) = uVar19;
                    arg2[0x2d] = iVar15;
                    if (uVar6 < uVar19) {
                        arg2[0x2e] = iVar15 + uVar6;
                    }
                }
                else {
                    if (((*(arg2[0x32] + 0x74) == 0) || (_segment.ehdr == 0)) || ((*(arg1_01 + 0x246) & 3) == 0))
                    goto code_r0x0800558c;
                    uVar14 = 1;
                    if ((*(arg2 + 3) & 1) == 0) {
                        uVar14 = 2;
                    }
                    iVar15 = dma_map_page_attrs(*(arg1_01 + 0x98),*puVar8,uVar11 >> 0x20,uVar11 & 0xffffffff,uVar14
                                                ,0);
                    arg2[0x35] = iVar15;
                    if (iVar15 == -1) goto code_r0x080055b4;
                    *(arg2 + 0x36) = uVar19;
                    arg2[0x2d] = iVar15;
                    *(arg2 + 0x2e) = uVar19;
                    *(arg2 + 0x151) = 0x40;
                    *(arg2 + 0x177) = 0;
                }
            }
code_r0x0800571c:
            blk_mq_start_request(arg2);
            sym.nvme_submit_cmd(arg1,arg2 + 0x2a,*(param_2 + 1));
            uVar6 = 0;
        }
    }
    goto code_r0x08005738;
code_r0x08005874:
    puVar8 = puVar9 + iVar7 * 2;
    iVar7 = iVar7 + 1;
    *puVar8 = *(iVar15 + 0x10);
    uVar14 = *(iVar15 + 0x18);
    *(puVar8 + 0xf) = 0;
    *(puVar8 + 1) = uVar14;
    iVar15 = sg_next(iVar15);
    uVar6 = uVar6 - 1;
    iVar21 = iVar21 + -0x10;
    puVar8 = puVar9;
    if (uVar6 < 1) goto code_r0x080058d8;
    goto code_r0x080058ac;
code_r0x080058d8:
    uVar6 = 0;
code_r0x080056d8:
    if ((uVar6 & 0xff) == 0) goto code_r0x0800571c;
    uVar14 = 1;
    if ((*(arg2 + 3) & 1) == 0) {
        uVar14 = 2;
    }
    dma_unmap_sg_attrs(*(arg1_01 + 0x98),arg2[0x38],*(arg2 + 0x1a4),uVar14,0);
code_r0x08005704:
    mempool_free(arg2[0x38],*(arg1_01 + 1000));
code_r0x08005710:
    nvme_cleanup_cmd(arg2);
code_r0x08005738:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_timeout;
    pcStack_a8 = sym.nvme_timeout;
    iVar15 = sp_el0;
    iStack_b8 = *(iVar15 + 0x5e0);
    arg1_00 = *(iVar10 + 400);
    iVar15 = *arg1_00;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    puStack_b0 = &stack0xffffffffffffffa0;
    piStack_a0 = arg1_01;
    puStack_98 = arg1;
    puStack_90 = unaff_x20;
    puStack_88 = arg2;
    uVar6 = sym.readl(*(iVar15 + 0x2a0) + 0x1c);
    DataSynchronizationBarrier(3,3,0);
    if (*(*(iVar15 + 0x260) + -8) != 1) goto code_r0x08005aec;
    if ((*(iVar15 + 0x334) & 0xfffffffe) == 2) {
code_r0x08005a1c:
        if ((arg1_00[0xf] >> 3 & 1) == 0) {
            sym.nvme_poll_irqdisable(arg1_00);
        }
        else {
            sym.nvme_poll(*(iVar10 + 0x10));
        }
        if (*(iVar10 + 0xe4) == 2) {
            _dev_warn(*(iVar15 + 0x790),"I/O %d QID %d timeout, completion polled\n",*(iVar10 + 0x20),
                      *(arg1_00 + 0x74));
            uVar6 = 0;
            goto code_r0x08005af0;
        }
        iVar7 = *(iVar15 + 0x334);
        if (iVar7 == 2) goto code_r0x08005aec;
        if (iVar7 != 4) {
            arg1_01 = iVar15 + 0x330;
            if (iVar7 != 3) {
                if ((*(arg1_00 + 0x74) != 0) && (*(iVar10 + 0x19c) == 0)) {
                    arg1_01 = iVar15 + 0x90c;
                    goto code_r0x08005bf4;
                }
                _dev_warn(*(iVar15 + 0x790),"I/O %d QID %d timeout, reset controller\n",*(iVar10 + 0x20));
                *(iVar10 + 0x142) = *(iVar10 + 0x142) | 1;
                sym.nvme_dev_disable(iVar15,0);
                goto code_r0x08005be0;
            }
            nvme_change_ctrl_state(arg1_01,4);
        }
        iVar7 = ___ratelimit(obj.nvme_timeout._rs,"nvme_timeout");
        if (iVar7 != 0) {
            _dev_warn(*(iVar15 + 0x790),"I/O %d QID %d timeout, disable controller\n",*(iVar10 + 0x20),
                      *(arg1_00 + 0x74));
        }
        *(iVar10 + 0x142) = *(iVar10 + 0x142) | 1;
        sym.nvme_dev_disable(iVar15,1);
        uVar6 = 0;
    }
    else {
        arg1_01 = uVar6;
        if (((uVar6 >> 1 & 1) == 0) && ((*(iVar15 + 0x310) != '\0' & uVar6 >> 4) == 0)) goto code_r0x08005a1c;
        auStack_fc[0] = 0;
        uVar6 = pci_read_config_word(*(iVar15 + 0x260) + -0xd0,6,auStack_fc);
        if (uVar6 == 0) {
            uVar6 = auStack_fc[0];
            pcVar13 = "controller is down; will reset: CSTS=0x%x, PCI_STATUS=0x%hx\n";
        }
        else {
            pcVar13 = "controller is down; will reset: CSTS=0x%x, PCI_STATUS read failed (%d)\n";
        }
        _dev_warn(*(iVar15 + 0x790),pcVar13,arg1_01,uVar6);
        sym.nvme_dev_disable(iVar15,0);
code_r0x08005be0:
        nvme_reset_ctrl(iVar15 + 0x330);
        uVar6 = 0;
    }
code_r0x08005af0:
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_b8) {
        __stack_chk_fail(uVar6);
code_r0x08005bf4:
        Hint_Prefetch(arg1_01,2,0,1);
        do {
            iVar7 = *arg1_01;
            cVar1 = '\x01';
            bVar4 = ExclusiveMonitorPass(arg1_01,0x10);
            if (bVar4) {
                *arg1_01 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar7 + -1 < 0) {
            Hint_Prefetch(arg1_01,2,0,1);
            do {
                cVar1 = '\x01';
                bVar4 = ExclusiveMonitorPass(arg1_01,0x10);
                if (bVar4) {
                    *arg1_01 = *arg1_01 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        else {
            *(iVar10 + 0x19c) = 1;
            uStack_f8 = CONCAT71(uStack_f8._1_7_,8);
            uStack_d0 = CONCAT62(CONCAT42(uStack_d0._4_4_,*(iVar10 + 0x20) | *(iVar10 + 0x140) << 0xc),
                                 *(arg1_00 + 0x74));
            _dev_warn(*(*arg1_00 + 0x790),"I/O %d QID %d timeout, aborting\n");
            uVar11 = nvme_alloc_request(*(iVar15 + 0x378),&uStack_f8,1);
            if (uVar11 < 0xfffffffffffff001) {
                *(uVar11 + 0x120) = 0;
                blk_execute_rq_nowait(0,uVar11,0,sym.abort_endio.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt);
            }
            else {
                Hint_Prefetch(arg1_01,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar4 = ExclusiveMonitorPass(arg1_01,0x10);
                    if (bVar4) {
                        *arg1_01 = *arg1_01 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
            }
        }
code_r0x08005aec:
        uVar6 = 1;
    }
    return uVar6;
}


// ===== sym.io_queue_depth_set.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002718 (size 8) =====

void sym.io_queue_depth_set.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_set_uint_minmax(param_1,param_2,2,0xfff);
    return;
}


// ===== sym.io_queue_count_set.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002720 (size 8) =====

uint64_t sym.io_queue_count_set.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint *in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    ulong uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_3c = 0;
    iVar3 = kstrtouint(param_1,10,&uStack_3c);
    uVar6 = uStack_3c;
    if (iVar3 == 0) {
        *in_x7 = 0;
        uVar4 = __sw_hweight64(nvme_cancel_request);
        if (uVar4 < uVar6) goto code_r0x080028b0;
        uVar7 = param_set_uint(param_1,param_2);
    }
    else {
code_r0x080028b0:
        uVar7 = 0xffffffea;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    auVar15 = __stack_chk_fail(uVar7);
    iVar11 = auVar15._0_8_;
    *extraout_x18 = sym.nvme_probe;
    uVar13 = *(auVar15._8_8_ + 0x18);
    piVar8 = kmem_cache_alloc_trace(_mempool_kfree,0xdc0,0x1000);
    uVar5 = _segment.ehdr;
    if (piVar8 == NULL) {
        return 0xfffffff4;
    }
    *(piVar8 + 0xff4) = _segment.ehdr;
    *(piVar8 + 0x1ff) = uVar5;
    if ((*(piVar8 + 0x941) >> 5 & 1) == 0) {
        *in_x7 = piVar8;
        iVar3 = __sw_hweight64(nvme_cancel_request);
        uVar7 = *(piVar8 + 0xff4) + piVar8[0x1ff] + iVar3 + 1;
    }
    else {
        uVar7 = 2;
    }
    *(piVar8 + 0x1fe) = uVar7;
    iVar9 = __kmalloc(uVar7 * 0xc0,0xdc0);
    *piVar8 = iVar9;
    if (iVar9 == 0) {
        uVar7 = 0xfffffff4;
        iVar11 = 0;
        goto code_r0x08002bd4;
    }
    piVar1 = iVar11 + 0xd0;
    iVar9 = get_device(piVar1);
    iVar14 = iVar9 + -0xd0;
    piVar8[0x4c] = iVar9;
    *(iVar11 + 0x168) = piVar8;
    uVar5 = pci_select_bars(iVar14,0x200);
    iVar3 = pci_request_selected_regions(iVar14,uVar5,"nvme");
    if (iVar3 == 0) {
        if (piVar8[0x55] >> 0xd == 0) {
            iVar9 = piVar8[0x4c];
            if ((*(iVar9 + 0x3a0) == 0) || (iVar10 = *(iVar9 + 0x398), (*(iVar9 + 0x3a0) - iVar10) + 1U < 0x2000)) {
                uVar7 = 0xffffffed;
            }
            else {
                if (piVar8[0x54] != 0) {
                    iounmap(piVar8[0x54]);
                    iVar10 = *(iVar9 + 0x398);
                }
                uVar2 = 0x68000000000713;
                if (arm64_use_ng_mappings != 0x0) {
                    uVar2 = 0x68000000000f13;
                }
                iVar9 = __ioremap(iVar10,0x2000,uVar2);
                piVar8[0x54] = iVar9;
                if (iVar9 != 0) {
                    piVar8[0x55] = 0x2000;
                    piVar8[0x4b] = iVar9 + 0x1000;
                    goto code_r0x08002a74;
                }
                uVar7 = 0xffffffed;
                piVar8[0x55] = 0;
            }
        }
        else {
code_r0x08002a74:
            piVar8[0x104] = 0xfffffffe0;
            piVar8[0x105] = piVar8 + 0x105;
            piVar8[0x106] = piVar8 + 0x105;
            piVar8[0x56] = 0xfffffffe0;
            piVar8[0x107] = sym.nvme_reset_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            piVar8[0x57] = piVar8 + 0x57;
            piVar8[0x58] = piVar8 + 0x57;
            piVar8[0x59] = sym.nvme_remove_dead_ctrl_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            __mutex_init(piVar8 + 0x5c,"&dev->shutdown_lock",obj.nvme_probe.__key);
            iVar9 = dma_pool_create("prp list page",piVar8[0x4c],0x1000,0x1000,0);
            piVar8[0x4d] = iVar9;
            if (iVar9 == 0) {
                uVar7 = 0xfffffff4;
            }
            else {
                piVar12 = piVar8 + 0x4d;
                iVar9 = dma_pool_create("prp list 256",piVar8[0x4c],0x100,0x100,0);
                piVar8[0x4e] = iVar9;
                if (iVar9 == 0) {
                    uVar7 = 0xfffffff4;
                }
                else {
                    iVar9 = mempool_create_node(1,sym.mempool_kmalloc.cfi_jt,sym.mempool_kfree.cfi_jt,0xfe8,0xcc0,
                                                0xffffffff);
                    piVar8[500] = iVar9;
                    if (iVar9 == 0) {
                        uVar7 = 0xfffffff4;
                    }
                    else {
                        uVar6 = nvme_init_ctrl(piVar8 + 0x66,piVar1,obj.nvme_pci_ctrl_ops,uVar13);
                        if (uVar6 == 0) {
                            iVar11 = *(iVar11 + 0x140);
                            if (iVar11 == 0) {
                                iVar11 = *piVar1;
                            }
                            _dev_info(piVar8[0xf2],"pci function %s\n",iVar11);
                            nvme_reset_ctrl(piVar8 + 0x66);
                            async_schedule_node(sym.nvme_async_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt,piVar8,
                                                0xffffffff);
                            return 0;
                        }
                        uVar7 = uVar6;
                        mempool_destroy(piVar8[500]);
                    }
                    iVar11 = *piVar12;
                    piVar12 = piVar8 + 0x4e;
                    dma_pool_destroy(iVar11);
                }
                dma_pool_destroy(*piVar12);
            }
            if (piVar8[0x54] != 0) {
                iounmap();
            }
            iVar14 = piVar8[0x4c] + -0xd0;
        }
        uVar5 = pci_select_bars(iVar14,0x200);
        pci_release_selected_regions(iVar14,uVar5);
    }
    else {
        uVar7 = 0xffffffed;
    }
    put_device(piVar8[0x4c]);
    iVar11 = *piVar8;
code_r0x08002bd4:
    kfree(iVar11);
    kfree(piVar8);
    return uVar7;
}


// ===== sym.nvme_poll.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002728 (size 8) =====

uint sym.nvme_poll.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *arg1;
    int iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xf8);
    if ((*(arg1[9] + *(arg1 + 0x72) * 0x10 + 0xe) & 1) != *(arg1 + 0x76)) {
        return 0;
    }
    _raw_spin_lock(arg1 + 8);
    if ((*(arg1[9] + *(arg1 + 0x72) * 0x10 + 0xe) & 1) == *(arg1 + 0x76)) {
        iVar7 = 0;
        do {
            DataMemoryBarrier(0,1);
            sym.nvme_handle_cqe(arg1,*(arg1 + 0x72));
            iVar3 = *(arg1 + 0x72) + 1;
            if (iVar3 == arg1[0xd]) {
                iVar3 = 0;
                *(arg1 + 0x72) = 0;
                *(arg1 + 0x76) = *(arg1 + 0x76) ^ 1;
            }
            else {
                *(arg1 + 0x72) = iVar3;
            }
            iVar7 = iVar7 + -1;
        } while ((*(arg1[9] + iVar3 * 0x10 + 0xe) & 1) == *(arg1 + 0x76));
        if (iVar7 != 0) {
            puVar4 = arg1[0x11];
            uVar1 = *(arg1 + 0x72);
            if (puVar4 == NULL) {
code_r0x0800638c:
                sym.writel(uVar1,arg1[0xc] + *(*arg1 + 0x298) * 4);
            }
            else {
                puVar5 = arg1[0x13];
                DataSynchronizationBarrier(3,2,0);
                uVar2 = *puVar4;
                *puVar4 = uVar1;
                DataSynchronizationBarrier(3,3,0);
                if ((uVar1 + ~*puVar5 & 0xffff) < (uVar1 - uVar2 & 0xffff)) goto code_r0x0800638c;
            }
            uVar6 = 1;
            goto code_r0x080063ac;
        }
    }
    uVar6 = 0;
code_r0x080063ac:
    _raw_spin_unlock(arg1 + 8);
    return uVar6;
}


// ===== sym.param_get_uint.cfi_jt @ 0x08002730 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.param_get_uint.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nvme_init_request.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002738 (size 8) =====

ulong sym.nvme_init_request.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t *param_1,int64_t param_2,int param_3)

{
    code *pcVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    iVar3 = param_3 + 1;
    piVar2 = param_1[0xc];
    if (piVar2 + 1 != param_1) {
        iVar3 = 0;
    }
    iVar3 = *piVar2 + iVar3 * 0xc0;
    if (iVar3 != 0) {
        *(param_2 + 400) = iVar3;
        *(param_2 + 0x148) = piVar2 + 0x66;
        *(param_2 + 0x130) = param_2 + 0x150;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8005d84);
    (*pcVar1)();
}


// ===== sym.nvme_calc_irq_sets.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002740 (size 8) =====

void sym.nvme_calc_irq_sets.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uint uVar5;
    
    iVar4 = *(param_1 + 0x28);
    if (param_2 == 0) {
        param_2 = 1;
code_r0x0800654c:
        *(iVar4 + 0x280) = param_2;
        *(param_1 + 0xc) = param_2;
        *(iVar4 + 0x284) = 0;
        *(param_1 + 0x10) = 0;
    }
    else {
        iVar2 = param_2 - 1;
        if ((iVar2 == 0) || (uVar1 = *(iVar4 + 0xff4), uVar1 == 0)) goto code_r0x0800654c;
        iVar3 = param_2 - uVar1;
        if (param_2 < uVar1 || iVar3 == 0) {
            *(iVar4 + 0x280) = iVar2;
            *(param_1 + 0xc) = iVar2;
            uVar5 = 2;
            *(iVar4 + 0x284) = 1;
            *(param_1 + 0x10) = 1;
            goto code_r0x08006560;
        }
        *(iVar4 + 0x280) = uVar1;
        *(param_1 + 0xc) = uVar1;
        *(iVar4 + 0x284) = iVar3;
        *(param_1 + 0x10) = iVar3;
        if (iVar3 != 0) {
            uVar5 = 2;
            goto code_r0x08006560;
        }
    }
    uVar5 = 1;
code_r0x08006560:
    *(param_1 + 8) = uVar5;
    return;
}


// ===== sym.hmb_store.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002748 (size 8) =====

int64_t sym.hmb_store.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt
                  (int64_t param_1,ulong param_2,uint *param_3,int64_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    char acStack_7c [4];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = *(param_1 + 0x98);
    acStack_7c[0] = '\0';
    iVar1 = kstrtobool(param_3,acStack_7c);
    if (iVar1 < 0) {
        iVar4 = -0x16;
    }
    else {
        iVar4 = param_4;
        if (acStack_7c[0] != *(iVar5 + 0xc6c)) {
            if (acStack_7c[0] == '\0') {
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 9;
                param_3 = NULL;
                uStack_58 = 0;
                uStack_50 = 0xd;
                uStack_48 = *(iVar5 + 0xc98) >> 0xc;
                uStack_44 = *(iVar5 + 0xca8);
                uStack_40 = *(iVar5 + 0xca8) >> 0x20;
                uStack_3c = *(iVar5 + 0xca0);
                uVar2 = nvme_submit_sync_cmd(*(iVar5 + 0x48),&uStack_78,0,0);
                if (uVar2 == 0) {
                    *(iVar5 + 0xc6c) = 0;
                    sym.nvme_free_host_mem(iVar5 + -0x330);
                    goto code_r0x08006e08;
                }
                param_3 = uVar2;
                _dev_warn(*(iVar5 + 0x460),"failed to set host mem (err %d, flags %#x).\n",param_3,0);
            }
            else {
                uVar2 = sym.nvme_setup_host_mem(iVar5 + -0x330);
            }
            iVar4 = uVar2;
            if (-1 < uVar2) {
                iVar4 = param_4;
            }
        }
    }
code_r0x08006e08:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        *extraout_x18 = sym.nvme_pci_reg_read32;
        uVar3 = sym.readl(*(auVar6._0_8_ + -0x90) + (auVar6._8_8_ & 0xffffffff));
        *param_3 = uVar3;
        return 0;
    }
    return iVar4;
}


// ===== sym.nvme_pci_reg_read32.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002750 (size 8) =====

ulong sym.nvme_pci_reg_read32.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,uint32_t param_2,uint *param_3)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl(*(param_1 + -0x90) + param_2);
    *param_3 = uVar1;
    return 0;
}


// ===== sym.nvme_async_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002758 (size 8) =====

void sym.nvme_async_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    flush_work(param_1 + 0x820);
    flush_work(param_1 + 0xd60);
    put_device(*(param_1 + 0x790));
    return;
}


// ===== sym.nvme_resume.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002760 (size 8) =====

ulong sym.nvme_resume.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    if ((*(arg1 + 0xf98) != -1) && (iVar1 = nvme_set_features(arg1 + 0x330,2,*(arg1 + 0xf98),0,0,0), iVar1 == 0))
    {
        if (*(arg1 + 0xf54) == 0) {
            return 0;
        }
        uVar2 = sym.nvme_setup_host_mem(arg1);
        if (uVar2 == 0) {
            return uVar2;
        }
    }
    uVar2 = nvme_try_sched_reset(arg1 + 0x330);
    return uVar2;
}


// ===== sym.nvme_simple_resume.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002768 (size 8) =====

void sym.nvme_simple_resume.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    nvme_try_sched_reset(*(param_1 + 0x98) + 0x330);
    return;
}


// ===== sym.nvme_suspend.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002770 (size 8) =====

uint64_t sym.nvme_suspend.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code cVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong in_x6;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    cVar2 = pm_suspend_global_flags;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    arg1 = *(param_1 + 0x98);
    iVar1 = arg1 + 0x330;
    *(arg1 + 0xf98) = 0xffffffff;
    if (((cVar2 & 1) == 0) && (*(arg1 + 0x91e) != '\0')) {
        param_1 = param_1 + -0xd0;
        uVar5 = pcie_aspm_enabled(param_1);
        if (((uVar5 & 1) != 0) && ((*(arg1 + 0x941) >> 2 & 1) == 0)) {
            nvme_start_freeze(iVar1);
            nvme_wait_freeze(iVar1);
            nvme_sync_queues(iVar1);
            if (*(arg1 + 0x334) == 1) {
                if (*(arg1 + 0xf9c) != '\0') {
                    uStack_70 = 0;
                    uStack_78 = 9;
                    uStack_58 = 0;
                    uStack_50 = 0xd;
                    uStack_3c = *(arg1 + 0xfd0);
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_48 = *(arg1 + 0xfc8) >> 0xc;
                    uStack_44 = *(arg1 + 0xfd8);
                    uStack_40 = *(arg1 + 0xfd8) >> 0x20;
                    uVar3 = nvme_submit_sync_cmd(*(arg1 + 0x378),&uStack_78,0,0);
                    if (uVar3 == 0) {
                        *(arg1 + 0xf9c) = 0;
                    }
                    else {
                        _dev_warn(*(arg1 + 0x790),"failed to set host mem (err %d, flags %#x).\n",uVar3,0);
                        if (uVar3 < 0) goto code_r0x08007424;
                    }
                }
                uVar3 = nvme_get_features(iVar1,2,0,0,0,arg1 + 0xf98);
                if (-1 < uVar3) {
                    pci_save_state(param_1);
                    uVar3 = nvme_set_features(iVar1,2,*(arg1 + 0x91e),0,0,0);
                    if (0 < uVar3) {
                        pci_load_saved_state(param_1,0);
                        uVar5 = nvme_wait_reset(iVar1);
                        if ((uVar5 & 1) == 0) {
                            uVar3 = 0xfffffff0;
                        }
                        else {
                            sym.nvme_dev_disable(arg1,1);
                            uVar3 = 0;
                        }
                        *(arg1 + 0x91e) = 0;
                    }
                }
            }
            else {
                uVar3 = 0xfffffff0;
            }
code_r0x08007424:
            nvme_unfreeze(iVar1);
            goto code_r0x080073d8;
        }
    }
    uVar5 = nvme_wait_reset(iVar1);
    if ((uVar5 & 1) == 0) {
        uVar3 = 0xfffffff0;
    }
    else {
        sym.nvme_dev_disable(arg1,1);
        uVar3 = 0;
    }
code_r0x080073d8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_resume;
    iVar6 = *(iVar6 + 0x98);
    if ((*(iVar6 + 0xf98) != -1) &&
       (iVar4 = nvme_set_features(iVar6 + 0x330,2,*(iVar6 + 0xf98),0,0,0,in_x6,in_x7,&stack0xffffffffffffffd0,
                                  sym.nvme_resume,arg1,iVar1), iVar4 == 0)) {
        if (*(iVar6 + 0xf54) == 0) {
            return 0;
        }
        uVar5 = sym.nvme_setup_host_mem(iVar6);
        if (uVar5 == 0) {
            return uVar5;
        }
    }
    uVar5 = nvme_try_sched_reset(iVar6 + 0x330);
    return uVar5;
}


// ===== sym.nvme_simple_suspend.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002778 (size 8) =====

ulong sym.nvme_simple_suspend.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    uVar1 = nvme_wait_reset(arg1 + 0x330);
    if ((uVar1 & 1) == 0) {
        uVar2 = 0xfffffff0;
    }
    else {
        sym.nvme_dev_disable(arg1,1);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.nvme_pci_reg_read64.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002780 (size 8) =====

ulong sym.nvme_pci_reg_read64.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt
                (int64_t param_1,uint32_t param_2,uint64_t *param_3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + -0x90) + param_2;
    uVar1 = sym.readl(iVar2);
    iVar2 = sym.readl(iVar2 + 4);
    *param_3 = uVar1 & 0xffffffff | iVar2 << 0x20;
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002788 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pci_unregister_driver(obj.nvme_driver);
    flush_workqueue(___sw_hweight64);
    return;
}


// ===== sym.nvme_init_hctx.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002790 (size 8) =====

ulong sym.nvme_init_hctx.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,int64_t *param_2,uint32_t param_3)

{
    code *pcVar1;
    
    if (*(param_2[0x1d] + param_3 * 8) == *(param_1 + 0x170)) {
        *(param_1 + 0xf8) = *param_2 + (param_3 + 1) * 0xc0;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80069f0);
    (*pcVar1)();
}


// ===== sym.nvme_admin_init_hctx.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002798 (size 8) =====

ulong sym.nvme_admin_init_hctx.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,ulong *param_2,int param_3)

{
    code *pcVar1;
    
    if (param_3 != 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8005d28);
        (*pcVar1)();
    }
    if (*param_2[0x42] == *(param_1 + 0x170)) {
        *(param_1 + 0xf8) = *param_2;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8005d30);
    (*pcVar1)();
}


// ===== sym.mempool_kmalloc.cfi_jt @ 0x080027a0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.mempool_kmalloc.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nvme_pci_reg_write32.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027a8 (size 8) =====

ulong sym.nvme_pci_reg_write32.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt
                (int64_t param_1,uint64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(param_3,*(param_1 + -0x90) + (param_2 & 0xffffffff));
    return 0;
}


// ===== sym.nvme_pci_map_queues.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027b0 (size 8) =====

ulong sym.nvme_pci_map_queues.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x60);
    uVar1 = *(iVar5 + 0x28c);
    if (*(param_1 + 0x30) != 0) {
        iVar6 = *(iVar5 + 0x280);
        *(param_1 + 8) = iVar6;
        if (iVar6 == 0) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8006afc);
            (*pcVar3)();
        }
        *(param_1 + 0xc) = 0;
        if (uVar1 < 2) {
            blk_mq_map_queues(param_1);
        }
        else {
            blk_mq_pci_map_queues(param_1,*(iVar5 + 0x260) + -0xd0,1 < uVar1);
        }
        uVar4 = *(param_1 + 0x30);
        if (1 < uVar4) {
            iVar2 = *(iVar5 + 0x284);
            iVar6 = *(param_1 + 8);
            *(param_1 + 0x18) = iVar2;
            if (iVar2 != 0) {
                *(param_1 + 0x1c) = iVar6;
                if (iVar6 + (1 < uVar1) == 0) {
                    blk_mq_map_queues(param_1 + 0x10);
                }
                else {
                    blk_mq_pci_map_queues(param_1 + 0x10,*(iVar5 + 0x260) + -0xd0);
                }
                iVar6 = *(param_1 + 0x18) + iVar6;
                uVar4 = *(param_1 + 0x30);
            }
            if (2 < uVar4) {
                iVar2 = *(iVar5 + 0x288);
                *(param_1 + 0x28) = iVar2;
                if (iVar2 != 0) {
                    *(param_1 + 0x2c) = iVar6;
                    blk_mq_map_queues(param_1 + 0x20);
                    uVar4 = *(param_1 + 0x30);
                }
                if (3 < uVar4) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8006af8);
                    (*pcVar3)();
                }
            }
        }
    }
    return 0;
}


// ===== sym.nvme_pci_get_address.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027b8 (size 8) =====

void sym.nvme_pci_get_address.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = (*(param_1 + -0xd0))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(param_1 + -0xd0);
    }
    snprintf(param_2,param_3,0x8000beb,iVar1);
    return;
}


// ===== sym.nvme_timeout.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027c0 (size 8) =====

void sym.nvme_timeout.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    char *pcVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t *arg1;
    int *unaff_x22;
    ulong unaff_x30;
    uint16_t auStack_7c [2];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    arg1 = *(param_1 + 400);
    iVar9 = *arg1;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar4 = sym.readl(*(iVar9 + 0x2a0) + 0x1c);
    DataSynchronizationBarrier(3,3,0);
    if (*(*(iVar9 + 0x260) + -8) != 1) goto code_r0x08005aec;
    if ((*(iVar9 + 0x334) & 0xfffffffe) == 2) {
code_r0x08005a1c:
        if ((arg1[0xf] >> 3 & 1) == 0) {
            sym.nvme_poll_irqdisable(arg1);
        }
        else {
            sym.nvme_poll(*(param_1 + 0x10));
        }
        if (*(param_1 + 0xe4) == 2) {
            _dev_warn(*(iVar9 + 0x790),"I/O %d QID %d timeout, completion polled\n",*(param_1 + 0x20),*(arg1 + 0x74))
            ;
            uVar6 = 0;
            goto code_r0x08005af0;
        }
        iVar5 = *(iVar9 + 0x334);
        if (iVar5 == 2) goto code_r0x08005aec;
        if (iVar5 != 4) {
            unaff_x22 = iVar9 + 0x330;
            if (iVar5 != 3) {
                if ((*(arg1 + 0x74) != 0) && (*(param_1 + 0x19c) == 0)) {
                    unaff_x22 = iVar9 + 0x90c;
                    goto code_r0x08005bf4;
                }
                _dev_warn(*(iVar9 + 0x790),"I/O %d QID %d timeout, reset controller\n",*(param_1 + 0x20));
                *(param_1 + 0x142) = *(param_1 + 0x142) | 1;
                sym.nvme_dev_disable(iVar9,0);
                goto code_r0x08005be0;
            }
            nvme_change_ctrl_state(unaff_x22,4);
        }
        iVar5 = ___ratelimit(obj.nvme_timeout._rs,"nvme_timeout");
        if (iVar5 != 0) {
            _dev_warn(*(iVar9 + 0x790),"I/O %d QID %d timeout, disable controller\n",*(param_1 + 0x20),*(arg1 + 0x74)
                     );
        }
        *(param_1 + 0x142) = *(param_1 + 0x142) | 1;
        sym.nvme_dev_disable(iVar9,1);
        uVar6 = 0;
    }
    else {
        unaff_x22 = uVar4;
        if (((uVar4 >> 1 & 1) == 0) && ((*(iVar9 + 0x310) != '\0' & uVar4 >> 4) == 0)) goto code_r0x08005a1c;
        auStack_7c[0] = 0;
        uVar4 = pci_read_config_word(*(iVar9 + 0x260) + -0xd0,6,auStack_7c);
        if (uVar4 == 0) {
            uVar4 = auStack_7c[0];
            pcVar8 = "controller is down; will reset: CSTS=0x%x, PCI_STATUS=0x%hx\n";
        }
        else {
            pcVar8 = "controller is down; will reset: CSTS=0x%x, PCI_STATUS read failed (%d)\n";
        }
        _dev_warn(*(iVar9 + 0x790),pcVar8,unaff_x22,uVar4);
        sym.nvme_dev_disable(iVar9,0);
code_r0x08005be0:
        nvme_reset_ctrl(iVar9 + 0x330);
        uVar6 = 0;
    }
code_r0x08005af0:
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_38) {
        __stack_chk_fail(uVar6);
code_r0x08005bf4:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            iVar5 = *unaff_x22;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = iVar5 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar5 + -1 < 0) {
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = *unaff_x22 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        else {
            *(param_1 + 0x19c) = 1;
            uStack_78 = CONCAT71(uStack_78._1_7_,8);
            uStack_50 = CONCAT62(CONCAT42(uStack_50._4_4_,*(param_1 + 0x20) | *(param_1 + 0x140) << 0xc),
                                 *(arg1 + 0x74));
            _dev_warn(*(*arg1 + 0x790),"I/O %d QID %d timeout, aborting\n");
            uVar7 = nvme_alloc_request(*(iVar9 + 0x378),&uStack_78,1);
            if (uVar7 < 0xfffffffffffff001) {
                *(uVar7 + 0x120) = 0;
                blk_execute_rq_nowait(0,uVar7,0,sym.abort_endio.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt);
            }
            else {
                Hint_Prefetch(unaff_x22,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                    if (bVar2) {
                        *unaff_x22 = *unaff_x22 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
            }
        }
code_r0x08005aec:
        uVar6 = 1;
    }
    return;
}


// ===== sym.nvme_remove_dead_ctrl_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027c8 (size 8) =====

void sym.nvme_remove_dead_ctrl_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + -0x50) + 0x98) != 0) {
        device_release_driver();
    }
    put_device(*(param_1 + 0x4e0));
    return;
}


// ===== sym.nvme_reset_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027d0 (size 8) =====

void sym.nvme_reset_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong *in_x6;
    uint *puVar13;
    uint uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    ulong unaff_x30;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_58 = *(iVar15 + 0x5e0);
    arg1 = param_1 + -0x820;
    iVar15 = param_1 + -0x4f0;
    if (*(param_1 + -0x4ec) == 2) {
        if ((*(param_1 + 0xa8) & 1) != 0) {
            sym.nvme_dev_disable(arg1,0);
        }
        nvme_sync_queues(iVar15);
        iVar12 = param_1 + -0x540;
        mutex_lock(iVar12);
        iVar20 = *(param_1 + -0x5c0);
        iVar16 = iVar20 + -0xd0;
        iVar7 = pci_enable_device_mem(iVar16);
        if (iVar7 != 0) {
code_r0x08003400:
            iVar7 = -0xc;
            goto code_r0x08003628;
        }
        pci_set_master(iVar16);
        uVar18 = *(param_1 + -0x5c0);
        uVar1 = 0xffffffffffff;
        if ((*(param_1 + 0x120) & 0x10000) == 0) {
            uVar1 = 0xffffffffffffffff;
        }
        iVar7 = dma_set_mask(uVar18,uVar1);
        if (iVar7 == 0) {
            dma_set_coherent_mask(uVar18,uVar1);
            iVar7 = sym.readl(*(param_1 + -0x580) + 0x1c);
            if (iVar7 == -1) {
                iVar7 = -0x13;
                goto code_r0x08003488;
            }
            iVar7 = pci_alloc_irq_vectors_affinity(iVar16,1,1,7,0);
            if (-1 < iVar7) {
                iVar17 = *(param_1 + -0x580);
                uVar8 = sym.readl(iVar17);
                uVar9 = sym.readl(iVar17 + 4);
                uVar10 = _segment.ehdr;
                *(param_1 + 0xb8) = CONCAT44(uVar9,uVar8);
                if ((uVar8 & 0xffff) + 1 < uVar10) {
                    uVar10 = (uVar8 & 0xffff) + 1;
                }
                *(param_1 + -0x588) = 1 << (uVar9 & 0xf);
                uVar14 = 6;
                if ((*(param_1 + 0x120) & 0x1000) != 0) {
                    uVar14 = 7;
                }
                *(param_1 + -0x590) = uVar10;
                *(param_1 + -0x5c8) = *(param_1 + -0x580) + 0x1000;
                *(param_1 + 0xe6) = uVar10 + -1;
                *(param_1 + -0x58c) = uVar14;
                if (*(iVar20 + -0x94) == 0x144d) {
                    if ((1 < *(iVar20 + -0x92) + 0x57dfU) || ((uVar8 & 0xffff) != 0)) goto code_r0x08002fe4;
                    *(param_1 + -0x590) = 0x40;
                    _dev_err(*(param_1 + -0x90),"detected PM1725 NVMe controller, set queue depth=%u\n",0x40);
                    uVar3 = *(param_1 + 0x121);
                }
                else if ((*(iVar20 + -0x94) == 0x106b) && (*(iVar20 + -0x92) == 0x2001)) {
                    *(param_1 + -0x590) = 2;
                    _dev_warn(*(param_1 + -0x90),
                              "detected Apple NVMe controller, set queue depth=%u to work around controller resets\n",2
                             );
                    uVar3 = *(param_1 + 0x121);
                }
                else {
code_r0x08002fe4:
                    uVar3 = *(param_1 + 0x121);
                }
                if (((uVar3 >> 5 & 1) != 0) && (*(param_1 + -0x590) < 0x22)) {
                    *(param_1 + -0x590) = 0x22;
                    _dev_warn(*(param_1 + -0x90),"IO queue depth clamped to %d\n",0x22);
                }
                if (*(param_1 + -0x508) == 0) {
                    iVar20 = *(param_1 + -0x5c0);
                    if ((*(param_1 + 0xbf) >> 1 & 1) != 0) {
                        sym.writel(1,*(param_1 + -0x580) + 0x50);
                    }
                    iVar7 = sym.readl(*(param_1 + -0x580) + 0x3c);
                    *(param_1 + -0x4fc) = iVar7;
                    if (iVar7 != 0) {
                        uVar10 = sym.readl(*(param_1 + -0x580) + 0x38);
                        uVar11 = uVar10 & 7;
                        *(param_1 + -0x4f8) = uVar10;
                        iVar17 = *(iVar20 + 0x398 + uVar11 * 0x60 + 8);
                        uVar19 = (uVar10 >> 0xc) << ((*(param_1 + -0x4fc) >> 6 & 0x3c) + 0xc & 0x3f);
                        if (iVar17 == 0) {
                            if (uVar19 == 0) goto code_r0x08003414;
                        }
                        else if (uVar19 <= (iVar17 - *(iVar20 + 0x398 + uVar11 * 0x60)) + 1U) {
code_r0x08003414:
                            if ((*(param_1 + 0xbf) >> 1 & 1) != 0) {
                                iStack_98 = 0;
                                uStack_90 = 0;
                                pcibios_resource_to_bus(*(iVar20 + -0xc0),&iStack_98,iVar20 + uVar11 * 0x60 + 0x398);
                                sym.hi_lo_writeq(iStack_98 + uVar19 | 3,*(param_1 + -0x580) + 0x50);
                            }
                            _dev_warn(*(param_1 + -0x90),"failed to register the CMB\n");
                        }
                    }
                }
                pci_enable_pcie_error_reporting(iVar16);
                pci_save_state(iVar16);
                iVar7 = sym.nvme_pci_configure_admin_queue(arg1);
                if (iVar7 == 0) {
                    if (*(param_1 + -0x4a8) != 0) {
                        blk_mq_unquiesce_queue();
code_r0x08003130:
                        iVar16 = *(*(param_1 + -0x5c0) + 0x2c0);
                        if (iVar16 == 0) {
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x800,0x8003718);
                            (*pcVar6)();
                        }
                        *(iVar16 + 4) = 0xfff;
                        uVar11 = dma_max_mapping_size(*(param_1 + -0x5c0));
                        uVar10 = uVar11 >> 9;
                        if (0x1fff < uVar10) {
                            uVar10 = 0x2000;
                        }
                        *(param_1 + 0xc0) = uVar10;
                        *(param_1 + 0xc4) = 0x7f;
                        puVar13 = *(*(param_1 + -0x5c0) + 0x2c0);
                        if (puVar13 != NULL) {
                            *puVar13 = 0xffffffff;
                        }
                        mutex_unlock(iVar12);
                        uVar11 = nvme_change_ctrl_state(iVar15,3);
                        if ((uVar11 & 1) == 0) {
                            _dev_warn(*(param_1 + -0x90),"failed to mark controller CONNECTING\n");
                            iVar7 = -0x10;
                        }
                        else {
                            *(param_1 + 200) = 1;
                            iVar7 = nvme_init_ctrl_finish(iVar15);
                            if (iVar7 == 0) {
                                uVar4 = *(param_1 + 0xe0);
                                if (((uVar4 & 1) == 0) || (*(param_1 + 0x90) == 0)) {
                                    *(param_1 + 0x90) = 0;
                                    if ((uVar4 >> 8 & 1) != 0) goto code_r0x080031c8;
code_r0x08003220:
                                    iVar7 = *(param_1 + 0x734);
                                }
                                else {
                                    if ((uVar4 >> 8 & 1) == 0) goto code_r0x08003220;
code_r0x080031c8:
                                    if (*(param_1 + 0x788) != 0) goto code_r0x08003220;
                                    iVar7 = *(param_1 + 2000) * *(param_1 + -0x588) * 8;
                                    iVar12 = dma_alloc_attrs(*(param_1 + -0x5c0),iVar7,param_1 + 0x790,0xcc0,0);
                                    *(param_1 + 0x788) = iVar12;
                                    if (iVar12 != 0) {
                                        iVar12 = dma_alloc_attrs(*(param_1 + -0x5c0),iVar7,param_1 + 0x7a0,0xcc0,0);
                                        *(param_1 + 0x798) = iVar12;
                                        if (iVar12 != 0) goto code_r0x08003220;
                                        dma_free_attrs(*(param_1 + -0x5c0),iVar7,*(param_1 + 0x788),
                                                       *(param_1 + 0x790),0);
                                        *(param_1 + 0x788) = 0;
                                    }
                                    _dev_warn(*(param_1 + -0x5c0),"unable to allocate dma for dbbuf\n");
                                    iVar7 = *(param_1 + 0x734);
                                }
                                if (((iVar7 == 0) || (iVar7 = sym.nvme_setup_host_mem(arg1), -1 < iVar7)) &&
                                   (iVar7 = sym.nvme_setup_io_queues(arg1), iVar7 == 0)) {
                                    if (*(param_1 + -0x5a8) < 2) {
                                        _dev_warn(*(param_1 + -0x90),"IO queues not created\n");
                                        nvme_kill_queues(iVar15);
                                        nvme_remove_namespaces(iVar15);
                                        if (*(param_1 + -0x738) != 0) {
                                            blk_mq_free_tag_set(param_1 + -0x818);
                                        }
                                        *(param_1 + -0x480) = 0;
                                    }
                                    else {
                                        nvme_start_queues(iVar15);
                                        nvme_wait_freeze(iVar15);
                                        iVar12 = param_1 + -0x818;
                                        if (*(param_1 + -0x480) == 0) {
                                            uVar14 = 2;
                                            if (*(param_1 + -0x598) != 0) {
                                                uVar14 = 3;
                                            }
                                            uVar10 = *(param_1 + -0x590);
                                            *(param_1 + -0x7e0) =
                                                 reloc.nvme_queue_rq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                                            *(param_1 + -0x7e8) = uVar14;
                                            *(param_1 + -0x7d8) = *(param_1 + -0x5a8) + -1;
                                            *in_x6 = nvme_cancel_request;
                                            if (4 < uVar10 >> 0xb) {
                                                uVar10 = 0x2800;
                                            }
                                            *(param_1 + -0x7b8) = arg1;
                                            *(param_1 + -0x7cc) = 0x98;
                                            *(param_1 + -0x7c8) = *(param_1 + -0x484);
                                            *(param_1 + -0x7d4) = uVar10 - 1;
                                            *(param_1 + -0x7c4) = 0xd1c52000;
                                            *(param_1 + -0x7c0) = 1;
                                            if ((*(param_1 + 0x121) >> 5 & 1) != 0) {
                                                *(param_1 + -2000) = 0x20;
                                            }
                                            iVar7 = blk_mq_alloc_tag_set(iVar12);
                                            if (iVar7 == 0) {
                                                *(param_1 + -0x480) = iVar12;
                                                goto code_r0x08003364;
                                            }
                                            _dev_warn(*(param_1 + -0x90),"IO queues tagset allocation failed %d\n",
                                                      iVar7);
                                        }
                                        else {
                                            blk_mq_update_nr_hw_queues(iVar12,*(param_1 + -0x5a8) + -1);
                                            iVar7 = *(param_1 + 0xb0);
                                            iVar2 = *(param_1 + -0x5a8);
                                            iVar5 = iVar7 + -1;
                                            if (iVar2 <= iVar5) {
                                                *(param_1 + 0xb0) = iVar5;
                                                sym.nvme_free_queue(*arg1 + iVar5 * 0xc0);
                                                for (iVar7 = iVar7 + -2; iVar2 <= iVar7; iVar7 = iVar7 + -1) {
                                                    *(param_1 + 0xb0) = *(param_1 + 0xb0) + -1;
                                                    sym.nvme_free_queue(*arg1 + iVar7 * 0xc0);
                                                }
                                            }
code_r0x08003364:
                                            uStack_68 = 0;
                                            uStack_60 = 0;
                                            uStack_78 = 0;
                                            uStack_70 = 0;
                                            uStack_88 = 0;
                                            uStack_80 = 0;
                                            iStack_98 = 0;
                                            uStack_90 = 0;
                                            if (*(param_1 + 0x788) != 0) {
                                                uStack_80 = *(param_1 + 0x790);
                                                uStack_78 = *(param_1 + 0x7a0);
                                                iStack_98 = 0x7c;
                                                iVar7 = nvme_submit_sync_cmd(*(param_1 + -0x4a8),&iStack_98,0,0);
                                                if (iVar7 != 0) {
                                                    _dev_warn(*(param_1 + -0x90),"unable to set dbbuf\n");
                                                    iVar7 = *(param_1 + 2000) * *(param_1 + -0x588) * 8;
                                                    if (*(param_1 + 0x788) != 0) {
                                                        dma_free_attrs(*(param_1 + -0x5c0),iVar7,*(param_1 + 0x788),
                                                                       *(param_1 + 0x790),0);
                                                        *(param_1 + 0x788) = 0;
                                                    }
                                                    if (*(param_1 + 0x798) != 0) {
                                                        dma_free_attrs(*(param_1 + -0x5c0),iVar7,*(param_1 + 0x798),
                                                                       *(param_1 + 0x7a0),0);
                                                        *(param_1 + 0x798) = 0;
                                                    }
                                                    uVar10 = *(param_1 + -0x5a8);
                                                    if (uVar10 != 0) {
                                                        uVar8 = 1;
                                                        do {
                                                            if (*(*arg1 + uVar8 * 0xc0 + 0x74) != 0) {
                                                                iVar12 = *arg1 + uVar8 * 0xc0;
                                                                *(iVar12 + 0x90) = 0;
                                                                *(iVar12 + 0x98) = 0;
                                                                *(iVar12 + 0x80) = 0;
                                                                *(iVar12 + 0x88) = 0;
                                                                uVar10 = *(param_1 + -0x5a8);
                                                            }
                                                            uVar8 = uVar8 + 1;
                                                        } while (uVar8 <= uVar10);
                                                    }
                                                }
                                            }
                                        }
                                        nvme_unfreeze(iVar15);
                                    }
                                    uVar11 = nvme_change_ctrl_state(iVar15,1);
                                    if ((uVar11 & 1) != 0) {
                                        if ((*(param_1 + 0x7dc) == '\0') &&
                                           (iVar7 = sysfs_create_group(*(param_1 + -0x90),obj.nvme_pci_attr_group),
                                           iVar7 == 0)) {
                                            *(param_1 + 0x7dc) = 1;
                                        }
                                        nvme_start_ctrl(iVar15);
                                        goto code_r0x0800368c;
                                    }
                                    _dev_warn(*(param_1 + -0x90),"failed to mark controller live state\n");
                                    goto code_r0x080034f4;
                                }
                            }
                        }
                        goto code_r0x08003630;
                    }
                    iVar16 = param_1 + -0x6f0;
                    *(param_1 + -0x6b8) = obj.nvme_mq_admin_ops;
                    *(param_1 + -0x6b0) = 0x1e00000001;
                    *in_x6 = obj.nvme_mq_admin_ops;
                    *(param_1 + -0x690) = arg1;
                    *(param_1 + -0x6a4) = 0x98;
                    *(param_1 + -0x6a0) = *(param_1 + -0x484);
                    *(param_1 + -0x698) = 0x40;
                    *(param_1 + -0x69c) = 0xd013beb0;
                    iVar7 = blk_mq_alloc_tag_set(iVar16);
                    if (iVar7 != 0) goto code_r0x08003400;
                    *(param_1 + -0x478) = iVar16;
                    uVar11 = blk_mq_init_queue(iVar16);
                    *(param_1 + -0x4a8) = uVar11;
                    if (uVar11 < 0xfffffffffffff001) {
                        uVar11 = blk_get_queue();
                        if ((uVar11 & 1) != 0) goto code_r0x08003130;
                        if ((*(param_1 + -0x4a8) != 0) && ((*(*(param_1 + -0x4a8) + 0x60) >> 1 & 1) == 0)) {
                            blk_mq_unquiesce_queue();
                            blk_cleanup_queue(*(param_1 + -0x4a8));
                            blk_mq_free_tag_set(iVar16);
                        }
                        iVar7 = -0x13;
                    }
                    else {
                        blk_mq_free_tag_set(iVar16);
                        iVar7 = -0xc;
                    }
                    *(param_1 + -0x4a8) = 0;
                }
            }
        }
        else {
            iVar7 = -0xc;
code_r0x08003488:
            pci_disable_device(iVar16);
        }
code_r0x08003628:
        mutex_unlock(iVar12);
    }
    else {
        _dev_warn(*(param_1 + -0x90),"ctrl state %d is not RESETTING\n");
code_r0x080034f4:
        iVar7 = -0x13;
    }
code_r0x08003630:
    _dev_warn(*(param_1 + -0x90),"Removing after probe failure status: %d\n",iVar7);
    nvme_change_ctrl_state(iVar15,4);
    get_device(*(param_1 + -0x90));
    sym.nvme_dev_disable(arg1,0);
    nvme_kill_queues(iVar15);
    uVar11 = queue_work_on(0x20,___sw_hweight64,param_1 + -0x570);
    if ((uVar11 & 1) == 0) {
        put_device(*(param_1 + -0x90));
    }
code_r0x0800368c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_remove_dead_ctrl_work;
    if (*(*(iVar15 + -0x50) + 0x98) != 0) {
        device_release_driver();
    }
    put_device(*(iVar15 + 0x4e0));
    return;
}


// ===== sym.nvme_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027d8 (size 8) =====

int sym.nvme_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    ulong uVar2;
    int iVar3;
    uint uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint *in_x7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = *(param_2 + 0x18);
    piVar5 = kmem_cache_alloc_trace(_mempool_kfree,0xdc0,0x1000);
    uVar4 = _segment.ehdr;
    if (piVar5 == NULL) {
        return -0xc;
    }
    *(piVar5 + 0xff4) = _segment.ehdr;
    *(piVar5 + 0x1ff) = uVar4;
    if ((*(piVar5 + 0x941) >> 5 & 1) == 0) {
        *in_x7 = piVar5;
        iVar3 = __sw_hweight64(nvme_cancel_request);
        uVar8 = *(piVar5 + 0xff4) + piVar5[0x1ff] + iVar3 + 1;
    }
    else {
        uVar8 = 2;
    }
    *(piVar5 + 0x1fe) = uVar8;
    iVar6 = __kmalloc(uVar8 * 0xc0,0xdc0);
    *piVar5 = iVar6;
    if (iVar6 == 0) {
        iVar3 = -0xc;
        iVar6 = 0;
        goto code_r0x08002bd4;
    }
    piVar1 = param_1 + 0xd0;
    iVar6 = get_device(piVar1);
    iVar11 = iVar6 + -0xd0;
    piVar5[0x4c] = iVar6;
    *(param_1 + 0x168) = piVar5;
    uVar4 = pci_select_bars(iVar11,0x200);
    iVar3 = pci_request_selected_regions(iVar11,uVar4,"nvme");
    if (iVar3 == 0) {
        if (piVar5[0x55] >> 0xd == 0) {
            iVar6 = piVar5[0x4c];
            if ((*(iVar6 + 0x3a0) == 0) || (iVar7 = *(iVar6 + 0x398), (*(iVar6 + 0x3a0) - iVar7) + 1U < 0x2000)) {
                iVar3 = -0x13;
            }
            else {
                if (piVar5[0x54] != 0) {
                    iounmap(piVar5[0x54]);
                    iVar7 = *(iVar6 + 0x398);
                }
                uVar2 = 0x68000000000713;
                if (arm64_use_ng_mappings != 0x0) {
                    uVar2 = 0x68000000000f13;
                }
                iVar6 = __ioremap(iVar7,0x2000,uVar2);
                piVar5[0x54] = iVar6;
                if (iVar6 != 0) {
                    piVar5[0x55] = 0x2000;
                    piVar5[0x4b] = iVar6 + 0x1000;
                    goto code_r0x08002a74;
                }
                iVar3 = -0x13;
                piVar5[0x55] = 0;
            }
        }
        else {
code_r0x08002a74:
            piVar5[0x104] = 0xfffffffe0;
            piVar5[0x105] = piVar5 + 0x105;
            piVar5[0x106] = piVar5 + 0x105;
            piVar5[0x56] = 0xfffffffe0;
            piVar5[0x107] = sym.nvme_reset_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            piVar5[0x57] = piVar5 + 0x57;
            piVar5[0x58] = piVar5 + 0x57;
            piVar5[0x59] = sym.nvme_remove_dead_ctrl_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            __mutex_init(piVar5 + 0x5c,"&dev->shutdown_lock",obj.nvme_probe.__key);
            iVar6 = dma_pool_create("prp list page",piVar5[0x4c],0x1000,0x1000,0);
            piVar5[0x4d] = iVar6;
            if (iVar6 == 0) {
                iVar3 = -0xc;
            }
            else {
                piVar9 = piVar5 + 0x4d;
                iVar6 = dma_pool_create("prp list 256",piVar5[0x4c],0x100,0x100,0);
                piVar5[0x4e] = iVar6;
                if (iVar6 == 0) {
                    iVar3 = -0xc;
                }
                else {
                    iVar6 = mempool_create_node(1,sym.mempool_kmalloc.cfi_jt,sym.mempool_kfree.cfi_jt,0xfe8,0xcc0,
                                                0xffffffff);
                    piVar5[500] = iVar6;
                    if (iVar6 == 0) {
                        iVar3 = -0xc;
                    }
                    else {
                        iVar3 = nvme_init_ctrl(piVar5 + 0x66,piVar1,obj.nvme_pci_ctrl_ops,uVar10);
                        if (iVar3 == 0) {
                            iVar6 = *(param_1 + 0x140);
                            if (iVar6 == 0) {
                                iVar6 = *piVar1;
                            }
                            _dev_info(piVar5[0xf2],"pci function %s\n",iVar6);
                            nvme_reset_ctrl(piVar5 + 0x66);
                            async_schedule_node(sym.nvme_async_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt,piVar5,
                                                0xffffffff);
                            return 0;
                        }
                        mempool_destroy(piVar5[500]);
                    }
                    iVar6 = *piVar9;
                    piVar9 = piVar5 + 0x4e;
                    dma_pool_destroy(iVar6);
                }
                dma_pool_destroy(*piVar9);
            }
            if (piVar5[0x54] != 0) {
                iounmap();
            }
            iVar11 = piVar5[0x4c] + -0xd0;
        }
        uVar4 = pci_select_bars(iVar11,0x200);
        pci_release_selected_regions(iVar11,uVar4);
    }
    else {
        iVar3 = -0x13;
    }
    put_device(piVar5[0x4c]);
    iVar6 = *piVar5;
code_r0x08002bd4:
    kfree(iVar6);
    kfree(piVar5);
    return iVar3;
}


// ===== sym.nvme_shutdown.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027e0 (size 8) =====

void sym.nvme_shutdown.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x168);
    uVar1 = nvme_wait_reset(arg1 + 0x330);
    if ((uVar1 & 1) != 0) {
        sym.nvme_dev_disable(arg1,1);
    }
    return;
}


// ===== sym.nvme_reset_done.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027e8 (size 8) =====

void sym.nvme_reset_done.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x168);
    iVar1 = nvme_try_sched_reset(iVar2 + 0x330);
    if (iVar1 == 0) {
        flush_work(iVar2 + 0x820);
    }
    return;
}


// ===== sym.nvme_error_resume.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027f0 (size 8) =====

void sym.nvme_error_resume.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    flush_work(*(param_1 + 0x168) + 0x820);
    return;
}


// ===== sym.nvme_reset_prepare.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x080027f8 (size 8) =====

void sym.nvme_reset_prepare.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x168);
    iVar1 = arg1 + 0x330;
    uVar2 = nvme_wait_reset(iVar1);
    if ((uVar2 & 1) != 0) {
        sym.nvme_dev_disable(arg1,0);
    }
    nvme_sync_queues(iVar1);
    return;
}


// ===== sym.nvme_remove.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002800 (size 8) =====

void sym.nvme_remove.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *arg1;
    uint32_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x168);
    piVar1 = arg1 + 0x66;
    nvme_change_ctrl_state(piVar1,4);
    *(param_1 + 0x168) = 0;
    uVar4 = pci_device_is_present(param_1);
    if ((uVar4 & 1) == 0) {
        nvme_change_ctrl_state(piVar1,6);
        sym.nvme_dev_disable(arg1,1);
    }
    flush_work(arg1 + 0x104);
    nvme_stop_ctrl(piVar1);
    nvme_remove_namespaces(piVar1);
    sym.nvme_dev_disable(arg1,1);
    if (*(arg1 + 0xffc) != '\0') {
        sysfs_remove_group(arg1[0xf2],obj.nvme_pci_attr_group);
    }
    sym.nvme_free_host_mem(arg1);
    if ((arg1[0x6f] != 0) && ((*(arg1[0x6f] + 0x60) >> 1 & 1) == 0)) {
        blk_mq_unquiesce_queue();
        blk_cleanup_queue(arg1[0x6f]);
        blk_mq_free_tag_set(arg1 + 0x26);
    }
    iVar6 = arg1[0x11a];
    uVar5 = iVar6 - 1;
    if (-1 < uVar5) {
        *(arg1 + 0x11a) = uVar5;
        sym.nvme_free_queue(*arg1 + uVar5 * 0xc0);
        uVar2 = iVar6 - 2;
        if (-1 < uVar2) {
            iVar6 = uVar2 * 0xc0;
            do {
                *(arg1 + 0x11a) = arg1[0x11a] + -1;
                sym.nvme_free_queue(*arg1 + iVar6);
                uVar5 = uVar5 - 1;
                iVar6 = iVar6 + -0xc0;
            } while (0 < uVar5);
        }
    }
    dma_pool_destroy(arg1[0x4d]);
    dma_pool_destroy(arg1[0x4e]);
    if (arg1[0x54] != 0) {
        iounmap();
    }
    iVar6 = arg1[0x4c];
    uVar3 = pci_select_bars(iVar6 + -0xd0,0x200);
    pci_release_selected_regions(iVar6 + -0xd0,uVar3);
    nvme_uninit_ctrl(piVar1);
    return;
}


// ===== sym.cmb_show.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002808 (size 8) =====

int64_t sym.cmb_show.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,"cmbloc : x%08x\ncmbsz  : x%08x\n",*(*(param_1 + 0x98) + -8),
                       *(*(param_1 + 0x98) + -0xc));
    return iVar1;
}


// ===== sym.hmb_show.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002810 (size 8) =====

int64_t sym.hmb_show.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x80008dd,*(*(param_1 + 0x98) + 0xc6c));
    return iVar1;
}


// ===== sym.cmbsz_show.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002818 (size 8) =====

int64_t sym.cmbsz_show.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8000755,*(*(param_1 + 0x98) + -0xc));
    return iVar1;
}


// ===== sym.cmbloc_show.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt @ 0x08002820 (size 8) =====

int64_t sym.cmbloc_show.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_3,0x8000755,*(*(param_1 + 0x98) + -8));
    return iVar1;
}


// ===== sym.io_queue_depth_set @ 0x08002828 (size 44) =====

void sym.io_queue_depth_set(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_set_uint_minmax(param_1,param_2,2,0xfff);
    return;
}


// ===== sym.io_queue_count_set @ 0x08002854 (size 164) =====

uint64_t sym.io_queue_count_set(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint *in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    ulong uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_3c = 0;
    iVar3 = kstrtouint(arg1,10,&uStack_3c);
    uVar6 = uStack_3c;
    if (iVar3 == 0) {
        *in_x7 = 0;
        uVar4 = __sw_hweight64(nvme_cancel_request);
        if (uVar4 < uVar6) goto code_r0x080028b0;
        uVar7 = param_set_uint(arg1,arg2);
    }
    else {
code_r0x080028b0:
        uVar7 = 0xffffffea;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    auVar15 = __stack_chk_fail(uVar7);
    iVar11 = auVar15._0_8_;
    *extraout_x18 = sym.nvme_probe;
    uVar13 = *(auVar15._8_8_ + 0x18);
    piVar8 = kmem_cache_alloc_trace(_mempool_kfree,0xdc0,0x1000);
    uVar5 = _segment.ehdr;
    if (piVar8 == NULL) {
        return 0xfffffff4;
    }
    *(piVar8 + 0xff4) = _segment.ehdr;
    *(piVar8 + 0x1ff) = uVar5;
    if ((*(piVar8 + 0x941) >> 5 & 1) == 0) {
        *in_x7 = piVar8;
        iVar3 = __sw_hweight64(nvme_cancel_request);
        uVar7 = *(piVar8 + 0xff4) + piVar8[0x1ff] + iVar3 + 1;
    }
    else {
        uVar7 = 2;
    }
    *(piVar8 + 0x1fe) = uVar7;
    iVar9 = __kmalloc(uVar7 * 0xc0,0xdc0);
    *piVar8 = iVar9;
    if (iVar9 == 0) {
        uVar7 = 0xfffffff4;
        iVar11 = 0;
        goto code_r0x08002bd4;
    }
    piVar1 = iVar11 + 0xd0;
    iVar9 = get_device(piVar1);
    iVar14 = iVar9 + -0xd0;
    piVar8[0x4c] = iVar9;
    *(iVar11 + 0x168) = piVar8;
    uVar5 = pci_select_bars(iVar14,0x200);
    iVar3 = pci_request_selected_regions(iVar14,uVar5,"nvme");
    if (iVar3 == 0) {
        if (piVar8[0x55] >> 0xd == 0) {
            iVar9 = piVar8[0x4c];
            if ((*(iVar9 + 0x3a0) == 0) || (iVar10 = *(iVar9 + 0x398), (*(iVar9 + 0x3a0) - iVar10) + 1U < 0x2000)) {
                uVar7 = 0xffffffed;
            }
            else {
                if (piVar8[0x54] != 0) {
                    iounmap(piVar8[0x54]);
                    iVar10 = *(iVar9 + 0x398);
                }
                uVar2 = 0x68000000000713;
                if (arm64_use_ng_mappings != 0x0) {
                    uVar2 = 0x68000000000f13;
                }
                iVar9 = __ioremap(iVar10,0x2000,uVar2);
                piVar8[0x54] = iVar9;
                if (iVar9 != 0) {
                    piVar8[0x55] = 0x2000;
                    piVar8[0x4b] = iVar9 + 0x1000;
                    goto code_r0x08002a74;
                }
                uVar7 = 0xffffffed;
                piVar8[0x55] = 0;
            }
        }
        else {
code_r0x08002a74:
            piVar8[0x104] = 0xfffffffe0;
            piVar8[0x105] = piVar8 + 0x105;
            piVar8[0x106] = piVar8 + 0x105;
            piVar8[0x56] = 0xfffffffe0;
            piVar8[0x107] = sym.nvme_reset_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            piVar8[0x57] = piVar8 + 0x57;
            piVar8[0x58] = piVar8 + 0x57;
            piVar8[0x59] = sym.nvme_remove_dead_ctrl_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            __mutex_init(piVar8 + 0x5c,"&dev->shutdown_lock",obj.nvme_probe.__key);
            iVar9 = dma_pool_create("prp list page",piVar8[0x4c],0x1000,0x1000,0);
            piVar8[0x4d] = iVar9;
            if (iVar9 == 0) {
                uVar7 = 0xfffffff4;
            }
            else {
                piVar12 = piVar8 + 0x4d;
                iVar9 = dma_pool_create("prp list 256",piVar8[0x4c],0x100,0x100,0);
                piVar8[0x4e] = iVar9;
                if (iVar9 == 0) {
                    uVar7 = 0xfffffff4;
                }
                else {
                    iVar9 = mempool_create_node(1,sym.mempool_kmalloc.cfi_jt,sym.mempool_kfree.cfi_jt,0xfe8,0xcc0,
                                                0xffffffff);
                    piVar8[500] = iVar9;
                    if (iVar9 == 0) {
                        uVar7 = 0xfffffff4;
                    }
                    else {
                        uVar6 = nvme_init_ctrl(piVar8 + 0x66,piVar1,obj.nvme_pci_ctrl_ops,uVar13);
                        if (uVar6 == 0) {
                            iVar11 = *(iVar11 + 0x140);
                            if (iVar11 == 0) {
                                iVar11 = *piVar1;
                            }
                            _dev_info(piVar8[0xf2],"pci function %s\n",iVar11);
                            nvme_reset_ctrl(piVar8 + 0x66);
                            async_schedule_node(sym.nvme_async_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt,piVar8,
                                                0xffffffff);
                            return 0;
                        }
                        uVar7 = uVar6;
                        mempool_destroy(piVar8[500]);
                    }
                    iVar11 = *piVar12;
                    piVar12 = piVar8 + 0x4e;
                    dma_pool_destroy(iVar11);
                }
                dma_pool_destroy(*piVar12);
            }
            if (piVar8[0x54] != 0) {
                iounmap();
            }
            iVar14 = piVar8[0x4c] + -0xd0;
        }
        uVar5 = pci_select_bars(iVar14,0x200);
        pci_release_selected_regions(iVar14,uVar5);
    }
    else {
        uVar7 = 0xffffffed;
    }
    put_device(piVar8[0x4c]);
    iVar11 = *piVar8;
code_r0x08002bd4:
    kfree(iVar11);
    kfree(piVar8);
    return uVar7;
}


// ===== sym.nvme_probe @ 0x080028f8 (size 852) =====

int sym.nvme_probe(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    int iVar3;
    uint uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint *in_x7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = *(arg2 + 0x18);
    piVar5 = kmem_cache_alloc_trace(_mempool_kfree,0xdc0,0x1000);
    uVar4 = _segment.ehdr;
    if (piVar5 == NULL) {
        return -0xc;
    }
    *(piVar5 + 0xff4) = _segment.ehdr;
    *(piVar5 + 0x1ff) = uVar4;
    if ((*(piVar5 + 0x941) >> 5 & 1) == 0) {
        *in_x7 = piVar5;
        iVar3 = __sw_hweight64(nvme_cancel_request);
        uVar8 = *(piVar5 + 0xff4) + piVar5[0x1ff] + iVar3 + 1;
    }
    else {
        uVar8 = 2;
    }
    *(piVar5 + 0x1fe) = uVar8;
    iVar6 = __kmalloc(uVar8 * 0xc0,0xdc0);
    *piVar5 = iVar6;
    if (iVar6 == 0) {
        iVar3 = -0xc;
        iVar6 = 0;
        goto code_r0x08002bd4;
    }
    piVar1 = arg1 + 0xd0;
    iVar6 = get_device(piVar1);
    iVar11 = iVar6 + -0xd0;
    piVar5[0x4c] = iVar6;
    *(arg1 + 0x168) = piVar5;
    uVar4 = pci_select_bars(iVar11,0x200);
    iVar3 = pci_request_selected_regions(iVar11,uVar4,"nvme");
    if (iVar3 == 0) {
        if (piVar5[0x55] >> 0xd == 0) {
            iVar6 = piVar5[0x4c];
            if ((*(iVar6 + 0x3a0) == 0) || (iVar7 = *(iVar6 + 0x398), (*(iVar6 + 0x3a0) - iVar7) + 1U < 0x2000)) {
                iVar3 = -0x13;
            }
            else {
                if (piVar5[0x54] != 0) {
                    iounmap(piVar5[0x54]);
                    iVar7 = *(iVar6 + 0x398);
                }
                uVar2 = 0x68000000000713;
                if (arm64_use_ng_mappings != 0x0) {
                    uVar2 = 0x68000000000f13;
                }
                iVar6 = __ioremap(iVar7,0x2000,uVar2);
                piVar5[0x54] = iVar6;
                if (iVar6 != 0) {
                    piVar5[0x55] = 0x2000;
                    piVar5[0x4b] = iVar6 + 0x1000;
                    goto code_r0x08002a74;
                }
                iVar3 = -0x13;
                piVar5[0x55] = 0;
            }
        }
        else {
code_r0x08002a74:
            piVar5[0x104] = 0xfffffffe0;
            piVar5[0x105] = piVar5 + 0x105;
            piVar5[0x106] = piVar5 + 0x105;
            piVar5[0x56] = 0xfffffffe0;
            piVar5[0x107] = sym.nvme_reset_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            piVar5[0x57] = piVar5 + 0x57;
            piVar5[0x58] = piVar5 + 0x57;
            piVar5[0x59] = sym.nvme_remove_dead_ctrl_work.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            __mutex_init(piVar5 + 0x5c,"&dev->shutdown_lock",obj.nvme_probe.__key);
            iVar6 = dma_pool_create("prp list page",piVar5[0x4c],0x1000,0x1000,0);
            piVar5[0x4d] = iVar6;
            if (iVar6 == 0) {
                iVar3 = -0xc;
            }
            else {
                piVar9 = piVar5 + 0x4d;
                iVar6 = dma_pool_create("prp list 256",piVar5[0x4c],0x100,0x100,0);
                piVar5[0x4e] = iVar6;
                if (iVar6 == 0) {
                    iVar3 = -0xc;
                }
                else {
                    iVar6 = mempool_create_node(1,sym.mempool_kmalloc.cfi_jt,sym.mempool_kfree.cfi_jt,0xfe8,0xcc0,
                                                0xffffffff);
                    piVar5[500] = iVar6;
                    if (iVar6 == 0) {
                        iVar3 = -0xc;
                    }
                    else {
                        iVar3 = nvme_init_ctrl(piVar5 + 0x66,piVar1,obj.nvme_pci_ctrl_ops,uVar10);
                        if (iVar3 == 0) {
                            iVar6 = *(arg1 + 0x140);
                            if (iVar6 == 0) {
                                iVar6 = *piVar1;
                            }
                            _dev_info(piVar5[0xf2],"pci function %s\n",iVar6);
                            nvme_reset_ctrl(piVar5 + 0x66);
                            async_schedule_node(sym.nvme_async_probe.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt,piVar5,
                                                0xffffffff);
                            return 0;
                        }
                        mempool_destroy(piVar5[500]);
                    }
                    iVar6 = *piVar9;
                    piVar9 = piVar5 + 0x4e;
                    dma_pool_destroy(iVar6);
                }
                dma_pool_destroy(*piVar9);
            }
            if (piVar5[0x54] != 0) {
                iounmap();
            }
            iVar11 = piVar5[0x4c] + -0xd0;
        }
        uVar4 = pci_select_bars(iVar11,0x200);
        pci_release_selected_regions(iVar11,uVar4);
    }
    else {
        iVar3 = -0x13;
    }
    put_device(piVar5[0x4c]);
    iVar6 = *piVar5;
code_r0x08002bd4:
    kfree(iVar6);
    kfree(piVar5);
    return iVar3;
}


// ===== sym.nvme_remove @ 0x08002c4c (size 376) =====

void sym.nvme_remove(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *arg1_00;
    uint32_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x168);
    piVar1 = arg1_00 + 0x66;
    nvme_change_ctrl_state(piVar1,4);
    *(arg1 + 0x168) = 0;
    uVar4 = pci_device_is_present(arg1);
    if ((uVar4 & 1) == 0) {
        nvme_change_ctrl_state(piVar1,6);
        sym.nvme_dev_disable(arg1_00,1);
    }
    flush_work(arg1_00 + 0x104);
    nvme_stop_ctrl(piVar1);
    nvme_remove_namespaces(piVar1);
    sym.nvme_dev_disable(arg1_00,1);
    if (*(arg1_00 + 0xffc) != '\0') {
        sysfs_remove_group(arg1_00[0xf2],obj.nvme_pci_attr_group);
    }
    sym.nvme_free_host_mem(arg1_00);
    if ((arg1_00[0x6f] != 0) && ((*(arg1_00[0x6f] + 0x60) >> 1 & 1) == 0)) {
        blk_mq_unquiesce_queue();
        blk_cleanup_queue(arg1_00[0x6f]);
        blk_mq_free_tag_set(arg1_00 + 0x26);
    }
    iVar6 = arg1_00[0x11a];
    uVar5 = iVar6 - 1;
    if (-1 < uVar5) {
        *(arg1_00 + 0x11a) = uVar5;
        sym.nvme_free_queue(*arg1_00 + uVar5 * 0xc0);
        uVar2 = iVar6 - 2;
        if (-1 < uVar2) {
            iVar6 = uVar2 * 0xc0;
            do {
                *(arg1_00 + 0x11a) = arg1_00[0x11a] + -1;
                sym.nvme_free_queue(*arg1_00 + iVar6);
                uVar5 = uVar5 - 1;
                iVar6 = iVar6 + -0xc0;
            } while (0 < uVar5);
        }
    }
    dma_pool_destroy(arg1_00[0x4d]);
    dma_pool_destroy(arg1_00[0x4e]);
    if (arg1_00[0x54] != 0) {
        iounmap();
    }
    iVar6 = arg1_00[0x4c];
    uVar3 = pci_select_bars(iVar6 + -0xd0,0x200);
    pci_release_selected_regions(iVar6 + -0xd0,uVar3);
    nvme_uninit_ctrl(piVar1);
    return;
}


// ===== sym.nvme_shutdown @ 0x08002dc4 (size 68) =====

void sym.nvme_shutdown(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x168);
    uVar1 = nvme_wait_reset(arg1_00 + 0x330);
    if ((uVar1 & 1) != 0) {
        sym.nvme_dev_disable(arg1_00,1);
    }
    return;
}


// ===== sym.nvme_reset_work @ 0x08002e08 (size 2328) =====

void sym.nvme_reset_work(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong *in_x6;
    uint *puVar13;
    uint uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1_00;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    ulong unaff_x30;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_58 = *(iVar15 + 0x5e0);
    arg1_00 = arg1 + -0x820;
    iVar15 = arg1 + -0x4f0;
    if (*(arg1 + -0x4ec) == 2) {
        if ((*(arg1 + 0xa8) & 1) != 0) {
            sym.nvme_dev_disable(arg1_00,0);
        }
        nvme_sync_queues(iVar15);
        iVar12 = arg1 + -0x540;
        mutex_lock(iVar12);
        iVar20 = *(arg1 + -0x5c0);
        iVar16 = iVar20 + -0xd0;
        iVar7 = pci_enable_device_mem(iVar16);
        if (iVar7 != 0) {
code_r0x08003400:
            iVar7 = -0xc;
            goto code_r0x08003628;
        }
        pci_set_master(iVar16);
        uVar18 = *(arg1 + -0x5c0);
        uVar1 = 0xffffffffffff;
        if ((*(arg1 + 0x120) & 0x10000) == 0) {
            uVar1 = 0xffffffffffffffff;
        }
        iVar7 = dma_set_mask(uVar18,uVar1);
        if (iVar7 == 0) {
            dma_set_coherent_mask(uVar18,uVar1);
            iVar7 = sym.readl(*(arg1 + -0x580) + 0x1c);
            if (iVar7 == -1) {
                iVar7 = -0x13;
                goto code_r0x08003488;
            }
            iVar7 = pci_alloc_irq_vectors_affinity(iVar16,1,1,7,0);
            if (-1 < iVar7) {
                iVar17 = *(arg1 + -0x580);
                uVar8 = sym.readl(iVar17);
                uVar9 = sym.readl(iVar17 + 4);
                uVar10 = _segment.ehdr;
                *(arg1 + 0xb8) = CONCAT44(uVar9,uVar8);
                if ((uVar8 & 0xffff) + 1 < uVar10) {
                    uVar10 = (uVar8 & 0xffff) + 1;
                }
                *(arg1 + -0x588) = 1 << (uVar9 & 0xf);
                uVar14 = 6;
                if ((*(arg1 + 0x120) & 0x1000) != 0) {
                    uVar14 = 7;
                }
                *(arg1 + -0x590) = uVar10;
                *(arg1 + -0x5c8) = *(arg1 + -0x580) + 0x1000;
                *(arg1 + 0xe6) = uVar10 + -1;
                *(arg1 + -0x58c) = uVar14;
                if (*(iVar20 + -0x94) == 0x144d) {
                    if ((1 < *(iVar20 + -0x92) + 0x57dfU) || ((uVar8 & 0xffff) != 0)) goto code_r0x08002fe4;
                    *(arg1 + -0x590) = 0x40;
                    _dev_err(*(arg1 + -0x90),"detected PM1725 NVMe controller, set queue depth=%u\n",0x40);
                    uVar3 = *(arg1 + 0x121);
                }
                else if ((*(iVar20 + -0x94) == 0x106b) && (*(iVar20 + -0x92) == 0x2001)) {
                    *(arg1 + -0x590) = 2;
                    _dev_warn(*(arg1 + -0x90),
                              "detected Apple NVMe controller, set queue depth=%u to work around controller resets\n",2
                             );
                    uVar3 = *(arg1 + 0x121);
                }
                else {
code_r0x08002fe4:
                    uVar3 = *(arg1 + 0x121);
                }
                if (((uVar3 >> 5 & 1) != 0) && (*(arg1 + -0x590) < 0x22)) {
                    *(arg1 + -0x590) = 0x22;
                    _dev_warn(*(arg1 + -0x90),"IO queue depth clamped to %d\n",0x22);
                }
                if (*(arg1 + -0x508) == 0) {
                    iVar20 = *(arg1 + -0x5c0);
                    if ((*(arg1 + 0xbf) >> 1 & 1) != 0) {
                        sym.writel(1,*(arg1 + -0x580) + 0x50);
                    }
                    iVar7 = sym.readl(*(arg1 + -0x580) + 0x3c);
                    *(arg1 + -0x4fc) = iVar7;
                    if (iVar7 != 0) {
                        uVar10 = sym.readl(*(arg1 + -0x580) + 0x38);
                        uVar11 = uVar10 & 7;
                        *(arg1 + -0x4f8) = uVar10;
                        iVar17 = *(iVar20 + 0x398 + uVar11 * 0x60 + 8);
                        uVar19 = (uVar10 >> 0xc) << ((*(arg1 + -0x4fc) >> 6 & 0x3c) + 0xc & 0x3f);
                        if (iVar17 == 0) {
                            if (uVar19 == 0) goto code_r0x08003414;
                        }
                        else if (uVar19 <= (iVar17 - *(iVar20 + 0x398 + uVar11 * 0x60)) + 1U) {
code_r0x08003414:
                            if ((*(arg1 + 0xbf) >> 1 & 1) != 0) {
                                iStack_98 = 0;
                                uStack_90 = 0;
                                pcibios_resource_to_bus(*(iVar20 + -0xc0),&iStack_98,iVar20 + uVar11 * 0x60 + 0x398);
                                sym.hi_lo_writeq(iStack_98 + uVar19 | 3,*(arg1 + -0x580) + 0x50);
                            }
                            _dev_warn(*(arg1 + -0x90),"failed to register the CMB\n");
                        }
                    }
                }
                pci_enable_pcie_error_reporting(iVar16);
                pci_save_state(iVar16);
                iVar7 = sym.nvme_pci_configure_admin_queue(arg1_00);
                if (iVar7 == 0) {
                    if (*(arg1 + -0x4a8) != 0) {
                        blk_mq_unquiesce_queue();
code_r0x08003130:
                        iVar16 = *(*(arg1 + -0x5c0) + 0x2c0);
                        if (iVar16 == 0) {
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x800,0x8003718);
                            (*pcVar6)();
                        }
                        *(iVar16 + 4) = 0xfff;
                        uVar11 = dma_max_mapping_size(*(arg1 + -0x5c0));
                        uVar10 = uVar11 >> 9;
                        if (0x1fff < uVar10) {
                            uVar10 = 0x2000;
                        }
                        *(arg1 + 0xc0) = uVar10;
                        *(arg1 + 0xc4) = 0x7f;
                        puVar13 = *(*(arg1 + -0x5c0) + 0x2c0);
                        if (puVar13 != NULL) {
                            *puVar13 = 0xffffffff;
                        }
                        mutex_unlock(iVar12);
                        uVar11 = nvme_change_ctrl_state(iVar15,3);
                        if ((uVar11 & 1) == 0) {
                            _dev_warn(*(arg1 + -0x90),"failed to mark controller CONNECTING\n");
                            iVar7 = -0x10;
                        }
                        else {
                            *(arg1 + 200) = 1;
                            iVar7 = nvme_init_ctrl_finish(iVar15);
                            if (iVar7 == 0) {
                                uVar4 = *(arg1 + 0xe0);
                                if (((uVar4 & 1) == 0) || (*(arg1 + 0x90) == 0)) {
                                    *(arg1 + 0x90) = 0;
                                    if ((uVar4 >> 8 & 1) != 0) goto code_r0x080031c8;
code_r0x08003220:
                                    iVar7 = *(arg1 + 0x734);
                                }
                                else {
                                    if ((uVar4 >> 8 & 1) == 0) goto code_r0x08003220;
code_r0x080031c8:
                                    if (*(arg1 + 0x788) != 0) goto code_r0x08003220;
                                    iVar7 = *(arg1 + 2000) * *(arg1 + -0x588) * 8;
                                    iVar12 = dma_alloc_attrs(*(arg1 + -0x5c0),iVar7,arg1 + 0x790,0xcc0,0);
                                    *(arg1 + 0x788) = iVar12;
                                    if (iVar12 != 0) {
                                        iVar12 = dma_alloc_attrs(*(arg1 + -0x5c0),iVar7,arg1 + 0x7a0,0xcc0,0);
                                        *(arg1 + 0x798) = iVar12;
                                        if (iVar12 != 0) goto code_r0x08003220;
                                        dma_free_attrs(*(arg1 + -0x5c0),iVar7,*(arg1 + 0x788),*(arg1 + 0x790),0);
                                        *(arg1 + 0x788) = 0;
                                    }
                                    _dev_warn(*(arg1 + -0x5c0),"unable to allocate dma for dbbuf\n");
                                    iVar7 = *(arg1 + 0x734);
                                }
                                if (((iVar7 == 0) || (iVar7 = sym.nvme_setup_host_mem(arg1_00), -1 < iVar7)) &&
                                   (iVar7 = sym.nvme_setup_io_queues(arg1_00), iVar7 == 0)) {
                                    if (*(arg1 + -0x5a8) < 2) {
                                        _dev_warn(*(arg1 + -0x90),"IO queues not created\n");
                                        nvme_kill_queues(iVar15);
                                        nvme_remove_namespaces(iVar15);
                                        if (*(arg1 + -0x738) != 0) {
                                            blk_mq_free_tag_set(arg1 + -0x818);
                                        }
                                        *(arg1 + -0x480) = 0;
                                    }
                                    else {
                                        nvme_start_queues(iVar15);
                                        nvme_wait_freeze(iVar15);
                                        iVar12 = arg1 + -0x818;
                                        if (*(arg1 + -0x480) == 0) {
                                            uVar14 = 2;
                                            if (*(arg1 + -0x598) != 0) {
                                                uVar14 = 3;
                                            }
                                            uVar10 = *(arg1 + -0x590);
                                            *(arg1 + -0x7e0) =
                                                 reloc.nvme_queue_rq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                                            *(arg1 + -0x7e8) = uVar14;
                                            *(arg1 + -0x7d8) = *(arg1 + -0x5a8) + -1;
                                            *in_x6 = nvme_cancel_request;
                                            if (4 < uVar10 >> 0xb) {
                                                uVar10 = 0x2800;
                                            }
                                            *(arg1 + -0x7b8) = arg1_00;
                                            *(arg1 + -0x7cc) = 0x98;
                                            *(arg1 + -0x7c8) = *(arg1 + -0x484);
                                            *(arg1 + -0x7d4) = uVar10 - 1;
                                            *(arg1 + -0x7c4) = 0xd1c52000;
                                            *(arg1 + -0x7c0) = 1;
                                            if ((*(arg1 + 0x121) >> 5 & 1) != 0) {
                                                *(arg1 + -2000) = 0x20;
                                            }
                                            iVar7 = blk_mq_alloc_tag_set(iVar12);
                                            if (iVar7 == 0) {
                                                *(arg1 + -0x480) = iVar12;
                                                goto code_r0x08003364;
                                            }
                                            _dev_warn(*(arg1 + -0x90),"IO queues tagset allocation failed %d\n",iVar7)
                                            ;
                                        }
                                        else {
                                            blk_mq_update_nr_hw_queues(iVar12,*(arg1 + -0x5a8) + -1);
                                            iVar7 = *(arg1 + 0xb0);
                                            iVar2 = *(arg1 + -0x5a8);
                                            iVar5 = iVar7 + -1;
                                            if (iVar2 <= iVar5) {
                                                *(arg1 + 0xb0) = iVar5;
                                                sym.nvme_free_queue(*arg1_00 + iVar5 * 0xc0);
                                                for (iVar7 = iVar7 + -2; iVar2 <= iVar7; iVar7 = iVar7 + -1) {
                                                    *(arg1 + 0xb0) = *(arg1 + 0xb0) + -1;
                                                    sym.nvme_free_queue(*arg1_00 + iVar7 * 0xc0);
                                                }
                                            }
code_r0x08003364:
                                            uStack_68 = 0;
                                            uStack_60 = 0;
                                            uStack_78 = 0;
                                            uStack_70 = 0;
                                            uStack_88 = 0;
                                            uStack_80 = 0;
                                            iStack_98 = 0;
                                            uStack_90 = 0;
                                            if (*(arg1 + 0x788) != 0) {
                                                uStack_80 = *(arg1 + 0x790);
                                                uStack_78 = *(arg1 + 0x7a0);
                                                iStack_98 = 0x7c;
                                                iVar7 = nvme_submit_sync_cmd(*(arg1 + -0x4a8),&iStack_98,0,0);
                                                if (iVar7 != 0) {
                                                    _dev_warn(*(arg1 + -0x90),"unable to set dbbuf\n");
                                                    iVar7 = *(arg1 + 2000) * *(arg1 + -0x588) * 8;
                                                    if (*(arg1 + 0x788) != 0) {
                                                        dma_free_attrs(*(arg1 + -0x5c0),iVar7,*(arg1 + 0x788),
                                                                       *(arg1 + 0x790),0);
                                                        *(arg1 + 0x788) = 0;
                                                    }
                                                    if (*(arg1 + 0x798) != 0) {
                                                        dma_free_attrs(*(arg1 + -0x5c0),iVar7,*(arg1 + 0x798),
                                                                       *(arg1 + 0x7a0),0);
                                                        *(arg1 + 0x798) = 0;
                                                    }
                                                    uVar10 = *(arg1 + -0x5a8);
                                                    if (uVar10 != 0) {
                                                        uVar8 = 1;
                                                        do {
                                                            if (*(*arg1_00 + uVar8 * 0xc0 + 0x74) != 0) {
                                                                iVar12 = *arg1_00 + uVar8 * 0xc0;
                                                                *(iVar12 + 0x90) = 0;
                                                                *(iVar12 + 0x98) = 0;
                                                                *(iVar12 + 0x80) = 0;
                                                                *(iVar12 + 0x88) = 0;
                                                                uVar10 = *(arg1 + -0x5a8);
                                                            }
                                                            uVar8 = uVar8 + 1;
                                                        } while (uVar8 <= uVar10);
                                                    }
                                                }
                                            }
                                        }
                                        nvme_unfreeze(iVar15);
                                    }
                                    uVar11 = nvme_change_ctrl_state(iVar15,1);
                                    if ((uVar11 & 1) != 0) {
                                        if ((*(arg1 + 0x7dc) == '\0') &&
                                           (iVar7 = sysfs_create_group(*(arg1 + -0x90),obj.nvme_pci_attr_group),
                                           iVar7 == 0)) {
                                            *(arg1 + 0x7dc) = 1;
                                        }
                                        nvme_start_ctrl(iVar15);
                                        goto code_r0x0800368c;
                                    }
                                    _dev_warn(*(arg1 + -0x90),"failed to mark controller live state\n");
                                    goto code_r0x080034f4;
                                }
                            }
                        }
                        goto code_r0x08003630;
                    }
                    iVar16 = arg1 + -0x6f0;
                    *(arg1 + -0x6b8) = obj.nvme_mq_admin_ops;
                    *(arg1 + -0x6b0) = 0x1e00000001;
                    *in_x6 = obj.nvme_mq_admin_ops;
                    *(arg1 + -0x690) = arg1_00;
                    *(arg1 + -0x6a4) = 0x98;
                    *(arg1 + -0x6a0) = *(arg1 + -0x484);
                    *(arg1 + -0x698) = 0x40;
                    *(arg1 + -0x69c) = 0xd013beb0;
                    iVar7 = blk_mq_alloc_tag_set(iVar16);
                    if (iVar7 != 0) goto code_r0x08003400;
                    *(arg1 + -0x478) = iVar16;
                    uVar11 = blk_mq_init_queue(iVar16);
                    *(arg1 + -0x4a8) = uVar11;
                    if (uVar11 < 0xfffffffffffff001) {
                        uVar11 = blk_get_queue();
                        if ((uVar11 & 1) != 0) goto code_r0x08003130;
                        if ((*(arg1 + -0x4a8) != 0) && ((*(*(arg1 + -0x4a8) + 0x60) >> 1 & 1) == 0)) {
                            blk_mq_unquiesce_queue();
                            blk_cleanup_queue(*(arg1 + -0x4a8));
                            blk_mq_free_tag_set(iVar16);
                        }
                        iVar7 = -0x13;
                    }
                    else {
                        blk_mq_free_tag_set(iVar16);
                        iVar7 = -0xc;
                    }
                    *(arg1 + -0x4a8) = 0;
                }
            }
        }
        else {
            iVar7 = -0xc;
code_r0x08003488:
            pci_disable_device(iVar16);
        }
code_r0x08003628:
        mutex_unlock(iVar12);
    }
    else {
        _dev_warn(*(arg1 + -0x90),"ctrl state %d is not RESETTING\n");
code_r0x080034f4:
        iVar7 = -0x13;
    }
code_r0x08003630:
    _dev_warn(*(arg1 + -0x90),"Removing after probe failure status: %d\n",iVar7);
    nvme_change_ctrl_state(iVar15,4);
    get_device(*(arg1 + -0x90));
    sym.nvme_dev_disable(arg1_00,0);
    nvme_kill_queues(iVar15);
    uVar11 = queue_work_on(0x20,___sw_hweight64,arg1 + -0x570);
    if ((uVar11 & 1) == 0) {
        put_device(*(arg1 + -0x90));
    }
code_r0x0800368c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_remove_dead_ctrl_work;
    if (*(*(iVar15 + -0x50) + 0x98) != 0) {
        device_release_driver();
    }
    put_device(*(iVar15 + 0x4e0));
    return;
}


// ===== sym.nvme_remove_dead_ctrl_work @ 0x08003720 (size 68) =====

void sym.nvme_remove_dead_ctrl_work(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + -0x50) + 0x98) != 0) {
        device_release_driver();
    }
    put_device(*(arg1 + 0x4e0));
    return;
}


// ===== sym.nvme_async_probe @ 0x08003764 (size 68) =====

void sym.nvme_async_probe(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    flush_work(arg1 + 0x820);
    flush_work(arg1 + 0xd60);
    put_device(*(arg1 + 0x790));
    return;
}


// ===== sym.nvme_dev_disable @ 0x080037a8 (size 908) =====

void sym.nvme_dev_disable(int64_t arg1,int64_t arg2)

{
    int64_t *arg1_00;
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x6;
    int iVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    ulong *in_x18;
    int iVar7;
    int64_t iVar8;
    uint8_t *puVar9;
    int64_t iVar10;
    uint32_t uVar11;
    uint16_t *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x260);
    mutex_lock();
    if (0 < *(iVar8 + 0xa00)) {
        uVar2 = sym.readl(*(arg1 + 0x2a0) + 0x1c);
        uVar11 = *(arg1 + 0x334) - 1;
        if (uVar11 < 2) {
            nvme_start_freeze(arg1 + 0x330);
        }
        if ((uVar2 & 3) == 1) {
            iVar7 = *(iVar8 + -8);
            iVar8 = arg1 + 0x330;
            if (((iVar7 == 1) && (uVar11 < 2)) && ((arg2 & 1U) != 0)) {
                *in_x6 = nvme_cancel_request;
                nvme_wait_freeze_timeout(iVar8,0xd1c52000);
                nvme_stop_queues(iVar8);
            }
            else {
                nvme_stop_queues(iVar8);
                if (iVar7 != 1) goto code_r0x08003878;
            }
            if (*(arg1 + 0x8d0) != 0) {
                uVar3 = sym.__nvme_disable_io_queues(arg1,0);
                if ((uVar3 & 1) != 0) {
                    sym.__nvme_disable_io_queues(arg1,4);
                }
                iVar10 = *arg1;
                if ((arg2 & 1U) == 0) {
                    nvme_disable_ctrl(iVar8);
                }
                else {
                    nvme_shutdown_ctrl();
                }
                sym.nvme_poll_irqdisable(iVar10);
            }
            goto code_r0x08003878;
        }
    }
    nvme_stop_queues(arg1 + 0x330);
code_r0x08003878:
    uVar11 = *(arg1 + 0x8d0) - 1;
    if (0 < uVar11) {
        iVar8 = uVar11 * 0xc0;
        do {
            sym.nvme_suspend_queue(*arg1 + iVar8);
            uVar11 = uVar11 - 1;
            iVar8 = iVar8 + -0xc0;
        } while (0 < uVar11);
    }
    sym.nvme_suspend_queue(*arg1);
    iVar8 = *(arg1 + 0x260);
    iVar10 = iVar8 + -0xd0;
    pci_free_irq_vectors(iVar10);
    if (0 < *(iVar8 + 0xa00)) {
        pci_disable_pcie_error_reporting(iVar10);
        pci_disable_device(iVar10);
    }
    uVar11 = *(arg1 + 0x8d0) - 1;
    uVar3 = uVar11;
    do {
        if (uVar11 < 1) {
            blk_mq_tagset_busy_iter(arg1 + 8,sym.nvme_cancel_request.cfi_jt,arg1 + 0x330);
            blk_mq_tagset_busy_iter(arg1 + 0x130,sym.nvme_cancel_request.cfi_jt,arg1 + 0x330);
            blk_mq_tagset_wait_completed_request(arg1 + 8);
            blk_mq_tagset_wait_completed_request(arg1 + 0x130);
            if ((arg2 & 1U) != 0) {
                nvme_start_queues(arg1 + 0x330);
                if ((*(arg1 + 0x378) != 0) && ((*(*(arg1 + 0x378) + 0x60) >> 1 & 1) == 0)) {
                    blk_mq_unquiesce_queue();
                }
            }
            mutex_unlock(arg1 + 0x2e0);
            return;
        }
        _raw_spin_lock(*arg1 + uVar3 * 0xc0 + 0x40);
        iVar8 = *arg1;
        arg1_00 = iVar8 + uVar3 * 0xc0;
        puVar12 = arg1_00 + 0x72;
        puVar9 = arg1_00 + 0x76;
        if ((*(arg1_00[9] + *puVar12 * 0x10 + 0xe) & 1) == *puVar9) {
            iVar7 = 0;
            do {
                DataMemoryBarrier(0,1);
                sym.nvme_handle_cqe(arg1_00,*puVar12);
                iVar4 = *puVar12 + 1;
                if (iVar4 == arg1_00[0xd]) {
                    iVar4 = 0;
                    *puVar12 = 0;
                    *puVar9 = *puVar9 ^ 1;
                }
                else {
                    *puVar12 = iVar4;
                }
                iVar7 = iVar7 + -1;
            } while ((*(arg1_00[9] + iVar4 * 0x10 + 0xe) & 1) == *puVar9);
            if (iVar7 != 0) {
                uVar1 = *puVar12;
                puVar5 = *(iVar8 + uVar3 * 0xc0 + 0x88);
                if (puVar5 != NULL) {
                    puVar6 = *(iVar8 + uVar3 * 0xc0 + 0x98);
                    DataSynchronizationBarrier(3,2,0);
                    uVar11 = *puVar5;
                    *puVar5 = uVar1;
                    DataSynchronizationBarrier(3,3,0);
                    if ((uVar1 - uVar11 & 0xffff) <= (uVar1 + ~*puVar6 & 0xffff)) goto code_r0x0800391c;
                }
                sym.writel(uVar1,*(iVar8 + uVar3 * 0xc0 + 0x60) + *(*arg1_00 + 0x298) * 4);
            }
        }
code_r0x0800391c:
        _raw_spin_unlock(*arg1 + uVar3 * 0xc0 + 0x40);
        uVar3 = uVar3 - 1;
        uVar11 = uVar3;
    } while( true );
}


// ===== sym.nvme_pci_configure_admin_queue @ 0x08003b44 (size 664) =====

ulong sym.nvme_pci_configure_admin_queue(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t extraout_x0;
    ulong uVar5;
    code *pcVar6;
    code *pcVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = *(arg1 + 0x298) * 8 + 0x1000;
    if (*(arg1 + 0x2a8) < uVar9) {
        iVar11 = *(arg1 + 0x260);
        uVar8 = 0;
        if (*(iVar11 + 0x3a0) != 0) {
            uVar8 = (*(iVar11 + 0x3a0) - *(iVar11 + 0x398)) + 1;
        }
        if (uVar8 < uVar9) {
            return 0xfffffff4;
        }
        if (*(arg1 + 0x2a0) != 0) {
            iounmap();
        }
        uVar5 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar5 = 0x68000000000f13;
        }
        iVar11 = __ioremap(*(iVar11 + 0x398),uVar9,uVar5);
        *(arg1 + 0x2a0) = iVar11;
        if (iVar11 == 0) {
            *(arg1 + 0x2a8) = 0;
            return 0xfffffff4;
        }
        *(arg1 + 0x2a8) = uVar9;
        *(arg1 + 600) = iVar11 + 0x1000;
    }
    else {
        iVar11 = *(arg1 + 0x2a0);
    }
    sym.readl(iVar11 + 8);
    if ((extraout_x0 & 0xffffff) < 0x101) {
        *(arg1 + 0x310) = 0;
    }
    else {
        *(arg1 + 0x310) = *(arg1 + 0x8d8) >> 0x24 & 1;
        if (((*(arg1 + 0x8d8) >> 0x24 & 1) != 0) && (uVar4 = sym.readl(*(arg1 + 0x2a0) + 0x1c), (uVar4 >> 4 & 1) != 0))
        {
            sym.writel(0x10,*(arg1 + 0x2a0) + 0x1c);
        }
    }
    uVar5 = nvme_disable_ctrl(arg1 + 0x330);
    if ((-1 < uVar5) && (uVar5 = sym.nvme_alloc_queue(arg1,0,0x20), uVar5 == 0)) {
        piVar10 = *arg1;
        *(arg1 + 0x39c) = 0xffffffff;
        uVar4 = piVar10[0xd] - 1;
        sym.writel(uVar4 | uVar4 * 0x10000,*(arg1 + 0x2a0) + 0x24);
        iVar11 = *(arg1 + 0x2a0);
        uVar4 = *(piVar10 + 0x54);
        sym.writel(*(piVar10 + 10),iVar11 + 0x28);
        sym.writel(uVar4,iVar11 + 0x2c);
        iVar11 = *(arg1 + 0x2a0);
        uVar4 = *(piVar10 + 0x5c);
        sym.writel(*(piVar10 + 0xb),iVar11 + 0x30);
        sym.writel(uVar4,iVar11 + 0x34);
        uVar5 = nvme_enable_ctrl(arg1 + 0x330);
        if (uVar5 == 0) {
            iVar11 = *piVar10;
            *(piVar10 + 0x6c) = 0;
            *(piVar10 + 0x76) = 1;
            piVar10[0xc] = *(iVar11 + 600);
            memset(piVar10[9],0,*(piVar10 + 0xd) << 4);
            *(iVar11 + 0x278) = *(iVar11 + 0x278) + 1;
            DataSynchronizationBarrier(3,2,0);
            if (_segment.ehdr == 0) {
                pcVar6 = sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                pcVar7 = NULL;
            }
            else {
                pcVar6 = sym.nvme_irq_check.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
                pcVar7 = sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
            }
            uVar5 = pci_request_irq(*(*piVar10 + 0x260) + -0xd0,*(piVar10 + 0x6c),pcVar6,pcVar7,piVar10,"nvme%dq%d"
                                    ,*(*piVar10 + 0x398),*(piVar10 + 0x74));
            if (uVar5 == 0) {
                puVar1 = piVar10 + 0xf;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 | 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                uVar5 = 0;
            }
            else {
                *(arg1 + 0x278) = *(arg1 + 0x278) + -1;
            }
        }
    }
    return uVar5;
}


// ===== sym.nvme_setup_host_mem @ 0x08003ddc (size 888) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.nvme_setup_host_mem(int64_t arg1)

{
    ulong uVar1;
    uint16_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    int64_t *arg1_00;
    int64_t iVar8;
    code *pcVar9;
    code *pcVar10;
    uint64_t *puVar11;
    uint32_t uVar12;
    uint64_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x20;
    int64_t *piVar16;
    uint64_t uVar17;
    int64_t unaff_x22;
    uint64_t *unaff_x23;
    uint64_t uVar18;
    ulong *puVar19;
    int *unaff_x24;
    uint64_t unaff_x25;
    uint32_t uVar20;
    uint64_t *unaff_x27;
    uint64_t *unaff_x28;
    ulong unaff_x30;
    int64_t *piStack_178;
    uint32_t auStack_16c [7];
    ulong uStack_150;
    code *pcStack_148;
    int64_t *piStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    uint64_t *puStack_120;
    uint64_t *puStack_118;
    uint64_t *puStack_110;
    uint64_t uStack_108;
    int *piStack_100;
    uint64_t *puStack_f8;
    int64_t iStack_f0;
    uint64_t uStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uint64_t uStack_d0;
    uint64_t *puStack_c8;
    uint64_t *puStack_c0;
    uint64_t *puStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_d0 = *(arg1 + 0xf58);
    puVar13 = _segment.ehdr * 0x100000;
    puVar11 = *(arg1 + 0xf54) << 0xc;
    puStack_c0 = uStack_d0 * 0x1000;
    if (puVar13 <= puVar11) {
        puVar11 = puVar13;
    }
    if (puVar13 <= puStack_c0 && puStack_c0 + _segment.ehdr * -0x20000 != NULL) {
        _dev_warn(*(arg1 + 0x790),"min host memory (%lld MiB) above limit (%d MiB).\n",*(arg1 + 0xf58) >> 8);
        sym.nvme_free_host_mem(arg1);
        uVar17 = 0;
        goto code_r0x08003ed8;
    }
    if (*(arg1 + 0xfe0) == 0) {
code_r0x08003f18:
        unaff_x27 = puVar11;
        if (0x3fffff < puVar11) {
            unaff_x27 = 0x400000;
        }
        uVar5 = *(arg1 + 0xf5c) << 0xc;
        if (uVar5 < 0x2001) {
            uVar5 = 0x2000;
        }
        puVar13 = uVar5;
        if (puVar13 <= unaff_x27) {
            unaff_x23 = puVar11 - 1;
            iVar8 = unaff_x22;
            puStack_c8 = puVar13;
            puStack_b8 = unaff_x23;
            do {
                uVar2 = *(arg1 + 0xf60);
                uVar5 = 0;
                if (unaff_x27 != NULL) {
                    uVar5 = (unaff_x23 + unaff_x27) / unaff_x27;
                }
                uStack_a8 = 0;
                uVar12 = uVar2;
                if (uVar5 <= uVar2 || uVar2 == 0) {
                    uVar12 = uVar5;
                }
                unaff_x25 = uVar12;
                unaff_x20 = unaff_x25 << 4;
                iVar7 = dma_alloc_attrs(*(arg1 + 0x260),unaff_x20,&uStack_a8,0xcc0,0);
                unaff_x22 = iVar8;
                if (iVar7 == 0) {
code_r0x08003fd8:
                    *(arg1 + 0xfe0) = 0;
                }
                else {
                    unaff_x22 = __kmalloc(unaff_x25 << 3,0xdc0);
                    if (unaff_x22 == 0) {
code_r0x08003fc0:
                        dma_free_attrs(*(arg1 + 0x260),unaff_x20,iVar7,uStack_a8,0);
                        unaff_x22 = iVar8;
                        goto code_r0x08003fd8;
                    }
                    if ((puVar11 == NULL) || (uVar12 == 0)) {
code_r0x08003fb4:
                        kfree(unaff_x22);
                        iVar8 = unaff_x22;
                        unaff_x23 = puStack_b8;
                        goto code_r0x08003fc0;
                    }
                    unaff_x24 = NULL;
                    unaff_x28 = NULL;
                    while( true ) {
                        unaff_x23 = unaff_x27;
                        if (puVar11 - unaff_x28 <= unaff_x27) {
                            unaff_x23 = puVar11 - unaff_x28;
                        }
                        uStack_b0 = 0;
                        iVar8 = dma_alloc_attrs(*(arg1 + 0x260),unaff_x23,&uStack_b0,0xcc0,0x110);
                        puVar13 = puStack_c8;
                        iVar6 = unaff_x24;
                        *(unaff_x22 + iVar6 * 8) = iVar8;
                        if (iVar8 == 0) break;
                        unaff_x24 = iVar6 + 1U;
                        puVar19 = iVar7 + iVar6 * 0x10;
                        unaff_x28 = unaff_x23 + unaff_x28;
                        *puVar19 = uStack_b0;
                        *(puVar19 + 1) = unaff_x23 >> 0xc & 0xfffff;
                        if ((puVar11 <= unaff_x28) || (uVar12 <= iVar6 + 1U)) break;
                    }
                    if (unaff_x28 == NULL) {
                        uVar5 = unaff_x24 - 1;
                        if (-1 < uVar5) {
                            iVar8 = uVar5 << 3;
                            unaff_x24 = iVar7 + uVar5 * 0x10 + 8;
                            do {
                                dma_free_attrs(*(arg1 + 0x260),*unaff_x24 << 0xc,*(unaff_x22 + iVar8),
                                               *(unaff_x24 + -2),0x110);
                                iVar8 = iVar8 + -8;
                                unaff_x24 = unaff_x24 + -4;
                            } while (iVar8 != -8);
                        }
                        goto code_r0x08003fb4;
                    }
                    *(arg1 + 0xfd0) = unaff_x24;
                    *(arg1 + 0xfc8) = unaff_x28;
                    *(arg1 + 0xfe0) = iVar7;
                    *(arg1 + 0xfd8) = uStack_a8;
                    *(arg1 + 0xfe8) = unaff_x22;
                    if ((uStack_d0 == 0) || (puStack_c0 <= unaff_x28)) {
                        _dev_info(*(arg1 + 0x790),"allocated %lld MiB host memory buffer.\n",unaff_x28 >> 0x14);
                        goto code_r0x08003e70;
                    }
                    sym.nvme_free_host_mem(arg1);
                    unaff_x23 = puStack_b8;
                    puVar13 = puStack_c8;
                }
                unaff_x27 = unaff_x27 >> 1;
                iVar8 = unaff_x22;
            } while (puVar13 <= unaff_x27);
        }
        _dev_warn(*(arg1 + 0x790),"failed to allocate host memory buffer.\n");
        uVar17 = 0;
        unaff_x28 = puVar13;
    }
    else {
        if (*(arg1 + 0xfc8) < puStack_c0) {
            sym.nvme_free_host_mem(arg1);
            if (*(arg1 + 0xfe0) == 0) goto code_r0x08003f18;
code_r0x08003e70:
            unaff_x20 = 1;
        }
        else {
            unaff_x20 = 3;
        }
        uStack_a8 = 9;
        uStack_7c = unaff_x20;
        uStack_80 = 0xd;
        uStack_6c = *(arg1 + 0xfd0);
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_78 = *(arg1 + 0xfc8) >> 0xc;
        uStack_74 = *(arg1 + 0xfd8);
        uStack_70 = *(arg1 + 0xfd8) >> 0x20;
        uVar5 = nvme_submit_sync_cmd(*(arg1 + 0x378),&uStack_a8,0,0);
        uVar17 = uVar5;
        if (uVar5 == 0) {
            *(arg1 + 0xf9c) = 1;
        }
        else {
            _dev_warn(*(arg1 + 0x790),"failed to set host mem (err %d, flags %#x).\n",uVar17,unaff_x20);
            sym.nvme_free_host_mem(arg1);
        }
    }
code_r0x08003ed8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return uVar17;
    }
    arg1_00 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_setup_io_queues;
    uVar5 = _segment.ehdr;
    pcStack_128 = sym.nvme_setup_io_queues;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    piVar16 = *arg1_00;
    auStack_16c[0] = arg1_00[0x1fe] - 1;
    puVar13 = arg1_00[0x4c];
    *(arg1_00 + 0xff4) = _segment.ehdr;
    *(arg1_00 + 0x1ff) = uVar5;
    puStack_130 = &stack0xffffffffffffffa0;
    puStack_120 = unaff_x28;
    puStack_118 = unaff_x27;
    puStack_110 = puVar11;
    uStack_108 = unaff_x25;
    piStack_100 = unaff_x24;
    puStack_f8 = unaff_x23;
    iStack_f0 = unaff_x22;
    uStack_e8 = uVar17;
    iStack_e0 = unaff_x20;
    iStack_d8 = arg1;
    uVar17 = nvme_set_queue_count(arg1_00 + 0x66,auStack_16c);
    if (uVar17 < 0) {
        uVar17 = uVar17 & 0xffffffff;
        goto code_r0x08004638;
    }
    if (auStack_16c[0] == 0) goto code_r0x08004634;
    piStack_178 = arg1_00 + 0x5c;
    iVar6 = mutex_trylock();
    if (iVar6 == 0) goto code_r0x080045f0;
    if (*(arg1_00 + 0x334) != 3) goto code_r0x080045f8;
    unaff_x28 = puVar13 + -0x1a;
    puVar11 = piVar16 + 0xf;
code_r0x08004680:
    Hint_Prefetch(puVar11,2,0,1);
    do {
        uVar17 = *puVar11;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar11,0x10);
        if (bVar4) {
            *puVar11 = uVar17 & 0xfffffffffffffffe;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar17 & 1) != 0) {
        pci_free_irq(unaff_x28,0,piVar16);
    }
    uVar17 = auStack_16c[0];
    if (arg1_00[100] != '\0') {
        uVar12 = *(arg1_00 + 0x52);
        uVar5 = uVar12 * 0x40 + 0xfff;
        uVar20 = uVar12 * 0x40 + 0x1ffe;
        if (-1 < uVar5) {
            uVar20 = uVar5;
        }
        if (arg1_00[99] < auStack_16c[0] * (uVar20 >> 0xc) * 0x1000) {
            uVar14 = 0;
            if (uVar17 != 0) {
                uVar14 = arg1_00[99] / uVar17;
            }
            uVar12 = uVar14 >> 6 & 0xffffffc0;
            if (0x3f < uVar12) {
code_r0x08004284:
                *(arg1_00 + 0x52) = uVar12;
                goto code_r0x08004288;
            }
        }
        else if (0 < uVar12) goto code_r0x08004284;
        *(arg1_00 + 100) = 0;
    }
code_r0x08004288:
    uVar14 = arg1_00[0x55];
    do {
        uVar18 = (uVar17 * 8 + 8) * arg1_00[0x53] + 0x1000;
        if (uVar18 <= uVar14) {
            iVar8 = arg1_00[0x4b];
code_r0x08004344:
            piVar16[0xc] = iVar8;
            puVar19 = auStack_16c + 1 | 4;
            goto code_r0x08004358;
        }
        puVar13 = arg1_00[0x4c];
        uVar15 = 0;
        if (puVar13[0x74] != 0) {
            uVar15 = (puVar13[0x74] - puVar13[0x73]) + 1;
        }
        uVar5 = uVar17;
        if (uVar18 <= uVar15) {
            if (arg1_00[0x54] != 0) {
                iounmap();
            }
            uVar1 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar1 = 0x68000000000f13;
            }
            iVar8 = __ioremap(puVar13[0x73],uVar18,uVar1);
            arg1_00[0x54] = iVar8;
            if (iVar8 != 0) {
                iVar8 = iVar8 + 0x1000;
                arg1_00[0x55] = uVar18;
                arg1_00[0x4b] = iVar8;
                goto code_r0x08004344;
            }
            uVar14 = 0;
            arg1_00[0x55] = 0;
            uVar5 = auStack_16c[0];
        }
        auStack_16c[0] = uVar5 - 1;
        uVar17 = auStack_16c[0];
    } while (auStack_16c[0] != 0);
    uVar17 = 0xfffffff4;
code_r0x0800460c:
    mutex_unlock(piStack_178);
    goto code_r0x08004638;
code_r0x08004358:
    Hint_Prefetch(puVar11,2,0,1);
    do {
        uVar17 = *puVar11;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar11,0x10);
        if (bVar4) {
            *puVar11 = uVar17 & 0xfffffffffffffffe;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar17 & 1) != 0) {
        pci_free_irq(unaff_x28,0,piVar16);
    }
    pci_free_irq_vectors(unaff_x28);
    iVar8 = arg1_00[0x4c];
    uVar5 = *(arg1_00 + 0x1ff);
    if (auStack_16c[0] - 1 <= *(arg1_00 + 0x1ff)) {
        uVar5 = auStack_16c[0] - 1;
    }
    iVar6 = 1;
    if ((arg1_00[0x128] & 0x800U) == 0) {
        iVar6 = (auStack_16c[0] - uVar5) + 1;
    }
    auStack_16c[1] = 1;
    *puVar19 = 0;
    puVar19[1] = 0;
    uStack_150 = 0;
    puVar19[2] = 0;
    pcStack_148 = sym.nvme_calc_irq_sets.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    *(arg1_00 + 0x51) = uVar5;
    arg1_00[0x50] = 1;
    piStack_140 = arg1_00;
    iVar6 = pci_alloc_irq_vectors_affinity(iVar8 + -0xd0,1,iVar6,0xf,auStack_16c + 1);
    uVar5 = iVar6 - 1;
    puVar13 = puVar11;
    if (iVar6 < 1) {
        uVar17 = 0xfffffffb;
        goto code_r0x0800460c;
    }
    if (uVar5 < 2) {
        uVar5 = 1;
    }
    *(arg1_00 + 0x28c) = iVar6;
    *(arg1_00 + 0x27c) = arg1_00[0x51] + uVar5;
    if (_segment.ehdr == 0) {
        pcVar10 = NULL;
        pcVar9 = sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    }
    else {
        pcVar9 = sym.nvme_irq_check.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        pcVar10 = sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    }
    uVar14 = pci_request_irq(*(*piVar16 + 0x260) + -0xd0,*(piVar16 + 0x6c),pcVar9,pcVar10,piVar16,"nvme%dq%d",
                             *(*piVar16 + 0x398),*(piVar16 + 0x74));
    uVar17 = uVar14 & 0xffffffff;
    if (uVar14 != 0) goto code_r0x0800460c;
    Hint_Prefetch(puVar11,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar11,0x10);
        if (bVar4) {
            *puVar11 = *puVar11 | 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    mutex_unlock(piStack_178);
    uVar5 = *(arg1_00 + 0x11a);
    uVar12 = *(arg1_00 + 0x27c);
    if (uVar12 < uVar5) {
        uVar17 = 0;
    }
    else {
        do {
            iVar6 = sym.nvme_alloc_queue(arg1_00,uVar5,*(arg1_00 + 0x52));
            uVar12 = *(arg1_00 + 0x27c);
            if (iVar6 != 0) {
                uVar17 = 0xfffffff4;
                goto code_r0x080044cc;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 <= uVar12);
        uVar17 = 0;
code_r0x080044cc:
        uVar5 = *(arg1_00 + 0x11a);
    }
    if (uVar5 - 1 <= uVar12) {
        uVar12 = uVar5 - 1;
    }
    puVar13 = uVar12;
    if (uVar12 == 1) {
        uVar5 = 1;
    }
    else {
        uVar5 = uVar12;
        if (arg1_00[0x51] != 0) {
            uVar5 = *(arg1_00 + 0x284) + arg1_00[0x50];
        }
    }
    uVar20 = *(arg1_00 + 0x4f);
    if (uVar12 < uVar20) {
code_r0x08004544:
        if (uVar17 < 0) goto code_r0x08004638;
    }
    else {
        do {
            uVar17 = sym.nvme_create_queue(*arg1_00 + uVar20 * 0xc0,uVar20,uVar5 < uVar20);
            if (uVar17 != 0) {
                uVar17 = uVar17 & 0xffffffff;
                goto code_r0x08004544;
            }
            uVar20 = uVar20 + 1;
        } while (uVar20 <= uVar12);
    }
    if (*(arg1_00 + 0x4f) < 2) goto code_r0x08004634;
    uVar5 = *(arg1_00 + 0x4f) - 1;
    if (uVar5 < *(arg1_00 + 0x27c)) {
        auStack_16c[0] = uVar5;
        uVar17 = sym.__nvme_disable_io_queues(arg1_00,0);
        if ((uVar17 & 1) != 0) {
            sym.__nvme_disable_io_queues(arg1_00,4);
        }
        iVar6 = mutex_trylock(piStack_178);
        if (iVar6 == 0) goto code_r0x080045f0;
        if (*(arg1_00 + 0x334) == 3) {
            uVar5 = arg1_00[0x11a] - 1;
            if (0 < uVar5) {
                iVar8 = uVar5 * 0xc0;
                do {
                    sym.nvme_suspend_queue(*arg1_00 + iVar8);
                    uVar5 = uVar5 - 1;
                    iVar8 = iVar8 + -0xc0;
                } while (0 < uVar5);
            }
            goto code_r0x08004358;
        }
code_r0x080045f8:
        mutex_unlock(piStack_178);
        uVar17 = 0xffffffed;
    }
    else {
        _dev_info(arg1_00[0xf2],"%d/%d/%d default/read/poll queues\n",arg1_00[0x50],*(arg1_00 + 0x284),arg1_00[0x51]
                 );
code_r0x08004634:
        uVar17 = 0;
    }
code_r0x08004638:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return uVar17;
    }
    __stack_chk_fail();
    puVar11 = puVar13;
    goto code_r0x08004680;
code_r0x080045f0:
    uVar17 = 0xffffffed;
    goto code_r0x08004638;
}


// ===== sym.nvme_setup_io_queues @ 0x08004154 (size 1420) =====

//WARNING: Type propagation algorithm not settling

int sym.nvme_setup_io_queues(int64_t arg1)

{
    ulong uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    code *pcVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t *piVar12;
    uint64_t *puVar13;
    uint64_t *puVar14;
    uint64_t uVar15;
    ulong *puVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint64_t *unaff_x28;
    ulong unaff_x30;
    int64_t iStack_a8;
    uint32_t auStack_9c [7];
    ulong uStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = _segment.ehdr;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    piVar12 = *arg1;
    auStack_9c[0] = *(arg1 + 0xff0) - 1;
    puVar13 = *(arg1 + 0x260);
    *(arg1 + 0xff4) = _segment.ehdr;
    *(arg1 + 0xff8) = iVar4;
    iVar4 = nvme_set_queue_count(arg1 + 0x330,auStack_9c);
    if (iVar4 < 0) goto code_r0x08004638;
    if (auStack_9c[0] == 0) goto code_r0x08004634;
    iStack_a8 = arg1 + 0x2e0;
    iVar4 = mutex_trylock();
    if (iVar4 == 0) goto code_r0x080045f0;
    if (*(arg1 + 0x334) != 3) goto code_r0x080045f8;
    unaff_x28 = puVar13 + -0x1a;
    puVar14 = piVar12 + 0xf;
code_r0x08004680:
    Hint_Prefetch(puVar14,2,0,1);
    do {
        uVar8 = *puVar14;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
            *puVar14 = uVar8 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar8 & 1) != 0) {
        pci_free_irq(unaff_x28,0,piVar12);
    }
    uVar8 = auStack_9c[0];
    if (*(arg1 + 800) != '\0') {
        uVar9 = *(arg1 + 0x290);
        uVar17 = uVar9 * 0x40 + 0xfff;
        uVar18 = uVar9 * 0x40 + 0x1ffe;
        if (-1 < uVar17) {
            uVar18 = uVar17;
        }
        if (*(arg1 + 0x318) < auStack_9c[0] * (uVar18 >> 0xc) * 0x1000) {
            uVar10 = 0;
            if (uVar8 != 0) {
                uVar10 = *(arg1 + 0x318) / uVar8;
            }
            uVar9 = uVar10 >> 6 & 0xffffffc0;
            if (0x3f < uVar9) {
code_r0x08004284:
                *(arg1 + 0x290) = uVar9;
                goto code_r0x08004288;
            }
        }
        else if (0 < uVar9) goto code_r0x08004284;
        *(arg1 + 800) = 0;
    }
code_r0x08004288:
    uVar10 = *(arg1 + 0x2a8);
    do {
        uVar15 = (uVar8 * 8 + 8) * *(arg1 + 0x298) + 0x1000;
        if (uVar15 <= uVar10) {
            iVar5 = *(arg1 + 600);
code_r0x08004344:
            piVar12[0xc] = iVar5;
            puVar16 = auStack_9c + 1 | 4;
            goto code_r0x08004358;
        }
        puVar13 = *(arg1 + 0x260);
        uVar11 = 0;
        if (puVar13[0x74] != 0) {
            uVar11 = (puVar13[0x74] - puVar13[0x73]) + 1;
        }
        uVar17 = uVar8;
        if (uVar15 <= uVar11) {
            if (*(arg1 + 0x2a0) != 0) {
                iounmap();
            }
            uVar1 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar1 = 0x68000000000f13;
            }
            iVar5 = __ioremap(puVar13[0x73],uVar15,uVar1);
            *(arg1 + 0x2a0) = iVar5;
            if (iVar5 != 0) {
                iVar5 = iVar5 + 0x1000;
                *(arg1 + 0x2a8) = uVar15;
                *(arg1 + 600) = iVar5;
                goto code_r0x08004344;
            }
            uVar10 = 0;
            *(arg1 + 0x2a8) = 0;
            uVar17 = auStack_9c[0];
        }
        auStack_9c[0] = uVar17 - 1;
        uVar8 = auStack_9c[0];
    } while (auStack_9c[0] != 0);
    iVar4 = -0xc;
code_r0x0800460c:
    mutex_unlock(iStack_a8);
    goto code_r0x08004638;
code_r0x08004358:
    Hint_Prefetch(puVar14,2,0,1);
    do {
        uVar8 = *puVar14;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
            *puVar14 = uVar8 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar8 & 1) != 0) {
        pci_free_irq(unaff_x28,0,piVar12);
    }
    pci_free_irq_vectors(unaff_x28);
    iVar5 = *(arg1 + 0x260);
    uVar17 = *(arg1 + 0xff8);
    if (auStack_9c[0] - 1 <= *(arg1 + 0xff8)) {
        uVar17 = auStack_9c[0] - 1;
    }
    iVar4 = 1;
    if ((*(arg1 + 0x940) & 0x800) == 0) {
        iVar4 = (auStack_9c[0] - uVar17) + 1;
    }
    auStack_9c[1] = 1;
    *puVar16 = 0;
    puVar16[1] = 0;
    uStack_80 = 0;
    puVar16[2] = 0;
    pcStack_78 = sym.nvme_calc_irq_sets.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    *(arg1 + 0x288) = uVar17;
    *(arg1 + 0x280) = 1;
    iStack_70 = arg1;
    iVar4 = pci_alloc_irq_vectors_affinity(iVar5 + -0xd0,1,iVar4,0xf,auStack_9c + 1);
    uVar17 = iVar4 - 1;
    puVar13 = puVar14;
    if (iVar4 < 1) {
        iVar4 = -5;
        goto code_r0x0800460c;
    }
    if (uVar17 < 2) {
        uVar17 = 1;
    }
    *(arg1 + 0x28c) = iVar4;
    *(arg1 + 0x27c) = *(arg1 + 0x288) + uVar17;
    if (_segment.ehdr == 0) {
        pcVar7 = NULL;
        pcVar6 = sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    }
    else {
        pcVar6 = sym.nvme_irq_check.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        pcVar7 = sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    }
    iVar4 = pci_request_irq(*(*piVar12 + 0x260) + -0xd0,*(piVar12 + 0x6c),pcVar6,pcVar7,piVar12,"nvme%dq%d",
                            *(*piVar12 + 0x398),*(piVar12 + 0x74));
    if (iVar4 != 0) goto code_r0x0800460c;
    Hint_Prefetch(puVar14,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
            *puVar14 = *puVar14 | 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    mutex_unlock(iStack_a8);
    uVar17 = *(arg1 + 0x8d0);
    uVar9 = *(arg1 + 0x27c);
    if (uVar9 < uVar17) {
        iVar4 = 0;
    }
    else {
        do {
            iVar4 = sym.nvme_alloc_queue(arg1,uVar17,*(arg1 + 0x290));
            uVar9 = *(arg1 + 0x27c);
            if (iVar4 != 0) {
                iVar4 = -0xc;
                goto code_r0x080044cc;
            }
            uVar17 = uVar17 + 1;
        } while (uVar17 <= uVar9);
        iVar4 = 0;
code_r0x080044cc:
        uVar17 = *(arg1 + 0x8d0);
    }
    if (uVar17 - 1 <= uVar9) {
        uVar9 = uVar17 - 1;
    }
    puVar13 = uVar9;
    if (uVar9 == 1) {
        uVar17 = 1;
    }
    else {
        uVar17 = uVar9;
        if (*(arg1 + 0x288) != 0) {
            uVar17 = *(arg1 + 0x284) + *(arg1 + 0x280);
        }
    }
    uVar18 = *(arg1 + 0x278);
    if (uVar9 < uVar18) {
code_r0x08004544:
        if (iVar4 < 0) goto code_r0x08004638;
    }
    else {
        do {
            iVar4 = sym.nvme_create_queue(*arg1 + uVar18 * 0xc0,uVar18,uVar17 < uVar18);
            if (iVar4 != 0) goto code_r0x08004544;
            uVar18 = uVar18 + 1;
        } while (uVar18 <= uVar9);
    }
    if (*(arg1 + 0x278) < 2) goto code_r0x08004634;
    uVar17 = *(arg1 + 0x278) - 1;
    if (uVar17 < *(arg1 + 0x27c)) {
        auStack_9c[0] = uVar17;
        uVar8 = sym.__nvme_disable_io_queues(arg1,0);
        if ((uVar8 & 1) != 0) {
            sym.__nvme_disable_io_queues(arg1,4);
        }
        iVar4 = mutex_trylock(iStack_a8);
        if (iVar4 == 0) goto code_r0x080045f0;
        if (*(arg1 + 0x334) == 3) {
            uVar17 = *(arg1 + 0x8d0) - 1;
            if (0 < uVar17) {
                iVar5 = uVar17 * 0xc0;
                do {
                    sym.nvme_suspend_queue(*arg1 + iVar5);
                    uVar17 = uVar17 - 1;
                    iVar5 = iVar5 + -0xc0;
                } while (0 < uVar17);
            }
            goto code_r0x08004358;
        }
code_r0x080045f8:
        mutex_unlock(iStack_a8);
        iVar4 = -0x13;
    }
    else {
        _dev_info(*(arg1 + 0x790),"%d/%d/%d default/read/poll queues\n",*(arg1 + 0x280),*(arg1 + 0x284),
                  *(arg1 + 0x288));
code_r0x08004634:
        iVar4 = 0;
    }
code_r0x08004638:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return iVar4;
    }
    __stack_chk_fail();
    puVar14 = puVar13;
    goto code_r0x08004680;
code_r0x080045f0:
    iVar4 = -0x13;
    goto code_r0x08004638;
}


// ===== sym.readl @ 0x080046e0 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80046e4);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8004728);
    return uVar1;
}


// ===== sym.nvme_suspend_queue @ 0x08004760 (size 252) =====

void sym.nvme_suspend_queue(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0x78;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = uVar4 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar4 & 1) != 0) {
        DataSynchronizationBarrier(3,3,0);
        *(*arg1 + 0x278) = *(*arg1 + 0x278) + -1;
        if ((*(arg1 + 0x74) == 0) && (*(*arg1 + 0x378) != 0)) {
            blk_mq_quiesce_queue();
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 & 0xfffffffffffffff7;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar4 >> 3 & 1) == 0) {
            pci_free_irq(*(*arg1 + 0x260) + -0xd0,*(arg1 + 0x6c),arg1);
        }
    }
    return;
}


// ===== sym.__nvme_disable_io_queues @ 0x0800485c (size 480) =====

void sym.__nvme_disable_io_queues(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *in_x6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    uint32_t uVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint64_t auStack_a8 [6];
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uVar4 = *(arg1 + 0x278);
    iVar11 = 0;
    pcVar3 = sym.nvme_del_cq_end.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    if ((arg2 & 0xff) != 4) {
        pcVar3 = sym.nvme_del_queue_end.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    }
    uVar14 = uVar4 - 1;
    do {
        *in_x6 = uVar4;
        if (uVar14 < 1) {
code_r0x08004994:
            iVar12 = iVar11;
            if (uVar14 == 0) goto code_r0x080049ac;
            uVar10 = 2;
        }
        else {
            iVar12 = iVar11 + uVar14;
            iVar9 = uVar14 * 0xc0 + 0xa8;
            uVar8 = uVar14;
            do {
                iVar2 = *arg1 + iVar9;
                uStack_78 = 0;
                uStack_70 = 0;
                auStack_a8[4] = 0;
                auStack_a8[2] = 0;
                auStack_a8[3] = 0;
                auStack_a8[1] = 0;
                auStack_a8[0] = arg2 & 0xff;
                auStack_a8[5] = *(iVar2 + -0x34);
                uVar7 = nvme_alloc_request(*(*(iVar2 + -0xa8) + 0x378),auStack_a8,1);
                if (uVar7 < 0xfffffffffffff001) {
                    *(uVar7 + 0x120) = iVar2 + -0xa8;
                    *(iVar2 + -8) = 0;
                    __init_swait_queue_head(iVar2,"&x->wait",obj.nvme_probe.__key);
                    blk_execute_rq_nowait(0,uVar7,0,pcVar3);
                }
                else if (uVar7 != 0) {
                    uVar14 = uVar8;
                    goto code_r0x08004994;
                }
                iVar9 = iVar9 + -0xc0;
                uVar7 = uVar8 - 1;
                iVar11 = iVar11 + 1;
                bVar6 = 0 < uVar8;
                uVar8 = uVar7;
            } while (uVar7 != 0 && bVar6);
code_r0x080049ac:
            uVar14 = 0;
            uVar10 = 0;
        }
        uVar8 = uVar4 * 0xfa;
        do {
            iVar13 = iVar12;
            if (iVar13 == 0) goto code_r0x080049f4;
            uVar8 = wait_for_completion_io_timeout(*arg1 + (iVar13 + uVar14) * 0xc0 + 0xa0,uVar8);
            uVar4 = uVar10;
            if (uVar8 == 0) {
                uVar4 = 1;
            }
            iVar11 = iVar13 - (uVar8 != 0);
            iVar12 = iVar11;
        } while (uVar4 == 0);
        if (uVar4 != 2) {
code_r0x080049f4:
            iVar9 = sp_el0;
            if (*(iVar9 + 0x5e0) != iStack_68) {
                auVar15 = __stack_chk_fail(iVar13 == 0);
                *extraout_x18 = sym.nvme_del_cq_end;
                if ((auVar15._8_8_ & 0xff) != 0) {
                    puVar1 = *(auVar15._0_8_ + 0x120) + 0x78;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar5 = '\x01';
                        bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar6) {
                            *puVar1 = *puVar1 | 4;
                            cVar5 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar5 != '\0');
                }
                iVar9 = *(auVar15._0_8_ + 0x120);
                blk_mq_free_request();
                complete(iVar9 + 0xa0);
                return;
            }
            return;
        }
    } while( true );
}


// ===== sym.nvme_del_cq_end @ 0x08004a3c (size 124) =====

void sym.nvme_del_cq_end(int64_t arg1,uint32_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 & 0xff) != 0) {
        puVar1 = *(arg1 + 0x120) + 0x78;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 4;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    iVar4 = *(arg1 + 0x120);
    blk_mq_free_request();
    complete(iVar4 + 0xa0);
    return;
}


// ===== sym.nvme_del_queue_end @ 0x08004ab8 (size 56) =====

void sym.nvme_del_queue_end(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x120);
    blk_mq_free_request();
    complete(iVar1 + 0xa0);
    return;
}


// ===== sym.nvme_poll_irqdisable @ 0x08004af0 (size 336) =====

void sym.nvme_poll_irqdisable(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    ulong *in_x18;
    int64_t iVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(*arg1 + 0x260) + -0xd0;
    if ((*(arg1 + 0x78) >> 3 & 1) != 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8004c40);
        (*pcVar3)();
    }
    pci_irq_vector(iVar7,*(arg1 + 0x6c));
    disable_irq();
    if ((*(*(arg1 + 0x48) + *(arg1 + 0x72) * 0x10 + 0xe) & 1) == *(arg1 + 0x76)) {
        iVar8 = 0;
        do {
            DataMemoryBarrier(0,1);
            sym.nvme_handle_cqe(arg1,*(arg1 + 0x72));
            iVar4 = *(arg1 + 0x72) + 1;
            if (iVar4 == *(arg1 + 0x68)) {
                iVar4 = 0;
                *(arg1 + 0x72) = 0;
                *(arg1 + 0x76) = *(arg1 + 0x76) ^ 1;
            }
            else {
                *(arg1 + 0x72) = iVar4;
            }
            iVar8 = iVar8 + -1;
        } while ((*(*(arg1 + 0x48) + iVar4 * 0x10 + 0xe) & 1) == *(arg1 + 0x76));
        if (iVar8 != 0) {
            puVar5 = *(arg1 + 0x88);
            uVar1 = *(arg1 + 0x72);
            if (puVar5 != NULL) {
                puVar6 = *(arg1 + 0x98);
                DataSynchronizationBarrier(3,2,0);
                uVar2 = *puVar5;
                *puVar5 = uVar1;
                DataSynchronizationBarrier(3,3,0);
                if ((uVar1 - uVar2 & 0xffff) <= (uVar1 + ~*puVar6 & 0xffff)) goto code_r0x08004c14;
            }
            sym.writel(uVar1,*(arg1 + 0x60) + *(*arg1 + 0x298) * 4);
        }
    }
code_r0x08004c14:
    pci_irq_vector(iVar7,*(arg1 + 0x6c));
    enable_irq();
    return;
}


// ===== sym.nvme_handle_cqe @ 0x08004c4c (size 336) =====

void sym.nvme_handle_cqe(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    ushort uVar4;
    ushort uVar5;
    uint16_t uVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0x48);
    uVar9 = arg2 & 0xffff;
    puVar1 = iVar10 + (arg2 & 0xffffU) * 0x10;
    uVar2 = *(puVar1 + 0xc);
    uVar3 = *(arg1 + 0x74);
    uVar6 = uVar2 & 0xfff;
    iVar8 = *arg1;
    if ((uVar3 == 0) && (0x1e < uVar6)) {
        nvme_complete_async_event(iVar8 + 0x330,*(iVar10 + uVar9 * 0x10 + 0xe),puVar1);
    }
    else {
        if (uVar3 == 0) {
            puVar7 = *(iVar8 + 0x210);
        }
        else {
            puVar7 = *(iVar8 + 0xe8) + (uVar3 - 1) * 8;
        }
        auVar11 = blk_mq_tag_to_rq(*puVar7,uVar6);
        iVar8 = auVar11._0_8_;
        if (iVar8 == 0) {
            _printk(0x8000aac,uVar6);
        }
        else {
            if (uVar2 >> 0xc == (*(iVar8 + 0x140) & 0xf)) {
                iVar10 = iVar10 + uVar9 * 0x10;
                uVar4 = *(arg1 + 0x6e);
                uVar5 = *(iVar10 + 8);
                uVar6 = *(iVar10 + 0xe);
                *(iVar8 + 0x138) = *puVar1;
                *(iVar8 + 0x144) = uVar6 >> 1;
                uVar9 = blk_mq_complete_request_remote(iVar8,auVar11._8_8_,uVar5,uVar4);
                if ((uVar9 & 1) != 0) {
                    return;
                }
                sym.nvme_pci_complete_rq(iVar8);
                return;
            }
            _dev_err(*(*(iVar8 + 0x148) + 0x460),"request %#x genctr mismatch (got %#x expected %#x)\n",uVar6);
        }
        _dev_warn(*(*arg1 + 0x790),"invalid id %d completed on queue %d\n",uVar2,*(iVar10 + uVar9 * 0x10 + 10));
    }
    return;
}


// ===== sym.nvme_pci_complete_rq @ 0x08004e20 (size 412) =====

void sym.nvme_pci_complete_rq(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong uVar4;
    uint uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = **(arg1 + 400);
    if (((*(arg1 + 0x1e) >> 2 & 1) != 0) || (*(arg1 + 0xca) != 0)) {
        if (*(arg1 + 0x1b0) == 0) {
            if (*(arg1 + 0x1a4) == 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8004fbc);
                (*pcVar2)();
            }
            uVar5 = 1;
            if ((*(arg1 + 0x18) & 1) == 0) {
                uVar5 = 2;
            }
            dma_unmap_sg_attrs(*(iVar7 + 0x260),*(arg1 + 0x1c0),*(arg1 + 0x1a4),uVar5,0);
            iVar1 = *(arg1 + 0x1a0);
            if (iVar1 == 0) {
                if ((*(arg1 + 0x1e) >> 2 & 1) == 0) {
                    uVar6 = *(arg1 + 0xca);
                }
                else {
                    uVar6 = 1;
                }
                dma_pool_free(*(iVar7 + 0x270),*(*(arg1 + 0x1c0) + uVar6 * 0x20),*(arg1 + 0x1a8));
            }
            else if (*(arg1 + 0x198) == '\0') {
                if (0 < iVar1) {
                    iVar8 = 0;
                    uVar4 = *(arg1 + 0x1a8);
                    do {
                        if ((*(arg1 + 0x1e) >> 2 & 1) == 0) {
                            uVar6 = *(arg1 + 0xca);
                        }
                        else {
                            uVar6 = 1;
                        }
                        iVar3 = *(*(arg1 + 0x1c0) + uVar6 * 0x20 + iVar8 * 8);
                        uVar9 = *(iVar3 + 0xff8);
                        dma_pool_free(*(iVar7 + 0x268),iVar3,uVar4);
                        iVar8 = iVar8 + 1;
                        uVar4 = uVar9;
                    } while (iVar8 < *(arg1 + 0x1a0));
                }
            }
            else if (0 < iVar1) {
                iVar8 = 0;
                uVar4 = *(arg1 + 0x1a8);
                do {
                    if ((*(arg1 + 0x1e) >> 2 & 1) == 0) {
                        uVar6 = *(arg1 + 0xca);
                    }
                    else {
                        uVar6 = 1;
                    }
                    iVar3 = *(*(arg1 + 0x1c0) + uVar6 * 0x20 + iVar8 * 8);
                    uVar9 = *(iVar3 + 0xff0);
                    dma_pool_free(*(iVar7 + 0x268),iVar3,uVar4);
                    iVar8 = iVar8 + 1;
                    uVar4 = uVar9;
                } while (iVar8 < *(arg1 + 0x1a0));
            }
            mempool_free(*(arg1 + 0x1c0),*(iVar7 + 4000));
        }
        else {
            uVar5 = 1;
            if ((*(arg1 + 0x18) & 1) == 0) {
                uVar5 = 2;
            }
            dma_unmap_page_attrs(*(iVar7 + 0x260),*(arg1 + 0x1a8),*(arg1 + 0x1b0),uVar5,0);
        }
    }
    nvme_complete_rq(arg1);
    return;
}


// ===== sym.writel @ 0x08004fc4 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8004fe0);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800500c);
    return;
}


// ===== sym.hi_lo_writeq @ 0x08005040 (size 72) =====

void sym.hi_lo_writeq(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(arg1 >> 0x20,arg2 + 4);
    sym.writel(arg1 & 0xffffffff,arg2);
    return;
}


// ===== sym.nvme_alloc_queue @ 0x08005088 (size 372) =====

ulong sym.nvme_alloc_queue(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < *(arg1 + 0x8d0)) {
        uVar2 = 0;
    }
    else {
        iVar6 = *arg1;
        iVar7 = arg2;
        if (arg2 == 0) {
            uVar4 = 6;
        }
        else {
            uVar4 = *(arg1 + 0x294);
        }
        iVar8 = iVar6 + iVar7 * 0xc0;
        *(iVar8 + 0x77) = uVar4;
        puVar9 = iVar8 + 0x68;
        *puVar9 = arg3;
        iVar3 = dma_alloc_attrs(*(arg1 + 0x260),(arg3 & 0xffffffffU) << 4,iVar8 + 0x58,0xcc0,0);
        *(iVar8 + 0x48) = iVar3;
        if (iVar3 != 0) {
            if (((arg2 != 0) && (*(arg1 + 800) != '\0')) && ((*(arg1 + 0x324) & 1) != 0)) {
                *(iVar6 + iVar7 * 0xc0 + 0x10) = 0;
            }
            iVar10 = iVar6 + iVar7 * 0xc0;
            iVar3 = dma_alloc_attrs(*(arg1 + 0x260),*puVar9 << (*(iVar8 + 0x77) & 0x1f),iVar10 + 0x50,0xcc0,0);
            *(iVar10 + 0x10) = iVar3;
            if (iVar3 != 0) {
                piVar5 = iVar6 + iVar7 * 0xc0;
                *piVar5 = arg1;
                *(piVar5 + 1) = 0;
                *(piVar5 + 8) = 0;
                *(piVar5 + 0x72) = 0;
                *(piVar5 + 0x76) = 1;
                iVar1 = *(arg1 + 0x298);
                iVar6 = *(arg1 + 600);
                *(piVar5 + 0x74) = arg2;
                piVar5[0xc] = iVar6 + arg2 * iVar1 * 2 * 4;
                *(arg1 + 0x8d0) = *(arg1 + 0x8d0) + 1;
                return 0;
            }
            dma_free_attrs(*(arg1 + 0x260),*puVar9 << 4,*(iVar8 + 0x48),*(iVar8 + 0x58),0);
        }
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym.queue_request_irq @ 0x080051fc (size 124) =====

void sym.queue_request_irq(int64_t arg1)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        pcVar1 = sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        pcVar2 = NULL;
    }
    else {
        pcVar1 = sym.nvme_irq_check.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
        pcVar2 = sym.nvme_irq.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt;
    }
    pci_request_irq(*(*arg1 + 0x260) + -0xd0,*(arg1 + 0x6c),pcVar1,pcVar2,arg1,"nvme%dq%d",*(*arg1 + 0x398),
                    *(arg1 + 0x74));
    return;
}


// ===== sym.nvme_irq_check @ 0x08005278 (size 52) =====

int64_t sym.nvme_irq_check(ulong noname_0,int64_t arg1)

{
    return ((*(*(arg1 + 0x48) + *(arg1 + 0x72) * 0x10 + 0xe) & 1) == *(arg1 + 0x76)) << 1;
}


// ===== sym.nvme_irq @ 0x080052b0 (size 284) =====

ulong sym.nvme_irq(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(arg2 + 0x48) + *(arg2 + 0x72) * 0x10 + 0xe) & 1) != *(arg2 + 0x76)) {
        return 0;
    }
    iVar6 = 0;
    do {
        DataMemoryBarrier(0,1);
        sym.nvme_handle_cqe(arg2,*(arg2 + 0x72));
        iVar3 = *(arg2 + 0x72) + 1;
        if (iVar3 == *(arg2 + 0x68)) {
            iVar3 = 0;
            *(arg2 + 0x72) = 0;
            *(arg2 + 0x76) = *(arg2 + 0x76) ^ 1;
        }
        else {
            *(arg2 + 0x72) = iVar3;
        }
        iVar6 = iVar6 + -1;
    } while ((*(*(arg2 + 0x48) + iVar3 * 0x10 + 0xe) & 1) == *(arg2 + 0x76));
    if (iVar6 != 0) {
        puVar4 = *(arg2 + 0x88);
        uVar1 = *(arg2 + 0x72);
        if (puVar4 != NULL) {
            puVar5 = *(arg2 + 0x98);
            DataSynchronizationBarrier(3,2,0);
            uVar2 = *puVar4;
            *puVar4 = uVar1;
            DataSynchronizationBarrier(3,3,0);
            if ((uVar1 - uVar2 & 0xffff) <= (uVar1 + ~*puVar5 & 0xffff)) {
                return 1;
            }
        }
        sym.writel(uVar1,*(arg2 + 0x60) + *(*arg2 + 0x298) * 4);
        return 1;
    }
    return 0;
}


// ===== sym.nvme_queue_rq @ 0x080053d4 (size 1464) =====

uint32_t sym.nvme_queue_rq(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    ulong *puVar8;
    ulong *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ushort uVar12;
    char *pcVar13;
    uint uVar14;
    int64_t iVar15;
    int iVar16;
    uchar uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg2_00;
    int64_t unaff_x20;
    ulong *arg1_00;
    int64_t *arg1_01;
    int *arg1_02;
    ulong uVar18;
    uint32_t uVar19;
    ulong uVar20;
    int iVar21;
    ulong unaff_x30;
    uint16_t auStack_fc [2];
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int *piStack_a0;
    ulong *puStack_98;
    int64_t iStack_90;
    ulong *puStack_88;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    arg2_00 = *arg2;
    arg1_00 = *(arg1 + 0xf8);
    uVar18 = *(*(arg1 + 0xe8) + 0x58);
    arg1_02 = *arg1_00;
    *(arg2_00 + 0x1a4) = 0;
    *(arg2_00 + 0x19c) = 0xffffffff00000000;
    if ((arg1_00[0xf] & 1) == 0) {
        uVar6 = 10;
    }
    else {
        unaff_x20 = arg2;
        if ((arg1_02[0xcd] != 1) && (((*(*(arg1_02 + 0xdc) + 0x10) & 1) == 0 || (arg1_02[0xcd] != 4)))) {
            uVar11 = __nvme_check_ready(arg1_02 + 0xcc,arg2_00,1);
            if ((uVar11 & 1) == 0) {
                uVar6 = nvme_fail_nonready_command(arg1_02 + 0xcc,arg2_00);
                goto code_r0x08005738;
            }
        }
        uVar6 = nvme_setup_cmd(uVar18,arg2_00);
        if ((uVar6 & 0xff) == 0) {
            if ((*(arg2_00 + 0x1e) >> 2 & 1) == 0) {
                if (*(arg2_00 + 0xca) != 0) {
                    if (*(arg2_00 + 0xca) == 1) {
                        iVar15 = arg2_00[7];
                        puVar8 = *(iVar15 + 0x78) + *(iVar15 + 0x2c) * 0x10;
                        uVar19 = *(puVar8 + 1) - *(iVar15 + 0x30);
                        uVar6 = *(iVar15 + 0x28);
                        if (uVar19 <= *(iVar15 + 0x28)) {
                            uVar6 = uVar19;
                        }
                        uVar11 = CONCAT44(*(puVar8 + 0xc) + *(iVar15 + 0x30),uVar6);
                        goto code_r0x080054b0;
                    }
code_r0x0800558c:
                    *(arg2_00 + 0x36) = 0;
                    iVar15 = mempool_alloc(*(arg1_02 + 1000),0xa20);
                    arg2_00[0x38] = iVar15;
                    if (iVar15 != 0) {
                        if ((*(arg2_00 + 0x1e) >> 2 & 1) == 0) {
                            uVar12 = *(arg2_00 + 0xca);
                        }
                        else {
                            uVar12 = 1;
                        }
                        sg_init_table(iVar15,uVar12);
                        uStack_70 = 0;
                        iVar7 = __blk_rq_map_sg(*arg2_00,arg2_00,arg2_00[0x38],&uStack_70);
                        *(arg2_00 + 0x1a4) = iVar7;
                        if (iVar7 != 0) {
                            uVar14 = 1;
                            if ((*(arg2_00 + 3) & 1) == 0) {
                                uVar14 = 2;
                            }
                            uVar6 = dma_map_sg_attrs(*(arg1_02 + 0x98),arg2_00[0x38],iVar7,uVar14,0x100);
                            if (uVar6 != 0) {
                                if ((*(arg2_00 + 0x1c) >> 0x12 & 1) == 0) {
                                    uVar19 = *(arg2_00 + 0xca);
                                }
                                else {
                                    uVar19 = 1;
                                }
                                iVar15 = 0x28;
                                if ((*(arg2_00 + 0x1c) & 0x40000) != 0) {
                                    iVar15 = 0x70;
                                }
                                if (((*(arg1_02 + 0x246) & 3) == 0) || (*(arg2_00[0x32] + 0x74) == 0)) {
                                    *(arg2_00 + 0x33) = 0;
                                }
                                else {
                                    uVar2 = 0;
                                    if (uVar19 != 0) {
                                        uVar2 = ((uVar19 + *(arg2_00 + iVar15)) - 1) / uVar19;
                                    }
                                    bVar5 = _segment.ehdr != 0;
                                    bVar4 = _segment.ehdr <= uVar2;
                                    *(arg2_00 + 0x33) = bVar5 && bVar4;
                                    if (bVar5 && bVar4) {
                                        iVar15 = arg2_00[0x38];
                                        uStack_70 = 0;
                                        *(arg2_00 + 0x151) = 0x40;
                                        if (uVar6 == 1) {
                                            uVar6 = 0;
                                            arg2_00[0x2d] = *(iVar15 + 0x10);
                                            uVar14 = *(iVar15 + 0x18);
                                            *(arg2_00 + 0x177) = 0;
                                            *(arg2_00 + 0x2e) = uVar14;
                                        }
                                        else {
                                            iVar10 = 0x270;
                                            if (0x10 < uVar6) {
                                                iVar10 = 0x268;
                                            }
                                            uStack_78 = *(arg1_02 + iVar10);
                                            *(arg2_00 + 0x34) = 0x10 < uVar6;
                                            puVar8 = dma_pool_alloc(uStack_78,0xa20,&uStack_70);
                                            if (puVar8 != NULL) {
                                                if ((*(arg2_00 + 0x1e) >> 2 & 1) == 0) {
                                                    uVar11 = *(arg2_00 + 0xca);
                                                }
                                                else {
                                                    uVar11 = 1;
                                                }
                                                iVar21 = uVar6 << 4;
                                                iVar7 = 0;
                                                *(arg2_00[0x38] + uVar11 * 0x20) = puVar8;
                                                iVar16 = iVar21;
                                                if (0xff < uVar6) {
                                                    iVar16 = 0x1000;
                                                }
                                                uVar17 = 0x30;
                                                if (0xff < uVar6) {
                                                    uVar17 = 0x20;
                                                }
                                                *(arg2_00 + 0x2e) = iVar16;
                                                arg2_00[0x35] = uStack_70;
                                                arg2_00[0x2d] = uStack_70;
                                                *(arg2_00 + 0x177) = uVar17;
code_r0x080058ac:
                                                puVar9 = puVar8;
                                                if (iVar7 != 0x100) goto code_r0x08005874;
                                                puVar9 = dma_pool_alloc(uStack_78,0xa20,&uStack_70);
                                                if (puVar9 != NULL) {
                                                    if ((*(arg2_00 + 0x1e) >> 2 & 1) == 0) {
                                                        uVar11 = *(arg2_00 + 0xca);
                                                    }
                                                    else {
                                                        uVar11 = 1;
                                                    }
                                                    iVar16 = *(arg2_00 + 0x34);
                                                    iVar7 = 1;
                                                    *(arg2_00 + 0x34) = iVar16 + 1;
                                                    *(arg2_00[0x38] + uVar11 * 0x20 + iVar16 * 8) = puVar9;
                                                    uVar18 = puVar8[0x1ff];
                                                    iVar16 = iVar21;
                                                    if (0xff < uVar6) {
                                                        iVar16 = 0x1000;
                                                    }
                                                    *puVar9 = puVar8[0x1fe];
                                                    puVar9[1] = uVar18;
                                                    *(puVar8 + 0x1ff) = iVar16;
                                                    uVar17 = 0x30;
                                                    if (0xff < uVar6) {
                                                        uVar17 = 0x20;
                                                    }
                                                    puVar8[0x1fe] = uStack_70;
                                                    *(puVar8 + 0xfff) = uVar17;
                                                    goto code_r0x08005874;
                                                }
                                                if (0 < *(arg2_00 + 0x34)) {
                                                    iVar15 = 0;
                                                    uVar18 = arg2_00[0x35];
                                                    do {
                                                        if ((*(arg2_00 + 0x1e) >> 2 & 1) == 0) {
                                                            uVar11 = *(arg2_00 + 0xca);
                                                        }
                                                        else {
                                                            uVar11 = 1;
                                                        }
                                                        iVar10 = *(arg2_00[0x38] + uVar11 * 0x20 + iVar15 * 8);
                                                        uVar20 = *(iVar10 + 0xff0);
                                                        dma_pool_free(*(arg1_02 + 0x9a),iVar10,uVar18);
                                                        iVar15 = iVar15 + 1;
                                                        uVar18 = uVar20;
                                                    } while (iVar15 < *(arg2_00 + 0x34));
                                                }
                                                uVar6 = 9;
                                                goto code_r0x080056d8;
                                            }
                                            uVar6 = 9;
                                            *(arg2_00 + 0x34) = 0xffffffff;
                                        }
                                        goto code_r0x080056d8;
                                    }
                                }
                                uVar6 = sym.nvme_pci_setup_prps(arg1_02,arg2_00,arg2_00 + 0x2a);
                                goto code_r0x080056d8;
                            }
                        }
                        uVar6 = 9;
                        goto code_r0x08005704;
                    }
code_r0x080055b4:
                    uVar6 = 9;
                    goto code_r0x08005710;
                }
            }
            else {
                uVar11 = arg2_00[0xe];
                puVar8 = arg2_00 + 0xd;
code_r0x080054b0:
                uVar19 = uVar11;
                uVar6 = uVar11 >> 0x20;
                if (uVar6 + uVar19 < 0x2001) {
                    uVar14 = 1;
                    if ((*(arg2_00 + 3) & 1) == 0) {
                        uVar14 = 2;
                    }
                    iVar15 = dma_map_page_attrs(*(arg1_02 + 0x98),*puVar8,uVar11 >> 0x20,uVar11 & 0xffffffff,uVar14
                                                ,0);
                    arg2_00[0x35] = iVar15;
                    if (iVar15 == -1) goto code_r0x080055b4;
                    uVar6 = 0x1000 - (uVar6 & 0xfff);
                    *(arg2_00 + 0x36) = uVar19;
                    arg2_00[0x2d] = iVar15;
                    if (uVar6 < uVar19) {
                        arg2_00[0x2e] = iVar15 + uVar6;
                    }
                }
                else {
                    if (((*(arg2_00[0x32] + 0x74) == 0) || (_segment.ehdr == 0)) || ((*(arg1_02 + 0x246) & 3) == 0))
                    goto code_r0x0800558c;
                    uVar14 = 1;
                    if ((*(arg2_00 + 3) & 1) == 0) {
                        uVar14 = 2;
                    }
                    iVar15 = dma_map_page_attrs(*(arg1_02 + 0x98),*puVar8,uVar11 >> 0x20,uVar11 & 0xffffffff,uVar14
                                                ,0);
                    arg2_00[0x35] = iVar15;
                    if (iVar15 == -1) goto code_r0x080055b4;
                    *(arg2_00 + 0x36) = uVar19;
                    arg2_00[0x2d] = iVar15;
                    *(arg2_00 + 0x2e) = uVar19;
                    *(arg2_00 + 0x151) = 0x40;
                    *(arg2_00 + 0x177) = 0;
                }
            }
code_r0x0800571c:
            blk_mq_start_request(arg2_00);
            sym.nvme_submit_cmd(arg1_00,arg2_00 + 0x2a,*(arg2 + 8));
            uVar6 = 0;
        }
    }
    goto code_r0x08005738;
code_r0x08005874:
    puVar8 = puVar9 + iVar7 * 2;
    iVar7 = iVar7 + 1;
    *puVar8 = *(iVar15 + 0x10);
    uVar14 = *(iVar15 + 0x18);
    *(puVar8 + 0xf) = 0;
    *(puVar8 + 1) = uVar14;
    iVar15 = sg_next(iVar15);
    uVar6 = uVar6 - 1;
    iVar21 = iVar21 + -0x10;
    puVar8 = puVar9;
    if (uVar6 < 1) goto code_r0x080058d8;
    goto code_r0x080058ac;
code_r0x080058d8:
    uVar6 = 0;
code_r0x080056d8:
    if ((uVar6 & 0xff) == 0) goto code_r0x0800571c;
    uVar14 = 1;
    if ((*(arg2_00 + 3) & 1) == 0) {
        uVar14 = 2;
    }
    dma_unmap_sg_attrs(*(arg1_02 + 0x98),arg2_00[0x38],*(arg2_00 + 0x1a4),uVar14,0);
code_r0x08005704:
    mempool_free(arg2_00[0x38],*(arg1_02 + 1000));
code_r0x08005710:
    nvme_cleanup_cmd(arg2_00);
code_r0x08005738:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_timeout;
    pcStack_a8 = sym.nvme_timeout;
    iVar15 = sp_el0;
    iStack_b8 = *(iVar15 + 0x5e0);
    arg1_01 = *(iVar10 + 400);
    iVar15 = *arg1_01;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    puStack_b0 = &stack0xffffffffffffffa0;
    piStack_a0 = arg1_02;
    puStack_98 = arg1_00;
    iStack_90 = unaff_x20;
    puStack_88 = arg2_00;
    uVar6 = sym.readl(*(iVar15 + 0x2a0) + 0x1c);
    DataSynchronizationBarrier(3,3,0);
    if (*(*(iVar15 + 0x260) + -8) != 1) goto code_r0x08005aec;
    if ((*(iVar15 + 0x334) & 0xfffffffe) == 2) {
code_r0x08005a1c:
        if ((arg1_01[0xf] >> 3 & 1) == 0) {
            sym.nvme_poll_irqdisable(arg1_01);
        }
        else {
            sym.nvme_poll(*(iVar10 + 0x10));
        }
        if (*(iVar10 + 0xe4) == 2) {
            _dev_warn(*(iVar15 + 0x790),"I/O %d QID %d timeout, completion polled\n",*(iVar10 + 0x20),
                      *(arg1_01 + 0x74));
            uVar6 = 0;
            goto code_r0x08005af0;
        }
        iVar7 = *(iVar15 + 0x334);
        if (iVar7 == 2) goto code_r0x08005aec;
        if (iVar7 != 4) {
            arg1_02 = iVar15 + 0x330;
            if (iVar7 != 3) {
                if ((*(arg1_01 + 0x74) != 0) && (*(iVar10 + 0x19c) == 0)) {
                    arg1_02 = iVar15 + 0x90c;
                    goto code_r0x08005bf4;
                }
                _dev_warn(*(iVar15 + 0x790),"I/O %d QID %d timeout, reset controller\n",*(iVar10 + 0x20));
                *(iVar10 + 0x142) = *(iVar10 + 0x142) | 1;
                sym.nvme_dev_disable(iVar15,0);
                goto code_r0x08005be0;
            }
            nvme_change_ctrl_state(arg1_02,4);
        }
        iVar7 = ___ratelimit(obj.nvme_timeout._rs,"nvme_timeout");
        if (iVar7 != 0) {
            _dev_warn(*(iVar15 + 0x790),"I/O %d QID %d timeout, disable controller\n",*(iVar10 + 0x20),
                      *(arg1_01 + 0x74));
        }
        *(iVar10 + 0x142) = *(iVar10 + 0x142) | 1;
        sym.nvme_dev_disable(iVar15,1);
        uVar6 = 0;
    }
    else {
        arg1_02 = uVar6;
        if (((uVar6 >> 1 & 1) == 0) && ((*(iVar15 + 0x310) != '\0' & uVar6 >> 4) == 0)) goto code_r0x08005a1c;
        auStack_fc[0] = 0;
        uVar6 = pci_read_config_word(*(iVar15 + 0x260) + -0xd0,6,auStack_fc);
        if (uVar6 == 0) {
            uVar6 = auStack_fc[0];
            pcVar13 = "controller is down; will reset: CSTS=0x%x, PCI_STATUS=0x%hx\n";
        }
        else {
            pcVar13 = "controller is down; will reset: CSTS=0x%x, PCI_STATUS read failed (%d)\n";
        }
        _dev_warn(*(iVar15 + 0x790),pcVar13,arg1_02,uVar6);
        sym.nvme_dev_disable(iVar15,0);
code_r0x08005be0:
        nvme_reset_ctrl(iVar15 + 0x330);
        uVar6 = 0;
    }
code_r0x08005af0:
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_b8) {
        __stack_chk_fail(uVar6);
code_r0x08005bf4:
        Hint_Prefetch(arg1_02,2,0,1);
        do {
            iVar7 = *arg1_02;
            cVar1 = '\x01';
            bVar4 = ExclusiveMonitorPass(arg1_02,0x10);
            if (bVar4) {
                *arg1_02 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar7 + -1 < 0) {
            Hint_Prefetch(arg1_02,2,0,1);
            do {
                cVar1 = '\x01';
                bVar4 = ExclusiveMonitorPass(arg1_02,0x10);
                if (bVar4) {
                    *arg1_02 = *arg1_02 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        else {
            *(iVar10 + 0x19c) = 1;
            uStack_f8 = CONCAT71(uStack_f8._1_7_,8);
            uStack_d0 = CONCAT62(CONCAT42(uStack_d0._4_4_,*(iVar10 + 0x20) | *(iVar10 + 0x140) << 0xc),
                                 *(arg1_01 + 0x74));
            _dev_warn(*(*arg1_01 + 0x790),"I/O %d QID %d timeout, aborting\n");
            uVar11 = nvme_alloc_request(*(iVar15 + 0x378),&uStack_f8,1);
            if (uVar11 < 0xfffffffffffff001) {
                *(uVar11 + 0x120) = 0;
                blk_execute_rq_nowait(0,uVar11,0,sym.abort_endio.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt);
            }
            else {
                Hint_Prefetch(arg1_02,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar4 = ExclusiveMonitorPass(arg1_02,0x10);
                    if (bVar4) {
                        *arg1_02 = *arg1_02 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
            }
        }
code_r0x08005aec:
        uVar6 = 1;
    }
    return uVar6;
}


// ===== sym.nvme_timeout @ 0x0800598c (size 868) =====

void sym.nvme_timeout(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    char *pcVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t *arg1_00;
    int *unaff_x22;
    ulong unaff_x30;
    uint16_t auStack_7c [2];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    arg1_00 = *(arg1 + 400);
    iVar9 = *arg1_00;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar4 = sym.readl(*(iVar9 + 0x2a0) + 0x1c);
    DataSynchronizationBarrier(3,3,0);
    if (*(*(iVar9 + 0x260) + -8) != 1) goto code_r0x08005aec;
    if ((*(iVar9 + 0x334) & 0xfffffffe) == 2) {
code_r0x08005a1c:
        if ((arg1_00[0xf] >> 3 & 1) == 0) {
            sym.nvme_poll_irqdisable(arg1_00);
        }
        else {
            sym.nvme_poll(*(arg1 + 0x10));
        }
        if (*(arg1 + 0xe4) == 2) {
            _dev_warn(*(iVar9 + 0x790),"I/O %d QID %d timeout, completion polled\n",*(arg1 + 0x20),*(arg1_00 + 0x74))
            ;
            uVar6 = 0;
            goto code_r0x08005af0;
        }
        iVar5 = *(iVar9 + 0x334);
        if (iVar5 == 2) goto code_r0x08005aec;
        if (iVar5 != 4) {
            unaff_x22 = iVar9 + 0x330;
            if (iVar5 != 3) {
                if ((*(arg1_00 + 0x74) != 0) && (*(arg1 + 0x19c) == 0)) {
                    unaff_x22 = iVar9 + 0x90c;
                    goto code_r0x08005bf4;
                }
                _dev_warn(*(iVar9 + 0x790),"I/O %d QID %d timeout, reset controller\n",*(arg1 + 0x20));
                *(arg1 + 0x142) = *(arg1 + 0x142) | 1;
                sym.nvme_dev_disable(iVar9,0);
                goto code_r0x08005be0;
            }
            nvme_change_ctrl_state(unaff_x22,4);
        }
        iVar5 = ___ratelimit(obj.nvme_timeout._rs,"nvme_timeout");
        if (iVar5 != 0) {
            _dev_warn(*(iVar9 + 0x790),"I/O %d QID %d timeout, disable controller\n",*(arg1 + 0x20),*(arg1_00 + 0x74)
                     );
        }
        *(arg1 + 0x142) = *(arg1 + 0x142) | 1;
        sym.nvme_dev_disable(iVar9,1);
        uVar6 = 0;
    }
    else {
        unaff_x22 = uVar4;
        if (((uVar4 >> 1 & 1) == 0) && ((*(iVar9 + 0x310) != '\0' & uVar4 >> 4) == 0)) goto code_r0x08005a1c;
        auStack_7c[0] = 0;
        uVar4 = pci_read_config_word(*(iVar9 + 0x260) + -0xd0,6,auStack_7c);
        if (uVar4 == 0) {
            uVar4 = auStack_7c[0];
            pcVar8 = "controller is down; will reset: CSTS=0x%x, PCI_STATUS=0x%hx\n";
        }
        else {
            pcVar8 = "controller is down; will reset: CSTS=0x%x, PCI_STATUS read failed (%d)\n";
        }
        _dev_warn(*(iVar9 + 0x790),pcVar8,unaff_x22,uVar4);
        sym.nvme_dev_disable(iVar9,0);
code_r0x08005be0:
        nvme_reset_ctrl(iVar9 + 0x330);
        uVar6 = 0;
    }
code_r0x08005af0:
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_38) {
        __stack_chk_fail(uVar6);
code_r0x08005bf4:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            iVar5 = *unaff_x22;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = iVar5 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar5 + -1 < 0) {
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = *unaff_x22 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        else {
            *(arg1 + 0x19c) = 1;
            uStack_78 = CONCAT71(uStack_78._1_7_,8);
            uStack_50 = CONCAT62(CONCAT42(uStack_50._4_4_,*(arg1 + 0x20) | *(arg1 + 0x140) << 0xc),*(arg1_00 + 0x74));
            _dev_warn(*(*arg1_00 + 0x790),"I/O %d QID %d timeout, aborting\n");
            uVar7 = nvme_alloc_request(*(iVar9 + 0x378),&uStack_78,1);
            if (uVar7 < 0xfffffffffffff001) {
                *(uVar7 + 0x120) = 0;
                blk_execute_rq_nowait(0,uVar7,0,sym.abort_endio.258e8aeb70e7631bbe0af7eba79cd262.cfi_jt);
            }
            else {
                Hint_Prefetch(unaff_x22,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                    if (bVar2) {
                        *unaff_x22 = *unaff_x22 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
            }
        }
code_r0x08005aec:
        uVar6 = 1;
    }
    return;
}


// ===== sym.nvme_admin_init_hctx @ 0x08005cf0 (size 64) =====

ulong sym.nvme_admin_init_hctx(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int in_w2;
    
    if (in_w2 != 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8005d28);
        (*pcVar1)();
    }
    if (**(arg2 + 0x210) == *(arg1 + 0x170)) {
        *(arg1 + 0xf8) = *arg2;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8005d30);
    (*pcVar1)();
}


// ===== sym.nvme_init_request @ 0x08005d34 (size 80) =====

ulong sym.nvme_init_request(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    iVar3 = arg3 + 1;
    piVar2 = arg1[0xc];
    if (piVar2 + 1 != arg1) {
        iVar3 = 0;
    }
    iVar3 = *piVar2 + iVar3 * 0xc0;
    if (iVar3 != 0) {
        *(arg2 + 400) = iVar3;
        *(arg2 + 0x148) = piVar2 + 0x66;
        *(arg2 + 0x130) = arg2 + 0x150;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8005d84);
    (*pcVar1)();
}


// ===== sym.nvme_submit_cmd @ 0x08005d84 (size 272) =====

void sym.nvme_submit_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(arg1 + 8);
    uVar5 = *(arg2 + 0x28);
    puVar1 = *(arg1 + 0x10) + (*(arg1 + 0x6e) << (*(arg1 + 0x77) & 0x1f));
    uVar4 = *(arg2 + 0x30);
    uVar6 = *(arg2 + 0x38);
    puVar1[4] = *(arg2 + 0x20);
    puVar1[5] = uVar5;
    puVar1[6] = uVar4;
    puVar1[7] = uVar6;
    uVar5 = *(arg2 + 0x18);
    uVar4 = *arg2;
    uVar6 = *(arg2 + 8);
    puVar1[2] = *(arg2 + 0x10);
    puVar1[3] = uVar5;
    *puVar1 = uVar4;
    puVar1[1] = uVar6;
    uVar7 = 0;
    if (*(arg1 + 0x68) != (*(arg1 + 0x6e) + 1 & 0xffff)) {
        uVar7 = *(arg1 + 0x6e) + 1;
    }
    *(arg1 + 0x6e) = uVar7;
    if ((arg3 & 1U) == 0) {
        uVar2 = uVar7 + 1 & 0xffff;
        uVar3 = 0;
        if (*(arg1 + 0x68) != uVar2) {
            uVar3 = uVar2;
        }
        if (uVar3 != *(arg1 + 0x70)) goto code_r0x08005e74;
    }
    puVar8 = *(arg1 + 0x80);
    if (puVar8 == NULL) {
code_r0x08005e60:
        sym.writel(uVar7 & 0xffff,*(arg1 + 0x60));
    }
    else {
        puVar9 = *(arg1 + 0x90);
        DataSynchronizationBarrier(3,2,0);
        uVar2 = *puVar8;
        *puVar8 = uVar7 & 0xffff;
        DataSynchronizationBarrier(3,3,0);
        if ((uVar7 + ~*puVar9 & 0xffff) < (uVar7 - uVar2 & 0xffff)) {
            uVar7 = *(arg1 + 0x6e);
            goto code_r0x08005e60;
        }
    }
    *(arg1 + 0x70) = *(arg1 + 0x6e);
code_r0x08005e74:
    _raw_spin_unlock(arg1 + 8);
    return;
}


// ===== sym.nvme_pci_setup_prps @ 0x08005e94 (size 752) =====

void sym.nvme_pci_setup_prps(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong uVar6;
    ulong *puVar7;
    ulong *puVar8;
    ulong *in_x18;
    int iVar9;
    uint64_t uVar10;
    ulong uVar11;
    int64_t iVar12;
    uint32_t uVar13;
    int64_t iVar14;
    int iVar15;
    ulong unaff_x30;
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar12 = *(arg2 + 0x1c0);
    iVar14 = 0x28;
    if ((*(arg2 + 0x1c) & 0x40000) != 0) {
        iVar14 = 0x70;
    }
    if ((*(arg2 + 0x1c) >> 0x12 & 1) == 0) {
        uVar10 = *(arg2 + 0xca);
    }
    else {
        uVar10 = 1;
    }
    uStack_70 = 0;
    uVar4 = 0x1000 - (*(iVar12 + 0x10) & 0xfff);
    uVar13 = *(arg2 + iVar14) - uVar4;
    if (uVar13 < 1) {
        *(arg2 + 0x1a8) = 0;
    }
    else {
        iVar15 = *(iVar12 + 0x18) - uVar4;
        if (iVar15 == 0) {
            iStack_80 = sg_next(iVar12);
            iVar14 = *(iStack_80 + 0x10);
            iVar15 = *(iStack_80 + 0x18);
        }
        else {
            iVar14 = *(iVar12 + 0x10) + uVar4;
            iStack_80 = iVar12;
        }
        if (uVar13 < 0x1001) {
            *(arg2 + 0x1a8) = iVar14;
        }
        else {
            iVar2 = 0x270;
            if (0x20fff < uVar13 + 0xfff) {
                iVar2 = 0x268;
            }
            uVar6 = *(arg1 + iVar2);
            *(arg2 + 0x1a0) = 0x20fff < uVar13 + 0xfff;
            puVar7 = dma_pool_alloc(uVar6,0xa20,&uStack_70);
            if (puVar7 == NULL) {
                uVar6 = 9;
                *(arg2 + 0x1a8) = iVar14;
                *(arg2 + 0x1a0) = 0xffffffff;
                goto code_r0x08005f60;
            }
            piVar1 = iVar12 + uVar10 * 0x20;
            iVar9 = 0;
            *piVar1 = puVar7;
            *(arg2 + 0x1a8) = uStack_70;
            while( true ) {
                puVar8 = puVar7;
                if (iVar9 == 0x200) {
                    puVar8 = dma_pool_alloc(uVar6,0xa20,&uStack_70);
                    if (puVar8 == NULL) {
                        if (0 < *(arg2 + 0x1a0)) {
                            iVar14 = 0;
                            uVar6 = *(arg2 + 0x1a8);
                            do {
                                if ((*(arg2 + 0x1e) >> 2 & 1) == 0) {
                                    uVar10 = *(arg2 + 0xca);
                                }
                                else {
                                    uVar10 = 1;
                                }
                                iVar12 = *(*(arg2 + 0x1c0) + uVar10 * 0x20 + iVar14 * 8);
                                uVar11 = *(iVar12 + 0xff8);
                                dma_pool_free(*(arg1 + 0x268),iVar12,uVar6);
                                iVar14 = iVar14 + 1;
                                uVar6 = uVar11;
                            } while (iVar14 < *(arg2 + 0x1a0));
                        }
                        uVar6 = 9;
                        goto code_r0x08005f60;
                    }
                    iVar3 = *(arg2 + 0x1a0);
                    iVar9 = 1;
                    *(arg2 + 0x1a0) = iVar3 + 1;
                    piVar1[iVar3] = puVar8;
                    *puVar8 = puVar7[0x1ff];
                    puVar7[0x1ff] = uStack_70;
                }
                uVar13 = uVar13 - 0x1000;
                puVar8[iVar9] = iVar14;
                if (uVar13 < 1) break;
                iVar9 = iVar9 + 1;
                iVar15 = iVar15 + -0x1000;
                iVar14 = iVar14 + 0x1000;
                puVar7 = puVar8;
                if (iVar15 < 1) {
                    if (iVar15 < 0) goto code_r0x08006110;
                    iStack_80 = sg_next(iStack_80);
                    iVar14 = *(iStack_80 + 0x10);
                    iVar15 = *(iStack_80 + 0x18);
                }
            }
        }
    }
    uVar6 = 0;
    *(arg3 + 0x18) = *(*(arg2 + 0x1c0) + 0x10);
    *(arg3 + 0x20) = *(arg2 + 0x1a8);
code_r0x08005f60:
    while( true ) {
        iVar14 = sp_el0;
        if (*(iVar14 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail(uVar6);
code_r0x08006110:
        uStack_78 = 0;
        uVar10 = __do_once_start(obj.nvme_probe.__key,&uStack_78);
        if ((uVar10 & 1) != 0) break;
        uVar6 = 10;
    }
    sym.nvme_print_sgl(*(arg2 + 0x1c0),*(arg2 + 0x1a4));
    __do_once_done(obj.nvme_probe.__key,obj.nvme_pci_setup_prps.___once_key,&uStack_78,obj.__this_module);
    iVar14 = 0x28;
    if ((*(arg2 + 0x1c) & 0x40000) != 0) {
        iVar14 = 0x70;
    }
    __warn_printk("Invalid SGL for payload:%d nents:%d\n",*(arg2 + iVar14),*(arg2 + 0x1a4));
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8006184);
    (*pcVar5)();
}


// ===== sym.nvme_print_sgl @ 0x08006188 (size 224) =====

int64_t sym.nvme_print_sgl(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar6;
    int64_t *arg1_00;
    int iVar7;
    ulong unaff_x30;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    if (0 < arg2) {
        uVar6 = 0;
        do {
            iStack_50 = *(arg1 + 8) + ((*arg1 & 0x3fffffffffffffc) + (___stack_chk_fail >> 0xc) * 0x40) * 0x40 +
                        0x8000000000;
            _printk(0x800067f,uVar6,&iStack_50,*(arg1 + 8),*(arg1 + 0xc),arg1 + 0x10,*(arg1 + 0x18));
            uVar6 = uVar6 + 1;
            arg1 = sg_next(arg1);
        } while (arg2 != uVar6);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return arg1;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_poll;
    arg1_00 = *(iVar2 + 0xf8);
    if ((*(arg1_00[9] + *(arg1_00 + 0x72) * 0x10 + 0xe) & 1) != *(arg1_00 + 0x76)) {
        uVar6 = 0;
        goto code_r0x080063b4;
    }
    _raw_spin_lock(arg1_00 + 8);
    if ((*(arg1_00[9] + *(arg1_00 + 0x72) * 0x10 + 0xe) & 1) == *(arg1_00 + 0x76)) {
        iVar7 = 0;
        do {
            DataMemoryBarrier(0,1);
            sym.nvme_handle_cqe(arg1_00,*(arg1_00 + 0x72));
            iVar3 = *(arg1_00 + 0x72) + 1;
            if (iVar3 == arg1_00[0xd]) {
                iVar3 = 0;
                *(arg1_00 + 0x72) = 0;
                *(arg1_00 + 0x76) = *(arg1_00 + 0x76) ^ 1;
            }
            else {
                *(arg1_00 + 0x72) = iVar3;
            }
            iVar7 = iVar7 + -1;
        } while ((*(arg1_00[9] + iVar3 * 0x10 + 0xe) & 1) == *(arg1_00 + 0x76));
        if (iVar7 == 0) goto code_r0x080063a8;
        puVar4 = arg1_00[0x11];
        uVar1 = *(arg1_00 + 0x72);
        if (puVar4 == NULL) {
code_r0x0800638c:
            sym.writel(uVar1,arg1_00[0xc] + *(*arg1_00 + 0x298) * 4);
        }
        else {
            puVar5 = arg1_00[0x13];
            DataSynchronizationBarrier(3,2,0);
            uVar6 = *puVar4;
            *puVar4 = uVar1;
            DataSynchronizationBarrier(3,3,0);
            if ((uVar1 + ~*puVar5 & 0xffff) < (uVar1 - uVar6 & 0xffff)) goto code_r0x0800638c;
        }
        uVar6 = 1;
    }
    else {
code_r0x080063a8:
        uVar6 = 0;
    }
    _raw_spin_unlock(arg1_00 + 8);
code_r0x080063b4:
    return uVar6;
}


// ===== sym.nvme_poll @ 0x08006268 (size 360) =====

uint sym.nvme_poll(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *arg1_00;
    int iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xf8);
    if ((*(arg1_00[9] + *(arg1_00 + 0x72) * 0x10 + 0xe) & 1) != *(arg1_00 + 0x76)) {
        return 0;
    }
    _raw_spin_lock(arg1_00 + 8);
    if ((*(arg1_00[9] + *(arg1_00 + 0x72) * 0x10 + 0xe) & 1) == *(arg1_00 + 0x76)) {
        iVar7 = 0;
        do {
            DataMemoryBarrier(0,1);
            sym.nvme_handle_cqe(arg1_00,*(arg1_00 + 0x72));
            iVar3 = *(arg1_00 + 0x72) + 1;
            if (iVar3 == arg1_00[0xd]) {
                iVar3 = 0;
                *(arg1_00 + 0x72) = 0;
                *(arg1_00 + 0x76) = *(arg1_00 + 0x76) ^ 1;
            }
            else {
                *(arg1_00 + 0x72) = iVar3;
            }
            iVar7 = iVar7 + -1;
        } while ((*(arg1_00[9] + iVar3 * 0x10 + 0xe) & 1) == *(arg1_00 + 0x76));
        if (iVar7 != 0) {
            puVar4 = arg1_00[0x11];
            uVar1 = *(arg1_00 + 0x72);
            if (puVar4 == NULL) {
code_r0x0800638c:
                sym.writel(uVar1,arg1_00[0xc] + *(*arg1_00 + 0x298) * 4);
            }
            else {
                puVar5 = arg1_00[0x13];
                DataSynchronizationBarrier(3,2,0);
                uVar2 = *puVar4;
                *puVar4 = uVar1;
                DataSynchronizationBarrier(3,3,0);
                if ((uVar1 + ~*puVar5 & 0xffff) < (uVar1 - uVar2 & 0xffff)) goto code_r0x0800638c;
            }
            uVar6 = 1;
            goto code_r0x080063ac;
        }
    }
    uVar6 = 0;
code_r0x080063ac:
    _raw_spin_unlock(arg1_00 + 8);
    return uVar6;
}


// ===== sym.abort_endio @ 0x080063dc (size 140) =====

void sym.abort_endio(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(arg1 + 400);
    _dev_warn(*(*piVar4 + 0x790),"Abort status: 0x%x",*(arg1 + 0x144));
    piVar1 = *piVar4 + 0x90c;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    blk_mq_free_request(arg1);
    return;
}


// ===== sym.nvme_free_host_mem @ 0x08006468 (size 160) =====

void sym.nvme_free_host_mem(int64_t arg1)

{
    ulong *puVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xfd0) != 0) {
        uVar2 = 0;
        do {
            puVar1 = *(arg1 + 0xfe0) + uVar2 * 0x10;
            dma_free_attrs(*(arg1 + 0x260),*(puVar1 + 1) << 0xc,*(*(arg1 + 0xfe8) + uVar2 * 8),*puVar1,0x110);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg1 + 0xfd0));
    }
    kfree(*(arg1 + 0xfe8));
    *(arg1 + 0xfe8) = 0;
    dma_free_attrs(*(arg1 + 0x260),*(arg1 + 0xfd0) << 4,*(arg1 + 0xfe0),*(arg1 + 0xfd8),0);
    *(arg1 + 0xfe0) = 0;
    *(arg1 + 0xfd0) = 0;
    return;
}


// ===== sym.nvme_calc_irq_sets @ 0x08006508 (size 128) =====

void sym.nvme_calc_irq_sets(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint uVar6;
    
    uVar4 = arg2;
    iVar5 = *(arg1 + 0x28);
    if (uVar4 == 0) {
        uVar4 = 1;
code_r0x0800654c:
        *(iVar5 + 0x280) = uVar4;
        *(arg1 + 0xc) = uVar4;
        *(iVar5 + 0x284) = 0;
        *(arg1 + 0x10) = 0;
    }
    else {
        iVar2 = uVar4 - 1;
        if ((iVar2 == 0) || (uVar1 = *(iVar5 + 0xff4), uVar1 == 0)) goto code_r0x0800654c;
        iVar3 = uVar4 - uVar1;
        if (uVar4 < uVar1 || iVar3 == 0) {
            *(iVar5 + 0x280) = iVar2;
            *(arg1 + 0xc) = iVar2;
            uVar6 = 2;
            *(iVar5 + 0x284) = 1;
            *(arg1 + 0x10) = 1;
            goto code_r0x08006560;
        }
        *(iVar5 + 0x280) = uVar1;
        *(arg1 + 0xc) = uVar1;
        *(iVar5 + 0x284) = iVar3;
        *(arg1 + 0x10) = iVar3;
        if (iVar3 != 0) {
            uVar6 = 2;
            goto code_r0x08006560;
        }
    }
    uVar6 = 1;
code_r0x08006560:
    *(arg1 + 8) = uVar6;
    return;
}


// ===== sym.nvme_create_queue @ 0x08006588 (size 908) =====

int sym.nvme_create_queue(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ushort uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ushort uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ushort uVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    uint32_t uVar11;
    ulong unaff_x30;
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
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    puVar10 = arg1 + 0x78;
    iVar9 = *arg1;
    Hint_Prefetch(puVar10,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar10,0x10);
        if (bVar4) {
            *puVar10 = *puVar10 & 0xfffffffffffffffb;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if ((arg3 & 1U) != 0) goto code_r0x080068b8;
    uVar11 = 0;
    if (*(iVar9 + 0x28c) != 1) {
        uVar11 = arg2;
    }
    do {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uVar8 = 5;
        uStack_a8 = 5;
        uStack_90 = *(arg1 + 0x58);
        uVar2 = arg2;
        uVar6 = 3;
        if ((*(arg1 + 0x78) & 8) != 0) {
            uVar6 = 1;
        }
        uStack_80 = CONCAT44(CONCAT22(uVar11,uVar6),CONCAT22(*(arg1 + 0x68) + -1,uVar2));
        iVar5 = nvme_submit_sync_cmd(*(iVar9 + 0x378),&uStack_a8,0,0);
        if (iVar5 == 0) {
            uStack_90 = *(arg1 + 0x50);
            uStack_a0 = 0;
            uStack_a8 = 1;
            uStack_98 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            if ((*(iVar9 + 0x940) & 0x80) == 0) {
                uVar8 = 1;
            }
            uStack_80 = CONCAT26(uVar2,CONCAT24(uVar8,CONCAT22(*(arg1 + 0x68) + -1,uVar2)));
            iVar5 = nvme_submit_sync_cmd(*(iVar9 + 0x378),&uStack_a8,0,0);
            if (-1 < iVar5) {
                if (iVar5 == 0) {
                    iVar1 = iVar9 + 0x2e0;
                    *(arg1 + 0x6c) = uVar11;
                    iVar5 = mutex_trylock(iVar1);
                    if (iVar5 == 0) {
                        iVar5 = -0x13;
                    }
                    else if (*(iVar9 + 0x334) == 3) {
                        iVar7 = *arg1;
                        *(arg1 + 0x6e) = 0;
                        uVar11 = (arg2 & 0xffff) * 2;
                        *(arg1 + 0x72) = 0;
                        *(arg1 + 0x76) = 1;
                        *(arg1 + 0x60) = *(iVar7 + 600) + *(iVar7 + 0x298) * uVar11 * 4;
                        memset(*(arg1 + 0x48),0,*(arg1 + 0x68) << 4);
                        if (((arg2 & 0xffffU) != 0) && (*(iVar7 + 0xfa8) != 0)) {
                            *(arg1 + 0x80) = *(iVar7 + 0xfa8) + *(iVar7 + 0x298) * uVar11 * 4;
                            *(arg1 + 0x88) = *(iVar7 + 0xfa8) + *(iVar7 + 0x298) * (uVar11 | 1) * 4;
                            *(arg1 + 0x90) = *(iVar7 + 0xfb8) + *(iVar7 + 0x298) * uVar11 * 4;
                            *(arg1 + 0x98) = *(iVar7 + 0xfb8) + *(iVar7 + 0x298) * (uVar11 | 1) * 4;
                        }
                        *(iVar7 + 0x278) = *(iVar7 + 0x278) + 1;
                        DataSynchronizationBarrier(3,2,0);
                        if ((arg3 & 1U) == 0) {
                            iVar5 = sym.queue_request_irq(arg1);
                            if (iVar5 < 0) {
                                *(iVar9 + 0x278) = *(iVar9 + 0x278) + -1;
                                mutex_unlock(iVar1);
                                uStack_78 = 0;
                                uStack_70 = 0;
                                uStack_88 = 0;
                                uStack_98 = 0;
                                uStack_90 = 0;
                                uStack_a8 = 0;
                                uStack_a0 = 0;
                                uStack_80 = arg2 & 0xffff;
                                nvme_submit_sync_cmd(*(iVar9 + 0x378),&uStack_a8,0,0);
                                goto code_r0x0800671c;
                            }
                        }
                        else {
                            iVar5 = 0;
                        }
                        Hint_Prefetch(puVar10,2,0,1);
                        do {
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(puVar10,0x10);
                            if (bVar4) {
                                *puVar10 = *puVar10 | 1;
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        mutex_unlock(iVar1);
                    }
                    else {
                        mutex_unlock(iVar1);
                        iVar5 = -0x13;
                    }
                }
                else {
code_r0x0800671c:
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a0 = 0;
                    uStack_a8 = 4;
                    uStack_80 = arg2 & 0xffff;
                    nvme_submit_sync_cmd(*(iVar9 + 0x378),&uStack_a8,0,0);
                }
            }
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_68) {
            return iVar5;
        }
        __stack_chk_fail();
code_r0x080068b8:
        Hint_Prefetch(puVar10,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar10,0x10);
            if (bVar4) {
                *puVar10 = *puVar10 | 8;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar11 = 0;
    } while( true );
}


// ===== sym.nvme_commit_rqs @ 0x08006914 (size 156) =====

void sym.nvme_commit_rqs(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xf8);
    _raw_spin_lock(iVar5 + 8);
    uVar1 = *(iVar5 + 0x6e);
    if (uVar1 == *(iVar5 + 0x70)) goto code_r0x08006994;
    puVar3 = *(iVar5 + 0x80);
    if (puVar3 == NULL) {
code_r0x08006984:
        sym.writel(uVar1,*(iVar5 + 0x60));
    }
    else {
        puVar4 = *(iVar5 + 0x90);
        DataSynchronizationBarrier(3,2,0);
        uVar2 = *puVar3;
        *puVar3 = uVar1;
        DataSynchronizationBarrier(3,3,0);
        if ((uVar1 + ~*puVar4 & 0xffff) < (uVar1 - uVar2 & 0xffff)) {
            uVar1 = *(iVar5 + 0x6e);
            goto code_r0x08006984;
        }
    }
    *(iVar5 + 0x70) = *(iVar5 + 0x6e);
code_r0x08006994:
    _raw_spin_unlock(iVar5 + 8);
    return;
}


// ===== sym.nvme_init_hctx @ 0x080069b0 (size 64) =====

ulong sym.nvme_init_hctx(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    
    if (*(*(arg2 + 0xe8) + (arg3 & 0xffffffffU) * 8) == *(arg1 + 0x170)) {
        *(arg1 + 0xf8) = *arg2 + (arg3 + 1) * 0xc0;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80069f0);
    (*pcVar1)();
}


// ===== sym.nvme_pci_map_queues @ 0x080069f4 (size 264) =====

ulong sym.nvme_pci_map_queues(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x60);
    uVar1 = *(iVar5 + 0x28c);
    if (*(arg1 + 0x30) != 0) {
        iVar6 = *(iVar5 + 0x280);
        *(arg1 + 8) = iVar6;
        if (iVar6 == 0) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8006afc);
            (*pcVar3)();
        }
        *(arg1 + 0xc) = 0;
        if (uVar1 < 2) {
            blk_mq_map_queues(arg1);
        }
        else {
            blk_mq_pci_map_queues(arg1,*(iVar5 + 0x260) + -0xd0,1 < uVar1);
        }
        uVar4 = *(arg1 + 0x30);
        if (1 < uVar4) {
            iVar2 = *(iVar5 + 0x284);
            iVar6 = *(arg1 + 8);
            *(arg1 + 0x18) = iVar2;
            if (iVar2 != 0) {
                *(arg1 + 0x1c) = iVar6;
                if (iVar6 + (1 < uVar1) == 0) {
                    blk_mq_map_queues(arg1 + 0x10);
                }
                else {
                    blk_mq_pci_map_queues(arg1 + 0x10,*(iVar5 + 0x260) + -0xd0);
                }
                iVar6 = *(arg1 + 0x18) + iVar6;
                uVar4 = *(arg1 + 0x30);
            }
            if (2 < uVar4) {
                iVar2 = *(iVar5 + 0x288);
                *(arg1 + 0x28) = iVar2;
                if (iVar2 != 0) {
                    *(arg1 + 0x2c) = iVar6;
                    blk_mq_map_queues(arg1 + 0x20);
                    uVar4 = *(arg1 + 0x30);
                }
                if (3 < uVar4) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8006af8);
                    (*pcVar3)();
                }
            }
        }
    }
    return 0;
}


// ===== sym.nvme_free_queue @ 0x08006afc (size 192) =====

void sym.nvme_free_queue(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    dma_free_attrs(*(*arg1 + 0x260),*(arg1 + 0x68) << 4,*(arg1 + 0x48),*(arg1 + 0x58),0);
    if (*(arg1 + 0x10) != 0) {
        puVar1 = arg1 + 0x78;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 & 0xfffffffffffffffd;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar4 >> 1 & 1) == 0) {
            dma_free_attrs(*(*arg1 + 0x260),*(arg1 + 0x68) << (*(arg1 + 0x77) & 0x1f),*(arg1 + 0x10),*(arg1 + 0x50),
                           0);
        }
    }
    return;
}


// ===== sym.nvme_pci_attrs_are_visible @ 0x08006bbc (size 112) =====

ushort sym.nvme_pci_attrs_are_visible(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    
    pcVar1 = arg2;
    if (((((pcVar1 != obj.dev_attr_cmbsz) && (pcVar1 != obj.dev_attr_cmb)) && (pcVar1 != obj.dev_attr_cmbloc)) ||
        (*(*(arg1 + 0x98) + -0xc) != 0)) && ((pcVar1 != obj.dev_attr_hmb || (*(*(arg1 + 0x98) + 0xc24) != 0)))) {
        return *(pcVar1 + 8);
    }
    return 0;
}


// ===== sym.cmb_show @ 0x08006c2c (size 64) =====

int64_t sym.cmb_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,"cmbloc : x%08x\ncmbsz  : x%08x\n",*(*(arg1 + 0x98) + -8),*(*(arg1 + 0x98) + -0xc));
    return iVar1;
}


// ===== sym.cmbloc_show @ 0x08006c6c (size 64) =====

int64_t sym.cmbloc_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8000755,*(*(arg1 + 0x98) + -8));
    return iVar1;
}


// ===== sym.cmbsz_show @ 0x08006cac (size 64) =====

int64_t sym.cmbsz_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x8000755,*(*(arg1 + 0x98) + -0xc));
    return iVar1;
}


// ===== sym.hmb_show @ 0x08006cec (size 64) =====

int64_t sym.hmb_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80008dd,*(*(arg1 + 0x98) + 0xc6c));
    return iVar1;
}


// ===== sym.hmb_store @ 0x08006d2c (size 308) =====

int64_t sym.hmb_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    char acStack_7c [4];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + 0x98);
    acStack_7c[0] = '\0';
    iVar1 = kstrtobool(arg2,acStack_7c);
    if (iVar1 < 0) {
        iVar4 = -0x16;
    }
    else {
        iVar4 = arg3;
        if (acStack_7c[0] != *(iVar5 + 0xc6c)) {
            if (acStack_7c[0] == '\0') {
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 9;
                arg2 = 0;
                uStack_58 = 0;
                uStack_50 = 0xd;
                uStack_48 = *(iVar5 + 0xc98) >> 0xc;
                uStack_44 = *(iVar5 + 0xca8);
                uStack_40 = *(iVar5 + 0xca8) >> 0x20;
                uStack_3c = *(iVar5 + 0xca0);
                uVar2 = nvme_submit_sync_cmd(*(iVar5 + 0x48),&uStack_78,0,0);
                if (uVar2 == 0) {
                    *(iVar5 + 0xc6c) = 0;
                    sym.nvme_free_host_mem(iVar5 + -0x330);
                    goto code_r0x08006e08;
                }
                arg2 = uVar2;
                _dev_warn(*(iVar5 + 0x460),"failed to set host mem (err %d, flags %#x).\n",arg2,0);
            }
            else {
                uVar2 = sym.nvme_setup_host_mem(iVar5 + -0x330);
            }
            iVar4 = uVar2;
            if (-1 < uVar2) {
                iVar4 = arg3;
            }
        }
    }
code_r0x08006e08:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        *extraout_x18 = sym.nvme_pci_reg_read32;
        uVar3 = sym.readl(*(auVar6._0_8_ + -0x90) + (auVar6._8_8_ & 0xffffffff));
        *arg2 = uVar3;
        return 0;
    }
    return iVar4;
}


// ===== sym.nvme_pci_reg_read32 @ 0x08006e60 (size 68) =====

ulong sym.nvme_pci_reg_read32(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl(*(arg1 + -0x90) + (arg2 & 0xffffffffU));
    *arg3 = uVar1;
    return 0;
}


// ===== sym.nvme_pci_reg_write32 @ 0x08006ea4 (size 52) =====

ulong sym.nvme_pci_reg_write32(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(arg3 & 0xffffffff,*(arg1 + -0x90) + (arg2 & 0xffffffffU));
    return 0;
}


// ===== sym.nvme_pci_reg_read64 @ 0x08006ed8 (size 96) =====

ulong sym.nvme_pci_reg_read64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + -0x90) + (arg2 & 0xffffffffU);
    uVar1 = sym.readl(iVar2);
    iVar2 = sym.readl(iVar2 + 4);
    *arg3 = uVar1 & 0xffffffff | iVar2 << 0x20;
    return 0;
}


// ===== sym.nvme_pci_free_ctrl @ 0x08006f38 (size 196) =====

void sym.nvme_pci_free_ctrl(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xcc0) * *(arg1 + -0x98) * 8;
    if (*(arg1 + 0xc78) != 0) {
        dma_free_attrs(*(arg1 + -0xd0),iVar1,*(arg1 + 0xc78),*(arg1 + 0xc80),0);
        *(arg1 + 0xc78) = 0;
    }
    if (*(arg1 + 0xc88) != 0) {
        dma_free_attrs(*(arg1 + -0xd0),iVar1,*(arg1 + 0xc88),*(arg1 + 0xc90),0);
        *(arg1 + 0xc88) = 0;
    }
    if (*(arg1 + -0x248) != 0) {
        blk_mq_free_tag_set(arg1 + -0x328);
    }
    *(arg1 + 0x70) = 0;
    if (*(arg1 + 0x48) != 0) {
        blk_put_queue();
    }
    mempool_destroy(*(arg1 + 0xc70));
    put_device(*(arg1 + -0xd0));
    kfree(*(arg1 + -0x330));
    kfree(arg1 + -0x330);
    return;
}


// ===== sym.nvme_pci_submit_async_event @ 0x08006ffc (size 128) =====

void sym.nvme_pci_submit_async_event(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    iVar1 = 1;
    uStack_50 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0x1f000c;
    sym.nvme_submit_cmd(*(arg1 + -0x330),&uStack_58,1);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_pci_get_address;
    piVar3 = *(auVar4._0_8_ + -0xd0);
    iVar2 = piVar3[0xe];
    if (iVar2 == 0) {
        iVar2 = *piVar3;
    }
    snprintf(auVar4._8_8_,iVar1,0x8000beb,iVar2);
    return;
}


// ===== sym.nvme_pci_get_address @ 0x0800707c (size 68) =====

void sym.nvme_pci_get_address(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = (*(arg1 + -0xd0))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(arg1 + -0xd0);
    }
    snprintf(arg2,arg3,0x8000beb,iVar1);
    return;
}


// ===== sym.nvme_error_detected @ 0x080070c0 (size 136) =====

ulong sym.nvme_error_detected(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 1) {
        uVar1 = 2;
    }
    else {
        arg1_00 = *(arg1 + 0x168);
        if (arg2 == 3) {
            _dev_warn(*(arg1_00 + 0x790),"failure state error detected, request disconnect\n");
            uVar1 = 4;
        }
        else {
            if (arg2 == 2) {
                _dev_warn(*(arg1_00 + 0x790),"frozen state error detected, reset controller\n");
                sym.nvme_dev_disable(arg1_00,0);
            }
            uVar1 = 3;
        }
    }
    return uVar1;
}


// ===== sym.nvme_slot_reset @ 0x08007148 (size 88) =====

ulong sym.nvme_slot_reset(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x168);
    _dev_info(*(iVar1 + 0x790),"restart after slot reset\n");
    pci_restore_state(arg1);
    nvme_reset_ctrl(iVar1 + 0x330);
    return 5;
}


// ===== sym.nvme_reset_prepare @ 0x080071a0 (size 80) =====

void sym.nvme_reset_prepare(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x168);
    iVar1 = arg1_00 + 0x330;
    uVar2 = nvme_wait_reset(iVar1);
    if ((uVar2 & 1) != 0) {
        sym.nvme_dev_disable(arg1_00,0);
    }
    nvme_sync_queues(iVar1);
    return;
}


// ===== sym.nvme_reset_done @ 0x080071f0 (size 64) =====

void sym.nvme_reset_done(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x168);
    iVar1 = nvme_try_sched_reset(iVar2 + 0x330);
    if (iVar1 == 0) {
        flush_work(iVar2 + 0x820);
    }
    return;
}


// ===== sym.nvme_error_resume @ 0x08007230 (size 44) =====

void sym.nvme_error_resume(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    flush_work(*(arg1 + 0x168) + 0x820);
    return;
}


// ===== sym.nvme_suspend @ 0x0800725c (size 508) =====

uint64_t sym.nvme_suspend(int64_t arg1)

{
    int64_t iVar1;
    code cVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong in_x6;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    cVar2 = pm_suspend_global_flags;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    arg1_00 = *(arg1 + 0x98);
    iVar1 = arg1_00 + 0x330;
    *(arg1_00 + 0xf98) = 0xffffffff;
    if (((cVar2 & 1) == 0) && (*(arg1_00 + 0x91e) != '\0')) {
        arg1 = arg1 + -0xd0;
        uVar5 = pcie_aspm_enabled(arg1);
        if (((uVar5 & 1) != 0) && ((*(arg1_00 + 0x941) >> 2 & 1) == 0)) {
            nvme_start_freeze(iVar1);
            nvme_wait_freeze(iVar1);
            nvme_sync_queues(iVar1);
            if (*(arg1_00 + 0x334) == 1) {
                if (*(arg1_00 + 0xf9c) != '\0') {
                    uStack_70 = 0;
                    uStack_78 = 9;
                    uStack_58 = 0;
                    uStack_50 = 0xd;
                    uStack_3c = *(arg1_00 + 0xfd0);
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_48 = *(arg1_00 + 0xfc8) >> 0xc;
                    uStack_44 = *(arg1_00 + 0xfd8);
                    uStack_40 = *(arg1_00 + 0xfd8) >> 0x20;
                    uVar3 = nvme_submit_sync_cmd(*(arg1_00 + 0x378),&uStack_78,0,0);
                    if (uVar3 == 0) {
                        *(arg1_00 + 0xf9c) = 0;
                    }
                    else {
                        _dev_warn(*(arg1_00 + 0x790),"failed to set host mem (err %d, flags %#x).\n",uVar3,0);
                        if (uVar3 < 0) goto code_r0x08007424;
                    }
                }
                uVar3 = nvme_get_features(iVar1,2,0,0,0,arg1_00 + 0xf98);
                if (-1 < uVar3) {
                    pci_save_state(arg1);
                    uVar3 = nvme_set_features(iVar1,2,*(arg1_00 + 0x91e),0,0,0);
                    if (0 < uVar3) {
                        pci_load_saved_state(arg1,0);
                        uVar5 = nvme_wait_reset(iVar1);
                        if ((uVar5 & 1) == 0) {
                            uVar3 = 0xfffffff0;
                        }
                        else {
                            sym.nvme_dev_disable(arg1_00,1);
                            uVar3 = 0;
                        }
                        *(arg1_00 + 0x91e) = 0;
                    }
                }
            }
            else {
                uVar3 = 0xfffffff0;
            }
code_r0x08007424:
            nvme_unfreeze(iVar1);
            goto code_r0x080073d8;
        }
    }
    uVar5 = nvme_wait_reset(iVar1);
    if ((uVar5 & 1) == 0) {
        uVar3 = 0xfffffff0;
    }
    else {
        sym.nvme_dev_disable(arg1_00,1);
        uVar3 = 0;
    }
code_r0x080073d8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.nvme_resume;
    iVar6 = *(iVar6 + 0x98);
    if ((*(iVar6 + 0xf98) != -1) &&
       (iVar4 = nvme_set_features(iVar6 + 0x330,2,*(iVar6 + 0xf98),0,0,0,in_x6,in_x7,&stack0xffffffffffffffd0,
                                  sym.nvme_resume,arg1_00,iVar1), iVar4 == 0)) {
        if (*(iVar6 + 0xf54) == 0) {
            return 0;
        }
        uVar5 = sym.nvme_setup_host_mem(iVar6);
        if (uVar5 == 0) {
            return uVar5;
        }
    }
    uVar5 = nvme_try_sched_reset(iVar6 + 0x330);
    return uVar5;
}


// ===== sym.nvme_resume @ 0x08007458 (size 128) =====

ulong sym.nvme_resume(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    if ((*(arg1_00 + 0xf98) != -1) &&
       (iVar1 = nvme_set_features(arg1_00 + 0x330,2,*(arg1_00 + 0xf98),0,0,0), iVar1 == 0)) {
        if (*(arg1_00 + 0xf54) == 0) {
            return 0;
        }
        uVar2 = sym.nvme_setup_host_mem(arg1_00);
        if (uVar2 == 0) {
            return uVar2;
        }
    }
    uVar2 = nvme_try_sched_reset(arg1_00 + 0x330);
    return uVar2;
}


// ===== sym.nvme_simple_suspend @ 0x080074d8 (size 80) =====

ulong sym.nvme_simple_suspend(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    uVar1 = nvme_wait_reset(arg1_00 + 0x330);
    if ((uVar1 & 1) == 0) {
        uVar2 = 0xfffffff0;
    }
    else {
        sym.nvme_dev_disable(arg1_00,1);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.nvme_simple_resume @ 0x08007528 (size 44) =====

void sym.nvme_simple_resume(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    nvme_try_sched_reset(*(arg1 + 0x98) + 0x330);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08007554 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08007598

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
    //switch table (4 cases) at 0x8000c0a
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80075ac);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080075b4 (size 60) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pci_register_driver(obj.nvme_driver,obj.__this_module,"nvme");
    return;
}


// ===== sym.cleanup_module @ 0x080075f0 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pci_unregister_driver(obj.nvme_driver);
    flush_workqueue(___sw_hweight64);
    return;
}

