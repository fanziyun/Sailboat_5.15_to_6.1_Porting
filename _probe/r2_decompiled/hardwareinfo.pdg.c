// decompiled from hardwareinfo by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x08001264

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x1b6c344e75cfc4ea) {
        if (arg1 == -0xec78b8726b9c1e8) {
            uVar2 = 0x80010e8;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001224;
            uVar2 = 0x80010d8;
        }
    }
    else if (arg1 == 0x1b6c344e75cfc4ea) {
        uVar2 = 0x80010e0;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001224;
        uVar2 = 0x80010d0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001224:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001278);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.attr_hardwareinfo_group);
        kobject_del(_segment.ehdr);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010d8 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    iStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    _segment.ehdr = kmem_cache_alloc_trace(_sprintf,0xdc0,0x1000);
    if (_segment.ehdr == 0) {
        uVar4 = 0xfffffff4;
        uVar3 = 0x8000101;
    }
    else {
        strlcpy(&uStack_58,"HARDW_INFO",0xd);
        uVar4 = ((_segment.ehdr << 8) >> 8) + 0x8000000000;
        iStack_38 = uVar4 + _kmalloc_caches;
        if (uVar4 >> 0x26 != 0) {
            iStack_38 = ((_segment.ehdr << 8) >> 8) - _snprintf;
        }
        iStack_40 = _segment.ehdr;
        uStack_30 = 0x1000;
        uVar2 = msm_minidump_add_region(&uStack_58);
        if (uVar2 < 0) {
            uVar4 = uVar2;
            uVar3 = 0x8000156;
        }
        else {
            _segment.ehdr = kobject_create_and_add("hardware_info_to_dump",_strncpy);
            if (_segment.ehdr == 0) {
                uVar4 = 0xfffffff4;
                uVar3 = 0x80000d0;
            }
            else {
                uVar2 = sysfs_create_group(_segment.ehdr,obj.attr_hardwareinfo_group);
                uVar4 = uVar2;
                if (uVar2 == 0) goto code_r0x080013c0;
                sysfs_remove_group(_segment.ehdr,obj.attr_hardwareinfo_group);
                kobject_del(_segment.ehdr);
                uVar3 = 0x8000128;
            }
        }
    }
    _printk(uVar3);
code_r0x080013c0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cleanup_module;
    uVar4 = 0;
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.attr_hardwareinfo_group);
        uVar4 = kobject_del(_segment.ehdr);
    }
    return uVar4;
}


// ===== sym.write_xiaomi_hardw_info.deff61b695690f4968dcf3985bea6260.cfi_jt @ 0x080010e0 (size 8) =====

ulong sym.write_xiaomi_hardw_info.deff61b695690f4968dcf3985bea6260.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.hwinfo_mutex);
    uVar2 = kmem_cache_alloc_trace(_sprintf,0xdc0,0x100);
    snprintf(uVar2,0x100,0x80000cd,param_3);
    uVar3 = strlen(uVar2);
    iVar1 = _segment.ehdr;
    if (uVar3 == 0) {
        _printk(0x80001d1);
        param_4 = 0xffffffffffffffff;
    }
    else {
        iVar4 = strlen(_segment.ehdr);
        if (uVar3 < 0x1000U - iVar4) {
            strncpy(iVar1 + iVar4,uVar2,uVar3);
        }
        else {
            _printk(0x800019d,uVar2);
            param_4 = 0xffffffffffffffff;
        }
    }
    kfree(uVar2);
    mutex_unlock(obj.hwinfo_mutex);
    return param_4;
}


// ===== sym.read_xiaomi_hardw_info.deff61b695690f4968dcf3985bea6260.cfi_jt @ 0x080010e8 (size 8) =====

int64_t sym.read_xiaomi_hardw_info.deff61b695690f4968dcf3985bea6260.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x8000199,_segment.ehdr);
    return iVar1;
}


// ===== sym.read_xiaomi_hardw_info @ 0x080010f0 (size 60) =====

int64_t sym.read_xiaomi_hardw_info(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,0x8000199,_segment.ehdr);
    return iVar1;
}


// ===== sym.write_xiaomi_hardw_info @ 0x0800112c (size 244) =====

int64_t sym.write_xiaomi_hardw_info(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.hwinfo_mutex);
    uVar2 = kmem_cache_alloc_trace(_sprintf,0xdc0,0x100);
    snprintf(uVar2,0x100,0x80000cd,arg1);
    uVar3 = strlen(uVar2);
    iVar1 = _segment.ehdr;
    if (uVar3 == 0) {
        _printk(0x80001d1);
        arg2 = -1;
    }
    else {
        iVar4 = strlen(_segment.ehdr);
        if (uVar3 < 0x1000U - iVar4) {
            strncpy(iVar1 + iVar4,uVar2,uVar3);
        }
        else {
            _printk(0x800019d,uVar2);
            arg2 = -1;
        }
    }
    kfree(uVar2);
    mutex_unlock(obj.hwinfo_mutex);
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08001220 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001264

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
    //switch table (4 cases) at 0x80000c8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001278);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001284 (size 368) =====

uint64_t sym.init_module(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    iStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    _segment.ehdr = kmem_cache_alloc_trace(_sprintf,0xdc0,0x1000);
    if (_segment.ehdr == 0) {
        uVar4 = 0xfffffff4;
        uVar3 = 0x8000101;
    }
    else {
        strlcpy(&uStack_58,"HARDW_INFO",0xd);
        uVar4 = ((_segment.ehdr << 8) >> 8) + 0x8000000000;
        iStack_38 = uVar4 + _kmalloc_caches;
        if (uVar4 >> 0x26 != 0) {
            iStack_38 = ((_segment.ehdr << 8) >> 8) - _snprintf;
        }
        iStack_40 = _segment.ehdr;
        uStack_30 = 0x1000;
        uVar2 = msm_minidump_add_region(&uStack_58);
        if (uVar2 < 0) {
            uVar4 = uVar2;
            uVar3 = 0x8000156;
        }
        else {
            _segment.ehdr = kobject_create_and_add("hardware_info_to_dump",_strncpy);
            if (_segment.ehdr == 0) {
                uVar4 = 0xfffffff4;
                uVar3 = 0x80000d0;
            }
            else {
                uVar2 = sysfs_create_group(_segment.ehdr,obj.attr_hardwareinfo_group);
                uVar4 = uVar2;
                if (uVar2 == 0) goto code_r0x080013c0;
                sysfs_remove_group(_segment.ehdr,obj.attr_hardwareinfo_group);
                kobject_del(_segment.ehdr);
                uVar3 = 0x8000128;
            }
        }
    }
    _printk(uVar3);
code_r0x080013c0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cleanup_module;
    uVar4 = 0;
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.attr_hardwareinfo_group);
        uVar4 = kobject_del(_segment.ehdr);
    }
    return uVar4;
}


// ===== sym.cleanup_module @ 0x080013f4 (size 72) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.attr_hardwareinfo_group);
        kobject_del(_segment.ehdr);
    }
    return;
}

