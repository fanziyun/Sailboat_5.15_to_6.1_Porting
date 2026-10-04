// decompiled from thermal_minidump by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 136) =====

//WARNING: Switch with 1 destination removed at 0x080012f0

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar2 = arg1;
    if (uVar2 == 0xaa0490ca3529c146) {
        uVar3 = 0x8001098;
    }
    else if (uVar2 == 0x6502b2a0e962d06b) {
        uVar3 = 0x8001090;
    }
    else {
        if (uVar2 != 0x7b7797e0313081c4) goto code_r0x080012b0;
        uVar3 = 0x80010a0;
    }
    if (arg2 == uVar3) {
        return;
    }
code_r0x080012b0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001304);
    (*pcVar1)();
}


// ===== sym.thermal_minidump_unregister.cfi_jt @ 0x08001090 (size 8) =====

void sym.thermal_minidump_unregister.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        msm_minidump_remove_region(param_1 + 0x4b8);
        kfree(param_1);
    }
    return;
}


// ===== sym.thermal_minidump_update_data.cfi_jt @ 0x08001098 (size 8) =====

int sym.thermal_minidump_update_data.cfi_jt(int64_t param_1,ulong param_2,uint *param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_spin_lock_irqsave(param_1 + 0x4ec);
    uVar1 = *(param_1 + 0x4b0);
    uVar5 = uVar1;
    if (uVar1 == 0x32) {
        uVar5 = 0;
        *(param_1 + 0x4b0) = 0;
    }
    else if (0x31 < uVar1) goto code_r0x08001188;
    strscpy(param_1 + uVar5 * 0x14,param_2,0x14);
    if (*(param_1 + 0x4b0) < 0x32) {
        *(param_1 + *(param_1 + 0x4b0) * 4 + 1000) = *param_3;
        *(param_1 + 0x4b0) = *(param_1 + 0x4b0) + 1;
        iVar3 = msm_minidump_update_region(*(param_1 + 0x4e8),param_1 + 0x4b8);
        _raw_spin_unlock_irqrestore(param_1 + 0x4ec,uVar4);
        if (iVar3 < 0) {
            _printk(0x8000097,iVar3);
        }
        return iVar3;
    }
code_r0x08001188:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800118c);
    (*pcVar2)();
}


// ===== sym.thermal_minidump_register.cfi_jt @ 0x080010a0 (size 8) =====

int64_t sym.thermal_minidump_register.cfi_jt(ulong param_1)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = kmem_cache_alloc_trace(__raw_spin_lock_irqsave,0xdc0,0x4f0);
    if (iVar6 != 0) {
        strscpy(iVar6 + 0x4b8,param_1,0xd);
        iVar4 = __printk;
        iVar2 = _msm_minidump_update_region;
        iVar3 = (iVar6 << 8) >> 8;
        uVar1 = iVar3 + 0x8000000000;
        *(iVar6 + 0x4d0) = iVar6;
        iVar2 = iVar2 + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iVar2 = iVar3 - iVar4;
        }
        *(iVar6 + 0x4d8) = iVar2;
        *(iVar6 + 0x4e0) = 0x4f0;
        iVar5 = msm_minidump_add_region(iVar6 + 0x4b8);
        *(iVar6 + 0x4e8) = iVar5;
        if (iVar5 < 0) {
            kfree(iVar6);
            _printk(0x8000075,param_1);
            iVar6 = 0;
        }
        else {
            *(iVar6 + 0x4ec) = 0;
        }
    }
    return iVar6;
}


// ===== sym.thermal_minidump_update_data @ 0x080010a8 (size 228) =====

int sym.thermal_minidump_update_data(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_spin_lock_irqsave(arg1 + 0x4ec);
    uVar1 = *(arg1 + 0x4b0);
    uVar5 = uVar1;
    if (uVar1 == 0x32) {
        uVar5 = 0;
        *(arg1 + 0x4b0) = 0;
    }
    else if (0x31 < uVar1) goto code_r0x08001188;
    strscpy(arg1 + uVar5 * 0x14,arg2,0x14);
    if (*(arg1 + 0x4b0) < 0x32) {
        *(arg1 + *(arg1 + 0x4b0) * 4 + 1000) = *arg3;
        *(arg1 + 0x4b0) = *(arg1 + 0x4b0) + 1;
        iVar3 = msm_minidump_update_region(*(arg1 + 0x4e8),arg1 + 0x4b8);
        _raw_spin_unlock_irqrestore(arg1 + 0x4ec,uVar4);
        if (iVar3 < 0) {
            _printk(0x8000097,iVar3);
        }
        return iVar3;
    }
code_r0x08001188:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800118c);
    (*pcVar2)();
}


// ===== sym.thermal_minidump_register @ 0x0800118c (size 220) =====

int64_t sym.thermal_minidump_register(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = kmem_cache_alloc_trace(__raw_spin_lock_irqsave,0xdc0,0x4f0);
    if (iVar6 != 0) {
        strscpy(iVar6 + 0x4b8,arg1,0xd);
        iVar4 = __printk;
        iVar2 = _msm_minidump_update_region;
        iVar3 = (iVar6 << 8) >> 8;
        uVar1 = iVar3 + 0x8000000000;
        *(iVar6 + 0x4d0) = iVar6;
        iVar2 = iVar2 + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iVar2 = iVar3 - iVar4;
        }
        *(iVar6 + 0x4d8) = iVar2;
        *(iVar6 + 0x4e0) = 0x4f0;
        iVar5 = msm_minidump_add_region(iVar6 + 0x4b8);
        *(iVar6 + 0x4e8) = iVar5;
        if (iVar5 < 0) {
            kfree(iVar6);
            _printk(0x8000075,arg1);
            iVar6 = 0;
        }
        else {
            *(iVar6 + 0x4ec) = 0;
        }
    }
    return iVar6;
}


// ===== sym.thermal_minidump_unregister @ 0x08001268 (size 68) =====

void sym.thermal_minidump_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        msm_minidump_remove_region(arg1 + 0x4b8);
        kfree(arg1);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080012ac (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080012f0

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
    //switch table (4 cases) at 0x8000070
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001304);
    (*pcVar1)();
}

