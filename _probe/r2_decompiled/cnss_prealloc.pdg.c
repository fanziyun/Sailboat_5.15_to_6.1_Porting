// decompiled from cnss_prealloc by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x0800147c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x561a39225c617dcf) {
        if (arg1 == -0xef4825473ba2583) {
            pcVar2 = sym.mempool_free_slab.cfi_jt;
        }
        else {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
code_r0x080010d8:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800143c;
            }
            if (arg1 != 0x4103278d02edc7b1) goto code_r0x0800143c;
            pcVar2 = sym.mempool_alloc_slab.cfi_jt;
        }
    }
    else if (arg1 == 0x561a39225c617dcf) {
        pcVar2 = sym.wcnss_prealloc_get.cfi_jt;
    }
    else {
        if (arg1 != 0x641d19c7be126e92) {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800143c;
            pcVar2 = sym.cleanup_module.cfi_jt;
            goto code_r0x080010d8;
        }
        pcVar2 = sym.wcnss_prealloc_put.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800143c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001490);
    (*pcVar1)();
}


// ===== sym.wcnss_prealloc_get.cfi_jt @ 0x08001120 (size 8) =====

int64_t sym.wcnss_prealloc_get.cfi_jt(uint64_t param_1)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puVar1 = iVar3 + 0x10;
    if ((((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) && (*puVar1 == 0)) {
        uVar2 = daif;
        uVar4 = 0xb20;
        if (((uVar2 & 0x80) == 0) && (uVar4 = 0xdc0, *(iVar3 + 0x44c) != 0)) {
            uVar4 = 0xb20;
        }
    }
    else {
        uVar4 = 0xb20;
    }
    if ((param_1 < _segment.ehdr) ||
       ((((((_segment.ehdr < param_1 || (_segment.ehdr == 0)) ||
           (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0)) &&
          (((_segment.ehdr < param_1 || (_segment.ehdr == 0)) ||
           (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0)))) &&
         (((_segment.ehdr < param_1 || (_segment.ehdr == 0)) ||
          (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0)))) &&
        ((((_segment.ehdr < param_1 || (_segment.ehdr == 0)) ||
          (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0)) &&
         (((_segment.ehdr < param_1 || (_segment.ehdr == 0)) ||
          (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0)))))))) {
        iVar3 = 0;
    }
    return iVar3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000275,"cnss-pool-8k");
    mempool_destroy(*0x8000120);
    kmem_cache_destroy(*0x8000128);
    _printk(0x8000275,"cnss-pool-16k");
    mempool_destroy(*0x8000170);
    kmem_cache_destroy(*0x8000178);
    _printk(0x8000275,"cnss-pool-32k");
    mempool_destroy(*0x80001c0);
    kmem_cache_destroy(*0x80001c8);
    _printk(0x8000275,"cnss-pool-64k");
    mempool_destroy(*0x8000210);
    kmem_cache_destroy(*0x8000218);
    _printk(0x8000275,"cnss-pool-128k");
    mempool_destroy(*0x8000260);
    kmem_cache_destroy(*0x8000268);
    return;
}


// ===== sym.wcnss_prealloc_check_memory_leak.cfi_jt @ 0x08001130 (size 8) =====

void sym.wcnss_prealloc_check_memory_leak.cfi_jt(void)

{
    return;
}


// ===== sym.mempool_alloc_slab.cfi_jt @ 0x08001138 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.mempool_alloc_slab.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wcnss_prealloc_put.cfi_jt @ 0x08001140 (size 8) =====

ulong sym.wcnss_prealloc_put.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        return 0;
    }
    if ((param_1 & 0xffffc000000000) == 0xffff8000000000) {
        uVar2 = ((param_1 << 8) >> 8) + 0x8000000000;
        uVar1 = pfn_is_map_memory(_mempool_alloc_slab + uVar2 >> 0xc);
        if (uVar1 == 0) {
            return uVar1;
        }
        uVar2 = uVar2 >> 6 & 0x3ffffffffffffc0;
        uVar4 = *(uVar2 - 0x1fffffff8);
        if ((uVar4 & 1) == 0) {
            iVar3 = uVar2 - 0x200000000;
        }
        else {
            iVar3 = uVar4 - 1;
        }
        if ((iVar3 != 0) && (iVar3 = *(iVar3 + 0x18), iVar3 != 0)) {
            if (_segment.ehdr == iVar3) {
                iVar3 = 0;
            }
            else if (_segment.ehdr == iVar3) {
                iVar3 = 1;
            }
            else if (_segment.ehdr == iVar3) {
                iVar3 = 2;
            }
            else if (_segment.ehdr == iVar3) {
                iVar3 = 3;
            }
            else {
                if (_segment.ehdr != iVar3) {
                    return 0;
                }
                iVar3 = 4;
            }
            if (*(iVar3 * 0x50 + 0x8000120) != 0) {
                mempool_free(param_1);
                return 1;
            }
        }
    }
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08001148 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    char *pcVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_node_with_property(0,"qcom,wlan");
    while( true ) {
        if (iVar2 == 0) {
            return 0xffffffed;
        }
        uVar3 = of_device_is_available(iVar2);
        if ((uVar3 & 1) != 0) break;
        iVar2 = of_find_node_with_property(iVar2,"qcom,wlan");
    }
    iVar2 = 0;
    do {
        pcVar1 = "cnss-pool-8k" + iVar2;
        iVar4 = kmem_cache_create_usercopy
                          (pcVar1,*(obj.cnss_pools + iVar2),0,0x4000000,0,*(obj.cnss_pools + iVar2),0);
        *(iVar2 + 0x8000128) = iVar4;
        if (iVar4 == 0) {
            _printk(0x80002c8,pcVar1);
        }
        else {
            iVar4 = mempool_create(*(iVar2 + 0x80000e8),sym.mempool_alloc_slab.cfi_jt,sym.mempool_free_slab.cfi_jt,
                                   iVar4);
            *(iVar2 + 0x8000120) = iVar4;
            if (iVar4 == 0) {
                _printk(0x800029a,pcVar1);
                kmem_cache_destroy(*(iVar2 + 0x8000128));
                *(iVar2 + 0x8000128) = 0;
            }
            else {
                _printk(0x80002ea,pcVar1,*(iVar2 + 0x80000e8),*(obj.cnss_pools + iVar2));
            }
        }
        iVar2 = iVar2 + 0x50;
    } while (iVar2 != 400);
    return 0;
}


// ===== sym.wcnss_pre_alloc_reset.cfi_jt @ 0x08001150 (size 8) =====

ulong sym.wcnss_pre_alloc_reset.cfi_jt(void)

{
    return 0xffffffa1;
}


// ===== sym.mempool_free_slab.cfi_jt @ 0x08001158 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.mempool_free_slab.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.wcnss_prealloc_get @ 0x08001160 (size 352) =====

int64_t sym.wcnss_prealloc_get(int64_t arg1)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puVar1 = iVar3 + 0x10;
    if ((((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) && (*puVar1 == 0)) {
        uVar2 = daif;
        uVar4 = 0xb20;
        if (((uVar2 & 0x80) == 0) && (uVar4 = 0xdc0, *(iVar3 + 0x44c) != 0)) {
            uVar4 = 0xb20;
        }
    }
    else {
        uVar4 = 0xb20;
    }
    if ((arg1 < _segment.ehdr) ||
       ((((((_segment.ehdr < arg1 || (_segment.ehdr == 0)) || (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0)
           ) && (((_segment.ehdr < arg1 || (_segment.ehdr == 0)) ||
                 (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0)))) &&
         (((_segment.ehdr < arg1 || (_segment.ehdr == 0)) || (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0))
         )) && ((((_segment.ehdr < arg1 || (_segment.ehdr == 0)) ||
                 (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0)) &&
                (((_segment.ehdr < arg1 || (_segment.ehdr == 0)) ||
                 (iVar3 = mempool_alloc(_segment.ehdr,uVar4), iVar3 == 0)))))))) {
        iVar3 = 0;
    }
    return iVar3;
}


// ===== sym.wcnss_prealloc_put @ 0x080012dc (size 316) =====

ulong sym.wcnss_prealloc_put(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0;
    }
    if ((arg1 & 0xffffc000000000U) == 0xffff8000000000) {
        uVar2 = ((arg1 << 8) >> 8) + 0x8000000000;
        uVar1 = pfn_is_map_memory(_mempool_alloc_slab + uVar2 >> 0xc);
        if (uVar1 == 0) {
            return uVar1;
        }
        uVar2 = uVar2 >> 6 & 0x3ffffffffffffc0;
        uVar4 = *(uVar2 - 0x1fffffff8);
        if ((uVar4 & 1) == 0) {
            iVar3 = uVar2 - 0x200000000;
        }
        else {
            iVar3 = uVar4 - 1;
        }
        if ((iVar3 != 0) && (iVar3 = *(iVar3 + 0x18), iVar3 != 0)) {
            if (_segment.ehdr == iVar3) {
                iVar3 = 0;
            }
            else if (_segment.ehdr == iVar3) {
                iVar3 = 1;
            }
            else if (_segment.ehdr == iVar3) {
                iVar3 = 2;
            }
            else if (_segment.ehdr == iVar3) {
                iVar3 = 3;
            }
            else {
                if (_segment.ehdr != iVar3) {
                    return 0;
                }
                iVar3 = 4;
            }
            if (*(iVar3 * 0x50 + 0x8000120) != 0) {
                mempool_free(arg1);
                return 1;
            }
        }
    }
    return 0;
}


// ===== sym.wcnss_prealloc_check_memory_leak @ 0x0800141c (size 12) =====

void sym.wcnss_prealloc_check_memory_leak(void)

{
    return;
}


// ===== sym.wcnss_pre_alloc_reset @ 0x08001428 (size 16) =====

ulong sym.wcnss_pre_alloc_reset(void)

{
    return 0xffffffa1;
}


// ===== sym.__cfi_check_fail @ 0x08001438 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800147c

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
    //switch table (4 cases) at 0x8000270
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001490);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080014f4 (size 352) =====

ulong sym.init_module(void)

{
    char *pcVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_node_with_property(0,"qcom,wlan");
    while( true ) {
        if (iVar2 == 0) {
            return 0xffffffed;
        }
        uVar3 = of_device_is_available(iVar2);
        if ((uVar3 & 1) != 0) break;
        iVar2 = of_find_node_with_property(iVar2,"qcom,wlan");
    }
    iVar2 = 0;
    do {
        pcVar1 = "cnss-pool-8k" + iVar2;
        iVar4 = kmem_cache_create_usercopy
                          (pcVar1,*(obj.cnss_pools + iVar2),0,0x4000000,0,*(obj.cnss_pools + iVar2),0);
        *(iVar2 + 0x8000128) = iVar4;
        if (iVar4 == 0) {
            _printk(0x80002c8,pcVar1);
        }
        else {
            iVar4 = mempool_create(*(iVar2 + 0x80000e8),sym.mempool_alloc_slab.cfi_jt,sym.mempool_free_slab.cfi_jt,
                                   iVar4);
            *(iVar2 + 0x8000120) = iVar4;
            if (iVar4 == 0) {
                _printk(0x800029a,pcVar1);
                kmem_cache_destroy(*(iVar2 + 0x8000128));
                *(iVar2 + 0x8000128) = 0;
            }
            else {
                _printk(0x80002ea,pcVar1,*(iVar2 + 0x80000e8),*(obj.cnss_pools + iVar2));
            }
        }
        iVar2 = iVar2 + 0x50;
    } while (iVar2 != 400);
    return 0;
}


// ===== sym.cleanup_module @ 0x08001654 (size 212) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000275,"cnss-pool-8k");
    mempool_destroy(*0x8000120);
    kmem_cache_destroy(*0x8000128);
    _printk(0x8000275,"cnss-pool-16k");
    mempool_destroy(*0x8000170);
    kmem_cache_destroy(*0x8000178);
    _printk(0x8000275,"cnss-pool-32k");
    mempool_destroy(*0x80001c0);
    kmem_cache_destroy(*0x80001c8);
    _printk(0x8000275,"cnss-pool-64k");
    mempool_destroy(*0x8000210);
    kmem_cache_destroy(*0x8000218);
    _printk(0x8000275,"cnss-pool-128k");
    mempool_destroy(*0x8000260);
    kmem_cache_destroy(*0x8000268);
    return;
}

