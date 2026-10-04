// decompiled from zram by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 816) =====

//WARNING: Switch with 1 destination removed at 0x08002a78

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x38eae42549c4ccb7) {
            if (arg1 < -0x53b2a07f45847ee6) {
                if (arg1 != -0x6e7a54feaea2d953) {
                    if ((arg1 == -0x66d421a09845f9f8) && ((pcVar1 + -0x80023c0 >> 3 | pcVar1 << 0x3d) < 0x14)) {
                        return;
                    }
                    goto code_r0x08002a38;
                }
                pcVar2 = sym.zcomp_cpu_up_prepare.cfi_jt;
            }
            else {
                if (arg1 != -0x53b2a07f45847ee6) {
                    if (arg1 != -0x5324bef43a497a1c) goto code_r0x08002a38;
                    pcVar2 = sym.hot_remove_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    goto code_r0x08002320;
                }
                pcVar2 = sym.mem_cgroup_anno_writeback_enable_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
code_r0x080022f0:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002a38;
        }
        if (arg1 < -0xe8b8b0caeab93d2) {
            if (arg1 == -0x38eae42549c4ccb7) {
                pcVar2 = sym.zram_remove_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x33682c7c28f1a667) goto code_r0x08002a38;
                pcVar2 = sym.zram_rw_page.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 == -0xe8b8b0caeab93d2) {
            pcVar2 = sym.zram_page_end_io.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != -0xdc876b5405dcc73) goto code_r0x08002a38;
            pcVar2 = sym.clean_pages_life.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x33199aac1c784c1e) {
        if (0x1cec5f74e4b2b0ea < arg1) {
            if (arg1 != 0x1cec5f74e4b2b0eb) {
                if ((arg1 == 0x1e3d0ffe3d0499e9) && ((pcVar1 + -0x8002460 >> 3 | pcVar1 << 0x3d) < 0x10)) {
                    return;
                }
                goto code_r0x08002a38;
            }
            pcVar2 = sym.mem_cgroup_anno_writeback_protected_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x080022f0;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x1c9afa2096c922f5) goto code_r0x08002a38;
            pcVar2 = sym.zram_slot_free_notify.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x58feafdbd637d8df) {
        if (arg1 == 0x33199aac1c784c1e) {
            pcVar2 = sym.zram_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x4a47875dcd644744) goto code_r0x08002a38;
            pcVar2 = sym.hot_add_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x58feafdbd637d8df) {
        pcVar2 = sym.zram_submit_bio.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002a38;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x08002320:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002a38:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002a8c);
    (*pcVar1)();
}


// ===== sym.zram_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002338 (size 8) =====

uint sym.zram_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint64_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = mutex_is_locked(*(param_1 + 0x3f0) + 0x70);
    if ((uVar2 & 1) != 0) {
        uVar3 = 0;
        if (*(*(*(param_1 + 0x3f0) + 0x58) + 0x1a0) != '\0') {
            uVar3 = 0xfffffff0;
        }
        return uVar3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8003aa8);
    (*pcVar1)();
}


// ===== sym.zram_rw_page.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002340 (size 8) =====

int sym.zram_rw_page.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
              (int64_t param_1,uint64_t param_2,ulong *param_3,uint32_t param_4)

{
    char cVar1;
    bool bVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t *extraout_x8;
    int64_t *piVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    ulong *puStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    if ((*param_3 >> 0x10 & 1) != 0) {
        iVar4 = -0x20c;
        goto code_r0x08003bb8;
    }
    iVar8 = *(*(param_1 + 0x3f0) + 0x58);
    if ((((param_2 & 7) == 0) && (param_2 < 0xfffffffffffffff8)) &&
       (uVar6 = *(iVar8 + 0x118) >> 9, param_2 < uVar6 && param_2 + 8 <= uVar6)) {
        uStack_50 = 0x1000;
        puStack_58 = param_3;
        uVar5 = disk_start_io_acct(*(param_1 + 0x3f0),8,param_4);
        iVar4 = sym.zram_bvec_rw(iVar8,&puStack_58,param_2 >> 3 & 0xffffffff,param_4);
        disk_end_io_acct(*(param_1 + 0x3f0),param_4,uVar5);
        if (iVar4 < 0) goto code_r0x08003bb8;
        if (iVar4 == 1) {
            iVar4 = 0;
            goto code_r0x08003bb8;
        }
        if (iVar4 != 0) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8003bb8);
            (*pcVar3)();
        }
        page_endio(param_3,param_4 & 1,0);
        goto code_r0x08003bb8;
    }
    piVar7 = iVar8 + 0x90;
    while( true ) {
        Hint_Prefetch(piVar7,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
                *piVar7 = *piVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        iVar4 = -0x16;
code_r0x08003bb8:
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        piVar7 = extraout_x8;
    }
    return iVar4;
}


// ===== sym.zram_remove_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002348 (size 8) =====

ulong sym.zram_remove_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.zram_remove(param_2);
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08002350 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = __cpuhp_setup_state(0x42,"block/zram:prepare",0,sym.zcomp_cpu_up_prepare.cfi_jt,
                                sym.zcomp_cpu_dead.cfi_jt,1);
    if (uVar2 < 0) {
        uVar4 = uVar2;
    }
    else {
        uVar4 = __class_register(obj.zram_control_class,obj.zram_init.__key);
        if (uVar4 == 0) {
            _segment.ehdr = __register_blkdev(uVar4,"zram",0);
            if (_segment.ehdr < 1) {
                _printk(0x8001707);
                class_unregister(obj.zram_control_class);
                __cpuhp_remove_state(0x42,0);
                uVar4 = 0xfffffff0;
            }
            else {
                for (; _segment.ehdr != 0; _segment.ehdr = _segment.ehdr + -1) {
                    mutex_lock(obj.zram_index_mutex);
                    uVar2 = sym.zram_add();
                    mutex_unlock(obj.zram_index_mutex);
                    if (uVar2 < 0) {
                        sym.destroy_devices();
                        return uVar2;
                    }
                }
                iVar3 = cgroup_add_legacy_cftypes(memory_cgrp_subsys,"anno_writeback_enable");
                if (iVar3 != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8008124);
                    (*pcVar1)();
                }
                iVar3 = cgroup_add_legacy_cftypes(memory_cgrp_subsys,"anno_writeback_protected");
                uVar4 = 0;
                if (iVar3 != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x80080a8);
                    (*pcVar1)();
                }
            }
        }
        else {
            uVar4 = uVar4 & 0xffffffff;
            _printk(0x80016d8);
            __cpuhp_remove_state(0x42,0);
        }
    }
    return uVar4;
}


// ===== sym.zcomp_cpu_up_prepare.cfi_jt @ 0x08002358 (size 8) =====

ulong sym.zcomp_cpu_up_prepare.cfi_jt(uint32_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    code *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (0x1f < param_1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8002894);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    piVar1 = *(__per_cpu_offset + param_1 * 8) + *(param_2 + -0x10);
    iVar3 = crypto_alloc_base(*(param_2 + -8),2,0xf);
    piVar1[1] = iVar3;
    iVar3 = __get_free_pages(0xdc0,1);
    uVar4 = piVar1[1];
    *piVar1 = iVar3;
    if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
        if (iVar3 != 0) {
            return 0;
        }
        crypto_destroy_tfm(uVar4);
        iVar3 = *piVar1;
    }
    free_pages(iVar3,1);
    *piVar1 = 0;
    piVar1[1] = 0;
    _printk(0x8001a13);
    return 0xfffffff4;
}


// ===== sym.zcomp_cpu_dead.cfi_jt @ 0x08002360 (size 8) =====

ulong sym.zcomp_cpu_dead.cfi_jt(uint32_t param_1,int64_t param_2)

{
    ulong *puVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 < 0x20) {
        *in_x18 = unaff_x30;
        puVar1 = *(__per_cpu_offset + param_1 * 8) + *(param_2 + -0x10);
        uVar3 = puVar1[1];
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            crypto_destroy_tfm(uVar3,uVar3);
        }
        free_pages(*puVar1,1);
        *puVar1 = 0;
        puVar1[1] = 0;
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800290c);
    (*pcVar2)();
}


// ===== sym.hot_remove_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002368 (size 8) =====

int64_t sym.hot_remove_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_2c = 0;
    iVar1 = kstrtoint(param_3,10,&iStack_2c);
    if (iVar1 == 0) {
        if (iStack_2c < 0) {
            param_4 = -0x16;
        }
        else {
            mutex_lock(obj.zram_index_mutex);
            iVar2 = idr_find(obj.zram_index_idr,iStack_2c);
            if (iVar2 == 0) {
                iVar1 = -0x13;
            }
            else {
                iVar1 = sym.zram_remove(iVar2);
                if (iVar1 == 0) {
                    idr_remove(obj.zram_index_idr,iStack_2c);
                    mutex_unlock(obj.zram_index_mutex);
                    goto code_r0x08002ea4;
                }
            }
            mutex_unlock(obj.zram_index_mutex);
            param_4 = iVar1;
        }
    }
    else {
        param_4 = iVar1;
    }
code_r0x08002ea4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.zram_remove;
    iVar3 = *(*(iVar2 + 0x18) + 0x40);
    mutex_lock(*(iVar3 + 0x3f0) + 0x70);
    if ((*(iVar3 + 0x20) == 0) && (*(iVar2 + 0x1a0) == '\0')) {
        *(iVar2 + 0x1a0) = 1;
        mutex_unlock(*(iVar3 + 0x3f0) + 0x70);
        fsync_bdev(iVar3);
        sym.zram_reset_device(iVar2);
        if (*(iVar2 + 0x1d8) != 0) {
            __free_pages(*(iVar2 + 0x1d8),0);
            iVar3 = 0x40;
            do {
                __free_pages(*(iVar2 + 0x1d8) + iVar3,0);
                iVar3 = iVar3 + 0x40;
            } while (iVar3 != 0x800);
        }
        _printk(0x8001844,*(iVar2 + 0x18) + 0xc);
        del_gendisk(*(iVar2 + 0x18));
        blk_cleanup_disk(*(iVar2 + 0x18));
        kfree(iVar2);
        iVar2 = 0;
    }
    else {
        mutex_unlock(*(iVar3 + 0x3f0) + 0x70);
        iVar2 = 0xfffffff0;
    }
    return iVar2;
}


// ===== sym.clean_pages_life.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002370 (size 8) =====

void sym.clean_pages_life.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int *piVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_1 + -0x18;
    if ((piVar1 != NULL) && (*piVar1 != 0)) {
        *piVar1 = 0;
        if (*(param_1 + -0x10) != 0) {
            kfree();
            *(param_1 + -0x10) = 0;
        }
        kfree(piVar1);
    }
    return;
}


// ===== sym.hot_add_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002378 (size 8) =====

int64_t sym.hot_add_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.zram_index_mutex);
    iVar1 = sym.zram_add();
    mutex_unlock(obj.zram_index_mutex);
    if (-1 < iVar1) {
        iVar1 = scnprintf(param_3,0x1000,0x80019d1,iVar1);
    }
    return iVar1;
}


// ===== sym.zram_submit_bio.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002380 (size 8) =====

ulong sym.zram_submit_bio.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char cVar4;
    uint32_t uVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t *extraout_x8;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    ulong unaff_x30;
    int iStack_80;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar9 = *(param_1 + 0x20);
    iVar12 = *(*(*(param_1 + 8) + 0x3f0) + 0x58);
    if ((((uVar9 & 7) != 0 || (*(param_1 + 0x28) & 0xfff) != 0) ||
        (uVar13 = *(param_1 + 0x28) >> 9, CARRY8(uVar9,uVar13))) ||
       (uVar11 = *(iVar12 + 0x118) >> 9, uVar11 <= uVar9 || uVar11 < uVar9 + uVar13)) {
        piVar10 = iVar12 + 0x90;
        while( true ) {
            Hint_Prefetch(piVar10,2,0,1);
            do {
                cVar4 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar10,0x10);
                if (bVar6) {
                    *piVar10 = *piVar10 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            *(param_1 + 0x1a) = 10;
code_r0x080039e0:
            bio_endio(param_1);
            iVar12 = sp_el0;
            if (*(iVar12 + 0x5e0) == iStack_68) break;
            __stack_chk_fail();
            piVar10 = extraout_x8;
        }
        return 0xffffffff;
    }
    uVar13 = uVar9 >> 3;
    uVar14 = (uVar9 & 7) << 9;
    if ((*(param_1 + 0x10) == '\t') || (*(param_1 + 0x10) == '\x03')) {
        sym.zram_bio_discard(iVar12,uVar13 & 0xffffffff,uVar14,param_1);
        goto code_r0x080039e0;
    }
    uVar8 = bio_start_io_acct(param_1);
    uVar16 = *(param_1 + 0x28);
    if (uVar16 != 0) {
        iStack_80 = *(param_1 + 0x30);
        uStack_7c = *(param_1 + 0x2c);
        do {
            piVar10 = *(param_1 + 0x78) + uStack_7c * 0x10;
            uVar1 = *(piVar10 + 0xc) + iStack_80;
            uVar5 = piVar10[1] - iStack_80;
            uVar15 = uVar1 & 0xfff;
            uVar3 = uVar16;
            if (uVar5 <= uVar16) {
                uVar3 = uVar5;
            }
            if (0x1000 - uVar15 <= uVar3) {
                uVar3 = 0x1000 - uVar15;
            }
            iStack_78 = *piVar10 + (uVar1 >> 0xc) * 0x40;
            uVar1 = uVar3;
            do {
                uVar5 = 0x1000 - uVar14;
                if (uVar1 <= 0x1000 - uVar14) {
                    uVar5 = uVar1;
                }
                uStack_70 = uVar5;
                uStack_6c = uVar15;
                iVar7 = sym.zram_bvec_rw(iVar12,&iStack_78,uVar13 & 0xffffffff,*(param_1 + 0x10));
                if (iVar7 < 0) {
                    *(param_1 + 0x1a) = 10;
                    break;
                }
                uVar2 = uVar5 + uVar14;
                uVar15 = uVar5 + uVar15;
                uVar1 = uVar1 - uVar5;
                uVar14 = uVar2 & 0xfff;
                uVar13 = uVar13 + (uVar2 >> 0xc);
                uStack_6c = uVar15;
            } while (uVar1 != 0);
            if ((9 < *(param_1 + 0x10)) || ((1 << (*(param_1 + 0x10) & 0x1f) & 0x2a8U) == 0)) {
                iVar7 = uVar3 + iStack_80;
                bVar6 = iVar7 == *(*(param_1 + 0x78) + uStack_7c * 0x10 + 8);
                if (bVar6) {
                    uStack_7c = uStack_7c + 1;
                }
                iStack_80 = 0;
                if (!bVar6) {
                    iStack_80 = iVar7;
                }
            }
            uVar16 = uVar16 - uVar3;
        } while (uVar16 != 0);
    }
    bio_end_io_acct_remapped(param_1,uVar8,*(param_1 + 8));
    goto code_r0x080039e0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002388 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.destroy_devices();
    return;
}


// ===== sym.zram_page_end_io.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002390 (size 8) =====

void sym.zram_page_end_io.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint uVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x14) >> 1 & 1) == 0) {
        uVar1 = *(param_1 + 0x10);
        uVar4 = **(param_1 + 0x78);
        uVar3 = blk_status_to_errno(*(param_1 + 0x1a));
        page_endio(uVar4,uVar1 & 1,uVar3);
        bio_put(param_1);
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x800497c);
    (*pcVar2)();
}


// ===== sym.mem_cgroup_anno_writeback_enable_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002398 (size 8) =====

ulong sym.mem_cgroup_anno_writeback_enable_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    return *(param_1 + 4000);
}


// ===== sym.mem_cgroup_anno_writeback_protected_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023a0 (size 8) =====

ulong sym.mem_cgroup_anno_writeback_protected_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0xfa8);
}


// ===== sym.mem_cgroup_anno_writeback_protected_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023a8 (size 8) =====

ulong sym.mem_cgroup_anno_writeback_protected_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int64_t param_3)

{
    if ((param_3 != 0) && (*(param_1 + 0xe0) != 0)) {
        *(param_1 + 0xfa8) = 1;
    }
    return 0;
}


// ===== sym.mem_cgroup_anno_writeback_enable_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023b0 (size 8) =====

ulong sym.mem_cgroup_anno_writeback_enable_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int64_t param_3)

{
    if ((param_3 != 0) && (*(param_1 + 0xe0) != 0)) {
        *(param_1 + 4000) = 2;
    }
    return 0;
}


// ===== sym.zram_slot_free_notify.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023b8 (size 8) =====

void sym.zram_slot_free_notify.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(param_1 + 0x3f0) + 0x58);
    piVar1 = piVar8 + 0x13;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    iVar5 = sp_el0;
    iVar6 = *piVar8;
    *(iVar5 + 0x10) = *(iVar5 + 0x10) + 1;
    puVar2 = iVar6 + (param_2 & 0xffffffff) * 0x18 + 8;
    if ((*puVar2 >> 0xd & 1) == 0) {
        Hint_Prefetch(puVar2,2,0,1);
        do {
            uVar7 = *puVar2;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
                *puVar2 = uVar7 | 0x2000;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if ((uVar7 >> 0xd & 1) == 0) {
            sym.zram_free_page(piVar8,param_2);
            puVar2 = *piVar8 + (param_2 & 0xffffffff) * 0x18 + 8;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                    *puVar2 = *puVar2 & 0xffffffffffffdfff;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar6 = *(iVar5 + 0x10) + -1;
            *(iVar5 + 0x10) = iVar6;
            if ((iVar6 != 0) && (*(iVar5 + 0x10) != 0)) {
                return;
            }
            preempt_schedule();
            return;
        }
    }
    iVar6 = *(iVar5 + 0x10) + -1;
    *(iVar5 + 0x10) = iVar6;
    if ((iVar6 == 0) || (*(iVar5 + 0x10) == 0)) {
        preempt_schedule();
    }
    piVar8 = piVar8 + 0x1e;
    Hint_Prefetch(piVar8,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
            *piVar8 = *piVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    return;
}


// ===== sym.mm_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023c0 (size 8) =====

int64_t sym.mm_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    char *arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    down_read(iVar3 + 0x20);
    if (*(iVar3 + 0x118) == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = zs_get_total_pages(*(iVar3 + 8));
        zs_pool_stats(*(iVar3 + 8),&uStack_40);
        iVar2 = iVar2 << 0xc;
    }
    arg2 = "%8llu %8llu %8llu %8lu %8ld %8llu %8lu %8llu %8llu %8llu %8llu %8llu\n";
    iVar1 = scnprintf(param_3,0x1000,"%8llu %8llu %8llu %8lu %8ld %8llu %8lu %8llu %8llu %8llu %8llu %8llu\n",
                      *(iVar3 + 200) << 0xc,*(iVar3 + 0x68),iVar2,*(iVar3 + 0x60) << 0xc,*(iVar3 + 0xe0) << 0xc,
                      *(iVar3 + 0xa0),uStack_40,*(iVar3 + 0xa8),*(iVar3 + 0xb0),*(iVar3 + 0xd0),*(iVar3 + 0xb8),
                      *(iVar3 + 0xc0) >> 0xc);
    up_read(iVar3 + 0x20);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x8007318;
    iVar3 = sym.get_idle_or_new_pages(*(*(iVar3 + 0x3b0) + 0x58),arg2,1);
    return iVar3;
}


// ===== sym.writeback_limit_enable_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023c8 (size 8) =====

int64_t sym.writeback_limit_enable_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    uchar uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    down_read(iVar3 + 0x20);
    _raw_spin_lock(iVar3 + 0x1b0);
    uVar1 = *(iVar3 + 0x1b4);
    _raw_spin_unlock(iVar3 + 0x1b0);
    up_read(iVar3 + 0x20);
    iVar2 = scnprintf(param_3,0x1000,0x80019d1,uVar1);
    return iVar2;
}


// ===== sym.memory_freeze_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023d0 (size 8) =====

int64_t sym.memory_freeze_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001897,*0x8001000);
    return iVar1;
}


// ===== sym.io_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023d8 (size 8) =====

int64_t sym.io_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    iVar1 = scnprintf(param_3,0x1000,"%8llu %8llu %8llu %8llu\n",*(iVar2 + 0x80),*(iVar2 + 0x88),*(iVar2 + 0x90),
                      *(iVar2 + 0x98));
    up_read(iVar2 + 0x20);
    return iVar1;
}


// ===== sym.new_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023e0 (size 8) =====

void sym.new_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.get_idle_or_new_pages(*(*(param_1 + 0x3b0) + 0x58),param_3,0);
    return;
}


// ===== sym.pages_life_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023e8 (size 8) =====

int64_t sym.pages_life_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x3b0) + 0x58);
    __rcu_read_lock();
    puVar3 = *(iVar2 + 0x1e0);
    if (puVar3 == NULL) {
        iVar2 = -0x16;
    }
    else if (*puVar3 == 0) {
        iVar2 = 0;
    }
    else {
        uVar4 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x800178b,*(*(puVar3 + 2) + uVar4 * 4));
            iVar2 = iVar2 + iVar1;
            uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar3);
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,">%d\n",*(*(puVar3 + 2) + uVar4 * 4 + -4));
        iVar2 = iVar2 + iVar1;
        if (*puVar3 != 0xffffffff) {
            uVar4 = 0;
            do {
                iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%lu\t",*(*(puVar3 + 4) + uVar4 * 8));
                iVar2 = iVar2 + iVar1;
                uVar4 = uVar4 + 1;
            } while (uVar4 < *puVar3 + 1);
        }
        *(iVar2 + param_3 + -1) = 10;
    }
    __rcu_read_unlock();
    return iVar2;
}


// ===== sym.initstate_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023f0 (size 8) =====

int64_t sym.initstate_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    iVar3 = *(iVar3 + 0x118);
    up_read(iVar1);
    iVar2 = scnprintf(param_3,0x1000,0x8001897,iVar3 != 0);
    return iVar2;
}


// ===== sym.debug_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023f8 (size 8) =====

int64_t sym.debug_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    iVar1 = scnprintf(param_3,0x1000,"version: %d\n%8llu %8llu\n",1,*(iVar2 + 0xe8),*(iVar2 + 0xf0));
    up_read(iVar2 + 0x20);
    return iVar1;
}


// ===== sym.origin_pages_max_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002400 (size 8) =====

int64_t sym.origin_pages_max_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    iVar2 = scnprintf(param_3,0x1000,"%8lld\n",*(iVar3 + 0xd8));
    up_read(iVar1);
    return iVar2;
}


// ===== sym.wb_pages_max_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002408 (size 8) =====

int64_t sym.wb_pages_max_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    iVar2 = scnprintf(param_3,0x1000,"%8lld\n",*(iVar3 + 0x110));
    up_read(iVar1);
    return iVar2;
}


// ===== sym.comp_algorithm_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002410 (size 8) =====

ulong sym.comp_algorithm_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    uVar2 = sym.zcomp_available_show(iVar3 + 0x120,param_3);
    up_read(iVar1);
    return uVar2;
}


// ===== sym.bd_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002418 (size 8) =====

int64_t sym.bd_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    iVar1 = scnprintf(param_3,0x1000,"%8llu %8llu %8llu\n",*(iVar2 + 0xf8),*(iVar2 + 0x100),*(iVar2 + 0x108));
    up_read(iVar2 + 0x20);
    return iVar1;
}


// ===== sym.max_comp_streams_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002420 (size 8) =====

int64_t sym.max_comp_streams_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80019d1,___num_online_cpus);
    return iVar1;
}


// ===== sym.low_compress_ratio_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002428 (size 8) =====

int64_t sym.low_compress_ratio_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001897,*0x8001000);
    return iVar1;
}


// ===== sym.idle_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002430 (size 8) =====

void sym.idle_stat_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.get_idle_or_new_pages(*(*(param_1 + 0x3b0) + 0x58),param_3,1);
    return;
}


// ===== sym.disksize_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002438 (size 8) =====

int64_t sym.disksize_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%llu\n",*(*(*(param_1 + 0x3b0) + 0x58) + 0x118));
    return iVar1;
}


// ===== sym.backing_dev_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002440 (size 8) =====

uint64_t sym.backing_dev_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,uint *param_3)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    iVar3 = *(iVar3 + 0x1a8);
    if (iVar3 == 0) {
        uVar2 = 5;
        *(param_3 + 1) = 10;
        *param_3 = 0x656e6f6e;
    }
    else {
        uVar2 = file_path(iVar3,param_3,0xfff);
        if (uVar2 < 0xfffffffffffff001) {
            iVar3 = strlen(uVar2);
            memmove(param_3,uVar2,iVar3);
            uVar2 = iVar3 + 1;
            *(param_3 + iVar3) = 10;
        }
    }
    up_read(iVar1);
    return uVar2;
}


// ===== sym.writeback_limit_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002448 (size 8) =====

int64_t sym.writeback_limit_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    _raw_spin_lock(iVar2 + 0x1b0);
    uVar3 = *(iVar2 + 0x1b8);
    _raw_spin_unlock(iVar2 + 0x1b0);
    up_read(iVar2 + 0x20);
    iVar1 = scnprintf(param_3,0x1000,"%llu\n",uVar3);
    return iVar1;
}


// ===== sym.avg_size_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002450 (size 8) =====

int64_t sym.avg_size_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%8llu\n",*(*(*(param_1 + 0x3b0) + 0x58) + 0x1f8));
    return iVar1;
}


// ===== sym.time_list_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002458 (size 8) =====

int64_t sym.time_list_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    if ((*(iVar2 + 0x118) == 0) || (puVar4 = *(iVar2 + 0x1e0), puVar4 == NULL)) {
        iVar3 = -0x16;
    }
    else if (*puVar4 == 0) {
        iVar3 = 0;
    }
    else {
        uVar5 = 0;
        iVar3 = 0;
        do {
            iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,0x800178b,*(*(puVar4 + 2) + uVar5 * 4));
            iVar3 = iVar3 + iVar1;
            uVar5 = uVar5 + 1;
        } while (uVar5 < *puVar4);
        iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,">%d\n",*(*(puVar4 + 2) + uVar5 * 4 + -4));
        iVar3 = iVar3 + iVar1;
    }
    up_read(iVar2 + 0x20);
    return iVar3;
}


// ===== sym.backing_dev_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002460 (size 8) =====

int64_t sym.backing_dev_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t arg1;
    int iVar8;
    uint16_t *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x3b0) + 0x58);
    iVar2 = kmem_cache_alloc_trace(_crypto_has_alg,0xcc0,0x1000);
    if (iVar2 == 0) {
        return -0xc;
    }
    iVar1 = arg1 + 0x20;
    down_write(iVar1);
    if (*(arg1 + 0x118) == 0) {
        strlcpy(iVar2,param_3,0x1000);
        iVar3 = strlen(iVar2);
        if ((iVar3 != 0) && (*(iVar2 + iVar3 + -1) == '\n')) {
            *(iVar2 + iVar3 + -1) = 0;
        }
        uVar4 = filp_open_block(iVar2,0x20002,0);
        if (uVar4 < 0xfffffffffffff001) {
            puVar9 = **(uVar4 + 0xe8);
            uVar7 = uVar4;
            if ((*puVar9 & 0xf000) == 0x6000) {
                uVar5 = blkdev_get_by_dev(*(puVar9 + 0x26),0x83,arg1);
                if (uVar5 < 0xfffffffffffff001) {
                    iVar6 = *(puVar9 + 0x28);
                    iVar3 = kvmalloc_node((iVar6 >> 0xc) + 0x3fU >> 3 & 0xfffffff8,0xdc0,0xffffffff);
                    if (iVar3 != 0) {
                        sym.reset_bdev(arg1);
                        *(arg1 + 0x1a8) = uVar4;
                        *(arg1 + 0x1c0) = uVar5;
                        *(arg1 + 0x1c8) = iVar3;
                        *(arg1 + 0x1d0) = iVar6 >> 0xc;
                        *(*(arg1 + 0x18) + 0x48) = reloc.zram_submit_bio.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                        up_write(iVar1);
                        _printk(0x8001c43,iVar2);
                        kfree(iVar2);
                        return param_4;
                    }
                    kvfree();
                    if (uVar5 != 0) {
                        blkdev_put(uVar5,0x83);
                    }
                    iVar8 = -0xc;
                    goto joined_r0x08005fe0;
                }
            }
            else {
                uVar5 = 0xfffffffffffffff1;
            }
        }
        else {
            uVar7 = 0;
            uVar5 = uVar4;
        }
    }
    else {
        _printk(0x80018b2);
        uVar7 = 0;
        uVar5 = 0xfffffffffffffff0;
    }
    iVar8 = uVar5;
    kvfree(0);
    uVar4 = uVar7;
joined_r0x08005fe0:
    if (uVar4 != 0) {
        filp_close(uVar4,0);
    }
    up_write(iVar1);
    kfree(iVar2);
    return iVar8;
}


// ===== sym.writeback_limit_enable_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002468 (size 8) =====

int64_t sym.writeback_limit_enable_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x21;
    int64_t iVar3;
    ulong unaff_x30;
    uchar *puVar4;
    code *pcVar5;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    puVar4 = &stack0xffffffffffffffd0;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    iVar1 = kstrtoull(param_3,10,&iStack_40);
    if (iVar1 == 0) {
        down_read(iVar3 + 0x20);
        unaff_x21 = iVar3 + 0x1b0;
        _raw_spin_lock(unaff_x21);
        *(iVar3 + 0x1b4) = iStack_40 != 0;
        _raw_spin_unlock(unaff_x21);
        up_read(iVar3 + 0x20);
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.io_stat_show;
    pcVar5 = sym.io_stat_show;
    iVar3 = *(*(iVar3 + 0x3b0) + 0x58);
    down_read(iVar3 + 0x20);
    iVar1 = scnprintf(piVar2,0x1000,"%8llu %8llu %8llu %8llu\n",*(iVar3 + 0x80),*(iVar3 + 0x88),*(iVar3 + 0x90),
                      *(iVar3 + 0x98),in_x7,puVar4,pcVar5,unaff_x21);
    up_read(iVar3 + 0x20);
    return iVar1;
}


// ===== sym.low_compress_ratio_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002470 (size 8) =====

ulong sym.low_compress_ratio_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    iVar2 = kstrtouint(param_3,10,&uStack_3c);
    if (iVar2 == 0) {
        iVar1 = iVar3 + 0x20;
        down_read(iVar1);
        iVar3 = iVar3 + 0x1b0;
        _raw_spin_lock(iVar3);
        *0x8001000 = uStack_3c;
        _raw_spin_unlock(iVar3);
        up_read(iVar1);
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    return *(iVar3 + 4000);
}


// ===== sym.mem_used_max_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002478 (size 8) =====

ulong sym.mem_used_max_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t arg2;
    int iVar12;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar6 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iStack_40 = 0;
    iVar10 = *(*(param_1 + 0x3b0) + 0x58);
    uVar7 = param_4;
    iVar3 = kstrtoull(param_3,10,&iStack_40);
    uVar4 = 0xffffffffffffffea;
    if ((iVar3 == 0) && (iStack_40 == 0)) {
        down_read(iVar10 + 0x20);
        if (*(iVar10 + 0x118) != 0) {
            uVar4 = zs_get_total_pages(*(iVar10 + 8));
            *(iVar10 + 0xe0) = uVar4;
        }
        up_read(iVar10 + 0x20);
        uVar4 = param_4;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_38) {
        iVar10 = __stack_chk_fail(uVar4);
        *extraout_x18 = sym.idle_store;
        arg1 = *(*(iVar10 + 0x3b0) + 0x58);
        uVar11 = arg1[0x23];
        uVar5 = sysfs_streq(piVar6,0x8001931);
        if ((uVar5 & 1) != 0) {
            piVar6 = arg1 + 4;
            down_read(piVar6);
            if (arg1[0x23] != 0) {
                if (uVar11 < 0x1000) {
                    iVar3 = 0;
                }
                else {
                    iVar3 = 0;
                    iVar10 = sp_el0;
                    iVar12 = 1;
                    do {
                        arg2 = iVar12 - 1;
                        sym.zram_slot_lock(arg1,arg2);
                        iVar8 = *arg1;
                        puVar9 = iVar8 + arg2 * 0x18 + 8;
                        uVar5 = *puVar9;
                        if ((((((uVar5 & 0x1fff) != 0 && (uVar5 & 0x40000) != 0) && (uVar5 & 0x10000) == 0) &&
                             (uVar5 & 0x100000) == 0) && (uVar5 & 0x8000) == 0) &&
                           ((*0x8001000 == 0 || ((uVar5 >> 0x15 & 1) != 0)))) {
                            if (uVar5 >> 0x18 < 5) {
                                *puVar9 = uVar5 & 0x7fffff;
                                iVar8 = *arg1 + arg2 * 0x18;
                                *(iVar8 + 8) = *(iVar8 + 8) | uVar5 + 0x800000 & 0xffffffffff800000;
                                iVar8 = *arg1;
                                uVar5 = *(iVar8 + arg2 * 0x18 + 8);
                            }
                            if ((uVar5 >> 0x13 & 1) == 0) {
                                iVar3 = iVar3 + 1;
                                *(iVar8 + arg2 * 0x18 + 8) = uVar5 | 0x80000;
                                iVar8 = *arg1;
                            }
                        }
                        puVar9 = iVar8 + arg2 * 0x18 + 8;
                        Hint_Prefetch(puVar9,2,0,1);
                        do {
                            cVar1 = '\x01';
                            bVar2 = ExclusiveMonitorPass(puVar9,0x10);
                            if (bVar2) {
                                *puVar9 = *puVar9 & 0xffffffffffffdfff;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                        iVar8 = *(iVar10 + 0x10) + -1;
                        *(iVar10 + 0x10) = iVar8;
                        if ((iVar8 == 0) || (*(iVar10 + 0x10) == 0)) {
                            preempt_schedule();
                        }
                        uVar5 = iVar12;
                        iVar12 = iVar12 + 1;
                    } while (uVar5 < uVar11 >> 0xc);
                }
                up_read(piVar6);
                _printk(0x8001993,iVar3);
                return uVar7;
            }
            up_read(piVar6);
        }
        return 0xffffffffffffffea;
    }
    return uVar4;
}


// ===== sym.compact_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002480 (size 8) =====

ulong sym.compact_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x3b0) + 0x58);
    down_read(iVar1 + 0x20);
    if (*(iVar1 + 0x118) == 0) {
        param_4 = 0xffffffffffffffea;
    }
    else {
        zs_compact(*(iVar1 + 8));
    }
    up_read(iVar1 + 0x20);
    return param_4;
}


// ===== sym.mem_limit_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002488 (size 8) =====

ulong sym.mem_limit_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,int64_t param_3,ulong param_4)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong uVar9;
    ulong uVar10;
    uint64_t *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    int64_t *arg1;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t arg2;
    int iVar14;
    ulong unaff_x30;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_40 = 0;
    iVar12 = *(*(param_1 + 0x3b0) + 0x58);
    iVar6 = param_3;
    uVar9 = param_4;
    iVar4 = memparse(param_3,&iStack_40);
    if (iStack_40 == param_3) {
        param_4 = 0xffffffffffffffea;
    }
    else {
        param_3 = iVar12 + 0x20;
        down_write(param_3);
        *(iVar12 + 0x60) = iVar4 + 0xfffU >> 0xc;
        up_write(param_3);
        unaff_x20 = iVar4;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar12 = __stack_chk_fail();
    piVar8 = &iStack_80;
    *extraout_x18 = sym.mem_used_max_store;
    pcStack_68 = sym.mem_used_max_store;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    iStack_80 = 0;
    iVar4 = *(*(iVar12 + 0x3b0) + 0x58);
    uVar10 = uVar9;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = param_3;
    iStack_50 = unaff_x20;
    uStack_48 = param_4;
    iVar3 = kstrtoull(iVar6,10,&iStack_80);
    uVar5 = 0xffffffffffffffea;
    if ((iVar3 == 0) && (iStack_80 == 0)) {
        down_read(iVar4 + 0x20);
        if (*(iVar4 + 0x118) != 0) {
            uVar5 = zs_get_total_pages(*(iVar4 + 8));
            *(iVar4 + 0xe0) = uVar5;
        }
        up_read(iVar4 + 0x20);
        uVar5 = uVar9;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_78) {
        iVar6 = __stack_chk_fail(uVar5);
        *extraout_x18_00 = sym.idle_store;
        arg1 = *(*(iVar6 + 0x3b0) + 0x58);
        uVar13 = arg1[0x23];
        uVar7 = sysfs_streq(piVar8,0x8001931);
        if ((uVar7 & 1) != 0) {
            piVar8 = arg1 + 4;
            down_read(piVar8);
            if (arg1[0x23] != 0) {
                if (uVar13 < 0x1000) {
                    iVar3 = 0;
                }
                else {
                    iVar3 = 0;
                    iVar6 = sp_el0;
                    iVar14 = 1;
                    do {
                        arg2 = iVar14 - 1;
                        sym.zram_slot_lock(arg1,arg2);
                        iVar4 = *arg1;
                        puVar11 = iVar4 + arg2 * 0x18 + 8;
                        uVar7 = *puVar11;
                        if ((((((uVar7 & 0x1fff) != 0 && (uVar7 & 0x40000) != 0) && (uVar7 & 0x10000) == 0) &&
                             (uVar7 & 0x100000) == 0) && (uVar7 & 0x8000) == 0) &&
                           ((*0x8001000 == 0 || ((uVar7 >> 0x15 & 1) != 0)))) {
                            if (uVar7 >> 0x18 < 5) {
                                *puVar11 = uVar7 & 0x7fffff;
                                iVar4 = *arg1 + arg2 * 0x18;
                                *(iVar4 + 8) = *(iVar4 + 8) | uVar7 + 0x800000 & 0xffffffffff800000;
                                iVar4 = *arg1;
                                uVar7 = *(iVar4 + arg2 * 0x18 + 8);
                            }
                            if ((uVar7 >> 0x13 & 1) == 0) {
                                iVar3 = iVar3 + 1;
                                *(iVar4 + arg2 * 0x18 + 8) = uVar7 | 0x80000;
                                iVar4 = *arg1;
                            }
                        }
                        puVar11 = iVar4 + arg2 * 0x18 + 8;
                        Hint_Prefetch(puVar11,2,0,1);
                        do {
                            cVar1 = '\x01';
                            bVar2 = ExclusiveMonitorPass(puVar11,0x10);
                            if (bVar2) {
                                *puVar11 = *puVar11 & 0xffffffffffffdfff;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                        iVar4 = *(iVar6 + 0x10) + -1;
                        *(iVar6 + 0x10) = iVar4;
                        if ((iVar4 == 0) || (*(iVar6 + 0x10) == 0)) {
                            preempt_schedule();
                        }
                        uVar7 = iVar14;
                        iVar14 = iVar14 + 1;
                    } while (uVar7 < uVar13 >> 0xc);
                }
                up_read(piVar8);
                _printk(0x8001993,iVar3);
                return uVar10;
            }
            up_read(piVar8);
        }
        return 0xffffffffffffffea;
    }
    return uVar5;
}


// ===== sym.time_list_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002490 (size 8) =====

int64_t sym.time_list_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int *piVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uint32_t uStack_7c;
    ulong uStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_6c = 0;
    uStack_7c = 0;
    iVar9 = *(*(param_1 + 0x3b0) + 0x58);
    uVar3 = kstrndup(param_3,0x20,0xcc0);
    uStack_78 = uVar3;
    iVar4 = strsep(&uStack_78,0x8001772);
    if ((iVar4 == 0) || (iVar2 = kstrtouint(iVar4,10,&uStack_7c), iVar2 != 0)) {
        param_4 = -0x16;
        goto code_r0x080079f8;
    }
    if (uStack_7c == 0) goto code_r0x080079f8;
    iVar4 = __kmalloc(uStack_7c << 2,0xcc0);
    if (iVar4 == 0) {
        param_4 = -0xc;
        goto code_r0x080079f8;
    }
    if (uStack_7c != 0) {
        uVar8 = 0;
        do {
            iVar5 = strsep(&uStack_78,0x8001772);
            if ((iVar5 == 0) || (iVar2 = kstrtoint(iVar5,10,&uStack_6c), iVar2 != 0)) {
                param_4 = -0x16;
                goto code_r0x08007bac;
            }
            *(iVar4 + uVar8 * 4) = uStack_6c;
            uVar8 = uVar8 + 1;
        } while (uVar8 < uStack_7c);
    }
    down_read(iVar9 + 0x20);
    uVar10 = uStack_7c;
    if (*(iVar9 + 0x118) == 0) {
        param_4 = -0x16;
    }
    else {
        uVar8 = uStack_7c;
        if (uStack_7c == 0) {
code_r0x08007b9c:
            uVar10 = 0xfffffff4;
        }
        else {
            iVar11 = *(iVar9 + 0x1e0);
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xcc0,0x28);
            if (puVar6 == NULL) goto code_r0x08007b9c;
            *puVar6 = uVar10;
            iVar5 = __kmalloc(uVar8 << 2,0xcc0);
            *(puVar6 + 2) = iVar5;
            iVar7 = __kmalloc(uVar10 + 1 << 3,0xdc0);
            *(puVar6 + 4) = iVar7;
            if ((iVar5 == 0) || (iVar7 == 0)) {
                *puVar6 = 0;
                if (iVar5 != 0) {
                    kfree(iVar5);
                    puVar6[2] = 0;
                    puVar6[3] = 0;
                }
                kfree(puVar6);
                goto code_r0x08007b9c;
            }
            memcpy(iVar5,iVar4,uVar8 << 2);
            *(iVar9 + 0x1e0) = puVar6;
            if (iVar11 != 0) {
                call_rcu(iVar11 + 0x18,sym.clean_pages_life.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
            }
        }
        param_4 = uVar10;
    }
    up_read(iVar9 + 0x20);
code_r0x08007bac:
    kfree(iVar4);
code_r0x080079f8:
    kfree(uVar3);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.clean_pages_life;
    piVar1 = iVar4 + -0x18;
    if ((piVar1 != NULL) && (*piVar1 != 0)) {
        *piVar1 = 0;
        if (*(iVar4 + -0x10) != 0) {
            kfree();
            *(iVar4 + -0x10) = 0;
        }
        iVar4 = kfree(piVar1);
    }
    return iVar4;
}


// ===== sym.writeback_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002498 (size 8) =====

void sym.writeback_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    uint64_t *puVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t *puVar11;
    int64_t iVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    uint64_t uVar15;
    int64_t *arg1;
    uint64_t arg2;
    uint32_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint32_t uStack_294;
    int iStack_290;
    uint32_t uStack_28c;
    uint64_t uStack_288;
    uint64_t uStack_280;
    int64_t iStack_278;
    int64_t iStack_270;
    int64_t aiStack_268 [63];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_70 = *(iVar7 + 0x5e0);
    uStack_288 = 0xffffffffffffffff;
    uStack_280 = 0;
    uStack_28c = 1;
    arg1 = *(*(param_1 + 0x3b0) + 0x58);
    uVar15 = arg1[0x23] >> 0xc;
    memset(&iStack_270,0,0x200);
    iVar7 = kstrndup(param_3,0x20,0xcc0);
    iStack_278 = iVar7;
    if (iVar7 == 0) {
code_r0x08006198:
        uVar9 = sysfs_streq(param_3,"idle");
        if ((uVar9 & 1) != 0) goto code_r0x0800624c;
        uVar9 = sysfs_streq(param_3,"huge");
        if ((uVar9 & 1) == 0) {
            iVar6 = strncmp(param_3,"page_index=",0xb);
            if (iVar6 != 0) {
                iVar7 = -0x16;
                goto code_r0x080066a8;
            }
            iVar6 = kstrtoll(param_3 + 0xb,10,&uStack_280);
            iVar7 = -0x16;
            if ((iVar6 != 0) || (uVar15 <= uStack_280)) goto code_r0x080066a8;
            uVar15 = 1;
            uStack_294 = 0;
        }
        else {
            uStack_294 = 1;
        }
    }
    else {
        uVar8 = strsep(&iStack_278,0x8001772);
        uVar9 = sysfs_streq(uVar8,"idle");
        if ((uVar9 & 1) == 0) {
code_r0x08006190:
            kfree(iVar7);
            goto code_r0x08006198;
        }
        iVar10 = strsep(&iStack_278,0x8001772);
        if (iVar10 != 0) {
            iVar6 = kstrtoull(iVar10,10,&uStack_288);
            if (iVar6 != 0) goto code_r0x08006190;
            iVar10 = strsep(&iStack_278,0x8001772);
            if (iVar10 != 0) {
                iVar6 = kstrtouint(iVar10,10,&uStack_28c);
                if ((iVar6 != 0) || (iVar10 = strsep(&iStack_278,0x8001772), iVar10 != 0)) goto code_r0x08006190;
                if (10 < uStack_28c) {
                    uStack_28c = 10;
                }
            }
        }
        _printk(0x8001bac,uStack_288,uStack_28c);
        kfree(iVar7);
code_r0x0800624c:
        uStack_294 = 2;
    }
    down_read(arg1 + 4);
    if (arg1[0x23] == 0) {
        iStack_290 = 0;
        uVar9 = 0;
        iVar10 = -0x16;
    }
    else if (arg1[0x35] == 0) {
        iStack_290 = 0;
        uVar9 = 0;
        iVar10 = -0x13;
    }
    else if (arg1[0x3b] == 0) {
        iStack_290 = 0;
        uVar9 = 0;
        iVar10 = -0xc;
    }
    else {
        iVar10 = param_4;
        if (uVar15 == 0) {
            iStack_290 = 0;
            uVar9 = 0;
        }
        else {
            uVar9 = 0;
            arg2 = 0;
            uVar16 = 0;
            piVar1 = arg1 + 0x36;
            iStack_290 = 0;
            puVar4 = sp_el0;
            uVar14 = 0;
            do {
                uVar17 = uVar14;
                if ((((*puVar4 >> 6 & 1) != 0) || ((*puVar4 & 1) != 0)) &&
                   (((*(puVar4[0xfe] + 0x51) >> 1 & 1) != 0 || ((*(puVar4 + 0x829) >> 1 & 1) != 0)))) {
                    _printk(0x80017f5);
                    iVar10 = -4;
                    break;
                }
                _raw_spin_lock(piVar1);
                if ((*(arg1 + 0x1b4) != '\0') && (arg1[0x37] == 0)) {
                    _raw_spin_unlock(piVar1);
                    iVar10 = -5;
                    break;
                }
                _raw_spin_unlock(piVar1);
                if (arg2 == 0) {
                    arg2 = sym.alloc_block_bdev(arg1);
                    if (arg2 == 0) {
                        iVar10 = -0x1c;
                        break;
                    }
                    uVar17 = arg2;
                    if (uVar16 != 0) {
                        uVar17 = uVar14;
                    }
                    uVar14 = uVar17;
                    if (uVar16 < 0x20) goto code_r0x08006370;
code_r0x0800637c:
                    iVar6 = sym.wait_for_writeback_batch(arg1,uVar14 & 0xffffffff,uVar16,&iStack_270);
                    uVar16 = 0;
                    uVar9 = uVar9 + iVar6;
                    iStack_290 = iStack_290 + 1;
                    uVar17 = arg2;
                }
                else {
                    if (0x1f < uVar16) goto code_r0x0800637c;
code_r0x08006370:
                    uVar14 = uVar17;
                    if (uVar17 + uVar16 != arg2) goto code_r0x0800637c;
                }
                if (uStack_288 <= uVar9) break;
                iVar7 = arg1[0x3b];
                sym.zram_slot_lock(arg1,uStack_280 & 0xffffffff);
                puVar11 = *arg1 + (uStack_280 & 0xffffffff) * 0x18 + 8;
                uVar14 = *puVar11;
                if ((((((((uVar14 & 0xdfff) == 0) || (uVar13 = uVar14, (uVar13 >> 0xf & 1) != 0)) ||
                       ((uVar13 >> 0x12 & 1) == 0)) || ((uVar13 >> 0x10 & 1) != 0)) ||
                     ((uStack_294 >> 1 != 0 && (((uVar13 >> 0x13 & 1) == 0 || (uVar14 >> 0x17 < uStack_28c)))))) ||
                    (((uStack_294 & 1) != 0 && ((uVar13 >> 0x11 & 1) == 0)))) ||
                   (((*0x8001000 != 0 && (uVar14 & 0x200000) == 0 || ((uVar13 >> 0x14 & 1) != 0)) ||
                    ((uVar13 >> 0x16 & 1) != 0)))) {
                    Hint_Prefetch(puVar11,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar11,0x10);
                        if (bVar3) {
                            *puVar11 = *puVar11 & 0xffffffffffffdfff;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    iVar7 = puVar4[2] - 1;
                    *(puVar4 + 2) = iVar7;
                    if (iVar7 != 0) {
                        uVar14 = puVar4[2];
joined_r0x08006578:
                        if (uVar14 != 0) goto code_r0x080062e8;
                    }
code_r0x080062e4:
                    preempt_schedule();
                }
                else {
                    *puVar11 = uVar14 | 0x10000;
                    iVar12 = *arg1 + (uStack_280 & 0xffffffff) * 0x18;
                    *(iVar12 + 8) = *(iVar12 + 8) | 0x80000;
                    puVar11 = *arg1 + (uStack_280 & 0xffffffff) * 0x18 + 8;
                    Hint_Prefetch(puVar11,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar11,0x10);
                        if (bVar3) {
                            *puVar11 = *puVar11 & 0xffffffffffffdfff;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    iVar12 = puVar4[2] - 1;
                    *(puVar4 + 2) = iVar12;
                    if ((iVar12 == 0) || (puVar4[2] == 0)) {
                        preempt_schedule();
                    }
                    iVar12 = uVar16;
                    iVar7 = iVar7 + iVar12 * 0x40;
                    iVar6 = sym.__zram_bvec_read(arg1,iVar7,uStack_280 & 0xffffffff,0);
                    if (iVar6 != 0) {
                        sym.zram_slot_lock(arg1,uStack_280 & 0xffffffff);
                        iVar7 = *arg1 + (uStack_280 & 0xffffffff) * 0x18;
                        *(iVar7 + 8) = *(iVar7 + 8) & 0xfffffffffffeffff;
                        iVar7 = *arg1 + (uStack_280 & 0xffffffff) * 0x18;
                        *(iVar7 + 8) = *(iVar7 + 8) & 0xfffffffffff7ffff;
                        iVar7 = *arg1 + (uStack_280 & 0xffffffff) * 0x18;
                        *(iVar7 + 8) = *(iVar7 + 8) & 0x7fffff;
                        puVar11 = *arg1 + (uStack_280 & 0xffffffff) * 0x18 + 8;
                        Hint_Prefetch(puVar11,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar11,0x10);
                            if (bVar3) {
                                *puVar11 = *puVar11 & 0xffffffffffffdfff;
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        iVar7 = puVar4[2] - 1;
                        *(puVar4 + 2) = iVar7;
                        if (iVar7 != 0) {
                            uVar14 = puVar4[2];
                            goto joined_r0x08006578;
                        }
                        goto code_r0x080062e4;
                    }
                    if (0x1f < uVar16) {
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(0x5512,0x80066f0);
                        (*pcVar5)();
                    }
                    if ((0x200 < iVar12 * 0x10) || (aiStack_268[iVar12 * 2 + -1] = iVar7, 0x200 < (iVar12 * 0x10 | 8U))
                       ) goto code_r0x080066e8;
                    arg2 = 0;
                    uVar16 = uVar16 + 1;
                    *(aiStack_268 + iVar12 * 2) = uStack_280;
                }
code_r0x080062e8:
                uVar15 = uVar15 - 1;
                uStack_280 = uStack_280 + 1;
                uVar14 = uVar17;
            } while (uVar15 != 0);
            if (uVar16 != 0) {
                iVar6 = sym.wait_for_writeback_batch(arg1,uVar17 & 0xffffffff,uVar16,&iStack_270);
                uVar9 = uVar9 + iVar6;
                iStack_290 = iStack_290 + 1;
            }
            if (arg2 != 0) {
                sym.free_block_bdev(arg1,arg2);
            }
        }
    }
    up_read(arg1 + 4);
    _printk(0x8001944,uStack_294,uVar9,iStack_290);
    iVar7 = param_4;
    if (iVar10 != 0) {
        iVar7 = iVar10;
    }
code_r0x080066a8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x080066e8:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x80066ec);
    (*pcVar5)();
}


// ===== sym.writeback_limit_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080024a0 (size 8) =====

int64_t sym.writeback_limit_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uchar uVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x3b0) + 0x58);
    iVar2 = kstrtoull(param_3,10,&uStack_40);
    if (iVar2 == 0) {
        down_read(iVar4 + 0x20);
        _raw_spin_lock(iVar4 + 0x1b0);
        *(iVar4 + 0x1b8) = uStack_40;
        _raw_spin_unlock(iVar4 + 0x1b0);
        up_read(iVar4 + 0x20);
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.writeback_limit_enable_show;
    iVar4 = *(*(iVar4 + 0x3b0) + 0x58);
    down_read(iVar4 + 0x20);
    _raw_spin_lock(iVar4 + 0x1b0);
    uVar1 = *(iVar4 + 0x1b4);
    _raw_spin_unlock(iVar4 + 0x1b0);
    up_read(iVar4 + 0x20);
    iVar2 = scnprintf(puVar3,0x1000,0x80019d1,uVar1);
    return iVar2;
}


// ===== sym.memory_freeze_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080024a8 (size 8) =====

int64_t sym.memory_freeze_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    piVar2 = &iStack_3c;
    iStack_3c = 0;
    iVar3 = *(*(param_1 + 0x3b0) + 0x58);
    iVar1 = kstrtouint(param_3,10,piVar2);
    if (iVar1 == 0) {
        iVar4 = iVar3 + 0x20;
        down_read(iVar4);
        iVar3 = iVar3 + 0x1b0;
        _raw_spin_lock(iVar3);
        *0x8001000 = iStack_3c != 0;
        _raw_spin_unlock(iVar3);
        up_read(iVar4);
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.wb_pages_max_show;
    iVar4 = *(*(iVar3 + 0x3b0) + 0x58);
    iVar3 = iVar4 + 0x20;
    down_read(iVar3);
    iVar1 = scnprintf(piVar2,0x1000,"%8lld\n",*(iVar4 + 0x110));
    up_read(iVar3);
    return iVar1;
}


// ===== sym.reset_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080024b0 (size 8) =====

int64_t sym.reset_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t arg1;
    ulong unaff_x30;
    int16_t aiStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    aiStack_3c[0] = 0;
    iVar3 = param_4;
    iVar1 = kstrtou16(param_3,10,aiStack_3c);
    if (iVar1 == 0) {
        if (aiStack_3c[0] == 0) {
            param_4 = -0x16;
        }
        else {
            arg1 = *(*(param_1 + 0x3b0) + 0x58);
            iVar2 = *(*(arg1 + 0x18) + 0x40);
            mutex_lock(*(iVar2 + 0x3f0) + 0x70);
            if ((*(iVar2 + 0x20) == 0) && (*(arg1 + 0x1a0) == '\0')) {
                *(arg1 + 0x1a0) = 1;
                mutex_unlock(*(iVar2 + 0x3f0) + 0x70);
                fsync_bdev(iVar2);
                sym.zram_reset_device(arg1);
                mutex_lock(*(iVar2 + 0x3f0) + 0x70);
                *(arg1 + 0x1a0) = 0;
                mutex_unlock(*(iVar2 + 0x3f0) + 0x70);
            }
            else {
                mutex_unlock(*(iVar2 + 0x3f0) + 0x70);
                param_4 = -0x10;
            }
        }
    }
    else {
        param_4 = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.compact_store;
    iVar2 = *(*(iVar2 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    if (*(iVar2 + 0x118) == 0) {
        iVar3 = -0x16;
    }
    else {
        zs_compact(*(iVar2 + 8));
    }
    up_read(iVar2 + 0x20);
    return iVar3;
}


// ===== sym.new_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080024b8 (size 8) =====

ulong sym.new_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *arg1;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x3b0) + 0x58);
    uVar7 = arg1[0x23];
    uVar5 = sysfs_streq(param_3,0x8001931);
    if ((uVar5 & 1) == 0) {
        param_4 = 0xffffffffffffffea;
    }
    else {
        down_read(arg1 + 4);
        if (arg1[0x23] == 0) {
            param_4 = 0xffffffffffffffea;
        }
        else if (0xfff < uVar7) {
            uVar5 = 0;
            iVar4 = sp_el0;
            do {
                sym.zram_slot_lock(arg1,uVar5);
                iVar6 = uVar5 * 0x18;
                *(*arg1 + iVar6 + 8) = *(*arg1 + iVar6 + 8) & 0xfffffffffff7ffff;
                *(*arg1 + iVar6 + 8) = *(*arg1 + iVar6 + 8) & 0x7fffff;
                puVar1 = *arg1 + iVar6 + 8;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & 0xffffffffffffdfff;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                iVar6 = *(iVar4 + 0x10) + -1;
                *(iVar4 + 0x10) = iVar6;
                if ((iVar6 == 0) || (*(iVar4 + 0x10) == 0)) {
                    preempt_schedule();
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7 >> 0xc);
        }
        up_read(arg1 + 4);
    }
    return param_4;
}


// ===== sym.comp_algorithm_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080024c0 (size 8) =====

ulong sym.comp_algorithm_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    char cStack_b9;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iVar4 = *(*(param_1 + 0x3b0) + 0x58);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    strlcpy(&uStack_b8,param_3,0x80);
    iVar3 = strlen(&uStack_b8);
    if (iVar3 != 0) {
        if (0x7f < iVar3 - 1U) goto code_r0x08005de0;
        if ((&cStack_b9)[iVar3] == '\n') {
            (&cStack_b9)[iVar3] = '\0';
        }
    }
    iVar2 = crypto_has_alg(&uStack_b8,2,0xf);
    if (iVar2 == 1) {
        iVar3 = iVar4 + 0x20;
        down_write(iVar3);
        if (*(iVar4 + 0x118) == 0) {
            strcpy(iVar4 + 0x120,&uStack_b8);
            up_write(iVar3);
        }
        else {
            up_write(iVar3);
            _printk(0x8001abd);
            param_4 = 0xfffffffffffffff0;
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
code_r0x08005de0:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005de4);
    (*pcVar1)();
}


// ===== sym.max_comp_streams_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080024c8 (size 8) =====

ulong sym.max_comp_streams_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong in_x3;
    
    return in_x3;
}


// ===== sym.idle_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080024d0 (size 8) =====

ulong sym.idle_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    ulong *in_x18;
    int64_t *arg1;
    int iVar8;
    uint64_t uVar9;
    uint64_t arg2;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x3b0) + 0x58);
    uVar9 = arg1[0x23];
    uVar5 = sysfs_streq(param_3,0x8001931);
    if ((uVar5 & 1) != 0) {
        piVar1 = arg1 + 4;
        down_read(piVar1);
        if (arg1[0x23] != 0) {
            if (uVar9 < 0x1000) {
                iVar8 = 0;
            }
            else {
                iVar8 = 0;
                iVar4 = sp_el0;
                iVar10 = 1;
                do {
                    arg2 = iVar10 - 1;
                    sym.zram_slot_lock(arg1,arg2);
                    iVar6 = *arg1;
                    puVar7 = iVar6 + arg2 * 0x18 + 8;
                    uVar5 = *puVar7;
                    if ((((((uVar5 & 0x1fff) != 0 && (uVar5 & 0x40000) != 0) && (uVar5 & 0x10000) == 0) &&
                         (uVar5 & 0x100000) == 0) && (uVar5 & 0x8000) == 0) &&
                       ((*0x8001000 == 0 || ((uVar5 >> 0x15 & 1) != 0)))) {
                        if (uVar5 >> 0x18 < 5) {
                            *puVar7 = uVar5 & 0x7fffff;
                            iVar6 = *arg1 + arg2 * 0x18;
                            *(iVar6 + 8) = *(iVar6 + 8) | uVar5 + 0x800000 & 0xffffffffff800000;
                            iVar6 = *arg1;
                            uVar5 = *(iVar6 + arg2 * 0x18 + 8);
                        }
                        if ((uVar5 >> 0x13 & 1) == 0) {
                            iVar8 = iVar8 + 1;
                            *(iVar6 + arg2 * 0x18 + 8) = uVar5 | 0x80000;
                            iVar6 = *arg1;
                        }
                    }
                    puVar7 = iVar6 + arg2 * 0x18 + 8;
                    Hint_Prefetch(puVar7,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar7,0x10);
                        if (bVar3) {
                            *puVar7 = *puVar7 & 0xffffffffffffdfff;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    iVar6 = *(iVar4 + 0x10) + -1;
                    *(iVar4 + 0x10) = iVar6;
                    if ((iVar6 == 0) || (*(iVar4 + 0x10) == 0)) {
                        preempt_schedule();
                    }
                    uVar5 = iVar10;
                    iVar10 = iVar10 + 1;
                } while (uVar5 < uVar9 >> 0xc);
            }
            up_read(piVar1);
            _printk(0x8001993,iVar8);
            return param_4;
        }
        up_read(piVar1);
    }
    return 0xffffffffffffffea;
}


// ===== sym.disksize_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080024d8 (size 8) =====

int64_t sym.disksize_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    bool bVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint *puVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *arg1;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x3b0) + 0x58);
    iVar2 = memparse(param_3,0);
    if (iVar2 == 0) {
        param_4 = -0x16;
    }
    else {
        down_write(arg1 + 4);
        if (arg1[0x23] == 0) {
            iVar3 = vzalloc((iVar2 + 0xfffU >> 0xc) * 0x18);
            *arg1 = iVar3;
            if (iVar3 == 0) {
                param_4 = -0xc;
            }
            else {
                iVar3 = zs_create_pool(arg1[3] + 0xc);
                arg1[1] = iVar3;
                if (iVar3 == 0) {
                    vfree(*arg1);
                    param_4 = -0xc;
                }
                else {
                    iVar3 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar3 = 0x30;
                    }
                    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xcc0,0x28);
                    if (puVar4 != NULL) {
                        iVar3 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar3 = 0x30;
                        }
                        *puVar4 = 5;
                        puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xcc0,0x14);
                        bVar1 = android_kmalloc_64_create != 0x0;
                        *(puVar4 + 2) = puVar5;
                        iVar3 = 0x38;
                        if (bVar1) {
                            iVar3 = 0x30;
                        }
                        iVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x30);
                        *(puVar4 + 4) = iVar3;
                        if ((puVar5 == NULL) || (iVar3 == 0)) {
                            *puVar4 = 0;
                            if (puVar5 != NULL) {
                                kfree(puVar5);
                                *(puVar4 + 2) = 0;
                            }
                            kfree(puVar4);
                            puVar4 = NULL;
                        }
                        else {
                            *puVar5 = 0x780000003c;
                            puVar5[1] = 0x12c000000b4;
                            *(puVar5 + 2) = 600;
                        }
                    }
                    arg1[0x3c] = puVar4;
                    uVar7 = iVar2 + 0xfffU & 0xfffffffffffff000;
                    if (_segment.ehdr == 0) {
                        _segment.ehdr = zs_huge_class_size(arg1[1]);
                    }
                    uVar6 = sym.zcomp_create(arg1 + 0x24);
                    if (uVar6 < 0xfffffffffffff001) {
                        arg1[0x3d] = 0;
                        arg1[0x3e] = 0;
                        arg1[2] = uVar6;
                        arg1[0x23] = uVar7;
                        set_capacity_and_notify(arg1[3],uVar7 >> 9);
                    }
                    else {
                        _printk(0x80018f6,arg1 + 0x24);
                        sym.zram_meta_free(arg1,uVar7);
                        param_4 = uVar6;
                    }
                }
            }
        }
        else {
            _printk(0x8001860);
            param_4 = -0x10;
        }
        up_write(arg1 + 4);
    }
    return param_4;
}


// ===== sym.zcomp_available_algorithm @ 0x080024e0 (size 52) =====

bool sym.zcomp_available_algorithm(ulong param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = crypto_has_alg(param_1,2,0xf);
    return iVar1 == 1;
}


// ===== sym.zcomp_available_show @ 0x08002514 (size 424) =====

int64_t sym.zcomp_available_show(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    char *pcVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = strcmp(arg1,0x80019cd);
    pcVar1 = 0x8001c75;
    pcVar2 = "[%s] ";
    pcVar3 = pcVar2;
    if (iVar4 != 0) {
        pcVar3 = pcVar1;
    }
    iVar5 = scnprintf(arg2,0xffe,pcVar3,0x80019cd);
    iVar10 = iVar5;
    iVar5 = strcmp(arg1,"lzo-rle");
    pcVar3 = pcVar2;
    if (iVar5 != 0) {
        pcVar3 = pcVar1;
    }
    iVar6 = scnprintf(arg2 + iVar10,0xffe - iVar10,pcVar3,"lzo-rle");
    iVar10 = iVar10 + iVar6;
    iVar6 = strcmp(arg1,0x8001928);
    if (iVar6 != 0) {
        pcVar2 = pcVar1;
    }
    iVar7 = scnprintf(arg2 + iVar10,0xffe - iVar10,pcVar2,0x8001928);
    iVar10 = iVar10 + iVar7;
    iVar7 = strcmp(arg1,"zstd");
    iVar9 = 0xffe - iVar10;
    iVar8 = arg2 + iVar10;
    if (iVar7 == 0) {
        arg1 = "zstd";
    }
    else {
        iVar7 = scnprintf(iVar8,iVar9,0x8001c75,"zstd");
        iVar10 = iVar10 + iVar7;
        if ((((iVar6 == 0) || (iVar5 == 0)) || (iVar4 == 0)) || (iVar4 = crypto_has_alg(arg1,2,0xf), iVar4 != 1))
        goto code_r0x0800267c;
        iVar8 = arg2 + iVar10;
        iVar9 = 0xffe - iVar10;
    }
    iVar4 = scnprintf(iVar8,iVar9,"[%s] ",arg1);
    iVar10 = iVar10 + iVar4;
code_r0x0800267c:
    iVar4 = scnprintf(arg2 + iVar10,0x1000 - iVar10,0x8001a7e);
    return iVar10 + iVar4;
}


// ===== sym.zcomp_stream_get @ 0x080026bc (size 44) =====

int64_t sym.zcomp_stream_get(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = sp_el0;
    *(iVar1 + 0x10) = *(iVar1 + 0x10) + 1;
    iVar1 = tpidr_el1;
    return iVar1 + *arg1;
}


// ===== sym.zcomp_stream_put @ 0x080026f0 (size 76) =====

void sym.zcomp_stream_put(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = tpidr_el1;
    iVar2 = sp_el0;
    iVar1 = *(iVar2 + 0x10) + -1;
    *(iVar2 + 0x10) = iVar1;
    if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
        preempt_schedule();
    }
    return;
}


// ===== sym.zcomp_compress @ 0x08002748 (size 60) =====

void sym.zcomp_compress(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *arg2 = 0x2000;
    crypto_comp_compress(*(arg1 + 8),in_x1,0x1000,*arg1,arg2);
    return;
}


// ===== sym.zcomp_decompress @ 0x08002784 (size 96) =====

ulong sym.zcomp_decompress(int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t extraout_x1;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar7 = *(iVar5 + 0x5e0);
    uVar4 = crypto_comp_decompress(*(arg1 + 8));
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar7) {
        return uVar4;
    }
    uVar3 = __stack_chk_fail();
    if (uVar3 < 0x20) {
        *extraout_x18 = sym.zcomp_cpu_up_prepare;
        piVar1 = *(__per_cpu_offset + uVar3 * 8) + *(extraout_x1 + -0x10);
        iVar5 = crypto_alloc_base(*(extraout_x1 + -8),2,0xf);
        piVar1[1] = iVar5;
        iVar5 = __get_free_pages(0xdc0,1);
        uVar6 = piVar1[1];
        *piVar1 = iVar5;
        if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
            if (iVar5 != 0) {
                return 0;
            }
            crypto_destroy_tfm(uVar6);
            iVar5 = *piVar1;
        }
        free_pages(iVar5,1);
        *piVar1 = 0;
        piVar1[1] = 0;
        _printk(0x8001a13);
        return 0xfffffff4;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002894);
    (*pcVar2)();
}


// ===== sym.zcomp_cpu_up_prepare @ 0x080027e4 (size 176) =====

ulong sym.zcomp_cpu_up_prepare(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    code *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (0x1f < arg1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8002894);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    piVar1 = *(__per_cpu_offset + arg1 * 8) + *(arg2 + -0x10);
    iVar3 = crypto_alloc_base(*(arg2 + -8),2,0xf);
    piVar1[1] = iVar3;
    iVar3 = __get_free_pages(0xdc0,1);
    uVar4 = piVar1[1];
    *piVar1 = iVar3;
    if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
        if (iVar3 != 0) {
            return 0;
        }
        crypto_destroy_tfm(uVar4);
        iVar3 = *piVar1;
    }
    free_pages(iVar3,1);
    *piVar1 = 0;
    piVar1[1] = 0;
    _printk(0x8001a13);
    return 0xfffffff4;
}


// ===== sym.zcomp_cpu_dead @ 0x08002894 (size 120) =====

ulong sym.zcomp_cpu_dead(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x20) {
        *in_x18 = unaff_x30;
        puVar1 = *(__per_cpu_offset + arg1 * 8) + *(arg2 + -0x10);
        uVar3 = puVar1[1];
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            crypto_destroy_tfm(uVar3,uVar3);
        }
        free_pages(*puVar1,1);
        *puVar1 = 0;
        puVar1[1] = 0;
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800290c);
    (*pcVar2)();
}


// ===== sym.zcomp_destroy @ 0x0800290c (size 76) =====

void sym.zcomp_destroy(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __cpuhp_state_remove_instance(0x42,arg1 + 0x10,1);
    free_percpu(*arg1);
    kfree(arg1);
    return;
}


// ===== sym.zcomp_create @ 0x08002958 (size 220) =====

int64_t * sym.zcomp_create(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = crypto_has_alg(arg1,2,0xf);
    if (iVar1 == 1) {
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x20);
        if (piVar2 == NULL) {
            piVar4 = 0xfffffffffffffff4;
        }
        else {
            piVar2[1] = arg1;
            iVar3 = __alloc_percpu(0x10,8);
            *piVar2 = iVar3;
            if (iVar3 == 0) {
                piVar4 = 0xfffffffffffffff4;
            }
            else {
                iVar1 = __cpuhp_state_add_instance(0x42,piVar2 + 2,1);
                if (-1 < iVar1) {
                    return piVar2;
                }
                free_percpu(*piVar2);
                piVar4 = iVar1;
            }
            kfree(piVar2);
        }
    }
    else {
        piVar4 = 0xffffffffffffffea;
    }
    return piVar4;
}


// ===== sym.__cfi_check_fail @ 0x08002a34 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002a78

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
    //switch table (4 cases) at 0x8001698
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002a8c);
    (*pcVar1)();
}


// ===== sym.zram_add @ 0x08002a8c (size 620) =====

int sym.zram_add(void)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint *puVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = kmem_cache_alloc_trace(_crypto_has_alg,0xdc0,0x200);
    if (iVar3 == 0) {
        iVar2 = -0xc;
    }
    else {
        iVar2 = idr_alloc(obj.zram_index_idr,iVar3,0,0,0xcc0);
        if (-1 < iVar2) {
            __init_rwsem(iVar3 + 0x20,"&zram->init_lock",obj.zram_add.__key);
            *(iVar3 + 0x1b0) = 0;
            uVar1 = tpidr_el1;
            iVar4 = __alloc_pages(uVar1,0xcc0,5,0,0);
            *(iVar3 + 0x1d8) = iVar4;
            if (iVar4 == 0) {
                _printk(0x80017b7,iVar2);
            }
            else {
                split_page(iVar4,5);
            }
            puVar5 = __blk_alloc_disk(0xffffffff,obj.zram_add.__key);
            *(iVar3 + 0x18) = puVar5;
            if (puVar5 != NULL) {
                *puVar5 = _segment.ehdr;
                *(*(iVar3 + 0x18) + 4) = iVar2;
                *(*(iVar3 + 0x18) + 8) = 1;
                *(*(iVar3 + 0x18) + 0x48) = obj.zram_devops;
                *(*(iVar3 + 0x18) + 0x58) = iVar3;
                snprintf(*(iVar3 + 0x18) + 0xc,0x10,"zram%d",iVar2);
                set_capacity(*(iVar3 + 0x18),0);
                blk_queue_flag_set(6,*(*(iVar3 + 0x18) + 0x50));
                blk_queue_flag_clear(10,*(*(iVar3 + 0x18) + 0x50));
                blk_queue_physical_block_size(*(*(iVar3 + 0x18) + 0x50),0x1000);
                blk_queue_logical_block_size(*(*(iVar3 + 0x18) + 0x50),0x1000);
                blk_queue_io_min(*(*(iVar3 + 0x18) + 0x50),0x1000);
                blk_queue_io_opt(*(*(iVar3 + 0x18) + 0x50),0x1000);
                *(*(*(iVar3 + 0x18) + 0x50) + 0x504) = 0x1000;
                blk_queue_max_discard_sectors(*(*(iVar3 + 0x18) + 0x50),0xffffffff);
                blk_queue_flag_set(8,*(*(iVar3 + 0x18) + 0x50));
                blk_queue_max_write_zeroes_sectors(*(*(iVar3 + 0x18) + 0x50),0xffffffff);
                blk_queue_flag_set(0xf,*(*(iVar3 + 0x18) + 0x50));
                device_add_disk(0,*(iVar3 + 0x18),obj.zram_disk_attr_groups);
                strlcpy(iVar3 + 0x120,"lzo-rle",0x80);
                _printk(0x8001731,*(iVar3 + 0x18) + 0xc);
                return iVar2;
            }
            _printk(0x8001b51,iVar2);
            idr_remove(obj.zram_index_idr,iVar2);
            iVar2 = -0xc;
        }
        kfree(iVar3);
    }
    return iVar2;
}


// ===== sym.destroy_devices @ 0x08002cfc (size 120) =====

void sym.destroy_devices(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    class_unregister(obj.zram_control_class);
    idr_for_each(obj.zram_index_idr,sym.zram_remove_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0);
    idr_destroy(obj.zram_index_idr);
    unregister_blkdev(_segment.ehdr,"zram");
    __cpuhp_remove_state(0x42,0);
    return;
}


// ===== sym.hot_add_show @ 0x08002d74 (size 120) =====

int64_t sym.hot_add_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.zram_index_mutex);
    iVar1 = sym.zram_add();
    mutex_unlock(obj.zram_index_mutex);
    if (-1 < iVar1) {
        iVar1 = scnprintf(arg1,0x1000,0x80019d1,iVar1);
    }
    return iVar1;
}


// ===== sym.hot_remove_store @ 0x08002dec (size 236) =====

int64_t sym.hot_remove_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_2c = 0;
    iVar1 = kstrtoint(arg1,10,&iStack_2c);
    if (iVar1 == 0) {
        if (iStack_2c < 0) {
            arg2 = -0x16;
        }
        else {
            mutex_lock(obj.zram_index_mutex);
            iVar2 = idr_find(obj.zram_index_idr,iStack_2c);
            if (iVar2 == 0) {
                iVar1 = -0x13;
            }
            else {
                iVar1 = sym.zram_remove(iVar2);
                if (iVar1 == 0) {
                    idr_remove(obj.zram_index_idr,iStack_2c);
                    mutex_unlock(obj.zram_index_mutex);
                    goto code_r0x08002ea4;
                }
            }
            mutex_unlock(obj.zram_index_mutex);
            arg2 = iVar1;
        }
    }
    else {
        arg2 = iVar1;
    }
code_r0x08002ea4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg2;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.zram_remove;
    iVar3 = *(*(iVar2 + 0x18) + 0x40);
    mutex_lock(*(iVar3 + 0x3f0) + 0x70);
    if ((*(iVar3 + 0x20) == 0) && (*(iVar2 + 0x1a0) == '\0')) {
        *(iVar2 + 0x1a0) = 1;
        mutex_unlock(*(iVar3 + 0x3f0) + 0x70);
        fsync_bdev(iVar3);
        sym.zram_reset_device(iVar2);
        if (*(iVar2 + 0x1d8) != 0) {
            __free_pages(*(iVar2 + 0x1d8),0);
            iVar3 = 0x40;
            do {
                __free_pages(*(iVar2 + 0x1d8) + iVar3,0);
                iVar3 = iVar3 + 0x40;
            } while (iVar3 != 0x800);
        }
        _printk(0x8001844,*(iVar2 + 0x18) + 0xc);
        del_gendisk(*(iVar2 + 0x18));
        blk_cleanup_disk(*(iVar2 + 0x18));
        kfree(iVar2);
        iVar2 = 0;
    }
    else {
        mutex_unlock(*(iVar3 + 0x3f0) + 0x70);
        iVar2 = 0xfffffff0;
    }
    return iVar2;
}


// ===== sym.zram_remove @ 0x08002ed8 (size 232) =====

ulong sym.zram_remove(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x18) + 0x40);
    mutex_lock(*(iVar2 + 0x3f0) + 0x70);
    if ((*(iVar2 + 0x20) == 0) && (*(arg1 + 0x1a0) == '\0')) {
        *(arg1 + 0x1a0) = 1;
        mutex_unlock(*(iVar2 + 0x3f0) + 0x70);
        fsync_bdev(iVar2);
        sym.zram_reset_device(arg1);
        if (*(arg1 + 0x1d8) != 0) {
            __free_pages(*(arg1 + 0x1d8),0);
            iVar2 = 0x40;
            do {
                __free_pages(*(arg1 + 0x1d8) + iVar2,0);
                iVar2 = iVar2 + 0x40;
            } while (iVar2 != 0x800);
        }
        _printk(0x8001844,*(arg1 + 0x18) + 0xc);
        del_gendisk(*(arg1 + 0x18));
        blk_cleanup_disk(*(arg1 + 0x18));
        kfree(arg1);
        uVar1 = 0;
    }
    else {
        mutex_unlock(*(iVar2 + 0x3f0) + 0x70);
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.zram_reset_device @ 0x08002fc0 (size 488) =====

void sym.zram_reset_device(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t arg1_00;
    code *pcVar3;
    uint64_t uVar4;
    uint32_t *in_x7;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    int *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x20;
    down_write(iVar1);
    uVar6 = *(arg1 + 0x118);
    *(arg1 + 0x60) = 0;
    if (uVar6 == 0) {
        up_write(iVar1);
    }
    else {
        arg1_00 = *(arg1 + 0x10);
        *(arg1 + 0x118) = 0;
        set_capacity_and_notify(*(arg1 + 0x18),0);
        iVar7 = *(*(arg1 + 0x18) + 0x40);
        uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *in_x7 = extraout_w8;
        if (uVar4 < extraout_w8) {
            do {
                if (0x1f < uVar4) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x80031a8);
                    (*pcVar3)();
                }
                puVar2 = *(__per_cpu_offset + (uVar4 & 0xffffffff) * 8) + *(iVar7 + 8);
                puVar2[0x11] = 0;
                puVar2[0x12] = 0;
                puVar2[0xf] = 0;
                puVar2[0x10] = 0;
                puVar2[0xd] = 0;
                puVar2[0xe] = 0;
                puVar2[0xb] = 0;
                puVar2[0xc] = 0;
                puVar2[9] = 0;
                puVar2[10] = 0;
                puVar2[7] = 0;
                puVar2[8] = 0;
                puVar2[5] = 0;
                puVar2[6] = 0;
                puVar2[3] = 0;
                puVar2[4] = 0;
                puVar2[1] = 0;
                puVar2[2] = 0;
                *puVar2 = 0;
                uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
                *in_x7 = extraout_w8_00;
            } while (uVar4 < extraout_w8_00);
        }
        piVar5 = *(arg1 + 0x1e0);
        if ((piVar5 != NULL) && (*piVar5 != 0)) {
            *piVar5 = 0;
            if (*(piVar5 + 2) != 0) {
                kfree();
                piVar5[2] = 0;
                piVar5[3] = 0;
            }
            kfree(piVar5);
        }
        up_write(iVar1);
        if (0xfff < uVar6) {
            uVar4 = 0;
            do {
                sym.zram_free_page(arg1,uVar4);
                uVar4 = uVar4 + 1;
            } while (uVar6 >> 0xc != uVar4);
        }
        zs_destroy_pool(*(arg1 + 8));
        vfree(*arg1);
        *(arg1 + 0x108) = 0;
        *(arg1 + 0x110) = 0;
        *(arg1 + 0xf8) = 0;
        *(arg1 + 0x100) = 0;
        *(arg1 + 0xe8) = 0;
        *(arg1 + 0xf0) = 0;
        *(arg1 + 0xd8) = 0;
        *(arg1 + 0xe0) = 0;
        *(arg1 + 200) = 0;
        *(arg1 + 0xd0) = 0;
        *(arg1 + 0xb8) = 0;
        *(arg1 + 0xc0) = 0;
        *(arg1 + 0xa8) = 0;
        *(arg1 + 0xb0) = 0;
        *(arg1 + 0x98) = 0;
        *(arg1 + 0xa0) = 0;
        *(arg1 + 0x88) = 0;
        *(arg1 + 0x90) = 0;
        *(arg1 + 0x78) = 0;
        *(arg1 + 0x80) = 0;
        *(arg1 + 0x68) = 0;
        *(arg1 + 0x70) = 0;
        sym.zcomp_destroy(arg1_00);
        if (*(arg1 + 0x1a8) != 0) {
            blkdev_put(*(arg1 + 0x1c0),0x83);
            filp_close(*(arg1 + 0x1a8),0);
            *(arg1 + 0x1a8) = 0;
            *(arg1 + 0x1c0) = 0;
            *(*(arg1 + 0x18) + 0x48) = obj.zram_devops;
            kvfree(*(arg1 + 0x1c8));
            *(arg1 + 0x1c8) = 0;
        }
    }
    return;
}


// ===== sym.zram_meta_free @ 0x080031a8 (size 108) =====

void sym.zram_meta_free(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0xfff < arg2) {
        arg2_00 = 0;
        do {
            sym.zram_free_page(arg1,arg2_00);
            arg2_00 = arg2_00 + 1;
        } while (arg2 >> 0xc != arg2_00);
    }
    zs_destroy_pool(*(arg1 + 8));
    vfree(*arg1);
    return;
}


// ===== sym.reset_bdev @ 0x08003214 (size 112) =====

void sym.reset_bdev(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x1a8) != 0) {
        blkdev_put(*(arg1 + 0x1c0),0x83);
        filp_close(*(arg1 + 0x1a8),0);
        *(arg1 + 0x1a8) = 0;
        *(arg1 + 0x1c0) = 0;
        *(*(arg1 + 0x18) + 0x48) = obj.zram_devops;
        kvfree(*(arg1 + 0x1c8));
        *(arg1 + 0x1c8) = 0;
    }
    return;
}


// ===== sym.zram_free_page @ 0x08003284 (size 1192) =====

void sym.zram_free_page(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t *puVar11;
    int64_t iVar12;
    ulong *in_x18;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *arg1;
    uVar13 = arg2 & 0xffffffff;
    puVar11 = iVar5 + uVar13 * 0x18 + 8;
    uVar9 = *puVar11;
    if ((uVar9 >> 0x13 & 1) != 0) {
        *puVar11 = uVar9 & 0xfffffffffff7ffff;
        iVar5 = *arg1 + uVar13 * 0x18;
        *(iVar5 + 8) = *(iVar5 + 8) & 0x7fffff;
        iVar5 = *arg1;
        uVar9 = *(iVar5 + uVar13 * 0x18 + 8);
    }
    if ((uVar9 >> 0x12 & 1) != 0) {
        piVar6 = arg1 + 0xd0;
        *(iVar5 + uVar13 * 0x18 + 8) = uVar9 & 0xfffffffffffbffff;
        Hint_Prefetch(piVar6,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = *piVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    puVar11 = *arg1 + uVar13 * 0x18 + 8;
    uVar9 = *puVar11;
    if ((uVar9 >> 0x11 & 1) != 0) {
        piVar6 = arg1 + 0xa8;
        *puVar11 = uVar9 & 0xfffffffffffdffff;
        Hint_Prefetch(piVar6,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = *piVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    iVar5 = *arg1;
    puVar11 = iVar5 + uVar13 * 0x18 + 8;
    uVar9 = *puVar11;
    uVar8 = uVar9;
    if ((uVar8 >> 0x15 & 1) != 0) {
        *puVar11 = uVar9 & 0xffffffffffdfffff;
        iVar5 = *arg1;
        uVar9 = *(iVar5 + uVar13 * 0x18 + 8);
        uVar8 = uVar9;
    }
    if ((uVar8 >> 0x14 & 1) == 0) {
        uVar8 = uVar9;
    }
    else {
        *(iVar5 + uVar13 * 0x18 + 8) = uVar9 & 0xffffffffffefffff;
        iVar5 = *arg1;
        uVar9 = *(iVar5 + uVar13 * 0x18 + 8);
        uVar8 = uVar9;
    }
    if ((uVar8 >> 0x16 & 1) != 0) {
        piVar6 = arg1 + 0xb8;
        *(iVar5 + uVar13 * 0x18 + 8) = uVar9 & 0xffffffffffbfffff;
        Hint_Prefetch(piVar6,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = *piVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        piVar6 = arg1 + 0xc0;
        uVar9 = *(*arg1 + uVar13 * 0x18 + 8);
        Hint_Prefetch(piVar6,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = *piVar6 - (uVar9 & 0x1fff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    puVar11 = *arg1 + uVar13 * 0x18 + 8;
    uVar9 = *puVar11;
    if ((uVar9 >> 0xf & 1) == 0) {
        if ((uVar9 >> 0xe & 1) == 0) {
            if (*(*arg1 + uVar13 * 0x18) == 0) {
                return;
            }
            zs_free(*(arg1 + 8));
            piVar6 = arg1 + 0x68;
            uVar9 = *(*arg1 + uVar13 * 0x18 + 8);
            Hint_Prefetch(piVar6,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar6,0x10);
                if (bVar3) {
                    *piVar6 = *piVar6 - (uVar9 & 0x1fff);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        else {
            piVar6 = arg1 + 0xa0;
            *puVar11 = uVar9 & 0xffffffffffffbfff;
            Hint_Prefetch(piVar6,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar6,0x10);
                if (bVar3) {
                    *piVar6 = *piVar6 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
    }
    else {
        *puVar11 = uVar9 & 0xffffffffffff7fff;
        uVar9 = *(*arg1 + uVar13 * 0x18);
        uVar7 = 1L << (uVar9 & 0x3f);
        puVar11 = *(arg1 + 0x1c8) + (uVar9 >> 6 & 0x3ffffff) * 8;
        Hint_Prefetch(puVar11,2,0,1);
        do {
            uVar9 = *puVar11;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar11,0x10);
            if (bVar3) {
                *puVar11 = uVar9 & (uVar7 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar9 & uVar7) == 0) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x8003618);
            (*pcVar4)();
        }
        piVar6 = arg1 + 0xf8;
        Hint_Prefetch(piVar6,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = *piVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    piVar6 = arg1 + 200;
    Hint_Prefetch(piVar6,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
            *piVar6 = *piVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar14 = *(arg1 + 200);
    iVar5 = ktime_get_with_offset(1);
    if (*(arg1 + 0x1e8) == 0) {
        *(arg1 + 0x1e8) = iVar5;
        *(arg1 + 0x1f0) = iVar5;
        *(arg1 + 0x1f8) = iVar14;
    }
    else {
        iVar12 = iVar5 - *(arg1 + 0x1f0);
        if (200999999 < iVar12) {
            iVar10 = iVar5 - *(arg1 + 0x1e8);
            iVar1 = 0;
            if (iVar10 != 0) {
                iVar1 = (iVar12 * iVar14 + *(arg1 + 0x1f8) * (*(arg1 + 0x1f0) - *(arg1 + 0x1e8))) / iVar10;
            }
            *(arg1 + 0x1f8) = iVar1;
            *(arg1 + 0x1f0) = iVar5;
        }
    }
    *(*arg1 + uVar13 * 0x18) = 0;
    iVar5 = *arg1 + uVar13 * 0x18;
    *(iVar5 + 8) = *(iVar5 + 8) & 0xffffffffffffe000;
    if ((*(*arg1 + arg2 * 0x18 + 8) & 0xfffffffffffedfff) == 0) {
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x80035b4);
    (*pcVar4)();
}


// ===== sym.free_block_bdev @ 0x0800372c (size 176) =====

void sym.free_block_bdev(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    
    uVar6 = 1L << (arg2 & 0x3fU);
    puVar2 = *(arg1 + 0x1c8) + (arg2 >> 6 & 0x3ffffff) * 8;
    Hint_Prefetch(puVar2,2,0,1);
    do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
            *puVar2 = uVar7 & (uVar6 ^ 0xffffffffffffffff);
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if ((uVar7 & uVar6) == 0) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8003790);
        (*pcVar5)();
    }
    piVar1 = arg1 + 0xf8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = *piVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    return;
}


// ===== sym.zram_submit_bio @ 0x080037dc (size 628) =====

ulong sym.zram_submit_bio(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char cVar4;
    uint32_t uVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t *extraout_x8;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    ulong unaff_x30;
    int iStack_80;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar9 = *(arg1 + 0x20);
    iVar12 = *(*(*(arg1 + 8) + 0x3f0) + 0x58);
    if ((((uVar9 & 7) != 0 || (*(arg1 + 0x28) & 0xfff) != 0) || (uVar13 = *(arg1 + 0x28) >> 9, CARRY8(uVar9,uVar13)))
       || (uVar11 = *(iVar12 + 0x118) >> 9, uVar11 <= uVar9 || uVar11 < uVar9 + uVar13)) {
        piVar10 = iVar12 + 0x90;
        while( true ) {
            Hint_Prefetch(piVar10,2,0,1);
            do {
                cVar4 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar10,0x10);
                if (bVar6) {
                    *piVar10 = *piVar10 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            *(arg1 + 0x1a) = 10;
code_r0x080039e0:
            bio_endio(arg1);
            iVar12 = sp_el0;
            if (*(iVar12 + 0x5e0) == iStack_68) break;
            __stack_chk_fail();
            piVar10 = extraout_x8;
        }
        return 0xffffffff;
    }
    uVar13 = uVar9 >> 3;
    uVar14 = (uVar9 & 7) << 9;
    if ((*(arg1 + 0x10) == '\t') || (*(arg1 + 0x10) == '\x03')) {
        sym.zram_bio_discard(iVar12,uVar13 & 0xffffffff,uVar14,arg1);
        goto code_r0x080039e0;
    }
    uVar8 = bio_start_io_acct(arg1);
    uVar16 = *(arg1 + 0x28);
    if (uVar16 != 0) {
        iStack_80 = *(arg1 + 0x30);
        uStack_7c = *(arg1 + 0x2c);
        do {
            piVar10 = *(arg1 + 0x78) + uStack_7c * 0x10;
            uVar1 = *(piVar10 + 0xc) + iStack_80;
            uVar5 = piVar10[1] - iStack_80;
            uVar15 = uVar1 & 0xfff;
            uVar3 = uVar16;
            if (uVar5 <= uVar16) {
                uVar3 = uVar5;
            }
            if (0x1000 - uVar15 <= uVar3) {
                uVar3 = 0x1000 - uVar15;
            }
            iStack_78 = *piVar10 + (uVar1 >> 0xc) * 0x40;
            uVar1 = uVar3;
            do {
                uVar5 = 0x1000 - uVar14;
                if (uVar1 <= 0x1000 - uVar14) {
                    uVar5 = uVar1;
                }
                uStack_70 = uVar5;
                uStack_6c = uVar15;
                iVar7 = sym.zram_bvec_rw(iVar12,&iStack_78,uVar13 & 0xffffffff,*(arg1 + 0x10));
                if (iVar7 < 0) {
                    *(arg1 + 0x1a) = 10;
                    break;
                }
                uVar2 = uVar5 + uVar14;
                uVar15 = uVar5 + uVar15;
                uVar1 = uVar1 - uVar5;
                uVar14 = uVar2 & 0xfff;
                uVar13 = uVar13 + (uVar2 >> 0xc);
                uStack_6c = uVar15;
            } while (uVar1 != 0);
            if ((9 < *(arg1 + 0x10)) || ((1 << (*(arg1 + 0x10) & 0x1f) & 0x2a8U) == 0)) {
                iVar7 = uVar3 + iStack_80;
                bVar6 = iVar7 == *(*(arg1 + 0x78) + uStack_7c * 0x10 + 8);
                if (bVar6) {
                    uStack_7c = uStack_7c + 1;
                }
                iStack_80 = 0;
                if (!bVar6) {
                    iStack_80 = iVar7;
                }
            }
            uVar16 = uVar16 - uVar3;
        } while (uVar16 != 0);
    }
    bio_end_io_acct_remapped(arg1,uVar8,*(arg1 + 8));
    goto code_r0x080039e0;
}


// ===== sym.zram_open @ 0x08003a50 (size 88) =====

uint sym.zram_open(int64_t arg1)

{
    code *pcVar1;
    uint64_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = mutex_is_locked(*(arg1 + 0x3f0) + 0x70);
    if ((uVar2 & 1) != 0) {
        uVar3 = 0;
        if (*(*(*(arg1 + 0x3f0) + 0x58) + 0x1a0) != '\0') {
            uVar3 = 0xfffffff0;
        }
        return uVar3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8003aa8);
    (*pcVar1)();
}


// ===== sym.zram_rw_page @ 0x08003aac (size 368) =====

int sym.zram_rw_page(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    bool bVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *extraout_x8;
    int64_t *piVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    int64_t aiStack_58 [3];
    
    uVar6 = arg2;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    aiStack_58[2] = *(iVar9 + 0x5e0);
    if ((*arg3 >> 0x10 & 1) != 0) {
        iVar4 = -0x20c;
        goto code_r0x08003bb8;
    }
    iVar9 = *(*(arg1 + 0x3f0) + 0x58);
    if ((((arg2 & 7) == 0) && (uVar6 < 0xfffffffffffffff8)) &&
       (uVar7 = *(iVar9 + 0x118) >> 9, uVar6 < uVar7 && uVar6 + 8 <= uVar7)) {
        aiStack_58[1] = 0x1000;
        aiStack_58[0] = arg3;
        uVar5 = disk_start_io_acct(*(arg1 + 0x3f0),8,arg4 & 0xffffffff);
        iVar4 = sym.zram_bvec_rw(iVar9,aiStack_58,arg2 >> 3,arg4 & 0xffffffffU);
        disk_end_io_acct(*(arg1 + 0x3f0),arg4 & 0xffffffffU,uVar5);
        if (iVar4 < 0) goto code_r0x08003bb8;
        if (iVar4 == 1) {
            iVar4 = 0;
            goto code_r0x08003bb8;
        }
        if (iVar4 != 0) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8003bb8);
            (*pcVar3)();
        }
        page_endio(arg3,arg4 & 1,0);
        goto code_r0x08003bb8;
    }
    piVar8 = iVar9 + 0x90;
    while( true ) {
        Hint_Prefetch(piVar8,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
                *piVar8 = *piVar8 + 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        iVar4 = -0x16;
code_r0x08003bb8:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == aiStack_58[2]) break;
        __stack_chk_fail();
        piVar8 = extraout_x8;
    }
    return iVar4;
}


// ===== sym.zram_slot_free_notify @ 0x08003c1c (size 452) =====

void sym.zram_slot_free_notify(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(arg1 + 0x3f0) + 0x58);
    piVar1 = piVar8 + 0x13;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    iVar5 = sp_el0;
    iVar6 = *piVar8;
    *(iVar5 + 0x10) = *(iVar5 + 0x10) + 1;
    puVar2 = iVar6 + (arg2 & 0xffffffffU) * 0x18 + 8;
    if ((*puVar2 >> 0xd & 1) == 0) {
        Hint_Prefetch(puVar2,2,0,1);
        do {
            uVar7 = *puVar2;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
                *puVar2 = uVar7 | 0x2000;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if ((uVar7 >> 0xd & 1) == 0) {
            sym.zram_free_page(piVar8,arg2);
            puVar2 = *piVar8 + (arg2 & 0xffffffffU) * 0x18 + 8;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                    *puVar2 = *puVar2 & 0xffffffffffffdfff;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar6 = *(iVar5 + 0x10) + -1;
            *(iVar5 + 0x10) = iVar6;
            if ((iVar6 != 0) && (*(iVar5 + 0x10) != 0)) {
                return;
            }
            preempt_schedule();
            return;
        }
    }
    iVar6 = *(iVar5 + 0x10) + -1;
    *(iVar5 + 0x10) = iVar6;
    if ((iVar6 == 0) || (*(iVar5 + 0x10) == 0)) {
        preempt_schedule();
    }
    piVar8 = piVar8 + 0x1e;
    Hint_Prefetch(piVar8,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
            *piVar8 = *piVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    return;
}


// ===== sym.zram_bio_discard @ 0x08003de0 (size 332) =====

void sym.zram_bio_discard(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg2 & 0xffffffff;
    uVar8 = *(arg4 + 0x28);
    if (arg3 != 0) {
        uVar7 = 0x1000 - arg3;
        if (uVar8 <= uVar7) {
            return;
        }
        uVar8 = uVar8 - uVar7;
        uVar7 = arg2 + 1;
    }
    if (0xfff < uVar8) {
        piVar1 = arg1 + 0x98;
        iVar6 = sp_el0;
        do {
            sym.zram_slot_lock(arg1,uVar7);
            sym.zram_free_page(arg1,uVar7);
            puVar2 = *arg1 + uVar7 * 0x18 + 8;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                    *puVar2 = *puVar2 & 0xffffffffffffdfff;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar5 = *(iVar6 + 0x10) + -1;
            *(iVar6 + 0x10) = iVar5;
            if ((iVar5 == 0) || (*(iVar6 + 0x10) == 0)) {
                preempt_schedule();
            }
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            uVar7 = uVar7 + 1;
            uVar8 = uVar8 - 0x1000;
        } while (0xfff < uVar8);
    }
    return;
}


// ===== sym.zram_bvec_rw @ 0x08003f2c (size 796) =====

int sym.zram_bvec_rw(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uchar auVar3 [16];
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t in_x4;
    uint32_t *puVar9;
    uint64_t *extraout_x8;
    uint64_t *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t arg3_00;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    arg3_00 = arg3 & 0xffffffff;
    iStack_48 = *(iVar11 + 0x5e0);
    if ((arg4 & 1U) == 0) {
        piVar1 = arg1 + 0x70;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        iVar6 = sym.__zram_bvec_read(arg1,*arg2,arg3_00,in_x4);
        flush_dcache_page(*arg2);
    }
    else {
        piVar1 = arg1 + 0x78;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        uStack_58 = *arg2;
        uStack_50 = *(arg2 + 8);
        iVar6 = sym.__zram_bvec_write(arg1,&uStack_58,arg3_00);
    }
    sym.zram_slot_lock(arg1,arg3_00);
    iVar11 = arg3_00 * 0x18;
    *(*arg1 + iVar11 + 8) = *(*arg1 + iVar11 + 8) & 0xfffffffffff7ffff;
    *(*arg1 + iVar11 + 8) = *(*arg1 + iVar11 + 8) & 0x7fffff;
    iVar11 = *(*arg1 + iVar11 + 0x10);
    if (iVar11 != 0) {
        iVar7 = ktime_get_with_offset(1);
        __rcu_read_lock();
        puVar9 = *(arg1 + 0x1e0);
        if (puVar9 != NULL) {
            uVar2 = *puVar9;
            if (uVar2 == 0) {
                uVar13 = 0;
            }
            else {
                uVar12 = 0;
                auVar3 = SEXT816(iVar7 - iVar11) * SEXT816(0x112e0be826d694b3);
                do {
                    uVar13 = uVar12;
                    if ((auVar3._8_8_ >> 0x1a) - (auVar3._12_4_ >> 0x1f) <= *(*(puVar9 + 2) + uVar12 * 4)) break;
                    uVar12 = uVar12 + 1;
                    uVar13 = uVar2;
                } while (uVar2 != uVar12);
            }
            *(*(puVar9 + 4) + uVar13 * 8) = *(*(puVar9 + 4) + uVar13 * 8) + 1;
        }
        __rcu_read_unlock();
    }
    uVar8 = ktime_get_with_offset(1);
    *(*arg1 + arg3_00 * 0x18 + 0x10) = uVar8;
    puVar10 = *arg1 + arg3_00 * 0x18 + 8;
    while( true ) {
        Hint_Prefetch(puVar10,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar10,0x10);
            if (bVar5) {
                *puVar10 = *puVar10 & 0xffffffffffffdfff;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        iVar7 = sp_el0;
        iVar11 = *(iVar7 + 0x10) + -1;
        *(iVar7 + 0x10) = iVar11;
        if ((iVar11 == 0) || (*(iVar7 + 0x10) == 0)) {
            preempt_schedule();
        }
        if (iVar6 < 0) {
            if ((arg4 & 1U) == 0) {
                piVar1 = arg1 + 0x80;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                        *piVar1 = *piVar1 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
            }
            else {
                piVar1 = arg1 + 0x88;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                        *piVar1 = *piVar1 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
            }
        }
        iVar11 = sp_el0;
        if (*(iVar11 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        puVar10 = extraout_x8;
    }
    return iVar6;
}


// ===== sym.zram_slot_lock @ 0x08004248 (size 248) =====

void sym.zram_slot_lock(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    arg1 = *arg1;
    *(iVar5 + 0x10) = *(iVar5 + 0x10) + 1;
    puVar1 = arg1 + (arg2 & 0xffffffffU) * 0x18 + 8;
    uVar6 = *puVar1;
    do {
        if ((uVar6 >> 0xd & 1) == 0) {
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = uVar7 | 0x2000;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if ((uVar7 >> 0xd & 1) == 0) {
                return;
            }
        }
        iVar4 = *(iVar5 + 0x10) + -1;
        *(iVar5 + 0x10) = iVar4;
        if ((iVar4 == 0) || (*(iVar5 + 0x10) == 0)) {
            preempt_schedule();
        }
        do {
            Yield();
        } while ((*puVar1 >> 0xd & 1) != 0);
        *(iVar5 + 0x10) = *(iVar5 + 0x10) + 1;
        uVar6 = *puVar1;
    } while( true );
}


// ===== sym.__zram_bvec_read @ 0x08004340 (size 1156) =====

uint64_t sym.__zram_bvec_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t *extraout_x8;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uVar9 = arg3 & 0xffffffff;
    sym.zram_slot_lock(arg1,arg3 & 0xffffffff);
    puVar7 = *arg1 + uVar9 * 0x18 + 8;
    uVar8 = *puVar7;
    if ((uVar8 >> 0xf & 1) != 0) goto code_r0x08004714;
    arg4 = *(*arg1 + uVar9 * 0x18);
    if (arg4 == 0 || (uVar8 & 0x4000) != 0) {
        iVar3 = sp_el0;
        *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
        *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + 1;
        memset64((arg2 & 0x3ffffffffffc0U) << 6 | 0xff00000000000000,arg4,0x200);
        *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + -1;
        iVar6 = *(iVar3 + 0x10) + -1;
        *(iVar3 + 0x10) = iVar6;
        if ((iVar6 == 0) || (*(iVar3 + 0x10) == 0)) {
            preempt_schedule();
        }
        puVar7 = *arg1 + uVar9 * 0x18 + 8;
        Hint_Prefetch(puVar7,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar7,0x10);
            if (bVar2) {
                *puVar7 = *puVar7 & 0xffffffffffffdfff;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        iVar6 = *(iVar3 + 0x10) + -1;
        *(iVar3 + 0x10) = iVar6;
        if ((iVar6 == 0) || (*(iVar3 + 0x10) == 0)) {
            preempt_schedule();
            arg2 = 0;
        }
        else {
            arg2 = 0;
        }
    }
    else {
        if ((uVar8 & 0x1fff) == 0x1000) {
            uVar5 = zs_map_object(*(arg1 + 8),arg4,1);
            iVar3 = sp_el0;
            *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
            *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + 1;
            memcpy((arg2 & 0x3ffffffffffc0U) << 6 | 0xff00000000000000,uVar5,0x1000);
            *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + -1;
            iVar6 = *(iVar3 + 0x10) + -1;
            *(iVar3 + 0x10) = iVar6;
            if ((iVar6 == 0) || (*(iVar3 + 0x10) == 0)) {
                preempt_schedule();
                arg2 = 0;
            }
            else {
                arg2 = 0;
            }
        }
        else {
            iVar6 = sym.zcomp_stream_get(*(arg1 + 0x10));
            zs_map_object(*(arg1 + 8),arg4,1);
            iVar3 = sp_el0;
            *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
            *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + 1;
            uVar8 = sym.zcomp_decompress(iVar6);
            arg2 = uVar8 & 0xffffffff;
            *(iVar3 + 0xad0) = *(iVar3 + 0xad0) + -1;
            iVar6 = *(iVar3 + 0x10) + -1;
            *(iVar3 + 0x10) = iVar6;
            if ((iVar6 == 0) || (*(iVar3 + 0x10) == 0)) {
                preempt_schedule();
            }
            sym.zcomp_stream_put(*(arg1 + 0x10));
        }
        zs_unmap_object(*(arg1 + 8),arg4);
        puVar7 = *arg1 + uVar9 * 0x18 + 8;
        Hint_Prefetch(puVar7,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar7,0x10);
            if (bVar2) {
                *puVar7 = *puVar7 & 0xffffffffffffdfff;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        iVar3 = sp_el0;
        iVar6 = *(iVar3 + 0x10) + -1;
        *(iVar3 + 0x10) = iVar6;
        if ((iVar6 == 0) || (*(iVar3 + 0x10) == 0)) {
            preempt_schedule();
        }
        if (arg2 != 0) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x80046f0);
            (*pcVar4)();
        }
    }
    while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        puVar7 = extraout_x8;
code_r0x08004714:
        Hint_Prefetch(puVar7,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar7,0x10);
            if (bVar2) {
                *puVar7 = *puVar7 & 0xffffffffffffdfff;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        iVar3 = sp_el0;
        iVar6 = *(iVar3 + 0x10) + -1;
        *(iVar3 + 0x10) = iVar6;
        if ((iVar6 == 0) || (*(iVar3 + 0x10) == 0)) {
            preempt_schedule();
        }
        uStack_70 = 0x1000;
        uStack_78 = arg2;
        uVar8 = sym.read_from_bdev(arg1,&uStack_78,*(*arg1 + uVar9 * 0x18),arg4);
        arg2 = uVar8 & 0xffffffff;
    }
    return arg2;
}


// ===== sym.read_from_bdev @ 0x080047c4 (size 328) =====

ulong sym.read_from_bdev(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x100;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    iVar6 = bio_alloc_bioset(0xa20,1,fs_bio_set);
    if (iVar6 == 0) {
        uVar7 = 0xfffffff4;
    }
    else {
        uVar2 = *(iVar6 + 0x14);
        *(iVar6 + 0x20) = arg3 << 3;
        iVar8 = *(iVar6 + 8);
        *(iVar6 + 0x14) = uVar2 & 0xefff;
        if (iVar8 != *(arg1 + 0x1c0)) {
            *(iVar6 + 0x14) = uVar2 & 0xef7f;
            iVar8 = *(arg1 + 0x1c0);
        }
        *(iVar6 + 8) = iVar8;
        bio_associate_blkg(iVar6);
        iVar5 = bio_add_page(iVar6,*arg2,*(arg2 + 8),*(arg2 + 0xc));
        if (iVar5 == 0) {
            bio_put(iVar6);
            uVar7 = 0xfffffffb;
        }
        else {
            if (arg4 == 0) {
                *(iVar6 + 0x10) = 0x2000;
                *(iVar6 + 0x38) = sym.zram_page_end_io.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                *(iVar6 + 0x10) = *(arg4 + 0x10) | 0x2000;
                bio_chain(iVar6,arg4);
            }
            submit_bio(iVar6);
            uVar7 = 1;
        }
    }
    return uVar7;
}


// ===== sym.zram_page_end_io @ 0x0800490c (size 112) =====

void sym.zram_page_end_io(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint uVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x14) >> 1 & 1) == 0) {
        uVar1 = *(arg1 + 0x10);
        uVar4 = **(arg1 + 0x78);
        uVar3 = blk_status_to_errno(*(arg1 + 0x1a));
        page_endio(uVar4,uVar1 & 1,uVar3);
        bio_put(arg1);
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x800497c);
    (*pcVar2)();
}


// ===== sym.__zram_bvec_write @ 0x08004980 (size 2336) =====

int sym.__zram_bvec_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    bool bVar5;
    int iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    uint64_t *extraout_x8;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    uint64_t uVar16;
    int64_t iVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    ulong unaff_x30;
    uchar noname_1 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    uVar16 = arg3 & 0xffffffff;
    iStack_68 = *(iVar4 + 0x5e0);
    uVar19 = *arg2;
    uStack_6c = 0;
    uVar11 = *(uVar19 + 0x38);
    uVar18 = uVar11 & 0xfffffffffffffffc;
    if ((uVar11 >> 1 & 1) != 0) {
        uVar18 = *(uVar18 + 0x10);
    }
    iVar4 = sp_el0;
    *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
    *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + 1;
    uVar11 = (uVar19 & 0x3ffffffffffc0) << 6;
    piVar12 = uVar11 | 0xff00000000000000;
    iVar17 = *piVar12;
    if (iVar17 != piVar12[0x1ff]) {
code_r0x08004a98:
        *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + -1;
        iVar17 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar17;
        if ((iVar17 == 0) || (*(iVar4 + 0x10) == 0)) {
            preempt_schedule();
        }
        iVar13 = 0;
        piVar12 = arg1 + 0xe8;
        while( true ) {
            puVar7 = sym.zcomp_stream_get(*(arg1 + 0x10));
            *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
            *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + 1;
            iVar6 = sym.zcomp_compress(puVar7,noname_1,&uStack_6c);
            *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + -1;
            iVar17 = *(iVar4 + 0x10) + -1;
            *(iVar4 + 0x10) = iVar17;
            if ((iVar17 == 0) || (*(iVar4 + 0x10) == 0)) {
                preempt_schedule();
            }
            if (iVar6 != 0) break;
            uVar19 = uStack_6c;
            if (_segment.ehdr <= uVar19) {
                uVar19 = 0x1000;
                uStack_6c = 0x1000;
            }
            if ((iVar13 != 0) || (iVar13 = zs_malloc(*(arg1 + 8),uVar19,0x800280a), iVar13 != 0)) {
                uVar8 = zs_get_total_pages(*(arg1 + 8));
                puVar1 = arg1 + 0xe0;
                uVar19 = *puVar1;
                goto code_r0x08004bfc;
            }
            sym.zcomp_stream_put(*(arg1 + 0x10));
            Hint_Prefetch(piVar12,2,0,1);
            do {
                cVar2 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar12,0x10);
                if (bVar5) {
                    *piVar12 = *piVar12 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            iVar13 = zs_malloc(*(arg1 + 8),uStack_6c,0x8000c0a);
            if (iVar13 == 0) {
                iVar6 = -0xc;
                goto code_r0x08005088;
            }
        }
        sym.zcomp_stream_put(*(arg1 + 0x10));
        _printk(0x800178f,iVar6);
        goto code_r0x08004c54;
    }
    iVar13 = 8;
    do {
        if (iVar17 != *(piVar12 + iVar13)) goto code_r0x08004a98;
        iVar13 = iVar13 + 8;
    } while (iVar13 != 0xff8);
    *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + -1;
    iVar13 = *(iVar4 + 0x10) + -1;
    *(iVar4 + 0x10) = iVar13;
    if ((iVar13 == 0) || (*(iVar4 + 0x10) == 0)) {
        preempt_schedule();
    }
    piVar12 = arg1 + 0xa0;
    iVar13 = 0;
    Hint_Prefetch(piVar12,2,0,1);
    do {
        cVar2 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
            *piVar12 = *piVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    bVar5 = true;
    iVar20 = 0xe;
    goto code_r0x08004d40;
code_r0x08004bfc:
    do {
        if (uVar8 <= uVar19) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar10 = *puVar1;
            if (uVar10 != uVar19) goto code_r0x08004c1c;
            cVar2 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar8;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08004c1c:
        bVar5 = uVar10 != uVar19;
        uVar19 = uVar10;
    } while (bVar5);
    if ((*(arg1 + 0x60) != 0) && (*(arg1 + 0x60) < uVar8)) {
        sym.zcomp_stream_put(*(arg1 + 0x10));
        iVar6 = -0xc;
code_r0x08004c54:
        zs_free(*(arg1 + 8),iVar13);
        goto code_r0x08005088;
    }
    uVar9 = zs_map_object(*(arg1 + 8),iVar13,2);
    if (uStack_6c == 0x1000) {
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + 1;
        uVar11 = uVar11 | 0xff00000000000000;
    }
    else {
        uVar11 = *puVar7;
    }
    memcpy(uVar9,uVar11,uStack_6c);
    if (uStack_6c == 0x1000) {
        *(iVar4 + 0xad0) = *(iVar4 + 0xad0) + -1;
        iVar17 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar17;
        if ((iVar17 == 0) || (*(iVar4 + 0x10) == 0)) {
            preempt_schedule();
        }
    }
    sym.zcomp_stream_put(*(arg1 + 0x10));
    zs_unmap_object(*(arg1 + 8),iVar13);
    piVar12 = arg1 + 0x68;
    bVar5 = false;
    iVar17 = 0;
    Hint_Prefetch(piVar12,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
            *piVar12 = *piVar12 + uStack_6c;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar20 = 0;
code_r0x08004d40:
    sym.zram_slot_lock(arg1,uVar16);
    sym.zram_free_page(arg1,uVar16);
    if (uStack_6c == 0x1000) {
        piVar12 = arg1 + 0xa8;
        iVar14 = *arg1 + uVar16 * 0x18;
        *(iVar14 + 8) = *(iVar14 + 8) | 0x20000;
        Hint_Prefetch(piVar12,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
                *piVar12 = *piVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        piVar12 = arg1 + 0xb0;
        Hint_Prefetch(piVar12,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
                *piVar12 = *piVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    if (bVar5) {
        iVar13 = *arg1 + uVar16 * 0x18;
        *(iVar13 + 8) = *(iVar13 + 8) | 1L << iVar20;
        *(*arg1 + uVar16 * 0x18) = iVar17;
    }
    else {
        *(*arg1 + uVar16 * 0x18) = iVar13;
        iVar17 = *arg1 + uVar16 * 0x18;
        uVar11 = *0x8001000;
        *(iVar17 + 8) = *(iVar17 + 8) & 0xffffffffffffe000 | uStack_6c;
        if ((0x1000 - uStack_6c) * 100 >> 0xc < uVar11) {
            piVar12 = arg1 + 0xd0;
            iVar17 = *arg1 + uVar16 * 0x18;
            *(iVar17 + 8) = *(iVar17 + 8) | 0x40000;
            Hint_Prefetch(piVar12,2,0,1);
            do {
                cVar2 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar12,0x10);
                if (bVar5) {
                    *piVar12 = *piVar12 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
    }
    if (uVar18 != 0) {
        if (*(uVar18 + 0xfa8) == 1) {
            iVar17 = *arg1 + uVar16 * 0x18;
            *(iVar17 + 8) = *(iVar17 + 8) | 0x100000;
        }
        if ((*0x8001000 != 0) && (*(uVar18 + 4000) == 2)) {
            iVar17 = *arg1 + uVar16 * 0x18;
            *(iVar17 + 8) = *(iVar17 + 8) | 0x200000;
        }
        if (*(uVar18 + 0x300) == 0x217c5e1b4) {
            piVar12 = arg1 + 0xb8;
            iVar17 = *arg1 + uVar16 * 0x18;
            *(iVar17 + 8) = *(iVar17 + 8) | 0x400000;
            Hint_Prefetch(piVar12,2,0,1);
            do {
                cVar2 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar12,0x10);
                if (bVar5) {
                    *piVar12 = *piVar12 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            piVar12 = arg1 + 0xc0;
            Hint_Prefetch(piVar12,2,0,1);
            do {
                cVar2 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar12,0x10);
                if (bVar5) {
                    *piVar12 = *piVar12 + uStack_6c;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
    }
    puVar7 = *arg1 + uVar16 * 0x18 + 8;
    do {
        Hint_Prefetch(puVar7,2,0,1);
        do {
            cVar2 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar7,0x10);
            if (bVar5) {
                *puVar7 = *puVar7 & 0xffffffffffffdfff;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar17 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar17;
        if ((iVar17 == 0) || (*(iVar4 + 0x10) == 0)) {
            preempt_schedule();
        }
        piVar12 = arg1 + 200;
        Hint_Prefetch(piVar12,2,0,1);
        do {
            cVar2 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
                *piVar12 = *piVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar13 = *(arg1 + 200);
        iVar17 = ktime_get_with_offset(1);
        if (*(arg1 + 0x1e8) == 0) {
            *(arg1 + 0x1e8) = iVar17;
            *(arg1 + 0x1f0) = iVar17;
            *(arg1 + 0x1f8) = iVar13;
        }
        else {
            iVar20 = iVar17 - *(arg1 + 0x1f0);
            if (200999999 < iVar20) {
                iVar15 = iVar17 - *(arg1 + 0x1e8);
                iVar14 = 0;
                if (iVar15 != 0) {
                    iVar14 = (iVar20 * iVar13 + *(arg1 + 0x1f8) * (*(arg1 + 0x1f0) - *(arg1 + 0x1e8))) / iVar15;
                }
                *(arg1 + 0x1f8) = iVar14;
                *(arg1 + 0x1f0) = iVar17;
            }
        }
        puVar7 = arg1 + 0xd8;
        uVar11 = *puVar7;
        do {
            if (*(arg1 + 200) <= uVar11) break;
            Hint_Prefetch(puVar7,2,0,1);
            do {
                uVar16 = *puVar7;
                if (uVar16 != uVar11) goto code_r0x08005068;
                cVar2 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar7,0x10);
                if (bVar5) {
                    *puVar7 = *(arg1 + 200);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005068:
            bVar5 = uVar16 != uVar11;
            uVar11 = uVar16;
        } while (bVar5);
        iVar6 = 0;
code_r0x08005088:
        iVar17 = sp_el0;
        if (*(iVar17 + 0x5e0) == iStack_68) {
            return iVar6;
        }
        __stack_chk_fail();
        puVar7 = extraout_x8;
    } while( true );
}


// ===== sym.disksize_show @ 0x080052a0 (size 72) =====

int64_t sym.disksize_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%llu\n",*(*(*(arg1 + 0x3b0) + 0x58) + 0x118));
    return iVar1;
}


// ===== sym.disksize_store @ 0x080052e8 (size 568) =====

int64_t sym.disksize_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint *puVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *arg1_00;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x3b0) + 0x58);
    iVar2 = memparse(arg2,0);
    if (iVar2 == 0) {
        arg3 = -0x16;
    }
    else {
        down_write(arg1_00 + 4);
        if (arg1_00[0x23] == 0) {
            iVar3 = vzalloc((iVar2 + 0xfffU >> 0xc) * 0x18);
            *arg1_00 = iVar3;
            if (iVar3 == 0) {
                arg3 = -0xc;
            }
            else {
                iVar3 = zs_create_pool(arg1_00[3] + 0xc);
                arg1_00[1] = iVar3;
                if (iVar3 == 0) {
                    vfree(*arg1_00);
                    arg3 = -0xc;
                }
                else {
                    iVar3 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar3 = 0x30;
                    }
                    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xcc0,0x28);
                    if (puVar4 != NULL) {
                        iVar3 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar3 = 0x30;
                        }
                        *puVar4 = 5;
                        puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xcc0,0x14);
                        bVar1 = android_kmalloc_64_create != 0x0;
                        *(puVar4 + 2) = puVar5;
                        iVar3 = 0x38;
                        if (bVar1) {
                            iVar3 = 0x30;
                        }
                        iVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x30);
                        *(puVar4 + 4) = iVar3;
                        if ((puVar5 == NULL) || (iVar3 == 0)) {
                            *puVar4 = 0;
                            if (puVar5 != NULL) {
                                kfree(puVar5);
                                *(puVar4 + 2) = 0;
                            }
                            kfree(puVar4);
                            puVar4 = NULL;
                        }
                        else {
                            *puVar5 = 0x780000003c;
                            puVar5[1] = 0x12c000000b4;
                            *(puVar5 + 2) = 600;
                        }
                    }
                    arg1_00[0x3c] = puVar4;
                    uVar7 = iVar2 + 0xfffU & 0xfffffffffffff000;
                    if (_segment.ehdr == 0) {
                        _segment.ehdr = zs_huge_class_size(arg1_00[1]);
                    }
                    uVar6 = sym.zcomp_create(arg1_00 + 0x24);
                    if (uVar6 < 0xfffffffffffff001) {
                        arg1_00[0x3d] = 0;
                        arg1_00[0x3e] = 0;
                        arg1_00[2] = uVar6;
                        arg1_00[0x23] = uVar7;
                        set_capacity_and_notify(arg1_00[3],uVar7 >> 9);
                    }
                    else {
                        _printk(0x80018f6,arg1_00 + 0x24);
                        sym.zram_meta_free(arg1_00,uVar7);
                        arg3 = uVar6;
                    }
                }
            }
        }
        else {
            _printk(0x8001860);
            arg3 = -0x10;
        }
        up_write(arg1_00 + 4);
    }
    return arg3;
}


// ===== sym.initstate_show @ 0x08005520 (size 120) =====

int64_t sym.initstate_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    iVar3 = *(iVar3 + 0x118);
    up_read(iVar1);
    iVar2 = scnprintf(arg2,0x1000,0x8001897,iVar3 != 0);
    return iVar2;
}


// ===== sym.reset_store @ 0x08005598 (size 284) =====

int64_t sym.reset_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t arg1_00;
    ulong unaff_x30;
    int16_t aiStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    aiStack_3c[0] = 0;
    iVar3 = arg3;
    iVar1 = kstrtou16(arg2,10,aiStack_3c);
    if (iVar1 == 0) {
        if (aiStack_3c[0] == 0) {
            arg3 = -0x16;
        }
        else {
            arg1_00 = *(*(arg1 + 0x3b0) + 0x58);
            iVar2 = *(*(arg1_00 + 0x18) + 0x40);
            mutex_lock(*(iVar2 + 0x3f0) + 0x70);
            if ((*(iVar2 + 0x20) == 0) && (*(arg1_00 + 0x1a0) == '\0')) {
                *(arg1_00 + 0x1a0) = 1;
                mutex_unlock(*(iVar2 + 0x3f0) + 0x70);
                fsync_bdev(iVar2);
                sym.zram_reset_device(arg1_00);
                mutex_lock(*(iVar2 + 0x3f0) + 0x70);
                *(arg1_00 + 0x1a0) = 0;
                mutex_unlock(*(iVar2 + 0x3f0) + 0x70);
            }
            else {
                mutex_unlock(*(iVar2 + 0x3f0) + 0x70);
                arg3 = -0x10;
            }
        }
    }
    else {
        arg3 = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.compact_store;
    iVar2 = *(*(iVar2 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    if (*(iVar2 + 0x118) == 0) {
        iVar3 = -0x16;
    }
    else {
        zs_compact(*(iVar2 + 8));
    }
    up_read(iVar2 + 0x20);
    return iVar3;
}


// ===== sym.compact_store @ 0x080056b4 (size 108) =====

int64_t sym.compact_store(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x3b0) + 0x58);
    down_read(iVar1 + 0x20);
    if (*(iVar1 + 0x118) == 0) {
        arg2 = -0x16;
    }
    else {
        zs_compact(*(iVar1 + 8));
    }
    up_read(iVar1 + 0x20);
    return arg2;
}


// ===== sym.mem_limit_store @ 0x08005720 (size 184) =====

int64_t sym.mem_limit_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    int64_t *arg1_00;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t arg2_00;
    int iVar13;
    ulong unaff_x30;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_40 = 0;
    iVar11 = *(*(arg1 + 0x3b0) + 0x58);
    iVar6 = arg2;
    iVar9 = arg3;
    iVar4 = memparse(arg2,&iStack_40);
    if (iStack_40 == arg2) {
        arg3 = -0x16;
    }
    else {
        arg2 = iVar11 + 0x20;
        down_write(arg2);
        *(iVar11 + 0x60) = iVar4 + 0xfffU >> 0xc;
        up_write(arg2);
        unaff_x20 = iVar4;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar11 = __stack_chk_fail();
    piVar8 = &iStack_80;
    *extraout_x18 = sym.mem_used_max_store;
    pcStack_68 = sym.mem_used_max_store;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    iStack_80 = 0;
    iVar11 = *(*(iVar11 + 0x3b0) + 0x58);
    iVar4 = iVar9;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = arg2;
    iStack_50 = unaff_x20;
    iStack_48 = arg3;
    iVar3 = kstrtoull(iVar6,10,&iStack_80);
    iVar6 = -0x16;
    if ((iVar3 == 0) && (iStack_80 == 0)) {
        down_read(iVar11 + 0x20);
        if (*(iVar11 + 0x118) != 0) {
            uVar5 = zs_get_total_pages(*(iVar11 + 8));
            *(iVar11 + 0xe0) = uVar5;
        }
        up_read(iVar11 + 0x20);
        iVar6 = iVar9;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_78) {
        iVar6 = __stack_chk_fail(iVar6);
        *extraout_x18_00 = sym.idle_store;
        arg1_00 = *(*(iVar6 + 0x3b0) + 0x58);
        uVar12 = arg1_00[0x23];
        uVar7 = sysfs_streq(piVar8,0x8001931);
        if ((uVar7 & 1) != 0) {
            piVar8 = arg1_00 + 4;
            down_read(piVar8);
            if (arg1_00[0x23] != 0) {
                if (uVar12 < 0x1000) {
                    iVar3 = 0;
                }
                else {
                    iVar3 = 0;
                    iVar6 = sp_el0;
                    iVar13 = 1;
                    do {
                        arg2_00 = iVar13 - 1;
                        sym.zram_slot_lock(arg1_00,arg2_00);
                        iVar9 = *arg1_00;
                        puVar10 = iVar9 + arg2_00 * 0x18 + 8;
                        uVar7 = *puVar10;
                        if ((((((uVar7 & 0x1fff) != 0 && (uVar7 & 0x40000) != 0) && (uVar7 & 0x10000) == 0) &&
                             (uVar7 & 0x100000) == 0) && (uVar7 & 0x8000) == 0) &&
                           ((*0x8001000 == 0 || ((uVar7 >> 0x15 & 1) != 0)))) {
                            if (uVar7 >> 0x18 < 5) {
                                *puVar10 = uVar7 & 0x7fffff;
                                iVar9 = *arg1_00 + arg2_00 * 0x18;
                                *(iVar9 + 8) = *(iVar9 + 8) | uVar7 + 0x800000 & 0xffffffffff800000;
                                iVar9 = *arg1_00;
                                uVar7 = *(iVar9 + arg2_00 * 0x18 + 8);
                            }
                            if ((uVar7 >> 0x13 & 1) == 0) {
                                iVar3 = iVar3 + 1;
                                *(iVar9 + arg2_00 * 0x18 + 8) = uVar7 | 0x80000;
                                iVar9 = *arg1_00;
                            }
                        }
                        puVar10 = iVar9 + arg2_00 * 0x18 + 8;
                        Hint_Prefetch(puVar10,2,0,1);
                        do {
                            cVar1 = '\x01';
                            bVar2 = ExclusiveMonitorPass(puVar10,0x10);
                            if (bVar2) {
                                *puVar10 = *puVar10 & 0xffffffffffffdfff;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                        iVar9 = *(iVar6 + 0x10) + -1;
                        *(iVar6 + 0x10) = iVar9;
                        if ((iVar9 == 0) || (*(iVar6 + 0x10) == 0)) {
                            preempt_schedule();
                        }
                        uVar7 = iVar13;
                        iVar13 = iVar13 + 1;
                    } while (uVar7 < uVar12 >> 0xc);
                }
                up_read(piVar8);
                _printk(0x8001993,iVar3);
                return iVar4;
            }
            up_read(piVar8);
        }
        return -0x16;
    }
    return iVar6;
}


// ===== sym.mem_used_max_store @ 0x080057d8 (size 192) =====

int64_t sym.mem_used_max_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1_00;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t arg2_00;
    int iVar12;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar7 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_40 = 0;
    iVar10 = *(*(arg1 + 0x3b0) + 0x58);
    iVar8 = arg3;
    iVar3 = kstrtoull(arg2,10,&iStack_40);
    iVar5 = -0x16;
    if ((iVar3 == 0) && (iStack_40 == 0)) {
        down_read(iVar10 + 0x20);
        if (*(iVar10 + 0x118) != 0) {
            uVar4 = zs_get_total_pages(*(iVar10 + 8));
            *(iVar10 + 0xe0) = uVar4;
        }
        up_read(iVar10 + 0x20);
        iVar5 = arg3;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_38) {
        iVar5 = __stack_chk_fail(iVar5);
        *extraout_x18 = sym.idle_store;
        arg1_00 = *(*(iVar5 + 0x3b0) + 0x58);
        uVar11 = arg1_00[0x23];
        uVar6 = sysfs_streq(piVar7,0x8001931);
        if ((uVar6 & 1) != 0) {
            piVar7 = arg1_00 + 4;
            down_read(piVar7);
            if (arg1_00[0x23] != 0) {
                if (uVar11 < 0x1000) {
                    iVar3 = 0;
                }
                else {
                    iVar3 = 0;
                    iVar5 = sp_el0;
                    iVar12 = 1;
                    do {
                        arg2_00 = iVar12 - 1;
                        sym.zram_slot_lock(arg1_00,arg2_00);
                        iVar10 = *arg1_00;
                        puVar9 = iVar10 + arg2_00 * 0x18 + 8;
                        uVar6 = *puVar9;
                        if ((((((uVar6 & 0x1fff) != 0 && (uVar6 & 0x40000) != 0) && (uVar6 & 0x10000) == 0) &&
                             (uVar6 & 0x100000) == 0) && (uVar6 & 0x8000) == 0) &&
                           ((*0x8001000 == 0 || ((uVar6 >> 0x15 & 1) != 0)))) {
                            if (uVar6 >> 0x18 < 5) {
                                *puVar9 = uVar6 & 0x7fffff;
                                iVar10 = *arg1_00 + arg2_00 * 0x18;
                                *(iVar10 + 8) = *(iVar10 + 8) | uVar6 + 0x800000 & 0xffffffffff800000;
                                iVar10 = *arg1_00;
                                uVar6 = *(iVar10 + arg2_00 * 0x18 + 8);
                            }
                            if ((uVar6 >> 0x13 & 1) == 0) {
                                iVar3 = iVar3 + 1;
                                *(iVar10 + arg2_00 * 0x18 + 8) = uVar6 | 0x80000;
                                iVar10 = *arg1_00;
                            }
                        }
                        puVar9 = iVar10 + arg2_00 * 0x18 + 8;
                        Hint_Prefetch(puVar9,2,0,1);
                        do {
                            cVar1 = '\x01';
                            bVar2 = ExclusiveMonitorPass(puVar9,0x10);
                            if (bVar2) {
                                *puVar9 = *puVar9 & 0xffffffffffffdfff;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                        iVar10 = *(iVar5 + 0x10) + -1;
                        *(iVar5 + 0x10) = iVar10;
                        if ((iVar10 == 0) || (*(iVar5 + 0x10) == 0)) {
                            preempt_schedule();
                        }
                        uVar6 = iVar12;
                        iVar12 = iVar12 + 1;
                    } while (uVar6 < uVar11 >> 0xc);
                }
                up_read(piVar7);
                _printk(0x8001993,iVar3);
                return iVar8;
            }
            up_read(piVar7);
        }
        return -0x16;
    }
    return iVar5;
}


// ===== sym.idle_store @ 0x08005898 (size 512) =====

int64_t sym.idle_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    ulong *in_x18;
    int64_t *arg1_00;
    int iVar8;
    uint64_t uVar9;
    uint64_t arg2_00;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x3b0) + 0x58);
    uVar9 = arg1_00[0x23];
    uVar5 = sysfs_streq(arg2,0x8001931);
    if ((uVar5 & 1) != 0) {
        piVar1 = arg1_00 + 4;
        down_read(piVar1);
        if (arg1_00[0x23] != 0) {
            if (uVar9 < 0x1000) {
                iVar8 = 0;
            }
            else {
                iVar8 = 0;
                iVar4 = sp_el0;
                iVar10 = 1;
                do {
                    arg2_00 = iVar10 - 1;
                    sym.zram_slot_lock(arg1_00,arg2_00);
                    iVar6 = *arg1_00;
                    puVar7 = iVar6 + arg2_00 * 0x18 + 8;
                    uVar5 = *puVar7;
                    if ((((((uVar5 & 0x1fff) != 0 && (uVar5 & 0x40000) != 0) && (uVar5 & 0x10000) == 0) &&
                         (uVar5 & 0x100000) == 0) && (uVar5 & 0x8000) == 0) &&
                       ((*0x8001000 == 0 || ((uVar5 >> 0x15 & 1) != 0)))) {
                        if (uVar5 >> 0x18 < 5) {
                            *puVar7 = uVar5 & 0x7fffff;
                            iVar6 = *arg1_00 + arg2_00 * 0x18;
                            *(iVar6 + 8) = *(iVar6 + 8) | uVar5 + 0x800000 & 0xffffffffff800000;
                            iVar6 = *arg1_00;
                            uVar5 = *(iVar6 + arg2_00 * 0x18 + 8);
                        }
                        if ((uVar5 >> 0x13 & 1) == 0) {
                            iVar8 = iVar8 + 1;
                            *(iVar6 + arg2_00 * 0x18 + 8) = uVar5 | 0x80000;
                            iVar6 = *arg1_00;
                        }
                    }
                    puVar7 = iVar6 + arg2_00 * 0x18 + 8;
                    Hint_Prefetch(puVar7,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar7,0x10);
                        if (bVar3) {
                            *puVar7 = *puVar7 & 0xffffffffffffdfff;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    iVar6 = *(iVar4 + 0x10) + -1;
                    *(iVar4 + 0x10) = iVar6;
                    if ((iVar6 == 0) || (*(iVar4 + 0x10) == 0)) {
                        preempt_schedule();
                    }
                    uVar5 = iVar10;
                    iVar10 = iVar10 + 1;
                } while (uVar5 < uVar9 >> 0xc);
            }
            up_read(piVar1);
            _printk(0x8001993,iVar8);
            return arg3;
        }
        up_read(piVar1);
    }
    return -0x16;
}


// ===== sym.new_store @ 0x08005a98 (size 352) =====

int64_t sym.new_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *arg1_00;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x3b0) + 0x58);
    uVar7 = arg1_00[0x23];
    uVar5 = sysfs_streq(arg2,0x8001931);
    if ((uVar5 & 1) == 0) {
        arg3 = -0x16;
    }
    else {
        down_read(arg1_00 + 4);
        if (arg1_00[0x23] == 0) {
            arg3 = -0x16;
        }
        else if (0xfff < uVar7) {
            uVar5 = 0;
            iVar4 = sp_el0;
            do {
                sym.zram_slot_lock(arg1_00,uVar5);
                iVar6 = uVar5 * 0x18;
                *(*arg1_00 + iVar6 + 8) = *(*arg1_00 + iVar6 + 8) & 0xfffffffffff7ffff;
                *(*arg1_00 + iVar6 + 8) = *(*arg1_00 + iVar6 + 8) & 0x7fffff;
                puVar1 = *arg1_00 + iVar6 + 8;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & 0xffffffffffffdfff;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                iVar6 = *(iVar4 + 0x10) + -1;
                *(iVar4 + 0x10) = iVar6;
                if ((iVar6 == 0) || (*(iVar4 + 0x10) == 0)) {
                    preempt_schedule();
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7 >> 0xc);
        }
        up_read(arg1_00 + 4);
    }
    return arg3;
}


// ===== sym.max_comp_streams_show @ 0x08005bf8 (size 68) =====

int64_t sym.max_comp_streams_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x80019d1,___num_online_cpus);
    return iVar1;
}


// ===== sym.max_comp_streams_store @ 0x08005c40 (size 16) =====

int64_t sym.max_comp_streams_store(int64_t arg1)

{
    return arg1;
}


// ===== sym.comp_algorithm_show @ 0x08005c50 (size 100) =====

ulong sym.comp_algorithm_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    uVar2 = sym.zcomp_available_show(iVar3 + 0x120,arg2);
    up_read(iVar1);
    return uVar2;
}


// ===== sym.comp_algorithm_store @ 0x08005cb4 (size 304) =====

int64_t sym.comp_algorithm_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    char cStack_b9;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iVar4 = *(*(arg1 + 0x3b0) + 0x58);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    strlcpy(&uStack_b8,arg2,0x80);
    iVar3 = strlen(&uStack_b8);
    if (iVar3 != 0) {
        if (0x7f < iVar3 - 1U) goto code_r0x08005de0;
        if ((&cStack_b9)[iVar3] == '\n') {
            (&cStack_b9)[iVar3] = '\0';
        }
    }
    iVar2 = crypto_has_alg(&uStack_b8,2,0xf);
    if (iVar2 == 1) {
        iVar3 = iVar4 + 0x20;
        down_write(iVar3);
        if (*(iVar4 + 0x118) == 0) {
            strcpy(iVar4 + 0x120,&uStack_b8);
            up_write(iVar3);
        }
        else {
            up_write(iVar3);
            _printk(0x8001abd);
            arg3 = -0x10;
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail();
code_r0x08005de0:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005de4);
    (*pcVar1)();
}


// ===== sym.backing_dev_show @ 0x08005de4 (size 184) =====

uint64_t sym.backing_dev_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    iVar3 = *(iVar3 + 0x1a8);
    if (iVar3 == 0) {
        uVar2 = 5;
        *(arg2 + 4) = 10;
        *arg2 = 0x656e6f6e;
    }
    else {
        uVar2 = file_path(iVar3,arg2,0xfff);
        if (uVar2 < 0xfffffffffffff001) {
            iVar3 = strlen(uVar2);
            memmove(arg2,uVar2,iVar3);
            uVar2 = iVar3 + 1;
            *(arg2 + iVar3) = 10;
        }
    }
    up_read(iVar1);
    return uVar2;
}


// ===== sym.backing_dev_store @ 0x08005e9c (size 496) =====

int64_t sym.backing_dev_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t arg1_00;
    int iVar8;
    uint16_t *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x3b0) + 0x58);
    iVar2 = kmem_cache_alloc_trace(_crypto_has_alg,0xcc0,0x1000);
    if (iVar2 == 0) {
        return -0xc;
    }
    iVar1 = arg1_00 + 0x20;
    down_write(iVar1);
    if (*(arg1_00 + 0x118) == 0) {
        strlcpy(iVar2,arg2,0x1000);
        iVar3 = strlen(iVar2);
        if ((iVar3 != 0) && (*(iVar2 + iVar3 + -1) == '\n')) {
            *(iVar2 + iVar3 + -1) = 0;
        }
        uVar4 = filp_open_block(iVar2,0x20002,0);
        if (uVar4 < 0xfffffffffffff001) {
            puVar9 = **(uVar4 + 0xe8);
            uVar7 = uVar4;
            if ((*puVar9 & 0xf000) == 0x6000) {
                uVar5 = blkdev_get_by_dev(*(puVar9 + 0x26),0x83,arg1_00);
                if (uVar5 < 0xfffffffffffff001) {
                    iVar6 = *(puVar9 + 0x28);
                    iVar3 = kvmalloc_node((iVar6 >> 0xc) + 0x3fU >> 3 & 0xfffffff8,0xdc0,0xffffffff);
                    if (iVar3 != 0) {
                        sym.reset_bdev(arg1_00);
                        *(arg1_00 + 0x1a8) = uVar4;
                        *(arg1_00 + 0x1c0) = uVar5;
                        *(arg1_00 + 0x1c8) = iVar3;
                        *(arg1_00 + 0x1d0) = iVar6 >> 0xc;
                        *(*(arg1_00 + 0x18) + 0x48) = reloc.zram_submit_bio.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                        up_write(iVar1);
                        _printk(0x8001c43,iVar2);
                        kfree(iVar2);
                        return arg3;
                    }
                    kvfree();
                    if (uVar5 != 0) {
                        blkdev_put(uVar5,0x83);
                    }
                    iVar8 = -0xc;
                    goto joined_r0x08005fe0;
                }
            }
            else {
                uVar5 = 0xfffffffffffffff1;
            }
        }
        else {
            uVar7 = 0;
            uVar5 = uVar4;
        }
    }
    else {
        _printk(0x80018b2);
        uVar7 = 0;
        uVar5 = 0xfffffffffffffff0;
    }
    iVar8 = uVar5;
    kvfree(0);
    uVar4 = uVar7;
joined_r0x08005fe0:
    if (uVar4 != 0) {
        filp_close(uVar4,0);
    }
    up_write(iVar1);
    kfree(iVar2);
    return iVar8;
}


// ===== sym.writeback_store @ 0x0800608c (size 1732) =====

void sym.writeback_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    uint64_t *puVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t *puVar11;
    int64_t iVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    uint64_t uVar15;
    int64_t *arg1_00;
    uint64_t arg2_00;
    uint32_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint32_t uStack_294;
    int iStack_290;
    uint32_t uStack_28c;
    uint64_t uStack_288;
    uint64_t uStack_280;
    int64_t iStack_278;
    int64_t iStack_270;
    int64_t aiStack_268 [63];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_70 = *(iVar7 + 0x5e0);
    uStack_288 = 0xffffffffffffffff;
    uStack_280 = 0;
    uStack_28c = 1;
    arg1_00 = *(*(arg1 + 0x3b0) + 0x58);
    uVar15 = arg1_00[0x23] >> 0xc;
    memset(&iStack_270,0,0x200);
    iVar7 = kstrndup(arg2,0x20,0xcc0);
    iStack_278 = iVar7;
    if (iVar7 == 0) {
code_r0x08006198:
        uVar9 = sysfs_streq(arg2,"idle");
        if ((uVar9 & 1) != 0) goto code_r0x0800624c;
        uVar9 = sysfs_streq(arg2,"huge");
        if ((uVar9 & 1) == 0) {
            iVar6 = strncmp(arg2,"page_index=",0xb);
            if (iVar6 != 0) {
                iVar7 = -0x16;
                goto code_r0x080066a8;
            }
            iVar6 = kstrtoll(arg2 + 0xb,10,&uStack_280);
            iVar7 = -0x16;
            if ((iVar6 != 0) || (uVar15 <= uStack_280)) goto code_r0x080066a8;
            uVar15 = 1;
            uStack_294 = 0;
        }
        else {
            uStack_294 = 1;
        }
    }
    else {
        uVar8 = strsep(&iStack_278,0x8001772);
        uVar9 = sysfs_streq(uVar8,"idle");
        if ((uVar9 & 1) == 0) {
code_r0x08006190:
            kfree(iVar7);
            goto code_r0x08006198;
        }
        iVar10 = strsep(&iStack_278,0x8001772);
        if (iVar10 != 0) {
            iVar6 = kstrtoull(iVar10,10,&uStack_288);
            if (iVar6 != 0) goto code_r0x08006190;
            iVar10 = strsep(&iStack_278,0x8001772);
            if (iVar10 != 0) {
                iVar6 = kstrtouint(iVar10,10,&uStack_28c);
                if ((iVar6 != 0) || (iVar10 = strsep(&iStack_278,0x8001772), iVar10 != 0)) goto code_r0x08006190;
                if (10 < uStack_28c) {
                    uStack_28c = 10;
                }
            }
        }
        _printk(0x8001bac,uStack_288,uStack_28c);
        kfree(iVar7);
code_r0x0800624c:
        uStack_294 = 2;
    }
    down_read(arg1_00 + 4);
    if (arg1_00[0x23] == 0) {
        iStack_290 = 0;
        uVar9 = 0;
        iVar10 = -0x16;
    }
    else if (arg1_00[0x35] == 0) {
        iStack_290 = 0;
        uVar9 = 0;
        iVar10 = -0x13;
    }
    else if (arg1_00[0x3b] == 0) {
        iStack_290 = 0;
        uVar9 = 0;
        iVar10 = -0xc;
    }
    else {
        iVar10 = arg3;
        if (uVar15 == 0) {
            iStack_290 = 0;
            uVar9 = 0;
        }
        else {
            uVar9 = 0;
            arg2_00 = 0;
            uVar16 = 0;
            piVar1 = arg1_00 + 0x36;
            iStack_290 = 0;
            puVar4 = sp_el0;
            uVar14 = 0;
            do {
                uVar17 = uVar14;
                if ((((*puVar4 >> 6 & 1) != 0) || ((*puVar4 & 1) != 0)) &&
                   (((*(puVar4[0xfe] + 0x51) >> 1 & 1) != 0 || ((*(puVar4 + 0x829) >> 1 & 1) != 0)))) {
                    _printk(0x80017f5);
                    iVar10 = -4;
                    break;
                }
                _raw_spin_lock(piVar1);
                if ((*(arg1_00 + 0x1b4) != '\0') && (arg1_00[0x37] == 0)) {
                    _raw_spin_unlock(piVar1);
                    iVar10 = -5;
                    break;
                }
                _raw_spin_unlock(piVar1);
                if (arg2_00 == 0) {
                    arg2_00 = sym.alloc_block_bdev(arg1_00);
                    if (arg2_00 == 0) {
                        iVar10 = -0x1c;
                        break;
                    }
                    uVar17 = arg2_00;
                    if (uVar16 != 0) {
                        uVar17 = uVar14;
                    }
                    uVar14 = uVar17;
                    if (uVar16 < 0x20) goto code_r0x08006370;
code_r0x0800637c:
                    iVar6 = sym.wait_for_writeback_batch(arg1_00,uVar14 & 0xffffffff,uVar16,&iStack_270);
                    uVar16 = 0;
                    uVar9 = uVar9 + iVar6;
                    iStack_290 = iStack_290 + 1;
                    uVar17 = arg2_00;
                }
                else {
                    if (0x1f < uVar16) goto code_r0x0800637c;
code_r0x08006370:
                    uVar14 = uVar17;
                    if (uVar17 + uVar16 != arg2_00) goto code_r0x0800637c;
                }
                if (uStack_288 <= uVar9) break;
                iVar7 = arg1_00[0x3b];
                sym.zram_slot_lock(arg1_00,uStack_280 & 0xffffffff);
                puVar11 = *arg1_00 + (uStack_280 & 0xffffffff) * 0x18 + 8;
                uVar14 = *puVar11;
                if ((((((((uVar14 & 0xdfff) == 0) || (uVar13 = uVar14, (uVar13 >> 0xf & 1) != 0)) ||
                       ((uVar13 >> 0x12 & 1) == 0)) || ((uVar13 >> 0x10 & 1) != 0)) ||
                     ((uStack_294 >> 1 != 0 && (((uVar13 >> 0x13 & 1) == 0 || (uVar14 >> 0x17 < uStack_28c)))))) ||
                    (((uStack_294 & 1) != 0 && ((uVar13 >> 0x11 & 1) == 0)))) ||
                   (((*0x8001000 != 0 && (uVar14 & 0x200000) == 0 || ((uVar13 >> 0x14 & 1) != 0)) ||
                    ((uVar13 >> 0x16 & 1) != 0)))) {
                    Hint_Prefetch(puVar11,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar11,0x10);
                        if (bVar3) {
                            *puVar11 = *puVar11 & 0xffffffffffffdfff;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    iVar7 = puVar4[2] - 1;
                    *(puVar4 + 2) = iVar7;
                    if (iVar7 != 0) {
                        uVar14 = puVar4[2];
joined_r0x08006578:
                        if (uVar14 != 0) goto code_r0x080062e8;
                    }
code_r0x080062e4:
                    preempt_schedule();
                }
                else {
                    *puVar11 = uVar14 | 0x10000;
                    iVar12 = *arg1_00 + (uStack_280 & 0xffffffff) * 0x18;
                    *(iVar12 + 8) = *(iVar12 + 8) | 0x80000;
                    puVar11 = *arg1_00 + (uStack_280 & 0xffffffff) * 0x18 + 8;
                    Hint_Prefetch(puVar11,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar11,0x10);
                        if (bVar3) {
                            *puVar11 = *puVar11 & 0xffffffffffffdfff;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    iVar12 = puVar4[2] - 1;
                    *(puVar4 + 2) = iVar12;
                    if ((iVar12 == 0) || (puVar4[2] == 0)) {
                        preempt_schedule();
                    }
                    iVar12 = uVar16;
                    iVar7 = iVar7 + iVar12 * 0x40;
                    iVar6 = sym.__zram_bvec_read(arg1_00,iVar7,uStack_280 & 0xffffffff,0);
                    if (iVar6 != 0) {
                        sym.zram_slot_lock(arg1_00,uStack_280 & 0xffffffff);
                        iVar7 = *arg1_00 + (uStack_280 & 0xffffffff) * 0x18;
                        *(iVar7 + 8) = *(iVar7 + 8) & 0xfffffffffffeffff;
                        iVar7 = *arg1_00 + (uStack_280 & 0xffffffff) * 0x18;
                        *(iVar7 + 8) = *(iVar7 + 8) & 0xfffffffffff7ffff;
                        iVar7 = *arg1_00 + (uStack_280 & 0xffffffff) * 0x18;
                        *(iVar7 + 8) = *(iVar7 + 8) & 0x7fffff;
                        puVar11 = *arg1_00 + (uStack_280 & 0xffffffff) * 0x18 + 8;
                        Hint_Prefetch(puVar11,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar11,0x10);
                            if (bVar3) {
                                *puVar11 = *puVar11 & 0xffffffffffffdfff;
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        iVar7 = puVar4[2] - 1;
                        *(puVar4 + 2) = iVar7;
                        if (iVar7 != 0) {
                            uVar14 = puVar4[2];
                            goto joined_r0x08006578;
                        }
                        goto code_r0x080062e4;
                    }
                    if (0x1f < uVar16) {
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(0x5512,0x80066f0);
                        (*pcVar5)();
                    }
                    if ((0x200 < iVar12 * 0x10) || (aiStack_268[iVar12 * 2 + -1] = iVar7, 0x200 < (iVar12 * 0x10 | 8U))
                       ) goto code_r0x080066e8;
                    arg2_00 = 0;
                    uVar16 = uVar16 + 1;
                    *(aiStack_268 + iVar12 * 2) = uStack_280;
                }
code_r0x080062e8:
                uVar15 = uVar15 - 1;
                uStack_280 = uStack_280 + 1;
                uVar14 = uVar17;
            } while (uVar15 != 0);
            if (uVar16 != 0) {
                iVar6 = sym.wait_for_writeback_batch(arg1_00,uVar17 & 0xffffffff,uVar16,&iStack_270);
                uVar9 = uVar9 + iVar6;
                iStack_290 = iStack_290 + 1;
            }
            if (arg2_00 != 0) {
                sym.free_block_bdev(arg1_00,arg2_00);
            }
        }
    }
    up_read(arg1_00 + 4);
    _printk(0x8001944,uStack_294,uVar9,iStack_290);
    iVar7 = arg3;
    if (iVar10 != 0) {
        iVar7 = iVar10;
    }
code_r0x080066a8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x080066e8:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x80066ec);
    (*pcVar5)();
}


// ===== sym.alloc_block_bdev @ 0x08006750 (size 356) =====

uint64_t sym.alloc_block_bdev(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = 1;
    do {
        uVar5 = _find_next_bit(*(arg1 + 0x1c8),0,*(arg1 + 0x1d0),uVar5,0xffffffffffffffff,0);
        if (uVar5 == *(arg1 + 0x1d0)) {
            return 0;
        }
        uVar6 = 1L << (uVar5 & 0x3f);
        puVar2 = *(arg1 + 0x1c8) + (uVar5 >> 6 & 0x3ffffff) * 8;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            uVar7 = *puVar2;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
                *puVar2 = uVar7 | uVar6;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
    } while ((uVar7 & uVar6) != 0);
    piVar1 = arg1 + 0xf8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    puVar2 = arg1 + 0x110;
    uVar6 = *puVar2;
    do {
        if (*(arg1 + 0xf8) <= uVar6) {
            return uVar5;
        }
        Hint_Prefetch(puVar2,2,0,1);
        do {
            uVar7 = *puVar2;
            if (uVar7 != uVar6) goto code_r0x08006814;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
                *puVar2 = *(arg1 + 0xf8);
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08006814:
        bVar4 = uVar7 == uVar6;
        uVar6 = uVar7;
        if (bVar4) {
            return uVar5;
        }
    } while( true );
}


// ===== sym.wait_for_writeback_batch @ 0x080068b4 (size 1532) =====

int sym.wait_for_writeback_batch(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    ushort uVar6;
    code *pcVar7;
    uint64_t *in_tmp_ldXn;
    int iVar8;
    uint64_t uVar9;
    uint64_t *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong *in_x18;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *puVar15;
    int64_t *unaff_x22;
    uint64_t unaff_x24;
    int64_t *unaff_x25;
    int64_t unaff_x26;
    int64_t unaff_x27;
    uint32_t *puVar16;
    ulong unaff_x30;
    ulong uStack_310;
    int64_t iStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    uint64_t uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    uchar auStack_270 [512];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    uVar14 = arg3 & 0xffffffff;
    uVar13 = arg2 & 0xffffffff;
    iStack_70 = *(iVar11 + 0x5e0);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_310 = 0;
    iStack_308 = 0;
    memset(auStack_270,0,0x200);
    bio_init(&uStack_310,auStack_270,uVar14);
    uVar6 = uStack_300._4_2_;
    uStack_300 = uStack_300 & 0xffffefffffffffff;
    if (iStack_308 != *(arg1 + 0x1c0)) {
        uStack_300 = CONCAT26(uStack_300._6_2_,CONCAT24(uVar6,uStack_300)) & 0xffffef7fffffffff;
    }
    iStack_308 = *(arg1 + 0x1c0);
    bio_associate_blkg(&uStack_310);
    uStack_2f0 = -(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
    uStack_300 = CONCAT44(uStack_300._4_4_,0x801);
    puVar15 = arg4;
    uVar9 = uVar14;
    if (arg3 < 1) {
        submit_bio_wait(&uStack_310);
        uVar14 = unaff_x24;
        goto code_r0x08006afc;
    }
    do {
        bio_add_page(&uStack_310,*puVar15,0x1000,0);
        uVar9 = uVar9 - 1;
        puVar15 = puVar15 + 2;
    } while (uVar9 != 0);
    iVar8 = submit_bio_wait(&uStack_310);
    if (iVar8 != 0) {
        unaff_x22 = arg1 + 0xf8;
        arg4 = arg4 + 8;
        unaff_x25 = 0x2000;
        unaff_x26 = 1;
        unaff_x27 = sp_el0;
        goto code_r0x080069d8;
    }
    iVar8 = 0;
    unaff_x25 = arg1 + 0x108;
    piVar1 = arg1 + 0xf8;
    piVar2 = arg1 + 200;
    unaff_x22 = arg1 + 0x1b0;
    puVar16 = arg4 + 8;
    unaff_x26 = 0x18;
    unaff_x27 = sp_el0;
    uVar9 = uVar14;
    do {
        uVar3 = *puVar16;
        arg4 = uVar3;
        Hint_Prefetch(unaff_x25,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(unaff_x25,0x10);
            if (bVar5) {
                *unaff_x25 = *unaff_x25 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        sym.zram_slot_lock(arg1,arg4);
        puVar10 = *arg1 + arg4 * 0x18 + 8;
        uVar14 = *puVar10;
        if ((uVar14 & 0xdfff) == 0 || (uVar14 & 0x80000) == 0) {
            *puVar10 = uVar14 & 0xfffffffffffeffff;
            iVar11 = arg4 * 0x18;
            *(*arg1 + iVar11 + 8) = *(*arg1 + iVar11 + 8) & 0xfffffffffff7ffff;
            *(*arg1 + iVar11 + 8) = *(*arg1 + iVar11 + 8) & 0x7fffff;
            puVar10 = *arg1 + iVar11 + 8;
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar5) {
                    *puVar10 = *puVar10 & 0xffffffffffffdfff;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar11 = *(unaff_x27 + 0x10) + -1;
            *(unaff_x27 + 0x10) = iVar11;
            if ((iVar11 == 0) || (*(unaff_x27 + 0x10) == 0)) {
                preempt_schedule();
            }
            uVar14 = 1L << (uVar13 & 0x3f);
            puVar10 = *(arg1 + 0x1c8) + (uVar13 >> 3 & 0x1ffffff8);
            Hint_Prefetch(puVar10,2,0,1);
            do {
                uVar12 = *puVar10;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar5) {
                    *puVar10 = uVar12 & (uVar14 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar12 & uVar14) == 0) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x8006d7c);
                (*pcVar7)();
            }
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else {
            sym.zram_free_page(arg1,uVar3);
            iVar11 = arg4 * 0x18;
            *(*arg1 + iVar11 + 8) = *(*arg1 + iVar11 + 8) & 0xfffffffffffeffff;
            *(*arg1 + iVar11 + 8) = *(*arg1 + iVar11 + 8) | 0x8000;
            *(*arg1 + iVar11) = uVar13;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                    *piVar2 = *piVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            _raw_spin_lock(unaff_x22);
            if ((*(arg1 + 0x1b4) != '\0') && (*(arg1 + 0x1b8) != 0)) {
                *(arg1 + 0x1b8) = *(arg1 + 0x1b8) + -1;
            }
            _raw_spin_unlock(unaff_x22);
            puVar10 = *arg1 + arg4 * 0x18 + 8;
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar5) {
                    *puVar10 = *puVar10 & 0xffffffffffffdfff;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar8 = iVar8 + 1;
            iVar11 = *(unaff_x27 + 0x10) + -1;
            *(unaff_x27 + 0x10) = iVar11;
            if ((iVar11 == 0) || (*(unaff_x27 + 0x10) == 0)) {
                preempt_schedule();
            }
        }
        uVar9 = uVar9 - 1;
        uVar13 = uVar13 + 1;
        puVar16 = puVar16 + 4;
        uVar14 = 0;
    } while (uVar9 != 0);
    do {
        iVar11 = sp_el0;
        if (*(iVar11 + 0x5e0) == iStack_70) {
            return iVar8;
        }
        __stack_chk_fail();
        puVar10 = in_tmp_ldXn;
        while( true ) {
            Hint_Prefetch(puVar10,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar5) {
                    *puVar10 = *puVar10 & (unaff_x25 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar11 = *(unaff_x27 + 0x10) + -1;
            *(unaff_x27 + 0x10) = iVar11;
            if ((iVar11 == 0) || (*(unaff_x27 + 0x10) == 0)) {
                preempt_schedule();
            }
            uVar9 = unaff_x26 << (uVar13 & 0x3f);
            puVar10 = *(arg1 + 0x1c8) + (uVar13 >> 3 & 0x1ffffff8);
            Hint_Prefetch(puVar10,2,0,1);
            do {
                uVar12 = *puVar10;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar5) {
                    *puVar10 = uVar12 & (uVar9 ^ 0xffffffffffffffff);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if ((uVar12 & uVar9) == 0) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x8006ae4);
                (*pcVar7)();
            }
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar5) {
                    *unaff_x22 = *unaff_x22 - unaff_x26;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            uVar14 = uVar14 - 1;
            uVar13 = uVar13 + 1;
            arg4 = arg4 + 0x10;
            if (uVar14 == 0) break;
code_r0x080069d8:
            uVar3 = *arg4;
            sym.zram_slot_lock(arg1,uVar3);
            iVar11 = uVar3 * 0x18;
            *(*arg1 + iVar11 + 8) = *(*arg1 + iVar11 + 8) & 0xfffffffffffeffff;
            *(*arg1 + iVar11 + 8) = *(*arg1 + iVar11 + 8) & 0xfffffffffff7ffff;
            *(*arg1 + iVar11 + 8) = *(*arg1 + iVar11 + 8) & 0x7fffff;
            puVar10 = *arg1 + iVar11 + 8;
        }
code_r0x08006afc:
        iVar8 = 0;
    } while( true );
}


// ===== sym.writeback_limit_show @ 0x08006eb0 (size 132) =====

int64_t sym.writeback_limit_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    _raw_spin_lock(iVar2 + 0x1b0);
    uVar3 = *(iVar2 + 0x1b8);
    _raw_spin_unlock(iVar2 + 0x1b0);
    up_read(iVar2 + 0x20);
    iVar1 = scnprintf(arg2,0x1000,"%llu\n",uVar3);
    return iVar1;
}


// ===== sym.writeback_limit_store @ 0x08006f34 (size 192) =====

int64_t sym.writeback_limit_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x3b0) + 0x58);
    iVar2 = kstrtoull(arg2,10,&uStack_40);
    if (iVar2 == 0) {
        down_read(iVar4 + 0x20);
        _raw_spin_lock(iVar4 + 0x1b0);
        *(iVar4 + 0x1b8) = uStack_40;
        _raw_spin_unlock(iVar4 + 0x1b0);
        up_read(iVar4 + 0x20);
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.writeback_limit_enable_show;
    iVar4 = *(*(iVar4 + 0x3b0) + 0x58);
    down_read(iVar4 + 0x20);
    _raw_spin_lock(iVar4 + 0x1b0);
    uVar1 = *(iVar4 + 0x1b4);
    _raw_spin_unlock(iVar4 + 0x1b0);
    up_read(iVar4 + 0x20);
    iVar2 = scnprintf(puVar3,0x1000,0x80019d1,uVar1);
    return iVar2;
}


// ===== sym.writeback_limit_enable_show @ 0x08006ff4 (size 132) =====

int64_t sym.writeback_limit_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    down_read(iVar3 + 0x20);
    _raw_spin_lock(iVar3 + 0x1b0);
    uVar1 = *(iVar3 + 0x1b4);
    _raw_spin_unlock(iVar3 + 0x1b0);
    up_read(iVar3 + 0x20);
    iVar2 = scnprintf(arg2,0x1000,0x80019d1,uVar1);
    return iVar2;
}


// ===== sym.writeback_limit_enable_store @ 0x08007078 (size 200) =====

int64_t sym.writeback_limit_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x21;
    int64_t iVar3;
    ulong unaff_x30;
    uchar *puVar4;
    code *pcVar5;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    puVar4 = &stack0xffffffffffffffd0;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    iVar1 = kstrtoull(arg2,10,&iStack_40);
    if (iVar1 == 0) {
        down_read(iVar3 + 0x20);
        unaff_x21 = iVar3 + 0x1b0;
        _raw_spin_lock(unaff_x21);
        *(iVar3 + 0x1b4) = iStack_40 != 0;
        _raw_spin_unlock(unaff_x21);
        up_read(iVar3 + 0x20);
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.io_stat_show;
    pcVar5 = sym.io_stat_show;
    iVar3 = *(*(iVar3 + 0x3b0) + 0x58);
    down_read(iVar3 + 0x20);
    iVar1 = scnprintf(piVar2,0x1000,"%8llu %8llu %8llu %8llu\n",*(iVar3 + 0x80),*(iVar3 + 0x88),*(iVar3 + 0x90),
                      *(iVar3 + 0x98),in_x7,puVar4,pcVar5,unaff_x21);
    up_read(iVar3 + 0x20);
    return iVar1;
}


// ===== sym.io_stat_show @ 0x08007140 (size 140) =====

int64_t sym.io_stat_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    iVar1 = scnprintf(arg2,0x1000,"%8llu %8llu %8llu %8llu\n",*(iVar2 + 0x80),*(iVar2 + 0x88),*(iVar2 + 0x90),
                      *(iVar2 + 0x98));
    up_read(iVar2 + 0x20);
    return iVar1;
}


// ===== sym.mm_stat_show @ 0x080071dc (size 356) =====

int64_t sym.mm_stat_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    char *arg2_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    down_read(iVar3 + 0x20);
    if (*(iVar3 + 0x118) == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = zs_get_total_pages(*(iVar3 + 8));
        zs_pool_stats(*(iVar3 + 8),&stack0xffffffffffffffc0);
        iVar2 = iVar2 << 0xc;
    }
    arg2_00 = "%8llu %8llu %8llu %8lu %8ld %8llu %8lu %8llu %8llu %8llu %8llu %8llu\n";
    iVar1 = scnprintf(arg2,0x1000,"%8llu %8llu %8llu %8lu %8ld %8llu %8lu %8llu %8llu %8llu %8llu %8llu\n",
                      *(iVar3 + 200) << 0xc,*(iVar3 + 0x68),iVar2,*(iVar3 + 0x60) << 0xc,*(iVar3 + 0xe0) << 0xc,
                      *(iVar3 + 0xa0),uStack_40,*(iVar3 + 0xa8),*(iVar3 + 0xb0),*(iVar3 + 0xd0),*(iVar3 + 0xb8),
                      *(iVar3 + 0xc0) >> 0xc);
    up_read(iVar3 + 0x20);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar1;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x8007318;
    iVar3 = sym.get_idle_or_new_pages(*(*(iVar3 + 0x3b0) + 0x58),arg2_00,1);
    return iVar3;
}


// ===== sym.idle_stat_show @ 0x08007340 (size 52) =====

void sym.idle_stat_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.get_idle_or_new_pages(*(*(arg1 + 0x3b0) + 0x58),arg2,1);
    return;
}


// ===== sym.get_idle_or_new_pages @ 0x08007374 (size 560) =====

int64_t * sym.get_idle_or_new_pages(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    uint64_t *in_tmp_ldXn;
    int iVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t extraout_x12;
    ulong *in_x18;
    uint64_t uVar10;
    uchar *unaff_x23;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t *unaff_x26;
    int64_t unaff_x27;
    uchar *unaff_x28;
    int64_t *piVar13;
    ulong unaff_x30;
    int64_t aiStack_c0 [12];
    
    piVar13 = aiStack_c0;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar1 = arg1 + 0x20;
    aiStack_c0[0xb] = *(iVar9 + 0x5e0);
    uVar10 = arg3;
    uVar12 = *(arg1 + 0x118);
    aiStack_c0[9] = 0;
    aiStack_c0[10] = 0;
    uVar6 = 10;
    if ((arg3 & 1) == 0) {
        uVar6 = 0;
    }
    uVar11 = uVar6;
    aiStack_c0[7] = 0;
    aiStack_c0[8] = 0;
    aiStack_c0[5] = 0;
    aiStack_c0[6] = 0;
    aiStack_c0[3] = 0;
    aiStack_c0[4] = 0;
    aiStack_c0[1] = 0;
    aiStack_c0[2] = 0;
    aiStack_c0[0] = 0;
    down_read(iVar1);
    if (*(arg1 + 0x118) == 0) {
        arg1 = -0x16;
        piVar13 = unaff_x28;
        goto code_r0x08007460;
    }
    if (0xfff < uVar12) {
        unaff_x26 = uVar12 >> 0xc;
        unaff_x23 = NULL;
        uVar12 = 0x18;
        if (unaff_x26 < 0x2) {
            unaff_x26 = 0x1;
        }
        unaff_x27 = sp_el0;
        goto code_r0x080074c4;
    }
    do {
        uVar10 = uVar10 & 1;
        arg1 = 0;
        iVar9 = 0;
        if (uVar10 <= uVar11) {
            iVar9 = uVar11 - uVar10;
        }
        unaff_x23 = uVar10 << 3;
        iVar9 = iVar9 + 1;
        uVar12 = 0x1000;
        uVar10 = 0;
        do {
            if (unaff_x23 == 0x58) goto code_r0x0800757c;
            iVar5 = scnprintf(arg2 + arg1,0x1000 - arg1,"%lu ",*(aiStack_c0 + unaff_x23));
            iVar9 = iVar9 + -1;
            arg1 = arg1 + iVar5;
            unaff_x23 = unaff_x23 + 8;
        } while (iVar9 != 0);
        *(arg1 + arg2 + -1) = 10;
        uVar11 = 0;
        unaff_x26 = aiStack_c0;
        piVar13 = unaff_x28;
code_r0x08007460:
        up_read(iVar1);
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == aiStack_c0[0xb]) {
            return arg1;
        }
        __stack_chk_fail();
        puVar7 = in_tmp_ldXn;
        uVar8 = extraout_x12;
        while( true ) {
            Hint_Prefetch(puVar7,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar7,0x10);
                if (bVar3) {
                    *puVar7 = *puVar7 & (uVar8 ^ 0xffffffffffffffff);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            iVar9 = *(unaff_x27 + 0x10) + -1;
            *(unaff_x27 + 0x10) = iVar9;
            if ((iVar9 == 0) || (*(unaff_x27 + 0x10) == 0)) {
                preempt_schedule();
            }
            unaff_x23 = unaff_x23 + 1;
            unaff_x28 = piVar13;
            if (unaff_x26 == unaff_x23) break;
code_r0x080074c4:
            sym.zram_slot_lock(arg1,unaff_x23 & 0xffffffff);
            puVar7 = *arg1 + (unaff_x23 & 0xffffffff) * uVar12 + 8;
            uVar8 = *puVar7;
            if (((((uVar8 & 0x1fff) != 0 && (uVar8 & 0x40000) != 0) && (uVar8 & 0x8000) == 0) && (uVar8 & 0x10000) == 0)
                && uVar8 >> 0x17 <= uVar11) {
                uVar8 = uVar8 >> 0x17 & 0xffffffff;
                if (10 < uVar8) {
code_r0x0800757c:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(1,0x8007580);
                    (*pcVar4)();
                }
                iVar9 = uVar8 * 8;
                *(piVar13 + iVar9) = *(piVar13 + iVar9) + 1;
            }
            uVar8 = 0x2000;
        }
    } while( true );
}


// ===== sym.new_stat_show @ 0x080075a4 (size 52) =====

void sym.new_stat_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.get_idle_or_new_pages(*(*(arg1 + 0x3b0) + 0x58),arg2,0);
    return;
}


// ===== sym.bd_stat_show @ 0x080075d8 (size 132) =====

int64_t sym.bd_stat_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    iVar1 = scnprintf(arg2,0x1000,"%8llu %8llu %8llu\n",*(iVar2 + 0xf8),*(iVar2 + 0x100),*(iVar2 + 0x108));
    up_read(iVar2 + 0x20);
    return iVar1;
}


// ===== sym.memory_freeze_show @ 0x08007668 (size 64) =====

int64_t sym.memory_freeze_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8001897,*0x8001000);
    return iVar1;
}


// ===== sym.memory_freeze_store @ 0x080076a8 (size 204) =====

int64_t sym.memory_freeze_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    piVar2 = &iStack_3c;
    iStack_3c = 0;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    iVar1 = kstrtouint(arg2,10,piVar2);
    if (iVar1 == 0) {
        iVar4 = iVar3 + 0x20;
        down_read(iVar4);
        iVar3 = iVar3 + 0x1b0;
        _raw_spin_lock(iVar3);
        *0x8001000 = iStack_3c != 0;
        _raw_spin_unlock(iVar3);
        up_read(iVar4);
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.wb_pages_max_show;
    iVar4 = *(*(iVar3 + 0x3b0) + 0x58);
    iVar3 = iVar4 + 0x20;
    down_read(iVar3);
    iVar1 = scnprintf(piVar2,0x1000,"%8lld\n",*(iVar4 + 0x110));
    up_read(iVar3);
    return iVar1;
}


// ===== sym.wb_pages_max_show @ 0x08007774 (size 116) =====

int64_t sym.wb_pages_max_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    iVar2 = scnprintf(arg2,0x1000,"%8lld\n",*(iVar3 + 0x110));
    up_read(iVar1);
    return iVar2;
}


// ===== sym.debug_stat_show @ 0x080077ec (size 128) =====

int64_t sym.debug_stat_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    iVar1 = scnprintf(arg2,0x1000,"version: %d\n%8llu %8llu\n",1,*(iVar2 + 0xe8),*(iVar2 + 0xf0));
    up_read(iVar2 + 0x20);
    return iVar1;
}


// ===== sym.time_list_show @ 0x08007874 (size 248) =====

int64_t sym.time_list_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x3b0) + 0x58);
    down_read(iVar2 + 0x20);
    if ((*(iVar2 + 0x118) == 0) || (puVar4 = *(iVar2 + 0x1e0), puVar4 == NULL)) {
        iVar3 = -0x16;
    }
    else if (*puVar4 == 0) {
        iVar3 = 0;
    }
    else {
        uVar5 = 0;
        iVar3 = 0;
        do {
            iVar1 = scnprintf(arg2 + iVar3,0x1000 - iVar3,0x800178b,*(*(puVar4 + 2) + uVar5 * 4));
            iVar3 = iVar3 + iVar1;
            uVar5 = uVar5 + 1;
        } while (uVar5 < *puVar4);
        iVar1 = scnprintf(arg2 + iVar3,0x1000 - iVar3,">%d\n",*(*(puVar4 + 2) + uVar5 * 4 + -4));
        iVar3 = iVar3 + iVar1;
    }
    up_read(iVar2 + 0x20);
    return iVar3;
}


// ===== sym.time_list_store @ 0x08007970 (size 588) =====

int64_t sym.time_list_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uint32_t uStack_7c;
    ulong uStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_6c = 0;
    uStack_7c = 0;
    iVar9 = *(*(arg1 + 0x3b0) + 0x58);
    uVar3 = kstrndup(arg2,0x20,0xcc0);
    uStack_78 = uVar3;
    iVar4 = strsep(&uStack_78,0x8001772);
    if ((iVar4 == 0) || (iVar2 = kstrtouint(iVar4,10,&uStack_7c), iVar2 != 0)) {
        arg3 = -0x16;
        goto code_r0x080079f8;
    }
    if (uStack_7c == 0) goto code_r0x080079f8;
    iVar4 = __kmalloc(uStack_7c << 2,0xcc0);
    if (iVar4 == 0) {
        arg3 = -0xc;
        goto code_r0x080079f8;
    }
    if (uStack_7c != 0) {
        uVar8 = 0;
        do {
            iVar5 = strsep(&uStack_78,0x8001772);
            if ((iVar5 == 0) || (iVar2 = kstrtoint(iVar5,10,&uStack_6c), iVar2 != 0)) {
                arg3 = -0x16;
                goto code_r0x08007bac;
            }
            *(iVar4 + uVar8 * 4) = uStack_6c;
            uVar8 = uVar8 + 1;
        } while (uVar8 < uStack_7c);
    }
    down_read(iVar9 + 0x20);
    uVar10 = uStack_7c;
    if (*(iVar9 + 0x118) == 0) {
        arg3 = -0x16;
    }
    else {
        uVar8 = uStack_7c;
        if (uStack_7c == 0) {
code_r0x08007b9c:
            uVar10 = 0xfffffff4;
        }
        else {
            iVar11 = *(iVar9 + 0x1e0);
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xcc0,0x28);
            if (puVar6 == NULL) goto code_r0x08007b9c;
            *puVar6 = uVar10;
            iVar5 = __kmalloc(uVar8 << 2,0xcc0);
            *(puVar6 + 2) = iVar5;
            iVar7 = __kmalloc(uVar10 + 1 << 3,0xdc0);
            *(puVar6 + 4) = iVar7;
            if ((iVar5 == 0) || (iVar7 == 0)) {
                *puVar6 = 0;
                if (iVar5 != 0) {
                    kfree(iVar5);
                    puVar6[2] = 0;
                    puVar6[3] = 0;
                }
                kfree(puVar6);
                goto code_r0x08007b9c;
            }
            memcpy(iVar5,iVar4,uVar8 << 2);
            *(iVar9 + 0x1e0) = puVar6;
            if (iVar11 != 0) {
                call_rcu(iVar11 + 0x18,sym.clean_pages_life.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
            }
        }
        arg3 = uVar10;
    }
    up_read(iVar9 + 0x20);
code_r0x08007bac:
    kfree(iVar4);
code_r0x080079f8:
    kfree(uVar3);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.clean_pages_life;
    piVar1 = iVar4 + -0x18;
    if ((piVar1 != NULL) && (*piVar1 != 0)) {
        *piVar1 = 0;
        if (*(iVar4 + -0x10) != 0) {
            kfree();
            *(iVar4 + -0x10) = 0;
        }
        iVar4 = kfree(piVar1);
    }
    return iVar4;
}


// ===== sym.clean_pages_life @ 0x08007bbc (size 84) =====

void sym.clean_pages_life(int64_t arg1)

{
    int *piVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + -0x18;
    if ((piVar1 != NULL) && (*piVar1 != 0)) {
        *piVar1 = 0;
        if (*(arg1 + -0x10) != 0) {
            kfree();
            *(arg1 + -0x10) = 0;
        }
        kfree(piVar1);
    }
    return;
}


// ===== sym.pages_life_show @ 0x08007c10 (size 308) =====

int64_t sym.pages_life_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x3b0) + 0x58);
    __rcu_read_lock();
    puVar3 = *(iVar2 + 0x1e0);
    if (puVar3 == NULL) {
        iVar2 = -0x16;
    }
    else if (*puVar3 == 0) {
        iVar2 = 0;
    }
    else {
        uVar4 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,0x800178b,*(*(puVar3 + 2) + uVar4 * 4));
            iVar2 = iVar2 + iVar1;
            uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar3);
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,">%d\n",*(*(puVar3 + 2) + uVar4 * 4 + -4));
        iVar2 = iVar2 + iVar1;
        if (*puVar3 != 0xffffffff) {
            uVar4 = 0;
            do {
                iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"%lu\t",*(*(puVar3 + 4) + uVar4 * 8));
                iVar2 = iVar2 + iVar1;
                uVar4 = uVar4 + 1;
            } while (uVar4 < *puVar3 + 1);
        }
        *(iVar2 + arg2 + -1) = 10;
    }
    __rcu_read_unlock();
    return iVar2;
}


// ===== sym.avg_size_show @ 0x08007d48 (size 72) =====

int64_t sym.avg_size_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%8llu\n",*(*(*(arg1 + 0x3b0) + 0x58) + 0x1f8));
    return iVar1;
}


// ===== sym.origin_pages_max_show @ 0x08007d94 (size 116) =====

int64_t sym.origin_pages_max_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    iVar1 = iVar3 + 0x20;
    down_read(iVar1);
    iVar2 = scnprintf(arg2,0x1000,"%8lld\n",*(iVar3 + 0xd8));
    up_read(iVar1);
    return iVar2;
}


// ===== sym.low_compress_ratio_show @ 0x08007e0c (size 64) =====

int64_t sym.low_compress_ratio_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8001897,*0x8001000);
    return iVar1;
}


// ===== sym.low_compress_ratio_store @ 0x08007e4c (size 196) =====

int64_t sym.low_compress_ratio_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    iVar3 = *(*(arg1 + 0x3b0) + 0x58);
    iVar2 = kstrtouint(arg2,10,&uStack_3c);
    if (iVar2 == 0) {
        iVar1 = iVar3 + 0x20;
        down_read(iVar1);
        iVar3 = iVar3 + 0x1b0;
        _raw_spin_lock(iVar3);
        *0x8001000 = uStack_3c;
        _raw_spin_unlock(iVar3);
        up_read(iVar1);
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    return *(iVar3 + 4000);
}


// ===== sym.mem_cgroup_anno_writeback_enable_read @ 0x08007f10 (size 16) =====

ulong sym.mem_cgroup_anno_writeback_enable_read(int64_t arg1)

{
    return *(arg1 + 4000);
}


// ===== sym.mem_cgroup_anno_writeback_enable_write @ 0x08007f20 (size 36) =====

ulong sym.mem_cgroup_anno_writeback_enable_write(int64_t arg1)

{
    int64_t in_x2;
    
    if ((in_x2 != 0) && (*(arg1 + 0xe0) != 0)) {
        *(arg1 + 4000) = 2;
    }
    return 0;
}


// ===== sym.mem_cgroup_anno_writeback_protected_read @ 0x08007f44 (size 16) =====

ulong sym.mem_cgroup_anno_writeback_protected_read(int64_t arg1)

{
    return *(arg1 + 0xfa8);
}


// ===== sym.mem_cgroup_anno_writeback_protected_write @ 0x08007f54 (size 36) =====

ulong sym.mem_cgroup_anno_writeback_protected_write(int64_t arg1)

{
    int64_t in_x2;
    
    if ((in_x2 != 0) && (*(arg1 + 0xe0) != 0)) {
        *(arg1 + 0xfa8) = 1;
    }
    return 0;
}


// ===== sym.zram_remove_cb @ 0x08007f78 (size 44) =====

ulong sym.zram_remove_cb(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.zram_remove(arg1);
    return 0;
}


// ===== sym.init_module @ 0x08007fb4 (size 368) =====

uint64_t sym.init_module(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = __cpuhp_setup_state(0x42,"block/zram:prepare",0,sym.zcomp_cpu_up_prepare.cfi_jt,
                                sym.zcomp_cpu_dead.cfi_jt,1);
    if (uVar2 < 0) {
        uVar4 = uVar2;
    }
    else {
        uVar4 = __class_register(obj.zram_control_class,obj.zram_init.__key);
        if (uVar4 == 0) {
            _segment.ehdr = __register_blkdev(uVar4,"zram",0);
            if (_segment.ehdr < 1) {
                _printk(0x8001707);
                class_unregister(obj.zram_control_class);
                __cpuhp_remove_state(0x42,0);
                uVar4 = 0xfffffff0;
            }
            else {
                for (; _segment.ehdr != 0; _segment.ehdr = _segment.ehdr + -1) {
                    mutex_lock(obj.zram_index_mutex);
                    uVar2 = sym.zram_add();
                    mutex_unlock(obj.zram_index_mutex);
                    if (uVar2 < 0) {
                        sym.destroy_devices();
                        return uVar2;
                    }
                }
                iVar3 = cgroup_add_legacy_cftypes(memory_cgrp_subsys,"anno_writeback_enable");
                if (iVar3 != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8008124);
                    (*pcVar1)();
                }
                iVar3 = cgroup_add_legacy_cftypes(memory_cgrp_subsys,"anno_writeback_protected");
                uVar4 = 0;
                if (iVar3 != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x80080a8);
                    (*pcVar1)();
                }
            }
        }
        else {
            uVar4 = uVar4 & 0xffffffff;
            _printk(0x80016d8);
            __cpuhp_remove_state(0x42,0);
        }
    }
    return uVar4;
}


// ===== sym.cleanup_module @ 0x08008128 (size 36) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.destroy_devices();
    return;
}

