// decompiled from millet_oem_cgroup by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 148) =====

//WARNING: Switch with 1 destination removed at 0x080012c4

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    uVar2 = arg1;
    if (uVar2 == 0x2b3a43e29242445) {
        pcVar3 = sym.init_module.cfi_jt;
    }
    else {
        if (uVar2 != 0xe3a725149a15a82) {
            if ((uVar2 == 0x719af2cb1309317b) && ((pcVar1 + -0x80010b0 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x08001284;
        }
        pcVar3 = sym.__typeid__ZTSFvP14cgroup_tasksetE_global_addr;
    }
    if (pcVar1 == pcVar3) {
        return;
    }
code_r0x08001284:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012d8);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFvP14cgroup_tasksetE_global_addr @ 0x080010a0 (size 8) =====

void sym.__typeid__ZTSFvP14cgroup_tasksetE_global_addr(ulong param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != NULL) {
        if (_segment.ehdr != sym.__typeid__ZTSFvP14cgroup_tasksetE_global_addr) {
            __cfi_slowpath_diag(0xe3a725149a15a82,_segment.ehdr,0x8000070);
        }
        (*pcVar1)(param_1);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010a8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80000be);
    _segment.ehdr = sym.millet_can_attach.cfi_jt;
    _freezer_cgrp_subsys = sym.__typeid__ZTSFiP14cgroup_tasksetE_global_addr;
    *0x8017024 = sym.__typeid__ZTSFvP14cgroup_tasksetE_global_addr;
    return 0;
}


// ===== sym.__typeid__ZTSFiP14cgroup_tasksetE_global_addr @ 0x080010b0 (size 8) =====

ulong sym.__typeid__ZTSFiP14cgroup_tasksetE_global_addr(ulong param_1)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        uVar2 = 0;
    }
    else {
        if (1 < (_segment.ehdr + -0x80010b0 >> 3 | _segment.ehdr << 0x3d)) {
            __cfi_slowpath_diag(0x719af2cb1309317b,_segment.ehdr,obj.oem_cgroup_hook);
        }
        uVar2 = (*pcVar1)(param_1);
    }
    return uVar2;
}


// ===== sym.millet_can_attach.cfi_jt @ 0x080010b8 (size 8) =====

ulong sym.millet_can_attach.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iVar1 = sp_el0;
    iVar6 = *(iVar1 + 0x798);
    uStack_40 = 0;
    iVar3 = cgroup_taskset_first(param_1,&uStack_40);
    do {
        uVar5 = 0;
        if (iVar3 == 0) {
code_r0x08001104:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iStack_38) {
                uVar5 = __stack_chk_fail(uVar5);
                *extraout_x18 = 0x8001184;
                pcVar2 = _segment.ehdr;
                if (_segment.ehdr == NULL) {
                    uVar5 = 0;
                }
                else {
                    if (1 < (_segment.ehdr + -0x80010b0 >> 3 | _segment.ehdr << 0x3d)) {
                        __cfi_slowpath_diag(0x719af2cb1309317b,_segment.ehdr,obj.oem_cgroup_hook);
                    }
                    uVar5 = (*pcVar2)(uVar5);
                }
                return uVar5;
            }
            return uVar5;
        }
        if (((iVar3 != iVar1) && (*(iVar6 + 0x14) != 1000)) && (uVar4 = capable(0x15), (uVar4 & 1) == 0)) {
            _printk(0x8000095);
            uVar5 = 1;
            goto code_r0x08001104;
        }
        iVar3 = cgroup_taskset_next(param_1,&uStack_40);
    } while( true );
}


// ===== sym.millet_can_attach @ 0x080010c0 (size 200) =====

ulong sym.millet_can_attach(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iVar1 = sp_el0;
    iVar6 = *(iVar1 + 0x798);
    uStack_40 = 0;
    iVar3 = cgroup_taskset_first(arg1,&stack0xffffffffffffffc0);
    do {
        uVar5 = 0;
        if (iVar3 == 0) {
code_r0x08001104:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) != iStack_38) {
                uVar5 = __stack_chk_fail(uVar5);
                *extraout_x18 = 0x8001184;
                pcVar2 = _segment.ehdr;
                if (_segment.ehdr == NULL) {
                    uVar5 = 0;
                }
                else {
                    if (1 < (_segment.ehdr + -0x80010b0 >> 3 | _segment.ehdr << 0x3d)) {
                        __cfi_slowpath_diag(0x719af2cb1309317b,_segment.ehdr,obj.oem_cgroup_hook);
                    }
                    uVar5 = (*pcVar2)(uVar5);
                }
                return uVar5;
            }
            return uVar5;
        }
        if (((iVar3 != iVar1) && (*(iVar6 + 0x14) != 1000)) && (uVar4 = capable(0x15), (uVar4 & 1) == 0)) {
            _printk(0x8000095);
            uVar5 = 1;
            goto code_r0x08001104;
        }
        iVar3 = cgroup_taskset_next(arg1,&stack0xffffffffffffffc0);
    } while( true );
}


// ===== sym.freezer_can_attach @ 0x08001188 (size 132) =====

ulong sym.freezer_can_attach(int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        uVar2 = 0;
    }
    else {
        if (1 < (_segment.ehdr + -0x80010b0 >> 3 | _segment.ehdr << 0x3d)) {
            __cfi_slowpath_diag(0x719af2cb1309317b,_segment.ehdr,obj.oem_cgroup_hook);
        }
        uVar2 = (*pcVar1)(arg1);
    }
    return uVar2;
}


// ===== sym.freezer_cancel_attach @ 0x0800120c (size 116) =====

void sym.freezer_cancel_attach(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != NULL) {
        if (_segment.ehdr != sym.__typeid__ZTSFvP14cgroup_tasksetE_global_addr) {
            __cfi_slowpath_diag(0xe3a725149a15a82,_segment.ehdr,0x8000070);
        }
        (*pcVar1)(arg1);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001280 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080012c4

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
    //switch table (4 cases) at 0x8000090
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012d8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080012e4 (size 92) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80000be);
    _segment.ehdr = sym.millet_can_attach.cfi_jt;
    _freezer_cgrp_subsys = sym.__typeid__ZTSFiP14cgroup_tasksetE_global_addr;
    *0x8017024 = sym.__typeid__ZTSFvP14cgroup_tasksetE_global_addr;
    return 0;
}

