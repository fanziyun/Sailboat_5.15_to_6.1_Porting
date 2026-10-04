// decompiled from block2mtd by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 328) =====

//WARNING: Switch with 1 destination removed at 0x08001f8c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x78f20136afc5a16e) {
            uVar2 = 0x8001180;
        }
        else if (arg1 == -0x44133be2196283d5) {
            uVar2 = 0x8001168;
        }
        else {
            if (arg1 != -0x3257ac40236d799f) goto code_r0x08001f4c;
            uVar2 = 0x8001150;
        }
    }
    else if (arg1 < 0x28961f2c4151831b) {
        if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x8001160;
        }
        else {
            if (arg1 != 0x199c66976d43c92e) goto code_r0x08001f4c;
            uVar2 = 0x8001170;
        }
    }
    else if (arg1 == 0x28961f2c4151831b) {
        uVar2 = 0x8001178;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001f4c;
        uVar2 = 0x8001158;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001f4c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001fa0);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFvP8mtd_infoE_global_addr @ 0x08001150 (size 8) =====

void sym.__typeid__ZTSFvP8mtd_infoE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sync_blockdev(*(*(param_1 + 400) + 0x10));
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001158 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = _obj.blkmtd_device_list;
    if (_obj.blkmtd_device_list != obj.blkmtd_device_list) {
        do {
            pcVar5 = *pcVar4;
            sync_blockdev(*(*(pcVar4 + 0x1a8) + 0x10));
            mtd_device_unregister(pcVar4 + 0x18);
            _printk(0x8000238,*(pcVar4 + 0x58),*(pcVar4 + 0x50) + 0xb);
            uVar3 = __list_del_entry_valid(pcVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *pcVar4;
                piVar2 = *(pcVar4 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            if (pcVar4 != NULL) {
                kfree(*(pcVar4 + 0x50));
                if (*(pcVar4 + 0x10) != 0) {
                    invalidate_mapping_pages(*(*(*(pcVar4 + 0x10) + 0x28) + 0x30),0,0xffffffffffffffff);
                    blkdev_put(*(pcVar4 + 0x10),0x83);
                }
                kfree(pcVar4);
            }
            pcVar4 = pcVar5;
        } while (pcVar5 != obj.blkmtd_device_list);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    return 0;
}


// ===== sym.block2mtd_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001168 (size 8) =====

uint64_t sym.block2mtd_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,int64_t param_5)

{
    int *piVar1;
    uint64_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 != 0) {
        iVar9 = *(param_1 + 400);
        uVar10 = param_2 & 0xfff;
        iVar7 = param_2 >> 0xc;
        do {
            uVar2 = 0x1000 - uVar10;
            if (param_3 + uVar10 < 0x1001) {
                uVar2 = param_3;
            }
            uVar6 = read_cache_page(*(*(*(iVar9 + 0x10) + 0x28) + 0x30),iVar7,0,0);
            if (0xfffffffffffff000 < uVar6) goto code_r0x08001a7c;
            iVar8 = uVar2;
            param_3 = param_3 - iVar8;
            memcpy(param_5,((uVar6 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + uVar10,iVar8);
            if ((*(uVar6 + 8) & 1) != 0) {
                uVar6 = *(uVar6 + 8) - 1;
            }
            piVar1 = uVar6 + 0x34;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar3 + -1 == 0) {
                __put_page(uVar6);
            }
            if (param_4 != NULL) {
                *param_4 = *param_4 + iVar8;
            }
            uVar10 = 0;
            param_5 = param_5 + iVar8;
            iVar7 = iVar7 + 1;
        } while (param_3 != 0);
    }
    uVar6 = 0;
code_r0x08001a7c:
    return uVar6 & 0xffffffff;
}


// ===== sym.block2mtd_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001170 (size 8) =====

int sym.block2mtd_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1)

{
    uint8_t *puVar1;
    int64_t *piVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint64_t uVar7;
    uchar *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong uVar13;
    int iVar14;
    uint8_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong *puStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_c0;
    uint8_t *puStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    puStack_178 = &uStack_170;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uVar7 = strnlen(param_1,0xb4);
    if (uVar7 < 0xb4) {
        strcpy(&uStack_170,param_1);
        puVar8 = strrchr(&uStack_170,10);
        if ((puVar8 != NULL) && (puVar8[1] == '\0')) {
            *puVar8 = 0;
        }
        iVar9 = strsep(&puStack_178,0x800033e);
        iVar10 = strsep(&puStack_178,0x800033e);
        if (puStack_178 != NULL) {
            uVar13 = 0x80003e7;
            goto code_r0x080016f0;
        }
        if (iVar9 == 0) {
            uVar13 = 0x80002ca;
            goto code_r0x080016f0;
        }
        iVar11 = strlen(iVar9);
        if (iVar11 - 0x50U < 0xffffffffffffffaf) {
            uVar13 = 0x800034e;
            goto code_r0x080016f0;
        }
        if (iVar10 == 0) {
            iVar4 = 0x1000;
code_r0x0800140c:
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            puStack_b8 = NULL;
            uStack_b0 = 0;
            piVar12 = kmem_cache_alloc_trace(_sync_blockdev,0xdc0,0x658);
            if (piVar12 != NULL) {
                uVar7 = blkdev_get_by_path(iVar9,0x83,piVar12);
                iVar5 = strlen(iVar9);
                iVar5 = iVar5 + -6;
                if (-1 < iVar5) {
                    iVar14 = 0;
                    while( true ) {
                        iVar10 = iVar14;
                        iVar6 = strncmp(iVar9 + iVar10,"block/",6);
                        if (iVar6 == 0) break;
                        iVar14 = iVar14 + 1;
                        if (iVar5 < iVar14) goto code_r0x080016f4;
                    }
                    strncpy(&puStack_b8,iVar9,iVar10);
                    strncpy(&puStack_b8 + iVar10,iVar9 + iVar10 + 6,iVar5 - iVar14);
                    if (uVar7 < 0xfffffffffffff001) {
code_r0x08001594:
                        piVar12[2] = uVar7;
                        if (*(uVar7 + 0x1c) >> 0x14 == 0x1f) {
                            uVar13 = 0x8000371;
                        }
                        else {
                            iVar16 = iVar4;
                            iVar11 = *(*(uVar7 + 0x28) + 0x50);
                            iVar10 = 0;
                            if (iVar16 != 0) {
                                iVar10 = iVar11 / iVar16;
                            }
                            if (iVar11 == iVar10 * iVar16) {
                                __mutex_init(piVar12 + 0xc5,"&dev->write_mutex",obj.blkmtd_device_list);
                                iVar9 = kasprintf(0xcc0,"block2mtd: %s",iVar9);
                                if (iVar9 != 0) {
                                    piVar12[10] = iVar9;
                                    uVar7 = *(*(piVar12[2] + 0x28) + 0x50);
                                    *(piVar12 + 0x2c) = 0x100000000001;
                                    *(piVar12 + 5) = iVar4;
                                    *(piVar12 + 3) = 1;
                                    *(piVar12 + 0x1c) = 0x1c00;
                                    piVar12[4] = uVar7 & 0xfffffffffffff000;
                                    piVar12[0x21] = sym.__typeid__ZTSFvP8mtd_infoE_global_addr;
                                    piVar12[0x11] = sym.block2mtd_erase.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    piVar12[0x14] = sym.block2mtd_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    piVar12[0x15] = sym.block2mtd_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    piVar12[0x35] = piVar12;
                                    piVar12[0x36] = obj.__this_module;
                                    iVar4 = mtd_device_parse_register(piVar12 + 3,0,0,0,0);
                                    piVar2 = _obj.blkmtd_device_list;
                                    if (iVar4 != 0) goto code_r0x0800167c;
                                    uVar7 = __list_add_valid(piVar12,obj.blkmtd_device_list,_obj.blkmtd_device_list);
                                    if ((uVar7 & 1) != 0) {
                                        piVar2[1] = piVar12;
                                        *piVar12 = piVar2;
                                        piVar12[1] = obj.blkmtd_device_list;
                                        _obj.blkmtd_device_list = piVar12;
                                    }
                                    _printk(0x8000305,piVar12[0xb],piVar12[10] + 0xb,*(piVar12 + 5) >> 10);
                                    uVar13 = 0x8000462;
                                    goto code_r0x080016f0;
                                }
                                goto code_r0x0800167c;
                            }
                            uVar13 = 0x8000408;
                        }
                        _printk(uVar13);
                    }
                    else {
                        wait_for_device_probe();
                        uVar13 = name_to_dev_t(&puStack_b8);
                        if (uVar13 != 0) {
                            uVar7 = blkdev_get_by_dev(uVar13,0x83,piVar12);
                        }
                        if (uVar7 < 0xfffffffffffff001) goto code_r0x08001594;
                        msleep(1000);
                        wait_for_device_probe();
                        uVar13 = name_to_dev_t(&puStack_b8);
                        if (uVar13 != 0) {
                            uVar7 = blkdev_get_by_dev(uVar13,0x83,piVar12);
                        }
                        bVar3 = 0xfffffffffffff000 < uVar7;
                        if (0xfffffffffffff000 < uVar7) {
                            msleep(1000);
                            wait_for_device_probe();
                            uVar13 = name_to_dev_t(&puStack_b8);
                            if (uVar13 != 0) {
                                uVar7 = blkdev_get_by_dev(uVar13,0x83,piVar12);
                            }
                            bVar3 = 0xfffffffffffff000 < uVar7;
                            if (0xfffffffffffff000 < uVar7) {
                                msleep(1000);
                                wait_for_device_probe();
                                uVar13 = name_to_dev_t(&puStack_b8);
                                if (uVar13 != 0) {
                                    uVar7 = blkdev_get_by_dev(uVar13,0x83,piVar12);
                                }
                                bVar3 = 0xfffffffffffff000 < uVar7;
                            }
                        }
                        if (!bVar3) goto code_r0x08001594;
                        _printk(0x80004af,iVar9);
                    }
code_r0x0800167c:
                    kfree(piVar12[10]);
                    if (piVar12[2] != 0) {
                        invalidate_mapping_pages(*(*(piVar12[2] + 0x28) + 0x30),0,0xffffffffffffffff);
                        blkdev_put(piVar12[2],0x83);
                    }
                    kfree(piVar12);
                }
            }
            goto code_r0x080016f4;
        }
        puStack_b8 = NULL;
        iVar4 = simple_strtoul(iVar10,&puStack_b8,0);
        uVar15 = *puStack_b8;
        switch(uVar15) {
        case 0x47:
            iVar4 = iVar4 << 10;
            break;
        default:
            goto code_r0x080013fc;
        case 0x4b:
        case 0x6b:
            goto code_r0x080013c4;
        case 0x4d:
            break;
        }
        iVar4 = iVar4 << 10;
code_r0x080013c4:
        if (puStack_b8[1] == 0x69) {
            iVar4 = iVar4 << 10;
            bVar3 = puStack_b8[2] != 0x42;
            puVar1 = puStack_b8 + 3;
            if (bVar3) {
                puVar1 = puStack_b8 + 2;
            }
            iVar10 = 2;
            if (!bVar3) {
                iVar10 = 3;
            }
            uVar15 = puStack_b8[iVar10];
            puStack_b8 = puVar1;
code_r0x080013fc:
            if (uVar15 == 0) goto code_r0x0800140c;
        }
        uVar13 = 0x80002e4;
    }
    else {
        uVar13 = 0x800048e;
    }
code_r0x080016f0:
    _printk(uVar13);
code_r0x080016f4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return 0;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18 = sym.block2mtd_erase;
    iVar16 = *(auVar17._0_8_ + 400);
    iVar10 = *auVar17._8_8_;
    iVar11 = auVar17._8_8_[1];
    iVar9 = iVar16 + 0x628;
    mutex_lock(iVar9);
    iVar4 = sym._block2mtd_erase(iVar16,iVar10,iVar11);
    mutex_unlock(iVar9);
    if (iVar4 != 0) {
        _printk(0x80003c3,iVar4);
    }
    return iVar4;
}


// ===== sym.block2mtd_erase.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001178 (size 8) =====

int sym.block2mtd_erase.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    int64_t arg2;
    int64_t arg3;
    int iVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 400);
    arg2 = *param_2;
    arg3 = param_2[1];
    iVar1 = arg1 + 0x628;
    mutex_lock(iVar1);
    iVar2 = sym._block2mtd_erase(arg1,arg2,arg3);
    mutex_unlock(iVar1);
    if (iVar2 != 0) {
        _printk(0x80003c3,iVar2);
    }
    return iVar2;
}


// ===== sym.block2mtd_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

uint32_t sym.block2mtd_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,int64_t param_2,int64_t param_3,ulong param_4,int64_t param_5)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 400);
    mutex_lock(arg1 + 0x628);
    uVar1 = sym._block2mtd_write(arg1,param_5,param_2,param_3);
    mutex_unlock(arg1 + 0x628);
    pcVar2 = *(arg1 + 0x108);
    if (pcVar2 != sym.__typeid__ZTSFvP8mtd_infoE_global_addr) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar2,0x80001c0);
    }
    (*pcVar2)(param_1);
    return uVar1 & uVar1 >> 0x1f;
}


// ===== sym.cleanup_module @ 0x08001188 (size 244) =====

void sym.cleanup_module(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = _obj.blkmtd_device_list;
    if (_obj.blkmtd_device_list != obj.blkmtd_device_list) {
        do {
            pcVar5 = *pcVar4;
            sync_blockdev(*(*(pcVar4 + 0x1a8) + 0x10));
            mtd_device_unregister(pcVar4 + 0x18);
            _printk(0x8000238,*(pcVar4 + 0x58),*(pcVar4 + 0x50) + 0xb);
            uVar3 = __list_del_entry_valid(pcVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *pcVar4;
                piVar2 = *(pcVar4 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            if (pcVar4 != NULL) {
                kfree(*(pcVar4 + 0x50));
                if (*(pcVar4 + 0x10) != 0) {
                    invalidate_mapping_pages(*(*(*(pcVar4 + 0x10) + 0x28) + 0x30),0,0xffffffffffffffff);
                    blkdev_put(*(pcVar4 + 0x10),0x83);
                }
                kfree(pcVar4);
            }
            pcVar4 = pcVar5;
        } while (pcVar5 != obj.blkmtd_device_list);
    }
    return;
}


// ===== sym.block2mtd_setup @ 0x0800127c (size 1348) =====

uint64_t sym.block2mtd_setup(int64_t arg1)

{
    uint8_t *puVar1;
    int64_t *piVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uchar *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    ulong uVar14;
    int iVar15;
    uint8_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong *puStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_c0;
    uint8_t *puStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    puStack_178 = &uStack_170;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uVar8 = strnlen(arg1,0xb4);
    if (uVar8 < 0xb4) {
        strcpy(&uStack_170,arg1);
        puVar9 = strrchr(&uStack_170,10);
        if ((puVar9 != NULL) && (puVar9[1] == '\0')) {
            *puVar9 = 0;
        }
        iVar10 = strsep(&puStack_178,0x800033e);
        iVar11 = strsep(&puStack_178,0x800033e);
        if (puStack_178 != NULL) {
            uVar14 = 0x80003e7;
            goto code_r0x080016f0;
        }
        if (iVar10 == 0) {
            uVar14 = 0x80002ca;
            goto code_r0x080016f0;
        }
        iVar12 = strlen(iVar10);
        if (iVar12 - 0x50U < 0xffffffffffffffaf) {
            uVar14 = 0x800034e;
            goto code_r0x080016f0;
        }
        if (iVar11 == 0) {
            iVar4 = 0x1000;
code_r0x0800140c:
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            puStack_b8 = NULL;
            uStack_b0 = 0;
            piVar13 = kmem_cache_alloc_trace(_sync_blockdev,0xdc0,0x658);
            if (piVar13 != NULL) {
                uVar8 = blkdev_get_by_path(iVar10,0x83,piVar13);
                iVar5 = strlen(iVar10);
                iVar5 = iVar5 + -6;
                if (-1 < iVar5) {
                    iVar15 = 0;
                    while( true ) {
                        iVar11 = iVar15;
                        iVar6 = strncmp(iVar10 + iVar11,"block/",6);
                        if (iVar6 == 0) break;
                        iVar15 = iVar15 + 1;
                        if (iVar5 < iVar15) goto code_r0x080016f4;
                    }
                    strncpy(&puStack_b8,iVar10,iVar11);
                    strncpy(&puStack_b8 + iVar11,iVar10 + iVar11 + 6,iVar5 - iVar15);
                    if (uVar8 < 0xfffffffffffff001) {
code_r0x08001594:
                        piVar13[2] = uVar8;
                        if (*(uVar8 + 0x1c) >> 0x14 == 0x1f) {
                            uVar14 = 0x8000371;
                        }
                        else {
                            iVar17 = iVar4;
                            iVar12 = *(*(uVar8 + 0x28) + 0x50);
                            iVar11 = 0;
                            if (iVar17 != 0) {
                                iVar11 = iVar12 / iVar17;
                            }
                            if (iVar12 == iVar11 * iVar17) {
                                __mutex_init(piVar13 + 0xc5,"&dev->write_mutex",obj.blkmtd_device_list);
                                iVar10 = kasprintf(0xcc0,"block2mtd: %s",iVar10);
                                if (iVar10 != 0) {
                                    piVar13[10] = iVar10;
                                    uVar8 = *(*(piVar13[2] + 0x28) + 0x50);
                                    *(piVar13 + 0x2c) = 0x100000000001;
                                    *(piVar13 + 5) = iVar4;
                                    *(piVar13 + 3) = 1;
                                    *(piVar13 + 0x1c) = 0x1c00;
                                    piVar13[4] = uVar8 & 0xfffffffffffff000;
                                    piVar13[0x21] = sym.__typeid__ZTSFvP8mtd_infoE_global_addr;
                                    piVar13[0x11] = sym.block2mtd_erase.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    piVar13[0x14] = sym.block2mtd_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    piVar13[0x15] = sym.block2mtd_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    piVar13[0x35] = piVar13;
                                    piVar13[0x36] = obj.__this_module;
                                    iVar4 = mtd_device_parse_register(piVar13 + 3,0,0,0,0);
                                    piVar2 = _obj.blkmtd_device_list;
                                    if (iVar4 != 0) goto code_r0x0800167c;
                                    uVar8 = __list_add_valid(piVar13,obj.blkmtd_device_list,_obj.blkmtd_device_list);
                                    if ((uVar8 & 1) != 0) {
                                        piVar2[1] = piVar13;
                                        *piVar13 = piVar2;
                                        piVar13[1] = obj.blkmtd_device_list;
                                        _obj.blkmtd_device_list = piVar13;
                                    }
                                    _printk(0x8000305,piVar13[0xb],piVar13[10] + 0xb,*(piVar13 + 5) >> 10);
                                    uVar14 = 0x8000462;
                                    goto code_r0x080016f0;
                                }
                                goto code_r0x0800167c;
                            }
                            uVar14 = 0x8000408;
                        }
                        _printk(uVar14);
                    }
                    else {
                        wait_for_device_probe();
                        uVar14 = name_to_dev_t(&puStack_b8);
                        if (uVar14 != 0) {
                            uVar8 = blkdev_get_by_dev(uVar14,0x83,piVar13);
                        }
                        if (uVar8 < 0xfffffffffffff001) goto code_r0x08001594;
                        msleep(1000);
                        wait_for_device_probe();
                        uVar14 = name_to_dev_t(&puStack_b8);
                        if (uVar14 != 0) {
                            uVar8 = blkdev_get_by_dev(uVar14,0x83,piVar13);
                        }
                        if (0xfffffffffffff000 < uVar8) {
                            msleep(1000);
                            uVar8 = wait_for_device_probe();
                            return uVar8;
                        }
                        if (uVar8 < 0xfffffffffffff001) goto code_r0x08001594;
                        _printk(0x80004af,iVar10);
                    }
code_r0x0800167c:
                    kfree(piVar13[10]);
                    if (piVar13[2] != 0) {
                        invalidate_mapping_pages(*(*(piVar13[2] + 0x28) + 0x30),0,0xffffffffffffffff);
                        blkdev_put(piVar13[2],0x83);
                    }
                    kfree(piVar13);
                }
            }
            goto code_r0x080016f4;
        }
        puStack_b8 = NULL;
        iVar4 = simple_strtoul(iVar11,&puStack_b8,0);
        uVar16 = *puStack_b8;
    //switch table (36 cases) at 0x80001e0
        switch(uVar16) {
        case 0x47:
            iVar4 = iVar4 << 10;
            break;
        default:
            goto code_r0x080013fc;
        case 0x4b:
        case 0x6b:
            goto code_r0x080013c4;
        case 0x4d:
            break;
        }
        iVar4 = iVar4 << 10;
code_r0x080013c4:
        if (puStack_b8[1] == 0x69) {
            iVar4 = iVar4 << 10;
            bVar3 = puStack_b8[2] != 0x42;
            puVar1 = puStack_b8 + 3;
            if (bVar3) {
                puVar1 = puStack_b8 + 2;
            }
            iVar11 = 2;
            if (!bVar3) {
                iVar11 = 3;
            }
            uVar16 = puStack_b8[iVar11];
            puStack_b8 = puVar1;
code_r0x080013fc:
            if (uVar16 == 0) goto code_r0x0800140c;
        }
        uVar14 = 0x80002e4;
    }
    else {
        uVar14 = 0x800048e;
    }
code_r0x080016f0:
    _printk(uVar14);
code_r0x080016f4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return 0;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18 = sym.block2mtd_erase;
    iVar17 = *(auVar18._0_8_ + 400);
    iVar11 = *auVar18._8_8_;
    iVar12 = auVar18._8_8_[1];
    iVar10 = iVar17 + 0x628;
    mutex_lock(iVar10);
    uVar7 = sym._block2mtd_erase(iVar17,iVar11,iVar12);
    mutex_unlock(iVar10);
    if (uVar7 != 0) {
        _printk(0x80003c3,uVar7);
    }
    return uVar7;
}


// ===== sym.block2mtd_erase @ 0x080017c0 (size 124) =====

int sym.block2mtd_erase(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t arg3;
    int iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 400);
    arg2_00 = *arg2;
    arg3 = *(arg2 + 8);
    iVar1 = arg1_00 + 0x628;
    mutex_lock(iVar1);
    iVar2 = sym._block2mtd_erase(arg1_00,arg2_00,arg3);
    mutex_unlock(iVar1);
    if (iVar2 != 0) {
        _printk(0x80003c3,iVar2);
    }
    return iVar2;
}


// ===== sym.block2mtd_write @ 0x0800183c (size 216) =====

uint32_t sym.block2mtd_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t in_x4;
    code *pcVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 400);
    mutex_lock(arg1_00 + 0x628);
    uVar1 = sym._block2mtd_write(arg1_00,in_x4,arg2,arg3);
    mutex_unlock(arg1_00 + 0x628);
    pcVar2 = *(arg1_00 + 0x108);
    if (pcVar2 != sym.__typeid__ZTSFvP8mtd_infoE_global_addr) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar2,0x80001c0);
    }
    (*pcVar2)(arg1);
    return uVar1 & uVar1 >> 0x1f;
}


// ===== sym.block2mtd_sync @ 0x08001914 (size 44) =====

void sym.block2mtd_sync(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sync_blockdev(*(*(arg1 + 400) + 0x10));
    return;
}


// ===== sym.block2mtd_read @ 0x08001940 (size 388) =====

uint64_t sym.block2mtd_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    uint64_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    int64_t in_x4;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        iVar8 = *(arg1 + 400);
        uVar9 = arg2 & 0xfff;
        arg2 = arg2 >> 0xc;
        do {
            uVar2 = 0x1000 - uVar9;
            if (arg3 + uVar9 < 0x1001) {
                uVar2 = arg3;
            }
            uVar6 = read_cache_page(*(*(*(iVar8 + 0x10) + 0x28) + 0x30),arg2,0,0);
            if (0xfffffffffffff000 < uVar6) goto code_r0x08001a7c;
            iVar7 = uVar2;
            arg3 = arg3 - iVar7;
            memcpy(in_x4,((uVar6 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + uVar9,iVar7);
            if ((*(uVar6 + 8) & 1) != 0) {
                uVar6 = *(uVar6 + 8) - 1;
            }
            piVar1 = uVar6 + 0x34;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar3 + -1 == 0) {
                __put_page(uVar6);
            }
            if (arg4 != 0) {
                *arg4 = *arg4 + iVar7;
            }
            uVar9 = 0;
            in_x4 = in_x4 + iVar7;
            arg2 = arg2 + 1;
        } while (arg3 != 0);
    }
    uVar6 = 0;
code_r0x08001a7c:
    return uVar6 & 0xffffffff;
}


// ===== sym._block2mtd_erase @ 0x08001ac4 (size 536) =====

uint64_t sym._block2mtd_erase(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t *puVar6;
    uint64_t *puVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar12 = arg3 >> 0xc;
    if (uVar12 != 0) {
        arg2 = arg2 >> 0xc;
        uVar11 = *(*(*(arg1 + 0x10) + 0x28) + 0x30);
        do {
            puVar6 = read_cache_page(uVar11,arg2,0,0);
            if (0xfffffffffffff000 < puVar6) goto code_r0x08001c78;
            uVar13 = (puVar6 & 0x3ffffffffffc0) << 6;
            piVar8 = uVar13 | 0xff00000000000000;
            do {
                if ((uVar13 | 0xff00000000000000) + 0x1000 <= piVar8) goto code_r0x08001c04;
                iVar10 = *piVar8;
                piVar8 = piVar8 + 1;
            } while (iVar10 == -1);
            if ((puVar6[1] & 1) == 0) {
                puVar7 = puVar6;
                if ((*puVar6 & 1) != 0) goto code_r0x08001bb8;
code_r0x08001ba4:
                Hint_Prefetch(puVar7,2,0,1);
                do {
                    uVar9 = *puVar7;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar7,0x10);
                    if (bVar4) {
                        *puVar7 = uVar9 | 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if ((uVar9 & 1) != 0) goto code_r0x08001bb8;
            }
            else {
                puVar7 = puVar6[1] - 1;
                if ((*puVar7 & 1) == 0) goto code_r0x08001ba4;
code_r0x08001bb8:
                __lock_page(puVar6);
            }
            memset(uVar13 | 0xff00000000000000,0xff,0x1000);
            set_page_dirty(puVar6);
            unlock_page(puVar6);
            balance_dirty_pages_ratelimited(uVar11);
code_r0x08001c04:
            if ((puVar6[1] & 1) != 0) {
                puVar6 = puVar6[1] - 1;
            }
            piVar1 = puVar6 + 0x34;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar2 + -1 == 0) {
                __put_page(puVar6);
            }
            uVar5 = uVar12 - 1;
            uVar12 = uVar5;
            arg2 = arg2 + 1;
        } while (uVar5 != 0);
    }
    puVar6 = NULL;
code_r0x08001c78:
    return puVar6 & 0xffffffff;
}


// ===== sym._block2mtd_write @ 0x08001cdc (size 620) =====

uint64_t sym._block2mtd_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint64_t *puVar5;
    int64_t *in_x4;
    uint64_t *puVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = arg3 >> 0xc;
    uVar9 = *(*(*(arg1 + 0x10) + 0x28) + 0x30);
    _printk(0x80004da,arg4,iVar8);
    if (arg4 != 0) {
        uVar12 = arg3 & 0xfff;
        do {
            uVar11 = 0x1000 - uVar12;
            if (arg4 + uVar12 < 0x1001) {
                uVar11 = arg4;
            }
            puVar5 = read_cache_page(uVar9,iVar8,0,0);
            if (0xfffffffffffff000 < puVar5) goto code_r0x08001edc;
            iVar10 = uVar11;
            arg4 = arg4 - iVar10;
            uVar11 = (puVar5 & 0x3ffffffffffc0) << 6;
            iVar4 = bcmp((uVar11 | 0xff00000000000000) + uVar12,arg2,iVar10);
            if (iVar4 != 0) {
                if ((puVar5[1] & 1) == 0) {
                    puVar6 = puVar5;
                    if ((*puVar5 & 1) != 0) goto code_r0x08001df4;
code_r0x08001de0:
                    Hint_Prefetch(puVar6,2,0,1);
                    do {
                        uVar7 = *puVar6;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar6,0x10);
                        if (bVar3) {
                            *puVar6 = uVar7 | 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if ((uVar7 & 1) != 0) goto code_r0x08001df4;
                }
                else {
                    puVar6 = puVar5[1] - 1;
                    if ((*puVar6 & 1) == 0) goto code_r0x08001de0;
code_r0x08001df4:
                    __lock_page(puVar5);
                }
                memcpy((uVar11 | 0xff00000000000000) + uVar12,arg2,iVar10);
                set_page_dirty(puVar5);
                unlock_page(puVar5);
                balance_dirty_pages_ratelimited(uVar9);
            }
            if ((puVar5[1] & 1) != 0) {
                puVar5 = puVar5[1] - 1;
            }
            piVar1 = puVar5 + 0x34;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar4 + -1 == 0) {
                __put_page(puVar5);
            }
            if (in_x4 != NULL) {
                *in_x4 = *in_x4 + iVar10;
            }
            uVar12 = 0;
            arg2 = arg2 + iVar10;
            iVar8 = iVar8 + 1;
        } while (arg4 != 0);
    }
    _printk(0x8000441);
    puVar5 = NULL;
code_r0x08001edc:
    return puVar5 & 0xffffffff;
}


// ===== sym.__cfi_check_fail @ 0x08001f48 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001f8c

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
    //switch table (4 cases) at 0x8000205
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001fa0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001fa4 (size 16) =====

ulong sym.init_module(int64_t arg1)

{
    return 0;
}

