// decompiled from msm_dma_iommu_mapping by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x08001f58

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x18430e8d0ba98630) {
        if (arg1 != -0x57be845bca9148ef) {
            if ((arg1 == -0x2ac316d8df914f8) && ((pcVar1 + -0x8001120 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x08001f18;
        }
        pcVar2 = sym.msm_dma_unmap_all_for_dev.cfi_jt;
    }
    else if (arg1 == 0x18430e8d0ba98630) {
        pcVar2 = sym.msm_dma_unmap_sg_attrs.cfi_jt;
    }
    else if (arg1 == 0x4c550309df1cf4c1) {
        pcVar2 = sym.msm_dma_buf_freed.cfi_jt;
    }
    else {
        if (arg1 != 0x6b09560fcd60a31e) goto code_r0x08001f18;
        pcVar2 = sym.msm_dma_map_sg_attrs.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001f18:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f6c);
    (*pcVar1)();
}


// ===== sym.msm_dma_map_sg_attrs.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.msm_dma_map_sg_attrs.cfi_jt
                (uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4,uint64_t param_5)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (0xfffffffffffff000 < param_1)) {
        uVar1 = 0x80002c5;
    }
    else if ((param_2 == 0) || (0xfffffffffffff000 < param_2)) {
        uVar1 = 0x8000265;
    }
    else {
        if ((param_5 != 0) && (param_5 < 0xfffffffffffff001)) {
            uVar1 = sym.__msm_dma_map_sg(param_1,param_2,param_3,param_4);
            return uVar1;
        }
        uVar1 = 0x800038c;
    }
    _printk(uVar1,"msm_dma_map_sg_attrs");
    return 0xffffffea;
}


// ===== sym.msm_dma_buf_freed.cfi_jt @ 0x08001108 (size 8) =====

void sym.msm_dma_buf_freed.cfi_jt(uint64_t param_1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int *arg1;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.msm_iommu_map_mutex);
    for (arg1_00 = _segment.ehdr; arg1_00 != 0; arg1_00 = *(arg1_00 + 0x10)) {
        while (*(arg1_00 + 0x60) <= param_1) {
            if (param_1 <= *(arg1_00 + 0x60)) {
                mutex_unlock(obj.msm_iommu_map_mutex);
                mutex_lock(arg1_00 + 0x30);
                piVar5 = arg1_00 + 0x18;
                piVar6 = *piVar5;
                while (piVar6 != piVar5) {
                    arg1 = piVar6 + 9;
                    piVar6 = *piVar6;
                    Hint_Prefetch(arg1,2,0,1);
                    do {
                        iVar1 = *arg1;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(arg1,0x10);
                        if (bVar3) {
                            *arg1 = iVar1 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if (iVar1 == 1) {
                        DataMemoryBarrier(2,1);
                        sym.msm_iommu_map_release(arg1);
                    }
                    else if (iVar1 < 1) {
                        refcount_warn_saturate(arg1,3);
                    }
                }
                if (*piVar5 == piVar5) {
                    *(arg1_00 + 0x18) = piVar5;
                    *(arg1_00 + 0x20) = piVar5;
                    mutex_unlock(arg1_00 + 0x30);
                    sym.msm_iommu_meta_put(arg1_00);
                    return;
                }
                __warn_printk("%s: DMA buffer %pK destroyed with outstanding iommu mappings\n","msm_dma_buf_freed",
                              *(arg1_00 + 0x60));
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8001e50);
                (*pcVar4)();
            }
            arg1_00 = *(arg1_00 + 8);
            if (arg1_00 == 0) goto code_r0x08001d8c;
        }
    }
code_r0x08001d8c:
    mutex_unlock(obj.msm_iommu_map_mutex);
    return;
}


// ===== sym.msm_dma_unmap_sg_attrs.cfi_jt @ 0x08001110 (size 8) =====

void sym.msm_dma_unmap_sg_attrs.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int param_4,int64_t param_5,int64_t param_6)

{
    int *arg1;
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.msm_iommu_map_mutex);
    if (_segment.ehdr != 0) {
        arg1_00 = _segment.ehdr;
        do {
            while (*(param_5 + 0xa0) < *(arg1_00 + 0x60)) {
                arg1_00 = *(arg1_00 + 0x10);
                if (arg1_00 == 0) goto code_r0x080018a0;
            }
            if (*(param_5 + 0xa0) <= *(arg1_00 + 0x60)) {
                mutex_unlock(obj.msm_iommu_map_mutex);
                mutex_lock(arg1_00 + 0x30);
                piVar5 = *(arg1_00 + 0x18);
                goto joined_r0x0800190c;
            }
            arg1_00 = *(arg1_00 + 8);
        } while (arg1_00 != 0);
    }
code_r0x080018a0:
    __warn_printk("%s: (%pK) was never mapped\n","msm_dma_unmap_sg_attrs",param_5);
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x80018c0);
    (*pcVar4)();
joined_r0x0800190c:
    if (piVar5 == arg1_00 + 0x18) {
code_r0x08001928:
        __warn_printk("%s: (%pK) was never mapped for device  %p\n","msm_dma_unmap_sg_attrs",param_5,param_1);
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x800194c);
        (*pcVar4)();
    }
    if (piVar5[5] == param_1) {
        if (piVar5 != NULL) {
            if (*(piVar5 + 0x3c) == param_4) {
                if ((param_6 != 0) && ((param_6 >> 5 & 1) == 0)) {
                    dma_sync_sg_for_cpu(param_1,piVar5[6],*(piVar5 + 7),param_4);
                }
                arg1 = piVar5 + 9;
                piVar5[10] = param_6;
                Hint_Prefetch(arg1,2,0,1);
                do {
                    iVar1 = *arg1;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(arg1,0x10);
                    if (bVar3) {
                        *arg1 = iVar1 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (iVar1 == 1) {
                    DataMemoryBarrier(2,1);
                    sym.msm_iommu_map_release(arg1);
                }
                else if (iVar1 < 1) {
                    refcount_warn_saturate(arg1,3);
                }
                mutex_unlock(arg1_00 + 0x30);
                sym.msm_iommu_meta_put(arg1_00);
                return;
            }
            __warn_printk("%s: (%pK) dir:%d differs from original dir:%d\n","msm_dma_unmap_sg_attrs",param_5,param_4)
            ;
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x8001980);
            (*pcVar4)();
        }
        goto code_r0x08001928;
    }
    piVar5 = *piVar5;
    goto joined_r0x0800190c;
}


// ===== sym.msm_dma_unmap_all_for_dev.cfi_jt @ 0x08001118 (size 8) =====

uint sym.msm_dma_unmap_all_for_dev.cfi_jt(int64_t param_1)

{
    int *arg1;
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.msm_iommu_map_mutex);
    iVar5 = rb_first(obj.msm_iommu_map_mutex);
    if (iVar5 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        do {
            mutex_lock(iVar5 + 0x30);
            piVar7 = *(iVar5 + 0x18);
            while (piVar4 = piVar7, piVar4 != iVar5 + 0x18) {
                piVar7 = *piVar4;
                if (piVar4[5] == param_1) {
                    arg1 = piVar4 + 9;
                    Hint_Prefetch(arg1,2,0,1);
                    do {
                        iVar1 = *arg1;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(arg1,0x10);
                        if (bVar3) {
                            *arg1 = iVar1 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if (iVar1 == 1) {
                        DataMemoryBarrier(2,1);
                        sym.msm_iommu_map_release(arg1);
                    }
                    else if (iVar1 < 1) {
                        refcount_warn_saturate(arg1,3);
                        uVar6 = 0xffffffea;
                    }
                    else {
                        uVar6 = 0xffffffea;
                    }
                }
            }
            mutex_unlock(iVar5 + 0x30);
            iVar5 = rb_next(iVar5);
        } while (iVar5 != 0);
    }
    mutex_unlock(obj.msm_iommu_map_mutex);
    return uVar6;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08001120 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0x10) != param_1 + -0x10) {
        __warn_printk("%s: DMA Buffer %pK being destroyed with outstanding iommu mappings!\n","msm_iommu_meta_destroy"
                      ,*(param_1 + 0x38));
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8001ee4);
        (*pcVar1)();
    }
    rb_erase(param_1 + -0x28,obj.msm_iommu_map_mutex);
    kfree(param_1 + -0x28);
    return;
}


// ===== sym.msm_iommu_map_release.568df67ef8f741c23132d38fe1138df6.cfi_jt @ 0x08001128 (size 8) =====

void sym.msm_iommu_map_release.568df67ef8f741c23132d38fe1138df6.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int64_t *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_38;
    uint uStack_30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_30 = *(param_1 + -0x10);
    uStack_38 = *(param_1 + -0x18);
    uStack_2c = uStack_30;
    uVar7 = __list_del_entry_valid(param_1 + -0x48);
    if ((uVar7 & 1) != 0) {
        iVar8 = *(param_1 + -0x48);
        piVar2 = *(param_1 + -0x40);
        *(iVar8 + 8) = piVar2;
        *piVar2 = iVar8;
    }
    *(param_1 + -0x48) = 0xdead000000000100;
    *(param_1 + -0x40) = 0xdead000000000122;
    if ((*(param_1 + 8) >> 5 & 1) == 0) {
        *(param_1 + 8) = *(param_1 + 8) | 0x20;
    }
    dma_unmap_sg_attrs(*(param_1 + -0x20),*(param_1 + -0x18),*(param_1 + -0x10),*(param_1 + -0xc));
    sg_free_table(&uStack_38);
    kfree(param_1 + -0x48);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.msm_iommu_meta_put;
    mutex_lock(obj.msm_iommu_map_mutex);
    piVar1 = iVar8 + 0x28;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar3 == 1) {
        DataMemoryBarrier(2,1);
        if (*(iVar8 + 0x18) != iVar8 + 0x18) {
            __warn_printk("%s: DMA Buffer %pK being destroyed with outstanding iommu mappings!\n",
                          "msm_iommu_meta_destroy",*(iVar8 + 0x60));
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001b5c);
            (*pcVar6)();
        }
        rb_erase(iVar8,obj.msm_iommu_map_mutex);
        kfree(iVar8);
    }
    else if (iVar3 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    mutex_unlock(obj.msm_iommu_map_mutex);
    return;
}


// ===== sym.msm_dma_map_sg_attrs @ 0x08001130 (size 124) =====

ulong sym.msm_dma_map_sg_attrs(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t arg1_00;
    ulong uVar1;
    uint64_t arg2_00;
    int64_t in_x3;
    uint64_t in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    arg2_00 = arg2;
    arg1_00 = arg1;
    *in_x18 = unaff_x30;
    if ((arg1_00 == 0) || (0xfffffffffffff000 < arg1_00)) {
        uVar1 = 0x80002c5;
    }
    else if ((arg2_00 == 0) || (0xfffffffffffff000 < arg2_00)) {
        uVar1 = 0x8000265;
    }
    else {
        if ((in_x4 != 0) && (in_x4 < 0xfffffffffffff001)) {
            uVar1 = sym.__msm_dma_map_sg(arg1_00,arg2_00,arg3,in_x3);
            return uVar1;
        }
        uVar1 = 0x800038c;
    }
    _printk(uVar1,"msm_dma_map_sg_attrs");
    return 0xffffffea;
}


// ===== sym.__msm_dma_map_sg @ 0x080011ac (size 1660) =====

uint64_t sym.__msm_dma_map_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    ulong uVar2;
    ulong uVar3;
    uint8_t uVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *puVar11;
    ulong *puVar12;
    uint64_t uVar13;
    code *pcVar14;
    ulong uVar15;
    int64_t in_x4;
    uint64_t in_x5;
    int64_t iVar16;
    ulong *in_x18;
    code *pcVar17;
    code *pcVar18;
    int64_t *arg1_00;
    uint32_t uVar19;
    uint64_t uVar20;
    code *unaff_x27;
    uint32_t uVar21;
    ulong unaff_x30;
    int64_t *piStack_80;
    ulong *puStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    uVar20 = arg3 & 0xffffffff;
    mutex_lock(obj.msm_iommu_map_mutex);
    pcVar17 = _printk;
    uVar21 = in_x5;
    if (_segment.ehdr != NULL) {
        arg1_00 = _segment.ehdr;
code_r0x08001228:
        do {
            if (*(in_x4 + 0xa0) < arg1_00[0xc]) goto code_r0x0800121c;
            if (*(in_x4 + 0xa0) <= arg1_00[0xc]) {
                puVar1 = arg1_00 + 5;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar19 = *puVar1;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                        *puVar1 = uVar19 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                if (uVar19 == 0) {
                    uVar15 = 2;
code_r0x08001714:
                    refcount_warn_saturate(puVar1,uVar15);
                }
                else if ((uVar19 + 1 | uVar19) < 0) {
                    uVar15 = 1;
                    goto code_r0x08001714;
                }
                bVar6 = false;
                goto code_r0x080013c4;
            }
            arg1_00 = arg1_00[1];
        } while (arg1_00 != NULL);
    }
code_r0x08001244:
    arg1_00 = kmem_cache_alloc_trace(__printk,0xdc0,0x68);
    if (arg1_00 == NULL) {
        arg1_00 = 0xfffffffffffffff4;
    }
    else {
        arg1_00[3] = arg1_00 + 3;
        arg1_00[4] = arg1_00 + 3;
        iVar16 = *(in_x4 + 0xa0);
        pcVar17 = arg1_00 + 5;
        *pcVar17 = 1;
        arg1_00[0xc] = iVar16;
        __mutex_init(arg1_00 + 6,"&meta->lock",obj.msm_iommu_meta_create.__key);
        unaff_x27 = obj.msm_iommu_map_mutex;
        if (_obj.msm_iommu_map_mutex == 0) {
            iVar16 = 0;
        }
        else {
            unaff_x27 = obj.msm_iommu_map_mutex;
            iVar8 = _obj.msm_iommu_map_mutex;
            do {
                iVar16 = iVar8;
                if (arg1_00[0xc] < *(iVar16 + 0x60)) {
                    unaff_x27 = iVar16 + 0x10;
                }
                else if (*(iVar16 + 0x60) < arg1_00[0xc]) {
                    unaff_x27 = iVar16 + 8;
                }
                else {
                    _printk(0x80003ae,"msm_iommu_meta_add");
                }
                iVar8 = *unaff_x27;
            } while (*unaff_x27 != 0);
        }
        *arg1_00 = iVar16;
        arg1_00[1] = 0;
        arg1_00[2] = 0;
        *unaff_x27 = arg1_00;
        rb_insert_color(arg1_00,obj.msm_iommu_map_mutex);
        if (arg1_00 < 0xfffffffffffff001) {
            if ((uVar21 >> 0xd & 1) == 0) {
                Hint_Prefetch(pcVar17,2,0,1);
                do {
                    uVar19 = *pcVar17;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(pcVar17,0x10);
                    if (bVar6) {
                        *pcVar17 = uVar19 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                if (uVar19 == 0) {
                    uVar15 = 2;
code_r0x08001730:
                    refcount_warn_saturate(pcVar17,uVar15);
                }
                else {
                    uVar15 = 1;
                    if ((uVar19 + 1 | uVar19) < 0) goto code_r0x08001730;
                }
                bVar6 = true;
            }
            else {
                bVar6 = false;
            }
code_r0x080013c4:
            uVar13 = arg4 & 0xffffffff;
            pcVar18 = _printk;
            mutex_unlock(obj.msm_iommu_map_mutex);
            piStack_80 = arg1_00 + 6;
            mutex_lock();
            unaff_x27 = arg1_00 + 3;
            uVar19 = arg3;
            for (pcVar17 = *unaff_x27; pcVar17 != unaff_x27; pcVar17 = *pcVar17) {
                if (*(pcVar17 + 0x28) == arg1) {
                    if (pcVar17 != NULL) {
                        uVar7 = *(pcVar17 + 0x3c);
                        uVar10 = uVar7;
                        if ((((*(pcVar17 + 0x38) != uVar19) || (uVar7 != arg4)) ||
                            (uVar10 = uVar13, ((*(pcVar17 + 0x50) ^ in_x5) & 0xffffffffffffffdf) != 0)) ||
                           (*(arg2 + 8) +
                            ((*arg2 & 0x3fffffffffffffc) + (_kmalloc_caches >> 6 & 0x3ffffffffffffc0) + 0x200000000) *
                            0x40 != *(pcVar17 + 0x58))) {
                            _dev_err(arg1,
                                     "lazy map request differs:\nreq dir:%d, original dir:%d\nreq nents:%d, original nents:%d\nreq map attrs:%lu, original map attrs:%lu\nreq buffer start address differs:%d\n"
                                     ,uVar13,uVar10,uVar20,*(pcVar17 + 0x38),in_x5,*(pcVar17 + 0x50),
                                     *(arg2 + 8) +
                                     ((*arg2 & 0x3fffffffffffffc) +
                                     (_kmalloc_caches >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40 !=
                                     *(pcVar17 + 0x58));
                            uVar20 = 0xffffffea;
                            goto code_r0x08001764;
                        }
                        if (uVar19 < 1) goto code_r0x0800151c;
                        pcVar18 = *(pcVar17 + 0x30);
                        uVar13 = uVar20;
                        goto code_r0x080014e0;
                    }
                    break;
                }
            }
            pcVar17 = kmem_cache_alloc_trace(__printk,0xcc0,0x60);
            if (pcVar17 == NULL) {
                uVar13 = 0xfffffff4;
            }
            else {
                uVar10 = dma_map_sg_attrs(arg1,arg2,uVar20,uVar13,in_x5);
                uVar13 = uVar10 & 0xffffffff;
                pcVar18 = pcVar17;
                if (uVar10 != 0) {
                    puStack_78 = NULL;
                    uStack_70 = 0;
                    iVar9 = sg_alloc_table(&puStack_78,uVar20,0xcc0);
                    if (iVar9 == 0) {
                        puVar12 = arg2;
                        puVar11 = puStack_78;
                        if (0 < uVar19) {
                            do {
                                uVar2 = puVar12[3];
                                uVar15 = *puVar12;
                                uVar3 = puVar12[1];
                                puVar11[2] = puVar12[2];
                                puVar11[3] = uVar2;
                                *puVar11 = uVar15;
                                puVar11[1] = uVar3;
                                puVar11 = sg_next(puVar11);
                                puVar12 = sg_next(puVar12);
                                uVar7 = uVar20 - 1;
                                uVar20 = uVar7;
                            } while (uVar7 != 0);
                        }
                        *(pcVar17 + 0x30) = puStack_78;
                        if (puStack_78 != NULL) {
                            pcVar14 = pcVar17 + 0x48;
                            *pcVar14 = 1;
                            uVar20 = _kmalloc_caches;
                            *(pcVar17 + 0x28) = arg1;
                            uVar10 = *arg2;
                            *(pcVar17 + 0x38) = uVar19;
                            *(pcVar17 + 0x3c) = arg4;
                            uVar19 = *(arg2 + 8);
                            *(pcVar17 + 0x50) = in_x5;
                            *(pcVar17 + 0x58) =
                                 uVar19 + ((uVar10 & 0x3fffffffffffffc) +
                                          (uVar20 >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                            uVar20 = uVar13;
                            if ((uVar21 >> 0xd & 1) != 0) goto code_r0x08001658;
                            goto code_r0x080017b4;
                        }
                        uVar13 = 0xfffffff4;
                    }
                    else {
                        uVar13 = 0xfffffff4;
                        *(pcVar17 + 0x30) = 0;
                    }
                }
                kfree(pcVar17);
            }
            mutex_unlock(piStack_80);
            pcVar17 = pcVar18;
            if (arg1_00 < 0xfffffffffffff001) {
                if (bVar6) {
                    sym.msm_iommu_meta_put(arg1_00);
                }
                sym.msm_iommu_meta_put(arg1_00);
            }
            goto code_r0x0800176c;
        }
    }
    mutex_unlock(obj.msm_iommu_map_mutex);
    uVar13 = arg1_00 & 0xffffffff;
code_r0x0800176c:
    do {
        iVar16 = sp_el0;
        if (*(iVar16 + 0x5e0) == iStack_68) {
            return uVar13;
        }
        pcVar14 = __stack_chk_fail();
code_r0x080017b4:
        Hint_Prefetch(pcVar14,2,0,1);
        do {
            uVar21 = *pcVar14;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(pcVar14,0x10);
            if (bVar6) {
                *pcVar14 = uVar21 + 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        pcVar18 = pcVar17;
        uVar20 = uVar13;
        if (uVar21 == 0) {
            uVar15 = 2;
code_r0x080017c0:
            refcount_warn_saturate(pcVar14,uVar15);
        }
        else if ((uVar21 + 1 | uVar21) < 0) {
            uVar15 = 1;
            goto code_r0x080017c0;
        }
code_r0x08001658:
        *(pcVar18 + 0x40) = arg1_00;
        *pcVar18 = pcVar18;
        *(pcVar18 + 8) = pcVar18;
        iVar16 = arg1_00[3];
        uVar13 = __list_add_valid(pcVar18,unaff_x27,iVar16);
        if ((uVar13 & 1) != 0) {
            *(iVar16 + 8) = pcVar18;
            *pcVar18 = iVar16;
            *(pcVar18 + 8) = unaff_x27;
            *unaff_x27 = pcVar18;
        }
code_r0x08001764:
        mutex_unlock(piStack_80);
        pcVar17 = pcVar18;
        uVar13 = uVar20;
    } while( true );
code_r0x0800121c:
    arg1_00 = arg1_00[2];
    if (arg1_00 == NULL) goto code_r0x08001244;
    goto code_r0x08001228;
    while( true ) {
        pcVar18 = sg_next(pcVar18);
        uVar19 = uVar13 - 1;
        uVar13 = uVar19;
        if (uVar19 == 0) break;
code_r0x080014e0:
        *(arg2 + 0x10) = *(pcVar18 + 0x10);
        *(arg2 + 0x18) = *(pcVar18 + 0x18);
        if ((*(pcVar18 + 0x18) == 0) || (arg2 = sg_next(arg2), arg2 == 0)) break;
    }
code_r0x0800151c:
    pcVar14 = pcVar17 + 0x48;
    Hint_Prefetch(pcVar14,2,0,1);
    do {
        uVar19 = *pcVar14;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(pcVar14,0x10);
        if (bVar6) {
            *pcVar14 = uVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    if (uVar19 == 0) {
        uVar15 = 2;
    }
    else {
        if (-1 < (uVar19 + 1 | uVar19)) goto joined_r0x08001540;
        uVar15 = 1;
    }
    refcount_warn_saturate(pcVar14,uVar15);
joined_r0x08001540:
    if ((uVar21 >> 5 & 1) == 0) {
        dma_sync_sg_for_device(arg1,*(pcVar17 + 0x30),*(pcVar17 + 0x38),*(pcVar17 + 0x3c));
        uVar4 = *(arg1 + 0x34c);
    }
    else {
        uVar4 = *(arg1 + 0x34c);
    }
    if ((uVar4 >> 5 & 1) == 0) goto code_r0x08001764;
    DataMemoryBarrier(2,3);
    goto code_r0x08001764;
}


// ===== sym.msm_dma_unmap_sg_attrs @ 0x08001828 (size 504) =====

void sym.msm_dma_unmap_sg_attrs(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int *arg1_00;
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int64_t in_x4;
    int64_t in_x5;
    ulong *in_x18;
    int64_t arg1_01;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.msm_iommu_map_mutex);
    if (_segment.ehdr != 0) {
        arg1_01 = _segment.ehdr;
        do {
            while (*(in_x4 + 0xa0) < *(arg1_01 + 0x60)) {
                arg1_01 = *(arg1_01 + 0x10);
                if (arg1_01 == 0) goto code_r0x080018a0;
            }
            if (*(in_x4 + 0xa0) <= *(arg1_01 + 0x60)) {
                mutex_unlock(obj.msm_iommu_map_mutex);
                mutex_lock(arg1_01 + 0x30);
                piVar5 = *(arg1_01 + 0x18);
                goto joined_r0x0800190c;
            }
            arg1_01 = *(arg1_01 + 8);
        } while (arg1_01 != 0);
    }
code_r0x080018a0:
    __warn_printk("%s: (%pK) was never mapped\n","msm_dma_unmap_sg_attrs");
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x80018c0);
    (*pcVar4)();
joined_r0x0800190c:
    if (piVar5 == arg1_01 + 0x18) {
code_r0x08001928:
        __warn_printk("%s: (%pK) was never mapped for device  %p\n","msm_dma_unmap_sg_attrs");
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x800194c);
        (*pcVar4)();
    }
    if (piVar5[5] == arg1) {
        if (piVar5 != NULL) {
            if (*(piVar5 + 0x3c) == arg2) {
                if ((in_x5 != 0) && ((in_x5 >> 5 & 1) == 0)) {
                    dma_sync_sg_for_cpu(arg1,piVar5[6],*(piVar5 + 7),arg2 & 0xffffffff);
                }
                arg1_00 = piVar5 + 9;
                piVar5[10] = in_x5;
                Hint_Prefetch(arg1_00,2,0,1);
                do {
                    iVar1 = *arg1_00;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
                    if (bVar3) {
                        *arg1_00 = iVar1 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (iVar1 == 1) {
                    DataMemoryBarrier(2,1);
                    sym.msm_iommu_map_release(arg1_00);
                }
                else if (iVar1 < 1) {
                    refcount_warn_saturate(arg1_00,3);
                }
                mutex_unlock(arg1_01 + 0x30);
                sym.msm_iommu_meta_put(arg1_01);
                return;
            }
            __warn_printk("%s: (%pK) dir:%d differs from original dir:%d\n","msm_dma_unmap_sg_attrs");
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x8001980);
            (*pcVar4)();
        }
        goto code_r0x08001928;
    }
    piVar5 = *piVar5;
    goto joined_r0x0800190c;
}


// ===== sym.msm_iommu_map_release @ 0x08001a20 (size 196) =====

void sym.msm_iommu_map_release(int64_t arg1)

{
    int *piVar1;
    int64_t *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_38;
    uint uStack_30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_30 = *(arg1 + -0x10);
    uStack_38 = *(arg1 + -0x18);
    uStack_2c = uStack_30;
    uVar7 = __list_del_entry_valid(arg1 + -0x48);
    if ((uVar7 & 1) != 0) {
        iVar8 = *(arg1 + -0x48);
        piVar2 = *(arg1 + -0x40);
        *(iVar8 + 8) = piVar2;
        *piVar2 = iVar8;
    }
    *(arg1 + -0x48) = 0xdead000000000100;
    *(arg1 + -0x40) = 0xdead000000000122;
    if ((*(arg1 + 8) >> 5 & 1) == 0) {
        *(arg1 + 8) = *(arg1 + 8) | 0x20;
    }
    dma_unmap_sg_attrs(*(arg1 + -0x20),*(arg1 + -0x18),*(arg1 + -0x10),*(arg1 + -0xc));
    sg_free_table(&uStack_38);
    kfree(arg1 + -0x48);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.msm_iommu_meta_put;
    mutex_lock(obj.msm_iommu_map_mutex);
    piVar1 = iVar8 + 0x28;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar3 == 1) {
        DataMemoryBarrier(2,1);
        if (*(iVar8 + 0x18) != iVar8 + 0x18) {
            __warn_printk("%s: DMA Buffer %pK being destroyed with outstanding iommu mappings!\n",
                          "msm_iommu_meta_destroy",*(iVar8 + 0x60));
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001b5c);
            (*pcVar6)();
        }
        rb_erase(iVar8,obj.msm_iommu_map_mutex);
        kfree(iVar8);
    }
    else if (iVar3 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    mutex_unlock(obj.msm_iommu_map_mutex);
    return;
}


// ===== sym.msm_iommu_meta_put @ 0x08001ae4 (size 248) =====

void sym.msm_iommu_meta_put(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.msm_iommu_map_mutex);
    piVar1 = arg1 + 0x28;
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
        if (*(arg1 + 0x18) != arg1 + 0x18) {
            __warn_printk("%s: DMA Buffer %pK being destroyed with outstanding iommu mappings!\n",
                          "msm_iommu_meta_destroy",*(arg1 + 0x60));
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8001b5c);
            (*pcVar5)();
        }
        rb_erase(arg1,obj.msm_iommu_map_mutex);
        kfree(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    mutex_unlock(obj.msm_iommu_map_mutex);
    return;
}


// ===== sym.msm_dma_unmap_all_for_dev @ 0x08001bdc (size 332) =====

uint sym.msm_dma_unmap_all_for_dev(int64_t arg1)

{
    int *arg1_00;
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.msm_iommu_map_mutex);
    iVar5 = rb_first(obj.msm_iommu_map_mutex);
    if (iVar5 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        do {
            mutex_lock(iVar5 + 0x30);
            piVar7 = *(iVar5 + 0x18);
            while (piVar4 = piVar7, piVar4 != iVar5 + 0x18) {
                piVar7 = *piVar4;
                if (piVar4[5] == arg1) {
                    arg1_00 = piVar4 + 9;
                    Hint_Prefetch(arg1_00,2,0,1);
                    do {
                        iVar1 = *arg1_00;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
                        if (bVar3) {
                            *arg1_00 = iVar1 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if (iVar1 == 1) {
                        DataMemoryBarrier(2,1);
                        sym.msm_iommu_map_release(arg1_00);
                    }
                    else if (iVar1 < 1) {
                        refcount_warn_saturate(arg1_00,3);
                        uVar6 = 0xffffffea;
                    }
                    else {
                        uVar6 = 0xffffffea;
                    }
                }
            }
            mutex_unlock(iVar5 + 0x30);
            iVar5 = rb_next(iVar5);
        } while (iVar5 != 0);
    }
    mutex_unlock(obj.msm_iommu_map_mutex);
    return uVar6;
}


// ===== sym.msm_dma_buf_freed @ 0x08001d28 (size 372) =====

void sym.msm_dma_buf_freed(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int *arg1_00;
    ulong *in_x18;
    int64_t arg1_01;
    int64_t *piVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.msm_iommu_map_mutex);
    for (arg1_01 = _segment.ehdr; arg1_01 != 0; arg1_01 = *(arg1_01 + 0x10)) {
        while (*(arg1_01 + 0x60) <= arg1) {
            if (arg1 <= *(arg1_01 + 0x60)) {
                mutex_unlock(obj.msm_iommu_map_mutex);
                mutex_lock(arg1_01 + 0x30);
                piVar5 = arg1_01 + 0x18;
                piVar6 = *piVar5;
                while (piVar6 != piVar5) {
                    arg1_00 = piVar6 + 9;
                    piVar6 = *piVar6;
                    Hint_Prefetch(arg1_00,2,0,1);
                    do {
                        iVar1 = *arg1_00;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
                        if (bVar3) {
                            *arg1_00 = iVar1 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if (iVar1 == 1) {
                        DataMemoryBarrier(2,1);
                        sym.msm_iommu_map_release(arg1_00);
                    }
                    else if (iVar1 < 1) {
                        refcount_warn_saturate(arg1_00,3);
                    }
                }
                if (*piVar5 == piVar5) {
                    *(arg1_01 + 0x18) = piVar5;
                    *(arg1_01 + 0x20) = piVar5;
                    mutex_unlock(arg1_01 + 0x30);
                    sym.msm_iommu_meta_put(arg1_01);
                    return;
                }
                __warn_printk("%s: DMA buffer %pK destroyed with outstanding iommu mappings\n","msm_dma_buf_freed",
                              *(arg1_01 + 0x60));
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8001e50);
                (*pcVar4)();
            }
            arg1_01 = *(arg1_01 + 8);
            if (arg1_01 == 0) goto code_r0x08001d8c;
        }
    }
code_r0x08001d8c:
    mutex_unlock(obj.msm_iommu_map_mutex);
    return;
}


// ===== sym.msm_iommu_meta_destroy @ 0x08001ea0 (size 112) =====

void sym.msm_iommu_meta_destroy(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x10) != arg1 + -0x10) {
        __warn_printk("%s: DMA Buffer %pK being destroyed with outstanding iommu mappings!\n","msm_iommu_meta_destroy"
                      ,*(arg1 + 0x38));
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8001ee4);
        (*pcVar1)();
    }
    rb_erase(arg1 + -0x28,obj.msm_iommu_map_mutex);
    kfree(arg1 + -0x28);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001f14 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001f58

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
    //switch table (4 cases) at 0x80004dd
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f6c);
    (*pcVar1)();
}

