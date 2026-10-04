// decompiled from mem-hooks by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x0800141c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x3f4ce6250188cdb0) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x1aa489859dbd492d) {
            pcVar2 = sym.kswapd_threads_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt;
        }
        else {
            if (arg1 != 0x28d44a19e3cc929c) goto code_r0x080013dc;
            pcVar2 = sym.allow_shared_pages_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt;
        }
    }
    else if (arg1 == 0x3f4ce6250188cdb0) {
        pcVar2 = sym.balance_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt;
    }
    else {
        if (arg1 == 0x4626d359a3e1a2d4) {
            if ((pcVar1 + -0x8001148 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x080013dc;
        }
        if (arg1 != 0x641d19c7be126e92) goto code_r0x080013dc;
        pcVar2 = sym.kswapd.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080013dc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001430);
    (*pcVar1)();
}


// ===== sym.kswapd_threads_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt @ 0x08001120 (size 8) =====

void sym.kswapd_threads_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt
               (ulong param_1,uint64_t param_2,uchar *param_3,uint32_t param_4)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *param_3 = 1;
    uVar2 = _segment.ehdr;
    if ((param_4 & 1) == 0) {
        if (_segment.ehdr != 0) {
            iVar3 = 0;
            do {
                if (iVar3 == 0x80) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001294);
                    (*pcVar1)();
                }
                if (*(iVar3 + 0x8005364) != 0) {
                    kthread_stop();
                    *(iVar3 + 0x8005364) = 0;
                }
                iVar3 = iVar3 + 8;
            } while (uVar2 * 8 - iVar3 != 0);
        }
        _kswapd = 0;
    }
    else {
        sym.kswapd_per_node_run(param_2 & 0xffffffff,_segment.ehdr);
    }
    return;
}


// ===== sym.kswapd.cfi_jt @ 0x08001128 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.kswapd.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08001130 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0x11) {
        if (1 < _segment.ehdr) {
            uVar2 = tracepoint_probe_register
                              (__tracepoint_android_vh_kswapd_per_node,
                               sym.kswapd_threads_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
            if (uVar2 != 0) {
                uVar2 = uVar2 & 0xffffffff;
                uVar3 = 0x80000db;
                goto code_r0x08001580;
            }
            sym.kswapd_per_node_run(uVar2,_segment.ehdr);
        }
    }
    else {
        _printk(0x800013e,_segment.ehdr,0x10);
    }
    uVar1 = android_rvh_probe_register
                      (__tracepoint_android_rvh_set_readahead_gfp_mask,
                       sym.readahead_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
    if (uVar1 == 0) {
        uVar1 = android_rvh_probe_register
                          (__tracepoint_android_rvh_set_gfp_zone_flags,
                           sym.gfp_zone_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
        if (uVar1 == 0) {
            uVar1 = android_rvh_probe_register
                              (__tracepoint_android_rvh_set_skip_swapcache_flags,
                               sym.set_swap_cache.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
            if (uVar1 == 0) {
                uVar1 = android_rvh_probe_register
                                  (__tracepoint_android_rvh_set_balance_anon_file_reclaim,
                                   sym.balance_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
                if (uVar1 == 0) {
                    uVar1 = tracepoint_probe_register
                                      (__tracepoint_android_vh_madvise_cold_or_pageout,
                                       sym.allow_shared_pages_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
                    uVar2 = uVar1;
                    if (uVar1 == 0) {
                        return 0;
                    }
                    uVar3 = 0x800009e;
                }
                else {
                    uVar2 = uVar1;
                    uVar3 = 0x80001cb;
                }
            }
            else {
                uVar2 = uVar1;
                uVar3 = 0x800006d;
            }
        }
        else {
            uVar2 = uVar1;
            uVar3 = 0x8000107;
        }
    }
    else {
        uVar2 = uVar1;
        uVar3 = 0x800019c;
    }
code_r0x08001580:
    _printk(uVar3);
    return uVar2;
}


// ===== sym.allow_shared_pages_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt @ 0x08001138 (size 8) =====

void sym.allow_shared_pages_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt
               (ulong param_1,int64_t param_2,ulong param_3)

{
    int64_t iVar1;
    
    iVar1 = sp_el0;
    *param_3 = *(iVar1 + 0x520) != *(param_2 + 0x40);
    return;
}


// ===== sym.balance_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt @ 0x08001140 (size 8) =====

void sym.balance_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt(ulong param_1,uchar *param_2)

{
    *param_2 = 0;
    return;
}


// ===== sym.set_swap_cache.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt @ 0x08001148 (size 8) =====

void sym.set_swap_cache.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt(ulong param_1,uint32_t *param_2)

{
    *param_2 = *param_2 | 0x8000000;
    return;
}


// ===== sym.readahead_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt @ 0x08001150 (size 8) =====

void sym.readahead_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt(ulong param_1,uint32_t *param_2)

{
    if ((*param_2 >> 3 & 1) != 0) {
        *param_2 = *param_2 & 0xfffffffd | 0x8000000;
    }
    return;
}


// ===== sym.gfp_zone_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt @ 0x08001158 (size 8) =====

void sym.gfp_zone_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt(ulong param_1,uint32_t *param_2)

{
    if ((*param_2 & 0x8000008) == 8) {
        *param_2 = *param_2 & 0xfffffffd;
    }
    return;
}


// ===== sym.readahead_set @ 0x08001160 (size 32) =====

void sym.readahead_set(ulong noname_0,int64_t arg1)

{
    if ((*arg1 >> 3 & 1) != 0) {
        *arg1 = *arg1 & 0xfffffffd | 0x8000000;
    }
    return;
}


// ===== sym.gfp_zone_set @ 0x08001180 (size 40) =====

void sym.gfp_zone_set(ulong noname_0,int64_t arg1)

{
    if ((*arg1 & 0x8000008) == 8) {
        *arg1 = *arg1 & 0xfffffffd;
    }
    return;
}


// ===== sym.set_swap_cache @ 0x080011a8 (size 24) =====

void sym.set_swap_cache(ulong noname_0,int64_t arg1)

{
    *arg1 = *arg1 | 0x8000000;
    return;
}


// ===== sym.balance_reclaim @ 0x080011c0 (size 16) =====

void sym.balance_reclaim(int64_t arg1,int64_t arg2)

{
    *arg2 = 0;
    return;
}


// ===== sym.allow_shared_pages_reclaim @ 0x080011d0 (size 36) =====

void sym.allow_shared_pages_reclaim(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = sp_el0;
    *arg2 = *(iVar1 + 0x520) != *(arg1 + 0x40);
    return;
}


// ===== sym.kswapd_threads_set @ 0x080011f4 (size 160) =====

void sym.kswapd_threads_set(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t in_w3;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *arg2 = 1;
    uVar2 = _segment.ehdr;
    if ((in_w3 & 1) == 0) {
        if (_segment.ehdr != 0) {
            iVar3 = 0;
            do {
                if (iVar3 == 0x80) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001294);
                    (*pcVar1)();
                }
                if (*(iVar3 + 0x8005364) != 0) {
                    kthread_stop();
                    *(iVar3 + 0x8005364) = 0;
                }
                iVar3 = iVar3 + 8;
            } while (uVar2 * 8 - iVar3 != 0);
        }
        _kswapd = 0;
    }
    else {
        sym.kswapd_per_node_run(arg1 & 0xffffffff,_segment.ehdr);
    }
    return;
}


// ===== sym.kswapd_per_node_run @ 0x08001294 (size 324) =====

//WARNING: Removing unreachable block (ram,0x080013a8)

void sym.kswapd_per_node_run(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    
    *in_x18 = unaff_x30;
    if (_kswapd == 0) {
        uVar3 = 0;
        if (arg2 == 0) {
            return;
        }
    }
    else {
        uVar3 = 1;
        if (arg2 < 2) {
            return;
        }
    }
    uVar4 = uVar3;
    do {
        auVar5 = kthread_create_on_node
                           (sym.kswapd.cfi_jt,contig_page_data,0xffffffff,"kswapd%d:%d",arg1 & 0xffffffffU,
                            uVar4 & 0xffffffff);
        uVar2 = auVar5._0_8_;
        if (uVar2 < 0xfffffffffffff001) {
            wake_up_process(uVar2);
            if (0xf < uVar4) {
code_r0x080013d4:
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x80013d8);
                (*pcVar1)();
            }
            *(uVar4 * 8 + 0x8005364) = uVar2;
            if (*0x800535c == 0) {
                _kswapd = uVar2;
            }
        }
        else {
            if (0xf < uVar4) goto code_r0x080013d4;
            *auVar5._8_8_ = 0x8004000;
            *(uVar4 * 8 + 0x8005364) = uVar2;
            _printk(0x8000175,uVar4 & 0xffffffff,arg1 & 0xffffffffU);
            *(uVar4 * 8 + 0x8005364) = 0;
        }
        uVar4 = uVar4 + 1;
        if (arg2 == uVar4) {
            return;
        }
    } while( true );
}


// ===== sym.__cfi_check_fail @ 0x080013d8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800141c

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
    //switch table (4 cases) at 0x8000201
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001430);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001434 (size 360) =====

uint64_t sym.init_module(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0x11) {
        if (1 < _segment.ehdr) {
            uVar2 = tracepoint_probe_register
                              (__tracepoint_android_vh_kswapd_per_node,
                               sym.kswapd_threads_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
            if (uVar2 != 0) {
                uVar2 = uVar2 & 0xffffffff;
                uVar3 = 0x80000db;
                goto code_r0x08001580;
            }
            sym.kswapd_per_node_run(uVar2,_segment.ehdr);
        }
    }
    else {
        _printk(0x800013e,_segment.ehdr,0x10);
    }
    uVar1 = android_rvh_probe_register
                      (__tracepoint_android_rvh_set_readahead_gfp_mask,
                       sym.readahead_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
    if (uVar1 == 0) {
        uVar1 = android_rvh_probe_register
                          (__tracepoint_android_rvh_set_gfp_zone_flags,
                           sym.gfp_zone_set.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
        if (uVar1 == 0) {
            uVar1 = android_rvh_probe_register
                              (__tracepoint_android_rvh_set_skip_swapcache_flags,
                               sym.set_swap_cache.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
            if (uVar1 == 0) {
                uVar1 = android_rvh_probe_register
                                  (__tracepoint_android_rvh_set_balance_anon_file_reclaim,
                                   sym.balance_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
                if (uVar1 == 0) {
                    uVar1 = tracepoint_probe_register
                                      (__tracepoint_android_vh_madvise_cold_or_pageout,
                                       sym.allow_shared_pages_reclaim.59bcd1d126d26e32cf6abdc830e048cf.cfi_jt,0);
                    uVar2 = uVar1;
                    if (uVar1 == 0) {
                        return 0;
                    }
                    uVar3 = 0x800009e;
                }
                else {
                    uVar2 = uVar1;
                    uVar3 = 0x80001cb;
                }
            }
            else {
                uVar2 = uVar1;
                uVar3 = 0x800006d;
            }
        }
        else {
            uVar2 = uVar1;
            uVar3 = 0x8000107;
        }
    }
    else {
        uVar2 = uVar1;
        uVar3 = 0x800019c;
    }
code_r0x08001580:
    _printk(uVar3);
    return uVar2;
}

