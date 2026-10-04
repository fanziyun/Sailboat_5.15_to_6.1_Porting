// decompiled from mem-offline by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x08005928

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0xec78b8726b9c1e8) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x622cb4766ca1ec8d) {
                pcVar2 = sym.movable_page_alloc.912f178c447211a3884891262d14862c.cfi_jt;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) goto code_r0x080058e8;
                pcVar2 = sym.fill_movable_zone_fn.912f178c447211a3884891262d14862c.cfi_jt;
            }
        }
        else if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt;
        }
        else {
            if (arg1 != -0x173ad2a90344d82f) goto code_r0x080058e8;
            pcVar2 = sym.movable_page_free.912f178c447211a3884891262d14862c.cfi_jt;
        }
    }
    else if (arg1 < 0x1b6c344e75cfc4ea) {
        if (arg1 == -0xec78b8726b9c1e8) {
            if ((pcVar1 + -0x80021e0 >> 3 | pcVar1 << 0x3d) < 9) {
                return;
            }
            goto code_r0x080058e8;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x080058e8;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x1b6c344e75cfc4ea) {
        pcVar2 = sym.store_anon_migrate.912f178c447211a3884891262d14862c.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.mem_event_callback.912f178c447211a3884891262d14862c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080058e8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080058e8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800593c);
    (*pcVar1)();
}


// ===== sym.movable_page_free.912f178c447211a3884891262d14862c.cfi_jt @ 0x080021c0 (size 8) =====

void sym.movable_page_free.912f178c447211a3884891262d14862c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *param_2;
    iVar1 = param_1 + 8;
    uVar2 = __list_add_valid(iVar1,param_2,iVar3);
    if ((uVar2 & 1) != 0) {
        *(iVar3 + 8) = iVar1;
        *(param_1 + 8) = iVar3;
        *(param_1 + 0x10) = param_2;
        *param_2 = iVar1;
    }
    param_2[5] = param_2[5] + 1;
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021c8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080021d0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.mem_event_callback.912f178c447211a3884891262d14862c.cfi_jt @ 0x080021d8 (size 8) =====

ulong sym.mem_event_callback.912f178c447211a3884891262d14862c.cfi_jt(ulong param_1,int64_t param_2,uint64_t *param_3)

{
    uint64_t uVar1;
    char *pcVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *param_3;
    if (((uVar8 & 0x7fff) != 0) || (uVar1 = param_3[1] + uVar8, (uVar1 + 0x7fff & 0xffffffffffff8000) != uVar1)) {
        __warn_printk("mem_event_callback");
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80039e4);
        (*pcVar5)();
    }
    uVar9 = uVar8 >> 0xf;
    if ((_segment.ehdr < uVar9) || (uVar9 < _segment.ehdr)) {
        if ((param_2 == 4) || (param_2 == 1)) {
            pcVar2 = "Onlined";
            if (param_2 != 1) {
                pcVar2 = "Offlined";
            }
            _printk(0x80010fb,pcVar2,uVar9);
        }
    }
    else if (param_2 - 1U < 0x10) {
        iVar10 = uVar8 << 0xc;
        switch(param_2) {
        case 1:
            iVar7 = ktime_get();
            iVar7 = iVar7 - _segment.ehdr;
            sym.record_stat(uVar9,(iVar7 / 1000 + (iVar7 >> 0x3f)) -
                                   (SUB164(SEXT816(iVar7) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),0);
            _segment.ehdr = 0;
            sym.set_memblk_bitmap_online(iVar10);
            _printk(0x800103e,uVar9);
            sym.get_segment_addr_to_idx(iVar10);
            uVar8 = memory_block_size_bytes();
            Hint_Prefetch(0x8011084,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(0x8011084,0x10);
                if (bVar4) {
                    cVar3 = ExclusiveMonitorsStatus();
                    __totalram_pages = __totalram_pages - (uVar8 >> 0xc);
                }
            } while (cVar3 != '\0');
            break;
        case 2:
            uVar8 = 0;
            if ((_segment.ehdr & 0xffffffff) != 0) {
                uVar8 = ((uVar9 - _segment.ehdr) + 1) / (_segment.ehdr & 0xffffffff);
            }
            iVar10 = _segment.ehdr + uVar8 * 0x48;
            obj.has_pend_offline_req = 0x1;
            *(iVar10 + 8) = *(iVar10 + 8) + 1;
            cancel_work_sync(obj.fill_movable_zone_work);
            _segment.ehdr = ktime_get();
            break;
        case 4:
            sym.mem_change_refresh_state(param_3,1);
            iVar7 = ktime_get();
            iVar7 = iVar7 - _segment.ehdr;
            sym.record_stat(uVar9,(iVar7 / 1000 + (iVar7 >> 0x3f)) -
                                   (SUB164(SEXT816(iVar7) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),1);
            _segment.ehdr = 0;
            obj.has_pend_offline_req = 0x0;
            sym.set_memblk_bitmap_offline(iVar10);
            _printk(0x8000a27,uVar9);
            sym.get_segment_addr_to_idx(iVar10);
            uVar8 = memory_block_size_bytes();
            Hint_Prefetch(0x8011084,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(0x8011084,0x10);
                if (bVar4) {
                    cVar3 = ExclusiveMonitorsStatus();
                    __totalram_pages = __totalram_pages + (uVar8 >> 0xc);
                }
            } while (cVar3 != '\0');
            break;
        case 8:
            uVar8 = 0;
            if ((_segment.ehdr & 0xffffffff) != 0) {
                uVar8 = (uVar9 - _segment.ehdr) / (_segment.ehdr & 0xffffffff);
            }
            iVar10 = _segment.ehdr + uVar8 * 0x48;
            *(iVar10 + 8) = *(iVar10 + 8) + 1;
            _segment.ehdr = ktime_get();
            iVar6 = sym.mem_change_refresh_state(param_3,0);
            if (iVar6 != 0) {
                return 0x8002;
            }
            break;
        case 0x10:
            _printk(0x8000f5e,iVar10,uVar1 * 0x1000);
            sym.mem_change_refresh_state(param_3,1);
        }
    }
    return 1;
}


// ===== sym.show_block_allocated_bytes.912f178c447211a3884891262d14862c.cfi_jt @ 0x080021e0 (size 8) =====

int64_t sym.show_block_allocated_bytes.912f178c447211a3884891262d14862c.cfi_jt
                  (ulong *param_1,ulong param_2,ulong param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    int64_t iStack_50;
    int64_t iStack_48;
    
    pcVar6 = &iStack_50;
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    iStack_50 = 0;
    iVar3 = sscanf(*param_1,"memory%lu",&iStack_50);
    iVar12 = iStack_50;
    if (iVar3 == 1) {
        uVar4 = memory_block_size_bytes();
        uVar5 = tpidr_el1;
        if ((_of_find_node_by_name == 0) || (_of_find_node_by_name == 0)) {
            iVar7 = 0;
        }
        else {
            iVar7 = 0;
            uVar11 = iVar12 * 0x8000;
            if ((uVar11 < _of_find_node_by_name * 2) &&
               (uVar1 = uVar11 + (uVar4 >> 0xc), _of_find_node_by_name < uVar1)) {
                uVar5 = _raw_spin_lock_irqsave(contig_page_data);
                iVar12 = 0;
                if (uVar11 < uVar1) {
                    iVar12 = 0;
code_r0x08003488:
                    puVar8 = (_of_n_size_cells >> 0xc) * -0x40 + -0x1ffffffd0 + uVar11 * 0x40;
                    do {
                        if ((((uVar11 >> 0x34 == 0) && (uVar11 >> 0x24 == 0)) && (___bitmap_set != 0)) &&
                           (iVar7 = *(___bitmap_set + (uVar11 >> 0x13 & 0x1ffffffffff8)), iVar7 != 0)) {
                            uVar9 = uVar11 >> 0xf & 0x7f;
                            puVar2 = iVar7 + uVar9 * 0x20;
                            if ((((puVar2 != NULL) && (uVar10 = *puVar2, (uVar10 >> 1 & 1) != 0)) &&
                                (((uVar10 >> 3 & 1) != 0 ||
                                 ((**(iVar7 + uVar9 * 0x20 + 8) >> (uVar11 >> 9 & 0x3f) & 1) != 0)))) &&
                               ((*puVar8 & 0xf0000080) == 0xf0000000)) goto code_r0x08003508;
                        }
                        uVar11 = uVar11 + 1;
                        puVar8 = puVar8 + 0x10;
                        if (uVar1 <= uVar11) break;
                    } while( true );
                }
code_r0x08003524:
                _raw_spin_unlock_irqrestore(contig_page_data,uVar5);
                iVar7 = uVar4 + iVar12 * -0x1000;
            }
        }
        pcVar6 = "%lu\n";
        iVar3 = scnprintf(param_3,100,"%lu\n",iVar7);
        iVar12 = iVar3;
    }
    else {
        _printk(0x8000880,iVar3);
        iVar12 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        __stack_chk_fail(iVar12);
        uVar5 = tpidr_el2;
        *extraout_x18 = 0x80035a4;
        iVar3 = scnprintf(pcVar6,0x1000,"%lu\n",obj.differing_segment_sizes);
        return iVar3;
    }
    return iVar12;
code_r0x08003508:
    iVar7 = 1 << (puVar8[-2] & 0x1f);
    iVar12 = iVar12 + iVar7;
    uVar11 = iVar7 + uVar11;
    if (uVar1 <= uVar11) goto code_r0x08003524;
    goto code_r0x08003488;
}


// ===== sym.show_num_segments.912f178c447211a3884891262d14862c.cfi_jt @ 0x080021e8 (size 8) =====

int64_t sym.show_num_segments.912f178c447211a3884891262d14862c.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.show_seg_memblk_start.912f178c447211a3884891262d14862c.cfi_jt @ 0x080021f0 (size 8) =====

int64_t sym.show_seg_memblk_start.912f178c447211a3884891262d14862c.cfi_jt(ulong *param_1,ulong param_2,ulong param_3)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    int64_t extraout_x1;
    char *pcVar9;
    char *pcVar10;
    char *arg1;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar12;
    ulong unaff_x30;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    char *pcStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_40;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar9 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iStack_30 = 0;
    iVar5 = sscanf(*param_1,"segment%lu");
    if (iVar5 == 1) {
        pcVar9 = "%lu\n";
        iVar5 = scnprintf(param_3,100,"%lu\n",(*(_segment.ehdr + iStack_30 * 0x20) >> 0xc) >> 0xf);
        iVar6 = iVar5;
    }
    else {
        _printk(0x8000981,iVar5);
        iVar6 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return iVar6;
    }
    puVar7 = __stack_chk_fail(iVar6);
    pcVar10 = &iStack_60;
    *extraout_x18 = sym.show_num_memblks;
    pcStack_48 = sym.show_num_memblks;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    iStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uStack_40 = param_3;
    iVar5 = sscanf(*puVar7,"segment%lu");
    if (iVar5 == 1) {
        pcVar10 = "%lu\n";
        iVar5 = scnprintf(pcVar9,100,"%lu\n",*(_segment.ehdr + iStack_60 * 0x20 + 0x10));
        iVar6 = iVar5;
    }
    else {
        _printk(0x80012d2,iVar5);
        iVar6 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        puVar7 = __stack_chk_fail(iVar6);
        arg1 = &uStack_90;
        *extraout_x18_00 = sym.show_seg_size;
        pcStack_78 = sym.show_seg_size;
        iVar6 = sp_el0;
        iStack_88 = *(iVar6 + 0x5e0);
        uStack_90 = 0;
        ppuStack_80 = &puStack_50;
        pcStack_70 = pcVar9;
        iVar5 = sscanf(*puVar7,"segment%lu");
        if (iVar5 == 1) {
            arg1 = "%lu\n";
            iVar5 = scnprintf(pcVar10,100,"%lu\n",*(_segment.ehdr + uStack_90 * 0x20 + 8));
            iVar6 = iVar5;
        }
        else {
            _printk(0x8000b6c,iVar5);
            iVar6 = 0;
        }
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_88) {
            return iVar6;
        }
        __stack_chk_fail(iVar6);
        *extraout_x18_01 = sym.mem_event_callback;
        uVar11 = *arg1;
        if (((uVar11 & 0x7fff) != 0) || (uVar1 = *(arg1 + 8) + uVar11, (uVar1 + 0x7fff & 0xffffffffffff8000) != uVar1))
        {
            __warn_printk("mem_event_callback");
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x80039e4);
            (*pcVar4)();
        }
        uVar12 = uVar11 >> 0xf;
        if ((_segment.ehdr < uVar12) || (uVar12 < _segment.ehdr)) {
            if ((extraout_x1 == 4) || (extraout_x1 == 1)) {
                pcVar9 = "Onlined";
                if (extraout_x1 != 1) {
                    pcVar9 = "Offlined";
                }
                _printk(0x80010fb,pcVar9,uVar12);
            }
        }
        else if (extraout_x1 - 1U < 0x10) {
            iVar6 = uVar11 << 0xc;
            switch(extraout_x1) {
            case 1:
                iVar8 = ktime_get();
                iVar8 = iVar8 - _segment.ehdr;
                sym.record_stat(uVar12,(iVar8 / 1000 + (iVar8 >> 0x3f)) -
                                        (SUB164(SEXT816(iVar8) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),0);
                _segment.ehdr = 0;
                sym.set_memblk_bitmap_online(iVar6);
                _printk(0x800103e,uVar12);
                sym.get_segment_addr_to_idx(iVar6);
                uVar11 = memory_block_size_bytes();
                Hint_Prefetch(0x8011084,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        __totalram_pages = __totalram_pages - (uVar11 >> 0xc);
                    }
                } while (cVar2 != '\0');
                break;
            case 2:
                uVar11 = 0;
                if ((_segment.ehdr & 0xffffffff) != 0) {
                    uVar11 = ((uVar12 - _segment.ehdr) + 1) / (_segment.ehdr & 0xffffffff);
                }
                iVar6 = _segment.ehdr + uVar11 * 0x48;
                obj.has_pend_offline_req = 0x1;
                *(iVar6 + 8) = *(iVar6 + 8) + 1;
                cancel_work_sync(obj.fill_movable_zone_work);
                _segment.ehdr = ktime_get();
                break;
            case 4:
                sym.mem_change_refresh_state(arg1,1);
                iVar8 = ktime_get();
                iVar8 = iVar8 - _segment.ehdr;
                sym.record_stat(uVar12,(iVar8 / 1000 + (iVar8 >> 0x3f)) -
                                        (SUB164(SEXT816(iVar8) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),1);
                _segment.ehdr = 0;
                obj.has_pend_offline_req = 0x0;
                sym.set_memblk_bitmap_offline(iVar6);
                _printk(0x8000a27,uVar12);
                sym.get_segment_addr_to_idx(iVar6);
                uVar11 = memory_block_size_bytes();
                Hint_Prefetch(0x8011084,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        __totalram_pages = __totalram_pages + (uVar11 >> 0xc);
                    }
                } while (cVar2 != '\0');
                break;
            case 8:
                uVar11 = 0;
                if ((_segment.ehdr & 0xffffffff) != 0) {
                    uVar11 = (uVar12 - _segment.ehdr) / (_segment.ehdr & 0xffffffff);
                }
                iVar6 = _segment.ehdr + uVar11 * 0x48;
                *(iVar6 + 8) = *(iVar6 + 8) + 1;
                _segment.ehdr = ktime_get();
                iVar5 = sym.mem_change_refresh_state(arg1,0);
                if (iVar5 != 0) {
                    return 0x8002;
                }
                break;
            case 0x10:
                _printk(0x8000f5e,iVar6,uVar1 * 0x1000);
                sym.mem_change_refresh_state(arg1,1);
            }
        }
        return 1;
    }
    return iVar6;
}


// ===== sym.show_seg_size.912f178c447211a3884891262d14862c.cfi_jt @ 0x080021f8 (size 8) =====

int64_t sym.show_seg_size.912f178c447211a3884891262d14862c.cfi_jt(ulong *param_1,ulong param_2,ulong param_3)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t extraout_x1;
    char *pcVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    pcVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_30 = 0;
    iVar5 = sscanf(*param_1,"segment%lu");
    if (iVar5 == 1) {
        pcVar8 = "%lu\n";
        iVar5 = scnprintf(param_3,100,"%lu\n",*(_segment.ehdr + uStack_30 * 0x20 + 8));
        iVar6 = iVar5;
    }
    else {
        _printk(0x8000b6c,iVar5);
        iVar6 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar6;
    }
    __stack_chk_fail(iVar6);
    *extraout_x18 = sym.mem_event_callback;
    uVar9 = *pcVar8;
    if (((uVar9 & 0x7fff) != 0) || (uVar1 = *(pcVar8 + 8) + uVar9, (uVar1 + 0x7fff & 0xffffffffffff8000) != uVar1)) {
        __warn_printk("mem_event_callback");
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x80039e4);
        (*pcVar4)();
    }
    uVar10 = uVar9 >> 0xf;
    if ((_segment.ehdr < uVar10) || (uVar10 < _segment.ehdr)) {
        if ((extraout_x1 == 4) || (extraout_x1 == 1)) {
            pcVar8 = "Onlined";
            if (extraout_x1 != 1) {
                pcVar8 = "Offlined";
            }
            _printk(0x80010fb,pcVar8,uVar10);
        }
    }
    else if (extraout_x1 - 1U < 0x10) {
        iVar6 = uVar9 << 0xc;
        switch(extraout_x1) {
        case 1:
            iVar7 = ktime_get();
            iVar7 = iVar7 - _segment.ehdr;
            sym.record_stat(uVar10,(iVar7 / 1000 + (iVar7 >> 0x3f)) -
                                    (SUB164(SEXT816(iVar7) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),0);
            _segment.ehdr = 0;
            sym.set_memblk_bitmap_online(iVar6);
            _printk(0x800103e,uVar10);
            sym.get_segment_addr_to_idx(iVar6);
            uVar9 = memory_block_size_bytes();
            Hint_Prefetch(0x8011084,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    __totalram_pages = __totalram_pages - (uVar9 >> 0xc);
                }
            } while (cVar2 != '\0');
            break;
        case 2:
            uVar9 = 0;
            if ((_segment.ehdr & 0xffffffff) != 0) {
                uVar9 = ((uVar10 - _segment.ehdr) + 1) / (_segment.ehdr & 0xffffffff);
            }
            iVar6 = _segment.ehdr + uVar9 * 0x48;
            obj.has_pend_offline_req = 0x1;
            *(iVar6 + 8) = *(iVar6 + 8) + 1;
            cancel_work_sync(obj.fill_movable_zone_work);
            _segment.ehdr = ktime_get();
            break;
        case 4:
            sym.mem_change_refresh_state(pcVar8,1);
            iVar7 = ktime_get();
            iVar7 = iVar7 - _segment.ehdr;
            sym.record_stat(uVar10,(iVar7 / 1000 + (iVar7 >> 0x3f)) -
                                    (SUB164(SEXT816(iVar7) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),1);
            _segment.ehdr = 0;
            obj.has_pend_offline_req = 0x0;
            sym.set_memblk_bitmap_offline(iVar6);
            _printk(0x8000a27,uVar10);
            sym.get_segment_addr_to_idx(iVar6);
            uVar9 = memory_block_size_bytes();
            Hint_Prefetch(0x8011084,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    __totalram_pages = __totalram_pages + (uVar9 >> 0xc);
                }
            } while (cVar2 != '\0');
            break;
        case 8:
            uVar9 = 0;
            if ((_segment.ehdr & 0xffffffff) != 0) {
                uVar9 = (uVar10 - _segment.ehdr) / (_segment.ehdr & 0xffffffff);
            }
            iVar6 = _segment.ehdr + uVar9 * 0x48;
            *(iVar6 + 8) = *(iVar6 + 8) + 1;
            _segment.ehdr = ktime_get();
            iVar5 = sym.mem_change_refresh_state(pcVar8,0);
            if (iVar5 != 0) {
                return 0x8002;
            }
            break;
        case 0x10:
            _printk(0x8000f5e,iVar6,uVar1 * 0x1000);
            sym.mem_change_refresh_state(pcVar8,1);
        }
    }
    return 1;
}


// ===== sym.show_mem_stats.912f178c447211a3884891262d14862c.cfi_jt @ 0x08002200 (size 8) =====

uint64_t sym.show_mem_stats.912f178c447211a3884891262d14862c.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    bool bVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    char *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint64_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar12 = _segment.ehdr;
    uVar14 = 0;
    if (uVar12 != 0) {
        uVar14 = CONCAT44(*0x8000004,_segment.ehdr) / uVar12;
    }
    uVar16 = 0;
    if (uVar12 != 0) {
        uVar16 = CONCAT44(*0x8000004,_segment.ehdr) / uVar12;
    }
    uVar3 = uVar16 - uVar14;
    iVar8 = uVar3 + 1;
    iVar9 = __kmalloc(iVar8 * 2 << 3,0xdc0);
    if (iVar9 == 0) {
        uVar14 = 0xfffffffffffffff4;
    }
    else {
        uVar12 = 0;
        pcVar11 = "ONLINE";
        iVar7 = 0;
        do {
            iVar5 = scnprintf(param_3 + uVar12,0x1000 - uVar12,"\n\t%s\n\t\t\t",pcVar11);
            uVar15 = iVar5 + uVar12;
            if (uVar14 <= uVar16) {
                uVar12 = uVar14 & 0xffffffff;
                do {
                    iVar5 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"%s%d\t\t",0x8000f9d,uVar12);
                    uVar17 = uVar12 + 1;
                    uVar12 = uVar17;
                    uVar15 = iVar5 + uVar15;
                } while (uVar17 <= uVar16);
            }
            iVar5 = scnprintf(param_3 + uVar15,0x1000 - uVar15,0x8000e43);
            uVar15 = iVar5 + uVar15;
            iVar5 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"\tLast recd time:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar5;
            iVar5 = iVar7 * iVar8;
            do {
                iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,"%luus\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 0x30));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"\tAvg time:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,"%luus\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 0x10));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"\tBest time:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,"%luus\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 0x18));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"\tWorst time:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,"%luus\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 0x20));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"\tSuccess count:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,"%lu\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"\tFail count:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(param_3 + uVar12,0x1000 - uVar12,"%lu\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 8));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar5 = scnprintf(param_3 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar5 + uVar15;
            uVar12 = uVar15;
            pcVar11 = "OFFLINE";
            bVar1 = iVar7 == 0;
            iVar7 = 1;
        } while (bVar1);
        iVar7 = scnprintf(param_3 + uVar12,0x1000 - uVar12,0x8000e43,"OFFLINE");
        uVar15 = iVar7 + uVar15;
        iVar7 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"\tState:\t\t");
        uVar16 = 0;
        uVar14 = uVar15 + iVar7;
        do {
            pcVar11 = "Online";
            if (*(CONCAT44(*0x8000004,_segment.ehdr) + uVar16 * 4) != 0) {
                pcVar11 = "Offline";
            }
            iVar7 = scnprintf(param_3 + uVar14,0x1000 - uVar14,"%s\t\t",pcVar11);
            uVar16 = uVar16 + 1;
            uVar15 = iVar7 + uVar14;
            uVar14 = uVar15;
        } while (uVar16 <= uVar3);
        iVar7 = scnprintf(param_3 + uVar14,0x1000 - uVar14,0x8000e43);
        uVar15 = iVar7 + uVar15;
        iVar7 = scnprintf(param_3 + uVar15,0x1000 - uVar15,0x8000e43);
        uVar15 = uVar15 + iVar7;
        iVar7 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"\tOnline time:\t");
        uVar15 = uVar15 + iVar7;
        iVar10 = ktime_get();
        uVar16 = 0;
        uVar14 = 0;
        do {
            if (*(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 4) == 0) {
                iVar13 = iVar10 - *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 0x48 + 0x40);
            }
            else {
                iVar13 = 0;
            }
            iVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 0x48 + 0x38) + iVar13;
            iVar7 = scnprintf(param_3 + uVar15 + uVar16,0x1000 - (uVar15 + uVar16),"%lus\t\t",iVar13 / 1000000000);
            uVar17 = uVar14 + 1;
            uVar16 = iVar7 + uVar16;
            *(iVar9 + uVar14 * 8) = iVar13;
            uVar14 = uVar17;
        } while (uVar17 <= uVar3);
        uVar16 = uVar16 + uVar15;
        iVar7 = scnprintf(param_3 + uVar16,0x1000 - uVar16,0x8000e43);
        uVar16 = iVar7 + uVar16;
        iVar7 = scnprintf(param_3 + uVar16,0x1000 - uVar16,"\tOffline time:\t");
        uVar16 = uVar16 + iVar7;
        iVar10 = ktime_get();
        uVar17 = 0;
        uVar15 = 0;
        do {
            uVar14 = uVar15 + iVar8;
            if (*(CONCAT44(*0x8000004,_segment.ehdr) + uVar15 * 4) == 1) {
                iVar13 = iVar10 - *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 0x48 + 0x40);
            }
            else {
                iVar13 = 0;
            }
            iVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 0x48 + 0x38) + iVar13;
            iVar7 = scnprintf(param_3 + uVar16 + uVar17,0x1000 - (uVar16 + uVar17),"%lus\t\t",iVar13 / 1000000000);
            uVar15 = uVar15 + 1;
            uVar17 = iVar7 + uVar17;
            *(iVar9 + uVar14 * 8) = iVar13;
        } while (uVar15 <= uVar3);
        uVar17 = uVar17 + uVar16;
        iVar7 = scnprintf(param_3 + uVar17,0x1000 - uVar17,0x8000e43);
        uVar17 = iVar7 + uVar17;
        iVar7 = scnprintf(param_3 + uVar17,0x1000 - uVar17,0x8000e43);
        uVar17 = uVar17 + iVar7;
        iVar7 = scnprintf(param_3 + uVar17,0x1000 - uVar17,"\tOnline %%:\t");
        uVar17 = uVar17 + iVar7;
        uVar15 = 0;
        uVar16 = 0;
        do {
            iVar13 = *(iVar9 + uVar16 * 8);
            iVar10 = *(iVar9 + (uVar16 + iVar8) * 8) + iVar13;
            if (iVar10 < 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x80055a4);
                (*pcVar4)();
            }
            iVar2 = 0;
            if (iVar10 != 0) {
                iVar2 = (iVar13 * 100) / iVar10;
            }
            iVar7 = scnprintf(param_3 + uVar17 + uVar15,0x1000 - (uVar17 + uVar15),"%d%%\t\t",iVar2);
            uVar16 = uVar16 + 1;
            uVar15 = iVar7 + uVar15;
        } while (uVar16 <= uVar3);
        uVar15 = uVar15 + uVar17;
        iVar7 = scnprintf(param_3 + uVar15,0x1000 - uVar15,0x8000e43);
        uVar15 = iVar7 + uVar15;
        iVar7 = scnprintf(param_3 + uVar15,0x1000 - uVar15,"\tOffline %%:\t");
        uVar15 = uVar15 + iVar7;
        uVar17 = 0;
        uVar16 = 0;
        do {
            iVar13 = *(iVar9 + (uVar16 + iVar8) * 8);
            iVar10 = *(iVar9 + uVar16 * 8) + iVar13;
            if (iVar10 < 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8005648);
                (*pcVar4)();
            }
            iVar2 = 0;
            if (iVar10 != 0) {
                iVar2 = (iVar13 * 100) / iVar10;
            }
            iVar7 = scnprintf(param_3 + uVar15 + uVar17,0x1000 - (uVar15 + uVar17),"%d%%\t\t",iVar2);
            uVar16 = uVar16 + 1;
            uVar17 = iVar7 + uVar17;
        } while (uVar16 <= uVar3);
        uVar17 = uVar17 + uVar15;
        iVar7 = scnprintf(param_3 + uVar17,0x1000 - uVar17,0x8000e43);
        uVar17 = iVar7 + uVar17;
        iVar7 = scnprintf(param_3 + uVar17,0x1000 - uVar17,0x8000e43);
        iVar10 = 0;
        uVar16 = 0;
        do {
            uVar15 = uVar16 + iVar8;
            uVar14 = uVar16;
            uVar16 = uVar16 + 1;
            iVar10 = *(iVar9 + uVar14 * 8) + iVar10 + *(iVar9 + uVar15 * 8);
        } while (uVar16 <= uVar3);
        iVar13 = 0;
        uVar16 = 0;
        do {
            uVar14 = uVar16;
            uVar16 = uVar16 + 1;
            iVar13 = *(iVar9 + uVar14 * 8) + iVar13;
        } while (uVar16 <= uVar3);
        uVar17 = uVar17 + iVar7;
        iVar2 = 0;
        if (iVar10 != 0) {
            iVar2 = (iVar13 * 0x6400000000 >> 0x20) / iVar10;
        }
        iVar8 = scnprintf(param_3 + uVar17,0x1000 - uVar17,"\tAvg Online %%:\t%d%%\n",iVar2);
        uVar17 = iVar8 + uVar17;
        iVar2 = 0;
        if (iVar10 != 0) {
            iVar2 = ((iVar10 - iVar13) * 0x6400000000 >> 0x20) / iVar10;
        }
        iVar8 = scnprintf(param_3 + uVar17,0x1000 - uVar17,"\tAvg Offline %%:\t%d%%\n",iVar2);
        uVar17 = iVar8 + uVar17;
        iVar8 = scnprintf(param_3 + uVar17,0x1000 - uVar17,0x8000e43);
        uVar14 = uVar17 + iVar8;
        kfree(iVar9);
    }
    return uVar14;
}


// ===== sym.show_differing_seg_sizes.912f178c447211a3884891262d14862c.cfi_jt @ 0x08002208 (size 8) =====

int64_t sym.show_differing_seg_sizes.912f178c447211a3884891262d14862c.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",obj.differing_segment_sizes);
    return iVar1;
}


// ===== sym.show_anon_migrate.912f178c447211a3884891262d14862c.cfi_jt @ 0x08002210 (size 8) =====

int64_t sym.show_anon_migrate.912f178c447211a3884891262d14862c.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",_obj.target_migrate_pages);
    return iVar1;
}


// ===== sym.show_mem_offline_granule.912f178c447211a3884891262d14862c.cfi_jt @ 0x08002218 (size 8) =====

int64_t sym.show_mem_offline_granule.912f178c447211a3884891262d14862c.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",_segment.ehdr << 0x14);
    return iVar1;
}


// ===== sym.show_num_memblks.912f178c447211a3884891262d14862c.cfi_jt @ 0x08002220 (size 8) =====

int64_t sym.show_num_memblks.912f178c447211a3884891262d14862c.cfi_jt(ulong *param_1,ulong param_2,ulong param_3)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    int64_t extraout_x1;
    char *pcVar9;
    char *arg1;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar11;
    ulong unaff_x30;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_40;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar9 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iStack_30 = 0;
    iVar5 = sscanf(*param_1,"segment%lu");
    if (iVar5 == 1) {
        pcVar9 = "%lu\n";
        iVar5 = scnprintf(param_3,100,"%lu\n",*(_segment.ehdr + iStack_30 * 0x20 + 0x10));
        iVar6 = iVar5;
    }
    else {
        _printk(0x80012d2,iVar5);
        iVar6 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return iVar6;
    }
    puVar7 = __stack_chk_fail(iVar6);
    arg1 = &uStack_60;
    *extraout_x18 = sym.show_seg_size;
    pcStack_48 = sym.show_seg_size;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uStack_40 = param_3;
    iVar5 = sscanf(*puVar7,"segment%lu");
    if (iVar5 == 1) {
        arg1 = "%lu\n";
        iVar5 = scnprintf(pcVar9,100,"%lu\n",*(_segment.ehdr + uStack_60 * 0x20 + 8));
        iVar6 = iVar5;
    }
    else {
        _printk(0x8000b6c,iVar5);
        iVar6 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        __stack_chk_fail(iVar6);
        *extraout_x18_00 = sym.mem_event_callback;
        uVar10 = *arg1;
        if (((uVar10 & 0x7fff) != 0) || (uVar1 = *(arg1 + 8) + uVar10, (uVar1 + 0x7fff & 0xffffffffffff8000) != uVar1))
        {
            __warn_printk("mem_event_callback");
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x80039e4);
            (*pcVar4)();
        }
        uVar11 = uVar10 >> 0xf;
        if ((_segment.ehdr < uVar11) || (uVar11 < _segment.ehdr)) {
            if ((extraout_x1 == 4) || (extraout_x1 == 1)) {
                pcVar9 = "Onlined";
                if (extraout_x1 != 1) {
                    pcVar9 = "Offlined";
                }
                _printk(0x80010fb,pcVar9,uVar11);
            }
        }
        else if (extraout_x1 - 1U < 0x10) {
            iVar6 = uVar10 << 0xc;
            switch(extraout_x1) {
            case 1:
                iVar8 = ktime_get();
                iVar8 = iVar8 - _segment.ehdr;
                sym.record_stat(uVar11,(iVar8 / 1000 + (iVar8 >> 0x3f)) -
                                        (SUB164(SEXT816(iVar8) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),0);
                _segment.ehdr = 0;
                sym.set_memblk_bitmap_online(iVar6);
                _printk(0x800103e,uVar11);
                sym.get_segment_addr_to_idx(iVar6);
                uVar10 = memory_block_size_bytes();
                Hint_Prefetch(0x8011084,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        __totalram_pages = __totalram_pages - (uVar10 >> 0xc);
                    }
                } while (cVar2 != '\0');
                break;
            case 2:
                uVar10 = 0;
                if ((_segment.ehdr & 0xffffffff) != 0) {
                    uVar10 = ((uVar11 - _segment.ehdr) + 1) / (_segment.ehdr & 0xffffffff);
                }
                iVar6 = _segment.ehdr + uVar10 * 0x48;
                obj.has_pend_offline_req = 0x1;
                *(iVar6 + 8) = *(iVar6 + 8) + 1;
                cancel_work_sync(obj.fill_movable_zone_work);
                _segment.ehdr = ktime_get();
                break;
            case 4:
                sym.mem_change_refresh_state(arg1,1);
                iVar8 = ktime_get();
                iVar8 = iVar8 - _segment.ehdr;
                sym.record_stat(uVar11,(iVar8 / 1000 + (iVar8 >> 0x3f)) -
                                        (SUB164(SEXT816(iVar8) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),1);
                _segment.ehdr = 0;
                obj.has_pend_offline_req = 0x0;
                sym.set_memblk_bitmap_offline(iVar6);
                _printk(0x8000a27,uVar11);
                sym.get_segment_addr_to_idx(iVar6);
                uVar10 = memory_block_size_bytes();
                Hint_Prefetch(0x8011084,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        __totalram_pages = __totalram_pages + (uVar10 >> 0xc);
                    }
                } while (cVar2 != '\0');
                break;
            case 8:
                uVar10 = 0;
                if ((_segment.ehdr & 0xffffffff) != 0) {
                    uVar10 = (uVar11 - _segment.ehdr) / (_segment.ehdr & 0xffffffff);
                }
                iVar6 = _segment.ehdr + uVar10 * 0x48;
                *(iVar6 + 8) = *(iVar6 + 8) + 1;
                _segment.ehdr = ktime_get();
                iVar5 = sym.mem_change_refresh_state(arg1,0);
                if (iVar5 != 0) {
                    return 0x8002;
                }
                break;
            case 0x10:
                _printk(0x8000f5e,iVar6,uVar1 * 0x1000);
                sym.mem_change_refresh_state(arg1,1);
            }
        }
        return 1;
    }
    return iVar6;
}


// ===== sym.fill_movable_zone_fn.912f178c447211a3884891262d14862c.cfi_jt @ 0x08002228 (size 8) =====

int64_t **** sym.fill_movable_zone_fn.912f178c447211a3884891262d14862c.cfi_jt(int64_t ****param_1)

{
    uint64_t *****pppppuVar1;
    int64_t ***pppiVar2;
    uint64_t *****pppppuVar3;
    int64_t ***pppiVar4;
    char cVar5;
    bool bVar6;
    int64_t *****pppppiVar7;
    int64_t *****pppppiVar8;
    uint uVar9;
    ulong in_tmp_ldXn;
    int iVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t ****ppppiVar13;
    int64_t *****extraout_x1;
    int64_t *piVar14;
    int64_t iVar15;
    ulong *puVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint extraout_w9;
    uint64_t uVar19;
    int64_t *****pppppiVar20;
    uint *extraout_x10;
    uint extraout_x11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t ******unaff_x19;
    uint64_t ******ppppppuVar21;
    uint64_t ******unaff_x20;
    code *pcVar22;
    ulong *unaff_x21;
    ulong *puVar23;
    int64_t ****ppppiVar24;
    uint64_t ******unaff_x22;
    int64_t iVar25;
    int iVar26;
    uint64_t ******unaff_x23;
    uint64_t unaff_x24;
    uint64_t unaff_x25;
    uint64_t unaff_x26;
    uint64_t unaff_x27;
    uint64_t ******unaff_x28;
    ulong unaff_x30;
    uchar auVar27 [16];
    int64_t *****pppppiStack_148;
    int64_t *****pppppiStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    ulong uStack_128;
    uint64_t *****pppppuStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t *****pppppuStack_f8;
    uint64_t *****pppppuStack_f0;
    ulong *puStack_e8;
    uint64_t *****pppppuStack_e0;
    uint64_t *****pppppuStack_d8;
    int64_t iStack_c8;
    uint64_t *****pppppuStack_c0;
    uint64_t *****pppppuStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    uint32_t uStack_88;
    uint uStack_84;
    code *pcStack_80;
    uint64_t *****pppppuStack_78;
    uint64_t *****pppppuStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    pcVar22 = *0x8011660;
    ppppppuVar21 = *0x8011658;
    puVar23 = __raw_spin_unlock_irqrestore;
    uVar19 = _contig_page_data;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    pppppuStack_78 = &pppppuStack_78;
    iStack_90 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    iStack_a0 = 0;
    iStack_98 = 0;
    pppppuStack_e0 = unaff_x20;
    puStack_e8 = unaff_x21;
    pppppuStack_70 = pppppuStack_78;
    if (((obj.has_pend_offline_req & 1) == 0) &&
       (param_1 = mutex_trylock(obj.page_migrate_lock), unaff_x19 = ppppppuVar21, pppppuStack_e0 = pcVar22,
       puStack_e8 = puVar23, unaff_x25 = uVar19, param_1 != 0)) {
        pcStack_80 = contig_page_data;
        uStack_b0 = ___ubsan_handle_cfi_check_fail_abort + 0x3ffU & 0xfffffffffffffc00;
        iStack_a8 = *0x80110d8 + ___ubsan_handle_cfi_check_fail_abort;
        pppppuStack_c0 = &pppppuStack_c0;
        iStack_90 = _platform_driver_unregister;
        pppppuStack_b8 = pppppuStack_c0;
        if (_platform_driver_unregister != 0) {
            Hint_Prefetch(0x80002dc,2,0,1);
            do {
                uStack_88 = _obj.target_migrate_pages;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(0x80002dc,0x10);
                if (bVar6) {
                    _obj.target_migrate_pages = 0;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            if (uStack_88 != 0) {
                unaff_x26 = puVar23 + uVar19;
                iStack_c8 = _add_memory + 5000;
                unaff_x27 = pcVar22 + ppppppuVar21;
                pcVar22 = of_get_property;
                do {
                    do {
                        do {
                            unaff_x28 = &pppppuStack_78;
                            unaff_x25 = uVar19;
                            if (iStack_c8 - _add_memory < 0) goto code_r0x08004a14;
                            uVar17 = _contig_page_data & (_contig_page_data >> 0x3f ^ 0xffffffff);
                            if (uVar17 - uStack_88 <= unaff_x27) {
                                uStack_88 = uVar17 - unaff_x27;
                            }
                            if (uStack_88 < 1) goto code_r0x08004a14;
                            uVar17 = uStack_88;
                            if (0x3ff < uStack_88) {
                                uVar17 = 0x400;
                            }
                            ppppppuVar21 = uVar17;
                            unaff_x25 = uVar19;
                            iStack_a0 = 0;
                            if (unaff_x25 < unaff_x26) {
                                unaff_x24 = 0;
                                unaff_x23 = uVar19 & 0xffffffff;
                                do {
                                    iVar26 = unaff_x23;
                                    if ((-1 < iVar26) && (___bitmap_set != 0)) {
                                        iVar15 = *(___bitmap_set + (unaff_x25 >> 0x13 & 0x1ffffffffff8));
                                        uVar19 = unaff_x25 >> 0xf & 0x7f;
                                        puVar16 = iVar15 + uVar19 * 0x20;
                                        if (((iVar15 != 0 && puVar16 != NULL) &&
                                            (uVar18 = *puVar16, (uVar18 >> 1 & 1) != 0)) &&
                                           (((uVar18 >> 3 & 1) != 0 ||
                                            ((**(iVar15 + uVar19 * 0x20 + 8) >> (unaff_x25 >> 9 & 0x3f) & 1) != 0)))) {
                                            puVar23 = (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000 +
                                                      unaff_x25 * 0x40;
                                            if (((*puVar23 >> 0x10 & 1) == 0) &&
                                               (unaff_x22 = puVar23 + 1, (*unaff_x22 & 1) == 0)) {
                                                if ((*(puVar23 + 6) & 0xf0000080) == 0xf0000000) {
                                                    if (puVar23[5] - 1 < 10) {
                                                        iVar26 = iVar26 + ~(-1 << (*(puVar23 + 5) & 0x1f));
                                                    }
                                                }
                                                else if (((unaff_x25 & 0x3ff) == 0) &&
                                                        (iVar15 = get_pfnblock_flags_mask
                                                                            (puVar23,puVar23 + (_of_n_size_cells >> 0xc
                                                                                                ) * 8 + 0x40000000 >> 6
                                                                             ,7), iVar15 == 3)) {
                                                    iVar26 = iVar26 + 0x3ff;
                                                }
                                                else {
                                                    iVar10 = isolate_anon_lru_page(puVar23);
                                                    pppppuVar1 = pppppuStack_70;
                                                    if (iVar10 == 0) {
                                                        uVar19 = __list_add_valid(unaff_x22,pppppuStack_70,
                                                                                  &pppppuStack_78);
                                                        if ((uVar19 & 1) != 0) {
                                                            *unaff_x22 = unaff_x28;
                                                            puVar23[2] = pppppuVar1;
                                                            pppppuStack_70 = unaff_x22;
                                                            *pppppuVar1 = unaff_x22;
                                                        }
                                                        puVar16 = puVar23;
                                                        if ((*unaff_x22 & 1) != 0) {
                                                            puVar16 = *unaff_x22 + -1;
                                                        }
                                                        inc_node_page_state(puVar23,8 - (*puVar16 >> 0x13 & 1));
                                                        unaff_x24 = unaff_x24 + 1;
                                                        iStack_a0 = iStack_a0 + 1;
                                                    }
                                                }
                                            }
                                            else {
                                                puVar16 = puVar23;
                                                if ((puVar23[1] & 1) != 0) {
                                                    puVar16 = puVar23[1] - 1;
                                                }
                                                if ((*puVar16 >> 0x10 & 1) == 0) {
                                                    uVar18 = 0;
                                                }
                                                else {
                                                    uVar18 = *(puVar16 + 0x51);
                                                }
                                                iVar26 = iVar26 + ~(puVar23 - puVar16 >> 6) + (1 << (uVar18 & 0x1f));
                                            }
                                        }
                                    }
                                    unaff_x23 = iVar26 + 1U;
                                    unaff_x25 = iVar26 + 1U;
                                } while ((unaff_x25 < unaff_x26) && (unaff_x24 < uVar17));
                            }
                            unaff_x28 = &pppppuStack_78;
                            uVar19 = unaff_x25;
                        } while ((&pppppuStack_78 == pppppuStack_78) && (unaff_x25 < unaff_x26));
                        uVar17 = migrate_pages(&pppppuStack_78,
                                               sym.movable_page_alloc.912f178c447211a3884891262d14862c.cfi_jt,
                                               sym.movable_page_free.912f178c447211a3884891262d14862c.cfi_jt,
                                               &pppppuStack_c0,0,2,0);
                        puVar23 = uVar17;
                        if (uVar17 != 0) {
                            putback_movable_pages(&pppppuStack_78);
                        }
                        uStack_88 = uStack_88 - iStack_a0;
                        if (((uVar17 == 0xfffffff4) || (unaff_x26 <= unaff_x25)) ||
                           ((obj.has_pend_offline_req & 1) != 0)) goto code_r0x08004a14;
                    } while (0 < uStack_88);
                    Hint_Prefetch(0x80002dc,2,0,1);
                    do {
                        uStack_88 = _obj.target_migrate_pages;
                        cVar5 = '\x01';
                        bVar6 = ExclusiveMonitorPass(0x80002dc,0x10);
                        if (bVar6) {
                            _obj.target_migrate_pages = 0;
                            cVar5 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar5 != '\0');
                    DataMemoryBarrier(2,3);
                } while (uStack_88 != 0);
            }
        }
code_r0x08004a14:
        unaff_x19 = ppppppuVar21;
        if ((iStack_98 != 0) && (unaff_x19 = pppppuStack_c0, &pppppuStack_c0 != pppppuStack_c0)) {
            unaff_x22 = &pppppuStack_c0;
            puVar23 = 0xdead000000000100;
            ppppppuVar21 = pppppuStack_c0;
            do {
                pcVar22 = ppppppuVar21 + -1;
                unaff_x19 = *ppppppuVar21;
                uVar19 = __list_del_entry_valid(ppppppuVar21);
                if ((uVar19 & 1) != 0) {
                    pppppuVar1 = *ppppppuVar21;
                    pppppuVar3 = ppppppuVar21[1];
                    pppppuVar1[1] = pppppuVar3;
                    *pppppuVar3 = pppppuVar1;
                }
                *ppppppuVar21 = 0xdead000000000100;
                ppppppuVar21[1] = 0xdead000000000122;
                __free_pages(pcVar22,0);
                ppppppuVar21 = unaff_x19;
                unaff_x23 = unaff_x19;
            } while (unaff_x22 != unaff_x19);
        }
        param_1 = mutex_unlock(obj.page_migrate_lock);
        pppppuStack_e0 = pcVar22;
        puStack_e8 = puVar23;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return param_1;
    }
    __stack_chk_fail();
    LOAcquire();
    uVar9 = *extraout_x10;
    *extraout_x10 = extraout_w9;
    LORelease();
    LOAcquire();
    *CONCAT44(extraout_x11,uVar9) = in_tmp_ldXn;
    LORelease();
    *extraout_x18 = 0x8004acc;
    uStack_128 = 0x8004acc;
    iVar15 = sp_el0;
    iStack_138 = *(iVar15 + 0x5e0);
    puStack_130 = &stack0xffffffffffffffa0;
    pppppuStack_120 = unaff_x28;
    uStack_118 = unaff_x27;
    uStack_110 = unaff_x26;
    uStack_108 = unaff_x25;
    uStack_100 = unaff_x24;
    pppppuStack_f8 = unaff_x23;
    pppppuStack_f0 = unaff_x22;
    pppppuStack_d8 = unaff_x19;
    if (extraout_x1 == *extraout_x1) {
        ppppiVar13 = extraout_x1[2];
        ppppiVar24 = extraout_x1[3];
        pppppiStack_148 = &pppppiStack_148;
        pppppiStack_140 = pppppiStack_148;
        if ((ppppiVar13 < ppppiVar24) &&
           (iVar15 = (*(ppppiVar13 * 0x40 + (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000) >> 0x3e) * 0x640,
           *(__warn_printk + iVar15) + *(_raw_spin_unlock_irqrestore + iVar15) <=
           (*(iVar15 + 0x8011628) & (*(iVar15 + 0x8011628) >> 0x3f ^ 0xffffffffffffffffU)))) {
            uVar11 = _raw_spin_lock_irqsave(extraout_x1[8] + 0xa8);
            do {
                if (((ppppiVar13 >> 0x34 == 0) && (ppppiVar13 >> 0x24 == 0)) && (___bitmap_set != 0)) {
                    iVar15 = *(___bitmap_set + (ppppiVar13 >> 0x13 & 0x1ffffffffff8));
                    uVar19 = ppppiVar13 >> 0xf & 0x7f;
                    puVar23 = iVar15 + uVar19 * 0x20;
                    if (((iVar15 != 0 && puVar23 != NULL) && (uVar17 = *puVar23, (uVar17 >> 1 & 1) != 0)) &&
                       (((uVar17 >> 3 & 1) != 0 ||
                        ((**(iVar15 + uVar19 * 0x20 + 8) >> (ppppiVar13 >> 9 & 0x3f) & 1) != 0)))) {
                        puVar23 = (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000 + ppppiVar13 * 0x40;
                        if (puVar23 != NULL) {
                            if (((*puVar23 >> 0x10 & 1) == 0) && ((puVar23[1] & 1) == 0)) {
                                if ((ppppiVar13 & 0x3ff) == 0) {
                                    iVar15 = get_pfnblock_flags_mask
                                                       (puVar23,puVar23 + (_of_n_size_cells >> 0xc) * 8 + 0x40000000 >>
                                                                 6,7);
                                    if (iVar15 == 5) {
                                        ppppiVar13 = ppppiVar13 + 0x3ff;
                                        goto code_r0x08004c00;
                                    }
                                    if ((0x1f < extraout_x1[5]) || ((obj.has_pend_offline_req & 1) != 0)) break;
                                }
                                if ((*(puVar23 + 6) & 0xf0000080) == 0xf0000000) {
                                    pppppiStack_148 = &pppppiStack_148;
                                    pppppiStack_140 = &pppppiStack_148;
                                    iVar15 = isolate_and_split_free_page(puVar23,&pppppiStack_148);
                                    pppppiVar8 = pppppiStack_140;
                                    pppppiVar7 = pppppiStack_148;
                                    if (iVar15 == 0) {
                                        ppppiVar13 = extraout_x1[2] + 0x3ffU & 0xfffffffffffffc00;
                                        break;
                                    }
                                    if (&pppppiStack_148 != pppppiStack_148) {
                                        pppppiVar20 = *extraout_x1;
                                        pppppiStack_148[1] = extraout_x1;
                                        *extraout_x1 = pppppiVar7;
                                        *pppppiVar8 = pppppiVar20;
                                        pppppiVar20[1] = pppppiVar8;
                                    }
                                    ppppiVar13 = ppppiVar13 + iVar15 + -1;
                                    extraout_x1[5] = extraout_x1[5] + iVar15;
                                }
                            }
                            else {
                                puVar16 = puVar23;
                                if ((puVar23[1] & 1) != 0) {
                                    puVar16 = puVar23[1] - 1;
                                }
                                if ((*puVar16 >> 0x10 & 1) == 0) {
                                    uVar17 = 0;
                                }
                                else {
                                    uVar17 = *(puVar16 + 0x51);
                                }
                                ppppiVar13 = ppppiVar13 + (1 << (uVar17 & 0x1f)) + ~(puVar23 - puVar16 >> 6);
                            }
                        }
                    }
                }
code_r0x08004c00:
                ppppiVar13 = ppppiVar13 + 1;
            } while (ppppiVar13 < ppppiVar24);
            extraout_x1[2] = ppppiVar13;
            _raw_spin_unlock_irqrestore(extraout_x1[8] + 0xa8,uVar11);
        }
        if (extraout_x1 == *extraout_x1) {
            ppppiVar13 = NULL;
            goto code_r0x08004e08;
        }
    }
    ppppiVar24 = *extraout_x1;
    ppppiVar13 = ppppiVar24 + -1;
    uVar19 = __list_del_entry_valid(ppppiVar24);
    if ((uVar19 & 1) != 0) {
        pppiVar2 = *ppppiVar24;
        pppiVar4 = ppppiVar24[1];
        pppiVar2[1] = pppiVar4;
        *pppiVar4 = pppiVar2;
    }
    *ppppiVar24 = 0xdead000000000100;
    ppppiVar24[1] = 0xdead000000000122;
    extraout_x1[5] = extraout_x1[5] + -1;
code_r0x08004e08:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_138) {
        return ppppiVar13;
    }
    auVar27 = __stack_chk_fail();
    piVar14 = auVar27._8_8_;
    iVar12 = auVar27._0_8_;
    *extraout_x18_00 = 0x8004e54;
    iVar25 = *piVar14;
    iVar15 = iVar12 + 8;
    ppppiVar13 = __list_add_valid(in_tmp_ldXn,iVar15,piVar14,iVar25);
    if ((ppppiVar13 & 1) != 0) {
        *(iVar25 + 8) = iVar15;
        *(iVar12 + 8) = iVar25;
        *(iVar12 + 0x10) = piVar14;
        *piVar14 = iVar15;
    }
    piVar14[5] = piVar14[5] + 1;
    return ppppiVar13;
}


// ===== sym.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt @ 0x08002230 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800234c)

uint64_t sym.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    code *pcVar8;
    code *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint32_t uVar13;
    code *pcVar14;
    uint64_t extraout_x8;
    int iVar15;
    uint32_t *puVar16;
    int iVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint64_t uVar20;
    uint32_t *puVar21;
    uint64_t uVar22;
    ulong *in_x18;
    code *unaff_x20;
    code *unaff_x21;
    code *unaff_x22;
    char *pcVar23;
    int iVar24;
    code *unaff_x23;
    ulong unaff_x30;
    uint32_t uStack_a0;
    uint uStack_9c;
    ulong uStack_98;
    ulong uStack_90;
    uint uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    if (_segment.ehdr != 0) {
        _printk(0x8000fa1);
        pcVar8 = NULL;
        goto code_r0x08002b58;
    }
    unaff_x20 = *(param_1 + 0x300);
    puVar6 = of_get_property(unaff_x20,"granule",0);
    pcVar23 = unaff_x22;
    if (puVar6 == NULL) {
        uVar12 = 0x80008e4;
        goto code_r0x08002b50;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
code_r0x08002a24:
        uVar12 = 0x800100d;
code_r0x08002b50:
        _printk(uVar12);
    }
    else {
        uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar13 = uVar2 >> 0x10;
        _segment.ehdr = CONCAT44(*0x8000004,uVar13 | uVar2 << 0x10);
        if ((uVar5 & uVar5 - 1) != 0) goto code_r0x08002a24;
        if ((uVar13 & 0xf80) == 0) {
            uVar13 = uVar13 * 0x100000;
            uVar5 = 0;
            if (uVar13 != 0) {
                uVar5 = 0x8000000 / uVar13;
            }
            if (uVar5 * uVar13 != 0x8000000) goto code_r0x08002a24;
        }
        iVar7 = of_find_property(unaff_x20,"mboxes",0);
        if (iVar7 == 0) {
            obj.is_rpm_controller = 0x1;
        }
        else {
            _obj.mailbox = param_1 + 0x10;
            *0x80001f8 = 1;
            *0x8000200 = 1000;
            *0x8000208 = 0;
            *0x8000228 = mbox_request_channel(obj.mailbox,0);
            if (0xfffffffffffff000 < *0x8000228) {
                if (*0x8000228 == 0xfffffffffffffdfb) {
                    pcVar8 = 0xfffffffffffffdfb;
                    goto code_r0x08002b58;
                }
                _printk(0x8001280,*0x8000228,*0x8000228);
                pcVar8 = _segment.ehdr;
                if (_segment.ehdr != 0) goto code_r0x08002b58;
            }
        }
        unaff_x20 = of_get_property;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        pcVar8 = of_find_node_by_name(_of_get_property,"memory");
        if (pcVar8 == NULL) {
            uVar12 = 0x800063d;
            goto code_r0x08002b50;
        }
        iVar4 = of_n_addr_cells(_of_get_property);
        uVar5 = of_n_size_cells(_of_get_property);
        unaff_x20 = uVar5;
        pcVar9 = of_find_property(pcVar8,0x8000f52,&uStack_80);
        if (pcVar9 == NULL) {
            uVar12 = 0x80009f6;
            unaff_x21 = pcVar8;
            goto code_r0x08002b50;
        }
        iVar15 = uVar5 + iVar4;
        iVar7 = *(pcVar9 + 0x10);
        iVar24 = 0;
        if (iVar15 != 0) {
            iVar24 = (uStack_80 >> 2) / iVar15;
        }
        uVar10 = memblock_end_of_DRAM();
        if (iVar24 == 0) {
            _segment.ehdr = NULL;
            unaff_x22 = pcVar9;
        }
        else {
            _segment.ehdr = NULL;
            uVar18 = 0;
            iVar17 = iVar24;
            do {
                if (iVar4 == 0) {
                    uVar20 = 0;
                    if (uVar5 != 0) goto code_r0x08002454;
code_r0x080023f8:
                    uVar22 = 0;
                }
                else {
                    iVar19 = 0;
                    uVar20 = 0;
                    do {
                        uVar13 = *(iVar7 + iVar19 * 4);
                        iVar19 = iVar19 + 1;
                        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                        uVar20 = uVar13 >> 0x10 | uVar13 << 0x10 | uVar20 << 0x20;
                    } while (iVar4 != iVar19);
                    if (uVar5 == 0) goto code_r0x080023f8;
code_r0x08002454:
                    uVar22 = 0;
                    iVar19 = iVar4 << 2;
                    uVar13 = uVar5;
                    do {
                        puVar6 = iVar7 + iVar19;
                        uVar13 = uVar13 - 1;
                        iVar19 = iVar19 + 4;
                        uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                        uVar22 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar22 << 0x20;
                    } while (uVar13 != 0);
                }
                iVar17 = iVar17 + -1;
                iVar19 = uVar22 + uVar20;
                if (uVar20 <= uVar18) {
                    uVar20 = uVar18;
                    iVar19 = _segment.ehdr;
                }
                _segment.ehdr = iVar19;
                iVar7 = iVar7 + iVar15 * 4;
                uVar18 = uVar20;
            } while (iVar17 != 0);
            iVar7 = *(pcVar9 + 0x10);
            do {
                if (iVar4 == 0) {
                    uVar18 = 0;
                    if (uVar5 == 0) goto code_r0x080024fc;
code_r0x080024c8:
                    uVar20 = 0;
                    iVar19 = iVar4 << 2;
                    uVar13 = uVar5;
                    do {
                        puVar6 = iVar7 + iVar19;
                        uVar13 = uVar13 - 1;
                        iVar19 = iVar19 + 4;
                        uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                        uVar20 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar20 << 0x20;
                    } while (uVar13 != 0);
                }
                else {
                    iVar19 = 0;
                    uVar18 = 0;
                    do {
                        uVar13 = *(iVar7 + iVar19 * 4);
                        iVar19 = iVar19 + 1;
                        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                        uVar18 = uVar13 >> 0x10 | uVar13 << 0x10 | uVar18 << 0x20;
                    } while (iVar4 != iVar19);
                    if (uVar5 != 0) goto code_r0x080024c8;
code_r0x080024fc:
                    uVar20 = 0;
                }
                iVar24 = iVar24 + -1;
                if (uVar10 < uVar20 + uVar18) {
                    uVar22 = uVar10;
                    if (uVar10 <= uVar18) {
                        uVar22 = uVar18;
                    }
                    __bitmap_set(obj.movable_bitmap,uVar22 - uVar10 >> 0x1b,(uVar20 + uVar18) - uVar22 >> 0x1b);
                }
                iVar7 = iVar7 + iVar15 * 4;
                unaff_x22 = obj.movable_bitmap;
            } while (iVar24 != 0);
        }
        uVar10 = memblock_end_of_DRAM();
        unaff_x20 = uVar10 >> 0x1b;
        unaff_x21 = _segment.ehdr - 1U >> 0x1b;
        uVar10 = memory_block_size_bytes();
        unaff_x23 = segment.ehdr;
        _segment.ehdr = unaff_x21;
        pcVar8 = memblock_end_of_DRAM();
        if (_segment.ehdr <= pcVar8) {
            _printk(0x8000b0a);
            pcVar8 = 0xffffffed;
            goto code_r0x08002b58;
        }
        uVar20 = memblock_end_of_DRAM();
        uVar18 = 0;
        if (uVar10 != 0) {
            uVar18 = uVar20 / uVar10;
        }
        if (uVar20 != uVar18 * uVar10) {
            uVar18 = memblock_end_of_DRAM();
            iVar4 = 0;
            if (uVar10 != 0) {
                iVar4 = uVar18 / uVar10;
            }
            _printk(0x8000713);
            _printk(0x8000ca8,_segment.ehdr,uVar10 + (iVar4 * uVar10 - uVar18) >> 10);
            _segment.ehdr = _segment.ehdr + 1;
        }
        uVar18 = 0;
        if (uVar10 != 0) {
            uVar18 = _segment.ehdr / uVar10;
        }
        uVar10 = _segment.ehdr - uVar18 * uVar10;
        if (uVar10 != 0) {
            _printk(0x8000528);
            _printk(0x800076f,_segment.ehdr,uVar10 >> 10 & 0x3fffff);
            _segment.ehdr = _segment.ehdr + -1;
        }
        bVar3 = false;
        unaff_x20 = obj.movable_bitmap;
        pcVar23 = 0x8000c38;
        pcVar9 = _segment.ehdr;
        pcVar14 = _segment.ehdr;
        pcVar8 = _segment.ehdr;
        _segment.ehdr = _segment.ehdr << 0x1b;
code_r0x080025dc:
        do {
            if ((*(obj.movable_bitmap + (pcVar8 - pcVar14 >> 6 & 0x3ffffff) * 8) >> (pcVar8 - pcVar14 & 0x3fU) & 1) != 0
               ) {
                iVar7 = (_segment.ehdr & 0xffffffff) * 0x8000000;
                pcVar14 = 0x80011a2;
                if (((iVar7 - 1U & pcVar8 << 0x1b) != 0) ||
                   (iVar4 = add_memory(0,pcVar8 << 0x1b,iVar7,0), pcVar14 = pcVar23, pcVar9 = _segment.ehdr,
                   iVar4 != 0)) {
                    _printk(pcVar14,pcVar8);
                    pcVar8 = pcVar8 + (_segment.ehdr & 0xffffffff);
                    if (_segment.ehdr < pcVar8) goto code_r0x08002a30;
                    bVar3 = true;
                    pcVar9 = _segment.ehdr;
                    pcVar14 = _segment.ehdr;
                    goto code_r0x080025dc;
                }
            }
            pcVar8 = pcVar8 + (_segment.ehdr & 0xffffffff);
            pcVar14 = _segment.ehdr;
        } while (pcVar8 <= pcVar9);
        if (bVar3) {
code_r0x08002a30:
            _printk(0x8000ee9);
        }
        unaff_x21 = of_get_property;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        iVar7 = of_find_node_by_name(_of_get_property,"ddr-regions");
        if (iVar7 == 0) {
            uVar12 = 0x8000d77;
            goto code_r0x08002b50;
        }
        uStack_9c = 0;
        uStack_70 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        snprintf(&uStack_80,0x14,"region%d",0);
        iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
        if (iVar19 != 0) {
            unaff_x20 = 0x1;
            snprintf(&uStack_80,0x14,"region%d",1);
            iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
            if (iVar19 != 0) {
                unaff_x20 = 0x2;
                snprintf(&uStack_80,0x14,"region%d",2);
                iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                if (iVar19 != 0) {
                    unaff_x20 = 0x3;
                    snprintf(&uStack_80,0x14,"region%d",3);
                    iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                    if (iVar19 != 0) {
                        unaff_x20 = 0x4;
                        snprintf(&uStack_80,0x14,"region%d",4);
                        iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                        if (iVar19 != 0) {
                            unaff_x20 = 0x5;
                            snprintf(&uStack_80,0x14,"region%d",5);
                            iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                            if (iVar19 != 0) {
                                unaff_x20 = 0x6;
                                snprintf(&uStack_80,0x14,"region%d",6);
                                iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                                if (iVar19 != 0) {
                                    unaff_x20 = 0x7;
                                    snprintf(&uStack_80,0x14,"region%d",7);
                                    iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                                    if (iVar19 != 0) {
                                        unaff_x20 = 0x8;
                                        snprintf(&uStack_80,0x14,"region%d",8);
                                        iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                                        if (iVar19 != 0) {
                                            snprintf(&uStack_80,0x14,"region%d",9);
                                            iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                                            uVar5 = 9;
                                            if (iVar19 != 0) {
                                                uVar5 = 10;
                                            }
                                            unaff_x20 = uVar5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            _segment.ehdr = CONCAT44(*0x8000004,unaff_x20);
            _segment.ehdr = __kmalloc(unaff_x20 * 0x28,0xdc0);
            if (_segment.ehdr != NULL) {
                uVar5 = of_n_addr_cells(_of_get_property);
                if (_segment.ehdr < 1) {
code_r0x08002a60:
                    uVar10 = 0;
                }
                else {
                    unaff_x20 = uVar5;
                    iVar19 = uVar5;
                    pcVar23 = "region%d";
                    pcVar8 = NULL;
                    do {
                        snprintf(&uStack_98,0x14,"region%d",pcVar8 & 0xffffffff);
                        iVar11 = of_find_property(iVar7,&uStack_98,&uStack_a0);
                        pcVar9 = _segment.ehdr;
                        unaff_x21 = pcVar8;
                        if ((iVar11 == 0) || ((uStack_a0 & 0xfffffffc) != 0x28)) goto code_r0x08002b54;
                        if (uVar5 == 0) {
                            uVar10 = 0;
                            pcVar14 = _segment.ehdr + pcVar8 * 0x28;
                            *(pcVar14 + 0x20) = 0;
                            *(pcVar14 + 0x18) = 0;
                            *pcVar14 = 0;
                            *(pcVar14 + 8) = 0;
                        }
                        else {
                            puVar16 = *(iVar11 + 0x10);
                            uVar10 = 0;
                            pcVar14 = unaff_x20;
                            puVar6 = puVar16;
                            do {
                                uVar2 = pcVar14 - 1;
                                pcVar14 = uVar2;
                                uVar13 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                                uVar10 = uVar13 >> 0x10 | uVar13 << 0x10 | uVar10 << 0x20;
                                puVar6 = puVar6 + 1;
                            } while (uVar2 != 0);
                            puVar6 = puVar16 + iVar19;
                            uVar18 = 0;
                            *(_segment.ehdr + pcVar8 * 0x28) = uVar10;
                            puVar21 = puVar6;
                            uVar13 = uVar5;
                            do {
                                uVar13 = uVar13 - 1;
                                uVar2 = (*puVar21 & 0xff00ff00) >> 8 | (*puVar21 & 0xff00ff) << 8;
                                uVar18 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar18 << 0x20;
                                puVar21 = puVar21 + 1;
                            } while (uVar13 != 0);
                            uVar20 = 0;
                            *(pcVar9 + (pcVar8 * 5 + 1) * 8) = uVar18;
                            puVar21 = puVar6 + iVar19;
                            uVar13 = uVar5;
                            do {
                                uVar13 = uVar13 - 1;
                                uVar2 = (*puVar21 & 0xff00ff00) >> 8 | (*puVar21 & 0xff00ff) << 8;
                                uVar20 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar20 << 0x20;
                                puVar21 = puVar21 + 1;
                            } while (uVar13 != 0);
                            uVar10 = 0;
                            *(pcVar9 + (pcVar8 * 5 + 4) * 8) = uVar20;
                            uVar13 = (puVar16[iVar19 * 3 + (uVar5 - 1)] & 0xff00ff00) >> 8 |
                                     (puVar16[iVar19 * 3 + (uVar5 - 1)] & 0xff00ff) << 8;
                            *(pcVar9 + (pcVar8 * 5 + 3) * 8) = uVar13 >> 0x10 | uVar13 << 0x10;
                            puVar6 = puVar6 + iVar19 + iVar19 * 2;
                            uVar13 = uVar5;
                            do {
                                uVar13 = uVar13 - 1;
                                uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                                uVar10 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar10 << 0x20;
                                puVar6 = puVar6 + 1;
                            } while (uVar13 != 0);
                        }
                        iVar4 = _segment.ehdr;
                        pcVar14 = _segment.ehdr & 0xffffffff;
                        unaff_x21 = pcVar8 + 1;
                        *(pcVar9 + (pcVar8 * 5 + 2) * 8) = uVar10;
                        pcVar8 = unaff_x21;
                    } while (unaff_x21 < pcVar14);
                    if (iVar4 < 1) goto code_r0x08002a60;
                    _printk(0x8000921,0,*pcVar9,*(pcVar9 + 8),*(pcVar9 + 0x10),*(pcVar9 + 0x20),*(pcVar9 + 0x18));
                    if (1 < _segment.ehdr) {
                        unaff_x21 = NULL;
                        uVar10 = 1;
                        do {
                            pcVar8 = _segment.ehdr + unaff_x21;
                            _printk(0x8000921,uVar10 & 0xffffffff,*(pcVar8 + 0x28),*(pcVar8 + 0x30),*(pcVar8 + 0x38)
                                    ,*(pcVar8 + 0x48),*(pcVar8 + 0x40));
                            uVar10 = uVar10 + 1;
                            unaff_x21 = unaff_x21 + 0x28;
                            pcVar23 = segment.ehdr;
                        } while (uVar10 < (_segment.ehdr & 0xffffffff));
                    }
                    if (_segment.ehdr < 1) goto code_r0x08002a60;
                    uVar10 = 0;
                    uVar18 = 0;
                    do {
                        uVar18 = uVar18 & 0xff;
                        pcVar8 = _segment.ehdr + uVar18 * 0x28;
                        if (*(pcVar8 + 0x10) != 0) {
                            pcVar9 = *(pcVar8 + 8) + *pcVar8;
                            pcVar14 = *(_segment.ehdr + (uVar18 * 5 + 4) * 8) + *pcVar8;
                            while ((pcVar14 < pcVar9 && (pcVar14 + *(pcVar8 + 0x10) * 0x100000 <= pcVar9))) {
                                uVar5 = uVar10;
                                if (_segment.ehdr <= pcVar14) {
                                    uVar5 = uVar5 + 1;
                                }
                                uVar10 = uVar5;
                                pcVar14 = pcVar14 + *(pcVar8 + 0x10) * 0x100000;
                            }
                        }
                        uVar5 = uVar18 + 1;
                        uVar18 = uVar5;
                    } while ((uVar5 & 0xff) < _segment.ehdr);
                }
                unaff_x20 = segment.ehdr;
                _segment.ehdr = CONCAT44(*0x8000004,uVar10);
                if (uVar10 >> 0x3b != 0) {
                    _segment.ehdr = NULL;
                    pcVar8 = 0xfffffff4;
                    unaff_x22 = pcVar23;
                    goto code_r0x08002b58;
                }
                pcVar8 = __kmalloc(-(uVar10 >> 0x1f) & 0xffffffe000000000 | uVar10 << 5,0xdc0);
                _segment.ehdr = pcVar8;
                if (pcVar8 != NULL) {
                    _segment.ehdr = pcVar8;
                    pcVar9 = pcVar8;
                    if (0 < _segment.ehdr) {
                        if (_segment.ehdr == 1) {
                            uVar18 = 0;
                        }
                        else {
                            uVar18 = pcVar8 & 0xfffffffe;
                            pcVar9 = pcVar8 + 0x20;
                            uVar10 = uVar18;
                            do {
                                uVar10 = uVar10 - 2;
                                *(pcVar9 + -0x20) = 0xffffffffffffffff;
                                *pcVar9 = 0xffffffffffffffff;
                                pcVar9 = pcVar9 + 0x40;
                            } while (uVar10 != 0);
                            pcVar9 = _segment.ehdr;
                            if (uVar18 == (pcVar8 & 0xffffffff)) goto code_r0x08002d2c;
                        }
                        iVar7 = (pcVar8 & 0xffffffff) - uVar18;
                        pcVar8 = pcVar8 + uVar18 * 0x20;
                        do {
                            iVar7 = iVar7 + -1;
                            *pcVar8 = 0xffffffffffffffff;
                            pcVar8 = pcVar8 + 0x20;
                            pcVar9 = _segment.ehdr;
                        } while (iVar7 != 0);
                    }
code_r0x08002d2c:
                    _segment.ehdr = pcVar9;
                    if (0 < _segment.ehdr) {
                        iVar7 = 0;
                        unaff_x21 = NULL;
                        iVar19 = *(_segment.ehdr + 0x10);
                        uVar10 = iVar19 << 0x14;
                        iVar4 = _segment.ehdr;
                        do {
                            uVar18 = iVar19 * 0x100000;
                            if (uVar18 != 0) {
                                if (uVar10 != uVar18) {
                                    obj.differing_segment_sizes = 0x1;
                                }
                                pcVar9 = _segment.ehdr + (unaff_x21 & 0xff) * 0x28;
                                pcVar8 = *(pcVar9 + 8) + *pcVar9;
                                pcVar9 = *(pcVar9 + 0x20) + *pcVar9;
                                if (pcVar9 < pcVar8) {
                                    do {
                                        pcVar14 = pcVar9 + uVar18;
                                        if (pcVar8 < pcVar14) break;
                                        if (_segment.ehdr <= pcVar9) {
                                            uVar20 = memory_block_size_bytes();
                                            if (uVar20 < uVar18) {
                                                uVar22 = memory_block_size_bytes();
                                                uVar20 = 0;
                                                if (uVar22 != 0) {
                                                    uVar20 = uVar18 / uVar22;
                                                }
                                            }
                                            else {
                                                uVar20 = 1;
                                            }
                                            pcVar1 = _segment.ehdr + iVar7 * 0x20;
                                            iVar7 = iVar7 + 1;
                                            *pcVar1 = pcVar9;
                                            *(pcVar1 + 8) = uVar18;
                                            *(pcVar1 + 0x10) = uVar20;
                                            *(pcVar1 + 0x18) = 0xffffffffffffffff >> (-uVar20 & 0x3f);
                                        }
                                        pcVar9 = pcVar14;
                                    } while (pcVar14 < pcVar8);
                                    iVar4 = _segment.ehdr;
                                }
                            }
                            uVar5 = unaff_x21 + 1;
                            unaff_x21 = uVar5;
                            if (iVar4 <= (uVar5 & 0xff)) break;
                            iVar19 = *(_segment.ehdr + ((unaff_x21 & 0xff) * 5 + 2) * 8);
                        } while( true );
                    }
                    unaff_x20 = segment.ehdr;
                    if (obj.differing_segment_sizes == 0x1) {
                        _printk(0x80007fc);
                    }
                    unaff_x22 = segment.ehdr;
                    pcVar23 = unaff_x22;
                    if (0 < _segment.ehdr) {
                        uVar10 = 0;
                        pcVar8 = _segment.ehdr + 8;
                        do {
                            uVar18 = *pcVar8;
                            if ((uVar18 & uVar18 - 1) != 0) {
                                uVar12 = 0x8000df4;
code_r0x08002f6c:
                                _printk(uVar12,uVar10,uVar18);
                                goto code_r0x08002b54;
                            }
                            if (uVar18 >> 0x1b == 0) {
                                uVar5 = 0;
                                uVar13 = uVar18;
                                if (uVar13 != 0) {
                                    uVar5 = 0x8000000 / uVar13;
                                }
                                if (uVar5 * uVar13 != 0x8000000) goto code_r0x08002ee8;
                            }
                            else if ((uVar18 != 0x8000000) && ((uVar18 & 0x7ffffff) != 0)) {
code_r0x08002ee8:
                                uVar12 = 0x8001201;
                                goto code_r0x08002f6c;
                            }
                            uVar10 = uVar10 + 1;
                            pcVar8 = pcVar8 + 0x20;
                        } while ((_segment.ehdr & 0xffffffff) != uVar10);
                    }
                    _printk(0x80007c9,_segment.ehdr & 0xffffffff);
                    pcVar8 = NULL;
                    if ((_segment.ehdr & 0xffffffff) != 0) {
                        pcVar8 = 1 / (_segment.ehdr & 0xffffffff);
                    }
                    iVar4 = pcVar8;
                    _segment.ehdr = __kmalloc(iVar4 * 0x90,0xdc0);
                    unaff_x20 = segment.ehdr;
                    if (_segment.ehdr != NULL) {
                        uVar12 = ktime_get();
                        pcVar9 = _segment.ehdr;
                        if (iVar4 != 0) {
                            if (0x80000000 < iVar4 + 0x7fffffffU) {
                                iVar15 = 1;
                                do {
                                    bVar3 = iVar15 != -1;
                                    *(pcVar9 + (iVar15 * 9 + 8) * 8) = uVar12;
                                    *(pcVar9 + ((iVar15 + -1) * 9 + 8) * 8) = uVar12;
                                    iVar15 = iVar15 + 2;
                                } while (bVar3);
                                if (iVar4 == 0) goto code_r0x08002fcc;
                            }
                            iVar15 = 0;
                            do {
                                iVar7 = iVar15;
                                iVar15 = iVar15 + 1;
                                *(pcVar9 + (iVar7 * 9 + 8) * 8) = uVar12;
                            } while (iVar15 != iVar4);
                        }
code_r0x08002fcc:
                        pcVar9 = __kmalloc(pcVar8 << 2,0xdc0);
                        unaff_x21 = segment.ehdr;
                        _segment.ehdr = pcVar9;
                        if (pcVar9 == NULL) {
                            pcVar8 = 0xfffffff4;
                            goto code_r0x08003070;
                        }
                        if (iVar4 == 0) goto code_r0x0800305c;
                        if (iVar4 + 0x7fffffffU < 0x80000001) {
                            uVar10 = 0;
                            goto code_r0x0800304c;
                        }
                        uVar5 = 0;
                        iVar4 = 1;
                        do {
                            *(pcVar9 + iVar4 * 4) = 0;
                            bVar3 = iVar4 == -1;
                            *(pcVar9 + (iVar4 + -1) * 4) = 0;
                            iVar4 = iVar4 + 2;
                            if (bVar3) goto code_r0x08003054;
                        } while( true );
                    }
                }
            }
            pcVar8 = 0xfffffff4;
            unaff_x22 = pcVar23;
            goto code_r0x08002b58;
        }
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        _printk(0x8000bdb,0);
    }
code_r0x08002b54:
    pcVar8 = 0xffffffea;
    unaff_x22 = pcVar23;
code_r0x08002b58:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return pcVar8 & 0xffffffff;
    }
    pcVar9 = __stack_chk_fail();
    uVar10 = extraout_x8;
code_r0x0800304c:
    do {
        *(pcVar9 + uVar10 * 4) = 0;
        uVar5 = uVar10 + 1;
code_r0x08003054:
        uVar10 = uVar5;
    } while (uVar5 != pcVar8);
code_r0x0800305c:
    iVar4 = sym.mem_sysfs_init();
    if (iVar4 == 0) {
        iVar4 = register_memory_notifier(reloc.mem_event_callback.912f178c447211a3884891262d14862c.cfi_jt);
        if (iVar4 == 0) goto code_r0x0800308c;
        pcVar8 = 0xffffffed;
        uVar12 = 0x8000e53;
        goto code_r0x080030ec;
    }
    pcVar8 = 0xffffffed;
    goto code_r0x08003068;
code_r0x0800308c:
    _printk(0x8000da7,*unaff_x23,*unaff_x22);
    if (reloc.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt != 0x0) {
        _printk(0x8000ff1);
    }
    _segment.ehdr = alloc_workqueue("reverse_migrate_wq",6,0);
    pcVar8 = NULL;
    if (_segment.ehdr == NULL) {
        pcVar8 = 0xfffffff4;
        uVar12 = 0x8000d16;
code_r0x080030ec:
        _printk(uVar12);
        unaff_x22 = segment.ehdr;
        sysfs_remove_group(_segment.ehdr,obj.mem_attr_group);
        kobject_put(_segment.ehdr);
code_r0x08003068:
        kfree(*unaff_x21);
code_r0x08003070:
        kfree(*unaff_x20);
    }
    goto code_r0x08002b58;
}


// ===== sym.store_anon_migrate.912f178c447211a3884891262d14862c.cfi_jt @ 0x08002238 (size 8) =====

int64_t sym.store_anon_migrate.912f178c447211a3884891262d14862c.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    iVar4 = kstrtoint(param_3,0,&uStack_2c);
    if (-1 < iVar4) {
        uVar5 = uStack_2c;
        while( true ) {
            Hint_Prefetch(0x80002dc,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(0x80002dc,0x10);
                if (bVar2) {
                    cVar1 = ExclusiveMonitorsStatus();
                    _obj.target_migrate_pages = _obj.target_migrate_pages + uVar5;
                }
            } while (cVar1 != '\0');
            if ((_segment.ehdr & 1) == 0) {
                queue_work_on(0x20,_segment.ehdr,obj.fill_movable_zone_work);
            }
code_r0x08005884:
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_28) break;
            __stack_chk_fail();
            uVar5 = extraout_x8;
        }
        return param_4;
    }
    param_4 = iVar4;
    goto code_r0x08005884;
}


// ===== sym.movable_page_alloc.912f178c447211a3884891262d14862c.cfi_jt @ 0x08002240 (size 8) =====

int64_t **** sym.movable_page_alloc.912f178c447211a3884891262d14862c.cfi_jt(ulong param_1,int64_t *****param_2)

{
    ulong *puVar1;
    ulong *puVar2;
    int64_t ***pppiVar3;
    int64_t ***pppiVar4;
    int64_t *****pppppiVar5;
    int64_t *****pppppiVar6;
    ulong in_tmp_ldXn;
    ulong uVar7;
    int64_t iVar8;
    int64_t ****ppppiVar9;
    int64_t *piVar10;
    int64_t iVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    int64_t *****pppppiVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t ****ppppiVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    int64_t *****pppppiStack_78;
    int64_t *****pppppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    if (param_2 == *param_2) {
        ppppiVar9 = param_2[2];
        ppppiVar15 = param_2[3];
        pppppiStack_78 = &pppppiStack_78;
        pppppiStack_70 = pppppiStack_78;
        if ((ppppiVar9 < ppppiVar15) &&
           (iVar11 = (*(ppppiVar9 * 0x40 + (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000) >> 0x3e) * 0x640,
           *(__warn_printk + iVar11) + *(_raw_spin_unlock_irqrestore + iVar11) <=
           (*(iVar11 + 0x8011628) & (*(iVar11 + 0x8011628) >> 0x3f ^ 0xffffffffffffffffU)))) {
            uVar7 = _raw_spin_lock_irqsave(param_2[8] + 0xa8);
            do {
                if (((ppppiVar9 >> 0x34 == 0) && (ppppiVar9 >> 0x24 == 0)) && (___bitmap_set != 0)) {
                    iVar11 = *(___bitmap_set + (ppppiVar9 >> 0x13 & 0x1ffffffffff8));
                    uVar13 = ppppiVar9 >> 0xf & 0x7f;
                    puVar1 = iVar11 + uVar13 * 0x20;
                    if (((iVar11 != 0 && puVar1 != NULL) && (uVar12 = *puVar1, (uVar12 >> 1 & 1) != 0)) &&
                       (((uVar12 >> 3 & 1) != 0 ||
                        ((**(iVar11 + uVar13 * 0x20 + 8) >> (ppppiVar9 >> 9 & 0x3f) & 1) != 0)))) {
                        puVar1 = (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000 + ppppiVar9 * 0x40;
                        if (puVar1 != NULL) {
                            if (((*puVar1 >> 0x10 & 1) == 0) && ((puVar1[1] & 1) == 0)) {
                                if ((ppppiVar9 & 0x3ff) == 0) {
                                    iVar11 = get_pfnblock_flags_mask
                                                       (puVar1,puVar1 + (_of_n_size_cells >> 0xc) * 8 + 0x40000000 >> 6
                                                        ,7);
                                    if (iVar11 == 5) {
                                        ppppiVar9 = ppppiVar9 + 0x3ff;
                                        goto code_r0x08004c00;
                                    }
                                    if ((0x1f < param_2[5]) || ((obj.has_pend_offline_req & 1) != 0)) break;
                                }
                                if ((*(puVar1 + 6) & 0xf0000080) == 0xf0000000) {
                                    pppppiStack_78 = &pppppiStack_78;
                                    pppppiStack_70 = &pppppiStack_78;
                                    iVar11 = isolate_and_split_free_page(puVar1,&pppppiStack_78);
                                    pppppiVar6 = pppppiStack_70;
                                    pppppiVar5 = pppppiStack_78;
                                    if (iVar11 == 0) {
                                        ppppiVar9 = param_2[2] + 0x3ffU & 0xfffffffffffffc00;
                                        break;
                                    }
                                    if (&pppppiStack_78 != pppppiStack_78) {
                                        pppppiVar14 = *param_2;
                                        pppppiStack_78[1] = param_2;
                                        *param_2 = pppppiVar5;
                                        *pppppiVar6 = pppppiVar14;
                                        pppppiVar14[1] = pppppiVar6;
                                    }
                                    ppppiVar9 = ppppiVar9 + iVar11 + -1;
                                    param_2[5] = param_2[5] + iVar11;
                                }
                            }
                            else {
                                puVar2 = puVar1;
                                if ((puVar1[1] & 1) != 0) {
                                    puVar2 = puVar1[1] - 1;
                                }
                                if ((*puVar2 >> 0x10 & 1) == 0) {
                                    uVar12 = 0;
                                }
                                else {
                                    uVar12 = *(puVar2 + 0x51);
                                }
                                ppppiVar9 = ppppiVar9 + (1 << (uVar12 & 0x1f)) + ~(puVar1 - puVar2 >> 6);
                            }
                        }
                    }
                }
code_r0x08004c00:
                ppppiVar9 = ppppiVar9 + 1;
            } while (ppppiVar9 < ppppiVar15);
            param_2[2] = ppppiVar9;
            _raw_spin_unlock_irqrestore(param_2[8] + 0xa8,uVar7);
        }
        if (param_2 == *param_2) {
            ppppiVar9 = NULL;
            goto code_r0x08004e08;
        }
    }
    ppppiVar15 = *param_2;
    ppppiVar9 = ppppiVar15 + -1;
    uVar13 = __list_del_entry_valid(ppppiVar15);
    if ((uVar13 & 1) != 0) {
        pppiVar3 = *ppppiVar15;
        pppiVar4 = ppppiVar15[1];
        pppiVar3[1] = pppiVar4;
        *pppiVar4 = pppiVar3;
    }
    *ppppiVar15 = 0xdead000000000100;
    ppppiVar15[1] = 0xdead000000000122;
    param_2[5] = param_2[5] + -1;
code_r0x08004e08:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return ppppiVar9;
    }
    auVar17 = __stack_chk_fail();
    piVar10 = auVar17._8_8_;
    iVar8 = auVar17._0_8_;
    *extraout_x18 = 0x8004e54;
    iVar16 = *piVar10;
    iVar11 = iVar8 + 8;
    ppppiVar9 = __list_add_valid(in_tmp_ldXn,iVar11,piVar10,iVar16);
    if ((ppppiVar9 & 1) != 0) {
        *(iVar16 + 8) = iVar11;
        *(iVar8 + 8) = iVar16;
        *(iVar8 + 0x10) = piVar10;
        *piVar10 = iVar11;
    }
    piVar10[5] = piVar10[5] + 1;
    return ppppiVar9;
}


// ===== sym.mem_offline_driver_probe @ 0x08002248 (size 3800) =====

//WARNING: Removing unreachable block (ram,0x0800234c)

uint64_t sym.mem_offline_driver_probe(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    code *pcVar8;
    code *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint32_t uVar13;
    code *pcVar14;
    uint64_t extraout_x8;
    int iVar15;
    uint32_t *puVar16;
    int iVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint64_t uVar20;
    uint32_t *puVar21;
    uint64_t uVar22;
    ulong *in_x18;
    code *unaff_x20;
    code *unaff_x21;
    code *unaff_x22;
    char *pcVar23;
    int iVar24;
    code *unaff_x23;
    ulong unaff_x30;
    uint32_t uStack_a0;
    uint uStack_9c;
    ulong uStack_98;
    ulong uStack_90;
    uint uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    if (_segment.ehdr != 0) {
        _printk(0x8000fa1);
        pcVar8 = NULL;
        goto code_r0x08002b58;
    }
    unaff_x20 = *(arg1 + 0x300);
    puVar6 = of_get_property(unaff_x20,"granule",0);
    pcVar23 = unaff_x22;
    if (puVar6 == NULL) {
        uVar12 = 0x80008e4;
        goto code_r0x08002b50;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
code_r0x08002a24:
        uVar12 = 0x800100d;
code_r0x08002b50:
        _printk(uVar12);
    }
    else {
        uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar13 = uVar2 >> 0x10;
        _segment.ehdr = CONCAT44(*0x8000004,uVar13 | uVar2 << 0x10);
        if ((uVar5 & uVar5 - 1) != 0) goto code_r0x08002a24;
        if ((uVar13 & 0xf80) == 0) {
            uVar13 = uVar13 * 0x100000;
            uVar5 = 0;
            if (uVar13 != 0) {
                uVar5 = 0x8000000 / uVar13;
            }
            if (uVar5 * uVar13 != 0x8000000) goto code_r0x08002a24;
        }
        iVar7 = of_find_property(unaff_x20,"mboxes",0);
        if (iVar7 == 0) {
            obj.is_rpm_controller = 0x1;
        }
        else {
            _obj.mailbox = arg1 + 0x10;
            *0x80001f8 = 1;
            *0x8000200 = 1000;
            *0x8000208 = 0;
            *0x8000228 = mbox_request_channel(obj.mailbox,0);
            if (0xfffffffffffff000 < *0x8000228) {
                if (*0x8000228 == 0xfffffffffffffdfb) {
                    pcVar8 = 0xfffffffffffffdfb;
                    goto code_r0x08002b58;
                }
                _printk(0x8001280,*0x8000228,*0x8000228);
                pcVar8 = _segment.ehdr;
                if (_segment.ehdr != 0) goto code_r0x08002b58;
            }
        }
        unaff_x20 = of_get_property;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        pcVar8 = of_find_node_by_name(_of_get_property,"memory");
        if (pcVar8 == NULL) {
            uVar12 = 0x800063d;
            goto code_r0x08002b50;
        }
        iVar4 = of_n_addr_cells(_of_get_property);
        uVar5 = of_n_size_cells(_of_get_property);
        unaff_x20 = uVar5;
        pcVar9 = of_find_property(pcVar8,0x8000f52,&uStack_80);
        if (pcVar9 == NULL) {
            uVar12 = 0x80009f6;
            unaff_x21 = pcVar8;
            goto code_r0x08002b50;
        }
        iVar15 = uVar5 + iVar4;
        iVar7 = *(pcVar9 + 0x10);
        iVar24 = 0;
        if (iVar15 != 0) {
            iVar24 = (uStack_80 >> 2) / iVar15;
        }
        uVar10 = memblock_end_of_DRAM();
        if (iVar24 == 0) {
            _segment.ehdr = NULL;
            unaff_x22 = pcVar9;
        }
        else {
            _segment.ehdr = NULL;
            uVar18 = 0;
            iVar17 = iVar24;
            do {
                if (iVar4 == 0) {
                    uVar20 = 0;
                    if (uVar5 != 0) goto code_r0x08002454;
code_r0x080023f8:
                    uVar22 = 0;
                }
                else {
                    iVar19 = 0;
                    uVar20 = 0;
                    do {
                        uVar13 = *(iVar7 + iVar19 * 4);
                        iVar19 = iVar19 + 1;
                        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                        uVar20 = uVar13 >> 0x10 | uVar13 << 0x10 | uVar20 << 0x20;
                    } while (iVar4 != iVar19);
                    if (uVar5 == 0) goto code_r0x080023f8;
code_r0x08002454:
                    uVar22 = 0;
                    iVar19 = iVar4 << 2;
                    uVar13 = uVar5;
                    do {
                        puVar6 = iVar7 + iVar19;
                        uVar13 = uVar13 - 1;
                        iVar19 = iVar19 + 4;
                        uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                        uVar22 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar22 << 0x20;
                    } while (uVar13 != 0);
                }
                iVar17 = iVar17 + -1;
                iVar19 = uVar22 + uVar20;
                if (uVar20 <= uVar18) {
                    uVar20 = uVar18;
                    iVar19 = _segment.ehdr;
                }
                _segment.ehdr = iVar19;
                iVar7 = iVar7 + iVar15 * 4;
                uVar18 = uVar20;
            } while (iVar17 != 0);
            iVar7 = *(pcVar9 + 0x10);
            do {
                if (iVar4 == 0) {
                    uVar18 = 0;
                    if (uVar5 == 0) goto code_r0x080024fc;
code_r0x080024c8:
                    uVar20 = 0;
                    iVar19 = iVar4 << 2;
                    uVar13 = uVar5;
                    do {
                        puVar6 = iVar7 + iVar19;
                        uVar13 = uVar13 - 1;
                        iVar19 = iVar19 + 4;
                        uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                        uVar20 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar20 << 0x20;
                    } while (uVar13 != 0);
                }
                else {
                    iVar19 = 0;
                    uVar18 = 0;
                    do {
                        uVar13 = *(iVar7 + iVar19 * 4);
                        iVar19 = iVar19 + 1;
                        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                        uVar18 = uVar13 >> 0x10 | uVar13 << 0x10 | uVar18 << 0x20;
                    } while (iVar4 != iVar19);
                    if (uVar5 != 0) goto code_r0x080024c8;
code_r0x080024fc:
                    uVar20 = 0;
                }
                iVar24 = iVar24 + -1;
                if (uVar10 < uVar20 + uVar18) {
                    uVar22 = uVar10;
                    if (uVar10 <= uVar18) {
                        uVar22 = uVar18;
                    }
                    __bitmap_set(obj.movable_bitmap,uVar22 - uVar10 >> 0x1b,(uVar20 + uVar18) - uVar22 >> 0x1b);
                }
                iVar7 = iVar7 + iVar15 * 4;
                unaff_x22 = obj.movable_bitmap;
            } while (iVar24 != 0);
        }
        uVar10 = memblock_end_of_DRAM();
        unaff_x20 = uVar10 >> 0x1b;
        unaff_x21 = _segment.ehdr - 1U >> 0x1b;
        uVar10 = memory_block_size_bytes();
        unaff_x23 = segment.ehdr;
        _segment.ehdr = unaff_x21;
        pcVar8 = memblock_end_of_DRAM();
        if (_segment.ehdr <= pcVar8) {
            _printk(0x8000b0a);
            pcVar8 = 0xffffffed;
            goto code_r0x08002b58;
        }
        uVar20 = memblock_end_of_DRAM();
        uVar18 = 0;
        if (uVar10 != 0) {
            uVar18 = uVar20 / uVar10;
        }
        if (uVar20 != uVar18 * uVar10) {
            uVar18 = memblock_end_of_DRAM();
            iVar4 = 0;
            if (uVar10 != 0) {
                iVar4 = uVar18 / uVar10;
            }
            _printk(0x8000713);
            _printk(0x8000ca8,_segment.ehdr,uVar10 + (iVar4 * uVar10 - uVar18) >> 10);
            _segment.ehdr = _segment.ehdr + 1;
        }
        uVar18 = 0;
        if (uVar10 != 0) {
            uVar18 = _segment.ehdr / uVar10;
        }
        uVar10 = _segment.ehdr - uVar18 * uVar10;
        if (uVar10 != 0) {
            _printk(0x8000528);
            _printk(0x800076f,_segment.ehdr,uVar10 >> 10 & 0x3fffff);
            _segment.ehdr = _segment.ehdr + -1;
        }
        bVar3 = false;
        unaff_x20 = obj.movable_bitmap;
        pcVar23 = 0x8000c38;
        pcVar9 = _segment.ehdr;
        pcVar14 = _segment.ehdr;
        pcVar8 = _segment.ehdr;
        _segment.ehdr = _segment.ehdr << 0x1b;
code_r0x080025dc:
        do {
            if ((*(obj.movable_bitmap + (pcVar8 - pcVar14 >> 6 & 0x3ffffff) * 8) >> (pcVar8 - pcVar14 & 0x3fU) & 1) != 0
               ) {
                iVar7 = (_segment.ehdr & 0xffffffff) * 0x8000000;
                pcVar14 = 0x80011a2;
                if (((iVar7 - 1U & pcVar8 << 0x1b) != 0) ||
                   (iVar4 = add_memory(0,pcVar8 << 0x1b,iVar7,0), pcVar14 = pcVar23, pcVar9 = _segment.ehdr,
                   iVar4 != 0)) {
                    _printk(pcVar14,pcVar8);
                    pcVar8 = pcVar8 + (_segment.ehdr & 0xffffffff);
                    if (_segment.ehdr < pcVar8) goto code_r0x08002a30;
                    bVar3 = true;
                    pcVar9 = _segment.ehdr;
                    pcVar14 = _segment.ehdr;
                    goto code_r0x080025dc;
                }
            }
            pcVar8 = pcVar8 + (_segment.ehdr & 0xffffffff);
            pcVar14 = _segment.ehdr;
        } while (pcVar8 <= pcVar9);
        if (bVar3) {
code_r0x08002a30:
            _printk(0x8000ee9);
        }
        unaff_x21 = of_get_property;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        iVar7 = of_find_node_by_name(_of_get_property,"ddr-regions");
        if (iVar7 == 0) {
            uVar12 = 0x8000d77;
            goto code_r0x08002b50;
        }
        uStack_9c = 0;
        uStack_70 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        snprintf(&uStack_80,0x14,"region%d",0);
        iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
        if (iVar19 != 0) {
            unaff_x20 = 0x1;
            snprintf(&uStack_80,0x14,"region%d",1);
            iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
            if (iVar19 != 0) {
                unaff_x20 = 0x2;
                snprintf(&uStack_80,0x14,"region%d",2);
                iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                if (iVar19 != 0) {
                    unaff_x20 = 0x3;
                    snprintf(&uStack_80,0x14,"region%d",3);
                    iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                    if (iVar19 != 0) {
                        unaff_x20 = 0x4;
                        snprintf(&uStack_80,0x14,"region%d",4);
                        iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                        if (iVar19 != 0) {
                            unaff_x20 = 0x5;
                            snprintf(&uStack_80,0x14,"region%d",5);
                            iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                            if (iVar19 != 0) {
                                unaff_x20 = 0x6;
                                snprintf(&uStack_80,0x14,"region%d",6);
                                iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                                if (iVar19 != 0) {
                                    unaff_x20 = 0x7;
                                    snprintf(&uStack_80,0x14,"region%d",7);
                                    iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                                    if (iVar19 != 0) {
                                        unaff_x20 = 0x8;
                                        snprintf(&uStack_80,0x14,"region%d",8);
                                        iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                                        if (iVar19 != 0) {
                                            snprintf(&uStack_80,0x14,"region%d",9);
                                            iVar19 = of_find_property(iVar7,&uStack_80,&uStack_9c);
                                            uVar5 = 9;
                                            if (iVar19 != 0) {
                                                uVar5 = 10;
                                            }
                                            unaff_x20 = uVar5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            _segment.ehdr = CONCAT44(*0x8000004,unaff_x20);
            _segment.ehdr = __kmalloc(unaff_x20 * 0x28,0xdc0);
            if (_segment.ehdr != NULL) {
                uVar5 = of_n_addr_cells(_of_get_property);
                if (_segment.ehdr < 1) {
code_r0x08002a60:
                    uVar10 = 0;
                }
                else {
                    unaff_x20 = uVar5;
                    iVar19 = uVar5;
                    pcVar23 = "region%d";
                    pcVar8 = NULL;
                    do {
                        snprintf(&uStack_98,0x14,"region%d",pcVar8 & 0xffffffff);
                        iVar11 = of_find_property(iVar7,&uStack_98,&uStack_a0);
                        pcVar9 = _segment.ehdr;
                        unaff_x21 = pcVar8;
                        if ((iVar11 == 0) || ((uStack_a0 & 0xfffffffc) != 0x28)) goto code_r0x08002b54;
                        if (uVar5 == 0) {
                            uVar10 = 0;
                            pcVar14 = _segment.ehdr + pcVar8 * 0x28;
                            *(pcVar14 + 0x20) = 0;
                            *(pcVar14 + 0x18) = 0;
                            *pcVar14 = 0;
                            *(pcVar14 + 8) = 0;
                        }
                        else {
                            puVar16 = *(iVar11 + 0x10);
                            uVar10 = 0;
                            pcVar14 = unaff_x20;
                            puVar6 = puVar16;
                            do {
                                uVar2 = pcVar14 - 1;
                                pcVar14 = uVar2;
                                uVar13 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                                uVar10 = uVar13 >> 0x10 | uVar13 << 0x10 | uVar10 << 0x20;
                                puVar6 = puVar6 + 1;
                            } while (uVar2 != 0);
                            puVar6 = puVar16 + iVar19;
                            uVar18 = 0;
                            *(_segment.ehdr + pcVar8 * 0x28) = uVar10;
                            puVar21 = puVar6;
                            uVar13 = uVar5;
                            do {
                                uVar13 = uVar13 - 1;
                                uVar2 = (*puVar21 & 0xff00ff00) >> 8 | (*puVar21 & 0xff00ff) << 8;
                                uVar18 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar18 << 0x20;
                                puVar21 = puVar21 + 1;
                            } while (uVar13 != 0);
                            uVar20 = 0;
                            *(pcVar9 + (pcVar8 * 5 + 1) * 8) = uVar18;
                            puVar21 = puVar6 + iVar19;
                            uVar13 = uVar5;
                            do {
                                uVar13 = uVar13 - 1;
                                uVar2 = (*puVar21 & 0xff00ff00) >> 8 | (*puVar21 & 0xff00ff) << 8;
                                uVar20 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar20 << 0x20;
                                puVar21 = puVar21 + 1;
                            } while (uVar13 != 0);
                            uVar10 = 0;
                            *(pcVar9 + (pcVar8 * 5 + 4) * 8) = uVar20;
                            uVar13 = (puVar16[iVar19 * 3 + (uVar5 - 1)] & 0xff00ff00) >> 8 |
                                     (puVar16[iVar19 * 3 + (uVar5 - 1)] & 0xff00ff) << 8;
                            *(pcVar9 + (pcVar8 * 5 + 3) * 8) = uVar13 >> 0x10 | uVar13 << 0x10;
                            puVar6 = puVar6 + iVar19 + iVar19 * 2;
                            uVar13 = uVar5;
                            do {
                                uVar13 = uVar13 - 1;
                                uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                                uVar10 = uVar2 >> 0x10 | uVar2 << 0x10 | uVar10 << 0x20;
                                puVar6 = puVar6 + 1;
                            } while (uVar13 != 0);
                        }
                        iVar4 = _segment.ehdr;
                        pcVar14 = _segment.ehdr & 0xffffffff;
                        unaff_x21 = pcVar8 + 1;
                        *(pcVar9 + (pcVar8 * 5 + 2) * 8) = uVar10;
                        pcVar8 = unaff_x21;
                    } while (unaff_x21 < pcVar14);
                    if (iVar4 < 1) goto code_r0x08002a60;
                    _printk(0x8000921,0,*pcVar9,*(pcVar9 + 8),*(pcVar9 + 0x10),*(pcVar9 + 0x20),*(pcVar9 + 0x18));
                    if (1 < _segment.ehdr) {
                        unaff_x21 = NULL;
                        uVar10 = 1;
                        do {
                            pcVar8 = _segment.ehdr + unaff_x21;
                            _printk(0x8000921,uVar10 & 0xffffffff,*(pcVar8 + 0x28),*(pcVar8 + 0x30),*(pcVar8 + 0x38)
                                    ,*(pcVar8 + 0x48),*(pcVar8 + 0x40));
                            uVar10 = uVar10 + 1;
                            unaff_x21 = unaff_x21 + 0x28;
                            pcVar23 = segment.ehdr;
                        } while (uVar10 < (_segment.ehdr & 0xffffffff));
                    }
                    if (_segment.ehdr < 1) goto code_r0x08002a60;
                    uVar10 = 0;
                    uVar18 = 0;
                    do {
                        uVar18 = uVar18 & 0xff;
                        pcVar8 = _segment.ehdr + uVar18 * 0x28;
                        if (*(pcVar8 + 0x10) != 0) {
                            pcVar9 = *(pcVar8 + 8) + *pcVar8;
                            pcVar14 = *(_segment.ehdr + (uVar18 * 5 + 4) * 8) + *pcVar8;
                            while ((pcVar14 < pcVar9 && (pcVar14 + *(pcVar8 + 0x10) * 0x100000 <= pcVar9))) {
                                uVar5 = uVar10;
                                if (_segment.ehdr <= pcVar14) {
                                    uVar5 = uVar5 + 1;
                                }
                                uVar10 = uVar5;
                                pcVar14 = pcVar14 + *(pcVar8 + 0x10) * 0x100000;
                            }
                        }
                        uVar5 = uVar18 + 1;
                        uVar18 = uVar5;
                    } while ((uVar5 & 0xff) < _segment.ehdr);
                }
                unaff_x20 = segment.ehdr;
                _segment.ehdr = CONCAT44(*0x8000004,uVar10);
                if (uVar10 >> 0x3b != 0) {
                    _segment.ehdr = NULL;
                    pcVar8 = 0xfffffff4;
                    unaff_x22 = pcVar23;
                    goto code_r0x08002b58;
                }
                pcVar8 = __kmalloc(-(uVar10 >> 0x1f) & 0xffffffe000000000 | uVar10 << 5,0xdc0);
                _segment.ehdr = pcVar8;
                if (pcVar8 != NULL) {
                    _segment.ehdr = pcVar8;
                    pcVar9 = pcVar8;
                    if (0 < _segment.ehdr) {
                        if (_segment.ehdr == 1) {
                            uVar18 = 0;
                        }
                        else {
                            uVar18 = pcVar8 & 0xfffffffe;
                            pcVar9 = pcVar8 + 0x20;
                            uVar10 = uVar18;
                            do {
                                uVar10 = uVar10 - 2;
                                *(pcVar9 + -0x20) = 0xffffffffffffffff;
                                *pcVar9 = 0xffffffffffffffff;
                                pcVar9 = pcVar9 + 0x40;
                            } while (uVar10 != 0);
                            pcVar9 = _segment.ehdr;
                            if (uVar18 == (pcVar8 & 0xffffffff)) goto code_r0x08002d2c;
                        }
                        iVar7 = (pcVar8 & 0xffffffff) - uVar18;
                        pcVar8 = pcVar8 + uVar18 * 0x20;
                        do {
                            iVar7 = iVar7 + -1;
                            *pcVar8 = 0xffffffffffffffff;
                            pcVar8 = pcVar8 + 0x20;
                            pcVar9 = _segment.ehdr;
                        } while (iVar7 != 0);
                    }
code_r0x08002d2c:
                    _segment.ehdr = pcVar9;
                    if (0 < _segment.ehdr) {
                        iVar7 = 0;
                        unaff_x21 = NULL;
                        iVar19 = *(_segment.ehdr + 0x10);
                        uVar10 = iVar19 << 0x14;
                        iVar4 = _segment.ehdr;
                        do {
                            uVar18 = iVar19 * 0x100000;
                            if (uVar18 != 0) {
                                if (uVar10 != uVar18) {
                                    obj.differing_segment_sizes = 0x1;
                                }
                                pcVar9 = _segment.ehdr + (unaff_x21 & 0xff) * 0x28;
                                pcVar8 = *(pcVar9 + 8) + *pcVar9;
                                pcVar9 = *(pcVar9 + 0x20) + *pcVar9;
                                if (pcVar9 < pcVar8) {
                                    do {
                                        pcVar14 = pcVar9 + uVar18;
                                        if (pcVar8 < pcVar14) break;
                                        if (_segment.ehdr <= pcVar9) {
                                            uVar20 = memory_block_size_bytes();
                                            if (uVar20 < uVar18) {
                                                uVar22 = memory_block_size_bytes();
                                                uVar20 = 0;
                                                if (uVar22 != 0) {
                                                    uVar20 = uVar18 / uVar22;
                                                }
                                            }
                                            else {
                                                uVar20 = 1;
                                            }
                                            pcVar1 = _segment.ehdr + iVar7 * 0x20;
                                            iVar7 = iVar7 + 1;
                                            *pcVar1 = pcVar9;
                                            *(pcVar1 + 8) = uVar18;
                                            *(pcVar1 + 0x10) = uVar20;
                                            *(pcVar1 + 0x18) = 0xffffffffffffffff >> (-uVar20 & 0x3f);
                                        }
                                        pcVar9 = pcVar14;
                                    } while (pcVar14 < pcVar8);
                                    iVar4 = _segment.ehdr;
                                }
                            }
                            uVar5 = unaff_x21 + 1;
                            unaff_x21 = uVar5;
                            if (iVar4 <= (uVar5 & 0xff)) break;
                            iVar19 = *(_segment.ehdr + ((unaff_x21 & 0xff) * 5 + 2) * 8);
                        } while( true );
                    }
                    unaff_x20 = segment.ehdr;
                    if (obj.differing_segment_sizes == 0x1) {
                        _printk(0x80007fc);
                    }
                    unaff_x22 = segment.ehdr;
                    pcVar23 = unaff_x22;
                    if (0 < _segment.ehdr) {
                        uVar10 = 0;
                        pcVar8 = _segment.ehdr + 8;
                        do {
                            uVar18 = *pcVar8;
                            if ((uVar18 & uVar18 - 1) != 0) {
                                uVar12 = 0x8000df4;
code_r0x08002f6c:
                                _printk(uVar12,uVar10,uVar18);
                                goto code_r0x08002b54;
                            }
                            if (uVar18 >> 0x1b == 0) {
                                uVar5 = 0;
                                uVar13 = uVar18;
                                if (uVar13 != 0) {
                                    uVar5 = 0x8000000 / uVar13;
                                }
                                if (uVar5 * uVar13 != 0x8000000) goto code_r0x08002ee8;
                            }
                            else if ((uVar18 != 0x8000000) && ((uVar18 & 0x7ffffff) != 0)) {
code_r0x08002ee8:
                                uVar12 = 0x8001201;
                                goto code_r0x08002f6c;
                            }
                            uVar10 = uVar10 + 1;
                            pcVar8 = pcVar8 + 0x20;
                        } while ((_segment.ehdr & 0xffffffff) != uVar10);
                    }
                    _printk(0x80007c9,_segment.ehdr & 0xffffffff);
                    pcVar8 = NULL;
                    if ((_segment.ehdr & 0xffffffff) != 0) {
                        pcVar8 = 1 / (_segment.ehdr & 0xffffffff);
                    }
                    iVar4 = pcVar8;
                    _segment.ehdr = __kmalloc(iVar4 * 0x90,0xdc0);
                    unaff_x20 = segment.ehdr;
                    if (_segment.ehdr != NULL) {
                        uVar12 = ktime_get();
                        pcVar9 = _segment.ehdr;
                        if (iVar4 != 0) {
                            if (0x80000000 < iVar4 + 0x7fffffffU) {
                                iVar15 = 1;
                                do {
                                    bVar3 = iVar15 != -1;
                                    *(pcVar9 + (iVar15 * 9 + 8) * 8) = uVar12;
                                    *(pcVar9 + ((iVar15 + -1) * 9 + 8) * 8) = uVar12;
                                    iVar15 = iVar15 + 2;
                                } while (bVar3);
                                if (iVar4 == 0) goto code_r0x08002fcc;
                            }
                            iVar15 = 0;
                            do {
                                iVar7 = iVar15;
                                iVar15 = iVar15 + 1;
                                *(pcVar9 + (iVar7 * 9 + 8) * 8) = uVar12;
                            } while (iVar15 != iVar4);
                        }
code_r0x08002fcc:
                        pcVar9 = __kmalloc(pcVar8 << 2,0xdc0);
                        unaff_x21 = segment.ehdr;
                        _segment.ehdr = pcVar9;
                        if (pcVar9 == NULL) {
                            pcVar8 = 0xfffffff4;
                            goto code_r0x08003070;
                        }
                        if (iVar4 == 0) goto code_r0x0800305c;
                        if (iVar4 + 0x7fffffffU < 0x80000001) {
                            uVar10 = 0;
                            goto code_r0x0800304c;
                        }
                        uVar5 = 0;
                        iVar4 = 1;
                        do {
                            *(pcVar9 + iVar4 * 4) = 0;
                            bVar3 = iVar4 == -1;
                            *(pcVar9 + (iVar4 + -1) * 4) = 0;
                            iVar4 = iVar4 + 2;
                            if (bVar3) goto code_r0x08003054;
                        } while( true );
                    }
                }
            }
            pcVar8 = 0xfffffff4;
            unaff_x22 = pcVar23;
            goto code_r0x08002b58;
        }
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        _printk(0x8000bdb,0);
    }
code_r0x08002b54:
    pcVar8 = 0xffffffea;
    unaff_x22 = pcVar23;
code_r0x08002b58:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return pcVar8 & 0xffffffff;
    }
    pcVar9 = __stack_chk_fail();
    uVar10 = extraout_x8;
code_r0x0800304c:
    do {
        *(pcVar9 + uVar10 * 4) = 0;
        uVar5 = uVar10 + 1;
code_r0x08003054:
        uVar10 = uVar5;
    } while (uVar5 != pcVar8);
code_r0x0800305c:
    iVar4 = sym.mem_sysfs_init();
    if (iVar4 == 0) {
        iVar4 = register_memory_notifier(reloc.mem_event_callback.912f178c447211a3884891262d14862c.cfi_jt);
        if (iVar4 == 0) goto code_r0x0800308c;
        pcVar8 = 0xffffffed;
        uVar12 = 0x8000e53;
        goto code_r0x080030ec;
    }
    pcVar8 = 0xffffffed;
    goto code_r0x08003068;
code_r0x0800308c:
    _printk(0x8000da7,*unaff_x23,*unaff_x22);
    if (reloc.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt != 0x0) {
        _printk(0x8000ff1);
    }
    _segment.ehdr = alloc_workqueue("reverse_migrate_wq",6,0);
    pcVar8 = NULL;
    if (_segment.ehdr == NULL) {
        pcVar8 = 0xfffffff4;
        uVar12 = 0x8000d16;
code_r0x080030ec:
        _printk(uVar12);
        unaff_x22 = segment.ehdr;
        sysfs_remove_group(_segment.ehdr,obj.mem_attr_group);
        kobject_put(_segment.ehdr);
code_r0x08003068:
        kfree(*unaff_x21);
code_r0x08003070:
        kfree(*unaff_x20);
    }
    goto code_r0x08002b58;
}


// ===== sym.mem_sysfs_init @ 0x08003120 (size 632) =====

//WARNING: Removing unreachable block (ram,0x08003170)
//WARNING: Removing unreachable block (ram,0x080032c0)
//WARNING: Removing unreachable block (ram,0x08003190)
//WARNING: Removing unreachable block (ram,0x080031a0)
//WARNING: Removing unreachable block (ram,0x080031a8)
//WARNING: Removing unreachable block (ram,0x080032fc)
//WARNING: Removing unreachable block (ram,0x08003328)
//WARNING: Removing unreachable block (ram,0x08003344)
//WARNING: Removing unreachable block (ram,0x08003370)
//WARNING: Removing unreachable block (ram,0x08003354)
//WARNING: Removing unreachable block (ram,0x08003364)
//WARNING: Removing unreachable block (ram,0x08003314)
//WARNING: Removing unreachable block (ram,0x080031d8)
//WARNING: Removing unreachable block (ram,0x080031e8)
//WARNING: Removing unreachable block (ram,0x0800337c)
//WARNING: Removing unreachable block (ram,0x0800321c)
//WARNING: Removing unreachable block (ram,0x08003240)
//WARNING: Removing unreachable block (ram,0x0800324c)
//WARNING: Removing unreachable block (ram,0x08003278)
//WARNING: Removing unreachable block (ram,0x0800329c)
//WARNING: Removing unreachable block (ram,0x080032ac)
//WARNING: Removing unreachable block (ram,0x08003268)
//WARNING: Removing unreachable block (ram,0x080032b8)
//WARNING: Removing unreachable block (ram,0x08003384)
//WARNING: Removing unreachable block (ram,0x0800338c)

int64_t sym.mem_sysfs_init(ulong param_1,ulong param_2,ulong param_3)

{
    uint64_t uVar1;
    int iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_c8;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_58) {
        return 0xffffffea;
    }
    puVar3 = __stack_chk_fail(0xffffffea);
    pcVar6 = &iStack_110;
    *extraout_x18 = sym.show_block_allocated_bytes;
    pcStack_f8 = sym.show_block_allocated_bytes;
    iVar12 = sp_el0;
    iStack_108 = *(iVar12 + 0x5e0);
    iStack_110 = 0;
    puStack_100 = &stack0xffffffffffffffb0;
    uStack_c8 = 0x8000000;
    iVar2 = sscanf(*puVar3,"memory%lu",&iStack_110);
    iVar12 = iStack_110;
    if (iVar2 == 1) {
        uVar4 = memory_block_size_bytes();
        uVar5 = tpidr_el1;
        if ((_of_find_node_by_name == 0) || (_of_find_node_by_name == 0)) {
            iVar7 = 0;
        }
        else {
            iVar7 = 0;
            uVar11 = iVar12 * 0x8000;
            if ((uVar11 < _of_find_node_by_name * 2) &&
               (uVar1 = uVar11 + (uVar4 >> 0xc), _of_find_node_by_name < uVar1)) {
                uVar5 = _raw_spin_lock_irqsave(contig_page_data);
                iVar12 = 0;
                if (uVar11 < uVar1) {
                    iVar12 = 0;
code_r0x08003488:
                    puVar8 = (_of_n_size_cells >> 0xc) * -0x40 + -0x1ffffffd0 + uVar11 * 0x40;
                    do {
                        if ((((uVar11 >> 0x34 == 0) && (uVar11 >> 0x24 == 0)) && (___bitmap_set != 0)) &&
                           (iVar7 = *(___bitmap_set + (uVar11 >> 0x13 & 0x1ffffffffff8)), iVar7 != 0)) {
                            uVar9 = uVar11 >> 0xf & 0x7f;
                            puVar3 = iVar7 + uVar9 * 0x20;
                            if ((((puVar3 != NULL) && (uVar10 = *puVar3, (uVar10 >> 1 & 1) != 0)) &&
                                (((uVar10 >> 3 & 1) != 0 ||
                                 ((**(iVar7 + uVar9 * 0x20 + 8) >> (uVar11 >> 9 & 0x3f) & 1) != 0)))) &&
                               ((*puVar8 & 0xf0000080) == 0xf0000000)) goto code_r0x08003508;
                        }
                        uVar11 = uVar11 + 1;
                        puVar8 = puVar8 + 0x10;
                        if (uVar1 <= uVar11) break;
                    } while( true );
                }
code_r0x08003524:
                _raw_spin_unlock_irqrestore(contig_page_data,uVar5);
                iVar7 = uVar4 + iVar12 * -0x1000;
            }
        }
        pcVar6 = "%lu\n";
        iVar2 = scnprintf(param_3,100,"%lu\n",iVar7);
        iVar12 = iVar2;
    }
    else {
        _printk(0x8000880,iVar2);
        iVar12 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_108) {
        return iVar12;
    }
    __stack_chk_fail(iVar12);
    uVar5 = tpidr_el2;
    *extraout_x18_00 = 0x80035a4;
    iVar2 = scnprintf(pcVar6,0x1000,"%lu\n",obj.differing_segment_sizes);
    return iVar2;
code_r0x08003508:
    iVar7 = 1 << (puVar8[-2] & 0x1f);
    iVar12 = iVar12 + iVar7;
    uVar11 = iVar7 + uVar11;
    if (uVar1 <= uVar11) goto code_r0x08003524;
    goto code_r0x08003488;
}


// ===== sym.show_block_allocated_bytes @ 0x08003398 (size 528) =====

int64_t sym.show_block_allocated_bytes(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    int64_t iStack_50;
    int64_t iStack_48;
    
    pcVar6 = &stack0xffffffffffffffb0;
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    iStack_50 = 0;
    iVar3 = sscanf(*arg1,"memory%lu",&stack0xffffffffffffffb0);
    iVar12 = iStack_50;
    if (iVar3 == 1) {
        uVar4 = memory_block_size_bytes();
        uVar5 = tpidr_el1;
        if ((_of_find_node_by_name == 0) || (_of_find_node_by_name == 0)) {
            iVar7 = 0;
        }
        else {
            iVar7 = 0;
            uVar11 = iVar12 * 0x8000;
            if ((uVar11 < _of_find_node_by_name * 2) &&
               (uVar1 = uVar11 + (uVar4 >> 0xc), _of_find_node_by_name < uVar1)) {
                uVar5 = _raw_spin_lock_irqsave(contig_page_data);
                iVar12 = 0;
                if (uVar11 < uVar1) {
                    iVar12 = 0;
code_r0x08003488:
                    puVar8 = (_of_n_size_cells >> 0xc) * -0x40 + -0x1ffffffd0 + uVar11 * 0x40;
                    do {
                        if ((((uVar11 >> 0x34 == 0) && (uVar11 >> 0x24 == 0)) && (___bitmap_set != 0)) &&
                           (iVar7 = *(___bitmap_set + (uVar11 >> 0x13 & 0x1ffffffffff8)), iVar7 != 0)) {
                            uVar9 = uVar11 >> 0xf & 0x7f;
                            puVar2 = iVar7 + uVar9 * 0x20;
                            if ((((puVar2 != NULL) && (uVar10 = *puVar2, (uVar10 >> 1 & 1) != 0)) &&
                                (((uVar10 >> 3 & 1) != 0 ||
                                 ((**(iVar7 + uVar9 * 0x20 + 8) >> (uVar11 >> 9 & 0x3f) & 1) != 0)))) &&
                               ((*puVar8 & 0xf0000080) == 0xf0000000)) goto code_r0x08003508;
                        }
                        uVar11 = uVar11 + 1;
                        puVar8 = puVar8 + 0x10;
                        if (uVar1 <= uVar11) break;
                    } while( true );
                }
code_r0x08003524:
                _raw_spin_unlock_irqrestore(contig_page_data,uVar5);
                iVar7 = uVar4 + iVar12 * -0x1000;
            }
        }
        pcVar6 = "%lu\n";
        iVar3 = scnprintf(arg2,100,"%lu\n",iVar7);
        iVar12 = iVar3;
    }
    else {
        _printk(0x8000880,iVar3);
        iVar12 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        __stack_chk_fail(iVar12);
        uVar5 = tpidr_el2;
        *extraout_x18 = 0x80035a4;
        iVar3 = scnprintf(pcVar6,0x1000,"%lu\n",obj.differing_segment_sizes);
        return iVar3;
    }
    return iVar12;
code_r0x08003508:
    iVar7 = 1 << (puVar8[-2] & 0x1f);
    iVar12 = iVar12 + iVar7;
    uVar11 = iVar7 + uVar11;
    if (uVar1 <= uVar11) goto code_r0x08003524;
    goto code_r0x08003488;
}


// ===== sym.show_differing_seg_sizes @ 0x080035a8 (size 64) =====

int64_t sym.show_differing_seg_sizes(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%lu\n",obj.differing_segment_sizes);
    return iVar1;
}


// ===== sym.show_num_segments @ 0x080035e8 (size 64) =====

int64_t sym.show_num_segments(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%lu\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.show_seg_memblk_start @ 0x08003628 (size 196) =====

int64_t sym.show_seg_memblk_start(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    int64_t extraout_x1;
    char *pcVar9;
    char *pcVar10;
    char *arg1_00;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar12;
    ulong unaff_x30;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    char *pcStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar9 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iStack_30 = 0;
    iVar5 = sscanf(*arg1,"segment%lu");
    if (iVar5 == 1) {
        pcVar9 = "%lu\n";
        iVar5 = scnprintf(arg2,100,"%lu\n",(*(_segment.ehdr + iStack_30 * 0x20) >> 0xc) >> 0xf);
        iVar6 = iVar5;
    }
    else {
        _printk(0x8000981,iVar5);
        iVar6 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return iVar6;
    }
    puVar7 = __stack_chk_fail(iVar6);
    pcVar10 = &iStack_60;
    *extraout_x18 = sym.show_num_memblks;
    pcStack_48 = sym.show_num_memblks;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    iStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg2;
    iVar5 = sscanf(*puVar7,"segment%lu");
    if (iVar5 == 1) {
        pcVar10 = "%lu\n";
        iVar5 = scnprintf(pcVar9,100,"%lu\n",*(_segment.ehdr + iStack_60 * 0x20 + 0x10));
        iVar6 = iVar5;
    }
    else {
        _printk(0x80012d2,iVar5);
        iVar6 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        puVar7 = __stack_chk_fail(iVar6);
        arg1_00 = &uStack_90;
        *extraout_x18_00 = sym.show_seg_size;
        pcStack_78 = sym.show_seg_size;
        iVar6 = sp_el0;
        iStack_88 = *(iVar6 + 0x5e0);
        uStack_90 = 0;
        ppuStack_80 = &puStack_50;
        pcStack_70 = pcVar9;
        iVar5 = sscanf(*puVar7,"segment%lu");
        if (iVar5 == 1) {
            arg1_00 = "%lu\n";
            iVar5 = scnprintf(pcVar10,100,"%lu\n",*(_segment.ehdr + uStack_90 * 0x20 + 8));
            iVar6 = iVar5;
        }
        else {
            _printk(0x8000b6c,iVar5);
            iVar6 = 0;
        }
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_88) {
            return iVar6;
        }
        __stack_chk_fail(iVar6);
        *extraout_x18_01 = sym.mem_event_callback;
        uVar11 = *arg1_00;
        if (((uVar11 & 0x7fff) != 0) ||
           (uVar1 = *(arg1_00 + 8) + uVar11, (uVar1 + 0x7fff & 0xffffffffffff8000) != uVar1)) {
            __warn_printk("mem_event_callback");
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x80039e4);
            (*pcVar4)();
        }
        uVar12 = uVar11 >> 0xf;
        if ((_segment.ehdr < uVar12) || (uVar12 < _segment.ehdr)) {
            if ((extraout_x1 == 4) || (extraout_x1 == 1)) {
                pcVar9 = "Onlined";
                if (extraout_x1 != 1) {
                    pcVar9 = "Offlined";
                }
                _printk(0x80010fb,pcVar9,uVar12);
            }
        }
        else if (extraout_x1 - 1U < 0x10) {
            iVar6 = uVar11 << 0xc;
            switch(extraout_x1) {
            case 1:
                iVar8 = ktime_get();
                iVar8 = iVar8 - _segment.ehdr;
                sym.record_stat(uVar12,(iVar8 / 1000 + (iVar8 >> 0x3f)) -
                                        (SUB164(SEXT816(iVar8) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),0);
                _segment.ehdr = 0;
                sym.set_memblk_bitmap_online(iVar6);
                _printk(0x800103e,uVar12);
                sym.get_segment_addr_to_idx(iVar6);
                uVar11 = memory_block_size_bytes();
                Hint_Prefetch(0x8011084,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        __totalram_pages = __totalram_pages - (uVar11 >> 0xc);
                    }
                } while (cVar2 != '\0');
                break;
            case 2:
                uVar11 = 0;
                if ((_segment.ehdr & 0xffffffff) != 0) {
                    uVar11 = ((uVar12 - _segment.ehdr) + 1) / (_segment.ehdr & 0xffffffff);
                }
                iVar6 = _segment.ehdr + uVar11 * 0x48;
                obj.has_pend_offline_req = 0x1;
                *(iVar6 + 8) = *(iVar6 + 8) + 1;
                cancel_work_sync(obj.fill_movable_zone_work);
                _segment.ehdr = ktime_get();
                break;
            case 4:
                sym.mem_change_refresh_state(arg1_00,1);
                iVar8 = ktime_get();
                iVar8 = iVar8 - _segment.ehdr;
                sym.record_stat(uVar12,(iVar8 / 1000 + (iVar8 >> 0x3f)) -
                                        (SUB164(SEXT816(iVar8) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),1);
                _segment.ehdr = 0;
                obj.has_pend_offline_req = 0x0;
                sym.set_memblk_bitmap_offline(iVar6);
                _printk(0x8000a27,uVar12);
                sym.get_segment_addr_to_idx(iVar6);
                uVar11 = memory_block_size_bytes();
                Hint_Prefetch(0x8011084,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        __totalram_pages = __totalram_pages + (uVar11 >> 0xc);
                    }
                } while (cVar2 != '\0');
                break;
            case 8:
                uVar11 = 0;
                if ((_segment.ehdr & 0xffffffff) != 0) {
                    uVar11 = (uVar12 - _segment.ehdr) / (_segment.ehdr & 0xffffffff);
                }
                iVar6 = _segment.ehdr + uVar11 * 0x48;
                *(iVar6 + 8) = *(iVar6 + 8) + 1;
                _segment.ehdr = ktime_get();
                iVar5 = sym.mem_change_refresh_state(arg1_00,0);
                if (iVar5 != 0) {
                    return 0x8002;
                }
                break;
            case 0x10:
                _printk(0x8000f5e,iVar6,uVar1 * 0x1000);
                sym.mem_change_refresh_state(arg1_00,1);
            }
        }
        return 1;
    }
    return iVar6;
}


// ===== sym.show_num_memblks @ 0x080036ec (size 188) =====

int64_t sym.show_num_memblks(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    int64_t extraout_x1;
    char *pcVar9;
    char *arg1_00;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar11;
    ulong unaff_x30;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar9 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iStack_30 = 0;
    iVar5 = sscanf(*arg1,"segment%lu");
    if (iVar5 == 1) {
        pcVar9 = "%lu\n";
        iVar5 = scnprintf(arg2,100,"%lu\n",*(_segment.ehdr + iStack_30 * 0x20 + 0x10));
        iVar6 = iVar5;
    }
    else {
        _printk(0x80012d2,iVar5);
        iVar6 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return iVar6;
    }
    puVar7 = __stack_chk_fail(iVar6);
    arg1_00 = &uStack_60;
    *extraout_x18 = sym.show_seg_size;
    pcStack_48 = sym.show_seg_size;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg2;
    iVar5 = sscanf(*puVar7,"segment%lu");
    if (iVar5 == 1) {
        arg1_00 = "%lu\n";
        iVar5 = scnprintf(pcVar9,100,"%lu\n",*(_segment.ehdr + uStack_60 * 0x20 + 8));
        iVar6 = iVar5;
    }
    else {
        _printk(0x8000b6c,iVar5);
        iVar6 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        __stack_chk_fail(iVar6);
        *extraout_x18_00 = sym.mem_event_callback;
        uVar10 = *arg1_00;
        if (((uVar10 & 0x7fff) != 0) ||
           (uVar1 = *(arg1_00 + 8) + uVar10, (uVar1 + 0x7fff & 0xffffffffffff8000) != uVar1)) {
            __warn_printk("mem_event_callback");
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x80039e4);
            (*pcVar4)();
        }
        uVar11 = uVar10 >> 0xf;
        if ((_segment.ehdr < uVar11) || (uVar11 < _segment.ehdr)) {
            if ((extraout_x1 == 4) || (extraout_x1 == 1)) {
                pcVar9 = "Onlined";
                if (extraout_x1 != 1) {
                    pcVar9 = "Offlined";
                }
                _printk(0x80010fb,pcVar9,uVar11);
            }
        }
        else if (extraout_x1 - 1U < 0x10) {
            iVar6 = uVar10 << 0xc;
            switch(extraout_x1) {
            case 1:
                iVar8 = ktime_get();
                iVar8 = iVar8 - _segment.ehdr;
                sym.record_stat(uVar11,(iVar8 / 1000 + (iVar8 >> 0x3f)) -
                                        (SUB164(SEXT816(iVar8) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),0);
                _segment.ehdr = 0;
                sym.set_memblk_bitmap_online(iVar6);
                _printk(0x800103e,uVar11);
                sym.get_segment_addr_to_idx(iVar6);
                uVar10 = memory_block_size_bytes();
                Hint_Prefetch(0x8011084,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        __totalram_pages = __totalram_pages - (uVar10 >> 0xc);
                    }
                } while (cVar2 != '\0');
                break;
            case 2:
                uVar10 = 0;
                if ((_segment.ehdr & 0xffffffff) != 0) {
                    uVar10 = ((uVar11 - _segment.ehdr) + 1) / (_segment.ehdr & 0xffffffff);
                }
                iVar6 = _segment.ehdr + uVar10 * 0x48;
                obj.has_pend_offline_req = 0x1;
                *(iVar6 + 8) = *(iVar6 + 8) + 1;
                cancel_work_sync(obj.fill_movable_zone_work);
                _segment.ehdr = ktime_get();
                break;
            case 4:
                sym.mem_change_refresh_state(arg1_00,1);
                iVar8 = ktime_get();
                iVar8 = iVar8 - _segment.ehdr;
                sym.record_stat(uVar11,(iVar8 / 1000 + (iVar8 >> 0x3f)) -
                                        (SUB164(SEXT816(iVar8) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),1);
                _segment.ehdr = 0;
                obj.has_pend_offline_req = 0x0;
                sym.set_memblk_bitmap_offline(iVar6);
                _printk(0x8000a27,uVar11);
                sym.get_segment_addr_to_idx(iVar6);
                uVar10 = memory_block_size_bytes();
                Hint_Prefetch(0x8011084,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        __totalram_pages = __totalram_pages + (uVar10 >> 0xc);
                    }
                } while (cVar2 != '\0');
                break;
            case 8:
                uVar10 = 0;
                if ((_segment.ehdr & 0xffffffff) != 0) {
                    uVar10 = (uVar11 - _segment.ehdr) / (_segment.ehdr & 0xffffffff);
                }
                iVar6 = _segment.ehdr + uVar10 * 0x48;
                *(iVar6 + 8) = *(iVar6 + 8) + 1;
                _segment.ehdr = ktime_get();
                iVar5 = sym.mem_change_refresh_state(arg1_00,0);
                if (iVar5 != 0) {
                    return 0x8002;
                }
                break;
            case 0x10:
                _printk(0x8000f5e,iVar6,uVar1 * 0x1000);
                sym.mem_change_refresh_state(arg1_00,1);
            }
        }
        return 1;
    }
    return iVar6;
}


// ===== sym.show_seg_size @ 0x080037a8 (size 188) =====

int64_t sym.show_seg_size(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t extraout_x1;
    char *pcVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    pcVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_30 = 0;
    iVar5 = sscanf(*arg1,"segment%lu");
    if (iVar5 == 1) {
        pcVar8 = "%lu\n";
        iVar5 = scnprintf(arg2,100,"%lu\n",*(_segment.ehdr + uStack_30 * 0x20 + 8));
        iVar6 = iVar5;
    }
    else {
        _printk(0x8000b6c,iVar5);
        iVar6 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar6;
    }
    __stack_chk_fail(iVar6);
    *extraout_x18 = sym.mem_event_callback;
    uVar9 = *pcVar8;
    if (((uVar9 & 0x7fff) != 0) || (uVar1 = *(pcVar8 + 8) + uVar9, (uVar1 + 0x7fff & 0xffffffffffff8000) != uVar1)) {
        __warn_printk("mem_event_callback");
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x80039e4);
        (*pcVar4)();
    }
    uVar10 = uVar9 >> 0xf;
    if ((_segment.ehdr < uVar10) || (uVar10 < _segment.ehdr)) {
        if ((extraout_x1 == 4) || (extraout_x1 == 1)) {
            pcVar8 = "Onlined";
            if (extraout_x1 != 1) {
                pcVar8 = "Offlined";
            }
            _printk(0x80010fb,pcVar8,uVar10);
        }
    }
    else if (extraout_x1 - 1U < 0x10) {
        iVar6 = uVar9 << 0xc;
        switch(extraout_x1) {
        case 1:
            iVar7 = ktime_get();
            iVar7 = iVar7 - _segment.ehdr;
            sym.record_stat(uVar10,(iVar7 / 1000 + (iVar7 >> 0x3f)) -
                                    (SUB164(SEXT816(iVar7) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),0);
            _segment.ehdr = 0;
            sym.set_memblk_bitmap_online(iVar6);
            _printk(0x800103e,uVar10);
            sym.get_segment_addr_to_idx(iVar6);
            uVar9 = memory_block_size_bytes();
            Hint_Prefetch(0x8011084,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    __totalram_pages = __totalram_pages - (uVar9 >> 0xc);
                }
            } while (cVar2 != '\0');
            break;
        case 2:
            uVar9 = 0;
            if ((_segment.ehdr & 0xffffffff) != 0) {
                uVar9 = ((uVar10 - _segment.ehdr) + 1) / (_segment.ehdr & 0xffffffff);
            }
            iVar6 = _segment.ehdr + uVar9 * 0x48;
            obj.has_pend_offline_req = 0x1;
            *(iVar6 + 8) = *(iVar6 + 8) + 1;
            cancel_work_sync(obj.fill_movable_zone_work);
            _segment.ehdr = ktime_get();
            break;
        case 4:
            sym.mem_change_refresh_state(pcVar8,1);
            iVar7 = ktime_get();
            iVar7 = iVar7 - _segment.ehdr;
            sym.record_stat(uVar10,(iVar7 / 1000 + (iVar7 >> 0x3f)) -
                                    (SUB164(SEXT816(iVar7) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),1);
            _segment.ehdr = 0;
            obj.has_pend_offline_req = 0x0;
            sym.set_memblk_bitmap_offline(iVar6);
            _printk(0x8000a27,uVar10);
            sym.get_segment_addr_to_idx(iVar6);
            uVar9 = memory_block_size_bytes();
            Hint_Prefetch(0x8011084,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x8011084,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    __totalram_pages = __totalram_pages + (uVar9 >> 0xc);
                }
            } while (cVar2 != '\0');
            break;
        case 8:
            uVar9 = 0;
            if ((_segment.ehdr & 0xffffffff) != 0) {
                uVar9 = (uVar10 - _segment.ehdr) / (_segment.ehdr & 0xffffffff);
            }
            iVar6 = _segment.ehdr + uVar9 * 0x48;
            *(iVar6 + 8) = *(iVar6 + 8) + 1;
            _segment.ehdr = ktime_get();
            iVar5 = sym.mem_change_refresh_state(pcVar8,0);
            if (iVar5 != 0) {
                return 0x8002;
            }
            break;
        case 0x10:
            _printk(0x8000f5e,iVar6,uVar1 * 0x1000);
            sym.mem_change_refresh_state(pcVar8,1);
        }
    }
    return 1;
}


// ===== sym.mem_event_callback @ 0x08003864 (size 860) =====

ulong sym.mem_event_callback(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    char *pcVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    uVar8 = arg1;
    *in_x18 = unaff_x30;
    uVar9 = *arg2;
    if (((uVar9 & 0x7fff) != 0) || (uVar1 = *(arg2 + 8) + uVar9, (uVar1 + 0x7fff & 0xffffffffffff8000) != uVar1)) {
        __warn_printk("mem_event_callback");
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80039e4);
        (*pcVar5)();
    }
    uVar10 = uVar9 >> 0xf;
    if ((_segment.ehdr < uVar10) || (uVar10 < _segment.ehdr)) {
        if ((uVar8 == 4) || (uVar8 == 1)) {
            pcVar2 = "Onlined";
            if (uVar8 != 1) {
                pcVar2 = "Offlined";
            }
            _printk(0x80010fb,pcVar2,uVar10);
        }
    }
    else if (uVar8 - 1 < 0x10) {
        iVar11 = uVar9 << 0xc;
    //switch table (15 cases) at 0x8001314
        switch(*((uVar8 - 1) * 4 + 0x8001314) + 0x80038e4) {
        case 0x80038f8:
            uVar8 = 0;
            if ((_segment.ehdr & 0xffffffff) != 0) {
                uVar8 = ((uVar10 - _segment.ehdr) + 1) / (_segment.ehdr & 0xffffffff);
            }
            iVar11 = _segment.ehdr + uVar8 * 0x48;
            obj.has_pend_offline_req = 0x1;
            *(iVar11 + 8) = *(iVar11 + 8) + 1;
            cancel_work_sync(obj.fill_movable_zone_work);
            _segment.ehdr = ktime_get();
            break;
        case 0x8003988:
            uVar8 = 0;
            if ((_segment.ehdr & 0xffffffff) != 0) {
                uVar8 = (uVar10 - _segment.ehdr) / (_segment.ehdr & 0xffffffff);
            }
            iVar11 = _segment.ehdr + uVar8 * 0x48;
            *(iVar11 + 8) = *(iVar11 + 8) + 1;
            _segment.ehdr = ktime_get();
            iVar6 = sym.mem_change_refresh_state(arg2,0);
            if (iVar6 != 0) {
                return 0x8002;
            }
            break;
        case 0x8003a30:
            sym.mem_change_refresh_state(arg2,1);
            iVar7 = ktime_get();
            iVar7 = iVar7 - _segment.ehdr;
            sym.record_stat(uVar10,(iVar7 / 1000 + (iVar7 >> 0x3f)) -
                                    (SUB164(SEXT816(iVar7) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),1);
            _segment.ehdr = 0;
            obj.has_pend_offline_req = 0x0;
            sym.set_memblk_bitmap_offline(iVar11);
            _printk(0x8000a27,uVar10);
            sym.get_segment_addr_to_idx(iVar11);
            uVar8 = memory_block_size_bytes();
            Hint_Prefetch(0x8011084,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(0x8011084,0x10);
                if (bVar4) {
                    cVar3 = ExclusiveMonitorsStatus();
                    __totalram_pages = __totalram_pages + (uVar8 >> 0xc);
                }
            } while (cVar3 != '\0');
            break;
        case 0x8003ac4:
            _printk(0x8000f5e,iVar11,uVar1 * 0x1000);
            sym.mem_change_refresh_state(arg2,1);
            break;
        case 0x8003aec:
            iVar7 = ktime_get();
            iVar7 = iVar7 - _segment.ehdr;
            sym.record_stat(uVar10,(iVar7 / 1000 + (iVar7 >> 0x3f)) -
                                    (SUB164(SEXT816(iVar7) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),0);
            _segment.ehdr = 0;
            sym.set_memblk_bitmap_online(iVar11);
            _printk(0x800103e,uVar10);
            sym.get_segment_addr_to_idx(iVar11);
            uVar8 = memory_block_size_bytes();
            Hint_Prefetch(0x8011084,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(0x8011084,0x10);
                if (bVar4) {
                    cVar3 = ExclusiveMonitorsStatus();
                    __totalram_pages = __totalram_pages - (uVar8 >> 0xc);
                }
            } while (cVar3 != '\0');
        }
    }
    return 1;
}


// ===== sym.mem_change_refresh_state @ 0x08003bc0 (size 1692) =====

uint64_t sym.mem_change_refresh_state(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t in_w2;
    char *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t *puVar13;
    code cVar14;
    int64_t *piVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_d8;
    ulong *puStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
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
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uVar10 = *arg1 >> 0xf;
    uVar8 = 0;
    if (_segment.ehdr != 0) {
        uVar8 = (uVar10 - CONCAT44(*0x8000004,_segment.ehdr)) / _segment.ehdr;
    }
    if (*(CONCAT44(*0x8000004,_segment.ehdr) + uVar8 * 4) == arg2) {
        in_w2 = 0x80008dd;
        if (arg2 != 0) {
            in_w2 = 0x8001303;
        }
        _printk(0x80006b3,uVar10);
        uVar10 = 0;
        goto code_r0x0800400c;
    }
    uVar20 = (*arg1 & 0xfffffffff8000) * 0x1000;
    if (0 < _segment.ehdr) {
        uVar21 = 0;
        piVar15 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
        do {
            if ((piVar15[-1] <= uVar20) && (uVar20 < *piVar15 + piVar15[-1])) goto code_r0x08003c94;
            uVar21 = uVar21 + 1;
            piVar15 = piVar15 + 4;
        } while (_segment.ehdr != uVar21);
    }
    uVar21 = 0xffffffffffffffea;
code_r0x08003c94:
    uVar7 = memory_block_size_bytes();
    uVar12 = _segment.ehdr;
    iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
    if (0 < _segment.ehdr) {
        uVar10 = 0;
        piVar15 = iVar11 + 8;
        do {
            if ((piVar15[-1] <= uVar20) && (uVar20 < *piVar15 + piVar15[-1])) goto code_r0x08003ce8;
            uVar10 = uVar10 + 1;
            piVar15 = piVar15 + 4;
        } while (uVar12 != uVar10);
    }
    uVar10 = 0xffffffffffffffea;
code_r0x08003ce8:
    uVar17 = *(iVar11 + uVar10 * 0x20 + 8);
    if (uVar17 < uVar7) {
        uVar2 = uVar7 + uVar20;
        uVar10 = 0xffffffea;
        if ((uVar2 <= uVar20) || (uVar20 = uVar17 + uVar20, uVar2 <= uVar20)) goto code_r0x0800400c;
        iVar6 = 0;
        do {
            uVar10 = 0;
            if (uVar17 != 0) {
                uVar10 = uVar7 / uVar17;
            }
            if (uVar7 != uVar10 * uVar17) {
                _printk(0x8000a54);
                uVar10 = 0xffffffea;
                goto code_r0x0800400c;
            }
            if (0 < _segment.ehdr) {
                uVar10 = 0;
                piVar15 = iVar11 + 8;
                do {
                    if ((piVar15[-1] <= uVar20) && (uVar20 < *piVar15 + piVar15[-1])) goto code_r0x08003d24;
                    uVar10 = uVar10 + 1;
                    piVar15 = piVar15 + 4;
                } while (uVar12 != uVar10);
            }
            uVar10 = 0xffffffffffffffea;
code_r0x08003d24:
            iVar6 = iVar6 + 1;
            uVar17 = *(iVar11 + ((uVar10 << 0x20) >> 0x1b) + 8);
            uVar20 = uVar17 + uVar20;
        } while (uVar20 < uVar2);
        if (iVar6 == 0) goto code_r0x08004158;
    }
    else {
        iVar6 = 1;
    }
    uVar10 = (*arg1 & 0xfffffffff8000) * 0x1000;
    if (0 < _segment.ehdr) {
        uVar20 = 0;
        piVar15 = iVar11 + 8;
        do {
            if ((piVar15[-1] <= uVar10) && (uVar10 < *piVar15 + piVar15[-1])) goto code_r0x08003df0;
            uVar20 = uVar20 + 1;
            piVar15 = piVar15 + 4;
        } while (uVar12 != uVar20);
    }
    uVar20 = 0xffffffffffffffea;
code_r0x08003df0:
    piVar15 = iVar11 + (uVar20 & 0xffffffff) * 0x20;
    iVar11 = *piVar15;
    if (piVar15[1] + iVar11 < uVar10) {
code_r0x08003e9c:
        _printk(0x8000587);
    }
    else {
        uVar7 = memory_block_size_bytes();
        uVar4 = 0;
        if (uVar7 != 0) {
            uVar4 = (uVar10 - iVar11) / uVar7;
        }
        if (uVar4 == 0x1f) goto code_r0x08003e9c;
        iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((*(iVar11 + ((uVar20 << 0x20) >> 0x1b) + 0x18) & (1 << (uVar4 & 0x1f) ^ 0xffffffffU)) == 0) {
            if (reloc.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt == 0x0) {
                uVar20 = _segment.ehdr;
                uVar10 = (*arg1 & 0xfffffffff8000) * 0x1000;
                if (0 < _segment.ehdr) {
                    uVar7 = 0;
                    piVar15 = iVar11 + 8;
                    do {
                        if ((piVar15[-1] <= uVar10) && (uVar10 < *piVar15 + piVar15[-1])) goto code_r0x08003eb0;
                        uVar7 = uVar7 + 1;
                        piVar15 = piVar15 + 4;
                    } while (uVar20 != uVar7);
                }
                uVar7 = 0xffffffffffffffea;
code_r0x08003eb0:
                pcVar9 = "online";
                uVar3 = 0x80007c6;
                if (arg2 != 0) {
                    pcVar9 = "offline";
                    uVar3 = 0x8000e3f;
                }
                if (0 < iVar6) {
                    iVar19 = 0;
                    uVar7 = *(iVar11 + uVar7 * 0x20);
                    if (_segment.ehdr < 1) goto code_r0x08003f58;
                    do {
                        uVar12 = 0;
                        piVar15 = iVar11 + 8;
                        while ((uVar10 < piVar15[-1] || (*piVar15 + piVar15[-1] <= uVar10))) {
                            uVar12 = uVar12 + 1;
                            piVar15 = piVar15 + 4;
                            if (uVar20 == uVar12) goto code_r0x08003f58;
                        }
                        while( true ) {
                            puVar13 = iVar11 + ((uVar12 << 0x20) >> 0x1b);
                            uVar10 = *puVar13;
                            uVar20 = puVar13[1];
                            if ((obj.is_rpm_controller & 1) == 0) {
                                uStack_d8 = 0;
                                uStack_78 = 0;
                                uStack_70 = 0;
                                uStack_88 = 0;
                                uStack_80 = 0;
                                uStack_98 = 0;
                                uStack_90 = 0;
                                uStack_a8 = 0;
                                uStack_a0 = 0;
                                uStack_b8 = 0;
                                uStack_b0 = 0;
                                uStack_c8 = 0;
                                uStack_c0 = 0;
                                snprintf(&uStack_c8,0x60,
                                         "{class: ddr, event: pasr, addr_hi: 0x%08lx, addr_lo: 0x%08lx, refresh: %s}",
                                         uVar10 >> 0x20,uVar10 & 0xfffff000,uVar3);
                                uStack_d8 = CONCAT44(uStack_d8._4_4_,0x60);
                                puStack_d0 = &uStack_c8;
                                iVar5 = mbox_send_message(CONCAT44(*0x8000004,_segment.ehdr),&uStack_d8);
                                if (iVar5 < 0) {
                                    uVar3 = 0x80005b9;
                                    if (obj.is_rpm_controller == 0x0) {
                                        uVar3 = 0x8000583;
                                    }
                                    _printk(0x80009b5,uVar3,pcVar9,uVar10 & 0xfffffffffffff000,iVar5);
                                    in_w2 = pcVar9;
                                    iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
                                    uVar8 = _segment.ehdr;
                                    if (_segment.ehdr < 1) goto code_r0x08004118;
                                    uVar20 = 0;
                                    piVar15 = iVar11 + 8;
                                    goto code_r0x080040f8;
                                }
                            }
                            in_w2 = uVar10 & 0xfffff000;
                            _printk(0x8000e8e,pcVar9);
                            iVar19 = iVar19 + 1;
                            if (iVar19 == iVar6) {
                                iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
                                goto code_r0x08003ff8;
                            }
                            uVar10 = uVar10 + uVar20;
                            uVar20 = _segment.ehdr;
                            iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
                            if (0 < _segment.ehdr) break;
code_r0x08003f58:
                            uVar12 = 0xffffffffffffffea;
                        }
                    } while( true );
                }
            }
code_r0x08003ff8:
            *(iVar11 + uVar21 * 0x20 + 0x1c) = arg2;
        }
    }
    uVar10 = 0;
    *(CONCAT44(*0x8000004,_segment.ehdr) + uVar8 * 4) = arg2;
code_r0x0800400c:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    iVar6 = __stack_chk_fail();
code_r0x0800424c:
    auVar22 = panic("Failed to completely online/offline a hotpluggable segment. A quasi state of memblock can cause randomn system failures. ret:%d"
                    ,iVar6);
    uVar20 = auVar22._8_8_;
    uVar10 = auVar22._0_8_;
    *extraout_x18 = sym.record_stat;
    uVar8 = uVar10;
    if (uVar10 <= CONCAT44(*0x8000004,_segment.ehdr)) {
        uVar21 = 0;
        if (_segment.ehdr != 0) {
            uVar21 = ((uVar10 - CONCAT44(*0x8000004,_segment.ehdr)) + in_w2) / _segment.ehdr;
        }
        iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar21 = uVar21 & 0xffffffff;
        puVar13 = iVar11 + uVar21 * 0x48 + 0x18;
        if (uVar20 <= *puVar13 - 1) {
            *puVar13 = uVar20;
        }
        puVar13 = iVar11 + uVar21 * 0x48 + 0x20;
        if (*puVar13 < uVar20) {
            *puVar13 = uVar20;
        }
        iVar18 = uVar21 * 0x48;
        piVar15 = iVar11 + iVar18 + 8;
        iVar16 = *piVar15;
        uVar8 = *(iVar11 + iVar18) + 1;
        *(iVar11 + iVar18) = uVar8;
        if (iVar16 != 0) {
            *piVar15 = iVar16 + -1;
        }
        iVar11 = iVar11 + uVar21 * 0x48;
        uVar7 = *(iVar11 + 0x28) + uVar20;
        uVar12 = 0;
        if (uVar8 != 0) {
            uVar12 = uVar7 / uVar8;
        }
        *(iVar11 + 0x28) = uVar7;
        *(iVar11 + 0x30) = uVar20;
        *(iVar11 + 0x10) = uVar12;
        uVar8 = ktime_get();
        iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar7 = _segment.ehdr;
        *(iVar11 + uVar21 * 0x48 + 0x40) = uVar8;
        uVar20 = 0;
        if (uVar7 != 0) {
            uVar20 = (((in_w2 == 0) + uVar10) - CONCAT44(*0x8000004,_segment.ehdr)) / uVar7;
        }
        iVar11 = iVar11 + (uVar20 & 0xffffffff) * 0x48;
        *(iVar11 + 0x38) = (uVar8 - *(iVar11 + 0x40)) + *(iVar11 + 0x38);
        *(iVar11 + 0x40) = 0;
    }
    return uVar8;
    while( true ) {
        uVar20 = uVar20 + 1;
        piVar15 = piVar15 + 4;
        if (uVar8 == uVar20) break;
code_r0x080040f8:
        if ((piVar15[-1] <= uVar7) && (uVar7 < *piVar15 + piVar15[-1])) goto code_r0x0800411c;
    }
code_r0x08004118:
    uVar20 = 0xffffffffffffffea;
code_r0x0800411c:
    uVar3 = 0x8000e3f;
    if (arg2 != 0) {
        uVar3 = 0x80007c6;
    }
    if (iVar19 != 0) {
        uVar21 = uVar7;
        cVar14 = obj.is_rpm_controller;
        do {
            if ((cVar14 & 1) == 0) {
                uStack_d8 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_b8 = 0;
                uStack_b0 = 0;
                uStack_c8 = 0;
                uStack_c0 = 0;
                pcVar9 = "{class: ddr, event: pasr, addr_hi: 0x%08lx, addr_lo: 0x%08lx, refresh: %s}";
                snprintf(&uStack_c8,0x60,"{class: ddr, event: pasr, addr_hi: 0x%08lx, addr_lo: 0x%08lx, refresh: %s}"
                         ,uVar21 >> 0x20,uVar21 & 0xfffff000,uVar3);
                uStack_d8 = CONCAT44(uStack_d8._4_4_,0x60);
                puStack_d0 = &uStack_c8;
                iVar6 = mbox_send_message(CONCAT44(*0x8000004,_segment.ehdr),&uStack_d8);
                in_w2 = pcVar9;
                if (iVar6 < 0) goto code_r0x0800424c;
                iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
                uVar8 = _segment.ehdr;
                cVar14 = obj.is_rpm_controller;
            }
            else {
                cVar14 = 0x1;
            }
            in_w2 = pcVar9;
            iVar16 = *(iVar11 + ((uVar20 << 0x20) >> 0x1b) + 8);
            uVar7 = iVar16 + uVar7;
            if (0 < uVar8) {
                uVar20 = 0;
                piVar15 = iVar11 + 8;
                do {
                    if ((piVar15[-1] <= uVar7) && (uVar7 < *piVar15 + piVar15[-1])) goto code_r0x08004164;
                    uVar20 = uVar20 + 1;
                    piVar15 = piVar15 + 4;
                } while (uVar8 != uVar20);
            }
            uVar20 = 0xffffffffffffffea;
code_r0x08004164:
            uVar10 = 0xffffffea;
            uVar21 = iVar16 + (uVar21 & 0xfffffffffffff000);
            bVar1 = 1 < iVar19;
            iVar19 = iVar19 + -1;
        } while (bVar1);
        goto code_r0x0800400c;
    }
code_r0x08004158:
    uVar10 = 0xffffffea;
    goto code_r0x0800400c;
}


// ===== sym.record_stat @ 0x0800425c (size 336) =====

void sym.record_stat(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t *puVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg2;
    uVar3 = arg1;
    *in_x18 = unaff_x30;
    if (uVar3 <= CONCAT44(*0x8000004,_segment.ehdr)) {
        uVar6 = 0;
        if (_segment.ehdr != 0) {
            uVar6 = ((uVar3 - CONCAT44(*0x8000004,_segment.ehdr)) + (arg3 & 0xffffffffU)) / _segment.ehdr;
        }
        iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar6 = uVar6 & 0xffffffff;
        puVar7 = iVar5 + uVar6 * 0x48 + 0x18;
        if (uVar4 <= *puVar7 - 1) {
            *puVar7 = uVar4;
        }
        puVar7 = iVar5 + uVar6 * 0x48 + 0x20;
        if (*puVar7 < uVar4) {
            *puVar7 = uVar4;
        }
        iVar11 = uVar6 * 0x48;
        piVar8 = iVar5 + iVar11 + 8;
        iVar10 = *piVar8;
        uVar9 = *(iVar5 + iVar11) + 1;
        *(iVar5 + iVar11) = uVar9;
        if (iVar10 != 0) {
            *piVar8 = iVar10 + -1;
        }
        iVar5 = iVar5 + uVar6 * 0x48;
        uVar1 = *(iVar5 + 0x28) + uVar4;
        uVar2 = 0;
        if (uVar9 != 0) {
            uVar2 = uVar1 / uVar9;
        }
        *(iVar5 + 0x28) = uVar1;
        *(iVar5 + 0x30) = uVar4;
        *(iVar5 + 0x10) = uVar2;
        iVar10 = ktime_get();
        iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar9 = _segment.ehdr;
        *(iVar5 + uVar6 * 0x48 + 0x40) = iVar10;
        uVar4 = 0;
        if (uVar9 != 0) {
            uVar4 = (((arg3 == 0) + uVar3) - CONCAT44(*0x8000004,_segment.ehdr)) / uVar9;
        }
        iVar5 = iVar5 + (uVar4 & 0xffffffff) * 0x48;
        *(iVar5 + 0x38) = (iVar10 - *(iVar5 + 0x40)) + *(iVar5 + 0x38);
        *(iVar5 + 0x40) = 0;
    }
    return;
}


// ===== sym.set_memblk_bitmap_online @ 0x080043ac (size 256) =====

void sym.set_memblk_bitmap_online(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    int64_t *piVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        uVar7 = 0;
        piVar6 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
        do {
            if ((piVar6[-1] <= arg1) && (arg1 < *piVar6 + piVar6[-1])) goto code_r0x08004420;
            uVar7 = uVar7 + 1;
            piVar6 = piVar6 + 4;
        } while (_segment.ehdr != uVar7);
    }
    uVar7 = 0xffffffffffffffea;
code_r0x08004420:
    piVar6 = CONCAT44(*0x8000004,_segment.ehdr) + (uVar7 & 0xffffffff) * 0x20;
    iVar1 = *piVar6;
    if (arg1 <= piVar6[1] + iVar1) {
        uVar4 = memory_block_size_bytes();
        uVar2 = 0;
        if (uVar4 != 0) {
            uVar2 = (arg1 - iVar1) / uVar4;
        }
        if (uVar2 != 0x1f) {
            uVar3 = 1 << (uVar2 & 0x1f);
            puVar5 = CONCAT44(*0x8000004,_segment.ehdr) + uVar7 * 0x20 + 0x18;
            uVar2 = *puVar5;
            if ((uVar2 & uVar3) == 0) {
                *puVar5 = uVar2 | uVar3;
                return;
            }
            _printk(0x800106a,arg1);
            return;
        }
    }
    _printk(0x8000587);
    return;
}


// ===== sym.get_segment_addr_to_idx @ 0x080044ac (size 100) =====

void sym.get_segment_addr_to_idx(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if (0 < _segment.ehdr) {
        uVar2 = 0;
        do {
            while (uVar3 = *(_segment.ehdr + uVar2 * 0x20), uVar3 <= arg1) {
                iVar1 = uVar2 * 0x20;
                uVar2 = uVar2 + 1;
                if (arg1 < *(_segment.ehdr + iVar1 + 8) + uVar3 || uVar2 == (_segment.ehdr & 0xffffffff)) {
                    return;
                }
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 != (_segment.ehdr & 0xffffffff));
    }
    return;
}


// ===== sym.set_memblk_bitmap_offline @ 0x08004510 (size 256) =====

void sym.set_memblk_bitmap_offline(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    int64_t *piVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        uVar7 = 0;
        piVar6 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
        do {
            if ((piVar6[-1] <= arg1) && (arg1 < *piVar6 + piVar6[-1])) goto code_r0x08004584;
            uVar7 = uVar7 + 1;
            piVar6 = piVar6 + 4;
        } while (_segment.ehdr != uVar7);
    }
    uVar7 = 0xffffffffffffffea;
code_r0x08004584:
    piVar6 = CONCAT44(*0x8000004,_segment.ehdr) + (uVar7 & 0xffffffff) * 0x20;
    iVar1 = *piVar6;
    if (arg1 <= piVar6[1] + iVar1) {
        uVar4 = memory_block_size_bytes();
        uVar2 = 0;
        if (uVar4 != 0) {
            uVar2 = (arg1 - iVar1) / uVar4;
        }
        if (uVar2 != 0x1f) {
            uVar3 = 1 << (uVar2 & 0x1f);
            puVar5 = CONCAT44(*0x8000004,_segment.ehdr) + uVar7 * 0x20 + 0x18;
            uVar2 = *puVar5;
            if ((uVar2 & uVar3) != 0) {
                *puVar5 = uVar2 & (uVar3 ^ 0xffffffff);
                return;
            }
            _printk(0x80010a1,arg1);
            return;
        }
    }
    _printk(0x8000587);
    return;
}


// ===== sym.fill_movable_zone_fn @ 0x08004610 (size 1280) =====

int64_t * sym.fill_movable_zone_fn(int64_t *param_1)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    char cVar4;
    bool bVar5;
    uint uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    ulong uVar8;
    int64_t *piVar9;
    int64_t *extraout_x1;
    int64_t iVar10;
    ulong *puVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint extraout_w9;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint *extraout_x10;
    uint extraout_x11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t *unaff_x19;
    uint64_t *puVar17;
    code *unaff_x20;
    code *pcVar18;
    ulong *unaff_x21;
    ulong *puVar19;
    int64_t *piVar20;
    uint64_t *unaff_x22;
    int64_t iVar21;
    int iVar22;
    uint64_t *unaff_x23;
    uint64_t unaff_x24;
    uint64_t unaff_x25;
    uint64_t unaff_x26;
    code *unaff_x27;
    uchar *unaff_x28;
    ulong unaff_x30;
    uchar auVar23 [16];
    int64_t *piStack_148;
    int64_t *piStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    ulong uStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t *puStack_f8;
    uint64_t *puStack_f0;
    ulong *puStack_e8;
    code *pcStack_e0;
    uint64_t *puStack_d8;
    int64_t iStack_c8;
    uint64_t *puStack_c0;
    uint64_t *puStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    uint32_t uStack_88;
    uint uStack_84;
    code *pcStack_80;
    uint64_t *puStack_78;
    uint64_t *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    pcVar18 = *0x8011660;
    puVar17 = *0x8011658;
    puVar19 = __raw_spin_unlock_irqrestore;
    uVar14 = _contig_page_data;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    puStack_78 = &stack0xffffffffffffff88;
    iStack_90 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    iStack_a0 = 0;
    iStack_98 = 0;
    pcStack_e0 = unaff_x20;
    puStack_e8 = unaff_x21;
    puStack_70 = puStack_78;
    if (((obj.has_pend_offline_req & 1) == 0) &&
       (param_1 = mutex_trylock(obj.page_migrate_lock), unaff_x19 = puVar17, pcStack_e0 = pcVar18,
       puStack_e8 = puVar19, unaff_x25 = uVar14, param_1 != 0)) {
        pcStack_80 = contig_page_data;
        uStack_b0 = ___ubsan_handle_cfi_check_fail_abort + 0x3ffU & 0xfffffffffffffc00;
        iStack_a8 = *0x80110d8 + ___ubsan_handle_cfi_check_fail_abort;
        puStack_c0 = &stack0xffffffffffffff40;
        iStack_90 = _platform_driver_unregister;
        puStack_b8 = puStack_c0;
        if (_platform_driver_unregister != 0) {
            Hint_Prefetch(0x80002dc,2,0,1);
            do {
                uStack_88 = _obj.target_migrate_pages;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(0x80002dc,0x10);
                if (bVar5) {
                    _obj.target_migrate_pages = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (uStack_88 != 0) {
                unaff_x26 = puVar19 + uVar14;
                iStack_c8 = _add_memory + 5000;
                unaff_x27 = pcVar18 + puVar17;
                pcVar18 = of_get_property;
                do {
                    do {
                        do {
                            unaff_x28 = &stack0xffffffffffffff88;
                            unaff_x25 = uVar14;
                            if (iStack_c8 - _add_memory < 0) goto code_r0x08004a14;
                            uVar12 = _contig_page_data & (_contig_page_data >> 0x3f ^ 0xffffffff);
                            if (uVar12 - uStack_88 <= unaff_x27) {
                                uStack_88 = uVar12 - unaff_x27;
                            }
                            if (uStack_88 < 1) goto code_r0x08004a14;
                            uVar12 = uStack_88;
                            if (0x3ff < uStack_88) {
                                uVar12 = 0x400;
                            }
                            puVar17 = uVar12;
                            unaff_x25 = uVar14;
                            iStack_a0 = 0;
                            if (unaff_x25 < unaff_x26) {
                                unaff_x24 = 0;
                                unaff_x23 = uVar14 & 0xffffffff;
                                do {
                                    iVar22 = unaff_x23;
                                    if ((-1 < iVar22) && (___bitmap_set != 0)) {
                                        iVar10 = *(___bitmap_set + (unaff_x25 >> 0x13 & 0x1ffffffffff8));
                                        uVar14 = unaff_x25 >> 0xf & 0x7f;
                                        puVar11 = iVar10 + uVar14 * 0x20;
                                        if (((iVar10 != 0 && puVar11 != NULL) &&
                                            (uVar13 = *puVar11, (uVar13 >> 1 & 1) != 0)) &&
                                           (((uVar13 >> 3 & 1) != 0 ||
                                            ((**(iVar10 + uVar14 * 0x20 + 8) >> (unaff_x25 >> 9 & 0x3f) & 1) != 0)))) {
                                            puVar19 = (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000 +
                                                      unaff_x25 * 0x40;
                                            if (((*puVar19 >> 0x10 & 1) == 0) &&
                                               (unaff_x22 = puVar19 + 1, (*unaff_x22 & 1) == 0)) {
                                                if ((*(puVar19 + 6) & 0xf0000080) == 0xf0000000) {
                                                    if (puVar19[5] - 1 < 10) {
                                                        iVar22 = iVar22 + ~(-1 << (*(puVar19 + 5) & 0x1f));
                                                    }
                                                }
                                                else if (((unaff_x25 & 0x3ff) == 0) &&
                                                        (iVar10 = get_pfnblock_flags_mask
                                                                            (puVar19,puVar19 + (_of_n_size_cells >> 0xc
                                                                                                ) * 8 + 0x40000000 >> 6
                                                                             ,7), iVar10 == 3)) {
                                                    iVar22 = iVar22 + 0x3ff;
                                                }
                                                else {
                                                    iVar7 = isolate_anon_lru_page(puVar19);
                                                    puVar1 = puStack_70;
                                                    if (iVar7 == 0) {
                                                        uVar14 = __list_add_valid(unaff_x22,puStack_70,
                                                                                  &stack0xffffffffffffff88);
                                                        if ((uVar14 & 1) != 0) {
                                                            *unaff_x22 = unaff_x28;
                                                            puVar19[2] = puVar1;
                                                            puStack_70 = unaff_x22;
                                                            *puVar1 = unaff_x22;
                                                        }
                                                        puVar11 = puVar19;
                                                        if ((*unaff_x22 & 1) != 0) {
                                                            puVar11 = *unaff_x22 - 1;
                                                        }
                                                        inc_node_page_state(puVar19,8 - (*puVar11 >> 0x13 & 1));
                                                        unaff_x24 = unaff_x24 + 1;
                                                        iStack_a0 = iStack_a0 + 1;
                                                    }
                                                }
                                            }
                                            else {
                                                puVar11 = puVar19;
                                                if ((puVar19[1] & 1) != 0) {
                                                    puVar11 = puVar19[1] - 1;
                                                }
                                                if ((*puVar11 >> 0x10 & 1) == 0) {
                                                    uVar13 = 0;
                                                }
                                                else {
                                                    uVar13 = *(puVar11 + 0x51);
                                                }
                                                iVar22 = iVar22 + ~(puVar19 - puVar11 >> 6) + (1 << (uVar13 & 0x1f));
                                            }
                                        }
                                    }
                                    unaff_x23 = iVar22 + 1U;
                                    unaff_x25 = iVar22 + 1U;
                                } while ((unaff_x25 < unaff_x26) && (unaff_x24 < uVar12));
                            }
                            unaff_x28 = &stack0xffffffffffffff88;
                            uVar14 = unaff_x25;
                        } while ((&stack0xffffffffffffff88 == puStack_78) && (unaff_x25 < unaff_x26));
                        uVar12 = migrate_pages(&stack0xffffffffffffff88,
                                               sym.movable_page_alloc.912f178c447211a3884891262d14862c.cfi_jt,
                                               sym.movable_page_free.912f178c447211a3884891262d14862c.cfi_jt,
                                               &stack0xffffffffffffff40,0,2,0);
                        puVar19 = uVar12;
                        if (uVar12 != 0) {
                            putback_movable_pages(&stack0xffffffffffffff88);
                        }
                        uStack_88 = uStack_88 - iStack_a0;
                        if (((uVar12 == 0xfffffff4) || (unaff_x26 <= unaff_x25)) ||
                           ((obj.has_pend_offline_req & 1) != 0)) goto code_r0x08004a14;
                    } while (0 < uStack_88);
                    Hint_Prefetch(0x80002dc,2,0,1);
                    do {
                        uStack_88 = _obj.target_migrate_pages;
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(0x80002dc,0x10);
                        if (bVar5) {
                            _obj.target_migrate_pages = 0;
                            cVar4 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar4 != '\0');
                    DataMemoryBarrier(2,3);
                } while (uStack_88 != 0);
            }
        }
code_r0x08004a14:
        unaff_x19 = puVar17;
        if ((iStack_98 != 0) && (unaff_x19 = puStack_c0, &stack0xffffffffffffff40 != puStack_c0)) {
            unaff_x22 = &stack0xffffffffffffff40;
            puVar19 = 0xdead000000000100;
            puVar17 = puStack_c0;
            do {
                pcVar18 = puVar17 + -1;
                unaff_x19 = *puVar17;
                uVar14 = __list_del_entry_valid(puVar17);
                if ((uVar14 & 1) != 0) {
                    uVar14 = *puVar17;
                    puVar1 = puVar17[1];
                    *(uVar14 + 8) = puVar1;
                    *puVar1 = uVar14;
                }
                *puVar17 = 0xdead000000000100;
                puVar17[1] = 0xdead000000000122;
                __free_pages(pcVar18,0);
                puVar17 = unaff_x19;
                unaff_x23 = unaff_x19;
            } while (unaff_x22 != unaff_x19);
        }
        param_1 = mutex_unlock(obj.page_migrate_lock);
        pcStack_e0 = pcVar18;
        puStack_e8 = puVar19;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return param_1;
    }
    __stack_chk_fail();
    LOAcquire();
    uVar6 = *extraout_x10;
    *extraout_x10 = extraout_w9;
    LORelease();
    LOAcquire();
    *CONCAT44(extraout_x11,uVar6) = in_tmp_ldXn;
    LORelease();
    *extraout_x18 = 0x8004acc;
    uStack_128 = 0x8004acc;
    iVar10 = sp_el0;
    iStack_138 = *(iVar10 + 0x5e0);
    puStack_130 = &stack0xffffffffffffffa0;
    puStack_120 = unaff_x28;
    pcStack_118 = unaff_x27;
    uStack_110 = unaff_x26;
    uStack_108 = unaff_x25;
    uStack_100 = unaff_x24;
    puStack_f8 = unaff_x23;
    puStack_f0 = unaff_x22;
    puStack_d8 = unaff_x19;
    if (extraout_x1 == *extraout_x1) {
        uVar14 = extraout_x1[2];
        uVar2 = extraout_x1[3];
        piStack_148 = &stack0xfffffffffffffeb8;
        piStack_140 = piStack_148;
        if ((uVar14 < uVar2) &&
           (iVar10 = (*(uVar14 * 0x40 + (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000) >> 0x3e) * 0x640,
           *(__warn_printk + iVar10) + *(_raw_spin_unlock_irqrestore + iVar10) <=
           (*(iVar10 + 0x8011628) & (*(iVar10 + 0x8011628) >> 0x3f ^ 0xffffffffffffffffU)))) {
            uVar8 = _raw_spin_lock_irqsave(extraout_x1[8] + 0x540);
            do {
                if (((uVar14 >> 0x34 == 0) && (uVar14 >> 0x24 == 0)) && (___bitmap_set != 0)) {
                    iVar10 = *(___bitmap_set + (uVar14 >> 0x13 & 0x1ffffffffff8));
                    uVar15 = uVar14 >> 0xf & 0x7f;
                    puVar19 = iVar10 + uVar15 * 0x20;
                    if (((iVar10 != 0 && puVar19 != NULL) && (uVar12 = *puVar19, (uVar12 >> 1 & 1) != 0)) &&
                       (((uVar12 >> 3 & 1) != 0 || ((**(iVar10 + uVar15 * 0x20 + 8) >> (uVar14 >> 9 & 0x3f) & 1) != 0)))
                       ) {
                        puVar19 = (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000 + uVar14 * 0x40;
                        if (puVar19 != NULL) {
                            if (((*puVar19 >> 0x10 & 1) == 0) && ((puVar19[1] & 1) == 0)) {
                                if ((uVar14 & 0x3ff) == 0) {
                                    iVar10 = get_pfnblock_flags_mask
                                                       (puVar19,puVar19 + (_of_n_size_cells >> 0xc) * 8 + 0x40000000 >>
                                                                 6,7);
                                    if (iVar10 == 5) {
                                        uVar14 = uVar14 + 0x3ff;
                                        goto code_r0x08004c00;
                                    }
                                    if ((0x1f < extraout_x1[5]) || ((obj.has_pend_offline_req & 1) != 0)) break;
                                }
                                if ((*(puVar19 + 6) & 0xf0000080) == 0xf0000000) {
                                    piStack_148 = &stack0xfffffffffffffeb8;
                                    piStack_140 = &stack0xfffffffffffffeb8;
                                    iVar10 = isolate_and_split_free_page(puVar19,&stack0xfffffffffffffeb8);
                                    piVar20 = piStack_140;
                                    piVar9 = piStack_148;
                                    if (iVar10 == 0) {
                                        uVar14 = extraout_x1[2] + 0x3ffU & 0xfffffffffffffc00;
                                        break;
                                    }
                                    if (&stack0xfffffffffffffeb8 != piStack_148) {
                                        iVar16 = *extraout_x1;
                                        piStack_148[1] = extraout_x1;
                                        *extraout_x1 = piVar9;
                                        *piVar20 = iVar16;
                                        *(iVar16 + 8) = piVar20;
                                    }
                                    uVar14 = (uVar14 + iVar10) - 1;
                                    extraout_x1[5] = extraout_x1[5] + iVar10;
                                }
                            }
                            else {
                                puVar11 = puVar19;
                                if ((puVar19[1] & 1) != 0) {
                                    puVar11 = puVar19[1] - 1;
                                }
                                if ((*puVar11 >> 0x10 & 1) == 0) {
                                    uVar12 = 0;
                                }
                                else {
                                    uVar12 = *(puVar11 + 0x51);
                                }
                                uVar14 = uVar14 + (1 << (uVar12 & 0x1f)) + ~(puVar19 - puVar11 >> 6);
                            }
                        }
                    }
                }
code_r0x08004c00:
                uVar14 = uVar14 + 1;
            } while (uVar14 < uVar2);
            extraout_x1[2] = uVar14;
            _raw_spin_unlock_irqrestore(extraout_x1[8] + 0x540,uVar8);
        }
        if (extraout_x1 == *extraout_x1) {
            piVar9 = NULL;
            goto code_r0x08004e08;
        }
    }
    piVar20 = *extraout_x1;
    piVar9 = piVar20 + -1;
    uVar14 = __list_del_entry_valid(piVar20);
    if ((uVar14 & 1) != 0) {
        iVar10 = *piVar20;
        piVar3 = piVar20[1];
        *(iVar10 + 8) = piVar3;
        *piVar3 = iVar10;
    }
    *piVar20 = -0x2152ffffffffff00;
    piVar20[1] = -0x2152fffffffffede;
    extraout_x1[5] = extraout_x1[5] + -1;
code_r0x08004e08:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_138) {
        return piVar9;
    }
    auVar23 = __stack_chk_fail();
    piVar20 = auVar23._8_8_;
    iVar16 = auVar23._0_8_;
    *extraout_x18_00 = 0x8004e54;
    iVar21 = *piVar20;
    iVar10 = iVar16 + 8;
    piVar9 = __list_add_valid(in_tmp_ldXn,iVar10,piVar20,iVar21);
    if ((piVar9 & 1) != 0) {
        *(iVar21 + 8) = iVar10;
        *(iVar16 + 8) = iVar21;
        *(iVar16 + 0x10) = piVar20;
        *piVar20 = iVar10;
    }
    piVar20[5] = piVar20[5] + 1;
    return piVar9;
}


// ===== sym.movable_page_alloc @ 0x08004b10 (size 860) =====

int64_t * sym.movable_page_alloc(ulong noname_0,uint32_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong in_tmp_ldXn;
    ulong uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    int64_t *piVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    int64_t *piStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    
    piVar7 = arg1;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    if (piVar7 == *piVar7) {
        uVar6 = piVar7[2];
        uVar3 = piVar7[3];
        piStack_78 = &stack0xffffffffffffff88;
        piStack_70 = piStack_78;
        if ((uVar6 < uVar3) &&
           (iVar8 = (*(uVar6 * 0x40 + (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000) >> 0x3e) * 0x640,
           *(__warn_printk + iVar8) + *(_raw_spin_unlock_irqrestore + iVar8) <=
           (*(iVar8 + 0x8011628) & (*(iVar8 + 0x8011628) >> 0x3f ^ 0xffffffffffffffffU)))) {
            uVar5 = _raw_spin_lock_irqsave(piVar7[8] + 0x540);
            do {
                if (((uVar6 >> 0x34 == 0) && (uVar6 >> 0x24 == 0)) && (___bitmap_set != 0)) {
                    iVar8 = *(___bitmap_set + (uVar6 >> 0x13 & 0x1ffffffffff8));
                    uVar10 = uVar6 >> 0xf & 0x7f;
                    puVar1 = iVar8 + uVar10 * 0x20;
                    if (((iVar8 != 0 && puVar1 != NULL) && (uVar9 = *puVar1, (uVar9 >> 1 & 1) != 0)) &&
                       (((uVar9 >> 3 & 1) != 0 || ((**(iVar8 + uVar10 * 0x20 + 8) >> (uVar6 >> 9 & 0x3f) & 1) != 0)))) {
                        puVar1 = (_of_n_size_cells >> 0xc) * -0x40 + -0x200000000 + uVar6 * 0x40;
                        if (puVar1 != NULL) {
                            if (((*puVar1 >> 0x10 & 1) == 0) && ((puVar1[1] & 1) == 0)) {
                                if ((uVar6 & 0x3ff) == 0) {
                                    iVar8 = get_pfnblock_flags_mask
                                                      (puVar1,puVar1 + (_of_n_size_cells >> 0xc) * 8 + 0x40000000 >> 6
                                                       ,7);
                                    if (iVar8 == 5) {
                                        uVar6 = uVar6 + 0x3ff;
                                        goto code_r0x08004c00;
                                    }
                                    if ((0x1f < piVar7[5]) || ((obj.has_pend_offline_req & 1) != 0)) break;
                                }
                                if ((*(puVar1 + 6) & 0xf0000080) == 0xf0000000) {
                                    piStack_78 = &stack0xffffffffffffff88;
                                    piStack_70 = &stack0xffffffffffffff88;
                                    iVar8 = isolate_and_split_free_page(puVar1,&stack0xffffffffffffff88);
                                    piVar13 = piStack_70;
                                    piVar12 = piStack_78;
                                    if (iVar8 == 0) {
                                        uVar6 = piVar7[2] + 0x3ffU & 0xfffffffffffffc00;
                                        break;
                                    }
                                    if (&stack0xffffffffffffff88 != piStack_78) {
                                        iVar11 = *piVar7;
                                        piStack_78[1] = piVar7;
                                        *piVar7 = piVar12;
                                        *piVar13 = iVar11;
                                        *(iVar11 + 8) = piVar13;
                                    }
                                    uVar6 = (uVar6 + iVar8) - 1;
                                    piVar7[5] = piVar7[5] + iVar8;
                                }
                            }
                            else {
                                puVar2 = puVar1;
                                if ((puVar1[1] & 1) != 0) {
                                    puVar2 = puVar1[1] - 1;
                                }
                                if ((*puVar2 >> 0x10 & 1) == 0) {
                                    uVar9 = 0;
                                }
                                else {
                                    uVar9 = *(puVar2 + 0x51);
                                }
                                uVar6 = uVar6 + (1 << (uVar9 & 0x1f)) + ~(puVar1 - puVar2 >> 6);
                            }
                        }
                    }
                }
code_r0x08004c00:
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar3);
            piVar7[2] = uVar6;
            _raw_spin_unlock_irqrestore(piVar7[8] + 0x540,uVar5);
        }
        if (piVar7 == *piVar7) {
            piVar12 = NULL;
            goto code_r0x08004e08;
        }
    }
    piVar13 = *piVar7;
    piVar12 = piVar13 + -1;
    uVar6 = __list_del_entry_valid(piVar13);
    if ((uVar6 & 1) != 0) {
        iVar8 = *piVar13;
        piVar4 = piVar13[1];
        *(iVar8 + 8) = piVar4;
        *piVar4 = iVar8;
    }
    *piVar13 = -0x2152ffffffffff00;
    piVar13[1] = -0x2152fffffffffede;
    piVar7[5] = piVar7[5] + -1;
code_r0x08004e08:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return piVar12;
    }
    auVar15 = __stack_chk_fail();
    piVar12 = auVar15._8_8_;
    iVar11 = auVar15._0_8_;
    *extraout_x18 = 0x8004e54;
    iVar14 = *piVar12;
    iVar8 = iVar11 + 8;
    piVar7 = __list_add_valid(in_tmp_ldXn,iVar8,piVar12,iVar14);
    if ((piVar7 & 1) != 0) {
        *(iVar14 + 8) = iVar8;
        *(iVar11 + 8) = iVar14;
        *(iVar11 + 0x10) = piVar12;
        *piVar12 = iVar8;
    }
    piVar12[5] = piVar12[5] + 1;
    return piVar7;
}


// ===== sym.movable_page_free @ 0x08004e6c (size 104) =====

void sym.movable_page_free(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *arg2;
    iVar1 = arg1 + 8;
    uVar2 = __list_add_valid(iVar1,arg2,iVar3);
    if ((uVar2 & 1) != 0) {
        *(iVar3 + 8) = iVar1;
        *(arg1 + 8) = iVar3;
        *(arg1 + 0x10) = arg2;
        *arg2 = iVar1;
    }
    *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
    return;
}


// ===== sym.show_mem_stats @ 0x08004ed4 (size 2208) =====

uint64_t sym.show_mem_stats(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    char *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint64_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar12 = _segment.ehdr;
    uVar14 = 0;
    if (uVar12 != 0) {
        uVar14 = CONCAT44(*0x8000004,_segment.ehdr) / uVar12;
    }
    uVar16 = 0;
    if (uVar12 != 0) {
        uVar16 = CONCAT44(*0x8000004,_segment.ehdr) / uVar12;
    }
    uVar3 = uVar16 - uVar14;
    iVar8 = uVar3 + 1;
    iVar9 = __kmalloc(iVar8 * 2 << 3,0xdc0);
    if (iVar9 == 0) {
        uVar14 = 0xfffffffffffffff4;
    }
    else {
        uVar12 = 0;
        pcVar11 = "ONLINE";
        iVar7 = 0;
        do {
            iVar5 = scnprintf(arg1 + uVar12,0x1000 - uVar12,"\n\t%s\n\t\t\t",pcVar11);
            uVar15 = iVar5 + uVar12;
            if (uVar14 <= uVar16) {
                uVar12 = uVar14 & 0xffffffff;
                do {
                    iVar5 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"%s%d\t\t",0x8000f9d,uVar12);
                    uVar17 = uVar12 + 1;
                    uVar12 = uVar17;
                    uVar15 = iVar5 + uVar15;
                } while (uVar17 <= uVar16);
            }
            iVar5 = scnprintf(arg1 + uVar15,0x1000 - uVar15,0x8000e43);
            uVar15 = iVar5 + uVar15;
            iVar5 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"\tLast recd time:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar5;
            iVar5 = iVar7 * iVar8;
            do {
                iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,"%luus\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 0x30));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"\tAvg time:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,"%luus\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 0x10));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"\tBest time:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,"%luus\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 0x18));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"\tWorst time:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,"%luus\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 0x20));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"\tSuccess count:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,"%lu\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar6 + uVar15;
            iVar6 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"\tFail count:\t");
            uVar17 = 0;
            uVar12 = uVar15 + iVar6;
            do {
                iVar6 = scnprintf(arg1 + uVar12,0x1000 - uVar12,"%lu\t\t",
                                  *(CONCAT44(*0x8000004,_segment.ehdr) + (uVar17 + iVar5) * 0x48 + 8));
                uVar17 = uVar17 + 1;
                uVar15 = iVar6 + uVar12;
                uVar12 = uVar15;
            } while (uVar17 <= uVar3);
            iVar5 = scnprintf(arg1 + uVar12,0x1000 - uVar12,0x8000e43);
            uVar15 = iVar5 + uVar15;
            uVar12 = uVar15;
            pcVar11 = "OFFLINE";
            bVar1 = iVar7 == 0;
            iVar7 = 1;
        } while (bVar1);
        iVar7 = scnprintf(arg1 + uVar12,0x1000 - uVar12,0x8000e43,"OFFLINE");
        uVar15 = iVar7 + uVar15;
        iVar7 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"\tState:\t\t");
        uVar16 = 0;
        uVar14 = uVar15 + iVar7;
        do {
            pcVar11 = "Online";
            if (*(CONCAT44(*0x8000004,_segment.ehdr) + uVar16 * 4) != 0) {
                pcVar11 = "Offline";
            }
            iVar7 = scnprintf(arg1 + uVar14,0x1000 - uVar14,"%s\t\t",pcVar11);
            uVar16 = uVar16 + 1;
            uVar15 = iVar7 + uVar14;
            uVar14 = uVar15;
        } while (uVar16 <= uVar3);
        iVar7 = scnprintf(arg1 + uVar14,0x1000 - uVar14,0x8000e43);
        uVar15 = iVar7 + uVar15;
        iVar7 = scnprintf(arg1 + uVar15,0x1000 - uVar15,0x8000e43);
        uVar15 = uVar15 + iVar7;
        iVar7 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"\tOnline time:\t");
        uVar15 = uVar15 + iVar7;
        iVar10 = ktime_get();
        uVar16 = 0;
        uVar14 = 0;
        do {
            if (*(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 4) == 0) {
                iVar13 = iVar10 - *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 0x48 + 0x40);
            }
            else {
                iVar13 = 0;
            }
            iVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 0x48 + 0x38) + iVar13;
            iVar7 = scnprintf(arg1 + uVar15 + uVar16,0x1000 - (uVar15 + uVar16),"%lus\t\t",iVar13 / 1000000000);
            uVar17 = uVar14 + 1;
            uVar16 = iVar7 + uVar16;
            *(iVar9 + uVar14 * 8) = iVar13;
            uVar14 = uVar17;
        } while (uVar17 <= uVar3);
        uVar16 = uVar16 + uVar15;
        iVar7 = scnprintf(arg1 + uVar16,0x1000 - uVar16,0x8000e43);
        uVar16 = iVar7 + uVar16;
        iVar7 = scnprintf(arg1 + uVar16,0x1000 - uVar16,"\tOffline time:\t");
        uVar16 = uVar16 + iVar7;
        iVar10 = ktime_get();
        uVar17 = 0;
        uVar15 = 0;
        do {
            uVar14 = uVar15 + iVar8;
            if (*(CONCAT44(*0x8000004,_segment.ehdr) + uVar15 * 4) == 1) {
                iVar13 = iVar10 - *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 0x48 + 0x40);
            }
            else {
                iVar13 = 0;
            }
            iVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14 * 0x48 + 0x38) + iVar13;
            iVar7 = scnprintf(arg1 + uVar16 + uVar17,0x1000 - (uVar16 + uVar17),"%lus\t\t",iVar13 / 1000000000);
            uVar15 = uVar15 + 1;
            uVar17 = iVar7 + uVar17;
            *(iVar9 + uVar14 * 8) = iVar13;
        } while (uVar15 <= uVar3);
        uVar17 = uVar17 + uVar16;
        iVar7 = scnprintf(arg1 + uVar17,0x1000 - uVar17,0x8000e43);
        uVar17 = iVar7 + uVar17;
        iVar7 = scnprintf(arg1 + uVar17,0x1000 - uVar17,0x8000e43);
        uVar17 = uVar17 + iVar7;
        iVar7 = scnprintf(arg1 + uVar17,0x1000 - uVar17,"\tOnline %%:\t");
        uVar17 = uVar17 + iVar7;
        uVar15 = 0;
        uVar16 = 0;
        do {
            iVar13 = *(iVar9 + uVar16 * 8);
            iVar10 = *(iVar9 + (uVar16 + iVar8) * 8) + iVar13;
            if (iVar10 < 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x80055a4);
                (*pcVar4)();
            }
            iVar2 = 0;
            if (iVar10 != 0) {
                iVar2 = (iVar13 * 100) / iVar10;
            }
            iVar7 = scnprintf(arg1 + uVar17 + uVar15,0x1000 - (uVar17 + uVar15),"%d%%\t\t",iVar2);
            uVar16 = uVar16 + 1;
            uVar15 = iVar7 + uVar15;
        } while (uVar16 <= uVar3);
        uVar15 = uVar15 + uVar17;
        iVar7 = scnprintf(arg1 + uVar15,0x1000 - uVar15,0x8000e43);
        uVar15 = iVar7 + uVar15;
        iVar7 = scnprintf(arg1 + uVar15,0x1000 - uVar15,"\tOffline %%:\t");
        uVar15 = uVar15 + iVar7;
        uVar17 = 0;
        uVar16 = 0;
        do {
            iVar13 = *(iVar9 + (uVar16 + iVar8) * 8);
            iVar10 = *(iVar9 + uVar16 * 8) + iVar13;
            if (iVar10 < 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8005648);
                (*pcVar4)();
            }
            iVar2 = 0;
            if (iVar10 != 0) {
                iVar2 = (iVar13 * 100) / iVar10;
            }
            iVar7 = scnprintf(arg1 + uVar15 + uVar17,0x1000 - (uVar15 + uVar17),"%d%%\t\t",iVar2);
            uVar16 = uVar16 + 1;
            uVar17 = iVar7 + uVar17;
        } while (uVar16 <= uVar3);
        uVar17 = uVar17 + uVar15;
        iVar7 = scnprintf(arg1 + uVar17,0x1000 - uVar17,0x8000e43);
        uVar17 = iVar7 + uVar17;
        iVar7 = scnprintf(arg1 + uVar17,0x1000 - uVar17,0x8000e43);
        iVar10 = 0;
        uVar16 = 0;
        do {
            uVar15 = uVar16 + iVar8;
            uVar14 = uVar16;
            uVar16 = uVar16 + 1;
            iVar10 = *(iVar9 + uVar14 * 8) + iVar10 + *(iVar9 + uVar15 * 8);
        } while (uVar16 <= uVar3);
        iVar13 = 0;
        uVar16 = 0;
        do {
            uVar14 = uVar16;
            uVar16 = uVar16 + 1;
            iVar13 = *(iVar9 + uVar14 * 8) + iVar13;
        } while (uVar16 <= uVar3);
        uVar17 = uVar17 + iVar7;
        iVar2 = 0;
        if (iVar10 != 0) {
            iVar2 = (iVar13 * 0x6400000000 >> 0x20) / iVar10;
        }
        iVar8 = scnprintf(arg1 + uVar17,0x1000 - uVar17,"\tAvg Online %%:\t%d%%\n",iVar2);
        uVar17 = iVar8 + uVar17;
        iVar2 = 0;
        if (iVar10 != 0) {
            iVar2 = ((iVar10 - iVar13) * 0x6400000000 >> 0x20) / iVar10;
        }
        iVar8 = scnprintf(arg1 + uVar17,0x1000 - uVar17,"\tAvg Offline %%:\t%d%%\n",iVar2);
        uVar17 = iVar8 + uVar17;
        iVar8 = scnprintf(arg1 + uVar17,0x1000 - uVar17,0x8000e43);
        uVar14 = uVar17 + iVar8;
        kfree(iVar9);
    }
    return uVar14;
}


// ===== sym.show_mem_offline_granule @ 0x08005774 (size 68) =====

int64_t sym.show_mem_offline_granule(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%lu\n",_segment.ehdr << 0x14);
    return iVar1;
}


// ===== sym.show_anon_migrate @ 0x080057b8 (size 68) =====

int64_t sym.show_anon_migrate(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%lu\n",_obj.target_migrate_pages);
    return iVar1;
}


// ===== sym.store_anon_migrate @ 0x08005800 (size 228) =====

int64_t sym.store_anon_migrate(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    iVar4 = kstrtoint(arg1,0,&uStack_2c);
    if (-1 < iVar4) {
        uVar5 = uStack_2c;
        while( true ) {
            Hint_Prefetch(0x80002dc,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(0x80002dc,0x10);
                if (bVar2) {
                    cVar1 = ExclusiveMonitorsStatus();
                    _obj.target_migrate_pages = _obj.target_migrate_pages + uVar5;
                }
            } while (cVar1 != '\0');
            if ((_segment.ehdr & 1) == 0) {
                queue_work_on(0x20,_segment.ehdr,obj.fill_movable_zone_work);
            }
code_r0x08005884:
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_28) break;
            __stack_chk_fail();
            uVar5 = extraout_x8;
        }
        return arg2;
    }
    arg2 = iVar4;
    goto code_r0x08005884;
}


// ===== sym.__cfi_check_fail @ 0x080058e4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005928

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
    //switch table (4 cases) at 0x8001354
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800593c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005944 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08005978 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mem_offline_driver_probe.912f178c447211a3884891262d14862c.cfi_jt);
    return;
}

