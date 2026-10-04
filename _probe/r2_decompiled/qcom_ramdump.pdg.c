// decompiled from qcom_ramdump by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 344) =====

//WARNING: Switch with 1 destination removed at 0x08001bb0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1ea690b50ea8fa3f) {
        if (arg1 == -0x71d1a8d33704b7fd) {
            pcVar2 = sym.qcom_dump.cfi_jt;
        }
        else if (arg1 == -0x1479c2ae8c39b702) {
            pcVar2 = sym.qcom_elf_dump.cfi_jt;
        }
        else {
            if (arg1 != 0x1c2e0afdc1076aac) goto code_r0x08001b70;
            pcVar2 = sym.qcom_fw_elf_dump.cfi_jt;
        }
    }
    else if (arg1 < 0x72f54fd1837de4b2) {
        if (arg1 != 0x1ea690b50ea8fa3f) {
            if ((arg1 == 0x4c550309df1cf4c1) && ((pcVar1 + -0x8001178 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x08001b70;
        }
        pcVar2 = sym.qcom_devcd_readv.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt;
    }
    else if (arg1 == 0x72f54fd1837de4b2) {
        pcVar2 = sym.qcom_create_ramdump_device.cfi_jt;
    }
    else {
        if (arg1 != 0x741b966c574d47b1) goto code_r0x08001b70;
        pcVar2 = sym.dump_enabled.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001b70:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001bc4);
    (*pcVar1)();
}


// ===== sym.dump_enabled.cfi_jt @ 0x08001160 (size 8) =====

bool sym.dump_enabled.cfi_jt(void)

{
    return _segment.ehdr != 0;
}


// ===== sym.qcom_elf_dump.cfi_jt @ 0x08001168 (size 8) =====

uint64_t sym.qcom_elf_dump.cfi_jt(int64_t *param_1,ulong param_2,uint32_t param_3)

{
    int64_t *piVar1;
    int64_t ******ppppppiVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint *puVar7;
    uint64_t uVar8;
    int64_t *******pppppppiVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x19;
    ulong *unaff_x20;
    int64_t *unaff_x21;
    ulong *unaff_x22;
    uint *unaff_x23;
    int64_t unaff_x24;
    ulong *unaff_x25;
    uint32_t *puVar14;
    int64_t *unaff_x26;
    int64_t *unaff_x27;
    ulong *unaff_x28;
    ulong unaff_x30;
    uchar auVar15 [16];
    int64_t ******ppppppiStack_118;
    int64_t ******ppppppiStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    ulong uStack_f8;
    ulong *puStack_f0;
    int64_t *piStack_e8;
    int64_t *piStack_e0;
    ulong *puStack_d8;
    int64_t iStack_d0;
    uint *puStack_c8;
    ulong *puStack_c0;
    int64_t *piStack_b8;
    ulong *puStack_b0;
    uint64_t uStack_a8;
    ulong uStack_98;
    uint *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    piStack_b8 = unaff_x21;
    uStack_98 = param_2;
    if ((param_1 == NULL) || (piStack_b8 = param_1, *param_1 == param_1)) {
        uVar8 = 0xffffffea;
    }
    else {
        bVar3 = (param_3 & 0xff) != 1;
        piVar12 = *param_1;
        unaff_x20 = param_3;
        unaff_x25 = 0x34;
        if (bVar3) {
            unaff_x25 = 0x40;
        }
        iVar13 = 0x20;
        if (bVar3) {
            iVar13 = 0x38;
        }
        unaff_x22 = unaff_x25;
        if (piVar12 == param_1) {
            unaff_x19 = 0;
        }
        else {
            unaff_x19 = 0;
            do {
                piVar1 = piVar12 + 4;
                piVar12 = *piVar12;
                unaff_x19 = unaff_x19 + 1;
                unaff_x22 = unaff_x22 + *piVar1 + iVar13;
            } while (piVar12 != param_1);
        }
        puVar7 = vmalloc(unaff_x22);
        if (puVar7 == NULL) {
            uVar8 = 0xfffffff4;
        }
        else {
            memset(puVar7,0,unaff_x25);
            *(puVar7 + 1) = param_3;
            *(puVar7 + 5) = 0x101;
            *puVar7 = 0x464c457f;
            *(puVar7 + 7) = 0;
            iVar5 = unaff_x19;
            if ((param_3 & 0xff) == 1) {
                *(puVar7 + 4) = 0x100000004;
                unaff_x24 = 0x20;
                *(puVar7 + 0xb) = unaff_x19;
                puVar7[7] = 0x34;
                puVar7[10] = 0x200034;
            }
            else {
                unaff_x24 = 0x38;
                *(puVar7 + 4) = 0x100000004;
                *(puVar7 + 8) = 0x40;
                puVar7[0xd] = 0x380040;
                *(puVar7 + 0xe) = unaff_x19;
            }
            unaff_x27 = *param_1;
            if (unaff_x27 != param_1) {
                unaff_x19 = 7;
                unaff_x28 = unaff_x25 + unaff_x24 * iVar5;
                unaff_x25 = unaff_x25 + puVar7 + 0x30;
                do {
                    unaff_x26 = param_3 & 0xff;
                    memset(unaff_x25 + -6,0,unaff_x24);
                    if ((param_3 & 0xff) == 1) {
                        *(unaff_x25 + -6) = 1;
                        *(unaff_x25 + -0x2c) = unaff_x28;
                        *(unaff_x25 + -5) = unaff_x27[2];
                        *(unaff_x25 + -0x24) = unaff_x27[2];
                        *(unaff_x25 + -4) = unaff_x27[4];
                        iVar13 = unaff_x27[4];
                        unaff_x25[-3] = 7;
                        *(unaff_x25 + -0x1c) = iVar13;
                        iVar13 = unaff_x27[3];
                        if (iVar13 == 0) goto code_r0x080015c0;
code_r0x0800154c:
                        memcpy(puVar7 + unaff_x28,iVar13,unaff_x27[4]);
                    }
                    else {
                        *(unaff_x25 + -6) = 1;
                        unaff_x25[-5] = unaff_x28;
                        unaff_x25[-4] = unaff_x27[2];
                        unaff_x25[-3] = unaff_x27[2];
                        unaff_x25[-2] = unaff_x27[4];
                        iVar13 = unaff_x27[4];
                        *(unaff_x25 + -0x2c) = 7;
                        unaff_x25[-1] = iVar13;
                        *unaff_x25 = 0;
                        iVar13 = unaff_x27[3];
                        if (iVar13 != 0) goto code_r0x0800154c;
code_r0x080015c0:
                        unaff_x26 = unaff_x27 + 2;
                        iVar13 = devm_ioremap(uStack_98,*unaff_x26,unaff_x27[4]);
                        if (iVar13 == 0) {
                            _dev_err(uStack_98,"invalid coredump segment (%pad, %zu)\n",unaff_x26,unaff_x27[4]);
                            memset(puVar7 + unaff_x28,0xff,unaff_x27[4]);
                        }
                        else {
                            __memcpy_fromio(puVar7 + unaff_x28,iVar13,unaff_x27[4]);
                        }
                    }
                    piVar12 = unaff_x27 + 4;
                    unaff_x25 = unaff_x25 + unaff_x24;
                    unaff_x27 = *unaff_x27;
                    unaff_x28 = *piVar12 + unaff_x28;
                } while (unaff_x27 != param_1);
            }
            uStack_78 = 0;
            uStack_70 = 0;
            unaff_x20 = &uStack_88;
            uStack_88 = 0;
            uStack_80 = 0;
            puStack_90 = puVar7;
            __init_swait_queue_head(&uStack_80,"&x->wait",obj.init_completion.__key);
            dev_coredumpm(uStack_98,0,&puStack_90,unaff_x22,0xcc0,
                          sym.qcom_devcd_readv.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt,
                          sym.qcom_devcd_freev.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt);
            wait_for_completion(unaff_x20);
            uVar4 = completion_done(unaff_x20);
            uVar8 = ~uVar4 & 1;
            unaff_x23 = puVar7;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    auVar15 = __stack_chk_fail(uVar8);
    *extraout_x18 = 0x80016c4;
    uStack_f8 = 0x80016c4;
    iVar13 = sp_el0;
    iStack_108 = *(iVar13 + 0x5e0);
    iVar13 = *(auVar15._0_8_ + 8);
    ppppppiStack_118 = &ppppppiStack_118;
    ppppppiStack_110 = &ppppppiStack_118;
    puStack_100 = &stack0xffffffffffffffa0;
    puStack_f0 = unaff_x28;
    piStack_e8 = unaff_x27;
    piStack_e0 = unaff_x26;
    puStack_d8 = unaff_x25;
    iStack_d0 = unaff_x24;
    puStack_c8 = unaff_x23;
    puStack_c0 = unaff_x22;
    puStack_b0 = unaff_x20;
    uStack_a8 = unaff_x19;
    if (*(iVar13 + 0x2c) != 0) {
        uVar8 = 0;
        puVar14 = iVar13 + 0x4c;
        do {
            if (((puVar14[-6] == 1) && ((*puVar14 & 0x7000000) != 0x2000000)) && (puVar14[-1] != 0)) {
                iVar11 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar11 = 0x30;
                }
                pppppppiVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x28);
                ppppppiVar2 = ppppppiStack_110;
                if (pppppppiVar9 == NULL) {
                    uVar8 = 0xfffffff4;
                    goto code_r0x080017e0;
                }
                pppppppiVar9[2] = puVar14[-3];
                pppppppiVar9[4] = puVar14[-1];
                uVar10 = __list_add_valid(pppppppiVar9,ppppppiStack_110,&ppppppiStack_118);
                if ((uVar10 & 1) != 0) {
                    *pppppppiVar9 = &ppppppiStack_118;
                    pppppppiVar9[1] = ppppppiVar2;
                    ppppppiStack_110 = pppppppiVar9;
                    *ppppppiVar2 = pppppppiVar9;
                }
            }
            uVar8 = uVar8 + 1;
            puVar14 = puVar14 + 8;
        } while (uVar8 < *(iVar13 + 0x2c));
    }
    sym.qcom_elf_dump(&ppppppiStack_118,auVar15._8_8_,1);
    uVar8 = 0;
code_r0x080017e0:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_108) {
        return uVar8;
    }
    auVar15 = __stack_chk_fail(uVar8);
    iVar13 = auVar15._0_8_;
    *extraout_x18_00 = sym.qcom_create_ramdump_device;
    if (iVar13 == 0) {
        _printk(0x80001a8,"qcom_create_ramdump_device");
        uVar8 = 0;
    }
    else {
        mutex_lock(obj.enable_dump_collection);
        if ((obj.ramdump_devnode_inited & 1) == 0) {
            _segment.ehdr = __class_create(obj.__this_module,"ramdump",obj.init_completion.__key);
            iVar5 = alloc_chrdev_region(obj.ramdump_dev,0,0x100,"ramdump");
            if (iVar5 != 0) {
                _printk(0x8000114,"ramdump_devnode_init");
                mutex_unlock(obj.enable_dump_collection);
                return iVar5;
            }
            obj.ramdump_devnode_inited = 0x1;
        }
        mutex_unlock(obj.enable_dump_collection);
        iVar11 = kmem_cache_alloc_trace(__printk,0xdc0,400);
        uVar8 = 0;
        if (iVar11 != 0) {
            uVar4 = ida_alloc_range(obj.rd_minor_id,0,0xff,0xcc0);
            if (uVar4 < 0) {
                _printk(0x80001db,"qcom_create_ramdump_device",uVar4);
                iVar5 = -0x13;
            }
            else {
                snprintf(iVar11,0x100,0x8000157,iVar13);
                uVar8 = device_create(_segment.ehdr,auVar15._8_8_,_segment.ehdr & 0xfff00000 | uVar4,iVar11,iVar11);
                *(iVar11 + 0x188) = uVar8;
                if (uVar8 < 0xfffffffffffff001) {
                    cdev_init(iVar11 + 0x100,0);
                    uVar6 = cdev_add(iVar11 + 0x100,_segment.ehdr & 0xfff00000 | uVar4,1);
                    if (uVar6 == 0) {
                        return *(iVar11 + 0x188);
                    }
                    uVar8 = uVar6;
                    _printk(0x8000134,"qcom_create_ramdump_device",iVar13,uVar8);
                    device_unregister(*(iVar11 + 0x188));
                }
                else {
                    _printk(0x800015a,"qcom_create_ramdump_device",iVar13,uVar8 & 0xffffffff);
                }
                iVar5 = uVar8;
                ida_free(obj.rd_minor_id,uVar4);
            }
            kfree(iVar11);
            uVar8 = iVar5;
        }
    }
    return uVar8;
}


// ===== sym.qcom_create_ramdump_device.cfi_jt @ 0x08001170 (size 8) =====

int64_t sym.qcom_create_ramdump_device.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x80001a8,"qcom_create_ramdump_device");
        iVar6 = 0;
    }
    else {
        mutex_lock(obj.enable_dump_collection);
        if ((obj.ramdump_devnode_inited & 1) == 0) {
            _segment.ehdr = __class_create(obj.__this_module,"ramdump",obj.init_completion.__key);
            iVar1 = alloc_chrdev_region(obj.ramdump_dev,0,0x100,"ramdump");
            if (iVar1 != 0) {
                _printk(0x8000114,"ramdump_devnode_init");
                mutex_unlock(obj.enable_dump_collection);
                return iVar1;
            }
            obj.ramdump_devnode_inited = 0x1;
        }
        mutex_unlock(obj.enable_dump_collection);
        iVar4 = kmem_cache_alloc_trace(__printk,0xdc0,400);
        iVar6 = 0;
        if (iVar4 != 0) {
            uVar2 = ida_alloc_range(obj.rd_minor_id,0,0xff,0xcc0);
            if (uVar2 < 0) {
                _printk(0x80001db,"qcom_create_ramdump_device",uVar2);
                iVar1 = -0x13;
            }
            else {
                snprintf(iVar4,0x100,0x8000157,param_1);
                uVar5 = device_create(_segment.ehdr,param_2,_segment.ehdr & 0xfff00000 | uVar2,iVar4,iVar4);
                *(iVar4 + 0x188) = uVar5;
                if (uVar5 < 0xfffffffffffff001) {
                    cdev_init(iVar4 + 0x100,0);
                    uVar3 = cdev_add(iVar4 + 0x100,_segment.ehdr & 0xfff00000 | uVar2,1);
                    if (uVar3 == 0) {
                        return *(iVar4 + 0x188);
                    }
                    uVar5 = uVar3;
                    _printk(0x8000134,"qcom_create_ramdump_device",param_1,uVar5);
                    device_unregister(*(iVar4 + 0x188));
                }
                else {
                    _printk(0x800015a,"qcom_create_ramdump_device",param_1,uVar5 & 0xffffffff);
                }
                iVar1 = uVar5;
                ida_free(obj.rd_minor_id,uVar2);
            }
            kfree(iVar4);
            iVar6 = iVar1;
        }
    }
    return iVar6;
}


// ===== sym.qcom_devcd_freev.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt @ 0x08001178 (size 8) =====

void sym.qcom_devcd_freev.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt(ulong *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    vfree(*param_1);
    complete_all(param_1 + 1);
    return;
}


// ===== sym.qcom_destroy_ramdump_device.cfi_jt @ 0x08001180 (size 8) =====

void sym.qcom_destroy_ramdump_device.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0x98);
    if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
        uVar1 = *(uVar2 + 0x180);
        cdev_del(uVar2 + 0x100);
        device_unregister(*(uVar2 + 0x188));
        ida_free(obj.rd_minor_id,uVar1 & 0xfffff);
        kfree(uVar2);
    }
    return;
}


// ===== sym.qcom_devcd_readv.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt @ 0x08001188 (size 8) =====

void sym.qcom_devcd_readv.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,ulong *param_4)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_20 = param_2;
    memory_read_from_buffer(param_1,param_3,&uStack_20,*param_4);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    puVar2 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_devcd_freev;
    vfree(*puVar2);
    complete_all(puVar2 + 1);
    return;
}


// ===== sym.qcom_dump.cfi_jt @ 0x08001190 (size 8) =====

uint64_t sym.qcom_dump.cfi_jt(char *param_1,uint64_t param_2,ulong param_3)

{
    int64_t *piVar1;
    int64_t ******ppppppiVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    char *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t *******pppppppiVar10;
    uint64_t uVar11;
    int64_t iVar12;
    char *pcVar13;
    ulong uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x19;
    ulong *unaff_x20;
    char *unaff_x21;
    char *unaff_x22;
    char *unaff_x23;
    char *unaff_x24;
    char *unaff_x25;
    uint32_t *puVar15;
    char *unaff_x26;
    char *unaff_x27;
    char *unaff_x28;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t ******ppppppiStack_198;
    int64_t ******ppppppiStack_190;
    int64_t iStack_188;
    uchar **ppuStack_180;
    ulong uStack_178;
    char *pcStack_170;
    char *pcStack_168;
    char *pcStack_160;
    char *pcStack_158;
    char *pcStack_150;
    char *pcStack_148;
    char *pcStack_140;
    char *pcStack_138;
    ulong *puStack_130;
    uint64_t uStack_128;
    ulong uStack_118;
    char *pcStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    char *pcStack_80;
    char acStack_78 [8];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    uVar5 = param_3;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    if ((param_1 == NULL) || (unaff_x21 = param_1, *param_1 == param_1)) {
        param_1 = unaff_x21;
        uVar9 = 0xffffffea;
    }
    else {
        unaff_x23 = *param_1;
        if (unaff_x23 == param_1) {
            unaff_x20 = NULL;
        }
        else {
            unaff_x20 = NULL;
            unaff_x22 = 0x80001c4;
            do {
                _printk(0x80001c4,*(unaff_x23 + 0x20));
                uVar5 = param_3;
                piVar1 = unaff_x23 + 0x20;
                unaff_x23 = *unaff_x23;
                unaff_x20 = *piVar1 + unaff_x20;
            } while (unaff_x23 != param_1);
        }
        pcVar7 = vmalloc(unaff_x20);
        unaff_x19 = param_2;
        if (pcVar7 == NULL) {
            uVar9 = 0xfffffff4;
        }
        else {
            unaff_x25 = *param_1;
            if (unaff_x25 != param_1) {
                unaff_x26 = NULL;
                unaff_x23 = "invalid coredump segment (%pad, %zu)\n";
                do {
                    if (*(unaff_x25 + 0x18) == 0) {
                        unaff_x24 = unaff_x25 + 0x10;
                        iVar8 = devm_ioremap(param_2,*unaff_x24,*(unaff_x25 + 0x20));
                        if (iVar8 == 0) {
                            _dev_err(param_2,"invalid coredump segment (%pad, %zu)\n",unaff_x24,*(unaff_x25 + 0x20));
                            memset(pcVar7 + unaff_x26,0xff,*(unaff_x25 + 0x20));
                        }
                        else {
                            __memcpy_fromio(pcVar7 + unaff_x26,iVar8,*(unaff_x25 + 0x20));
                        }
                    }
                    else {
                        memcpy(pcVar7 + unaff_x26,*(unaff_x25 + 0x18),*(unaff_x25 + 0x20));
                    }
                    piVar1 = unaff_x25 + 0x20;
                    unaff_x25 = *unaff_x25;
                    unaff_x26 = unaff_x26 + *piVar1;
                } while (unaff_x25 != param_1);
            }
            uStack_68 = 0;
            uStack_60 = 0;
            param_1 = acStack_78;
            acStack_78[0] = '\0';
            acStack_78[1] = '\0';
            acStack_78[2] = '\0';
            acStack_78[3] = '\0';
            acStack_78[4] = '\0';
            acStack_78[5] = '\0';
            acStack_78[6] = '\0';
            acStack_78[7] = '\0';
            uStack_70 = 0;
            pcStack_80 = pcVar7;
            __init_swait_queue_head(&uStack_70,"&x->wait",obj.init_completion.__key);
            uVar5 = &pcStack_80;
            dev_coredumpm(param_2,0,&pcStack_80,unaff_x20,0xcc0,
                          sym.qcom_devcd_readv.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt,
                          sym.qcom_devcd_freev.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt);
            wait_for_completion(param_1);
            uVar4 = completion_done(param_1);
            uVar9 = ~uVar4 & 1;
            unaff_x22 = pcVar7;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar9;
    }
    auVar16 = __stack_chk_fail(uVar9);
    uStack_118 = auVar16._8_8_;
    pcVar7 = auVar16._0_8_;
    *extraout_x18 = 0x80013a4;
    uStack_d8 = 0x80013a4;
    iVar8 = sp_el0;
    iStack_e8 = *(iVar8 + 0x5e0);
    pcStack_138 = param_1;
    puStack_e0 = &stack0xffffffffffffffb0;
    if ((pcVar7 == NULL) || (pcStack_138 = pcVar7, *pcVar7 == pcVar7)) {
        uVar9 = 0xffffffea;
    }
    else {
        bVar3 = (uVar5 & 0xff) != 1;
        pcVar13 = *pcVar7;
        unaff_x20 = uVar5;
        unaff_x25 = 0x34;
        if (bVar3) {
            unaff_x25 = 0x40;
        }
        iVar8 = 0x20;
        if (bVar3) {
            iVar8 = 0x38;
        }
        unaff_x22 = unaff_x25;
        if (pcVar13 == pcVar7) {
            unaff_x19 = 0;
        }
        else {
            unaff_x19 = 0;
            do {
                piVar1 = pcVar13 + 0x20;
                pcVar13 = *pcVar13;
                unaff_x19 = unaff_x19 + 1;
                unaff_x22 = unaff_x22 + *piVar1 + iVar8;
            } while (pcVar13 != pcVar7);
        }
        pcVar13 = vmalloc(unaff_x22);
        if (pcVar13 == NULL) {
            uVar9 = 0xfffffff4;
        }
        else {
            memset(pcVar13,0,unaff_x25);
            pcVar13[4] = uVar5;
            pcVar13[5] = '\x01';
            pcVar13[6] = '\x01';
            pcVar13[0] = '\x7f';
            pcVar13[1] = 'E';
            pcVar13[2] = 'L';
            pcVar13[3] = 'F';
            pcVar13[7] = '\0';
            iVar6 = unaff_x19;
            if ((uVar5 & 0xff) == 1) {
                pcVar13[0x10] = '\x04';
                pcVar13[0x11] = '\0';
                pcVar13[0x12] = '\0';
                pcVar13[0x13] = '\0';
                pcVar13[0x14] = '\x01';
                pcVar13[0x15] = '\0';
                pcVar13[0x16] = '\0';
                pcVar13[0x17] = '\0';
                unaff_x24 = 0x20;
                *(pcVar13 + 0x2c) = unaff_x19;
                pcVar13[0x1c] = '4';
                pcVar13[0x1d] = '\0';
                pcVar13[0x1e] = '\0';
                pcVar13[0x1f] = '\0';
                pcVar13[0x28] = '4';
                pcVar13[0x29] = '\0';
                pcVar13[0x2a] = ' ';
                pcVar13[0x2b] = '\0';
            }
            else {
                unaff_x24 = 0x38;
                pcVar13[0x10] = '\x04';
                pcVar13[0x11] = '\0';
                pcVar13[0x12] = '\0';
                pcVar13[0x13] = '\0';
                pcVar13[0x14] = '\x01';
                pcVar13[0x15] = '\0';
                pcVar13[0x16] = '\0';
                pcVar13[0x17] = '\0';
                pcVar13[0x20] = '@';
                pcVar13[0x21] = '\0';
                pcVar13[0x22] = '\0';
                pcVar13[0x23] = '\0';
                pcVar13[0x24] = '\0';
                pcVar13[0x25] = '\0';
                pcVar13[0x26] = '\0';
                pcVar13[0x27] = '\0';
                pcVar13[0x34] = '@';
                pcVar13[0x35] = '\0';
                pcVar13[0x36] = '8';
                pcVar13[0x37] = '\0';
                *(pcVar13 + 0x38) = unaff_x19;
            }
            unaff_x27 = *pcVar7;
            if (unaff_x27 != pcVar7) {
                unaff_x19 = 7;
                unaff_x28 = unaff_x25 + unaff_x24 * iVar6;
                unaff_x25 = unaff_x25 + pcVar13 + 0x30;
                do {
                    unaff_x26 = uVar5 & 0xff;
                    memset(unaff_x25 + -0x30,0,unaff_x24);
                    if ((uVar5 & 0xff) == 1) {
                        unaff_x25[-0x30] = '\x01';
                        unaff_x25[-0x2f] = '\0';
                        unaff_x25[-0x2e] = '\0';
                        unaff_x25[-0x2d] = '\0';
                        *(unaff_x25 + -0x2c) = unaff_x28;
                        *(unaff_x25 + -0x28) = *(unaff_x27 + 0x10);
                        *(unaff_x25 + -0x24) = *(unaff_x27 + 0x10);
                        *(unaff_x25 + -0x20) = *(unaff_x27 + 0x20);
                        uVar14 = *(unaff_x27 + 0x20);
                        unaff_x25[-0x18] = '\a';
                        unaff_x25[-0x17] = '\0';
                        unaff_x25[-0x16] = '\0';
                        unaff_x25[-0x15] = '\0';
                        unaff_x25[-0x14] = '\0';
                        unaff_x25[-0x13] = '\0';
                        unaff_x25[-0x12] = '\0';
                        unaff_x25[-0x11] = '\0';
                        *(unaff_x25 + -0x1c) = uVar14;
                        iVar8 = *(unaff_x27 + 0x18);
                        if (iVar8 == 0) goto code_r0x080015c0;
code_r0x0800154c:
                        memcpy(pcVar13 + unaff_x28,iVar8,*(unaff_x27 + 0x20));
                    }
                    else {
                        unaff_x25[-0x30] = '\x01';
                        unaff_x25[-0x2f] = '\0';
                        unaff_x25[-0x2e] = '\0';
                        unaff_x25[-0x2d] = '\0';
                        *(unaff_x25 + -0x28) = unaff_x28;
                        *(unaff_x25 + -0x20) = *(unaff_x27 + 0x10);
                        *(unaff_x25 + -0x18) = *(unaff_x27 + 0x10);
                        *(unaff_x25 + -0x10) = *(unaff_x27 + 0x20);
                        uVar14 = *(unaff_x27 + 0x20);
                        unaff_x25[-0x2c] = '\a';
                        unaff_x25[-0x2b] = '\0';
                        unaff_x25[-0x2a] = '\0';
                        unaff_x25[-0x29] = '\0';
                        *(unaff_x25 + -8) = uVar14;
                        unaff_x25[0] = '\0';
                        unaff_x25[1] = '\0';
                        unaff_x25[2] = '\0';
                        unaff_x25[3] = '\0';
                        unaff_x25[4] = '\0';
                        unaff_x25[5] = '\0';
                        unaff_x25[6] = '\0';
                        unaff_x25[7] = '\0';
                        iVar8 = *(unaff_x27 + 0x18);
                        if (iVar8 != 0) goto code_r0x0800154c;
code_r0x080015c0:
                        unaff_x26 = unaff_x27 + 0x10;
                        iVar8 = devm_ioremap(uStack_118,*unaff_x26,*(unaff_x27 + 0x20));
                        if (iVar8 == 0) {
                            _dev_err(uStack_118,"invalid coredump segment (%pad, %zu)\n",unaff_x26,
                                     *(unaff_x27 + 0x20));
                            memset(pcVar13 + unaff_x28,0xff,*(unaff_x27 + 0x20));
                        }
                        else {
                            __memcpy_fromio(pcVar13 + unaff_x28,iVar8,*(unaff_x27 + 0x20));
                        }
                    }
                    piVar1 = unaff_x27 + 0x20;
                    unaff_x25 = unaff_x25 + unaff_x24;
                    unaff_x27 = *unaff_x27;
                    unaff_x28 = unaff_x28 + *piVar1;
                } while (unaff_x27 != pcVar7);
            }
            uStack_f8 = 0;
            uStack_f0 = 0;
            unaff_x20 = &uStack_108;
            uStack_108 = 0;
            uStack_100 = 0;
            pcStack_110 = pcVar13;
            __init_swait_queue_head(&uStack_100,"&x->wait",obj.init_completion.__key);
            dev_coredumpm(uStack_118,0,&pcStack_110,unaff_x22,0xcc0,
                          sym.qcom_devcd_readv.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt,
                          sym.qcom_devcd_freev.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt);
            wait_for_completion(unaff_x20);
            uVar5 = completion_done(unaff_x20);
            uVar9 = ~uVar5 & 1;
            unaff_x23 = pcVar13;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_e8) {
        return uVar9;
    }
    auVar16 = __stack_chk_fail(uVar9);
    *extraout_x18_00 = 0x80016c4;
    uStack_178 = 0x80016c4;
    iVar8 = sp_el0;
    iStack_188 = *(iVar8 + 0x5e0);
    iVar8 = *(auVar16._0_8_ + 8);
    ppppppiStack_198 = &ppppppiStack_198;
    ppppppiStack_190 = &ppppppiStack_198;
    ppuStack_180 = &puStack_e0;
    pcStack_170 = unaff_x28;
    pcStack_168 = unaff_x27;
    pcStack_160 = unaff_x26;
    pcStack_158 = unaff_x25;
    pcStack_150 = unaff_x24;
    pcStack_148 = unaff_x23;
    pcStack_140 = unaff_x22;
    puStack_130 = unaff_x20;
    uStack_128 = unaff_x19;
    if (*(iVar8 + 0x2c) != 0) {
        uVar9 = 0;
        puVar15 = iVar8 + 0x4c;
        do {
            if (((puVar15[-6] == 1) && ((*puVar15 & 0x7000000) != 0x2000000)) && (puVar15[-1] != 0)) {
                iVar12 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar12 = 0x30;
                }
                pppppppiVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x28);
                ppppppiVar2 = ppppppiStack_190;
                if (pppppppiVar10 == NULL) {
                    uVar9 = 0xfffffff4;
                    goto code_r0x080017e0;
                }
                pppppppiVar10[2] = puVar15[-3];
                pppppppiVar10[4] = puVar15[-1];
                uVar11 = __list_add_valid(pppppppiVar10,ppppppiStack_190,&ppppppiStack_198);
                if ((uVar11 & 1) != 0) {
                    *pppppppiVar10 = &ppppppiStack_198;
                    pppppppiVar10[1] = ppppppiVar2;
                    ppppppiStack_190 = pppppppiVar10;
                    *ppppppiVar2 = pppppppiVar10;
                }
            }
            uVar9 = uVar9 + 1;
            puVar15 = puVar15 + 8;
        } while (uVar9 < *(iVar8 + 0x2c));
    }
    sym.qcom_elf_dump(&ppppppiStack_198,auVar16._8_8_,1);
    uVar9 = 0;
code_r0x080017e0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_188) {
        return uVar9;
    }
    auVar16 = __stack_chk_fail(uVar9);
    iVar8 = auVar16._0_8_;
    *extraout_x18_01 = sym.qcom_create_ramdump_device;
    if (iVar8 == 0) {
        _printk(0x80001a8,"qcom_create_ramdump_device");
        uVar9 = 0;
    }
    else {
        mutex_lock(obj.enable_dump_collection);
        if ((obj.ramdump_devnode_inited & 1) == 0) {
            _segment.ehdr = __class_create(obj.__this_module,"ramdump",obj.init_completion.__key);
            iVar6 = alloc_chrdev_region(obj.ramdump_dev,0,0x100,"ramdump");
            if (iVar6 != 0) {
                _printk(0x8000114,"ramdump_devnode_init");
                mutex_unlock(obj.enable_dump_collection);
                return iVar6;
            }
            obj.ramdump_devnode_inited = 0x1;
        }
        mutex_unlock(obj.enable_dump_collection);
        iVar12 = kmem_cache_alloc_trace(__printk,0xdc0,400);
        uVar9 = 0;
        if (iVar12 != 0) {
            uVar5 = ida_alloc_range(obj.rd_minor_id,0,0xff,0xcc0);
            if (uVar5 < 0) {
                _printk(0x80001db,"qcom_create_ramdump_device",uVar5);
                iVar6 = -0x13;
            }
            else {
                snprintf(iVar12,0x100,0x8000157,iVar8);
                uVar9 = device_create(_segment.ehdr,auVar16._8_8_,_segment.ehdr & 0xfff00000 | uVar5,iVar12,iVar12);
                *(iVar12 + 0x188) = uVar9;
                if (uVar9 < 0xfffffffffffff001) {
                    cdev_init(iVar12 + 0x100,0);
                    uVar4 = cdev_add(iVar12 + 0x100,_segment.ehdr & 0xfff00000 | uVar5,1);
                    if (uVar4 == 0) {
                        return *(iVar12 + 0x188);
                    }
                    uVar9 = uVar4;
                    _printk(0x8000134,"qcom_create_ramdump_device",iVar8,uVar9);
                    device_unregister(*(iVar12 + 0x188));
                }
                else {
                    _printk(0x800015a,"qcom_create_ramdump_device",iVar8,uVar9 & 0xffffffff);
                }
                iVar6 = uVar9;
                ida_free(obj.rd_minor_id,uVar5);
            }
            kfree(iVar12);
            uVar9 = iVar6;
        }
    }
    return uVar9;
}


// ===== sym.qcom_fw_elf_dump.cfi_jt @ 0x08001198 (size 8) =====

int64_t sym.qcom_fw_elf_dump.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t ***pppiVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t ****ppppiVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int64_t ***pppiStack_78;
    int64_t ***pppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = *(param_1 + 8);
    pppiStack_78 = &pppiStack_78;
    pppiStack_70 = &pppiStack_78;
    if (*(iVar9 + 0x2c) != 0) {
        uVar10 = 0;
        puVar11 = iVar9 + 0x4c;
        do {
            if (((puVar11[-6] == 1) && ((*puVar11 & 0x7000000) != 0x2000000)) && (puVar11[-1] != 0)) {
                iVar8 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar8 = 0x30;
                }
                ppppiVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x28);
                pppiVar1 = pppiStack_70;
                if (ppppiVar5 == NULL) {
                    iVar9 = 0xfffffff4;
                    goto code_r0x080017e0;
                }
                ppppiVar5[2] = puVar11[-3];
                ppppiVar5[4] = puVar11[-1];
                uVar6 = __list_add_valid(ppppiVar5,pppiStack_70,&pppiStack_78);
                if ((uVar6 & 1) != 0) {
                    *ppppiVar5 = &pppiStack_78;
                    ppppiVar5[1] = pppiVar1;
                    pppiStack_70 = ppppiVar5;
                    *pppiVar1 = ppppiVar5;
                }
            }
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 8;
        } while (uVar10 < *(iVar9 + 0x2c));
    }
    sym.qcom_elf_dump(&pppiStack_78,param_2,1);
    iVar9 = 0;
code_r0x080017e0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar9;
    }
    auVar12 = __stack_chk_fail(iVar9);
    iVar9 = auVar12._0_8_;
    *extraout_x18 = sym.qcom_create_ramdump_device;
    if (iVar9 == 0) {
        _printk(0x80001a8,"qcom_create_ramdump_device");
        iVar8 = 0;
    }
    else {
        mutex_lock(obj.enable_dump_collection);
        if ((obj.ramdump_devnode_inited & 1) == 0) {
            _segment.ehdr = __class_create(obj.__this_module,"ramdump",obj.init_completion.__key);
            iVar2 = alloc_chrdev_region(obj.ramdump_dev,0,0x100,"ramdump");
            if (iVar2 != 0) {
                _printk(0x8000114,"ramdump_devnode_init");
                mutex_unlock(obj.enable_dump_collection);
                return iVar2;
            }
            obj.ramdump_devnode_inited = 0x1;
        }
        mutex_unlock(obj.enable_dump_collection);
        iVar7 = kmem_cache_alloc_trace(__printk,0xdc0,400);
        iVar8 = 0;
        if (iVar7 != 0) {
            uVar3 = ida_alloc_range(obj.rd_minor_id,0,0xff,0xcc0);
            if (uVar3 < 0) {
                _printk(0x80001db,"qcom_create_ramdump_device",uVar3);
                iVar2 = -0x13;
            }
            else {
                snprintf(iVar7,0x100,0x8000157,iVar9);
                uVar10 = device_create(_segment.ehdr,auVar12._8_8_,_segment.ehdr & 0xfff00000 | uVar3,iVar7,iVar7);
                *(iVar7 + 0x188) = uVar10;
                if (uVar10 < 0xfffffffffffff001) {
                    cdev_init(iVar7 + 0x100,0);
                    uVar4 = cdev_add(iVar7 + 0x100,_segment.ehdr & 0xfff00000 | uVar3,1);
                    if (uVar4 == 0) {
                        return *(iVar7 + 0x188);
                    }
                    uVar10 = uVar4;
                    _printk(0x8000134,"qcom_create_ramdump_device",iVar9,uVar10);
                    device_unregister(*(iVar7 + 0x188));
                }
                else {
                    _printk(0x800015a,"qcom_create_ramdump_device",iVar9,uVar10 & 0xffffffff);
                }
                iVar2 = uVar10;
                ida_free(obj.rd_minor_id,uVar3);
            }
            kfree(iVar7);
            iVar8 = iVar2;
        }
    }
    return iVar8;
}


// ===== sym.dump_enabled @ 0x080011a0 (size 28) =====

bool sym.dump_enabled(void)

{
    return _segment.ehdr != 0;
}


// ===== sym.qcom_dump @ 0x080011bc (size 492) =====

uint64_t sym.qcom_dump(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    bool bVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    char *pcVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong in_x2;
    char *pcVar12;
    ulong uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x19;
    uchar *unaff_x20;
    char *unaff_x21;
    char *unaff_x22;
    char *unaff_x23;
    char *unaff_x24;
    char *unaff_x25;
    uint32_t *puVar14;
    char *unaff_x26;
    char *unaff_x27;
    char *unaff_x28;
    ulong unaff_x30;
    uchar auVar15 [16];
    int64_t *piStack_198;
    int64_t *piStack_190;
    int64_t iStack_188;
    uchar *puStack_180;
    ulong uStack_178;
    char *pcStack_170;
    char *pcStack_168;
    char *pcStack_160;
    char *pcStack_158;
    char *pcStack_150;
    char *pcStack_148;
    char *pcStack_140;
    char *pcStack_138;
    uchar *puStack_130;
    uint64_t uStack_128;
    ulong uStack_118;
    char *pcStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    char *pcStack_80;
    char acStack_78 [32];
    int64_t iStack_58;
    
    uVar4 = in_x2;
    pcVar12 = arg1;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    if ((pcVar12 == NULL) || (unaff_x21 = pcVar12, *pcVar12 == pcVar12)) {
        pcVar12 = unaff_x21;
        uVar8 = 0xffffffea;
    }
    else {
        unaff_x23 = *pcVar12;
        if (unaff_x23 == pcVar12) {
            unaff_x20 = NULL;
        }
        else {
            unaff_x20 = NULL;
            unaff_x22 = 0x80001c4;
            do {
                _printk(0x80001c4,*(unaff_x23 + 0x20));
                uVar4 = in_x2;
                piVar1 = unaff_x23 + 0x20;
                unaff_x23 = *unaff_x23;
                unaff_x20 = unaff_x20 + *piVar1;
            } while (unaff_x23 != pcVar12);
        }
        pcVar6 = vmalloc(unaff_x20);
        unaff_x19 = arg2;
        if (pcVar6 == NULL) {
            uVar8 = 0xfffffff4;
        }
        else {
            unaff_x25 = *pcVar12;
            if (unaff_x25 != pcVar12) {
                unaff_x26 = NULL;
                unaff_x23 = "invalid coredump segment (%pad, %zu)\n";
                do {
                    if (*(unaff_x25 + 0x18) == 0) {
                        unaff_x24 = unaff_x25 + 0x10;
                        iVar7 = devm_ioremap(arg2,*unaff_x24,*(unaff_x25 + 0x20));
                        if (iVar7 == 0) {
                            _dev_err(arg2,"invalid coredump segment (%pad, %zu)\n",unaff_x24,*(unaff_x25 + 0x20));
                            memset(pcVar6 + unaff_x26,0xff,*(unaff_x25 + 0x20));
                        }
                        else {
                            __memcpy_fromio(pcVar6 + unaff_x26,iVar7,*(unaff_x25 + 0x20));
                        }
                    }
                    else {
                        memcpy(pcVar6 + unaff_x26,*(unaff_x25 + 0x18),*(unaff_x25 + 0x20));
                    }
                    piVar1 = unaff_x25 + 0x20;
                    unaff_x25 = *unaff_x25;
                    unaff_x26 = unaff_x26 + *piVar1;
                } while (unaff_x25 != pcVar12);
            }
            acStack_78[0x10] = '\0';
            acStack_78[0x11] = '\0';
            acStack_78[0x12] = '\0';
            acStack_78[0x13] = '\0';
            acStack_78[0x14] = '\0';
            acStack_78[0x15] = '\0';
            acStack_78[0x16] = '\0';
            acStack_78[0x17] = '\0';
            acStack_78[0x18] = '\0';
            acStack_78[0x19] = '\0';
            acStack_78[0x1a] = '\0';
            acStack_78[0x1b] = '\0';
            acStack_78[0x1c] = '\0';
            acStack_78[0x1d] = '\0';
            acStack_78[0x1e] = '\0';
            acStack_78[0x1f] = '\0';
            pcVar12 = &stack0xffffffffffffff88;
            acStack_78[0] = '\0';
            acStack_78[1] = '\0';
            acStack_78[2] = '\0';
            acStack_78[3] = '\0';
            acStack_78[4] = '\0';
            acStack_78[5] = '\0';
            acStack_78[6] = '\0';
            acStack_78[7] = '\0';
            acStack_78[8] = '\0';
            acStack_78[9] = '\0';
            acStack_78[10] = '\0';
            acStack_78[0xb] = '\0';
            acStack_78[0xc] = '\0';
            acStack_78[0xd] = '\0';
            acStack_78[0xe] = '\0';
            acStack_78[0xf] = '\0';
            pcStack_80 = pcVar6;
            __init_swait_queue_head(&stack0xffffffffffffff90,"&x->wait",obj.init_completion.__key);
            uVar4 = &stack0xffffffffffffff80;
            dev_coredumpm(arg2,0,&stack0xffffffffffffff80,unaff_x20,0xcc0,
                          sym.qcom_devcd_readv.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt,
                          sym.qcom_devcd_freev.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt);
            wait_for_completion(pcVar12);
            uVar3 = completion_done(pcVar12);
            uVar8 = ~uVar3 & 1;
            unaff_x22 = pcVar6;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    auVar15 = __stack_chk_fail(uVar8);
    uStack_118 = auVar15._8_8_;
    pcVar6 = auVar15._0_8_;
    *extraout_x18 = 0x80013a4;
    uStack_d8 = 0x80013a4;
    iVar7 = sp_el0;
    iStack_e8 = *(iVar7 + 0x5e0);
    pcStack_138 = pcVar12;
    puStack_e0 = &stack0xffffffffffffffb0;
    if ((pcVar6 == NULL) || (pcStack_138 = pcVar6, *pcVar6 == pcVar6)) {
        uVar8 = 0xffffffea;
    }
    else {
        bVar2 = (uVar4 & 0xff) != 1;
        pcVar12 = *pcVar6;
        unaff_x20 = uVar4;
        unaff_x25 = 0x34;
        if (bVar2) {
            unaff_x25 = 0x40;
        }
        iVar7 = 0x20;
        if (bVar2) {
            iVar7 = 0x38;
        }
        unaff_x22 = unaff_x25;
        if (pcVar12 == pcVar6) {
            unaff_x19 = 0;
        }
        else {
            unaff_x19 = 0;
            do {
                piVar1 = pcVar12 + 0x20;
                pcVar12 = *pcVar12;
                unaff_x19 = unaff_x19 + 1;
                unaff_x22 = unaff_x22 + *piVar1 + iVar7;
            } while (pcVar12 != pcVar6);
        }
        pcVar12 = vmalloc(unaff_x22);
        if (pcVar12 == NULL) {
            uVar8 = 0xfffffff4;
        }
        else {
            memset(pcVar12,0,unaff_x25);
            pcVar12[4] = uVar4;
            pcVar12[5] = '\x01';
            pcVar12[6] = '\x01';
            pcVar12[0] = '\x7f';
            pcVar12[1] = 'E';
            pcVar12[2] = 'L';
            pcVar12[3] = 'F';
            pcVar12[7] = '\0';
            iVar5 = unaff_x19;
            if ((uVar4 & 0xff) == 1) {
                pcVar12[0x10] = '\x04';
                pcVar12[0x11] = '\0';
                pcVar12[0x12] = '\0';
                pcVar12[0x13] = '\0';
                pcVar12[0x14] = '\x01';
                pcVar12[0x15] = '\0';
                pcVar12[0x16] = '\0';
                pcVar12[0x17] = '\0';
                unaff_x24 = 0x20;
                *(pcVar12 + 0x2c) = unaff_x19;
                pcVar12[0x1c] = '4';
                pcVar12[0x1d] = '\0';
                pcVar12[0x1e] = '\0';
                pcVar12[0x1f] = '\0';
                pcVar12[0x28] = '4';
                pcVar12[0x29] = '\0';
                pcVar12[0x2a] = ' ';
                pcVar12[0x2b] = '\0';
            }
            else {
                unaff_x24 = 0x38;
                pcVar12[0x10] = '\x04';
                pcVar12[0x11] = '\0';
                pcVar12[0x12] = '\0';
                pcVar12[0x13] = '\0';
                pcVar12[0x14] = '\x01';
                pcVar12[0x15] = '\0';
                pcVar12[0x16] = '\0';
                pcVar12[0x17] = '\0';
                pcVar12[0x20] = '@';
                pcVar12[0x21] = '\0';
                pcVar12[0x22] = '\0';
                pcVar12[0x23] = '\0';
                pcVar12[0x24] = '\0';
                pcVar12[0x25] = '\0';
                pcVar12[0x26] = '\0';
                pcVar12[0x27] = '\0';
                pcVar12[0x34] = '@';
                pcVar12[0x35] = '\0';
                pcVar12[0x36] = '8';
                pcVar12[0x37] = '\0';
                *(pcVar12 + 0x38) = unaff_x19;
            }
            unaff_x27 = *pcVar6;
            if (unaff_x27 != pcVar6) {
                unaff_x19 = 7;
                unaff_x28 = unaff_x25 + unaff_x24 * iVar5;
                unaff_x25 = unaff_x25 + pcVar12 + 0x30;
                do {
                    unaff_x26 = uVar4 & 0xff;
                    memset(unaff_x25 + -0x30,0,unaff_x24);
                    if ((uVar4 & 0xff) == 1) {
                        unaff_x25[-0x30] = '\x01';
                        unaff_x25[-0x2f] = '\0';
                        unaff_x25[-0x2e] = '\0';
                        unaff_x25[-0x2d] = '\0';
                        *(unaff_x25 + -0x2c) = unaff_x28;
                        *(unaff_x25 + -0x28) = *(unaff_x27 + 0x10);
                        *(unaff_x25 + -0x24) = *(unaff_x27 + 0x10);
                        *(unaff_x25 + -0x20) = *(unaff_x27 + 0x20);
                        uVar13 = *(unaff_x27 + 0x20);
                        unaff_x25[-0x18] = '\a';
                        unaff_x25[-0x17] = '\0';
                        unaff_x25[-0x16] = '\0';
                        unaff_x25[-0x15] = '\0';
                        unaff_x25[-0x14] = '\0';
                        unaff_x25[-0x13] = '\0';
                        unaff_x25[-0x12] = '\0';
                        unaff_x25[-0x11] = '\0';
                        *(unaff_x25 + -0x1c) = uVar13;
                        iVar7 = *(unaff_x27 + 0x18);
                        if (iVar7 == 0) goto code_r0x080015c0;
code_r0x0800154c:
                        memcpy(pcVar12 + unaff_x28,iVar7,*(unaff_x27 + 0x20));
                    }
                    else {
                        unaff_x25[-0x30] = '\x01';
                        unaff_x25[-0x2f] = '\0';
                        unaff_x25[-0x2e] = '\0';
                        unaff_x25[-0x2d] = '\0';
                        *(unaff_x25 + -0x28) = unaff_x28;
                        *(unaff_x25 + -0x20) = *(unaff_x27 + 0x10);
                        *(unaff_x25 + -0x18) = *(unaff_x27 + 0x10);
                        *(unaff_x25 + -0x10) = *(unaff_x27 + 0x20);
                        uVar13 = *(unaff_x27 + 0x20);
                        unaff_x25[-0x2c] = '\a';
                        unaff_x25[-0x2b] = '\0';
                        unaff_x25[-0x2a] = '\0';
                        unaff_x25[-0x29] = '\0';
                        *(unaff_x25 + -8) = uVar13;
                        unaff_x25[0] = '\0';
                        unaff_x25[1] = '\0';
                        unaff_x25[2] = '\0';
                        unaff_x25[3] = '\0';
                        unaff_x25[4] = '\0';
                        unaff_x25[5] = '\0';
                        unaff_x25[6] = '\0';
                        unaff_x25[7] = '\0';
                        iVar7 = *(unaff_x27 + 0x18);
                        if (iVar7 != 0) goto code_r0x0800154c;
code_r0x080015c0:
                        unaff_x26 = unaff_x27 + 0x10;
                        iVar7 = devm_ioremap(uStack_118,*unaff_x26,*(unaff_x27 + 0x20));
                        if (iVar7 == 0) {
                            _dev_err(uStack_118,"invalid coredump segment (%pad, %zu)\n",unaff_x26,
                                     *(unaff_x27 + 0x20));
                            memset(pcVar12 + unaff_x28,0xff,*(unaff_x27 + 0x20));
                        }
                        else {
                            __memcpy_fromio(pcVar12 + unaff_x28,iVar7,*(unaff_x27 + 0x20));
                        }
                    }
                    piVar1 = unaff_x27 + 0x20;
                    unaff_x25 = unaff_x25 + unaff_x24;
                    unaff_x27 = *unaff_x27;
                    unaff_x28 = unaff_x28 + *piVar1;
                } while (unaff_x27 != pcVar6);
            }
            uStack_f8 = 0;
            uStack_f0 = 0;
            unaff_x20 = &stack0xfffffffffffffef8;
            uStack_108 = 0;
            uStack_100 = 0;
            pcStack_110 = pcVar12;
            __init_swait_queue_head(&stack0xffffffffffffff00,"&x->wait",obj.init_completion.__key);
            dev_coredumpm(uStack_118,0,&stack0xfffffffffffffef0,unaff_x22,0xcc0,
                          sym.qcom_devcd_readv.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt,
                          sym.qcom_devcd_freev.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt);
            wait_for_completion(unaff_x20);
            uVar4 = completion_done(unaff_x20);
            uVar8 = ~uVar4 & 1;
            unaff_x23 = pcVar12;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return uVar8;
    }
    auVar15 = __stack_chk_fail(uVar8);
    *extraout_x18_00 = 0x80016c4;
    uStack_178 = 0x80016c4;
    iVar7 = sp_el0;
    iStack_188 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar15._0_8_ + 8);
    piStack_198 = &stack0xfffffffffffffe68;
    piStack_190 = &stack0xfffffffffffffe68;
    puStack_180 = &stack0xffffffffffffff20;
    pcStack_170 = unaff_x28;
    pcStack_168 = unaff_x27;
    pcStack_160 = unaff_x26;
    pcStack_158 = unaff_x25;
    pcStack_150 = unaff_x24;
    pcStack_148 = unaff_x23;
    pcStack_140 = unaff_x22;
    puStack_130 = unaff_x20;
    uStack_128 = unaff_x19;
    if (*(iVar7 + 0x2c) != 0) {
        uVar8 = 0;
        puVar14 = iVar7 + 0x4c;
        do {
            if (((puVar14[-6] == 1) && ((*puVar14 & 0x7000000) != 0x2000000)) && (puVar14[-1] != 0)) {
                iVar11 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar11 = 0x30;
                }
                piVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x28);
                piVar1 = piStack_190;
                if (piVar9 == NULL) {
                    uVar8 = 0xfffffff4;
                    goto code_r0x080017e0;
                }
                piVar9[2] = puVar14[-3];
                piVar9[4] = puVar14[-1];
                uVar10 = __list_add_valid(piVar9,piStack_190,&stack0xfffffffffffffe68);
                if ((uVar10 & 1) != 0) {
                    *piVar9 = &stack0xfffffffffffffe68;
                    piVar9[1] = piVar1;
                    piStack_190 = piVar9;
                    *piVar1 = piVar9;
                }
            }
            uVar8 = uVar8 + 1;
            puVar14 = puVar14 + 8;
        } while (uVar8 < *(iVar7 + 0x2c));
    }
    sym.qcom_elf_dump(&stack0xfffffffffffffe68,auVar15._8_8_,1);
    uVar8 = 0;
code_r0x080017e0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_188) {
        return uVar8;
    }
    auVar15 = __stack_chk_fail(uVar8);
    iVar7 = auVar15._0_8_;
    *extraout_x18_01 = sym.qcom_create_ramdump_device;
    if (iVar7 == 0) {
        _printk(0x80001a8,"qcom_create_ramdump_device");
        uVar8 = 0;
    }
    else {
        mutex_lock(obj.enable_dump_collection);
        if ((obj.ramdump_devnode_inited & 1) == 0) {
            _segment.ehdr = __class_create(obj.__this_module,"ramdump",obj.init_completion.__key);
            iVar5 = alloc_chrdev_region(obj.ramdump_dev,0,0x100,"ramdump");
            if (iVar5 != 0) {
                _printk(0x8000114,"ramdump_devnode_init");
                mutex_unlock(obj.enable_dump_collection);
                return iVar5;
            }
            obj.ramdump_devnode_inited = 0x1;
        }
        mutex_unlock(obj.enable_dump_collection);
        iVar11 = kmem_cache_alloc_trace(__printk,0xdc0,400);
        uVar8 = 0;
        if (iVar11 != 0) {
            uVar4 = ida_alloc_range(obj.rd_minor_id,0,0xff,0xcc0);
            if (uVar4 < 0) {
                _printk(0x80001db,"qcom_create_ramdump_device",uVar4);
                iVar5 = -0x13;
            }
            else {
                snprintf(iVar11,0x100,0x8000157,iVar7);
                uVar8 = device_create(_segment.ehdr,auVar15._8_8_,_segment.ehdr & 0xfff00000 | uVar4,iVar11,iVar11);
                *(iVar11 + 0x188) = uVar8;
                if (uVar8 < 0xfffffffffffff001) {
                    cdev_init(iVar11 + 0x100,0);
                    uVar3 = cdev_add(iVar11 + 0x100,_segment.ehdr & 0xfff00000 | uVar4,1);
                    if (uVar3 == 0) {
                        return *(iVar11 + 0x188);
                    }
                    uVar8 = uVar3;
                    _printk(0x8000134,"qcom_create_ramdump_device",iVar7,uVar8);
                    device_unregister(*(iVar11 + 0x188));
                }
                else {
                    _printk(0x800015a,"qcom_create_ramdump_device",iVar7,uVar8 & 0xffffffff);
                }
                iVar5 = uVar8;
                ida_free(obj.rd_minor_id,uVar4);
            }
            kfree(iVar11);
            uVar8 = iVar5;
        }
    }
    return uVar8;
}


// ===== sym.qcom_elf_dump @ 0x080013a8 (size 800) =====

uint64_t sym.qcom_elf_dump(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    int64_t *piVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    uint *puVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t *puVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x19;
    uchar *unaff_x20;
    uint64_t *unaff_x21;
    ulong *unaff_x22;
    uint *unaff_x23;
    int64_t unaff_x24;
    ulong *unaff_x25;
    uint32_t *puVar15;
    uint64_t *unaff_x26;
    uint64_t *unaff_x27;
    ulong *unaff_x28;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t *piStack_118;
    int64_t *piStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    ulong uStack_f8;
    ulong *puStack_f0;
    uint64_t *puStack_e8;
    uint64_t *puStack_e0;
    ulong *puStack_d8;
    int64_t iStack_d0;
    uint *puStack_c8;
    ulong *puStack_c0;
    uint64_t *puStack_b8;
    uchar *puStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_98;
    uint *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    puVar7 = arg1;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    puStack_b8 = unaff_x21;
    iStack_98 = arg2;
    if ((puVar7 == NULL) || (puStack_b8 = puVar7, *puVar7 == puVar7)) {
        uVar14 = 0xffffffea;
    }
    else {
        uVar4 = arg3;
        bVar3 = (uVar4 & 0xff) != 1;
        puVar13 = *puVar7;
        unaff_x20 = arg3 & 0xffffffff;
        unaff_x25 = 0x34;
        if (bVar3) {
            unaff_x25 = 0x40;
        }
        iVar9 = 0x20;
        if (bVar3) {
            iVar9 = 0x38;
        }
        unaff_x22 = unaff_x25;
        if (puVar13 == puVar7) {
            unaff_x19 = 0;
        }
        else {
            unaff_x19 = 0;
            do {
                puVar1 = puVar13 + 4;
                puVar13 = *puVar13;
                unaff_x19 = unaff_x19 + 1;
                unaff_x22 = unaff_x22 + *puVar1 + iVar9;
            } while (puVar13 != puVar7);
        }
        puVar8 = vmalloc(unaff_x22);
        if (puVar8 == NULL) {
            uVar14 = 0xfffffff4;
        }
        else {
            memset(puVar8,0,unaff_x25);
            *(puVar8 + 1) = arg3;
            *(puVar8 + 5) = 0x101;
            *puVar8 = 0x464c457f;
            *(puVar8 + 7) = 0;
            iVar5 = unaff_x19;
            if ((uVar4 & 0xff) == 1) {
                *(puVar8 + 4) = 0x100000004;
                unaff_x24 = 0x20;
                *(puVar8 + 0xb) = unaff_x19;
                puVar8[7] = 0x34;
                puVar8[10] = 0x200034;
            }
            else {
                unaff_x24 = 0x38;
                *(puVar8 + 4) = 0x100000004;
                *(puVar8 + 8) = 0x40;
                puVar8[0xd] = 0x380040;
                *(puVar8 + 0xe) = unaff_x19;
            }
            unaff_x27 = *puVar7;
            if (unaff_x27 != puVar7) {
                unaff_x19 = 7;
                unaff_x28 = unaff_x25 + unaff_x24 * iVar5;
                unaff_x25 = unaff_x25 + puVar8 + 0x30;
                do {
                    unaff_x26 = uVar4 & 0xff;
                    memset(unaff_x25 + -6,0,unaff_x24);
                    if ((uVar4 & 0xff) == 1) {
                        *(unaff_x25 + -6) = 1;
                        *(unaff_x25 + -0x2c) = unaff_x28;
                        *(unaff_x25 + -5) = unaff_x27[2];
                        *(unaff_x25 + -0x24) = unaff_x27[2];
                        *(unaff_x25 + -4) = unaff_x27[4];
                        uVar14 = unaff_x27[4];
                        unaff_x25[-3] = 7;
                        *(unaff_x25 + -0x1c) = uVar14;
                        uVar14 = unaff_x27[3];
                        if (uVar14 == 0) goto code_r0x080015c0;
code_r0x0800154c:
                        memcpy(puVar8 + unaff_x28,uVar14,unaff_x27[4]);
                    }
                    else {
                        *(unaff_x25 + -6) = 1;
                        unaff_x25[-5] = unaff_x28;
                        unaff_x25[-4] = unaff_x27[2];
                        unaff_x25[-3] = unaff_x27[2];
                        unaff_x25[-2] = unaff_x27[4];
                        uVar14 = unaff_x27[4];
                        *(unaff_x25 + -0x2c) = 7;
                        unaff_x25[-1] = uVar14;
                        *unaff_x25 = 0;
                        uVar14 = unaff_x27[3];
                        if (uVar14 != 0) goto code_r0x0800154c;
code_r0x080015c0:
                        unaff_x26 = unaff_x27 + 2;
                        iVar9 = devm_ioremap(iStack_98,*unaff_x26,unaff_x27[4]);
                        if (iVar9 == 0) {
                            _dev_err(iStack_98,"invalid coredump segment (%pad, %zu)\n",unaff_x26,unaff_x27[4]);
                            memset(puVar8 + unaff_x28,0xff,unaff_x27[4]);
                        }
                        else {
                            __memcpy_fromio(puVar8 + unaff_x28,iVar9,unaff_x27[4]);
                        }
                    }
                    puVar13 = unaff_x27 + 4;
                    unaff_x25 = unaff_x25 + unaff_x24;
                    unaff_x27 = *unaff_x27;
                    unaff_x28 = *puVar13 + unaff_x28;
                } while (unaff_x27 != puVar7);
            }
            uStack_78 = 0;
            uStack_70 = 0;
            unaff_x20 = &stack0xffffffffffffff78;
            uStack_88 = 0;
            uStack_80 = 0;
            puStack_90 = puVar8;
            __init_swait_queue_head(&stack0xffffffffffffff80,"&x->wait",obj.init_completion.__key);
            dev_coredumpm(iStack_98,0,&stack0xffffffffffffff70,unaff_x22,0xcc0,
                          sym.qcom_devcd_readv.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt,
                          sym.qcom_devcd_freev.15bd9ae4a6b2010ea514b310a1127ccb.cfi_jt);
            wait_for_completion(unaff_x20);
            uVar4 = completion_done(unaff_x20);
            uVar14 = ~uVar4 & 1;
            unaff_x23 = puVar8;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar14;
    }
    auVar16 = __stack_chk_fail(uVar14);
    *extraout_x18 = 0x80016c4;
    uStack_f8 = 0x80016c4;
    iVar9 = sp_el0;
    iStack_108 = *(iVar9 + 0x5e0);
    iVar9 = *(auVar16._0_8_ + 8);
    piStack_118 = &stack0xfffffffffffffee8;
    piStack_110 = &stack0xfffffffffffffee8;
    puStack_100 = &stack0xffffffffffffffa0;
    puStack_f0 = unaff_x28;
    puStack_e8 = unaff_x27;
    puStack_e0 = unaff_x26;
    puStack_d8 = unaff_x25;
    iStack_d0 = unaff_x24;
    puStack_c8 = unaff_x23;
    puStack_c0 = unaff_x22;
    puStack_b0 = unaff_x20;
    uStack_a8 = unaff_x19;
    if (*(iVar9 + 0x2c) != 0) {
        uVar14 = 0;
        puVar15 = iVar9 + 0x4c;
        do {
            if (((puVar15[-6] == 1) && ((*puVar15 & 0x7000000) != 0x2000000)) && (puVar15[-1] != 0)) {
                iVar12 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar12 = 0x30;
                }
                piVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x28);
                piVar2 = piStack_110;
                if (piVar10 == NULL) {
                    uVar14 = 0xfffffff4;
                    goto code_r0x080017e0;
                }
                piVar10[2] = puVar15[-3];
                piVar10[4] = puVar15[-1];
                uVar11 = __list_add_valid(piVar10,piStack_110,&stack0xfffffffffffffee8);
                if ((uVar11 & 1) != 0) {
                    *piVar10 = &stack0xfffffffffffffee8;
                    piVar10[1] = piVar2;
                    piStack_110 = piVar10;
                    *piVar2 = piVar10;
                }
            }
            uVar14 = uVar14 + 1;
            puVar15 = puVar15 + 8;
        } while (uVar14 < *(iVar9 + 0x2c));
    }
    sym.qcom_elf_dump(&stack0xfffffffffffffee8,auVar16._8_8_,1);
    uVar14 = 0;
code_r0x080017e0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_108) {
        return uVar14;
    }
    auVar16 = __stack_chk_fail(uVar14);
    iVar9 = auVar16._0_8_;
    *extraout_x18_00 = sym.qcom_create_ramdump_device;
    if (iVar9 == 0) {
        _printk(0x80001a8,"qcom_create_ramdump_device");
        uVar14 = 0;
    }
    else {
        mutex_lock(obj.enable_dump_collection);
        if ((obj.ramdump_devnode_inited & 1) == 0) {
            _segment.ehdr = __class_create(obj.__this_module,"ramdump",obj.init_completion.__key);
            iVar5 = alloc_chrdev_region(obj.ramdump_dev,0,0x100,"ramdump");
            if (iVar5 != 0) {
                _printk(0x8000114,"ramdump_devnode_init");
                mutex_unlock(obj.enable_dump_collection);
                return iVar5;
            }
            obj.ramdump_devnode_inited = 0x1;
        }
        mutex_unlock(obj.enable_dump_collection);
        iVar12 = kmem_cache_alloc_trace(__printk,0xdc0,400);
        uVar14 = 0;
        if (iVar12 != 0) {
            uVar4 = ida_alloc_range(obj.rd_minor_id,0,0xff,0xcc0);
            if (uVar4 < 0) {
                _printk(0x80001db,"qcom_create_ramdump_device",uVar4);
                iVar5 = -0x13;
            }
            else {
                snprintf(iVar12,0x100,0x8000157,iVar9);
                uVar14 = device_create(_segment.ehdr,auVar16._8_8_,_segment.ehdr & 0xfff00000 | uVar4,iVar12,iVar12)
                ;
                *(iVar12 + 0x188) = uVar14;
                if (uVar14 < 0xfffffffffffff001) {
                    cdev_init(iVar12 + 0x100,0);
                    uVar6 = cdev_add(iVar12 + 0x100,_segment.ehdr & 0xfff00000 | uVar4,1);
                    if (uVar6 == 0) {
                        return *(iVar12 + 0x188);
                    }
                    uVar14 = uVar6;
                    _printk(0x8000134,"qcom_create_ramdump_device",iVar9,uVar14);
                    device_unregister(*(iVar12 + 0x188));
                }
                else {
                    _printk(0x800015a,"qcom_create_ramdump_device",iVar9,uVar14 & 0xffffffff);
                }
                iVar5 = uVar14;
                ida_free(obj.rd_minor_id,uVar4);
            }
            kfree(iVar12);
            uVar14 = iVar5;
        }
    }
    return uVar14;
}


// ===== sym.qcom_fw_elf_dump @ 0x080016c8 (size 352) =====

int64_t sym.qcom_fw_elf_dump(int64_t arg1,int64_t arg2)

{
    int64_t ***pppiVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t ****ppppiVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int64_t ***pppiStack_78;
    int64_t ***pppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 8);
    pppiStack_78 = &pppiStack_78;
    pppiStack_70 = &pppiStack_78;
    if (*(iVar9 + 0x2c) != 0) {
        uVar10 = 0;
        puVar11 = iVar9 + 0x4c;
        do {
            if (((puVar11[-6] == 1) && ((*puVar11 & 0x7000000) != 0x2000000)) && (puVar11[-1] != 0)) {
                iVar8 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar8 = 0x30;
                }
                ppppiVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x28);
                pppiVar1 = pppiStack_70;
                if (ppppiVar5 == NULL) {
                    iVar9 = 0xfffffff4;
                    goto code_r0x080017e0;
                }
                ppppiVar5[2] = puVar11[-3];
                ppppiVar5[4] = puVar11[-1];
                uVar6 = __list_add_valid(ppppiVar5,pppiStack_70,&pppiStack_78);
                if ((uVar6 & 1) != 0) {
                    *ppppiVar5 = &pppiStack_78;
                    ppppiVar5[1] = pppiVar1;
                    pppiStack_70 = ppppiVar5;
                    *pppiVar1 = ppppiVar5;
                }
            }
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 8;
        } while (uVar10 < *(iVar9 + 0x2c));
    }
    sym.qcom_elf_dump(&pppiStack_78,arg2,1);
    iVar9 = 0;
code_r0x080017e0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar9;
    }
    auVar12 = __stack_chk_fail(iVar9);
    iVar9 = auVar12._0_8_;
    *extraout_x18 = sym.qcom_create_ramdump_device;
    if (iVar9 == 0) {
        _printk(0x80001a8,"qcom_create_ramdump_device");
        iVar8 = 0;
    }
    else {
        mutex_lock(obj.enable_dump_collection);
        if ((obj.ramdump_devnode_inited & 1) == 0) {
            _segment.ehdr = __class_create(obj.__this_module,"ramdump",obj.init_completion.__key);
            iVar2 = alloc_chrdev_region(obj.ramdump_dev,0,0x100,"ramdump");
            if (iVar2 != 0) {
                _printk(0x8000114,"ramdump_devnode_init");
                mutex_unlock(obj.enable_dump_collection);
                return iVar2;
            }
            obj.ramdump_devnode_inited = 0x1;
        }
        mutex_unlock(obj.enable_dump_collection);
        iVar7 = kmem_cache_alloc_trace(__printk,0xdc0,400);
        iVar8 = 0;
        if (iVar7 != 0) {
            uVar3 = ida_alloc_range(obj.rd_minor_id,0,0xff,0xcc0);
            if (uVar3 < 0) {
                _printk(0x80001db,"qcom_create_ramdump_device",uVar3);
                iVar2 = -0x13;
            }
            else {
                snprintf(iVar7,0x100,0x8000157,iVar9);
                uVar10 = device_create(_segment.ehdr,auVar12._8_8_,_segment.ehdr & 0xfff00000 | uVar3,iVar7,iVar7);
                *(iVar7 + 0x188) = uVar10;
                if (uVar10 < 0xfffffffffffff001) {
                    cdev_init(iVar7 + 0x100,0);
                    uVar4 = cdev_add(iVar7 + 0x100,_segment.ehdr & 0xfff00000 | uVar3,1);
                    if (uVar4 == 0) {
                        return *(iVar7 + 0x188);
                    }
                    uVar10 = uVar4;
                    _printk(0x8000134,"qcom_create_ramdump_device",iVar9,uVar10);
                    device_unregister(*(iVar7 + 0x188));
                }
                else {
                    _printk(0x800015a,"qcom_create_ramdump_device",iVar9,uVar10 & 0xffffffff);
                }
                iVar2 = uVar10;
                ida_free(obj.rd_minor_id,uVar3);
            }
            kfree(iVar7);
            iVar8 = iVar2;
        }
    }
    return iVar8;
}


// ===== sym.qcom_create_ramdump_device @ 0x08001828 (size 572) =====

int64_t sym.qcom_create_ramdump_device(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80001a8,"qcom_create_ramdump_device");
        iVar6 = 0;
    }
    else {
        mutex_lock(obj.enable_dump_collection);
        if ((obj.ramdump_devnode_inited & 1) == 0) {
            _segment.ehdr = __class_create(obj.__this_module,"ramdump",obj.init_completion.__key);
            iVar1 = alloc_chrdev_region(obj.ramdump_dev,0,0x100,"ramdump");
            if (iVar1 != 0) {
                _printk(0x8000114,"ramdump_devnode_init");
                mutex_unlock(obj.enable_dump_collection);
                return iVar1;
            }
            obj.ramdump_devnode_inited = 0x1;
        }
        mutex_unlock(obj.enable_dump_collection);
        iVar4 = kmem_cache_alloc_trace(__printk,0xdc0,400);
        iVar6 = 0;
        if (iVar4 != 0) {
            uVar2 = ida_alloc_range(obj.rd_minor_id,0,0xff,0xcc0);
            if (uVar2 < 0) {
                _printk(0x80001db,"qcom_create_ramdump_device",uVar2);
                iVar1 = -0x13;
            }
            else {
                snprintf(iVar4,0x100,0x8000157,arg1);
                uVar5 = device_create(_segment.ehdr,arg2,_segment.ehdr & 0xfff00000 | uVar2,iVar4,iVar4);
                *(iVar4 + 0x188) = uVar5;
                if (uVar5 < 0xfffffffffffff001) {
                    cdev_init(iVar4 + 0x100,0);
                    uVar3 = cdev_add(iVar4 + 0x100,_segment.ehdr & 0xfff00000 | uVar2,1);
                    if (uVar3 == 0) {
                        return *(iVar4 + 0x188);
                    }
                    uVar5 = uVar3;
                    _printk(0x8000134,"qcom_create_ramdump_device",arg1,uVar5);
                    device_unregister(*(iVar4 + 0x188));
                }
                else {
                    _printk(0x800015a,"qcom_create_ramdump_device",arg1,uVar5 & 0xffffffff);
                }
                iVar1 = uVar5;
                ida_free(obj.rd_minor_id,uVar2);
            }
            kfree(iVar4);
            iVar6 = iVar1;
        }
    }
    return iVar6;
}


// ===== sym.qcom_destroy_ramdump_device @ 0x08001a64 (size 104) =====

void sym.qcom_destroy_ramdump_device(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x98);
    if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
        uVar1 = *(uVar2 + 0x180);
        cdev_del(uVar2 + 0x100);
        device_unregister(*(uVar2 + 0x188));
        ida_free(obj.rd_minor_id,uVar1 & 0xfffff);
        kfree(uVar2);
    }
    return;
}


// ===== sym.qcom_devcd_readv @ 0x08001acc (size 100) =====

void sym.qcom_devcd_readv(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_x0;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    iStack_20 = arg1;
    memory_read_from_buffer(in_x0,arg2,&iStack_20,*arg3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    puVar2 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_devcd_freev;
    vfree(*puVar2);
    complete_all(puVar2 + 1);
    return;
}


// ===== sym.qcom_devcd_freev @ 0x08001b30 (size 60) =====

void sym.qcom_devcd_freev(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    vfree(*arg1);
    complete_all(arg1 + 8);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001b6c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001bb0

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
    //switch table (4 cases) at 0x80000f8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001bc4);
    (*pcVar1)();
}

