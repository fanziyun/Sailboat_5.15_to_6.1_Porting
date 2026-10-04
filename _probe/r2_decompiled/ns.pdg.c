// decompiled from ns by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 636) =====

//WARNING: Switch with 1 destination removed at 0x08003bfc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x3dd1a39e589289fe) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x3ff87eea0daa0163) {
                pcVar2 = sym.qrtr_ns_worker.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
            }
            else if (arg1 == -0x315ce073b0edafc3) {
                pcVar2 = sym.qrtr_get_service_id.cfi_jt;
            }
            else {
                if (arg1 != -0x218c0108fde83420) goto code_r0x08003bbc;
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.qrtr_ns_init.cfi_jt;
        }
        else if (arg1 == 0x1c2b0952efa24c7a) {
            pcVar2 = sym.trace_event_reg.cfi_jt;
        }
        else {
            if (arg1 != 0x302ebdbbe31905ba) goto code_r0x08003bbc;
            pcVar2 = sym.__traceiter_qrtr_ns_message.cfi_jt;
        }
    }
    else if (arg1 < 0x644e8cc6b20381ce) {
        if (arg1 == 0x3dd1a39e589289fe) {
            if ((pcVar1 + -0x80012d0 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08003bbc;
        }
        if (arg1 == 0x61ae9f8d4e31dc35) {
            if ((pcVar1 + -0x8001320 >> 3 | pcVar1 << 0x3d) < 9) {
                return;
            }
            goto code_r0x08003bbc;
        }
        if (arg1 != 0x641d19c7be126e92) goto code_r0x08003bbc;
        pcVar2 = sym.kthread_worker_fn.cfi_jt;
    }
    else if (arg1 < 0x77ea20de3da89c6c) {
        if (arg1 != 0x644e8cc6b20381ce) {
            if (arg1 != 0x7784384551e445bb) goto code_r0x08003bbc;
            pcVar2 = sym.__bpf_trace_qrtr_ns_message.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
code_r0x08001268:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08003bbc;
        }
        pcVar2 = sym.qrtr_ns_data_ready.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
    }
    else {
        if (arg1 == 0x77ea20de3da89c6c) {
            pcVar2 = sym.__traceiter_qrtr_ns_server_add.cfi_jt;
            goto code_r0x08001268;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003bbc;
        pcVar2 = sym.qrtr_ns_remove.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003bbc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003c10);
    (*pcVar1)();
}


// ===== sym.qrtr_ns_worker.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001288 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002f70)

void sym.qrtr_ns_worker.6f5da6878d0fb727712a6154d8620cf4.cfi_jt(void)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int iVar9;
    int iVar10;
    uint32_t *puVar11;
    int *piVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint *puVar16;
    ulong uVar17;
    char *pcVar18;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar19;
    int64_t *piVar20;
    ulong *puVar21;
    ulong unaff_x30;
    ulong uVar22;
    uint32_t *puStack_190;
    ulong uStack_188;
    ulong *puStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uint32_t auStack_118 [2];
    ulong uStack_110;
    uint uStack_108;
    ulong uStack_100;
    ulong *puStack_f8;
    ulong uStack_f0;
    int64_t *piStack_e8;
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
    uint32_t uStack_80;
    uint32_t uStack_7c;
    uint32_t uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_70 = *(iVar14 + 0x5e0);
    puStack_180 = &uStack_120;
    auStack_118[0] = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_178 = 0xc;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_170 = 0;
    puVar11 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x1000);
    if (puVar11 != NULL) {
        uStack_188 = 0x1000;
        puStack_190 = puVar11;
        iVar8 = kernel_recvmsg(CONCAT44(*0x8000004,_segment.ehdr),&puStack_180,&puStack_190,1,0x1000,0x40);
        if (iVar8 != -0xb) {
            puVar21 = &uStack_88 | 4;
            uVar22 = sp_el0;
            do {
                if (iVar8 < 0) {
                    _printk(0x8000d15,"qrtr_ns_worker",iVar8);
                    break;
                }
                uVar5 = *puVar11;
                uVar6 = *puVar11;
                uVar2 = uVar6 & 0xfffffffe;
                if (uVar2 == 2) {
                    ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"cmd:0x%x node[0x%x]\n",uVar6,uStack_120._4_4_
                                  );
                }
                else {
                    if (uVar6 == 6) {
                        uVar2 = puVar11[1];
                        uVar3 = puVar11[2];
                        pcVar18 = "cmd:0x%x addr[0x%x:0x%x]\n";
                    }
                    else {
                        if (uVar2 != 10) {
                            if (uVar2 == 4) {
                                ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),
                                               "cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",uVar6,puVar11[1],
                                               puVar11[2],puVar11[3],puVar11[4],in_x7,uVar22);
                            }
                            goto code_r0x0800249c;
                        }
                        uVar2 = puVar11[1];
                        uVar3 = puVar11[2];
                        pcVar18 = "cmd:0x%x SVC[0x%x:0x%x]\n";
                    }
                    ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),pcVar18,uVar6,uVar2,uVar3);
                }
code_r0x0800249c:
                uVar2 = uStack_120._4_4_;
                iVar14 = uStack_120;
                switch(uVar5) {
                case 2:
                    puStack_f8 = &uStack_88;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_88 = CONCAT44(uStack_88._4_4_,2);
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uVar17 = CONCAT44(*0x8000004,_segment.ehdr);
                    piStack_e8 = &uStack_120;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_f0 = 0x14;
                    *puVar21 = 0;
                    puVar21[1] = 0;
                    uStack_e0 = 0xc;
                    iVar8 = kernel_sendmsg(uVar17,&piStack_e8,&puStack_f8,1,0x14);
                    if (iVar8 < 0) {
                        uVar17 = 0x8000f16;
                        pcVar18 = "say_hello";
code_r0x080030b4:
                        _printk(uVar17,pcVar18,iVar8);
                        goto code_r0x080030b8;
                    }
                    piStack_e8 = NULL;
                    uStack_88 = 0;
                    piVar12 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_88,
                                      0xffffffffffffffff,8);
                    iVar14 = uStack_120;
                    while (piVar12 != NULL) {
                        uStack_120._4_4_ = iVar14 >> 0x20;
                        uStack_120 = iVar14;
                        if (*piVar12 == uStack_120._4_4_) {
                            _printk(0x8000b14,"announce_servers");
                        }
                        else {
                            piStack_e8 = NULL;
                            iVar14 = xa_find(piVar12 + 2,&piStack_e8,0xffffffffffffffff,8);
                            while (iVar14 != 0) {
                                iVar8 = sym.service_announce_new(&uStack_120,iVar14);
                                if ((iVar8 < 0) && (iVar8 != -0x13)) {
                                    _printk(0x8000da4,"announce_servers",iVar8);
                                    goto code_r0x08002f60;
                                }
                                iVar14 = xa_find_after(piVar12 + 2,&piStack_e8,0xffffffffffffffff,8);
                            }
                        }
                        piVar12 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_88,
                                                0xffffffffffffffff,8);
                        iVar14 = uStack_120;
                    }
                    break;
                case 3:
                    puStack_f8 = &uStack_88;
                    uStack_78 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_7c = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
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
                    piStack_e8 = NULL;
                    uStack_e0 = 0;
                    uStack_f0 = 0x14;
                    puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uStack_120._4_4_);
                    if (puVar13 == NULL) {
                        iVar14 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar14 = 0x30;
                        }
                        puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                        iVar14 = uStack_120;
                        if (puVar13 == NULL) break;
                        *puVar13 = uVar2;
                        puVar13[2] = 0;
                        puVar13[3] = 0;
                        puVar13[4] = 0;
                        puVar13[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2,puVar13,0xa20);
                    }
                    uStack_100 = 0;
                    iVar14 = xa_find(puVar13 + 2,&uStack_100,0xffffffffffffffff,8);
                    uVar2 = _segment.ehdr;
                    while (_segment.ehdr = uVar2, iVar14 != 0) {
                        sym.server_del(puVar13,*(iVar14 + 0xc));
                        iVar14 = xa_find_after(puVar13 + 2,&uStack_100,0xffffffffffffffff,8);
                        uVar2 = _segment.ehdr;
                    }
                    puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2);
                    if (puVar13 == NULL) {
                        iVar14 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar14 = 0x30;
                        }
                        puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                        iVar14 = uStack_120;
                        if (puVar13 == NULL) break;
                        *puVar13 = uVar2;
                        puVar13[2] = 0;
                        puVar13[3] = 0;
                        puVar13[4] = 0;
                        puVar13[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2,puVar13,0xa20);
                    }
                    uStack_78 = 0;
                    uStack_7c = 0;
                    uStack_80 = 0;
                    uStack_100 = 0;
                    uStack_88 = CONCAT44(uStack_120._4_4_,3);
                    puVar16 = xa_find(puVar13 + 2,&uStack_100,0xffffffffffffffff,8);
                    while (iVar14 = uStack_120, puVar16 != NULL) {
                        uStack_108 = puVar16[3];
                        uStack_110._2_6_ = uStack_110 >> 0x10;
                        uStack_110 = CONCAT62(uStack_110._2_6_,0x2a);
                        uStack_110 = CONCAT44(puVar16[2],uStack_110);
                        uStack_e0._4_4_ = uStack_e0 >> 0x20;
                        uStack_e0 = CONCAT44(uStack_e0._4_4_,0xc);
                        piStack_e8 = &uStack_110;
                        iVar8 = kernel_sendmsg(CONCAT44(*0x8000004,_segment.ehdr),&piStack_e8,&puStack_f8,1,0x14);
                        if (((iVar8 < 0) && (iVar8 != -0x13)) &&
                           (iVar9 = ___ratelimit(obj.ctrl_cmd_bye._rs,"ctrl_cmd_bye"), iVar9 != 0)) {
                            _printk(0x8000c24,"ctrl_cmd_bye",*puVar16,puVar16[1],puVar16[3],iVar8);
                        }
                        puVar16 = xa_find_after(puVar13 + 2,&uStack_100,0xffffffffffffffff,8);
                    }
                    break;
                case 4:
                    uVar5 = puVar11[1];
                    uVar2 = puVar11[2];
                    puVar13 = auStack_118;
                    if (uStack_120._4_4_ != _segment.ehdr) {
                        puVar13 = puVar11 + 4;
                    }
                    uVar6 = uStack_120._4_4_;
                    if (uStack_120._4_4_ != _segment.ehdr) {
                        uVar6 = puVar11[3];
                    }
                    puVar16 = sym.server_add(uVar5,uVar2,uVar6,*puVar13);
                    if (puVar16 != NULL) {
                        if (puVar16[2] == _segment.ehdr) {
                            iVar8 = sym.service_announce_new(0x80002d8,puVar16);
                            if (iVar8 < 0) {
                                uVar17 = 0x8000da4;
                                pcVar18 = "ctrl_cmd_new_server";
                                goto code_r0x080030b4;
                            }
                        }
                        else {
                            iVar8 = 0;
                        }
                        piVar19 = *0x80002e8;
                        iVar14 = uStack_120;
                        if (*0x80002e8 == 0x80002e8) break;
                        do {
                            if (((*(piVar19 + -3) == 0) || (*(piVar19 + -3) == uVar5)) &&
                               ((*(piVar19 + -0x14) == 0 || (*(piVar19 + -0x14) == uVar2)))) {
                                uStack_98 = 0;
                                uStack_90 = 0;
                                uStack_a8 = 0;
                                uStack_a0 = 0;
                                piStack_e8 = piVar19 + -2;
                                uStack_b8 = 0;
                                uStack_b0 = 0;
                                uStack_c8 = 0;
                                uStack_c0 = 0;
                                uStack_d8 = 0;
                                uStack_d0 = 0;
                                uStack_f0 = 0x14;
                                uStack_88 = CONCAT44(*puVar16,4);
                                uStack_80 = puVar16[1];
                                uStack_7c = puVar16[2];
                                uStack_e0 = 0xc;
                                uStack_78 = puVar16[3];
                                puStack_f8 = &uStack_88;
                                iVar9 = kernel_sendmsg(CONCAT44(*0x8000004,_segment.ehdr),&piStack_e8,&puStack_f8,1
                                                       ,0x14);
                                if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                   (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar10 != 0)) {
                                    _printk(0x8000cc7,"lookup_notify",iVar9);
                                }
                            }
                            piVar19 = *piVar19;
                        } while (piVar19 != 0x80002e8);
code_r0x08002f60:
                        iVar14 = uStack_120;
                        if (-1 < iVar8) break;
                    }
                    goto code_r0x080030b8;
                case 5:
                    puVar13 = auStack_118;
                    if (uStack_120._4_4_ != _segment.ehdr) {
                        uVar2 = puVar11[3];
                        puVar13 = puVar11 + 4;
                    }
                    uVar5 = *puVar13;
                    puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2);
                    if (puVar13 == NULL) {
                        iVar14 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar14 = 0x30;
                        }
                        puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                        if (puVar13 == NULL) goto code_r0x080030b8;
                        *puVar13 = uVar2;
                        puVar13[2] = 0;
                        puVar13[3] = 0;
                        puVar13[4] = 0;
                        puVar13[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2,puVar13,0xa20);
                    }
                    sym.server_del(puVar13,uVar5);
                    iVar14 = uStack_120;
                    break;
                case 6:
                    uVar2 = puVar11[1];
                    uVar5 = puVar11[2];
                    uStack_78 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_7c = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    puStack_f8 = &uStack_88;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    piStack_e8 = NULL;
                    uStack_e0 = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
                    uStack_f0 = 0x14;
                    piVar19 = *0x80002e8;
                    if ((uStack_120._4_4_ != _segment.ehdr) || (auStack_118[0] == uVar5)) {
                        while (piVar20 = piVar19, piVar20 != 0x80002e8) {
                            piVar19 = *piVar20;
                            if ((*(piVar20 + -0xc) == uVar2) && (*(piVar20 + -1) == uVar5)) {
                                uVar15 = __list_del_entry_valid(piVar20);
                                if ((uVar15 & 1) != 0) {
                                    iVar14 = *piVar20;
                                    piVar4 = piVar20[1];
                                    *(iVar14 + 8) = piVar4;
                                    *piVar4 = iVar14;
                                }
                                *piVar20 = -0x2152ffffffffff00;
                                piVar20[1] = -0x2152fffffffffede;
                                kfree(piVar20 + -3);
                            }
                        }
                        puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2);
                        if (puVar13 == NULL) {
                            iVar14 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar14 = 0x30;
                            }
                            puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                            if (puVar13 != NULL) {
                                *puVar13 = uVar2;
                                puVar13[2] = 0;
                                puVar13[3] = 0;
                                puVar13[4] = 0;
                                puVar13[5] = 0;
                                xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2,puVar13,0xa20);
                                goto code_r0x08002ce8;
                            }
                        }
                        else {
code_r0x08002ce8:
                            sym.server_del(puVar13,uVar5);
                        }
                        uVar6 = _segment.ehdr;
                        puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,_segment.ehdr);
                        if (puVar13 == NULL) {
                            iVar14 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar14 = 0x30;
                            }
                            puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                            iVar14 = uStack_120;
                            if (puVar13 == NULL) break;
                            *puVar13 = uVar6;
                            puVar13[2] = 0;
                            puVar13[3] = 0;
                            puVar13[4] = 0;
                            puVar13[5] = 0;
                            xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar6,puVar13,0xa20);
                        }
                        uStack_7c = 0;
                        uStack_78 = 0;
                        uStack_88 = CONCAT44(uVar2,6);
                        uStack_100 = 0;
                        uStack_80 = uVar5;
                        puVar16 = xa_find(puVar13 + 2,&uStack_100,0xffffffffffffffff,8);
                        iVar8 = 0;
                        if (puVar16 != NULL) {
                            do {
                                uStack_108 = puVar16[3];
                                uStack_110 = CONCAT62(uStack_110._2_6_,0x2a);
                                uStack_110 = CONCAT44(puVar16[2],uStack_110);
                                uStack_e0 = CONCAT44(uStack_e0._4_4_,0xc);
                                piStack_e8 = &uStack_110;
                                iVar8 = kernel_sendmsg(CONCAT44(*0x8000004,_segment.ehdr),&piStack_e8,&puStack_f8,1
                                                       ,0x14);
                                if (((iVar8 < 0) && (iVar8 != -0x13)) &&
                                   (iVar9 = ___ratelimit(obj.ctrl_cmd_del_client._rs,"ctrl_cmd_del_client"),
                                   iVar9 != 0)) {
                                    _printk(0x8000dd5,"ctrl_cmd_del_client",*puVar16,puVar16[1],puVar16[3],iVar8);
                                }
                                puVar16 = xa_find_after(puVar13 + 2,&uStack_100,0xffffffffffffffff,8);
                                iVar8 = 0;
                            } while (puVar16 != NULL);
                        }
                        goto code_r0x08002f60;
                    }
                    goto code_r0x080030b8;
                case 10:
                    uVar2 = puVar11[1];
                    uVar5 = puVar11[2];
                    uStack_100 = 0;
                    if (uStack_120._4_4_ == _segment.ehdr) {
                        iVar14 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar14 = 0x30;
                        }
                        puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xdc0,0x28);
                        if (puVar13 != NULL) {
                            puVar1 = puVar13 + 6;
                            *(puVar13 + 2) = uStack_120;
                            puVar7 = *0x80002f0;
                            puVar13[4] = auStack_118[0];
                            *puVar13 = uVar2;
                            puVar13[1] = uVar5;
                            uVar15 = __list_add_valid(puVar1,puVar7);
                            if ((uVar15 & 1) != 0) {
                                *0x80002f0 = puVar1;
                                puVar13[6] = 0x80002e8;
                                puVar13[7] = 0;
                                *(puVar13 + 8) = puVar7;
                                *puVar7 = puVar1;
                            }
                            uStack_110 = 0;
                            iVar14 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_110,
                                             0xffffffffffffffff,8);
                            while (iVar14 != 0) {
                                uStack_100 = 0;
                                puVar13 = xa_find(iVar14 + 8,&uStack_100,0xffffffffffffffff,8);
                                while (puVar13 != NULL) {
                                    if ((uVar2 == 0) || (*puVar13 == uVar2)) {
                                        uVar6 = 0;
                                        if (uVar5 != 0) {
                                            uVar6 = puVar13[1];
                                        }
                                        if (uVar6 == uVar5) {
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
                                            uStack_f0 = 0x14;
                                            *puVar21 = 0;
                                            puVar21[1] = 0;
                                            uStack_88 = CONCAT44(*puVar13,4);
                                            uStack_80 = puVar13[1];
                                            uStack_7c = puVar13[2];
                                            uStack_78 = puVar13[3];
                                            piStack_e8 = &uStack_120;
                                            uStack_e0 = 0xc;
                                            puStack_f8 = &uStack_88;
                                            iVar8 = kernel_sendmsg(CONCAT44(*0x8000004,_segment.ehdr),&piStack_e8,
                                                                   &puStack_f8,1,0x14);
                                            if (((iVar8 < 0) && (iVar8 != -0x13)) &&
                                               (iVar9 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"),
                                               iVar9 != 0)) {
                                                _printk(0x8000cc7,"lookup_notify",iVar8);
                                            }
                                        }
                                    }
                                    puVar13 = xa_find_after(iVar14 + 8,&uStack_100,0xffffffffffffffff,8);
                                }
                                iVar14 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,
                                                       &uStack_110,0xffffffffffffffff,8);
                            }
                            uVar17 = CONCAT44(*0x8000004,_segment.ehdr);
                            uStack_88._4_4_ = uStack_88 >> 0x20;
                            uStack_88 = CONCAT44(uStack_88._4_4_,4);
                            piStack_e8 = &uStack_120;
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
                            uStack_f0 = 0x14;
                            *puVar21 = 0;
                            puVar21[1] = 0;
                            uStack_e0 = 0xc;
                            puStack_f8 = &uStack_88;
                            iVar8 = kernel_sendmsg(uVar17,&piStack_e8,&puStack_f8,1,0x14);
                            iVar14 = uStack_120;
                            if (((iVar8 < 0) && (iVar8 != -0x13)) &&
                               (iVar9 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar14 = uStack_120,
                               iVar9 != 0)) {
                                _printk(0x8000cc7,"lookup_notify",iVar8);
                                iVar14 = uStack_120;
                            }
                            break;
                        }
                    }
code_r0x080030b8:
                    _printk(0x8000a99,"qrtr_ns_worker",uStack_120._4_4_,auStack_118[0]);
                    iVar14 = uStack_120;
                    break;
                case 0xb:
                    if (*0x80002e8 != 0x80002e8) {
                        uVar2 = puVar11[1];
                        uVar5 = puVar11[2];
                        piVar19 = *0x80002e8;
                        do {
                            piVar20 = *piVar19;
                            if ((((*(piVar19 + -0xc) == uStack_120._4_4_) && (*(piVar19 + -1) == auStack_118[0])) &&
                                (*(piVar19 + -3) == uVar2)) &&
                               ((*(piVar19 + -0x14) == 0 || (*(piVar19 + -0x14) == uVar5)))) {
                                uVar15 = __list_del_entry_valid(piVar19);
                                if ((uVar15 & 1) != 0) {
                                    iVar14 = *piVar19;
                                    piVar4 = piVar19[1];
                                    *(iVar14 + 8) = piVar4;
                                    *piVar4 = iVar14;
                                }
                                *piVar19 = -0x2152ffffffffff00;
                                piVar19[1] = -0x2152fffffffffede;
                                kfree(piVar19 + -3);
                            }
                            piVar19 = piVar20;
                            iVar14 = uStack_120;
                        } while (piVar20 != 0x80002e8);
                    }
                }
                uStack_120 = iVar14;
                uStack_188 = 0x1000;
                puStack_190 = puVar11;
                iVar8 = kernel_recvmsg(CONCAT44(*0x8000004,_segment.ehdr),&puStack_180,&puStack_190,1,0x1000,0x40)
                ;
            } while (iVar8 != -0xb);
        }
        kfree(puVar11);
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail();
    uVar22 = tpidr_el2;
    *extraout_x18 = 0x8003194;
    kthread_queue_work(in_tmp_ldXn,0x80002f8,0x8000330);
    return;
}


// ===== sym.qrtr_ns_data_ready.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001290 (size 8) =====

void sym.qrtr_ns_data_ready.6f5da6878d0fb727712a6154d8620cf4.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kthread_queue_work(0x80002f8,0x8000330);
    return;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08001298 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qrtr_get_service_id.cfi_jt @ 0x080012a0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002f70)

uint64_t sym.qrtr_get_service_id.cfi_jt(uint32_t param_1,uint32_t param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t *puVar7;
    ulong in_tmp_ldXn;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int64_t iVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int *piVar16;
    uint32_t *puVar17;
    uint *puVar18;
    uint *puVar19;
    ulong uVar20;
    char *pcVar21;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong *puVar24;
    ulong unaff_x30;
    ulong uVar25;
    uint32_t *puStack_2b0;
    ulong uStack_2a8;
    ulong *puStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    uint32_t auStack_238 [2];
    ulong uStack_230;
    uint uStack_228;
    ulong uStack_220;
    ulong *puStack_218;
    ulong uStack_210;
    int64_t *piStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    uint32_t uStack_1a0;
    uint32_t uStack_19c;
    uint32_t uStack_198;
    int64_t iStack_190;
    uchar **ppuStack_180;
    code *pcStack_178;
    uint uStack_114;
    ulong uStack_110;
    uint uStack_108;
    uint *puStack_100;
    ulong uStack_f8;
    code *pcStack_f0;
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
    uint uStack_90;
    ulong uStack_8c;
    ulong uStack_84;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    iVar12 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,param_1);
    if (iVar12 != 0) {
        uStack_40 = 0;
        puVar13 = xa_find(iVar12 + 8,&uStack_40,0xffffffffffffffff,8);
        while (puVar13 != NULL) {
            if ((puVar13[2] == param_1) && (puVar13[3] == param_2)) {
                uVar14 = *puVar13;
                goto code_r0x08001f84;
            }
            puVar13 = xa_find_after(iVar12 + 8,&uStack_40,0xffffffffffffffff,8);
        }
    }
    uVar14 = 0xffffffea;
code_r0x08001f84:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return uVar14;
    }
    __stack_chk_fail(uVar14);
    *extraout_x18 = sym.qrtr_ns_init;
    pcStack_68 = sym.qrtr_ns_init;
    iVar12 = sp_el0;
    iStack_78 = *(iVar12 + 0x5e0);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_114 = 0x100000;
    *0x80002e8 = 0x80002e8;
    *0x80002f0 = 0x80002e8;
    puStack_70 = &stack0xffffffffffffffd0;
    __kthread_init_worker(0x80002f8,"(&qrtr_ns.kworker)->lock",obj.qrtr_ns_init.__key);
    *0x8000348 = 0;
    *0x8000350 = 0;
    *0x8000330 = 0x8000330;
    *0x8000338 = 0x8000330;
    *0x8000340 = sym.qrtr_ns_worker.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
    _segment.ehdr = ipc_log_context_create(8,"qrtr_ns",0);
    uVar8 = sock_create_kern(init_net,0x2a,2,0x2a,reloc.__traceiter_qrtr_ns_server_add.cfi_jt);
    if (uVar8 < 0) {
        uVar14 = uVar8;
    }
    else {
        uVar8 = kernel_getsockname(_segment.ehdr,&uStack_110);
        uVar14 = uVar8;
        if (uVar8 < 0) {
            _printk(0x8000ae5,"qrtr_ns_init");
        }
        else {
            uVar15 = kthread_create_on_node(sym.kthread_worker_fn.cfi_jt,0x80002f8,0xffffffff,"qrtr_ns");
            if (uVar15 < 0xfffffffffffff001) {
                wake_up_process(uVar15);
                iVar12 = _reloc.__traceiter_qrtr_ns_server_add.cfi_jt;
                uStack_108 = 0xfffffffe;
                *0x8000358 = uVar15;
                *(*(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt + 0x18) + 0x2d8) =
                     sym.qrtr_ns_data_ready.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
                *0x8000360 = uStack_110._4_4_;
                uVar8 = kernel_bind(iVar12,&uStack_110,0xc);
                if (uVar8 < 0) {
                    uVar14 = uVar8;
                    _printk(0x8000a32,"qrtr_ns_init");
                }
                else {
                    sock_setsockopt(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,1,0x21,&uStack_114,1,4);
                    _reloc.__traceiter_qrtr_ns_message.cfi_jt = 0x2a;
                    *0x80002dc = 0xfffffffeffffffff;
                    puStack_100 = &uStack_90;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uStack_f8 = 0x14;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_e0 = 0;
                    uStack_d8 = 0;
                    uStack_8c = 0;
                    uStack_84 = 0;
                    uStack_90 = 2;
                    pcStack_f0 = reloc.__traceiter_qrtr_ns_message.cfi_jt;
                    uStack_e8 = 0xc;
                    uVar8 = kernel_sendmsg(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,&pcStack_f0,&puStack_100,1,
                                           0x14);
                    if (-1 < uVar8) {
                        uVar14 = 0;
                        goto code_r0x08002254;
                    }
                    uVar14 = uVar8;
                    _printk(0x8000f16,"say_hello",uVar14);
                }
                kthread_stop(_segment.ehdr);
            }
            else {
                _segment.ehdr = uVar15;
                _printk(0x8000e98,"qrtr_ns_init",uVar15);
            }
        }
        sock_release(_segment.ehdr);
    }
code_r0x08002254:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_78) {
        return uVar14;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.qrtr_ns_worker;
    pcStack_178 = sym.qrtr_ns_worker;
    iVar12 = sp_el0;
    iStack_190 = *(iVar12 + 0x5e0);
    puStack_2a0 = &uStack_240;
    auStack_238[0] = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_298 = 0xc;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_290 = 0;
    ppuStack_180 = &puStack_70;
    puVar13 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x1000);
    uVar14 = 0;
    if (puVar13 != NULL) {
        uStack_2a8 = 0x1000;
        puStack_2b0 = puVar13;
        iVar9 = kernel_recvmsg(_segment.ehdr,&puStack_2a0,&puStack_2b0,1,0x1000,0x40);
        if (iVar9 != -0xb) {
            puVar24 = &uStack_1a8 | 4;
            uVar25 = sp_el0;
            do {
                if (iVar9 < 0) {
                    _printk(0x8000d15,"qrtr_ns_worker",iVar9);
                    break;
                }
                uVar4 = *puVar13;
                uVar5 = *puVar13;
                uVar8 = uVar5 & 0xfffffffe;
                if (uVar8 == 2) {
                    ipc_log_string(_segment.ehdr,"cmd:0x%x node[0x%x]\n",uVar5,uStack_240._4_4_);
                }
                else {
                    if (uVar5 == 6) {
                        uVar8 = puVar13[1];
                        uVar2 = puVar13[2];
                        pcVar21 = "cmd:0x%x addr[0x%x:0x%x]\n";
                    }
                    else {
                        if (uVar8 != 10) {
                            if (uVar8 == 4) {
                                ipc_log_string(_segment.ehdr,"cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",uVar5,
                                               puVar13[1],puVar13[2],puVar13[3],puVar13[4],in_x7,uVar25);
                            }
                            goto code_r0x0800249c;
                        }
                        uVar8 = puVar13[1];
                        uVar2 = puVar13[2];
                        pcVar21 = "cmd:0x%x SVC[0x%x:0x%x]\n";
                    }
                    ipc_log_string(_segment.ehdr,pcVar21,uVar5,uVar8,uVar2);
                }
code_r0x0800249c:
                uVar14 = _segment.ehdr;
                uVar8 = uStack_240._4_4_;
                iVar12 = uStack_240;
                switch(uVar4) {
                case 2:
                    puStack_218 = &uStack_1a8;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    uStack_1c8 = 0;
                    uStack_1c0 = 0;
                    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,2);
                    uStack_1d8 = 0;
                    uStack_1d0 = 0;
                    uStack_1e8 = 0;
                    uStack_1e0 = 0;
                    piStack_208 = &uStack_240;
                    uStack_1f8 = 0;
                    uStack_1f0 = 0;
                    uStack_210 = 0x14;
                    *puVar24 = 0;
                    puVar24[1] = 0;
                    uStack_200 = 0xc;
                    iVar9 = kernel_sendmsg(uVar14,&piStack_208,&puStack_218,1,0x14);
                    if (iVar9 < 0) {
                        uVar20 = 0x8000f16;
                        pcVar21 = "say_hello";
code_r0x080030b4:
                        _printk(uVar20,pcVar21,iVar9);
                        goto code_r0x080030b8;
                    }
                    piStack_208 = NULL;
                    uStack_1a8 = 0;
                    piVar16 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_1a8,
                                      0xffffffffffffffff,8);
                    iVar12 = uStack_240;
                    while (piVar16 != NULL) {
                        uStack_240._4_4_ = iVar12 >> 0x20;
                        uStack_240 = iVar12;
                        if (*piVar16 == uStack_240._4_4_) {
                            _printk(0x8000b14,"announce_servers");
                        }
                        else {
                            piStack_208 = NULL;
                            iVar12 = xa_find(piVar16 + 2,&piStack_208,0xffffffffffffffff,8);
                            while (iVar12 != 0) {
                                iVar9 = sym.service_announce_new(&uStack_240,iVar12);
                                if ((iVar9 < 0) && (iVar9 != -0x13)) {
                                    _printk(0x8000da4,"announce_servers",iVar9);
                                    goto code_r0x08002f60;
                                }
                                iVar12 = xa_find_after(piVar16 + 2,&piStack_208,0xffffffffffffffff,8);
                            }
                        }
                        piVar16 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_1a8,
                                                0xffffffffffffffff,8);
                        iVar12 = uStack_240;
                    }
                    break;
                case 3:
                    puStack_218 = &uStack_1a8;
                    uStack_198 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    uStack_19c = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    uStack_1c8 = 0;
                    uStack_1c0 = 0;
                    uStack_1d8 = 0;
                    uStack_1d0 = 0;
                    uStack_1e8 = 0;
                    uStack_1e0 = 0;
                    uStack_1f8 = 0;
                    uStack_1f0 = 0;
                    piStack_208 = NULL;
                    uStack_200 = 0;
                    uStack_210 = 0x14;
                    puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uStack_240._4_4_);
                    if (puVar17 == NULL) {
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                        iVar12 = uStack_240;
                        if (puVar17 == NULL) break;
                        *puVar17 = uVar8;
                        puVar17[2] = 0;
                        puVar17[3] = 0;
                        puVar17[4] = 0;
                        puVar17[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar17,0xa20);
                    }
                    uStack_220 = 0;
                    iVar12 = xa_find(puVar17 + 2,&uStack_220,0xffffffffffffffff,8);
                    while (iVar12 != 0) {
                        sym.server_del(puVar17,*(iVar12 + 0xc));
                        iVar12 = xa_find_after(puVar17 + 2,&uStack_220,0xffffffffffffffff,8);
                    }
                    uVar6 = _segment.ehdr;
                    uVar14 = _segment.ehdr & 0xffffffff;
                    puVar18 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar14);
                    if (puVar18 == NULL) {
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar18 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                        iVar12 = uStack_240;
                        if (puVar18 == NULL) break;
                        *puVar18 = uVar6;
                        *(puVar18 + 2) = 0;
                        *(puVar18 + 4) = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar14,puVar18,0xa20);
                    }
                    uStack_198 = 0;
                    uStack_19c = 0;
                    uStack_1a0 = 0;
                    uStack_220 = 0;
                    uStack_1a8 = CONCAT44(uStack_240._4_4_,3);
                    puVar19 = xa_find(puVar18 + 2,&uStack_220,0xffffffffffffffff,8);
                    while (iVar12 = uStack_240, puVar19 != NULL) {
                        uStack_228 = puVar19[3];
                        uStack_230._2_6_ = uStack_230 >> 0x10;
                        uStack_230 = CONCAT62(uStack_230._2_6_,0x2a);
                        uStack_230 = CONCAT44(puVar19[2],uStack_230);
                        uStack_200._4_4_ = uStack_200 >> 0x20;
                        uStack_200 = CONCAT44(uStack_200._4_4_,0xc);
                        piStack_208 = &uStack_230;
                        iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_208,&puStack_218,1,0x14);
                        if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                           (iVar10 = ___ratelimit(obj.ctrl_cmd_bye._rs,"ctrl_cmd_bye"), iVar10 != 0)) {
                            _printk(0x8000c24,"ctrl_cmd_bye",*puVar19,puVar19[1],puVar19[3],iVar9);
                        }
                        puVar19 = xa_find_after(puVar18 + 2,&uStack_220,0xffffffffffffffff,8);
                    }
                    break;
                case 4:
                    uVar4 = puVar13[1];
                    uVar8 = puVar13[2];
                    puVar17 = auStack_238;
                    if (uStack_240._4_4_ != _segment.ehdr) {
                        puVar17 = puVar13 + 4;
                    }
                    uVar5 = uStack_240._4_4_;
                    if (uStack_240._4_4_ != _segment.ehdr) {
                        uVar5 = puVar13[3];
                    }
                    puVar18 = sym.server_add(uVar4,uVar8,uVar5,*puVar17);
                    if (puVar18 != NULL) {
                        if (puVar18[2] == _segment.ehdr) {
                            iVar9 = sym.service_announce_new(0x80002d8,puVar18);
                            if (iVar9 < 0) {
                                uVar20 = 0x8000da4;
                                pcVar21 = "ctrl_cmd_new_server";
                                goto code_r0x080030b4;
                            }
                        }
                        else {
                            iVar9 = 0;
                        }
                        piVar22 = *0x80002e8;
                        iVar12 = uStack_240;
                        if (*0x80002e8 == 0x80002e8) break;
                        do {
                            if (((*(piVar22 + -3) == 0) || (*(piVar22 + -3) == uVar4)) &&
                               ((*(piVar22 + -0x14) == 0 || (*(piVar22 + -0x14) == uVar8)))) {
                                uStack_1b8 = 0;
                                uStack_1b0 = 0;
                                uStack_1c8 = 0;
                                uStack_1c0 = 0;
                                piStack_208 = piVar22 + -2;
                                uStack_1d8 = 0;
                                uStack_1d0 = 0;
                                uStack_1e8 = 0;
                                uStack_1e0 = 0;
                                uStack_1f8 = 0;
                                uStack_1f0 = 0;
                                uStack_210 = 0x14;
                                uStack_1a8 = CONCAT44(*puVar18,4);
                                uStack_1a0 = puVar18[1];
                                uStack_19c = puVar18[2];
                                uStack_200 = 0xc;
                                uStack_198 = puVar18[3];
                                puStack_218 = &uStack_1a8;
                                iVar10 = kernel_sendmsg(_segment.ehdr,&piStack_208,&puStack_218,1,0x14);
                                if (((iVar10 < 0) && (iVar10 != -0x13)) &&
                                   (iVar11 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar11 != 0)) {
                                    _printk(0x8000cc7,"lookup_notify",iVar10);
                                }
                            }
                            piVar22 = *piVar22;
                        } while (piVar22 != 0x80002e8);
code_r0x08002f60:
                        iVar12 = uStack_240;
                        if (-1 < iVar9) break;
                    }
                    goto code_r0x080030b8;
                case 5:
                    puVar17 = auStack_238;
                    if (uStack_240._4_4_ != _segment.ehdr) {
                        uVar8 = puVar13[3];
                        puVar17 = puVar13 + 4;
                    }
                    uVar4 = *puVar17;
                    puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8);
                    if (puVar17 == NULL) {
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                        if (puVar17 == NULL) goto code_r0x080030b8;
                        *puVar17 = uVar8;
                        puVar17[2] = 0;
                        puVar17[3] = 0;
                        puVar17[4] = 0;
                        puVar17[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar17,0xa20);
                    }
                    sym.server_del(puVar17,uVar4);
                    iVar12 = uStack_240;
                    break;
                case 6:
                    uVar8 = puVar13[1];
                    uVar4 = puVar13[2];
                    uStack_198 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    uStack_19c = 0;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    uStack_1c8 = 0;
                    uStack_1c0 = 0;
                    puStack_218 = &uStack_1a8;
                    uStack_1d8 = 0;
                    uStack_1d0 = 0;
                    uStack_1e8 = 0;
                    uStack_1e0 = 0;
                    uStack_1f8 = 0;
                    uStack_1f0 = 0;
                    piStack_208 = NULL;
                    uStack_200 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_210 = 0x14;
                    piVar22 = *0x80002e8;
                    if ((uStack_240._4_4_ != _segment.ehdr) || (auStack_238[0] == uVar4)) {
                        while (piVar23 = piVar22, piVar23 != 0x80002e8) {
                            piVar22 = *piVar23;
                            if ((*(piVar23 + -0xc) == uVar8) && (*(piVar23 + -1) == uVar4)) {
                                uVar14 = __list_del_entry_valid(piVar23);
                                if ((uVar14 & 1) != 0) {
                                    iVar12 = *piVar23;
                                    piVar3 = piVar23[1];
                                    *(iVar12 + 8) = piVar3;
                                    *piVar3 = iVar12;
                                }
                                *piVar23 = -0x2152ffffffffff00;
                                piVar23[1] = -0x2152fffffffffede;
                                kfree(piVar23 + -3);
                            }
                        }
                        puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8);
                        if (puVar17 == NULL) {
                            iVar12 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar12 = 0x30;
                            }
                            puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                            if (puVar17 != NULL) {
                                *puVar17 = uVar8;
                                puVar17[2] = 0;
                                puVar17[3] = 0;
                                puVar17[4] = 0;
                                puVar17[5] = 0;
                                xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar17,0xa20);
                                goto code_r0x08002ce8;
                            }
                        }
                        else {
code_r0x08002ce8:
                            sym.server_del(puVar17,uVar4);
                        }
                        uVar6 = _segment.ehdr;
                        uVar14 = _segment.ehdr & 0xffffffff;
                        puVar18 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar14);
                        if (puVar18 == NULL) {
                            iVar12 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar12 = 0x30;
                            }
                            puVar18 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                            iVar12 = uStack_240;
                            if (puVar18 == NULL) break;
                            *puVar18 = uVar6;
                            *(puVar18 + 2) = 0;
                            *(puVar18 + 4) = 0;
                            xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar14,puVar18,0xa20);
                        }
                        uStack_19c = 0;
                        uStack_198 = 0;
                        uStack_1a8 = CONCAT44(uVar8,6);
                        uStack_220 = 0;
                        uStack_1a0 = uVar4;
                        puVar19 = xa_find(puVar18 + 2,&uStack_220,0xffffffffffffffff,8);
                        iVar9 = 0;
                        if (puVar19 != NULL) {
                            do {
                                uStack_228 = puVar19[3];
                                uStack_230 = CONCAT62(uStack_230._2_6_,0x2a);
                                uStack_230 = CONCAT44(puVar19[2],uStack_230);
                                uStack_200 = CONCAT44(uStack_200._4_4_,0xc);
                                piStack_208 = &uStack_230;
                                iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_208,&puStack_218,1,0x14);
                                if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                   (iVar10 = ___ratelimit(obj.ctrl_cmd_del_client._rs,"ctrl_cmd_del_client"),
                                   iVar10 != 0)) {
                                    _printk(0x8000dd5,"ctrl_cmd_del_client",*puVar19,puVar19[1],puVar19[3],iVar9);
                                }
                                puVar19 = xa_find_after(puVar18 + 2,&uStack_220,0xffffffffffffffff,8);
                                iVar9 = 0;
                            } while (puVar19 != NULL);
                        }
                        goto code_r0x08002f60;
                    }
                    goto code_r0x080030b8;
                case 10:
                    uVar8 = puVar13[1];
                    uVar4 = puVar13[2];
                    uStack_220 = 0;
                    if (uStack_240._4_4_ == _segment.ehdr) {
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x28);
                        if (puVar17 != NULL) {
                            puVar1 = puVar17 + 6;
                            *(puVar17 + 2) = uStack_240;
                            puVar7 = *0x80002f0;
                            puVar17[4] = auStack_238[0];
                            *puVar17 = uVar8;
                            puVar17[1] = uVar4;
                            uVar14 = __list_add_valid(puVar1,puVar7);
                            if ((uVar14 & 1) != 0) {
                                *0x80002f0 = puVar1;
                                puVar17[6] = 0x80002e8;
                                puVar17[7] = 0;
                                *(puVar17 + 8) = puVar7;
                                *puVar7 = puVar1;
                            }
                            uStack_230 = 0;
                            iVar12 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_230,
                                             0xffffffffffffffff,8);
                            uVar14 = _segment.ehdr;
                            while (_segment.ehdr = uVar14, iVar12 != 0) {
                                uStack_220 = 0;
                                puVar17 = xa_find(iVar12 + 8,&uStack_220,0xffffffffffffffff,8);
                                while (puVar17 != NULL) {
                                    if ((uVar8 == 0) || (*puVar17 == uVar8)) {
                                        uVar5 = 0;
                                        if (uVar4 != 0) {
                                            uVar5 = puVar17[1];
                                        }
                                        if (uVar5 == uVar4) {
                                            uStack_1b8 = 0;
                                            uStack_1b0 = 0;
                                            uStack_1c8 = 0;
                                            uStack_1c0 = 0;
                                            uStack_1d8 = 0;
                                            uStack_1d0 = 0;
                                            uStack_1e8 = 0;
                                            uStack_1e0 = 0;
                                            uStack_1f8 = 0;
                                            uStack_1f0 = 0;
                                            uStack_210 = 0x14;
                                            *puVar24 = 0;
                                            puVar24[1] = 0;
                                            uStack_1a8 = CONCAT44(*puVar17,4);
                                            uStack_1a0 = puVar17[1];
                                            uStack_19c = puVar17[2];
                                            uStack_198 = puVar17[3];
                                            piStack_208 = &uStack_240;
                                            uStack_200 = 0xc;
                                            puStack_218 = &uStack_1a8;
                                            iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_208,&puStack_218,1,0x14);
                                            if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                               (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"),
                                               iVar10 != 0)) {
                                                _printk(0x8000cc7,"lookup_notify",iVar9);
                                            }
                                        }
                                    }
                                    puVar17 = xa_find_after(iVar12 + 8,&uStack_220,0xffffffffffffffff,8);
                                }
                                iVar12 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,
                                                       &uStack_230,0xffffffffffffffff,8);
                                uVar14 = _segment.ehdr;
                            }
                            uStack_1a8._4_4_ = uStack_1a8 >> 0x20;
                            uStack_1a8 = CONCAT44(uStack_1a8._4_4_,4);
                            piStack_208 = &uStack_240;
                            uStack_1b8 = 0;
                            uStack_1b0 = 0;
                            uStack_1c8 = 0;
                            uStack_1c0 = 0;
                            uStack_1d8 = 0;
                            uStack_1d0 = 0;
                            uStack_1e8 = 0;
                            uStack_1e0 = 0;
                            uStack_1f8 = 0;
                            uStack_1f0 = 0;
                            uStack_210 = 0x14;
                            *puVar24 = 0;
                            puVar24[1] = 0;
                            uStack_200 = 0xc;
                            puStack_218 = &uStack_1a8;
                            iVar9 = kernel_sendmsg(uVar14,&piStack_208,&puStack_218,1,0x14);
                            iVar12 = uStack_240;
                            if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                               (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar12 = uStack_240,
                               iVar10 != 0)) {
                                _printk(0x8000cc7,"lookup_notify",iVar9);
                                iVar12 = uStack_240;
                            }
                            break;
                        }
                    }
code_r0x080030b8:
                    _printk(0x8000a99,"qrtr_ns_worker",uStack_240._4_4_,auStack_238[0]);
                    iVar12 = uStack_240;
                    break;
                case 0xb:
                    if (*0x80002e8 != 0x80002e8) {
                        uVar8 = puVar13[1];
                        uVar4 = puVar13[2];
                        piVar22 = *0x80002e8;
                        do {
                            piVar23 = *piVar22;
                            if ((((*(piVar22 + -0xc) == uStack_240._4_4_) && (*(piVar22 + -1) == auStack_238[0])) &&
                                (*(piVar22 + -3) == uVar8)) &&
                               ((*(piVar22 + -0x14) == 0 || (*(piVar22 + -0x14) == uVar4)))) {
                                uVar14 = __list_del_entry_valid(piVar22);
                                if ((uVar14 & 1) != 0) {
                                    iVar12 = *piVar22;
                                    piVar3 = piVar22[1];
                                    *(iVar12 + 8) = piVar3;
                                    *piVar3 = iVar12;
                                }
                                *piVar22 = -0x2152ffffffffff00;
                                piVar22[1] = -0x2152fffffffffede;
                                kfree(piVar22 + -3);
                            }
                            piVar22 = piVar23;
                            iVar12 = uStack_240;
                        } while (piVar23 != 0x80002e8);
                    }
                }
                uStack_240 = iVar12;
                uStack_2a8 = 0x1000;
                puStack_2b0 = puVar13;
                iVar9 = kernel_recvmsg(_segment.ehdr,&puStack_2a0,&puStack_2b0,1,0x1000,0x40);
            } while (iVar9 != -0xb);
        }
        uVar14 = kfree(puVar13);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_190) {
        return uVar14;
    }
    __stack_chk_fail();
    uVar25 = tpidr_el2;
    *extraout_x18_01 = 0x8003194;
    uVar14 = kthread_queue_work(in_tmp_ldXn,0x80002f8,0x8000330);
    return uVar14;
}


// ===== sym.qrtr_ns_init.cfi_jt @ 0x080012a8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002f70)

uint64_t sym.qrtr_ns_init.cfi_jt(void)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t *puVar7;
    ulong in_tmp_ldXn;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    int *piVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    uint *puVar17;
    uint *puVar18;
    ulong uVar19;
    char *pcVar20;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong *puVar24;
    ulong unaff_x30;
    ulong uVar25;
    uint32_t *puStack_270;
    ulong uStack_268;
    ulong *puStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    uint32_t auStack_1f8 [2];
    ulong uStack_1f0;
    uint uStack_1e8;
    ulong uStack_1e0;
    ulong *puStack_1d8;
    ulong uStack_1d0;
    int64_t *piStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    uint32_t uStack_160;
    uint32_t uStack_15c;
    uint32_t uStack_158;
    int64_t iStack_150;
    uchar *puStack_140;
    code *pcStack_138;
    uint uStack_d4;
    ulong uStack_d0;
    uint uStack_c8;
    uint *puStack_c0;
    ulong uStack_b8;
    code *pcStack_b0;
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
    uint uStack_50;
    ulong uStack_4c;
    ulong uStack_44;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_38 = *(iVar16 + 0x5e0);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d4 = 0x100000;
    *0x80002e8 = 0x80002e8;
    *0x80002f0 = 0x80002e8;
    __kthread_init_worker(0x80002f8,"(&qrtr_ns.kworker)->lock",obj.qrtr_ns_init.__key);
    *0x8000348 = 0;
    *0x8000350 = 0;
    *0x8000330 = 0x8000330;
    *0x8000338 = 0x8000330;
    *0x8000340 = sym.qrtr_ns_worker.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
    _segment.ehdr = ipc_log_context_create(8,"qrtr_ns",0);
    uVar8 = sock_create_kern(init_net,0x2a,2,0x2a,reloc.__traceiter_qrtr_ns_server_add.cfi_jt);
    if (uVar8 < 0) {
        uVar21 = uVar8;
    }
    else {
        uVar8 = kernel_getsockname(_segment.ehdr,&uStack_d0);
        uVar21 = uVar8;
        if (uVar8 < 0) {
            _printk(0x8000ae5,"qrtr_ns_init");
        }
        else {
            uVar12 = kthread_create_on_node(sym.kthread_worker_fn.cfi_jt,0x80002f8,0xffffffff,"qrtr_ns");
            if (uVar12 < 0xfffffffffffff001) {
                wake_up_process(uVar12);
                iVar16 = _reloc.__traceiter_qrtr_ns_server_add.cfi_jt;
                uStack_c8 = 0xfffffffe;
                *0x8000358 = uVar12;
                *(*(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt + 0x18) + 0x2d8) =
                     sym.qrtr_ns_data_ready.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
                *0x8000360 = uStack_d0._4_4_;
                uVar8 = kernel_bind(iVar16,&uStack_d0,0xc);
                if (uVar8 < 0) {
                    uVar21 = uVar8;
                    _printk(0x8000a32,"qrtr_ns_init");
                }
                else {
                    sock_setsockopt(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,1,0x21,&uStack_d4,1,4);
                    _reloc.__traceiter_qrtr_ns_message.cfi_jt = 0x2a;
                    *0x80002dc = 0xfffffffeffffffff;
                    puStack_c0 = &uStack_50;
                    uStack_60 = 0;
                    uStack_58 = 0;
                    uStack_70 = 0;
                    uStack_68 = 0;
                    uStack_b8 = 0x14;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_4c = 0;
                    uStack_44 = 0;
                    uStack_50 = 2;
                    pcStack_b0 = reloc.__traceiter_qrtr_ns_message.cfi_jt;
                    uStack_a8 = 0xc;
                    uVar8 = kernel_sendmsg(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,&pcStack_b0,&puStack_c0,1,
                                           0x14);
                    if (-1 < uVar8) {
                        uVar21 = 0;
                        goto code_r0x08002254;
                    }
                    uVar21 = uVar8;
                    _printk(0x8000f16,"say_hello",uVar21);
                }
                kthread_stop(_segment.ehdr);
            }
            else {
                _segment.ehdr = uVar12;
                _printk(0x8000e98,"qrtr_ns_init",uVar12);
            }
        }
        sock_release(_segment.ehdr);
    }
code_r0x08002254:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_38) {
        return uVar21;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qrtr_ns_worker;
    pcStack_138 = sym.qrtr_ns_worker;
    iVar16 = sp_el0;
    iStack_150 = *(iVar16 + 0x5e0);
    puStack_260 = &uStack_200;
    auStack_1f8[0] = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_258 = 0xc;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_250 = 0;
    puStack_140 = &stack0xffffffffffffffd0;
    puVar13 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x1000);
    uVar21 = 0;
    if (puVar13 != NULL) {
        uStack_268 = 0x1000;
        puStack_270 = puVar13;
        iVar9 = kernel_recvmsg(_segment.ehdr,&puStack_260,&puStack_270,1,0x1000,0x40);
        if (iVar9 != -0xb) {
            puVar24 = &uStack_168 | 4;
            uVar25 = sp_el0;
            do {
                if (iVar9 < 0) {
                    _printk(0x8000d15,"qrtr_ns_worker",iVar9);
                    break;
                }
                uVar4 = *puVar13;
                uVar5 = *puVar13;
                uVar8 = uVar5 & 0xfffffffe;
                if (uVar8 == 2) {
                    ipc_log_string(_segment.ehdr,"cmd:0x%x node[0x%x]\n",uVar5,uStack_200._4_4_);
                }
                else {
                    if (uVar5 == 6) {
                        uVar8 = puVar13[1];
                        uVar2 = puVar13[2];
                        pcVar20 = "cmd:0x%x addr[0x%x:0x%x]\n";
                    }
                    else {
                        if (uVar8 != 10) {
                            if (uVar8 == 4) {
                                ipc_log_string(_segment.ehdr,"cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",uVar5,
                                               puVar13[1],puVar13[2],puVar13[3],puVar13[4],in_x7,uVar25);
                            }
                            goto code_r0x0800249c;
                        }
                        uVar8 = puVar13[1];
                        uVar2 = puVar13[2];
                        pcVar20 = "cmd:0x%x SVC[0x%x:0x%x]\n";
                    }
                    ipc_log_string(_segment.ehdr,pcVar20,uVar5,uVar8,uVar2);
                }
code_r0x0800249c:
                uVar21 = _segment.ehdr;
                uVar8 = uStack_200._4_4_;
                iVar16 = uStack_200;
                switch(uVar4) {
                case 2:
                    puStack_1d8 = &uStack_168;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_188 = 0;
                    uStack_180 = 0;
                    uStack_168 = CONCAT44(uStack_168._4_4_,2);
                    uStack_198 = 0;
                    uStack_190 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    piStack_1c8 = &uStack_200;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    uStack_1d0 = 0x14;
                    *puVar24 = 0;
                    puVar24[1] = 0;
                    uStack_1c0 = 0xc;
                    iVar9 = kernel_sendmsg(uVar21,&piStack_1c8,&puStack_1d8,1,0x14);
                    if (iVar9 < 0) {
                        uVar19 = 0x8000f16;
                        pcVar20 = "say_hello";
code_r0x080030b4:
                        _printk(uVar19,pcVar20,iVar9);
                        goto code_r0x080030b8;
                    }
                    piStack_1c8 = NULL;
                    uStack_168 = 0;
                    piVar14 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_168,
                                      0xffffffffffffffff,8);
                    iVar16 = uStack_200;
                    while (piVar14 != NULL) {
                        uStack_200._4_4_ = iVar16 >> 0x20;
                        uStack_200 = iVar16;
                        if (*piVar14 == uStack_200._4_4_) {
                            _printk(0x8000b14,"announce_servers");
                        }
                        else {
                            piStack_1c8 = NULL;
                            iVar16 = xa_find(piVar14 + 2,&piStack_1c8,0xffffffffffffffff,8);
                            while (iVar16 != 0) {
                                iVar9 = sym.service_announce_new(&uStack_200,iVar16);
                                if ((iVar9 < 0) && (iVar9 != -0x13)) {
                                    _printk(0x8000da4,"announce_servers",iVar9);
                                    goto code_r0x08002f60;
                                }
                                iVar16 = xa_find_after(piVar14 + 2,&piStack_1c8,0xffffffffffffffff,8);
                            }
                        }
                        piVar14 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_168,
                                                0xffffffffffffffff,8);
                        iVar16 = uStack_200;
                    }
                    break;
                case 3:
                    puStack_1d8 = &uStack_168;
                    uStack_158 = 0;
                    uStack_168 = 0;
                    uStack_160 = 0;
                    uStack_15c = 0;
                    uStack_1e8 = 0;
                    uStack_1f0 = 0;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_188 = 0;
                    uStack_180 = 0;
                    uStack_198 = 0;
                    uStack_190 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    piStack_1c8 = NULL;
                    uStack_1c0 = 0;
                    uStack_1d0 = 0x14;
                    puVar15 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uStack_200._4_4_);
                    if (puVar15 == NULL) {
                        iVar16 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar16 = 0x30;
                        }
                        puVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                        iVar16 = uStack_200;
                        if (puVar15 == NULL) break;
                        *puVar15 = uVar8;
                        puVar15[2] = 0;
                        puVar15[3] = 0;
                        puVar15[4] = 0;
                        puVar15[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar15,0xa20);
                    }
                    uStack_1e0 = 0;
                    iVar16 = xa_find(puVar15 + 2,&uStack_1e0,0xffffffffffffffff,8);
                    while (iVar16 != 0) {
                        sym.server_del(puVar15,*(iVar16 + 0xc));
                        iVar16 = xa_find_after(puVar15 + 2,&uStack_1e0,0xffffffffffffffff,8);
                    }
                    uVar6 = _segment.ehdr;
                    uVar21 = _segment.ehdr & 0xffffffff;
                    puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar21);
                    if (puVar17 == NULL) {
                        iVar16 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar16 = 0x30;
                        }
                        puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                        iVar16 = uStack_200;
                        if (puVar17 == NULL) break;
                        *puVar17 = uVar6;
                        *(puVar17 + 2) = 0;
                        *(puVar17 + 4) = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar21,puVar17,0xa20);
                    }
                    uStack_158 = 0;
                    uStack_15c = 0;
                    uStack_160 = 0;
                    uStack_1e0 = 0;
                    uStack_168 = CONCAT44(uStack_200._4_4_,3);
                    puVar18 = xa_find(puVar17 + 2,&uStack_1e0,0xffffffffffffffff,8);
                    while (iVar16 = uStack_200, puVar18 != NULL) {
                        uStack_1e8 = puVar18[3];
                        uStack_1f0._2_6_ = uStack_1f0 >> 0x10;
                        uStack_1f0 = CONCAT62(uStack_1f0._2_6_,0x2a);
                        uStack_1f0 = CONCAT44(puVar18[2],uStack_1f0);
                        uStack_1c0._4_4_ = uStack_1c0 >> 0x20;
                        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,0xc);
                        piStack_1c8 = &uStack_1f0;
                        iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_1c8,&puStack_1d8,1,0x14);
                        if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                           (iVar10 = ___ratelimit(obj.ctrl_cmd_bye._rs,"ctrl_cmd_bye"), iVar10 != 0)) {
                            _printk(0x8000c24,"ctrl_cmd_bye",*puVar18,puVar18[1],puVar18[3],iVar9);
                        }
                        puVar18 = xa_find_after(puVar17 + 2,&uStack_1e0,0xffffffffffffffff,8);
                    }
                    break;
                case 4:
                    uVar4 = puVar13[1];
                    uVar8 = puVar13[2];
                    puVar15 = auStack_1f8;
                    if (uStack_200._4_4_ != _segment.ehdr) {
                        puVar15 = puVar13 + 4;
                    }
                    uVar5 = uStack_200._4_4_;
                    if (uStack_200._4_4_ != _segment.ehdr) {
                        uVar5 = puVar13[3];
                    }
                    puVar17 = sym.server_add(uVar4,uVar8,uVar5,*puVar15);
                    if (puVar17 != NULL) {
                        if (puVar17[2] == _segment.ehdr) {
                            iVar9 = sym.service_announce_new(0x80002d8,puVar17);
                            if (iVar9 < 0) {
                                uVar19 = 0x8000da4;
                                pcVar20 = "ctrl_cmd_new_server";
                                goto code_r0x080030b4;
                            }
                        }
                        else {
                            iVar9 = 0;
                        }
                        piVar22 = *0x80002e8;
                        iVar16 = uStack_200;
                        if (*0x80002e8 == 0x80002e8) break;
                        do {
                            if (((*(piVar22 + -3) == 0) || (*(piVar22 + -3) == uVar4)) &&
                               ((*(piVar22 + -0x14) == 0 || (*(piVar22 + -0x14) == uVar8)))) {
                                uStack_178 = 0;
                                uStack_170 = 0;
                                uStack_188 = 0;
                                uStack_180 = 0;
                                piStack_1c8 = piVar22 + -2;
                                uStack_198 = 0;
                                uStack_190 = 0;
                                uStack_1a8 = 0;
                                uStack_1a0 = 0;
                                uStack_1b8 = 0;
                                uStack_1b0 = 0;
                                uStack_1d0 = 0x14;
                                uStack_168 = CONCAT44(*puVar17,4);
                                uStack_160 = puVar17[1];
                                uStack_15c = puVar17[2];
                                uStack_1c0 = 0xc;
                                uStack_158 = puVar17[3];
                                puStack_1d8 = &uStack_168;
                                iVar10 = kernel_sendmsg(_segment.ehdr,&piStack_1c8,&puStack_1d8,1,0x14);
                                if (((iVar10 < 0) && (iVar10 != -0x13)) &&
                                   (iVar11 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar11 != 0)) {
                                    _printk(0x8000cc7,"lookup_notify",iVar10);
                                }
                            }
                            piVar22 = *piVar22;
                        } while (piVar22 != 0x80002e8);
code_r0x08002f60:
                        iVar16 = uStack_200;
                        if (-1 < iVar9) break;
                    }
                    goto code_r0x080030b8;
                case 5:
                    puVar15 = auStack_1f8;
                    if (uStack_200._4_4_ != _segment.ehdr) {
                        uVar8 = puVar13[3];
                        puVar15 = puVar13 + 4;
                    }
                    uVar4 = *puVar15;
                    puVar15 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8);
                    if (puVar15 == NULL) {
                        iVar16 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar16 = 0x30;
                        }
                        puVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                        if (puVar15 == NULL) goto code_r0x080030b8;
                        *puVar15 = uVar8;
                        puVar15[2] = 0;
                        puVar15[3] = 0;
                        puVar15[4] = 0;
                        puVar15[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar15,0xa20);
                    }
                    sym.server_del(puVar15,uVar4);
                    iVar16 = uStack_200;
                    break;
                case 6:
                    uVar8 = puVar13[1];
                    uVar4 = puVar13[2];
                    uStack_158 = 0;
                    uStack_168 = 0;
                    uStack_160 = 0;
                    uStack_15c = 0;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_188 = 0;
                    uStack_180 = 0;
                    puStack_1d8 = &uStack_168;
                    uStack_198 = 0;
                    uStack_190 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    piStack_1c8 = NULL;
                    uStack_1c0 = 0;
                    uStack_1e8 = 0;
                    uStack_1f0 = 0;
                    uStack_1d0 = 0x14;
                    piVar22 = *0x80002e8;
                    if ((uStack_200._4_4_ != _segment.ehdr) || (auStack_1f8[0] == uVar4)) {
                        while (piVar23 = piVar22, piVar23 != 0x80002e8) {
                            piVar22 = *piVar23;
                            if ((*(piVar23 + -0xc) == uVar8) && (*(piVar23 + -1) == uVar4)) {
                                uVar21 = __list_del_entry_valid(piVar23);
                                if ((uVar21 & 1) != 0) {
                                    iVar16 = *piVar23;
                                    piVar3 = piVar23[1];
                                    *(iVar16 + 8) = piVar3;
                                    *piVar3 = iVar16;
                                }
                                *piVar23 = -0x2152ffffffffff00;
                                piVar23[1] = -0x2152fffffffffede;
                                kfree(piVar23 + -3);
                            }
                        }
                        puVar15 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8);
                        if (puVar15 == NULL) {
                            iVar16 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar16 = 0x30;
                            }
                            puVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                            if (puVar15 != NULL) {
                                *puVar15 = uVar8;
                                puVar15[2] = 0;
                                puVar15[3] = 0;
                                puVar15[4] = 0;
                                puVar15[5] = 0;
                                xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar15,0xa20);
                                goto code_r0x08002ce8;
                            }
                        }
                        else {
code_r0x08002ce8:
                            sym.server_del(puVar15,uVar4);
                        }
                        uVar6 = _segment.ehdr;
                        uVar21 = _segment.ehdr & 0xffffffff;
                        puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar21);
                        if (puVar17 == NULL) {
                            iVar16 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar16 = 0x30;
                            }
                            puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                            iVar16 = uStack_200;
                            if (puVar17 == NULL) break;
                            *puVar17 = uVar6;
                            *(puVar17 + 2) = 0;
                            *(puVar17 + 4) = 0;
                            xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar21,puVar17,0xa20);
                        }
                        uStack_15c = 0;
                        uStack_158 = 0;
                        uStack_168 = CONCAT44(uVar8,6);
                        uStack_1e0 = 0;
                        uStack_160 = uVar4;
                        puVar18 = xa_find(puVar17 + 2,&uStack_1e0,0xffffffffffffffff,8);
                        iVar9 = 0;
                        if (puVar18 != NULL) {
                            do {
                                uStack_1e8 = puVar18[3];
                                uStack_1f0 = CONCAT62(uStack_1f0._2_6_,0x2a);
                                uStack_1f0 = CONCAT44(puVar18[2],uStack_1f0);
                                uStack_1c0 = CONCAT44(uStack_1c0._4_4_,0xc);
                                piStack_1c8 = &uStack_1f0;
                                iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_1c8,&puStack_1d8,1,0x14);
                                if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                   (iVar10 = ___ratelimit(obj.ctrl_cmd_del_client._rs,"ctrl_cmd_del_client"),
                                   iVar10 != 0)) {
                                    _printk(0x8000dd5,"ctrl_cmd_del_client",*puVar18,puVar18[1],puVar18[3],iVar9);
                                }
                                puVar18 = xa_find_after(puVar17 + 2,&uStack_1e0,0xffffffffffffffff,8);
                                iVar9 = 0;
                            } while (puVar18 != NULL);
                        }
                        goto code_r0x08002f60;
                    }
                    goto code_r0x080030b8;
                case 10:
                    uVar8 = puVar13[1];
                    uVar4 = puVar13[2];
                    uStack_1e0 = 0;
                    if (uStack_200._4_4_ == _segment.ehdr) {
                        iVar16 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar16 = 0x30;
                        }
                        puVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xdc0,0x28);
                        if (puVar15 != NULL) {
                            puVar1 = puVar15 + 6;
                            *(puVar15 + 2) = uStack_200;
                            puVar7 = *0x80002f0;
                            puVar15[4] = auStack_1f8[0];
                            *puVar15 = uVar8;
                            puVar15[1] = uVar4;
                            uVar21 = __list_add_valid(puVar1,puVar7);
                            if ((uVar21 & 1) != 0) {
                                *0x80002f0 = puVar1;
                                puVar15[6] = 0x80002e8;
                                puVar15[7] = 0;
                                *(puVar15 + 8) = puVar7;
                                *puVar7 = puVar1;
                            }
                            uStack_1f0 = 0;
                            iVar16 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_1f0,
                                             0xffffffffffffffff,8);
                            uVar21 = _segment.ehdr;
                            while (_segment.ehdr = uVar21, iVar16 != 0) {
                                uStack_1e0 = 0;
                                puVar15 = xa_find(iVar16 + 8,&uStack_1e0,0xffffffffffffffff,8);
                                while (puVar15 != NULL) {
                                    if ((uVar8 == 0) || (*puVar15 == uVar8)) {
                                        uVar5 = 0;
                                        if (uVar4 != 0) {
                                            uVar5 = puVar15[1];
                                        }
                                        if (uVar5 == uVar4) {
                                            uStack_178 = 0;
                                            uStack_170 = 0;
                                            uStack_188 = 0;
                                            uStack_180 = 0;
                                            uStack_198 = 0;
                                            uStack_190 = 0;
                                            uStack_1a8 = 0;
                                            uStack_1a0 = 0;
                                            uStack_1b8 = 0;
                                            uStack_1b0 = 0;
                                            uStack_1d0 = 0x14;
                                            *puVar24 = 0;
                                            puVar24[1] = 0;
                                            uStack_168 = CONCAT44(*puVar15,4);
                                            uStack_160 = puVar15[1];
                                            uStack_15c = puVar15[2];
                                            uStack_158 = puVar15[3];
                                            piStack_1c8 = &uStack_200;
                                            uStack_1c0 = 0xc;
                                            puStack_1d8 = &uStack_168;
                                            iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_1c8,&puStack_1d8,1,0x14);
                                            if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                               (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"),
                                               iVar10 != 0)) {
                                                _printk(0x8000cc7,"lookup_notify",iVar9);
                                            }
                                        }
                                    }
                                    puVar15 = xa_find_after(iVar16 + 8,&uStack_1e0,0xffffffffffffffff,8);
                                }
                                iVar16 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,
                                                       &uStack_1f0,0xffffffffffffffff,8);
                                uVar21 = _segment.ehdr;
                            }
                            uStack_168._4_4_ = uStack_168 >> 0x20;
                            uStack_168 = CONCAT44(uStack_168._4_4_,4);
                            piStack_1c8 = &uStack_200;
                            uStack_178 = 0;
                            uStack_170 = 0;
                            uStack_188 = 0;
                            uStack_180 = 0;
                            uStack_198 = 0;
                            uStack_190 = 0;
                            uStack_1a8 = 0;
                            uStack_1a0 = 0;
                            uStack_1b8 = 0;
                            uStack_1b0 = 0;
                            uStack_1d0 = 0x14;
                            *puVar24 = 0;
                            puVar24[1] = 0;
                            uStack_1c0 = 0xc;
                            puStack_1d8 = &uStack_168;
                            iVar9 = kernel_sendmsg(uVar21,&piStack_1c8,&puStack_1d8,1,0x14);
                            iVar16 = uStack_200;
                            if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                               (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar16 = uStack_200,
                               iVar10 != 0)) {
                                _printk(0x8000cc7,"lookup_notify",iVar9);
                                iVar16 = uStack_200;
                            }
                            break;
                        }
                    }
code_r0x080030b8:
                    _printk(0x8000a99,"qrtr_ns_worker",uStack_200._4_4_,auStack_1f8[0]);
                    iVar16 = uStack_200;
                    break;
                case 0xb:
                    if (*0x80002e8 != 0x80002e8) {
                        uVar8 = puVar13[1];
                        uVar4 = puVar13[2];
                        piVar22 = *0x80002e8;
                        do {
                            piVar23 = *piVar22;
                            if ((((*(piVar22 + -0xc) == uStack_200._4_4_) && (*(piVar22 + -1) == auStack_1f8[0])) &&
                                (*(piVar22 + -3) == uVar8)) &&
                               ((*(piVar22 + -0x14) == 0 || (*(piVar22 + -0x14) == uVar4)))) {
                                uVar21 = __list_del_entry_valid(piVar22);
                                if ((uVar21 & 1) != 0) {
                                    iVar16 = *piVar22;
                                    piVar3 = piVar22[1];
                                    *(iVar16 + 8) = piVar3;
                                    *piVar3 = iVar16;
                                }
                                *piVar22 = -0x2152ffffffffff00;
                                piVar22[1] = -0x2152fffffffffede;
                                kfree(piVar22 + -3);
                            }
                            piVar22 = piVar23;
                            iVar16 = uStack_200;
                        } while (piVar23 != 0x80002e8);
                    }
                }
                uStack_200 = iVar16;
                uStack_268 = 0x1000;
                puStack_270 = puVar13;
                iVar9 = kernel_recvmsg(_segment.ehdr,&puStack_260,&puStack_270,1,0x1000,0x40);
            } while (iVar9 != -0xb);
        }
        uVar21 = kfree(puVar13);
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_150) {
        return uVar21;
    }
    __stack_chk_fail();
    uVar25 = tpidr_el2;
    *extraout_x18_00 = 0x8003194;
    uVar21 = kthread_queue_work(in_tmp_ldXn,0x80002f8,0x8000330);
    return uVar21;
}


// ===== sym.__traceiter_qrtr_ns_server_add.cfi_jt @ 0x080012b0 (size 8) =====

ulong sym.__traceiter_qrtr_ns_server_add.cfi_jt(ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8003d88;
    piVar1 = *0x8003d88;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_qrtr_ns_service_announce_del.cfi_jt @ 0x080012b8 (size 8) =====

ulong sym.__traceiter_qrtr_ns_service_announce_del.cfi_jt
                (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8003d40;
    piVar1 = *0x8003d40;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_qrtr_ns_service_announce_new.cfi_jt @ 0x080012c0 (size 8) =====

ulong sym.__traceiter_qrtr_ns_service_announce_new.cfi_jt
                (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8003cf8;
    piVar1 = *0x8003cf8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x080012c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.trace_raw_output_qrtr_ns_service_announce_del.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x080012d0 (size 8) =====

void sym.trace_raw_output_qrtr_ns_service_announce_del.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
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
        trace_event_printf(param_1,"advertising removal of server [%d:%x]@[%d:%d]\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qrtr_ns_service_announce_new.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x080012d8 (size 8) =====

void sym.trace_raw_output_qrtr_ns_service_announce_new.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
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
        trace_event_printf(param_1,"advertising new server [%d:%x]@[%d:%d]\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qrtr_ns_server_add.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x080012e0 (size 8) =====

void sym.trace_raw_output_qrtr_ns_server_add.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
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
        trace_event_printf(param_1,"add server [%d:%x]@[%d:%d]\n",*(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),
                           *(iVar2 + 0x14));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qrtr_ns_message.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x080012e8 (size 8) =====

void sym.trace_raw_output_qrtr_ns_message.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
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
        trace_event_printf(param_1,"%s from %d:%d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.qrtr_ns_remove.cfi_jt @ 0x080012f0 (size 8) =====

void sym.qrtr_ns_remove.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kthread_flush_worker(0x80002f8);
    kthread_stop(*0x8000358);
    sock_release(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt);
    return;
}


// ===== sym.__traceiter_qrtr_ns_message.cfi_jt @ 0x080012f8 (size 8) =====

ulong sym.__traceiter_qrtr_ns_message.cfi_jt(ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8003dd0;
    piVar1 = *0x8003dd0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__bpf_trace_qrtr_ns_message.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001300 (size 8) =====

void sym.__bpf_trace_qrtr_ns_message.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.trace_event_raw_event_qrtr_ns_message.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001308 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.trace_event_raw_event_qrtr_ns_message.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
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
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(param_1 + 0x48);
    uVar11 = param_4;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar10 = param_3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar11 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(param_1), (uVar8 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar7 = strlen(pcVar2);
    puVar10 = iVar7 + 1 + 0x14;
    iVar9 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar7 + 1) * 0x10000 | 0x14;
        strcpy(iVar9 + 0x14,pcVar2);
        *(iVar9 + 0xc) = param_3;
        *(iVar9 + 0x10) = param_4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x08001c98:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    uVar8 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_qrtr_ns_message;
    pcStack_d8 = sym.perf_trace_qrtr_ns_message;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar13._8_8_ != NULL) {
        pcVar2 = auVar13._8_8_;
    }
    iStack_e8 = *(iVar9 + 0x5e0);
    uVar5 = uVar11;
    uVar6 = SUB84(puVar10,0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar7 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_f4;
        iVar3 = (iVar7 + 0x20U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_f0,puVar10);
        if (iVar9 != 0) {
            uVar11 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar11) & 0x8001cd0;
            *(iStack_f0 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10014;
            strcpy(iVar9 + 0x14,pcVar2);
            puVar10 = uStack_f4;
            param_5 = 1;
            *(iVar9 + 0xc) = uVar6;
            *(iVar9 + 0x10) = uVar5;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar10,uVar8,1,iStack_f0,piVar1,0);
            uVar11 = uVar8;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_e8) {
        auVar13 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar11 & 0xffffffff
                       ,param_5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qrtr_ns_message.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001310 (size 8) =====

void sym.perf_trace_qrtr_ns_message.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    uint uVar6;
    uint uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar11 [16];
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_68 = *(iVar9 + 0x5e0);
    uVar6 = param_4;
    uVar7 = SUB84(param_3,0);
    iStack_70 = 0;
    uStack_74 = 0;
    iVar8 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_74;
        iVar4 = (iVar8 + 0x20U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_70,param_3);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10014;
            strcpy(iVar9 + 0x14,pcVar2);
            param_3 = uStack_74;
            param_5 = 1;
            *(iVar9 + 0xc) = uVar7;
            *(iVar9 + 0x10) = uVar6;
            perf_trace_run_bpf_submit(iVar9,iVar4,param_3,param_1,1,iStack_70,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    auVar11 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8001e48;
    bpf_trace_run4(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,param_3 & 0xffffffff,param_4 & 0xffffffff,
                   param_5 & 0xffffffff);
    return;
}


// ===== sym.kthread_worker_fn.cfi_jt @ 0x08001318 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.kthread_worker_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.perf_trace_qrtr_ns_service_announce_del.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001320 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.perf_trace_qrtr_ns_service_announce_del.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t unaff_x30;
    uchar auVar23 [12];
    uchar auVar24 [16];
    uchar auStack_260 [12];
    uint32_t uStack_254;
    int64_t iStack_250;
    int64_t iStack_248;
    ulong **ppuStack_240;
    code *pcStack_238;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    ulong uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uVar17 = param_5 & 0xffffffff;
    uVar18 = param_4 & 0xffffffff;
    uVar19 = param_3 & 0xffffffff;
    uVar21 = param_2;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(param_1 + 0x78);
    uVar13 = param_4;
    uVar14 = param_5;
    if ((*(param_1 + 0x80) != 0) || (puVar11 = param_3, *piVar1 != 0)) {
        puVar11 = &uStack_64;
        iVar9 = perf_trace_buf_alloc(0x1c,&iStack_60);
        uVar16 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar11 = uStack_64;
            uVar16 = -1L << (uVar16 & 0x3f);
            uVar14 = 1;
            uVar13 = (~uVar16 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar13 = uVar16 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = auStack_70;
            *(iStack_60 + 0x100) = uVar13;
            *(iStack_60 + 0x108) = 5;
            *(iVar9 + 8) = param_2;
            *(iVar9 + 0xc) = param_3;
            *(iVar9 + 0x10) = param_4;
            *(iVar9 + 0x14) = param_5;
            uVar13 = param_1;
            perf_trace_run_bpf_submit(iVar9,0x1c);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar10 = auVar23._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800199c;
    uStack_a8 = 0x800199c;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar20 = *(iVar10 + 0x48);
    uVar16 = uVar13;
    uVar15 = uVar14;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_98 = uVar21;
    uStack_90 = uVar19;
    uStack_88 = uVar18;
    uStack_80 = uVar17;
    uStack_78 = param_1;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar10), (uVar17 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar12 = 0x18;
        iVar9 = trace_event_buffer_reserve(&uStack_e8,iVar10);
        if (iVar9 != 0) {
            *(iVar9 + 8) = auVar23._8_4_;
            *(iVar9 + 0xc) = puVar11;
            *(iVar9 + 0x10) = uVar13;
            *(iVar9 + 0x14) = uVar14;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar17 = auVar24._0_8_;
    *extraout_x18_00 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_138 = sym.perf_trace_qrtr_ns_server_add;
    iVar9 = sp_el0;
    iStack_148 = *(iVar9 + 0x5e0);
    uVar18 = uVar15 & 0xffffffff;
    uVar19 = uVar16 & 0xffffffff;
    uVar21 = puVar12 & 0xffffffff;
    uVar22 = auVar24._8_8_ & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar17 + 0x78);
    uVar13 = uVar16;
    uVar14 = uVar15;
    ppuStack_140 = &puStack_b0;
    if ((*(uVar17 + 0x80) != 0) || (puVar11 = puVar12, *piVar1 != 0)) {
        puVar11 = &uStack_154;
        iVar9 = perf_trace_buf_alloc(0x1c,&iStack_150);
        uVar7 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_150 + 0xe8) = &ppuStack_140;
            puVar11 = uStack_154;
            uVar14 = 1;
            *(iStack_150 + 0xf8) = auStack_160;
            *(iStack_150 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8001a84;
            *(iStack_150 + 0x108) = 5;
            *(iVar9 + 8) = auVar24._8_4_;
            *(iVar9 + 0xc) = puVar12;
            *(iVar9 + 0x10) = uVar16;
            *(iVar9 + 0x14) = uVar15;
            uVar13 = uVar17;
            perf_trace_run_bpf_submit(iVar9,0x1c,puVar11,uVar17,1,iStack_150,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_148) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar10 = auVar24._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_01 = 0x8001bb4;
    uStack_198 = 0x8001bb4;
    iVar9 = sp_el0;
    iStack_1a8 = *(iVar9 + 0x5e0);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar20 = *(iVar10 + 0x48);
    uVar16 = uVar13;
    ppuStack_1a0 = &ppuStack_140;
    uStack_190 = uVar22;
    uStack_180 = uVar21;
    uStack_178 = uVar19;
    uStack_170 = uVar18;
    uStack_168 = uVar17;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 && (uVar17 = trace_event_ignore_this_pid(iVar10), (uVar17 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar2 = auVar24._8_8_;
    }
    iVar8 = strlen(pcVar2);
    puVar12 = iVar8 + 1 + 0x14;
    iVar9 = trace_event_buffer_reserve(&uStack_1d8,iVar10);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar8 + 1) * 0x10000 | 0x14;
        strcpy(iVar9 + 0x14,pcVar2);
        *(iVar9 + 0xc) = puVar11;
        *(iVar9 + 0x10) = uVar13;
        trace_event_buffer_commit(&uStack_1d8);
    }
code_r0x08001c98:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar13 = auVar24._0_8_;
    *extraout_x18_02 = sym.perf_trace_qrtr_ns_message;
    pcStack_238 = sym.perf_trace_qrtr_ns_message;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar2 = auVar24._8_8_;
    }
    iStack_248 = *(iVar9 + 0x5e0);
    uVar5 = uVar16;
    uVar6 = SUB84(puVar12,0);
    iStack_250 = 0;
    uStack_254 = 0;
    ppuStack_240 = &ppuStack_1a0;
    iVar8 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_254;
        iVar3 = (iVar8 + 0x20U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_250,puVar12);
        if (iVar9 != 0) {
            uVar14 = _trace_event_raw_init & 0x3f;
            *(iStack_250 + 0xe8) = &ppuStack_240;
            *(iStack_250 + 0xf8) = auStack_260;
            *(iStack_250 + 0x100) = ~(-1L << uVar14) & 0x8001cd0;
            *(iStack_250 + 0x108) = 5;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10014;
            strcpy(iVar9 + 0x14,pcVar2);
            puVar12 = uStack_254;
            uVar14 = 1;
            *(iVar9 + 0xc) = uVar6;
            *(iVar9 + 0x10) = uVar5;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar12,uVar13,1,iStack_250,piVar1,0);
            uVar16 = uVar13;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_248) {
        auVar24 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_03 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar16 & 0xffffffff
                       ,uVar14 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qrtr_ns_server_add.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001328 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.perf_trace_qrtr_ns_server_add.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    uint64_t unaff_x30;
    uchar auVar20 [16];
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
    uint64_t uStack_a0;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar15 = param_5 & 0xffffffff;
    uVar16 = param_4 & 0xffffffff;
    uVar17 = param_3 & 0xffffffff;
    uVar19 = param_2;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(param_1 + 0x78);
    uVar12 = param_4;
    uVar13 = param_5;
    if ((*(param_1 + 0x80) != 0) || (puVar10 = param_3, *piVar1 != 0)) {
        puVar10 = &uStack_64;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_60);
        uVar14 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar10 = uStack_64;
            uVar14 = -1L << (uVar14 & 0x3f);
            uVar13 = 1;
            uVar12 = (~uVar14 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar14 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = auStack_70;
            *(iStack_60 + 0x100) = uVar12;
            *(iStack_60 + 0x108) = 5;
            *(iVar8 + 8) = param_2;
            *(iVar8 + 0xc) = param_3;
            *(iVar8 + 0x10) = param_4;
            *(iVar8 + 0x14) = param_5;
            uVar12 = param_1;
            perf_trace_run_bpf_submit(iVar8,0x1c,puVar10,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar9 = auVar20._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x8001bb4;
    uStack_a8 = 0x8001bb4;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar18 = *(iVar9 + 0x48);
    uVar14 = uVar12;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar19;
    uStack_90 = uVar17;
    uStack_88 = uVar16;
    uStack_80 = uVar15;
    uStack_78 = param_1;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar18 >> 6 & 1) != 0) ||
           (((uVar18 >> 9 & 1) != 0 && (uVar15 = trace_event_ignore_this_pid(iVar9), (uVar15 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar20._8_8_ != NULL) {
        pcVar2 = auVar20._8_8_;
    }
    iVar7 = strlen(pcVar2);
    puVar11 = iVar7 + 1 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_e8,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar7 + 1) * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar2);
        *(iVar8 + 0xc) = puVar10;
        *(iVar8 + 0x10) = uVar12;
        trace_event_buffer_commit(&uStack_e8);
    }
code_r0x08001c98:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    uVar12 = auVar20._0_8_;
    *extraout_x18_00 = sym.perf_trace_qrtr_ns_message;
    pcStack_148 = sym.perf_trace_qrtr_ns_message;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar20._8_8_ != NULL) {
        pcVar2 = auVar20._8_8_;
    }
    iStack_158 = *(iVar8 + 0x5e0);
    uVar5 = uVar14;
    uVar6 = SUB84(puVar11,0);
    iStack_160 = 0;
    uStack_164 = 0;
    ppuStack_150 = &puStack_b0;
    iVar7 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &uStack_164;
        iVar3 = (iVar7 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&iStack_160,puVar11);
        if (iVar8 != 0) {
            uVar13 = _trace_event_raw_init & 0x3f;
            *(iStack_160 + 0xe8) = &ppuStack_150;
            *(iStack_160 + 0xf8) = auStack_170;
            *(iStack_160 + 0x100) = ~(-1L << uVar13) & 0x8001cd0;
            *(iStack_160 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar2);
            puVar11 = uStack_164;
            uVar13 = 1;
            *(iVar8 + 0xc) = uVar6;
            *(iVar8 + 0x10) = uVar5;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar11,uVar12,1,iStack_160,piVar1,0);
            uVar14 = uVar12;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_158) {
        auVar20 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_01 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,puVar11 & 0xffffffff,uVar14 & 0xffffffff
                       ,uVar13 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qrtr_ns_service_announce_new.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001330 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001940)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.perf_trace_qrtr_ns_service_announce_new.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong uVar25;
    uint64_t unaff_x30;
    uchar auVar26 [12];
    uchar auVar27 [16];
    uchar auStack_350 [12];
    uint32_t uStack_344;
    int64_t iStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    code *pcStack_328;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    ulong uStack_288;
    uint64_t uStack_280;
    uint64_t uStack_270;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uchar auStack_250 [12];
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    ulong **ppuStack_230;
    code *pcStack_228;
    code *pcStack_220;
    ulong uStack_210;
    int64_t iStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    ulong uStack_198;
    int64_t *piStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    uVar16 = param_5 & 0xffffffff;
    uVar17 = param_4 & 0xffffffff;
    uVar18 = param_3 & 0xffffffff;
    uVar22 = param_2;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(param_1 + 0x78);
    uVar12 = param_4;
    uVar13 = param_5;
    if ((*(param_1 + 0x80) != 0) || (puVar9 = param_3, *piVar1 != 0)) {
        puVar9 = &uStack_64;
        iVar7 = perf_trace_buf_alloc(0x1c,&iStack_60);
        uVar15 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar9 = uStack_64;
            uVar15 = -1L << (uVar15 & 0x3f);
            uVar13 = 1;
            uVar12 = (~uVar15 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar15 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = auStack_70;
            *(iStack_60 + 0x100) = uVar12;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 8) = param_2;
            *(iVar7 + 0xc) = param_3;
            *(iVar7 + 0x10) = param_4;
            *(iVar7 + 0x14) = param_5;
            uVar12 = param_1;
            perf_trace_run_bpf_submit(iVar7,0x1c);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18 = 0x8001784;
    uStack_a8 = 0x8001784;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar21 = *(iVar8 + 0x48);
    uVar15 = uVar12;
    uVar14 = uVar13;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_98 = uVar22;
    uStack_90 = uVar18;
    uStack_88 = uVar17;
    uStack_80 = uVar16;
    uStack_78 = param_1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar10 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar8), (uVar16 & 1) == 0))))
        goto code_r0x08001810;
    }
    else {
code_r0x08001810:
        puVar10 = 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_e8,iVar8);
        if (iVar7 != 0) {
            *(iVar7 + 8) = auVar26._8_4_;
            *(iVar7 + 0xc) = puVar9;
            *(iVar7 + 0x10) = uVar12;
            *(iVar7 + 0x14) = uVar13;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar16 = auVar27._0_8_;
    *extraout_x18_00 = sym.perf_trace_qrtr_ns_service_announce_del;
    pcStack_138 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar7 = sp_el0;
    iStack_148 = *(iVar7 + 0x5e0);
    uVar17 = uVar14 & 0xffffffff;
    uVar18 = uVar15 & 0xffffffff;
    uVar22 = puVar10 & 0xffffffff;
    uVar23 = auVar27._8_8_ & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar16 + 0x78);
    uVar12 = uVar15;
    uVar13 = uVar14;
    ppuStack_140 = &puStack_b0;
    if ((*(uVar16 + 0x80) != 0) || (puVar9 = puVar10, *piVar1 != 0)) {
        puVar9 = &uStack_154;
        iVar7 = perf_trace_buf_alloc(0x1c,&iStack_150);
        uVar19 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(iStack_150 + 0xe8) = &ppuStack_140;
            puVar9 = uStack_154;
            uVar13 = 1;
            *(iStack_150 + 0xf8) = auStack_160;
            *(iStack_150 + 0x100) = ~(-1L << (uVar19 & 0x3f)) & 0x800186c;
            *(iStack_150 + 0x108) = 5;
            *(iVar7 + 8) = auVar27._8_4_;
            *(iVar7 + 0xc) = puVar10;
            *(iVar7 + 0x10) = uVar15;
            *(iVar7 + 0x14) = uVar14;
            uVar12 = uVar16;
            perf_trace_run_bpf_submit(iVar7,0x1c);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_148) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar8 = auVar27._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_01 = 0x800199c;
    uStack_198 = 0x800199c;
    iVar7 = sp_el0;
    iStack_1a8 = *(iVar7 + 0x5e0);
    uVar19 = auVar27._8_8_ & 0xffffffff;
    uVar25 = *(iVar8 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar21 = uVar25;
    uVar15 = uVar12;
    uVar14 = uVar13;
    ppuStack_1a0 = &ppuStack_140;
    piStack_190 = piVar1;
    uStack_188 = uVar23;
    uStack_180 = uVar22;
    uStack_178 = uVar18;
    uStack_170 = uVar17;
    uStack_168 = uVar16;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar10 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar8), (uVar16 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar10 = 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_1d8,iVar8);
        if (iVar7 != 0) {
            *(iVar7 + 8) = auVar27._8_4_;
            *(iVar7 + 0xc) = puVar9;
            *(iVar7 + 0x10) = uVar12;
            *(iVar7 + 0x14) = uVar13;
            trace_event_buffer_commit(&uStack_1d8);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar18 = auVar27._0_8_;
    *extraout_x18_02 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_228 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_220 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar7 = sp_el0;
    iStack_238 = *(iVar7 + 0x5e0);
    uVar22 = uVar14 & 0xffffffff;
    uVar23 = uVar15 & 0xffffffff;
    uVar20 = puVar10 & 0xffffffff;
    uVar24 = auVar27._8_8_ & 0xffffffff;
    iStack_240 = 0;
    uStack_244 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar18 + 0x78);
    uVar16 = uVar15;
    uVar17 = uVar14;
    ppuStack_230 = &ppuStack_1a0;
    uStack_210 = uVar25;
    iStack_208 = iVar8;
    uStack_200 = uVar19;
    uStack_1f8 = puVar9 & 0xffffffff;
    uStack_1f0 = uVar12 & 0xffffffff;
    uStack_1e8 = uVar13 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_244;
        iVar7 = perf_trace_buf_alloc(0x1c,&iStack_240);
        uVar12 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(iStack_240 + 0xe8) = &ppuStack_230;
            puVar11 = uStack_244;
            uVar17 = 1;
            *(iStack_240 + 0xf8) = auStack_250;
            *(iStack_240 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x8001a84;
            *(iStack_240 + 0x108) = 5;
            *(iVar7 + 8) = auVar27._8_4_;
            *(iVar7 + 0xc) = puVar10;
            *(iVar7 + 0x10) = uVar15;
            *(iVar7 + 0x14) = uVar14;
            uVar16 = uVar18;
            perf_trace_run_bpf_submit(iVar7,0x1c,puVar11,uVar18,1,iStack_240,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_238) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar8 = auVar27._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_03 = 0x8001bb4;
    uStack_288 = 0x8001bb4;
    iVar7 = sp_el0;
    iStack_298 = *(iVar7 + 0x5e0);
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uVar21 = *(iVar8 + 0x48);
    uVar12 = uVar16;
    ppuStack_290 = &ppuStack_230;
    uStack_280 = uVar24;
    uStack_270 = uVar20;
    uStack_268 = uVar23;
    uStack_260 = uVar22;
    uStack_258 = uVar18;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = puVar11;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar8), (uVar13 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar27._8_8_ != NULL) {
        pcVar2 = auVar27._8_8_;
    }
    iVar6 = strlen(pcVar2);
    puVar9 = iVar6 + 1 + 0x14;
    iVar7 = trace_event_buffer_reserve(&uStack_2c8,iVar8);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        strcpy(iVar7 + 0x14,pcVar2);
        *(iVar7 + 0xc) = puVar11;
        *(iVar7 + 0x10) = uVar16;
        trace_event_buffer_commit(&uStack_2c8);
    }
code_r0x08001c98:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_298) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar13 = auVar27._0_8_;
    *extraout_x18_04 = sym.perf_trace_qrtr_ns_message;
    pcStack_328 = sym.perf_trace_qrtr_ns_message;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (auVar27._8_8_ != NULL) {
        pcVar2 = auVar27._8_8_;
    }
    iStack_338 = *(iVar7 + 0x5e0);
    uVar4 = uVar12;
    uVar5 = SUB84(puVar9,0);
    iStack_340 = 0;
    uStack_344 = 0;
    ppuStack_330 = &ppuStack_290;
    iVar6 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_344;
        iVar3 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_340,puVar9);
        if (iVar7 != 0) {
            uVar12 = _trace_event_raw_init & 0x3f;
            *(iStack_340 + 0xe8) = &ppuStack_330;
            *(iStack_340 + 0xf8) = auStack_350;
            *(iStack_340 + 0x100) = ~(-1L << uVar12) & 0x8001cd0;
            *(iStack_340 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,pcVar2);
            puVar9 = uStack_344;
            uVar17 = 1;
            *(iVar7 + 0xc) = uVar5;
            *(iVar7 + 0x10) = uVar4;
            perf_trace_run_bpf_submit(iVar7,iVar3,puVar9,uVar13,1,iStack_340,piVar1,0);
            uVar12 = uVar13;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_338) {
        auVar27 = __stack_chk_fail();
        uVar25 = tpidr_el2;
        *extraout_x18_05 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar27._0_8_,auVar27._8_8_ & 0xffffffff,puVar9 & 0xffffffff,uVar12 & 0xffffffff
                       ,uVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_qrtr_ns_service_announce_new.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001338 (size 8) =====

void sym.__bpf_trace_qrtr_ns_service_announce_new.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(param_1,param_2,param_3,param_4,param_5);
    return;
}


// ===== sym.trace_event_raw_event_qrtr_ns_service_announce_new.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001340 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001728)
//WARNING: Removing unreachable block (ram,0x08001940)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.trace_event_raw_event_qrtr_ns_service_announce_new.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auStack_3d0 [12];
    uint32_t uStack_3c4;
    int64_t iStack_3c0;
    int64_t iStack_3b8;
    ulong **ppuStack_3b0;
    code *pcStack_3a8;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    int64_t iStack_318;
    ulong **ppuStack_310;
    ulong uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    uchar auStack_2d0 [12];
    uint32_t uStack_2c4;
    int64_t iStack_2c0;
    int64_t iStack_2b8;
    ulong **ppuStack_2b0;
    code *pcStack_2a8;
    code *pcStack_2a0;
    ulong uStack_290;
    int64_t iStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    ulong uStack_218;
    int64_t *piStack_210;
    uint64_t uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    ulong uStack_1a0;
    int64_t iStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t *piStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar22 = *(param_1 + 0x48);
    uVar15 = param_4;
    uVar11 = param_5;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = param_3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(param_1), (uVar7 & 1) == 0))))
        goto code_r0x080015f8;
    }
    else {
code_r0x080015f8:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = param_2;
            *(iVar8 + 0xc) = param_3;
            *(iVar8 + 0x10) = param_4;
            *(iVar8 + 0x14) = param_5;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar10 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_qrtr_ns_service_announce_new;
    pcStack_c8 = sym.perf_trace_qrtr_ns_service_announce_new;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uVar17 = uVar11 & 0xffffffff;
    uVar18 = uVar15 & 0xffffffff;
    uVar19 = puVar12 & 0xffffffff;
    uVar23 = auVar26._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar10 + 0x78);
    uVar7 = uVar15;
    uVar16 = uVar11;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar10 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_e4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_e0);
        uVar20 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar13 = uStack_e4;
            uVar16 = 1;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x8001654;
            *(iStack_e0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar7 = uVar10;
            perf_trace_run_bpf_submit(iVar8,0x1c);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_00 = 0x8001784;
    uStack_128 = 0x8001784;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    uVar20 = auVar26._8_8_ & 0xffffffff;
    uVar25 = *(iVar9 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar22 = uVar25;
    uVar15 = uVar7;
    uVar11 = uVar16;
    ppuStack_130 = &puStack_d0;
    piStack_120 = piVar1;
    uStack_118 = uVar23;
    uStack_110 = uVar19;
    uStack_108 = uVar18;
    uStack_100 = uVar17;
    uStack_f8 = uVar10;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar9), (uVar10 & 1) == 0))))
        goto code_r0x08001810;
    }
    else {
code_r0x08001810:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_168,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar13;
            *(iVar8 + 0x10) = uVar7;
            *(iVar8 + 0x14) = uVar16;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar18 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_qrtr_ns_service_announce_del;
    pcStack_1b8 = sym.perf_trace_qrtr_ns_service_announce_del;
    pcStack_1b0 = sym.perf_trace_qrtr_ns_service_announce_new;
    iVar8 = sp_el0;
    iStack_1c8 = *(iVar8 + 0x5e0);
    uVar19 = uVar11 & 0xffffffff;
    uVar23 = uVar15 & 0xffffffff;
    uVar21 = puVar12 & 0xffffffff;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar18 + 0x78);
    uVar10 = uVar15;
    uVar17 = uVar11;
    ppuStack_1c0 = &ppuStack_130;
    uStack_1a0 = uVar25;
    iStack_198 = iVar9;
    uStack_190 = uVar20;
    uStack_188 = puVar13 & 0xffffffff;
    uStack_180 = uVar7 & 0xffffffff;
    uStack_178 = uVar16 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar14 = puVar12, *piVar1 != 0)) {
        puVar14 = &uStack_1d4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_1d0);
        uVar7 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_1d0 + 0xe8) = &ppuStack_1c0;
            puVar14 = uStack_1d4;
            uVar17 = 1;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x800186c;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar10 = uVar18;
            perf_trace_run_bpf_submit(iVar8,0x1c);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_02 = 0x800199c;
    uStack_218 = 0x800199c;
    iVar8 = sp_el0;
    iStack_228 = *(iVar8 + 0x5e0);
    uVar7 = auVar26._8_8_ & 0xffffffff;
    uVar25 = *(iVar9 + 0x48);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar22 = uVar25;
    uVar15 = uVar10;
    uVar11 = uVar17;
    ppuStack_220 = &ppuStack_1c0;
    piStack_210 = piVar1;
    uStack_208 = uVar24;
    uStack_200 = uVar21;
    uStack_1f8 = uVar23;
    uStack_1f0 = uVar19;
    uStack_1e8 = uVar18;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar14;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar9), (uVar16 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_258,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar14;
            *(iVar8 + 0x10) = uVar10;
            *(iVar8 + 0x14) = uVar17;
            trace_event_buffer_commit(&uStack_258);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_228) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar19 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_2a8 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_2a0 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar8 = sp_el0;
    iStack_2b8 = *(iVar8 + 0x5e0);
    uVar23 = uVar11 & 0xffffffff;
    uVar20 = uVar15 & 0xffffffff;
    uVar21 = puVar12 & 0xffffffff;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iStack_2c0 = 0;
    uStack_2c4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar19 + 0x78);
    uVar16 = uVar15;
    uVar18 = uVar11;
    ppuStack_2b0 = &ppuStack_220;
    uStack_290 = uVar25;
    iStack_288 = iVar9;
    uStack_280 = uVar7;
    uStack_278 = puVar14 & 0xffffffff;
    uStack_270 = uVar10 & 0xffffffff;
    uStack_268 = uVar17 & 0xffffffff;
    if ((*(uVar19 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_2c4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_2c0);
        uVar7 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_2c0 + 0xe8) = &ppuStack_2b0;
            puVar13 = uStack_2c4;
            uVar18 = 1;
            *(iStack_2c0 + 0xf8) = auStack_2d0;
            *(iStack_2c0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8001a84;
            *(iStack_2c0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar16 = uVar19;
            perf_trace_run_bpf_submit(iVar8,0x1c,puVar13,uVar19,1,iStack_2c0,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_04 = 0x8001bb4;
    uStack_308 = 0x8001bb4;
    iVar8 = sp_el0;
    iStack_318 = *(iVar8 + 0x5e0);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar22 = *(iVar9 + 0x48);
    uVar15 = uVar16;
    ppuStack_310 = &ppuStack_2b0;
    uStack_300 = uVar24;
    uStack_2f0 = uVar21;
    uStack_2e8 = uVar20;
    uStack_2e0 = uVar23;
    uStack_2d8 = uVar19;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar11 = trace_event_ignore_this_pid(iVar9), (uVar11 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iVar6 = strlen(pcVar2);
    puVar12 = iVar6 + 1 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_348,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar2);
        *(iVar8 + 0xc) = puVar13;
        *(iVar8 + 0x10) = uVar16;
        trace_event_buffer_commit(&uStack_348);
    }
code_r0x08001c98:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_318) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar11 = auVar26._0_8_;
    *extraout_x18_05 = sym.perf_trace_qrtr_ns_message;
    pcStack_3a8 = sym.perf_trace_qrtr_ns_message;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iStack_3b8 = *(iVar8 + 0x5e0);
    uVar4 = uVar15;
    uVar5 = SUB84(puVar12,0);
    iStack_3c0 = 0;
    uStack_3c4 = 0;
    ppuStack_3b0 = &ppuStack_310;
    iVar6 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_3c4;
        iVar3 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&iStack_3c0,puVar12);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_3c0 + 0xe8) = &ppuStack_3b0;
            *(iStack_3c0 + 0xf8) = auStack_3d0;
            *(iStack_3c0 + 0x100) = ~(-1L << uVar15) & 0x8001cd0;
            *(iStack_3c0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar2);
            puVar12 = uStack_3c4;
            uVar18 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0x10) = uVar4;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar12,uVar11,1,iStack_3c0,piVar1,0);
            uVar15 = uVar11;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_3b8) {
        auVar26 = __stack_chk_fail();
        uVar25 = tpidr_el2;
        *extraout_x18_06 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar15 & 0xffffffff
                       ,uVar18 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qrtr_ns_server_add.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001348 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.trace_event_raw_event_qrtr_ns_server_add.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar21 = *(param_1 + 0x48);
    uVar16 = param_4;
    uVar13 = param_5;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar16 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar9 = trace_event_ignore_this_pid(param_1), (uVar9 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar14 = 0x18;
        iVar10 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar10 != 0) {
            *(iVar10 + 8) = param_2;
            *(iVar10 + 0xc) = param_3;
            *(iVar10 + 0x10) = param_4;
            *(iVar10 + 0x14) = param_5;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar11 = auVar23._0_8_;
    *extraout_x18 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_c8 = sym.perf_trace_qrtr_ns_server_add;
    iVar10 = sp_el0;
    iStack_d8 = *(iVar10 + 0x5e0);
    uVar18 = uVar13 & 0xffffffff;
    uVar19 = uVar16 & 0xffffffff;
    uVar20 = puVar14 & 0xffffffff;
    uVar22 = auVar23._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar11 + 0x78);
    uVar9 = uVar16;
    uVar17 = uVar13;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar11 + 0x80) != 0) || (puVar15 = puVar14, *piVar1 != 0)) {
        puVar15 = &uStack_e4;
        iVar10 = perf_trace_buf_alloc(0x1c,&iStack_e0);
        uVar7 = _trace_event_raw_init;
        if (iVar10 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar15 = uStack_e4;
            uVar17 = 1;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8001a84;
            *(iStack_e0 + 0x108) = 5;
            *(iVar10 + 8) = auVar23._8_4_;
            *(iVar10 + 0xc) = puVar14;
            *(iVar10 + 0x10) = uVar16;
            *(iVar10 + 0x14) = uVar13;
            uVar9 = uVar11;
            perf_trace_run_bpf_submit(iVar10,0x1c,puVar15,uVar11,1,iStack_e0,piVar1,0);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar12 = auVar23._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_00 = 0x8001bb4;
    uStack_128 = 0x8001bb4;
    iVar10 = sp_el0;
    iStack_138 = *(iVar10 + 0x5e0);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar21 = *(iVar12 + 0x48);
    uVar16 = uVar9;
    ppuStack_130 = &puStack_d0;
    uStack_120 = uVar22;
    uStack_110 = uVar20;
    uStack_108 = uVar19;
    uStack_100 = uVar18;
    uStack_f8 = uVar11;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar23._8_8_ != NULL) {
        pcVar2 = auVar23._8_8_;
    }
    iVar8 = strlen(pcVar2);
    puVar14 = iVar8 + 1 + 0x14;
    iVar10 = trace_event_buffer_reserve(&uStack_168,iVar12);
    if (iVar10 != 0) {
        *(iVar10 + 8) = (iVar8 + 1) * 0x10000 | 0x14;
        strcpy(iVar10 + 0x14,pcVar2);
        *(iVar10 + 0xc) = puVar15;
        *(iVar10 + 0x10) = uVar9;
        trace_event_buffer_commit(&uStack_168);
    }
code_r0x08001c98:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_138) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar13 = auVar23._0_8_;
    *extraout_x18_01 = sym.perf_trace_qrtr_ns_message;
    pcStack_1c8 = sym.perf_trace_qrtr_ns_message;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (auVar23._8_8_ != NULL) {
        pcVar2 = auVar23._8_8_;
    }
    iStack_1d8 = *(iVar10 + 0x5e0);
    uVar5 = uVar16;
    uVar6 = SUB84(puVar14,0);
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    ppuStack_1d0 = &ppuStack_130;
    iVar8 = strlen(pcVar2);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar14 = &uStack_1e4;
        iVar3 = (iVar8 + 0x20U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar3,&iStack_1e0,puVar14);
        if (iVar10 != 0) {
            uVar16 = _trace_event_raw_init & 0x3f;
            *(iStack_1e0 + 0xe8) = &ppuStack_1d0;
            *(iStack_1e0 + 0xf8) = auStack_1f0;
            *(iStack_1e0 + 0x100) = ~(-1L << uVar16) & 0x8001cd0;
            *(iStack_1e0 + 0x108) = 5;
            *(iVar10 + 8) = iVar8 * 0x10000 + 0x10014;
            strcpy(iVar10 + 0x14,pcVar2);
            puVar14 = uStack_1e4;
            uVar17 = 1;
            *(iVar10 + 0xc) = uVar6;
            *(iVar10 + 0x10) = uVar5;
            perf_trace_run_bpf_submit(iVar10,iVar3,puVar14,uVar13,1,iStack_1e0,piVar1,0);
            uVar16 = uVar13;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_1d8) {
        auVar23 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_02 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar14 & 0xffffffff,uVar16 & 0xffffffff
                       ,uVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_qrtr_ns_server_add.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001350 (size 8) =====

void sym.__bpf_trace_qrtr_ns_server_add.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(param_1,param_2,param_3,param_4,param_5);
    return;
}


// ===== sym.__bpf_trace_qrtr_ns_service_announce_del.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001358 (size 8) =====

void sym.__bpf_trace_qrtr_ns_service_announce_del.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(param_1,param_2,param_3,param_4,param_5);
    return;
}


// ===== sym.trace_event_raw_event_qrtr_ns_service_announce_del.6f5da6878d0fb727712a6154d8620cf4.cfi_jt @ 0x08001360 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001940)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.trace_event_raw_event_qrtr_ns_service_announce_del.6f5da6878d0fb727712a6154d8620cf4.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auStack_2e0 [12];
    uint32_t uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong **ppuStack_2c0;
    code *pcStack_2b8;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    ulong uStack_218;
    uint64_t uStack_210;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    ulong uStack_1a0;
    int64_t iStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t *piStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar22 = *(param_1 + 0x48);
    uVar15 = param_4;
    uVar11 = param_5;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = param_3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(param_1), (uVar7 & 1) == 0))))
        goto code_r0x08001810;
    }
    else {
code_r0x08001810:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = param_2;
            *(iVar8 + 0xc) = param_3;
            *(iVar8 + 0x10) = param_4;
            *(iVar8 + 0x14) = param_5;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar10 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_qrtr_ns_service_announce_del;
    pcStack_c8 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uVar17 = uVar11 & 0xffffffff;
    uVar18 = uVar15 & 0xffffffff;
    uVar19 = puVar12 & 0xffffffff;
    uVar23 = auVar26._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar10 + 0x78);
    uVar7 = uVar15;
    uVar16 = uVar11;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar10 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_e4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_e0);
        uVar20 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar13 = uStack_e4;
            uVar16 = 1;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x800186c;
            *(iStack_e0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar7 = uVar10;
            perf_trace_run_bpf_submit(iVar8,0x1c);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_00 = 0x800199c;
    uStack_128 = 0x800199c;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    uVar20 = auVar26._8_8_ & 0xffffffff;
    uVar25 = *(iVar9 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar22 = uVar25;
    uVar15 = uVar7;
    uVar11 = uVar16;
    ppuStack_130 = &puStack_d0;
    piStack_120 = piVar1;
    uStack_118 = uVar23;
    uStack_110 = uVar19;
    uStack_108 = uVar18;
    uStack_100 = uVar17;
    uStack_f8 = uVar10;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar9), (uVar10 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_168,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar13;
            *(iVar8 + 0x10) = uVar7;
            *(iVar8 + 0x14) = uVar16;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar18 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_1b8 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_1b0 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar8 = sp_el0;
    iStack_1c8 = *(iVar8 + 0x5e0);
    uVar19 = uVar11 & 0xffffffff;
    uVar23 = uVar15 & 0xffffffff;
    uVar21 = puVar12 & 0xffffffff;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar18 + 0x78);
    uVar10 = uVar15;
    uVar17 = uVar11;
    ppuStack_1c0 = &ppuStack_130;
    uStack_1a0 = uVar25;
    iStack_198 = iVar9;
    uStack_190 = uVar20;
    uStack_188 = puVar13 & 0xffffffff;
    uStack_180 = uVar7 & 0xffffffff;
    uStack_178 = uVar16 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar14 = puVar12, *piVar1 != 0)) {
        puVar14 = &uStack_1d4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_1d0);
        uVar7 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_1d0 + 0xe8) = &ppuStack_1c0;
            puVar14 = uStack_1d4;
            uVar17 = 1;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8001a84;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar10 = uVar18;
            perf_trace_run_bpf_submit(iVar8,0x1c,puVar14,uVar18,1,iStack_1d0,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_02 = 0x8001bb4;
    uStack_218 = 0x8001bb4;
    iVar8 = sp_el0;
    iStack_228 = *(iVar8 + 0x5e0);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar22 = *(iVar9 + 0x48);
    uVar15 = uVar10;
    ppuStack_220 = &ppuStack_1c0;
    uStack_210 = uVar24;
    uStack_200 = uVar21;
    uStack_1f8 = uVar23;
    uStack_1f0 = uVar19;
    uStack_1e8 = uVar18;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar14;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar11 = trace_event_ignore_this_pid(iVar9), (uVar11 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iVar6 = strlen(pcVar2);
    puVar12 = iVar6 + 1 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_258,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar2);
        *(iVar8 + 0xc) = puVar14;
        *(iVar8 + 0x10) = uVar10;
        trace_event_buffer_commit(&uStack_258);
    }
code_r0x08001c98:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_228) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar11 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_qrtr_ns_message;
    pcStack_2b8 = sym.perf_trace_qrtr_ns_message;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iStack_2c8 = *(iVar8 + 0x5e0);
    uVar4 = uVar15;
    uVar5 = SUB84(puVar12,0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    ppuStack_2c0 = &ppuStack_220;
    iVar6 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_2d4;
        iVar3 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&iStack_2d0,puVar12);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_2d0 + 0xe8) = &ppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << uVar15) & 0x8001cd0;
            *(iStack_2d0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar2);
            puVar12 = uStack_2d4;
            uVar17 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0x10) = uVar4;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar12,uVar11,1,iStack_2d0,piVar1,0);
            uVar15 = uVar11;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_2c8) {
        auVar26 = __stack_chk_fail();
        uVar25 = tpidr_el2;
        *extraout_x18_04 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar15 & 0xffffffff
                       ,uVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__traceiter_qrtr_ns_service_announce_new @ 0x08001368 (size 128) =====

ulong sym.__traceiter_qrtr_ns_service_announce_new(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8003cf8 != NULL) {
        piVar1 = *0x8003cf8;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_qrtr_ns_service_announce_del @ 0x080013f0 (size 128) =====

ulong sym.__traceiter_qrtr_ns_service_announce_del(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8003d40 != NULL) {
        piVar1 = *0x8003d40;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_qrtr_ns_server_add @ 0x08001478 (size 128) =====

ulong sym.__traceiter_qrtr_ns_server_add(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8003d88 != NULL) {
        piVar1 = *0x8003d88;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_qrtr_ns_message @ 0x08001500 (size 112) =====

ulong sym.__traceiter_qrtr_ns_message(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8003dd0 != NULL) {
        piVar1 = *0x8003dd0;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_qrtr_ns_service_announce_new @ 0x08001578 (size 220) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001728)
//WARNING: Removing unreachable block (ram,0x08001940)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.trace_event_raw_event_qrtr_ns_service_announce_new(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    uint64_t in_x4;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auStack_3d0 [12];
    uint32_t uStack_3c4;
    int64_t iStack_3c0;
    int64_t iStack_3b8;
    ulong **ppuStack_3b0;
    code *pcStack_3a8;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    int64_t iStack_318;
    ulong **ppuStack_310;
    ulong uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    uchar auStack_2d0 [12];
    uint32_t uStack_2c4;
    int64_t iStack_2c0;
    int64_t iStack_2b8;
    ulong **ppuStack_2b0;
    code *pcStack_2a8;
    code *pcStack_2a0;
    ulong uStack_290;
    int64_t iStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    ulong uStack_218;
    int64_t *piStack_210;
    uint64_t uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    ulong uStack_1a0;
    int64_t iStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t *piStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar22 = *(arg1 + 0x48);
    uVar15 = arg4;
    uVar11 = in_x4;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = arg3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(arg1), (uVar7 & 1) == 0))))
        goto code_r0x080015f8;
    }
    else {
code_r0x080015f8:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = arg2;
            *(iVar8 + 0xc) = arg3;
            *(iVar8 + 0x10) = arg4;
            *(iVar8 + 0x14) = in_x4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar10 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_qrtr_ns_service_announce_new;
    pcStack_c8 = sym.perf_trace_qrtr_ns_service_announce_new;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uVar17 = uVar11 & 0xffffffff;
    uVar18 = uVar15 & 0xffffffff;
    uVar19 = puVar12 & 0xffffffff;
    uVar23 = auVar26._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar10 + 0x78);
    uVar7 = uVar15;
    uVar16 = uVar11;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar10 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_e4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_e0);
        uVar20 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar13 = uStack_e4;
            uVar16 = 1;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x8001654;
            *(iStack_e0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar7 = uVar10;
            perf_trace_run_bpf_submit(iVar8,0x1c);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_00 = 0x8001784;
    uStack_128 = 0x8001784;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    uVar20 = auVar26._8_8_ & 0xffffffff;
    uVar25 = *(iVar9 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar22 = uVar25;
    uVar15 = uVar7;
    uVar11 = uVar16;
    ppuStack_130 = &puStack_d0;
    piStack_120 = piVar1;
    uStack_118 = uVar23;
    uStack_110 = uVar19;
    uStack_108 = uVar18;
    uStack_100 = uVar17;
    uStack_f8 = uVar10;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar9), (uVar10 & 1) == 0))))
        goto code_r0x08001810;
    }
    else {
code_r0x08001810:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_168,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar13;
            *(iVar8 + 0x10) = uVar7;
            *(iVar8 + 0x14) = uVar16;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar18 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_qrtr_ns_service_announce_del;
    pcStack_1b8 = sym.perf_trace_qrtr_ns_service_announce_del;
    pcStack_1b0 = sym.perf_trace_qrtr_ns_service_announce_new;
    iVar8 = sp_el0;
    iStack_1c8 = *(iVar8 + 0x5e0);
    uVar19 = uVar11 & 0xffffffff;
    uVar23 = uVar15 & 0xffffffff;
    uVar21 = puVar12 & 0xffffffff;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar18 + 0x78);
    uVar10 = uVar15;
    uVar17 = uVar11;
    ppuStack_1c0 = &ppuStack_130;
    uStack_1a0 = uVar25;
    iStack_198 = iVar9;
    uStack_190 = uVar20;
    uStack_188 = puVar13 & 0xffffffff;
    uStack_180 = uVar7 & 0xffffffff;
    uStack_178 = uVar16 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar14 = puVar12, *piVar1 != 0)) {
        puVar14 = &uStack_1d4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_1d0);
        uVar7 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_1d0 + 0xe8) = &ppuStack_1c0;
            puVar14 = uStack_1d4;
            uVar17 = 1;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x800186c;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar10 = uVar18;
            perf_trace_run_bpf_submit(iVar8,0x1c);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_02 = 0x800199c;
    uStack_218 = 0x800199c;
    iVar8 = sp_el0;
    iStack_228 = *(iVar8 + 0x5e0);
    uVar7 = auVar26._8_8_ & 0xffffffff;
    uVar25 = *(iVar9 + 0x48);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar22 = uVar25;
    uVar15 = uVar10;
    uVar11 = uVar17;
    ppuStack_220 = &ppuStack_1c0;
    piStack_210 = piVar1;
    uStack_208 = uVar24;
    uStack_200 = uVar21;
    uStack_1f8 = uVar23;
    uStack_1f0 = uVar19;
    uStack_1e8 = uVar18;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar14;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar9), (uVar16 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_258,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar14;
            *(iVar8 + 0x10) = uVar10;
            *(iVar8 + 0x14) = uVar17;
            trace_event_buffer_commit(&uStack_258);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_228) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar19 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_2a8 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_2a0 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar8 = sp_el0;
    iStack_2b8 = *(iVar8 + 0x5e0);
    uVar23 = uVar11 & 0xffffffff;
    uVar20 = uVar15 & 0xffffffff;
    uVar21 = puVar12 & 0xffffffff;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iStack_2c0 = 0;
    uStack_2c4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar19 + 0x78);
    uVar16 = uVar15;
    uVar18 = uVar11;
    ppuStack_2b0 = &ppuStack_220;
    uStack_290 = uVar25;
    iStack_288 = iVar9;
    uStack_280 = uVar7;
    uStack_278 = puVar14 & 0xffffffff;
    uStack_270 = uVar10 & 0xffffffff;
    uStack_268 = uVar17 & 0xffffffff;
    if ((*(uVar19 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_2c4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_2c0);
        uVar7 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_2c0 + 0xe8) = &ppuStack_2b0;
            puVar13 = uStack_2c4;
            uVar18 = 1;
            *(iStack_2c0 + 0xf8) = auStack_2d0;
            *(iStack_2c0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8001a84;
            *(iStack_2c0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar16 = uVar19;
            perf_trace_run_bpf_submit(iVar8,0x1c,puVar13,uVar19,1,iStack_2c0,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_04 = 0x8001bb4;
    uStack_308 = 0x8001bb4;
    iVar8 = sp_el0;
    iStack_318 = *(iVar8 + 0x5e0);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar22 = *(iVar9 + 0x48);
    uVar15 = uVar16;
    ppuStack_310 = &ppuStack_2b0;
    uStack_300 = uVar24;
    uStack_2f0 = uVar21;
    uStack_2e8 = uVar20;
    uStack_2e0 = uVar23;
    uStack_2d8 = uVar19;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar11 = trace_event_ignore_this_pid(iVar9), (uVar11 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iVar6 = strlen(pcVar2);
    puVar12 = iVar6 + 1 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_348,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar2);
        *(iVar8 + 0xc) = puVar13;
        *(iVar8 + 0x10) = uVar16;
        trace_event_buffer_commit(&uStack_348);
    }
code_r0x08001c98:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_318) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar11 = auVar26._0_8_;
    *extraout_x18_05 = sym.perf_trace_qrtr_ns_message;
    pcStack_3a8 = sym.perf_trace_qrtr_ns_message;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iStack_3b8 = *(iVar8 + 0x5e0);
    uVar4 = uVar15;
    uVar5 = SUB84(puVar12,0);
    iStack_3c0 = 0;
    uStack_3c4 = 0;
    ppuStack_3b0 = &ppuStack_310;
    iVar6 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_3c4;
        iVar3 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&iStack_3c0,puVar12);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_3c0 + 0xe8) = &ppuStack_3b0;
            *(iStack_3c0 + 0xf8) = auStack_3d0;
            *(iStack_3c0 + 0x100) = ~(-1L << uVar15) & 0x8001cd0;
            *(iStack_3c0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar2);
            puVar12 = uStack_3c4;
            uVar18 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0x10) = uVar4;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar12,uVar11,1,iStack_3c0,piVar1,0);
            uVar15 = uVar11;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_3b8) {
        auVar26 = __stack_chk_fail();
        uVar25 = tpidr_el2;
        *extraout_x18_06 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar15 & 0xffffffff
                       ,uVar18 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qrtr_ns_service_announce_new @ 0x08001654 (size 316) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001940)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.perf_trace_qrtr_ns_service_announce_new(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uchar *puVar9;
    uchar *puVar10;
    uchar *puVar11;
    uint64_t uVar12;
    uint64_t in_x4;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong uVar25;
    uint64_t unaff_x30;
    uchar auVar26 [12];
    uchar auVar27 [16];
    uchar auStack_350 [12];
    uint32_t uStack_344;
    int64_t iStack_340;
    int64_t iStack_338;
    uchar *puStack_330;
    code *pcStack_328;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    int64_t iStack_298;
    uchar *puStack_290;
    ulong uStack_288;
    uint64_t uStack_280;
    uint64_t uStack_270;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uchar auStack_250 [12];
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    uchar *puStack_230;
    code *pcStack_228;
    code *pcStack_220;
    ulong uStack_210;
    int64_t iStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uchar *puStack_1a0;
    ulong uStack_198;
    int64_t *piStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    uVar16 = in_x4 & 0xffffffff;
    uVar17 = arg4 & 0xffffffff;
    uVar18 = arg3 & 0xffffffff;
    uVar22 = arg2 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(arg1 + 0x78);
    uVar12 = arg4;
    uVar13 = in_x4;
    if ((*(arg1 + 0x80) != 0) || (puVar9 = arg3, *piVar1 != 0)) {
        puVar9 = &stack0xffffffffffffff9c;
        iVar7 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffa0);
        uVar15 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar9 = uStack_64;
            uVar15 = -1L << (uVar15 & 0x3f);
            uVar13 = 1;
            uVar12 = (~uVar15 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar15 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(iStack_60 + 0x100) = uVar12;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 8) = arg2;
            *(iVar7 + 0xc) = arg3;
            *(iVar7 + 0x10) = arg4;
            *(iVar7 + 0x14) = in_x4;
            uVar12 = arg1;
            perf_trace_run_bpf_submit(iVar7,0x1c);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18 = 0x8001784;
    uStack_a8 = 0x8001784;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar21 = *(iVar8 + 0x48);
    uVar15 = uVar12;
    uVar14 = uVar13;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_98 = uVar22;
    uStack_90 = uVar18;
    uStack_88 = uVar17;
    uStack_80 = uVar16;
    iStack_78 = arg1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar10 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar8), (uVar16 & 1) == 0))))
        goto code_r0x08001810;
    }
    else {
code_r0x08001810:
        puVar10 = 0x18;
        iVar7 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar8);
        if (iVar7 != 0) {
            *(iVar7 + 8) = auVar26._8_4_;
            *(iVar7 + 0xc) = puVar9;
            *(iVar7 + 0x10) = uVar12;
            *(iVar7 + 0x14) = uVar13;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar16 = auVar27._0_8_;
    *extraout_x18_00 = sym.perf_trace_qrtr_ns_service_announce_del;
    pcStack_138 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar7 = sp_el0;
    iStack_148 = *(iVar7 + 0x5e0);
    uVar17 = uVar14 & 0xffffffff;
    uVar18 = uVar15 & 0xffffffff;
    uVar22 = puVar10 & 0xffffffff;
    uVar23 = auVar27._8_8_ & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar16 + 0x78);
    uVar12 = uVar15;
    uVar13 = uVar14;
    puStack_140 = &stack0xffffffffffffff50;
    if ((*(uVar16 + 0x80) != 0) || (puVar9 = puVar10, *piVar1 != 0)) {
        puVar9 = &stack0xfffffffffffffeac;
        iVar7 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffeb0);
        uVar19 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(iStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            puVar9 = uStack_154;
            uVar13 = 1;
            *(iStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            *(iStack_150 + 0x100) = ~(-1L << (uVar19 & 0x3f)) & 0x800186c;
            *(iStack_150 + 0x108) = 5;
            *(iVar7 + 8) = auVar27._8_4_;
            *(iVar7 + 0xc) = puVar10;
            *(iVar7 + 0x10) = uVar15;
            *(iVar7 + 0x14) = uVar14;
            uVar12 = uVar16;
            perf_trace_run_bpf_submit(iVar7,0x1c);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_148) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar8 = auVar27._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_01 = 0x800199c;
    uStack_198 = 0x800199c;
    iVar7 = sp_el0;
    iStack_1a8 = *(iVar7 + 0x5e0);
    uVar19 = auVar27._8_8_ & 0xffffffff;
    uVar25 = *(iVar8 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar21 = uVar25;
    uVar15 = uVar12;
    uVar14 = uVar13;
    puStack_1a0 = &stack0xfffffffffffffec0;
    piStack_190 = piVar1;
    uStack_188 = uVar23;
    uStack_180 = uVar22;
    uStack_178 = uVar18;
    uStack_170 = uVar17;
    uStack_168 = uVar16;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar10 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar8), (uVar16 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar10 = 0x18;
        iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffe28,iVar8);
        if (iVar7 != 0) {
            *(iVar7 + 8) = auVar27._8_4_;
            *(iVar7 + 0xc) = puVar9;
            *(iVar7 + 0x10) = uVar12;
            *(iVar7 + 0x14) = uVar13;
            trace_event_buffer_commit(&stack0xfffffffffffffe28);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar18 = auVar27._0_8_;
    *extraout_x18_02 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_228 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_220 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar7 = sp_el0;
    iStack_238 = *(iVar7 + 0x5e0);
    uVar22 = uVar14 & 0xffffffff;
    uVar23 = uVar15 & 0xffffffff;
    uVar20 = puVar10 & 0xffffffff;
    uVar24 = auVar27._8_8_ & 0xffffffff;
    iStack_240 = 0;
    uStack_244 = 0;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar18 + 0x78);
    uVar16 = uVar15;
    uVar17 = uVar14;
    puStack_230 = &stack0xfffffffffffffe60;
    uStack_210 = uVar25;
    iStack_208 = iVar8;
    uStack_200 = uVar19;
    uStack_1f8 = puVar9 & 0xffffffff;
    uStack_1f0 = uVar12 & 0xffffffff;
    uStack_1e8 = uVar13 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &stack0xfffffffffffffdbc;
        iVar7 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffdc0);
        uVar12 = _trace_event_raw_init;
        if (iVar7 != 0) {
            *(iStack_240 + 0xe8) = &stack0xfffffffffffffdd0;
            puVar11 = uStack_244;
            uVar17 = 1;
            *(iStack_240 + 0xf8) = &stack0xfffffffffffffdb0;
            *(iStack_240 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x8001a84;
            *(iStack_240 + 0x108) = 5;
            *(iVar7 + 8) = auVar27._8_4_;
            *(iVar7 + 0xc) = puVar10;
            *(iVar7 + 0x10) = uVar15;
            *(iVar7 + 0x14) = uVar14;
            uVar16 = uVar18;
            perf_trace_run_bpf_submit(iVar7,0x1c,puVar11,uVar18,1,iStack_240,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_238) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar8 = auVar27._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_03 = 0x8001bb4;
    uStack_288 = 0x8001bb4;
    iVar7 = sp_el0;
    iStack_298 = *(iVar7 + 0x5e0);
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uVar21 = *(iVar8 + 0x48);
    uVar12 = uVar16;
    puStack_290 = &stack0xfffffffffffffdd0;
    uStack_280 = uVar24;
    uStack_270 = uVar20;
    uStack_268 = uVar23;
    uStack_260 = uVar22;
    uStack_258 = uVar18;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = puVar11;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar8), (uVar13 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar27._8_8_ != NULL) {
        pcVar2 = auVar27._8_8_;
    }
    iVar6 = strlen(pcVar2);
    puVar9 = iVar6 + 1 + 0x14;
    iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffd38,iVar8);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        strcpy(iVar7 + 0x14,pcVar2);
        *(iVar7 + 0xc) = puVar11;
        *(iVar7 + 0x10) = uVar16;
        trace_event_buffer_commit(&stack0xfffffffffffffd38);
    }
code_r0x08001c98:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_298) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar13 = auVar27._0_8_;
    *extraout_x18_04 = sym.perf_trace_qrtr_ns_message;
    pcStack_328 = sym.perf_trace_qrtr_ns_message;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (auVar27._8_8_ != NULL) {
        pcVar2 = auVar27._8_8_;
    }
    iStack_338 = *(iVar7 + 0x5e0);
    uVar4 = uVar12;
    uVar5 = SUB84(puVar9,0);
    iStack_340 = 0;
    uStack_344 = 0;
    puStack_330 = &stack0xfffffffffffffd70;
    iVar6 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &stack0xfffffffffffffcbc;
        iVar3 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&stack0xfffffffffffffcc0,puVar9);
        if (iVar7 != 0) {
            uVar12 = _trace_event_raw_init & 0x3f;
            *(iStack_340 + 0xe8) = &stack0xfffffffffffffcd0;
            *(iStack_340 + 0xf8) = &stack0xfffffffffffffcb0;
            *(iStack_340 + 0x100) = ~(-1L << uVar12) & 0x8001cd0;
            *(iStack_340 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,pcVar2);
            puVar9 = uStack_344;
            uVar17 = 1;
            *(iVar7 + 0xc) = uVar5;
            *(iVar7 + 0x10) = uVar4;
            perf_trace_run_bpf_submit(iVar7,iVar3,puVar9,uVar13,1,iStack_340,piVar1,0);
            uVar12 = uVar13;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_338) {
        auVar27 = __stack_chk_fail();
        uVar25 = tpidr_el2;
        *extraout_x18_05 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar27._0_8_,auVar27._8_8_ & 0xffffffff,puVar9 & 0xffffffff,uVar12 & 0xffffffff
                       ,uVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qrtr_ns_service_announce_del @ 0x08001790 (size 220) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001940)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.trace_event_raw_event_qrtr_ns_service_announce_del(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    uint64_t in_x4;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auStack_2e0 [12];
    uint32_t uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong **ppuStack_2c0;
    code *pcStack_2b8;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    ulong uStack_218;
    uint64_t uStack_210;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    ulong uStack_1a0;
    int64_t iStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t *piStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar22 = *(arg1 + 0x48);
    uVar15 = arg4;
    uVar11 = in_x4;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = arg3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(arg1), (uVar7 & 1) == 0))))
        goto code_r0x08001810;
    }
    else {
code_r0x08001810:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = arg2;
            *(iVar8 + 0xc) = arg3;
            *(iVar8 + 0x10) = arg4;
            *(iVar8 + 0x14) = in_x4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar10 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_qrtr_ns_service_announce_del;
    pcStack_c8 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uVar17 = uVar11 & 0xffffffff;
    uVar18 = uVar15 & 0xffffffff;
    uVar19 = puVar12 & 0xffffffff;
    uVar23 = auVar26._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar10 + 0x78);
    uVar7 = uVar15;
    uVar16 = uVar11;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar10 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_e4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_e0);
        uVar20 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar13 = uStack_e4;
            uVar16 = 1;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x800186c;
            *(iStack_e0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar7 = uVar10;
            perf_trace_run_bpf_submit(iVar8,0x1c);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_00 = 0x800199c;
    uStack_128 = 0x800199c;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    uVar20 = auVar26._8_8_ & 0xffffffff;
    uVar25 = *(iVar9 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar22 = uVar25;
    uVar15 = uVar7;
    uVar11 = uVar16;
    ppuStack_130 = &puStack_d0;
    piStack_120 = piVar1;
    uStack_118 = uVar23;
    uStack_110 = uVar19;
    uStack_108 = uVar18;
    uStack_100 = uVar17;
    uStack_f8 = uVar10;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar9), (uVar10 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar12 = 0x18;
        iVar8 = trace_event_buffer_reserve(&uStack_168,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar13;
            *(iVar8 + 0x10) = uVar7;
            *(iVar8 + 0x14) = uVar16;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar18 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_1b8 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_1b0 = sym.perf_trace_qrtr_ns_service_announce_del;
    iVar8 = sp_el0;
    iStack_1c8 = *(iVar8 + 0x5e0);
    uVar19 = uVar11 & 0xffffffff;
    uVar23 = uVar15 & 0xffffffff;
    uVar21 = puVar12 & 0xffffffff;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar18 + 0x78);
    uVar10 = uVar15;
    uVar17 = uVar11;
    ppuStack_1c0 = &ppuStack_130;
    uStack_1a0 = uVar25;
    iStack_198 = iVar9;
    uStack_190 = uVar20;
    uStack_188 = puVar13 & 0xffffffff;
    uStack_180 = uVar7 & 0xffffffff;
    uStack_178 = uVar16 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar14 = puVar12, *piVar1 != 0)) {
        puVar14 = &uStack_1d4;
        iVar8 = perf_trace_buf_alloc(0x1c,&iStack_1d0);
        uVar7 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_1d0 + 0xe8) = &ppuStack_1c0;
            puVar14 = uStack_1d4;
            uVar17 = 1;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8001a84;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar8 + 8) = auVar26._8_4_;
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = uVar15;
            *(iVar8 + 0x14) = uVar11;
            uVar10 = uVar18;
            perf_trace_run_bpf_submit(iVar8,0x1c,puVar14,uVar18,1,iStack_1d0,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar25 = tpidr_el2;
    *extraout_x18_02 = 0x8001bb4;
    uStack_218 = 0x8001bb4;
    iVar8 = sp_el0;
    iStack_228 = *(iVar8 + 0x5e0);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar22 = *(iVar9 + 0x48);
    uVar15 = uVar10;
    ppuStack_220 = &ppuStack_1c0;
    uStack_210 = uVar24;
    uStack_200 = uVar21;
    uStack_1f8 = uVar23;
    uStack_1f0 = uVar19;
    uStack_1e8 = uVar18;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar14;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar11 = trace_event_ignore_this_pid(iVar9), (uVar11 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iVar6 = strlen(pcVar2);
    puVar12 = iVar6 + 1 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_258,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar2);
        *(iVar8 + 0xc) = puVar14;
        *(iVar8 + 0x10) = uVar10;
        trace_event_buffer_commit(&uStack_258);
    }
code_r0x08001c98:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_228) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar11 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_qrtr_ns_message;
    pcStack_2b8 = sym.perf_trace_qrtr_ns_message;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iStack_2c8 = *(iVar8 + 0x5e0);
    uVar4 = uVar15;
    uVar5 = SUB84(puVar12,0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    ppuStack_2c0 = &ppuStack_220;
    iVar6 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_2d4;
        iVar3 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&iStack_2d0,puVar12);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_2d0 + 0xe8) = &ppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << uVar15) & 0x8001cd0;
            *(iStack_2d0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar2);
            puVar12 = uStack_2d4;
            uVar17 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0x10) = uVar4;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar12,uVar11,1,iStack_2d0,piVar1,0);
            uVar15 = uVar11;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_2c8) {
        auVar26 = __stack_chk_fail();
        uVar25 = tpidr_el2;
        *extraout_x18_04 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar15 & 0xffffffff
                       ,uVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qrtr_ns_service_announce_del @ 0x0800186c (size 316) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.perf_trace_qrtr_ns_service_announce_del(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    uchar *puVar11;
    uchar *puVar12;
    uint64_t uVar13;
    uint64_t in_x4;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t unaff_x30;
    uchar auVar23 [12];
    uchar auVar24 [16];
    uchar auStack_260 [12];
    uint32_t uStack_254;
    int64_t iStack_250;
    int64_t iStack_248;
    uchar *puStack_240;
    code *pcStack_238;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uchar *puStack_1a0;
    ulong uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uVar17 = in_x4 & 0xffffffff;
    uVar18 = arg4 & 0xffffffff;
    uVar19 = arg3 & 0xffffffff;
    uVar21 = arg2 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(arg1 + 0x78);
    uVar13 = arg4;
    uVar14 = in_x4;
    if ((*(arg1 + 0x80) != 0) || (puVar11 = arg3, *piVar1 != 0)) {
        puVar11 = &stack0xffffffffffffff9c;
        iVar9 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffa0);
        uVar16 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar11 = uStack_64;
            uVar16 = -1L << (uVar16 & 0x3f);
            uVar14 = 1;
            uVar13 = (~uVar16 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar13 = uVar16 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(iStack_60 + 0x100) = uVar13;
            *(iStack_60 + 0x108) = 5;
            *(iVar9 + 8) = arg2;
            *(iVar9 + 0xc) = arg3;
            *(iVar9 + 0x10) = arg4;
            *(iVar9 + 0x14) = in_x4;
            uVar13 = arg1;
            perf_trace_run_bpf_submit(iVar9,0x1c);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar10 = auVar23._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800199c;
    uStack_a8 = 0x800199c;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar20 = *(iVar10 + 0x48);
    uVar16 = uVar13;
    uVar15 = uVar14;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_98 = uVar21;
    uStack_90 = uVar19;
    uStack_88 = uVar18;
    uStack_80 = uVar17;
    iStack_78 = arg1;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar10), (uVar17 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar12 = 0x18;
        iVar9 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar10);
        if (iVar9 != 0) {
            *(iVar9 + 8) = auVar23._8_4_;
            *(iVar9 + 0xc) = puVar11;
            *(iVar9 + 0x10) = uVar13;
            *(iVar9 + 0x14) = uVar14;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar17 = auVar24._0_8_;
    *extraout_x18_00 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_138 = sym.perf_trace_qrtr_ns_server_add;
    iVar9 = sp_el0;
    iStack_148 = *(iVar9 + 0x5e0);
    uVar18 = uVar15 & 0xffffffff;
    uVar19 = uVar16 & 0xffffffff;
    uVar21 = puVar12 & 0xffffffff;
    uVar22 = auVar24._8_8_ & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar17 + 0x78);
    uVar13 = uVar16;
    uVar14 = uVar15;
    puStack_140 = &stack0xffffffffffffff50;
    if ((*(uVar17 + 0x80) != 0) || (puVar11 = puVar12, *piVar1 != 0)) {
        puVar11 = &stack0xfffffffffffffeac;
        iVar9 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffeb0);
        uVar7 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            puVar11 = uStack_154;
            uVar14 = 1;
            *(iStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            *(iStack_150 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8001a84;
            *(iStack_150 + 0x108) = 5;
            *(iVar9 + 8) = auVar24._8_4_;
            *(iVar9 + 0xc) = puVar12;
            *(iVar9 + 0x10) = uVar16;
            *(iVar9 + 0x14) = uVar15;
            uVar13 = uVar17;
            perf_trace_run_bpf_submit(iVar9,0x1c,puVar11,uVar17,1,iStack_150,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_148) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar10 = auVar24._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_01 = 0x8001bb4;
    uStack_198 = 0x8001bb4;
    iVar9 = sp_el0;
    iStack_1a8 = *(iVar9 + 0x5e0);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar20 = *(iVar10 + 0x48);
    uVar16 = uVar13;
    puStack_1a0 = &stack0xfffffffffffffec0;
    uStack_190 = uVar22;
    uStack_180 = uVar21;
    uStack_178 = uVar19;
    uStack_170 = uVar18;
    uStack_168 = uVar17;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 && (uVar17 = trace_event_ignore_this_pid(iVar10), (uVar17 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar2 = auVar24._8_8_;
    }
    iVar8 = strlen(pcVar2);
    puVar12 = iVar8 + 1 + 0x14;
    iVar9 = trace_event_buffer_reserve(&stack0xfffffffffffffe28,iVar10);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar8 + 1) * 0x10000 | 0x14;
        strcpy(iVar9 + 0x14,pcVar2);
        *(iVar9 + 0xc) = puVar11;
        *(iVar9 + 0x10) = uVar13;
        trace_event_buffer_commit(&stack0xfffffffffffffe28);
    }
code_r0x08001c98:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar13 = auVar24._0_8_;
    *extraout_x18_02 = sym.perf_trace_qrtr_ns_message;
    pcStack_238 = sym.perf_trace_qrtr_ns_message;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar2 = auVar24._8_8_;
    }
    iStack_248 = *(iVar9 + 0x5e0);
    uVar5 = uVar16;
    uVar6 = SUB84(puVar12,0);
    iStack_250 = 0;
    uStack_254 = 0;
    puStack_240 = &stack0xfffffffffffffe60;
    iVar8 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &stack0xfffffffffffffdac;
        iVar3 = (iVar8 + 0x20U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&stack0xfffffffffffffdb0,puVar12);
        if (iVar9 != 0) {
            uVar14 = _trace_event_raw_init & 0x3f;
            *(iStack_250 + 0xe8) = &stack0xfffffffffffffdc0;
            *(iStack_250 + 0xf8) = &stack0xfffffffffffffda0;
            *(iStack_250 + 0x100) = ~(-1L << uVar14) & 0x8001cd0;
            *(iStack_250 + 0x108) = 5;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10014;
            strcpy(iVar9 + 0x14,pcVar2);
            puVar12 = uStack_254;
            uVar14 = 1;
            *(iVar9 + 0xc) = uVar6;
            *(iVar9 + 0x10) = uVar5;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar12,uVar13,1,iStack_250,piVar1,0);
            uVar16 = uVar13;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_248) {
        auVar24 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_03 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar16 & 0xffffffff
                       ,uVar14 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qrtr_ns_server_add @ 0x080019a8 (size 220) =====

//WARNING: Removing unreachable block (ram,0x08001b58)
//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.trace_event_raw_event_qrtr_ns_server_add(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    uint64_t in_x4;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar21 = *(arg1 + 0x48);
    uVar16 = arg4;
    uVar13 = in_x4;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = arg3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar16 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar9 = trace_event_ignore_this_pid(arg1), (uVar9 & 1) == 0))))
        goto code_r0x08001a28;
    }
    else {
code_r0x08001a28:
        puVar14 = 0x18;
        iVar10 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar10 != 0) {
            *(iVar10 + 8) = arg2;
            *(iVar10 + 0xc) = arg3;
            *(iVar10 + 0x10) = arg4;
            *(iVar10 + 0x14) = in_x4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar11 = auVar23._0_8_;
    *extraout_x18 = sym.perf_trace_qrtr_ns_server_add;
    pcStack_c8 = sym.perf_trace_qrtr_ns_server_add;
    iVar10 = sp_el0;
    iStack_d8 = *(iVar10 + 0x5e0);
    uVar18 = uVar13 & 0xffffffff;
    uVar19 = uVar16 & 0xffffffff;
    uVar20 = puVar14 & 0xffffffff;
    uVar22 = auVar23._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar11 + 0x78);
    uVar9 = uVar16;
    uVar17 = uVar13;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar11 + 0x80) != 0) || (puVar15 = puVar14, *piVar1 != 0)) {
        puVar15 = &uStack_e4;
        iVar10 = perf_trace_buf_alloc(0x1c,&iStack_e0);
        uVar7 = _trace_event_raw_init;
        if (iVar10 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar15 = uStack_e4;
            uVar17 = 1;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8001a84;
            *(iStack_e0 + 0x108) = 5;
            *(iVar10 + 8) = auVar23._8_4_;
            *(iVar10 + 0xc) = puVar14;
            *(iVar10 + 0x10) = uVar16;
            *(iVar10 + 0x14) = uVar13;
            uVar9 = uVar11;
            perf_trace_run_bpf_submit(iVar10,0x1c,puVar15,uVar11,1,iStack_e0,piVar1,0);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar12 = auVar23._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_00 = 0x8001bb4;
    uStack_128 = 0x8001bb4;
    iVar10 = sp_el0;
    iStack_138 = *(iVar10 + 0x5e0);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar21 = *(iVar12 + 0x48);
    uVar16 = uVar9;
    ppuStack_130 = &puStack_d0;
    uStack_120 = uVar22;
    uStack_110 = uVar20;
    uStack_108 = uVar19;
    uStack_100 = uVar18;
    uStack_f8 = uVar11;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar23._8_8_ != NULL) {
        pcVar2 = auVar23._8_8_;
    }
    iVar8 = strlen(pcVar2);
    puVar14 = iVar8 + 1 + 0x14;
    iVar10 = trace_event_buffer_reserve(&uStack_168,iVar12);
    if (iVar10 != 0) {
        *(iVar10 + 8) = (iVar8 + 1) * 0x10000 | 0x14;
        strcpy(iVar10 + 0x14,pcVar2);
        *(iVar10 + 0xc) = puVar15;
        *(iVar10 + 0x10) = uVar9;
        trace_event_buffer_commit(&uStack_168);
    }
code_r0x08001c98:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_138) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar13 = auVar23._0_8_;
    *extraout_x18_01 = sym.perf_trace_qrtr_ns_message;
    pcStack_1c8 = sym.perf_trace_qrtr_ns_message;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (auVar23._8_8_ != NULL) {
        pcVar2 = auVar23._8_8_;
    }
    iStack_1d8 = *(iVar10 + 0x5e0);
    uVar5 = uVar16;
    uVar6 = SUB84(puVar14,0);
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    ppuStack_1d0 = &ppuStack_130;
    iVar8 = strlen(pcVar2);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar14 = &uStack_1e4;
        iVar3 = (iVar8 + 0x20U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar3,&iStack_1e0,puVar14);
        if (iVar10 != 0) {
            uVar16 = _trace_event_raw_init & 0x3f;
            *(iStack_1e0 + 0xe8) = &ppuStack_1d0;
            *(iStack_1e0 + 0xf8) = auStack_1f0;
            *(iStack_1e0 + 0x100) = ~(-1L << uVar16) & 0x8001cd0;
            *(iStack_1e0 + 0x108) = 5;
            *(iVar10 + 8) = iVar8 * 0x10000 + 0x10014;
            strcpy(iVar10 + 0x14,pcVar2);
            puVar14 = uStack_1e4;
            uVar17 = 1;
            *(iVar10 + 0xc) = uVar6;
            *(iVar10 + 0x10) = uVar5;
            perf_trace_run_bpf_submit(iVar10,iVar3,puVar14,uVar13,1,iStack_1e0,piVar1,0);
            uVar16 = uVar13;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_1d8) {
        auVar23 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_02 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,puVar14 & 0xffffffff,uVar16 & 0xffffffff
                       ,uVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qrtr_ns_server_add @ 0x08001a84 (size 316) =====

//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.perf_trace_qrtr_ns_server_add(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    uint64_t uVar12;
    uint64_t in_x4;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    uint64_t unaff_x30;
    uchar auVar20 [16];
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
    uint64_t uStack_a0;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar15 = in_x4 & 0xffffffff;
    uVar16 = arg4 & 0xffffffff;
    uVar17 = arg3 & 0xffffffff;
    uVar19 = arg2 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(arg1 + 0x78);
    uVar12 = arg4;
    uVar13 = in_x4;
    if ((*(arg1 + 0x80) != 0) || (puVar10 = arg3, *piVar1 != 0)) {
        puVar10 = &stack0xffffffffffffff9c;
        iVar8 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffa0);
        uVar14 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar10 = uStack_64;
            uVar14 = -1L << (uVar14 & 0x3f);
            uVar13 = 1;
            uVar12 = (~uVar14 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar14 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(iStack_60 + 0x100) = uVar12;
            *(iStack_60 + 0x108) = 5;
            *(iVar8 + 8) = arg2;
            *(iVar8 + 0xc) = arg3;
            *(iVar8 + 0x10) = arg4;
            *(iVar8 + 0x14) = in_x4;
            uVar12 = arg1;
            perf_trace_run_bpf_submit(iVar8,0x1c,puVar10,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar9 = auVar20._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x8001bb4;
    uStack_a8 = 0x8001bb4;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar18 = *(iVar9 + 0x48);
    uVar14 = uVar12;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar19;
    uStack_90 = uVar17;
    uStack_88 = uVar16;
    uStack_80 = uVar15;
    iStack_78 = arg1;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar18 >> 6 & 1) != 0) ||
           (((uVar18 >> 9 & 1) != 0 && (uVar15 = trace_event_ignore_this_pid(iVar9), (uVar15 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar2 = "(null)";
    if (auVar20._8_8_ != NULL) {
        pcVar2 = auVar20._8_8_;
    }
    iVar7 = strlen(pcVar2);
    puVar11 = iVar7 + 1 + 0x14;
    iVar8 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar7 + 1) * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar2);
        *(iVar8 + 0xc) = puVar10;
        *(iVar8 + 0x10) = uVar12;
        trace_event_buffer_commit(&stack0xffffffffffffff18);
    }
code_r0x08001c98:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    uVar12 = auVar20._0_8_;
    *extraout_x18_00 = sym.perf_trace_qrtr_ns_message;
    pcStack_148 = sym.perf_trace_qrtr_ns_message;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar20._8_8_ != NULL) {
        pcVar2 = auVar20._8_8_;
    }
    iStack_158 = *(iVar8 + 0x5e0);
    uVar5 = uVar14;
    uVar6 = SUB84(puVar11,0);
    iStack_160 = 0;
    uStack_164 = 0;
    puStack_150 = &stack0xffffffffffffff50;
    iVar7 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &stack0xfffffffffffffe9c;
        iVar3 = (iVar7 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&stack0xfffffffffffffea0,puVar11);
        if (iVar8 != 0) {
            uVar13 = _trace_event_raw_init & 0x3f;
            *(iStack_160 + 0xe8) = &stack0xfffffffffffffeb0;
            *(iStack_160 + 0xf8) = &stack0xfffffffffffffe90;
            *(iStack_160 + 0x100) = ~(-1L << uVar13) & 0x8001cd0;
            *(iStack_160 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar2);
            puVar11 = uStack_164;
            uVar13 = 1;
            *(iVar8 + 0xc) = uVar6;
            *(iVar8 + 0x10) = uVar5;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar11,uVar12,1,iStack_160,piVar1,0);
            uVar14 = uVar12;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_158) {
        auVar20 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_01 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,puVar11 & 0xffffffff,uVar14 & 0xffffffff
                       ,uVar13 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qrtr_ns_message @ 0x08001bc0 (size 272) =====

//WARNING: Removing unreachable block (ram,0x08001dc4)

void sym.trace_event_raw_event_qrtr_ns_message(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    int iVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    uint64_t in_x4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
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
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(arg1 + 0x48);
    uVar11 = arg4;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar10 = arg3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar11 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(arg1), (uVar8 & 1) != 0))))
        goto code_r0x08001c98;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar7 = strlen(pcVar1);
    puVar10 = iVar7 + 1 + 0x14;
    iVar9 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar7 + 1) * 0x10000 | 0x14;
        strcpy(iVar9 + 0x14,pcVar1);
        *(iVar9 + 0xc) = arg3;
        *(iVar9 + 0x10) = arg4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x08001c98:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    uVar8 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_qrtr_ns_message;
    pcStack_d8 = sym.perf_trace_qrtr_ns_message;
    iVar9 = sp_el0;
    pcVar1 = "(null)";
    if (auVar13._8_8_ != NULL) {
        pcVar1 = auVar13._8_8_;
    }
    iStack_e8 = *(iVar9 + 0x5e0);
    uVar5 = uVar11;
    uVar6 = SUB84(puVar10,0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar7 = strlen(pcVar1);
    iVar9 = tpidr_el1;
    piVar2 = iVar9 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar10 = &uStack_f4;
        iVar3 = (iVar7 + 0x20U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_f0,puVar10);
        if (iVar9 != 0) {
            uVar11 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar11) & 0x8001cd0;
            *(iStack_f0 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10014;
            strcpy(iVar9 + 0x14,pcVar1);
            puVar10 = uStack_f4;
            in_x4 = 1;
            *(iVar9 + 0xc) = uVar6;
            *(iVar9 + 0x10) = uVar5;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar10,uVar8,1,iStack_f0,piVar2,0);
            uVar11 = uVar8;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_e8) {
        auVar13 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8001e48;
        bpf_trace_run4(in_tmp_ldXn,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar11 & 0xffffffff
                       ,in_x4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qrtr_ns_message @ 0x08001cd0 (size 388) =====

void sym.perf_trace_qrtr_ns_message(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    uint uVar6;
    uint uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    uint64_t in_x4;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar11 [16];
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar2 = 0x8000e91;
    if (arg2 != 0) {
        uVar2 = arg2;
    }
    iStack_68 = *(iVar9 + 0x5e0);
    uVar6 = arg4;
    uVar7 = arg3;
    iStack_70 = 0;
    uStack_74 = 0;
    iVar8 = strlen(uVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        arg3 = &stack0xffffffffffffff8c;
        iVar4 = (iVar8 + 0x20U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&stack0xffffffffffffff90,arg3);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10014;
            strcpy(iVar9 + 0x14,uVar2);
            arg3 = uStack_74;
            in_x4 = 1;
            *(iVar9 + 0xc) = uVar7;
            *(iVar9 + 0x10) = uVar6;
            perf_trace_run_bpf_submit(iVar9,iVar4,arg3,arg1,1,iStack_70,piVar1,0);
            arg4 = arg1;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    auVar11 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8001e48;
    bpf_trace_run4(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff,
                   in_x4 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_qrtr_ns_service_announce_new @ 0x08001e54 (size 52) =====

void sym.__bpf_trace_qrtr_ns_service_announce_new(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    uint in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff,in_w4);
    return;
}


// ===== sym.__bpf_trace_qrtr_ns_service_announce_del @ 0x08001e88 (size 52) =====

void sym.__bpf_trace_qrtr_ns_service_announce_del(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    uint in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff,in_w4);
    return;
}


// ===== sym.__bpf_trace_qrtr_ns_server_add @ 0x08001ebc (size 52) =====

void sym.__bpf_trace_qrtr_ns_server_add(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    uint in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff,in_w4);
    return;
}


// ===== sym.__bpf_trace_qrtr_ns_message @ 0x08001ef0 (size 44) =====

void sym.__bpf_trace_qrtr_ns_message(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,in_x1,arg1 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.qrtr_get_service_id @ 0x08001f1c (size 212) =====

//WARNING: Removing unreachable block (ram,0x08002f70)

uint64_t sym.qrtr_get_service_id(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t *puVar7;
    ulong in_tmp_ldXn;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int64_t iVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int *piVar16;
    uint32_t *puVar17;
    uint *puVar18;
    uint *puVar19;
    ulong uVar20;
    char *pcVar21;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong *puVar24;
    ulong unaff_x30;
    ulong uVar25;
    uint32_t *puStack_2b0;
    ulong uStack_2a8;
    ulong *puStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    uint32_t auStack_238 [2];
    ulong uStack_230;
    uint uStack_228;
    ulong uStack_220;
    ulong *puStack_218;
    ulong uStack_210;
    int64_t *piStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    uint32_t uStack_1a0;
    uint32_t uStack_19c;
    uint32_t uStack_198;
    int64_t iStack_190;
    uchar **ppuStack_180;
    code *pcStack_178;
    uint uStack_114;
    ulong uStack_110;
    uint uStack_108;
    uint *puStack_100;
    ulong uStack_f8;
    code *pcStack_f0;
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
    uint uStack_90;
    ulong uStack_8c;
    ulong uStack_84;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    iVar12 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,arg1 & 0xffffffff);
    if (iVar12 != 0) {
        uStack_40 = 0;
        puVar13 = xa_find(iVar12 + 8,&uStack_40,0xffffffffffffffff,8);
        while (puVar13 != NULL) {
            if ((puVar13[2] == arg1) && (puVar13[3] == arg2)) {
                uVar14 = *puVar13;
                goto code_r0x08001f84;
            }
            puVar13 = xa_find_after(iVar12 + 8,&uStack_40,0xffffffffffffffff,8);
        }
    }
    uVar14 = 0xffffffea;
code_r0x08001f84:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return uVar14;
    }
    __stack_chk_fail(uVar14);
    *extraout_x18 = sym.qrtr_ns_init;
    pcStack_68 = sym.qrtr_ns_init;
    iVar12 = sp_el0;
    iStack_78 = *(iVar12 + 0x5e0);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_114 = 0x100000;
    *0x80002e8 = 0x80002e8;
    *0x80002f0 = 0x80002e8;
    puStack_70 = &stack0xffffffffffffffd0;
    __kthread_init_worker(0x80002f8,"(&qrtr_ns.kworker)->lock",obj.qrtr_ns_init.__key);
    *0x8000348 = 0;
    *0x8000350 = 0;
    *0x8000330 = 0x8000330;
    *0x8000338 = 0x8000330;
    *0x8000340 = sym.qrtr_ns_worker.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
    _segment.ehdr = ipc_log_context_create(8,"qrtr_ns",0);
    uVar8 = sock_create_kern(init_net,0x2a,2,0x2a,reloc.__traceiter_qrtr_ns_server_add.cfi_jt);
    if (uVar8 < 0) {
        uVar14 = uVar8;
    }
    else {
        uVar8 = kernel_getsockname(_segment.ehdr,&uStack_110);
        uVar14 = uVar8;
        if (uVar8 < 0) {
            _printk(0x8000ae5,"qrtr_ns_init");
        }
        else {
            uVar15 = kthread_create_on_node(sym.kthread_worker_fn.cfi_jt,0x80002f8,0xffffffff,"qrtr_ns");
            if (uVar15 < 0xfffffffffffff001) {
                wake_up_process(uVar15);
                iVar12 = _reloc.__traceiter_qrtr_ns_server_add.cfi_jt;
                uStack_108 = 0xfffffffe;
                *0x8000358 = uVar15;
                *(*(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt + 0x18) + 0x2d8) =
                     sym.qrtr_ns_data_ready.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
                *0x8000360 = uStack_110._4_4_;
                uVar8 = kernel_bind(iVar12,&uStack_110,0xc);
                if (uVar8 < 0) {
                    uVar14 = uVar8;
                    _printk(0x8000a32,"qrtr_ns_init");
                }
                else {
                    sock_setsockopt(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,1,0x21,&uStack_114,1,4);
                    _reloc.__traceiter_qrtr_ns_message.cfi_jt = 0x2a;
                    *0x80002dc = 0xfffffffeffffffff;
                    puStack_100 = &uStack_90;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uStack_f8 = 0x14;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_e0 = 0;
                    uStack_d8 = 0;
                    uStack_8c = 0;
                    uStack_84 = 0;
                    uStack_90 = 2;
                    pcStack_f0 = reloc.__traceiter_qrtr_ns_message.cfi_jt;
                    uStack_e8 = 0xc;
                    uVar8 = kernel_sendmsg(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,&pcStack_f0,&puStack_100,1,
                                           0x14);
                    if (-1 < uVar8) {
                        uVar14 = 0;
                        goto code_r0x08002254;
                    }
                    uVar14 = uVar8;
                    _printk(0x8000f16,"say_hello",uVar14);
                }
                kthread_stop(_segment.ehdr);
            }
            else {
                _segment.ehdr = uVar15;
                _printk(0x8000e98,"qrtr_ns_init",uVar15);
            }
        }
        sock_release(_segment.ehdr);
    }
code_r0x08002254:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_78) {
        return uVar14;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.qrtr_ns_worker;
    pcStack_178 = sym.qrtr_ns_worker;
    iVar12 = sp_el0;
    iStack_190 = *(iVar12 + 0x5e0);
    puStack_2a0 = &uStack_240;
    auStack_238[0] = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_298 = 0xc;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_290 = 0;
    ppuStack_180 = &puStack_70;
    puVar13 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x1000);
    uVar14 = 0;
    if (puVar13 != NULL) {
        uStack_2a8 = 0x1000;
        puStack_2b0 = puVar13;
        iVar9 = kernel_recvmsg(_segment.ehdr,&puStack_2a0,&puStack_2b0,1,0x1000,0x40);
        if (iVar9 != -0xb) {
            puVar24 = &uStack_1a8 | 4;
            uVar25 = sp_el0;
            do {
                if (iVar9 < 0) {
                    _printk(0x8000d15,"qrtr_ns_worker",iVar9);
                    break;
                }
                uVar4 = *puVar13;
                uVar5 = *puVar13;
                uVar8 = uVar5 & 0xfffffffe;
                if (uVar8 == 2) {
                    ipc_log_string(_segment.ehdr,"cmd:0x%x node[0x%x]\n",uVar5,uStack_240._4_4_);
                }
                else {
                    if (uVar5 == 6) {
                        uVar8 = puVar13[1];
                        uVar2 = puVar13[2];
                        pcVar21 = "cmd:0x%x addr[0x%x:0x%x]\n";
                    }
                    else {
                        if (uVar8 != 10) {
                            if (uVar8 == 4) {
                                ipc_log_string(_segment.ehdr,"cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",uVar5,
                                               puVar13[1],puVar13[2],puVar13[3],puVar13[4],in_x7,uVar25);
                            }
                            goto code_r0x0800249c;
                        }
                        uVar8 = puVar13[1];
                        uVar2 = puVar13[2];
                        pcVar21 = "cmd:0x%x SVC[0x%x:0x%x]\n";
                    }
                    ipc_log_string(_segment.ehdr,pcVar21,uVar5,uVar8,uVar2);
                }
code_r0x0800249c:
                uVar14 = _segment.ehdr;
                uVar8 = uStack_240._4_4_;
                iVar12 = uStack_240;
                switch(uVar4) {
                case 2:
                    puStack_218 = &uStack_1a8;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    uStack_1c8 = 0;
                    uStack_1c0 = 0;
                    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,2);
                    uStack_1d8 = 0;
                    uStack_1d0 = 0;
                    uStack_1e8 = 0;
                    uStack_1e0 = 0;
                    piStack_208 = &uStack_240;
                    uStack_1f8 = 0;
                    uStack_1f0 = 0;
                    uStack_210 = 0x14;
                    *puVar24 = 0;
                    puVar24[1] = 0;
                    uStack_200 = 0xc;
                    iVar9 = kernel_sendmsg(uVar14,&piStack_208,&puStack_218,1,0x14);
                    if (iVar9 < 0) {
                        uVar20 = 0x8000f16;
                        pcVar21 = "say_hello";
code_r0x080030b4:
                        _printk(uVar20,pcVar21,iVar9);
                        goto code_r0x080030b8;
                    }
                    piStack_208 = NULL;
                    uStack_1a8 = 0;
                    piVar16 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_1a8,
                                      0xffffffffffffffff,8);
                    iVar12 = uStack_240;
                    while (piVar16 != NULL) {
                        uStack_240._4_4_ = iVar12 >> 0x20;
                        uStack_240 = iVar12;
                        if (*piVar16 == uStack_240._4_4_) {
                            _printk(0x8000b14,"announce_servers");
                        }
                        else {
                            piStack_208 = NULL;
                            iVar12 = xa_find(piVar16 + 2,&piStack_208,0xffffffffffffffff,8);
                            while (iVar12 != 0) {
                                iVar9 = sym.service_announce_new(&uStack_240,iVar12);
                                if ((iVar9 < 0) && (iVar9 != -0x13)) {
                                    _printk(0x8000da4,"announce_servers",iVar9);
                                    goto code_r0x08002f60;
                                }
                                iVar12 = xa_find_after(piVar16 + 2,&piStack_208,0xffffffffffffffff,8);
                            }
                        }
                        piVar16 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_1a8,
                                                0xffffffffffffffff,8);
                        iVar12 = uStack_240;
                    }
                    break;
                case 3:
                    puStack_218 = &uStack_1a8;
                    uStack_198 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    uStack_19c = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    uStack_1c8 = 0;
                    uStack_1c0 = 0;
                    uStack_1d8 = 0;
                    uStack_1d0 = 0;
                    uStack_1e8 = 0;
                    uStack_1e0 = 0;
                    uStack_1f8 = 0;
                    uStack_1f0 = 0;
                    piStack_208 = NULL;
                    uStack_200 = 0;
                    uStack_210 = 0x14;
                    puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uStack_240._4_4_);
                    if (puVar17 == NULL) {
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                        iVar12 = uStack_240;
                        if (puVar17 == NULL) break;
                        *puVar17 = uVar8;
                        puVar17[2] = 0;
                        puVar17[3] = 0;
                        puVar17[4] = 0;
                        puVar17[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar17,0xa20);
                    }
                    uStack_220 = 0;
                    iVar12 = xa_find(puVar17 + 2,&uStack_220,0xffffffffffffffff,8);
                    while (iVar12 != 0) {
                        sym.server_del(puVar17,*(iVar12 + 0xc));
                        iVar12 = xa_find_after(puVar17 + 2,&uStack_220,0xffffffffffffffff,8);
                    }
                    uVar6 = _segment.ehdr;
                    uVar14 = _segment.ehdr & 0xffffffff;
                    puVar18 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar14);
                    if (puVar18 == NULL) {
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar18 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                        iVar12 = uStack_240;
                        if (puVar18 == NULL) break;
                        *puVar18 = uVar6;
                        *(puVar18 + 2) = 0;
                        *(puVar18 + 4) = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar14,puVar18,0xa20);
                    }
                    uStack_198 = 0;
                    uStack_19c = 0;
                    uStack_1a0 = 0;
                    uStack_220 = 0;
                    uStack_1a8 = CONCAT44(uStack_240._4_4_,3);
                    puVar19 = xa_find(puVar18 + 2,&uStack_220,0xffffffffffffffff,8);
                    while (iVar12 = uStack_240, puVar19 != NULL) {
                        uStack_228 = puVar19[3];
                        uStack_230._2_6_ = uStack_230 >> 0x10;
                        uStack_230 = CONCAT62(uStack_230._2_6_,0x2a);
                        uStack_230 = CONCAT44(puVar19[2],uStack_230);
                        uStack_200._4_4_ = uStack_200 >> 0x20;
                        uStack_200 = CONCAT44(uStack_200._4_4_,0xc);
                        piStack_208 = &uStack_230;
                        iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_208,&puStack_218,1,0x14);
                        if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                           (iVar10 = ___ratelimit(obj.ctrl_cmd_bye._rs,"ctrl_cmd_bye"), iVar10 != 0)) {
                            _printk(0x8000c24,"ctrl_cmd_bye",*puVar19,puVar19[1],puVar19[3],iVar9);
                        }
                        puVar19 = xa_find_after(puVar18 + 2,&uStack_220,0xffffffffffffffff,8);
                    }
                    break;
                case 4:
                    uVar4 = puVar13[1];
                    uVar8 = puVar13[2];
                    puVar17 = auStack_238;
                    if (uStack_240._4_4_ != _segment.ehdr) {
                        puVar17 = puVar13 + 4;
                    }
                    uVar5 = uStack_240._4_4_;
                    if (uStack_240._4_4_ != _segment.ehdr) {
                        uVar5 = puVar13[3];
                    }
                    puVar18 = sym.server_add(uVar4,uVar8,uVar5,*puVar17);
                    if (puVar18 != NULL) {
                        if (puVar18[2] == _segment.ehdr) {
                            iVar9 = sym.service_announce_new(0x80002d8,puVar18);
                            if (iVar9 < 0) {
                                uVar20 = 0x8000da4;
                                pcVar21 = "ctrl_cmd_new_server";
                                goto code_r0x080030b4;
                            }
                        }
                        else {
                            iVar9 = 0;
                        }
                        piVar22 = *0x80002e8;
                        iVar12 = uStack_240;
                        if (*0x80002e8 == 0x80002e8) break;
                        do {
                            if (((*(piVar22 + -3) == 0) || (*(piVar22 + -3) == uVar4)) &&
                               ((*(piVar22 + -0x14) == 0 || (*(piVar22 + -0x14) == uVar8)))) {
                                uStack_1b8 = 0;
                                uStack_1b0 = 0;
                                uStack_1c8 = 0;
                                uStack_1c0 = 0;
                                piStack_208 = piVar22 + -2;
                                uStack_1d8 = 0;
                                uStack_1d0 = 0;
                                uStack_1e8 = 0;
                                uStack_1e0 = 0;
                                uStack_1f8 = 0;
                                uStack_1f0 = 0;
                                uStack_210 = 0x14;
                                uStack_1a8 = CONCAT44(*puVar18,4);
                                uStack_1a0 = puVar18[1];
                                uStack_19c = puVar18[2];
                                uStack_200 = 0xc;
                                uStack_198 = puVar18[3];
                                puStack_218 = &uStack_1a8;
                                iVar10 = kernel_sendmsg(_segment.ehdr,&piStack_208,&puStack_218,1,0x14);
                                if (((iVar10 < 0) && (iVar10 != -0x13)) &&
                                   (iVar11 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar11 != 0)) {
                                    _printk(0x8000cc7,"lookup_notify",iVar10);
                                }
                            }
                            piVar22 = *piVar22;
                        } while (piVar22 != 0x80002e8);
code_r0x08002f60:
                        iVar12 = uStack_240;
                        if (-1 < iVar9) break;
                    }
                    goto code_r0x080030b8;
                case 5:
                    puVar17 = auStack_238;
                    if (uStack_240._4_4_ != _segment.ehdr) {
                        uVar8 = puVar13[3];
                        puVar17 = puVar13 + 4;
                    }
                    uVar4 = *puVar17;
                    puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8);
                    if (puVar17 == NULL) {
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                        if (puVar17 == NULL) goto code_r0x080030b8;
                        *puVar17 = uVar8;
                        puVar17[2] = 0;
                        puVar17[3] = 0;
                        puVar17[4] = 0;
                        puVar17[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar17,0xa20);
                    }
                    sym.server_del(puVar17,uVar4);
                    iVar12 = uStack_240;
                    break;
                case 6:
                    uVar8 = puVar13[1];
                    uVar4 = puVar13[2];
                    uStack_198 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    uStack_19c = 0;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    uStack_1c8 = 0;
                    uStack_1c0 = 0;
                    puStack_218 = &uStack_1a8;
                    uStack_1d8 = 0;
                    uStack_1d0 = 0;
                    uStack_1e8 = 0;
                    uStack_1e0 = 0;
                    uStack_1f8 = 0;
                    uStack_1f0 = 0;
                    piStack_208 = NULL;
                    uStack_200 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_210 = 0x14;
                    piVar22 = *0x80002e8;
                    if ((uStack_240._4_4_ != _segment.ehdr) || (auStack_238[0] == uVar4)) {
                        while (piVar23 = piVar22, piVar23 != 0x80002e8) {
                            piVar22 = *piVar23;
                            if ((*(piVar23 + -0xc) == uVar8) && (*(piVar23 + -1) == uVar4)) {
                                uVar14 = __list_del_entry_valid(piVar23);
                                if ((uVar14 & 1) != 0) {
                                    iVar12 = *piVar23;
                                    piVar3 = piVar23[1];
                                    *(iVar12 + 8) = piVar3;
                                    *piVar3 = iVar12;
                                }
                                *piVar23 = -0x2152ffffffffff00;
                                piVar23[1] = -0x2152fffffffffede;
                                kfree(piVar23 + -3);
                            }
                        }
                        puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8);
                        if (puVar17 == NULL) {
                            iVar12 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar12 = 0x30;
                            }
                            puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                            if (puVar17 != NULL) {
                                *puVar17 = uVar8;
                                puVar17[2] = 0;
                                puVar17[3] = 0;
                                puVar17[4] = 0;
                                puVar17[5] = 0;
                                xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar17,0xa20);
                                goto code_r0x08002ce8;
                            }
                        }
                        else {
code_r0x08002ce8:
                            sym.server_del(puVar17,uVar4);
                        }
                        uVar6 = _segment.ehdr;
                        uVar14 = _segment.ehdr & 0xffffffff;
                        puVar18 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar14);
                        if (puVar18 == NULL) {
                            iVar12 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar12 = 0x30;
                            }
                            puVar18 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xb20,0x18);
                            iVar12 = uStack_240;
                            if (puVar18 == NULL) break;
                            *puVar18 = uVar6;
                            *(puVar18 + 2) = 0;
                            *(puVar18 + 4) = 0;
                            xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar14,puVar18,0xa20);
                        }
                        uStack_19c = 0;
                        uStack_198 = 0;
                        uStack_1a8 = CONCAT44(uVar8,6);
                        uStack_220 = 0;
                        uStack_1a0 = uVar4;
                        puVar19 = xa_find(puVar18 + 2,&uStack_220,0xffffffffffffffff,8);
                        iVar9 = 0;
                        if (puVar19 != NULL) {
                            do {
                                uStack_228 = puVar19[3];
                                uStack_230 = CONCAT62(uStack_230._2_6_,0x2a);
                                uStack_230 = CONCAT44(puVar19[2],uStack_230);
                                uStack_200 = CONCAT44(uStack_200._4_4_,0xc);
                                piStack_208 = &uStack_230;
                                iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_208,&puStack_218,1,0x14);
                                if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                   (iVar10 = ___ratelimit(obj.ctrl_cmd_del_client._rs,"ctrl_cmd_del_client"),
                                   iVar10 != 0)) {
                                    _printk(0x8000dd5,"ctrl_cmd_del_client",*puVar19,puVar19[1],puVar19[3],iVar9);
                                }
                                puVar19 = xa_find_after(puVar18 + 2,&uStack_220,0xffffffffffffffff,8);
                                iVar9 = 0;
                            } while (puVar19 != NULL);
                        }
                        goto code_r0x08002f60;
                    }
                    goto code_r0x080030b8;
                case 10:
                    uVar8 = puVar13[1];
                    uVar4 = puVar13[2];
                    uStack_220 = 0;
                    if (uStack_240._4_4_ == _segment.ehdr) {
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x28);
                        if (puVar17 != NULL) {
                            puVar1 = puVar17 + 6;
                            *(puVar17 + 2) = uStack_240;
                            puVar7 = *0x80002f0;
                            puVar17[4] = auStack_238[0];
                            *puVar17 = uVar8;
                            puVar17[1] = uVar4;
                            uVar14 = __list_add_valid(puVar1,puVar7);
                            if ((uVar14 & 1) != 0) {
                                *0x80002f0 = puVar1;
                                puVar17[6] = 0x80002e8;
                                puVar17[7] = 0;
                                *(puVar17 + 8) = puVar7;
                                *puVar7 = puVar1;
                            }
                            uStack_230 = 0;
                            iVar12 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_230,
                                             0xffffffffffffffff,8);
                            uVar14 = _segment.ehdr;
                            while (_segment.ehdr = uVar14, iVar12 != 0) {
                                uStack_220 = 0;
                                puVar17 = xa_find(iVar12 + 8,&uStack_220,0xffffffffffffffff,8);
                                while (puVar17 != NULL) {
                                    if ((uVar8 == 0) || (*puVar17 == uVar8)) {
                                        uVar5 = 0;
                                        if (uVar4 != 0) {
                                            uVar5 = puVar17[1];
                                        }
                                        if (uVar5 == uVar4) {
                                            uStack_1b8 = 0;
                                            uStack_1b0 = 0;
                                            uStack_1c8 = 0;
                                            uStack_1c0 = 0;
                                            uStack_1d8 = 0;
                                            uStack_1d0 = 0;
                                            uStack_1e8 = 0;
                                            uStack_1e0 = 0;
                                            uStack_1f8 = 0;
                                            uStack_1f0 = 0;
                                            uStack_210 = 0x14;
                                            *puVar24 = 0;
                                            puVar24[1] = 0;
                                            uStack_1a8 = CONCAT44(*puVar17,4);
                                            uStack_1a0 = puVar17[1];
                                            uStack_19c = puVar17[2];
                                            uStack_198 = puVar17[3];
                                            piStack_208 = &uStack_240;
                                            uStack_200 = 0xc;
                                            puStack_218 = &uStack_1a8;
                                            iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_208,&puStack_218,1,0x14);
                                            if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                               (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"),
                                               iVar10 != 0)) {
                                                _printk(0x8000cc7,"lookup_notify",iVar9);
                                            }
                                        }
                                    }
                                    puVar17 = xa_find_after(iVar12 + 8,&uStack_220,0xffffffffffffffff,8);
                                }
                                iVar12 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,
                                                       &uStack_230,0xffffffffffffffff,8);
                                uVar14 = _segment.ehdr;
                            }
                            uStack_1a8._4_4_ = uStack_1a8 >> 0x20;
                            uStack_1a8 = CONCAT44(uStack_1a8._4_4_,4);
                            piStack_208 = &uStack_240;
                            uStack_1b8 = 0;
                            uStack_1b0 = 0;
                            uStack_1c8 = 0;
                            uStack_1c0 = 0;
                            uStack_1d8 = 0;
                            uStack_1d0 = 0;
                            uStack_1e8 = 0;
                            uStack_1e0 = 0;
                            uStack_1f8 = 0;
                            uStack_1f0 = 0;
                            uStack_210 = 0x14;
                            *puVar24 = 0;
                            puVar24[1] = 0;
                            uStack_200 = 0xc;
                            puStack_218 = &uStack_1a8;
                            iVar9 = kernel_sendmsg(uVar14,&piStack_208,&puStack_218,1,0x14);
                            iVar12 = uStack_240;
                            if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                               (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar12 = uStack_240,
                               iVar10 != 0)) {
                                _printk(0x8000cc7,"lookup_notify",iVar9);
                                iVar12 = uStack_240;
                            }
                            break;
                        }
                    }
code_r0x080030b8:
                    _printk(0x8000a99,"qrtr_ns_worker",uStack_240._4_4_,auStack_238[0]);
                    iVar12 = uStack_240;
                    break;
                case 0xb:
                    if (*0x80002e8 != 0x80002e8) {
                        uVar8 = puVar13[1];
                        uVar4 = puVar13[2];
                        piVar22 = *0x80002e8;
                        do {
                            piVar23 = *piVar22;
                            if ((((*(piVar22 + -0xc) == uStack_240._4_4_) && (*(piVar22 + -1) == auStack_238[0])) &&
                                (*(piVar22 + -3) == uVar8)) &&
                               ((*(piVar22 + -0x14) == 0 || (*(piVar22 + -0x14) == uVar4)))) {
                                uVar14 = __list_del_entry_valid(piVar22);
                                if ((uVar14 & 1) != 0) {
                                    iVar12 = *piVar22;
                                    piVar3 = piVar22[1];
                                    *(iVar12 + 8) = piVar3;
                                    *piVar3 = iVar12;
                                }
                                *piVar22 = -0x2152ffffffffff00;
                                piVar22[1] = -0x2152fffffffffede;
                                kfree(piVar22 + -3);
                            }
                            piVar22 = piVar23;
                            iVar12 = uStack_240;
                        } while (piVar23 != 0x80002e8);
                    }
                }
                uStack_240 = iVar12;
                uStack_2a8 = 0x1000;
                puStack_2b0 = puVar13;
                iVar9 = kernel_recvmsg(_segment.ehdr,&puStack_2a0,&puStack_2b0,1,0x1000,0x40);
            } while (iVar9 != -0xb);
        }
        uVar14 = kfree(puVar13);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_190) {
        return uVar14;
    }
    __stack_chk_fail();
    uVar25 = tpidr_el2;
    *extraout_x18_01 = 0x8003194;
    uVar14 = kthread_queue_work(in_tmp_ldXn,0x80002f8,0x8000330);
    return uVar14;
}


// ===== sym.qrtr_ns_init @ 0x08001ff0 (size 668) =====

//WARNING: Removing unreachable block (ram,0x08002f70)

uint64_t sym.qrtr_ns_init(void)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t *puVar7;
    ulong in_tmp_ldXn;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    int *piVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    uint *puVar17;
    uint *puVar18;
    ulong uVar19;
    char *pcVar20;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong *puVar24;
    ulong unaff_x30;
    ulong uVar25;
    uint32_t *puStack_270;
    ulong uStack_268;
    ulong *puStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    uint32_t auStack_1f8 [2];
    ulong uStack_1f0;
    uint uStack_1e8;
    ulong uStack_1e0;
    ulong *puStack_1d8;
    ulong uStack_1d0;
    int64_t *piStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    uint32_t uStack_160;
    uint32_t uStack_15c;
    uint32_t uStack_158;
    int64_t iStack_150;
    uchar *puStack_140;
    code *pcStack_138;
    uint uStack_d4;
    ulong uStack_d0;
    uint uStack_c8;
    uint *puStack_c0;
    ulong uStack_b8;
    code *pcStack_b0;
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
    uint uStack_50;
    ulong uStack_4c;
    ulong uStack_44;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_38 = *(iVar16 + 0x5e0);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d4 = 0x100000;
    *0x80002e8 = 0x80002e8;
    *0x80002f0 = 0x80002e8;
    __kthread_init_worker(0x80002f8,"(&qrtr_ns.kworker)->lock",obj.qrtr_ns_init.__key);
    *0x8000348 = 0;
    *0x8000350 = 0;
    *0x8000330 = 0x8000330;
    *0x8000338 = 0x8000330;
    *0x8000340 = sym.qrtr_ns_worker.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
    _segment.ehdr = ipc_log_context_create(8,"qrtr_ns",0);
    uVar8 = sock_create_kern(init_net,0x2a,2,0x2a,reloc.__traceiter_qrtr_ns_server_add.cfi_jt);
    if (uVar8 < 0) {
        uVar21 = uVar8;
    }
    else {
        uVar8 = kernel_getsockname(_segment.ehdr,&uStack_d0);
        uVar21 = uVar8;
        if (uVar8 < 0) {
            _printk(0x8000ae5,"qrtr_ns_init");
        }
        else {
            uVar12 = kthread_create_on_node(sym.kthread_worker_fn.cfi_jt,0x80002f8,0xffffffff,"qrtr_ns");
            if (uVar12 < 0xfffffffffffff001) {
                wake_up_process(uVar12);
                iVar16 = _reloc.__traceiter_qrtr_ns_server_add.cfi_jt;
                uStack_c8 = 0xfffffffe;
                *0x8000358 = uVar12;
                *(*(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt + 0x18) + 0x2d8) =
                     sym.qrtr_ns_data_ready.6f5da6878d0fb727712a6154d8620cf4.cfi_jt;
                *0x8000360 = uStack_d0._4_4_;
                uVar8 = kernel_bind(iVar16,&uStack_d0,0xc);
                if (uVar8 < 0) {
                    uVar21 = uVar8;
                    _printk(0x8000a32,"qrtr_ns_init");
                }
                else {
                    sock_setsockopt(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,1,0x21,&uStack_d4,1,4);
                    _reloc.__traceiter_qrtr_ns_message.cfi_jt = 0x2a;
                    *0x80002dc = 0xfffffffeffffffff;
                    puStack_c0 = &uStack_50;
                    uStack_60 = 0;
                    uStack_58 = 0;
                    uStack_70 = 0;
                    uStack_68 = 0;
                    uStack_b8 = 0x14;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_4c = 0;
                    uStack_44 = 0;
                    uStack_50 = 2;
                    pcStack_b0 = reloc.__traceiter_qrtr_ns_message.cfi_jt;
                    uStack_a8 = 0xc;
                    uVar8 = kernel_sendmsg(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,&pcStack_b0,&puStack_c0,1,
                                           0x14);
                    if (-1 < uVar8) {
                        uVar21 = 0;
                        goto code_r0x08002254;
                    }
                    uVar21 = uVar8;
                    _printk(0x8000f16,"say_hello",uVar21);
                }
                kthread_stop(_segment.ehdr);
            }
            else {
                _segment.ehdr = uVar12;
                _printk(0x8000e98,"qrtr_ns_init",uVar12);
            }
        }
        sock_release(_segment.ehdr);
    }
code_r0x08002254:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_38) {
        return uVar21;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qrtr_ns_worker;
    pcStack_138 = sym.qrtr_ns_worker;
    iVar16 = sp_el0;
    iStack_150 = *(iVar16 + 0x5e0);
    puStack_260 = &uStack_200;
    auStack_1f8[0] = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_258 = 0xc;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_250 = 0;
    puStack_140 = &stack0xffffffffffffffd0;
    puVar13 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x1000);
    uVar21 = 0;
    if (puVar13 != NULL) {
        uStack_268 = 0x1000;
        puStack_270 = puVar13;
        iVar9 = kernel_recvmsg(_segment.ehdr,&puStack_260,&puStack_270,1,0x1000,0x40);
        if (iVar9 != -0xb) {
            puVar24 = &uStack_168 | 4;
            uVar25 = sp_el0;
            do {
                if (iVar9 < 0) {
                    _printk(0x8000d15,"qrtr_ns_worker",iVar9);
                    break;
                }
                uVar4 = *puVar13;
                uVar5 = *puVar13;
                uVar8 = uVar5 & 0xfffffffe;
                if (uVar8 == 2) {
                    ipc_log_string(_segment.ehdr,"cmd:0x%x node[0x%x]\n",uVar5,uStack_200._4_4_);
                }
                else {
                    if (uVar5 == 6) {
                        uVar8 = puVar13[1];
                        uVar2 = puVar13[2];
                        pcVar20 = "cmd:0x%x addr[0x%x:0x%x]\n";
                    }
                    else {
                        if (uVar8 != 10) {
                            if (uVar8 == 4) {
                                ipc_log_string(_segment.ehdr,"cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",uVar5,
                                               puVar13[1],puVar13[2],puVar13[3],puVar13[4],in_x7,uVar25);
                            }
                            goto code_r0x0800249c;
                        }
                        uVar8 = puVar13[1];
                        uVar2 = puVar13[2];
                        pcVar20 = "cmd:0x%x SVC[0x%x:0x%x]\n";
                    }
                    ipc_log_string(_segment.ehdr,pcVar20,uVar5,uVar8,uVar2);
                }
code_r0x0800249c:
                uVar21 = _segment.ehdr;
                uVar8 = uStack_200._4_4_;
                iVar16 = uStack_200;
                switch(uVar4) {
                case 2:
                    puStack_1d8 = &uStack_168;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_188 = 0;
                    uStack_180 = 0;
                    uStack_168 = CONCAT44(uStack_168._4_4_,2);
                    uStack_198 = 0;
                    uStack_190 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    piStack_1c8 = &uStack_200;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    uStack_1d0 = 0x14;
                    *puVar24 = 0;
                    puVar24[1] = 0;
                    uStack_1c0 = 0xc;
                    iVar9 = kernel_sendmsg(uVar21,&piStack_1c8,&puStack_1d8,1,0x14);
                    if (iVar9 < 0) {
                        uVar19 = 0x8000f16;
                        pcVar20 = "say_hello";
code_r0x080030b4:
                        _printk(uVar19,pcVar20,iVar9);
                        goto code_r0x080030b8;
                    }
                    piStack_1c8 = NULL;
                    uStack_168 = 0;
                    piVar14 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_168,
                                      0xffffffffffffffff,8);
                    iVar16 = uStack_200;
                    while (piVar14 != NULL) {
                        uStack_200._4_4_ = iVar16 >> 0x20;
                        uStack_200 = iVar16;
                        if (*piVar14 == uStack_200._4_4_) {
                            _printk(0x8000b14,"announce_servers");
                        }
                        else {
                            piStack_1c8 = NULL;
                            iVar16 = xa_find(piVar14 + 2,&piStack_1c8,0xffffffffffffffff,8);
                            while (iVar16 != 0) {
                                iVar9 = sym.service_announce_new(&uStack_200,iVar16);
                                if ((iVar9 < 0) && (iVar9 != -0x13)) {
                                    _printk(0x8000da4,"announce_servers",iVar9);
                                    goto code_r0x08002f60;
                                }
                                iVar16 = xa_find_after(piVar14 + 2,&piStack_1c8,0xffffffffffffffff,8);
                            }
                        }
                        piVar14 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_168,
                                                0xffffffffffffffff,8);
                        iVar16 = uStack_200;
                    }
                    break;
                case 3:
                    puStack_1d8 = &uStack_168;
                    uStack_158 = 0;
                    uStack_168 = 0;
                    uStack_160 = 0;
                    uStack_15c = 0;
                    uStack_1e8 = 0;
                    uStack_1f0 = 0;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_188 = 0;
                    uStack_180 = 0;
                    uStack_198 = 0;
                    uStack_190 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    piStack_1c8 = NULL;
                    uStack_1c0 = 0;
                    uStack_1d0 = 0x14;
                    puVar15 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uStack_200._4_4_);
                    if (puVar15 == NULL) {
                        iVar16 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar16 = 0x30;
                        }
                        puVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                        iVar16 = uStack_200;
                        if (puVar15 == NULL) break;
                        *puVar15 = uVar8;
                        puVar15[2] = 0;
                        puVar15[3] = 0;
                        puVar15[4] = 0;
                        puVar15[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar15,0xa20);
                    }
                    uStack_1e0 = 0;
                    iVar16 = xa_find(puVar15 + 2,&uStack_1e0,0xffffffffffffffff,8);
                    while (iVar16 != 0) {
                        sym.server_del(puVar15,*(iVar16 + 0xc));
                        iVar16 = xa_find_after(puVar15 + 2,&uStack_1e0,0xffffffffffffffff,8);
                    }
                    uVar6 = _segment.ehdr;
                    uVar21 = _segment.ehdr & 0xffffffff;
                    puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar21);
                    if (puVar17 == NULL) {
                        iVar16 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar16 = 0x30;
                        }
                        puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                        iVar16 = uStack_200;
                        if (puVar17 == NULL) break;
                        *puVar17 = uVar6;
                        *(puVar17 + 2) = 0;
                        *(puVar17 + 4) = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar21,puVar17,0xa20);
                    }
                    uStack_158 = 0;
                    uStack_15c = 0;
                    uStack_160 = 0;
                    uStack_1e0 = 0;
                    uStack_168 = CONCAT44(uStack_200._4_4_,3);
                    puVar18 = xa_find(puVar17 + 2,&uStack_1e0,0xffffffffffffffff,8);
                    while (iVar16 = uStack_200, puVar18 != NULL) {
                        uStack_1e8 = puVar18[3];
                        uStack_1f0._2_6_ = uStack_1f0 >> 0x10;
                        uStack_1f0 = CONCAT62(uStack_1f0._2_6_,0x2a);
                        uStack_1f0 = CONCAT44(puVar18[2],uStack_1f0);
                        uStack_1c0._4_4_ = uStack_1c0 >> 0x20;
                        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,0xc);
                        piStack_1c8 = &uStack_1f0;
                        iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_1c8,&puStack_1d8,1,0x14);
                        if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                           (iVar10 = ___ratelimit(obj.ctrl_cmd_bye._rs,"ctrl_cmd_bye"), iVar10 != 0)) {
                            _printk(0x8000c24,"ctrl_cmd_bye",*puVar18,puVar18[1],puVar18[3],iVar9);
                        }
                        puVar18 = xa_find_after(puVar17 + 2,&uStack_1e0,0xffffffffffffffff,8);
                    }
                    break;
                case 4:
                    uVar4 = puVar13[1];
                    uVar8 = puVar13[2];
                    puVar15 = auStack_1f8;
                    if (uStack_200._4_4_ != _segment.ehdr) {
                        puVar15 = puVar13 + 4;
                    }
                    uVar5 = uStack_200._4_4_;
                    if (uStack_200._4_4_ != _segment.ehdr) {
                        uVar5 = puVar13[3];
                    }
                    puVar17 = sym.server_add(uVar4,uVar8,uVar5,*puVar15);
                    if (puVar17 != NULL) {
                        if (puVar17[2] == _segment.ehdr) {
                            iVar9 = sym.service_announce_new(0x80002d8,puVar17);
                            if (iVar9 < 0) {
                                uVar19 = 0x8000da4;
                                pcVar20 = "ctrl_cmd_new_server";
                                goto code_r0x080030b4;
                            }
                        }
                        else {
                            iVar9 = 0;
                        }
                        piVar22 = *0x80002e8;
                        iVar16 = uStack_200;
                        if (*0x80002e8 == 0x80002e8) break;
                        do {
                            if (((*(piVar22 + -3) == 0) || (*(piVar22 + -3) == uVar4)) &&
                               ((*(piVar22 + -0x14) == 0 || (*(piVar22 + -0x14) == uVar8)))) {
                                uStack_178 = 0;
                                uStack_170 = 0;
                                uStack_188 = 0;
                                uStack_180 = 0;
                                piStack_1c8 = piVar22 + -2;
                                uStack_198 = 0;
                                uStack_190 = 0;
                                uStack_1a8 = 0;
                                uStack_1a0 = 0;
                                uStack_1b8 = 0;
                                uStack_1b0 = 0;
                                uStack_1d0 = 0x14;
                                uStack_168 = CONCAT44(*puVar17,4);
                                uStack_160 = puVar17[1];
                                uStack_15c = puVar17[2];
                                uStack_1c0 = 0xc;
                                uStack_158 = puVar17[3];
                                puStack_1d8 = &uStack_168;
                                iVar10 = kernel_sendmsg(_segment.ehdr,&piStack_1c8,&puStack_1d8,1,0x14);
                                if (((iVar10 < 0) && (iVar10 != -0x13)) &&
                                   (iVar11 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar11 != 0)) {
                                    _printk(0x8000cc7,"lookup_notify",iVar10);
                                }
                            }
                            piVar22 = *piVar22;
                        } while (piVar22 != 0x80002e8);
code_r0x08002f60:
                        iVar16 = uStack_200;
                        if (-1 < iVar9) break;
                    }
                    goto code_r0x080030b8;
                case 5:
                    puVar15 = auStack_1f8;
                    if (uStack_200._4_4_ != _segment.ehdr) {
                        uVar8 = puVar13[3];
                        puVar15 = puVar13 + 4;
                    }
                    uVar4 = *puVar15;
                    puVar15 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8);
                    if (puVar15 == NULL) {
                        iVar16 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar16 = 0x30;
                        }
                        puVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                        if (puVar15 == NULL) goto code_r0x080030b8;
                        *puVar15 = uVar8;
                        puVar15[2] = 0;
                        puVar15[3] = 0;
                        puVar15[4] = 0;
                        puVar15[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar15,0xa20);
                    }
                    sym.server_del(puVar15,uVar4);
                    iVar16 = uStack_200;
                    break;
                case 6:
                    uVar8 = puVar13[1];
                    uVar4 = puVar13[2];
                    uStack_158 = 0;
                    uStack_168 = 0;
                    uStack_160 = 0;
                    uStack_15c = 0;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_188 = 0;
                    uStack_180 = 0;
                    puStack_1d8 = &uStack_168;
                    uStack_198 = 0;
                    uStack_190 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    piStack_1c8 = NULL;
                    uStack_1c0 = 0;
                    uStack_1e8 = 0;
                    uStack_1f0 = 0;
                    uStack_1d0 = 0x14;
                    piVar22 = *0x80002e8;
                    if ((uStack_200._4_4_ != _segment.ehdr) || (auStack_1f8[0] == uVar4)) {
                        while (piVar23 = piVar22, piVar23 != 0x80002e8) {
                            piVar22 = *piVar23;
                            if ((*(piVar23 + -0xc) == uVar8) && (*(piVar23 + -1) == uVar4)) {
                                uVar21 = __list_del_entry_valid(piVar23);
                                if ((uVar21 & 1) != 0) {
                                    iVar16 = *piVar23;
                                    piVar3 = piVar23[1];
                                    *(iVar16 + 8) = piVar3;
                                    *piVar3 = iVar16;
                                }
                                *piVar23 = -0x2152ffffffffff00;
                                piVar23[1] = -0x2152fffffffffede;
                                kfree(piVar23 + -3);
                            }
                        }
                        puVar15 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8);
                        if (puVar15 == NULL) {
                            iVar16 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar16 = 0x30;
                            }
                            puVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                            if (puVar15 != NULL) {
                                *puVar15 = uVar8;
                                puVar15[2] = 0;
                                puVar15[3] = 0;
                                puVar15[4] = 0;
                                puVar15[5] = 0;
                                xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar8,puVar15,0xa20);
                                goto code_r0x08002ce8;
                            }
                        }
                        else {
code_r0x08002ce8:
                            sym.server_del(puVar15,uVar4);
                        }
                        uVar6 = _segment.ehdr;
                        uVar21 = _segment.ehdr & 0xffffffff;
                        puVar17 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar21);
                        if (puVar17 == NULL) {
                            iVar16 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar16 = 0x30;
                            }
                            puVar17 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xb20,0x18);
                            iVar16 = uStack_200;
                            if (puVar17 == NULL) break;
                            *puVar17 = uVar6;
                            *(puVar17 + 2) = 0;
                            *(puVar17 + 4) = 0;
                            xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar21,puVar17,0xa20);
                        }
                        uStack_15c = 0;
                        uStack_158 = 0;
                        uStack_168 = CONCAT44(uVar8,6);
                        uStack_1e0 = 0;
                        uStack_160 = uVar4;
                        puVar18 = xa_find(puVar17 + 2,&uStack_1e0,0xffffffffffffffff,8);
                        iVar9 = 0;
                        if (puVar18 != NULL) {
                            do {
                                uStack_1e8 = puVar18[3];
                                uStack_1f0 = CONCAT62(uStack_1f0._2_6_,0x2a);
                                uStack_1f0 = CONCAT44(puVar18[2],uStack_1f0);
                                uStack_1c0 = CONCAT44(uStack_1c0._4_4_,0xc);
                                piStack_1c8 = &uStack_1f0;
                                iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_1c8,&puStack_1d8,1,0x14);
                                if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                   (iVar10 = ___ratelimit(obj.ctrl_cmd_del_client._rs,"ctrl_cmd_del_client"),
                                   iVar10 != 0)) {
                                    _printk(0x8000dd5,"ctrl_cmd_del_client",*puVar18,puVar18[1],puVar18[3],iVar9);
                                }
                                puVar18 = xa_find_after(puVar17 + 2,&uStack_1e0,0xffffffffffffffff,8);
                                iVar9 = 0;
                            } while (puVar18 != NULL);
                        }
                        goto code_r0x08002f60;
                    }
                    goto code_r0x080030b8;
                case 10:
                    uVar8 = puVar13[1];
                    uVar4 = puVar13[2];
                    uStack_1e0 = 0;
                    if (uStack_200._4_4_ == _segment.ehdr) {
                        iVar16 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar16 = 0x30;
                        }
                        puVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xdc0,0x28);
                        if (puVar15 != NULL) {
                            puVar1 = puVar15 + 6;
                            *(puVar15 + 2) = uStack_200;
                            puVar7 = *0x80002f0;
                            puVar15[4] = auStack_1f8[0];
                            *puVar15 = uVar8;
                            puVar15[1] = uVar4;
                            uVar21 = __list_add_valid(puVar1,puVar7);
                            if ((uVar21 & 1) != 0) {
                                *0x80002f0 = puVar1;
                                puVar15[6] = 0x80002e8;
                                puVar15[7] = 0;
                                *(puVar15 + 8) = puVar7;
                                *puVar7 = puVar1;
                            }
                            uStack_1f0 = 0;
                            iVar16 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&uStack_1f0,
                                             0xffffffffffffffff,8);
                            uVar21 = _segment.ehdr;
                            while (_segment.ehdr = uVar21, iVar16 != 0) {
                                uStack_1e0 = 0;
                                puVar15 = xa_find(iVar16 + 8,&uStack_1e0,0xffffffffffffffff,8);
                                while (puVar15 != NULL) {
                                    if ((uVar8 == 0) || (*puVar15 == uVar8)) {
                                        uVar5 = 0;
                                        if (uVar4 != 0) {
                                            uVar5 = puVar15[1];
                                        }
                                        if (uVar5 == uVar4) {
                                            uStack_178 = 0;
                                            uStack_170 = 0;
                                            uStack_188 = 0;
                                            uStack_180 = 0;
                                            uStack_198 = 0;
                                            uStack_190 = 0;
                                            uStack_1a8 = 0;
                                            uStack_1a0 = 0;
                                            uStack_1b8 = 0;
                                            uStack_1b0 = 0;
                                            uStack_1d0 = 0x14;
                                            *puVar24 = 0;
                                            puVar24[1] = 0;
                                            uStack_168 = CONCAT44(*puVar15,4);
                                            uStack_160 = puVar15[1];
                                            uStack_15c = puVar15[2];
                                            uStack_158 = puVar15[3];
                                            piStack_1c8 = &uStack_200;
                                            uStack_1c0 = 0xc;
                                            puStack_1d8 = &uStack_168;
                                            iVar9 = kernel_sendmsg(_segment.ehdr,&piStack_1c8,&puStack_1d8,1,0x14);
                                            if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                               (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"),
                                               iVar10 != 0)) {
                                                _printk(0x8000cc7,"lookup_notify",iVar9);
                                            }
                                        }
                                    }
                                    puVar15 = xa_find_after(iVar16 + 8,&uStack_1e0,0xffffffffffffffff,8);
                                }
                                iVar16 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,
                                                       &uStack_1f0,0xffffffffffffffff,8);
                                uVar21 = _segment.ehdr;
                            }
                            uStack_168._4_4_ = uStack_168 >> 0x20;
                            uStack_168 = CONCAT44(uStack_168._4_4_,4);
                            piStack_1c8 = &uStack_200;
                            uStack_178 = 0;
                            uStack_170 = 0;
                            uStack_188 = 0;
                            uStack_180 = 0;
                            uStack_198 = 0;
                            uStack_190 = 0;
                            uStack_1a8 = 0;
                            uStack_1a0 = 0;
                            uStack_1b8 = 0;
                            uStack_1b0 = 0;
                            uStack_1d0 = 0x14;
                            *puVar24 = 0;
                            puVar24[1] = 0;
                            uStack_1c0 = 0xc;
                            puStack_1d8 = &uStack_168;
                            iVar9 = kernel_sendmsg(uVar21,&piStack_1c8,&puStack_1d8,1,0x14);
                            iVar16 = uStack_200;
                            if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                               (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar16 = uStack_200,
                               iVar10 != 0)) {
                                _printk(0x8000cc7,"lookup_notify",iVar9);
                                iVar16 = uStack_200;
                            }
                            break;
                        }
                    }
code_r0x080030b8:
                    _printk(0x8000a99,"qrtr_ns_worker",uStack_200._4_4_,auStack_1f8[0]);
                    iVar16 = uStack_200;
                    break;
                case 0xb:
                    if (*0x80002e8 != 0x80002e8) {
                        uVar8 = puVar13[1];
                        uVar4 = puVar13[2];
                        piVar22 = *0x80002e8;
                        do {
                            piVar23 = *piVar22;
                            if ((((*(piVar22 + -0xc) == uStack_200._4_4_) && (*(piVar22 + -1) == auStack_1f8[0])) &&
                                (*(piVar22 + -3) == uVar8)) &&
                               ((*(piVar22 + -0x14) == 0 || (*(piVar22 + -0x14) == uVar4)))) {
                                uVar21 = __list_del_entry_valid(piVar22);
                                if ((uVar21 & 1) != 0) {
                                    iVar16 = *piVar22;
                                    piVar3 = piVar22[1];
                                    *(iVar16 + 8) = piVar3;
                                    *piVar3 = iVar16;
                                }
                                *piVar22 = -0x2152ffffffffff00;
                                piVar22[1] = -0x2152fffffffffede;
                                kfree(piVar22 + -3);
                            }
                            piVar22 = piVar23;
                            iVar16 = uStack_200;
                        } while (piVar23 != 0x80002e8);
                    }
                }
                uStack_200 = iVar16;
                uStack_268 = 0x1000;
                puStack_270 = puVar13;
                iVar9 = kernel_recvmsg(_segment.ehdr,&puStack_260,&puStack_270,1,0x1000,0x40);
            } while (iVar9 != -0xb);
        }
        uVar21 = kfree(puVar13);
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_150) {
        return uVar21;
    }
    __stack_chk_fail();
    uVar25 = tpidr_el2;
    *extraout_x18_00 = 0x8003194;
    uVar21 = kthread_queue_work(in_tmp_ldXn,0x80002f8,0x8000330);
    return uVar21;
}


// ===== sym.qrtr_ns_worker @ 0x0800228c (size 3872) =====

//WARNING: Removing unreachable block (ram,0x08002f70)

void sym.qrtr_ns_worker(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int iVar9;
    int iVar10;
    uint32_t *puVar11;
    int *piVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint *puVar16;
    ulong uVar17;
    char *pcVar18;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar19;
    int64_t *piVar20;
    ulong *puVar21;
    ulong unaff_x30;
    ulong uVar22;
    uint32_t *puStack_190;
    ulong uStack_188;
    uchar *puStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uint32_t auStack_118 [2];
    ulong uStack_110;
    uint uStack_108;
    ulong uStack_100;
    uchar *puStack_f8;
    ulong uStack_f0;
    int64_t *piStack_e8;
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
    uint32_t uStack_80;
    uint32_t uStack_7c;
    uint32_t uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_70 = *(iVar14 + 0x5e0);
    puStack_180 = &stack0xfffffffffffffee0;
    auStack_118[0] = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_178 = 0xc;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_170 = 0;
    puVar11 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x1000);
    if (puVar11 != NULL) {
        uStack_188 = 0x1000;
        puStack_190 = puVar11;
        iVar8 = kernel_recvmsg(CONCAT44(*0x8000004,_segment.ehdr),&stack0xfffffffffffffe80,&stack0xfffffffffffffe70,
                               1,0x1000,0x40);
        if (iVar8 != -0xb) {
            puVar21 = &stack0xffffffffffffff78 | 4;
            uVar22 = sp_el0;
            do {
                if (iVar8 < 0) {
                    _printk(0x8000d15,"qrtr_ns_worker",iVar8);
                    break;
                }
                uVar5 = *puVar11;
                uVar6 = *puVar11;
                uVar2 = uVar6 & 0xfffffffe;
                if (uVar2 == 2) {
                    ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"cmd:0x%x node[0x%x]\n",uVar6,uStack_120._4_4_
                                  );
                }
                else {
                    if (uVar6 == 6) {
                        uVar2 = puVar11[1];
                        uVar3 = puVar11[2];
                        pcVar18 = "cmd:0x%x addr[0x%x:0x%x]\n";
                    }
                    else {
                        if (uVar2 != 10) {
                            if (uVar2 == 4) {
                                ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),
                                               "cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",uVar6,puVar11[1],
                                               puVar11[2],puVar11[3],puVar11[4],in_x7,uVar22);
                            }
                            goto code_r0x0800249c;
                        }
                        uVar2 = puVar11[1];
                        uVar3 = puVar11[2];
                        pcVar18 = "cmd:0x%x SVC[0x%x:0x%x]\n";
                    }
                    ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),pcVar18,uVar6,uVar2,uVar3);
                }
code_r0x0800249c:
                uVar2 = uStack_120._4_4_;
                iVar14 = uStack_120;
    //switch table (10 cases) at 0x8000a00
                switch(uVar5) {
                case 2:
                    puStack_f8 = &stack0xffffffffffffff78;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_88 = CONCAT44(uStack_88._4_4_,2);
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uVar17 = CONCAT44(*0x8000004,_segment.ehdr);
                    piStack_e8 = &stack0xfffffffffffffee0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_f0 = 0x14;
                    *puVar21 = 0;
                    puVar21[1] = 0;
                    uStack_e0 = 0xc;
                    iVar8 = kernel_sendmsg(uVar17,&stack0xffffffffffffff18,&stack0xffffffffffffff08,1,0x14);
                    if (iVar8 < 0) {
                        uVar17 = 0x8000f16;
                        pcVar18 = "say_hello";
code_r0x080030b4:
                        _printk(uVar17,pcVar18,iVar8);
                        goto code_r0x080030b8;
                    }
                    piStack_e8 = NULL;
                    uStack_88 = 0;
                    piVar12 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,&stack0xffffffffffffff78,
                                      0xffffffffffffffff,8);
                    iVar14 = uStack_120;
                    while (piVar12 != NULL) {
                        uStack_120._4_4_ = iVar14 >> 0x20;
                        uStack_120 = iVar14;
                        if (*piVar12 == uStack_120._4_4_) {
                            _printk(0x8000b14,"announce_servers");
                        }
                        else {
                            piStack_e8 = NULL;
                            iVar14 = xa_find(piVar12 + 2,&stack0xffffffffffffff18,0xffffffffffffffff,8);
                            while (iVar14 != 0) {
                                iVar8 = sym.service_announce_new(&stack0xfffffffffffffee0,iVar14);
                                if ((iVar8 < 0) && (iVar8 != -0x13)) {
                                    _printk(0x8000da4,"announce_servers",iVar8);
                                    goto code_r0x08002f60;
                                }
                                iVar14 = xa_find_after(piVar12 + 2,&stack0xffffffffffffff18,0xffffffffffffffff,8);
                            }
                        }
                        piVar12 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,
                                                &stack0xffffffffffffff78,0xffffffffffffffff,8);
                        iVar14 = uStack_120;
                    }
                    break;
                case 3:
                    puStack_f8 = &stack0xffffffffffffff78;
                    uStack_78 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_7c = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
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
                    piStack_e8 = NULL;
                    uStack_e0 = 0;
                    uStack_f0 = 0x14;
                    puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uStack_120._4_4_);
                    if (puVar13 == NULL) {
                        iVar14 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar14 = 0x30;
                        }
                        puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                        iVar14 = uStack_120;
                        if (puVar13 == NULL) break;
                        *puVar13 = uVar2;
                        puVar13[2] = 0;
                        puVar13[3] = 0;
                        puVar13[4] = 0;
                        puVar13[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2,puVar13,0xa20);
                    }
                    uStack_100 = 0;
                    iVar14 = xa_find(puVar13 + 2,&stack0xffffffffffffff00,0xffffffffffffffff,8);
                    uVar2 = _segment.ehdr;
                    while (_segment.ehdr = uVar2, iVar14 != 0) {
                        sym.server_del(puVar13,*(iVar14 + 0xc));
                        iVar14 = xa_find_after(puVar13 + 2,&stack0xffffffffffffff00,0xffffffffffffffff,8);
                        uVar2 = _segment.ehdr;
                    }
                    puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2);
                    if (puVar13 == NULL) {
                        iVar14 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar14 = 0x30;
                        }
                        puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                        iVar14 = uStack_120;
                        if (puVar13 == NULL) break;
                        *puVar13 = uVar2;
                        puVar13[2] = 0;
                        puVar13[3] = 0;
                        puVar13[4] = 0;
                        puVar13[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2,puVar13,0xa20);
                    }
                    uStack_78 = 0;
                    uStack_7c = 0;
                    uStack_80 = 0;
                    uStack_100 = 0;
                    uStack_88 = CONCAT44(uStack_120._4_4_,3);
                    puVar16 = xa_find(puVar13 + 2,&stack0xffffffffffffff00,0xffffffffffffffff,8);
                    while (iVar14 = uStack_120, puVar16 != NULL) {
                        uStack_108 = puVar16[3];
                        uStack_110._2_6_ = uStack_110 >> 0x10;
                        uStack_110 = CONCAT62(uStack_110._2_6_,0x2a);
                        uStack_110 = CONCAT44(puVar16[2],uStack_110);
                        uStack_e0._4_4_ = uStack_e0 >> 0x20;
                        uStack_e0 = CONCAT44(uStack_e0._4_4_,0xc);
                        piStack_e8 = &stack0xfffffffffffffef0;
                        iVar8 = kernel_sendmsg(CONCAT44(*0x8000004,_segment.ehdr),&stack0xffffffffffffff18,
                                               &stack0xffffffffffffff08,1,0x14);
                        if (((iVar8 < 0) && (iVar8 != -0x13)) &&
                           (iVar9 = ___ratelimit(obj.ctrl_cmd_bye._rs,"ctrl_cmd_bye"), iVar9 != 0)) {
                            _printk(0x8000c24,"ctrl_cmd_bye",*puVar16,puVar16[1],puVar16[3],iVar8);
                        }
                        puVar16 = xa_find_after(puVar13 + 2,&stack0xffffffffffffff00,0xffffffffffffffff,8);
                    }
                    break;
                case 4:
                    uVar5 = puVar11[1];
                    uVar2 = puVar11[2];
                    puVar13 = &stack0xfffffffffffffee8;
                    if (uStack_120._4_4_ != _segment.ehdr) {
                        puVar13 = puVar11 + 4;
                    }
                    uVar6 = uStack_120._4_4_;
                    if (uStack_120._4_4_ != _segment.ehdr) {
                        uVar6 = puVar11[3];
                    }
                    puVar16 = sym.server_add(uVar5,uVar2,uVar6,*puVar13);
                    if (puVar16 != NULL) {
                        if (puVar16[2] == _segment.ehdr) {
                            iVar8 = sym.service_announce_new(0x80002d8,puVar16);
                            if (iVar8 < 0) {
                                uVar17 = 0x8000da4;
                                pcVar18 = "ctrl_cmd_new_server";
                                goto code_r0x080030b4;
                            }
                        }
                        else {
                            iVar8 = 0;
                        }
                        piVar19 = *0x80002e8;
                        iVar14 = uStack_120;
                        if (*0x80002e8 == 0x80002e8) break;
                        do {
                            if (((*(piVar19 + -3) == 0) || (*(piVar19 + -3) == uVar5)) &&
                               ((*(piVar19 + -0x14) == 0 || (*(piVar19 + -0x14) == uVar2)))) {
                                uStack_98 = 0;
                                uStack_90 = 0;
                                uStack_a8 = 0;
                                uStack_a0 = 0;
                                piStack_e8 = piVar19 + -2;
                                uStack_b8 = 0;
                                uStack_b0 = 0;
                                uStack_c8 = 0;
                                uStack_c0 = 0;
                                uStack_d8 = 0;
                                uStack_d0 = 0;
                                uStack_f0 = 0x14;
                                uStack_88 = CONCAT44(*puVar16,4);
                                uStack_80 = puVar16[1];
                                uStack_7c = puVar16[2];
                                uStack_e0 = 0xc;
                                uStack_78 = puVar16[3];
                                puStack_f8 = &stack0xffffffffffffff78;
                                iVar9 = kernel_sendmsg(CONCAT44(*0x8000004,_segment.ehdr),&stack0xffffffffffffff18,
                                                       &stack0xffffffffffffff08,1,0x14);
                                if (((iVar9 < 0) && (iVar9 != -0x13)) &&
                                   (iVar10 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar10 != 0)) {
                                    _printk(0x8000cc7,"lookup_notify",iVar9);
                                }
                            }
                            piVar19 = *piVar19;
                        } while (piVar19 != 0x80002e8);
code_r0x08002f60:
                        iVar14 = uStack_120;
                        if (-1 < iVar8) break;
                    }
                    goto code_r0x080030b8;
                case 5:
                    puVar13 = &stack0xfffffffffffffee8;
                    if (uStack_120._4_4_ != _segment.ehdr) {
                        uVar2 = puVar11[3];
                        puVar13 = puVar11 + 4;
                    }
                    uVar5 = *puVar13;
                    puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2);
                    if (puVar13 == NULL) {
                        iVar14 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar14 = 0x30;
                        }
                        puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                        if (puVar13 == NULL) goto code_r0x080030b8;
                        *puVar13 = uVar2;
                        puVar13[2] = 0;
                        puVar13[3] = 0;
                        puVar13[4] = 0;
                        puVar13[5] = 0;
                        xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2,puVar13,0xa20);
                    }
                    sym.server_del(puVar13,uVar5);
                    iVar14 = uStack_120;
                    break;
                case 6:
                    uVar2 = puVar11[1];
                    uVar5 = puVar11[2];
                    uStack_78 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_7c = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    puStack_f8 = &stack0xffffffffffffff78;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    piStack_e8 = NULL;
                    uStack_e0 = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
                    uStack_f0 = 0x14;
                    piVar19 = *0x80002e8;
                    if ((uStack_120._4_4_ != _segment.ehdr) || (auStack_118[0] == uVar5)) {
                        while (piVar20 = piVar19, piVar20 != 0x80002e8) {
                            piVar19 = *piVar20;
                            if ((*(piVar20 + -0xc) == uVar2) && (*(piVar20 + -1) == uVar5)) {
                                uVar15 = __list_del_entry_valid(piVar20);
                                if ((uVar15 & 1) != 0) {
                                    iVar14 = *piVar20;
                                    piVar4 = piVar20[1];
                                    *(iVar14 + 8) = piVar4;
                                    *piVar4 = iVar14;
                                }
                                *piVar20 = -0x2152ffffffffff00;
                                piVar20[1] = -0x2152fffffffffede;
                                kfree(piVar20 + -3);
                            }
                        }
                        puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2);
                        if (puVar13 == NULL) {
                            iVar14 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar14 = 0x30;
                            }
                            puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                            if (puVar13 != NULL) {
                                *puVar13 = uVar2;
                                puVar13[2] = 0;
                                puVar13[3] = 0;
                                puVar13[4] = 0;
                                puVar13[5] = 0;
                                xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar2,puVar13,0xa20);
                                goto code_r0x08002ce8;
                            }
                        }
                        else {
code_r0x08002ce8:
                            sym.server_del(puVar13,uVar5);
                        }
                        uVar6 = _segment.ehdr;
                        puVar13 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,_segment.ehdr);
                        if (puVar13 == NULL) {
                            iVar14 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar14 = 0x30;
                            }
                            puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x18);
                            iVar14 = uStack_120;
                            if (puVar13 == NULL) break;
                            *puVar13 = uVar6;
                            puVar13[2] = 0;
                            puVar13[3] = 0;
                            puVar13[4] = 0;
                            puVar13[5] = 0;
                            xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,uVar6,puVar13,0xa20);
                        }
                        uStack_7c = 0;
                        uStack_78 = 0;
                        uStack_88 = CONCAT44(uVar2,6);
                        uStack_100 = 0;
                        uStack_80 = uVar5;
                        puVar16 = xa_find(puVar13 + 2,&stack0xffffffffffffff00,0xffffffffffffffff,8);
                        iVar8 = 0;
                        if (puVar16 != NULL) {
                            do {
                                uStack_108 = puVar16[3];
                                uStack_110 = CONCAT62(uStack_110._2_6_,0x2a);
                                uStack_110 = CONCAT44(puVar16[2],uStack_110);
                                uStack_e0 = CONCAT44(uStack_e0._4_4_,0xc);
                                piStack_e8 = &stack0xfffffffffffffef0;
                                iVar8 = kernel_sendmsg(CONCAT44(*0x8000004,_segment.ehdr),&stack0xffffffffffffff18,
                                                       &stack0xffffffffffffff08,1,0x14);
                                if (((iVar8 < 0) && (iVar8 != -0x13)) &&
                                   (iVar9 = ___ratelimit(obj.ctrl_cmd_del_client._rs,"ctrl_cmd_del_client"),
                                   iVar9 != 0)) {
                                    _printk(0x8000dd5,"ctrl_cmd_del_client",*puVar16,puVar16[1],puVar16[3],iVar8);
                                }
                                puVar16 = xa_find_after(puVar13 + 2,&stack0xffffffffffffff00,0xffffffffffffffff,8);
                                iVar8 = 0;
                            } while (puVar16 != NULL);
                        }
                        goto code_r0x08002f60;
                    }
                    goto code_r0x080030b8;
                case 10:
                    uVar2 = puVar11[1];
                    uVar5 = puVar11[2];
                    uStack_100 = 0;
                    if (uStack_120._4_4_ == _segment.ehdr) {
                        iVar14 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar14 = 0x30;
                        }
                        puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xdc0,0x28);
                        if (puVar13 != NULL) {
                            puVar1 = puVar13 + 6;
                            *(puVar13 + 2) = uStack_120;
                            puVar7 = *0x80002f0;
                            puVar13[4] = auStack_118[0];
                            *puVar13 = uVar2;
                            puVar13[1] = uVar5;
                            uVar15 = __list_add_valid(puVar1,puVar7);
                            if ((uVar15 & 1) != 0) {
                                *0x80002f0 = puVar1;
                                puVar13[6] = 0x80002e8;
                                puVar13[7] = 0;
                                *(puVar13 + 8) = puVar7;
                                *puVar7 = puVar1;
                            }
                            uStack_110 = 0;
                            iVar14 = xa_find(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,
                                             &stack0xfffffffffffffef0,0xffffffffffffffff,8);
                            while (iVar14 != 0) {
                                uStack_100 = 0;
                                puVar13 = xa_find(iVar14 + 8,&stack0xffffffffffffff00,0xffffffffffffffff,8);
                                while (puVar13 != NULL) {
                                    if ((uVar2 == 0) || (*puVar13 == uVar2)) {
                                        uVar6 = 0;
                                        if (uVar5 != 0) {
                                            uVar6 = puVar13[1];
                                        }
                                        if (uVar6 == uVar5) {
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
                                            uStack_f0 = 0x14;
                                            *puVar21 = 0;
                                            puVar21[1] = 0;
                                            uStack_88 = CONCAT44(*puVar13,4);
                                            uStack_80 = puVar13[1];
                                            uStack_7c = puVar13[2];
                                            uStack_78 = puVar13[3];
                                            piStack_e8 = &stack0xfffffffffffffee0;
                                            uStack_e0 = 0xc;
                                            puStack_f8 = &stack0xffffffffffffff78;
                                            iVar8 = kernel_sendmsg(CONCAT44(*0x8000004,_segment.ehdr),
                                                                   &stack0xffffffffffffff18,&stack0xffffffffffffff08,1
                                                                   ,0x14);
                                            if (((iVar8 < 0) && (iVar8 != -0x13)) &&
                                               (iVar9 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"),
                                               iVar9 != 0)) {
                                                _printk(0x8000cc7,"lookup_notify",iVar8);
                                            }
                                        }
                                    }
                                    puVar13 = xa_find_after(iVar14 + 8,&stack0xffffffffffffff00,0xffffffffffffffff,8)
                                    ;
                                }
                                iVar14 = xa_find_after(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,
                                                       &stack0xfffffffffffffef0,0xffffffffffffffff,8);
                            }
                            uVar17 = CONCAT44(*0x8000004,_segment.ehdr);
                            uStack_88._4_4_ = uStack_88 >> 0x20;
                            uStack_88 = CONCAT44(uStack_88._4_4_,4);
                            piStack_e8 = &stack0xfffffffffffffee0;
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
                            uStack_f0 = 0x14;
                            *puVar21 = 0;
                            puVar21[1] = 0;
                            uStack_e0 = 0xc;
                            puStack_f8 = &stack0xffffffffffffff78;
                            iVar8 = kernel_sendmsg(uVar17,&stack0xffffffffffffff18,&stack0xffffffffffffff08,1,0x14);
                            iVar14 = uStack_120;
                            if (((iVar8 < 0) && (iVar8 != -0x13)) &&
                               (iVar9 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar14 = uStack_120,
                               iVar9 != 0)) {
                                _printk(0x8000cc7,"lookup_notify",iVar8);
                                iVar14 = uStack_120;
                            }
                            break;
                        }
                    }
code_r0x080030b8:
                    _printk(0x8000a99,"qrtr_ns_worker",uStack_120._4_4_,auStack_118[0]);
                    iVar14 = uStack_120;
                    break;
                case 0xb:
                    if (*0x80002e8 != 0x80002e8) {
                        uVar2 = puVar11[1];
                        uVar5 = puVar11[2];
                        piVar19 = *0x80002e8;
                        do {
                            piVar20 = *piVar19;
                            if ((((*(piVar19 + -0xc) == uStack_120._4_4_) && (*(piVar19 + -1) == auStack_118[0])) &&
                                (*(piVar19 + -3) == uVar2)) &&
                               ((*(piVar19 + -0x14) == 0 || (*(piVar19 + -0x14) == uVar5)))) {
                                uVar15 = __list_del_entry_valid(piVar19);
                                if ((uVar15 & 1) != 0) {
                                    iVar14 = *piVar19;
                                    piVar4 = piVar19[1];
                                    *(iVar14 + 8) = piVar4;
                                    *piVar4 = iVar14;
                                }
                                *piVar19 = -0x2152ffffffffff00;
                                piVar19[1] = -0x2152fffffffffede;
                                kfree(piVar19 + -3);
                            }
                            piVar19 = piVar20;
                            iVar14 = uStack_120;
                        } while (piVar20 != 0x80002e8);
                    }
                }
                uStack_120 = iVar14;
                uStack_188 = 0x1000;
                puStack_190 = puVar11;
                iVar8 = kernel_recvmsg(CONCAT44(*0x8000004,_segment.ehdr),&stack0xfffffffffffffe80,
                                       &stack0xfffffffffffffe70,1,0x1000,0x40);
            } while (iVar8 != -0xb);
        }
        kfree(puVar11);
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail();
    uVar22 = tpidr_el2;
    *extraout_x18 = 0x8003194;
    kthread_queue_work(in_tmp_ldXn,0x80002f8,0x8000330);
    return;
}


// ===== sym.qrtr_ns_data_ready @ 0x080031ac (size 48) =====

void sym.qrtr_ns_data_ready(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kthread_queue_work(0x80002f8,0x8000330);
    return;
}


// ===== sym.qrtr_ns_remove @ 0x080031dc (size 72) =====

void sym.qrtr_ns_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kthread_flush_worker(0x80002f8);
    kthread_stop(*0x8000358);
    sock_release(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt);
    return;
}


// ===== sym.trace_raw_output_qrtr_ns_service_announce_new @ 0x08003224 (size 112) =====

void sym.trace_raw_output_qrtr_ns_service_announce_new(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"advertising new server [%d:%x]@[%d:%d]\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qrtr_ns_service_announce_del @ 0x08003294 (size 112) =====

void sym.trace_raw_output_qrtr_ns_service_announce_del(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"advertising removal of server [%d:%x]@[%d:%d]\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qrtr_ns_server_add @ 0x08003304 (size 112) =====

void sym.trace_raw_output_qrtr_ns_server_add(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"add server [%d:%x]@[%d:%d]\n",*(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),
                           *(iVar2 + 0x14));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qrtr_ns_message @ 0x08003374 (size 116) =====

void sym.trace_raw_output_qrtr_ns_message(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s from %d:%d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.service_announce_new @ 0x080033e8 (size 416) =====

void sym.service_announce_new(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint extraout_w8;
    int64_t *piVar3;
    uint extraout_w9;
    uint extraout_w10;
    uint extraout_w11;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    uint *puStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
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
    uint uStack_60;
    uint uStack_5c;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    while( true ) {
        ipc_log_string(_segment.ehdr,"%s: [0x%x:0x%x]@[0x%x:0x%x]\n","service_announce_new",*arg2,*(arg2 + 4),
                       *(arg2 + 8),*(arg2 + 0xc));
        puStack_d0 = &uStack_60;
        uStack_5c = *arg2;
        uStack_58 = *(arg2 + 4);
        uStack_c8 = 0x14;
        uStack_50 = *(arg2 + 0xc);
        uStack_60 = 4;
        uStack_b8 = CONCAT44(uStack_b8._4_4_,0xc);
        iStack_c0 = arg1;
        kernel_sendmsg(_segment.ehdr,&iStack_c0,&puStack_d0,1,0x14);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar4 = *0x8003cf8;
            piVar3 = *0x8003cf8;
            while (piVar3 != NULL) {
                (**piVar4)(piVar4[1],extraout_w8,extraout_w9,extraout_w10,extraout_w11);
                piVar4 = piVar4 + 3;
                piVar3 = *piVar4;
            }
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.server_del @ 0x080035a0 (size 468) =====

void sym.server_del(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int *arg1_00;
    uint *puVar6;
    uint extraout_w8;
    int64_t *piVar7;
    uint extraout_w9;
    uint extraout_w10;
    uint extraout_w11;
    ulong *in_x18;
    ulong *extraout_x18;
    int *unaff_x19;
    uint64_t uVar8;
    ulong unaff_x22;
    int64_t *piVar9;
    ulong unaff_x30;
    uint *puStack_1b0;
    ulong uStack_1a8;
    code *pcStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    uint uStack_140;
    uint uStack_13c;
    ulong uStack_138;
    uint uStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    ulong uStack_110;
    uint64_t uStack_108;
    int64_t iStack_100;
    int *piStack_f8;
    uint *puStack_f0;
    ulong uStack_e8;
    int64_t *piStack_e0;
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
    uint uStack_80;
    int iStack_7c;
    int iStack_78;
    int iStack_74;
    int iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    arg1 = arg1 + 8;
    uVar8 = arg2 & 0xffffffff;
    iStack_68 = *(iVar2 + 0x5e0);
    arg1_00 = xa_load(arg1,uVar8);
    piStack_f8 = unaff_x19;
    if (arg1_00 != NULL) {
        xa_erase(arg1,uVar8);
        if (arg1_00[2] == _segment.ehdr) {
            sym.service_announce_del(arg1_00);
        }
        if (*0x80002e8 != 0x80002e8) {
            unaff_x22 = 5;
            arg1 = 0xc;
            uVar8 = 0x8000000;
            piVar9 = *0x80002e8;
            do {
                if (((piVar9[-3] == 0) || (piVar9[-3] == *arg1_00)) &&
                   ((*(piVar9 + -0x14) == 0 || (*(piVar9 + -0x14) == arg1_00[1])))) {
                    uStack_90 = 0;
                    uStack_88 = 0;
                    piStack_e0 = piVar9 + -2;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_e8 = 0x14;
                    uStack_80 = 5;
                    iStack_7c = *arg1_00;
                    iStack_78 = arg1_00[1];
                    iStack_74 = arg1_00[2];
                    uStack_d8 = 0xc;
                    iStack_70 = arg1_00[3];
                    puStack_f0 = &uStack_80;
                    iVar3 = kernel_sendmsg(CONCAT44(*0x8000004,_segment.ehdr),&piStack_e0,&puStack_f0,1,0x14);
                    if (((iVar3 < 0) && (iVar3 != -0x13)) &&
                       (iVar4 = ___ratelimit(obj.lookup_notify._rs,"lookup_notify"), iVar4 != 0)) {
                        _printk(0x8000cc7,"lookup_notify",iVar3);
                    }
                }
                piVar9 = *piVar9;
            } while (piVar9 != 0x80002e8);
        }
        kfree(arg1_00);
        piStack_f8 = arg1_00;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_68) {
        puVar6 = __stack_chk_fail();
        *extraout_x18 = sym.service_announce_del;
        pcStack_118 = sym.service_announce_del;
        iVar2 = sp_el0;
        iStack_128 = *(iVar2 + 0x5e0);
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_198 = 0;
        puStack_120 = &stack0xffffffffffffffa0;
        uStack_110 = unaff_x22;
        uStack_108 = uVar8;
        iStack_100 = arg1;
        while( true ) {
            ipc_log_string(CONCAT44(*0x8000004,_segment.ehdr),"%s: [0x%x:0x%x]@[0x%x:0x%x]\n","service_announce_del"
                           ,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
            puStack_1b0 = &uStack_140;
            uStack_13c = *puVar6;
            uStack_1a8 = 0x14;
            uStack_138 = *(puVar6 + 1);
            uStack_130 = puVar6[3];
            uStack_140 = 5;
            pcStack_1a0 = reloc.__traceiter_qrtr_ns_message.cfi_jt;
            uStack_198 = CONCAT44(uStack_198._4_4_,0xc);
            uVar5 = kernel_sendmsg(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,&pcStack_1a0,&puStack_1b0,1,0x14);
            if (((uVar5 < 0) && (puVar6 = uVar5, uVar5 != 0xffffffed)) &&
               (iVar3 = ___ratelimit(obj.service_announce_del._rs,"service_announce_del"), iVar3 != 0)) {
                _printk(0x8000b81,"service_announce_del",puVar6);
            }
            iVar2 = sp_el0;
            if (*(iVar2 + 0x5e0) == iStack_128) break;
            __stack_chk_fail();
            iVar2 = tpidr_el1;
            if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1)
                != 0) {
                iVar2 = sp_el0;
                *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
                piVar9 = *0x8003d40;
                piVar7 = *0x8003d40;
                while (piVar7 != NULL) {
                    (**piVar9)(piVar9[1],extraout_w8,extraout_w9,extraout_w10,extraout_w11);
                    piVar9 = piVar9 + 3;
                    piVar7 = *piVar9;
                }
                iVar1 = *(iVar2 + 0x10) + -1;
                *(iVar2 + 0x10) = iVar1;
                if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                    preempt_schedule_notrace();
                }
            }
        }
        return;
    }
    return;
}


// ===== sym.service_announce_del @ 0x08003774 (size 476) =====

void sym.service_announce_del(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint extraout_w8;
    int64_t *piVar5;
    uint extraout_w9;
    uint extraout_w10;
    uint extraout_w11;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    uint *puStack_c0;
    ulong uStack_b8;
    code *pcStack_b0;
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
    uint uStack_50;
    uint uStack_4c;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    while( true ) {
        ipc_log_string(_segment.ehdr,"%s: [0x%x:0x%x]@[0x%x:0x%x]\n","service_announce_del",*arg1,*(arg1 + 4),
                       *(arg1 + 8),*(arg1 + 0xc));
        puStack_c0 = &uStack_50;
        uStack_4c = *arg1;
        uStack_b8 = 0x14;
        uStack_48 = *(arg1 + 4);
        uStack_40 = *(arg1 + 0xc);
        uStack_50 = 5;
        pcStack_b0 = reloc.__traceiter_qrtr_ns_message.cfi_jt;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,0xc);
        uVar3 = kernel_sendmsg(_reloc.__traceiter_qrtr_ns_server_add.cfi_jt,&pcStack_b0,&puStack_c0,1,0x14);
        if (((uVar3 < 0) && (arg1 = uVar3, uVar3 != 0xffffffed)) &&
           (iVar4 = ___ratelimit(obj.service_announce_del._rs,"service_announce_del"), iVar4 != 0)) {
            _printk(0x8000b81,"service_announce_del",arg1);
        }
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar6 = *0x8003d40;
            piVar5 = *0x8003d40;
            while (piVar5 != NULL) {
                (**piVar6)(piVar6[1],extraout_w8,extraout_w9,extraout_w10,extraout_w11);
                piVar6 = piVar6 + 3;
                piVar5 = *piVar6;
            }
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.server_add @ 0x08003968 (size 408) =====

int * sym.server_add(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int *piVar2;
    int *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return NULL;
    }
    if (arg4 == 0) {
        return NULL;
    }
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x20);
    if (piVar2 == NULL) {
        return NULL;
    }
    *piVar2 = arg1;
    piVar2[1] = arg2;
    piVar2[2] = arg3;
    piVar2[3] = arg4;
    piVar3 = xa_load(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,arg3 & 0xffffffffU);
    if (piVar3 == NULL) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x18);
        if (piVar3 != NULL) {
            *piVar3 = arg3;
            piVar3[2] = 0;
            piVar3[3] = 0;
            piVar3[4] = 0;
            piVar3[5] = 0;
            xa_store(reloc.__traceiter_qrtr_ns_service_announce_new.cfi_jt,arg3 & 0xffffffffU,piVar3,0xa20);
            goto code_r0x08003a4c;
        }
code_r0x08003af0:
        kfree(piVar2);
        piVar2 = NULL;
    }
    else {
code_r0x08003a4c:
        uVar4 = xa_store(piVar3 + 2,arg4 & 0xffffffff,piVar2,0xcc0);
        if (uVar4 != 0) {
            if ((0xffffffffffffc005 < uVar4) && ((uVar4 & 3) == 2)) {
                _printk(0x8000e5a,"server_add",*piVar2,piVar2[1],uVar4 >> 2);
                goto code_r0x08003af0;
            }
            kfree();
        }
        ipc_log_string(_segment.ehdr,"%s: [0x%x:0x%x]@[0x%x:0x%x]\n","server_add",*piVar2,piVar2[1],piVar2[2],
                       piVar2[3]);
    }
    return piVar2;
}


// ===== sym.__cfi_check_fail @ 0x08003bb8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003bfc

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
    //switch table (4 cases) at 0x8000a28
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003c10);
    (*pcVar1)();
}

