// decompiled from miwill by radare2+r2ghidra (pdg)

// ===== sym.add_app @ 0x0800858c (size 320) =====

ulong sym.add_app(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = 0;
    do {
        iVar3 = *0x8008000;
        iVar2 = *0x8008000 + iVar8;
        iVar1 = iVar2 + 0x14;
        _raw_spin_lock_bh(iVar1);
        if (iVar2 == -0x10) {
            _printk(0x80013d1,"");
        }
        else {
            iVar2 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar2 = 0x30;
            }
            puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xa20,0x30);
            if (puVar4 != NULL) {
                iVar3 = iVar3 + iVar8;
                puVar4[3] = 0;
                puVar4[5] = 0;
                *puVar4 = 0;
                puVar4[1] = 0;
                puVar6 = puVar4 + 4;
                *puVar6 = 0;
                puVar7 = puVar4 + 2;
                *puVar7 = 0;
                *puVar7 = puVar7;
                puVar4[3] = puVar7;
                puVar7 = *(iVar3 + 0x20);
                uVar5 = __list_add_valid(puVar6,puVar7,iVar3 + 0x18);
                if ((uVar5 & 1) != 0) {
                    *(iVar3 + 0x20) = puVar6;
                    puVar4[4] = iVar3 + 0x18;
                    puVar4[5] = puVar7;
                    *puVar7 = puVar6;
                }
                *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
                *(puVar4 + 4) = arg1;
            }
        }
        _raw_spin_unlock_bh(iVar1);
        iVar8 = iVar8 + 0x18;
    } while (iVar8 != 0x300);
    return 0;
}


// ===== sym.del_app @ 0x080086cc (size 416) =====

ulong sym.del_app(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    do {
        piVar1 = *0x8008000 + iVar7 * 0x18 + 0x18;
        if (piVar1 != *piVar1) {
            iVar8 = *0x8008000 + iVar7 * 0x18;
            _raw_spin_lock_bh();
            if (*piVar1 != piVar1) {
                piVar2 = iVar8 + 0x10;
                piVar11 = *piVar1;
                do {
                    piVar12 = *piVar11;
                    if (*(piVar11 + -0x1c) == arg1) {
                        uVar6 = __list_del_entry_valid(piVar11);
                        if ((uVar6 & 1) != 0) {
                            iVar3 = *piVar11;
                            piVar10 = piVar11[1];
                            *(iVar3 + 8) = piVar10;
                            *piVar10 = iVar3;
                        }
                        *piVar11 = piVar11;
                        piVar10 = piVar11 + -2;
                        piVar11[1] = piVar11;
                        *piVar2 = *piVar2 + -1;
                        if (*piVar10 != piVar10) {
                            _raw_spin_lock_bh(piVar11 + -0x14);
                            piVar5 = piVar11[-2];
                            while (piVar5 != piVar10) {
                                piVar9 = *piVar5;
                                uVar6 = __list_del_entry_valid(piVar5);
                                if ((uVar6 & 1) != 0) {
                                    iVar3 = *piVar5;
                                    piVar4 = piVar5[1];
                                    *(iVar3 + 8) = piVar4;
                                    *piVar4 = iVar3;
                                }
                                *piVar5 = piVar5;
                                piVar5[1] = piVar5;
                                *(piVar11 + -3) = piVar11[-3] + -1;
                                kfree(piVar5 + -7);
                                piVar5 = piVar9;
                            }
                            _raw_spin_unlock_bh(piVar11 + -0x14);
                            kfree(piVar11 + -4);
                        }
                    }
                    piVar11 = piVar12;
                } while (piVar12 != piVar1);
            }
            _raw_spin_unlock_bh(iVar8 + 0x14);
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 != 0x20);
    return 0;
}


// ===== sym.clear_app @ 0x08008874 (size 392) =====

ulong sym.clear_app(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    do {
        piVar1 = *0x8008000 + iVar7 * 0x18 + 0x18;
        if (piVar1 != *piVar1) {
            iVar8 = *0x8008000 + iVar7 * 0x18;
            _raw_spin_lock_bh();
            if (*piVar1 != piVar1) {
                piVar2 = iVar8 + 0x10;
                piVar9 = *piVar1;
                do {
                    piVar11 = *piVar9;
                    uVar6 = __list_del_entry_valid(piVar9);
                    if ((uVar6 & 1) != 0) {
                        iVar3 = *piVar9;
                        piVar12 = piVar9[1];
                        *(iVar3 + 8) = piVar12;
                        *piVar12 = iVar3;
                    }
                    *piVar9 = piVar9;
                    piVar12 = piVar9 + -2;
                    piVar9[1] = piVar9;
                    *piVar2 = *piVar2 + -1;
                    if (*piVar12 != piVar12) {
                        _raw_spin_lock_bh(piVar9 + -0x14);
                        piVar5 = piVar9[-2];
                        while (piVar5 != piVar12) {
                            piVar10 = *piVar5;
                            uVar6 = __list_del_entry_valid(piVar5);
                            if ((uVar6 & 1) != 0) {
                                iVar3 = *piVar5;
                                piVar4 = piVar5[1];
                                *(iVar3 + 8) = piVar4;
                                *piVar4 = iVar3;
                            }
                            *piVar5 = piVar5;
                            piVar5[1] = piVar5;
                            *(piVar9 + -3) = piVar9[-3] + -1;
                            kfree(piVar5 + -7);
                            piVar5 = piVar10;
                        }
                        _raw_spin_unlock_bh(piVar9 + -0x14);
                        kfree(piVar9 + -4);
                    }
                    piVar9 = piVar11;
                } while (piVar11 != piVar1);
            }
            _raw_spin_unlock_bh(iVar8 + 0x14);
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 != 0x20);
    return 0;
}


// ===== sym.minet_set_app @ 0x08008a04 (size 360) =====

ulong sym.minet_set_app(int64_t arg1)

{
    uint32_t uVar1;
    int16_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80013d1,"");
        uVar3 = 0xffffffff;
    }
    else if (*arg1 == 1) {
        iVar2 = *(arg1 + 2);
        if (iVar2 == 1) {
            if (*(arg1 + 4) != 0) {
                uVar4 = 0;
                do {
                    uVar5 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
                    sym.add_app(*(arg1 + 8 + uVar5));
                    _printk(0x800111f,"",*(arg1 + 8 + uVar5));
                    uVar1 = uVar4 + 1;
                    uVar4 = uVar1;
                } while (uVar1 < *(arg1 + 4));
                return 0;
            }
        }
        else if (iVar2 == 2) {
            if (*(arg1 + 4) != 0) {
                uVar4 = 0;
                do {
                    uVar5 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
                    sym.del_app(*(arg1 + 8 + uVar5));
                    _printk(0x8001487,"",*(arg1 + 8 + uVar5));
                    uVar1 = uVar4 + 1;
                    uVar4 = uVar1;
                } while (uVar1 < *(arg1 + 4));
                return 0;
            }
        }
        else if (iVar2 == 3) {
            sym.clear_app(arg1);
            _printk(0x8000cd1,"");
        }
        uVar3 = 0;
    }
    else {
        _printk(0x80008c9,"");
        uVar3 = 0xffffffff;
    }
    return uVar3;
}


// ===== sym.minet_init @ 0x08008b6c (size 384) =====

ulong sym.minet_init(void)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(___list_add_valid,0xcc0,0x310);
    if (iVar2 != 0) {
        *0x8008000 = iVar2;
        memset(iVar2,0,0x310);
        iVar4 = 0;
        *(iVar2 + 0x18) = iVar2 + 0x18;
        *(iVar2 + 0x20) = iVar2 + 0x18;
        *(iVar2 + 0x2c) = 0;
        *(iVar2 + 0x30) = iVar2 + 0x30;
        *(iVar2 + 0x38) = iVar2 + 0x30;
        *(iVar2 + 0x44) = 0;
        *(iVar2 + 0x48) = iVar2 + 0x48;
        *(iVar2 + 0x50) = iVar2 + 0x48;
        do {
            iVar2 = *0x8008000 + iVar4;
            iVar4 = iVar4 + 0x18;
            *(iVar2 + 0x5c) = 0;
            *(iVar2 + 0x60) = iVar2 + 0x60;
            *(iVar2 + 0x68) = iVar2 + 0x60;
        } while (iVar4 != 0x2b8);
        iVar1 = nf_register_net_hooks(init_net,obj.minet_hooks,4);
        if (iVar1 == 0) {
            uVar3 = kthread_create_on_node
                              (sym.minet_thread.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt,*0x8008000,0xffffffff,"");
            if (uVar3 < 0xfffffffffffff001) {
                wake_up_process(uVar3);
                *(*0x8008000 + 8) = uVar3;
                if (uVar3 != 0) {
                    _printk(0x8000fcc,"");
                    return 0;
                }
            }
            else {
                *(*0x8008000 + 8) = uVar3;
            }
            _printk(0x80018ee,"");
        }
        else {
            _printk(0x800095c,"",iVar1);
        }
        if (*0x8008000 != 0) {
            kfree();
        }
    }
    *0x8008000 = 0;
    return 0xffffffff;
}


// ===== sym.minet_cleanup @ 0x08008cec (size 152) =====

void sym.minet_cleanup(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000fe4,"");
    nf_unregister_net_hooks(init_net,obj.minet_hooks,4);
    arg1 = 0;
    if (*(*0x8008000 + 8) != 0) {
        arg1 = kthread_stop();
        *(*0x8008000 + 8) = 0;
    }
    sym.clear_app(arg1);
    if (*0x8008000 != 0) {
        kfree();
        *0x8008000 = 0;
    }
    _printk(0x8000fcc,"");
    return;
}


// ===== sym.minet_thread @ 0x08008d84 (size 88) =====

ulong sym.minet_thread(void)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000fe4,"");
    uVar1 = kthread_should_stop();
    while ((uVar1 & 1) == 0) {
        schedule_timeout_interruptible(0x1d4c);
        func_0x0800800c();
        func_0x080081c8();
        uVar1 = kthread_should_stop();
    }
    return 0;
}


// ===== sym.hook4 @ 0x08008ddc (size 860) =====

ulong sym.hook4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
    if (iVar4 == 0) {
        return 1;
    }
    cVar3 = *arg2;
    if ((cVar3 == '\x01') && (*(iVar4 + 9) == '\x11')) {
        if ((*(arg1 + 0xa7) & 1) == 0) {
            return 1;
        }
        uVar2 = *(iVar4 + 0xc);
        if ((uVar2 & 0xf0ff) == 0x10ac) {
            return 1;
        }
        if ((uVar2 & 0xff) == 10) {
            return 1;
        }
        if (uVar2 == 0xffffffff) {
            return 1;
        }
        if ((uVar2 & 0xffffff) == 0xe0) {
            return 1;
        }
        if ((uVar2 & 0xff) == 0x7f) {
            return 1;
        }
        if ((uVar2 & 0xf0) == 0xe0) {
            return 1;
        }
        if ((uVar2 & 0xffff) == 0xa8c0) {
            return 1;
        }
        if ((uVar2 & 0xffff) == 0xfea9) {
            return 1;
        }
        iVar4 = sp_el0;
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        iVar6 = tpidr_el1;
        if (*(cpu_number + iVar6) < 0x20) {
            iVar7 = *0x8008000 + *(cpu_number + iVar6) * 0x18;
            iVar6 = iVar7 + 0x14;
            _raw_spin_lock_bh(iVar6);
            piVar1 = iVar7 + 0x18;
            if (piVar1 != *piVar1) {
                sym.app_flow_stat(*piVar1 + -0x20,arg1,arg2);
            }
            _raw_spin_unlock_bh(iVar6);
        }
        iVar6 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar6;
        if (iVar6 == 0) goto code_r0x08009130;
        iVar4 = *(iVar4 + 0x10);
    }
    else {
        iVar6 = *(arg1 + 0x18);
        if (iVar6 == 0) {
            return 1;
        }
        if ((*(iVar6 + 0x12) == '\f') && (iVar6 = *(iVar6 + 0x60), iVar6 == 0)) {
            return 1;
        }
        if ((*(iVar4 + 9) != '\x11') && (*(iVar4 + 9) != '\x06')) {
            return 1;
        }
        if ((1 << (*(iVar6 + 0x12) & 0x1f) & 0xffffefbfU) == 0) {
            return 1;
        }
        if (1 < *(iVar6 + 0x22a) - 1) {
            return 1;
        }
        if (cVar3 == '\x03') {
            uVar2 = *(iVar4 + 0x10);
            if ((uVar2 & 0xf0ff) == 0x10ac) {
                return 1;
            }
            if ((uVar2 & 0xff) == 10) {
                return 1;
            }
            if (uVar2 == 0xffffffff) {
                return 1;
            }
            if ((uVar2 & 0xffffff) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xff) == 0x7f) {
                return 1;
            }
            if ((uVar2 & 0xf0) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xa8c0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xfea9) {
                return 1;
            }
        }
        if (cVar3 == '\x01') {
            uVar2 = *(iVar4 + 0xc);
            if ((uVar2 & 0xf0ff) == 0x10ac) {
                return 1;
            }
            if ((uVar2 & 0xff) == 10) {
                return 1;
            }
            if (uVar2 == 0xffffffff) {
                return 1;
            }
            if ((uVar2 & 0xffffff) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xff) == 0x7f) {
                return 1;
            }
            if ((uVar2 & 0xf0) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xa8c0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xfea9) {
                return 1;
            }
        }
        iVar4 = sp_el0;
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        iVar7 = tpidr_el1;
        if (*(cpu_number + iVar7) < 0x20) {
            iVar8 = *0x8008000 + *(cpu_number + iVar7) * 0x18;
            iVar7 = iVar8 + 0x14;
            _raw_spin_lock_bh(iVar7);
            piVar1 = iVar8 + 0x18;
            piVar5 = piVar1;
            do {
                piVar5 = *piVar5;
                if (piVar5 == piVar1) goto code_r0x080090e8;
            } while (*(piVar5 + -0x1c) != *(iVar6 + 600));
            if (piVar5 + -4 != NULL) {
                sym.app_flow_stat(piVar5 + -4,arg1,arg2);
            }
code_r0x080090e8:
            _raw_spin_unlock_bh(iVar7);
        }
        iVar6 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar6;
        if (iVar6 == 0) goto code_r0x08009130;
        iVar4 = *(iVar4 + 0x10);
    }
    if (iVar4 != 0) {
        return 1;
    }
code_r0x08009130:
    preempt_schedule();
    return 1;
}


// ===== sym.hook6 @ 0x0800915c (size 532) =====

ulong sym.hook6(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
    if (iVar2 == 0) {
        return 1;
    }
    if ((*arg2 == '\x01') && (*(iVar2 + 6) == '\x11')) {
        if ((*(arg1 + 0xa7) & 1) == 0) {
            return 1;
        }
        iVar2 = sp_el0;
        *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
        iVar4 = tpidr_el1;
        if (*(cpu_number + iVar4) < 0x20) {
            iVar5 = *0x8008000 + *(cpu_number + iVar4) * 0x18;
            iVar4 = iVar5 + 0x14;
            _raw_spin_lock_bh(iVar4);
            piVar1 = iVar5 + 0x18;
            if (piVar1 != *piVar1) {
                sym.app_flow_stat(*piVar1 + -0x20,arg1,arg2);
            }
            _raw_spin_unlock_bh(iVar4);
        }
        iVar4 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar4;
        if (iVar4 == 0) goto code_r0x08009368;
        iVar2 = *(iVar2 + 0x10);
    }
    else {
        iVar4 = *(arg1 + 0x18);
        if (iVar4 == 0) {
            return 1;
        }
        if ((*(iVar4 + 0x12) == '\f') && (iVar4 = *(iVar4 + 0x60), iVar4 == 0)) {
            return 1;
        }
        if ((*(iVar2 + 6) != '\x11') && (*(iVar2 + 6) != '\x06')) {
            return 1;
        }
        if ((1 << (*(iVar4 + 0x12) & 0x1f) & 0xffffefbfU) == 0) {
            return 1;
        }
        if (1 < *(iVar4 + 0x22a) - 1) {
            return 1;
        }
        iVar2 = sp_el0;
        *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
        iVar5 = tpidr_el1;
        if (*(cpu_number + iVar5) < 0x20) {
            iVar6 = *0x8008000 + *(cpu_number + iVar5) * 0x18;
            iVar5 = iVar6 + 0x14;
            _raw_spin_lock_bh(iVar5);
            piVar1 = iVar6 + 0x18;
            piVar3 = piVar1;
            do {
                piVar3 = *piVar3;
                if (piVar3 == piVar1) goto code_r0x08009320;
            } while (*(piVar3 + -0x1c) != *(iVar4 + 600));
            if (piVar3 + -4 != NULL) {
                sym.app_flow_stat(piVar3 + -4,arg1,arg2);
            }
code_r0x08009320:
            _raw_spin_unlock_bh(iVar5);
        }
        iVar4 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar4;
        if (iVar4 == 0) goto code_r0x08009368;
        iVar2 = *(iVar2 + 0x10);
    }
    if (iVar2 != 0) {
        return 1;
    }
code_r0x08009368:
    preempt_schedule();
    return 1;
}


// ===== sym.app_flow_stat @ 0x08009394 (size 888) =====

//WARNING: Control flow encountered bad instruction data

void sym.app_flow_stat(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint16_t *puVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong *in_x18;
    uint64_t uVar13;
    uint16_t uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    ulong *puVar17;
    char cVar18;
    ulong unaff_x30;
    uint uStack_90;
    uint32_t uStack_7c;
    ulong uStack_78;
    uint uStack_70;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar9 = *(iVar9 + 0x5e0);
    uVar5 = *(arg3 + 1);
    uStack_70 = 0;
    uStack_78 = 0;
    if (uVar5 == 10) {
        iVar2 = *(arg2 + 0xd0) + *(arg2 + 0xb4);
        if ((iVar2 != 0) && (puVar10 = *(arg2 + 0xd0) + *(arg2 + 0xb2), puVar10 != NULL)) {
            cVar18 = *(iVar2 + 6);
            if (*arg3 == '\x01') {
                uStack_7c = *(iVar2 + 8);
                uVar3 = *(iVar2 + 0xc);
                iVar15 = *(iVar2 + 0x10);
                uStack_78 = *(iVar2 + 0x1c);
                uStack_70 = *(iVar2 + 0x24);
                uStack_90 = *(iVar2 + 0x18);
                uVar14 = *puVar10 >> 8 | *puVar10 << 8;
                puVar10 = puVar10 + 1;
            }
            else {
                uStack_7c = *(iVar2 + 0x18);
                uVar3 = *(iVar2 + 0x1c);
                iVar15 = *(iVar2 + 0x20);
                uStack_78 = *(iVar2 + 0xc);
                uVar14 = puVar10[1] >> 8 | puVar10[1] << 8;
                uStack_70 = *(iVar2 + 0x14);
                uStack_90 = *(iVar2 + 8);
            }
            uVar13 = uVar3;
code_r0x080094ec:
            uVar6 = *puVar10 >> 8 | *puVar10 << 8;
            goto code_r0x080094fc;
        }
    }
    else if (uVar5 == 2) {
        iVar2 = *(arg2 + 0xd0) + *(arg2 + 0xb4);
        if ((iVar2 != 0) && (puVar10 = *(arg2 + 0xd0) + *(arg2 + 0xb2), puVar10 != NULL)) {
            cVar18 = *(iVar2 + 9);
            if (*arg3 == '\x01') {
                uVar14 = *puVar10;
                uStack_7c = *(iVar2 + 0xc);
                uStack_90 = *(iVar2 + 0x10);
                puVar10 = puVar10 + 1;
            }
            else {
                uStack_90 = *(iVar2 + 0xc);
                uStack_7c = *(iVar2 + 0x10);
                uVar14 = puVar10[1];
            }
            uVar13 = 0;
            iVar15 = 0;
            uVar14 = uVar14 >> 8 | uVar14 << 8;
            goto code_r0x080094ec;
        }
    }
    cVar18 = '\0';
    uVar14 = 0;
    uVar6 = 0;
    uVar13 = 0;
    uStack_7c = 0;
    iVar15 = 0;
    uStack_90 = 0;
code_r0x080094fc:
    _raw_spin_lock_bh();
    piVar16 = arg1 + 0x10;
    if (*piVar16 != piVar16) {
        piVar12 = *piVar16;
        do {
            piVar11 = *piVar12;
            if (((*(piVar12 + -0x36) == uVar5) && (piVar7 = piVar12 + -7, *piVar7 == cVar18)) &&
               (*(piVar12 + -0x34) == uVar14)) {
                if (uVar5 == 2) {
                    if (*(piVar12 + -6) != uStack_7c) goto code_r0x0800953c;
                }
                else if ((piVar12[-6] != (uStack_7c | uVar13 << 0x20)) || (piVar12[-5] != iVar15))
                goto code_r0x0800953c;
                if (piVar7 != NULL) goto code_r0x08009664;
                break;
            }
code_r0x0800953c:
            piVar12 = piVar11;
        } while (piVar11 != piVar16);
    }
    piVar1 = arg1 + 8;
    if (piVar1 == NULL) {
        _printk(0x80013d1,"");
    }
    else {
        piVar7 = kmem_cache_alloc_trace(___list_add_valid,0xa20,0x48);
        if (piVar7 != NULL) {
            puVar17 = *(arg1 + 0x18);
            piVar7[8] = 0;
            piVar7[5] = 0;
            piVar7[6] = 0;
            piVar7[3] = 0;
            piVar7[4] = 0;
            piVar7[1] = 0;
            piVar7[2] = 0;
            *piVar7 = 0;
            piVar12 = piVar7 + 7;
            *piVar12 = 0;
            uVar8 = __list_add_valid(piVar12,puVar17,piVar16);
            if ((uVar8 & 1) != 0) {
                *(arg1 + 0x18) = piVar12;
                piVar7[7] = piVar16;
                piVar7[8] = puVar17;
                *puVar17 = piVar12;
            }
            *piVar7 = cVar18;
            iVar4 = *piVar1;
            *(piVar7 + 1) = '\0';
            *(piVar7 + 2) = uVar5;
            *(piVar7 + 6) = uVar6;
            *(piVar7 + 4) = uVar14;
            piVar7[1] = uStack_7c | uVar13 << 0x20;
            *piVar1 = iVar4 + 1;
            *(piVar7 + 3) = uStack_90;
            piVar7[2] = iVar15;
            *(piVar7 + 0x1c) = uStack_78;
            *(piVar7 + 0x24) = uStack_70;
code_r0x08009664:
            if (*arg3 == '\x03') {
                *(piVar7 + 6) = piVar7[6] + 1;
                *(piVar7 + 0x34) = *(piVar7 + 0x34) + *(arg2 + 0x70);
            }
            else if (*arg3 == '\x01') {
                *(piVar7 + 5) = piVar7[5] + 1;
                *(piVar7 + 0x2c) = *(piVar7 + 0x2c) + *(arg2 + 0x70);
            }
        }
    }
    _raw_spin_unlock_bh(arg1 + 0xc);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar9) {
        return;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x080097a0 (size 236) =====

int sym.init_module(void)

{
    bool bVar1;
    int iVar2;
    ulong *in_x18;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    register_netdevice_notifier(reloc.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt);
    iVar2 = rtnl_link_register(obj.miwill_link_ops);
    if (iVar2 < 0) goto code_r0x0800984c;
    if ((_segment.ehdr < 1) || (iVar2 != 0)) {
code_r0x08009814:
        iVar2 = sym.miwill_nl_init();
        if (((iVar2 == 0) && (iVar2 = sym.minet_init(), iVar2 == 0)) &&
           (iVar2 = func_0x08004024(obj.red_mode), iVar2 == 0)) {
            _printk(0x800179a,"");
            return 0;
        }
    }
    else {
        iVar3 = 1;
        do {
            iVar2 = sym.miwill_init_one();
            bVar1 = iVar3 < _segment.ehdr;
            iVar3 = iVar3 + 1;
        } while (bVar1 && iVar2 == 0);
        if (-1 < iVar2) goto code_r0x08009814;
    }
    rtnl_link_unregister(obj.miwill_link_ops);
code_r0x0800984c:
    unregister_netdevice_notifier(reloc.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt);
    return iVar2;
}


// ===== sym.miwill_init_one @ 0x0800988c (size 136) =====

int sym.miwill_init_one(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = alloc_netdev_mqs(0xd0,"",1,sym.miwill_setup.1602faf915cac25c49163d565a1fdcd8.cfi_jt,0x10,0x10);
    if (iVar2 == 0) {
        iVar1 = -0xc;
    }
    else {
        rtnl_lock();
        iVar1 = register_netdevice(iVar2);
        rtnl_unlock();
        if (iVar1 < 0) {
            free_netdev(iVar2);
        }
        else {
            iVar1 = 0;
        }
    }
    return iVar1;
}


// ===== sym.miwill_nl_init @ 0x08009914 (size 112) =====

int sym.miwill_nl_init(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = genl_register_family(obj.miwill_nl_family);
    if (iVar1 == 0) {
        _printk(0x8000dfc,"");
    }
    else {
        _printk(0x8001742,"",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08009984 (size 96) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.minet_cleanup();
    func_0x080076c8();
    rtnl_link_unregister(obj.miwill_link_ops);
    unregister_netdevice_notifier(reloc.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt);
    func_0x080041a0(obj.red_mode);
    _printk(0x800179a,"");
    return;
}

