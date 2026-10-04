// decompiled from gh_dbl by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 508) =====

//WARNING: Switch with 1 destination removed at 0x080022f4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3a47926c6ea265f0) {
            if (arg1 == -0x7ec16acbba8638e8) {
                pcVar2 = sym.gh_dbl_read_and_clean.cfi_jt;
code_r0x080011e0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080022b4;
            }
            if (arg1 != -0x46853567abba910a) goto code_r0x080022b4;
            pcVar2 = sym.gh_dbl_rx_register.cfi_jt;
        }
        else if (arg1 == -0x3a47926c6ea265f0) {
            pcVar2 = sym.gh_dbl_tx_register.cfi_jt;
        }
        else if (arg1 == -0x3987c0e26ee29729) {
            pcVar2 = sym.gh_dbl_rx_callback_thread.8c7eb08389db0363d64de73e8e3f4541.cfi_jt;
        }
        else {
            if (arg1 != -0x2bc70d449749a237) goto code_r0x080022b4;
            pcVar2 = sym.gh_dbl_reset.cfi_jt;
        }
    }
    else if (arg1 < 0x4ce1f20738b6130c) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x1c0290ea52be8311) {
            pcVar2 = sym.gh_dbl_populate_cap_info.cfi_jt;
        }
        else {
            if (arg1 != 0x398cf0d8a107813a) goto code_r0x080022b4;
            pcVar2 = sym.gh_dbl_set_mask.cfi_jt;
        }
    }
    else if (arg1 == 0x4ce1f20738b6130c) {
        pcVar2 = sym.gh_dbl_reset_cap_info.cfi_jt;
    }
    else {
        if (arg1 == 0x641d19c7be126e92) {
            pcVar2 = sym.gh_dbl_tx_unregister.cfi_jt;
            goto code_r0x080011e0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080022b4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080022b4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002308);
    (*pcVar1)();
}


// ===== sym.gh_dbl_tx_register.cfi_jt @ 0x08001208 (size 8) =====

uint32_t * sym.gh_dbl_tx_register.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    uint32_t *puVar5;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (8 < param_1) {
        return 0xffffffffffffffea;
    }
    if (obj.gh_dbl_initialized != 0x1) {
        return 0xfffffffffffffdfb;
    }
    iVar2 = param_1 + param_1 * 2;
    iVar1 = iVar2 * 0x20;
    iVar3 = iVar1 + 0x80000e8;
    _raw_spin_lock(iVar3);
    if (0x360 < (iVar2 * 0x20 | 0x18U)) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(1,0x8001b7c);
        (*pcVar4)();
    }
    piVar6 = iVar1 + 0x80000f8;
    if (*piVar6 == 0) {
        puVar5 = *(obj.gh_dbl_cap_table + param_1 * 0x60);
        if (puVar5 == NULL) {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,4);
            if (puVar5 == NULL) {
                puVar5 = 0xfffffffffffffff4;
                goto code_r0x08001b48;
            }
            *puVar5 = param_1;
            *(obj.gh_dbl_cap_table + param_1 * 0x60) = puVar5;
        }
        *piVar6 = 1;
    }
    else {
        puVar5 = 0xfffffffffffffff0;
    }
code_r0x08001b48:
    _raw_spin_unlock(iVar3);
    return puVar5;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001210 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gh_dbl_cleanup(8);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t arg1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0;
    arg1 = 0;
    do {
        *(iVar2 + 0x80000e8) = 0;
        __init_waitqueue_head(iVar2 + 0x8000128,"&entry->cap_wq",obj.gh_dbl_init.__key);
        *(iVar2 + 0x80000f0) = 0xffffffffffffffff;
        *(iVar2 + 0x8000100) = 0xffffffffffffffff;
        iVar1 = kasprintf(0xcc0,"gh_dbl_rx_%d",arg1);
        *(iVar2 + 0x8000110) = iVar1;
        if (iVar1 == 0) {
            sym.gh_dbl_cleanup(arg1);
            return 0xfffffff4;
        }
        arg1 = arg1 + 1;
        iVar2 = iVar2 + 0x60;
    } while (iVar2 != 0x360);
    obj.gh_dbl_initialized = 0x1;
    return 0;
}


// ===== sym.gh_dbl_reset_cap_info.cfi_jt @ 0x08001220 (size 8) =====

uint sym.gh_dbl_reset_cap_info.cfi_jt(uint32_t param_1,int param_2,int *param_3)

{
    int64_t iVar1;
    int iVar2;
    bool bVar3;
    code *pcVar4;
    int *piVar5;
    ulong *in_x18;
    uint uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.gh_dbl_initialized != 0x1) {
        return 0xfffffff5;
    }
    if (8 < param_1) {
        _printk(0x8000767,"gh_dbl_reset_cap_info");
        return 0xffffffea;
    }
    if (param_3 == NULL) {
        return 0xffffffea;
    }
    uVar7 = param_1;
    iVar1 = param_1 * 0x60 + 0x80000e8;
    _raw_spin_lock(iVar1);
    if (param_2 == 1) {
        piVar5 = uVar7 * 0x60 + 0x8000108;
        iVar2 = *piVar5;
        if (iVar2 != 0) {
            bVar3 = false;
            uVar6 = 0;
            *param_3 = iVar2;
            *piVar5 = 0;
            *(uVar7 * 0x60 + 0x8000100) = 0xffffffffffffffff;
            goto code_r0x080021a0;
        }
        _printk(0x8000719,"gh_dbl_reset_cap_info");
        uVar6 = 0xfffffffa;
    }
    else {
        if (param_2 == 0) {
            *param_3 = 0;
            if (0x360 < (uVar7 * 0x60 | 0x10)) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(1,0x8002240);
                (*pcVar4)();
            }
            bVar3 = false;
            uVar6 = 0;
            *(uVar7 * 0x60 + 0x80000f0) = 0xffffffffffffffff;
            goto code_r0x080021a0;
        }
        _printk(0x8000694,"gh_dbl_reset_cap_info",param_2);
        uVar6 = 0xffffffea;
    }
    bVar3 = true;
code_r0x080021a0:
    _raw_spin_unlock(iVar1);
    if ((!bVar3) && (*param_3 != 0)) {
        free_irq(*param_3,obj.gh_dbl_cap_table + param_1 * 0x60);
    }
    return uVar6;
}


// ===== sym.gh_dbl_populate_cap_info.cfi_jt @ 0x08001228 (size 8) =====

int sym.gh_dbl_populate_cap_info.cfi_jt(uint32_t param_1,ulong param_2,int param_3,int param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.gh_dbl_initialized != 0x1) {
        return -0xb;
    }
    if (param_1 < 9) {
        uVar5 = param_1;
        if (param_3 == 1) {
            if (0 < param_4) {
                *(uVar5 * 0x60 + 0x8000108) = param_4;
                iVar3 = request_threaded_irq
                                  (param_4,0,sym.gh_dbl_rx_callback_thread.8c7eb08389db0363d64de73e8e3f4541.cfi_jt,
                                   0x2001,*(uVar5 * 0x60 + 0x8000110),obj.gh_dbl_cap_table + param_1 * 0x60);
                if (-1 < iVar3) {
                    irq_set_irq_wake(param_4,1);
                    iVar1 = uVar5 * 0x60;
                    _raw_spin_lock(iVar1 + 0x80000e8);
                    *(iVar1 + 0x8000100) = param_2;
                    _raw_spin_unlock(iVar1 + 0x80000e8);
                    __wake_up(iVar1 + 0x8000128,1,1,0);
                    return iVar3;
                }
                _printk(0x8000623,"gh_dbl_populate_cap_info");
                return iVar3;
            }
            uVar4 = 0x80004fe;
        }
        else {
            if (param_3 != 0) {
                _printk(0x8000694,"gh_dbl_populate_cap_info");
                goto code_r0x08002000;
            }
            if (param_4 < 1) {
                iVar1 = uVar5 * 0x60 + 0x80000e8;
                _raw_spin_lock(iVar1);
                if ((uVar5 * 0x60 | 0x10) < 0x361) {
                    *(uVar5 * 0x60 + 0x80000f0) = param_2;
                    _raw_spin_unlock(iVar1);
                    __wake_up(uVar5 * 0x60 + 0x8000128,1,1,0);
                    return 0;
                }
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x800204c);
                (*pcVar2)();
            }
            uVar4 = 0x8000528;
        }
        _printk(uVar4,"gh_dbl_populate_cap_info");
        iVar3 = -6;
    }
    else {
        _printk(0x8000767,"gh_dbl_populate_cap_info");
code_r0x08002000:
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.gh_dbl_rx_callback_thread.8c7eb08389db0363d64de73e8e3f4541.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.gh_dbl_rx_callback_thread.8c7eb08389db0363d64de73e8e3f4541.cfi_jt(uint param_1,int64_t param_2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(param_2 + 0x38);
    if (pcVar1 != NULL) {
        __cfi_slowpath_diag(0x77079828fb981a70,pcVar1,obj.gh_dbl_cap_table);
        (*pcVar1)(param_1,*(param_2 + 0x40));
    }
    return 1;
}


// ===== sym.gh_dbl_rx_register.cfi_jt @ 0x08001238 (size 8) =====

uint32_t * sym.gh_dbl_rx_register.cfi_jt(uint32_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (8 < param_1) {
        return 0xffffffffffffffea;
    }
    if (obj.gh_dbl_initialized != 0x1) {
        return 0xfffffffffffffdfb;
    }
    iVar2 = param_1 * 0x60;
    _raw_spin_lock(iVar2 + 0x80000e8);
    if (*(iVar2 + 0x800010c) == 0) {
        puVar3 = *(obj.gh_dbl_cap_table + iVar2);
        if (puVar3 == NULL) {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,4);
            if (puVar3 == NULL) {
                puVar3 = 0xfffffffffffffff4;
                goto code_r0x08001c60;
            }
            *puVar3 = param_1;
            *(obj.gh_dbl_cap_table + iVar2) = puVar3;
        }
        *(iVar2 + 0x800010c) = 1;
        *(param_1 * 0x60 + 0x8000118) = param_2;
        *(param_1 * 0x60 + 0x8000120) = param_3;
    }
    else {
        puVar3 = 0xfffffffffffffff0;
    }
code_r0x08001c60:
    _raw_spin_unlock(iVar2 + 0x80000e8);
    return puVar3;
}


// ===== sym.gh_dbl_reset.cfi_jt @ 0x08001240 (size 8) =====

int sym.gh_dbl_reset.cfi_jt(uint32_t *param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    iVar4 = sym.gh_dbl_validate_params(param_1,1,param_2);
    if (iVar4 == 0) {
        uVar1 = *param_1;
        if (9 < uVar1) goto code_r0x08001a60;
        if (0x340 < uVar1 * 0x60) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x8001a68);
            (*pcVar3)();
        }
        uVar5 = *(uVar1 * 0x60 + 0x8000100);
        CallHyperVisor(0x6014);
        if (uVar5 < 0x3e) {
code_r0x080019d0:
            switch(*((uVar5 & 0xffffffff) * 4 + 0x80003e8) + 0x80019d0) {
            case 0x80019d0:
                goto code_r0x080019d0;
            case 0x80019e4:
                iVar4 = -0xd;
                break;
            case 0x80019f0:
                iVar4 = -1;
                break;
            case 0x80019fc:
                iVar4 = -0x10;
                break;
            default:
                goto code_r0x08001a08;
            }
        }
        else {
code_r0x08001a08:
            iVar4 = -0x16;
        }
        _printk(0x8000573,"gh_dbl_reset",uVar5,0,0,0,0,0,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar6) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x08001a60:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001a64);
    (*pcVar3)();
}


// ===== sym.gh_dbl_tx_unregister.cfi_jt @ 0x08001248 (size 8) =====

uint sym.gh_dbl_tx_unregister.cfi_jt(uint32_t *param_1)

{
    code *pcVar1;
    ulong *in_x18;
    uint uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((param_1 != NULL) && (param_1 < 0xfffffffffffff001)) {
        uVar3 = *param_1;
        if (*param_1 < 9) {
            uVar4 = uVar3 * 0x60;
            _raw_spin_lock(uVar4 + 0x80000e8);
            if (*(obj.gh_dbl_cap_table + uVar4) == param_1) {
                if (*(uVar3 * 0x60 + 0x800010c) == 0) {
                    *(obj.gh_dbl_cap_table + uVar4) = 0;
                    kfree(param_1);
                }
                if (0x360 < (uVar4 | 0x18)) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(1,0x8001d84);
                    (*pcVar1)();
                }
                uVar2 = 0;
                *(uVar3 * 0x60 + 0x80000f8) = 0;
            }
            else {
                _printk(0x80006be,"gh_dbl_tx_unregister");
                uVar2 = 0xffffffea;
            }
            _raw_spin_unlock(uVar4 + 0x80000e8);
        }
        else {
            uVar2 = 0xffffffea;
        }
    }
    return uVar2;
}


// ===== sym.gh_dbl_rx_unregister.cfi_jt @ 0x08001250 (size 8) =====

uint sym.gh_dbl_rx_unregister.cfi_jt(uint32_t *param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    uint uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = 0xffffffea;
    if ((param_1 != NULL) && (param_1 < 0xfffffffffffff001)) {
        uVar5 = *param_1;
        if (*param_1 < 9) {
            iVar1 = uVar5 * 0x60 + 0x80000e8;
            _raw_spin_lock(iVar1);
            if (*(obj.gh_dbl_cap_table + uVar5 * 0x60) == param_1) {
                if (0x360 < (uVar5 * 0x60 | 0x18)) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x8001e7c);
                    (*pcVar3)();
                }
                if (*(uVar5 * 0x60 + 0x80000f8) == 0) {
                    *(obj.gh_dbl_cap_table + uVar5 * 0x60) = 0;
                    kfree(param_1);
                }
                uVar4 = 0;
                iVar2 = uVar5 * 0x60;
                *(iVar2 + 0x800010c) = 0;
                *(iVar2 + 0x8000118) = 0;
                *(iVar2 + 0x8000120) = 0;
            }
            else {
                _printk(0x80006be,"gh_dbl_rx_unregister");
                uVar4 = 0xffffffea;
            }
            _raw_spin_unlock(iVar1);
        }
        else {
            uVar4 = 0xffffffea;
        }
    }
    return uVar4;
}


// ===== sym.gh_dbl_set_mask.cfi_jt @ 0x08001258 (size 8) =====

//WARNING: Switch with 1 destination removed at 0x08001710

int sym.gh_dbl_set_mask.cfi_jt(uint32_t *param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    iVar4 = sym.gh_dbl_validate_params(param_1,1,param_4);
    if (iVar4 == 0) {
        uVar1 = *param_1;
        if (9 < uVar1) goto code_r0x08001798;
        if (0x340 < uVar1 * 0x60) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x80017a0);
            (*pcVar3)();
        }
        uVar5 = *(uVar1 * 0x60 + 0x8000100);
        CallHyperVisor(0x6015);
        if (uVar5 < 0x3e) {
            do {
    //WARNING: Do nothing block with infinite loop
            } while( true );
        }
        _printk(0x8000573,"gh_dbl_set_mask",uVar5,0,0,0,0,0,0);
        iVar4 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar6) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x08001798:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800179c);
    (*pcVar3)();
}


// ===== sym.gh_dbl_read_and_clean.cfi_jt @ 0x08001260 (size 8) =====

//WARNING: Switch with 1 destination removed at 0x08001340

int sym.gh_dbl_read_and_clean.cfi_jt(uint32_t *param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    if (param_2 == 0) {
        iVar4 = -0x16;
    }
    else {
        iVar4 = sym.gh_dbl_validate_params(param_1,1,param_3);
        if (iVar4 == 0) {
            uVar1 = *param_1;
            if (9 < uVar1) goto code_r0x080013d8;
            if (0x340 < uVar1 * 0x60) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x80013e0);
                (*pcVar3)();
            }
            uVar5 = *(uVar1 * 0x60 + 0x8000100);
            CallHyperVisor(0x6013);
            if (uVar5 < 0x3e) {
                do {
    //WARNING: Do nothing block with infinite loop
                } while( true );
            }
            iVar4 = -0x16;
            _printk(0x8000601,"gh_dbl_read_and_clean",uVar5,0,0,0,0,0,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar6) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x080013d8:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80013dc);
    (*pcVar3)();
}


// ===== sym.gh_dbl_send.cfi_jt @ 0x08001268 (size 8) =====

//WARNING: Switch with 1 destination removed at 0x08001874

int sym.gh_dbl_send.cfi_jt(uint32_t *param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    if (param_2 == 0) {
        iVar4 = -0x16;
    }
    else {
        iVar4 = sym.gh_dbl_validate_params(param_1,0,param_3);
        if (iVar4 == 0) {
            uVar1 = *param_1;
            if (9 < uVar1) goto code_r0x0800190c;
            if (0x360 < (uVar1 * 0x60 | 0x10)) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x8001914);
                (*pcVar3)();
            }
            uVar5 = *(uVar1 * 0x60 + 0x80000f0);
            CallHyperVisor(0x6012);
            if (uVar5 < 0x3e) {
                do {
    //WARNING: Do nothing block with infinite loop
                } while( true );
            }
            iVar4 = -0x16;
            _printk(0x8000573,"gh_dbl_send",uVar5,0,0,0,0,0,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar6) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x0800190c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001910);
    (*pcVar3)();
}


// ===== sym.gh_dbl_read_and_clean @ 0x08001270 (size 368) =====

//WARNING: Switch with 1 destination removed at 0x08001340

int sym.gh_dbl_read_and_clean(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    int64_t in_x2;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    if (arg2 == 0) {
        iVar4 = -0x16;
    }
    else {
        iVar4 = sym.gh_dbl_validate_params(arg1,1,in_x2);
        if (iVar4 == 0) {
            uVar1 = *arg1;
            if (9 < uVar1) goto code_r0x080013d8;
            if (0x340 < uVar1 * 0x60) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x80013e0);
                (*pcVar3)();
            }
            uVar5 = *(uVar1 * 0x60 + 0x8000100);
            CallHyperVisor(0x6013);
            if (uVar5 < 0x3e) {
                do {
    //WARNING: Do nothing block with infinite loop
    //switch table (62 cases) at 0x8000100
                } while( true );
            }
            iVar4 = -0x16;
            _printk(0x8000601,"gh_dbl_read_and_clean",uVar5,0,0,0,0,0,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar6) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x080013d8:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80013dc);
    (*pcVar3)();
}


// ===== sym.gh_dbl_validate_params @ 0x080013e0 (size 604) =====

uint sym.gh_dbl_validate_params(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    uVar5 = 0xffffffea;
    iStack_58 = *(iVar4 + 0x5e0);
    if ((puVar2 != NULL) && (puVar2 < 0xfffffffffffff001)) {
        uVar6 = *puVar2;
        if (*puVar2 < 9) {
            uVar8 = uVar6 * 0x60;
            iVar4 = uVar8 + 0x80000e8;
            _raw_spin_lock(iVar4);
            if (*(obj.gh_dbl_cap_table + uVar8) == puVar2) {
                if (arg2 == 1) {
                    if (*(uVar6 * 0x60 + 0x800010c) == 0) goto code_r0x08001548;
                    piVar7 = uVar6 * 0x60 + 0x8000100;
                    if (((arg3 >> 0x20 & 1) == 0) || (*piVar7 != -1)) {
                        _raw_spin_unlock(iVar4);
                        if (*piVar7 == -1) {
                            uStack_68 = 0;
                            uStack_60 = 0;
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_80 = 0;
                            init_wait_entry(&uStack_80,0);
                            iVar4 = uVar6 * 0x60 + 0x8000128;
                            while( true ) {
                                iVar3 = prepare_to_wait_event(iVar4,&uStack_80,1);
                                if (*piVar7 != -1) break;
                                if (iVar3 != 0) goto code_r0x08001628;
                                schedule();
                            }
code_r0x080015b8:
                            finish_wait(iVar4,&uStack_80);
                        }
code_r0x080015c4:
                        uVar5 = 0;
                        goto code_r0x080015c8;
                    }
code_r0x08001540:
                    uVar5 = 0xfffffff5;
                }
                else {
                    if (0x360 < (uVar8 | 0x18)) goto code_r0x08001638;
                    if (*(uVar6 * 0x60 + 0x80000f8) != 0) {
                        if (0x360 < (uVar8 | 0x10)) goto code_r0x08001638;
                        piVar7 = uVar6 * 0x60 + 0x80000f0;
                        if (((arg3 >> 0x20 & 1) != 0) && (*piVar7 == -1)) goto code_r0x08001540;
                        _raw_spin_unlock(iVar4);
                        if (*piVar7 == -1) {
                            uStack_68 = 0;
                            uStack_60 = 0;
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_80 = 0;
                            init_wait_entry(&uStack_80,0);
                            iVar4 = uVar6 * 0x60 + 0x8000128;
                            while( true ) {
                                iVar3 = prepare_to_wait_event(iVar4,&uStack_80,1);
                                if (*piVar7 != -1) break;
                                if (iVar3 != 0) goto code_r0x08001628;
                                schedule();
                            }
                            goto code_r0x080015b8;
                        }
                        goto code_r0x080015c4;
                    }
code_r0x08001548:
                    uVar5 = 0xffffffea;
                }
                _raw_spin_unlock(iVar4);
            }
            else {
                _raw_spin_unlock(iVar4);
                _printk(0x8000552,"gh_dbl_validate_params");
                uVar5 = 0xffffffea;
            }
        }
        else {
            uVar5 = 0xffffffea;
        }
    }
code_r0x080015c8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    __stack_chk_fail();
code_r0x08001638:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(1,0x800163c);
    (*pcVar1)();
code_r0x08001628:
    if (iVar3 == 0) goto code_r0x080015c4;
    uVar5 = 0xfffffe00;
    goto code_r0x080015c8;
}


// ===== sym.gh_dbl_set_mask @ 0x0800163c (size 356) =====

//WARNING: Switch with 1 destination removed at 0x08001710

int sym.gh_dbl_set_mask(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    iVar4 = sym.gh_dbl_validate_params(arg1,1,arg4);
    if (iVar4 == 0) {
        uVar1 = *arg1;
        if (9 < uVar1) goto code_r0x08001798;
        if (0x340 < uVar1 * 0x60) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x80017a0);
            (*pcVar3)();
        }
        uVar5 = *(uVar1 * 0x60 + 0x8000100);
        CallHyperVisor(0x6015);
        if (uVar5 < 0x3e) {
            do {
    //WARNING: Do nothing block with infinite loop
    //switch table (62 cases) at 0x80001f8
            } while( true );
        }
        _printk(0x8000573,"gh_dbl_set_mask",uVar5,0,0,0,0,0,0);
        iVar4 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar6) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x08001798:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800179c);
    (*pcVar3)();
}


// ===== sym.gh_dbl_send @ 0x080017a0 (size 372) =====

//WARNING: Switch with 1 destination removed at 0x08001874

int sym.gh_dbl_send(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    int64_t in_x2;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    if (arg2 == 0) {
        iVar4 = -0x16;
    }
    else {
        iVar4 = sym.gh_dbl_validate_params(arg1,0,in_x2);
        if (iVar4 == 0) {
            uVar1 = *arg1;
            if (9 < uVar1) goto code_r0x0800190c;
            if (0x360 < (uVar1 * 0x60 | 0x10)) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x8001914);
                (*pcVar3)();
            }
            uVar5 = *(uVar1 * 0x60 + 0x80000f0);
            CallHyperVisor(0x6012);
            if (uVar5 < 0x3e) {
                do {
    //WARNING: Do nothing block with infinite loop
    //switch table (62 cases) at 0x80002f0
                } while( true );
            }
            iVar4 = -0x16;
            _printk(0x8000573,"gh_dbl_send",uVar5,0,0,0,0,0,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar6) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x0800190c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001910);
    (*pcVar3)();
}


// ===== sym.gh_dbl_reset @ 0x08001914 (size 340) =====

int sym.gh_dbl_reset(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    iVar4 = sym.gh_dbl_validate_params(arg1,1,arg2);
    if (iVar4 == 0) {
        uVar1 = *arg1;
        if (9 < uVar1) goto code_r0x08001a60;
        if (0x340 < uVar1 * 0x60) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x8001a68);
            (*pcVar3)();
        }
        uVar5 = *(uVar1 * 0x60 + 0x8000100);
        CallHyperVisor(0x6014);
        if (uVar5 < 0x3e) {
code_r0x080019d0:
    //switch table (62 cases) at 0x80003e8
            switch(*((uVar5 & 0xffffffff) * 4 + 0x80003e8) + 0x80019d0) {
            case 0x80019d0:
                goto code_r0x080019d0;
            case 0x80019e4:
                iVar4 = -0xd;
                break;
            case 0x80019f0:
                iVar4 = -1;
                break;
            case 0x80019fc:
                iVar4 = -0x10;
                break;
            default:
                goto code_r0x08001a08;
            }
        }
        else {
code_r0x08001a08:
            iVar4 = -0x16;
        }
        _printk(0x8000573,"gh_dbl_reset",uVar5,0,0,0,0,0,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar6) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x08001a60:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001a64);
    (*pcVar3)();
}


// ===== sym.gh_dbl_tx_register @ 0x08001a68 (size 276) =====

uint32_t * sym.gh_dbl_tx_register(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    uint32_t *puVar5;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (8 < arg1) {
        return 0xffffffffffffffea;
    }
    if (obj.gh_dbl_initialized != 0x1) {
        return 0xfffffffffffffdfb;
    }
    iVar2 = arg1 + arg1 * 2;
    iVar1 = iVar2 * 0x20;
    iVar3 = iVar1 + 0x80000e8;
    _raw_spin_lock(iVar3);
    if (0x360 < (iVar2 * 0x20 | 0x18U)) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(1,0x8001b7c);
        (*pcVar4)();
    }
    piVar6 = iVar1 + 0x80000f8;
    if (*piVar6 == 0) {
        puVar5 = *(obj.gh_dbl_cap_table + arg1 * 0x60);
        if (puVar5 == NULL) {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,4);
            if (puVar5 == NULL) {
                puVar5 = 0xfffffffffffffff4;
                goto code_r0x08001b48;
            }
            *puVar5 = arg1;
            *(obj.gh_dbl_cap_table + arg1 * 0x60) = puVar5;
        }
        *piVar6 = 1;
    }
    else {
        puVar5 = 0xfffffffffffffff0;
    }
code_r0x08001b48:
    _raw_spin_unlock(iVar3);
    return puVar5;
}


// ===== sym.gh_dbl_rx_register @ 0x08001b7c (size 280) =====

uint32_t * sym.gh_dbl_rx_register(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (8 < arg1) {
        return 0xffffffffffffffea;
    }
    if (obj.gh_dbl_initialized != 0x1) {
        return 0xfffffffffffffdfb;
    }
    iVar2 = arg1 * 0x60;
    _raw_spin_lock(iVar2 + 0x80000e8);
    if (*(iVar2 + 0x800010c) == 0) {
        puVar3 = *(obj.gh_dbl_cap_table + iVar2);
        if (puVar3 == NULL) {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,4);
            if (puVar3 == NULL) {
                puVar3 = 0xfffffffffffffff4;
                goto code_r0x08001c60;
            }
            *puVar3 = arg1;
            *(obj.gh_dbl_cap_table + iVar2) = puVar3;
        }
        *(iVar2 + 0x800010c) = 1;
        *(arg1 * 0x60 + 0x8000118) = arg2;
        *(arg1 * 0x60 + 0x8000120) = arg3;
    }
    else {
        puVar3 = 0xfffffffffffffff0;
    }
code_r0x08001c60:
    _raw_spin_unlock(iVar2 + 0x80000e8);
    return puVar3;
}


// ===== sym.gh_dbl_tx_unregister @ 0x08001c94 (size 240) =====

uint sym.gh_dbl_tx_unregister(uint32_t arg1)

{
    code *pcVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    uint uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    uVar3 = 0xffffffea;
    if ((puVar2 != NULL) && (puVar2 < 0xfffffffffffff001)) {
        uVar4 = *puVar2;
        if (*puVar2 < 9) {
            uVar5 = uVar4 * 0x60;
            _raw_spin_lock(uVar5 + 0x80000e8);
            if (*(obj.gh_dbl_cap_table + uVar5) == puVar2) {
                if (*(uVar4 * 0x60 + 0x800010c) == 0) {
                    *(obj.gh_dbl_cap_table + uVar5) = 0;
                    kfree(puVar2);
                }
                if (0x360 < (uVar5 | 0x18)) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(1,0x8001d84);
                    (*pcVar1)();
                }
                uVar3 = 0;
                *(uVar4 * 0x60 + 0x80000f8) = 0;
            }
            else {
                _printk(0x80006be,"gh_dbl_tx_unregister");
                uVar3 = 0xffffffea;
            }
            _raw_spin_unlock(uVar5 + 0x80000e8);
        }
        else {
            uVar3 = 0xffffffea;
        }
    }
    return uVar3;
}


// ===== sym.gh_dbl_rx_unregister @ 0x08001d84 (size 248) =====

uint sym.gh_dbl_rx_unregister(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    uint uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    puVar4 = arg1;
    *in_x18 = unaff_x30;
    uVar5 = 0xffffffea;
    if ((puVar4 != NULL) && (puVar4 < 0xfffffffffffff001)) {
        uVar6 = *puVar4;
        if (*puVar4 < 9) {
            iVar1 = uVar6 * 0x60 + 0x80000e8;
            _raw_spin_lock(iVar1);
            if (*(obj.gh_dbl_cap_table + uVar6 * 0x60) == puVar4) {
                if (0x360 < (uVar6 * 0x60 | 0x18)) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x8001e7c);
                    (*pcVar3)();
                }
                if (*(uVar6 * 0x60 + 0x80000f8) == 0) {
                    *(obj.gh_dbl_cap_table + uVar6 * 0x60) = 0;
                    kfree(puVar4);
                }
                uVar5 = 0;
                iVar2 = uVar6 * 0x60;
                *(iVar2 + 0x800010c) = 0;
                *(iVar2 + 0x8000118) = 0;
                *(iVar2 + 0x8000120) = 0;
            }
            else {
                _printk(0x80006be,"gh_dbl_rx_unregister");
                uVar5 = 0xffffffea;
            }
            _raw_spin_unlock(iVar1);
        }
        else {
            uVar5 = 0xffffffea;
        }
    }
    return uVar5;
}


// ===== sym.gh_dbl_populate_cap_info @ 0x08001e7c (size 464) =====

int sym.gh_dbl_populate_cap_info(uint32_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.gh_dbl_initialized != 0x1) {
        return -0xb;
    }
    if (arg1 < 9) {
        uVar5 = arg1;
        iVar3 = arg4;
        if (arg3 == 1) {
            if (0 < iVar3) {
                *(uVar5 * 0x60 + 0x8000108) = iVar3;
                iVar3 = request_threaded_irq
                                  (arg4 & 0xffffffffU,0,
                                   sym.gh_dbl_rx_callback_thread.8c7eb08389db0363d64de73e8e3f4541.cfi_jt,0x2001,
                                   *(uVar5 * 0x60 + 0x8000110),obj.gh_dbl_cap_table + arg1 * 0x60);
                if (-1 < iVar3) {
                    irq_set_irq_wake(arg4 & 0xffffffffU,1);
                    iVar1 = uVar5 * 0x60;
                    _raw_spin_lock(iVar1 + 0x80000e8);
                    *(iVar1 + 0x8000100) = arg2;
                    _raw_spin_unlock(iVar1 + 0x80000e8);
                    __wake_up(iVar1 + 0x8000128,1,1,0);
                    return iVar3;
                }
                _printk(0x8000623,"gh_dbl_populate_cap_info");
                return iVar3;
            }
            uVar4 = 0x80004fe;
        }
        else {
            if (arg3 != 0) {
                _printk(0x8000694,"gh_dbl_populate_cap_info");
                goto code_r0x08002000;
            }
            if (iVar3 < 1) {
                iVar1 = uVar5 * 0x60 + 0x80000e8;
                _raw_spin_lock(iVar1);
                if ((uVar5 * 0x60 | 0x10) < 0x361) {
                    *(uVar5 * 0x60 + 0x80000f0) = arg2;
                    _raw_spin_unlock(iVar1);
                    __wake_up(uVar5 * 0x60 + 0x8000128,1,1,0);
                    return 0;
                }
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x800204c);
                (*pcVar2)();
            }
            uVar4 = 0x8000528;
        }
        _printk(uVar4,"gh_dbl_populate_cap_info");
        iVar3 = -6;
    }
    else {
        _printk(0x8000767,"gh_dbl_populate_cap_info");
code_r0x08002000:
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.gh_dbl_rx_callback_thread @ 0x0800204c (size 112) =====

ulong sym.gh_dbl_rx_callback_thread(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg2 + 0x38);
    if (pcVar1 != NULL) {
        __cfi_slowpath_diag(0x77079828fb981a70,pcVar1,obj.gh_dbl_cap_table);
        (*pcVar1)(arg1 & 0xffffffff,*(arg2 + 0x40));
    }
    return 1;
}


// ===== sym.gh_dbl_reset_cap_info @ 0x080020bc (size 388) =====

uint sym.gh_dbl_reset_cap_info(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    bool bVar3;
    code *pcVar4;
    int *piVar5;
    ulong *in_x18;
    uint uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.gh_dbl_initialized != 0x1) {
        return 0xfffffff5;
    }
    if (8 < arg1) {
        _printk(0x8000767,"gh_dbl_reset_cap_info");
        return 0xffffffea;
    }
    if (arg3 == 0) {
        return 0xffffffea;
    }
    uVar7 = arg1;
    iVar1 = arg1 * 0x60 + 0x80000e8;
    _raw_spin_lock(iVar1);
    if (arg2 == 1) {
        piVar5 = uVar7 * 0x60 + 0x8000108;
        iVar2 = *piVar5;
        if (iVar2 != 0) {
            bVar3 = false;
            uVar6 = 0;
            *arg3 = iVar2;
            *piVar5 = 0;
            *(uVar7 * 0x60 + 0x8000100) = 0xffffffffffffffff;
            goto code_r0x080021a0;
        }
        _printk(0x8000719,"gh_dbl_reset_cap_info");
        uVar6 = 0xfffffffa;
    }
    else {
        if (arg2 == 0) {
            *arg3 = 0;
            if (0x360 < (uVar7 * 0x60 | 0x10)) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(1,0x8002240);
                (*pcVar4)();
            }
            bVar3 = false;
            uVar6 = 0;
            *(uVar7 * 0x60 + 0x80000f0) = 0xffffffffffffffff;
            goto code_r0x080021a0;
        }
        _printk(0x8000694,"gh_dbl_reset_cap_info",arg2 & 0xffffffff);
        uVar6 = 0xffffffea;
    }
    bVar3 = true;
code_r0x080021a0:
    _raw_spin_unlock(iVar1);
    if ((!bVar3) && (*arg3 != 0)) {
        free_irq(*arg3,obj.gh_dbl_cap_table + arg1 * 0x60);
    }
    return uVar6;
}


// ===== sym.gh_dbl_cleanup @ 0x08002240 (size 112) =====

void sym.gh_dbl_cleanup(uint32_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (-1 < arg1) {
        if (9 < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x80022b0);
            (*pcVar1)();
        }
        iVar2 = arg1 * 0x60;
        do {
            if (iVar2 - 0x331U < 0xfffffffffffffc9f) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(1,0x80022ac);
                (*pcVar1)();
            }
            kfree(*(iVar2 + 0x8000110));
            iVar2 = iVar2 + -0x60;
        } while (iVar2 != -0x60);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080022b0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080022f4

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
    //switch table (4 cases) at 0x80004e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002308);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080023d4 (size 212) =====

ulong sym.init_module(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t arg1_00;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0;
    arg1_00 = 0;
    do {
        *(iVar2 + 0x80000e8) = 0;
        __init_waitqueue_head(iVar2 + 0x8000128,"&entry->cap_wq",obj.gh_dbl_init.__key);
        *(iVar2 + 0x80000f0) = 0xffffffffffffffff;
        *(iVar2 + 0x8000100) = 0xffffffffffffffff;
        iVar1 = kasprintf(0xcc0,"gh_dbl_rx_%d",arg1_00);
        *(iVar2 + 0x8000110) = iVar1;
        if (iVar1 == 0) {
            sym.gh_dbl_cleanup(arg1_00);
            return 0xfffffff4;
        }
        arg1_00 = arg1_00 + 1;
        iVar2 = iVar2 + 0x60;
    } while (iVar2 != 0x360);
    obj.gh_dbl_initialized = 0x1;
    return 0;
}


// ===== sym.cleanup_module @ 0x080024a8 (size 40) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gh_dbl_cleanup(8);
    return;
}

