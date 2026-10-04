// decompiled from chipreg by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 148) =====

//WARNING: Switch with 1 destination removed at 0x080013f0

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    uVar2 = arg1;
    if (uVar2 == 0xaaa4853eade6f557) {
        if (1 < (pcVar1 + -0x80010a0 >> 3 | pcVar1 << 0x3d)) goto code_r0x080013b0;
    }
    else {
        if (uVar2 == 0xcda853bfdc928661) {
            pcVar3 = sym.__typeid__ZTSFvP8mtd_infoE_global_addr;
        }
        else {
            if (uVar2 != 0x5a2bc8dee6a73c0d) goto code_r0x080013b0;
            pcVar3 = sym.do_map_probe.cfi_jt;
        }
        if (pcVar1 != pcVar3) {
code_r0x080013b0:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8001404);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.register_mtd_chip_driver.cfi_jt @ 0x080010a0 (size 8) =====

void sym.register_mtd_chip_driver.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.chip_drvs_lock);
    iVar2 = _obj.chip_drvs_lock;
    iVar1 = param_1 + 0x20;
    uVar3 = __list_add_valid(iVar1,obj.chip_drvs_lock,_obj.chip_drvs_lock);
    if ((uVar3 & 1) != 0) {
        *(iVar2 + 8) = iVar1;
        *(param_1 + 0x20) = iVar2;
        *(param_1 + 0x28) = obj.chip_drvs_lock;
        _obj.chip_drvs_lock = iVar1;
    }
    _raw_spin_unlock(obj.chip_drvs_lock);
    return;
}


// ===== sym.unregister_mtd_chip_driver.cfi_jt @ 0x080010a8 (size 8) =====

void sym.unregister_mtd_chip_driver.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.chip_drvs_lock);
    uVar3 = __list_del_entry_valid(param_1 + 0x20);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(param_1 + 0x20);
        piVar2 = *(param_1 + 0x28);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(param_1 + 0x20) = 0xdead000000000100;
    *(param_1 + 0x28) = 0xdead000000000122;
    _raw_spin_unlock(obj.chip_drvs_lock);
    return;
}


// ===== sym.do_map_probe.cfi_jt @ 0x080010b0 (size 8) =====

ulong sym.do_map_probe.cfi_jt(ulong param_1,ulong param_2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.chip_drvs_lock);
    for (pcVar5 = _obj.chip_drvs_lock; pcVar5 != obj.chip_drvs_lock; pcVar5 = *pcVar5) {
        iVar1 = strcmp(*(pcVar5 + -8),param_1);
        if (iVar1 == 0) {
            pcVar4 = pcVar5 + -0x20;
            if ((pcVar4 != NULL) && (uVar2 = try_module_get(*(pcVar5 + -0x10)), (uVar2 & 1) != 0))
            goto code_r0x080012ac;
            break;
        }
    }
    _raw_spin_unlock(obj.chip_drvs_lock);
    iVar1 = __request_module(1,0x80000d5,param_1);
    if (iVar1 == 0) {
        _raw_spin_lock(obj.chip_drvs_lock);
        for (pcVar5 = _obj.chip_drvs_lock; pcVar5 != obj.chip_drvs_lock; pcVar5 = *pcVar5) {
            iVar1 = strcmp(*(pcVar5 + -8),param_1);
            if (iVar1 == 0) {
                pcVar4 = pcVar5 + -0x20;
                if ((pcVar4 != NULL) && (uVar2 = try_module_get(*(pcVar5 + -0x10)), (uVar2 & 1) != 0)) {
code_r0x080012ac:
                    _raw_spin_unlock(obj.chip_drvs_lock);
                    pcVar5 = *pcVar4;
                    __cfi_slowpath_diag(0xb9b53a27ed3029a8,pcVar5,0x8000090);
                    uVar3 = (*pcVar5)(param_2);
                    module_put(*(pcVar4 + 0x10));
                    return uVar3;
                }
                break;
            }
        }
        _raw_spin_unlock(obj.chip_drvs_lock);
    }
    return 0;
}


// ===== sym.__typeid__ZTSFvP8mtd_infoE_global_addr @ 0x080010b8 (size 8) =====

void sym.__typeid__ZTSFvP8mtd_infoE_global_addr(int64_t param_1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 400);
    iVar2 = *(iVar3 + 0x68);
    pcVar1 = *(iVar2 + 8);
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFvP8mtd_infoE_global_addr) {
            __cfi_slowpath_diag(0xcda853bfdc928661,pcVar1,0x80000b0);
        }
        (*pcVar1)(param_1);
        iVar2 = *(iVar3 + 0x68);
    }
    module_put(*(iVar2 + 0x10));
    kfree(param_1);
    return;
}


// ===== sym.register_mtd_chip_driver @ 0x080010c0 (size 124) =====

void sym.register_mtd_chip_driver(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.chip_drvs_lock);
    iVar2 = _obj.chip_drvs_lock;
    iVar1 = arg1 + 0x20;
    uVar3 = __list_add_valid(iVar1,obj.chip_drvs_lock,_obj.chip_drvs_lock);
    if ((uVar3 & 1) != 0) {
        *(iVar2 + 8) = iVar1;
        *(arg1 + 0x20) = iVar2;
        *(arg1 + 0x28) = obj.chip_drvs_lock;
        _obj.chip_drvs_lock = iVar1;
    }
    _raw_spin_unlock(obj.chip_drvs_lock);
    return;
}


// ===== sym.unregister_mtd_chip_driver @ 0x0800113c (size 112) =====

void sym.unregister_mtd_chip_driver(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.chip_drvs_lock);
    uVar3 = __list_del_entry_valid(arg1 + 0x20);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(arg1 + 0x20);
        piVar2 = *(arg1 + 0x28);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(arg1 + 0x20) = 0xdead000000000100;
    *(arg1 + 0x28) = 0xdead000000000122;
    _raw_spin_unlock(obj.chip_drvs_lock);
    return;
}


// ===== sym.do_map_probe @ 0x080011ac (size 356) =====

ulong sym.do_map_probe(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.chip_drvs_lock);
    for (pcVar5 = _obj.chip_drvs_lock; pcVar5 != obj.chip_drvs_lock; pcVar5 = *pcVar5) {
        iVar1 = strcmp(*(pcVar5 + -8),arg1);
        if (iVar1 == 0) {
            pcVar4 = pcVar5 + -0x20;
            if ((pcVar4 != NULL) && (uVar2 = try_module_get(*(pcVar5 + -0x10)), (uVar2 & 1) != 0))
            goto code_r0x080012ac;
            break;
        }
    }
    _raw_spin_unlock(obj.chip_drvs_lock);
    iVar1 = __request_module(1,0x80000d5,arg1);
    if (iVar1 == 0) {
        _raw_spin_lock(obj.chip_drvs_lock);
        for (pcVar5 = _obj.chip_drvs_lock; pcVar5 != obj.chip_drvs_lock; pcVar5 = *pcVar5) {
            iVar1 = strcmp(*(pcVar5 + -8),arg1);
            if (iVar1 == 0) {
                pcVar4 = pcVar5 + -0x20;
                if ((pcVar4 != NULL) && (uVar2 = try_module_get(*(pcVar5 + -0x10)), (uVar2 & 1) != 0)) {
code_r0x080012ac:
                    _raw_spin_unlock(obj.chip_drvs_lock);
                    pcVar5 = *pcVar4;
                    __cfi_slowpath_diag(0xb9b53a27ed3029a8,pcVar5,0x8000090);
                    uVar3 = (*pcVar5)(arg2);
                    module_put(*(pcVar4 + 0x10));
                    return uVar3;
                }
                break;
            }
        }
        _raw_spin_unlock(obj.chip_drvs_lock);
    }
    return 0;
}


// ===== sym.map_destroy @ 0x08001310 (size 156) =====

void sym.map_destroy(int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 400);
    iVar2 = *(iVar3 + 0x68);
    pcVar1 = *(iVar2 + 8);
    if (pcVar1 != NULL) {
        if (pcVar1 != sym.__typeid__ZTSFvP8mtd_infoE_global_addr) {
            __cfi_slowpath_diag(0xcda853bfdc928661,pcVar1,0x80000b0);
        }
        (*pcVar1)(arg1);
        iVar2 = *(iVar3 + 0x68);
    }
    module_put(*(iVar2 + 0x10));
    kfree(arg1);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080013ac (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080013f0

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001404);
    (*pcVar1)();
}

