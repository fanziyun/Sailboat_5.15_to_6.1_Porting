// decompiled from iommu-logger by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 100) =====

//WARNING: Switch with 1 destination removed at 0x08001330

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 == 0xbe83dbf36f31703c) {
        uVar2 = 0x8001078;
    }
    else {
        if (arg1 != 0x5c24eafe99021da2) goto code_r0x080012f0;
        uVar2 = 0x8001070;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080012f0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001344);
    (*pcVar1)();
}


// ===== sym.iommu_logger_register.cfi_jt @ 0x08001070 (size 8) =====

uint64_t sym.iommu_logger_register.cfi_jt(uint64_t *param_1,ulong param_2,ulong *param_3,int *param_4)

{
    uint32_t uVar1;
    ulong *puVar2;
    uint uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *puVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar10 = 0xffffffea;
    if (((param_1 != NULL) && (param_3 != NULL)) && (param_4 != NULL)) {
        uVar11 = 0;
        uVar1 = *param_4 + 2;
        if ((uVar1 < 5) && (uVar1 != 3)) {
            uVar9 = (*(param_4 + 6) & 0xaaaaaaaaaaaaaaaa) >> 1 | (*(param_4 + 6) & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar4 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) - 3;
            uVar11 = 0;
            if (uVar4 != 0) {
                uVar11 = (param_4[8] - 4U) / uVar4;
            }
        }
        if (uVar1 < 5) {
            puVar10 = 0xffffffffffffffea;
            if ((((0x17U >> (uVar1 & 0x1f) & 1) != 0) && (uVar11 != 0)) &&
               ((uVar4 = *param_4 + 2, uVar4 < 5 && (uVar4 != 3)))) {
                iVar12 = *(param_4 + 0x10);
                iVar7 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar7 = 0x30;
                }
                iVar5 = CONCAT71(android_kmalloc_64_create,android_kmalloc_64_create);
                puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xdc0,0x40);
                if (puVar10 == NULL) {
                    puVar10 = 0xfffffffffffffff4;
                }
                else {
                    iVar7 = kasprintf(0xcc0,0x80000a5,*param_3);
                    if (iVar7 == 0) {
                        kfree(puVar10);
                        puVar10 = 0xfffffffffffffff4;
                    }
                    else {
                        uVar3 = *(uVar1 * 4 + 0x80000a8);
                        uVar8 = iommu_group_get(param_3);
                        iommu_group_put();
                        puVar2 = puVar10 + 6;
                        puVar10[6] = puVar2;
                        puVar10[7] = puVar2;
                        *puVar10 = param_2;
                        puVar10[1] = uVar8;
                        puVar10[2] = iVar7;
                        *(puVar10 + 3) = uVar3;
                        *(puVar10 + 0x1c) = uVar11;
                        puVar10[4] = iVar12 - iVar5 | 0xffffff8000000000;
                        puVar10[5] = 0;
                        if (puVar10 < 0xfffffffffffff001) {
                            mutex_lock(obj.iommu_debug_attachments_lock);
                            puVar6 = _obj.iommu_debug_attachments;
                            uVar9 = __list_add_valid(puVar2,obj.iommu_debug_attachments,_obj.iommu_debug_attachments);
                            if ((uVar9 & 1) != 0) {
                                puVar6[1] = puVar2;
                                puVar10[6] = puVar6;
                                puVar10[7] = obj.iommu_debug_attachments;
                                _obj.iommu_debug_attachments = puVar2;
                            }
                            mutex_unlock(obj.iommu_debug_attachments_lock);
                            *param_1 = puVar10;
                            puVar10 = NULL;
                        }
                    }
                }
            }
        }
        else {
            puVar10 = 0xffffffffffffffea;
        }
    }
    return puVar10 & 0xffffffff;
}


// ===== sym.iommu_logger_unregister.cfi_jt @ 0x08001078 (size 8) =====

void sym.iommu_logger_unregister.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(obj.iommu_debug_attachments_lock);
        uVar3 = __list_del_entry_valid(param_1 + 0x30);
        if ((uVar3 & 1) != 0) {
            iVar1 = *(param_1 + 0x30);
            piVar2 = *(param_1 + 0x38);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(param_1 + 0x30) = 0xdead000000000100;
        *(param_1 + 0x38) = 0xdead000000000122;
        mutex_unlock(obj.iommu_debug_attachments_lock);
        kfree(*(param_1 + 0x10));
        kfree(param_1);
    }
    return;
}


// ===== sym.iommu_logger_register @ 0x08001080 (size 484) =====

uint64_t sym.iommu_logger_register(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t *piVar2;
    uint uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    uint32_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = 0xffffffea;
    if (((arg1 != 0) && (arg3 != 0)) && (arg4 != 0)) {
        uVar11 = 0;
        uVar1 = *arg4 + 2;
        if ((uVar1 < 5) && (uVar1 != 3)) {
            uVar9 = (*(arg4 + 0x18) & 0xaaaaaaaaaaaaaaaa) >> 1 | (*(arg4 + 0x18) & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar4 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) - 3;
            uVar11 = 0;
            if (uVar4 != 0) {
                uVar11 = (*(arg4 + 0x20) - 4U) / uVar4;
            }
        }
        if (uVar1 < 5) {
            piVar10 = 0xffffffffffffffea;
            if ((((0x17U >> (uVar1 & 0x1f) & 1) != 0) && (uVar11 != 0)) &&
               ((uVar4 = *arg4 + 2, uVar4 < 5 && (uVar4 != 3)))) {
                iVar12 = *(arg4 + 0x40);
                iVar7 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar7 = 0x30;
                }
                iVar5 = CONCAT71(android_kmalloc_64_create,android_kmalloc_64_create);
                piVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xdc0,0x40);
                if (piVar10 == NULL) {
                    piVar10 = 0xfffffffffffffff4;
                }
                else {
                    iVar7 = kasprintf(0xcc0,0x80000a5,*arg3);
                    if (iVar7 == 0) {
                        kfree(piVar10);
                        piVar10 = 0xfffffffffffffff4;
                    }
                    else {
                        uVar3 = *(uVar1 * 4 + 0x80000a8);
                        iVar8 = iommu_group_get(arg3);
                        iommu_group_put();
                        piVar2 = piVar10 + 6;
                        piVar10[6] = piVar2;
                        piVar10[7] = piVar2;
                        *piVar10 = arg2;
                        piVar10[1] = iVar8;
                        piVar10[2] = iVar7;
                        *(piVar10 + 3) = uVar3;
                        *(piVar10 + 0x1c) = uVar11;
                        piVar10[4] = iVar12 - iVar5 | 0xffffff8000000000;
                        piVar10[5] = 0;
                        if (piVar10 < 0xfffffffffffff001) {
                            mutex_lock(obj.iommu_debug_attachments_lock);
                            piVar6 = _obj.iommu_debug_attachments;
                            uVar9 = __list_add_valid(piVar2,obj.iommu_debug_attachments,_obj.iommu_debug_attachments);
                            if ((uVar9 & 1) != 0) {
                                piVar6[1] = piVar2;
                                piVar10[6] = piVar6;
                                piVar10[7] = obj.iommu_debug_attachments;
                                _obj.iommu_debug_attachments = piVar2;
                            }
                            mutex_unlock(obj.iommu_debug_attachments_lock);
                            *arg1 = piVar10;
                            piVar10 = NULL;
                        }
                    }
                }
            }
        }
        else {
            piVar10 = 0xffffffffffffffea;
        }
    }
    return piVar10 & 0xffffffff;
}


// ===== sym.iommu_logger_unregister @ 0x08001264 (size 136) =====

void sym.iommu_logger_unregister(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(obj.iommu_debug_attachments_lock);
        uVar3 = __list_del_entry_valid(arg1 + 0x30);
        if ((uVar3 & 1) != 0) {
            iVar1 = *(arg1 + 0x30);
            piVar2 = *(arg1 + 0x38);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(arg1 + 0x30) = 0xdead000000000100;
        *(arg1 + 0x38) = 0xdead000000000122;
        mutex_unlock(obj.iommu_debug_attachments_lock);
        kfree(*(arg1 + 0x10));
        kfree(arg1);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080012ec (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001330

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
    //switch table (4 cases) at 0x80000a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001344);
    (*pcVar1)();
}

