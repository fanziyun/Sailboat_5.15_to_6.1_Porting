// decompiled from qmi_helpers by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 604) =====

//WARNING: Switch with 1 destination removed at 0x08001f08

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x30af9c08b616d234) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 == -0x7edf159805032ea9) {
                pcVar2 = sym.qmi_send_response.cfi_jt;
code_r0x080011ec:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001ec8;
            }
            if (arg1 == -0x7e61bb200aa3ba19) {
                pcVar2 = sym.qmi_set_sndtimeo.cfi_jt;
            }
            else {
                if (arg1 != -0x71825ddc99bf2ed6) goto code_r0x08001ec8;
                pcVar2 = sym.qmi_txn_wait.cfi_jt;
            }
        }
        else if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.qmi_data_ready_work.365cec2a77bf8c8c807d4b217be1be23.cfi_jt;
        }
        else if (arg1 == 0x4032e62f912964a) {
            pcVar2 = sym.qmi_send_indication.cfi_jt;
        }
        else {
            if (arg1 != 0x1620fdcd09a1cac9) goto code_r0x08001ec8;
            pcVar2 = sym.qmi_handle_init.cfi_jt;
        }
    }
    else if (arg1 < 0x5715d91c65134457) {
        if (arg1 == 0x30af9c08b616d234) {
            pcVar2 = sym.qmi_txn_init.cfi_jt;
        }
        else if (arg1 == 0x3d8e3acd1a9d493c) {
            pcVar2 = sym.qmi_txn_cancel.cfi_jt;
        }
        else {
            if (arg1 != 0x53abe107a3d895d3) goto code_r0x08001ec8;
            pcVar2 = sym.__typeid__ZTSFvP10qmi_handleE_global_addr;
        }
    }
    else if (arg1 < 0x71ef02cd71559a86) {
        if (arg1 == 0x5715d91c65134457) {
            pcVar2 = sym.qmi_encode_message.cfi_jt;
        }
        else {
            if (arg1 != 0x644e8cc6b20381ce) goto code_r0x08001ec8;
            pcVar2 = sym.qmi_data_ready.365cec2a77bf8c8c807d4b217be1be23.cfi_jt;
        }
    }
    else {
        if (arg1 != 0x71ef02cd71559a86) {
            if (arg1 != 0x73df336cbabe6530) goto code_r0x08001ec8;
            pcVar2 = sym.qmi_add_lookup.cfi_jt;
            goto code_r0x080011ec;
        }
        pcVar2 = sym.qmi_decode_message.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001ec8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f1c);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFvP10qmi_handleE_global_addr @ 0x08001268 (size 8) =====

void sym.__typeid__ZTSFvP10qmi_handleE_global_addr(int64_t *param_1,ulong param_2,int64_t param_3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t *piVar4;
    code *pcVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    mutex_lock(param_1 + 1);
    iVar3 = *param_1;
    *(*(iVar3 + 0x18) + 0x2a8) = 0;
    synchronize_rcu();
    sock_release(iVar3);
    *param_1 = 0;
    mutex_unlock(param_1 + 1);
    cancel_work_sync(param_1 + 9);
    piVar6 = param_1 + 0x14;
    if (piVar6 != *piVar6) {
        piVar4 = *piVar6;
        do {
            pcVar5 = param_1[0x19];
            piVar7 = *piVar4;
            if (pcVar5 != NULL) {
                param_3 = 0x8000260;
                __cfi_slowpath_diag(0x77b71c1b418c981d,pcVar5);
                (*pcVar5)(param_1,piVar4 + -4);
            }
            uVar2 = __list_del_entry_valid(piVar4);
            if ((uVar2 & 1) != 0) {
                iVar3 = *piVar4;
                piVar1 = piVar4[1];
                *(iVar3 + 8) = piVar1;
                *piVar1 = iVar3;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4 + -4);
            piVar4 = piVar7;
        } while (piVar6 != piVar7);
    }
    destroy_workqueue(param_1[0xf]);
    mutex_lock(param_1 + 0x21);
    piVar6 = param_1 + 0x1e;
    iStack_5c = 0;
    iVar3 = idr_get_next(piVar6,&iStack_5c);
    while (iVar3 != 0) {
        idr_remove(piVar6,*(iVar3 + 8));
        *(iVar3 + 0x30) = 0xffffff9a;
        complete(iVar3 + 0x10);
        iStack_5c = iStack_5c + 1;
        iVar3 = idr_get_next(piVar6,&iStack_5c);
    }
    mutex_unlock(param_1 + 0x21);
    idr_destroy(piVar6);
    kfree(param_1[0x10]);
    piVar6 = param_1[0x12];
    while (param_1 + 0x12 != piVar6) {
        piVar4 = *piVar6;
        uVar2 = __list_del_entry_valid(piVar6);
        if ((uVar2 & 1) != 0) {
            iVar3 = *piVar6;
            piVar7 = piVar6[1];
            *(iVar3 + 8) = piVar7;
            *piVar7 = iVar3;
        }
        *piVar6 = -0x2152ffffffffff00;
        piVar6[1] = -0x2152fffffffffede;
        kfree(piVar6 + -4);
        piVar6 = piVar4;
    }
    piVar6 = param_1[0x16];
    while (param_1 + 0x16 != piVar6) {
        piVar4 = *piVar6;
        uVar2 = __list_del_entry_valid(piVar6);
        if ((uVar2 & 1) != 0) {
            iVar3 = *piVar6;
            piVar7 = piVar6[1];
            *(iVar3 + 8) = piVar7;
            *piVar7 = iVar3;
        }
        *piVar6 = -0x2152ffffffffff00;
        piVar6[1] = -0x2152fffffffffede;
        kfree(piVar6 + -4);
        piVar6 = piVar4;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_58) {
        auVar8 = __stack_chk_fail();
        *extraout_x18 = sym.qmi_send_request;
        sym.qmi_send_message(auVar8._0_8_,auVar8._8_8_,param_3,0);
        return;
    }
    return;
}


// ===== sym.qmi_data_ready_work.365cec2a77bf8c8c807d4b217be1be23.cfi_jt @ 0x08001270 (size 8) =====

void sym.qmi_data_ready_work.365cec2a77bf8c8c807d4b217be1be23.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint *puVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint *puVar10;
    ulong *in_x18;
    int64_t *arg1;
    code *pcVar11;
    code *unaff_x21;
    int64_t *piVar12;
    ulong unaff_x22;
    ulong uVar13;
    code *pcVar14;
    char *arg4;
    code *pcVar15;
    code *unaff_x27;
    code *pcVar16;
    code *pcVar17;
    ulong unaff_x30;
    ulong *puStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong *puStack_128;
    ulong uStack_120;
    ulong uStack_118;
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
    int iStack_c0;
    ulong uStack_b8;
    uint64_t uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    pcVar11 = param_1 + -0x40;
    iStack_70 = *(iVar8 + 0x5e0);
    puStack_128 = &uStack_c8;
    uStack_138 = *(param_1 + 0x38);
    uVar13 = *(param_1 + 0x40);
    iStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0xc;
    uStack_130 = uVar13;
    mutex_lock(pcVar11);
    arg1 = param_1 + -0x48;
    iVar8 = *arg1;
    if (iVar8 != 0) {
        puStack_140 = param_1 + -0x10;
        iVar1 = param_1 + 0xc0;
        unaff_x21 = param_1 + 0x58;
        unaff_x22 = 0xdead000000000100;
        do {
            uVar6 = kernel_recvmsg(iVar8,&puStack_128,&uStack_138,1,uVar13,0x40);
            iVar8 = uVar6;
            mutex_unlock(pcVar11);
            if (iVar8 == -0xb) goto code_r0x08002d1c;
            if (iVar8 == -0x66) {
                uStack_b0 = uStack_b0 & 0xffffffff00000000;
                uStack_b8 = 0;
                uVar13 = *(*(*arg1 + 0x18) + 0x198);
                pcVar14 = sym.qmi_sock_create(arg1,&uStack_b8);
                if (pcVar14 < 0xfffffffffffff001) {
                    pcVar16 = *unaff_x21;
                    while (unaff_x21 != pcVar16) {
                        pcVar15 = *(param_1 + 0x80);
                        pcVar17 = *pcVar16;
                        if (pcVar15 != NULL) {
                            __cfi_slowpath_diag(0x77b71c1b418c981d,pcVar15,0x8000260);
                            (*pcVar15)(arg1,pcVar16 + -0x20);
                        }
                        uVar9 = __list_del_entry_valid(pcVar16);
                        if ((uVar9 & 1) != 0) {
                            iVar8 = *pcVar16;
                            piVar12 = *(pcVar16 + 8);
                            *(iVar8 + 8) = piVar12;
                            *piVar12 = iVar8;
                        }
                        *pcVar16 = -0x2152ffffffffff00;
                        *(pcVar16 + 8) = -0x2152fffffffffede;
                        kfree(pcVar16 + -0x20);
                        pcVar16 = pcVar17;
                    }
                    unaff_x21 = *(param_1 + 0x88);
                    if (unaff_x21 == NULL) goto code_r0x08002c5c;
                    if (unaff_x21 != sym.__typeid__ZTSFvP10qmi_handleE_global_addr) goto code_r0x08002d5c;
                    goto code_r0x08002c54;
                }
                goto code_r0x08002d1c;
            }
            if (uVar6 < 0) goto code_r0x08002cf8;
            if ((uStack_c8._4_4_ == *(param_1 + -0xc)) && (iStack_c0 == -2)) {
                if (0x13 < uVar6) {
                    puVar10 = *(param_1 + 0x38);
                    switch(*puVar10) {
                    case 3:
                        iVar7 = puVar10[1];
                        pcVar14 = *unaff_x21;
                        while (pcVar16 = pcVar14, unaff_x21 != pcVar16) {
                            unaff_x27 = pcVar16 + -0x20;
                            pcVar14 = *pcVar16;
                            if ((iVar7 == -1) || (*(pcVar16 + -0x14) == iVar7)) {
                                pcVar15 = *(param_1 + 0x80);
                                if (pcVar15 != NULL) {
                                    __cfi_slowpath_diag(0x77b71c1b418c981d,pcVar15,0x8000260);
                                    (*pcVar15)(arg1,unaff_x27);
                                }
                                uVar9 = __list_del_entry_valid(pcVar16);
                                if ((uVar9 & 1) != 0) {
                                    iVar8 = *pcVar16;
                                    piVar12 = *(pcVar16 + 8);
                                    *(iVar8 + 8) = piVar12;
                                    *piVar12 = iVar8;
                                }
                                *pcVar16 = -0x2152ffffffffff00;
                                *(pcVar16 + 8) = -0x2152fffffffffede;
                                kfree(unaff_x27);
                            }
                        }
                        pcVar14 = *(param_1 + 0x98);
                        if (pcVar14 != NULL) {
                            __cfi_slowpath_diag(0xb92892cb08389dc6,pcVar14,0x80001e0);
                            (*pcVar14)(arg1,iVar7);
                        }
                        break;
                    case 4:
                        iVar7 = puVar10[3];
                        iVar4 = puVar10[4];
                        if ((iVar4 != 0 || iVar7 != 0) && (*(param_1 + 0x78) != 0)) {
                            uVar3 = puVar10[1];
                            uVar6 = puVar10[2];
                            unaff_x27 = uVar6;
                            iVar8 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar8 = 0x30;
                            }
                            puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x30);
                            if (puVar10 != NULL) {
                                puVar10[4] = iVar4;
                                *puVar10 = uVar3;
                                puVar10[1] = uVar6 & 0xff;
                                pcVar14 = *(param_1 + 0x78);
                                puVar10[2] = uVar6 >> 8;
                                puVar10[3] = iVar7;
                                __cfi_slowpath_diag(0xf051faa996adcc5c,pcVar14,0x8000200);
                                iVar7 = (*pcVar14)(arg1,puVar10);
                                if (iVar7 < 0) {
                                    kfree(puVar10);
                                }
                                else {
                                    iVar8 = *unaff_x21;
                                    puVar2 = puVar10 + 8;
                                    uVar9 = __list_add_valid(puVar2,unaff_x21,iVar8);
                                    if ((uVar9 & 1) != 0) {
                                        *(iVar8 + 8) = puVar2;
                                        *(puVar10 + 8) = iVar8;
                                        *(puVar10 + 10) = unaff_x21;
                                        *unaff_x21 = puVar2;
                                    }
                                }
                            }
                        }
                        break;
                    case 5:
                        if (unaff_x21 != *unaff_x21) {
                            uVar6 = puVar10[3];
                            unaff_x27 = uVar6;
                            iVar7 = puVar10[4];
                            pcVar14 = *unaff_x21;
                            do {
                                pcVar16 = *pcVar14;
                                if (((uVar6 == 0xffffffff) || (*(pcVar14 + -0x14) == uVar6)) &&
                                   ((iVar7 == -1 || (*(pcVar14 + -0x10) == iVar7)))) {
                                    pcVar15 = *(param_1 + 0x80);
                                    if (pcVar15 != NULL) {
                                        __cfi_slowpath_diag(0x77b71c1b418c981d,pcVar15,0x8000260);
                                        (*pcVar15)(arg1,pcVar14 + -0x20);
                                    }
                                    uVar9 = __list_del_entry_valid(pcVar14);
                                    if ((uVar9 & 1) != 0) {
                                        iVar8 = *pcVar14;
                                        piVar12 = *(pcVar14 + 8);
                                        *(iVar8 + 8) = piVar12;
                                        *piVar12 = iVar8;
                                    }
                                    *pcVar14 = -0x2152ffffffffff00;
                                    *(pcVar14 + 8) = -0x2152fffffffffede;
                                    kfree(pcVar14 + -0x20);
                                }
                                pcVar14 = pcVar16;
                            } while (unaff_x21 != pcVar16);
                        }
                        break;
                    case 6:
                        pcVar14 = *(param_1 + 0xa0);
                        if (pcVar14 != NULL) {
                            uVar3 = puVar10[1];
                            uVar5 = puVar10[2];
                            __cfi_slowpath_diag(0x7b38a7f1693a8f7b,pcVar14,0x8000220);
                            (*pcVar14)(arg1,uVar3,uVar5);
                        }
                    }
                }
            }
            else {
                pcVar14 = *(param_1 + 0x90);
                if (pcVar14 == NULL) {
                    if (uVar6 != 0) {
                        if (uVar6 < 7) {
                            _printk(0x8000612);
                        }
                        else {
                            arg4 = *(param_1 + 0x38);
                            if (*arg4 == '\x02') {
                                mutex_lock(iVar1);
                                pcVar14 = idr_find(param_1 + 0xa8,*(arg4 + 1));
                                if (pcVar14 == NULL) {
                                    mutex_unlock(iVar1);
                                }
                                else {
                                    if ((*(pcVar14 + 0x40) == 0) || (*(pcVar14 + 0x38) == 0)) {
                                        sym.qmi_invoke_handler(arg1,&uStack_c8,pcVar14,arg4);
                                    }
                                    else {
                                        iVar7 = sym.qmi_decode_message
                                                          (arg4,iVar8,*(pcVar14 + 0x38),*(pcVar14 + 0x40));
                                        if (iVar7 < 0) {
                                            _printk(0x8000449);
                                        }
                                        *(pcVar14 + 0x30) = iVar7;
                                        complete(pcVar14 + 0x10);
                                    }
                                    mutex_unlock(iVar1);
                                    unaff_x27 = pcVar14;
                                }
                            }
                            else {
                                uStack_80 = 0;
                                uStack_78 = 0;
                                uStack_90 = 0;
                                uStack_88 = 0;
                                uStack_a0 = 0;
                                uStack_98 = 0;
                                uStack_a8 = 0;
                                uStack_b8 = 0;
                                uStack_b0 = *(arg4 + 1);
                                sym.qmi_invoke_handler(arg1,&uStack_c8,&uStack_b8,arg4);
                            }
                        }
                    }
                }
                else {
                    __cfi_slowpath_diag(0x2b0ad0c67334edfc,pcVar14,0x80001a0);
                    (*pcVar14)(arg1,&uStack_c8,*(param_1 + 0x38),iVar8);
                }
            }
            uStack_138 = *(param_1 + 0x38);
            uStack_130 = *(param_1 + 0x40);
            mutex_lock(pcVar11);
            iVar8 = *arg1;
            uVar13 = uStack_130;
        } while (iVar8 != 0);
    }
    mutex_unlock(pcVar11);
    iVar8 = -0x20;
code_r0x08002cf8:
    _printk(0x8000338,iVar8);
code_r0x08002d1c:
    while (pcVar14 = unaff_x27, uVar13 = unaff_x22, iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_70) {
        __stack_chk_fail();
code_r0x08002d5c:
        __cfi_slowpath_diag(0x53abe107a3d895d3,unaff_x21,0x80001c0);
code_r0x08002c54:
        (*unaff_x21)(arg1);
code_r0x08002c5c:
        mutex_lock(pcVar11);
        unaff_x22 = uVar13;
        unaff_x27 = pcVar14;
        if (*arg1 == 0) {
            sock_release(pcVar14);
            mutex_unlock(pcVar11);
        }
        else {
            sock_release();
            *arg1 = pcVar14;
            *puStack_140 = uStack_b8;
            *(puStack_140 + 1) = uStack_b0;
            *(*(pcVar14 + 0x18) + 0x198) = uVar13;
            mutex_unlock(pcVar11);
            for (piVar12 = *(param_1 + 0x48); param_1 + 0x48 != piVar12; piVar12 = *piVar12) {
                sym.qmi_send_new_lookup(arg1,piVar12 + -4);
            }
            pcVar11 = param_1 + 0x68;
            for (unaff_x21 = *pcVar11; pcVar11 != unaff_x21; unaff_x21 = *unaff_x21) {
                sym.qmi_send_new_server(arg1,unaff_x21 + -0x20);
            }
        }
    }
    return;
}


// ===== sym.qmi_send_response.cfi_jt @ 0x08001278 (size 8) =====

void sym.qmi_send_response.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmi_send_message(param_1,param_2,param_3,2);
    return;
}


// ===== sym.qmi_send_request.cfi_jt @ 0x08001280 (size 8) =====

void sym.qmi_send_request.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmi_send_message(param_1,param_2,param_3,0);
    return;
}


// ===== sym.qmi_add_lookup.cfi_jt @ 0x08001288 (size 8) =====

ulong sym.qmi_add_lookup.cfi_jt(int64_t param_1,uint param_2,uint param_3,uint param_4)

{
    uint *puVar1;
    uint *arg2;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    arg2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x30);
    if (arg2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        puVar1 = arg2 + 8;
        *arg2 = param_2;
        arg2[1] = param_3;
        arg2[2] = param_4;
        piVar4 = param_1 + 0x90;
        iVar5 = *piVar4;
        uVar2 = __list_add_valid(puVar1,piVar4,iVar5);
        if ((uVar2 & 1) != 0) {
            *(iVar5 + 8) = puVar1;
            *(arg2 + 8) = iVar5;
            *(arg2 + 10) = piVar4;
            *piVar4 = puVar1;
        }
        sym.qmi_send_new_lookup(param_1,arg2);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.qmi_add_server.cfi_jt @ 0x08001290 (size 8) =====

ulong sym.qmi_add_server.cfi_jt(int64_t param_1,uint param_2,uint param_3,uint param_4)

{
    uint *puVar1;
    uint *arg2;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    arg2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x30);
    if (arg2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        puVar1 = arg2 + 8;
        *arg2 = param_2;
        arg2[1] = param_3;
        arg2[2] = param_4;
        piVar4 = param_1 + 0xb0;
        iVar5 = *piVar4;
        uVar2 = __list_add_valid(puVar1,piVar4,iVar5);
        if ((uVar2 & 1) != 0) {
            *(iVar5 + 8) = puVar1;
            *(arg2 + 8) = iVar5;
            *(arg2 + 10) = piVar4;
            *piVar4 = puVar1;
        }
        sym.qmi_send_new_server(param_1,arg2);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.qmi_handle_init.cfi_jt @ 0x08001298 (size 8) =====

uint sym.qmi_handle_init.cfi_jt(uint64_t *param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(param_1 + 0x21,"&qmi->txn_lock",obj.init_completion.__key);
    __mutex_init(param_1 + 1,"&qmi->sock_lock",obj.init_completion.__key);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x1e] = 0x1000000400000000;
    param_1[0x12] = param_1 + 0x12;
    param_1[0x13] = param_1 + 0x12;
    param_1[0x14] = param_1 + 0x14;
    param_1[0x15] = param_1 + 0x14;
    param_1[0x16] = param_1 + 0x16;
    param_1[0x17] = param_1 + 0x16;
    param_1[9] = 0xfffffffe0;
    param_1[10] = param_1 + 10;
    param_1[0xb] = param_1 + 10;
    param_1[0x27] = param_4;
    param_1[0xc] = sym.qmi_data_ready_work.365cec2a77bf8c8c807d4b217be1be23.cfi_jt;
    if (param_3 != NULL) {
        uVar3 = param_3[1];
        param_1[0x18] = *param_3;
        param_1[0x19] = uVar3;
        uVar1 = param_3[5];
        uVar3 = param_3[2];
        uVar2 = param_3[3];
        param_1[0x1c] = param_3[4];
        param_1[0x1d] = uVar1;
        param_1[0x1a] = uVar3;
        param_1[0x1b] = uVar2;
    }
    uVar3 = param_2 + 7;
    if (uVar3 < 0x15) {
        uVar3 = 0x14;
    }
    param_1[0x11] = uVar3;
    uVar3 = __kmalloc(uVar3,0xdc0);
    param_1[0x10] = uVar3;
    if (uVar3 == 0) {
        uVar4 = 0xfffffff4;
    }
    else {
        uVar3 = alloc_workqueue("qmi_msg_handler",0x12,1);
        param_1[0xf] = uVar3;
        if (uVar3 == 0) {
            uVar4 = 0xfffffff4;
        }
        else {
            uVar3 = sym.qmi_sock_create(param_1,param_1 + 7);
            *param_1 = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                return 0;
            }
            if (uVar3 == 0xffffffffffffff9f) {
                uVar4 = 0xfffffdfb;
            }
            else {
                _printk(0x80006ad);
                uVar4 = *param_1;
            }
            destroy_workqueue(param_1[0xf]);
        }
        kfree(param_1[0x10]);
    }
    return uVar4;
}


// ===== sym.qmi_txn_cancel.cfi_jt @ 0x080012a0 (size 8) =====

void sym.qmi_txn_cancel.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *param_1;
    iVar1 = iVar2 + 0x108;
    mutex_lock(iVar1);
    idr_remove(iVar2 + 0xf0,param_1[1]);
    mutex_unlock(iVar1);
    return;
}


// ===== sym.qmi_encode_message.cfi_jt @ 0x080012a8 (size 8) =====

uchar * sym.qmi_encode_message.cfi_jt
                  (uchar param_1,ushort param_2,uint32_t *param_3,ushort param_4,int64_t param_5,int64_t param_6)

{
    int iVar1;
    uchar *puVar2;
    ulong *in_x18;
    uchar *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_6 == 0) && (iVar1 = sym.qmi_calc_min_msg_len(param_5,1), iVar1 != 0)) {
        _printk(0x800030c,"qmi_encode_message",iVar1);
        puVar2 = 0xffffffffffffffea;
    }
    else {
        puVar2 = __kmalloc(*param_3 + 7,0xdc0);
        if (puVar2 == NULL) {
            puVar2 = 0xfffffffffffffff4;
        }
        else {
            puVar3 = NULL;
            if (param_6 != 0) {
                iVar1 = sym.qmi_encode(param_5,puVar2 + 7,param_6,*param_3);
                puVar3 = iVar1;
                if (iVar1 < 0) {
                    kfree(puVar2);
                    return puVar3;
                }
            }
            *puVar2 = param_1;
            *(puVar2 + 1) = param_4;
            *(puVar2 + 3) = param_2;
            *(puVar2 + 5) = puVar3;
            *param_3 = puVar3 + 7;
        }
    }
    return puVar2;
}


// ===== sym.qmi_txn_init.cfi_jt @ 0x080012b0 (size 8) =====

int sym.qmi_txn_init.cfi_jt(int64_t param_1,int64_t *param_2,int64_t param_3,int64_t param_4)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    __init_swait_queue_head(param_2 + 3,"&x->wait",obj.init_completion.__key);
    *param_2 = param_1;
    param_2[7] = param_3;
    param_2[8] = param_4;
    mutex_lock(param_1 + 0x108);
    iVar1 = idr_alloc_cyclic(param_1 + 0xf0,param_2,0,0xffff,0xcc0);
    if (iVar1 < 0) {
        _printk(0x8000567);
    }
    *(param_2 + 1) = iVar1;
    mutex_unlock(param_1 + 0x108);
    return iVar1;
}


// ===== sym.qmi_txn_wait.cfi_jt @ 0x080012b8 (size 8) =====

uint sym.qmi_txn_wait.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *param_1;
    iVar2 = wait_for_completion_timeout(param_1 + 2);
    if (param_1[6] == -0x66) {
        uVar3 = 0xffffff9a;
    }
    else {
        iVar1 = iVar4 + 0x108;
        mutex_lock(iVar1);
        idr_remove(iVar4 + 0xf0,param_1[1]);
        mutex_unlock(iVar1);
        if (iVar2 == 0) {
            uVar3 = 0xffffff92;
        }
        else {
            uVar3 = param_1[6];
        }
    }
    return uVar3;
}


// ===== sym.qmi_decode_message.cfi_jt @ 0x080012c0 (size 8) =====

ulong sym.qmi_decode_message.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_3 != 0) {
        uVar1 = 0xffffffea;
        if (((param_2 != 0) && (param_1 != 0)) && (param_4 != 0)) {
            *in_x18 = unaff_x30;
            uVar1 = sym.qmi_decode(param_3,param_4,param_1 + 7,param_2 - 7);
        }
        return uVar1;
    }
    return 0xffffffea;
}


// ===== sym.qmi_send_indication.cfi_jt @ 0x080012c8 (size 8) =====

int64_t sym.qmi_send_indication.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    int64_t *piVar5;
    uint8_t *arg1;
    uint64_t arg2;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    ulong *puVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_a0;
    uint64_t uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    piVar5 = &iStack_a0;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    param_3 = param_3 & 0xffffffff;
    iStack_58 = *(iVar3 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    iStack_a0 = 0;
    __init_swait_queue_head(&uStack_88,"&x->wait",obj.init_completion.__key);
    iVar3 = param_1 + 0x108;
    uStack_68 = 0;
    uStack_60 = 0;
    iStack_a0 = param_1;
    mutex_lock(iVar3);
    puVar4 = NULL;
    arg1 = 0xffff;
    arg2 = 0xcc0;
    iVar2 = idr_alloc_cyclic(param_1 + 0xf0,&iStack_a0,0);
    if (iVar2 < 0) {
        _printk(0x8000567);
        uStack_98 = CONCAT62(uStack_98._2_6_,iVar2);
        mutex_unlock(iVar3);
        iVar3 = iVar2;
    }
    else {
        uStack_98 = CONCAT62(uStack_98._2_6_,iVar2);
        mutex_unlock(iVar3);
        arg1 = 0x4;
        iVar3 = sym.qmi_send_message(param_1,param_2,&iStack_a0,4);
        iVar1 = iStack_a0;
        iVar6 = iStack_a0 + 0x108;
        mutex_lock(iVar6);
        idr_remove(iVar1 + 0xf0,uStack_98 & 0xffff);
        mutex_unlock(iVar6);
        puVar4 = piVar5;
        arg2 = param_3;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_58) {
        auVar9 = __stack_chk_fail();
        iVar3 = auVar9._0_8_;
        *extraout_x18 = sym.qmi_invoke_handler;
        iVar6 = *(iVar3 + 0x138);
        if ((iVar6 != 0) && (*(iVar6 + 0x18) != 0)) {
            puVar8 = iVar6 + 0x10;
            do {
                if ((*(puVar8 + -2) == *arg1) && (*(puVar8 + -0xc) == *(arg1 + 3))) {
                    iVar6 = __kmalloc(*puVar8,0xdc0);
                    if (iVar6 == 0) {
                        return 0;
                    }
                    iVar2 = sym.qmi_decode_message(arg1,arg2,puVar8[-1],iVar6);
                    if (iVar2 < 0) {
                        _printk(0x8000449);
                    }
                    else {
                        pcVar7 = puVar8[1];
                        __cfi_slowpath_diag(0x2b1394c7097a0a26,pcVar7,0x8000240);
                        (*pcVar7)(iVar3,auVar9._8_8_,puVar4,iVar6);
                    }
                    iVar3 = kfree(iVar6);
                    return iVar3;
                }
                piVar5 = puVar8 + 5;
                puVar8 = puVar8 + 4;
            } while (*piVar5 != 0);
        }
        return iVar3;
    }
    return iVar3;
}


// ===== sym.qmi_set_sndtimeo.cfi_jt @ 0x080012d0 (size 8) =====

void sym.qmi_set_sndtimeo.cfi_jt(int64_t *param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 1);
    *(*(*param_1 + 0x18) + 0x198) = param_2;
    mutex_unlock(param_1 + 1);
    return;
}


// ===== sym.qmi_data_ready.365cec2a77bf8c8c807d4b217be1be23.cfi_jt @ 0x080012d8 (size 8) =====

void sym.qmi_data_ready.365cec2a77bf8c8c807d4b217be1be23.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    uVar1 = *(param_1 + 0x2a8) & 0xfffffffffffffff8;
    if (uVar1 != 0) {
        queue_work_on(0x20,*(uVar1 + 0x78),uVar1 + 0x48);
    }
    __rcu_read_unlock();
    return;
}


// ===== sym.qmi_encode_message @ 0x080012e0 (size 252) =====

uchar * sym.qmi_encode_message(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uchar *puVar2;
    int64_t in_x4;
    int64_t in_x5;
    ulong *in_x18;
    uchar *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x5 == 0) && (iVar1 = sym.qmi_calc_min_msg_len(in_x4,1), iVar1 != 0)) {
        _printk(0x800030c,"qmi_encode_message",iVar1);
        puVar2 = 0xffffffffffffffea;
    }
    else {
        puVar2 = __kmalloc(*arg3 + 7,0xdc0);
        if (puVar2 == NULL) {
            puVar2 = 0xfffffffffffffff4;
        }
        else {
            puVar3 = NULL;
            if (in_x5 != 0) {
                iVar1 = sym.qmi_encode(in_x4,puVar2 + 7,in_x5,*arg3);
                puVar3 = iVar1;
                if (iVar1 < 0) {
                    kfree(puVar2);
                    return puVar3;
                }
            }
            *puVar2 = arg1;
            *(puVar2 + 1) = arg4;
            *(puVar2 + 3) = arg2;
            *(puVar2 + 5) = puVar3;
            *arg3 = puVar3 + 7;
        }
    }
    return puVar2;
}


// ===== sym.qmi_calc_min_msg_len @ 0x080013dc (size 304) =====

int sym.qmi_calc_min_msg_len(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    ulong *in_x18;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar4 = arg2;
        iVar6 = 0;
code_r0x08001420:
        while (*arg1 == 1) {
            if (iVar4 < 2) {
                do {
                    piVar1 = arg1 + 0x10;
                    piVar3 = arg1 + 0x20;
                    piVar2 = arg1 + 0x30;
                    arg1 = piVar3;
                } while (*piVar1 == *piVar2);
            }
            else {
                arg1 = arg1 + 0x20;
            }
        }
    //switch table (11 cases) at 0x8000280
        switch(*arg1) {
        case 0:
            goto code_r0x080014ec;
        default:
            iVar5 = iVar6 + *(arg1 + 8) * *(arg1 + 4);
            break;
        case 2:
            goto code_r0x08001470;
        case 9:
            iVar5 = sym.qmi_calc_min_msg_len(*(arg1 + 0x18),iVar4 + 1);
            iVar5 = iVar5 + iVar6;
            break;
        case 10:
            iVar5 = 1;
            if (0xff < *(arg1 + 4)) {
                iVar5 = 2;
            }
            if (iVar4 < 2) {
                iVar5 = 0;
            }
            iVar5 = iVar6 + *(arg1 + 8) * *(arg1 + 4) + iVar5;
        }
        iVar6 = iVar5 + 3;
        if (iVar4 != 1) {
            iVar6 = iVar5;
        }
        arg1 = arg1 + 0x20;
        goto code_r0x08001420;
    }
    iVar6 = 0;
code_r0x080014ec:
    return iVar6;
code_r0x08001470:
    iVar5 = 1;
    if (*(arg1 + 8) != 1) {
        iVar5 = 2;
    }
    iVar6 = iVar5 + iVar6;
    arg1 = arg1 + 0x20;
    goto code_r0x08001420;
}


// ===== sym.qmi_encode @ 0x0800150c (size 1284) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.qmi_encode(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    char *pcVar7;
    uint64_t uVar8;
    int in_w4;
    bool bVar9;
    int iVar10;
    uint32_t *puVar11;
    int iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    char *pcVar16;
    uint32_t uVar17;
    char *pcVar18;
    char *pcVar19;
    char *pcVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    char *pcStack_80;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    pcVar7 = arg3;
    uVar8 = arg4;
    if ((arg1 == 0) || (*arg1 == 0)) {
        uVar4 = 0;
    }
    else {
        bVar9 = false;
        iVar1 = 3;
        if (in_w4 != 1) {
            iVar1 = 0;
        }
        uVar14 = 0;
        iVar12 = 0;
        pcVar19 = arg2 + iVar1;
        pcStack_80 = arg2;
        do {
            uVar2 = *(arg1 + 0x10);
            if (*(arg1 + 0xc) != 1) {
                if (*(arg1 + 0xc) == 0) {
                    uStack_70 = 1;
                    goto code_r0x0800163c;
                }
                if ((uStack_70 != 0) && (uStack_70 <= *(arg1 + 4))) goto code_r0x0800163c;
                uVar6 = 0x8000353;
code_r0x08001974:
                _printk(uVar6,"qmi_encode");
                uVar4 = 0xffffffea;
                break;
            }
            uStack_70 = *(arg1 + 4);
code_r0x0800163c:
            uVar4 = *arg1;
            pcVar7 = uVar4;
            if (9 < uVar4 - 1) {
                uVar6 = 0x8000638;
                goto code_r0x08001974;
            }
            pcVar18 = arg3 + *(arg1 + 0x14);
            iVar13 = uVar14;
    //switch table (9 cases) at 0x800028b
            switch(uVar4) {
            case 1:
                if ((*pcVar18 == '\0') && (in_w4 < 2)) {
                    do {
                        puVar3 = arg1 + 0x30;
                        arg1 = arg1 + 0x20;
                    } while (uVar2 == *puVar3);
                }
                else {
                    arg1 = arg1 + 0x20;
                }
                break;
            case 2:
                pcVar7 = *(arg1 + 8);
                memcpy(&uStack_70,pcVar18);
                uVar4 = 1;
                if (*(arg1 + 8) != 1) {
                    uVar4 = 2;
                }
                uVar14 = uVar4 + iVar13;
                if (uVar14 + 3 <= (arg4 & 0xffffffffU)) {
                    pcVar7 = uVar4;
                    memcpy(pcVar19,&uStack_70);
                    pcVar19 = pcVar19 + uVar4;
                    iVar12 = uVar4 + iVar12;
                    if (uStack_70 == 0) {
                        if (in_w4 < 2) {
                            puVar3 = arg1 + 0x50;
                            do {
                                puVar11 = puVar3;
                                puVar3 = puVar11 + 8;
                            } while (puVar11[-8] == *puVar11);
                            arg1 = puVar11 + -4;
                        }
                        else {
                            arg1 = arg1 + 0x40;
                        }
                        goto code_r0x080016ec;
                    }
                    bVar9 = false;
                    arg1 = arg1 + 0x20;
                    pcVar18 = pcVar19;
                    goto code_r0x080015f0;
                }
                _printk(0x80002b8,"qmi_encode");
                uVar4 = 0xfffffdf3;
                goto code_r0x080015a4;
            default:
                uVar15 = *(arg1 + 8);
                uVar4 = uVar15 * uStack_70;
                if (uVar4 + iVar13 + 3 <= (arg4 & 0xffffffffU)) {
                    if (uStack_70 == 0) {
                        uVar4 = 0;
                    }
                    else {
                        pcVar20 = NULL;
                        uVar5 = uStack_70;
                        do {
                            pcVar7 = uVar15;
                            memcpy(pcVar19 + pcVar20,pcVar18 + pcVar20);
                            uVar5 = uVar5 - 1;
                            pcVar20 = pcVar20 + uVar15;
                        } while (uVar5 != 0);
                    }
                    uVar14 = uVar4;
                    goto code_r0x080016e8;
                }
                _printk(0x800036e,"qmi_encode");
                uVar4 = 0xfffffdf3;
                goto code_r0x080015a4;
            case 9:
                if (uStack_70 == 0) {
                    uVar4 = 0;
                }
                else {
                    pcVar20 = pcVar19;
                    uVar5 = 0;
                    uVar15 = uStack_70;
                    do {
                        uVar8 = arg4 - (iVar13 + uVar5);
                        pcVar7 = pcVar18;
                        uVar4 = sym.qmi_encode(*(arg1 + 0x18),pcVar20,pcVar18,uVar8);
                        if (uVar4 < 0) {
                            _printk(0x800054a,"qmi_encode_struct_elem");
                            goto code_r0x080015a4;
                        }
                        pcVar20 = pcVar20 + uVar4;
                        uVar4 = uVar4 + uVar5;
                        uVar15 = uVar15 - 1;
                        pcVar18 = pcVar18 + *(arg1 + 8);
                        uVar5 = uVar4;
                    } while (uVar15 != 0);
                    if (uVar4 < 0) goto code_r0x080015a4;
                }
                uVar14 = uVar4;
code_r0x080016e8:
                iVar12 = uVar4 + iVar12;
                pcVar19 = pcVar19 + uVar14;
                uVar14 = uVar4 + iVar13;
                arg1 = arg1 + 0x20;
code_r0x080016ec:
                bVar9 = true;
                break;
            case 10:
                uVar5 = strlen(pcVar18);
                uVar15 = *(arg1 + 4);
                uVar8 = uVar15;
                uVar4 = 1;
                if (0xff < uVar15) {
                    uVar4 = 2;
                }
                pcVar20 = uVar4;
                uStack_6c = uVar5;
                if (uVar15 < uVar5) {
                    pcVar7 = uVar5;
                    _printk(0x80005bc,"qmi_encode_string_elem");
                    uVar4 = 0xffffffea;
                    goto code_r0x080015a4;
                }
                uVar15 = arg4 - iVar13;
                uVar8 = uVar15;
                if (in_w4 == 1) {
                    if (uVar8 < uVar5 + 3) {
code_r0x080019ec:
                        pcVar7 = uVar5;
                        _printk(0x80005ec,"qmi_encode_string_elem");
                        uVar4 = 0xfffffdf3;
                        goto code_r0x080015a4;
                    }
                    pcVar20 = NULL;
                    uVar4 = 0;
                    if (uVar5 == 0) goto code_r0x080018f0;
code_r0x08001894:
                    uVar4 = pcVar20;
                    pcVar16 = NULL;
                    uVar15 = *(arg1 + 8);
                    uVar17 = uVar5;
                    do {
                        pcVar7 = uVar15;
                        memcpy(pcVar19 + pcVar20 + pcVar16,pcVar18 + pcVar16);
                        uVar17 = uVar17 - 1;
                        pcVar16 = pcVar16 + uVar15;
                    } while (uVar17 != 0);
                    iVar10 = uVar15 * uVar5;
                }
                else {
                    if (uVar15 < uVar4 + uVar5) goto code_r0x080019ec;
                    pcVar7 = pcVar20;
                    memcpy(pcVar19,&uStack_6c);
                    if (uVar5 != 0) goto code_r0x08001894;
code_r0x080018f0:
                    iVar10 = 0;
                }
                uVar4 = iVar10 + uVar4;
                if (uVar4 < 0) goto code_r0x080015a4;
                pcVar19 = pcVar19 + uVar4;
                uVar14 = uVar4 + iVar13;
                iVar12 = uVar4 + iVar12;
                arg1 = arg1 + 0x20;
                bVar9 = true;
            }
            pcVar18 = pcVar19;
            if ((in_w4 == 1) && (bVar9)) {
                bVar9 = false;
                uVar14 = uVar14 + 3;
                pcStack_80[1] = iVar12;
                *pcStack_80 = uVar2;
                pcStack_80[2] = iVar12 >> 8;
                pcVar18 = pcVar19 + 3;
                iVar12 = 0;
                pcStack_80 = pcVar19;
            }
code_r0x080015f0:
            uVar4 = uVar14;
            pcVar19 = pcVar18;
        } while (*arg1 != 0);
    }
code_r0x080015a4:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    auVar21 = __stack_chk_fail();
    if (pcVar7 == NULL) {
        return 0xffffffea;
    }
    uVar14 = 0xffffffea;
    if (((auVar21._8_8_ != 0) && (auVar21._0_8_ != 0)) && (uVar8 != 0)) {
        *extraout_x18 = sym.qmi_decode_message;
        uVar14 = sym.qmi_decode(pcVar7,uVar8,auVar21._0_8_ + 7,auVar21._8_4_ - 7);
    }
    return uVar14;
}


// ===== sym.qmi_decode_message @ 0x08001a10 (size 100) =====

ulong sym.qmi_decode_message(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg3 != 0) {
        uVar1 = 0xffffffea;
        if (((arg2 != 0) && (arg1 != 0)) && (arg4 != 0)) {
            *in_x18 = unaff_x30;
            uVar1 = sym.qmi_decode(arg3,arg4,arg1 + 7,arg2 - 7);
        }
        return uVar1;
    }
    return 0xffffffea;
}


// ===== sym.qmi_decode @ 0x08001a74 (size 1104) =====

uchar * sym.qmi_decode(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    uint32_t uVar6;
    ulong uVar7;
    uchar *puVar8;
    char *pcVar9;
    uint64_t uVar10;
    int in_w4;
    int iVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    uint8_t *arg3_00;
    int *piVar16;
    int *piVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint32_t *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    uStack_70 = 0;
    if (arg4 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        iVar2 = in_w4 + 1;
        uVar10 = arg4;
        piVar16 = arg1;
        do {
            if (in_w4 < 2) {
                if (in_w4 != 1) goto code_r0x08001b44;
                iVar11 = *arg1;
                piVar16 = arg1;
                while (iVar11 != 0) {
                    if (*(piVar16 + 4) == *arg3) goto code_r0x08001b20;
                    piVar16 = piVar16 + 8;
                    iVar11 = *piVar16;
                }
                piVar16 = NULL;
code_r0x08001b20:
                puVar1 = arg3 + 1;
                uVar20 = *puVar1;
                if ((piVar16 == NULL) && (*arg3 < 0x10)) {
                    uVar7 = 0x8000418;
code_r0x08001e64:
                    _printk(uVar7,"qmi_decode");
                    uVar6 = 0xffffffea;
                    break;
                }
                arg3 = arg3 + 3;
                uVar6 = uVar6 + 3;
                if (piVar16 != NULL) {
                    bVar5 = true;
                    goto code_r0x08001b4c;
                }
                arg3 = arg3 + uVar20;
                uVar6 = *puVar1 + uVar6;
            }
            else {
                if (*piVar16 == 0) break;
code_r0x08001b44:
                bVar5 = false;
                uVar20 = uVar10 - uVar6;
code_r0x08001b4c:
                iVar11 = *piVar16;
                puVar21 = arg2 + piVar16[5];
                piVar17 = piVar16;
                if (iVar11 == 1) {
                    *puVar21 = 1;
                    piVar17 = piVar16 + 8;
                    iVar11 = *piVar17;
                    puVar21 = arg2 + piVar16[0xd];
                }
                uVar12 = uVar6;
                if (iVar11 == 2) {
                    uVar12 = 1;
                    if (piVar17[2] != 1) {
                        uVar12 = 2;
                    }
                    memcpy(&uStack_70,arg3,uVar12);
                    arg3 = arg3 + uVar12;
                    uVar20 = uVar20 - uVar12;
                    uVar12 = uVar12 + uVar6;
                    *puVar21 = uStack_70;
                    puVar21 = piVar17 + 0xd;
                    piVar17 = piVar17 + 8;
                    puVar21 = arg2 + *puVar21;
                }
                if (piVar17[3] != 1) {
                    if (piVar17[3] == 0) {
                        uStack_70 = 1;
                        goto code_r0x08001bec;
                    }
                    uVar6 = piVar17[1];
                    if (uStack_70 <= uVar6) goto code_r0x08001bec;
                    uVar7 = 0x80003bc;
                    pcVar9 = "qmi_decode";
                    uVar13 = uStack_70;
code_r0x08001e90:
                    _printk(uVar7,pcVar9,uVar13,uVar6);
                    uVar6 = 0xfffffdf3;
                    break;
                }
                uStack_70 = piVar17[1];
code_r0x08001bec:
                uVar13 = uStack_70;
                iVar11 = *piVar17;
                if (iVar11 - 3U < 6) {
                    if (uStack_70 == 0) {
                        iVar11 = 0;
                    }
                    else {
                        iVar15 = 0;
                        uVar6 = piVar17[2];
                        uVar19 = uStack_70;
                        do {
                            memcpy(puVar21 + iVar15,arg3 + iVar15,uVar6);
                            uVar19 = uVar19 - 1;
                            iVar15 = iVar15 + uVar6;
                        } while (uVar19 != 0);
                        iVar11 = uVar6 * uVar13;
                    }
                    uVar14 = iVar11;
                }
                else {
                    uVar19 = uVar20;
                    if (iVar11 == 9) {
                        uVar18 = 0;
                        bVar5 = uStack_70 != 0;
                        uVar14 = 0;
                        if ((uStack_70 != 0) && (uVar19 != 0)) {
                            uVar14 = 0;
                            uVar18 = 0;
                            arg3_00 = arg3;
                            do {
                                uVar6 = sym.qmi_decode(*(piVar17 + 6),puVar21,arg3_00,uVar19 - uVar14);
                                if (uVar6 < 0) goto code_r0x08001dc4;
                                uVar18 = uVar18 + 1;
                                uVar3 = uVar6 + uVar14;
                                uVar14 = uVar3;
                                bVar5 = uVar13 > uVar18;
                                if (uVar13 <= uVar18) break;
                                arg3_00 = arg3_00 + uVar6;
                                puVar21 = puVar21 + piVar17[2];
                            } while (uVar3 < uVar19);
                        }
                        uVar6 = uVar14;
                        if (((iVar2 < 3) && (uVar19 != uVar6)) || ((2 < iVar2 && (bVar5 | uVar19 < uVar6)))) {
                            _printk(0x8000656,"qmi_decode_struct_elem",iVar2,uVar14,uVar20,uVar18,uVar13);
code_r0x08001eb8:
                            uVar6 = 0xfffffff2;
                            break;
                        }
                    }
                    else {
                        if (iVar11 != 10) {
                            uVar7 = 0x8000638;
                            goto code_r0x08001e64;
                        }
                        uVar10 = 0;
                        uVar6 = piVar17[1];
                        uStack_6c = 0;
                        uVar13 = uVar19;
                        if (!bVar5) {
                            uVar13 = 1;
                            if (0xff < uVar6) {
                                uVar13 = 2;
                            }
                            uVar10 = uVar13;
                            memcpy(&uStack_6c,arg3,uVar10);
                            uVar13 = uStack_6c;
                        }
                        if (uVar6 <= uVar13) {
                            uVar7 = 0x800046e;
                            pcVar9 = "qmi_decode_string_elem";
                            goto code_r0x08001e90;
                        }
                        if (uVar19 < uVar13) {
                            _printk(0x80003dd,"qmi_decode_string_elem",uVar13,uVar20);
                            goto code_r0x08001eb8;
                        }
                        if (uVar13 == 0) {
                            iVar11 = 0;
                        }
                        else {
                            iVar15 = 0;
                            uVar6 = piVar17[2];
                            uVar19 = uVar13;
                            do {
                                memcpy(puVar21 + iVar15,arg3 + iVar15 + uVar10,uVar6);
                                uVar19 = uVar19 - 1;
                                iVar15 = iVar15 + uVar6;
                            } while (uVar19 != 0);
                            iVar11 = uVar6 * uVar13;
                        }
                        uVar6 = iVar11 + uVar10;
                        uVar14 = uVar6;
                        *(puVar21 + uVar13) = 0;
                    }
                    if (uVar6 < 0) break;
                    iVar11 = uVar14;
                }
                uVar6 = iVar11 + uVar12;
                uVar10 = arg4 & 0xffffffff;
                arg3 = arg3 + uVar14;
                piVar16 = piVar17 + 8;
            }
        } while (uVar6 < uVar10);
    }
code_r0x08001dc4:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_68) {
        auVar22 = __stack_chk_fail();
        puVar8 = auVar22._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar22._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5502,0x8001f1c);
        (*pcVar4)();
    }
    return uVar6;
}


// ===== sym.__cfi_check_fail @ 0x08001ec4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001f08

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
    //switch table (4 cases) at 0x8000295
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f1c);
    (*pcVar1)();
}


// ===== sym.qmi_add_lookup @ 0x08001f1c (size 216) =====

ulong sym.qmi_add_lookup(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint *arg2_00;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    arg2_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x30);
    if (arg2_00 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        puVar1 = arg2_00 + 8;
        *arg2_00 = arg2;
        arg2_00[1] = arg3;
        arg2_00[2] = arg4;
        piVar4 = arg1 + 0x90;
        iVar5 = *piVar4;
        uVar2 = __list_add_valid(puVar1,piVar4,iVar5);
        if ((uVar2 & 1) != 0) {
            *(iVar5 + 8) = puVar1;
            *(arg2_00 + 8) = iVar5;
            *(arg2_00 + 10) = piVar4;
            *piVar4 = puVar1;
        }
        sym.qmi_send_new_lookup(arg1,arg2_00);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.qmi_send_new_lookup @ 0x08001ff4 (size 260) =====

ulong sym.qmi_send_new_lookup(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    int iVar2;
    ulong uVar3;
    uint *arg2_00;
    uint64_t uVar4;
    uint in_w2;
    uint in_w3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [12];
    uint *puStack_c0;
    ulong uStack_b8;
    uint32_t *puStack_b0;
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
    uint32_t uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_40;
    uint uStack_3c;
    uint32_t uStack_38;
    ulong uStack_34;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    puStack_c0 = &uStack_40;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_b8 = 0x14;
    uStack_3c = *arg2;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_38 = *(arg2 + 4) | *(arg2 + 8) << 8;
    uStack_40 = 10;
    uStack_4c = *(arg1 + 0x3c);
    puStack_b0 = &uStack_50;
    uStack_34 = 0;
    uStack_50 = *(arg1 + 0x38);
    uStack_48 = 0xfffffffe;
    uStack_a8 = 0xc;
    mutex_lock(arg1 + 8);
    if (*arg1 != 0) {
        in_w3 = 1;
        in_w2 = &puStack_c0;
        iVar2 = kernel_sendmsg(*arg1,&puStack_b0,&puStack_c0,1,0x14);
        if (iVar2 < 0) {
            _printk(0x8000491,iVar2);
        }
    }
    uVar3 = mutex_unlock(arg1 + 8);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18 = sym.qmi_add_server;
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    arg2_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x30);
    if (arg2_00 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        puVar1 = arg2_00 + 8;
        *arg2_00 = auVar7._8_4_;
        arg2_00[1] = in_w2;
        arg2_00[2] = in_w3;
        piVar5 = auVar7._0_8_ + 0xb0;
        iVar6 = *piVar5;
        uVar4 = __list_add_valid(puVar1,piVar5,iVar6);
        if ((uVar4 & 1) != 0) {
            *(iVar6 + 8) = puVar1;
            *(arg2_00 + 8) = iVar6;
            *(arg2_00 + 10) = piVar5;
            *piVar5 = puVar1;
        }
        sym.qmi_send_new_server(auVar7._0_8_,arg2_00);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.qmi_add_server @ 0x080020f8 (size 216) =====

ulong sym.qmi_add_server(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint *arg2_00;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    arg2_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x30);
    if (arg2_00 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        puVar1 = arg2_00 + 8;
        *arg2_00 = arg2;
        arg2_00[1] = arg3;
        arg2_00[2] = arg4;
        piVar4 = arg1 + 0xb0;
        iVar5 = *piVar4;
        uVar2 = __list_add_valid(puVar1,piVar4,iVar5);
        if ((uVar2 & 1) != 0) {
            *(iVar5 + 8) = puVar1;
            *(arg2_00 + 8) = iVar5;
            *(arg2_00 + 10) = piVar4;
            *piVar4 = puVar1;
        }
        sym.qmi_send_new_server(arg1,arg2_00);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.qmi_send_new_server @ 0x080021d0 (size 260) =====

uint64_t sym.qmi_send_new_server(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uchar *in_x2;
    uint **ppuVar6;
    int64_t in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint *puStack_c0;
    ulong uStack_b8;
    uint32_t *puStack_b0;
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
    uint32_t uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_40;
    uint uStack_3c;
    uint32_t uStack_38;
    uint uStack_34;
    uint uStack_30;
    int64_t iStack_28;
    
    ppuVar6 = &puStack_c0;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    puStack_c0 = &uStack_40;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_b8 = 0x14;
    uStack_3c = *arg2;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_40 = 4;
    uStack_4c = *(arg1 + 0x3c);
    uStack_30 = *(arg1 + 0x40);
    uStack_38 = *(arg2 + 4) | *(arg2 + 8) << 8;
    puStack_b0 = &uStack_50;
    uStack_50 = *(arg1 + 0x38);
    uStack_48 = 0xfffffffe;
    uStack_a8 = 0xc;
    uStack_34 = uStack_4c;
    mutex_lock(arg1 + 8);
    if (*arg1 != 0) {
        in_x3 = 1;
        iVar1 = kernel_sendmsg(*arg1,&puStack_b0,&puStack_c0,1,0x14);
        in_x2 = ppuVar6;
        if (iVar1 < 0) {
            _printk(0x8000394,iVar1);
            in_x2 = ppuVar6;
        }
    }
    uVar3 = mutex_unlock(arg1 + 8);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar7 = __stack_chk_fail();
    piVar5 = auVar7._8_8_;
    iVar4 = auVar7._0_8_;
    *extraout_x18 = sym.qmi_txn_init;
    piVar5[7] = 0;
    piVar5[8] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    piVar5[4] = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    *piVar5 = 0;
    piVar5[3] = 0;
    __init_swait_queue_head(piVar5 + 3,"&x->wait",obj.init_completion.__key);
    *piVar5 = iVar4;
    piVar5[7] = in_x2;
    piVar5[8] = in_x3;
    mutex_lock(iVar4 + 0x108);
    uVar2 = idr_alloc_cyclic(iVar4 + 0xf0,piVar5,0,0xffff,0xcc0);
    if (uVar2 < 0) {
        _printk(0x8000567);
    }
    *(piVar5 + 1) = uVar2;
    mutex_unlock(iVar4 + 0x108);
    return uVar2;
}


// ===== sym.qmi_txn_init @ 0x080022d4 (size 204) =====

int sym.qmi_txn_init(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg2 + 0x38) = 0;
    *(arg2 + 0x40) = 0;
    *(arg2 + 0x28) = 0;
    *(arg2 + 0x30) = 0;
    *(arg2 + 0x20) = 0;
    *(arg2 + 8) = 0;
    *(arg2 + 0x10) = 0;
    *arg2 = 0;
    *(arg2 + 0x18) = 0;
    __init_swait_queue_head(arg2 + 0x18,"&x->wait",obj.init_completion.__key);
    *arg2 = arg1;
    *(arg2 + 0x38) = arg3;
    *(arg2 + 0x40) = arg4;
    mutex_lock(arg1 + 0x108);
    iVar1 = idr_alloc_cyclic(arg1 + 0xf0,arg2,0,0xffff,0xcc0);
    if (iVar1 < 0) {
        _printk(0x8000567);
    }
    *(arg2 + 8) = iVar1;
    mutex_unlock(arg1 + 0x108);
    return iVar1;
}


// ===== sym.qmi_txn_wait @ 0x080023a0 (size 136) =====

uint sym.qmi_txn_wait(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *arg1;
    iVar2 = wait_for_completion_timeout(arg1 + 0x10);
    if (*(arg1 + 0x30) == -0x66) {
        uVar3 = 0xffffff9a;
    }
    else {
        iVar1 = iVar4 + 0x108;
        mutex_lock(iVar1);
        idr_remove(iVar4 + 0xf0,*(arg1 + 8));
        mutex_unlock(iVar1);
        if (iVar2 == 0) {
            uVar3 = 0xffffff92;
        }
        else {
            uVar3 = *(arg1 + 0x30);
        }
    }
    return uVar3;
}


// ===== sym.qmi_txn_cancel @ 0x08002428 (size 88) =====

void sym.qmi_txn_cancel(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *arg1;
    iVar1 = iVar2 + 0x108;
    mutex_lock(iVar1);
    idr_remove(iVar2 + 0xf0,*(arg1 + 8));
    mutex_unlock(iVar1);
    return;
}


// ===== sym.qmi_set_sndtimeo @ 0x08002480 (size 88) =====

void sym.qmi_set_sndtimeo(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 8);
    *(*(*arg1 + 0x18) + 0x198) = arg2;
    mutex_unlock(arg1 + 8);
    return;
}


// ===== sym.qmi_handle_init @ 0x080024d8 (size 392) =====

uint sym.qmi_handle_init(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(arg1 + 0x108,"&qmi->txn_lock",obj.init_completion.__key);
    __mutex_init(arg1 + 8,"&qmi->sock_lock",obj.init_completion.__key);
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x100) = 0;
    *(arg1 + 0xf0) = 0x1000000400000000;
    *(arg1 + 0x90) = arg1 + 0x90;
    *(arg1 + 0x98) = arg1 + 0x90;
    *(arg1 + 0xa0) = arg1 + 0xa0;
    *(arg1 + 0xa8) = arg1 + 0xa0;
    *(arg1 + 0xb0) = arg1 + 0xb0;
    *(arg1 + 0xb8) = arg1 + 0xb0;
    *(arg1 + 0x48) = 0xfffffffe0;
    *(arg1 + 0x50) = arg1 + 0x50;
    *(arg1 + 0x58) = arg1 + 0x50;
    *(arg1 + 0x138) = arg4;
    *(arg1 + 0x60) = sym.qmi_data_ready_work.365cec2a77bf8c8c807d4b217be1be23.cfi_jt;
    if (arg3 != 0) {
        uVar1 = *(arg3 + 8);
        *(arg1 + 0xc0) = *arg3;
        *(arg1 + 200) = uVar1;
        uVar2 = *(arg3 + 0x28);
        uVar1 = *(arg3 + 0x10);
        uVar3 = *(arg3 + 0x18);
        *(arg1 + 0xe0) = *(arg3 + 0x20);
        *(arg1 + 0xe8) = uVar2;
        *(arg1 + 0xd0) = uVar1;
        *(arg1 + 0xd8) = uVar3;
    }
    uVar5 = arg2 + 7;
    if (uVar5 < 0x15) {
        uVar5 = 0x14;
    }
    *(arg1 + 0x88) = uVar5;
    iVar4 = __kmalloc(uVar5,0xdc0);
    *(arg1 + 0x80) = iVar4;
    if (iVar4 == 0) {
        uVar6 = 0xfffffff4;
    }
    else {
        iVar4 = alloc_workqueue("qmi_msg_handler",0x12,1);
        *(arg1 + 0x78) = iVar4;
        if (iVar4 == 0) {
            uVar6 = 0xfffffff4;
        }
        else {
            uVar5 = sym.qmi_sock_create(arg1,arg1 + 0x38);
            *arg1 = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                return 0;
            }
            if (uVar5 == 0xffffffffffffff9f) {
                uVar6 = 0xfffffdfb;
            }
            else {
                _printk(0x80006ad);
                uVar6 = *arg1;
            }
            destroy_workqueue(*(arg1 + 0x78));
        }
        kfree(*(arg1 + 0x80));
    }
    return uVar6;
}


// ===== sym.qmi_data_ready_work @ 0x08002660 (size 1876) =====

void sym.qmi_data_ready_work(int64_t arg1)

{
    int64_t iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int *piVar9;
    ulong *in_x18;
    int64_t *arg1_00;
    code *pcVar10;
    code *unaff_x21;
    int64_t *piVar11;
    ulong unaff_x22;
    ulong uVar12;
    code *pcVar13;
    char *arg4;
    code *pcVar14;
    code *unaff_x27;
    code *pcVar15;
    code *pcVar16;
    ulong unaff_x30;
    ulong *puStack_140;
    ulong uStack_138;
    ulong uStack_130;
    uchar *puStack_128;
    ulong uStack_120;
    ulong uStack_118;
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
    int iStack_c0;
    ulong uStack_b8;
    uint64_t uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar10 = arg1 + -0x40;
    iStack_70 = *(iVar7 + 0x5e0);
    puStack_128 = &stack0xffffffffffffff38;
    uStack_138 = *(arg1 + 0x38);
    uVar12 = *(arg1 + 0x40);
    iStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0xc;
    uStack_130 = uVar12;
    mutex_lock(pcVar10);
    arg1_00 = arg1 + -0x48;
    iVar7 = *arg1_00;
    if (iVar7 != 0) {
        puStack_140 = arg1 + -0x10;
        iVar1 = arg1 + 0xc0;
        unaff_x21 = arg1 + 0x58;
        unaff_x22 = 0xdead000000000100;
        do {
            uVar5 = kernel_recvmsg(iVar7,&stack0xfffffffffffffed8,&stack0xfffffffffffffec8,1,uVar12,0x40);
            iVar7 = uVar5;
            mutex_unlock(pcVar10);
            if (iVar7 == -0xb) goto code_r0x08002d1c;
            if (iVar7 == -0x66) {
                uStack_b0 = uStack_b0 & 0xffffffff00000000;
                uStack_b8 = 0;
                uVar12 = *(*(*arg1_00 + 0x18) + 0x198);
                pcVar13 = sym.qmi_sock_create(arg1_00,&stack0xffffffffffffff48);
                if (pcVar13 < 0xfffffffffffff001) {
                    pcVar15 = *unaff_x21;
                    while (unaff_x21 != pcVar15) {
                        pcVar14 = *(arg1 + 0x80);
                        pcVar16 = *pcVar15;
                        if (pcVar14 != NULL) {
                            __cfi_slowpath_diag(0x77b71c1b418c981d,pcVar14,0x8000260);
                            (*pcVar14)(arg1_00,pcVar15 + -0x20);
                        }
                        uVar8 = __list_del_entry_valid(pcVar15);
                        if ((uVar8 & 1) != 0) {
                            iVar7 = *pcVar15;
                            piVar11 = *(pcVar15 + 8);
                            *(iVar7 + 8) = piVar11;
                            *piVar11 = iVar7;
                        }
                        *pcVar15 = -0x2152ffffffffff00;
                        *(pcVar15 + 8) = -0x2152fffffffffede;
                        kfree(pcVar15 + -0x20);
                        pcVar15 = pcVar16;
                    }
                    unaff_x21 = *(arg1 + 0x88);
                    if (unaff_x21 == NULL) goto code_r0x08002c5c;
                    if (unaff_x21 != sym.__typeid__ZTSFvP10qmi_handleE_global_addr) goto code_r0x08002d5c;
                    goto code_r0x08002c54;
                }
                goto code_r0x08002d1c;
            }
            if (uVar5 < 0) goto code_r0x08002cf8;
            if ((uStack_c8._4_4_ == *(arg1 + -0xc)) && (iStack_c0 == -2)) {
                if (0x13 < uVar5) {
                    piVar9 = *(arg1 + 0x38);
                    if (*piVar9 - 3U < 4) {
    //switch table (3 cases) at 0x80006e3
                        switch(*((*piVar9 - 3U) + 0x80006e3) * 4 + 0x800278c) {
                        case 0x8002790:
                            iVar6 = piVar9[1];
                            pcVar13 = *unaff_x21;
                            while (pcVar15 = pcVar13, unaff_x21 != pcVar15) {
                                unaff_x27 = pcVar15 + -0x20;
                                pcVar13 = *pcVar15;
                                if ((iVar6 == -1) || (*(pcVar15 + -0x14) == iVar6)) {
                                    pcVar14 = *(arg1 + 0x80);
                                    if (pcVar14 != NULL) {
                                        __cfi_slowpath_diag(0x77b71c1b418c981d,pcVar14,0x8000260);
                                        (*pcVar14)(arg1_00,unaff_x27);
                                    }
                                    uVar8 = __list_del_entry_valid(pcVar15);
                                    if ((uVar8 & 1) != 0) {
                                        iVar7 = *pcVar15;
                                        piVar11 = *(pcVar15 + 8);
                                        *(iVar7 + 8) = piVar11;
                                        *piVar11 = iVar7;
                                    }
                                    *pcVar15 = -0x2152ffffffffff00;
                                    *(pcVar15 + 8) = -0x2152fffffffffede;
                                    kfree(unaff_x27);
                                }
                            }
                            pcVar13 = *(arg1 + 0x98);
                            if (pcVar13 != NULL) {
                                __cfi_slowpath_diag(0xb92892cb08389dc6,pcVar13,0x80001e0);
                                (*pcVar13)(arg1_00,iVar6);
                            }
                            break;
                        case 0x8002968:
                            iVar6 = piVar9[3];
                            iVar4 = piVar9[4];
                            if ((iVar4 != 0 || iVar6 != 0) && (*(arg1 + 0x78) != 0)) {
                                iVar3 = piVar9[1];
                                uVar5 = piVar9[2];
                                unaff_x27 = uVar5;
                                iVar7 = 0x38;
                                if (android_kmalloc_64_create != 0x0) {
                                    iVar7 = 0x30;
                                }
                                piVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xdc0,0x30);
                                if (piVar9 != NULL) {
                                    piVar9[4] = iVar4;
                                    *piVar9 = iVar3;
                                    piVar9[1] = uVar5 & 0xff;
                                    pcVar13 = *(arg1 + 0x78);
                                    piVar9[2] = uVar5 >> 8;
                                    piVar9[3] = iVar6;
                                    __cfi_slowpath_diag(0xf051faa996adcc5c,pcVar13,0x8000200);
                                    iVar6 = (*pcVar13)(arg1_00,piVar9);
                                    if (iVar6 < 0) {
                                        kfree(piVar9);
                                    }
                                    else {
                                        iVar7 = *unaff_x21;
                                        piVar2 = piVar9 + 8;
                                        uVar8 = __list_add_valid(piVar2,unaff_x21,iVar7);
                                        if ((uVar8 & 1) != 0) {
                                            *(iVar7 + 8) = piVar2;
                                            *(piVar9 + 8) = iVar7;
                                            *(piVar9 + 10) = unaff_x21;
                                            *unaff_x21 = piVar2;
                                        }
                                    }
                                }
                            }
                            break;
                        case 0x8002a30:
                            if (unaff_x21 != *unaff_x21) {
                                uVar5 = piVar9[3];
                                unaff_x27 = uVar5;
                                iVar6 = piVar9[4];
                                pcVar13 = *unaff_x21;
                                do {
                                    pcVar15 = *pcVar13;
                                    if (((uVar5 == 0xffffffff) || (*(pcVar13 + -0x14) == uVar5)) &&
                                       ((iVar6 == -1 || (*(pcVar13 + -0x10) == iVar6)))) {
                                        pcVar14 = *(arg1 + 0x80);
                                        if (pcVar14 != NULL) {
                                            __cfi_slowpath_diag(0x77b71c1b418c981d,pcVar14,0x8000260);
                                            (*pcVar14)(arg1_00,pcVar13 + -0x20);
                                        }
                                        uVar8 = __list_del_entry_valid(pcVar13);
                                        if ((uVar8 & 1) != 0) {
                                            iVar7 = *pcVar13;
                                            piVar11 = *(pcVar13 + 8);
                                            *(iVar7 + 8) = piVar11;
                                            *piVar11 = iVar7;
                                        }
                                        *pcVar13 = -0x2152ffffffffff00;
                                        *(pcVar13 + 8) = -0x2152fffffffffede;
                                        kfree(pcVar13 + -0x20);
                                    }
                                    pcVar13 = pcVar15;
                                } while (unaff_x21 != pcVar15);
                            }
                            break;
                        case 0x8002ae4:
                            pcVar13 = *(arg1 + 0xa0);
                            if (pcVar13 != NULL) {
                                iVar6 = piVar9[1];
                                iVar4 = piVar9[2];
                                __cfi_slowpath_diag(0x7b38a7f1693a8f7b,pcVar13,0x8000220);
                                (*pcVar13)(arg1_00,iVar6,iVar4);
                            }
                        }
                    }
                }
            }
            else {
                pcVar13 = *(arg1 + 0x90);
                if (pcVar13 == NULL) {
                    if (uVar5 != 0) {
                        if (uVar5 < 7) {
                            _printk(0x8000612);
                        }
                        else {
                            arg4 = *(arg1 + 0x38);
                            if (*arg4 == '\x02') {
                                mutex_lock(iVar1);
                                pcVar13 = idr_find(arg1 + 0xa8,*(arg4 + 1));
                                if (pcVar13 == NULL) {
                                    mutex_unlock(iVar1);
                                }
                                else {
                                    if ((*(pcVar13 + 0x40) == 0) || (*(pcVar13 + 0x38) == 0)) {
                                        sym.qmi_invoke_handler(arg1_00,&stack0xffffffffffffff38,pcVar13,arg4);
                                    }
                                    else {
                                        iVar6 = sym.qmi_decode_message
                                                          (arg4,iVar7,*(pcVar13 + 0x38),*(pcVar13 + 0x40));
                                        if (iVar6 < 0) {
                                            _printk(0x8000449);
                                        }
                                        *(pcVar13 + 0x30) = iVar6;
                                        complete(pcVar13 + 0x10);
                                    }
                                    mutex_unlock(iVar1);
                                    unaff_x27 = pcVar13;
                                }
                            }
                            else {
                                uStack_80 = 0;
                                uStack_78 = 0;
                                uStack_90 = 0;
                                uStack_88 = 0;
                                uStack_a0 = 0;
                                uStack_98 = 0;
                                uStack_a8 = 0;
                                uStack_b8 = 0;
                                uStack_b0 = *(arg4 + 1);
                                sym.qmi_invoke_handler
                                          (arg1_00,&stack0xffffffffffffff38,&stack0xffffffffffffff48,arg4);
                            }
                        }
                    }
                }
                else {
                    __cfi_slowpath_diag(0x2b0ad0c67334edfc,pcVar13,0x80001a0);
                    (*pcVar13)(arg1_00,&stack0xffffffffffffff38,*(arg1 + 0x38),iVar7);
                }
            }
            uStack_138 = *(arg1 + 0x38);
            uStack_130 = *(arg1 + 0x40);
            mutex_lock(pcVar10);
            iVar7 = *arg1_00;
            uVar12 = uStack_130;
        } while (iVar7 != 0);
    }
    mutex_unlock(pcVar10);
    iVar7 = -0x20;
code_r0x08002cf8:
    _printk(0x8000338,iVar7);
code_r0x08002d1c:
    while (pcVar13 = unaff_x27, uVar12 = unaff_x22, iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_70) {
        __stack_chk_fail();
code_r0x08002d5c:
        __cfi_slowpath_diag(0x53abe107a3d895d3,unaff_x21,0x80001c0);
code_r0x08002c54:
        (*unaff_x21)(arg1_00);
code_r0x08002c5c:
        mutex_lock(pcVar10);
        unaff_x22 = uVar12;
        unaff_x27 = pcVar13;
        if (*arg1_00 == 0) {
            sock_release(pcVar13);
            mutex_unlock(pcVar10);
        }
        else {
            sock_release();
            *arg1_00 = pcVar13;
            *puStack_140 = uStack_b8;
            *(puStack_140 + 1) = uStack_b0;
            *(*(pcVar13 + 0x18) + 0x198) = uVar12;
            mutex_unlock(pcVar10);
            for (piVar11 = *(arg1 + 0x48); arg1 + 0x48 != piVar11; piVar11 = *piVar11) {
                sym.qmi_send_new_lookup(arg1_00,piVar11 + -4);
            }
            pcVar10 = arg1 + 0x68;
            for (unaff_x21 = *pcVar10; pcVar10 != unaff_x21; unaff_x21 = *unaff_x21) {
                sym.qmi_send_new_server(arg1_00,unaff_x21 + -0x20);
            }
        }
    }
    return;
}


// ===== sym.qmi_sock_create @ 0x08002d80 (size 244) =====

void sym.qmi_sock_create(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar7;
    int64_t *piVar8;
    code *pcVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iVar6 = 2;
    iStack_30 = 0;
    iVar3 = sock_create_kern(init_net,0x2a,2,0x2a,&iStack_30);
    if (iVar3 < 0) {
        iVar7 = iVar3;
    }
    else {
        iVar3 = kernel_getsockname(iStack_30,arg2);
        if (iVar3 < 0) {
            sock_release(iStack_30);
            iVar7 = iVar3;
        }
        else {
            if ((arg1 & 7U) != 0) {
    //WARNING: Does not return
                pcVar9 = SoftwareBreakpoint(0x800,0x8002e6c);
                (*pcVar9)();
            }
            *(*(iStack_30 + 0x18) + 0x2a8) = arg1;
            *(*(iStack_30 + 0x18) + 0x2d8) = sym.qmi_data_ready.365cec2a77bf8c8c807d4b217be1be23.cfi_jt;
            *(*(iStack_30 + 0x18) + 0x2e8) = sym.qmi_data_ready.365cec2a77bf8c8c807d4b217be1be23.cfi_jt;
            *(*(iStack_30 + 0x18) + 0x198) = 0x9c4;
            iVar7 = iStack_30;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        piVar4 = __stack_chk_fail(iVar7);
        *extraout_x18 = sym.qmi_handle_release;
        pcStack_78 = sym.qmi_handle_release;
        iVar7 = sp_el0;
        iStack_88 = *(iVar7 + 0x5e0);
        puStack_80 = &stack0xffffffffffffffe0;
        mutex_lock(piVar4 + 1);
        iVar7 = *piVar4;
        *(*(iVar7 + 0x18) + 0x2a8) = 0;
        synchronize_rcu();
        sock_release(iVar7);
        *piVar4 = 0;
        mutex_unlock(piVar4 + 1);
        cancel_work_sync(piVar4 + 9);
        piVar10 = piVar4 + 0x14;
        if (piVar10 != *piVar10) {
            piVar8 = *piVar10;
            do {
                pcVar9 = piVar4[0x19];
                piVar11 = *piVar8;
                if (pcVar9 != NULL) {
                    iVar6 = 0x8000260;
                    __cfi_slowpath_diag(0x77b71c1b418c981d,pcVar9);
                    (*pcVar9)(piVar4,piVar8 + -4);
                }
                uVar5 = __list_del_entry_valid(piVar8);
                if ((uVar5 & 1) != 0) {
                    iVar7 = *piVar8;
                    piVar1 = piVar8[1];
                    *(iVar7 + 8) = piVar1;
                    *piVar1 = iVar7;
                }
                *piVar8 = -0x2152ffffffffff00;
                piVar8[1] = -0x2152fffffffffede;
                kfree(piVar8 + -4);
                piVar8 = piVar11;
            } while (piVar10 != piVar11);
        }
        destroy_workqueue(piVar4[0xf]);
        mutex_lock(piVar4 + 0x21);
        piVar10 = piVar4 + 0x1e;
        iStack_8c = 0;
        iVar7 = idr_get_next(piVar10,&iStack_8c);
        while (iVar7 != 0) {
            idr_remove(piVar10,*(iVar7 + 8));
            *(iVar7 + 0x30) = 0xffffff9a;
            complete(iVar7 + 0x10);
            iStack_8c = iStack_8c + 1;
            iVar7 = idr_get_next(piVar10,&iStack_8c);
        }
        mutex_unlock(piVar4 + 0x21);
        idr_destroy(piVar10);
        kfree(piVar4[0x10]);
        piVar10 = piVar4[0x12];
        while (piVar4 + 0x12 != piVar10) {
            piVar8 = *piVar10;
            uVar5 = __list_del_entry_valid(piVar10);
            if ((uVar5 & 1) != 0) {
                iVar7 = *piVar10;
                piVar11 = piVar10[1];
                *(iVar7 + 8) = piVar11;
                *piVar11 = iVar7;
            }
            *piVar10 = -0x2152ffffffffff00;
            piVar10[1] = -0x2152fffffffffede;
            kfree(piVar10 + -4);
            piVar10 = piVar8;
        }
        piVar10 = piVar4[0x16];
        while (piVar4 + 0x16 != piVar10) {
            piVar8 = *piVar10;
            uVar5 = __list_del_entry_valid(piVar10);
            if ((uVar5 & 1) != 0) {
                iVar7 = *piVar10;
                piVar11 = piVar10[1];
                *(iVar7 + 8) = piVar11;
                *piVar11 = iVar7;
            }
            *piVar10 = -0x2152ffffffffff00;
            piVar10[1] = -0x2152fffffffffede;
            kfree(piVar10 + -4);
            piVar10 = piVar8;
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) != iStack_88) {
            auVar12 = __stack_chk_fail();
            *extraout_x18_00 = sym.qmi_send_request;
            sym.qmi_send_message(auVar12._0_8_,auVar12._8_8_,iVar6,0);
            return;
        }
        return;
    }
    return;
}


// ===== sym.qmi_handle_release @ 0x08002e74 (size 608) =====

void sym.qmi_handle_release(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t *piVar5;
    code *pcVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    mutex_lock(arg1 + 8);
    iVar4 = *arg1;
    *(*(iVar4 + 0x18) + 0x2a8) = 0;
    synchronize_rcu();
    sock_release(iVar4);
    *arg1 = 0;
    mutex_unlock(arg1 + 8);
    cancel_work_sync(arg1 + 0x48);
    piVar7 = arg1 + 0xa0;
    if (piVar7 != *piVar7) {
        piVar5 = *piVar7;
        do {
            pcVar6 = *(arg1 + 200);
            piVar8 = *piVar5;
            if (pcVar6 != NULL) {
                in_x2 = 0x8000260;
                __cfi_slowpath_diag(0x77b71c1b418c981d,pcVar6);
                (*pcVar6)(arg1,piVar5 + -4);
            }
            uVar2 = __list_del_entry_valid(piVar5);
            if ((uVar2 & 1) != 0) {
                iVar4 = *piVar5;
                piVar1 = piVar5[1];
                *(iVar4 + 8) = piVar1;
                *piVar1 = iVar4;
            }
            *piVar5 = -0x2152ffffffffff00;
            piVar5[1] = -0x2152fffffffffede;
            kfree(piVar5 + -4);
            piVar5 = piVar8;
        } while (piVar7 != piVar8);
    }
    destroy_workqueue(*(arg1 + 0x78));
    mutex_lock(arg1 + 0x108);
    iVar4 = arg1 + 0xf0;
    iStack_5c = 0;
    iVar3 = idr_get_next(iVar4,&iStack_5c);
    while (iVar3 != 0) {
        idr_remove(iVar4,*(iVar3 + 8));
        *(iVar3 + 0x30) = 0xffffff9a;
        complete(iVar3 + 0x10);
        iStack_5c = iStack_5c + 1;
        iVar3 = idr_get_next(iVar4,&iStack_5c);
    }
    mutex_unlock(arg1 + 0x108);
    idr_destroy(iVar4);
    kfree(*(arg1 + 0x80));
    piVar7 = *(arg1 + 0x90);
    while (arg1 + 0x90 != piVar7) {
        piVar5 = *piVar7;
        uVar2 = __list_del_entry_valid(piVar7);
        if ((uVar2 & 1) != 0) {
            iVar4 = *piVar7;
            piVar8 = piVar7[1];
            *(iVar4 + 8) = piVar8;
            *piVar8 = iVar4;
        }
        *piVar7 = -0x2152ffffffffff00;
        piVar7[1] = -0x2152fffffffffede;
        kfree(piVar7 + -4);
        piVar7 = piVar5;
    }
    piVar7 = *(arg1 + 0xb0);
    while (arg1 + 0xb0 != piVar7) {
        piVar5 = *piVar7;
        uVar2 = __list_del_entry_valid(piVar7);
        if ((uVar2 & 1) != 0) {
            iVar4 = *piVar7;
            piVar8 = piVar7[1];
            *(iVar4 + 8) = piVar8;
            *piVar8 = iVar4;
        }
        *piVar7 = -0x2152ffffffffff00;
        piVar7[1] = -0x2152fffffffffede;
        kfree(piVar7 + -4);
        piVar7 = piVar5;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_58) {
        auVar9 = __stack_chk_fail();
        *extraout_x18 = sym.qmi_send_request;
        sym.qmi_send_message(auVar9._0_8_,auVar9._8_8_,in_x2,0);
        return;
    }
    return;
}


// ===== sym.qmi_send_request @ 0x080030d4 (size 56) =====

void sym.qmi_send_request(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    int64_t in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmi_send_message(arg1,arg2,in_x2,0);
    return;
}


// ===== sym.qmi_send_message @ 0x0800310c (size 292) =====

uint64_t sym.qmi_send_message(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *arg3_00;
    uint64_t *puVar4;
    uint64_t in_x4;
    ulong in_x5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint64_t uStack_b0;
    ulong uStack_a8;
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
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar4 = &uStack_b0;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    arg3_00 = &uStack_40;
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
    iStack_a0 = 0;
    uStack_98 = 0;
    uStack_40 = in_x5;
    uVar3 = sym.qmi_encode_message(arg4 & 0xffffffff,in_x4 & 0xffffffff,arg3_00,*(arg3 + 8));
    if (uVar3 < 0xfffffffffffff001) {
        uStack_a8 = uStack_40;
        if (arg2 != 0) {
            uStack_98 = CONCAT44(uStack_98._4_4_,0xc);
            iStack_a0 = arg2;
        }
        uStack_b0 = uVar3;
        mutex_lock(arg1 + 8);
        if (*arg1 == 0) {
            uVar2 = 0xffffffe0;
        }
        else {
            uVar2 = kernel_sendmsg(*arg1,&iStack_a0,&uStack_b0,1,uStack_40);
            arg3_00 = puVar4;
            if (uVar2 < 0) {
                _printk(0x80004bb);
                arg3_00 = puVar4;
            }
        }
        mutex_unlock(arg1 + 8);
        kfree(uVar3);
        uVar3 = uVar2 & uVar2 >> 0x1f;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qmi_send_response;
    uVar3 = sym.qmi_send_message(auVar5._0_8_,auVar5._8_8_,arg3_00,2);
    return uVar3;
}


// ===== sym.qmi_send_response @ 0x08003230 (size 56) =====

void sym.qmi_send_response(ulong noname_0,int64_t arg2,int64_t arg1,int64_t arg3)

{
    int64_t in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qmi_send_message(in_x0,arg2,arg1,2);
    return;
}


// ===== sym.qmi_send_indication @ 0x08003268 (size 356) =====

int64_t sym.qmi_send_indication(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    int64_t *piVar5;
    uint8_t *arg1_00;
    uint64_t arg2_00;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    code *pcVar8;
    ulong *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int64_t iStack_a0;
    uint64_t uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    piVar5 = &iStack_a0;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    uVar7 = arg3 & 0xffffffff;
    iStack_58 = *(iVar3 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    iStack_a0 = 0;
    __init_swait_queue_head(&uStack_88,"&x->wait",obj.init_completion.__key);
    iVar3 = arg1 + 0x108;
    uStack_68 = 0;
    uStack_60 = 0;
    iStack_a0 = arg1;
    mutex_lock(iVar3);
    puVar4 = NULL;
    arg1_00 = 0xffff;
    arg2_00 = 0xcc0;
    iVar2 = idr_alloc_cyclic(arg1 + 0xf0,&iStack_a0,0);
    if (iVar2 < 0) {
        _printk(0x8000567);
        uStack_98 = CONCAT62(uStack_98._2_6_,iVar2);
        mutex_unlock(iVar3);
        iVar3 = iVar2;
    }
    else {
        uStack_98 = CONCAT62(uStack_98._2_6_,iVar2);
        mutex_unlock(iVar3);
        arg1_00 = 0x4;
        iVar3 = sym.qmi_send_message(arg1,arg2,&iStack_a0,4);
        iVar1 = iStack_a0;
        iVar6 = iStack_a0 + 0x108;
        mutex_lock(iVar6);
        idr_remove(iVar1 + 0xf0,uStack_98 & 0xffff);
        mutex_unlock(iVar6);
        puVar4 = piVar5;
        arg2_00 = uVar7;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_58) {
        auVar10 = __stack_chk_fail();
        iVar3 = auVar10._0_8_;
        *extraout_x18 = sym.qmi_invoke_handler;
        iVar6 = *(iVar3 + 0x138);
        if ((iVar6 != 0) && (*(iVar6 + 0x18) != 0)) {
            puVar9 = iVar6 + 0x10;
            do {
                if ((*(puVar9 + -2) == *arg1_00) && (*(puVar9 + -0xc) == *(arg1_00 + 3))) {
                    iVar6 = __kmalloc(*puVar9,0xdc0);
                    if (iVar6 == 0) {
                        return 0;
                    }
                    iVar2 = sym.qmi_decode_message(arg1_00,arg2_00,puVar9[-1],iVar6);
                    if (iVar2 < 0) {
                        _printk(0x8000449);
                    }
                    else {
                        pcVar8 = puVar9[1];
                        __cfi_slowpath_diag(0x2b1394c7097a0a26,pcVar8,0x8000240);
                        (*pcVar8)(iVar3,auVar10._8_8_,puVar4,iVar6);
                    }
                    iVar3 = kfree(iVar6);
                    return iVar3;
                }
                piVar5 = puVar9 + 5;
                puVar9 = puVar9 + 4;
            } while (*piVar5 != 0);
        }
        return iVar3;
    }
    return iVar3;
}


// ===== sym.qmi_invoke_handler @ 0x080033cc (size 276) =====

void sym.qmi_invoke_handler(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int iVar2;
    int64_t in_x4;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x138);
    if ((iVar3 != 0) && (*(iVar3 + 0x18) != 0)) {
        puVar5 = iVar3 + 0x10;
        do {
            if ((*(puVar5 + -2) == *arg4) && (*(puVar5 + -0xc) == *(arg4 + 3))) {
                iVar3 = __kmalloc(*puVar5,0xdc0);
                if (iVar3 == 0) {
                    return;
                }
                iVar2 = sym.qmi_decode_message(arg4,in_x4,puVar5[-1],iVar3);
                if (iVar2 < 0) {
                    _printk(0x8000449);
                }
                else {
                    pcVar4 = puVar5[1];
                    __cfi_slowpath_diag(0x2b1394c7097a0a26,pcVar4,0x8000240);
                    (*pcVar4)(arg1,arg2,arg3,iVar3);
                }
                kfree(iVar3);
                return;
            }
            piVar1 = puVar5 + 5;
            puVar5 = puVar5 + 4;
        } while (*piVar1 != 0);
    }
    return;
}


// ===== sym.qmi_data_ready @ 0x080034e0 (size 84) =====

void sym.qmi_data_ready(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    uVar1 = *(arg1 + 0x2a8) & 0xfffffffffffffff8;
    if (uVar1 != 0) {
        queue_work_on(0x20,*(uVar1 + 0x78),uVar1 + 0x48);
    }
    __rcu_read_unlock();
    return;
}

