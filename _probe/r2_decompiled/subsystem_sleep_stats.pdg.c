// decompiled from subsystem_sleep_stats by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x080021d0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x57be845bca9148ef) {
                pcVar2 = sym.subsytem_stats_suspend.f6732d5524d2c1936030ae613af68a63.cfi_jt;
            }
            else {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08002190;
                pcVar2 = sym.subsystem_stats_remove.f6732d5524d2c1936030ae613af68a63.cfi_jt;
            }
code_r0x08001174:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002190;
        }
        if (arg1 == -0x8dc801903aca538) {
            pcVar2 = sym.stats_data_open.f6732d5524d2c1936030ae613af68a63.cfi_jt;
        }
        else {
            if (arg1 != -0x890743871a4a53) goto code_r0x08002190;
            pcVar2 = sym.stats_data_ioctl.f6732d5524d2c1936030ae613af68a63.cfi_jt;
        }
    }
    else if (arg1 < 0x741b966c574d47b1) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x301714697a011648) goto code_r0x08002190;
            pcVar2 = sym.subsystem_sleep_debug_enable.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x741b966c574d47b1) {
            pcVar2 = sym.has_system_slept.cfi_jt;
            goto code_r0x08001174;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002190;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002190:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80021e4);
    (*pcVar1)();
}


// ===== sym.subsystem_sleep_debug_enable.cfi_jt @ 0x08001198 (size 8) =====

void sym.subsystem_sleep_debug_enable.cfi_jt(code param_1)

{
    obj.subsystem_stats_debug_on = param_1;
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011a0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.subsystem_stats_probe.f6732d5524d2c1936030ae613af68a63.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011a8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.subsystem_stats_probe.f6732d5524d2c1936030ae613af68a63.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.has_system_slept.cfi_jt @ 0x080011b0 (size 8) =====

bool sym.has_system_slept.cfi_jt(void)

{
    int iVar1;
    int iVar2;
    bool bVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(_segment.ehdr + 4);
    iVar2 = *(_segment.ehdr + 4);
    if (iVar1 == iVar2) {
        _printk(0x8000510,"aosd");
    }
    bVar3 = *(_segment.ehdr + 0x24) == *(_segment.ehdr + 0x24);
    if (bVar3) {
        _printk(0x8000510,"cxsd");
    }
    bVar4 = *(_segment.ehdr + 0x44) == *(_segment.ehdr + 0x44);
    if (bVar4) {
        _printk(0x8000510,0x8000500);
    }
    return !bVar4 && (!bVar3 && iVar1 != iVar2);
}


// ===== sym.has_subsystem_slept.cfi_jt @ 0x080011b8 (size 8) =====

ulong sym.has_subsystem_slept.cfi_jt(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    uVar2 = 1;
    pcVar4 = obj.a_subsystem_stats;
    do {
        if (((*pcVar4 == 0x0) && (iVar1 = _segment.ehdr + iVar3, *(_segment.ehdr + iVar3 + 4) == *(iVar1 + 4))) &&
           (*(iVar1 + 8) < *(iVar1 + 0x10))) {
            _printk(0x8000484,*(pcVar4 + -0x10));
            uVar2 = 0;
        }
        iVar3 = iVar3 + 0x20;
        pcVar4 = pcVar4 + 0x18;
    } while (iVar3 != 0x120);
    return uVar2;
}


// ===== sym.stats_data_ioctl.f6732d5524d2c1936030ae613af68a63.cfi_jt @ 0x080011c0 (size 8) =====

int64_t sym.stats_data_ioctl.f6732d5524d2c1936030ae613af68a63.cfi_jt(int64_t param_1,int param_2,int64_t param_3)

{
    code *pcVar1;
    int iVar2;
    uint *puVar3;
    ulong uVar4;
    uint *puVar5;
    int64_t iVar6;
    bool bVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + 0xd8);
    mutex_lock(obj.sleep_stats_mutex);
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    pcVar1 = 0x80080a8;
    if (param_2 != -0x7ff762f3) {
        pcVar1 = kmalloc_caches + iVar6;
    }
    uVar4 = 0x280;
    if (param_2 != -0x7ff762f3) {
        uVar4 = 0x20;
    }
    puVar3 = kmem_cache_alloc_trace(*pcVar1,0xdc0,uVar4);
    if (puVar3 == NULL) {
        iVar2 = -0xc;
        goto code_r0x08001bf0;
    }
    bVar7 = false;
    iVar6 = 0x277;
    uVar4 = 0xffffffff;
    switch(param_2) {
    case -0x7ff76300:
        break;
    case -0x7ff762ff:
    case -0x7ff762fe:
        bVar7 = false;
        iVar6 = 0x25d;
        uVar4 = 1;
        break;
    case -0x7ff762fd:
        bVar7 = false;
        iVar6 = 0x25e;
        uVar4 = 2;
        break;
    case -0x7ff762fc:
        bVar7 = false;
        iVar6 = 0x265;
        uVar4 = 2;
        break;
    case -0x7ff762fb:
        bVar7 = false;
        iVar6 = 0x25f;
        uVar4 = 5;
        break;
    case -0x7ff762fa:
        bVar7 = false;
        iVar6 = 0x260;
        uVar4 = 3;
        break;
    case -0x7ff762f9:
        bVar7 = false;
        uVar4 = 0;
        iVar6 = 0x261;
        break;
    case -0x7ff762f8:
        bVar7 = false;
        uVar4 = 0;
        iVar6 = 0x262;
        break;
    case -0x7ff762f7:
        bVar7 = false;
        iVar6 = 0x265;
        uVar4 = 3;
        break;
    case -0x7ff762f6:
        iVar6 = 0;
        goto code_r0x08001a10;
    case -0x7ff762f5:
        bVar7 = true;
        uVar4 = 0xfffffffe;
        iVar6 = 1;
        break;
    case -0x7ff762f4:
        iVar6 = 2;
        goto code_r0x08001a10;
    case -0x7ff762f3:
        iVar6 = 3;
code_r0x08001a10:
        uVar4 = 0xfffffffe;
        bVar7 = true;
        break;
    default:
        _printk(0x800043c);
        iVar2 = -0x16;
        goto code_r0x08001be8;
    }
    if (param_2 == -0x7ff762f3) {
        if (obj.ddr_freq_update != 0x0) {
            iVar2 = ddr_stats_freq_sync_send_msg();
            if (iVar2 < 0) {
code_r0x08001be8:
                kfree(puVar3);
code_r0x08001bf0:
                mutex_unlock(obj.sleep_stats_mutex);
                goto code_r0x08001c00;
            }
            __const_udelay(0x20c4ac);
        }
        if (*(iVar11 + 0xc4) == 0) {
            iVar6 = 0x14;
        }
        else {
            uVar12 = 0;
            iVar6 = *(iVar11 + 0xb0) + 8;
            do {
                puVar5 = puVar3 + uVar12 * 8;
                __memcpy_fromio(puVar5,iVar6,0x20);
                *(puVar5 + 2) = 0xdeaddead;
                *(puVar5 + 4) = 0xdeaddead;
                iVar6 = iVar6 + 0x10;
                uVar8 = *(iVar11 + 0xc4);
                uVar12 = uVar12 + 1;
            } while (uVar12 < uVar8);
            iVar6 = 0x14;
            if ((obj.ddr_freq_update != 0x0) && (4 < uVar8)) {
                iVar6 = 0x14;
                uVar12 = 4;
                do {
                    if (puVar3[uVar12 * 8 + 1] == 0) {
                        _printk(0x80004df);
                        uVar8 = *(iVar11 + 0xc4);
                        iVar6 = 4;
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 < uVar8);
            }
        }
        iVar6 = iVar6 << 5;
        noname_1 = __check_object_size(puVar3,iVar6,1);
    }
    else {
        if (bVar7) {
            noname_1 = __memcpy_fromio(puVar3,*(*(iVar11 + 0xb8) + iVar6 * 8),0x20);
            if (*(puVar3 + 4) < *(puVar3 + 2)) {
code_r0x08001b14:
                InstructionSynchronizationBarrier();
                iVar6 = cntvct_el0;
                *(puVar3 + 6) = (iVar6 - *(puVar3 + 2)) + *(puVar3 + 6);
            }
        }
        else {
            puVar5 = qcom_smem_get(uVar4,iVar6,0);
            if (0xfffffffffffff000 < puVar5) {
                iVar2 = -0x13;
                goto code_r0x08001be8;
            }
            *puVar3 = *puVar5;
            puVar3[1] = puVar5[1];
            uVar9 = *(puVar5 + 2);
            *(puVar3 + 2) = uVar9;
            uVar10 = *(puVar5 + 4);
            *(puVar3 + 4) = uVar10;
            *(puVar3 + 6) = *(puVar5 + 6);
            noname_1 = extraout_q0;
            if (uVar10 < uVar9) goto code_r0x08001b14;
        }
        iVar6 = 0x20;
    }
    iVar2 = sym._copy_to_user(param_3,noname_1,iVar6);
    kfree(puVar3);
    mutex_unlock(obj.sleep_stats_mutex);
code_r0x08001c00:
    return iVar2;
}


// ===== sym.stats_data_open.f6732d5524d2c1936030ae613af68a63.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.stats_data_open.f6732d5524d2c1936030ae613af68a63.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    
    if (param_1 != 0) {
        uVar1 = 0xffffffea;
        if ((param_2 != 0) && (*(param_1 + 0x2b0) != 0)) {
            uVar1 = 0;
            *(param_2 + 0xd8) = *(param_1 + 0x2b0) + -0x18;
        }
        return uVar1;
    }
    return 0xffffffea;
}


// ===== sym.subsystem_stats_remove.f6732d5524d2c1936030ae613af68a63.cfi_jt @ 0x080011d0 (size 8) =====

ulong sym.subsystem_stats_remove.f6732d5524d2c1936030ae613af68a63.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0xa8);
    if (puVar1 != NULL) {
        device_destroy(*(puVar1 + 2),*puVar1);
        class_destroy(*(puVar1 + 2));
        cdev_del(puVar1 + 6);
        unregister_chrdev_region(*puVar1,1);
        subsystem_sleep_stats_dbg_unregister();
    }
    return 0;
}


// ===== sym.subsystem_stats_probe.f6732d5524d2c1936030ae613af68a63.cfi_jt @ 0x080011d8 (size 8) =====

uint64_t sym.subsystem_stats_probe.f6732d5524d2c1936030ae613af68a63.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint *puVar2;
    int iVar3;
    uint32_t uVar4;
    uint *puVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    uint64_t *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong *in_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = param_1 + 0x10;
    puVar5 = devm_kmalloc(iVar11,200,0xdc0);
    if (puVar5 == NULL) {
        uVar13 = 0xfffffff4;
        goto code_r0x08001778;
    }
    uVar6 = alloc_chrdev_region(puVar5,0,1,"stats");
    uVar13 = uVar6 & 0xffffffff;
    if (uVar6 != 0) goto code_r0x08001778;
    puVar2 = puVar5 + 6;
    cdev_init(puVar2,obj.stats_data_fops);
    uVar6 = cdev_add(puVar2,*puVar5,1);
    uVar13 = uVar6 & 0xffffffff;
    if (uVar6 == 0) {
        uVar6 = __class_create(obj.__this_module,"stats",obj.subsystem_stats_probe.__key);
        uVar13 = 0xffffffea;
        *(puVar5 + 2) = uVar6;
        if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
            uVar6 = device_create(uVar6,0,*puVar5,0,"stats");
            uVar13 = 0xffffffea;
            *(puVar5 + 4) = uVar6;
            if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
                puVar7 = device_get_match_data(iVar11);
                if (puVar7 == NULL) {
                    uVar13 = 0xffffffed;
                }
                else {
                    puVar8 = platform_get_resource(param_1,0x200,0);
                    if (puVar8 == NULL) {
                        uVar13 = 0;
                    }
                    else {
                        uVar13 = devm_ioremap(iVar11,*puVar8 + *puVar7,4);
                        if (uVar13 < 0xfffffffffffff001) {
                            uVar6 = *puVar8;
                            uVar13 = sym.readl_relaxed(uVar13);
                            iVar10 = (puVar8[1] - *puVar8) + 1;
                            iVar9 = devm_ioremap(iVar11,uVar6 | uVar13 & 0xffffffff,iVar10);
                            *(puVar5 + 0x2a) = iVar9;
                            if (iVar9 != 0) {
                                iVar9 = devm_kmalloc(iVar11,puVar7[2] << 3,0xdc0);
                                *(puVar5 + 0x28) = iVar9;
                                if (iVar9 != 0) {
                                    iVar9 = devm_kmalloc(iVar11,puVar7[2] << 3,0xdc0);
                                    *(puVar5 + 0x2e) = iVar9;
                                    if (iVar9 != 0) {
                                        if (puVar7[2] != 0) {
                                            uVar4 = 0;
                                            uVar13 = 0;
                                            do {
                                                uVar12 = -(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
                                                uVar1 = uVar13 + 1;
                                                uVar13 = uVar1;
                                                *(*(puVar5 + 0x28) + uVar12) = puVar7;
                                                uVar6 = uVar4;
                                                uVar4 = uVar4 + 0x20;
                                                *(*(puVar5 + 0x2e) + uVar12) = *(puVar5 + 0x2a) + uVar6;
                                            } while (uVar1 < puVar7[2]);
                                        }
                                        uVar13 = devm_ioremap(iVar11,*puVar8 + puVar7[1],4);
                                        if (0xfffffffffffff000 < uVar13) {
                                            uVar13 = uVar13 & 0xffffffff;
                                            goto code_r0x08001750;
                                        }
                                        uVar6 = *puVar8;
                                        uVar13 = sym.readl_relaxed(uVar13);
                                        iVar10 = devm_ioremap(iVar11,uVar6 | uVar13 & 0xffffffff,iVar10);
                                        *(puVar5 + 0x2c) = iVar10;
                                        if (iVar10 != 0) {
                                            iVar3 = sym.readl_relaxed(iVar10);
                                            puVar5[0x30] = iVar3;
                                            if (iVar3 == -0x5eea858b) {
                                                uVar4 = sym.readl_relaxed(*(puVar5 + 0x2c) + 4);
                                                puVar5[0x31] = uVar4;
                                                if (uVar4 < 0x15) {
                                                    obj.subsystem_stats_debug_on = 0x1;
                                                    _segment.ehdr = devm_kmalloc(iVar11,0x120,0xdc0);
                                                    if (_segment.ehdr != 0) {
                                                        _segment.ehdr = devm_kmalloc(iVar11,0x120,0xdc0);
                                                        if (_segment.ehdr != 0) {
                                                            _segment.ehdr = devm_kmalloc(iVar11,0x60,0xdc0);
                                                            if (_segment.ehdr != 0) {
                                                                _segment.ehdr = devm_kmalloc(iVar11,0x60,0xdc0);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar11 = of_find_property(*(param_1 + 0x300),
                                                                                              "ddr-freq-update",0);
                                                                    obj.ddr_freq_update = iVar11 != 0;
                                                                    *(param_1 + 0xa8) = puVar5;
                                                                    subsystem_sleep_stats_dbg_register(puVar5);
                                                                    uVar13 = 0;
                                                                    goto code_r0x08001778;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    goto code_r0x0800174c;
                                                }
                                            }
                                            uVar13 = 0xffffffea;
                                            goto code_r0x08001750;
                                        }
                                    }
                                }
                            }
code_r0x0800174c:
                            uVar13 = 0xfffffff4;
                        }
                    }
                }
code_r0x08001750:
                device_destroy(*(puVar5 + 2),*puVar5);
            }
            class_destroy(*(puVar5 + 2));
        }
        cdev_del(puVar2);
    }
    unregister_chrdev_region(*puVar5,1);
code_r0x08001778:
    return uVar13 & 0xffffffff;
}


// ===== sym.subsytem_stats_suspend.f6732d5524d2c1936030ae613af68a63.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.subsytem_stats_suspend.f6732d5524d2c1936030ae613af68a63.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    ulong *puVar2;
    code *pcVar3;
    uint *puVar4;
    int64_t iVar5;
    code cVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    code *pcVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x98);
    _printk(0x8000533);
    if (obj.subsystem_stats_debug_on != 0x0) {
        mutex_lock(obj.sleep_stats_mutex);
        pcVar9 = obj.a_subsystem_stats;
        iVar10 = 0x18;
        iVar11 = _segment.ehdr;
        do {
            if (*(pcVar9 + -4) == -2) {
                __memcpy_fromio(iVar11 + iVar10 + -0x18,*(*(iVar8 + 0xb8) + *(pcVar9 + -8) * 8),0x20);
                cVar6 = 0x0;
            }
            else {
                puVar4 = qcom_smem_get(*(pcVar9 + -4),*(pcVar9 + -8),0);
                if (puVar4 < 0xfffffffffffff001) {
                    puVar2 = iVar11 + iVar10;
                    *(puVar2 + -3) = *puVar4;
                    *(puVar2 + -0x14) = puVar4[1];
                    puVar2[-2] = *(puVar4 + 2);
                    puVar2[-1] = *(puVar4 + 4);
                    cVar6 = 0x0;
                    *puVar2 = *(puVar4 + 6);
                }
                else {
                    cVar6 = 0x1;
                }
            }
            iVar11 = _segment.ehdr;
            *pcVar9 = cVar6;
            pcVar3 = _devm_kmalloc;
            piVar1 = iVar11 + iVar10;
            if (piVar1 != 0x18) {
                iVar7 = *piVar1;
                if (piVar1[-1] < piVar1[-2]) {
                    __cfi_slowpath_diag(0x19e9081ee75ef79b,_devm_kmalloc,0x8000350);
                    iVar5 = (*pcVar3)();
                    iVar7 = (iVar5 + iVar7) - piVar1[-2];
                }
                _printk(0x8000457,*(pcVar9 + -0x10),*(iVar11 + iVar10 + -0x14),iVar7);
                iVar11 = _segment.ehdr;
            }
            iVar10 = iVar10 + 0x20;
            pcVar9 = pcVar9 + 0x18;
        } while (iVar10 != 0x138);
        __memcpy_fromio(_segment.ehdr,**(iVar8 + 0xb8),0x20);
        if (_segment.ehdr != 0) {
            _printk(0x8000457,"aosd",*(_segment.ehdr + 4),*(_segment.ehdr + 0x18));
        }
        __memcpy_fromio(_segment.ehdr + 0x20,*(*(iVar8 + 0xb8) + 8),0x20);
        if (_segment.ehdr != -0x20) {
            _printk(0x8000457,"cxsd",*(_segment.ehdr + 0x24),*(_segment.ehdr + 0x38));
        }
        __memcpy_fromio(_segment.ehdr + 0x40,*(*(iVar8 + 0xb8) + 0x10),0x20);
        if (_segment.ehdr != -0x40) {
            _printk(0x8000457,0x8000500,*(_segment.ehdr + 0x44),*(_segment.ehdr + 0x58));
        }
        mutex_unlock(obj.sleep_stats_mutex);
    }
    return 0;
}


// ===== sym.subsytem_stats_resume.f6732d5524d2c1936030ae613af68a63.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.subsytem_stats_resume.f6732d5524d2c1936030ae613af68a63.cfi_jt(int64_t param_1)

{
    uint *puVar1;
    int64_t iVar2;
    uint *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.subsystem_stats_debug_on != 0x0) {
        iVar4 = *(param_1 + 0x98);
        mutex_lock(obj.sleep_stats_mutex);
        iVar5 = 0;
        piVar6 = 0x800015c;
        do {
            iVar2 = _segment.ehdr;
            if (*piVar6 == -2) {
                __memcpy_fromio(_segment.ehdr + iVar5,*(*(iVar4 + 0xb8) + piVar6[-1] * 8),0x20);
            }
            else {
                puVar3 = qcom_smem_get(*piVar6,piVar6[-1],0);
                if (puVar3 < 0xfffffffffffff001) {
                    puVar1 = iVar2 + iVar5;
                    *puVar1 = *puVar3;
                    puVar1[1] = puVar3[1];
                    *(puVar1 + 2) = *(puVar3 + 2);
                    *(puVar1 + 4) = *(puVar3 + 4);
                    *(puVar1 + 6) = *(puVar3 + 6);
                }
            }
            iVar5 = iVar5 + 0x20;
            piVar6 = piVar6 + 6;
        } while (iVar5 != 0x120);
        __memcpy_fromio(_segment.ehdr,**(iVar4 + 0xb8),0x20);
        __memcpy_fromio(_segment.ehdr + 0x20,*(*(iVar4 + 0xb8) + 8),0x20);
        __memcpy_fromio(_segment.ehdr + 0x40,*(*(iVar4 + 0xb8) + 0x10),0x20);
        mutex_unlock(obj.sleep_stats_mutex);
    }
    return 0;
}


// ===== sym.ddr_stats_sleep_stat @ 0x080011f0 (size 140) =====

void sym.ddr_stats_sleep_stat(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xc4) != 0) {
        uVar3 = 0;
        iVar2 = *(arg1 + 0xb0) + 8;
        do {
            iVar1 = arg2 + uVar3 * 0x20;
            __memcpy_fromio(iVar1,iVar2,0x20);
            *(iVar1 + 8) = 0xdeaddead;
            *(iVar1 + 0x10) = 0xdeaddead;
            iVar2 = iVar2 + 0x10;
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(arg1 + 0xc4));
    }
    return;
}


// ===== sym.has_system_slept @ 0x0800127c (size 216) =====

bool sym.has_system_slept(void)

{
    int iVar1;
    int iVar2;
    bool bVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(_segment.ehdr + 4);
    iVar2 = *(_segment.ehdr + 4);
    if (iVar1 == iVar2) {
        _printk(0x8000510,"aosd");
    }
    bVar3 = *(_segment.ehdr + 0x24) == *(_segment.ehdr + 0x24);
    if (bVar3) {
        _printk(0x8000510,"cxsd");
    }
    bVar4 = *(_segment.ehdr + 0x44) == *(_segment.ehdr + 0x44);
    if (bVar4) {
        _printk(0x8000510,0x8000500);
    }
    return !bVar4 && (!bVar3 && iVar1 != iVar2);
}


// ===== sym.has_subsystem_slept @ 0x08001354 (size 184) =====

ulong sym.has_subsystem_slept(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    uVar2 = 1;
    pcVar4 = obj.a_subsystem_stats;
    do {
        if (((*pcVar4 == 0x0) && (iVar1 = _segment.ehdr + iVar3, *(_segment.ehdr + iVar3 + 4) == *(iVar1 + 4))) &&
           (*(iVar1 + 8) < *(iVar1 + 0x10))) {
            _printk(0x8000484,*(pcVar4 + -0x10));
            uVar2 = 0;
        }
        iVar3 = iVar3 + 0x20;
        pcVar4 = pcVar4 + 0x18;
    } while (iVar3 != 0x120);
    return uVar2;
}


// ===== sym.subsystem_sleep_debug_enable @ 0x0800140c (size 20) =====

void sym.subsystem_sleep_debug_enable(int64_t arg1)

{
    obj.subsystem_stats_debug_on = SUB81(arg1,0);
    return;
}


// ===== sym.subsystem_stats_probe @ 0x08001420 (size 892) =====

uint64_t sym.subsystem_stats_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint *puVar2;
    int iVar3;
    uint32_t uVar4;
    uint *puVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    uint64_t *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong *in_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = arg1 + 0x10;
    puVar5 = devm_kmalloc(iVar11,200,0xdc0);
    if (puVar5 == NULL) {
        uVar13 = 0xfffffff4;
        goto code_r0x08001778;
    }
    uVar6 = alloc_chrdev_region(puVar5,0,1,"stats");
    uVar13 = uVar6 & 0xffffffff;
    if (uVar6 != 0) goto code_r0x08001778;
    puVar2 = puVar5 + 6;
    cdev_init(puVar2,obj.stats_data_fops);
    uVar6 = cdev_add(puVar2,*puVar5,1);
    uVar13 = uVar6 & 0xffffffff;
    if (uVar6 == 0) {
        uVar6 = __class_create(obj.__this_module,"stats",obj.subsystem_stats_probe.__key);
        uVar13 = 0xffffffea;
        *(puVar5 + 2) = uVar6;
        if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
            uVar6 = device_create(uVar6,0,*puVar5,0,"stats");
            uVar13 = 0xffffffea;
            *(puVar5 + 4) = uVar6;
            if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
                puVar7 = device_get_match_data(iVar11);
                if (puVar7 == NULL) {
                    uVar13 = 0xffffffed;
                }
                else {
                    puVar8 = platform_get_resource(arg1,0x200,0);
                    if (puVar8 == NULL) {
                        uVar13 = 0;
                    }
                    else {
                        uVar13 = devm_ioremap(iVar11,*puVar8 + *puVar7,4);
                        if (uVar13 < 0xfffffffffffff001) {
                            uVar6 = *puVar8;
                            uVar13 = sym.readl_relaxed(uVar13);
                            iVar10 = (puVar8[1] - *puVar8) + 1;
                            iVar9 = devm_ioremap(iVar11,uVar6 | uVar13 & 0xffffffff,iVar10);
                            *(puVar5 + 0x2a) = iVar9;
                            if (iVar9 != 0) {
                                iVar9 = devm_kmalloc(iVar11,puVar7[2] << 3,0xdc0);
                                *(puVar5 + 0x28) = iVar9;
                                if (iVar9 != 0) {
                                    iVar9 = devm_kmalloc(iVar11,puVar7[2] << 3,0xdc0);
                                    *(puVar5 + 0x2e) = iVar9;
                                    if (iVar9 != 0) {
                                        if (puVar7[2] != 0) {
                                            uVar4 = 0;
                                            uVar13 = 0;
                                            do {
                                                uVar12 = -(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
                                                uVar1 = uVar13 + 1;
                                                uVar13 = uVar1;
                                                *(*(puVar5 + 0x28) + uVar12) = puVar7;
                                                uVar6 = uVar4;
                                                uVar4 = uVar4 + 0x20;
                                                *(*(puVar5 + 0x2e) + uVar12) = *(puVar5 + 0x2a) + uVar6;
                                            } while (uVar1 < puVar7[2]);
                                        }
                                        uVar13 = devm_ioremap(iVar11,*puVar8 + puVar7[1],4);
                                        if (0xfffffffffffff000 < uVar13) {
                                            uVar13 = uVar13 & 0xffffffff;
                                            goto code_r0x08001750;
                                        }
                                        uVar6 = *puVar8;
                                        uVar13 = sym.readl_relaxed(uVar13);
                                        iVar10 = devm_ioremap(iVar11,uVar6 | uVar13 & 0xffffffff,iVar10);
                                        *(puVar5 + 0x2c) = iVar10;
                                        if (iVar10 != 0) {
                                            iVar3 = sym.readl_relaxed(iVar10);
                                            puVar5[0x30] = iVar3;
                                            if (iVar3 == -0x5eea858b) {
                                                uVar4 = sym.readl_relaxed(*(puVar5 + 0x2c) + 4);
                                                puVar5[0x31] = uVar4;
                                                if (uVar4 < 0x15) {
                                                    obj.subsystem_stats_debug_on = 0x1;
                                                    _segment.ehdr = devm_kmalloc(iVar11,0x120,0xdc0);
                                                    if (_segment.ehdr != 0) {
                                                        _segment.ehdr = devm_kmalloc(iVar11,0x120,0xdc0);
                                                        if (_segment.ehdr != 0) {
                                                            _segment.ehdr = devm_kmalloc(iVar11,0x60,0xdc0);
                                                            if (_segment.ehdr != 0) {
                                                                _segment.ehdr = devm_kmalloc(iVar11,0x60,0xdc0);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar11 = of_find_property(*(arg1 + 0x300),
                                                                                              "ddr-freq-update",0);
                                                                    obj.ddr_freq_update = iVar11 != 0;
                                                                    *(arg1 + 0xa8) = puVar5;
                                                                    subsystem_sleep_stats_dbg_register(puVar5);
                                                                    uVar13 = 0;
                                                                    goto code_r0x08001778;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    goto code_r0x0800174c;
                                                }
                                            }
                                            uVar13 = 0xffffffea;
                                            goto code_r0x08001750;
                                        }
                                    }
                                }
                            }
code_r0x0800174c:
                            uVar13 = 0xfffffff4;
                        }
                    }
                }
code_r0x08001750:
                device_destroy(*(puVar5 + 2),*puVar5);
            }
            class_destroy(*(puVar5 + 2));
        }
        cdev_del(puVar2);
    }
    unregister_chrdev_region(*puVar5,1);
code_r0x08001778:
    return uVar13 & 0xffffffff;
}


// ===== sym.subsystem_stats_remove @ 0x0800179c (size 96) =====

ulong sym.subsystem_stats_remove(int64_t arg1)

{
    ulong *in_x18;
    uint *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xa8);
    if (puVar1 != NULL) {
        device_destroy(*(puVar1 + 2),*puVar1);
        class_destroy(*(puVar1 + 2));
        cdev_del(puVar1 + 6);
        unregister_chrdev_region(*puVar1,1);
        subsystem_sleep_stats_dbg_unregister();
    }
    return 0;
}


// ===== sym.readl_relaxed @ 0x080017fc (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001800);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001834);
    return uVar1;
}


// ===== sym.stats_data_ioctl @ 0x0800186c (size 968) =====

int64_t sym.stats_data_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uint *puVar3;
    ulong uVar4;
    uint *puVar5;
    int64_t iVar6;
    bool bVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 0xd8);
    iVar2 = arg2;
    mutex_lock(obj.sleep_stats_mutex);
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    pcVar1 = 0x80080a8;
    if (iVar2 != -0x7ff762f3) {
        pcVar1 = kmalloc_caches + iVar6;
    }
    uVar4 = 0x280;
    if (iVar2 != -0x7ff762f3) {
        uVar4 = 0x20;
    }
    puVar3 = kmem_cache_alloc_trace(*pcVar1,0xdc0,uVar4);
    if (puVar3 == NULL) {
        iVar2 = -0xc;
        goto code_r0x08001bf0;
    }
    if (0xd < iVar2 + 0x7ff76300U) {
        _printk(0x800043c);
        iVar2 = -0x16;
        goto code_r0x08001be8;
    }
    bVar7 = false;
    iVar6 = 0x277;
    uVar4 = 0xffffffff;
    //switch table (14 cases) at 0x8000370
    switch(*((iVar2 + 0x7ff76300U) * 4 + 0x8000370) + 0x8001924) {
    case 0x8001938:
        bVar7 = false;
        iVar6 = 0x25d;
        uVar4 = 1;
        break;
    case 0x8001954:
        bVar7 = false;
        iVar6 = 0x25e;
        uVar4 = 2;
        break;
    case 0x8001968:
        bVar7 = false;
        iVar6 = 0x265;
        uVar4 = 2;
        break;
    case 0x800197c:
        bVar7 = false;
        iVar6 = 0x25f;
        uVar4 = 5;
        break;
    case 0x8001990:
        bVar7 = false;
        iVar6 = 0x260;
        uVar4 = 3;
        break;
    case 0x80019a4:
        bVar7 = false;
        uVar4 = 0;
        iVar6 = 0x261;
        break;
    case 0x80019b8:
        bVar7 = false;
        uVar4 = 0;
        iVar6 = 0x262;
        break;
    case 0x80019cc:
        bVar7 = false;
        iVar6 = 0x265;
        uVar4 = 3;
        break;
    case 0x80019e0:
        iVar6 = 0;
        goto code_r0x08001a10;
    case 0x80019ec:
        bVar7 = true;
        uVar4 = 0xfffffffe;
        iVar6 = 1;
        break;
    case 0x8001a00:
        iVar6 = 2;
        goto code_r0x08001a10;
    case 0x8001a0c:
        iVar6 = 3;
code_r0x08001a10:
        uVar4 = 0xfffffffe;
        bVar7 = true;
    }
    if (iVar2 == -0x7ff762f3) {
        if (obj.ddr_freq_update != 0x0) {
            iVar2 = ddr_stats_freq_sync_send_msg();
            if (iVar2 < 0) {
code_r0x08001be8:
                kfree(puVar3);
code_r0x08001bf0:
                mutex_unlock(obj.sleep_stats_mutex);
                goto code_r0x08001c00;
            }
            __const_udelay(0x20c4ac);
        }
        if (*(iVar11 + 0xc4) == 0) {
            iVar6 = 0x14;
        }
        else {
            uVar12 = 0;
            iVar6 = *(iVar11 + 0xb0) + 8;
            do {
                puVar5 = puVar3 + uVar12 * 8;
                __memcpy_fromio(puVar5,iVar6,0x20);
                *(puVar5 + 2) = 0xdeaddead;
                *(puVar5 + 4) = 0xdeaddead;
                iVar6 = iVar6 + 0x10;
                uVar8 = *(iVar11 + 0xc4);
                uVar12 = uVar12 + 1;
            } while (uVar12 < uVar8);
            iVar6 = 0x14;
            if ((obj.ddr_freq_update != 0x0) && (4 < uVar8)) {
                iVar6 = 0x14;
                uVar12 = 4;
                do {
                    if (puVar3[uVar12 * 8 + 1] == 0) {
                        _printk(0x80004df);
                        uVar8 = *(iVar11 + 0xc4);
                        iVar6 = 4;
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 < uVar8);
            }
        }
        iVar6 = iVar6 << 5;
        noname_1 = __check_object_size(puVar3,iVar6,1);
    }
    else {
        if (bVar7) {
            noname_1 = __memcpy_fromio(puVar3,*(*(iVar11 + 0xb8) + iVar6 * 8),0x20);
            if (*(puVar3 + 4) < *(puVar3 + 2)) {
code_r0x08001b14:
                InstructionSynchronizationBarrier();
                iVar6 = cntvct_el0;
                *(puVar3 + 6) = (iVar6 - *(puVar3 + 2)) + *(puVar3 + 6);
            }
        }
        else {
            puVar5 = qcom_smem_get(uVar4,iVar6,0);
            if (0xfffffffffffff000 < puVar5) {
                iVar2 = -0x13;
                goto code_r0x08001be8;
            }
            *puVar3 = *puVar5;
            puVar3[1] = puVar5[1];
            uVar9 = *(puVar5 + 2);
            *(puVar3 + 2) = uVar9;
            uVar10 = *(puVar5 + 4);
            *(puVar3 + 4) = uVar10;
            *(puVar3 + 6) = *(puVar5 + 6);
            noname_1 = extraout_q0;
            if (uVar10 < uVar9) goto code_r0x08001b14;
        }
        iVar6 = 0x20;
    }
    iVar2 = sym._copy_to_user(arg3,noname_1,iVar6);
    kfree(puVar3);
    mutex_unlock(obj.sleep_stats_mutex);
code_r0x08001c00:
    return iVar2;
}


// ===== sym.stats_data_open @ 0x08001c34 (size 60) =====

ulong sym.stats_data_open(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    if (arg1 != 0) {
        uVar1 = 0xffffffea;
        if ((arg2 != 0) && (*(arg1 + 0x2b0) != 0)) {
            uVar1 = 0;
            *(arg2 + 0xd8) = *(arg1 + 0x2b0) + -0x18;
        }
        return uVar1;
    }
    return 0xffffffea;
}


// ===== sym._copy_to_user @ 0x08001c70 (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((___memcpy_fromio >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((___memcpy_fromio >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym.subsytem_stats_suspend @ 0x08001de4 (size 628) =====

ulong sym.subsytem_stats_suspend(int64_t arg1)

{
    int64_t *piVar1;
    ulong *puVar2;
    code *pcVar3;
    uint *puVar4;
    int64_t iVar5;
    code cVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    code *pcVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x98);
    _printk(0x8000533);
    if (obj.subsystem_stats_debug_on != 0x0) {
        mutex_lock(obj.sleep_stats_mutex);
        pcVar9 = obj.a_subsystem_stats;
        iVar10 = 0x18;
        iVar11 = _segment.ehdr;
        do {
            if (*(pcVar9 + -4) == -2) {
                __memcpy_fromio(iVar11 + iVar10 + -0x18,*(*(iVar8 + 0xb8) + *(pcVar9 + -8) * 8),0x20);
                cVar6 = 0x0;
            }
            else {
                puVar4 = qcom_smem_get(*(pcVar9 + -4),*(pcVar9 + -8),0);
                if (puVar4 < 0xfffffffffffff001) {
                    puVar2 = iVar11 + iVar10;
                    *(puVar2 + -3) = *puVar4;
                    *(puVar2 + -0x14) = puVar4[1];
                    puVar2[-2] = *(puVar4 + 2);
                    puVar2[-1] = *(puVar4 + 4);
                    cVar6 = 0x0;
                    *puVar2 = *(puVar4 + 6);
                }
                else {
                    cVar6 = 0x1;
                }
            }
            iVar11 = _segment.ehdr;
            *pcVar9 = cVar6;
            pcVar3 = _devm_kmalloc;
            piVar1 = iVar11 + iVar10;
            if (piVar1 != 0x18) {
                iVar7 = *piVar1;
                if (piVar1[-1] < piVar1[-2]) {
                    __cfi_slowpath_diag(0x19e9081ee75ef79b,_devm_kmalloc,0x8000350);
                    iVar5 = (*pcVar3)();
                    iVar7 = (iVar5 + iVar7) - piVar1[-2];
                }
                _printk(0x8000457,*(pcVar9 + -0x10),*(iVar11 + iVar10 + -0x14),iVar7);
                iVar11 = _segment.ehdr;
            }
            iVar10 = iVar10 + 0x20;
            pcVar9 = pcVar9 + 0x18;
        } while (iVar10 != 0x138);
        __memcpy_fromio(_segment.ehdr,**(iVar8 + 0xb8),0x20);
        if (_segment.ehdr != 0) {
            _printk(0x8000457,"aosd",*(_segment.ehdr + 4),*(_segment.ehdr + 0x18));
        }
        __memcpy_fromio(_segment.ehdr + 0x20,*(*(iVar8 + 0xb8) + 8),0x20);
        if (_segment.ehdr != -0x20) {
            _printk(0x8000457,"cxsd",*(_segment.ehdr + 0x24),*(_segment.ehdr + 0x38));
        }
        __memcpy_fromio(_segment.ehdr + 0x40,*(*(iVar8 + 0xb8) + 0x10),0x20);
        if (_segment.ehdr != -0x40) {
            _printk(0x8000457,0x8000500,*(_segment.ehdr + 0x44),*(_segment.ehdr + 0x58));
        }
        mutex_unlock(obj.sleep_stats_mutex);
    }
    return 0;
}


// ===== sym.subsytem_stats_resume @ 0x08002058 (size 308) =====

ulong sym.subsytem_stats_resume(int64_t arg1)

{
    uint *puVar1;
    int64_t iVar2;
    uint *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.subsystem_stats_debug_on != 0x0) {
        iVar4 = *(arg1 + 0x98);
        mutex_lock(obj.sleep_stats_mutex);
        iVar5 = 0;
        piVar6 = 0x800015c;
        do {
            iVar2 = _segment.ehdr;
            if (*piVar6 == -2) {
                __memcpy_fromio(_segment.ehdr + iVar5,*(*(iVar4 + 0xb8) + piVar6[-1] * 8),0x20);
            }
            else {
                puVar3 = qcom_smem_get(*piVar6,piVar6[-1],0);
                if (puVar3 < 0xfffffffffffff001) {
                    puVar1 = iVar2 + iVar5;
                    *puVar1 = *puVar3;
                    puVar1[1] = puVar3[1];
                    *(puVar1 + 2) = *(puVar3 + 2);
                    *(puVar1 + 4) = *(puVar3 + 4);
                    *(puVar1 + 6) = *(puVar3 + 6);
                }
            }
            iVar5 = iVar5 + 0x20;
            piVar6 = piVar6 + 6;
        } while (iVar5 != 0x120);
        __memcpy_fromio(_segment.ehdr,**(iVar4 + 0xb8),0x20);
        __memcpy_fromio(_segment.ehdr + 0x20,*(*(iVar4 + 0xb8) + 8),0x20);
        __memcpy_fromio(_segment.ehdr + 0x40,*(*(iVar4 + 0xb8) + 0x10),0x20);
        mutex_unlock(obj.sleep_stats_mutex);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x0800218c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080021d0

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
    //switch table (4 cases) at 0x80003a8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80021e4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002238 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.subsystem_stats_probe.f6732d5524d2c1936030ae613af68a63.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800226c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.subsystem_stats_probe.f6732d5524d2c1936030ae613af68a63.cfi_jt);
    return;
}

