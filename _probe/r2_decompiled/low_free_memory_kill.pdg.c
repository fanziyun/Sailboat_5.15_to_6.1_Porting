// decompiled from low_free_memory_kill by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x080018f4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1b6c344e75cfc4ea) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x7bcbda558eb245e5) {
                pcVar2 = sym.lmk_event_poll.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt;
            }
            else {
                if (arg1 != -0xec78b8726b9c1e8) goto code_r0x080018b4;
                pcVar2 = sym.enable_show.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x8001208 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080018b4;
            }
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x080018b4;
                pcVar2 = sym.seq_read.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x389eaf2a25fd5ae2) {
        if (arg1 == 0x1b6c344e75cfc4ea) {
            pcVar2 = sym.enable_store.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x080018b4;
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
    }
    else if (arg1 == 0x389eaf2a25fd5ae2) {
        pcVar2 = sym.memory_alloc_handler.cfi_jt;
    }
    else if (arg1 == 0x5233d5bc7887ae44) {
        pcVar2 = sym.lmk_event_show.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080018b4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080018b4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001908);
    (*pcVar1)();
}


// ===== sym.memory_alloc_handler.cfi_jt @ 0x080011e0 (size 8) =====

void sym.memory_alloc_handler.cfi_jt(int64_t param_1)

{
    uint8_t *puVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = tpidr_el1;
    if (((*_segment.ehdr & 1) != 0) && (uVar7 = sym.allow_wakeup_throttled_process(param_1), (uVar7 & 1) == 0)) {
        _raw_spin_lock(obj.lmk_event_lock);
        iVar2 = 0x3fffffffffffffff;
        if (_segment.ehdr <= _seq_lseek) {
            iVar2 = 0;
        }
        uVar6 = jiffies_to_msecs(_seq_lseek + (iVar2 - _segment.ehdr));
        if (uVar6 < 0x65) {
            _raw_spin_unlock(obj.lmk_event_lock);
        }
        else {
            _segment.ehdr = _seq_lseek;
            _raw_spin_unlock(obj.lmk_event_lock);
            __wake_up(obj.memory_alloc_handler.last_wakeup_time,1,1,0);
            puVar1 = _segment.ehdr + 8;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            _printk(0x80002be);
        }
    }
    return;
}


// ===== sym.enable_store.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt @ 0x080011e8 (size 8) =====

uchar * sym.enable_store.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    iVar3 = kstrtoint(param_3,0,&uStack_2c);
    if (iVar3 == 0) {
        *_segment.ehdr = uStack_2c;
    }
    else {
        param_4 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar4 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar5._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001908);
        (*pcVar2)();
    }
    return param_4;
}


// ===== sym.seq_lseek.cfi_jt @ 0x080011f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x10) != 0) {
        kobject_put();
    }
    *(_segment.ehdr + 0x10) = 0;
    tracepoint_probe_unregister(__tracepoint_android_vh_alloc_pages_reclaim_bypass,sym.memory_alloc_handler.cfi_jt,0);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = obj.g_memory;
    iVar2 = proc_create("lowmemorykiller",0,0,obj.event_proc_ops);
    if (iVar2 == 0) {
        _printk(0x800025c);
    }
    iVar2 = kobject_create_and_add("memory",__printk);
    if (iVar2 == 0) {
        _printk(0x8000308);
    }
    else {
        iVar1 = sysfs_create_group(iVar2,obj.attr_group);
        if (iVar1 == 0) {
            *(_segment.ehdr + 0x10) = iVar2;
            tracepoint_probe_register
                      (__tracepoint_android_vh_alloc_pages_reclaim_bypass,sym.memory_alloc_handler.cfi_jt,0);
            *_segment.ehdr = 1;
            _printk(0x8000334);
            return 0;
        }
        _printk(0x8000298);
        kobject_put(iVar2);
    }
    *(_segment.ehdr + 0x10) = 0;
    return 0xffffffff;
}


// ===== sym.single_release.cfi_jt @ 0x08001208 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lmk_event_open.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt @ 0x08001210 (size 8) =====

void sym.lmk_event_open.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.lmk_event_show.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.seq_read.cfi_jt @ 0x08001218 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lmk_event_show.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt @ 0x08001220 (size 8) =====

ulong sym.lmk_event_show.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt(ulong param_1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.lmk_event_lock);
    uVar1 = _segment.ehdr;
    _segment.ehdr = 0;
    _raw_spin_unlock(obj.lmk_event_lock);
    seq_printf(param_1,0x8000294,uVar1);
    return 0;
}


// ===== sym.enable_show.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt @ 0x08001228 (size 8) =====

int64_t sym.enable_show.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"enable %d\nwakeup_throttle_count %d\nwakeup_lmkd_count %d\n",*_segment.ehdr,
                      *(_segment.ehdr + 1),*(_segment.ehdr + 2));
    return iVar1;
}


// ===== sym.lmk_event_poll.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt @ 0x08001230 (size 8) =====

bool sym.lmk_event_poll.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt(ulong param_1,ulong *param_2)

{
    bool bVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != NULL) && (pcVar2 = *param_2, pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar2,0x8000180);
        (*pcVar2)(param_1,obj.memory_alloc_handler.last_wakeup_time,param_2);
    }
    _raw_spin_lock(obj.lmk_event_lock);
    bVar1 = 0 < _segment.ehdr;
    _raw_spin_unlock(obj.lmk_event_lock);
    return bVar1;
}


// ===== sym.memory_alloc_handler @ 0x08001238 (size 284) =====

void sym.memory_alloc_handler(int64_t arg1)

{
    uint8_t *puVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = tpidr_el1;
    if (((*_segment.ehdr & 1) != 0) && (uVar7 = sym.allow_wakeup_throttled_process(arg1), (uVar7 & 1) == 0)) {
        _raw_spin_lock(obj.lmk_event_lock);
        iVar2 = 0x3fffffffffffffff;
        if (_segment.ehdr <= _seq_lseek) {
            iVar2 = 0;
        }
        uVar6 = jiffies_to_msecs(_seq_lseek + (iVar2 - _segment.ehdr));
        if (uVar6 < 0x65) {
            _raw_spin_unlock(obj.lmk_event_lock);
        }
        else {
            _segment.ehdr = _seq_lseek;
            _raw_spin_unlock(obj.lmk_event_lock);
            __wake_up(obj.memory_alloc_handler.last_wakeup_time,1,1,0);
            puVar1 = _segment.ehdr + 8;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            _printk(0x80002be);
        }
    }
    return;
}


// ===== sym.allow_wakeup_throttled_process @ 0x08001354 (size 808) =====

//WARNING: Type propagation algorithm not settling

bool sym.allow_wakeup_throttled_process(int64_t arg1)

{
    uint8_t *puVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    uint64_t uVar5;
    uint64_t *in_x1;
    bool bVar6;
    code *pcVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t unaff_x20;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    
    *in_x18 = unaff_x30;
    iVar12 = 0;
    uVar10 = 0;
    uVar11 = 0;
    bVar3 = false;
    do {
        bVar6 = bVar3;
        if (*(iVar12 * 0x640 + 0x800608c) != 0) {
            uVar5 = 0xffffffff;
            uVar8 = *(iVar12 * 0x640 + 0x80065fc);
            pcVar4 = tracepoint_probe_unregister + iVar12 * 0x640;
            *in_x1 = unaff_x20;
            while( true ) {
                auVar13 = cpumask_next(uVar5,__cpu_online_mask);
                uVar5 = auVar13._0_8_;
                if (unaff_x20 <= auVar13._0_4_) break;
                if (0x1f < auVar13._0_4_) goto code_r0x08001634;
                uVar8 = uVar8 + *(*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8) + *pcVar4 + 3);
            }
            uVar5 = 0xffffffff;
            unaff_x20 = *(iVar12 * 0x640 + 0x8006604);
            pcVar7 = seq_lseek;
            *auVar13._8_8_ = 0x640;
            while( true ) {
                auVar13 = cpumask_next(pcVar7,uVar5,__cpu_online_mask);
                in_x1 = auVar13._8_8_;
                uVar5 = auVar13._0_8_;
                if (0x63f < auVar13._0_4_) break;
                if (0x1f < auVar13._0_4_) goto code_r0x08001634;
                pcVar7 = *(*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8) + *pcVar4 + 4);
                unaff_x20 = unaff_x20 + pcVar7;
            }
            iVar9 = (unaff_x20 & (unaff_x20 >> 0x3f ^ 0xffffffffffffffffU)) +
                    (uVar8 & (uVar8 >> 0x3f ^ 0xffffffffffffffffU));
            if (0 < _nr_swap_pages) {
                uVar8 = 0xffffffff;
                unaff_x20 = *(iVar12 * 0x640 + 0x80065ec);
                pcVar7 = seq_lseek;
                *in_x1 = 0x640;
                while( true ) {
                    auVar13 = cpumask_next(pcVar7,uVar8,__cpu_online_mask);
                    uVar8 = auVar13._0_8_;
                    if (0x63f < auVar13._0_4_) break;
                    if (0x1f < auVar13._0_4_) goto code_r0x08001634;
                    pcVar7 = *(*(__per_cpu_offset + (uVar8 & 0xffffffff) * 8) + *pcVar4 + 1);
                    unaff_x20 = unaff_x20 + pcVar7;
                }
                uVar5 = 0xffffffff;
                uVar8 = *(iVar12 * 0x640 + 0x80065f4);
                pcVar7 = seq_lseek;
                *auVar13._8_8_ = uVar10;
                while( true ) {
                    auVar13 = cpumask_next(pcVar7,uVar5,__cpu_online_mask);
                    in_x1 = auVar13._8_8_;
                    uVar5 = auVar13._0_8_;
                    if (uVar10 <= auVar13._0_4_) break;
                    if (0x1f < auVar13._0_4_) {
code_r0x08001634:
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8001638);
                        (*pcVar4)();
                    }
                    pcVar7 = *(*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8) + *pcVar4 + 2);
                    uVar8 = uVar8 + pcVar7;
                }
                iVar9 = (unaff_x20 & (unaff_x20 >> 0x3f ^ 0xffffffffffffffffU)) + iVar9 +
                        (uVar8 & (uVar8 >> 0x3f ^ 0xffffffffffffffffU));
            }
            if (iVar9 != 0) {
                iVar12 = iVar12 * 0x640;
                uVar10 = (*(iVar12 + 0x80065e4) & (*(iVar12 + 0x80065e4) >> 0x3f ^ 0xffffffffffffffffU)) + uVar10;
                uVar11 = *(contig_page_data + iVar12) + uVar11 + *(single_open + iVar12);
            }
        }
        iVar12 = 1;
        bVar3 = true;
        if (bVar6) {
            if ((*_segment.ehdr >> 1 & 1) != 0) {
                _printk(0x80002d0,uVar11 < uVar10,uVar10,uVar11);
            }
            if ((uVar11 < uVar10) && (_contig_page_data != contig_page_data)) {
                __wake_up(contig_page_data,3,0,0);
                puVar1 = _segment.ehdr + 4;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                _printk(0x80001a5);
            }
            return uVar11 < uVar10;
        }
    } while( true );
}


// ===== sym.lmk_event_open @ 0x0800167c (size 56) =====

void sym.lmk_event_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.lmk_event_show.7f076cafc8511b81fde9e0ecce6eca43.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.lmk_event_poll @ 0x080016b4 (size 164) =====

bool sym.lmk_event_poll(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) && (pcVar2 = *arg2, pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar2,0x8000180);
        (*pcVar2)(arg1,obj.memory_alloc_handler.last_wakeup_time,arg2);
    }
    _raw_spin_lock(obj.lmk_event_lock);
    bVar1 = 0 < _segment.ehdr;
    _raw_spin_unlock(obj.lmk_event_lock);
    return bVar1;
}


// ===== sym.lmk_event_show @ 0x08001758 (size 112) =====

ulong sym.lmk_event_show(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.lmk_event_lock);
    uVar1 = _segment.ehdr;
    _segment.ehdr = 0;
    _raw_spin_unlock(obj.lmk_event_lock);
    seq_printf(arg1,0x8000294,uVar1);
    return 0;
}


// ===== sym.enable_show @ 0x080017c8 (size 84) =====

int64_t sym.enable_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"enable %d\nwakeup_throttle_count %d\nwakeup_lmkd_count %d\n",*_segment.ehdr,
                      *(_segment.ehdr + 1),*(_segment.ehdr + 2));
    return iVar1;
}


// ===== sym.enable_store @ 0x08001824 (size 140) =====

uchar * sym.enable_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    iVar3 = kstrtoint(arg1,0,&uStack_2c);
    if (iVar3 == 0) {
        *_segment.ehdr = uStack_2c;
    }
    else {
        arg2 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar4 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar5._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001908);
        (*pcVar2)();
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x080018b0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018f4

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
    //switch table (4 cases) at 0x80001a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001908);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001914 (size 256) =====

ulong sym.init_module(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = obj.g_memory;
    iVar2 = proc_create("lowmemorykiller",0,0,obj.event_proc_ops);
    if (iVar2 == 0) {
        _printk(0x800025c);
    }
    iVar2 = kobject_create_and_add("memory",__printk);
    if (iVar2 == 0) {
        _printk(0x8000308);
    }
    else {
        iVar1 = sysfs_create_group(iVar2,obj.attr_group);
        if (iVar1 == 0) {
            *(_segment.ehdr + 0x10) = iVar2;
            tracepoint_probe_register
                      (__tracepoint_android_vh_alloc_pages_reclaim_bypass,sym.memory_alloc_handler.cfi_jt,0);
            *_segment.ehdr = 1;
            _printk(0x8000334);
            return 0;
        }
        _printk(0x8000298);
        kobject_put(iVar2);
    }
    *(_segment.ehdr + 0x10) = 0;
    return 0xffffffff;
}


// ===== sym.cleanup_module @ 0x08001a14 (size 92) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x10) != 0) {
        kobject_put();
    }
    *(_segment.ehdr + 0x10) = 0;
    tracepoint_probe_unregister(__tracepoint_android_vh_alloc_pages_reclaim_bypass,sym.memory_alloc_handler.cfi_jt,0);
    return;
}

