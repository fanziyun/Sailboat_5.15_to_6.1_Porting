// decompiled from mtd_blkdevs by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 452) =====

//WARNING: Switch with 1 destination removed at 0x08002548

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x21fe99ac87f96be0) {
        if (arg1 < -0x2ac316d8df914f8) {
            if (arg1 == -0x4093708e319cc18b) {
                if ((pcVar1 + -0x8001210 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08002508;
            }
            if (arg1 != -0x3257ac40236d799f) goto code_r0x08002508;
            pcVar2 = sym.blktrans_notify_remove.a9bab94dfbdb4770707dd169c24fa637.cfi_jt;
code_r0x08001198:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002508;
        }
        if (arg1 == -0x2ac316d8df914f8) {
            pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
        }
        else {
            if (arg1 != 0x106b543f60d7de6a) goto code_r0x08002508;
            pcVar2 = sym.mtd_queue_rq.a9bab94dfbdb4770707dd169c24fa637.cfi_jt;
        }
    }
    else if (arg1 < 0x3ec62a7e59c75578) {
        if (arg1 == 0x21fe99ac87f96be0) {
            pcVar2 = sym.deregister_mtd_blktrans.cfi_jt;
            goto code_r0x08001198;
        }
        if (arg1 != 0x33199aac1c784c1e) goto code_r0x08002508;
        pcVar2 = sym.blktrans_open.a9bab94dfbdb4770707dd169c24fa637.cfi_jt;
    }
    else if (arg1 == 0x3ec62a7e59c75578) {
        pcVar2 = sym.blktrans_getgeo.a9bab94dfbdb4770707dd169c24fa637.cfi_jt;
    }
    else if (arg1 == 0x50a2d14af647d7f8) {
        pcVar2 = sym.blktrans_release.a9bab94dfbdb4770707dd169c24fa637.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002508;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002508:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800255c);
    (*pcVar1)();
}


// ===== sym.blktrans_open.a9bab94dfbdb4770707dd169c24fa637.cfi_jt @ 0x080011d0 (size 8) =====

int sym.blktrans_open.a9bab94dfbdb4770707dd169c24fa637.cfi_jt(int64_t param_1,uint param_2)

{
    uint32_t *arg1;
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(param_1 + 0x3f0) + 0x58);
    arg1 = piVar8 + 0xd;
    Hint_Prefetch(arg1,2,0,1);
    do {
        uVar2 = *arg1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(arg1,0x10);
        if (bVar4) {
            *arg1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar7 = 2;
code_r0x080020c0:
        refcount_warn_saturate(arg1,uVar7);
    }
    else if ((uVar2 + 1 | uVar2) < 0) {
        uVar7 = 1;
        goto code_r0x080020c0;
    }
    piVar1 = piVar8 + 4;
    mutex_lock(piVar1);
    if (*(piVar8 + 100) == 0) {
        __module_get(*(*piVar8 + 0x88));
        iVar6 = piVar8[3];
        if (iVar6 == 0) goto code_r0x08001f98;
        pcVar9 = *(*piVar8 + 0x48);
        if (pcVar9 != NULL) {
            if (2 < (pcVar9 + -0x8001210 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0xbf6c8f71ce633e75,pcVar9,0x8000250);
            }
            iVar5 = (*pcVar9)(piVar8);
            if (iVar5 != 0) goto code_r0x0800205c;
            iVar6 = piVar8[3];
        }
        iVar5 = __get_mtd_device(iVar6);
        if (iVar5 != 0) {
            pcVar9 = *(*piVar8 + 0x50);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xa7d585a098439650,pcVar9,0x8000270);
                (*pcVar9)(piVar8);
            }
code_r0x0800205c:
            module_put(*(*piVar8 + 0x88));
            mutex_unlock(piVar1);
            sym.kref_put(arg1);
            return iVar5;
        }
        *(piVar8 + 0x16) = param_2;
    }
code_r0x08001f98:
    *(piVar8 + 100) = *(piVar8 + 100) + 1;
    mutex_unlock(piVar1);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        unregister_mtd_user(reloc.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt);
    }
    return;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x080011e0 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blk_cleanup_disk(*(param_1 + 8));
    blk_mq_free_tag_set(*(param_1 + 0x30));
    kfree(*(param_1 + 0x30));
    uVar3 = __list_del_entry_valid(param_1 + -0x60);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(param_1 + -0x60);
        piVar2 = *(param_1 + -0x58);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(param_1 + -0x60) = 0xdead000000000100;
    *(param_1 + -0x58) = 0xdead000000000122;
    kfree(param_1 + -0x68);
    return;
}


// ===== sym.blktrans_notify_remove.a9bab94dfbdb4770707dd169c24fa637.cfi_jt @ 0x080011e8 (size 8) =====

void sym.blktrans_notify_remove.a9bab94dfbdb4770707dd169c24fa637.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    code *pcVar2;
    code *pcVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = _obj.blktrans_majors;
    if (_obj.blktrans_majors != obj.blktrans_majors) {
        do {
            pcVar4 = *(pcVar3 + -0x10);
            while (pcVar1 = pcVar4, pcVar1 != pcVar3 + -0x10) {
                pcVar4 = *pcVar1;
                if (*(pcVar1 + 0x10) == param_1) {
                    pcVar2 = *(pcVar3 + -0x18);
                    __cfi_slowpath_diag(0xa7d585a098439650,pcVar2,0x80002f0);
                    (*pcVar2)(pcVar1 + -8);
                }
            }
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.blktrans_majors);
    }
    return;
}


// ===== sym.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt @ 0x080011f0 (size 8) =====

void sym.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt(char *param_1)

{
    ulong *in_x18;
    code *pcVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*param_1 != '\0') && (pcVar2 = _segment.ehdr, _segment.ehdr != obj.blktrans_majors)) {
        do {
            pcVar1 = *(pcVar2 + -0x20);
            __cfi_slowpath_diag(0xe123d666f7a2be40,pcVar1,0x80002d0);
            (*pcVar1)(pcVar2 + -0x78,param_1);
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.blktrans_majors);
    }
    return;
}


// ===== sym.blktrans_getgeo.a9bab94dfbdb4770707dd169c24fa637.cfi_jt @ 0x080011f8 (size 8) =====

uint sym.blktrans_getgeo.a9bab94dfbdb4770707dd169c24fa637.cfi_jt(int64_t param_1,ulong param_2)

{
    uint uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(param_1 + 0x3f0) + 0x58);
    mutex_lock(piVar2 + 4);
    if (piVar2[3] == 0) {
        uVar1 = 0xfffffffa;
    }
    else {
        pcVar3 = *(*piVar2 + 0x38);
        if (pcVar3 == NULL) {
            uVar1 = 0xffffffe7;
        }
        else {
            __cfi_slowpath_diag(0x73d5a2950338b81d,pcVar3,0x80002b0);
            uVar1 = (*pcVar3)(piVar2,param_2);
        }
    }
    mutex_unlock(piVar2 + 4);
    return uVar1;
}


// ===== sym.blktrans_release.a9bab94dfbdb4770707dd169c24fa637.cfi_jt @ 0x08001200 (size 8) =====

void sym.blktrans_release.a9bab94dfbdb4770707dd169c24fa637.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(param_1 + 0x58);
    mutex_lock(piVar3 + 4);
    iVar1 = *(piVar3 + 100) + -1;
    *(piVar3 + 100) = iVar1;
    if (iVar1 == 0) {
        module_put(*(*piVar3 + 0x88));
        iVar2 = piVar3[3];
        if (iVar2 != 0) {
            pcVar4 = *(*piVar3 + 0x50);
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0xa7d585a098439650,pcVar4,0x8000290);
                (*pcVar4)(piVar3);
                iVar2 = piVar3[3];
            }
            __put_mtd_device(iVar2);
        }
    }
    mutex_unlock(piVar3 + 4);
    sym.kref_put(piVar3 + 0xd);
    return;
}


// ===== sym.mtd_queue_rq.a9bab94dfbdb4770707dd169c24fa637.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.mtd_queue_rq.a9bab94dfbdb4770707dd169c24fa637.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    uint uVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t *arg2;
    int64_t *piVar11;
    int64_t iVar12;
    code *pcVar13;
    int64_t *arg3;
    uint8_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(*(param_1 + 0xe8) + 0x58);
    if (arg2 == NULL) {
        blk_mq_start_request(*param_2);
        uVar9 = 10;
    }
    else {
        piVar1 = arg2 + 0x14;
        _raw_spin_lock_irq(piVar1);
        iVar12 = *param_2;
        piVar2 = arg2 + 0x11;
        piVar11 = arg2[0x12];
        iVar15 = iVar12 + 0x48;
        uVar8 = __list_add_valid(iVar15,piVar11,piVar2);
        if ((uVar8 & 1) != 0) {
            arg2[0x12] = iVar15;
            *(iVar12 + 0x48) = piVar2;
            *(iVar12 + 0x50) = piVar11;
            *piVar11 = iVar15;
        }
        uVar14 = 0;
        piVar11 = arg2 + 4;
        iVar15 = *arg2;
        *(arg2 + 0x54) = 0;
        while( true ) {
            while( true ) {
                arg3 = NULL;
                if (piVar2 != *piVar2) {
                    arg3 = *piVar2 + -9;
                }
                if (arg3 == NULL) break;
                piVar3 = arg3 + 9;
                uVar8 = __list_del_entry_valid(piVar3);
                if ((uVar8 & 1) != 0) {
                    iVar12 = arg3[9];
                    piVar5 = arg3[10];
                    *(iVar12 + 8) = piVar5;
                    *piVar5 = iVar12;
                }
                arg3[9] = piVar3;
                arg3[10] = piVar3;
                blk_mq_start_request(arg3);
                do {
                    _raw_spin_unlock_irq(piVar1);
                    mutex_lock(piVar11);
                    uVar7 = sym.do_blktrans_request(*arg2,arg2,arg3);
                    mutex_unlock(piVar11);
                    iVar12 = arg3[7];
                    if (iVar12 == 0) {
                        uVar10 = 0;
                    }
                    else {
                        uVar10 = *(iVar12 + 0x28);
                        if ((uVar10 != 0) &&
                           ((9 < *(iVar12 + 0x10) || ((1 << (*(iVar12 + 0x10) & 0x1f) & 0x228U) == 0)))) {
                            iVar4 = *(iVar12 + 0x78) + *(iVar12 + 0x2c) * 0x10;
                            uVar6 = *(iVar4 + 8) - *(iVar12 + 0x30);
                            if (uVar6 <= uVar10) {
                                uVar10 = uVar6;
                            }
                            uVar6 = 0x1000 - (*(iVar12 + 0x30) + *(iVar4 + 0xc) & 0xfffU);
                            if (uVar6 <= uVar10) {
                                uVar10 = uVar6;
                            }
                        }
                    }
                    uVar8 = blk_update_request(arg3,uVar7,uVar10);
                    if ((uVar8 & 1) == 0) {
                        __blk_mq_end_request(arg3,uVar7);
                        arg3 = NULL;
                    }
                    _raw_spin_lock_irq(piVar1);
                    uVar14 = 0;
                    *(arg2 + 0x54) = 0;
                } while (arg3 != NULL);
            }
            iVar12 = *(iVar15 + 0x30);
            _raw_spin_unlock_irq(piVar1);
            uVar9 = 0;
            if ((iVar12 == 0) || (uVar14 != 0)) break;
            mutex_lock(piVar11);
            pcVar13 = *(iVar15 + 0x30);
            __cfi_slowpath_diag(0xa7d585a098439650,pcVar13,0x80001b0);
            (*pcVar13)(arg2);
            mutex_unlock(piVar11);
            _raw_spin_lock_irq(piVar1);
            uVar14 = *(arg2 + 0x54) ^ 1;
            *(arg2 + 0x54) = 0;
        }
    }
    return uVar9;
}


// ===== sym.__typeid__ZTSFiP16mtd_blktrans_devE_global_addr @ 0x08001210 (size 8) =====

uchar sym.__typeid__ZTSFiP16mtd_blktrans_devE_global_addr(int64_t param_1)

{
    return *(param_1 + 0x54);
}


// ===== sym.del_mtd_blktrans_dev.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.del_mtd_blktrans_dev.cfi_jt(int64_t *param_1)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1[0xf] != 0) {
        sysfs_remove_group(*(param_1[0xe] + 0x40) + 0x40);
    }
    del_gendisk(param_1[0xe]);
    uVar1 = _raw_spin_lock_irqsave(param_1 + 0x14);
    *(param_1[0x10] + 0x58) = 0;
    _raw_spin_unlock_irqrestore(param_1 + 0x14,uVar1);
    blk_mq_freeze_queue(param_1[0x10]);
    blk_mq_quiesce_queue(param_1[0x10]);
    blk_mq_unquiesce_queue(param_1[0x10]);
    blk_mq_unfreeze_queue(param_1[0x10]);
    mutex_lock(param_1 + 4);
    if (*(param_1 + 100) != 0) {
        pcVar2 = *(*param_1 + 0x50);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0xa7d585a098439650,pcVar2,0x8000150);
            (*pcVar2)(param_1);
        }
        __put_mtd_device(param_1[3]);
    }
    param_1[3] = 0;
    mutex_unlock(param_1 + 4);
    sym.kref_put(param_1 + 0xd);
    return 0;
}


// ===== sym.add_mtd_blktrans_dev.cfi_jt @ 0x08001220 (size 8) =====

uint64_t sym.add_mtd_blktrans_dev.cfi_jt(ulong *param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *puVar11;
    uint *puVar12;
    ulong *puVar13;
    ulong *puVar14;
    ulong *puVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar15 = *param_1;
    uVar9 = *(param_1 + 10);
    puVar11 = puVar15 + 0xd;
    puVar13 = *puVar11;
    if (puVar11 == puVar13) {
        uVar10 = 0;
    }
    else {
        uVar10 = 0;
        do {
            uVar2 = *(puVar13 + 9);
            if (uVar9 == 0xffffffff) {
                if (uVar2 != uVar10) {
                    *(param_1 + 10) = uVar10;
                    goto code_r0x08001328;
                }
            }
            else {
                if (uVar2 == uVar9) goto code_r0x080012f4;
                uVar10 = uVar2;
                if (uVar9 < uVar2) {
code_r0x08001328:
                    puVar14 = puVar13[1];
                    puVar11 = param_1 + 1;
                    uVar5 = __list_add_valid(puVar11,puVar14,puVar13);
                    if ((uVar5 & 1) == 0) goto code_r0x08001354;
                    puVar13[1] = puVar11;
                    *puVar11 = puVar13;
                    goto code_r0x0800134c;
                }
            }
            puVar13 = *puVar13;
            uVar10 = uVar10 + 1;
        } while (puVar11 != puVar13);
    }
    if (uVar9 == 0xffffffff) {
        *(param_1 + 10) = uVar10;
        uVar9 = uVar10;
    }
    if ((0xfffffU >> (*(puVar15 + 0xc) & 0x1f) < uVar9) || ((*(puVar15 + 0xc) != 0 && (0x2bd < uVar9)))) {
code_r0x080012f4:
        puVar12 = 0xfffffff0;
        goto code_r0x0800141c;
    }
    puVar14 = puVar15[0xe];
    puVar13 = param_1 + 1;
    uVar5 = __list_add_valid(puVar13,puVar14,puVar11);
    if ((uVar5 & 1) != 0) {
        puVar15[0xe] = puVar13;
        *puVar13 = puVar11;
code_r0x0800134c:
        param_1[2] = puVar14;
        *puVar14 = param_1 + 1;
    }
code_r0x08001354:
    __mutex_init(param_1 + 4,"&new->lock",reloc.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt);
    *(param_1 + 0xd) = 1;
    if (puVar15[4] == 0) {
        *(param_1 + 0xc) = 1;
    }
    iVar6 = kmem_cache_alloc_trace(___list_add_valid,0xdc0,0x128);
    param_1[0x13] = iVar6;
    if (iVar6 == 0) {
        puVar12 = 0xfffffff4;
    }
    else {
        uVar5 = blk_mq_alloc_sq_tag_set(iVar6,reloc.mtd_queue_rq.a9bab94dfbdb4770707dd169c24fa637.cfi_jt,2,0x21);
        puVar12 = uVar5 & 0xffffffff;
        if (uVar5 == 0) {
            puVar12 = __blk_mq_alloc_disk(param_1[0x13],param_1,
                                          reloc.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt);
            if (puVar12 < 0xfffffffffffff001) {
                param_1[0xe] = puVar12;
                param_1[0x10] = *(puVar12 + 0x14);
                *(puVar12 + 0x16) = param_1;
                *puVar12 = *(puVar15 + 1);
                puVar12[1] = *(param_1 + 10) << (*(puVar15 + 0xc) & 0x1f);
                puVar12[2] = 1 << (*(puVar15 + 0xc) & 0x1f);
                *(puVar12 + 0x12) = obj.mtd_block_ops;
                if (*(puVar15 + 0xc) == 0) {
                    uVar8 = *puVar15;
                    iVar4 = *(param_1 + 10);
                    pcVar7 = "%s%d";
code_r0x080014c0:
                    snprintf(puVar12 + 3,0x20,pcVar7,uVar8,iVar4);
                }
                else {
                    uVar9 = *(param_1 + 10);
                    uVar8 = *puVar15;
                    if (uVar9 < 0x1a) {
                        iVar4 = uVar9 + 0x61;
                        pcVar7 = "%s%c";
                        goto code_r0x080014c0;
                    }
                    snprintf(puVar12 + 3,0x20,"%s%c%c",uVar8,uVar9 / 0x1a + 0x60,uVar9 % 0x1a + 0x61);
                }
                set_capacity(puVar12,param_1[0xb] * *(puVar15 + 2) >> 9);
                *(param_1 + 0x14) = 0;
                param_1[0x11] = param_1 + 0x11;
                param_1[0x12] = param_1 + 0x11;
                if (puVar15[8] != 0) {
                    blk_queue_write_cache(param_1[0x10],1,0);
                }
                blk_queue_logical_block_size(param_1[0x10],*(puVar15 + 2));
                blk_queue_flag_set(6,param_1[0x10]);
                blk_queue_flag_clear(10,param_1[0x10]);
                if (puVar15[5] != 0) {
                    blk_queue_flag_set(8,param_1[0x10]);
                    blk_queue_max_discard_sectors(param_1[0x10],0xffffffff);
                    *(param_1[0x10] + 0x504) = *(puVar15 + 2);
                }
                *(puVar12 + 0x14) = param_1[0x10];
                if (*(param_1 + 0xc) != 0) {
                    set_disk_ro(puVar12,1);
                }
                device_add_disk(param_1[3] + 0x1a0,puVar12,0);
                if (param_1[0xf] == 0) {
                    puVar12 = NULL;
                }
                else {
                    iVar4 = sysfs_create_group(*(puVar12 + 0x10) + 0x40);
                    puVar12 = NULL;
                    if (iVar4 != 0) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x80015dc);
                        (*pcVar3)();
                    }
                }
                goto code_r0x0800141c;
            }
            blk_mq_free_tag_set(param_1[0x13]);
        }
        kfree(param_1[0x13]);
    }
    uVar5 = __list_del_entry_valid(param_1 + 1);
    if ((uVar5 & 1) != 0) {
        iVar6 = param_1[1];
        piVar1 = param_1[2];
        *(iVar6 + 8) = piVar1;
        *piVar1 = iVar6;
    }
    param_1[1] = 0xdead000000000100;
    param_1[2] = 0xdead000000000122;
code_r0x0800141c:
    return puVar12 & 0xffffffff;
}


// ===== sym.deregister_mtd_blktrans.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.deregister_mtd_blktrans.cfi_jt(ulong *param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(mtd_table_mutex);
    uVar1 = __list_del_entry_valid(param_1 + 0xf);
    if ((uVar1 & 1) != 0) {
        iVar3 = param_1[0xf];
        piVar2 = param_1[0x10];
        *(iVar3 + 8) = piVar2;
        *piVar2 = iVar3;
    }
    piVar5 = param_1 + 0xd;
    piVar2 = *piVar5;
    param_1[0xf] = 0xdead000000000100;
    param_1[0x10] = 0xdead000000000122;
    while (piVar5 != piVar2) {
        pcVar4 = param_1[0xc];
        iVar3 = piVar2 + -1;
        piVar2 = *piVar2;
        __cfi_slowpath_diag(0xa7d585a098439650,pcVar4,0x8000190);
        (*pcVar4)(iVar3);
    }
    mutex_unlock(mtd_table_mutex);
    unregister_blkdev(*(param_1 + 1),*param_1);
    if (piVar5 == param_1[0xd]) {
        return 0;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x800193c);
    (*pcVar4)();
}


// ===== sym.register_mtd_blktrans.cfi_jt @ 0x08001230 (size 8) =====

int sym.register_mtd_blktrans.cfi_jt(ulong *param_1)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong *puVar4;
    int iVar5;
    uint64_t uVar6;
    char *pcVar7;
    uint uVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        register_mtd_user(reloc.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt);
    }
    iVar5 = __register_blkdev(*(param_1 + 1),*param_1,0);
    if (iVar5 < 0) {
        _printk(0x8000320,*param_1,*(param_1 + 1),iVar5);
    }
    else {
        if (iVar5 != 0) {
            *(param_1 + 1) = iVar5;
        }
        uVar2 = *(param_1 + 2);
        uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
        uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar8 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
        if (uVar2 == 0) {
            uVar8 = 0xffffffff;
        }
        *(param_1 + 0x14) = uVar8;
        param_1[0xd] = param_1 + 0xd;
        param_1[0xe] = param_1 + 0xd;
        mutex_lock(mtd_table_mutex);
        puVar4 = _obj.blktrans_majors;
        puVar1 = param_1 + 0xf;
        uVar6 = __list_add_valid(puVar1,obj.blktrans_majors,_obj.blktrans_majors);
        if ((uVar6 & 1) != 0) {
            puVar4[1] = puVar1;
            param_1[0xf] = puVar4;
            param_1[0x10] = obj.blktrans_majors;
            _obj.blktrans_majors = puVar1;
        }
        for (pcVar7 = __mtd_next_device(0); pcVar7 != NULL; pcVar7 = __mtd_next_device(*(pcVar7 + 0x40) + 1)) {
            if (*pcVar7 != '\0') {
                pcVar9 = param_1[0xb];
                __cfi_slowpath_diag(0xe123d666f7a2be40,pcVar9,0x8000170);
                (*pcVar9)(param_1,pcVar7);
            }
        }
        mutex_unlock(mtd_table_mutex);
        iVar5 = 0;
    }
    return iVar5;
}


// ===== sym.mtd_blktrans_cease_background @ 0x08001238 (size 16) =====

uchar sym.mtd_blktrans_cease_background(int64_t arg1)

{
    return *(arg1 + 0x54);
}


// ===== sym.add_mtd_blktrans_dev @ 0x08001248 (size 928) =====

uint64_t sym.add_mtd_blktrans_dev(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *puVar10;
    uint *puVar11;
    ulong *puVar12;
    int64_t *piVar13;
    ulong *puVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar14 = *arg1;
    uVar8 = *(arg1 + 0x50);
    puVar10 = puVar14 + 0xd;
    puVar12 = *puVar10;
    if (puVar10 == puVar12) {
        uVar9 = 0;
    }
    else {
        uVar9 = 0;
        do {
            uVar1 = *(puVar12 + 9);
            if (uVar8 == 0xffffffff) {
                if (uVar1 != uVar9) {
                    *(arg1 + 0x50) = uVar9;
                    goto code_r0x08001328;
                }
            }
            else {
                if (uVar1 == uVar8) goto code_r0x080012f4;
                uVar9 = uVar1;
                if (uVar8 < uVar1) {
code_r0x08001328:
                    piVar13 = puVar12[1];
                    puVar10 = arg1 + 8;
                    uVar4 = __list_add_valid(puVar10,piVar13,puVar12);
                    if ((uVar4 & 1) == 0) goto code_r0x08001354;
                    puVar12[1] = puVar10;
                    *puVar10 = puVar12;
                    goto code_r0x0800134c;
                }
            }
            puVar12 = *puVar12;
            uVar9 = uVar9 + 1;
        } while (puVar10 != puVar12);
    }
    if (uVar8 == 0xffffffff) {
        *(arg1 + 0x50) = uVar9;
        uVar8 = uVar9;
    }
    if ((0xfffffU >> (*(puVar14 + 0xc) & 0x1f) < uVar8) || ((*(puVar14 + 0xc) != 0 && (0x2bd < uVar8)))) {
code_r0x080012f4:
        puVar11 = 0xfffffff0;
        goto code_r0x0800141c;
    }
    piVar13 = puVar14[0xe];
    puVar12 = arg1 + 8;
    uVar4 = __list_add_valid(puVar12,piVar13,puVar10);
    if ((uVar4 & 1) != 0) {
        puVar14[0xe] = puVar12;
        *puVar12 = puVar10;
code_r0x0800134c:
        *(arg1 + 0x10) = piVar13;
        *piVar13 = arg1 + 8;
    }
code_r0x08001354:
    __mutex_init(arg1 + 0x20,"&new->lock",reloc.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt);
    *(arg1 + 0x68) = 1;
    if (puVar14[4] == 0) {
        *(arg1 + 0x60) = 1;
    }
    iVar5 = kmem_cache_alloc_trace(___list_add_valid,0xdc0,0x128);
    *(arg1 + 0x98) = iVar5;
    if (iVar5 == 0) {
        puVar11 = 0xfffffff4;
    }
    else {
        uVar4 = blk_mq_alloc_sq_tag_set(iVar5,reloc.mtd_queue_rq.a9bab94dfbdb4770707dd169c24fa637.cfi_jt,2,0x21);
        puVar11 = uVar4 & 0xffffffff;
        if (uVar4 == 0) {
            puVar11 = __blk_mq_alloc_disk(*(arg1 + 0x98),arg1,
                                          reloc.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt);
            if (puVar11 < 0xfffffffffffff001) {
                *(arg1 + 0x70) = puVar11;
                *(arg1 + 0x80) = *(puVar11 + 0x14);
                *(puVar11 + 0x16) = arg1;
                *puVar11 = *(puVar14 + 1);
                puVar11[1] = *(arg1 + 0x50) << (*(puVar14 + 0xc) & 0x1f);
                puVar11[2] = 1 << (*(puVar14 + 0xc) & 0x1f);
                *(puVar11 + 0x12) = obj.mtd_block_ops;
                if (*(puVar14 + 0xc) == 0) {
                    uVar7 = *puVar14;
                    iVar3 = *(arg1 + 0x50);
                    pcVar6 = "%s%d";
code_r0x080014c0:
                    snprintf(puVar11 + 3,0x20,pcVar6,uVar7,iVar3);
                }
                else {
                    uVar8 = *(arg1 + 0x50);
                    uVar7 = *puVar14;
                    if (uVar8 < 0x1a) {
                        iVar3 = uVar8 + 0x61;
                        pcVar6 = "%s%c";
                        goto code_r0x080014c0;
                    }
                    snprintf(puVar11 + 3,0x20,"%s%c%c",uVar7,uVar8 / 0x1a + 0x60,uVar8 % 0x1a + 0x61);
                }
                set_capacity(puVar11,*(arg1 + 0x58) * *(puVar14 + 2) >> 9);
                *(arg1 + 0xa0) = 0;
                *(arg1 + 0x88) = arg1 + 0x88;
                *(arg1 + 0x90) = arg1 + 0x88;
                if (puVar14[8] != 0) {
                    blk_queue_write_cache(*(arg1 + 0x80),1,0);
                }
                blk_queue_logical_block_size(*(arg1 + 0x80),*(puVar14 + 2));
                blk_queue_flag_set(6,*(arg1 + 0x80));
                blk_queue_flag_clear(10,*(arg1 + 0x80));
                if (puVar14[5] != 0) {
                    blk_queue_flag_set(8,*(arg1 + 0x80));
                    blk_queue_max_discard_sectors(*(arg1 + 0x80),0xffffffff);
                    *(*(arg1 + 0x80) + 0x504) = *(puVar14 + 2);
                }
                *(puVar11 + 0x14) = *(arg1 + 0x80);
                if (*(arg1 + 0x60) != 0) {
                    set_disk_ro(puVar11,1);
                }
                device_add_disk(*(arg1 + 0x18) + 0x1a0,puVar11,0);
                if (*(arg1 + 0x78) == 0) {
                    puVar11 = NULL;
                }
                else {
                    iVar3 = sysfs_create_group(*(puVar11 + 0x10) + 0x40);
                    puVar11 = NULL;
                    if (iVar3 != 0) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x80015dc);
                        (*pcVar2)();
                    }
                }
                goto code_r0x0800141c;
            }
            blk_mq_free_tag_set(*(arg1 + 0x98));
        }
        kfree(*(arg1 + 0x98));
    }
    uVar4 = __list_del_entry_valid(arg1 + 8);
    if ((uVar4 & 1) != 0) {
        iVar5 = *(arg1 + 8);
        piVar13 = *(arg1 + 0x10);
        *(iVar5 + 8) = piVar13;
        *piVar13 = iVar5;
    }
    *(arg1 + 8) = 0xdead000000000100;
    *(arg1 + 0x10) = 0xdead000000000122;
code_r0x0800141c:
    return puVar11 & 0xffffffff;
}


// ===== sym.del_mtd_blktrans_dev @ 0x080015e8 (size 252) =====

ulong sym.del_mtd_blktrans_dev(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x78) != 0) {
        sysfs_remove_group(*(*(arg1 + 0x70) + 0x40) + 0x40);
    }
    del_gendisk(*(arg1 + 0x70));
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0xa0);
    *(*(arg1 + 0x80) + 0x58) = 0;
    _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar1);
    blk_mq_freeze_queue(*(arg1 + 0x80));
    blk_mq_quiesce_queue(*(arg1 + 0x80));
    blk_mq_unquiesce_queue(*(arg1 + 0x80));
    blk_mq_unfreeze_queue(*(arg1 + 0x80));
    mutex_lock(arg1 + 0x20);
    if (*(arg1 + 100) != 0) {
        pcVar2 = *(*arg1 + 0x50);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0xa7d585a098439650,pcVar2,0x8000150);
            (*pcVar2)(arg1);
        }
        __put_mtd_device(*(arg1 + 0x18));
    }
    *(arg1 + 0x18) = 0;
    mutex_unlock(arg1 + 0x20);
    sym.kref_put(arg1 + 0x68);
    return 0;
}


// ===== sym.register_mtd_blktrans @ 0x080016e4 (size 356) =====

int sym.register_mtd_blktrans(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int iVar5;
    uint64_t uVar6;
    char *pcVar7;
    uint uVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        register_mtd_user(reloc.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt);
    }
    iVar5 = __register_blkdev(*(arg1 + 8),*arg1,0);
    if (iVar5 < 0) {
        _printk(0x8000320,*arg1,*(arg1 + 8),iVar5);
    }
    else {
        if (iVar5 != 0) {
            *(arg1 + 8) = iVar5;
        }
        uVar2 = *(arg1 + 0x10);
        uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
        uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar8 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
        if (uVar2 == 0) {
            uVar8 = 0xffffffff;
        }
        *(arg1 + 0x14) = uVar8;
        *(arg1 + 0x68) = arg1 + 0x68;
        *(arg1 + 0x70) = arg1 + 0x68;
        mutex_lock(mtd_table_mutex);
        iVar4 = _obj.blktrans_majors;
        iVar1 = arg1 + 0x78;
        uVar6 = __list_add_valid(iVar1,obj.blktrans_majors,_obj.blktrans_majors);
        if ((uVar6 & 1) != 0) {
            *(iVar4 + 8) = iVar1;
            *(arg1 + 0x78) = iVar4;
            *(arg1 + 0x80) = obj.blktrans_majors;
            _obj.blktrans_majors = iVar1;
        }
        for (pcVar7 = __mtd_next_device(0); pcVar7 != NULL; pcVar7 = __mtd_next_device(*(pcVar7 + 0x40) + 1)) {
            if (*pcVar7 != '\0') {
                pcVar9 = *(arg1 + 0x58);
                __cfi_slowpath_diag(0xe123d666f7a2be40,pcVar9,0x8000170);
                (*pcVar9)(arg1,pcVar7);
            }
        }
        mutex_unlock(mtd_table_mutex);
        iVar5 = 0;
    }
    return iVar5;
}


// ===== sym.deregister_mtd_blktrans @ 0x08001848 (size 244) =====

ulong sym.deregister_mtd_blktrans(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(mtd_table_mutex);
    uVar1 = __list_del_entry_valid(arg1 + 0x78);
    if ((uVar1 & 1) != 0) {
        iVar3 = *(arg1 + 0x78);
        piVar2 = *(arg1 + 0x80);
        *(iVar3 + 8) = piVar2;
        *piVar2 = iVar3;
    }
    piVar5 = arg1 + 0x68;
    piVar2 = *piVar5;
    *(arg1 + 0x78) = 0xdead000000000100;
    *(arg1 + 0x80) = 0xdead000000000122;
    while (piVar5 != piVar2) {
        pcVar4 = *(arg1 + 0x60);
        iVar3 = piVar2 + -1;
        piVar2 = *piVar2;
        __cfi_slowpath_diag(0xa7d585a098439650,pcVar4,0x8000190);
        (*pcVar4)(iVar3);
    }
    mutex_unlock(mtd_table_mutex);
    unregister_blkdev(*(arg1 + 8),*arg1);
    if (piVar5 == *(arg1 + 0x68)) {
        return 0;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x800193c);
    (*pcVar4)();
}


// ===== sym.mtd_queue_rq @ 0x08001940 (size 580) =====

ulong sym.mtd_queue_rq(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    uint uVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    int64_t *arg2_00;
    int64_t *piVar12;
    code *pcVar13;
    int64_t *arg3;
    uint8_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = *(*(arg1 + 0xe8) + 0x58);
    if (arg2_00 == NULL) {
        blk_mq_start_request(*arg2);
        uVar9 = 10;
    }
    else {
        piVar1 = arg2_00 + 0x14;
        _raw_spin_lock_irq(piVar1);
        arg2 = *arg2;
        piVar2 = arg2_00 + 0x11;
        piVar12 = arg2_00[0x12];
        iVar15 = arg2 + 0x48;
        uVar8 = __list_add_valid(iVar15,piVar12,piVar2);
        if ((uVar8 & 1) != 0) {
            arg2_00[0x12] = iVar15;
            *(arg2 + 0x48) = piVar2;
            *(arg2 + 0x50) = piVar12;
            *piVar12 = iVar15;
        }
        uVar14 = 0;
        piVar12 = arg2_00 + 4;
        iVar15 = *arg2_00;
        *(arg2_00 + 0x54) = 0;
        while( true ) {
            while( true ) {
                arg3 = NULL;
                if (piVar2 != *piVar2) {
                    arg3 = *piVar2 + -9;
                }
                if (arg3 == NULL) break;
                piVar3 = arg3 + 9;
                uVar8 = __list_del_entry_valid(piVar3);
                if ((uVar8 & 1) != 0) {
                    iVar11 = arg3[9];
                    piVar5 = arg3[10];
                    *(iVar11 + 8) = piVar5;
                    *piVar5 = iVar11;
                }
                arg3[9] = piVar3;
                arg3[10] = piVar3;
                blk_mq_start_request(arg3);
                do {
                    _raw_spin_unlock_irq(piVar1);
                    mutex_lock(piVar12);
                    uVar7 = sym.do_blktrans_request(*arg2_00,arg2_00,arg3);
                    mutex_unlock(piVar12);
                    iVar11 = arg3[7];
                    if (iVar11 == 0) {
                        uVar10 = 0;
                    }
                    else {
                        uVar10 = *(iVar11 + 0x28);
                        if ((uVar10 != 0) &&
                           ((9 < *(iVar11 + 0x10) || ((1 << (*(iVar11 + 0x10) & 0x1f) & 0x228U) == 0)))) {
                            iVar4 = *(iVar11 + 0x78) + *(iVar11 + 0x2c) * 0x10;
                            uVar6 = *(iVar4 + 8) - *(iVar11 + 0x30);
                            if (uVar6 <= uVar10) {
                                uVar10 = uVar6;
                            }
                            uVar6 = 0x1000 - (*(iVar11 + 0x30) + *(iVar4 + 0xc) & 0xfffU);
                            if (uVar6 <= uVar10) {
                                uVar10 = uVar6;
                            }
                        }
                    }
                    uVar8 = blk_update_request(arg3,uVar7,uVar10);
                    if ((uVar8 & 1) == 0) {
                        __blk_mq_end_request(arg3,uVar7);
                        arg3 = NULL;
                    }
                    _raw_spin_lock_irq(piVar1);
                    uVar14 = 0;
                    *(arg2_00 + 0x54) = 0;
                } while (arg3 != NULL);
            }
            iVar11 = *(iVar15 + 0x30);
            _raw_spin_unlock_irq(piVar1);
            uVar9 = 0;
            if ((iVar11 == 0) || (uVar14 != 0)) break;
            mutex_lock(piVar12);
            pcVar13 = *(iVar15 + 0x30);
            __cfi_slowpath_diag(0xa7d585a098439650,pcVar13,0x80001b0);
            (*pcVar13)(arg2_00);
            mutex_unlock(piVar12);
            _raw_spin_lock_irq(piVar1);
            uVar14 = *(arg2_00 + 0x54) ^ 1;
            *(arg2_00 + 0x54) = 0;
        }
    }
    return uVar9;
}


// ===== sym.do_blktrans_request @ 0x08001b88 (size 944) =====

uint64_t sym.do_blktrans_request(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    char cVar10;
    ulong *in_x18;
    code *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg3 + 0x38);
    if ((iVar8 == 0) || (uVar7 = *(iVar8 + 0x28), uVar7 == 0)) {
        cVar10 = *(arg3 + 0x18);
        if (cVar10 == '\x02') goto code_r0x08001c9c;
        iVar5 = 0;
        iVar13 = 0;
        uVar7 = 0;
    }
    else {
        uVar2 = *(iVar8 + 0x10);
        uVar4 = uVar7;
        if ((9 < (uVar2 & 0xff)) || ((1 << (uVar2 & 0x1f) & 0x228U) == 0)) {
            iVar13 = *(iVar8 + 0x78) + *(iVar8 + 0x2c) * 0x10;
            uVar3 = *(iVar13 + 8) - *(iVar8 + 0x30);
            if (uVar3 <= uVar7) {
                uVar4 = uVar3;
            }
            uVar3 = 0x1000 - (*(iVar8 + 0x30) + *(iVar13 + 0xc) & 0xfffU);
            if (uVar3 <= uVar4) {
                uVar4 = uVar3;
            }
        }
        cVar10 = *(arg3 + 0x18);
        if (cVar10 == '\x02') {
code_r0x08001c9c:
            pcVar11 = *(arg1 + 0x40);
            if (2 < (pcVar11 + -0x8001210 >> 3 | pcVar11 << 0x3d)) {
                __cfi_slowpath_diag(0xbf6c8f71ce633e75,pcVar11,0x80001d0);
            }
            iVar5 = (*pcVar11)(arg2);
            goto code_r0x08001cc0;
        }
        iVar5 = uVar4 >> (*(arg1 + 0x14) & 0x1f);
        iVar13 = iVar5;
        if ((9 < (uVar2 & 0xff)) || ((1 << (uVar2 & 0x1f) & 0x228U) == 0)) {
            iVar9 = *(iVar8 + 0x78) + *(iVar8 + 0x2c) * 0x10;
            uVar4 = *(iVar9 + 8) - *(iVar8 + 0x30);
            if (uVar4 <= uVar7) {
                uVar7 = uVar4;
            }
            uVar4 = 0x1000 - (*(iVar8 + 0x30) + *(iVar9 + 0xc) & 0xfffU);
            if (uVar4 <= uVar7) {
                uVar7 = uVar4;
            }
        }
    }
    if (*(arg3 + 0x30) + (uVar7 >> 9) <= *(*(*(*(arg3 + 0xa0) + 0x40) + 0x28) + 0x50) >> 9) {
        uVar12 = (*(arg3 + 0x30) << 9) >> (*(arg1 + 0x14) & 0x3f);
        if (cVar10 == '\0') {
            piVar1 = *(iVar8 + 0x78) + *(iVar8 + 0x2c) * 0x10;
            if (iVar13 != 0) {
                iVar9 = *(arg3 + 0x38);
                iVar8 = ((*piVar1 + (*(iVar8 + 0x30) + *(piVar1 + 0xc) >> 0xc) * 0x40 & 0x3ffffffffffc0) << 6 |
                        0xff00000000000000) +
                        (*(*(iVar9 + 0x78) + *(iVar9 + 0x2c) * 0x10 + 0xc) + *(iVar9 + 0x30) & 0xfff);
                do {
                    pcVar11 = *(arg1 + 0x18);
                    __cfi_slowpath_diag(0x1e2072b22e007509,pcVar11,0x8000210);
                    iVar5 = (*pcVar11)(arg2,uVar12,iVar8);
                    if (iVar5 != 0) {
                        return 10;
                    }
                    iVar13 = iVar13 + -1;
                    uVar12 = uVar12 + 1;
                    iVar8 = iVar8 + *(arg1 + 0x10);
                } while (iVar13 != 0);
            }
            rq_flush_dcache_pages(arg3);
            return 0;
        }
        if (cVar10 == '\x01') {
            if (*(arg1 + 0x20) != 0) {
                rq_flush_dcache_pages(arg3);
                iVar8 = *(arg3 + 0x38);
                piVar1 = *(iVar8 + 0x78) + *(iVar8 + 0x2c) * 0x10;
                if (iVar13 == 0) {
                    return 0;
                }
                iVar9 = *(arg3 + 0x38);
                iVar8 = ((*piVar1 + (*(iVar8 + 0x30) + *(piVar1 + 0xc) >> 0xc) * 0x40 & 0x3ffffffffffc0) << 6 |
                        0xff00000000000000) +
                        (*(*(iVar9 + 0x78) + *(iVar9 + 0x2c) * 0x10 + 0xc) + *(iVar9 + 0x30) & 0xfff);
                while( true ) {
                    pcVar11 = *(arg1 + 0x20);
                    __cfi_slowpath_diag(0x1e2072b22e007509,pcVar11,0x8000230);
                    uVar6 = (*pcVar11)(arg2,uVar12,iVar8);
                    if (uVar6 != 0) break;
                    iVar13 = iVar13 + -1;
                    uVar12 = uVar12 + 1;
                    iVar8 = iVar8 + *(arg1 + 0x10);
                    if (iVar13 == 0) {
                        return uVar6;
                    }
                }
            }
        }
        else if (cVar10 == '\x03') {
            pcVar11 = *(arg1 + 0x28);
            __cfi_slowpath_diag(0x38a01f93d73535e4,pcVar11,0x80001f0);
            iVar5 = (*pcVar11)(arg2,uVar12,iVar5);
code_r0x08001cc0:
            uVar7 = 0;
            if (iVar5 != 0) {
                uVar7 = 10;
            }
            return uVar7;
        }
    }
    return 10;
}


// ===== sym.blktrans_open @ 0x08001f38 (size 428) =====

int sym.blktrans_open(int64_t arg1,int64_t arg2)

{
    uint32_t *arg1_00;
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(arg1 + 0x3f0) + 0x58);
    arg1_00 = piVar8 + 0xd;
    Hint_Prefetch(arg1_00,2,0,1);
    do {
        uVar2 = *arg1_00;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(arg1_00,0x10);
        if (bVar4) {
            *arg1_00 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar7 = 2;
code_r0x080020c0:
        refcount_warn_saturate(arg1_00,uVar7);
    }
    else if ((uVar2 + 1 | uVar2) < 0) {
        uVar7 = 1;
        goto code_r0x080020c0;
    }
    piVar1 = piVar8 + 4;
    mutex_lock(piVar1);
    if (*(piVar8 + 100) == 0) {
        __module_get(*(*piVar8 + 0x88));
        iVar6 = piVar8[3];
        if (iVar6 == 0) goto code_r0x08001f98;
        pcVar9 = *(*piVar8 + 0x48);
        if (pcVar9 != NULL) {
            if (2 < (pcVar9 + -0x8001210 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0xbf6c8f71ce633e75,pcVar9,0x8000250);
            }
            iVar5 = (*pcVar9)(piVar8);
            if (iVar5 != 0) goto code_r0x0800205c;
            iVar6 = piVar8[3];
        }
        iVar5 = __get_mtd_device(iVar6);
        if (iVar5 != 0) {
            pcVar9 = *(*piVar8 + 0x50);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0xa7d585a098439650,pcVar9,0x8000270);
                (*pcVar9)(piVar8);
            }
code_r0x0800205c:
            module_put(*(*piVar8 + 0x88));
            mutex_unlock(piVar1);
            sym.kref_put(arg1_00);
            return iVar5;
        }
        *(piVar8 + 0x16) = arg2;
    }
code_r0x08001f98:
    *(piVar8 + 100) = *(piVar8 + 100) + 1;
    mutex_unlock(piVar1);
    return 0;
}


// ===== sym.blktrans_release @ 0x080020e4 (size 176) =====

void sym.blktrans_release(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0x58);
    mutex_lock(piVar3 + 4);
    iVar1 = *(piVar3 + 100) + -1;
    *(piVar3 + 100) = iVar1;
    if (iVar1 == 0) {
        module_put(*(*piVar3 + 0x88));
        iVar2 = piVar3[3];
        if (iVar2 != 0) {
            pcVar4 = *(*piVar3 + 0x50);
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0xa7d585a098439650,pcVar4,0x8000290);
                (*pcVar4)(piVar3);
                iVar2 = piVar3[3];
            }
            __put_mtd_device(iVar2);
        }
    }
    mutex_unlock(piVar3 + 4);
    sym.kref_put(piVar3 + 0xd);
    return;
}


// ===== sym.blktrans_getgeo @ 0x08002194 (size 168) =====

uint sym.blktrans_getgeo(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(arg1 + 0x3f0) + 0x58);
    mutex_lock(piVar2 + 4);
    if (piVar2[3] == 0) {
        uVar1 = 0xfffffffa;
    }
    else {
        pcVar3 = *(*piVar2 + 0x38);
        if (pcVar3 == NULL) {
            uVar1 = 0xffffffe7;
        }
        else {
            __cfi_slowpath_diag(0x73d5a2950338b81d,pcVar3,0x80002b0);
            uVar1 = (*pcVar3)(piVar2,arg2);
        }
    }
    mutex_unlock(piVar2 + 4);
    return uVar1;
}


// ===== sym.kref_put @ 0x0800223c (size 224) =====

void sym.kref_put(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    Hint_Prefetch(arg1,2,0,1);
    do {
        iVar3 = *arg1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(arg1,0x10);
        if (bVar5) {
            *arg1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar3 == 1) {
        DataMemoryBarrier(2,1);
        blk_cleanup_disk(*(arg1 + 8));
        blk_mq_free_tag_set(*(arg1 + 0x30));
        kfree(*(arg1 + 0x30));
        uVar6 = __list_del_entry_valid(arg1 + -0x60);
        if ((uVar6 & 1) != 0) {
            iVar1 = *(arg1 + -0x60);
            piVar2 = *(arg1 + -0x58);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(arg1 + -0x60) = 0xdead000000000100;
        *(arg1 + -0x58) = 0xdead000000000122;
        kfree(arg1 + -0x68);
    }
    else if (iVar3 < 1) {
        refcount_warn_saturate(arg1,3);
    }
    return;
}


// ===== sym.blktrans_dev_release @ 0x0800231c (size 120) =====

void sym.blktrans_dev_release(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blk_cleanup_disk(*(arg1 + 8));
    blk_mq_free_tag_set(*(arg1 + 0x30));
    kfree(*(arg1 + 0x30));
    uVar3 = __list_del_entry_valid(arg1 + -0x60);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(arg1 + -0x60);
        piVar2 = *(arg1 + -0x58);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(arg1 + -0x60) = 0xdead000000000100;
    *(arg1 + -0x58) = 0xdead000000000122;
    kfree(arg1 + -0x68);
    return;
}


// ===== sym.blktrans_notify_add @ 0x08002394 (size 160) =====

void sym.blktrans_notify_add(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*arg1 != '\0') && (pcVar2 = _segment.ehdr, _segment.ehdr != obj.blktrans_majors)) {
        do {
            pcVar1 = *(pcVar2 + -0x20);
            __cfi_slowpath_diag(0xe123d666f7a2be40,pcVar1,0x80002d0);
            (*pcVar1)(pcVar2 + -0x78,arg1);
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.blktrans_majors);
    }
    return;
}


// ===== sym.blktrans_notify_remove @ 0x08002434 (size 208) =====

void sym.blktrans_notify_remove(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    code *pcVar2;
    code *pcVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = _obj.blktrans_majors;
    if (_obj.blktrans_majors != obj.blktrans_majors) {
        do {
            pcVar4 = *(pcVar3 + -0x10);
            while (pcVar1 = pcVar4, pcVar1 != pcVar3 + -0x10) {
                pcVar4 = *pcVar1;
                if (*(pcVar1 + 0x10) == arg1) {
                    pcVar2 = *(pcVar3 + -0x18);
                    __cfi_slowpath_diag(0xa7d585a098439650,pcVar2,0x80002f0);
                    (*pcVar2)(pcVar1 + -8);
                }
            }
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.blktrans_majors);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08002504 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002548

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
    //switch table (4 cases) at 0x80003e6
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800255c);
    (*pcVar1)();
}


// ===== sym.cleanup_module @ 0x080025dc (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        unregister_mtd_user(reloc.blktrans_notify_add.a9bab94dfbdb4770707dd169c24fa637.cfi_jt);
    }
    return;
}

