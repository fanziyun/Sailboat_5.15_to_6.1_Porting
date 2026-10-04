// decompiled from perf_helper by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 576) =====

//WARNING: Switch with 1 destination removed at 0x08002d8c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x7bcbda558eb245e5) {
                pcVar2 = sym.kswapd_c_poll.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt;
            }
            else {
                if (arg1 != -0xec78b8726b9c1e8) {
                    if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x80012b8 >> 3 | pcVar1 << 0x3d) < 7)) {
                        return;
                    }
                    goto code_r0x08002d4c;
                }
                pcVar2 = sym.mimdtrigger_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt;
            }
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.seq_read.cfi_jt;
        }
        else {
            if (arg1 != 0x1b6c344e75cfc4ea) goto code_r0x08002d4c;
            pcVar2 = sym.mimdtrigger_store.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt;
        }
    }
    else if (arg1 < 0x641d19c7be126e92) {
        if (arg1 == 0x1d7ed092cb04d3f1) {
            if ((pcVar1 + -0x8001288 >> 3 | pcVar1 << 0x3d) < 5) {
                return;
            }
            goto code_r0x08002d4c;
        }
        if (arg1 != 0x321969b888d4949e) {
            if ((arg1 == 0x5233d5bc7887ae44) && ((pcVar1 + -0x80012f0 >> 3 | pcVar1 << 0x3d) < 6)) {
                return;
            }
            goto code_r0x08002d4c;
        }
        pcVar2 = sym.seq_lseek.cfi_jt;
    }
    else if (arg1 == 0x641d19c7be126e92) {
        pcVar2 = sym.kswapd.cfi_jt;
    }
    else if (arg1 == 0x7032419a61faba44) {
        pcVar2 = sym.mem_cgroup_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002d4c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002d4c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002da0);
    (*pcVar1)();
}


// ===== sym.seq_lseek.cfi_jt @ 0x08001248 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.kswapd.cfi_jt @ 0x08001250 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.kswapd.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001258 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry("perflock_records",0);
    remove_proc_entry("mimdlog",0);
    remove_proc_entry("global_reclaim",0);
    remove_proc_entry("kswapd_c",0);
    remove_proc_entry("vote_priority",0);
    remove_proc_entry("kcompactd_pid",0);
    if (*0x8090000 == 0) {
        sysfs_remove_group(0,obj.mimd_attr_group);
        kobject_put(*0x8090000);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001260 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.vote_list = obj.vote_list;
    *0x8090178 = obj.vote_list;
    _obj.trigger_head = obj.trigger_head;
    *0x8090168 = obj.trigger_head;
    iVar2 = proc_create("perflock_records",0x1b4,0,obj.perflock_records_ops);
    if (iVar2 == 0) {
        _printk(0x8000540);
    }
    iVar2 = proc_create("mimdlog",0x1b4,0,obj.mimdlog_ops);
    if (iVar2 == 0) {
        _printk(0x8000596);
    }
    iVar2 = proc_create("global_reclaim",0x1b4,0,obj.global_reclaim_ops);
    if (iVar2 == 0) {
        _printk(0x800062d);
    }
    iVar2 = proc_create("kswapd_c",0x1b4,0,obj.kswapd_c_ops);
    if (iVar2 == 0) {
        _printk(0x8000450);
    }
    iVar2 = proc_create("vote_priority",0x1b4,0,obj.vote_priority_ops);
    if (iVar2 == 0) {
        _printk(0x800068d);
    }
    iVar2 = proc_create("kcompactd_pid",0x1b4,0,obj.kcompactd_pid_ops);
    if (iVar2 == 0) {
        _printk(0x8000428);
    }
    *0x8090000 = kobject_create_and_add("mimd",0x8003150);
    if ((*0x8090000 != 0) && (iVar1 = sysfs_create_group(*0x8090000,obj.mimd_attr_group), iVar1 != 0)) {
        _printk(0x80005fd);
    }
    cgroup_add_legacy_cftypes(memory_cgrp_subsys,"reclaim_once");
    return 0;
}


// ===== sym.mimdtrigger_store.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001268 (size 8) =====

code * sym.mimdtrigger_store.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt
                 (ulong param_1,ulong param_2,ulong param_3,code *param_4,ulong param_5)

{
    bool bVar1;
    ulong *puVar2;
    int iVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    ulong unaff_x23;
    code *unaff_x24;
    uint64_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_50;
    int64_t iStack_48;
    
    pcVar9 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_50 = 0;
    iVar3 = kstrtoull(param_3,10,&uStack_50);
    if (iVar3 == 0) {
        mutex_lock(obj.trigger_event_lock);
        unaff_x23 = 0x8000000;
        if (_segment.ehdr < 0xb) {
            pcVar9 = 0x18;
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xcc0,0x18);
            if (puVar4 != NULL) {
                pcVar9 = obj.trigger_head;
                puVar4[2] = uStack_50;
                *puVar4 = puVar4;
                puVar4[1] = puVar4;
                puVar2 = *0x8090168;
                uVar7 = __list_add_valid(puVar4,*0x8090168,obj.trigger_head);
                if ((uVar7 & 1) != 0) {
                    *0x8090168 = puVar4;
                    *puVar4 = obj.trigger_head;
                    puVar4[1] = puVar2;
                    *puVar2 = puVar4;
                }
                _segment.ehdr = _segment.ehdr + 1;
                mutex_unlock(obj.trigger_event_lock);
                goto code_r0x08002a90;
            }
            mutex_unlock(obj.trigger_event_lock);
            uVar6 = 0x80006b5;
        }
        else {
            mutex_unlock(obj.trigger_event_lock);
            uVar6 = 0x8000473;
        }
        _printk(uVar6,"mimdtrigger");
    }
    else {
        param_4 = iVar3;
    }
code_r0x08002a90:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.mem_cgroup_write;
    pcStack_a8 = sym.mem_cgroup_write;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    puStack_b0 = &stack0xffffffffffffffc0;
    iVar5 = of_css();
    uStack_c0 = 0;
    uVar6 = strim(extraout_x1);
    iVar3 = kstrtoull(uVar6,10,&uStack_c0);
    if (iVar3 == 0) {
        MemoryCopyForward(unaff_x23,0xffffffff,param_5,1,0);
        uVar7 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        uVar12 = unaff_x23;
        if (uVar7 < uVar12) {
            uVar11 = 0;
            unaff_x24 = __per_cpu_offset;
            do {
                if (0x1f < uVar7) goto code_r0x08002d40;
                uVar11 = *(*(iVar5 + 0xe10) + *(__per_cpu_offset + (uVar7 & 0xffffffff) * 8) + 0x88) + uVar11;
                uVar7 = cpumask_next(uVar7,__cpu_possible_mask);
            } while (uVar7 < uVar12);
            uVar11 = uVar11 & (uVar11 >> 0x3f ^ 0xffffffffffffffffU);
        }
        else {
            uVar11 = 0;
        }
        uVar7 = cpumask_next(0xffffffff,__cpu_possible_mask);
        if (uVar7 < uVar12) {
            uVar10 = 0;
            do {
                if (0x1f < uVar7) {
code_r0x08002d40:
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x5512,0x8002d44);
                    (*pcVar9)();
                }
                uVar10 = *(*(iVar5 + 0xe10) + *(__per_cpu_offset + (uVar7 & 0xffffffff) * 8) + 0x98) + uVar10;
                uVar7 = cpumask_next(uVar7,__cpu_possible_mask);
            } while (uVar7 < uVar12);
            if (0 < uVar10) {
                iVar3 = 9;
                while (uVar7 = try_to_free_mem_cgroup_pages(iVar5,uVar10,0xcc0,1), uVar7 != 0) {
                    MemoryCopyForward(unaff_x24,0xffffffff,param_5,1,0);
                    uVar8 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
                    if (uVar8 < unaff_x24) {
                        uVar13 = 0;
                        do {
                            if (0x1f < uVar8) goto code_r0x08002d40;
                            uVar13 = *(*(iVar5 + 0xe10) + *(__per_cpu_offset + (uVar8 & 0xffffffff) * 8) + 0x88) +
                                     uVar13;
                            uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                        } while (uVar8 < unaff_x24);
                        if (uVar13 < 1) goto code_r0x08002ccc;
                        uVar8 = uVar13 - uVar11;
                        bVar1 = uVar11 < uVar13;
                        uVar11 = uVar13;
                        if ((bVar1) && (0x40 < uVar8)) {
                            _printk(0x80006e4);
                            break;
                        }
                    }
                    else {
code_r0x08002ccc:
                        uVar11 = 0;
                    }
                    uVar8 = 0;
                    if (uVar7 <= uVar10) {
                        uVar8 = uVar10 - uVar7;
                    }
                    if ((iVar3 == 0) || (iVar3 = iVar3 + -1, bVar1 = uVar10 <= uVar7, uVar10 = uVar8, bVar1)) break;
                }
            }
        }
    }
    else {
        pcVar9 = iVar3;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_b8) {
        auVar14 = __stack_chk_fail();
        pcVar9 = auVar14._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (pcVar9 != NULL) {
            switch(*pcVar9) {
            case 0x0:
            case 0x1:
            case 0x2:
            case 0x3:
            case 0x4:
                __ubsan_handle_cfi_check_fail_abort(pcVar9,auVar14._8_8_,0);
                break;
            default:
                return pcVar9;
            }
        }
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5502,0x8002da0);
        (*pcVar9)();
    }
    return pcVar9;
}


// ===== sym.mimdtrigger_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001270 (size 8) =====

int64_t sym.mimdtrigger_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.trigger_event_lock);
    piVar3 = *0x8090000;
    if (_obj.trigger_head == obj.trigger_head) {
        iVar6 = 0;
    }
    else {
        iVar4 = snprintf(param_3,0x1000,"%ld\n",(*0x8090000)[2]);
        iVar6 = iVar4;
        uVar5 = __list_del_entry_valid(piVar3);
        if ((uVar5 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3);
        _segment.ehdr = _segment.ehdr + -1;
    }
    mutex_unlock(obj.trigger_event_lock);
    return iVar6;
}


// ===== sym.seq_read.cfi_jt @ 0x08001278 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mem_cgroup_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001280 (size 8) =====

uchar * sym.mem_cgroup_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt
                  (ulong param_1,ulong param_2,uchar *param_3,ulong param_4,ulong param_5)

{
    bool bVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uchar *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong unaff_x23;
    code *unaff_x24;
    uint64_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    iVar4 = of_css();
    uStack_70 = 0;
    uVar5 = strim(param_2);
    iVar3 = kstrtoull(uVar5,10,&uStack_70);
    if (iVar3 == 0) {
        MemoryCopyForward(unaff_x23,0xffffffff,param_5,1,0);
        uVar6 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        uVar11 = unaff_x23;
        if (uVar6 < uVar11) {
            uVar10 = 0;
            unaff_x24 = __per_cpu_offset;
            do {
                if (0x1f < uVar6) goto code_r0x08002d40;
                uVar10 = *(*(iVar4 + 0xe10) + *(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + 0x88) + uVar10;
                uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            } while (uVar6 < uVar11);
            uVar10 = uVar10 & (uVar10 >> 0x3f ^ 0xffffffffffffffffU);
        }
        else {
            uVar10 = 0;
        }
        uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
        if (uVar6 < uVar11) {
            uVar9 = 0;
            do {
                if (0x1f < uVar6) {
code_r0x08002d40:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8002d44);
                    (*pcVar2)();
                }
                uVar9 = *(*(iVar4 + 0xe10) + *(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + 0x98) + uVar9;
                uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            } while (uVar6 < uVar11);
            if (0 < uVar9) {
                iVar3 = 9;
                while (uVar6 = try_to_free_mem_cgroup_pages(iVar4,uVar9,0xcc0,1), uVar6 != 0) {
                    MemoryCopyForward(unaff_x24,0xffffffff,param_5,1,0);
                    uVar7 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
                    if (uVar7 < unaff_x24) {
                        uVar12 = 0;
                        do {
                            if (0x1f < uVar7) goto code_r0x08002d40;
                            uVar12 = *(*(iVar4 + 0xe10) + *(__per_cpu_offset + (uVar7 & 0xffffffff) * 8) + 0x88) +
                                     uVar12;
                            uVar7 = cpumask_next(uVar7,__cpu_possible_mask);
                        } while (uVar7 < unaff_x24);
                        if (uVar12 < 1) goto code_r0x08002ccc;
                        uVar7 = uVar12 - uVar10;
                        bVar1 = uVar10 < uVar12;
                        uVar10 = uVar12;
                        if ((bVar1) && (0x40 < uVar7)) {
                            _printk(0x80006e4);
                            break;
                        }
                    }
                    else {
code_r0x08002ccc:
                        uVar10 = 0;
                    }
                    uVar7 = 0;
                    if (uVar6 <= uVar9) {
                        uVar7 = uVar9 - uVar6;
                    }
                    if ((iVar3 == 0) || (iVar3 = iVar3 + -1, bVar1 = uVar9 <= uVar6, uVar9 = uVar7, bVar1)) break;
                }
            }
        }
    }
    else {
        param_3 = iVar3;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        auVar13 = __stack_chk_fail();
        puVar8 = auVar13._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar13._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8002da0);
        (*pcVar2)();
    }
    return param_3;
}


// ===== sym.mimdlog_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001288 (size 8) =====

uint64_t sym.mimdlog_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    bool bVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
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
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
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
    if (param_3 < 0x81) {
        __check_object_size(&uStack_b8,param_3,0);
        iVar4 = sym._copy_from_user(&uStack_b8,param_2,param_3);
        if (iVar4 == 0) {
            iVar3 = _raw_spin_trylock(obj.ml_lock);
            if (iVar3 != 0) {
                if (0x7ff < *0x8090000) goto code_r0x08001a54;
                ktime_get_real_ts64(*0x8090000 * 0x90 + 0x80481e0);
                uVar5 = *0x8090000;
                uVar6 = *0x8090000 + 1;
                bVar1 = 0x7ff < *0x8090000;
                *0x8090000 = uVar6;
                if (bVar1) goto code_r0x08001a54;
                snprintf(obj.ml_buff + uVar5 * 0x90,0x80,0x800052b,&uStack_b8);
                if (0x7ff < *0x8090000) {
                    *0x8090000 = 0;
                }
                uVar6 = 0x800;
                if (*0x8090000 + 1 < 0x800) {
                    uVar6 = *0x8090000 + 1;
                }
                *0x8090000 = uVar6;
                _raw_spin_unlock(obj.ml_lock);
            }
        }
        else {
            param_3 = 0xfffffffffffffff2;
        }
    }
    else {
        param_3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_3;
    }
    __stack_chk_fail();
code_r0x08001a54:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001a58);
    (*pcVar2)();
}


// ===== sym.perflock_records_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001290 (size 8) =====

uint64_t sym.perflock_records_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt
                   (ulong param_1,int64_t param_2,uint64_t param_3)

{
    bool bVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
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
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
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
    if (param_3 < 0x81) {
        __check_object_size(&uStack_b8,param_3,0);
        iVar5 = sym._copy_from_user(&uStack_b8,param_2,param_3);
        if (iVar5 == 0) {
            iVar4 = _raw_spin_trylock(obj.plr_lock);
            if (iVar4 != 0) {
                if (0x7ff < *0x8090000) goto code_r0x080014dc;
                ktime_get_real_ts64(*0x8090000 * 0x90 + 0x80001e0);
                uVar6 = *0x8090000;
                uVar2 = *0x8090000 + 1;
                bVar1 = 0x7ff < *0x8090000;
                *0x8090000 = uVar2;
                if (bVar1) goto code_r0x080014dc;
                snprintf("reclaim_once" + uVar6 * 0x90,0x80,0x800052b,&uStack_b8);
                if (0x7ff < *0x8090000) {
                    *0x8090000 = 0;
                }
                uVar2 = *0x8090000 + 1;
                if ((0x7ff < *0x8090000 + 1) && (uVar2 = 0, *0x8090000 + 2 < 0x800)) {
                    uVar2 = *0x8090000 + 2;
                }
                *0x8090000 = uVar2;
                _raw_spin_unlock(obj.plr_lock);
            }
        }
        else {
            param_3 = 0xfffffffffffffff2;
        }
    }
    else {
        param_3 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return param_3;
    }
    __stack_chk_fail();
code_r0x080014dc:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80014e0);
    (*pcVar3)();
}


// ===== sym.kswapd_c_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001298 (size 8) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.kswapd_c_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint64_t auStack_a0 [10];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    auStack_a0[9] = *(iVar2 + 0x5e0);
    auStack_a0[7] = 0;
    auStack_a0[8] = 0;
    auStack_a0[5] = 0;
    auStack_a0[6] = 0;
    auStack_a0[3] = 0;
    auStack_a0[4] = 0;
    auStack_a0[1] = 0;
    auStack_a0[2] = 0;
    auStack_a0[0] = 0;
    if (param_3 < 0x41) {
        __check_object_size(auStack_a0 + 1,param_3,0);
        iVar2 = sym._copy_from_user(auStack_a0 + 1,param_2,param_3);
        if ((iVar2 == 0) && (iVar1 = kstrtoull(auStack_a0 + 1,10,auStack_a0), iVar1 == 0)) {
            if (0xfffffffffffffff7 < auStack_a0[0] - 9) {
                mutex_lock(obj.kswapd_lock);
                uVar3 = 1;
                auStack_a0[0] = auStack_a0[0] - 1;
                do {
                    if (auStack_a0[0] < uVar3) {
                        if (*(obj.kswapd_array + uVar3 * 8) != 0) {
                            kthread_stop();
                            uVar6 = 0;
code_r0x0800206c:
                            *(obj.kswapd_array + uVar3 * 8) = uVar6;
                        }
                    }
                    else if ((*(obj.kswapd_array + uVar3 * 8) == 0) &&
                            (uVar6 = kthread_create_on_node
                                               (sym.kswapd.cfi_jt,contig_page_data,0xffffffff,"kswapd%d",uVar3),
                            uVar6 < 0xfffffffffffff001)) {
                        wake_up_process();
                        goto code_r0x0800206c;
                    }
                    if (uVar3 == 7) goto code_r0x08002084;
                    uVar3 = uVar3 + 1;
                } while( true );
            }
            _printk(0x80005c1);
            param_3 = 0xffffffffffffffea;
        }
        else {
            param_3 = 0xfffffffffffffff2;
        }
    }
    else {
        param_3 = 0xffffffffffffffea;
    }
code_r0x08001f9c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == auStack_a0[9]) {
        return param_3;
    }
    auVar7 = __stack_chk_fail();
    puVar4 = auVar7._8_8_;
    *extraout_x18 = sym.kswapd_c_poll;
    if ((puVar4 != NULL) && (pcVar5 = *puVar4, pcVar5 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar5,0x80003c0);
        (*pcVar5)(auVar7._0_8_,obj.kswapd_c_poll_wait,puVar4);
    }
    if (_obj.kswapd_c_trigger == 0) {
        uVar3 = 0x145;
    }
    else {
        uVar3 = 0x147;
        *0x8090000 = 0;
    }
    return uVar3;
code_r0x08002084:
    mutex_unlock(obj.kswapd_lock);
    *0x8090000 = 1;
    __wake_up(obj.kswapd_c_poll_wait,3,1,0);
    goto code_r0x08001f9c;
}


// ===== sym.vote_priority_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012a0 (size 8) =====

uint64_t sym.vote_priority_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt
                   (ulong param_1,int64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    code *pcVar7;
    code *pcVar8;
    ulong *puVar9;
    ulong unaff_x30;
    uint32_t uStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_8c = 0;
    if (param_3 < 0x41) {
        __check_object_size(&uStack_88,param_3,0);
        iVar4 = sym._copy_from_user(&uStack_88,param_2,param_3);
        if (iVar4 == 0) {
            iVar3 = sscanf(&uStack_88,0x80003f6,&uStack_8c);
            if (iVar3 == 1) {
                pcVar8 = obj.vote_list;
                uVar1 = uStack_8c & 0xff;
                uVar2 = uStack_8c >> 8 & 0xff;
                for (pcVar7 = _obj.vote_list; pcVar7 != obj.vote_list; pcVar7 = *pcVar7) {
                    if (*(pcVar7 + 0x10) <= uVar1) {
                        pcVar8 = pcVar7;
                        if (uVar1 <= *(pcVar7 + 0x10)) {
                            *(pcVar7 + 0x14) = uVar2;
                            pcVar7 = *0x8090178;
                            goto joined_r0x0800258c;
                        }
                        break;
                    }
                }
                iVar4 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar4 = 0x30;
                }
                puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xcc0,0x18);
                *(puVar5 + 2) = uVar1;
                *(puVar5 + 0x14) = uVar2;
                puVar9 = *(pcVar8 + 8);
                uVar6 = __list_add_valid(puVar5,puVar9,pcVar8);
                pcVar7 = *0x8090178;
                if ((uVar6 & 1) != 0) {
                    *(pcVar8 + 8) = puVar5;
                    *puVar5 = pcVar8;
                    puVar5[1] = puVar9;
                    *puVar9 = puVar5;
                    pcVar7 = *0x8090178;
                }
joined_r0x0800258c:
                do {
                    if (pcVar7 == obj.vote_list) goto code_r0x080025a8;
                    uVar6 = *(pcVar7 + 0x14);
                    if (*(pcVar7 + 0x14) != 0xff) goto code_r0x080025ac;
                    pcVar7 = *(pcVar7 + 8);
                } while( true );
            }
            _printk(0x80003f9);
            param_3 = 0xffffffffffffffea;
        }
        else {
            param_3 = 0xfffffffffffffff2;
        }
    }
    else {
        param_3 = 0xffffffffffffffea;
    }
code_r0x080025b0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return param_3;
    }
    __stack_chk_fail();
    return 0;
code_r0x080025a8:
    uVar6 = 0xff;
code_r0x080025ac:
    sym.kswapd_bind(uVar6);
    goto code_r0x080025b0;
}


// ===== sym.global_reclaim_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012a8 (size 8) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.global_reclaim_write.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt
                   (ulong param_1,int64_t param_2,uint64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t aiStack_70 [10];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    aiStack_70[9] = *(iVar2 + 0x5e0);
    aiStack_70[7] = 0;
    aiStack_70[8] = 0;
    aiStack_70[5] = 0;
    aiStack_70[6] = 0;
    aiStack_70[3] = 0;
    aiStack_70[4] = 0;
    aiStack_70[1] = 0;
    aiStack_70[2] = 0;
    aiStack_70[0] = 0;
    if (param_3 < 0x41) {
        __check_object_size(aiStack_70 + 1,param_3,0);
        iVar2 = sym._copy_from_user(aiStack_70 + 1,param_2,param_3);
        if (iVar2 == 0) {
            iVar1 = kstrtoull(aiStack_70 + 1,10,aiStack_70);
            if (iVar1 == 0) {
                if (aiStack_70[0] == 0) {
                    param_3 = 0;
                }
                else {
                    uVar3 = try_to_free_mem_cgroup_pages(0,aiStack_70[0],0xcc0,1);
                    iVar1 = _raw_spin_trylock(obj.mr_lock);
                    if (iVar1 != 0) {
                        snprintf(obj.reclaim_buff,0x40,"reclaim %lu pages",uVar3);
                        _raw_spin_unlock(obj.mr_lock);
                    }
                }
            }
            else {
                param_3 = iVar1;
            }
        }
        else {
            param_3 = 0xfffffffffffffff2;
        }
    }
    else {
        param_3 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == aiStack_70[9]) {
        return param_3;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.global_reclaim_show;
    _raw_spin_lock(obj.ml_lock);
    seq_printf(uVar3,0x800052b,obj.reclaim_buff);
    _raw_spin_unlock(obj.ml_lock);
    return 0;
}


// ===== sym.kswapd_c_poll.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012b0 (size 8) =====

ulong sym.kswapd_c_poll.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,ulong *param_2)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != NULL) && (pcVar2 = *param_2, pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar2,0x80003c0);
        (*pcVar2)(param_1,obj.kswapd_c_poll_wait,param_2);
    }
    if (_obj.kswapd_c_trigger == 0) {
        uVar1 = 0x145;
    }
    else {
        uVar1 = 0x147;
        *0x8090000 = 0;
    }
    return uVar1;
}


// ===== sym.single_release.cfi_jt @ 0x080012b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.global_reclaim_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012c0 (size 8) =====

void sym.global_reclaim_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.global_reclaim_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.mimdlog_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012c8 (size 8) =====

void sym.mimdlog_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.mimd_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.perflock_records_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012d0 (size 8) =====

void sym.perflock_records_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.perflock_records_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.kcompactd_pid_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012d8 (size 8) =====

void sym.kcompactd_pid_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.kcompactd_pid_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.kswapd_c_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012e0 (size 8) =====

void sym.kswapd_c_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,ulong param_2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_read_lock(tasklist_lock);
    pcVar4 = *0x8091524 + -0x4d0;
    iVar3 = *0x8091524;
    pcVar1 = *0x8090000;
    if (pcVar4 != init_task) {
        do {
            if ((*(iVar3 + 0x50) == 0) && (iVar2 = strncmp(iVar3 + 0x2d8,"kswapd0",7), pcVar1 = pcVar4, iVar2 == 0))
            break;
            pcVar1 = pcVar4 + 0x4d0;
            pcVar4 = *pcVar1 + -0x4d0;
            iVar3 = *pcVar1;
            pcVar1 = *0x8090000;
        } while (pcVar4 != init_task);
    }
    *0x8090000 = pcVar1;
    _raw_read_unlock(tasklist_lock);
    single_open(param_2,sym.kswapd_c_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.vote_priority_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012e8 (size 8) =====

void sym.vote_priority_open.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.vote_priority_init.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.kcompactd_pid_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012f0 (size 8) =====

ulong sym.kcompactd_pid_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1)

{
    int iVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_read_lock(tasklist_lock);
    piVar3 = *0x8091524;
    do {
        if (piVar3 == 0x8091524) {
            uVar2 = 0;
code_r0x08002888:
            _raw_read_unlock(tasklist_lock);
            seq_printf(param_1,0x80003f6,uVar2);
            return 0;
        }
        if ((piVar3[10] == 0) && (iVar1 = strncmp(piVar3 + 0x5b,"kcompactd0",10), iVar1 == 0)) {
            uVar2 = *(piVar3 + 0x21);
            goto code_r0x08002888;
        }
        piVar3 = *piVar3;
    } while( true );
}


// ===== sym.global_reclaim_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x080012f8 (size 8) =====

ulong sym.global_reclaim_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.ml_lock);
    seq_printf(param_1,0x800052b,obj.reclaim_buff);
    _raw_spin_unlock(obj.ml_lock);
    return 0;
}


// ===== sym.perflock_records_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001300 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001650)
//WARNING: Removing unreachable block (ram,0x08001664)
//WARNING: Removing unreachable block (ram,0x0800166c)

uint64_t sym.perflock_records_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt
                   (ulong param_1,ulong param_2,uint64_t param_3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    code *pcVar4;
    bool bVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    char *pcVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    _raw_spin_lock(obj.plr_lock);
    if (*0x8090000 < 0x800) {
        if (*0x8090000 != 0) {
            uVar9 = 0;
            pcVar10 = "reclaim_once";
            do {
                if (uVar9 == 0x800) {
code_r0x080016fc:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x8001700);
                    (*pcVar4)();
                }
                rtc_time64_to_tm(*(pcVar10 + 0x80),&uStack_90);
                param_3 = uStack_80._4_4_ + 0x76c;
                seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",param_3,uStack_80 + 1,uStack_88._4_4_
                           ,uStack_88 & 0xffffffff,uStack_90._4_4_,uStack_90 & 0xffffffff,pcVar10);
                uVar9 = uVar9 + 1;
                pcVar10 = pcVar10 + 0x90;
            } while (uVar9 < *0x8090000);
        }
    }
    else {
        uVar9 = *0x8090000;
        if (*0x8090000 < 0x800) {
            uVar11 = uVar9 * 0x90 + 0x80;
            uVar7 = *0x8090000;
            if (*0x8090000 < 0x801) {
                uVar7 = 0x800;
            }
            do {
                if (uVar7 == uVar9) goto code_r0x080016fc;
                if (0x47fff < uVar11) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(1,0x8001704);
                    (*pcVar4)();
                }
                rtc_time64_to_tm(*("reclaim_once" + uVar11),&uStack_90);
                param_3 = uStack_80._4_4_ + 0x76c;
                seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",param_3,uStack_80 + 1,uStack_88._4_4_
                           ,uStack_88 & 0xffffffff,uStack_90._4_4_,uStack_90 & 0xffffffff,uVar11 + 0x80000e0);
                uVar9 = uVar9 + 1;
                uVar11 = uVar11 + 0x90;
            } while (uVar9 != 0x800);
        }
    }
    _raw_spin_unlock(obj.plr_lock);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return 0;
    }
    auVar12 = __stack_chk_fail();
    uVar11 = auVar12._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar3 = sp_el0;
    uVar9 = (uVar11 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar8 = uVar11, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar8 = uVar11 & uVar9;
    }
    bVar5 = CARRY8(uVar8,param_3);
    uVar8 = uVar8 + param_3;
    uVar1 = 0;
    if (!bVar5 || uVar8 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar8 = 0xffffffffffffffff;
    }
    uVar6 = param_3;
    if (!CARRY8(uVar8,~uVar1) && !CARRY8(uVar8 + ~uVar1,bVar5) || uVar8 == uVar1 + !bVar5) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
        if ((uVar11 & uVar9 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        uVar6 = __arch_copy_from_user(auVar12._0_8_,uVar11,param_3);
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
    }
    if (uVar6 != 0) {
        memset(auVar12._0_8_ + (param_3 - uVar6),0,uVar6);
    }
    return uVar6;
}


// ===== sym.mimd_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001308 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001bc8)
//WARNING: Removing unreachable block (ram,0x08001bdc)
//WARNING: Removing unreachable block (ram,0x08001be4)

ulong sym.mimd_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong extraout_x1;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    _raw_spin_lock(obj.ml_lock);
    if (*0x8090000 < 0x800) {
        if (*0x8090000 != 0) {
            uVar5 = 0;
            pcVar2 = obj.ml_buff;
            do {
                if (uVar5 == 0x800) {
code_r0x08001c74:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8001c78);
                    (*pcVar2)();
                }
                rtc_time64_to_tm(*(pcVar2 + 0x80),&uStack_90);
                seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",uStack_80._4_4_ + 0x76c,uStack_80 + 1,
                           uStack_88._4_4_,uStack_88 & 0xffffffff,uStack_90._4_4_,uStack_90 & 0xffffffff,pcVar2);
                uVar5 = uVar5 + 1;
                pcVar2 = pcVar2 + 0x90;
            } while (uVar5 < *0x8090000);
        }
    }
    else {
        uVar5 = *0x8090000;
        if (*0x8090000 < 0x800) {
            uVar6 = uVar5 * 0x90 + 0x80;
            uVar4 = *0x8090000;
            if (*0x8090000 < 0x801) {
                uVar4 = 0x800;
            }
            do {
                if (uVar4 == uVar5) goto code_r0x08001c74;
                if (0x47fff < uVar6) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(1,0x8001c7c);
                    (*pcVar2)();
                }
                rtc_time64_to_tm(*(obj.ml_buff + uVar6),&uStack_90);
                seq_printf(param_1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",uStack_80._4_4_ + 0x76c,uStack_80 + 1,
                           uStack_88._4_4_,uStack_88 & 0xffffffff,uStack_90._4_4_,uStack_90 & 0xffffffff,
                           uVar6 + 0x80480e0);
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 + 0x90;
            } while (uVar5 != 0x800);
        }
    }
    _raw_spin_unlock(obj.ml_lock);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.global_reclaim_open;
    uVar3 = single_open(extraout_x1,sym.global_reclaim_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return uVar3;
}


// ===== sym.kswapd_c_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001310 (size 8) =====

ulong sym.kswapd_c_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(ulong param_1)

{
    code *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_439 [1025];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    memset(auStack_439 + 1,0,0x400);
    mutex_lock(obj.kswapd_lock);
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = strlen(auStack_439 + 1);
    if (iVar3 - 1U < 0x400) {
        auStack_439[iVar3] = 0;
        mutex_unlock(obj.kswapd_lock);
        seq_printf(param_1,0x80006e0,auStack_439 + 1);
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) {
            return 0;
        }
        __stack_chk_fail();
        *extraout_x18 = sym.vote_priority_open;
        uVar4 = single_open(extraout_x1,sym.vote_priority_init.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
        return uVar4;
    }
code_r0x08002408:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800240c);
    (*pcVar1)();
}


// ===== sym.vote_priority_init.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt @ 0x08001318 (size 8) =====

ulong sym.vote_priority_init.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt(void)

{
    return 0;
}


// ===== sym.perflock_records_open @ 0x08001320 (size 52) =====

void sym.perflock_records_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.perflock_records_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.perflock_records_write @ 0x08001354 (size 396) =====

uint64_t sym.perflock_records_write(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
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
    
    arg3 = arg2;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
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
    if (arg3 < 0x81) {
        __check_object_size(&uStack_b8,arg3,0);
        iVar5 = sym._copy_from_user(&uStack_b8,arg1,arg3);
        if (iVar5 == 0) {
            iVar4 = _raw_spin_trylock(obj.plr_lock);
            if (iVar4 != 0) {
                if (0x7ff < *0x8090000) goto code_r0x080014dc;
                ktime_get_real_ts64(*0x8090000 * 0x90 + 0x80001e0);
                uVar6 = *0x8090000;
                uVar2 = *0x8090000 + 1;
                bVar1 = 0x7ff < *0x8090000;
                *0x8090000 = uVar2;
                if (bVar1) goto code_r0x080014dc;
                snprintf("reclaim_once" + uVar6 * 0x90,0x80,0x800052b,&uStack_b8);
                if (0x7ff < *0x8090000) {
                    *0x8090000 = 0;
                }
                uVar2 = *0x8090000 + 1;
                if ((0x7ff < *0x8090000 + 1) && (uVar2 = 0, *0x8090000 + 2 < 0x800)) {
                    uVar2 = *0x8090000 + 2;
                }
                *0x8090000 = uVar2;
                _raw_spin_unlock(obj.plr_lock);
            }
        }
        else {
            arg3 = 0xfffffffffffffff2;
        }
    }
    else {
        arg3 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail();
code_r0x080014dc:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80014e0);
    (*pcVar3)();
}


// ===== sym.perflock_records_show @ 0x080014e0 (size 552) =====

//WARNING: Removing unreachable block (ram,0x08001650)
//WARNING: Removing unreachable block (ram,0x08001664)
//WARNING: Removing unreachable block (ram,0x0800166c)

uint64_t sym.perflock_records_show(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    code *pcVar4;
    bool bVar5;
    uint64_t uVar6;
    uint64_t in_x2;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    char *pcVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    _raw_spin_lock(obj.plr_lock);
    if (*0x8090000 < 0x800) {
        if (*0x8090000 != 0) {
            uVar9 = 0;
            pcVar10 = "reclaim_once";
            do {
                if (uVar9 == 0x800) {
code_r0x080016fc:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x8001700);
                    (*pcVar4)();
                }
                rtc_time64_to_tm(*(pcVar10 + 0x80),&uStack_90);
                in_x2 = uStack_80._4_4_ + 0x76c;
                seq_printf(arg1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",in_x2,uStack_80 + 1,uStack_88._4_4_,
                           uStack_88 & 0xffffffff,uStack_90._4_4_,uStack_90 & 0xffffffff,pcVar10);
                uVar9 = uVar9 + 1;
                pcVar10 = pcVar10 + 0x90;
            } while (uVar9 < *0x8090000);
        }
    }
    else {
        uVar9 = *0x8090000;
        if (*0x8090000 < 0x800) {
            uVar11 = uVar9 * 0x90 + 0x80;
            uVar7 = *0x8090000;
            if (*0x8090000 < 0x801) {
                uVar7 = 0x800;
            }
            do {
                if (uVar7 == uVar9) goto code_r0x080016fc;
                if (0x47fff < uVar11) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(1,0x8001704);
                    (*pcVar4)();
                }
                rtc_time64_to_tm(*("reclaim_once" + uVar11),&uStack_90);
                in_x2 = uStack_80._4_4_ + 0x76c;
                seq_printf(arg1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",in_x2,uStack_80 + 1,uStack_88._4_4_,
                           uStack_88 & 0xffffffff,uStack_90._4_4_,uStack_90 & 0xffffffff,uVar11 + 0x80000e0);
                uVar9 = uVar9 + 1;
                uVar11 = uVar11 + 0x90;
            } while (uVar9 != 0x800);
        }
    }
    _raw_spin_unlock(obj.plr_lock);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return 0;
    }
    auVar12 = __stack_chk_fail();
    uVar11 = auVar12._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar3 = sp_el0;
    uVar9 = (uVar11 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar8 = uVar11, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar8 = uVar11 & uVar9;
    }
    bVar5 = CARRY8(uVar8,in_x2);
    uVar8 = uVar8 + in_x2;
    uVar1 = 0;
    if (!bVar5 || uVar8 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar8 = 0xffffffffffffffff;
    }
    uVar6 = in_x2;
    if (!CARRY8(uVar8,~uVar1) && !CARRY8(uVar8 + ~uVar1,bVar5) || uVar8 == uVar1 + !bVar5) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
        if ((uVar11 & uVar9 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        uVar6 = __arch_copy_from_user(auVar12._0_8_,uVar11,in_x2);
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
    }
    if (uVar6 != 0) {
        memset(auVar12._0_8_ + (in_x2 - uVar6),0,uVar6);
    }
    return uVar6;
}


// ===== sym._copy_from_user @ 0x08001708 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.mimdlog_open @ 0x080018bc (size 52) =====

void sym.mimdlog_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.mimd_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.mimdlog_write @ 0x080018f0 (size 360) =====

uint64_t sym.mimdlog_write(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
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
    
    arg3 = arg2;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
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
    if (arg3 < 0x81) {
        __check_object_size(&uStack_b8,arg3,0);
        iVar4 = sym._copy_from_user(&uStack_b8,arg1,arg3);
        if (iVar4 == 0) {
            iVar3 = _raw_spin_trylock(obj.ml_lock);
            if (iVar3 != 0) {
                if (0x7ff < *0x8090000) goto code_r0x08001a54;
                ktime_get_real_ts64(*0x8090000 * 0x90 + 0x80481e0);
                uVar5 = *0x8090000;
                uVar6 = *0x8090000 + 1;
                bVar1 = 0x7ff < *0x8090000;
                *0x8090000 = uVar6;
                if (bVar1) goto code_r0x08001a54;
                snprintf(obj.ml_buff + uVar5 * 0x90,0x80,0x800052b,&uStack_b8);
                if (0x7ff < *0x8090000) {
                    *0x8090000 = 0;
                }
                uVar6 = 0x800;
                if (*0x8090000 + 1 < 0x800) {
                    uVar6 = *0x8090000 + 1;
                }
                *0x8090000 = uVar6;
                _raw_spin_unlock(obj.ml_lock);
            }
        }
        else {
            arg3 = 0xfffffffffffffff2;
        }
    }
    else {
        arg3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail();
code_r0x08001a54:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001a58);
    (*pcVar2)();
}


// ===== sym.mimd_show @ 0x08001a58 (size 552) =====

//WARNING: Removing unreachable block (ram,0x08001bc8)
//WARNING: Removing unreachable block (ram,0x08001bdc)
//WARNING: Removing unreachable block (ram,0x08001be4)

ulong sym.mimd_show(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong extraout_x1;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    _raw_spin_lock(obj.ml_lock);
    if (*0x8090000 < 0x800) {
        if (*0x8090000 != 0) {
            uVar5 = 0;
            pcVar2 = obj.ml_buff;
            do {
                if (uVar5 == 0x800) {
code_r0x08001c74:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8001c78);
                    (*pcVar2)();
                }
                rtc_time64_to_tm(*(pcVar2 + 0x80),&uStack_90);
                seq_printf(arg1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",uStack_80._4_4_ + 0x76c,uStack_80 + 1,
                           uStack_88._4_4_,uStack_88 & 0xffffffff,uStack_90._4_4_,uStack_90 & 0xffffffff,pcVar2);
                uVar5 = uVar5 + 1;
                pcVar2 = pcVar2 + 0x90;
            } while (uVar5 < *0x8090000);
        }
    }
    else {
        uVar5 = *0x8090000;
        if (*0x8090000 < 0x800) {
            uVar6 = uVar5 * 0x90 + 0x80;
            uVar4 = *0x8090000;
            if (*0x8090000 < 0x801) {
                uVar4 = 0x800;
            }
            do {
                if (uVar4 == uVar5) goto code_r0x08001c74;
                if (0x47fff < uVar6) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(1,0x8001c7c);
                    (*pcVar2)();
                }
                rtc_time64_to_tm(*(obj.ml_buff + uVar6),&uStack_90);
                seq_printf(arg1,"%d-%02d-%02d %02d:%02d:%02d UTC { %s }\n",uStack_80._4_4_ + 0x76c,uStack_80 + 1,
                           uStack_88._4_4_,uStack_88 & 0xffffffff,uStack_90._4_4_,uStack_90 & 0xffffffff,
                           uVar6 + 0x80480e0);
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 + 0x90;
            } while (uVar5 != 0x800);
        }
    }
    _raw_spin_unlock(obj.ml_lock);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.global_reclaim_open;
    uVar3 = single_open(extraout_x1,sym.global_reclaim_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return uVar3;
}


// ===== sym.global_reclaim_open @ 0x08001c80 (size 52) =====

void sym.global_reclaim_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.global_reclaim_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.global_reclaim_write @ 0x08001cb4 (size 296) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.global_reclaim_write(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t arg3;
    ulong unaff_x30;
    int64_t aiStack_70 [10];
    
    arg3 = arg2;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    aiStack_70[9] = *(iVar2 + 0x5e0);
    aiStack_70[7] = 0;
    aiStack_70[8] = 0;
    aiStack_70[5] = 0;
    aiStack_70[6] = 0;
    aiStack_70[3] = 0;
    aiStack_70[4] = 0;
    aiStack_70[1] = 0;
    aiStack_70[2] = 0;
    aiStack_70[0] = 0;
    if (arg3 < 0x41) {
        __check_object_size(aiStack_70 + 1,arg3,0);
        iVar2 = sym._copy_from_user(aiStack_70 + 1,arg1,arg3);
        if (iVar2 == 0) {
            iVar1 = kstrtoull(aiStack_70 + 1,10,aiStack_70);
            if (iVar1 == 0) {
                if (aiStack_70[0] == 0) {
                    arg3 = 0;
                }
                else {
                    uVar3 = try_to_free_mem_cgroup_pages(0,aiStack_70[0],0xcc0,1);
                    iVar1 = _raw_spin_trylock(obj.mr_lock);
                    if (iVar1 != 0) {
                        snprintf(obj.reclaim_buff,0x40,"reclaim %lu pages",uVar3);
                        _raw_spin_unlock(obj.mr_lock);
                    }
                }
            }
            else {
                arg3 = iVar1;
            }
        }
        else {
            arg3 = 0xfffffffffffffff2;
        }
    }
    else {
        arg3 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == aiStack_70[9]) {
        return arg3;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.global_reclaim_show;
    _raw_spin_lock(obj.ml_lock);
    seq_printf(uVar3,0x800052b,obj.reclaim_buff);
    _raw_spin_unlock(obj.ml_lock);
    return 0;
}


// ===== sym.global_reclaim_show @ 0x08001ddc (size 96) =====

ulong sym.global_reclaim_show(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.ml_lock);
    seq_printf(arg1,0x800052b,obj.reclaim_buff);
    _raw_spin_unlock(obj.ml_lock);
    return 0;
}


// ===== sym.kswapd_c_open @ 0x08001e3c (size 192) =====

void sym.kswapd_c_open(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_read_lock(tasklist_lock);
    pcVar4 = *0x8091524 + -0x4d0;
    iVar3 = *0x8091524;
    pcVar1 = *0x8090000;
    if (pcVar4 != init_task) {
        do {
            if ((*(iVar3 + 0x50) == 0) && (iVar2 = strncmp(iVar3 + 0x2d8,"kswapd0",7), pcVar1 = pcVar4, iVar2 == 0))
            break;
            pcVar1 = pcVar4 + 0x4d0;
            pcVar4 = *pcVar1 + -0x4d0;
            iVar3 = *pcVar1;
            pcVar1 = *0x8090000;
        } while (pcVar4 != init_task);
    }
    *0x8090000 = pcVar1;
    _raw_read_unlock(tasklist_lock);
    single_open(arg1,sym.kswapd_c_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.kswapd_c_write @ 0x08001f04 (size 460) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.kswapd_c_write(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    code *pcVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint64_t auStack_a0 [10];
    
    uVar4 = arg2;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    auStack_a0[9] = *(iVar2 + 0x5e0);
    auStack_a0[7] = 0;
    auStack_a0[8] = 0;
    auStack_a0[5] = 0;
    auStack_a0[6] = 0;
    auStack_a0[3] = 0;
    auStack_a0[4] = 0;
    auStack_a0[1] = 0;
    auStack_a0[2] = 0;
    auStack_a0[0] = 0;
    if (uVar4 < 0x41) {
        __check_object_size(auStack_a0 + 1,uVar4,0);
        iVar2 = sym._copy_from_user(auStack_a0 + 1,arg1,uVar4);
        if ((iVar2 == 0) && (iVar1 = kstrtoull(auStack_a0 + 1,10,auStack_a0), iVar1 == 0)) {
            if (0xfffffffffffffff7 < auStack_a0[0] - 9) {
                mutex_lock(obj.kswapd_lock);
                uVar5 = 1;
                auStack_a0[0] = auStack_a0[0] - 1;
                do {
                    if (auStack_a0[0] < uVar5) {
                        if (*(obj.kswapd_array + uVar5 * 8) != 0) {
                            kthread_stop();
                            uVar7 = 0;
code_r0x0800206c:
                            *(obj.kswapd_array + uVar5 * 8) = uVar7;
                        }
                    }
                    else if ((*(obj.kswapd_array + uVar5 * 8) == 0) &&
                            (uVar7 = kthread_create_on_node
                                               (sym.kswapd.cfi_jt,contig_page_data,0xffffffff,"kswapd%d",uVar5),
                            uVar7 < 0xfffffffffffff001)) {
                        wake_up_process();
                        goto code_r0x0800206c;
                    }
                    if (uVar5 == 7) goto code_r0x08002084;
                    uVar5 = uVar5 + 1;
                } while( true );
            }
            _printk(0x80005c1);
            uVar4 = 0xffffffffffffffea;
        }
        else {
            uVar4 = 0xfffffffffffffff2;
        }
    }
    else {
        uVar4 = 0xffffffffffffffea;
    }
code_r0x08001f9c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == auStack_a0[9]) {
        return uVar4;
    }
    auVar8 = __stack_chk_fail();
    puVar3 = auVar8._8_8_;
    *extraout_x18 = sym.kswapd_c_poll;
    if ((puVar3 != NULL) && (pcVar6 = *puVar3, pcVar6 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar6,0x80003c0);
        (*pcVar6)(auVar8._0_8_,obj.kswapd_c_poll_wait,puVar3);
    }
    if (_obj.kswapd_c_trigger == 0) {
        uVar4 = 0x145;
    }
    else {
        uVar4 = 0x147;
        *0x8090000 = 0;
    }
    return uVar4;
code_r0x08002084:
    mutex_unlock(obj.kswapd_lock);
    *0x8090000 = 1;
    __wake_up(obj.kswapd_c_poll_wait,3,1,0);
    goto code_r0x08001f9c;
}


// ===== sym.kswapd_c_poll @ 0x080020d0 (size 156) =====

ulong sym.kswapd_c_poll(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) && (pcVar2 = *arg2, pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar2,0x80003c0);
        (*pcVar2)(arg1,obj.kswapd_c_poll_wait,arg2);
    }
    if (_obj.kswapd_c_trigger == 0) {
        uVar1 = 0x145;
    }
    else {
        uVar1 = 0x147;
        *0x8090000 = 0;
    }
    return uVar1;
}


// ===== sym.kswapd_c_show @ 0x08002170 (size 672) =====

ulong sym.kswapd_c_show(int64_t arg1)

{
    code *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_439 [1025];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    memset(auStack_439 + 1,0,0x400);
    mutex_lock(obj.kswapd_lock);
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = *0x8090000;
    if (*0x8090000 != 0) {
        uVar2 = strlen(auStack_439 + 1);
        if (0x400 < uVar2) goto code_r0x08002408;
        snprintf(auStack_439 + uVar2 + 1,0x400 - uVar2,0x8000672,*(iVar3 + 0x5d8));
    }
    iVar3 = strlen(auStack_439 + 1);
    if (iVar3 - 1U < 0x400) {
        auStack_439[iVar3] = 0;
        mutex_unlock(obj.kswapd_lock);
        seq_printf(arg1,0x80006e0,auStack_439 + 1);
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) {
            return 0;
        }
        __stack_chk_fail();
        *extraout_x18 = sym.vote_priority_open;
        uVar4 = single_open(extraout_x1,sym.vote_priority_init.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
        return uVar4;
    }
code_r0x08002408:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800240c);
    (*pcVar1)();
}


// ===== sym.vote_priority_open @ 0x08002410 (size 52) =====

void sym.vote_priority_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.vote_priority_init.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.vote_priority_write @ 0x08002444 (size 444) =====

uint64_t sym.vote_priority_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t arg3_00;
    code *pcVar7;
    code *pcVar8;
    ulong *puVar9;
    ulong unaff_x30;
    uint32_t uStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    arg3_00 = arg3;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_8c = 0;
    if (arg3_00 < 0x41) {
        __check_object_size(&uStack_88,arg3_00,0);
        arg1 = sym._copy_from_user(&uStack_88,arg2,arg3_00);
        if (arg1 == 0) {
            iVar4 = sscanf(&uStack_88,0x80003f6,&uStack_8c);
            if (iVar4 == 1) {
                pcVar8 = obj.vote_list;
                uVar1 = uStack_8c & 0xff;
                uVar3 = uStack_8c >> 8 & 0xff;
                for (pcVar7 = _obj.vote_list; pcVar7 != obj.vote_list; pcVar7 = *pcVar7) {
                    if (*(pcVar7 + 0x10) <= uVar1) {
                        pcVar8 = pcVar7;
                        if (uVar1 <= *(pcVar7 + 0x10)) {
                            *(pcVar7 + 0x14) = uVar3;
                            pcVar7 = *0x8090178;
                            goto joined_r0x0800258c;
                        }
                        break;
                    }
                }
                iVar2 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar2 = 0x30;
                }
                puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xcc0,0x18);
                *(puVar5 + 2) = uVar1;
                *(puVar5 + 0x14) = uVar3;
                puVar9 = *(pcVar8 + 8);
                uVar6 = __list_add_valid(puVar5,puVar9,pcVar8);
                pcVar7 = *0x8090178;
                if ((uVar6 & 1) != 0) {
                    *(pcVar8 + 8) = puVar5;
                    *puVar5 = pcVar8;
                    puVar5[1] = puVar9;
                    *puVar9 = puVar5;
                    pcVar7 = *0x8090178;
                }
joined_r0x0800258c:
                do {
                    if (pcVar7 == obj.vote_list) goto code_r0x080025a8;
                    uVar6 = *(pcVar7 + 0x14);
                    if (*(pcVar7 + 0x14) != 0xff) goto code_r0x080025ac;
                    pcVar7 = *(pcVar7 + 8);
                } while( true );
            }
            arg1 = _printk(0x80003f9);
            arg3_00 = 0xffffffffffffffea;
        }
        else {
            arg3_00 = 0xfffffffffffffff2;
        }
    }
    else {
        arg3_00 = 0xffffffffffffffea;
    }
code_r0x080025b0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return arg3_00;
    }
    __stack_chk_fail(arg1);
    return 0;
code_r0x080025a8:
    uVar6 = 0xff;
code_r0x080025ac:
    arg1 = sym.kswapd_bind(uVar6);
    goto code_r0x080025b0;
}


// ===== sym.vote_priority_init @ 0x08002600 (size 16) =====

ulong sym.vote_priority_init(int64_t arg1)

{
    return 0;
}


// ===== sym.kswapd_bind @ 0x08002610 (size 444) =====

void sym.kswapd_bind(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_24;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_24 = arg1;
    uStack_20 = 0;
    strncpy(&uStack_20,&uStack_24,1);
    mutex_lock(obj.kswapd_lock);
    if ((*0x8090000 != 0) && (iVar2 = set_cpus_allowed_ptr(*0x8090000,&uStack_20), iVar2 != 0)) {
        _printk(0x8000574);
    }
    if ((*0x8090000 != 0) && (iVar2 = set_cpus_allowed_ptr(*0x8090000,&uStack_20), iVar2 != 0)) {
        _printk(0x8000574);
    }
    if ((*0x8090000 != 0) && (iVar2 = set_cpus_allowed_ptr(*0x8090000,&uStack_20), iVar2 != 0)) {
        _printk(0x8000574);
    }
    if ((*0x8090000 != 0) && (iVar2 = set_cpus_allowed_ptr(*0x8090000,&uStack_20), iVar2 != 0)) {
        _printk(0x8000574);
    }
    if ((*0x8090000 != 0) && (iVar2 = set_cpus_allowed_ptr(*0x8090000,&uStack_20), iVar2 != 0)) {
        _printk(0x8000574);
    }
    if ((*0x8090000 != 0) && (iVar2 = set_cpus_allowed_ptr(*0x8090000,&uStack_20), iVar2 != 0)) {
        _printk(0x8000574);
    }
    if ((*0x8090000 != 0) && (iVar2 = set_cpus_allowed_ptr(*0x8090000,&uStack_20), iVar2 != 0)) {
        _printk(0x8000574);
    }
    if ((*0x8090000 != 0) && (iVar2 = set_cpus_allowed_ptr(*0x8090000,&uStack_20), iVar2 != 0)) {
        _printk(0x8000574);
    }
    mutex_unlock(obj.kswapd_lock);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.kcompactd_pid_open;
    single_open(extraout_x1,sym.kcompactd_pid_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.kcompactd_pid_open @ 0x080027cc (size 52) =====

void sym.kcompactd_pid_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.kcompactd_pid_show.8474ee5f8980bb2d1331ce481e0e9392.cfi_jt,0);
    return;
}


// ===== sym.kcompactd_pid_show @ 0x08002800 (size 196) =====

ulong sym.kcompactd_pid_show(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_read_lock(tasklist_lock);
    piVar3 = *0x8091524;
    do {
        if (piVar3 == 0x8091524) {
            uVar2 = 0;
code_r0x08002888:
            _raw_read_unlock(tasklist_lock);
            seq_printf(arg1,0x80003f6,uVar2);
            return 0;
        }
        if ((piVar3[10] == 0) && (iVar1 = strncmp(piVar3 + 0x5b,"kcompactd0",10), iVar1 == 0)) {
            uVar2 = *(piVar3 + 0x21);
            goto code_r0x08002888;
        }
        piVar3 = *piVar3;
    } while( true );
}


// ===== sym.mimdtrigger_show @ 0x080028cc (size 204) =====

int64_t sym.mimdtrigger_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.trigger_event_lock);
    piVar3 = *0x8090000;
    if (_obj.trigger_head == obj.trigger_head) {
        iVar6 = 0;
    }
    else {
        iVar4 = snprintf(arg1,0x1000,"%ld\n",(*0x8090000)[2]);
        iVar6 = iVar4;
        uVar5 = __list_del_entry_valid(piVar3);
        if ((uVar5 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3);
        _segment.ehdr = _segment.ehdr + -1;
    }
    mutex_unlock(obj.trigger_event_lock);
    return iVar6;
}


// ===== sym.mimdtrigger_store @ 0x0800299c (size 364) =====

code * sym.mimdtrigger_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    bool bVar1;
    ulong *puVar2;
    int iVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong extraout_x1;
    ulong in_x4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    ulong unaff_x23;
    code *unaff_x24;
    uint64_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_50;
    int64_t iStack_48;
    
    pcVar9 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_50 = 0;
    iVar3 = kstrtoull(arg1,10,&uStack_50);
    if (iVar3 == 0) {
        mutex_lock(obj.trigger_event_lock);
        unaff_x23 = 0x8000000;
        if (_segment.ehdr < 0xb) {
            pcVar9 = 0x18;
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xcc0,0x18);
            if (puVar4 != NULL) {
                pcVar9 = obj.trigger_head;
                puVar4[2] = uStack_50;
                *puVar4 = puVar4;
                puVar4[1] = puVar4;
                puVar2 = *0x8090168;
                uVar7 = __list_add_valid(puVar4,*0x8090168,obj.trigger_head);
                if ((uVar7 & 1) != 0) {
                    *0x8090168 = puVar4;
                    *puVar4 = obj.trigger_head;
                    puVar4[1] = puVar2;
                    *puVar2 = puVar4;
                }
                _segment.ehdr = _segment.ehdr + 1;
                mutex_unlock(obj.trigger_event_lock);
                goto code_r0x08002a90;
            }
            mutex_unlock(obj.trigger_event_lock);
            uVar6 = 0x80006b5;
        }
        else {
            mutex_unlock(obj.trigger_event_lock);
            uVar6 = 0x8000473;
        }
        _printk(uVar6,"mimdtrigger");
    }
    else {
        arg2 = iVar3;
    }
code_r0x08002a90:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.mem_cgroup_write;
    pcStack_a8 = sym.mem_cgroup_write;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    puStack_b0 = &stack0xffffffffffffffc0;
    iVar5 = of_css();
    uStack_c0 = 0;
    uVar6 = strim(extraout_x1);
    iVar3 = kstrtoull(uVar6,10,&uStack_c0);
    if (iVar3 == 0) {
        MemoryCopyForward(unaff_x23,0xffffffff,in_x4,1,0);
        uVar7 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        uVar12 = unaff_x23;
        if (uVar7 < uVar12) {
            uVar11 = 0;
            unaff_x24 = __per_cpu_offset;
            do {
                if (0x1f < uVar7) goto code_r0x08002d40;
                uVar11 = *(*(iVar5 + 0xe10) + *(__per_cpu_offset + (uVar7 & 0xffffffff) * 8) + 0x88) + uVar11;
                uVar7 = cpumask_next(uVar7,__cpu_possible_mask);
            } while (uVar7 < uVar12);
            uVar11 = uVar11 & (uVar11 >> 0x3f ^ 0xffffffffffffffffU);
        }
        else {
            uVar11 = 0;
        }
        uVar7 = cpumask_next(0xffffffff,__cpu_possible_mask);
        if (uVar7 < uVar12) {
            uVar10 = 0;
            do {
                if (0x1f < uVar7) {
code_r0x08002d40:
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x5512,0x8002d44);
                    (*pcVar9)();
                }
                uVar10 = *(*(iVar5 + 0xe10) + *(__per_cpu_offset + (uVar7 & 0xffffffff) * 8) + 0x98) + uVar10;
                uVar7 = cpumask_next(uVar7,__cpu_possible_mask);
            } while (uVar7 < uVar12);
            if (0 < uVar10) {
                iVar3 = 9;
                while (uVar7 = try_to_free_mem_cgroup_pages(iVar5,uVar10,0xcc0,1), uVar7 != 0) {
                    MemoryCopyForward(unaff_x24,0xffffffff,in_x4,1,0);
                    uVar8 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
                    if (uVar8 < unaff_x24) {
                        uVar13 = 0;
                        do {
                            if (0x1f < uVar8) goto code_r0x08002d40;
                            uVar13 = *(*(iVar5 + 0xe10) + *(__per_cpu_offset + (uVar8 & 0xffffffff) * 8) + 0x88) +
                                     uVar13;
                            uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                        } while (uVar8 < unaff_x24);
                        if (uVar13 < 1) goto code_r0x08002ccc;
                        uVar8 = uVar13 - uVar11;
                        bVar1 = uVar11 < uVar13;
                        uVar11 = uVar13;
                        if ((bVar1) && (0x40 < uVar8)) {
                            _printk(0x80006e4);
                            break;
                        }
                    }
                    else {
code_r0x08002ccc:
                        uVar11 = 0;
                    }
                    uVar8 = 0;
                    if (uVar7 <= uVar10) {
                        uVar8 = uVar10 - uVar7;
                    }
                    if ((iVar3 == 0) || (iVar3 = iVar3 + -1, bVar1 = uVar10 <= uVar7, uVar10 = uVar8, bVar1)) break;
                }
            }
        }
    }
    else {
        pcVar9 = iVar3;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_b8) {
        auVar14 = __stack_chk_fail();
        pcVar9 = auVar14._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (pcVar9 != NULL) {
            switch(*pcVar9) {
            case 0x0:
            case 0x1:
            case 0x2:
            case 0x3:
            case 0x4:
                __ubsan_handle_cfi_check_fail_abort(pcVar9,auVar14._8_8_,0);
                break;
            default:
                return pcVar9;
            }
        }
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5502,0x8002da0);
        (*pcVar9)();
    }
    return pcVar9;
}


// ===== sym.mem_cgroup_write @ 0x08002b08 (size 576) =====

uchar * sym.mem_cgroup_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    bool bVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uchar *puVar8;
    ulong in_x4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong unaff_x23;
    code *unaff_x24;
    uint64_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    iVar4 = of_css();
    uStack_70 = 0;
    uVar5 = strim(arg1);
    iVar3 = kstrtoull(uVar5,10,&uStack_70);
    if (iVar3 == 0) {
        MemoryCopyForward(unaff_x23,0xffffffff,in_x4,1,0);
        uVar6 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        uVar11 = unaff_x23;
        if (uVar6 < uVar11) {
            uVar10 = 0;
            unaff_x24 = __per_cpu_offset;
            do {
                if (0x1f < uVar6) goto code_r0x08002d40;
                uVar10 = *(*(iVar4 + 0xe10) + *(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + 0x88) + uVar10;
                uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            } while (uVar6 < uVar11);
            uVar10 = uVar10 & (uVar10 >> 0x3f ^ 0xffffffffffffffffU);
        }
        else {
            uVar10 = 0;
        }
        uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
        if (uVar6 < uVar11) {
            uVar9 = 0;
            do {
                if (0x1f < uVar6) {
code_r0x08002d40:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8002d44);
                    (*pcVar2)();
                }
                uVar9 = *(*(iVar4 + 0xe10) + *(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + 0x98) + uVar9;
                uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            } while (uVar6 < uVar11);
            if (0 < uVar9) {
                iVar3 = 9;
                while (uVar6 = try_to_free_mem_cgroup_pages(iVar4,uVar9,0xcc0,1), uVar6 != 0) {
                    MemoryCopyForward(unaff_x24,0xffffffff,in_x4,1,0);
                    uVar7 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
                    if (uVar7 < unaff_x24) {
                        uVar12 = 0;
                        do {
                            if (0x1f < uVar7) goto code_r0x08002d40;
                            uVar12 = *(*(iVar4 + 0xe10) + *(__per_cpu_offset + (uVar7 & 0xffffffff) * 8) + 0x88) +
                                     uVar12;
                            uVar7 = cpumask_next(uVar7,__cpu_possible_mask);
                        } while (uVar7 < unaff_x24);
                        if (uVar12 < 1) goto code_r0x08002ccc;
                        uVar7 = uVar12 - uVar10;
                        bVar1 = uVar10 < uVar12;
                        uVar10 = uVar12;
                        if ((bVar1) && (0x40 < uVar7)) {
                            _printk(0x80006e4);
                            break;
                        }
                    }
                    else {
code_r0x08002ccc:
                        uVar10 = 0;
                    }
                    uVar7 = 0;
                    if (uVar6 <= uVar9) {
                        uVar7 = uVar9 - uVar6;
                    }
                    if ((iVar3 == 0) || (iVar3 = iVar3 + -1, bVar1 = uVar9 <= uVar6, uVar9 = uVar7, bVar1)) break;
                }
            }
        }
    }
    else {
        arg2 = iVar3;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        auVar13 = __stack_chk_fail();
        puVar8 = auVar13._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar13._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8002da0);
        (*pcVar2)();
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08002d48 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002d8c

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
    //switch table (4 cases) at 0x80003e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002da0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002da4 (size 440) =====

ulong sym.init_module(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.vote_list = obj.vote_list;
    *0x8090178 = obj.vote_list;
    _obj.trigger_head = obj.trigger_head;
    *0x8090168 = obj.trigger_head;
    iVar2 = proc_create("perflock_records",0x1b4,0,obj.perflock_records_ops);
    if (iVar2 == 0) {
        _printk(0x8000540);
    }
    iVar2 = proc_create("mimdlog",0x1b4,0,obj.mimdlog_ops);
    if (iVar2 == 0) {
        _printk(0x8000596);
    }
    iVar2 = proc_create("global_reclaim",0x1b4,0,obj.global_reclaim_ops);
    if (iVar2 == 0) {
        _printk(0x800062d);
    }
    iVar2 = proc_create("kswapd_c",0x1b4,0,obj.kswapd_c_ops);
    if (iVar2 == 0) {
        _printk(0x8000450);
    }
    iVar2 = proc_create("vote_priority",0x1b4,0,obj.vote_priority_ops);
    if (iVar2 == 0) {
        _printk(0x800068d);
    }
    iVar2 = proc_create("kcompactd_pid",0x1b4,0,obj.kcompactd_pid_ops);
    if (iVar2 == 0) {
        _printk(0x8000428);
    }
    *0x8090000 = kobject_create_and_add("mimd",0x8003150);
    if ((*0x8090000 != 0) && (iVar1 = sysfs_create_group(*0x8090000,obj.mimd_attr_group), iVar1 != 0)) {
        _printk(0x80005fd);
    }
    cgroup_add_legacy_cftypes(memory_cgrp_subsys,"reclaim_once");
    return 0;
}


// ===== sym.cleanup_module @ 0x08002f5c (size 172) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry("perflock_records",0);
    remove_proc_entry("mimdlog",0);
    remove_proc_entry("global_reclaim",0);
    remove_proc_entry("kswapd_c",0);
    remove_proc_entry("vote_priority",0);
    remove_proc_entry("kcompactd_pid",0);
    if (*0x8090000 == 0) {
        sysfs_remove_group(0,obj.mimd_attr_group);
        kobject_put(*0x8090000);
    }
    return;
}

