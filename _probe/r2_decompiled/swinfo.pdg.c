// decompiled from swinfo by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800c000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x0800c17c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x321969b888d4949e) {
        if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x800c0d8;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x0800c13c;
            uVar2 = 0x800c0e0;
        }
    }
    else if (arg1 == 0x321969b888d4949e) {
        uVar2 = 0x800c0e8;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800c13c;
        uVar2 = 0x800c0d0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x0800c13c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800c190);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800c0d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry("platform_config.gz",_segment.ehdr);
    remove_proc_entry("swinfo",0);
    _segment.ehdr = 0;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x0800c0d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    _segment.ehdr = proc_mkdir("swinfo",0);
    if (_segment.ehdr == 0) {
        _printk(0x800b7f9,"swinfo_init");
    }
    else {
        iVar3 = proc_create("platform_config.gz",0x8124,_segment.ehdr,obj.platform_config_gz_proc_ops);
        if (iVar3 != 0) {
            proc_set_size(iVar3,0xb72a);
            if (obj.build_fingerprint != 0x0) {
                iStack_38 = 0;
                uStack_30 = 0;
                uStack_48 = 0;
                iStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                iVar3 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar3 = 0x30;
                }
                iVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x40);
                if (iVar3 == 0) {
                    _printk(0x800b7a0,"add_data_to_dump_region","FINGERPRINT");
                }
                else {
                    memcpy(iVar3,obj.build_fingerprint,0x40);
                    strlcpy(&uStack_58,"FINGERPRINT",0xd);
                    uStack_30 = 0x40;
                    uVar1 = ((iVar3 << 8) >> 8) + 0x8000000000;
                    iStack_38 = _default_llseek + uVar1;
                    if (uVar1 >> 0x26 != 0) {
                        iStack_38 = ((iVar3 << 8) >> 8) - ___ubsan_handle_cfi_check_fail_abort;
                    }
                    iStack_40 = iVar3;
                    iVar2 = msm_minidump_add_region(&uStack_58);
                    if (iVar2 < 0) {
                        _printk(0x800b81f,"add_data_to_dump_region","FINGERPRINT");
                        kfree(iVar3);
                    }
                }
            }
            uVar4 = 0;
            goto code_r0x0800c2d0;
        }
        _printk(0x800b863,"swinfo_init",0x66);
    }
    uVar4 = 0xfffffff4;
code_r0x0800c2d0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.cleanup_module;
    remove_proc_entry("platform_config.gz",_segment.ehdr);
    remove_proc_entry("swinfo",0);
    _segment.ehdr = 0;
    return;
}


// ===== sym.platform_ikconfig_read.1e06008509142891c9d1df2d99f77c15.cfi_jt @ 0x0800c0e0 (size 8) =====

void sym.platform_ikconfig_read.1e06008509142891c9d1df2d99f77c15.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_read_from_buffer(param_2,param_3,param_4,obj.build_fingerprint,0xb72a);
    return;
}


// ===== sym.default_llseek.cfi_jt @ 0x0800c0e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.default_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.platform_ikconfig_read @ 0x0800c0f0 (size 72) =====

void sym.platform_ikconfig_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_read_from_buffer(arg1,arg2,arg3,obj.build_fingerprint,0xb72a);
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800c138 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800c17c

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
    //switch table (4 cases) at 0x800b77a
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800c190);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800c194 (size 492) =====

void sym.init_module(void)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    _segment.ehdr = proc_mkdir("swinfo",0);
    if (_segment.ehdr == 0) {
        _printk(0x800b7f9,"swinfo_init");
    }
    else {
        iVar3 = proc_create("platform_config.gz",0x8124,_segment.ehdr,obj.platform_config_gz_proc_ops);
        if (iVar3 != 0) {
            proc_set_size(iVar3,0xb72a);
            if (obj.build_fingerprint != 0x0) {
                iStack_38 = 0;
                uStack_30 = 0;
                uStack_48 = 0;
                iStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                iVar3 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar3 = 0x30;
                }
                iVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x40);
                if (iVar3 == 0) {
                    _printk(0x800b7a0,"add_data_to_dump_region","FINGERPRINT");
                }
                else {
                    memcpy(iVar3,obj.build_fingerprint,0x40);
                    strlcpy(&uStack_58,"FINGERPRINT",0xd);
                    uStack_30 = 0x40;
                    uVar1 = ((iVar3 << 8) >> 8) + 0x8000000000;
                    iStack_38 = _default_llseek + uVar1;
                    if (uVar1 >> 0x26 != 0) {
                        iStack_38 = ((iVar3 << 8) >> 8) - ___ubsan_handle_cfi_check_fail_abort;
                    }
                    iStack_40 = iVar3;
                    iVar2 = msm_minidump_add_region(&uStack_58);
                    if (iVar2 < 0) {
                        _printk(0x800b81f,"add_data_to_dump_region","FINGERPRINT");
                        kfree(iVar3);
                    }
                }
            }
            uVar4 = 0;
            goto code_r0x0800c2d0;
        }
        _printk(0x800b863,"swinfo_init",0x66);
    }
    uVar4 = 0xfffffff4;
code_r0x0800c2d0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.cleanup_module;
    remove_proc_entry("platform_config.gz",_segment.ehdr);
    remove_proc_entry("swinfo",0);
    _segment.ehdr = 0;
    return;
}


// ===== sym.cleanup_module @ 0x0800c380 (size 80) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry("platform_config.gz",_segment.ehdr);
    remove_proc_entry("swinfo",0);
    _segment.ehdr = 0;
    return;
}

