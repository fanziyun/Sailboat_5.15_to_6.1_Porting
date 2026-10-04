// decompiled from gh_msgq by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x080022f0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2494c1d7329143e5) {
        if (arg1 < 0x145ddb26c86f3b13) {
            if (arg1 == -0x3987c0e26ee29729) {
                if ((pcVar1 + -0x8001220 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080022b0;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080022b0;
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x145ddb26c86f3b13) {
            pcVar2 = sym.gh_msgq_probe.cfi_jt;
        }
        else if (arg1 == 0x17e9bea5145ff247) {
            pcVar2 = sym.gh_msgq_populate_cap_info.cfi_jt;
        }
        else {
            if (arg1 != 0x1d2e516d94828ddf) goto code_r0x080022b0;
            pcVar2 = sym.gh_msgq_register.cfi_jt;
        }
    }
    else if (arg1 < 0x641d19c7be126e92) {
        if (arg1 == 0x2494c1d7329143e5) {
            pcVar2 = sym.gh_msgq_send.cfi_jt;
        }
        else {
            if (arg1 != 0x4c039b4ec2fea89a) goto code_r0x080022b0;
            pcVar2 = sym.gh_msgq_reset_cap_info.cfi_jt;
        }
    }
    else if (arg1 == 0x641d19c7be126e92) {
        pcVar2 = sym.gh_msgq_unregister.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea24cf931f976bd) goto code_r0x080022b0;
        pcVar2 = sym.gh_msgq_recv.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080022b0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002304);
    (*pcVar1)();
}


// ===== sym.gh_msgq_reset_cap_info.cfi_jt @ 0x080011e0 (size 8) =====

uint sym.gh_msgq_reset_cap_info.cfi_jt(int param_1,int param_2,int *param_3)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 != NULL) {
        _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
        for (pcVar2 = _obj.gh_msgq_alloc_entry.__key; pcVar2 != obj.gh_msgq_alloc_entry.__key; pcVar2 = *pcVar2) {
            if (*(pcVar2 + -8) == param_1) {
                _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
                if (pcVar2 + -0x80 == NULL) {
                    return 0xffffffea;
                }
                if (param_2 == 1) {
                    if (*(pcVar2 + -0x5c) == 0) {
                        uVar1 = 0x800068d;
                        goto code_r0x080020b8;
                    }
                    *param_3 = *(pcVar2 + -0x5c);
                    _raw_spin_lock(pcVar2 + -0x78);
                    *(pcVar2 + -0x5c) = 0;
                    *(pcVar2 + -0x68) = 0xffffffffffffffff;
                }
                else {
                    if (param_2 != 0) {
                        _printk(0x80005eb,"gh_msgq_reset_cap_info");
                        return 0xffffffea;
                    }
                    if (*(pcVar2 + -0x60) == 0) {
                        uVar1 = 0x8000675;
code_r0x080020b8:
                        _printk(uVar1,"gh_msgq_reset_cap_info");
                        return 0xfffffffa;
                    }
                    *param_3 = *(pcVar2 + -0x60);
                    _raw_spin_lock(pcVar2 + -0x78);
                    *(pcVar2 + -0x60) = 0;
                    *(pcVar2 + -0x70) = 0xffffffffffffffff;
                }
                _raw_spin_unlock(pcVar2 + -0x78);
                if (*param_3 != 0) {
                    free_irq(*param_3,pcVar2 + -0x80);
                    return 0;
                }
                return 0;
            }
        }
        _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
    }
    return 0xffffffea;
}


// ===== sym.gh_msgq_send.cfi_jt @ 0x080011e8 (size 8) =====

code * sym.gh_msgq_send.cfi_jt(uint *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
    ulong *puVar1;
    code *pcVar2;
    uint uVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    code *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    code *pcVar12;
    ulong *puVar13;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar12 = 0xffffffea;
    iStack_68 = *(iVar7 + 0x5e0);
    if (((param_1 == NULL) || (param_2 == 0)) || (param_3 == 0)) goto code_r0x0800186c;
    if (0xf0 < param_3) {
        pcVar12 = 0xfffffff9;
        goto code_r0x0800186c;
    }
    puVar13 = *(param_1 + 2);
    if (puVar13 == NULL) goto code_r0x08001840;
    puVar1 = puVar13 + 1;
    _raw_spin_lock(puVar1);
    if (*puVar13 == param_1) {
        if (((param_4 >> 0x20 & 1) == 0) || (puVar13[2] != -1)) {
            _raw_spin_unlock(puVar1);
            if (puVar13[2] == -1) {
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_90 = 0;
                init_wait_entry(&uStack_90,0);
                while( true ) {
                    iVar7 = prepare_to_wait_event(puVar13 + 9,&uStack_90,1);
                    if (puVar13[2] != -1) goto code_r0x08001808;
                    if (iVar7 != 0) break;
                    schedule();
                }
                if (iVar7 == 0) goto code_r0x08001814;
code_r0x080019f4:
                pcVar12 = 0xfffffe00;
                goto code_r0x0800186c;
            }
            goto code_r0x08001814;
        }
        iVar5 = ___ratelimit(obj.gh_msgq_send._rs,"gh_msgq_send");
        if (iVar5 != 0) {
            uVar3 = *param_1;
            uVar8 = 0x8000550;
            goto code_r0x08001a14;
        }
        goto code_r0x08001860;
    }
    _printk(0x8000462,"gh_msgq_send");
    pcVar12 = 0xffffffea;
code_r0x08001864:
    _raw_spin_unlock(puVar1);
code_r0x0800186c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return pcVar12;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18 = sym.gh_msgq_register;
    if (uVar6 < 0) {
        pcVar12 = 0xffffffffffffffea;
    }
    else {
        uVar11 = uVar6;
        _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
        for (pcVar10 = _obj.gh_msgq_alloc_entry.__key; pcVar10 != obj.gh_msgq_alloc_entry.__key; pcVar10 = *pcVar10) {
            if (*(pcVar10 + -8) == uVar6) {
                pcVar10 = pcVar10 + -0x80;
                if (pcVar10 != NULL) goto code_r0x08001b08;
                break;
            }
        }
        pcVar12 = sym.gh_msgq_alloc_entry(uVar11);
        pcVar10 = pcVar12;
        if (pcVar12 < 0xfffffffffffff001) {
code_r0x08001b08:
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
            pcVar2 = pcVar10 + 8;
            _raw_spin_lock(pcVar2);
            if (*pcVar10 == 0) {
                iVar7 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar7 = 0x30;
                }
                pcVar12 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xb20,0x10);
                if (pcVar12 == NULL) {
                    _raw_spin_unlock(pcVar2);
                    pcVar12 = 0xfffffffffffffff4;
                }
                else {
                    *pcVar12 = uVar6;
                    *(pcVar12 + 8) = pcVar10;
                    *pcVar10 = pcVar12;
                    _raw_spin_unlock(pcVar2);
                    _printk(0x8000483,uVar11);
                }
            }
            else {
                _raw_spin_unlock(pcVar2);
                _printk(0x80005c1,"gh_msgq_register",uVar11);
                pcVar12 = 0xfffffffffffffff0;
            }
        }
        else {
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
        }
    }
    return pcVar12;
code_r0x08001808:
    finish_wait(puVar13 + 9,&uStack_90);
code_r0x08001814:
    _raw_spin_lock(puVar1);
    if (*(puVar13 + 4) != 0) {
        _raw_spin_unlock(puVar1);
        bVar4 = *(puVar13 + 8) == '\0';
        if (((param_4 >> 0x20 & 1) == 0) || (*(puVar13 + 8) == '\0')) {
            uVar11 = param_4 & 0xffffffff;
            puVar1 = puVar13 + 7;
            pcVar12 = 0xfffffff5;
            do {
                if (!bVar4) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    while (iVar7 = prepare_to_wait_event(puVar13 + 9,&uStack_90,1), *(puVar13 + 8) != '\0') {
                        if (iVar7 != 0) {
                            if (iVar7 != 0) goto code_r0x080019f4;
                            goto code_r0x08001914;
                        }
                        schedule();
                    }
                    finish_wait(puVar13 + 9,&uStack_90);
                }
code_r0x08001914:
                uVar8 = _raw_spin_lock_irqsave(puVar1);
                uVar9 = puVar13[2];
                CallHyperVisor(0x601b);
                uStack_90 = 0;
                if (uVar9 != 0x3d) {
                    switch(uVar9 & 0xffffffff) {
                    case 0:
                        *(puVar13 + 8) = param_3 == 0;
                        _raw_spin_unlock_irqrestore(puVar1,uVar8,param_2,uVar11,0,0,0,0);
                        pcVar12 = NULL;
                        goto code_r0x0800186c;
                    default:
                        pcVar12 = 0xffffffea;
                        break;
                    case 10:
                        pcVar12 = 0xfffffff4;
                        break;
                    case 0x1e:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                        pcVar12 = 0xfffffff3;
                        break;
                    case 0x1f:
                    case 0x20:
                        pcVar12 = 0xfffffff0;
                        break;
                    case 0x28:
                    case 0x29:
                    case 0x3c:
                        pcVar12 = 0xffffffff;
                    }
                    _raw_spin_unlock_irqrestore(puVar1,uVar8,param_2,uVar11,0,0,0,0);
                    _printk(0x8000626,"__gh_msgq_send",uVar9 & 0xffffffff);
                    break;
                }
                *(puVar13 + 8) = 1;
                _raw_spin_unlock_irqrestore(puVar1,uVar8,param_2,uVar11,0,0,0,0);
                bVar4 = *(puVar13 + 8) == '\0';
            } while (((param_4 >> 0x20 & 1) == 0) || (*(puVar13 + 8) == '\0'));
            goto code_r0x0800186c;
        }
code_r0x08001840:
        pcVar12 = 0xfffffff5;
        goto code_r0x0800186c;
    }
    iVar5 = ___ratelimit(obj.gh_msgq_send._rs.10,"gh_msgq_send");
    if (iVar5 != 0) {
        uVar3 = *param_1;
        uVar8 = 0x8000368;
code_r0x08001a14:
        _printk(uVar8,"gh_msgq_send",uVar3);
    }
code_r0x08001860:
    pcVar12 = 0xfffffff5;
    goto code_r0x08001864;
}


// ===== sym.gh_msgq_register.cfi_jt @ 0x080011f0 (size 8) =====

code * sym.gh_msgq_register.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    int64_t iVar2;
    code *pcVar3;
    code *pcVar4;
    ulong *in_x18;
    uint64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 0) {
        pcVar3 = 0xffffffffffffffea;
    }
    else {
        arg1 = param_1;
        _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
        for (pcVar4 = _obj.gh_msgq_alloc_entry.__key; pcVar4 != obj.gh_msgq_alloc_entry.__key; pcVar4 = *pcVar4) {
            if (*(pcVar4 + -8) == param_1) {
                pcVar4 = pcVar4 + -0x80;
                if (pcVar4 != NULL) goto code_r0x08001b08;
                break;
            }
        }
        pcVar3 = sym.gh_msgq_alloc_entry(arg1);
        pcVar4 = pcVar3;
        if (pcVar3 < 0xfffffffffffff001) {
code_r0x08001b08:
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
            pcVar1 = pcVar4 + 8;
            _raw_spin_lock(pcVar1);
            if (*pcVar4 == 0) {
                iVar2 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar2 = 0x30;
                }
                pcVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xb20,0x10);
                if (pcVar3 == NULL) {
                    _raw_spin_unlock(pcVar1);
                    pcVar3 = 0xfffffffffffffff4;
                }
                else {
                    *pcVar3 = param_1;
                    *(pcVar3 + 8) = pcVar4;
                    *pcVar4 = pcVar3;
                    _raw_spin_unlock(pcVar1);
                    _printk(0x8000483,arg1);
                }
            }
            else {
                _raw_spin_unlock(pcVar1);
                _printk(0x80005c1,"gh_msgq_register",arg1);
                pcVar3 = 0xfffffffffffffff0;
            }
        }
        else {
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
        }
    }
    return pcVar3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    code *pcVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
    pcVar1 = _obj.gh_msgq_alloc_entry.__key;
    while (pcVar1 != obj.gh_msgq_alloc_entry.__key) {
        pcVar2 = *pcVar1;
        kfree(*(pcVar1 + -0x58));
        kfree(*(pcVar1 + -0x50));
        kfree(pcVar1 + -0x80);
        pcVar1 = pcVar2;
    }
    _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    return 0;
}


// ===== sym.gh_msgq_unregister.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.gh_msgq_unregister.cfi_jt(uint *param_1)

{
    ulong *puVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != NULL) {
        puVar2 = *(param_1 + 2);
        puVar1 = puVar2 + 1;
        _raw_spin_lock(puVar1);
        if (*puVar2 == param_1) {
            *puVar2 = 0;
            _raw_spin_unlock(puVar1);
            _printk(0x80003e3,"gh_msgq_unregister",*param_1);
            kfree(param_1);
            return 0;
        }
        _printk(0x8000582,"gh_msgq_unregister");
        _raw_spin_unlock(puVar1);
    }
    return 0xffffffea;
}


// ===== sym.gh_msgq_recv.cfi_jt @ 0x08001210 (size 8) =====

code * sym.gh_msgq_recv.cfi_jt(uint32_t *param_1,int64_t param_2,uint64_t param_3,int64_t *param_4,uint64_t param_5)

{
    ulong *puVar1;
    code *pcVar2;
    uint uVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint *puVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *unaff_x19;
    uint64_t uVar13;
    uint64_t unaff_x20;
    uint64_t unaff_x21;
    int64_t unaff_x22;
    ulong *unaff_x23;
    uint32_t *unaff_x24;
    uint64_t uVar14;
    code *pcVar15;
    code *pcVar16;
    uint64_t unaff_x26;
    ulong *unaff_x27;
    ulong *puVar17;
    ulong *unaff_x28;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uchar *puStack_e0;
    ulong *puStack_d8;
    uint64_t uStack_d0;
    code *pcStack_c8;
    uint32_t *puStack_c0;
    ulong *puStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t *piStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    pcVar15 = 0xffffffea;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar13 = param_3;
    piVar12 = param_4;
    piStack_98 = unaff_x19;
    uStack_a0 = unaff_x20;
    uStack_a8 = unaff_x21;
    iStack_b0 = unaff_x22;
    puStack_e0 = unaff_x28;
    if ((((param_1 != NULL) && (iStack_b0 = param_2, param_2 != 0)) && (uStack_a8 = param_3, param_3 != 0)) &&
       (piStack_98 = param_4, param_4 != NULL)) {
        if (param_3 < 0xf1) {
            unaff_x27 = *(param_1 + 2);
            unaff_x24 = param_1;
            if (unaff_x27 == NULL) goto code_r0x080014b8;
            unaff_x23 = unaff_x27 + 1;
            _raw_spin_lock(unaff_x23);
            uStack_a0 = param_5;
            if (*unaff_x27 != param_1) {
                _printk(0x8000462,"gh_msgq_recv");
                pcVar15 = 0xffffffea;
                goto code_r0x080014dc;
            }
            if (((param_5 >> 0x20 & 1) != 0) && (unaff_x27[3] == -1)) {
                iVar5 = ___ratelimit(obj.gh_msgq_recv._rs,"gh_msgq_recv");
                if (iVar5 != 0) {
                    uVar6 = *param_1;
                    uVar9 = 0x80003b1;
                    goto code_r0x0800168c;
                }
                goto code_r0x080014d8;
            }
            _raw_spin_unlock(unaff_x23);
            if (unaff_x27[3] != -1) goto code_r0x0800148c;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_90 = 0;
            init_wait_entry(&uStack_90,0);
            while( true ) {
                uVar13 = 1;
                iVar8 = prepare_to_wait_event(unaff_x27 + 0xc,&uStack_90);
                if (unaff_x27[3] != -1) goto code_r0x08001480;
                if (iVar8 != 0) break;
                schedule();
            }
            if (iVar8 == 0) goto code_r0x0800148c;
code_r0x0800166c:
            pcVar15 = 0xfffffe00;
            puStack_e0 = unaff_x28;
        }
        else {
            pcVar15 = 0xfffffff9;
        }
    }
code_r0x080014e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return pcVar15;
    }
    auVar18 = __stack_chk_fail();
    iVar11 = auVar18._8_8_;
    puVar7 = auVar18._0_8_;
    *extraout_x18 = sym.gh_msgq_send;
    pcStack_e8 = sym.gh_msgq_send;
    iVar8 = sp_el0;
    pcVar16 = 0xffffffea;
    iStack_f8 = *(iVar8 + 0x5e0);
    puStack_f0 = &stack0xffffffffffffffa0;
    puStack_d8 = unaff_x27;
    uStack_d0 = unaff_x26;
    pcStack_c8 = pcVar15;
    puStack_c0 = unaff_x24;
    puStack_b8 = unaff_x23;
    if (((puVar7 == NULL) || (iVar11 == 0)) || (uVar13 == 0)) goto code_r0x0800186c;
    if (0xf0 < uVar13) {
        pcVar16 = 0xfffffff9;
        goto code_r0x0800186c;
    }
    puVar17 = *(puVar7 + 2);
    if (puVar17 == NULL) {
code_r0x08001840:
        pcVar16 = 0xfffffff5;
    }
    else {
        puVar1 = puVar17 + 1;
        _raw_spin_lock(puVar1);
        if (*puVar17 == puVar7) {
            if (((piVar12 >> 0x20 & 1) == 0) || (puVar17[2] != -1)) {
                _raw_spin_unlock(puVar1);
                if (puVar17[2] == -1) {
                    uStack_108 = 0;
                    uStack_100 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_120 = 0;
                    init_wait_entry(&uStack_120,0);
                    while( true ) {
                        iVar8 = prepare_to_wait_event(puVar17 + 9,&uStack_120,1);
                        if (puVar17[2] != -1) goto code_r0x08001808;
                        if (iVar8 != 0) break;
                        schedule();
                    }
                    if (iVar8 == 0) goto code_r0x08001814;
code_r0x080019f4:
                    pcVar16 = 0xfffffe00;
                    goto code_r0x0800186c;
                }
code_r0x08001814:
                _raw_spin_lock(puVar1);
                if (*(puVar17 + 4) != 0) {
                    _raw_spin_unlock(puVar1);
                    bVar4 = *(puVar17 + 8) == '\0';
                    if (((piVar12 >> 0x20 & 1) == 0) || (*(puVar17 + 8) == '\0')) {
                        uVar14 = piVar12 & 0xffffffff;
                        puVar1 = puVar17 + 7;
                        pcVar16 = 0xfffffff5;
                        do {
                            if (!bVar4) {
                                uStack_108 = 0;
                                uStack_100 = 0;
                                uStack_118 = 0;
                                uStack_110 = 0;
                                uStack_120 = 0;
                                init_wait_entry(&uStack_120,0);
                                while (iVar8 = prepare_to_wait_event(puVar17 + 9,&uStack_120,1),
                                      *(puVar17 + 8) != '\0') {
                                    if (iVar8 != 0) {
                                        if (iVar8 != 0) goto code_r0x080019f4;
                                        goto code_r0x08001914;
                                    }
                                    schedule();
                                }
                                finish_wait(puVar17 + 9,&uStack_120);
                            }
code_r0x08001914:
                            uVar9 = _raw_spin_lock_irqsave(puVar1);
                            uVar10 = puVar17[2];
                            CallHyperVisor(0x601b);
                            uStack_120 = 0;
                            if (uVar10 != 0x3d) {
                                switch(uVar10 & 0xffffffff) {
                                case 0:
                                    *(puVar17 + 8) = uVar13 == 0;
                                    _raw_spin_unlock_irqrestore(puVar1,uVar9,iVar11,uVar14,0,0,0,0);
                                    pcVar16 = NULL;
                                    goto code_r0x0800186c;
                                default:
                                    pcVar16 = 0xffffffea;
                                    break;
                                case 10:
                                    pcVar16 = 0xfffffff4;
                                    break;
                                case 0x1e:
                                case 0x32:
                                case 0x33:
                                case 0x34:
                                case 0x35:
                                case 0x36:
                                    pcVar16 = 0xfffffff3;
                                    break;
                                case 0x1f:
                                case 0x20:
                                    pcVar16 = 0xfffffff0;
                                    break;
                                case 0x28:
                                case 0x29:
                                case 0x3c:
                                    pcVar16 = 0xffffffff;
                                }
                                _raw_spin_unlock_irqrestore(puVar1,uVar9,iVar11,uVar14,0,0,0,0);
                                _printk(0x8000626,"__gh_msgq_send",uVar10 & 0xffffffff);
                                break;
                            }
                            *(puVar17 + 8) = 1;
                            _raw_spin_unlock_irqrestore(puVar1,uVar9,iVar11,uVar14,0,0,0,0);
                            bVar4 = *(puVar17 + 8) == '\0';
                        } while (((piVar12 >> 0x20 & 1) == 0) || (*(puVar17 + 8) == '\0'));
                        goto code_r0x0800186c;
                    }
                    goto code_r0x08001840;
                }
                iVar5 = ___ratelimit(obj.gh_msgq_send._rs.10,"gh_msgq_send");
                if (iVar5 != 0) {
                    uVar3 = *puVar7;
                    uVar9 = 0x8000368;
                    goto code_r0x08001a14;
                }
            }
            else {
                iVar5 = ___ratelimit(obj.gh_msgq_send._rs,"gh_msgq_send");
                if (iVar5 != 0) {
                    uVar3 = *puVar7;
                    uVar9 = 0x8000550;
code_r0x08001a14:
                    _printk(uVar9,"gh_msgq_send",uVar3);
                }
            }
            pcVar16 = 0xfffffff5;
        }
        else {
            _printk(0x8000462,"gh_msgq_send");
            pcVar16 = 0xffffffea;
        }
        _raw_spin_unlock(puVar1);
    }
code_r0x0800186c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_f8) {
        return pcVar16;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.gh_msgq_register;
    if (uVar6 < 0) {
        pcVar15 = 0xffffffffffffffea;
    }
    else {
        uVar13 = uVar6;
        _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
        for (pcVar16 = _obj.gh_msgq_alloc_entry.__key; pcVar16 != obj.gh_msgq_alloc_entry.__key; pcVar16 = *pcVar16) {
            if (*(pcVar16 + -8) == uVar6) {
                pcVar16 = pcVar16 + -0x80;
                if (pcVar16 != NULL) goto code_r0x08001b08;
                break;
            }
        }
        pcVar15 = sym.gh_msgq_alloc_entry(uVar13);
        pcVar16 = pcVar15;
        if (pcVar15 < 0xfffffffffffff001) {
code_r0x08001b08:
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
            pcVar2 = pcVar16 + 8;
            _raw_spin_lock(pcVar2);
            if (*pcVar16 == 0) {
                iVar8 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar8 = 0x30;
                }
                pcVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xb20,0x10);
                if (pcVar15 == NULL) {
                    _raw_spin_unlock(pcVar2);
                    pcVar15 = 0xfffffffffffffff4;
                }
                else {
                    *pcVar15 = uVar6;
                    *(pcVar15 + 8) = pcVar16;
                    *pcVar16 = pcVar15;
                    _raw_spin_unlock(pcVar2);
                    _printk(0x8000483,uVar13);
                }
            }
            else {
                _raw_spin_unlock(pcVar2);
                _printk(0x80005c1,"gh_msgq_register",uVar13);
                pcVar15 = 0xfffffffffffffff0;
            }
        }
        else {
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
        }
    }
    return pcVar15;
code_r0x08001480:
    finish_wait(unaff_x27 + 0xc,&uStack_90);
code_r0x0800148c:
    _raw_spin_lock(unaff_x23);
    if (*(unaff_x27 + 0x24) == 0) {
        iVar5 = ___ratelimit(obj.gh_msgq_recv._rs.7,"gh_msgq_recv");
        if (iVar5 != 0) {
            uVar6 = *param_1;
            uVar9 = 0x8000527;
code_r0x0800168c:
            uVar13 = uVar6;
            _printk(uVar9,"gh_msgq_recv");
        }
code_r0x080014d8:
        pcVar15 = 0xfffffff5;
code_r0x080014dc:
        _raw_spin_unlock(unaff_x23);
    }
    else {
        _raw_spin_unlock(unaff_x23);
        bVar4 = *(unaff_x27 + 0x41) == '\0';
        if (((param_5 >> 0x20 & 1) == 0) || (unaff_x20 = param_5, *(unaff_x27 + 0x41) == '\0')) {
            unaff_x24 = unaff_x27 + 0xc;
            unaff_x23 = unaff_x27 + 0x3c;
            pcVar15 = 0xfffffff5;
            do {
                if (!bVar4) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    while( true ) {
                        uVar13 = 1;
                        iVar8 = prepare_to_wait_event(unaff_x24,&uStack_90);
                        if (*(unaff_x27 + 0x41) == '\0') break;
                        if (iVar8 != 0) {
                            unaff_x28 = &uStack_90;
                            if (iVar8 != 0) goto code_r0x0800166c;
                            goto code_r0x08001588;
                        }
                        schedule();
                    }
                    finish_wait(unaff_x24,&uStack_90);
                }
code_r0x08001588:
                uVar9 = _raw_spin_lock_irqsave(unaff_x23);
                unaff_x26 = unaff_x27[3];
                piVar12 = NULL;
                CallHyperVisor(0x601c);
                uStack_90 = 0;
                if (unaff_x26 != 0x3c) {
                    switch(unaff_x26 & 0xffffffff) {
                    case 0:
                        *param_4 = param_2;
                        *(unaff_x27 + 0x41) = param_3 == 0;
                        uVar13 = param_3;
                        _raw_spin_unlock_irqrestore(unaff_x23,uVar9,param_3,0,0,0,0,0);
                        pcVar15 = NULL;
                        puStack_e0 = &uStack_90;
                        goto code_r0x080014e4;
                    default:
                        pcVar15 = 0xffffffea;
                        break;
                    case 10:
                        pcVar15 = 0xfffffff4;
                        break;
                    case 0x1e:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                        pcVar15 = 0xfffffff3;
                        break;
                    case 0x1f:
                    case 0x20:
                        pcVar15 = 0xfffffff0;
                        break;
                    case 0x28:
                    case 0x29:
                    case 0x3d:
                        pcVar15 = 0xffffffff;
                    }
                    _raw_spin_unlock_irqrestore(unaff_x23,uVar9,param_3,0,0,0,0,0);
                    uVar13 = unaff_x26 & 0xffffffff;
                    _printk(0x800040c,"__gh_msgq_recv");
                    puStack_e0 = &uStack_90;
                    break;
                }
                *(unaff_x27 + 0x41) = 1;
                uVar13 = param_3;
                _raw_spin_unlock_irqrestore(unaff_x23,uVar9,param_3,0,0,0,0,0);
                bVar4 = *(unaff_x27 + 0x41) == '\0';
            } while (((param_5 >> 0x20 & 1) == 0) || (puStack_e0 = &uStack_90, *(unaff_x27 + 0x41) == '\0'));
        }
        else {
code_r0x080014b8:
            pcVar15 = 0xfffffff5;
            uStack_a0 = unaff_x20;
        }
    }
    goto code_r0x080014e4;
code_r0x08001808:
    finish_wait(puVar17 + 9,&uStack_120);
    goto code_r0x08001814;
}


// ===== sym.gh_msgq_populate_cap_info.cfi_jt @ 0x08001218 (size 8) =====

uint64_t sym.gh_msgq_populate_cap_info.cfi_jt(uint32_t param_1,ulong param_2,int param_3,int param_4)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 0) {
        _printk(0x80006fd,"gh_msgq_populate_cap_info");
        return 0xffffffea;
    }
    if (param_4 < 0) {
        _printk(0x8000441,"gh_msgq_populate_cap_info");
        return 0xfffffffa;
    }
    _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
    for (pcVar5 = _obj.gh_msgq_alloc_entry.__key; pcVar5 != obj.gh_msgq_alloc_entry.__key; pcVar5 = *pcVar5) {
        if (*(pcVar5 + -8) == param_1) {
            pcVar5 = pcVar5 + -0x80;
            if (pcVar5 != NULL) goto code_r0x08001d24;
            break;
        }
    }
    pcVar5 = sym.gh_msgq_alloc_entry(param_1);
    if (0xfffffffffffff000 < pcVar5) {
        _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
        return pcVar5 & 0xffffffff;
    }
code_r0x08001d24:
    _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
    if (param_3 == 1) {
        uVar3 = request_threaded_irq
                          (param_4,sym.gh_msgq_rx_isr.ef01b8499dea90cb227ed4c5ff146e1e.cfi_jt,0,0,*(pcVar5 + 0x30),
                           pcVar5);
        if (-1 < uVar3) {
            _raw_spin_lock(pcVar5 + 8);
            *(pcVar5 + 0x18) = param_2;
            *(pcVar5 + 0x24) = param_4;
            _raw_spin_unlock(pcVar5 + 8);
            pcVar5 = pcVar5 + 0x60;
code_r0x08001dc8:
            __wake_up(pcVar5,1,1,0);
            irq_set_irq_wake(param_4,1);
            return 0;
        }
    }
    else {
        if (param_3 != 0) {
            _printk(0x80005eb,"gh_msgq_populate_cap_info");
            uVar6 = 0xffffffea;
            goto code_r0x08001df0;
        }
        uVar3 = request_threaded_irq
                          (param_4,sym.gh_msgq_tx_isr.ef01b8499dea90cb227ed4c5ff146e1e.cfi_jt,0,0,*(pcVar5 + 0x28),
                           pcVar5);
        if (-1 < uVar3) {
            _raw_spin_lock(pcVar5 + 8);
            *(pcVar5 + 0x10) = param_2;
            *(pcVar5 + 0x20) = param_4;
            _raw_spin_unlock(pcVar5 + 8);
            pcVar5 = pcVar5 + 0x48;
            goto code_r0x08001dc8;
        }
    }
    uVar6 = uVar3;
code_r0x08001df0:
    _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
    uVar4 = __list_del_entry_valid(pcVar5 + 0x80);
    if ((uVar4 & 1) != 0) {
        iVar1 = *(pcVar5 + 0x80);
        piVar2 = *(pcVar5 + 0x88);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(pcVar5 + 0x80) = 0xdead000000000100;
    *(pcVar5 + 0x88) = 0xdead000000000122;
    _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
    kfree(*(pcVar5 + 0x28));
    kfree(*(pcVar5 + 0x30));
    kfree(pcVar5);
    return uVar6;
}


// ===== sym.gh_msgq_rx_isr.ef01b8499dea90cb227ed4c5ff146e1e.cfi_jt @ 0x08001220 (size 8) =====

ulong sym.gh_msgq_rx_isr.ef01b8499dea90cb227ed4c5ff146e1e.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(param_2 + 0x3c);
    *(param_2 + 0x41) = 0;
    _raw_spin_unlock(param_2 + 0x3c);
    __wake_up(param_2 + 0x60,1,1,0);
    return 1;
}


// ===== sym.gh_msgq_tx_isr.ef01b8499dea90cb227ed4c5ff146e1e.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.gh_msgq_tx_isr.ef01b8499dea90cb227ed4c5ff146e1e.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(param_2 + 0x38);
    *(param_2 + 0x40) = 0;
    _raw_spin_unlock(param_2 + 0x38);
    __wake_up(param_2 + 0x48,1,1,0);
    return 1;
}


// ===== sym.gh_msgq_probe.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.gh_msgq_probe.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong uVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(param_1 + 0x300);
    iVar1 = of_find_property(uVar3,"qcom,is-full-duplex",0);
    if (iVar1 == 0) {
        iVar1 = of_find_property(uVar3,"qcom,is-sender",0);
        if (iVar1 == 0) {
            uVar4 = 0;
        }
        else {
            uVar2 = sym.gh_msgq_probe_direction(param_1,param_2,0,0);
            if (uVar2 != 0) {
                return uVar2;
            }
            uVar4 = 1;
        }
        iVar1 = of_find_property(uVar3,"qcom,is-receiver",0);
        if (iVar1 == 0) {
            return 0;
        }
    }
    else {
        uVar3 = sym.gh_msgq_probe_direction(param_1,param_2,0,0);
        if (uVar3 != 0) {
            return uVar3;
        }
        uVar4 = 1;
    }
    uVar3 = sym.gh_msgq_probe_direction(param_1,param_2,1,uVar4);
    if (uVar3 == 0) {
        return 0;
    }
    return uVar3;
}


// ===== sym.gh_msgq_alloc_entry @ 0x08001238 (size 300) =====

int64_t sym.gh_msgq_alloc_entry(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_kmalloc_caches,0xb20,0x90);
    if (iVar1 != 0) {
        *(iVar1 + 0x18) = 0xffffffffffffffff;
        *(iVar1 + 0x10) = 0xffffffffffffffff;
        *(iVar1 + 0x40) = 0x100;
        *(iVar1 + 0x78) = arg1;
        __init_waitqueue_head(iVar1 + 0x48,"&cap_table_entry->tx_wq",obj.gh_msgq_alloc_entry.__key);
        __init_waitqueue_head(iVar1 + 0x60,"&cap_table_entry->rx_wq",obj.gh_msgq_alloc_entry.__key);
        *(iVar1 + 0x38) = 0;
        *(iVar1 + 8) = 0;
        iVar2 = kasprintf(0xa20,"gh_msgq_tx_%d",arg1 & 0xffffffff);
        *(iVar1 + 0x28) = iVar2;
        uVar5 = 0;
        if (iVar2 != 0) {
            iVar3 = kasprintf(0xa20,"gh_msgq_rx_%d",arg1 & 0xffffffff);
            *(iVar1 + 0x30) = iVar3;
            iVar2 = _obj.gh_msgq_alloc_entry.__key;
            if (iVar3 != 0) {
                iVar3 = iVar1 + 0x80;
                uVar4 = __list_add_valid(iVar3,obj.gh_msgq_alloc_entry.__key,_obj.gh_msgq_alloc_entry.__key);
                if ((uVar4 & 1) == 0) {
                    return iVar1;
                }
                *(iVar2 + 8) = iVar3;
                *(iVar1 + 0x80) = iVar2;
                *(iVar1 + 0x88) = obj.gh_msgq_alloc_entry.__key;
                _obj.gh_msgq_alloc_entry.__key = iVar3;
                return iVar1;
            }
            uVar5 = *(iVar1 + 0x28);
        }
        kfree(uVar5);
        kfree(*(iVar1 + 0x30));
        kfree(iVar1);
    }
    return -0xc;
}


// ===== sym.gh_msgq_recv @ 0x08001364 (size 912) =====

code * sym.gh_msgq_recv(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    code *pcVar2;
    uint uVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint *puVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t in_x4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t uVar13;
    int64_t unaff_x21;
    int64_t unaff_x22;
    int64_t *unaff_x23;
    int64_t *unaff_x24;
    uint64_t uVar14;
    code *pcVar15;
    code *pcVar16;
    uint64_t unaff_x26;
    int64_t *unaff_x27;
    ulong *puVar17;
    uchar *unaff_x28;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uchar *puStack_e0;
    int64_t *piStack_d8;
    uint64_t uStack_d0;
    code *pcStack_c8;
    int64_t *piStack_c0;
    int64_t *piStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    pcVar15 = 0xffffffea;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar13 = arg3;
    uVar12 = arg4;
    iStack_98 = unaff_x19;
    iStack_a8 = unaff_x21;
    iStack_b0 = unaff_x22;
    puStack_e0 = unaff_x28;
    if ((((arg1 != 0) && (iStack_b0 = arg2, arg2 != 0)) && (iStack_a8 = arg3, arg3 != 0)) &&
       (iStack_98 = arg4, arg4 != 0)) {
        if (arg3 < 0xf1) {
            unaff_x27 = *(arg1 + 8);
            unaff_x24 = arg1;
            if (unaff_x27 == NULL) goto code_r0x080014b8;
            unaff_x23 = unaff_x27 + 1;
            _raw_spin_lock(unaff_x23);
            if (*unaff_x27 != arg1) {
                _printk(0x8000462,"gh_msgq_recv");
                pcVar15 = 0xffffffea;
                goto code_r0x080014dc;
            }
            if (((in_x4 >> 0x20 & 1) != 0) && (unaff_x27[3] == -1)) {
                iVar5 = ___ratelimit(obj.gh_msgq_recv._rs,"gh_msgq_recv");
                if (iVar5 != 0) {
                    uVar6 = *arg1;
                    uVar9 = 0x80003b1;
                    goto code_r0x0800168c;
                }
                goto code_r0x080014d8;
            }
            _raw_spin_unlock(unaff_x23);
            if (unaff_x27[3] != -1) goto code_r0x0800148c;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_90 = 0;
            init_wait_entry(&stack0xffffffffffffff70,0);
            while( true ) {
                uVar13 = 1;
                iVar8 = prepare_to_wait_event(unaff_x27 + 0xc,&stack0xffffffffffffff70);
                if (unaff_x27[3] != -1) goto code_r0x08001480;
                if (iVar8 != 0) break;
                schedule();
            }
            if (iVar8 == 0) goto code_r0x0800148c;
code_r0x0800166c:
            pcVar15 = 0xfffffe00;
            puStack_e0 = unaff_x28;
        }
        else {
            pcVar15 = 0xfffffff9;
        }
    }
code_r0x080014e4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return pcVar15;
    }
    auVar18 = __stack_chk_fail();
    iVar11 = auVar18._8_8_;
    puVar7 = auVar18._0_8_;
    *extraout_x18 = sym.gh_msgq_send;
    pcStack_e8 = sym.gh_msgq_send;
    iVar8 = sp_el0;
    pcVar16 = 0xffffffea;
    iStack_f8 = *(iVar8 + 0x5e0);
    puStack_f0 = &stack0xffffffffffffffa0;
    piStack_d8 = unaff_x27;
    uStack_d0 = unaff_x26;
    pcStack_c8 = pcVar15;
    piStack_c0 = unaff_x24;
    piStack_b8 = unaff_x23;
    if (((puVar7 == NULL) || (iVar11 == 0)) || (uVar13 == 0)) goto code_r0x0800186c;
    if (0xf0 < uVar13) {
        pcVar16 = 0xfffffff9;
        goto code_r0x0800186c;
    }
    puVar17 = *(puVar7 + 2);
    if (puVar17 == NULL) {
code_r0x08001840:
        pcVar16 = 0xfffffff5;
    }
    else {
        puVar1 = puVar17 + 1;
        _raw_spin_lock(puVar1);
        if (*puVar17 == puVar7) {
            if (((uVar12 >> 0x20 & 1) == 0) || (puVar17[2] != -1)) {
                _raw_spin_unlock(puVar1);
                if (puVar17[2] == -1) {
                    uStack_108 = 0;
                    uStack_100 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_120 = 0;
                    init_wait_entry(&stack0xfffffffffffffee0,0);
                    while( true ) {
                        iVar8 = prepare_to_wait_event(puVar17 + 9,&stack0xfffffffffffffee0,1);
                        if (puVar17[2] != -1) goto code_r0x08001808;
                        if (iVar8 != 0) break;
                        schedule();
                    }
                    if (iVar8 == 0) goto code_r0x08001814;
code_r0x080019f4:
                    pcVar16 = 0xfffffe00;
                    goto code_r0x0800186c;
                }
code_r0x08001814:
                _raw_spin_lock(puVar1);
                if (*(puVar17 + 4) != 0) {
                    _raw_spin_unlock(puVar1);
                    bVar4 = *(puVar17 + 8) == '\0';
                    if (((uVar12 >> 0x20 & 1) == 0) || (*(puVar17 + 8) == '\0')) {
                        uVar14 = uVar12 & 0xffffffff;
                        puVar1 = puVar17 + 7;
                        pcVar16 = 0xfffffff5;
                        do {
                            if (!bVar4) {
                                uStack_108 = 0;
                                uStack_100 = 0;
                                uStack_118 = 0;
                                uStack_110 = 0;
                                uStack_120 = 0;
                                init_wait_entry(&stack0xfffffffffffffee0,0);
                                while (iVar8 = prepare_to_wait_event(puVar17 + 9,&stack0xfffffffffffffee0,1),
                                      *(puVar17 + 8) != '\0') {
                                    if (iVar8 != 0) {
                                        if (iVar8 != 0) goto code_r0x080019f4;
                                        goto code_r0x08001914;
                                    }
                                    schedule();
                                }
                                finish_wait(puVar17 + 9,&stack0xfffffffffffffee0);
                            }
code_r0x08001914:
                            uVar9 = _raw_spin_lock_irqsave(puVar1);
                            uVar10 = puVar17[2];
                            CallHyperVisor(0x601b);
                            uStack_120 = 0;
                            if (uVar10 != 0x3d) {
                                switch(uVar10 & 0xffffffff) {
                                case 0:
                                    *(puVar17 + 8) = uVar13 == 0;
                                    _raw_spin_unlock_irqrestore(puVar1,uVar9,iVar11,uVar14,0,0,0,0);
                                    pcVar16 = NULL;
                                    goto code_r0x0800186c;
                                default:
                                    pcVar16 = 0xffffffea;
                                    break;
                                case 10:
                                    pcVar16 = 0xfffffff4;
                                    break;
                                case 0x1e:
                                case 0x32:
                                case 0x33:
                                case 0x34:
                                case 0x35:
                                case 0x36:
                                    pcVar16 = 0xfffffff3;
                                    break;
                                case 0x1f:
                                case 0x20:
                                    pcVar16 = 0xfffffff0;
                                    break;
                                case 0x28:
                                case 0x29:
                                case 0x3c:
                                    pcVar16 = 0xffffffff;
                                }
                                _raw_spin_unlock_irqrestore(puVar1,uVar9,iVar11,uVar14,0,0,0,0);
                                _printk(0x8000626,"__gh_msgq_send",uVar10 & 0xffffffff);
                                break;
                            }
                            *(puVar17 + 8) = 1;
                            _raw_spin_unlock_irqrestore(puVar1,uVar9,iVar11,uVar14,0,0,0,0);
                            bVar4 = *(puVar17 + 8) == '\0';
                        } while (((uVar12 >> 0x20 & 1) == 0) || (*(puVar17 + 8) == '\0'));
                        goto code_r0x0800186c;
                    }
                    goto code_r0x08001840;
                }
                iVar5 = ___ratelimit(obj.gh_msgq_send._rs.10,"gh_msgq_send");
                if (iVar5 != 0) {
                    uVar3 = *puVar7;
                    uVar9 = 0x8000368;
                    goto code_r0x08001a14;
                }
            }
            else {
                iVar5 = ___ratelimit(obj.gh_msgq_send._rs,"gh_msgq_send");
                if (iVar5 != 0) {
                    uVar3 = *puVar7;
                    uVar9 = 0x8000550;
code_r0x08001a14:
                    _printk(uVar9,"gh_msgq_send",uVar3);
                }
            }
            pcVar16 = 0xfffffff5;
        }
        else {
            _printk(0x8000462,"gh_msgq_send");
            pcVar16 = 0xffffffea;
        }
        _raw_spin_unlock(puVar1);
    }
code_r0x0800186c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_f8) {
        return pcVar16;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.gh_msgq_register;
    if (uVar6 < 0) {
        pcVar15 = 0xffffffffffffffea;
    }
    else {
        uVar13 = uVar6;
        _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
        for (pcVar16 = _obj.gh_msgq_alloc_entry.__key; pcVar16 != obj.gh_msgq_alloc_entry.__key; pcVar16 = *pcVar16) {
            if (*(pcVar16 + -8) == uVar6) {
                pcVar16 = pcVar16 + -0x80;
                if (pcVar16 != NULL) goto code_r0x08001b08;
                break;
            }
        }
        pcVar15 = sym.gh_msgq_alloc_entry(uVar13);
        pcVar16 = pcVar15;
        if (pcVar15 < 0xfffffffffffff001) {
code_r0x08001b08:
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
            pcVar2 = pcVar16 + 8;
            _raw_spin_lock(pcVar2);
            if (*pcVar16 == 0) {
                iVar8 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar8 = 0x30;
                }
                pcVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xb20,0x10);
                if (pcVar15 == NULL) {
                    _raw_spin_unlock(pcVar2);
                    pcVar15 = 0xfffffffffffffff4;
                }
                else {
                    *pcVar15 = uVar6;
                    *(pcVar15 + 8) = pcVar16;
                    *pcVar16 = pcVar15;
                    _raw_spin_unlock(pcVar2);
                    _printk(0x8000483,uVar13);
                }
            }
            else {
                _raw_spin_unlock(pcVar2);
                _printk(0x80005c1,"gh_msgq_register",uVar13);
                pcVar15 = 0xfffffffffffffff0;
            }
        }
        else {
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
        }
    }
    return pcVar15;
code_r0x08001480:
    finish_wait(unaff_x27 + 0xc,&stack0xffffffffffffff70);
code_r0x0800148c:
    _raw_spin_lock(unaff_x23);
    if (*(unaff_x27 + 0x24) == 0) {
        iVar5 = ___ratelimit(obj.gh_msgq_recv._rs.7,"gh_msgq_recv");
        if (iVar5 != 0) {
            uVar6 = *arg1;
            uVar9 = 0x8000527;
code_r0x0800168c:
            uVar13 = uVar6;
            _printk(uVar9,"gh_msgq_recv");
        }
code_r0x080014d8:
        pcVar15 = 0xfffffff5;
code_r0x080014dc:
        _raw_spin_unlock(unaff_x23);
    }
    else {
        _raw_spin_unlock(unaff_x23);
        bVar4 = *(unaff_x27 + 0x41) == '\0';
        if (((in_x4 >> 0x20 & 1) == 0) || (*(unaff_x27 + 0x41) == '\0')) {
            unaff_x24 = unaff_x27 + 0xc;
            unaff_x23 = unaff_x27 + 0x3c;
            pcVar15 = 0xfffffff5;
            do {
                if (!bVar4) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&stack0xffffffffffffff70,0);
                    while( true ) {
                        uVar13 = 1;
                        iVar8 = prepare_to_wait_event(unaff_x24,&stack0xffffffffffffff70);
                        if (*(unaff_x27 + 0x41) == '\0') break;
                        if (iVar8 != 0) {
                            unaff_x28 = &stack0xffffffffffffff70;
                            if (iVar8 != 0) goto code_r0x0800166c;
                            goto code_r0x08001588;
                        }
                        schedule();
                    }
                    finish_wait(unaff_x24,&stack0xffffffffffffff70);
                }
code_r0x08001588:
                uVar9 = _raw_spin_lock_irqsave(unaff_x23);
                unaff_x26 = unaff_x27[3];
                uVar12 = 0;
                CallHyperVisor(0x601c);
                uStack_90 = 0;
                if (unaff_x26 != 0x3c) {
                    if (unaff_x26 < 0x3e) {
    //switch table (61 cases) at 0x8000160
                        switch(*((unaff_x26 & 0xffffffff) * 4 + 0x8000160) + 0x8001614) {
                        case 0x8001628:
                            *arg4 = arg2;
                            *(unaff_x27 + 0x41) = arg3 == 0;
                            uVar13 = arg3;
                            _raw_spin_unlock_irqrestore(unaff_x23,uVar9,arg3,0,0,0,0,0);
                            pcVar15 = NULL;
                            puStack_e0 = &stack0xffffffffffffff70;
                            goto code_r0x080014e4;
                        case 0x8001678:
                            pcVar15 = 0xfffffff3;
                            break;
                        case 0x80016a0:
                            pcVar15 = 0xffffffff;
                            break;
                        case 0x80016ac:
                            pcVar15 = 0xfffffff0;
                            break;
                        case 0x80016b8:
                            pcVar15 = 0xfffffff4;
                            break;
                        case 0x80016c4:
                            goto code_r0x080016c4;
                        }
                    }
                    else {
code_r0x080016c4:
                        pcVar15 = 0xffffffea;
                    }
                    _raw_spin_unlock_irqrestore(unaff_x23,uVar9,arg3,0,0,0,0,0);
                    uVar13 = unaff_x26 & 0xffffffff;
                    _printk(0x800040c,"__gh_msgq_recv");
                    puStack_e0 = &stack0xffffffffffffff70;
                    break;
                }
                *(unaff_x27 + 0x41) = 1;
                uVar13 = arg3;
                _raw_spin_unlock_irqrestore(unaff_x23,uVar9,arg3,0,0,0,0,0);
                bVar4 = *(unaff_x27 + 0x41) == '\0';
            } while (((in_x4 >> 0x20 & 1) == 0) || (puStack_e0 = &stack0xffffffffffffff70, *(unaff_x27 + 0x41) == '\0')
                    );
        }
        else {
code_r0x080014b8:
            pcVar15 = 0xfffffff5;
        }
    }
    goto code_r0x080014e4;
code_r0x08001808:
    finish_wait(puVar17 + 9,&stack0xfffffffffffffee0);
    goto code_r0x08001814;
}


// ===== sym.gh_msgq_send @ 0x080016f4 (size 904) =====

code * sym.gh_msgq_send(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    code *pcVar2;
    uint uVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    code *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    code *pcVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar12 = 0xffffffea;
    iStack_68 = *(iVar7 + 0x5e0);
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) goto code_r0x0800186c;
    if (0xf0 < arg3) {
        pcVar12 = 0xfffffff9;
        goto code_r0x0800186c;
    }
    piVar13 = *(arg1 + 8);
    if (piVar13 == NULL) {
code_r0x08001840:
        pcVar12 = 0xfffffff5;
    }
    else {
        piVar1 = piVar13 + 1;
        _raw_spin_lock(piVar1);
        if (*piVar13 == arg1) {
            if (((arg4 >> 0x20 & 1) == 0) || (piVar13[2] != -1)) {
                _raw_spin_unlock(piVar1);
                if (piVar13[2] == -1) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&stack0xffffffffffffff70,0);
                    while (iVar7 = prepare_to_wait_event(piVar13 + 9,&stack0xffffffffffffff70,1), piVar13[2] == -1) {
                        if (iVar7 != 0) {
                            if (iVar7 != 0) goto code_r0x080019f4;
                            goto code_r0x08001814;
                        }
                        schedule();
                    }
                    finish_wait(piVar13 + 9,&stack0xffffffffffffff70);
                }
code_r0x08001814:
                _raw_spin_lock(piVar1);
                if (piVar13[4] != 0) {
                    _raw_spin_unlock(piVar1);
                    bVar4 = piVar13[8] == '\0';
                    if (((arg4 >> 0x20 & 1) == 0) || (piVar13[8] == '\0')) {
                        uVar11 = arg4 & 0xffffffff;
                        piVar1 = piVar13 + 7;
                        pcVar12 = 0xfffffff5;
                        do {
                            if (!bVar4) {
                                uStack_78 = 0;
                                uStack_70 = 0;
                                uStack_88 = 0;
                                uStack_80 = 0;
                                uStack_90 = 0;
                                init_wait_entry(&stack0xffffffffffffff70,0);
                                while (iVar7 = prepare_to_wait_event(piVar13 + 9,&stack0xffffffffffffff70,1),
                                      piVar13[8] != '\0') {
                                    if (iVar7 != 0) {
                                        if (iVar7 == 0) goto code_r0x08001914;
                                        goto code_r0x080019f4;
                                    }
                                    schedule();
                                }
                                finish_wait(piVar13 + 9,&stack0xffffffffffffff70);
                            }
code_r0x08001914:
                            uVar8 = _raw_spin_lock_irqsave(piVar1);
                            uVar9 = piVar13[2];
                            CallHyperVisor(0x601b);
                            uStack_90 = 0;
                            if (uVar9 != 0x3d) {
                                if (uVar9 < 0x3d) {
    //switch table (60 cases) at 0x8000258
                                    switch(*((uVar9 & 0xffffffff) * 4 + 0x8000258) + 0x80019a0) {
                                    case 0x80019b4:
                                        *(piVar13 + 8) = arg3 == 0;
                                        _raw_spin_unlock_irqrestore(piVar1,uVar8,arg2,uVar11,0,0,0,0);
                                        pcVar12 = NULL;
                                        goto code_r0x0800186c;
                                    case 0x8001a00:
                                        pcVar12 = 0xfffffff3;
                                        break;
                                    case 0x8001a28:
                                        pcVar12 = 0xffffffff;
                                        break;
                                    case 0x8001a34:
                                        pcVar12 = 0xfffffff0;
                                        break;
                                    case 0x8001a40:
                                        pcVar12 = 0xfffffff4;
                                        break;
                                    case 0x8001a4c:
                                        goto code_r0x08001a4c;
                                    }
                                }
                                else {
code_r0x08001a4c:
                                    pcVar12 = 0xffffffea;
                                }
                                _raw_spin_unlock_irqrestore(piVar1,uVar8,arg2,uVar11,0,0,0,0);
                                _printk(0x8000626,"__gh_msgq_send",uVar9 & 0xffffffff);
                                break;
                            }
                            *(piVar13 + 8) = 1;
                            _raw_spin_unlock_irqrestore(piVar1,uVar8,arg2,uVar11,0,0,0,0);
                            bVar4 = piVar13[8] == '\0';
                        } while (((arg4 >> 0x20 & 1) == 0) || (piVar13[8] == '\0'));
                        goto code_r0x0800186c;
                    }
                    goto code_r0x08001840;
                }
                iVar5 = ___ratelimit(obj.gh_msgq_send._rs.10,"gh_msgq_send");
                if (iVar5 != 0) {
                    uVar3 = *arg1;
                    uVar8 = 0x8000368;
                    goto code_r0x08001a14;
                }
            }
            else {
                iVar5 = ___ratelimit(obj.gh_msgq_send._rs,"gh_msgq_send");
                if (iVar5 != 0) {
                    uVar3 = *arg1;
                    uVar8 = 0x8000550;
code_r0x08001a14:
                    _printk(uVar8,"gh_msgq_send",uVar3);
                }
            }
            pcVar12 = 0xfffffff5;
        }
        else {
            _printk(0x8000462,"gh_msgq_send");
            pcVar12 = 0xffffffea;
        }
        _raw_spin_unlock(piVar1);
    }
code_r0x0800186c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return pcVar12;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18 = sym.gh_msgq_register;
    if (uVar6 < 0) {
        pcVar12 = 0xffffffffffffffea;
    }
    else {
        uVar11 = uVar6;
        _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
        for (pcVar10 = _obj.gh_msgq_alloc_entry.__key; pcVar10 != obj.gh_msgq_alloc_entry.__key; pcVar10 = *pcVar10) {
            if (*(pcVar10 + -8) == uVar6) {
                pcVar10 = pcVar10 + -0x80;
                if (pcVar10 != NULL) goto code_r0x08001b08;
                break;
            }
        }
        pcVar12 = sym.gh_msgq_alloc_entry(uVar11);
        pcVar10 = pcVar12;
        if (pcVar12 < 0xfffffffffffff001) {
code_r0x08001b08:
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
            pcVar2 = pcVar10 + 8;
            _raw_spin_lock(pcVar2);
            if (*pcVar10 == 0) {
                iVar7 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar7 = 0x30;
                }
                pcVar12 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xb20,0x10);
                if (pcVar12 == NULL) {
                    _raw_spin_unlock(pcVar2);
                    pcVar12 = 0xfffffffffffffff4;
                }
                else {
                    *pcVar12 = uVar6;
                    *(pcVar12 + 8) = pcVar10;
                    *pcVar10 = pcVar12;
                    _raw_spin_unlock(pcVar2);
                    _printk(0x8000483,uVar11);
                }
            }
            else {
                _raw_spin_unlock(pcVar2);
                _printk(0x80005c1,"gh_msgq_register",uVar11);
                pcVar12 = 0xfffffffffffffff0;
            }
        }
        else {
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
        }
    }
    return pcVar12;
code_r0x080019f4:
    pcVar12 = 0xfffffe00;
    goto code_r0x0800186c;
}


// ===== sym.gh_msgq_register @ 0x08001a7c (size 352) =====

code * sym.gh_msgq_register(int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    int iVar3;
    code *pcVar4;
    code *pcVar5;
    ulong *in_x18;
    uint64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = arg1;
    if (iVar3 < 0) {
        pcVar4 = 0xffffffffffffffea;
    }
    else {
        arg1_00 = arg1 & 0xffffffff;
        _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
        for (pcVar5 = _obj.gh_msgq_alloc_entry.__key; pcVar5 != obj.gh_msgq_alloc_entry.__key; pcVar5 = *pcVar5) {
            if (*(pcVar5 + -8) == iVar3) {
                pcVar5 = pcVar5 + -0x80;
                if (pcVar5 != NULL) goto code_r0x08001b08;
                break;
            }
        }
        pcVar4 = sym.gh_msgq_alloc_entry(arg1_00);
        pcVar5 = pcVar4;
        if (pcVar4 < 0xfffffffffffff001) {
code_r0x08001b08:
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
            pcVar1 = pcVar5 + 8;
            _raw_spin_lock(pcVar1);
            if (*pcVar5 == 0) {
                iVar2 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar2 = 0x30;
                }
                pcVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xb20,0x10);
                if (pcVar4 == NULL) {
                    _raw_spin_unlock(pcVar1);
                    pcVar4 = 0xfffffffffffffff4;
                }
                else {
                    *pcVar4 = iVar3;
                    *(pcVar4 + 8) = pcVar5;
                    *pcVar5 = pcVar4;
                    _raw_spin_unlock(pcVar1);
                    _printk(0x8000483,arg1_00);
                }
            }
            else {
                _raw_spin_unlock(pcVar1);
                _printk(0x80005c1,"gh_msgq_register",arg1_00);
                pcVar4 = 0xfffffffffffffff0;
            }
        }
        else {
            _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
        }
    }
    return pcVar4;
}


// ===== sym.gh_msgq_unregister @ 0x08001bdc (size 172) =====

ulong sym.gh_msgq_unregister(int64_t arg1)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        piVar2 = *(arg1 + 8);
        piVar1 = piVar2 + 1;
        _raw_spin_lock(piVar1);
        if (*piVar2 == arg1) {
            *piVar2 = 0;
            _raw_spin_unlock(piVar1);
            _printk(0x80003e3,"gh_msgq_unregister",*arg1);
            kfree(arg1);
            return 0;
        }
        _printk(0x8000582,"gh_msgq_unregister");
        _raw_spin_unlock(piVar1);
    }
    return 0xffffffea;
}


// ===== sym.gh_msgq_populate_cap_info @ 0x08001c88 (size 568) =====

uint64_t sym.gh_msgq_populate_cap_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int iVar5;
    code *pcVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 0) {
        _printk(0x80006fd,"gh_msgq_populate_cap_info");
        return 0xffffffea;
    }
    uVar7 = arg4 & 0xffffffff;
    iVar5 = arg4;
    if (iVar5 < 0) {
        _printk(0x8000441,"gh_msgq_populate_cap_info");
        return 0xfffffffa;
    }
    _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
    for (pcVar6 = _obj.gh_msgq_alloc_entry.__key; pcVar6 != obj.gh_msgq_alloc_entry.__key; pcVar6 = *pcVar6) {
        if (*(pcVar6 + -8) == arg1) {
            pcVar6 = pcVar6 + -0x80;
            if (pcVar6 != NULL) goto code_r0x08001d24;
            break;
        }
    }
    pcVar6 = sym.gh_msgq_alloc_entry(arg1 & 0xffffffff);
    if (0xfffffffffffff000 < pcVar6) {
        _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
        return pcVar6 & 0xffffffff;
    }
code_r0x08001d24:
    _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
    if (arg3 == 1) {
        uVar3 = request_threaded_irq
                          (uVar7,sym.gh_msgq_rx_isr.ef01b8499dea90cb227ed4c5ff146e1e.cfi_jt,0,0,*(pcVar6 + 0x30),
                           pcVar6);
        if (-1 < uVar3) {
            _raw_spin_lock(pcVar6 + 8);
            *(pcVar6 + 0x18) = arg2;
            *(pcVar6 + 0x24) = iVar5;
            _raw_spin_unlock(pcVar6 + 8);
            pcVar6 = pcVar6 + 0x60;
code_r0x08001dc8:
            __wake_up(pcVar6,1,1,0);
            irq_set_irq_wake(uVar7,1);
            return 0;
        }
    }
    else {
        if (arg3 != 0) {
            _printk(0x80005eb,"gh_msgq_populate_cap_info");
            uVar7 = 0xffffffea;
            goto code_r0x08001df0;
        }
        uVar3 = request_threaded_irq
                          (uVar7,sym.gh_msgq_tx_isr.ef01b8499dea90cb227ed4c5ff146e1e.cfi_jt,0,0,*(pcVar6 + 0x28),
                           pcVar6);
        if (-1 < uVar3) {
            _raw_spin_lock(pcVar6 + 8);
            *(pcVar6 + 0x10) = arg2;
            *(pcVar6 + 0x20) = iVar5;
            _raw_spin_unlock(pcVar6 + 8);
            pcVar6 = pcVar6 + 0x48;
            goto code_r0x08001dc8;
        }
    }
    uVar7 = uVar3;
code_r0x08001df0:
    _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
    uVar4 = __list_del_entry_valid(pcVar6 + 0x80);
    if ((uVar4 & 1) != 0) {
        iVar1 = *(pcVar6 + 0x80);
        piVar2 = *(pcVar6 + 0x88);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(pcVar6 + 0x80) = 0xdead000000000100;
    *(pcVar6 + 0x88) = 0xdead000000000122;
    _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
    kfree(*(pcVar6 + 0x28));
    kfree(*(pcVar6 + 0x30));
    kfree(pcVar6);
    return uVar7;
}


// ===== sym.gh_msgq_tx_isr @ 0x08001ec0 (size 92) =====

ulong sym.gh_msgq_tx_isr(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(arg1 + 0x38);
    *(arg1 + 0x40) = 0;
    _raw_spin_unlock(arg1 + 0x38);
    __wake_up(arg1 + 0x48,1,1,0);
    return 1;
}


// ===== sym.gh_msgq_rx_isr @ 0x08001f1c (size 92) =====

ulong sym.gh_msgq_rx_isr(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(arg1 + 0x3c);
    *(arg1 + 0x41) = 0;
    _raw_spin_unlock(arg1 + 0x3c);
    __wake_up(arg1 + 0x60,1,1,0);
    return 1;
}


// ===== sym.gh_msgq_reset_cap_info @ 0x08001f78 (size 340) =====

uint sym.gh_msgq_reset_cap_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
        for (pcVar2 = _obj.gh_msgq_alloc_entry.__key; pcVar2 != obj.gh_msgq_alloc_entry.__key; pcVar2 = *pcVar2) {
            if (*(pcVar2 + -8) == arg1) {
                _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
                if (pcVar2 + -0x80 == NULL) {
                    return 0xffffffea;
                }
                if (arg2 == 1) {
                    if (*(pcVar2 + -0x5c) == 0) {
                        uVar1 = 0x800068d;
                        goto code_r0x080020b8;
                    }
                    *arg3 = *(pcVar2 + -0x5c);
                    _raw_spin_lock(pcVar2 + -0x78);
                    *(pcVar2 + -0x5c) = 0;
                    *(pcVar2 + -0x68) = 0xffffffffffffffff;
                }
                else {
                    if (arg2 != 0) {
                        _printk(0x80005eb,"gh_msgq_reset_cap_info");
                        return 0xffffffea;
                    }
                    if (*(pcVar2 + -0x60) == 0) {
                        uVar1 = 0x8000675;
code_r0x080020b8:
                        _printk(uVar1,"gh_msgq_reset_cap_info");
                        return 0xfffffffa;
                    }
                    *arg3 = *(pcVar2 + -0x60);
                    _raw_spin_lock(pcVar2 + -0x78);
                    *(pcVar2 + -0x60) = 0;
                    *(pcVar2 + -0x70) = 0xffffffffffffffff;
                }
                _raw_spin_unlock(pcVar2 + -0x78);
                if (*arg3 != 0) {
                    free_irq(*arg3,pcVar2 + -0x80);
                    return 0;
                }
                return 0;
            }
        }
        _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
    }
    return 0xffffffea;
}


// ===== sym.gh_msgq_probe @ 0x080020cc (size 228) =====

ulong sym.gh_msgq_probe(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong uVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 0x300);
    arg2_00 = arg2 & 0xffffffff;
    iVar1 = of_find_property(uVar3,"qcom,is-full-duplex",0);
    if (iVar1 == 0) {
        iVar1 = of_find_property(uVar3,"qcom,is-sender",0);
        if (iVar1 == 0) {
            uVar4 = 0;
        }
        else {
            uVar2 = sym.gh_msgq_probe_direction(arg1,arg2_00,0,0);
            if (uVar2 != 0) {
                return uVar2;
            }
            uVar4 = 1;
        }
        iVar1 = of_find_property(uVar3,"qcom,is-receiver",0);
        if (iVar1 == 0) {
            return 0;
        }
    }
    else {
        uVar3 = sym.gh_msgq_probe_direction(arg1,arg2_00,0,0);
        if (uVar3 != 0) {
            return uVar3;
        }
        uVar4 = 1;
    }
    uVar3 = sym.gh_msgq_probe_direction(arg1,arg2_00,1,uVar4);
    if (uVar3 == 0) {
        return 0;
    }
    return uVar3;
}


// ===== sym.gh_msgq_probe_direction @ 0x080021b0 (size 252) =====

uchar * sym.gh_msgq_probe_direction(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    uVar5 = arg4 & 0xffffffff;
    iStack_50 = 0;
    uVar3 = platform_get_irq(arg1,arg4 & 0xffffffff);
    puVar4 = uVar3;
    if (uVar3 < 0) {
        _dev_err(arg1 + 0x10,"Failed to get the IRQ%d. ret: %d\n",uVar5,puVar4);
    }
    else {
        uVar3 = of_property_read_u64_index(*(arg1 + 0x300),0x8000659,uVar5,&iStack_50);
        if (uVar3 == 0) {
            uVar5 = sym.gh_msgq_populate_cap_info(arg2 & 0xffffffff,iStack_50,arg3 & 0xffffffff,puVar4);
            puVar4 = uVar5 & 0xffffffff;
        }
        else {
            puVar4 = uVar3;
            _dev_err(arg1 + 0x10,"Failed to get capid[%d]\n",uVar5);
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8002304);
        (*pcVar2)();
    }
    return puVar4;
}


// ===== sym.__cfi_check_fail @ 0x080022ac (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080022f0

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
    //switch table (4 cases) at 0x800034c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002304);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002394 (size 16) =====

ulong sym.init_module(int64_t arg1)

{
    return 0;
}


// ===== sym.cleanup_module @ 0x080023a4 (size 136) =====

void sym.cleanup_module(void)

{
    code *pcVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.gh_msgq_alloc_entry.__key);
    pcVar1 = _obj.gh_msgq_alloc_entry.__key;
    while (pcVar1 != obj.gh_msgq_alloc_entry.__key) {
        pcVar2 = *pcVar1;
        kfree(*(pcVar1 + -0x58));
        kfree(*(pcVar1 + -0x50));
        kfree(pcVar1 + -0x80);
        pcVar1 = pcVar2;
    }
    _raw_spin_unlock(obj.gh_msgq_alloc_entry.__key);
    return;
}

