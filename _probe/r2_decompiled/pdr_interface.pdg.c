// decompiled from pdr_interface by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 452) =====

//WARNING: Switch with 1 destination removed at 0x08002690

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x16755706e9020ba) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 == -0x550b9e52359ac614) {
                if ((pcVar1 + -0x80011f8 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08002650;
            }
            if (arg1 != -0x4026b17f3083f490) goto code_r0x08002650;
            pcVar2 = sym.pdr_handle_release.cfi_jt;
        }
        else {
            if (arg1 != -0x2ee0710dce68437c) {
                if (arg1 != -0xfae0556695233a4) goto code_r0x08002650;
                pcVar2 = sym.pdr_notifier_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt;
                goto code_r0x08001198;
            }
            pcVar2 = sym.ind_notif_timeout_handler.ee6aea036f715ac630b613840e2b657c.cfi_jt;
        }
    }
    else if (arg1 < 0x2b1394c7097a0a26) {
        if (arg1 == 0x16755706e9020ba) {
            pcVar2 = sym.pdr_add_service_lookup.cfi_jt;
code_r0x08001198:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002650;
        }
        if (arg1 != 0x14302eefb46c1172) goto code_r0x08002650;
        pcVar2 = sym.pdr_restart_pd.cfi_jt;
    }
    else if (arg1 == 0x2b1394c7097a0a26) {
        pcVar2 = sym.pdr_indication_cb.ee6aea036f715ac630b613840e2b657c.cfi_jt;
    }
    else {
        if (arg1 != 0x39b31d5882d77464) {
            if (arg1 != 0x77b71c1b418c981d) goto code_r0x08002650;
            pcVar2 = sym.pdr_notifier_del_server.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            goto code_r0x08001198;
        }
        pcVar2 = sym.pdr_handle_alloc.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002650:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80026a4);
    (*pcVar1)();
}


// ===== sym.pdr_indication_cb.ee6aea036f715ac630b613840e2b657c.cfi_jt @ 0x080011d0 (size 8) =====

void sym.pdr_indication_cb.ee6aea036f715ac630b613840e2b657c.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,uint *param_4)

{
    int64_t iVar1;
    uint *puVar2;
    uint uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    ulong *in_x18;
    char *pcVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_4 != NULL) && (pcVar7 = param_4 + 1, *pcVar7 != '\0')) && (uVar5 = strlen(pcVar7), uVar5 < 0x41)) {
        iVar1 = param_1 + 0x170;
        mutex_lock(iVar1);
        for (piVar8 = *(param_1 + 0x150); piVar8 != param_1 + 0x150; piVar8 = *piVar8) {
            iVar4 = strcmp(piVar8 + -0x6f,pcVar7);
            if (iVar4 == 0) {
                mutex_unlock(iVar1);
                _printk(0x80006a8,pcVar7,*param_4,*(param_4 + 0x46));
                puVar6 = kmem_cache_alloc_trace(_strlen,0xdc0,0x58);
                if (puVar6 == NULL) {
                    return;
                }
                uVar3 = *param_4;
                *(puVar6 + 1) = *(param_4 + 0x46);
                *puVar6 = uVar3;
                *(puVar6 + 2) = piVar8 + -0x16;
                init_timer_key(puVar6 + 8,sym.ind_notif_timeout_handler.ee6aea036f715ac630b613840e2b657c.cfi_jt,0,0,
                               0);
                mutex_lock(iVar1);
                piVar8 = *(param_1 + 0x168);
                puVar2 = puVar6 + 4;
                uVar5 = __list_add_valid(puVar2,piVar8,param_1 + 0x160);
                if ((uVar5 & 1) != 0) {
                    *(param_1 + 0x168) = puVar2;
                    *(puVar6 + 4) = param_1 + 0x160;
                    *(puVar6 + 6) = piVar8;
                    *piVar8 = puVar2;
                }
                mutex_unlock(iVar1);
                queue_work_on(0x20,*(param_1 + 0x2a0),param_1 + 0x268);
                return;
            }
        }
        mutex_unlock(iVar1);
    }
    return;
}


// ===== sym.pdr_restart_pd.cfi_jt @ 0x080011d8 (size 8) =====

uint64_t sym.pdr_restart_pd.cfi_jt(uint64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
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
    uint uStack_88;
    uint uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uchar uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    uVar1 = 0xffffffea;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_84 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
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
    if ((((param_1 != 0) && (param_1 < 0xfffffffffffff001)) && (uVar1 = 0xffffffea, param_2 != 0)) &&
       (param_2 < 0xfffffffffffff001)) {
        if (*(param_2 + 0xa7) == '\0') {
            mutex_lock(param_1 + 0x2b0);
            for (piVar5 = *(param_1 + 0x290); param_1 + 0x290 != piVar5; piVar5 = *piVar5) {
                if (piVar5 + -0x16 == param_2) {
                    if (*(param_2 + 0xa8) != '\0') {
                        strcpy(&uStack_80,param_2 + 0x41);
                        uStack_90 = *(param_2 + 0x84);
                        uStack_88 = *(param_2 + 0x8c);
                    }
                    break;
                }
            }
            mutex_unlock(param_1 + 0x2b0);
            if (uStack_80 != '\0') {
                uVar1 = qmi_txn_init(param_1 + 0x140,&uStack_d8,obj.servreg_restart_pd_resp_ei,&uStack_84);
                if (-1 < uVar1) {
                    uVar1 = qmi_send_request(param_1 + 0x140,&uStack_90,&uStack_d8,0x24,0x43,
                                             obj.servreg_restart_pd_req_ei,&uStack_80);
                    if (uVar1 < 0) {
                        qmi_txn_cancel(&uStack_d8);
                    }
                    else {
                        uVar1 = qmi_txn_wait(&uStack_d8,0x4e2);
                        if (uVar1 < 0) {
                            _printk(0x8000875,&uStack_80,uVar1);
                        }
                        else if (((uStack_84 & 0xffff) == 1) && (uStack_84._2_2_ == 0x45)) {
                            _printk(0x80007c0,&uStack_80);
                            uVar1 = 0xffffffa1;
                        }
                        else if ((uStack_84 & 0xffff) == 0) {
                            uVar1 = 0;
                        }
                        else {
                            _printk(0x800071d,&uStack_80);
                            uVar1 = 0xffffff87;
                        }
                    }
                }
                goto code_r0x080014d8;
            }
        }
        uVar1 = 0xffffffea;
    }
code_r0x080014d8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.pdr_handle_alloc;
    if (auVar6._0_8_ == 0) {
        uVar3 = 0xffffffffffffffea;
    }
    else {
        uVar3 = kmem_cache_alloc_trace(_strlen,0xdc0,0x3f8);
        if (uVar3 == 0) {
            uVar3 = 0xfffffffffffffff4;
        }
        else {
            *(uVar3 + 1000) = auVar6;
            __mutex_init(uVar3 + 0x2e0,"&pdr->status_lock",obj.pdr_handle_alloc.__key);
            __mutex_init(uVar3 + 0x2b0,"&pdr->list_lock",obj.pdr_handle_alloc.__key);
            __mutex_init(uVar3 + 0x310,"&pdr->lock",obj.pdr_handle_alloc.__key);
            *(uVar3 + 0x290) = uVar3 + 0x290;
            *(uVar3 + 0x298) = uVar3 + 0x290;
            *(uVar3 + 0x2a0) = uVar3 + 0x2a0;
            *(uVar3 + 0x2a8) = uVar3 + 0x2a0;
            *(uVar3 + 0x348) = 0xfffffffe0;
            *(uVar3 + 0x350) = uVar3 + 0x350;
            *(uVar3 + 0x358) = uVar3 + 0x350;
            *(uVar3 + 0x360) = sym.pdr_locator_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            *(uVar3 + 0x378) = 0xfffffffe0;
            *(uVar3 + 0x380) = uVar3 + 0x380;
            *(uVar3 + 0x388) = uVar3 + 0x380;
            *(uVar3 + 0x390) = sym.pdr_notifier_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            *(uVar3 + 0x3a8) = 0xfffffffe0;
            *(uVar3 + 0x3b0) = uVar3 + 0x3b0;
            *(uVar3 + 0x3b8) = uVar3 + 0x3b0;
            *(uVar3 + 0x3c0) = sym.pdr_indack_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            iVar4 = alloc_workqueue(0x80006e7,0xe000a,1,"pdr_notifier_wq");
            *(uVar3 + 0x3d8) = iVar4;
            if (iVar4 == 0) {
                iVar2 = -0xc;
            }
            else {
                iVar4 = alloc_workqueue("pdr_indack_wq",0xa0012,1);
                *(uVar3 + 0x3e0) = iVar4;
                if (iVar4 == 0) {
                    iVar2 = -0xc;
                }
                else {
                    iVar2 = qmi_handle_init(uVar3,0x955,
                                            reloc.pdr_locator_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt,0);
                    if (-1 < iVar2) {
                        iVar2 = qmi_add_lookup(uVar3,0x40,1,1);
                        if ((-1 < iVar2) &&
                           (iVar2 = qmi_handle_init(uVar3 + 0x140,0x4f,
                                                    reloc.pdr_notifier_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt
                                                    ,obj.qmi_indication_handler), -1 < iVar2)) {
                            return uVar3;
                        }
                        qmi_handle_release(uVar3);
                    }
                    destroy_workqueue(*(uVar3 + 0x3e0));
                }
                destroy_workqueue(*(uVar3 + 0x3d8));
            }
            kfree(uVar3);
            uVar3 = iVar2;
        }
    }
    return uVar3;
}


// ===== sym.pdr_handle_release.cfi_jt @ 0x080011e0 (size 8) =====

void sym.pdr_handle_release.cfi_jt(uint64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (param_1 < 0xfffffffffffff001)) {
        mutex_lock(param_1 + 0x2b0);
        piVar3 = *(param_1 + 0x290);
        while (param_1 + 0x290 != piVar3) {
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
            kfree(piVar3 + -0x16);
            piVar3 = piVar5;
        }
        mutex_unlock(param_1 + 0x2b0);
        cancel_work_sync(param_1 + 0x348);
        cancel_work_sync(param_1 + 0x378);
        cancel_work_sync(param_1 + 0x3a8);
        destroy_workqueue(*(param_1 + 0x3d8));
        destroy_workqueue(*(param_1 + 0x3e0));
        qmi_handle_release(param_1);
        qmi_handle_release(param_1 + 0x140);
        kfree(param_1);
    }
    return;
}


// ===== sym.ind_notif_timeout_handler.ee6aea036f715ac630b613840e2b657c.cfi_jt @ 0x080011e8 (size 8) =====

void sym.ind_notif_timeout_handler.ee6aea036f715ac630b613840e2b657c.cfi_jt
               (int64_t param_1,ulong param_2,uint *param_3)

{
    ushort uVar1;
    code *pcVar2;
    uchar *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + -0x18);
    uVar1 = *(param_1 + -0x1c);
    *param_3 = 0x8009000;
    if (qcom_device_shutdown_in_progress == 0x0) {
        auVar5 = panic("PDR: Indication notifier %s, state: 0x%x, trans-id: %d\n taking too long",iVar4 + 0x41,
                       *(iVar4 + 0xa0),uVar1);
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80026a4);
        (*pcVar2)();
    }
    __warn_printk();
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8002638);
    (*pcVar2)();
}


// ===== sym.pdr_handle_alloc.cfi_jt @ 0x080011f0 (size 8) =====

int64_t sym.pdr_handle_alloc.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar2 = -0x16;
    }
    else {
        iVar2 = kmem_cache_alloc_trace(_strlen,0xdc0,0x3f8);
        if (iVar2 == 0) {
            iVar2 = -0xc;
        }
        else {
            *(iVar2 + 1000) = param_1;
            *(iVar2 + 0x3f0) = param_2;
            __mutex_init(iVar2 + 0x2e0,"&pdr->status_lock",obj.pdr_handle_alloc.__key);
            __mutex_init(iVar2 + 0x2b0,"&pdr->list_lock",obj.pdr_handle_alloc.__key);
            __mutex_init(iVar2 + 0x310,"&pdr->lock",obj.pdr_handle_alloc.__key);
            *(iVar2 + 0x290) = iVar2 + 0x290;
            *(iVar2 + 0x298) = iVar2 + 0x290;
            *(iVar2 + 0x2a0) = iVar2 + 0x2a0;
            *(iVar2 + 0x2a8) = iVar2 + 0x2a0;
            *(iVar2 + 0x348) = 0xfffffffe0;
            *(iVar2 + 0x350) = iVar2 + 0x350;
            *(iVar2 + 0x358) = iVar2 + 0x350;
            *(iVar2 + 0x360) = sym.pdr_locator_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            *(iVar2 + 0x378) = 0xfffffffe0;
            *(iVar2 + 0x380) = iVar2 + 0x380;
            *(iVar2 + 0x388) = iVar2 + 0x380;
            *(iVar2 + 0x390) = sym.pdr_notifier_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            *(iVar2 + 0x3a8) = 0xfffffffe0;
            *(iVar2 + 0x3b0) = iVar2 + 0x3b0;
            *(iVar2 + 0x3b8) = iVar2 + 0x3b0;
            *(iVar2 + 0x3c0) = sym.pdr_indack_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            iVar3 = alloc_workqueue(0x80006e7,0xe000a,1,"pdr_notifier_wq");
            *(iVar2 + 0x3d8) = iVar3;
            if (iVar3 == 0) {
                iVar1 = -0xc;
            }
            else {
                iVar3 = alloc_workqueue("pdr_indack_wq",0xa0012,1);
                *(iVar2 + 0x3e0) = iVar3;
                if (iVar3 == 0) {
                    iVar1 = -0xc;
                }
                else {
                    iVar1 = qmi_handle_init(iVar2,0x955,
                                            reloc.pdr_locator_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt,0);
                    if (-1 < iVar1) {
                        iVar1 = qmi_add_lookup(iVar2,0x40,1,1);
                        if ((-1 < iVar1) &&
                           (iVar1 = qmi_handle_init(iVar2 + 0x140,0x4f,
                                                    reloc.pdr_notifier_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt
                                                    ,obj.qmi_indication_handler), -1 < iVar1)) {
                            return iVar2;
                        }
                        qmi_handle_release(iVar2);
                    }
                    destroy_workqueue(*(iVar2 + 0x3e0));
                }
                destroy_workqueue(*(iVar2 + 0x3d8));
            }
            kfree(iVar2);
            iVar2 = iVar1;
        }
    }
    return iVar2;
}


// ===== sym.pdr_indack_work.ee6aea036f715ac630b613840e2b657c.cfi_jt @ 0x080011f8 (size 8) =====

void sym.pdr_indack_work.ee6aea036f715ac630b613840e2b657c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    ushort uVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_bc;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ushort uStack_78;
    ushort uStack_76;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    piVar9 = param_1 + -0x108;
    iStack_70 = *(iVar1 + 0x5e0);
    if (*piVar9 != piVar9) {
        piVar11 = *piVar9;
        do {
            iVar2 = piVar11[-1];
            piVar3 = *piVar11;
            mutex_lock(param_1 + -200);
            *(iVar2 + 0xa0) = piVar11[-2];
            mod_timer(piVar11 + 2,_kmem_cache_alloc_trace + 0x8ca);
            pcVar10 = *(param_1 + 0x40);
            __cfi_slowpath_diag(0x717e13c02c8a8b12,pcVar10,0x80005a0);
            iVar1 = iVar2 + 0x41;
            (*pcVar10)(*(iVar2 + 0xa0),iVar1,*(param_1 + 0x48));
            del_timer_sync(piVar11 + 2);
            mutex_unlock(param_1 + -200);
            uVar5 = *(piVar11 + -0xc);
            uStack_bc = 0;
            uStack_78 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            uStack_108 = 0;
            iVar6 = qmi_txn_init(param_1 + -0x268,&uStack_108,obj.servreg_set_ack_resp_ei,&uStack_bc);
            if (-1 < iVar6) {
                uStack_76 = uVar5;
                strcpy(&uStack_b8,iVar1);
                qmi_send_request(param_1 + -0x268,iVar2 + 0x84,&uStack_108,0x23,0x48,obj.servreg_set_ack_req_ei,
                                 &uStack_b8);
                qmi_txn_cancel(&uStack_108);
            }
            _printk(0x800066b,iVar1,*(iVar2 + 0xa0),*(piVar11 + -0xc));
            mutex_lock(param_1 + -0xf8);
            uVar7 = __list_del_entry_valid(piVar11);
            if ((uVar7 & 1) != 0) {
                iVar1 = *piVar11;
                piVar4 = piVar11[1];
                *(iVar1 + 8) = piVar4;
                *piVar4 = iVar1;
            }
            *piVar11 = -0x2152ffffffffff00;
            piVar11[1] = -0x2152fffffffffede;
            mutex_unlock(param_1 + -0xf8);
            kfree(piVar11 + -2);
            piVar11 = piVar3;
        } while (piVar3 != piVar9);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_70) {
        return;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18 = sym.pdr_handle_release;
    if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
        mutex_lock(uVar7 + 0x2b0);
        piVar9 = *(uVar7 + 0x290);
        while (uVar7 + 0x290 != piVar9) {
            piVar11 = *piVar9;
            uVar8 = __list_del_entry_valid(piVar9);
            if ((uVar8 & 1) != 0) {
                iVar1 = *piVar9;
                piVar3 = piVar9[1];
                *(iVar1 + 8) = piVar3;
                *piVar3 = iVar1;
            }
            *piVar9 = -0x2152ffffffffff00;
            piVar9[1] = -0x2152fffffffffede;
            kfree(piVar9 + -0x16);
            piVar9 = piVar11;
        }
        mutex_unlock(uVar7 + 0x2b0);
        cancel_work_sync(uVar7 + 0x348);
        cancel_work_sync(uVar7 + 0x378);
        cancel_work_sync(uVar7 + 0x3a8);
        destroy_workqueue(*(uVar7 + 0x3d8));
        destroy_workqueue(*(uVar7 + 0x3e0));
        qmi_handle_release(uVar7);
        qmi_handle_release(uVar7 + 0x140);
        kfree(uVar7);
    }
    return;
}


// ===== sym.pdr_notifier_work.ee6aea036f715ac630b613840e2b657c.cfi_jt @ 0x08001200 (size 8) =====

void sym.pdr_notifier_work.ee6aea036f715ac630b613840e2b657c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ushort uVar4;
    int iVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t *piVar12;
    int64_t unaff_x21;
    uint64_t unaff_x22;
    int64_t unaff_x23;
    code *pcVar13;
    ulong unaff_x24;
    code *unaff_x25;
    ulong unaff_x26;
    int64_t *piVar14;
    code *unaff_x28;
    ulong unaff_x30;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    uint uStack_1dc;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ushort uStack_198;
    ushort uStack_196;
    int64_t iStack_190;
    uchar *puStack_180;
    code *pcStack_178;
    code *pcStack_170;
    int64_t *piStack_168;
    ulong uStack_160;
    code *pcStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uint64_t uStack_140;
    int64_t iStack_138;
    int64_t *piStack_130;
    int64_t iStack_128;
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
    uint uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ushort uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_70 = *(iVar1 + 0x5e0);
    iStack_118 = param_1 + -200;
    mutex_lock();
    piVar12 = param_1 + -0xe8;
    piVar14 = *piVar12;
    if (piVar14 != piVar12) {
        unaff_x19 = param_1 + -0x378;
        unaff_x21 = param_1 + -0x238;
        unaff_x22 = &uStack_b8 | 1;
        unaff_x23 = param_1 + -0x98;
        unaff_x24 = 0x8000580;
        unaff_x25 = obj.servreg_register_listener_resp_ei;
        unaff_x26 = 0xfffffff;
        do {
            if (piVar14[-1] == '\0') {
                if (*(piVar14 + -0xb) != '\0') {
                    *(piVar14 + -0xb) = 0;
                    goto code_r0x08001c4c;
                }
            }
            else if (*(piVar14 + -0xc) != '\0') {
                *(piVar14 + -0xc) = 0;
                uStack_c0 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_78 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_b8 = 0;
                uStack_b0 = 0;
                uStack_e0 = 0;
                uStack_d8 = 0;
                uStack_f0 = 0;
                uStack_e8 = 0;
                uStack_100 = 0;
                uStack_f8 = 0;
                uStack_110 = 0;
                uStack_108 = 0;
                iVar5 = qmi_txn_init(unaff_x21,&uStack_110,obj.servreg_register_listener_resp_ei,&uStack_c8);
                if (iVar5 < 0) {
code_r0x08001c4c:
                    *(piVar14 + -2) = 0xfffffff;
                }
                else {
                    uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
                    strcpy(unaff_x22,piVar14 + -0x6f);
                    iVar5 = qmi_send_request(unaff_x21,piVar14 + -0x2c,&uStack_110,0x20,0x47,
                                             obj.servreg_register_listener_req_ei,&uStack_b8);
                    if (iVar5 < 0) {
                        qmi_txn_cancel(&uStack_110);
                        goto code_r0x08001c4c;
                    }
                    uVar6 = qmi_txn_wait(&uStack_110,0x4e2);
                    if (uVar6 < 0) {
                        uVar7 = 0x800076e;
code_r0x08001d84:
                        _printk(uVar7,piVar14 + -0x6f,uVar6);
                        goto code_r0x08001c4c;
                    }
                    if (uStack_c8 != 0) {
                        uVar6 = uStack_c8._2_2_;
                        uVar7 = 0x800089f;
                        goto code_r0x08001d84;
                    }
                    *(piVar14 + -2) = uStack_c0;
                }
                mutex_lock(unaff_x23);
                unaff_x28 = *(param_1 + 0x70);
                __cfi_slowpath_diag(0x717e13c02c8a8b12,unaff_x28,0x8000580);
                (*unaff_x28)(piVar14[-2],piVar14 + -0x6f,*(param_1 + 0x78));
                mutex_unlock(unaff_x23);
            }
            piVar14 = *piVar14;
        } while (piVar14 != piVar12);
    }
    mutex_unlock(iStack_118);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_70) {
        return;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.pdr_indack_work;
    pcStack_178 = sym.pdr_indack_work;
    iVar1 = sp_el0;
    piVar11 = iVar8 + -0x108;
    iStack_190 = *(iVar1 + 0x5e0);
    puStack_180 = &stack0xffffffffffffffa0;
    pcStack_170 = unaff_x28;
    piStack_168 = piVar14;
    uStack_160 = unaff_x26;
    pcStack_158 = unaff_x25;
    uStack_150 = unaff_x24;
    iStack_148 = unaff_x23;
    uStack_140 = unaff_x22;
    iStack_138 = unaff_x21;
    piStack_130 = piVar12;
    iStack_128 = unaff_x19;
    if (*piVar11 != piVar11) {
        piVar12 = *piVar11;
        do {
            iVar2 = piVar12[-1];
            piVar14 = *piVar12;
            mutex_lock(iVar8 + -200);
            *(iVar2 + 0xa0) = piVar12[-2];
            mod_timer(piVar12 + 2,_kmem_cache_alloc_trace + 0x8ca);
            pcVar13 = *(iVar8 + 0x40);
            __cfi_slowpath_diag(0x717e13c02c8a8b12,pcVar13,0x80005a0);
            iVar1 = iVar2 + 0x41;
            (*pcVar13)(*(iVar2 + 0xa0),iVar1,*(iVar8 + 0x48));
            del_timer_sync(piVar12 + 2);
            mutex_unlock(iVar8 + -200);
            uVar4 = *(piVar12 + -0xc);
            uStack_1dc = 0;
            uStack_198 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            uStack_1b8 = 0;
            uStack_1b0 = 0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            uStack_1d8 = 0;
            uStack_1d0 = 0;
            uStack_1f0 = 0;
            uStack_1e8 = 0;
            uStack_200 = 0;
            uStack_1f8 = 0;
            uStack_210 = 0;
            uStack_208 = 0;
            uStack_220 = 0;
            uStack_218 = 0;
            uStack_228 = 0;
            iVar5 = qmi_txn_init(iVar8 + -0x268,&uStack_228,obj.servreg_set_ack_resp_ei,&uStack_1dc);
            if (-1 < iVar5) {
                uStack_196 = uVar4;
                strcpy(&uStack_1d8,iVar1);
                qmi_send_request(iVar8 + -0x268,iVar2 + 0x84,&uStack_228,0x23,0x48,obj.servreg_set_ack_req_ei,
                                 &uStack_1d8);
                qmi_txn_cancel(&uStack_228);
            }
            _printk(0x800066b,iVar1,*(iVar2 + 0xa0),*(piVar12 + -0xc));
            mutex_lock(iVar8 + -0xf8);
            uVar9 = __list_del_entry_valid(piVar12);
            if ((uVar9 & 1) != 0) {
                iVar1 = *piVar12;
                piVar3 = piVar12[1];
                *(iVar1 + 8) = piVar3;
                *piVar3 = iVar1;
            }
            *piVar12 = -0x2152ffffffffff00;
            piVar12[1] = -0x2152fffffffffede;
            mutex_unlock(iVar8 + -0xf8);
            kfree(piVar12 + -2);
            piVar12 = piVar14;
        } while (piVar14 != piVar11);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_190) {
        return;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.pdr_handle_release;
    if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
        mutex_lock(uVar9 + 0x2b0);
        piVar12 = *(uVar9 + 0x290);
        while (uVar9 + 0x290 != piVar12) {
            piVar14 = *piVar12;
            uVar10 = __list_del_entry_valid(piVar12);
            if ((uVar10 & 1) != 0) {
                iVar1 = *piVar12;
                piVar11 = piVar12[1];
                *(iVar1 + 8) = piVar11;
                *piVar11 = iVar1;
            }
            *piVar12 = -0x2152ffffffffff00;
            piVar12[1] = -0x2152fffffffffede;
            kfree(piVar12 + -0x16);
            piVar12 = piVar14;
        }
        mutex_unlock(uVar9 + 0x2b0);
        cancel_work_sync(uVar9 + 0x348);
        cancel_work_sync(uVar9 + 0x378);
        cancel_work_sync(uVar9 + 0x3a8);
        destroy_workqueue(*(uVar9 + 0x3d8));
        destroy_workqueue(*(uVar9 + 0x3e0));
        qmi_handle_release(uVar9);
        qmi_handle_release(uVar9 + 0x140);
        kfree(uVar9);
    }
    return;
}


// ===== sym.pdr_locator_work.ee6aea036f715ac630b613840e2b657c.cfi_jt @ 0x08001208 (size 8) =====

void sym.pdr_locator_work.ee6aea036f715ac630b613840e2b657c.cfi_jt(uint64_t param_1)

{
    int64_t *piVar1;
    ushort uVar2;
    uint8_t uVar3;
    char cVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t arg3;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar14;
    int64_t *piVar15;
    uint64_t uVar16;
    uint64_t unaff_x22;
    uint64_t *puVar17;
    code *unaff_x23;
    code *pcVar18;
    uint64_t unaff_x24;
    code *unaff_x25;
    code *unaff_x26;
    int64_t unaff_x27;
    int64_t *piVar19;
    code *unaff_x28;
    ulong unaff_x30;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    uint uStack_30c;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ushort uStack_2c8;
    ushort uStack_2c6;
    int64_t iStack_2c0;
    uchar **ppuStack_2b0;
    code *pcStack_2a8;
    code *pcStack_2a0;
    int64_t *piStack_298;
    code *pcStack_290;
    code *pcStack_288;
    uint64_t uStack_280;
    code *pcStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    int64_t *piStack_260;
    uint64_t uStack_258;
    int64_t iStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    uint uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ushort uStack_1a8;
    int64_t iStack_1a0;
    uchar *puStack_190;
    code *pcStack_188;
    code *pcStack_180;
    int64_t iStack_178;
    code *pcStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    code *pcStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    int64_t iStack_140;
    uint64_t uStack_138;
    int64_t iStack_130;
    int64_t iStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    code *pcStack_110;
    int64_t iStack_108;
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
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint uStack_78;
    uint32_t uStack_74;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar14 = param_1 - 0x38;
    iStack_70 = *(iVar8 + 0x5e0);
    mutex_lock(iVar14);
    uVar3 = *(param_1 - 8);
    uVar16 = uVar3;
    mutex_unlock(iVar14);
    uVar12 = param_1;
    if (uVar3 != 0) {
        iVar14 = param_1 - 0x348;
        iStack_130 = param_1 - 0x98;
        mutex_lock();
        unaff_x22 = *(param_1 - 0xb8);
        uVar12 = param_1 - 0xb8;
        if (unaff_x22 != uVar12) {
            iStack_108 = param_1 - 200;
            iStack_128 = param_1 - 0x208;
            puVar17 = unaff_x22;
            pcVar18 = unaff_x25;
            uStack_120 = uVar12;
            do {
                unaff_x22 = *puVar17;
                unaff_x25 = pcVar18;
                if (*(puVar17 - 10) != '\0') {
                    uStack_78 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uVar16 = puVar17 + -0x16;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    unaff_x25 = kmem_cache_alloc_trace(_strlen,0xdc0,0x994);
                    if (unaff_x25 == NULL) {
                        unaff_x26 = 0xfffffff4;
                        unaff_x25 = pcVar18;
                    }
                    else {
                        uStack_118 = uVar16;
                        strcpy(&uStack_b8,uVar16);
                        pcStack_110 = unaff_x25 + 0x14;
                        uVar7 = 0;
                        unaff_x27 = puVar17 - 0x6f;
                        uStack_78._0_2_ = CONCAT11(1,uStack_78);
                        do {
                            uStack_c8 = 0;
                            uStack_c0 = 0;
                            uStack_d8 = 0;
                            uStack_d0 = 0;
                            uStack_e8 = 0;
                            uStack_e0 = 0;
                            uStack_f8 = 0;
                            uStack_f0 = 0;
                            uStack_100 = 0;
                            uStack_74 = uVar7;
                            uVar5 = qmi_txn_init(iVar14,&uStack_100,obj.servreg_get_domain_list_resp_ei,unaff_x25);
                            if (uVar5 < 0) {
                                unaff_x26 = uVar5;
                                goto code_r0x08001b08;
                            }
                            unaff_x26 = qmi_send_request(iVar14,iStack_108,&uStack_100,0x21,0x4a,
                                                         obj.servreg_get_domain_list_req_ei,&uStack_b8);
                            if (unaff_x26 < 0) {
                                qmi_txn_cancel(&uStack_100);
                                kfree(unaff_x25);
                                uVar12 = uStack_120;
                                uVar16 = uStack_118;
                                if (unaff_x26 < 0) goto code_r0x080018f0;
code_r0x08001ad8:
                                uVar16 = uStack_118;
                                uVar12 = uStack_120;
                                uVar7 = qmi_add_lookup(iStack_128,*(puVar17 - 0x1c),1,*(puVar17 + -4));
                                if (-1 < uVar7) {
                                    *(puVar17 - 10) = 0;
                                    goto code_r0x08001900;
                                }
                                arg3 = uVar7;
                                goto code_r0x080018fc;
                            }
                            uVar5 = qmi_txn_wait(&uStack_100,0x4e2);
                            if (uVar5 < 0) {
                                unaff_x26 = uVar5;
                                _printk(0x80007ee,&uStack_b8,unaff_x26);
code_r0x08001b08:
                                kfree(unaff_x25);
                                uVar12 = uStack_120;
                                uVar16 = uStack_118;
                                goto code_r0x080018f0;
                            }
                            if (*unaff_x25 != 0) {
                                _printk(0x80006f5,&uStack_b8,*(unaff_x25 + 2));
                                unaff_x26 = 0xffffff87;
                                goto code_r0x08001b08;
                            }
                            uVar5 = *(unaff_x25 + 0x10);
                            if (uVar7 < uVar5) {
                                unaff_x28 = uVar7;
                                unaff_x26 = pcStack_110 + uVar7 * 0x4c;
                                uVar11 = uVar7;
                                if (uVar7 < 0x22) {
                                    uVar11 = 0x21;
                                }
                                unaff_x23 = uVar11;
                                do {
                                    if (unaff_x23 == unaff_x28) {
    //WARNING: Does not return
                                        pcVar18 = SoftwareBreakpoint(0x5512,0x8001bc4);
                                        (*pcVar18)();
                                    }
                                    iVar8 = strnlen(unaff_x26,0x41);
                                    if ((iVar8 != 0x41) && (iVar6 = strcmp(unaff_x26,unaff_x27), iVar6 == 0)) {
                                        uVar12 = unaff_x28 & 0xffffffff;
                                        *(puVar17 + -3) = pcStack_110[uVar12 * 0x4c + 0x41];
                                        *(puVar17 - 0x14) = *(pcStack_110 + (uVar12 * 0x26 + 0x22) * 2);
                                        cVar4 = *(puVar17 - 9);
                                        *(puVar17 + -4) = *(pcStack_110 + (uVar12 * 0x26 + 0x24) * 2);
                                        if (cVar4 != '\0') {
                                            scnprintf(unaff_x27,0x41,"%s/%s",unaff_x27,uStack_118);
                                        }
                                        kfree(unaff_x25);
                                        goto code_r0x08001ad8;
                                    }
                                    unaff_x28 = unaff_x28 + 1;
                                    unaff_x26 = unaff_x26 + 0x4c;
                                } while (uVar5 != unaff_x28);
                            }
                            uVar11 = *(unaff_x25 + 6);
                            if (uVar11 < uVar5) {
                                *(unaff_x25 + 0x10) = uVar11;
                                uVar5 = uVar11;
                            }
                            uVar7 = uVar5 + uVar7;
                        } while (uVar7 < *(unaff_x25 + 6));
                        kfree(unaff_x25);
                        unaff_x26 = 0xfffffffa;
                        uVar12 = uStack_120;
                        uVar16 = uStack_118;
                    }
code_r0x080018f0:
                    arg3 = unaff_x26 & 0xffffffff;
code_r0x080018fc:
                    sym.pdr_notify_lookup_failure(iVar14,uVar16,arg3);
                }
code_r0x08001900:
                puVar17 = unaff_x22;
                unaff_x24 = unaff_x22;
                pcVar18 = unaff_x25;
            } while (unaff_x22 != uVar12);
        }
        mutex_unlock(iStack_130);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_70) {
        return;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.pdr_notifier_work;
    pcStack_188 = sym.pdr_notifier_work;
    iVar8 = sp_el0;
    iStack_1a0 = *(iVar8 + 0x5e0);
    iStack_248 = iVar9 + -200;
    puStack_190 = &stack0xffffffffffffffa0;
    pcStack_180 = unaff_x28;
    iStack_178 = unaff_x27;
    pcStack_170 = unaff_x26;
    pcStack_168 = unaff_x25;
    uStack_160 = unaff_x24;
    pcStack_158 = unaff_x23;
    uStack_150 = unaff_x22;
    uStack_148 = uVar16;
    iStack_140 = iVar14;
    uStack_138 = uVar12;
    mutex_lock();
    piVar15 = iVar9 + -0xe8;
    piVar19 = *piVar15;
    if (piVar19 != piVar15) {
        uVar12 = iVar9 - 0x378;
        uVar16 = iVar9 - 0x238;
        unaff_x22 = &uStack_1e8 | 1;
        unaff_x23 = iVar9 - 0x98;
        unaff_x24 = 0x8000580;
        unaff_x25 = obj.servreg_register_listener_resp_ei;
        unaff_x26 = 0xfffffff;
        do {
            if (piVar19[-1] == '\0') {
                if (*(piVar19 + -0xb) != '\0') {
                    *(piVar19 + -0xb) = 0;
                    goto code_r0x08001c4c;
                }
            }
            else if (*(piVar19 + -0xc) != '\0') {
                *(piVar19 + -0xc) = 0;
                uStack_1f0 = 0;
                uStack_200 = 0;
                uStack_1f8 = 0;
                uStack_1a8 = 0;
                uStack_1b8 = 0;
                uStack_1b0 = 0;
                uStack_1c8 = 0;
                uStack_1c0 = 0;
                uStack_1d8 = 0;
                uStack_1d0 = 0;
                uStack_1e8 = 0;
                uStack_1e0 = 0;
                uStack_210 = 0;
                uStack_208 = 0;
                uStack_220 = 0;
                uStack_218 = 0;
                uStack_230 = 0;
                uStack_228 = 0;
                uStack_240 = 0;
                uStack_238 = 0;
                iVar6 = qmi_txn_init(uVar16,&uStack_240,obj.servreg_register_listener_resp_ei,&uStack_1f8);
                if (iVar6 < 0) {
code_r0x08001c4c:
                    *(piVar19 + -2) = 0xfffffff;
                }
                else {
                    uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
                    strcpy(unaff_x22,piVar19 + -0x6f);
                    iVar6 = qmi_send_request(uVar16,piVar19 + -0x2c,&uStack_240,0x20,0x47,
                                             obj.servreg_register_listener_req_ei,&uStack_1e8);
                    if (iVar6 < 0) {
                        qmi_txn_cancel(&uStack_240);
                        goto code_r0x08001c4c;
                    }
                    uVar7 = qmi_txn_wait(&uStack_240,0x4e2);
                    if (uVar7 < 0) {
                        uVar10 = 0x800076e;
code_r0x08001d84:
                        _printk(uVar10,piVar19 + -0x6f,uVar7);
                        goto code_r0x08001c4c;
                    }
                    if (uStack_1f8 != 0) {
                        uVar7 = uStack_1f8._2_2_;
                        uVar10 = 0x800089f;
                        goto code_r0x08001d84;
                    }
                    *(piVar19 + -2) = uStack_1f0;
                }
                mutex_lock(unaff_x23);
                unaff_x28 = *(iVar9 + 0x70);
                __cfi_slowpath_diag(0x717e13c02c8a8b12,unaff_x28,0x8000580);
                (*unaff_x28)(piVar19[-2],piVar19 + -0x6f,*(iVar9 + 0x78));
                mutex_unlock(unaff_x23);
            }
            piVar19 = *piVar19;
        } while (piVar19 != piVar15);
    }
    mutex_unlock(iStack_248);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1a0) {
        return;
    }
    iVar14 = __stack_chk_fail();
    *extraout_x18_00 = sym.pdr_indack_work;
    pcStack_2a8 = sym.pdr_indack_work;
    iVar8 = sp_el0;
    piVar13 = iVar14 + -0x108;
    iStack_2c0 = *(iVar8 + 0x5e0);
    ppuStack_2b0 = &puStack_190;
    pcStack_2a0 = unaff_x28;
    piStack_298 = piVar19;
    pcStack_290 = unaff_x26;
    pcStack_288 = unaff_x25;
    uStack_280 = unaff_x24;
    pcStack_278 = unaff_x23;
    uStack_270 = unaff_x22;
    uStack_268 = uVar16;
    piStack_260 = piVar15;
    uStack_258 = uVar12;
    if (*piVar13 != piVar13) {
        piVar15 = *piVar13;
        do {
            iVar9 = piVar15[-1];
            piVar19 = *piVar15;
            mutex_lock(iVar14 + -200);
            *(iVar9 + 0xa0) = piVar15[-2];
            mod_timer(piVar15 + 2,_kmem_cache_alloc_trace + 0x8ca);
            pcVar18 = *(iVar14 + 0x40);
            __cfi_slowpath_diag(0x717e13c02c8a8b12,pcVar18,0x80005a0);
            iVar8 = iVar9 + 0x41;
            (*pcVar18)(*(iVar9 + 0xa0),iVar8,*(iVar14 + 0x48));
            del_timer_sync(piVar15 + 2);
            mutex_unlock(iVar14 + -200);
            uVar2 = *(piVar15 + -0xc);
            uStack_30c = 0;
            uStack_2c8 = 0;
            uStack_2d8 = 0;
            uStack_2d0 = 0;
            uStack_2e8 = 0;
            uStack_2e0 = 0;
            uStack_2f8 = 0;
            uStack_2f0 = 0;
            uStack_308 = 0;
            uStack_300 = 0;
            uStack_320 = 0;
            uStack_318 = 0;
            uStack_330 = 0;
            uStack_328 = 0;
            uStack_340 = 0;
            uStack_338 = 0;
            uStack_350 = 0;
            uStack_348 = 0;
            uStack_358 = 0;
            iVar6 = qmi_txn_init(iVar14 + -0x268,&uStack_358,obj.servreg_set_ack_resp_ei,&uStack_30c);
            if (-1 < iVar6) {
                uStack_2c6 = uVar2;
                strcpy(&uStack_308,iVar8);
                qmi_send_request(iVar14 + -0x268,iVar9 + 0x84,&uStack_358,0x23,0x48,obj.servreg_set_ack_req_ei,
                                 &uStack_308);
                qmi_txn_cancel(&uStack_358);
            }
            _printk(0x800066b,iVar8,*(iVar9 + 0xa0),*(piVar15 + -0xc));
            mutex_lock(iVar14 + -0xf8);
            uVar12 = __list_del_entry_valid(piVar15);
            if ((uVar12 & 1) != 0) {
                iVar8 = *piVar15;
                piVar1 = piVar15[1];
                *(iVar8 + 8) = piVar1;
                *piVar1 = iVar8;
            }
            *piVar15 = -0x2152ffffffffff00;
            piVar15[1] = -0x2152fffffffffede;
            mutex_unlock(iVar14 + -0xf8);
            kfree(piVar15 + -2);
            piVar15 = piVar19;
        } while (piVar19 != piVar13);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_2c0) {
        return;
    }
    uVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.pdr_handle_release;
    if ((uVar12 != 0) && (uVar12 < 0xfffffffffffff001)) {
        mutex_lock(uVar12 + 0x2b0);
        piVar15 = *(uVar12 + 0x290);
        while (uVar12 + 0x290 != piVar15) {
            piVar19 = *piVar15;
            uVar16 = __list_del_entry_valid(piVar15);
            if ((uVar16 & 1) != 0) {
                iVar8 = *piVar15;
                piVar13 = piVar15[1];
                *(iVar8 + 8) = piVar13;
                *piVar13 = iVar8;
            }
            *piVar15 = -0x2152ffffffffff00;
            piVar15[1] = -0x2152fffffffffede;
            kfree(piVar15 + -0x16);
            piVar15 = piVar19;
        }
        mutex_unlock(uVar12 + 0x2b0);
        cancel_work_sync(uVar12 + 0x348);
        cancel_work_sync(uVar12 + 0x378);
        cancel_work_sync(uVar12 + 0x3a8);
        destroy_workqueue(*(uVar12 + 0x3d8));
        destroy_workqueue(*(uVar12 + 0x3e0));
        qmi_handle_release(uVar12);
        qmi_handle_release(uVar12 + 0x140);
        kfree(uVar12);
    }
    return;
}


// ===== sym.pdr_notifier_del_server.ee6aea036f715ac630b613840e2b657c.cfi_jt @ 0x08001210 (size 8) =====

void sym.pdr_notifier_del_server.ee6aea036f715ac630b613840e2b657c.cfi_jt(int64_t param_1,int *param_2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x170);
    piVar1 = *(param_1 + 0x150);
    if (piVar1 != param_1 + 0x150) {
        do {
            if ((*(piVar1 + -0x1c) == *param_2) && (piVar1[-4] == param_2[2])) {
                *(piVar1 + -1) = 0;
                *(piVar1 + -0xb) = 1;
                piVar1[-5] = 0;
                queue_work_on(0x20,*(param_1 + 0x298),param_1 + 0x238);
            }
            piVar1 = *piVar1;
        } while (piVar1 != param_1 + 0x150);
    }
    mutex_unlock(param_1 + 0x170);
    return;
}


// ===== sym.pdr_locator_del_server.ee6aea036f715ac630b613840e2b657c.cfi_jt @ 0x08001218 (size 8) =====

void sym.pdr_locator_del_server.ee6aea036f715ac630b613840e2b657c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x310);
    *(param_1 + 0x340) = 0;
    mutex_unlock(param_1 + 0x310);
    *(param_1 + 0x284) = 0;
    return;
}


// ===== sym.pdr_add_service_lookup.cfi_jt @ 0x08001220 (size 8) =====

uint64_t sym.pdr_add_service_lookup.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.pdr_lookup_common(param_1,param_2,param_3);
    uVar1 = _system_wq;
    if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
        *(uVar2 + 0xa7) = 1;
        queue_work_on(0x20,uVar1,param_1 + 0x348);
    }
    return uVar2;
}


// ===== sym.pdr_add_lookup.cfi_jt @ 0x08001228 (size 8) =====

uint64_t sym.pdr_add_lookup.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.pdr_lookup_common(param_1,param_2,param_3);
    if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
        queue_work_on(0x20,_system_wq,param_1 + 0x348);
    }
    return uVar1;
}


// ===== sym.pdr_notifier_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.pdr_notifier_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt(int64_t param_1,int *param_2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x170);
    piVar1 = *(param_1 + 0x150);
    if (piVar1 != param_1 + 0x150) {
        do {
            if ((*(piVar1 + -0x1c) == *param_2) && (piVar1[-4] == param_2[2])) {
                *(piVar1 + -1) = 1;
                *(piVar1 + -0xc) = 1;
                *(piVar1 + -0x2c) = 0x2a;
                *(piVar1 + -5) = param_2[3];
                *(piVar1 + -0x24) = param_2[4];
                queue_work_on(0x20,*(param_1 + 0x298),param_1 + 0x238);
            }
            piVar1 = *piVar1;
        } while (piVar1 != param_1 + 0x150);
    }
    mutex_unlock(param_1 + 0x170);
    return 0;
}


// ===== sym.pdr_locator_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.pdr_locator_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x280) = 0x2a;
    *(param_1 + 0x284) = *(param_2 + 0xc);
    *(param_1 + 0x288) = *(param_2 + 0x10);
    mutex_lock(param_1 + 0x310);
    *(param_1 + 0x340) = 1;
    mutex_unlock(param_1 + 0x310);
    mutex_lock(param_1 + 0x2b0);
    piVar1 = *(param_1 + 0x290);
    if (piVar1 != param_1 + 0x290) {
        do {
            if (*(piVar1 + -10) != '\0') {
                queue_work_on(0x20,_system_wq,param_1 + 0x348);
            }
            piVar1 = *piVar1;
        } while (piVar1 != param_1 + 0x290);
    }
    mutex_unlock(param_1 + 0x2b0);
    return 0;
}


// ===== sym.pdr_add_lookup @ 0x08001240 (size 88) =====

uint64_t sym.pdr_add_lookup(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.pdr_lookup_common(arg1,arg2,arg3);
    if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
        queue_work_on(0x20,_system_wq,arg1 + 0x348);
    }
    return uVar1;
}


// ===== sym.pdr_lookup_common @ 0x08001298 (size 340) =====

int64_t sym.pdr_lookup_common(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    uVar6 = arg1;
    *in_x18 = unaff_x30;
    iVar7 = -0x16;
    if (((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) && (arg2 != 0)) {
        uVar4 = strlen(arg2);
        iVar7 = -0x16;
        if ((arg3 != 0) && (uVar4 < 0x41)) {
            uVar4 = strlen(arg3);
            if (uVar4 < 0x41) {
                iVar7 = kmem_cache_alloc_trace(_strlen,0xdc0,0xc0);
                if (iVar7 == 0) {
                    iVar7 = -0xc;
                }
                else {
                    *(iVar7 + 0x94) = 0x42;
                    iVar5 = strcpy(iVar7,arg2);
                    strcpy(iVar5 + 0x41,arg3);
                    iVar5 = uVar6 + 0x2b0;
                    *(iVar7 + 0xa6) = 1;
                    mutex_lock(iVar5);
                    piVar1 = uVar6 + 0x290;
                    piVar8 = *(uVar6 + 0x290);
                    for (piVar9 = piVar8; piVar1 != piVar9; piVar9 = *piVar9) {
                        iVar3 = strcmp(piVar9 + -0x6f,arg3);
                        if (iVar3 == 0) {
                            mutex_unlock(iVar5);
                            kfree(iVar7);
                            return -0x72;
                        }
                    }
                    iVar2 = iVar7 + 0xb0;
                    uVar6 = __list_add_valid(iVar2,piVar1,piVar8);
                    if ((uVar6 & 1) != 0) {
                        piVar8[1] = iVar2;
                        *(iVar7 + 0xb0) = piVar8;
                        *(iVar7 + 0xb8) = piVar1;
                        *piVar1 = iVar2;
                    }
                    mutex_unlock(iVar5);
                }
            }
            else {
                iVar7 = -0x16;
            }
        }
    }
    return iVar7;
}


// ===== sym.pdr_add_service_lookup @ 0x080013ec (size 96) =====

uint64_t sym.pdr_add_service_lookup(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.pdr_lookup_common(arg1,arg2,arg3);
    uVar1 = _system_wq;
    if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
        *(uVar2 + 0xa7) = 1;
        queue_work_on(0x20,uVar1,arg1 + 0x348);
    }
    return uVar2;
}


// ===== sym.pdr_restart_pd @ 0x0800144c (size 528) =====

uint64_t sym.pdr_restart_pd(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
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
    uint uStack_88;
    uint uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uchar uStack_40;
    int64_t iStack_38;
    
    uVar3 = arg1;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    uVar1 = 0xffffffea;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_84 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
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
    if ((((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) && (uVar1 = 0xffffffea, arg2 != 0)) &&
       (arg2 < 0xfffffffffffff001)) {
        if (*(arg2 + 0xa7) == '\0') {
            mutex_lock(uVar3 + 0x2b0);
            for (piVar5 = *(uVar3 + 0x290); uVar3 + 0x290 != piVar5; piVar5 = *piVar5) {
                if (piVar5 + -0x16 == arg2) {
                    if (*(arg2 + 0xa8) != '\0') {
                        strcpy(&uStack_80,arg2 + 0x41);
                        uStack_90 = *(arg2 + 0x84);
                        uStack_88 = *(arg2 + 0x8c);
                    }
                    break;
                }
            }
            mutex_unlock(uVar3 + 0x2b0);
            if (uStack_80 != '\0') {
                uVar1 = qmi_txn_init(uVar3 + 0x140,&uStack_d8,obj.servreg_restart_pd_resp_ei,&uStack_84);
                if (-1 < uVar1) {
                    uVar1 = qmi_send_request(uVar3 + 0x140,&uStack_90,&uStack_d8,0x24,0x43,
                                             obj.servreg_restart_pd_req_ei,&uStack_80);
                    if (uVar1 < 0) {
                        qmi_txn_cancel(&uStack_d8);
                    }
                    else {
                        uVar1 = qmi_txn_wait(&uStack_d8,0x4e2);
                        if (uVar1 < 0) {
                            _printk(0x8000875,&uStack_80,uVar1);
                        }
                        else if (((uStack_84 & 0xffff) == 1) && (uStack_84._2_2_ == 0x45)) {
                            _printk(0x80007c0,&uStack_80);
                            uVar1 = 0xffffffa1;
                        }
                        else if ((uStack_84 & 0xffff) == 0) {
                            uVar1 = 0;
                        }
                        else {
                            _printk(0x800071d,&uStack_80);
                            uVar1 = 0xffffff87;
                        }
                    }
                }
                goto code_r0x080014d8;
            }
        }
        uVar1 = 0xffffffea;
    }
code_r0x080014d8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.pdr_handle_alloc;
    if (auVar6._0_8_ == 0) {
        uVar3 = 0xffffffffffffffea;
    }
    else {
        uVar3 = kmem_cache_alloc_trace(_strlen,0xdc0,0x3f8);
        if (uVar3 == 0) {
            uVar3 = 0xfffffffffffffff4;
        }
        else {
            *(uVar3 + 1000) = auVar6;
            __mutex_init(uVar3 + 0x2e0,"&pdr->status_lock",obj.pdr_handle_alloc.__key);
            __mutex_init(uVar3 + 0x2b0,"&pdr->list_lock",obj.pdr_handle_alloc.__key);
            __mutex_init(uVar3 + 0x310,"&pdr->lock",obj.pdr_handle_alloc.__key);
            *(uVar3 + 0x290) = uVar3 + 0x290;
            *(uVar3 + 0x298) = uVar3 + 0x290;
            *(uVar3 + 0x2a0) = uVar3 + 0x2a0;
            *(uVar3 + 0x2a8) = uVar3 + 0x2a0;
            *(uVar3 + 0x348) = 0xfffffffe0;
            *(uVar3 + 0x350) = uVar3 + 0x350;
            *(uVar3 + 0x358) = uVar3 + 0x350;
            *(uVar3 + 0x360) = sym.pdr_locator_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            *(uVar3 + 0x378) = 0xfffffffe0;
            *(uVar3 + 0x380) = uVar3 + 0x380;
            *(uVar3 + 0x388) = uVar3 + 0x380;
            *(uVar3 + 0x390) = sym.pdr_notifier_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            *(uVar3 + 0x3a8) = 0xfffffffe0;
            *(uVar3 + 0x3b0) = uVar3 + 0x3b0;
            *(uVar3 + 0x3b8) = uVar3 + 0x3b0;
            *(uVar3 + 0x3c0) = sym.pdr_indack_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            iVar4 = alloc_workqueue(0x80006e7,0xe000a,1,"pdr_notifier_wq");
            *(uVar3 + 0x3d8) = iVar4;
            if (iVar4 == 0) {
                iVar2 = -0xc;
            }
            else {
                iVar4 = alloc_workqueue("pdr_indack_wq",0xa0012,1);
                *(uVar3 + 0x3e0) = iVar4;
                if (iVar4 == 0) {
                    iVar2 = -0xc;
                }
                else {
                    iVar2 = qmi_handle_init(uVar3,0x955,
                                            reloc.pdr_locator_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt,0);
                    if (-1 < iVar2) {
                        iVar2 = qmi_add_lookup(uVar3,0x40,1,1);
                        if ((-1 < iVar2) &&
                           (iVar2 = qmi_handle_init(uVar3 + 0x140,0x4f,
                                                    reloc.pdr_notifier_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt
                                                    ,obj.qmi_indication_handler), -1 < iVar2)) {
                            return uVar3;
                        }
                        qmi_handle_release(uVar3);
                    }
                    destroy_workqueue(*(uVar3 + 0x3e0));
                }
                destroy_workqueue(*(uVar3 + 0x3d8));
            }
            kfree(uVar3);
            uVar3 = iVar2;
        }
    }
    return uVar3;
}


// ===== sym.pdr_handle_alloc @ 0x0800165c (size 520) =====

int64_t sym.pdr_handle_alloc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = -0x16;
    }
    else {
        iVar2 = kmem_cache_alloc_trace(_strlen,0xdc0,0x3f8);
        if (iVar2 == 0) {
            iVar2 = -0xc;
        }
        else {
            *(iVar2 + 1000) = arg1;
            *(iVar2 + 0x3f0) = arg2;
            __mutex_init(iVar2 + 0x2e0,"&pdr->status_lock",obj.pdr_handle_alloc.__key);
            __mutex_init(iVar2 + 0x2b0,"&pdr->list_lock",obj.pdr_handle_alloc.__key);
            __mutex_init(iVar2 + 0x310,"&pdr->lock",obj.pdr_handle_alloc.__key);
            *(iVar2 + 0x290) = iVar2 + 0x290;
            *(iVar2 + 0x298) = iVar2 + 0x290;
            *(iVar2 + 0x2a0) = iVar2 + 0x2a0;
            *(iVar2 + 0x2a8) = iVar2 + 0x2a0;
            *(iVar2 + 0x348) = 0xfffffffe0;
            *(iVar2 + 0x350) = iVar2 + 0x350;
            *(iVar2 + 0x358) = iVar2 + 0x350;
            *(iVar2 + 0x360) = sym.pdr_locator_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            *(iVar2 + 0x378) = 0xfffffffe0;
            *(iVar2 + 0x380) = iVar2 + 0x380;
            *(iVar2 + 0x388) = iVar2 + 0x380;
            *(iVar2 + 0x390) = sym.pdr_notifier_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            *(iVar2 + 0x3a8) = 0xfffffffe0;
            *(iVar2 + 0x3b0) = iVar2 + 0x3b0;
            *(iVar2 + 0x3b8) = iVar2 + 0x3b0;
            *(iVar2 + 0x3c0) = sym.pdr_indack_work.ee6aea036f715ac630b613840e2b657c.cfi_jt;
            iVar3 = alloc_workqueue(0x80006e7,0xe000a,1,"pdr_notifier_wq");
            *(iVar2 + 0x3d8) = iVar3;
            if (iVar3 == 0) {
                iVar1 = -0xc;
            }
            else {
                iVar3 = alloc_workqueue("pdr_indack_wq",0xa0012,1);
                *(iVar2 + 0x3e0) = iVar3;
                if (iVar3 == 0) {
                    iVar1 = -0xc;
                }
                else {
                    iVar1 = qmi_handle_init(iVar2,0x955,
                                            reloc.pdr_locator_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt,0);
                    if (-1 < iVar1) {
                        iVar1 = qmi_add_lookup(iVar2,0x40,1,1);
                        if ((-1 < iVar1) &&
                           (iVar1 = qmi_handle_init(iVar2 + 0x140,0x4f,
                                                    reloc.pdr_notifier_new_server.ee6aea036f715ac630b613840e2b657c.cfi_jt
                                                    ,obj.qmi_indication_handler), -1 < iVar1)) {
                            return iVar2;
                        }
                        qmi_handle_release(iVar2);
                    }
                    destroy_workqueue(*(iVar2 + 0x3e0));
                }
                destroy_workqueue(*(iVar2 + 0x3d8));
            }
            kfree(iVar2);
            iVar2 = iVar1;
        }
    }
    return iVar2;
}


// ===== sym.pdr_locator_work @ 0x08001864 (size 868) =====

void sym.pdr_locator_work(int64_t arg1)

{
    int64_t *piVar1;
    ushort uVar2;
    uint8_t uVar3;
    char cVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t arg3;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar14;
    int64_t *piVar15;
    uint64_t uVar16;
    uint64_t unaff_x22;
    uint64_t *puVar17;
    code *unaff_x23;
    code *pcVar18;
    uint64_t unaff_x24;
    code *unaff_x25;
    code *unaff_x26;
    int64_t unaff_x27;
    int64_t *piVar19;
    code *unaff_x28;
    ulong unaff_x30;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    uint uStack_30c;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ushort uStack_2c8;
    ushort uStack_2c6;
    int64_t iStack_2c0;
    uchar **ppuStack_2b0;
    code *pcStack_2a8;
    code *pcStack_2a0;
    int64_t *piStack_298;
    code *pcStack_290;
    code *pcStack_288;
    uint64_t uStack_280;
    code *pcStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    int64_t *piStack_260;
    uint64_t uStack_258;
    int64_t iStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    uint uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ushort uStack_1a8;
    int64_t iStack_1a0;
    uchar *puStack_190;
    code *pcStack_188;
    code *pcStack_180;
    int64_t iStack_178;
    code *pcStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    code *pcStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    int64_t iStack_140;
    uint64_t uStack_138;
    int64_t iStack_130;
    int64_t iStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    code *pcStack_110;
    int64_t iStack_108;
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
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint uStack_78;
    uint32_t uStack_74;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar14 = arg1 + -0x38;
    iStack_70 = *(iVar8 + 0x5e0);
    mutex_lock(iVar14);
    uVar3 = *(arg1 + -8);
    uVar16 = uVar3;
    mutex_unlock(iVar14);
    uVar12 = arg1;
    if (uVar3 != 0) {
        iVar14 = arg1 + -0x348;
        iStack_130 = arg1 + -0x98;
        mutex_lock();
        unaff_x22 = *(arg1 + -0xb8);
        uVar12 = arg1 - 0xb8;
        if (unaff_x22 != uVar12) {
            iStack_108 = arg1 + -200;
            iStack_128 = arg1 + -0x208;
            puVar17 = unaff_x22;
            pcVar18 = unaff_x25;
            uStack_120 = uVar12;
            do {
                unaff_x22 = *puVar17;
                unaff_x25 = pcVar18;
                if (*(puVar17 - 10) != '\0') {
                    uStack_78 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uVar16 = puVar17 + -0x16;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    unaff_x25 = kmem_cache_alloc_trace(_strlen,0xdc0,0x994);
                    if (unaff_x25 == NULL) {
                        unaff_x26 = 0xfffffff4;
                        unaff_x25 = pcVar18;
                    }
                    else {
                        uStack_118 = uVar16;
                        strcpy(&uStack_b8,uVar16);
                        pcStack_110 = unaff_x25 + 0x14;
                        uVar7 = 0;
                        unaff_x27 = puVar17 - 0x6f;
                        uStack_78._0_2_ = CONCAT11(1,uStack_78);
                        do {
                            uStack_c8 = 0;
                            uStack_c0 = 0;
                            uStack_d8 = 0;
                            uStack_d0 = 0;
                            uStack_e8 = 0;
                            uStack_e0 = 0;
                            uStack_f8 = 0;
                            uStack_f0 = 0;
                            uStack_100 = 0;
                            uStack_74 = uVar7;
                            uVar5 = qmi_txn_init(iVar14,&uStack_100,obj.servreg_get_domain_list_resp_ei,unaff_x25);
                            if (uVar5 < 0) {
                                unaff_x26 = uVar5;
                                goto code_r0x08001b08;
                            }
                            unaff_x26 = qmi_send_request(iVar14,iStack_108,&uStack_100,0x21,0x4a,
                                                         obj.servreg_get_domain_list_req_ei,&uStack_b8);
                            if (unaff_x26 < 0) {
                                qmi_txn_cancel(&uStack_100);
                                kfree(unaff_x25);
                                uVar12 = uStack_120;
                                uVar16 = uStack_118;
                                if (unaff_x26 < 0) goto code_r0x080018f0;
code_r0x08001ad8:
                                uVar16 = uStack_118;
                                uVar12 = uStack_120;
                                uVar7 = qmi_add_lookup(iStack_128,*(puVar17 - 0x1c),1,*(puVar17 + -4));
                                if (-1 < uVar7) {
                                    *(puVar17 - 10) = 0;
                                    goto code_r0x08001900;
                                }
                                arg3 = uVar7;
                                goto code_r0x080018fc;
                            }
                            uVar5 = qmi_txn_wait(&uStack_100,0x4e2);
                            if (uVar5 < 0) {
                                unaff_x26 = uVar5;
                                _printk(0x80007ee,&uStack_b8,unaff_x26);
code_r0x08001b08:
                                kfree(unaff_x25);
                                uVar12 = uStack_120;
                                uVar16 = uStack_118;
                                goto code_r0x080018f0;
                            }
                            if (*unaff_x25 != 0) {
                                _printk(0x80006f5,&uStack_b8,*(unaff_x25 + 2));
                                unaff_x26 = 0xffffff87;
                                goto code_r0x08001b08;
                            }
                            uVar5 = *(unaff_x25 + 0x10);
                            if (uVar7 < uVar5) {
                                unaff_x28 = uVar7;
                                unaff_x26 = pcStack_110 + uVar7 * 0x4c;
                                uVar11 = uVar7;
                                if (uVar7 < 0x22) {
                                    uVar11 = 0x21;
                                }
                                unaff_x23 = uVar11;
                                do {
                                    if (unaff_x23 == unaff_x28) {
    //WARNING: Does not return
                                        pcVar18 = SoftwareBreakpoint(0x5512,0x8001bc4);
                                        (*pcVar18)();
                                    }
                                    iVar8 = strnlen(unaff_x26,0x41);
                                    if ((iVar8 != 0x41) && (iVar6 = strcmp(unaff_x26,unaff_x27), iVar6 == 0)) {
                                        uVar12 = unaff_x28 & 0xffffffff;
                                        *(puVar17 + -3) = pcStack_110[uVar12 * 0x4c + 0x41];
                                        *(puVar17 - 0x14) = *(pcStack_110 + (uVar12 * 0x26 + 0x22) * 2);
                                        cVar4 = *(puVar17 - 9);
                                        *(puVar17 + -4) = *(pcStack_110 + (uVar12 * 0x26 + 0x24) * 2);
                                        if (cVar4 != '\0') {
                                            scnprintf(unaff_x27,0x41,"%s/%s",unaff_x27,uStack_118);
                                        }
                                        kfree(unaff_x25);
                                        goto code_r0x08001ad8;
                                    }
                                    unaff_x28 = unaff_x28 + 1;
                                    unaff_x26 = unaff_x26 + 0x4c;
                                } while (uVar5 != unaff_x28);
                            }
                            uVar11 = *(unaff_x25 + 6);
                            if (uVar11 < uVar5) {
                                *(unaff_x25 + 0x10) = uVar11;
                                uVar5 = uVar11;
                            }
                            uVar7 = uVar5 + uVar7;
                        } while (uVar7 < *(unaff_x25 + 6));
                        kfree(unaff_x25);
                        unaff_x26 = 0xfffffffa;
                        uVar12 = uStack_120;
                        uVar16 = uStack_118;
                    }
code_r0x080018f0:
                    arg3 = unaff_x26 & 0xffffffff;
code_r0x080018fc:
                    sym.pdr_notify_lookup_failure(iVar14,uVar16,arg3);
                }
code_r0x08001900:
                puVar17 = unaff_x22;
                unaff_x24 = unaff_x22;
                pcVar18 = unaff_x25;
            } while (unaff_x22 != uVar12);
        }
        mutex_unlock(iStack_130);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_70) {
        return;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.pdr_notifier_work;
    pcStack_188 = sym.pdr_notifier_work;
    iVar8 = sp_el0;
    iStack_1a0 = *(iVar8 + 0x5e0);
    iStack_248 = iVar9 + -200;
    puStack_190 = &stack0xffffffffffffffa0;
    pcStack_180 = unaff_x28;
    iStack_178 = unaff_x27;
    pcStack_170 = unaff_x26;
    pcStack_168 = unaff_x25;
    uStack_160 = unaff_x24;
    pcStack_158 = unaff_x23;
    uStack_150 = unaff_x22;
    uStack_148 = uVar16;
    iStack_140 = iVar14;
    uStack_138 = uVar12;
    mutex_lock();
    piVar15 = iVar9 + -0xe8;
    piVar19 = *piVar15;
    if (piVar19 != piVar15) {
        uVar12 = iVar9 - 0x378;
        uVar16 = iVar9 - 0x238;
        unaff_x22 = &uStack_1e8 | 1;
        unaff_x23 = iVar9 - 0x98;
        unaff_x24 = 0x8000580;
        unaff_x25 = obj.servreg_register_listener_resp_ei;
        unaff_x26 = 0xfffffff;
        do {
            if (piVar19[-1] == '\0') {
                if (*(piVar19 + -0xb) != '\0') {
                    *(piVar19 + -0xb) = 0;
                    goto code_r0x08001c4c;
                }
            }
            else if (*(piVar19 + -0xc) != '\0') {
                *(piVar19 + -0xc) = 0;
                uStack_1f0 = 0;
                uStack_200 = 0;
                uStack_1f8 = 0;
                uStack_1a8 = 0;
                uStack_1b8 = 0;
                uStack_1b0 = 0;
                uStack_1c8 = 0;
                uStack_1c0 = 0;
                uStack_1d8 = 0;
                uStack_1d0 = 0;
                uStack_1e8 = 0;
                uStack_1e0 = 0;
                uStack_210 = 0;
                uStack_208 = 0;
                uStack_220 = 0;
                uStack_218 = 0;
                uStack_230 = 0;
                uStack_228 = 0;
                uStack_240 = 0;
                uStack_238 = 0;
                iVar6 = qmi_txn_init(uVar16,&uStack_240,obj.servreg_register_listener_resp_ei,&uStack_1f8);
                if (iVar6 < 0) {
code_r0x08001c4c:
                    *(piVar19 + -2) = 0xfffffff;
                }
                else {
                    uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
                    strcpy(unaff_x22,piVar19 + -0x6f);
                    iVar6 = qmi_send_request(uVar16,piVar19 + -0x2c,&uStack_240,0x20,0x47,
                                             obj.servreg_register_listener_req_ei,&uStack_1e8);
                    if (iVar6 < 0) {
                        qmi_txn_cancel(&uStack_240);
                        goto code_r0x08001c4c;
                    }
                    uVar7 = qmi_txn_wait(&uStack_240,0x4e2);
                    if (uVar7 < 0) {
                        uVar10 = 0x800076e;
code_r0x08001d84:
                        _printk(uVar10,piVar19 + -0x6f,uVar7);
                        goto code_r0x08001c4c;
                    }
                    if (uStack_1f8 != 0) {
                        uVar7 = uStack_1f8._2_2_;
                        uVar10 = 0x800089f;
                        goto code_r0x08001d84;
                    }
                    *(piVar19 + -2) = uStack_1f0;
                }
                mutex_lock(unaff_x23);
                unaff_x28 = *(iVar9 + 0x70);
                __cfi_slowpath_diag(0x717e13c02c8a8b12,unaff_x28,0x8000580);
                (*unaff_x28)(piVar19[-2],piVar19 + -0x6f,*(iVar9 + 0x78));
                mutex_unlock(unaff_x23);
            }
            piVar19 = *piVar19;
        } while (piVar19 != piVar15);
    }
    mutex_unlock(iStack_248);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1a0) {
        return;
    }
    iVar14 = __stack_chk_fail();
    *extraout_x18_00 = sym.pdr_indack_work;
    pcStack_2a8 = sym.pdr_indack_work;
    iVar8 = sp_el0;
    piVar13 = iVar14 + -0x108;
    iStack_2c0 = *(iVar8 + 0x5e0);
    ppuStack_2b0 = &puStack_190;
    pcStack_2a0 = unaff_x28;
    piStack_298 = piVar19;
    pcStack_290 = unaff_x26;
    pcStack_288 = unaff_x25;
    uStack_280 = unaff_x24;
    pcStack_278 = unaff_x23;
    uStack_270 = unaff_x22;
    uStack_268 = uVar16;
    piStack_260 = piVar15;
    uStack_258 = uVar12;
    if (*piVar13 != piVar13) {
        piVar15 = *piVar13;
        do {
            iVar9 = piVar15[-1];
            piVar19 = *piVar15;
            mutex_lock(iVar14 + -200);
            *(iVar9 + 0xa0) = piVar15[-2];
            mod_timer(piVar15 + 2,_kmem_cache_alloc_trace + 0x8ca);
            pcVar18 = *(iVar14 + 0x40);
            __cfi_slowpath_diag(0x717e13c02c8a8b12,pcVar18,0x80005a0);
            iVar8 = iVar9 + 0x41;
            (*pcVar18)(*(iVar9 + 0xa0),iVar8,*(iVar14 + 0x48));
            del_timer_sync(piVar15 + 2);
            mutex_unlock(iVar14 + -200);
            uVar2 = *(piVar15 + -0xc);
            uStack_30c = 0;
            uStack_2c8 = 0;
            uStack_2d8 = 0;
            uStack_2d0 = 0;
            uStack_2e8 = 0;
            uStack_2e0 = 0;
            uStack_2f8 = 0;
            uStack_2f0 = 0;
            uStack_308 = 0;
            uStack_300 = 0;
            uStack_320 = 0;
            uStack_318 = 0;
            uStack_330 = 0;
            uStack_328 = 0;
            uStack_340 = 0;
            uStack_338 = 0;
            uStack_350 = 0;
            uStack_348 = 0;
            uStack_358 = 0;
            iVar6 = qmi_txn_init(iVar14 + -0x268,&uStack_358,obj.servreg_set_ack_resp_ei,&uStack_30c);
            if (-1 < iVar6) {
                uStack_2c6 = uVar2;
                strcpy(&uStack_308,iVar8);
                qmi_send_request(iVar14 + -0x268,iVar9 + 0x84,&uStack_358,0x23,0x48,obj.servreg_set_ack_req_ei,
                                 &uStack_308);
                qmi_txn_cancel(&uStack_358);
            }
            _printk(0x800066b,iVar8,*(iVar9 + 0xa0),*(piVar15 + -0xc));
            mutex_lock(iVar14 + -0xf8);
            uVar12 = __list_del_entry_valid(piVar15);
            if ((uVar12 & 1) != 0) {
                iVar8 = *piVar15;
                piVar1 = piVar15[1];
                *(iVar8 + 8) = piVar1;
                *piVar1 = iVar8;
            }
            *piVar15 = -0x2152ffffffffff00;
            piVar15[1] = -0x2152fffffffffede;
            mutex_unlock(iVar14 + -0xf8);
            kfree(piVar15 + -2);
            piVar15 = piVar19;
        } while (piVar19 != piVar13);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_2c0) {
        return;
    }
    uVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.pdr_handle_release;
    if ((uVar12 != 0) && (uVar12 < 0xfffffffffffff001)) {
        mutex_lock(uVar12 + 0x2b0);
        piVar15 = *(uVar12 + 0x290);
        while (uVar12 + 0x290 != piVar15) {
            piVar19 = *piVar15;
            uVar16 = __list_del_entry_valid(piVar15);
            if ((uVar16 & 1) != 0) {
                iVar8 = *piVar15;
                piVar13 = piVar15[1];
                *(iVar8 + 8) = piVar13;
                *piVar13 = iVar8;
            }
            *piVar15 = -0x2152ffffffffff00;
            piVar15[1] = -0x2152fffffffffede;
            kfree(piVar15 + -0x16);
            piVar15 = piVar19;
        }
        mutex_unlock(uVar12 + 0x2b0);
        cancel_work_sync(uVar12 + 0x348);
        cancel_work_sync(uVar12 + 0x378);
        cancel_work_sync(uVar12 + 0x3a8);
        destroy_workqueue(*(uVar12 + 0x3d8));
        destroy_workqueue(*(uVar12 + 0x3e0));
        qmi_handle_release(uVar12);
        qmi_handle_release(uVar12 + 0x140);
        kfree(uVar12);
    }
    return;
}


// ===== sym.pdr_notifier_work @ 0x08001bc8 (size 528) =====

void sym.pdr_notifier_work(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ushort uVar4;
    int iVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t *piVar12;
    int64_t unaff_x21;
    uint64_t unaff_x22;
    int64_t unaff_x23;
    code *pcVar13;
    ulong unaff_x24;
    code *unaff_x25;
    ulong unaff_x26;
    int64_t *piVar14;
    code *unaff_x28;
    ulong unaff_x30;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    uint uStack_1dc;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ushort uStack_198;
    ushort uStack_196;
    int64_t iStack_190;
    uchar *puStack_180;
    code *pcStack_178;
    code *pcStack_170;
    int64_t *piStack_168;
    ulong uStack_160;
    code *pcStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uint64_t uStack_140;
    int64_t iStack_138;
    int64_t *piStack_130;
    int64_t iStack_128;
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
    uint uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ushort uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_70 = *(iVar1 + 0x5e0);
    iStack_118 = arg1 + -200;
    mutex_lock();
    piVar12 = arg1 + -0xe8;
    piVar14 = *piVar12;
    if (piVar14 != piVar12) {
        unaff_x19 = arg1 + -0x378;
        unaff_x21 = arg1 + -0x238;
        unaff_x22 = &uStack_b8 | 1;
        unaff_x23 = arg1 + -0x98;
        unaff_x24 = 0x8000580;
        unaff_x25 = obj.servreg_register_listener_resp_ei;
        unaff_x26 = 0xfffffff;
        do {
            if (piVar14[-1] == '\0') {
                if (*(piVar14 + -0xb) != '\0') {
                    *(piVar14 + -0xb) = 0;
                    goto code_r0x08001c4c;
                }
            }
            else if (*(piVar14 + -0xc) != '\0') {
                *(piVar14 + -0xc) = 0;
                uStack_c0 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_78 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_b8 = 0;
                uStack_b0 = 0;
                uStack_e0 = 0;
                uStack_d8 = 0;
                uStack_f0 = 0;
                uStack_e8 = 0;
                uStack_100 = 0;
                uStack_f8 = 0;
                uStack_110 = 0;
                uStack_108 = 0;
                iVar5 = qmi_txn_init(unaff_x21,&uStack_110,obj.servreg_register_listener_resp_ei,&uStack_c8);
                if (iVar5 < 0) {
code_r0x08001c4c:
                    *(piVar14 + -2) = 0xfffffff;
                }
                else {
                    uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
                    strcpy(unaff_x22,piVar14 + -0x6f);
                    iVar5 = qmi_send_request(unaff_x21,piVar14 + -0x2c,&uStack_110,0x20,0x47,
                                             obj.servreg_register_listener_req_ei,&uStack_b8);
                    if (iVar5 < 0) {
                        qmi_txn_cancel(&uStack_110);
                        goto code_r0x08001c4c;
                    }
                    uVar6 = qmi_txn_wait(&uStack_110,0x4e2);
                    if (uVar6 < 0) {
                        uVar7 = 0x800076e;
code_r0x08001d84:
                        _printk(uVar7,piVar14 + -0x6f,uVar6);
                        goto code_r0x08001c4c;
                    }
                    if (uStack_c8 != 0) {
                        uVar6 = uStack_c8._2_2_;
                        uVar7 = 0x800089f;
                        goto code_r0x08001d84;
                    }
                    *(piVar14 + -2) = uStack_c0;
                }
                mutex_lock(unaff_x23);
                unaff_x28 = *(arg1 + 0x70);
                __cfi_slowpath_diag(0x717e13c02c8a8b12,unaff_x28,0x8000580);
                (*unaff_x28)(piVar14[-2],piVar14 + -0x6f,*(arg1 + 0x78));
                mutex_unlock(unaff_x23);
            }
            piVar14 = *piVar14;
        } while (piVar14 != piVar12);
    }
    mutex_unlock(iStack_118);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_70) {
        return;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.pdr_indack_work;
    pcStack_178 = sym.pdr_indack_work;
    iVar1 = sp_el0;
    piVar11 = iVar8 + -0x108;
    iStack_190 = *(iVar1 + 0x5e0);
    puStack_180 = &stack0xffffffffffffffa0;
    pcStack_170 = unaff_x28;
    piStack_168 = piVar14;
    uStack_160 = unaff_x26;
    pcStack_158 = unaff_x25;
    uStack_150 = unaff_x24;
    iStack_148 = unaff_x23;
    uStack_140 = unaff_x22;
    iStack_138 = unaff_x21;
    piStack_130 = piVar12;
    iStack_128 = unaff_x19;
    if (*piVar11 != piVar11) {
        piVar12 = *piVar11;
        do {
            iVar2 = piVar12[-1];
            piVar14 = *piVar12;
            mutex_lock(iVar8 + -200);
            *(iVar2 + 0xa0) = piVar12[-2];
            mod_timer(piVar12 + 2,_kmem_cache_alloc_trace + 0x8ca);
            pcVar13 = *(iVar8 + 0x40);
            __cfi_slowpath_diag(0x717e13c02c8a8b12,pcVar13,0x80005a0);
            iVar1 = iVar2 + 0x41;
            (*pcVar13)(*(iVar2 + 0xa0),iVar1,*(iVar8 + 0x48));
            del_timer_sync(piVar12 + 2);
            mutex_unlock(iVar8 + -200);
            uVar4 = *(piVar12 + -0xc);
            uStack_1dc = 0;
            uStack_198 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            uStack_1b8 = 0;
            uStack_1b0 = 0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            uStack_1d8 = 0;
            uStack_1d0 = 0;
            uStack_1f0 = 0;
            uStack_1e8 = 0;
            uStack_200 = 0;
            uStack_1f8 = 0;
            uStack_210 = 0;
            uStack_208 = 0;
            uStack_220 = 0;
            uStack_218 = 0;
            uStack_228 = 0;
            iVar5 = qmi_txn_init(iVar8 + -0x268,&uStack_228,obj.servreg_set_ack_resp_ei,&uStack_1dc);
            if (-1 < iVar5) {
                uStack_196 = uVar4;
                strcpy(&uStack_1d8,iVar1);
                qmi_send_request(iVar8 + -0x268,iVar2 + 0x84,&uStack_228,0x23,0x48,obj.servreg_set_ack_req_ei,
                                 &uStack_1d8);
                qmi_txn_cancel(&uStack_228);
            }
            _printk(0x800066b,iVar1,*(iVar2 + 0xa0),*(piVar12 + -0xc));
            mutex_lock(iVar8 + -0xf8);
            uVar9 = __list_del_entry_valid(piVar12);
            if ((uVar9 & 1) != 0) {
                iVar1 = *piVar12;
                piVar3 = piVar12[1];
                *(iVar1 + 8) = piVar3;
                *piVar3 = iVar1;
            }
            *piVar12 = -0x2152ffffffffff00;
            piVar12[1] = -0x2152fffffffffede;
            mutex_unlock(iVar8 + -0xf8);
            kfree(piVar12 + -2);
            piVar12 = piVar14;
        } while (piVar14 != piVar11);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_190) {
        return;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.pdr_handle_release;
    if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
        mutex_lock(uVar9 + 0x2b0);
        piVar12 = *(uVar9 + 0x290);
        while (uVar9 + 0x290 != piVar12) {
            piVar14 = *piVar12;
            uVar10 = __list_del_entry_valid(piVar12);
            if ((uVar10 & 1) != 0) {
                iVar1 = *piVar12;
                piVar11 = piVar12[1];
                *(iVar1 + 8) = piVar11;
                *piVar11 = iVar1;
            }
            *piVar12 = -0x2152ffffffffff00;
            piVar12[1] = -0x2152fffffffffede;
            kfree(piVar12 + -0x16);
            piVar12 = piVar14;
        }
        mutex_unlock(uVar9 + 0x2b0);
        cancel_work_sync(uVar9 + 0x348);
        cancel_work_sync(uVar9 + 0x378);
        cancel_work_sync(uVar9 + 0x3a8);
        destroy_workqueue(*(uVar9 + 0x3d8));
        destroy_workqueue(*(uVar9 + 0x3e0));
        qmi_handle_release(uVar9);
        qmi_handle_release(uVar9 + 0x140);
        kfree(uVar9);
    }
    return;
}


// ===== sym.pdr_indack_work @ 0x08001dd8 (size 524) =====

void sym.pdr_indack_work(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    ushort uVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_bc;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ushort uStack_78;
    ushort uStack_76;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    piVar9 = arg1 + -0x108;
    iStack_70 = *(iVar1 + 0x5e0);
    if (*piVar9 != piVar9) {
        piVar11 = *piVar9;
        do {
            iVar2 = piVar11[-1];
            piVar3 = *piVar11;
            mutex_lock(arg1 + -200);
            *(iVar2 + 0xa0) = piVar11[-2];
            mod_timer(piVar11 + 2,_kmem_cache_alloc_trace + 0x8ca);
            pcVar10 = *(arg1 + 0x40);
            __cfi_slowpath_diag(0x717e13c02c8a8b12,pcVar10,0x80005a0);
            iVar1 = iVar2 + 0x41;
            (*pcVar10)(*(iVar2 + 0xa0),iVar1,*(arg1 + 0x48));
            del_timer_sync(piVar11 + 2);
            mutex_unlock(arg1 + -200);
            uVar5 = *(piVar11 + -0xc);
            uStack_bc = 0;
            uStack_78 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            uStack_108 = 0;
            iVar6 = qmi_txn_init(arg1 + -0x268,&uStack_108,obj.servreg_set_ack_resp_ei,&uStack_bc);
            if (-1 < iVar6) {
                uStack_76 = uVar5;
                strcpy(&uStack_b8,iVar1);
                qmi_send_request(arg1 + -0x268,iVar2 + 0x84,&uStack_108,0x23,0x48,obj.servreg_set_ack_req_ei,
                                 &uStack_b8);
                qmi_txn_cancel(&uStack_108);
            }
            _printk(0x800066b,iVar1,*(iVar2 + 0xa0),*(piVar11 + -0xc));
            mutex_lock(arg1 + -0xf8);
            uVar7 = __list_del_entry_valid(piVar11);
            if ((uVar7 & 1) != 0) {
                iVar1 = *piVar11;
                piVar4 = piVar11[1];
                *(iVar1 + 8) = piVar4;
                *piVar4 = iVar1;
            }
            *piVar11 = -0x2152ffffffffff00;
            piVar11[1] = -0x2152fffffffffede;
            mutex_unlock(arg1 + -0xf8);
            kfree(piVar11 + -2);
            piVar11 = piVar3;
        } while (piVar3 != piVar9);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_70) {
        return;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18 = sym.pdr_handle_release;
    if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
        mutex_lock(uVar7 + 0x2b0);
        piVar9 = *(uVar7 + 0x290);
        while (uVar7 + 0x290 != piVar9) {
            piVar11 = *piVar9;
            uVar8 = __list_del_entry_valid(piVar9);
            if ((uVar8 & 1) != 0) {
                iVar1 = *piVar9;
                piVar3 = piVar9[1];
                *(iVar1 + 8) = piVar3;
                *piVar3 = iVar1;
            }
            *piVar9 = -0x2152ffffffffff00;
            piVar9[1] = -0x2152fffffffffede;
            kfree(piVar9 + -0x16);
            piVar9 = piVar11;
        }
        mutex_unlock(uVar7 + 0x2b0);
        cancel_work_sync(uVar7 + 0x348);
        cancel_work_sync(uVar7 + 0x378);
        cancel_work_sync(uVar7 + 0x3a8);
        destroy_workqueue(*(uVar7 + 0x3d8));
        destroy_workqueue(*(uVar7 + 0x3e0));
        qmi_handle_release(uVar7);
        qmi_handle_release(uVar7 + 0x140);
        kfree(uVar7);
    }
    return;
}


// ===== sym.pdr_handle_release @ 0x08001fe4 (size 256) =====

void sym.pdr_handle_release(uint32_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    uVar4 = arg1;
    *in_x18 = unaff_x30;
    if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
        mutex_lock(uVar4 + 0x2b0);
        piVar3 = *(uVar4 + 0x290);
        while (uVar4 + 0x290 != piVar3) {
            piVar6 = *piVar3;
            uVar5 = __list_del_entry_valid(piVar3);
            if ((uVar5 & 1) != 0) {
                iVar1 = *piVar3;
                piVar2 = piVar3[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar3 = -0x2152ffffffffff00;
            piVar3[1] = -0x2152fffffffffede;
            kfree(piVar3 + -0x16);
            piVar3 = piVar6;
        }
        mutex_unlock(uVar4 + 0x2b0);
        cancel_work_sync(uVar4 + 0x348);
        cancel_work_sync(uVar4 + 0x378);
        cancel_work_sync(uVar4 + 0x3a8);
        destroy_workqueue(*(uVar4 + 0x3d8));
        destroy_workqueue(*(uVar4 + 0x3e0));
        qmi_handle_release(uVar4);
        qmi_handle_release(uVar4 + 0x140);
        kfree(uVar4);
    }
    return;
}


// ===== sym.pdr_notify_lookup_failure @ 0x080020e4 (size 236) =====

void sym.pdr_notify_lookup_failure(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80005c0,arg2 + 0x41,arg2,arg3 & 0xffffffff);
    if (arg3 != -6) {
        uVar3 = __list_del_entry_valid(arg2 + 0xb0);
        if ((uVar3 & 1) != 0) {
            iVar1 = *(arg2 + 0xb0);
            piVar2 = *(arg2 + 0xb8);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(arg2 + 0xb0) = 0xdead000000000100;
        *(arg2 + 0xb8) = 0xdead000000000122;
        *(arg2 + 0xa0) = 1;
        mutex_lock(arg1 + 0x2e0);
        pcVar4 = *(arg1 + 1000);
        __cfi_slowpath_diag(0x717e13c02c8a8b12,pcVar4,0x8000560);
        (*pcVar4)(*(arg2 + 0xa0),arg2 + 0x41,*(arg1 + 0x3f0));
        mutex_unlock(arg1 + 0x2e0);
        kfree(arg2);
    }
    return;
}


// ===== sym.pdr_locator_new_server @ 0x080021d0 (size 204) =====

ulong sym.pdr_locator_new_server(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x280) = 0x2a;
    *(arg1 + 0x284) = *(arg2 + 0xc);
    *(arg1 + 0x288) = *(arg2 + 0x10);
    mutex_lock(arg1 + 0x310);
    *(arg1 + 0x340) = 1;
    mutex_unlock(arg1 + 0x310);
    mutex_lock(arg1 + 0x2b0);
    piVar1 = *(arg1 + 0x290);
    if (piVar1 != arg1 + 0x290) {
        do {
            if (*(piVar1 + -10) != '\0') {
                queue_work_on(0x20,_system_wq,arg1 + 0x348);
            }
            piVar1 = *piVar1;
        } while (piVar1 != arg1 + 0x290);
    }
    mutex_unlock(arg1 + 0x2b0);
    return 0;
}


// ===== sym.pdr_locator_del_server @ 0x0800229c (size 76) =====

void sym.pdr_locator_del_server(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x310);
    *(arg1 + 0x340) = 0;
    mutex_unlock(arg1 + 0x310);
    *(arg1 + 0x284) = 0;
    return;
}


// ===== sym.pdr_notifier_new_server @ 0x080022e8 (size 220) =====

ulong sym.pdr_notifier_new_server(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x170);
    piVar1 = *(arg1 + 0x150);
    if (piVar1 != arg1 + 0x150) {
        do {
            if ((*(piVar1 + -0x1c) == *arg2) && (piVar1[-4] == *(arg2 + 8))) {
                *(piVar1 + -1) = 1;
                *(piVar1 + -0xc) = 1;
                *(piVar1 + -0x2c) = 0x2a;
                *(piVar1 + -5) = *(arg2 + 0xc);
                *(piVar1 + -0x24) = *(arg2 + 0x10);
                queue_work_on(0x20,*(arg1 + 0x298),arg1 + 0x238);
            }
            piVar1 = *piVar1;
        } while (piVar1 != arg1 + 0x150);
    }
    mutex_unlock(arg1 + 0x170);
    return 0;
}


// ===== sym.pdr_notifier_del_server @ 0x080023c4 (size 196) =====

void sym.pdr_notifier_del_server(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x170);
    piVar1 = *(arg1 + 0x150);
    if (piVar1 != arg1 + 0x150) {
        do {
            if ((*(piVar1 + -0x1c) == *arg2) && (piVar1[-4] == *(arg2 + 8))) {
                *(piVar1 + -1) = 0;
                *(piVar1 + -0xb) = 1;
                piVar1[-5] = 0;
                queue_work_on(0x20,*(arg1 + 0x298),arg1 + 0x238);
            }
            piVar1 = *piVar1;
        } while (piVar1 != arg1 + 0x150);
    }
    mutex_unlock(arg1 + 0x170);
    return;
}


// ===== sym.pdr_indication_cb @ 0x08002488 (size 352) =====

uchar  [16] sym.pdr_indication_cb(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t iVar1;
    uint *puVar2;
    uint uVar3;
    int iVar4;
    uint64_t uVar5;
    uint *puVar6;
    ulong *in_x18;
    char *pcVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    if (((arg2 != 0) && (pcVar7 = arg2 + 4, *pcVar7 != '\0')) &&
       (uVar5 = strlen(pcVar7), noname_1 = extraout_q0, uVar5 < 0x41)) {
        iVar1 = arg1 + 0x170;
        mutex_lock(iVar1);
        for (piVar8 = *(arg1 + 0x150); piVar8 != arg1 + 0x150; piVar8 = *piVar8) {
            iVar4 = strcmp(piVar8 + -0x6f,pcVar7);
            if (iVar4 == 0) {
                mutex_unlock(iVar1);
                _printk(0x80006a8,pcVar7,*arg2,*(arg2 + 0x46));
                puVar6 = kmem_cache_alloc_trace(_strlen,0xdc0,0x58);
                if (puVar6 == NULL) {
                    return extraout_q0_00;
                }
                uVar3 = *arg2;
                *(puVar6 + 1) = *(arg2 + 0x46);
                *puVar6 = uVar3;
                *(puVar6 + 2) = piVar8 + -0x16;
                init_timer_key(puVar6 + 8,sym.ind_notif_timeout_handler.ee6aea036f715ac630b613840e2b657c.cfi_jt,0,0,
                               0);
                mutex_lock(iVar1);
                piVar8 = *(arg1 + 0x168);
                puVar2 = puVar6 + 4;
                uVar5 = __list_add_valid(puVar2,piVar8,arg1 + 0x160);
                if ((uVar5 & 1) != 0) {
                    *(arg1 + 0x168) = puVar2;
                    *(puVar6 + 4) = arg1 + 0x160;
                    *(puVar6 + 6) = piVar8;
                    *piVar8 = puVar2;
                }
                mutex_unlock(iVar1);
                auVar9 = queue_work_on(0x20,*(arg1 + 0x2a0),arg1 + 0x268);
                return auVar9;
            }
        }
        noname_1 = mutex_unlock(iVar1);
    }
    return noname_1;
}


// ===== sym.ind_notif_timeout_handler @ 0x080025e8 (size 100) =====

void sym.ind_notif_timeout_handler(int64_t arg1)

{
    ushort uVar1;
    code *pcVar2;
    uchar *puVar3;
    uint *in_x2;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + -0x18);
    uVar1 = *(arg1 + -0x1c);
    *in_x2 = 0x8009000;
    if (qcom_device_shutdown_in_progress == 0x0) {
        auVar5 = panic("PDR: Indication notifier %s, state: 0x%x, trans-id: %d\n taking too long",iVar4 + 0x41,
                       *(iVar4 + 0xa0),uVar1);
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80026a4);
        (*pcVar2)();
    }
    __warn_printk();
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8002638);
    (*pcVar2)();
}


// ===== sym.__cfi_check_fail @ 0x0800264c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002690

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
    //switch table (4 cases) at 0x80008c9
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80026a4);
    (*pcVar1)();
}

