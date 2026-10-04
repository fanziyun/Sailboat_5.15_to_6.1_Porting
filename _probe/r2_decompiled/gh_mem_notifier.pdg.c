// decompiled from gh_mem_notifier by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x08001360

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x80010f8;
        }
        else {
            if (arg1 != 0x453963f2c35d7e82) goto code_r0x08001320;
            uVar2 = 0x8001108;
        }
    }
    else if (arg1 == 0x4c550309df1cf4c1) {
        uVar2 = 0x8001110;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        uVar2 = 0x8001100;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001320;
        uVar2 = 0x80010f0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001320:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001374);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010f0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gh_rm_unregister_notifier(reloc.gh_mem_notifier_call.8e8ea5887e1fa332f92b7d38ec9d08c1.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010f8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gh_rm_register_notifier(reloc.gh_mem_notifier_call.8e8ea5887e1fa332f92b7d38ec9d08c1.cfi_jt);
    if (iVar1 != 0) {
        _printk(0x8000160,"gh_mem_notifier_init",iVar1);
    }
    return iVar1;
}


// ===== sym.gh_mem_notifier_call.8e8ea5887e1fa332f92b7d38ec9d08c1.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.gh_mem_notifier_call.8e8ea5887e1fa332f92b7d38ec9d08c1.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    code *pcVar3;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0xfffffffffffffffc < param_2 - 0x51100014U) {
        iVar1 = 0x10;
        if (param_2 != 0x51100011) {
            iVar1 = 8;
        }
        uVar2 = *(param_3 + iVar1);
        if (*(param_3 + iVar1) < 7) {
            mutex_lock(obj.mem_notifier_entries_lock);
            if ((uVar2 << 4 | 8) < 0x71) {
                pcVar3 = *(obj.mem_notifier_entries_lock + uVar2 * 0x10);
                uVar4 = *(uVar2 * 0x10 + 0x8000068);
                mutex_unlock(obj.mem_notifier_entries_lock);
                if (pcVar3 != NULL) {
                    __cfi_slowpath_diag(0xd7bcaad907874005,pcVar3,0x80000b0);
                    (*pcVar3)(uVar2,param_2,uVar4,param_3);
                }
                return 1;
            }
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x800131c);
            (*pcVar3)();
        }
    }
    return 0;
}


// ===== sym.gh_mem_notifier_register.cfi_jt @ 0x08001108 (size 8) =====

code * sym.gh_mem_notifier_register.cfi_jt(uint32_t param_1,int64_t param_2,ulong param_3)

{
    ulong *in_x18;
    code *pcVar1;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = 0xffffffffffffffea;
    if ((param_1 < 7) && (param_2 != 0)) {
        uVar2 = param_1;
        mutex_lock(obj.mem_notifier_entries_lock);
        pcVar1 = obj.mem_notifier_entries_lock + uVar2 * 0x10;
        if (*pcVar1 == 0) {
            *pcVar1 = param_2;
            if (0x70 < (uVar2 << 4 | 8)) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(1,0x80011cc);
                (*pcVar1)();
            }
            *(uVar2 * 0x10 + 0x8000068) = param_3;
            mutex_unlock(obj.mem_notifier_entries_lock);
        }
        else {
            mutex_unlock(obj.mem_notifier_entries_lock);
            pcVar1 = 0xffffffffffffffef;
        }
    }
    return pcVar1;
}


// ===== sym.gh_mem_notifier_unregister.cfi_jt @ 0x08001110 (size 8) =====

void sym.gh_mem_notifier_unregister.cfi_jt(ulong *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != NULL) {
        *in_x18 = unaff_x30;
        mutex_lock(obj.mem_notifier_entries_lock);
        *param_1 = 0;
        param_1[1] = 0;
        mutex_unlock(obj.mem_notifier_entries_lock);
    }
    return;
}


// ===== sym.gh_mem_notifier_register @ 0x08001118 (size 180) =====

code * sym.gh_mem_notifier_register(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    code *pcVar1;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = 0xffffffffffffffea;
    if ((arg1 < 7) && (arg2 != 0)) {
        uVar2 = arg1;
        mutex_lock(obj.mem_notifier_entries_lock);
        pcVar1 = obj.mem_notifier_entries_lock + uVar2 * 0x10;
        if (*pcVar1 == 0) {
            *pcVar1 = arg2;
            if (0x70 < (uVar2 << 4 | 8)) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(1,0x80011cc);
                (*pcVar1)();
            }
            *(uVar2 * 0x10 + 0x8000068) = arg3;
            mutex_unlock(obj.mem_notifier_entries_lock);
        }
        else {
            mutex_unlock(obj.mem_notifier_entries_lock);
            pcVar1 = 0xffffffffffffffef;
        }
    }
    return pcVar1;
}


// ===== sym.gh_mem_notifier_unregister @ 0x080011cc (size 80) =====

void sym.gh_mem_notifier_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(obj.mem_notifier_entries_lock);
        *arg1 = 0;
        *(arg1 + 8) = 0;
        mutex_unlock(obj.mem_notifier_entries_lock);
    }
    return;
}


// ===== sym.gh_mem_notifier_call @ 0x0800121c (size 256) =====

ulong sym.gh_mem_notifier_call(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    code *pcVar4;
    ulong uVar5;
    ulong unaff_x30;
    
    uVar2 = arg2;
    *in_x18 = unaff_x30;
    if (0xfffffffffffffffc < uVar2 - 0x51100014) {
        iVar1 = 0x10;
        if (uVar2 != 0x51100011) {
            iVar1 = 8;
        }
        uVar3 = *(arg3 + iVar1);
        if (*(arg3 + iVar1) < 7) {
            mutex_lock(obj.mem_notifier_entries_lock);
            if ((uVar3 << 4 | 8) < 0x71) {
                pcVar4 = *(obj.mem_notifier_entries_lock + uVar3 * 0x10);
                uVar5 = *(uVar3 * 0x10 + 0x8000068);
                mutex_unlock(obj.mem_notifier_entries_lock);
                if (pcVar4 != NULL) {
                    __cfi_slowpath_diag(0xd7bcaad907874005,pcVar4,0x80000b0);
                    (*pcVar4)(uVar3,uVar2,uVar5,arg3);
                }
                return 1;
            }
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(1,0x800131c);
            (*pcVar4)();
        }
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x0800131c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001360

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
    //switch table (4 cases) at 0x80000d0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001374);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080013b8 (size 92) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gh_rm_register_notifier(reloc.gh_mem_notifier_call.8e8ea5887e1fa332f92b7d38ec9d08c1.cfi_jt);
    if (iVar1 != 0) {
        _printk(0x8000160,"gh_mem_notifier_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001414 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gh_rm_unregister_notifier(reloc.gh_mem_notifier_call.8e8ea5887e1fa332f92b7d38ec9d08c1.cfi_jt);
    return;
}

