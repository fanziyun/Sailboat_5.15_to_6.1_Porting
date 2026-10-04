// decompiled from industrialio-buffer-cb by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 404) =====

//WARNING: Switch with 1 destination removed at 0x0800152c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x56b2d45641a48a5) {
        if (arg1 < -0x1e81c4cfc0cb6057) {
            if (arg1 == -0x54c03d67eb75a6d8) {
                pcVar2 = sym.iio_buffer_cb_store_to.938ed576892c12fb37e4e4c57d134aff.cfi_jt;
            }
            else {
                if (arg1 != -0x348408c39d3c7acf) goto code_r0x080014ec;
                pcVar2 = sym.iio_channel_start_all_cb.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x1e81c4cfc0cb6057) {
                if ((arg1 == -0x89689aee543cee7) && ((pcVar1 + -0x80011d0 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x080014ec;
            }
            pcVar2 = sym.iio_channel_get_all_cb.cfi_jt;
        }
    }
    else if (arg1 < 0x6139746a49d841b9) {
        if (arg1 == 0x56b2d45641a48a5) {
            pcVar2 = sym.iio_buffer_cb_release.938ed576892c12fb37e4e4c57d134aff.cfi_jt;
        }
        else {
            if (arg1 != 0x51396131fc0b6e34) goto code_r0x080014ec;
            pcVar2 = sym.iio_channel_cb_set_buffer_watermark.cfi_jt;
        }
    }
    else if (arg1 == 0x6139746a49d841b9) {
        pcVar2 = sym.iio_channel_cb_get_channels.cfi_jt;
    }
    else {
        if (arg1 != 0x6a6e182fc12d7640) goto code_r0x080014ec;
        pcVar2 = sym.iio_channel_cb_get_iio_dev.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080014ec:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001540);
    (*pcVar1)();
}


// ===== sym.iio_channel_start_all_cb.cfi_jt @ 0x080011a0 (size 8) =====

void sym.iio_channel_start_all_cb.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iio_update_buffers(*(param_1 + 0xe0),param_1,0);
    return;
}


// ===== sym.iio_channel_cb_set_buffer_watermark.cfi_jt @ 0x080011a8 (size 8) =====

ulong sym.iio_channel_cb_set_buffer_watermark.cfi_jt(int64_t param_1,int64_t param_2)

{
    if (param_2 != 0) {
        *(param_1 + 0x50) = param_2;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.iio_channel_cb_get_iio_dev.cfi_jt @ 0x080011b0 (size 8) =====

ulong sym.iio_channel_cb_get_iio_dev.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0xe0);
}


// ===== sym.iio_buffer_cb_store_to.938ed576892c12fb37e4e4c57d134aff.cfi_jt @ 0x080011b8 (size 8) =====

void sym.iio_buffer_cb_store_to.938ed576892c12fb37e4e4c57d134aff.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(param_1 + 200);
    __cfi_slowpath_diag(0x8f9a07ba57c6c69a,pcVar1,0x80000d0);
    (*pcVar1)(param_2,*(param_1 + 0xd0));
    return;
}


// ===== sym.iio_channel_get_all_cb.cfi_jt @ 0x080011c0 (size 8) =====

int64_t sym.iio_channel_get_all_cb.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        _dev_err(param_1,"Invalid arguments: A callback must be provided!\n");
        iVar5 = -0x16;
    }
    else {
        iVar5 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0xe8);
        if (iVar5 == 0) {
            iVar5 = -0xc;
        }
        else {
            iio_buffer_init();
            *(iVar5 + 200) = param_2;
            *(iVar5 + 0xd0) = param_3;
            *(iVar5 + 0x18) = reloc.iio_buffer_cb_store_to.938ed576892c12fb37e4e4c57d134aff.cfi_jt;
            *(iVar5 + 0x28) = iVar5 + 0x28;
            *(iVar5 + 0x30) = iVar5 + 0x28;
            piVar6 = iio_channel_get_all(param_1);
            *(iVar5 + 0xd8) = piVar6;
            if (piVar6 < 0xfffffffffffff001) {
                iVar7 = *piVar6;
                *(iVar5 + 0xe0) = iVar7;
                iVar7 = bitmap_zalloc(*(iVar7 + 0x3e0),0xcc0);
                *(iVar5 + 0x20) = iVar7;
                if (iVar7 == 0) {
                    piVar6 = 0xfffffffffffffff4;
                }
                else {
                    iVar7 = **(iVar5 + 0xd8);
                    piVar6 = *(iVar5 + 0xd8);
                    while( true ) {
                        if (iVar7 == 0) {
                            return iVar5;
                        }
                        if (iVar7 != *(iVar5 + 0xe0)) break;
                        uVar2 = *(piVar6[1] + 0x18);
                        puVar1 = *(iVar5 + 0x20) + (uVar2 >> 3 & 0x1ffffff8);
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                                *puVar1 = *puVar1 | 1L << (uVar2 & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        iVar7 = piVar6[3];
                        piVar6 = piVar6 + 3;
                    }
                    bitmap_free(*(iVar5 + 0x20));
                    piVar6 = 0xffffffffffffffea;
                }
                iio_channel_release_all(*(iVar5 + 0xd8));
            }
            kfree(iVar5);
            iVar5 = piVar6;
        }
    }
    return iVar5;
}


// ===== sym.iio_buffer_cb_release.938ed576892c12fb37e4e4c57d134aff.cfi_jt @ 0x080011c8 (size 8) =====

void sym.iio_buffer_cb_release.938ed576892c12fb37e4e4c57d134aff.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bitmap_free(*(param_1 + 0x20));
    kfree(param_1);
    return;
}


// ===== sym.iio_channel_release_all_cb.cfi_jt @ 0x080011d0 (size 8) =====

void sym.iio_channel_release_all_cb.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iio_channel_release_all(*(param_1 + 0xd8));
    iio_buffer_put(param_1);
    return;
}


// ===== sym.iio_channel_stop_all_cb.cfi_jt @ 0x080011d8 (size 8) =====

void sym.iio_channel_stop_all_cb.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iio_update_buffers(*(param_1 + 0xe0),0,param_1);
    return;
}


// ===== sym.iio_channel_cb_get_channels.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.iio_channel_cb_get_channels.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0xd8);
}


// ===== sym.iio_channel_get_all_cb @ 0x080011e8 (size 380) =====

int64_t sym.iio_channel_get_all_cb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _dev_err(arg1,"Invalid arguments: A callback must be provided!\n");
        iVar5 = -0x16;
    }
    else {
        iVar5 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0xe8);
        if (iVar5 == 0) {
            iVar5 = -0xc;
        }
        else {
            iio_buffer_init();
            *(iVar5 + 200) = arg2;
            *(iVar5 + 0xd0) = arg3;
            *(iVar5 + 0x18) = reloc.iio_buffer_cb_store_to.938ed576892c12fb37e4e4c57d134aff.cfi_jt;
            *(iVar5 + 0x28) = iVar5 + 0x28;
            *(iVar5 + 0x30) = iVar5 + 0x28;
            piVar6 = iio_channel_get_all(arg1);
            *(iVar5 + 0xd8) = piVar6;
            if (piVar6 < 0xfffffffffffff001) {
                iVar7 = *piVar6;
                *(iVar5 + 0xe0) = iVar7;
                iVar7 = bitmap_zalloc(*(iVar7 + 0x3e0),0xcc0);
                *(iVar5 + 0x20) = iVar7;
                if (iVar7 == 0) {
                    piVar6 = 0xfffffffffffffff4;
                }
                else {
                    iVar7 = **(iVar5 + 0xd8);
                    piVar6 = *(iVar5 + 0xd8);
                    while( true ) {
                        if (iVar7 == 0) {
                            return iVar5;
                        }
                        if (iVar7 != *(iVar5 + 0xe0)) break;
                        uVar2 = *(piVar6[1] + 0x18);
                        puVar1 = *(iVar5 + 0x20) + (uVar2 >> 3 & 0x1ffffff8);
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                                *puVar1 = *puVar1 | 1L << (uVar2 & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        iVar7 = piVar6[3];
                        piVar6 = piVar6 + 3;
                    }
                    bitmap_free(*(iVar5 + 0x20));
                    piVar6 = 0xffffffffffffffea;
                }
                iio_channel_release_all(*(iVar5 + 0xd8));
            }
            kfree(iVar5);
            iVar5 = piVar6;
        }
    }
    return iVar5;
}


// ===== sym.iio_channel_cb_set_buffer_watermark @ 0x08001364 (size 36) =====

ulong sym.iio_channel_cb_set_buffer_watermark(int64_t arg1,int64_t arg2)

{
    if (arg2 != 0) {
        *(arg1 + 0x50) = arg2;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.iio_channel_start_all_cb @ 0x08001388 (size 48) =====

void sym.iio_channel_start_all_cb(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iio_update_buffers(*(arg1 + 0xe0),arg1,0);
    return;
}


// ===== sym.iio_channel_stop_all_cb @ 0x080013b8 (size 48) =====

void sym.iio_channel_stop_all_cb(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iio_update_buffers(*(arg1 + 0xe0),0,arg1);
    return;
}


// ===== sym.iio_channel_release_all_cb @ 0x080013e8 (size 60) =====

void sym.iio_channel_release_all_cb(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iio_channel_release_all(*(arg1 + 0xd8));
    iio_buffer_put(arg1);
    return;
}


// ===== sym.iio_channel_cb_get_channels @ 0x08001424 (size 16) =====

ulong sym.iio_channel_cb_get_channels(int64_t arg1)

{
    return *(arg1 + 0xd8);
}


// ===== sym.iio_channel_cb_get_iio_dev @ 0x08001434 (size 16) =====

ulong sym.iio_channel_cb_get_iio_dev(int64_t arg1)

{
    return *(arg1 + 0xe0);
}


// ===== sym.iio_buffer_cb_store_to @ 0x08001444 (size 104) =====

void sym.iio_buffer_cb_store_to(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 200);
    __cfi_slowpath_diag(0x8f9a07ba57c6c69a,pcVar1,0x80000d0);
    (*pcVar1)(arg2,*(arg1 + 0xd0));
    return;
}


// ===== sym.iio_buffer_cb_release @ 0x080014ac (size 60) =====

void sym.iio_buffer_cb_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bitmap_free(*(arg1 + 0x20));
    kfree(arg1);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080014e8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800152c

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
    //switch table (4 cases) at 0x80000f0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001540);
    (*pcVar1)();
}

