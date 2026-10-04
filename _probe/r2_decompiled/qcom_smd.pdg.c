// decompiled from qcom_smd by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 820) =====

//WARNING: Switch with 1 destination removed at 0x0800343c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x23f71fad51366637) {
        if (arg1 < -0x3f2fa47179abe5aa) {
            if (-0x550b9e52359ac615 < arg1) {
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.qcom_channel_state_worker.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
                }
                else {
                    if (arg1 != -0x4e983d520e0f8ff8) goto code_r0x080033fc;
                    pcVar2 = sym.qcom_smd_send.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
                }
code_r0x08001318:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080033fc;
            }
            if (arg1 == -0x7ada80679d4df1b6) {
                pcVar2 = sym.qcom_smd_register_edge.cfi_jt;
            }
            else {
                if (arg1 != -0x66d421a09845f9f8) goto code_r0x080033fc;
                pcVar2 = sym.rpmsg_name_show.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
            }
        }
        else {
            if (-0x3557318fb8d07b72 < arg1) {
                if (arg1 == -0x3557318fb8d07b71) {
                    pcVar2 = sym.qcom_smd_probe.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
                }
                else {
                    if (arg1 != -0x2d1ef4d8549a89e5) goto code_r0x080033fc;
                    pcVar2 = sym.qcom_smd_remove_edge.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
                }
                goto code_r0x08001318;
            }
            if (arg1 == -0x3f2fa47179abe5aa) {
                pcVar2 = sym.qcom_smd_destroy_ept.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
            }
            else {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x080033fc;
                pcVar2 = sym.qcom_smd_edge_intr.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x2145d9bd5768a082) {
        if (arg1 < -0x2ac316d8df914f8) {
            if (arg1 == -0x23f71fad51366637) {
                pcVar2 = sym.qcom_smd_poll.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
            }
            else {
                if (arg1 != -0x19ad56ffbc919b67) goto code_r0x080033fc;
                pcVar2 = sym.qcom_smd_announce_create.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
            }
        }
        else if (arg1 == -0x2ac316d8df914f8) {
            pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080033fc;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (0x5b83a3fd302a5420 < arg1) {
            if (arg1 == 0x5b83a3fd302a5421) {
                pcVar2 = sym.qcom_smd_edge_release.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
            }
            else {
                if (arg1 != 0x7125349e70bbf7bf) {
                    if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080033fc;
                    pcVar2 = sym.cleanup_module.cfi_jt;
                    goto code_r0x08001300;
                }
                pcVar2 = sym.qcom_smd_sendto.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
            }
            goto code_r0x08001318;
        }
        if (arg1 == 0x2145d9bd5768a082) {
            pcVar2 = sym.qcom_smd_create_ept.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
        }
        else {
            if (arg1 != 0x581a86ebb84611fa) goto code_r0x080033fc;
            pcVar2 = sym.qcom_smd_unregister_edge.cfi_jt;
        }
    }
code_r0x08001300:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080033fc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003450);
    (*pcVar1)();
}


// ===== sym.qcom_smd_create_ept.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x08001340 (size 8) =====

int64_t * sym.qcom_smd_create_ept.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t param_3,ulong param_4)

{
    ulong *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    int extraout_w9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong *arg1;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    iVar13 = *(param_1 + 0x3e0);
    piVar12 = iVar13 + 0x410;
    uVar6 = _raw_spin_lock_irqsave(piVar12);
    piVar11 = iVar13 + 0x400;
    for (piVar10 = *(iVar13 + 0x400); piVar11 != piVar10; piVar10 = *piVar10) {
        iVar5 = strcmp(piVar10[-0x11],param_4);
        if (iVar5 == 0) {
            arg1 = piVar10 + -0x14;
            _raw_spin_unlock_irqrestore(piVar12,uVar6);
            if (arg1 != NULL) goto code_r0x08002348;
            goto code_r0x08002274;
        }
    }
    _raw_spin_unlock_irqrestore(piVar12,uVar6);
code_r0x08002274:
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    init_wait_entry(&uStack_90,0);
    iVar14 = 0xfa;
code_r0x08002294:
    iVar7 = prepare_to_wait_event(iVar13 + 0x430,&uStack_90,1);
    uVar6 = _raw_spin_lock_irqsave(piVar12);
    for (piVar10 = *piVar11; piVar11 != piVar10; piVar10 = *piVar10) {
        iVar5 = strcmp(piVar10[-0x11],param_4);
        if (iVar5 == 0) {
            arg1 = piVar10 + -0x14;
            goto code_r0x080022e8;
        }
    }
    arg1 = NULL;
code_r0x080022e8:
    _raw_spin_unlock_irqrestore(piVar12,uVar6);
    if (iVar14 == 0 && arg1 != NULL) {
        iVar14 = 1;
    }
    if ((arg1 == NULL) && (iVar14 != 0)) {
        if (iVar7 != 0) goto code_r0x0800232c;
        iVar14 = schedule_timeout(iVar14);
        goto code_r0x08002294;
    }
    finish_wait(iVar13 + 0x430,&uStack_90);
    iVar7 = iVar14;
code_r0x0800232c:
    if (iVar7 == 0) goto code_r0x080025d0;
code_r0x08002348:
    if (*(arg1 + 4) != 0) {
        _dev_err(param_1,"channel %s is busy\n",arg1[3]);
        goto code_r0x080025d0;
    }
    piVar11 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x70);
    if (piVar11 == NULL) goto code_r0x080025d4;
    piVar12 = piVar11 + 1;
    *piVar12 = 1;
    *piVar11 = param_1;
    piVar11[2] = param_2;
    piVar11[0xb] = param_3;
    piVar11[0xc] = reloc.qcom_smd_destroy_ept.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
    arg1[1] = piVar11;
    piVar11[0xd] = arg1;
    iVar5 = *(arg1 + 0x10);
    uVar6 = *arg1;
    if (0xfff < iVar5) {
        iVar5 = 0x1000;
    }
    iVar13 = __kmalloc(iVar5,0xcc0);
    arg1[0x11] = iVar13;
    if (iVar13 == 0) goto code_r0x08002584;
    iVar13 = arg1[1];
    uVar8 = _raw_spin_lock_irqsave(arg1 + 0x12);
    *(iVar13 + 0x10) = param_2;
    _raw_spin_unlock_irqrestore(arg1 + 0x12,uVar8);
    sym.qcom_smd_channel_set_state(arg1,1);
    if (*(arg1 + 0x24) - 1U < 2) {
code_r0x08002450:
        sym.qcom_smd_channel_set_state(arg1,2);
        if (*(arg1 + 0x24) == 2) goto code_r0x080025d4;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_90 = 0;
        init_wait_entry(&uStack_90,0);
        puVar1 = arg1 + 5;
        iVar14 = prepare_to_wait_event(puVar1,&uStack_90,1);
        iVar13 = 0xfa;
        if (*(arg1 + 0x24) != 2) {
            do {
                if (iVar14 != 0) goto code_r0x080024b4;
                iVar13 = schedule_timeout(iVar13);
                iVar14 = prepare_to_wait_event(puVar1,&uStack_90,1);
                if (iVar13 == 0 && *(arg1 + 0x24) == 2) {
                    iVar13 = 1;
                }
            } while ((*(arg1 + 0x24) != 2) && (iVar13 != 0));
        }
        iVar14 = iVar13;
        finish_wait(puVar1,&uStack_90);
code_r0x080024b4:
        if (iVar14 != 0) goto code_r0x080025d4;
        pcVar9 = "remote side did not enter open state\n";
    }
    else {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_90 = 0;
        init_wait_entry(&uStack_90,0);
        puVar1 = arg1 + 5;
        iVar14 = prepare_to_wait_event(puVar1,&uStack_90,1);
        iVar5 = *(arg1 + 0x24);
        iVar13 = 0xfa;
        do {
            if (iVar5 - 1U < 2) break;
            if (iVar14 != 0) goto code_r0x0800244c;
            iVar13 = schedule_timeout(iVar13);
            iVar14 = prepare_to_wait_event(puVar1,&uStack_90,1);
            iVar5 = *(arg1 + 0x24);
            if (iVar13 == 0 && 0xfffffffd < iVar5 - 3U) {
                iVar13 = 1;
            }
        } while (iVar13 != 0);
        iVar14 = iVar13;
        finish_wait(puVar1,&uStack_90);
code_r0x0800244c:
        if (iVar14 != 0) goto code_r0x08002450;
        pcVar9 = "remote side did not enter opening state\n";
    }
    _dev_err(uVar6,pcVar9);
    sym.qcom_smd_channel_set_state(arg1,0);
code_r0x08002584:
    arg1[1] = 0;
    iVar5 = 1;
    while( true ) {
        Hint_Prefetch(piVar12,2,0,1);
        do {
            iVar2 = *piVar12;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
                *piVar12 = iVar2 - iVar5;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            kfree(piVar11);
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar12,3);
        }
code_r0x080025d0:
        piVar11 = NULL;
code_r0x080025d4:
        iVar13 = sp_el0;
        if (*(iVar13 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
        iVar5 = extraout_w9;
    }
    return piVar11;
}


// ===== sym.qcom_smd_edge_intr.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x08001348 (size 8) =====

ulong sym.qcom_smd_edge_intr.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *in_x18;
    uint32_t uVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(param_2 + 0x410);
    piVar5 = *(param_2 + 0x400);
    if (piVar5 == param_2 + 0x400) {
        uVar4 = 0;
    }
    else {
        uVar4 = 0;
        do {
            _raw_spin_lock(piVar5 + -2);
            uVar2 = sym.qcom_smd_channel_intr(piVar5 + -0x14);
            uVar4 = uVar4 | uVar2;
            _raw_spin_unlock(piVar5 + -2);
            piVar5 = *piVar5;
        } while (piVar5 != param_2 + 0x400);
    }
    _raw_spin_unlock(param_2 + 0x410);
    iVar3 = qcom_smem_get_free_space(*(param_2 + 0x3a4));
    uVar1 = ___init_waitqueue_head;
    if (iVar3 != *(param_2 + 0x428)) {
        *(param_2 + 0x428) = iVar3;
        queue_work_on(0x20,uVar1,param_2 + 0x448);
    }
    if ((uVar4 & 1) != 0) {
        queue_work_on(0x20,___init_waitqueue_head,param_2 + 0x478);
    }
    return 1;
}


// ===== sym.qcom_smd_poll.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x08001350 (size 8) =====

uint sym.qcom_smd_poll.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1,ulong param_2,ulong *param_3)

{
    uint uVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x68);
    if (param_3 != NULL) {
        pcVar5 = *param_3;
        if (iVar6 + 0x58 != 0 && pcVar5 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar5,0x80001f0);
            (*pcVar5)(param_2,iVar6 + 0x58,param_3);
        }
    }
    iVar3 = *(iVar6 + 0x48);
    if (iVar3 == 0) {
        puVar2 = *(iVar6 + 0x40) + 0x10;
        piVar4 = *(iVar6 + 0x40) + 0xc;
    }
    else {
        puVar2 = iVar3 + 0x28;
        piVar4 = iVar3 + 0x24;
    }
    uVar1 = 0x104;
    if ((*piVar4 + ~*puVar2 & *(iVar6 + 0x80) - 1U) < 0x15) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001358 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_smd_probe.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001360 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_smd_probe.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08001368 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(param_1 + -8);
    return;
}


// ===== sym.qcom_smd_announce_create.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x08001370 (size 8) =====

ulong sym.qcom_smd_announce_create.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x3c8) + 0x68);
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x12);
    uVar2 = sym.qcom_smd_channel_intr(arg1);
    _raw_spin_unlock_irqrestore(arg1 + 0x12,uVar1);
    if ((uVar2 & 1) != 0) {
        queue_work_on(0x20,___init_waitqueue_head,*arg1 + 0x478);
    }
    return 0;
}


// ===== sym.qcom_smd_unregister_edge.cfi_jt @ 0x08001378 (size 8) =====

ulong sym.qcom_smd_unregister_edge.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    disable_irq(*(param_1 + 0x3a8));
    cancel_work_sync(param_1 + 0x448);
    cancel_work_sync(param_1 + 0x478);
    iVar1 = device_for_each_child(param_1,0,sym.qcom_smd_remove_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt);
    if (iVar1 != 0) {
        _dev_warn(param_1,"can\'t remove smd device: %d\n",iVar1);
    }
    mbox_free_channel(*(param_1 + 0x3f8));
    device_unregister(param_1);
    return 0;
}


// ===== sym.rpmsg_name_show.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x08001380 (size 8) =====

int64_t sym.rpmsg_name_show.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x8000517,*(param_1 + 0x390));
    return iVar1;
}


// ===== sym.qcom_smd_send.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x08001388 (size 8) =====

void sym.qcom_smd_send.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_smd_send(*(param_1 + 0x68),param_2,param_3,1);
    return;
}


// ===== sym.qcom_smd_trysend.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x08001390 (size 8) =====

void sym.qcom_smd_trysend.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_smd_send(*(param_1 + 0x68),param_2,param_3,0);
    return;
}


// ===== sym.qcom_smd_register_edge.cfi_jt @ 0x08001398 (size 8) =====

int64_t sym.qcom_smd_register_edge.cfi_jt(int64_t *param_1,ulong *param_2)

{
    ulong uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x4a8);
    if (iVar4 == 0) {
        return -0xc;
    }
    __init_waitqueue_head(iVar4 + 0x430,"&edge->new_channel_event",obj.qcom_smd_register_edge.__key);
    iVar7 = param_1[0xe];
    *(iVar4 + 0x60) = param_1;
    *(iVar4 + 0x2f0) = param_2;
    *(iVar4 + 0x330) = sym.qcom_smd_edge_release.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
    *(iVar4 + 0x328) = obj.qcom_smd_register_edge.__key;
    if (iVar7 == 0) {
        iVar7 = *param_1;
    }
    dev_set_name(iVar4,"%s:%pOFn",iVar7,param_2);
    iVar2 = device_register(iVar4);
    if (iVar2 != 0) {
        _printk(0x80003ad);
        put_device(iVar4);
        goto code_r0x08001790;
    }
    *(iVar4 + 0x400) = iVar4 + 0x400;
    *(iVar4 + 0x408) = iVar4 + 0x400;
    *(iVar4 + 0x410) = 0;
    *(iVar4 + 0x448) = 0xfffffffe0;
    *(iVar4 + 0x450) = iVar4 + 0x450;
    *(iVar4 + 0x458) = iVar4 + 0x450;
    *(iVar4 + 0x460) = sym.qcom_channel_scan_worker.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
    *(iVar4 + 0x478) = 0xfffffffe0;
    *(iVar4 + 0x480) = iVar4 + 0x480;
    *(iVar4 + 0x488) = iVar4 + 0x480;
    *(iVar4 + 0x490) = sym.qcom_channel_state_worker.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
    *(iVar4 + 0x398) = param_2;
    iVar2 = of_property_read_variable_u32_array(param_2,"qcom,smd-edge",iVar4 + 0x3a0,1,0);
    if (iVar2 < 0) {
        pcVar6 = "edge missing %s property\n";
        pcVar8 = "qcom,smd-edge";
code_r0x080016f8:
        _dev_err(iVar4,pcVar6,pcVar8);
code_r0x08001760:
        *(iVar4 + 0x398) = 0;
code_r0x08001768:
        pcVar6 = "failed to parse smd edge\n";
    }
    else {
        *(iVar4 + 0x3a4) = 0xffffffff;
        of_property_read_variable_u32_array(param_2,"qcom,remote-pid",iVar4 + 0x3a4,1,0);
        *(iVar4 + 0x3c0) = iVar4;
        *(iVar4 + 0x3d8) = 1;
        uVar5 = mbox_request_channel(iVar4 + 0x3c0,0);
        *(iVar4 + 0x3f8) = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
code_r0x080015e8:
            iVar2 = of_property_read_string(param_2,"label",iVar4 + 0x390);
            if (iVar2 < 0) {
                *(iVar4 + 0x390) = *param_2;
            }
            iVar3 = irq_of_parse_and_map(param_2,0);
            if (iVar3 == 0) {
                _dev_err(iVar4,"required smd interrupt missing\n");
                iVar2 = -0x16;
            }
            else {
                iVar2 = devm_request_threaded_irq
                                  (iVar4,iVar3,sym.qcom_smd_edge_intr.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt,0,1,
                                   *param_2,iVar4);
                if (iVar2 == 0) {
                    *(iVar4 + 0x3a8) = iVar3;
                    goto code_r0x0800164c;
                }
                _dev_err(iVar4,"failed to request smd irq\n");
            }
            goto code_r0x08001760;
        }
        if (uVar5 != 0xffffffffffffffed) {
            *(iVar4 + 0x398) = 0;
            if (uVar5 == 0) goto code_r0x0800164c;
code_r0x08001564:
            iVar2 = uVar5;
            goto code_r0x08001768;
        }
        *(iVar4 + 0x3f8) = 0;
        iVar7 = of_parse_phandle(param_2,"qcom,ipc",0);
        if (iVar7 == 0) {
            _dev_err(iVar4,"no qcom,ipc node\n");
            iVar2 = -0x13;
            goto code_r0x08001760;
        }
        uVar5 = syscon_node_to_regmap();
        *(iVar4 + 0x3b0) = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            iVar2 = of_property_read_u32_index(param_2,"qcom,ipc",1,iVar4 + 0x3b8);
            if (iVar2 < 0) {
                pcVar6 = "no offset in %s\n";
            }
            else {
                iVar2 = of_property_read_u32_index(param_2,"qcom,ipc",2,iVar4 + 0x3bc);
                if (-1 < iVar2) goto code_r0x080015e8;
                pcVar6 = "no bit in %s\n";
            }
            pcVar8 = "qcom,ipc";
            goto code_r0x080016f8;
        }
        *(iVar4 + 0x398) = 0;
        if (uVar5 != 0) goto code_r0x08001564;
code_r0x0800164c:
        iVar7 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,1000);
        if (iVar7 == 0) {
            iVar2 = -0xc;
        }
        else {
            *(iVar7 + 0x3e0) = iVar4;
            *(iVar7 + 0x3d8) = obj.qcom_smd_device_ops;
            uVar1 = str.rpmsg_ctrl._0_8_;
            *(iVar7 + 0x60) = iVar4;
            *(iVar7 + 0x397) = 0x6c7274;
            *(iVar7 + 0x330) = sym.qcom_smd_release_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
            *(iVar7 + 0x390) = uVar1;
            *(iVar7 + 0x3b8) = "rpmsg_ctrl";
            iVar2 = rpmsg_register_device();
            if (iVar2 == 0) {
                queue_work_on(0x20,___init_waitqueue_head,iVar4 + 0x448);
                return iVar4;
            }
        }
        pcVar6 = "failed to register chrdev for edge\n";
    }
    _dev_err(iVar4,pcVar6);
    if ((*(iVar4 + 0x3f8) != 0) && (*(iVar4 + 0x3f8) < 0xfffffffffffff001)) {
        mbox_free_channel();
    }
    device_unregister(iVar4);
code_r0x08001790:
    return iVar2;
}


// ===== sym.qcom_smd_sendto.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013a0 (size 8) =====

void sym.qcom_smd_sendto.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_smd_send(*(param_1 + 0x68),param_2,param_3,1);
    return;
}


// ===== sym.qcom_smd_trysendto.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013a8 (size 8) =====

void sym.qcom_smd_trysendto.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_smd_send(*(param_1 + 0x68),param_2,param_3,0);
    return;
}


// ===== sym.qcom_smd_destroy_ept.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013b0 (size 8) =====

void sym.qcom_smd_destroy_ept.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x68);
    iVar6 = *(arg1 + 8);
    uVar5 = _raw_spin_lock_irqsave(arg1 + 0x90);
    *(iVar6 + 0x10) = 0;
    _raw_spin_unlock_irqrestore(arg1 + 0x90,uVar5);
    kfree(*(arg1 + 0x88));
    *(arg1 + 0x88) = 0;
    sym.qcom_smd_channel_set_state(arg1,0);
    sym.qcom_smd_channel_reset(arg1);
    piVar1 = param_1 + 8;
    *(arg1 + 8) = 0;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
        DataMemoryBarrier(2,1);
        kfree(param_1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.qcom_smd_remove_edge.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013b8 (size 8) =====

ulong sym.qcom_smd_remove_edge.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_smd_unregister_edge(param_1);
    return 0;
}


// ===== sym.qcom_smd_remove_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013c0 (size 8) =====

ulong sym.qcom_smd_remove_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister();
    return 0;
}


// ===== sym.qcom_smd_probe.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013c8 (size 8) =====

ulong sym.qcom_smd_probe.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = qcom_smem_get(0xffffffff,0xd,0);
    if (iVar1 == -0x205) {
        uVar2 = 0xfffffdfb;
    }
    else {
        iVar1 = of_get_next_available_child(*(param_1 + 0x300),0);
        uVar2 = 0;
        if (iVar1 != 0) {
            do {
                sym.qcom_smd_register_edge(param_1 + 0x10,iVar1);
                iVar1 = of_get_next_available_child(*(param_1 + 0x300),iVar1);
            } while (iVar1 != 0);
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.qcom_smd_remove.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013d0 (size 8) =====

int sym.qcom_smd_remove.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = device_for_each_child(param_1 + 0x10,0,sym.qcom_smd_remove_edge.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt);
    if (iVar1 != 0) {
        _dev_warn(param_1 + 0x10,"can\'t remove smd device: %d\n",iVar1);
    }
    return iVar1;
}


// ===== sym.qcom_smd_edge_release.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013d8 (size 8) =====

void sym.qcom_smd_edge_release.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(param_1 + 0x400);
    while (piVar3 != param_1 + 0x400) {
        piVar5 = *piVar3;
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3[-0x11]);
        kfree(piVar3 + -0x14);
        piVar3 = piVar5;
    }
    kfree(param_1);
    return;
}


// ===== sym.qcom_smd_release_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013e0 (size 8) =====

void sym.qcom_smd_release_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.qcom_channel_state_worker.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013e8 (size 8) =====

ulong sym.qcom_channel_state_worker.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t extraout_x1;
    int *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t *piVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar7 = param_1 + -0x68;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    uVar3 = _raw_spin_lock_irqsave(iVar7);
    piVar8 = param_1 + -0x78;
    piVar11 = *piVar8;
    if (piVar8 != piVar11) {
        do {
            if (piVar11[-0x10] == 0) {
                if (piVar11[-0xb] == 0) {
                    piVar6 = piVar11[-0xc] + 0x14;
                }
                else {
                    piVar6 = piVar11[-0xb] + 0x2c;
                }
                if ((0xfffffffd < *piVar6 - 3U) && (piVar11[-0x12] == '\0')) {
                    _raw_spin_unlock_irqrestore(iVar7,uVar3);
                    iVar12 = piVar11[-0x14];
                    iVar4 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,1000);
                    if (iVar4 != 0) {
                        *(iVar4 + 0x3e0) = iVar12;
                        *(iVar4 + 0x3d8) = obj.qcom_smd_device_ops;
                        strscpy_pad(iVar4 + 0x390,piVar11[-0x11],0x20);
                        iVar5 = 0;
                        *(iVar4 + 0x3c0) = 0xffffffffffffffff;
                        uVar3 = *(iVar12 + 0x398);
                        iVar10 = piVar11[-0x11];
                        uStack_98 = 0;
                        do {
                            iVar5 = of_get_next_available_child(uVar3,iVar5);
                            if (iVar5 == 0) break;
                            iVar1 = of_property_read_string(iVar5,"qcom,smd-channels",&uStack_98);
                        } while ((iVar1 != 0) || (iVar1 = strcmp(uStack_98,iVar10), iVar1 != 0));
                        *(iVar4 + 0x2f0) = iVar5;
                        *(iVar4 + 0x60) = iVar12;
                        *(iVar4 + 0x330) = sym.qcom_smd_release_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
                        rpmsg_register_device(iVar4);
                    }
                    *(piVar11 + -0x12) = 1;
                    uVar3 = _raw_spin_lock_irqsave(iVar7);
                    *(piVar11 + -0x12) = 1;
                }
            }
            piVar11 = *piVar11;
        } while (piVar8 != piVar11);
        for (piVar11 = *(param_1 + -0x78); piVar8 != piVar11; piVar11 = *piVar11) {
            if (*(piVar11 + -0x10) - 1U < 2) {
                if (piVar11[-0xb] == 0) {
                    piVar6 = piVar11[-0xc] + 0x14;
                }
                else {
                    piVar6 = piVar11[-0xb] + 0x2c;
                }
                if (1 < *piVar6 - 1U) {
                    _raw_spin_unlock_irqrestore(iVar7,uVar3);
                    strscpy_pad(&uStack_90,piVar11[-0x11],0x20);
                    uStack_70 = 0xffffffffffffffff;
                    rpmsg_unregister_device(param_1 + -0x478,&uStack_90);
                    *(piVar11 + -0x12) = 0;
                    uVar3 = _raw_spin_lock_irqsave(iVar7);
                }
            }
        }
    }
    uVar3 = _raw_spin_unlock_irqrestore(iVar7,uVar3);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_smd_edge_intr;
    _raw_spin_lock(extraout_x1 + 0x410);
    piVar8 = *(extraout_x1 + 0x400);
    if (piVar8 == extraout_x1 + 0x400) {
        uVar9 = 0;
    }
    else {
        uVar9 = 0;
        do {
            _raw_spin_lock(piVar8 + -2);
            uVar2 = sym.qcom_smd_channel_intr(piVar8 + -0x14);
            uVar9 = uVar9 | uVar2;
            _raw_spin_unlock(piVar8 + -2);
            piVar8 = *piVar8;
        } while (piVar8 != extraout_x1 + 0x400);
    }
    _raw_spin_unlock(extraout_x1 + 0x410);
    iVar1 = qcom_smem_get_free_space(*(extraout_x1 + 0x3a4));
    uVar3 = ___init_waitqueue_head;
    if (iVar1 != *(extraout_x1 + 0x428)) {
        *(extraout_x1 + 0x428) = iVar1;
        queue_work_on(0x20,uVar3,extraout_x1 + 0x448);
    }
    if ((uVar9 & 1) != 0) {
        queue_work_on(0x20,___init_waitqueue_head,extraout_x1 + 0x478);
    }
    return 1;
}


// ===== sym.qcom_channel_scan_worker.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt @ 0x080013f0 (size 8) =====

void sym.qcom_channel_scan_worker.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    uint uVar3;
    char cVar4;
    bool bVar5;
    char *pcVar6;
    int64_t *arg1;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint32_t uVar10;
    uint64_t *extraout_x8;
    uint64_t *puVar11;
    int64_t *piVar12;
    ulong *in_x18;
    uint64_t unaff_x19;
    uint64_t unaff_x21;
    int64_t iVar13;
    uint32_t uVar14;
    int iVar15;
    char *unaff_x28;
    ulong unaff_x30;
    int *piStack_90;
    int *piStack_88;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    piVar12 = param_1 + -0x48;
    iVar7 = sp_el0;
    uVar10 = 0;
    iVar13 = 0;
    iStack_68 = *(iVar7 + 0x5e0);
code_r0x080019dc:
    pcVar6 = qcom_smem_get(*(param_1 + -0xa4),*(obj.smem_items + iVar13 * 0xc),0);
    uVar14 = uVar10;
    if (0xfffffffffffff000 < pcVar6) goto code_r0x080019d0;
    unaff_x21 = 0;
    piStack_88 = iVar13 * 0xc + 0x800070c;
    piStack_90 = iVar13 * 0xc + 0x8000710;
    uStack_7c = uVar10;
    do {
        unaff_x19 = 1L << (unaff_x21 & 0x3f);
        unaff_x28 = pcVar6;
        if ((*(param_1 + -0x30 + iVar13 * 8 + (unaff_x21 >> 6 & 0x3ffffff) * 8) & unaff_x19) != 0)
        goto code_r0x08001a54;
        if (*(pcVar6 + 0x1c) == 0) goto code_r0x08001a54;
        if (*pcVar6 == '\0') goto code_r0x08001a54;
        if ((*(pcVar6 + 0x18) >> 9 & 1) == 0) goto code_r0x08001a54;
        if (*(param_1 + -0xa8) != (*(pcVar6 + 0x18) & 0xff)) goto code_r0x08001a54;
        iVar15 = *(pcVar6 + 0x14);
        iStack_78 = 0;
        uStack_70 = 0;
        arg1 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0xb0);
        if (arg1 == NULL) goto code_r0x08001a54;
        *arg1 = param_1 + -0x448;
        iVar7 = kstrdup(pcVar6,0xcc0);
        arg1[3] = iVar7;
        if (iVar7 == 0) {
            iVar15 = -0xc;
code_r0x08001b94:
            kfree(arg1);
            arg1 = iVar15;
        }
        else {
            iVar2 = *piStack_88;
            *(arg1 + 10) = 0;
            *(arg1 + 0x12) = 0;
            __init_waitqueue_head(arg1 + 0xb,"&channel->fblockread_event",obj.qcom_smd_register_edge.__key);
            __init_waitqueue_head(arg1 + 5,"&channel->state_change_event",obj.qcom_smd_register_edge.__key);
            uVar8 = qcom_smem_get(*(param_1 + -0xa4),iVar2 + iVar15,&iStack_78);
            if (0xfffffffffffff000 < uVar8) {
code_r0x08001b8c:
                iVar15 = uVar8;
                kfree(arg1[3]);
                goto code_r0x08001b94;
            }
            if (iStack_78 == 0x58) {
                iVar7 = 0x48;
            }
            else {
                if (iStack_78 != 0x28) {
                    _dev_err(param_1 + -0x448,"channel info of size %zu not supported\n");
                    uVar8 = 0xffffffffffffffea;
                    goto code_r0x08001b8c;
                }
                iVar7 = 0x40;
            }
            uVar3 = *(param_1 + -0xa4);
            *(arg1 + iVar7) = uVar8;
            uVar8 = qcom_smem_get(uVar3,*piStack_90 + iVar15,&uStack_70);
            if (0xfffffffffffff000 < uVar8) goto code_r0x08001b8c;
            uStack_70 = uStack_70 >> 1;
            arg1[0xe] = uVar8;
            arg1[0xf] = uVar8 + uStack_70;
            *(arg1 + 0x10) = uStack_70;
            sym.qcom_smd_channel_reset(arg1);
        }
        uVar10 = uStack_7c;
        if (0xfffffffffffff000 < arg1) goto code_r0x08001a54;
        uVar9 = _raw_spin_lock_irqsave(param_1 + -0x38);
        piVar1 = arg1 + 0x14;
        iVar7 = *piVar12;
        uVar8 = __list_add_valid(piVar1,piVar12,iVar7);
        if ((uVar8 & 1) != 0) {
            *(iVar7 + 8) = piVar1;
            arg1[0x14] = iVar7;
            arg1[0x15] = piVar12;
            *piVar12 = piVar1;
        }
        _raw_spin_unlock_irqrestore(param_1 + -0x38,uVar9);
        puVar11 = param_1 + -0x30 + iVar13 * 8 + (unaff_x21 >> 6) * 8;
        while( true ) {
            Hint_Prefetch(puVar11,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar11,0x10);
                if (bVar5) {
                    *puVar11 = *puVar11 | unaff_x19;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            __wake_up(param_1 + -0x18,1,0,0);
            uVar10 = uStack_7c;
code_r0x08001a54:
            unaff_x21 = unaff_x21 + 1;
            pcVar6 = unaff_x28 + 0x20;
            unaff_x28 = pcVar6;
            uVar14 = uVar10;
            if (unaff_x21 != 0x40) break;
code_r0x080019d0:
            uVar10 = 1;
            iVar13 = 1;
            if ((uVar14 & 1) == 0) goto code_r0x080019dc;
            queue_work_on(0x20,___init_waitqueue_head,param_1 + 0x30);
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail();
            puVar11 = extraout_x8;
        }
    } while( true );
}


// ===== sym.qcom_smd_register_edge @ 0x080013f8 (size 992) =====

int64_t sym.qcom_smd_register_edge(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x4a8);
    if (iVar4 == 0) {
        return -0xc;
    }
    __init_waitqueue_head(iVar4 + 0x430,"&edge->new_channel_event",obj.qcom_smd_register_edge.__key);
    iVar7 = *(arg1 + 0x70);
    *(iVar4 + 0x60) = arg1;
    *(iVar4 + 0x2f0) = arg2;
    *(iVar4 + 0x330) = sym.qcom_smd_edge_release.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
    *(iVar4 + 0x328) = obj.qcom_smd_register_edge.__key;
    if (iVar7 == 0) {
        iVar7 = *arg1;
    }
    dev_set_name(iVar4,"%s:%pOFn",iVar7,arg2);
    iVar2 = device_register(iVar4);
    if (iVar2 != 0) {
        _printk(0x80003ad);
        put_device(iVar4);
        goto code_r0x08001790;
    }
    *(iVar4 + 0x400) = iVar4 + 0x400;
    *(iVar4 + 0x408) = iVar4 + 0x400;
    *(iVar4 + 0x410) = 0;
    *(iVar4 + 0x448) = 0xfffffffe0;
    *(iVar4 + 0x450) = iVar4 + 0x450;
    *(iVar4 + 0x458) = iVar4 + 0x450;
    *(iVar4 + 0x460) = sym.qcom_channel_scan_worker.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
    *(iVar4 + 0x478) = 0xfffffffe0;
    *(iVar4 + 0x480) = iVar4 + 0x480;
    *(iVar4 + 0x488) = iVar4 + 0x480;
    *(iVar4 + 0x490) = sym.qcom_channel_state_worker.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
    *(iVar4 + 0x398) = arg2;
    iVar2 = of_property_read_variable_u32_array(arg2,"qcom,smd-edge",iVar4 + 0x3a0,1,0);
    if (iVar2 < 0) {
        pcVar6 = "edge missing %s property\n";
        pcVar8 = "qcom,smd-edge";
code_r0x080016f8:
        _dev_err(iVar4,pcVar6,pcVar8);
code_r0x08001760:
        *(iVar4 + 0x398) = 0;
code_r0x08001768:
        pcVar6 = "failed to parse smd edge\n";
    }
    else {
        *(iVar4 + 0x3a4) = 0xffffffff;
        of_property_read_variable_u32_array(arg2,"qcom,remote-pid",iVar4 + 0x3a4,1,0);
        *(iVar4 + 0x3c0) = iVar4;
        *(iVar4 + 0x3d8) = 1;
        uVar5 = mbox_request_channel(iVar4 + 0x3c0,0);
        *(iVar4 + 0x3f8) = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
code_r0x080015e8:
            iVar2 = of_property_read_string(arg2,"label",iVar4 + 0x390);
            if (iVar2 < 0) {
                *(iVar4 + 0x390) = *arg2;
            }
            iVar3 = irq_of_parse_and_map(arg2,0);
            if (iVar3 == 0) {
                _dev_err(iVar4,"required smd interrupt missing\n");
                iVar2 = -0x16;
            }
            else {
                iVar2 = devm_request_threaded_irq
                                  (iVar4,iVar3,sym.qcom_smd_edge_intr.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt,0,1,
                                   *arg2,iVar4);
                if (iVar2 == 0) {
                    *(iVar4 + 0x3a8) = iVar3;
                    goto code_r0x0800164c;
                }
                _dev_err(iVar4,"failed to request smd irq\n");
            }
            goto code_r0x08001760;
        }
        if (uVar5 != 0xffffffffffffffed) {
            *(iVar4 + 0x398) = 0;
            if (uVar5 == 0) goto code_r0x0800164c;
code_r0x08001564:
            iVar2 = uVar5;
            goto code_r0x08001768;
        }
        *(iVar4 + 0x3f8) = 0;
        iVar7 = of_parse_phandle(arg2,"qcom,ipc",0);
        if (iVar7 == 0) {
            _dev_err(iVar4,"no qcom,ipc node\n");
            iVar2 = -0x13;
            goto code_r0x08001760;
        }
        uVar5 = syscon_node_to_regmap();
        *(iVar4 + 0x3b0) = uVar5;
        if (uVar5 < 0xfffffffffffff001) {
            iVar2 = of_property_read_u32_index(arg2,"qcom,ipc",1,iVar4 + 0x3b8);
            if (iVar2 < 0) {
                pcVar6 = "no offset in %s\n";
            }
            else {
                iVar2 = of_property_read_u32_index(arg2,"qcom,ipc",2,iVar4 + 0x3bc);
                if (-1 < iVar2) goto code_r0x080015e8;
                pcVar6 = "no bit in %s\n";
            }
            pcVar8 = "qcom,ipc";
            goto code_r0x080016f8;
        }
        *(iVar4 + 0x398) = 0;
        if (uVar5 != 0) goto code_r0x08001564;
code_r0x0800164c:
        iVar7 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,1000);
        if (iVar7 == 0) {
            iVar2 = -0xc;
        }
        else {
            *(iVar7 + 0x3e0) = iVar4;
            *(iVar7 + 0x3d8) = obj.qcom_smd_device_ops;
            uVar1 = str.rpmsg_ctrl._0_8_;
            *(iVar7 + 0x60) = iVar4;
            *(iVar7 + 0x397) = 0x6c7274;
            *(iVar7 + 0x330) = sym.qcom_smd_release_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
            *(iVar7 + 0x390) = uVar1;
            *(iVar7 + 0x3b8) = "rpmsg_ctrl";
            iVar2 = rpmsg_register_device();
            if (iVar2 == 0) {
                queue_work_on(0x20,___init_waitqueue_head,iVar4 + 0x448);
                return iVar4;
            }
        }
        pcVar6 = "failed to register chrdev for edge\n";
    }
    _dev_err(iVar4,pcVar6);
    if ((*(iVar4 + 0x3f8) != 0) && (*(iVar4 + 0x3f8) < 0xfffffffffffff001)) {
        mbox_free_channel();
    }
    device_unregister(iVar4);
code_r0x08001790:
    return iVar2;
}


// ===== sym.qcom_smd_edge_release @ 0x080017d8 (size 168) =====

void sym.qcom_smd_edge_release(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0x400);
    while (piVar3 != arg1 + 0x400) {
        piVar5 = *piVar3;
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3[-0x11]);
        kfree(piVar3 + -0x14);
        piVar3 = piVar5;
    }
    kfree(arg1);
    return;
}


// ===== sym.qcom_smd_unregister_edge @ 0x08001880 (size 136) =====

ulong sym.qcom_smd_unregister_edge(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    disable_irq(*(arg1 + 0x3a8));
    cancel_work_sync(arg1 + 0x448);
    cancel_work_sync(arg1 + 0x478);
    iVar1 = device_for_each_child(arg1,0,sym.qcom_smd_remove_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt);
    if (iVar1 != 0) {
        _dev_warn(arg1,"can\'t remove smd device: %d\n",iVar1);
    }
    mbox_free_channel(*(arg1 + 0x3f8));
    device_unregister(arg1);
    return 0;
}


// ===== sym.qcom_smd_remove_device @ 0x08001908 (size 40) =====

ulong sym.qcom_smd_remove_device(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister();
    return 0;
}


// ===== sym.rpmsg_name_show @ 0x08001930 (size 60) =====

int64_t sym.rpmsg_name_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,0x8000517,*(arg1 + 0x390));
    return iVar1;
}


// ===== sym.qcom_channel_scan_worker @ 0x0800196c (size 840) =====

void sym.qcom_channel_scan_worker(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    uint uVar3;
    char cVar4;
    bool bVar5;
    char *pcVar6;
    int64_t *arg1_00;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint32_t uVar10;
    uint64_t *extraout_x8;
    uint64_t *puVar11;
    int64_t *piVar12;
    ulong *in_x18;
    uint64_t unaff_x19;
    uint64_t unaff_x21;
    int64_t iVar13;
    uint32_t uVar14;
    int iVar15;
    char *unaff_x28;
    ulong unaff_x30;
    int *piStack_90;
    int *piStack_88;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    piVar12 = arg1 + -0x48;
    iVar7 = sp_el0;
    uVar10 = 0;
    iVar13 = 0;
    iStack_68 = *(iVar7 + 0x5e0);
code_r0x080019dc:
    pcVar6 = qcom_smem_get(*(arg1 + -0xa4),*(obj.smem_items + iVar13 * 0xc),0);
    uVar14 = uVar10;
    if (0xfffffffffffff000 < pcVar6) goto code_r0x080019d0;
    unaff_x21 = 0;
    piStack_88 = iVar13 * 0xc + 0x800070c;
    piStack_90 = iVar13 * 0xc + 0x8000710;
    uStack_7c = uVar10;
    do {
        unaff_x19 = 1L << (unaff_x21 & 0x3f);
        unaff_x28 = pcVar6;
        if ((*(arg1 + -0x30 + iVar13 * 8 + (unaff_x21 >> 6 & 0x3ffffff) * 8) & unaff_x19) != 0) goto code_r0x08001a54;
        if (*(pcVar6 + 0x1c) == 0) goto code_r0x08001a54;
        if (*pcVar6 == '\0') goto code_r0x08001a54;
        if ((*(pcVar6 + 0x18) >> 9 & 1) == 0) goto code_r0x08001a54;
        if (*(arg1 + -0xa8) != (*(pcVar6 + 0x18) & 0xff)) goto code_r0x08001a54;
        iVar15 = *(pcVar6 + 0x14);
        iStack_78 = 0;
        uStack_70 = 0;
        arg1_00 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0xb0);
        if (arg1_00 == NULL) goto code_r0x08001a54;
        *arg1_00 = arg1 + -0x448;
        iVar7 = kstrdup(pcVar6,0xcc0);
        arg1_00[3] = iVar7;
        if (iVar7 == 0) {
            iVar15 = -0xc;
code_r0x08001b94:
            kfree(arg1_00);
            arg1_00 = iVar15;
        }
        else {
            iVar2 = *piStack_88;
            *(arg1_00 + 10) = 0;
            *(arg1_00 + 0x12) = 0;
            __init_waitqueue_head(arg1_00 + 0xb,"&channel->fblockread_event",obj.qcom_smd_register_edge.__key);
            __init_waitqueue_head(arg1_00 + 5,"&channel->state_change_event",obj.qcom_smd_register_edge.__key);
            uVar8 = qcom_smem_get(*(arg1 + -0xa4),iVar2 + iVar15,&iStack_78);
            if (0xfffffffffffff000 < uVar8) {
code_r0x08001b8c:
                iVar15 = uVar8;
                kfree(arg1_00[3]);
                goto code_r0x08001b94;
            }
            if (iStack_78 == 0x58) {
                iVar7 = 0x48;
            }
            else {
                if (iStack_78 != 0x28) {
                    _dev_err(arg1 + -0x448,"channel info of size %zu not supported\n");
                    uVar8 = 0xffffffffffffffea;
                    goto code_r0x08001b8c;
                }
                iVar7 = 0x40;
            }
            uVar3 = *(arg1 + -0xa4);
            *(arg1_00 + iVar7) = uVar8;
            uVar8 = qcom_smem_get(uVar3,*piStack_90 + iVar15,&uStack_70);
            if (0xfffffffffffff000 < uVar8) goto code_r0x08001b8c;
            uStack_70 = uStack_70 >> 1;
            arg1_00[0xe] = uVar8;
            arg1_00[0xf] = uVar8 + uStack_70;
            *(arg1_00 + 0x10) = uStack_70;
            sym.qcom_smd_channel_reset(arg1_00);
        }
        uVar10 = uStack_7c;
        if (0xfffffffffffff000 < arg1_00) goto code_r0x08001a54;
        uVar9 = _raw_spin_lock_irqsave(arg1 + -0x38);
        piVar1 = arg1_00 + 0x14;
        iVar7 = *piVar12;
        uVar8 = __list_add_valid(piVar1,piVar12,iVar7);
        if ((uVar8 & 1) != 0) {
            *(iVar7 + 8) = piVar1;
            arg1_00[0x14] = iVar7;
            arg1_00[0x15] = piVar12;
            *piVar12 = piVar1;
        }
        _raw_spin_unlock_irqrestore(arg1 + -0x38,uVar9);
        puVar11 = arg1 + -0x30 + iVar13 * 8 + (unaff_x21 >> 6) * 8;
        while( true ) {
            Hint_Prefetch(puVar11,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar11,0x10);
                if (bVar5) {
                    *puVar11 = *puVar11 | unaff_x19;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            __wake_up(arg1 + -0x18,1,0,0);
            uVar10 = uStack_7c;
code_r0x08001a54:
            unaff_x21 = unaff_x21 + 1;
            pcVar6 = unaff_x28 + 0x20;
            unaff_x28 = pcVar6;
            uVar14 = uVar10;
            if (unaff_x21 != 0x40) break;
code_r0x080019d0:
            uVar10 = 1;
            iVar13 = 1;
            if ((uVar14 & 1) == 0) goto code_r0x080019dc;
            queue_work_on(0x20,___init_waitqueue_head,arg1 + 0x30);
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail();
            puVar11 = extraout_x8;
        }
    } while( true );
}


// ===== sym.qcom_channel_state_worker @ 0x08001cb4 (size 636) =====

ulong sym.qcom_channel_state_worker(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t extraout_x1;
    int *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t *piVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar7 = arg1 + -0x68;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    uVar3 = _raw_spin_lock_irqsave(iVar7);
    piVar8 = arg1 + -0x78;
    piVar11 = *piVar8;
    if (piVar8 != piVar11) {
        do {
            if (piVar11[-0x10] == 0) {
                if (piVar11[-0xb] == 0) {
                    piVar6 = piVar11[-0xc] + 0x14;
                }
                else {
                    piVar6 = piVar11[-0xb] + 0x2c;
                }
                if ((0xfffffffd < *piVar6 - 3U) && (piVar11[-0x12] == '\0')) {
                    _raw_spin_unlock_irqrestore(iVar7,uVar3);
                    iVar12 = piVar11[-0x14];
                    iVar4 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,1000);
                    if (iVar4 != 0) {
                        *(iVar4 + 0x3e0) = iVar12;
                        *(iVar4 + 0x3d8) = obj.qcom_smd_device_ops;
                        strscpy_pad(iVar4 + 0x390,piVar11[-0x11],0x20);
                        iVar5 = 0;
                        *(iVar4 + 0x3c0) = 0xffffffffffffffff;
                        uVar3 = *(iVar12 + 0x398);
                        iVar10 = piVar11[-0x11];
                        uStack_98 = 0;
                        do {
                            iVar5 = of_get_next_available_child(uVar3,iVar5);
                            if (iVar5 == 0) break;
                            iVar1 = of_property_read_string(iVar5,"qcom,smd-channels",&uStack_98);
                        } while ((iVar1 != 0) || (iVar1 = strcmp(uStack_98,iVar10), iVar1 != 0));
                        *(iVar4 + 0x2f0) = iVar5;
                        *(iVar4 + 0x60) = iVar12;
                        *(iVar4 + 0x330) = sym.qcom_smd_release_device.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
                        rpmsg_register_device(iVar4);
                    }
                    *(piVar11 + -0x12) = 1;
                    uVar3 = _raw_spin_lock_irqsave(iVar7);
                    *(piVar11 + -0x12) = 1;
                }
            }
            piVar11 = *piVar11;
        } while (piVar8 != piVar11);
        for (piVar11 = *(arg1 + -0x78); piVar8 != piVar11; piVar11 = *piVar11) {
            if (*(piVar11 + -0x10) - 1U < 2) {
                if (piVar11[-0xb] == 0) {
                    piVar6 = piVar11[-0xc] + 0x14;
                }
                else {
                    piVar6 = piVar11[-0xb] + 0x2c;
                }
                if (1 < *piVar6 - 1U) {
                    _raw_spin_unlock_irqrestore(iVar7,uVar3);
                    strscpy_pad(&uStack_90,piVar11[-0x11],0x20);
                    uStack_70 = 0xffffffffffffffff;
                    rpmsg_unregister_device(arg1 + -0x478,&uStack_90);
                    *(piVar11 + -0x12) = 0;
                    uVar3 = _raw_spin_lock_irqsave(iVar7);
                }
            }
        }
    }
    uVar3 = _raw_spin_unlock_irqrestore(iVar7,uVar3);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_smd_edge_intr;
    _raw_spin_lock(extraout_x1 + 0x410);
    piVar8 = *(extraout_x1 + 0x400);
    if (piVar8 == extraout_x1 + 0x400) {
        uVar9 = 0;
    }
    else {
        uVar9 = 0;
        do {
            _raw_spin_lock(piVar8 + -2);
            uVar2 = sym.qcom_smd_channel_intr(piVar8 + -0x14);
            uVar9 = uVar9 | uVar2;
            _raw_spin_unlock(piVar8 + -2);
            piVar8 = *piVar8;
        } while (piVar8 != extraout_x1 + 0x400);
    }
    _raw_spin_unlock(extraout_x1 + 0x410);
    iVar1 = qcom_smem_get_free_space(*(extraout_x1 + 0x3a4));
    uVar3 = ___init_waitqueue_head;
    if (iVar1 != *(extraout_x1 + 0x428)) {
        *(extraout_x1 + 0x428) = iVar1;
        queue_work_on(0x20,uVar3,extraout_x1 + 0x448);
    }
    if ((uVar9 & 1) != 0) {
        queue_work_on(0x20,___init_waitqueue_head,extraout_x1 + 0x478);
    }
    return 1;
}


// ===== sym.qcom_smd_edge_intr @ 0x08001f30 (size 232) =====

ulong sym.qcom_smd_edge_intr(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *in_x18;
    uint32_t uVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(arg1 + 0x410);
    piVar5 = *(arg1 + 0x400);
    if (piVar5 == arg1 + 0x400) {
        uVar4 = 0;
    }
    else {
        uVar4 = 0;
        do {
            _raw_spin_lock(piVar5 + -2);
            uVar2 = sym.qcom_smd_channel_intr(piVar5 + -0x14);
            uVar4 = uVar4 | uVar2;
            _raw_spin_unlock(piVar5 + -2);
            piVar5 = *piVar5;
        } while (piVar5 != arg1 + 0x400);
    }
    _raw_spin_unlock(arg1 + 0x410);
    iVar3 = qcom_smem_get_free_space(*(arg1 + 0x3a4));
    uVar1 = ___init_waitqueue_head;
    if (iVar3 != *(arg1 + 0x428)) {
        *(arg1 + 0x428) = iVar3;
        queue_work_on(0x20,uVar1,arg1 + 0x448);
    }
    if ((uVar4 & 1) != 0) {
        queue_work_on(0x20,___init_waitqueue_head,arg1 + 0x478);
    }
    return 1;
}


// ===== sym.qcom_smd_channel_reset @ 0x08002018 (size 424) =====

void sym.qcom_smd_channel_reset(int64_t arg1)

{
    uint *puVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0x48);
    if (puVar1 == NULL) {
        puVar1 = *(arg1 + 0x40);
    }
    *puVar1 = 0;
    if (*(arg1 + 0x48) == 0) {
        *(*(arg1 + 0x40) + 4) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    else {
        *(*(arg1 + 0x48) + 4) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    if (iVar2 == 0) {
        *(*(arg1 + 0x40) + 5) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    else {
        *(iVar2 + 8) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    if (iVar2 == 0) {
        *(*(arg1 + 0x40) + 6) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    else {
        *(iVar2 + 0xc) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    if (iVar2 == 0) {
        *(*(arg1 + 0x40) + 7) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    else {
        *(iVar2 + 0x10) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    if (iVar2 == 0) {
        *(*(arg1 + 0x40) + 8) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    else {
        *(iVar2 + 0x14) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    if (iVar2 == 0) {
        *(*(arg1 + 0x40) + 9) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    else {
        *(iVar2 + 0x18) = 0;
        iVar2 = *(arg1 + 0x48);
    }
    if (iVar2 == 0) {
        *(*(arg1 + 0x40) + 10) = 1;
        iVar2 = *(arg1 + 0x48);
    }
    else {
        *(iVar2 + 0x1c) = 1;
        iVar2 = *(arg1 + 0x48);
    }
    if (iVar2 == 0) {
        *(*(arg1 + 0x40) + 0xb) = 1;
        iVar2 = *(arg1 + 0x48);
    }
    else {
        *(iVar2 + 0x20) = 1;
        iVar2 = *(arg1 + 0x48);
    }
    if (iVar2 == 0) {
        puVar1 = *(arg1 + 0x40) + 0x10;
    }
    else {
        puVar1 = iVar2 + 0x28;
    }
    *puVar1 = 0;
    if (*(arg1 + 0x48) == 0) {
        puVar1 = *(arg1 + 0x40) + 0x20;
    }
    else {
        puVar1 = *(arg1 + 0x48) + 0x50;
    }
    *puVar1 = 0;
    iVar2 = *arg1;
    if (*(iVar2 + 0x3f8) == 0) {
        regmap_write(*(iVar2 + 0x3b0),*(iVar2 + 0x3b8),1L << (*(iVar2 + 0x3bc) & 0x3f));
    }
    else {
        mbox_send_message(*(iVar2 + 0x3f8),0);
        mbox_client_txdone(*(iVar2 + 0x3f8),0);
    }
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x94) = 0;
    return;
}


// ===== sym.qcom_smd_release_device @ 0x080021c0 (size 36) =====

void sym.qcom_smd_release_device(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.qcom_smd_create_ept @ 0x080021e4 (size 1116) =====

int64_t * sym.qcom_smd_create_ept(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    int extraout_w9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong *arg1_00;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    iVar13 = *(arg1 + 0x3e0);
    piVar12 = iVar13 + 0x410;
    uVar6 = _raw_spin_lock_irqsave(piVar12);
    piVar11 = iVar13 + 0x400;
    for (piVar10 = *(iVar13 + 0x400); piVar11 != piVar10; piVar10 = *piVar10) {
        iVar5 = strcmp(piVar10[-0x11],arg4);
        if (iVar5 == 0) {
            arg1_00 = piVar10 + -0x14;
            _raw_spin_unlock_irqrestore(piVar12,uVar6);
            if (arg1_00 != NULL) goto code_r0x08002348;
            goto code_r0x08002274;
        }
    }
    _raw_spin_unlock_irqrestore(piVar12,uVar6);
code_r0x08002274:
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    init_wait_entry(&uStack_90,0);
    iVar14 = 0xfa;
code_r0x08002294:
    iVar7 = prepare_to_wait_event(iVar13 + 0x430,&uStack_90,1);
    uVar6 = _raw_spin_lock_irqsave(piVar12);
    for (piVar10 = *piVar11; piVar11 != piVar10; piVar10 = *piVar10) {
        iVar5 = strcmp(piVar10[-0x11],arg4);
        if (iVar5 == 0) {
            arg1_00 = piVar10 + -0x14;
            goto code_r0x080022e8;
        }
    }
    arg1_00 = NULL;
code_r0x080022e8:
    _raw_spin_unlock_irqrestore(piVar12,uVar6);
    if (iVar14 == 0 && arg1_00 != NULL) {
        iVar14 = 1;
    }
    if ((arg1_00 == NULL) && (iVar14 != 0)) {
        if (iVar7 != 0) goto code_r0x0800232c;
        iVar14 = schedule_timeout(iVar14);
        goto code_r0x08002294;
    }
    finish_wait(iVar13 + 0x430,&uStack_90);
    iVar7 = iVar14;
code_r0x0800232c:
    if (iVar7 == 0) goto code_r0x080025d0;
code_r0x08002348:
    if (*(arg1_00 + 4) != 0) {
        _dev_err(arg1,"channel %s is busy\n",arg1_00[3]);
        goto code_r0x080025d0;
    }
    piVar11 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x70);
    if (piVar11 == NULL) goto code_r0x080025d4;
    piVar12 = piVar11 + 1;
    *piVar12 = 1;
    *piVar11 = arg1;
    piVar11[2] = arg2;
    piVar11[0xb] = arg3;
    piVar11[0xc] = reloc.qcom_smd_destroy_ept.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt;
    arg1_00[1] = piVar11;
    piVar11[0xd] = arg1_00;
    iVar5 = *(arg1_00 + 0x10);
    uVar6 = *arg1_00;
    if (0xfff < iVar5) {
        iVar5 = 0x1000;
    }
    iVar13 = __kmalloc(iVar5,0xcc0);
    arg1_00[0x11] = iVar13;
    if (iVar13 == 0) goto code_r0x08002584;
    iVar13 = arg1_00[1];
    uVar8 = _raw_spin_lock_irqsave(arg1_00 + 0x12);
    *(iVar13 + 0x10) = arg2;
    _raw_spin_unlock_irqrestore(arg1_00 + 0x12,uVar8);
    sym.qcom_smd_channel_set_state(arg1_00,1);
    if (*(arg1_00 + 0x24) - 1U < 2) {
code_r0x08002450:
        sym.qcom_smd_channel_set_state(arg1_00,2);
        if (*(arg1_00 + 0x24) == 2) goto code_r0x080025d4;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_90 = 0;
        init_wait_entry(&uStack_90,0);
        puVar1 = arg1_00 + 5;
        iVar14 = prepare_to_wait_event(puVar1,&uStack_90,1);
        iVar13 = 0xfa;
        if (*(arg1_00 + 0x24) != 2) {
            do {
                if (iVar14 != 0) goto code_r0x080024b4;
                iVar13 = schedule_timeout(iVar13);
                iVar14 = prepare_to_wait_event(puVar1,&uStack_90,1);
                if (iVar13 == 0 && *(arg1_00 + 0x24) == 2) {
                    iVar13 = 1;
                }
            } while ((*(arg1_00 + 0x24) != 2) && (iVar13 != 0));
        }
        iVar14 = iVar13;
        finish_wait(puVar1,&uStack_90);
code_r0x080024b4:
        if (iVar14 != 0) goto code_r0x080025d4;
        pcVar9 = "remote side did not enter open state\n";
    }
    else {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_90 = 0;
        init_wait_entry(&uStack_90,0);
        puVar1 = arg1_00 + 5;
        iVar14 = prepare_to_wait_event(puVar1,&uStack_90,1);
        iVar5 = *(arg1_00 + 0x24);
        iVar13 = 0xfa;
        do {
            if (iVar5 - 1U < 2) break;
            if (iVar14 != 0) goto code_r0x0800244c;
            iVar13 = schedule_timeout(iVar13);
            iVar14 = prepare_to_wait_event(puVar1,&uStack_90,1);
            iVar5 = *(arg1_00 + 0x24);
            if (iVar13 == 0 && 0xfffffffd < iVar5 - 3U) {
                iVar13 = 1;
            }
        } while (iVar13 != 0);
        iVar14 = iVar13;
        finish_wait(puVar1,&uStack_90);
code_r0x0800244c:
        if (iVar14 != 0) goto code_r0x08002450;
        pcVar9 = "remote side did not enter opening state\n";
    }
    _dev_err(uVar6,pcVar9);
    sym.qcom_smd_channel_set_state(arg1_00,0);
code_r0x08002584:
    arg1_00[1] = 0;
    iVar5 = 1;
    while( true ) {
        Hint_Prefetch(piVar12,2,0,1);
        do {
            iVar2 = *piVar12;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
                *piVar12 = iVar2 - iVar5;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            kfree(piVar11);
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar12,3);
        }
code_r0x080025d0:
        piVar11 = NULL;
code_r0x080025d4:
        iVar13 = sp_el0;
        if (*(iVar13 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
        iVar5 = extraout_w9;
    }
    return piVar11;
}


// ===== sym.qcom_smd_announce_create @ 0x08002640 (size 128) =====

ulong sym.qcom_smd_announce_create(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x3c8) + 0x68);
    uVar1 = _raw_spin_lock_irqsave(arg1_00 + 0x12);
    uVar2 = sym.qcom_smd_channel_intr(arg1_00);
    _raw_spin_unlock_irqrestore(arg1_00 + 0x12,uVar1);
    if ((uVar2 & 1) != 0) {
        queue_work_on(0x20,___init_waitqueue_head,*arg1_00 + 0x478);
    }
    return 0;
}


// ===== sym.__ept_release @ 0x080026c0 (size 40) =====

void sym.__ept_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(arg1 + -8);
    return;
}


// ===== sym.qcom_smd_destroy_ept @ 0x080026e8 (size 236) =====

void sym.qcom_smd_destroy_ept(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x68);
    iVar6 = *(arg1_00 + 8);
    uVar5 = _raw_spin_lock_irqsave(arg1_00 + 0x90);
    *(iVar6 + 0x10) = 0;
    _raw_spin_unlock_irqrestore(arg1_00 + 0x90,uVar5);
    kfree(*(arg1_00 + 0x88));
    *(arg1_00 + 0x88) = 0;
    sym.qcom_smd_channel_set_state(arg1_00,0);
    sym.qcom_smd_channel_reset(arg1_00);
    piVar1 = arg1 + 8;
    *(arg1_00 + 8) = 0;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
        DataMemoryBarrier(2,1);
        kfree(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.qcom_smd_send @ 0x080027d4 (size 44) =====

void sym.qcom_smd_send(int64_t arg1,int64_t arg2)

{
    uint32_t in_w2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_smd_send(*(arg1 + 0x68),arg2,in_w2,1);
    return;
}


// ===== sym.qcom_smd_sendto @ 0x08002800 (size 44) =====

void sym.qcom_smd_sendto(int64_t arg1,int64_t arg2)

{
    uint32_t in_w2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_smd_send(*(arg1 + 0x68),arg2,in_w2,1);
    return;
}


// ===== sym.qcom_smd_trysend @ 0x0800282c (size 44) =====

void sym.qcom_smd_trysend(int64_t arg1,int64_t arg2)

{
    uint32_t in_w2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_smd_send(*(arg1 + 0x68),arg2,in_w2,0);
    return;
}


// ===== sym.qcom_smd_trysendto @ 0x08002858 (size 44) =====

void sym.qcom_smd_trysendto(int64_t arg1,int64_t arg2)

{
    uint32_t in_w2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_smd_send(*(arg1 + 0x68),arg2,in_w2,0);
    return;
}


// ===== sym.qcom_smd_poll @ 0x08002884 (size 212) =====

uint sym.qcom_smd_poll(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x68);
    if (arg3 != 0) {
        pcVar5 = *arg3;
        if (iVar6 + 0x58 != 0 && pcVar5 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar5,0x80001f0);
            (*pcVar5)(arg2,iVar6 + 0x58,arg3);
        }
    }
    iVar3 = *(iVar6 + 0x48);
    if (iVar3 == 0) {
        puVar2 = *(iVar6 + 0x40) + 0x10;
        piVar4 = *(iVar6 + 0x40) + 0xc;
    }
    else {
        puVar2 = iVar3 + 0x28;
        piVar4 = iVar3 + 0x24;
    }
    uVar1 = 0x104;
    if ((*piVar4 + ~*puVar2 & *(iVar6 + 0x80) - 1U) < 0x15) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.qcom_smd_channel_set_state @ 0x08002958 (size 284) =====

void sym.qcom_smd_channel_set_state(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = arg2 == 2;
    if (*(arg1 + 0x20) != arg2) {
        if (*(arg1 + 0x48) == 0) {
            *(*(arg1 + 0x40) + 4) = bVar1;
            iVar3 = *(arg1 + 0x48);
        }
        else {
            *(*(arg1 + 0x48) + 4) = arg2 == 2;
            iVar3 = *(arg1 + 0x48);
        }
        if (iVar3 == 0) {
            *(*(arg1 + 0x40) + 5) = bVar1;
            iVar3 = *(arg1 + 0x48);
        }
        else {
            *(iVar3 + 8) = arg2 == 2;
            iVar3 = *(arg1 + 0x48);
        }
        if (iVar3 == 0) {
            *(*(arg1 + 0x40) + 6) = bVar1;
            puVar2 = *(arg1 + 0x48);
        }
        else {
            *(iVar3 + 0xc) = arg2 == 2;
            puVar2 = *(arg1 + 0x48);
        }
        if (puVar2 == NULL) {
            puVar2 = *(arg1 + 0x40);
        }
        *puVar2 = arg2;
        if (*(arg1 + 0x48) == 0) {
            *(*(arg1 + 0x40) + 10) = 1;
        }
        else {
            *(*(arg1 + 0x48) + 0x1c) = 1;
        }
        iVar3 = *arg1;
        *(arg1 + 0x20) = arg2;
        if (*(iVar3 + 0x3f8) == 0) {
            regmap_write(*(iVar3 + 0x3b0),*(iVar3 + 0x3b8),1L << (*(iVar3 + 0x3bc) & 0x3f));
        }
        else {
            mbox_send_message(*(iVar3 + 0x3f8),0);
            mbox_client_txdone(*(iVar3 + 0x3f8),0);
        }
        return;
    }
    return;
}


// ===== sym.__qcom_smd_send @ 0x08002a74 (size 824) =====

uint64_t sym.__qcom_smd_send(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    bool bVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    int *piVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint32_t auStack_7c [5];
    int64_t iStack_68;
    
    uVar7 = arg3;
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    auStack_7c[1] = 0;
    auStack_7c[2] = 0;
    auStack_7c[3] = 0;
    auStack_7c[4] = 0;
    auStack_7c[0] = arg3;
    if ((((arg3 & 3) == 0) || (*(arg1 + 0x48) == 0)) && (arg3 + 0x14 < *(arg1 + 0x80))) {
        iVar13 = arg1 + 0x50;
        uVar9 = arg3;
        uVar3 = _raw_spin_lock_irqsave(iVar13);
        uVar14 = arg3 + 0x14;
        uVar6 = uVar3;
        while( true ) {
            iVar10 = *(arg1 + 0x48);
            if (iVar10 == 0) {
                puVar11 = *(arg1 + 0x40) + 0x10;
                piVar12 = *(arg1 + 0x40) + 0xc;
            }
            else {
                puVar11 = iVar10 + 0x28;
                piVar12 = iVar10 + 0x24;
            }
            if (uVar14 <= (*piVar12 + ~*puVar11 & *(arg1 + 0x80) - 1U)) break;
            bVar2 = *(arg1 + 0x20) != 2;
            if (bVar2 || ((arg4 ^ 1) & 1) != 0) {
                if (!bVar2) {
                    uVar6 = uVar3;
                }
                uVar8 = 0xffffffe0;
                if (!bVar2) {
                    uVar8 = 0xfffffff5;
                }
                uVar4 = uVar8;
                goto code_r0x08002d5c;
            }
            if (iVar10 == 0) {
                *(*(arg1 + 0x40) + 0xb) = 0;
            }
            else {
                *(iVar10 + 0x20) = 0;
            }
            _raw_spin_unlock_irqrestore(iVar13,uVar6);
            iVar10 = *(arg1 + 0x48);
            if (iVar10 == 0) {
                puVar11 = *(arg1 + 0x40) + 0x10;
                piVar12 = *(arg1 + 0x40) + 0xc;
            }
            else {
                puVar11 = iVar10 + 0x28;
                piVar12 = iVar10 + 0x24;
            }
            if (((*piVar12 + ~*puVar11 & *(arg1 + 0x80) - 1U) < uVar14) && (*(arg1 + 0x20) == 2)) {
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                init_wait_entry(&uStack_a8,0);
                while( true ) {
                    uVar7 = 1;
                    uVar4 = prepare_to_wait_event(arg1 + 0x58,&uStack_a8);
                    iVar10 = *(arg1 + 0x48);
                    if (iVar10 == 0) {
                        puVar11 = *(arg1 + 0x40) + 0x10;
                        piVar12 = *(arg1 + 0x40) + 0xc;
                    }
                    else {
                        puVar11 = iVar10 + 0x28;
                        piVar12 = iVar10 + 0x24;
                    }
                    if ((uVar14 <= (*piVar12 + ~*puVar11 & *(arg1 + 0x80) - 1U)) || (*(arg1 + 0x20) != 2)) {
                        finish_wait(arg1 + 0x58,&uStack_a8);
                        goto code_r0x08002b20;
                    }
                    if (uVar4 != 0) break;
                    schedule();
                }
                if (uVar4 != 0) goto code_r0x08002d68;
            }
code_r0x08002b20:
            uVar6 = _raw_spin_lock_irqsave(iVar13);
            if (*(arg1 + 0x48) == 0) {
                *(*(arg1 + 0x40) + 0xb) = 1;
            }
            else {
                *(*(arg1 + 0x48) + 0x20) = 1;
            }
        }
        if (*(arg1 + 0x20) == 2) {
            if (iVar10 == 0) {
                *(*(arg1 + 0x40) + 9) = 0;
            }
            else {
                *(iVar10 + 0x18) = 0;
            }
            sym.qcom_smd_write_fifo(arg1,auStack_7c,0x14);
            sym.qcom_smd_write_fifo(arg1,arg2,uVar9);
            if (*(arg1 + 0x48) == 0) {
                *(*(arg1 + 0x40) + 8) = 1;
            }
            else {
                *(*(arg1 + 0x48) + 0x14) = 1;
            }
            DataSynchronizationBarrier(3,2,0);
            arg1 = *arg1;
            if (*(arg1 + 0x3f8) == 0) {
                uVar9 = 1L << (*(arg1 + 0x3bc) & 0x3f);
                regmap_write(*(arg1 + 0x3b0),*(arg1 + 0x3b8));
            }
            else {
                mbox_send_message(*(arg1 + 0x3f8),0);
                mbox_client_txdone(*(arg1 + 0x3f8),0);
            }
            uVar4 = 0;
            uVar7 = uVar9;
        }
        else {
            uVar4 = 0xffffffe0;
        }
code_r0x08002d5c:
        _raw_spin_unlock_irqrestore(iVar13,uVar6);
    }
    else {
        uVar4 = 0xffffffea;
    }
code_r0x08002d68:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return uVar4 & 0xffffffff;
    }
    auVar15 = __stack_chk_fail();
    iVar13 = auVar15._8_8_;
    uVar9 = auVar15._0_8_;
    *extraout_x18 = sym.qcom_smd_write_fifo;
    iVar10 = *(uVar9 + 0x48);
    if (iVar10 == 0) {
        puVar11 = *(uVar9 + 0x40) + 0x10;
    }
    else {
        puVar11 = iVar10 + 0x28;
    }
    uVar8 = *puVar11;
    uVar4 = *(uVar9 + 0x80) - uVar8;
    uVar14 = uVar7;
    if (uVar4 <= uVar7) {
        uVar14 = uVar4;
    }
    if (uVar14 == 0) {
        uVar5 = uVar9;
        if (uVar7 <= uVar4) goto code_r0x08002e80;
        uVar6 = *(uVar9 + 0x70);
        uVar14 = uVar7;
        if (iVar10 == 0) goto code_r0x08002e78;
    }
    else {
        iVar1 = *(uVar9 + 0x70) + uVar8;
        if (iVar10 == 0) {
            uVar5 = __memcpy_toio(iVar1,iVar13,uVar14);
            if (uVar7 <= uVar4) goto code_r0x08002e80;
            uVar6 = *(uVar9 + 0x70);
            iVar13 = iVar13 + uVar14;
            uVar14 = uVar7 - uVar14;
code_r0x08002e78:
            uVar5 = __memcpy_toio(uVar6,iVar13,uVar14);
            goto code_r0x08002e80;
        }
        uVar5 = __iowrite32_copy(iVar1,iVar13,uVar14 >> 2);
        if (uVar7 <= uVar4) goto code_r0x08002e80;
        uVar6 = *(uVar9 + 0x70);
        iVar13 = iVar13 + uVar14;
        uVar14 = uVar7 - uVar14;
    }
    uVar5 = __iowrite32_copy(uVar6,iVar13,uVar14 >> 2);
code_r0x08002e80:
    if (*(uVar9 + 0x48) == 0) {
        puVar11 = *(uVar9 + 0x40) + 0x10;
    }
    else {
        puVar11 = *(uVar9 + 0x48) + 0x28;
    }
    *puVar11 = *(uVar9 + 0x80) - 1U & uVar8 + uVar7;
    return uVar5;
}


// ===== sym.qcom_smd_write_fifo @ 0x08002dac (size 284) =====

void sym.qcom_smd_write_fifo(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x48);
    if (iVar4 == 0) {
        puVar6 = *(arg1 + 0x40) + 0x10;
    }
    else {
        puVar6 = iVar4 + 0x28;
    }
    uVar1 = *puVar6;
    uVar7 = *(arg1 + 0x80) - uVar1;
    uVar5 = arg3;
    if (uVar7 <= arg3) {
        uVar5 = uVar7;
    }
    if (uVar5 == 0) {
        if (arg3 <= uVar7) goto code_r0x08002e80;
        uVar2 = *(arg1 + 0x70);
        iVar3 = arg3;
        uVar5 = arg3;
        if (iVar4 == 0) goto code_r0x08002e78;
    }
    else {
        iVar3 = *(arg1 + 0x70) + uVar1;
        if (iVar4 == 0) {
            __memcpy_toio(iVar3,arg2,uVar5);
            if (arg3 <= uVar7) goto code_r0x08002e80;
            uVar2 = *(arg1 + 0x70);
            arg2 = arg2 + uVar5;
            iVar3 = arg3 - uVar5;
code_r0x08002e78:
            __memcpy_toio(uVar2,arg2,iVar3);
            goto code_r0x08002e80;
        }
        __iowrite32_copy(iVar3,arg2,uVar5 >> 2);
        if (arg3 <= uVar7) goto code_r0x08002e80;
        uVar2 = *(arg1 + 0x70);
        arg2 = arg2 + uVar5;
        uVar5 = arg3 - uVar5;
    }
    __iowrite32_copy(uVar2,arg2,uVar5 >> 2);
code_r0x08002e80:
    if (*(arg1 + 0x48) == 0) {
        puVar6 = *(arg1 + 0x40) + 0x10;
    }
    else {
        puVar6 = *(arg1 + 0x48) + 0x28;
    }
    *puVar6 = *(arg1 + 0x80) - 1U & uVar1 + arg3;
    return;
}


// ===== sym.qcom_smd_channel_intr @ 0x08002ec8 (size 804) =====

uint64_t sym.qcom_smd_channel_intr(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t in_x2;
    int64_t iVar10;
    uint32_t *puVar11;
    int64_t iVar12;
    int *piVar13;
    int *piVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar15;
    uint64_t uVar16;
    ulong *puVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    iVar10 = *(arg1 + 0x48);
    uStack_5c = 0;
    if (iVar10 == 0) {
        piVar13 = *(arg1 + 0x40) + 0x14;
    }
    else {
        piVar13 = iVar10 + 0x2c;
    }
    iVar3 = *piVar13;
    iVar4 = *(arg1 + 0x24);
    if (iVar3 != iVar4) {
        in_x2 = 0;
        *(arg1 + 0x24) = iVar3;
        __wake_up(arg1 + 0x28,1,0,0);
        iVar10 = *(arg1 + 0x48);
    }
    if (iVar10 == 0) {
        *(*(arg1 + 0x40) + 0x1e) = 0;
        iVar10 = *(arg1 + 0x48);
        if (iVar10 != 0) goto code_r0x08002f54;
code_r0x08002f9c:
        if (*(*(arg1 + 0x40) + 0xb) == '\0') {
code_r0x08002f5c:
            in_x2 = 0;
            __wake_up(arg1 + 0x58,1,0,0);
        }
    }
    else {
        *(iVar10 + 0x48) = 0;
        iVar10 = *(arg1 + 0x48);
        if (iVar10 == 0) goto code_r0x08002f9c;
code_r0x08002f54:
        if (*(iVar10 + 0x20) == 0) goto code_r0x08002f5c;
    }
    if (*(arg1 + 0x20) == 2) {
        if (*(arg1 + 0x48) == 0) {
            *(*(arg1 + 0x40) + 0x1c) = 0;
        }
        else {
            *(*(arg1 + 0x48) + 0x40) = 0;
        }
        iVar10 = *(arg1 + 0x48);
joined_r0x08002fc0:
        if (iVar10 != 0) goto code_r0x08002ff8;
code_r0x08003004:
        piVar13 = *(arg1 + 0x40) + 0x24;
        piVar14 = *(arg1 + 0x40) + 0x20;
        do {
            uVar5 = *(arg1 + 0x94);
            uVar2 = *(arg1 + 0x80) - 1 & *piVar13 - *piVar14;
            if ((uVar5 != 0) || (uVar2 < 0x14)) {
                if ((uVar5 != 0) && (uVar5 <= uVar2)) {
                    if (iVar10 == 0) {
                        puVar11 = *(arg1 + 0x40) + 0x20;
                    }
                    else {
                        puVar11 = iVar10 + 0x50;
                    }
                    puVar17 = *(arg1 + 8);
                    if (*puVar11 + uVar5 < *(arg1 + 0x80)) {
                        iVar10 = *(arg1 + 0x78) + *puVar11;
                    }
                    else {
                        iVar10 = *(arg1 + 0x88);
                        sym.qcom_smd_channel_peek(arg1,iVar10,uVar5);
                    }
                    pcVar15 = puVar17[2];
                    __cfi_slowpath_diag(0x9ed87ad60107a9bd,pcVar15,0x8000210);
                    in_x2 = uVar5;
                    iVar6 = (*pcVar15)(*puVar17,iVar10,in_x2,puVar17[0xb],0xffffffff);
                    iVar10 = *(arg1 + 0x48);
                    if (-1 < iVar6) {
                        if (iVar10 == 0) {
                            puVar11 = *(arg1 + 0x40) + 0x20;
                        }
                        else {
                            puVar11 = iVar10 + 0x50;
                        }
                        *puVar11 = *(arg1 + 0x80) - 1U & *puVar11 + uVar5;
                        *(arg1 + 0x94) = 0;
                        iVar10 = *(arg1 + 0x48);
                        goto joined_r0x08002fc0;
                    }
                }
                if (iVar10 == 0) {
                    *(*(arg1 + 0x40) + 0x1d) = 1;
                    iVar10 = *(arg1 + 0x48);
                    if (iVar10 != 0) goto code_r0x0800313c;
code_r0x0800315c:
                    if (*(*(arg1 + 0x40) + 0x1f) != '\0') break;
                }
                else {
                    *(iVar10 + 0x44) = 1;
                    iVar10 = *(arg1 + 0x48);
                    if (iVar10 == 0) goto code_r0x0800315c;
code_r0x0800313c:
                    if (*(iVar10 + 0x4c) != 0) break;
                }
                DataSynchronizationBarrier(3,2,0);
                arg1 = *arg1;
                if (*(arg1 + 0x3f8) == 0) {
                    in_x2 = 1L << (*(arg1 + 0x3bc) & 0x3f);
                    regmap_write(*(arg1 + 0x3b0),*(arg1 + 0x3b8));
                }
                else {
                    mbox_send_message(*(arg1 + 0x3f8),0);
                    mbox_client_txdone(*(arg1 + 0x3f8),0);
                }
                break;
            }
            in_x2 = 4;
            sym.qcom_smd_channel_peek(arg1,&uStack_5c,4);
            if (*(arg1 + 0x48) == 0) {
                puVar11 = *(arg1 + 0x40) + 0x20;
            }
            else {
                puVar11 = *(arg1 + 0x48) + 0x50;
            }
            *puVar11 = *(arg1 + 0x80) - 1U & *puVar11 + 0x14;
            *(arg1 + 0x94) = uStack_5c;
            iVar10 = *(arg1 + 0x48);
            if (iVar10 == 0) goto code_r0x08003004;
code_r0x08002ff8:
            piVar13 = iVar10 + 0x54;
            piVar14 = iVar10 + 0x50;
        } while( true );
    }
    iVar10 = sp_el0;
    uVar7 = iVar3 != iVar4;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    auVar18 = __stack_chk_fail(uVar7);
    iVar10 = auVar18._8_8_;
    iVar8 = auVar18._0_8_;
    *extraout_x18 = sym.qcom_smd_channel_peek;
    iVar12 = *(iVar8 + 0x48);
    if (iVar12 == 0) {
        puVar11 = *(iVar8 + 0x40) + 0x20;
    }
    else {
        puVar11 = iVar12 + 0x50;
    }
    uVar16 = *(iVar8 + 0x80) - *puVar11;
    uVar7 = in_x2;
    if (uVar16 <= in_x2) {
        uVar7 = uVar16;
    }
    if (uVar7 == 0) {
        if (in_x2 <= uVar16) {
            return in_x2;
        }
        uVar9 = *(iVar8 + 0x78);
        uVar7 = in_x2;
        if (iVar12 == 0) goto code_r0x080032b8;
    }
    else {
        iVar1 = *(iVar8 + 0x78) + *puVar11;
        if (iVar12 == 0) {
            __memcpy_fromio(iVar10,iVar1,uVar7);
            if (in_x2 <= uVar16) {
                return in_x2;
            }
            iVar10 = iVar10 + uVar7;
            uVar9 = *(iVar8 + 0x78);
            uVar7 = in_x2 - uVar7;
code_r0x080032b8:
            __memcpy_fromio(iVar10,uVar9,uVar7);
            return in_x2;
        }
        __ioread32_copy(iVar10,iVar1,uVar7 >> 2);
        if (in_x2 <= uVar16) {
            return in_x2;
        }
        uVar9 = *(iVar8 + 0x78);
        iVar10 = iVar10 + uVar7;
        uVar7 = in_x2 - uVar7;
    }
    __ioread32_copy(iVar10,uVar9,uVar7 >> 2);
    return in_x2;
}


// ===== sym.qcom_smd_channel_peek @ 0x080031ec (size 244) =====

int64_t sym.qcom_smd_channel_peek(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x48);
    if (iVar3 == 0) {
        puVar4 = *(arg1 + 0x40) + 0x20;
    }
    else {
        puVar4 = iVar3 + 0x50;
    }
    uVar6 = *(arg1 + 0x80) - *puVar4;
    uVar5 = arg3;
    if (uVar6 <= arg3) {
        uVar5 = uVar6;
    }
    if (uVar5 == 0) {
        if (arg3 <= uVar6) {
            return arg3;
        }
        uVar1 = *(arg1 + 0x78);
        iVar2 = arg3;
        uVar5 = arg3;
        if (iVar3 == 0) goto code_r0x080032b8;
    }
    else {
        iVar2 = *(arg1 + 0x78) + *puVar4;
        if (iVar3 == 0) {
            __memcpy_fromio(arg2,iVar2,uVar5);
            if (arg3 <= uVar6) {
                return arg3;
            }
            arg2 = arg2 + uVar5;
            uVar1 = *(arg1 + 0x78);
            iVar2 = arg3 - uVar5;
code_r0x080032b8:
            __memcpy_fromio(arg2,uVar1,iVar2);
            return arg3;
        }
        __ioread32_copy(arg2,iVar2,uVar5 >> 2);
        if (arg3 <= uVar6) {
            return arg3;
        }
        uVar1 = *(arg1 + 0x78);
        arg2 = arg2 + uVar5;
        uVar5 = arg3 - uVar5;
    }
    __ioread32_copy(arg2,uVar1,uVar5 >> 2);
    return arg3;
}


// ===== sym.qcom_smd_probe @ 0x080032e0 (size 140) =====

ulong sym.qcom_smd_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = qcom_smem_get(0xffffffff,0xd,0);
    if (iVar1 == -0x205) {
        uVar2 = 0xfffffdfb;
    }
    else {
        iVar1 = of_get_next_available_child(*(arg1 + 0x300),0);
        uVar2 = 0;
        if (iVar1 != 0) {
            do {
                sym.qcom_smd_register_edge(arg1 + 0x10,iVar1);
                iVar1 = of_get_next_available_child(*(arg1 + 0x300),iVar1);
            } while (iVar1 != 0);
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.qcom_smd_remove @ 0x0800336c (size 100) =====

int sym.qcom_smd_remove(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = device_for_each_child(arg1 + 0x10,0,sym.qcom_smd_remove_edge.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt);
    if (iVar1 != 0) {
        _dev_warn(arg1 + 0x10,"can\'t remove smd device: %d\n",iVar1);
    }
    return iVar1;
}


// ===== sym.qcom_smd_remove_edge @ 0x080033d0 (size 40) =====

ulong sym.qcom_smd_remove_edge(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_smd_unregister_edge(arg1);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080033f8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800343c

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
    //switch table (4 cases) at 0x8000230
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003450);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003484 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_smd_probe.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080034b8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_smd_probe.e4b3ac0aa88198cf12ca80dc3d2a0ec8.cfi_jt);
    return;
}

