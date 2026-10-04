// decompiled from mi_schedule by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 940) =====

//WARNING: Switch with 1 destination removed at 0x08003ef4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x8dc801903aca538) {
        if (arg1 < -0x576fba69a538e3dd) {
            if (arg1 < -0x643eb4a7a3e34c60) {
                if (arg1 == -0x7946ee14de9d94fb) {
                    pcVar2 = sym.unregister_sched_load_update_hook.cfi_jt;
                }
                else {
                    if (arg1 != -0x6921737630e78028) goto code_r0x08003eb4;
                    pcVar2 = sym.register_sched_load_update_hook.cfi_jt;
                }
            }
            else if (arg1 == -0x643eb4a7a3e34c60) {
                pcVar2 = sym.get_cluster_type.cfi_jt;
            }
            else {
                if (arg1 != -0x6251978493c0a9c3) goto code_r0x08003eb4;
                pcVar2 = sym.mi_task_exiting.cfi_jt;
            }
        }
        else if (arg1 < -0x46a98eece9fde15d) {
            if (arg1 != -0x576fba69a538e3dd) {
                if (arg1 != -0x550b9e52359ac614) goto code_r0x08003eb4;
                pcVar2 = sym.mi_user_roll_wk.7e18d739403c60a2bcec1f1f68693b6b.cfi_jt;
code_r0x0800232c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08003eb4;
            }
            pcVar2 = sym.__typeid__ZTSFvP11task_structiiyyE_global_addr;
        }
        else if (arg1 == -0x46a98eece9fde15d) {
            pcVar2 = sym.is_32B_user.cfi_jt;
        }
        else {
            if (arg1 == -0x3cb085396f7fbaf9) {
                pcVar2 = sym.get_mi_task_struct.cfi_jt;
                goto code_r0x0800232c;
            }
            if (arg1 != -0x357133db62263f04) goto code_r0x08003eb4;
            pcVar2 = sym.get_mi_user_struct.cfi_jt;
        }
    }
    else if (arg1 < 0x321969b888d4949e) {
        if (arg1 < 0x7ff5a213d37b1a6) {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x80024b0 >> 3 | pcVar1 << 0x3d) < 0xd) {
                    return;
                }
                goto code_r0x08003eb4;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08003eb4;
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.seq_read.cfi_jt;
        }
        else {
            if (arg1 != 0xc09366ef6f49f15) {
                if ((arg1 == 0x1d7ed092cb04d3f1) && ((pcVar1 + -0x8002490 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08003eb4;
            }
            pcVar2 = sym.mi_sched_tick.cfi_jt;
        }
    }
    else if (arg1 < 0x737a1841ea9b412b) {
        if (arg1 != 0x321969b888d4949e) {
            if ((arg1 == 0x5233d5bc7887ae44) && ((pcVar1 + -0x8002448 >> 3 | pcVar1 << 0x3d) < 9)) {
                return;
            }
            goto code_r0x08003eb4;
        }
        pcVar2 = sym.seq_lseek.cfi_jt;
    }
    else {
        if (arg1 == 0x737a1841ea9b412b) {
            pcVar2 = sym.mi_task_fork.cfi_jt;
            goto code_r0x0800232c;
        }
        if (arg1 == 0x741b966c574d47b1) {
            pcVar2 = sym.pkg_enable.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003eb4;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003eb4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003f08);
    (*pcVar1)();
}


// ===== sym.get_cluster_type.cfi_jt @ 0x080023b8 (size 8) =====

uint32_t sym.get_cluster_type.cfi_jt(uint32_t param_1)

{
    uint64_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    code *pcVar7;
    int iVar8;
    uint64_t unaff_x25;
    ulong unaff_x26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0x1f < param_1) {
code_r0x08004130:
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8004134);
        (*pcVar2)();
    }
    uVar3 = *(obj.cpu_cluster_map + param_1 * 4);
    if (uVar3 == 0) {
        iVar8 = 0;
        uVar6 = 0xffffffff;
        _seq_lseek = unaff_x25;
        *param_1 = unaff_x26;
        while( true ) {
            uVar3 = cpumask_next(uVar6,__cpu_online_mask);
            if (unaff_x26 <= uVar3) break;
            uVar6 = uVar3;
            if (0x1f < uVar3) goto code_r0x08004130;
            pcVar2 = jiffies_64 + uVar6 * 0x30;
            if ((*(jiffies_64 + uVar6 * 0x30) & (unaff_x25 ^ 0xffffffff)) != 0) {
                pcVar2 = __cpu_online_mask;
            }
            pcVar7 = pcVar2;
            if ((*(cpumask_next + uVar6 * 0x30) != -1) &&
               (pcVar7 = queue_work_on + uVar3 * 0x30, (*(queue_work_on + uVar3 * 0x30) & (*pcVar2 ^ 0xffffffff)) != 0)
               ) {
                pcVar7 = pcVar2;
            }
            uVar4 = *pcVar7 & unaff_x25;
            uVar1 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
            uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
            uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            uVar5 = 0x20;
            if (uVar4 != 0) {
                uVar5 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
            }
            if (uVar3 == uVar5) {
                uVar4 = 0xffffffff;
                while( true ) {
                    uVar4 = cpumask_next(uVar4,pcVar7);
                    if (unaff_x26 <= uVar4) break;
                    if (0x1f < uVar4) goto code_r0x08004130;
                    *(obj.cpu_cluster_map + (uVar4 & 0xffffffff) * 4) = iVar8;
                }
                iVar8 = iVar8 + 1;
            }
        }
        uVar3 = *(obj.cpu_cluster_map + param_1 * 4);
    }
    if (2 < uVar3) {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.seq_lseek.cfi_jt @ 0x080023c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080023c8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000bdd,"mi_sched_exit");
    sym.delete_runtimeproc();
    kmem_cache_destroy(*0x8003000);
    kmem_cache_destroy(*0x8003000);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080023d0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000bdd,"mi_sched_init");
    *0x8003000 = kmem_cache_create("mi_task_struct",0x1d0,0,0x4042000,0);
    *0x8003000 = kmem_cache_create("mi_user_struct",0xc0,0,0x4042000,0);
    *0x8003000 = alloc_workqueue("mi_sched",2,0);
    if (*0x8003000 == 0) {
        kmem_cache_destroy(0);
        kmem_cache_destroy(*0x8003000);
    }
    else {
        sym.create_runtime_proc();
        *0x8003810 = 0;
        *0x8003818 = 0;
        *0x8003800 = 0;
        *0x8003808 = 0;
        *0x80037f0 = 0;
        *0x80037f8 = 0;
        sym.init_user_zero();
        _obj.mi_user_monitor_wk = 0xfffffffe0;
        *0x80037c0 = 0x80037c0;
        *0x80037c8 = 0x80037c0;
        *0x80037d0 = sym.mi_user_roll_wk.7e18d739403c60a2bcec1f1f68693b6b.cfi_jt;
        _segment.ehdr = _seq_lseek;
        *0x8003810 = _seq_lseek;
        *0x8003818 = _seq_lseek;
        tracepoint_probe_register(__tracepoint_android_vh_free_task,sym.free_mi_task_struct.cfi_jt,0);
        tracepoint_probe_register(__tracepoint_android_vh_scheduler_tick,sym.mi_sched_tick.cfi_jt,0);
        *0x80037b0 = 1;
    }
    return 0;
}


// ===== sym.mi_task_exiting.cfi_jt @ 0x080023d8 (size 8) =====

bool sym.mi_task_exiting.cfi_jt(int64_t param_1)

{
    if ((param_1 != 0) && (*(param_1 + 0x28) != 0x80)) {
        return *(param_1 + 0x56c) != 0;
    }
    return true;
}


// ===== sym.unregister_sched_load_update_hook.cfi_jt @ 0x080023e0 (size 8) =====

void sym.unregister_sched_load_update_hook.cfi_jt(int param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 1) {
        _printk(0x8000d3f,param_1,"unregister_sched_load_update_hook");
        if (param_1 != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x80046f0);
            (*pcVar1)();
        }
        *0x8003000 = 0;
    }
    else {
        _printk(0x80008f2);
    }
    return;
}


// ===== sym.register_sched_load_update_hook.cfi_jt @ 0x080023e8 (size 8) =====

void sym.register_sched_load_update_hook.cfi_jt(int param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 1) {
        _printk(0x8000d3f,param_1,"register_sched_load_update_hook");
        uVar1 = param_2;
        if (param_1 != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8004684);
            (*pcVar2)();
        }
    }
    else {
        _printk(0x8000af8);
        uVar1 = *0x8003000;
    }
    *0x8003000 = uVar1;
    return;
}


// ===== sym.mi_task_fork.cfi_jt @ 0x080023f0 (size 8) =====

void sym.mi_task_fork.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != 0) {
        *(param_2 + 0xd48) = 0;
        *(param_2 + 0xd40) = 0;
        iVar1 = sym.__get_mi_task_struct(param_2);
        if (iVar1 == 0) {
            _printk(0x80007b0,param_2 + 0x7a8,*(param_2 + 0x5d8));
        }
    }
    return;
}


// ===== sym.free_mi_task_struct.cfi_jt @ 0x080023f8 (size 8) =====

void sym.free_mi_task_struct.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    code *pcVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0xd40) == -0x5432543253425244) {
        piVar7 = *(param_2 + 0xd48);
        *(param_2 + 0xd40) = 0;
        if (*piVar7 == 0xacbdacbd) {
            *piVar7 = 0;
            if ((piVar7[1] != '\0') && (piVar7[6] != 0)) {
                iVar6 = piVar7[6] + 0x10;
                piVar7[6] = 0;
                _raw_write_lock_irq(iVar6);
                uVar4 = __list_del_entry_valid(piVar7 + 7);
                if ((uVar4 & 1) != 0) {
                    iVar1 = piVar7[7];
                    piVar2 = piVar7[8];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                piVar7[7] = -0x2152ffffffffff00;
                piVar7[8] = -0x2152fffffffffede;
                _raw_write_unlock_irq(iVar6);
            }
            if (piVar7[0x32] != '\0') {
                if (0x1f < *(param_2 + 0x58)) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8004cd8);
                    (*pcVar3)();
                }
                piVar2 = piVar7 + 0x2f;
                iVar6 = *(__per_cpu_offset + (*(param_2 + 0x58) & 0xffffffff) * 8);
                *(piVar7 + 0x32) = 0;
                if (*(iVar6 + 0x8005f68) == piVar2) {
                    uVar5 = rb_next(piVar2);
                    *(iVar6 + 0x8005f68) = uVar5;
                }
                rb_erase(piVar2,iVar6 + 0x8005f60);
            }
            kmem_cache_free(*0x8003000,piVar7);
        }
    }
    return;
}


// ===== sym.mi_user_roll_wk.7e18d739403c60a2bcec1f1f68693b6b.cfi_jt @ 0x08002400 (size 8) =====

void sym.mi_user_roll_wk.7e18d739403c60a2bcec1f1f68693b6b.cfi_jt(void)

{
    int64_t *piVar1;
    int iVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    int64_t *piVar7;
    code *pcVar8;
    uint64_t *in_tmp_ldXn;
    int iVar9;
    uint uVar10;
    ulong *arg1;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    uint64_t extraout_x9;
    ulong uVar15;
    ulong uVar16;
    ulong *in_x18;
    char *unaff_x21;
    int64_t unaff_x22;
    ulong *unaff_x23;
    int64_t unaff_x24;
    int64_t *piVar17;
    int64_t unaff_x25;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uStack_6c = 0;
    if ((*0x80038f0 & 1) == 0) {
        *0x80038f0 = 1;
        iVar11 = ktime_get();
        iVar13 = SUB168(SEXT816(iVar11) * SEXT816(-0x20c49ba5e353f7cf),8);
        uVar10 = sym.mi_task_world_init(&uStack_6c);
        iVar11 = ktime_get();
        _printk(0x80006ee,uStack_6c,uVar10,iVar11 / 1000 + ((iVar13 >> 7) - (iVar13 >> 0x3f)));
    }
    iVar4 = 99999;
    iVar2 = iVar4;
    if (_segment.ehdr + 1 < 99999) {
        iVar2 = _segment.ehdr + 1;
    }
    iVar9 = _find_first_bit(0x80038f8,iVar2);
    iVar2 = iVar4;
    if (_segment.ehdr + 1 < 99999) {
        iVar2 = _segment.ehdr + 1;
    }
    if (iVar2 <= iVar9) goto code_r0x08005620;
    unaff_x21 = str._C4;
    unaff_x22 = -0x2345edcb5432bcdf;
    unaff_x24 = 1;
    unaff_x25 = 0xacbdacbd;
    do {
        arg1 = find_user(iVar9);
        if (arg1 == NULL) {
            iVar11 = *(unaff_x21 + 8);
            if (*unaff_x21 != unaff_x22) {
                iVar11 = 0;
            }
            if (5 < _segment.ehdr) {
code_r0x08005708:
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x5512,0x800570c);
                (*pcVar8)();
            }
            iVar13 = iVar11 + _segment.ehdr * 8;
            uVar16 = *(iVar11 + 0x78);
            uVar15 = *(iVar11 + 0xa8);
            *(iVar13 + 0x28) = *(iVar11 + 0x48);
            *(iVar13 + 0x58) = uVar16;
            *(iVar13 + 0x88) = uVar15;
        }
        else {
            iVar11 = sym.__get_mi_user_struct(arg1);
            if (iVar11 != 0) {
                if (5 < _segment.ehdr) goto code_r0x08005708;
                iVar13 = iVar11 + _segment.ehdr * 8;
                uVar15 = *(iVar11 + 0x78);
                uVar16 = *(iVar11 + 0xa8);
                *(iVar13 + 0x28) = *(iVar11 + 0x48);
                *(iVar13 + 0x58) = uVar15;
                *(iVar13 + 0x88) = uVar16;
            }
            free_uid(arg1);
            unaff_x23 = arg1;
            if (*arg1 == 1) {
                uVar12 = unaff_x24 << (*(arg1 + 10) & 0x3f);
                puVar14 = (*(arg1 + 10) >> 3 & 0x1ffffff8) + 0x80038f8;
                goto code_r0x08005718;
            }
        }
        while( true ) {
            iVar2 = iVar4;
            if (_segment.ehdr + 1 < 99999) {
                iVar2 = _segment.ehdr + 1;
            }
            iVar9 = _find_next_bit(0x80038f8,0,iVar2,iVar9 + 1,0,0);
            iVar2 = iVar4;
            if (_segment.ehdr + 1 < 99999) {
                iVar2 = _segment.ehdr + 1;
            }
            if (iVar9 < iVar2) break;
code_r0x08005620:
            if (5 < _segment.ehdr) goto code_r0x08005708;
            *((_segment.ehdr & 0xffffffff) * 8 + 0x80037f0) = _segment.ehdr;
            *0x8003810 = _seq_lseek;
            *0x8000004 = _seq_lseek >> 0x20;
            _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1) & 0xffffffff00000003;
            iVar11 = sp_el0;
            if (*(iVar11 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail();
            puVar14 = in_tmp_ldXn;
            uVar12 = extraout_x9;
code_r0x08005718:
            Hint_Prefetch(puVar14,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar14,0x10);
                if (bVar6) {
                    *puVar14 = *puVar14 & (uVar12 ^ 0xffffffffffffffff);
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            _printk(0x80007f8,*(unaff_x23 + 10));
            if (unaff_x23[0x11] == unaff_x22) {
                iVar11 = unaff_x23[0x12];
                unaff_x23[0x11] = 0;
                if (*(iVar11 + 8) != unaff_x25) {
                    _printk(0x800096a);
                }
                *(iVar11 + 8) = 0;
                _raw_write_lock_irq();
                piVar1 = iVar11 + 0x18;
                if (piVar1 != *piVar1) {
                    piVar7 = *piVar1;
                    while (piVar7 != piVar1) {
                        piVar17 = *piVar7;
                        uVar12 = __list_del_entry_valid();
                        if ((uVar12 & 1) != 0) {
                            iVar13 = *piVar7;
                            piVar3 = piVar7[1];
                            *(iVar13 + 8) = piVar3;
                            *piVar3 = iVar13;
                        }
                        *(piVar7 + -6) = 0;
                        piVar7[-1] = 0;
                        *piVar7 = -0x2152ffffffffff00;
                        piVar7[1] = -0x2152fffffffffede;
                        piVar7 = piVar17;
                    }
                }
                _raw_write_unlock_irq(iVar11 + 0x10);
                kmem_cache_free(*0x8003000,iVar11);
                unaff_x24 = 1;
                unaff_x25 = 0xacbdacbd;
                unaff_x22 = -0x2345edcb5432bcdf;
            }
            free_uid(unaff_x23);
        }
    } while( true );
}


// ===== sym.task_add_work.7e18d739403c60a2bcec1f1f68693b6b.cfi_jt @ 0x08002408 (size 8) =====

void sym.task_add_work.7e18d739403c60a2bcec1f1f68693b6b.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *piVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x38);
    iVar3 = *(param_1 + 0x40);
    iVar4 = *(param_1 + 0x30);
    if (iVar4 == 2) {
        if (*(iVar2 + 0x30) != 0) {
            iVar8 = *(iVar2 + 0x30) + 0x10;
            _raw_write_lock_irq(iVar8);
            if ((*(iVar2 + 9) != '\0') && (*(iVar2 + 8) != '\0')) {
                uVar7 = __list_del_entry_valid(iVar2 + 0x38);
                if ((uVar7 & 1) != 0) {
                    iVar10 = *(iVar2 + 0x38);
                    piVar9 = *(iVar2 + 0x40);
                    *(iVar10 + 8) = piVar9;
                    *piVar9 = iVar10;
                }
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x38) = 0xdead000000000100;
                *(iVar2 + 0x40) = 0xdead000000000122;
            }
            _raw_write_unlock_irq(iVar8);
        }
        *(iVar2 + 0x30) = 0;
    }
    else {
        if (iVar4 == 1) {
            if (*(iVar2 + 0x30) != 0) {
                iVar8 = *(iVar2 + 0x30) + 0x10;
                _raw_write_lock_irq(iVar8);
                if (*(iVar2 + 8) != '\0') {
                    uVar7 = __list_del_entry_valid(iVar2 + 0x38);
                    if ((uVar7 & 1) != 0) {
                        iVar10 = *(iVar2 + 0x38);
                        piVar9 = *(iVar2 + 0x40);
                        *(iVar10 + 8) = piVar9;
                        *piVar9 = iVar10;
                    }
                    *(iVar2 + 8) = 0;
                    *(iVar2 + 0x38) = 0xdead000000000100;
                    *(iVar2 + 0x40) = 0xdead000000000122;
                }
                _raw_write_unlock_irq(iVar8);
            }
        }
        else if (iVar4 != 0) goto code_r0x080050f0;
        _raw_write_lock_irq(iVar3 + 0x10);
        if ((*(iVar2 + 9) != '\0') && (*(iVar2 + 8) == '\0')) {
            iVar8 = iVar2 + 0x38;
            piVar9 = iVar3 + 0x18;
            iVar10 = *piVar9;
            uVar7 = __list_add_valid(iVar8,piVar9,iVar10);
            if ((uVar7 & 1) != 0) {
                *(iVar10 + 8) = iVar8;
                *(iVar2 + 0x38) = iVar10;
                *(iVar2 + 0x40) = piVar9;
                *piVar9 = iVar8;
            }
            *(iVar2 + 8) = 1;
        }
        _raw_write_unlock_irq(iVar3 + 0x10);
        *(iVar2 + 0x30) = iVar3;
    }
code_r0x080050f0:
    iVar8 = *(iVar2 + 0x28);
    *(iVar2 + 9) = 0;
    piVar1 = iVar8 + 0x38;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    if (iVar4 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(iVar8);
    }
    else if (iVar4 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    free_uid(*(iVar3 + 0xb8));
    kfree(param_1);
    return;
}


// ===== sym.seq_read.cfi_jt @ 0x08002410 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.get_mi_user_struct.cfi_jt @ 0x08002418 (size 8) =====

ulong sym.get_mi_user_struct.cfi_jt(int64_t param_1)

{
    if (*(param_1 + 0x88) == -0x2345edcb5432bcdf) {
        return *(param_1 + 0x90);
    }
    return 0;
}


// ===== sym.pkg_enable.cfi_jt @ 0x08002420 (size 8) =====

bool sym.pkg_enable.cfi_jt(void)

{
    return _segment.ehdr == 0;
}


// ===== sym.get_mi_task_struct.cfi_jt @ 0x08002428 (size 8) =====

ulong sym.get_mi_task_struct.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (param_1 != 0) {
        if (((*(param_1 + 0x28) == 0x80) || (*(param_1 + 0x56c) != 0)) || (*(param_1 + 0xd40) != -0x5432543253425244)) {
            return 0;
        }
        uVar1 = *(param_1 + 0xd48);
    }
    return uVar1;
}


// ===== sym.get_mi_task_struct_unsafe.cfi_jt @ 0x08002430 (size 8) =====

ulong sym.get_mi_task_struct_unsafe.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (param_1 != 0) {
        if (*(param_1 + 0xd40) != -0x5432543253425244) {
            return 0;
        }
        uVar1 = *(param_1 + 0xd48);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFvP11task_structiiyyE_global_addr @ 0x08002438 (size 8) =====

void sym.__typeid__ZTSFvP11task_structiiyyE_global_addr
               (int64_t param_1,uint32_t param_2,uint param_3,ulong param_4,int64_t param_5)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.update_task_runtime_info(param_1,param_5,param_2);
    pcVar1 = *0x8003000;
    if (*0x8003000 != NULL) {
        if (*0x8003000 != sym.__typeid__ZTSFvP11task_structiiyyE_global_addr) {
            __cfi_slowpath_diag(0xa89045965ac71c23,*0x8003000,0x8000670);
        }
        (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
    }
    return;
}


// ===== sym.is_32B_user.cfi_jt @ 0x08002440 (size 8) =====

uint32_t sym.is_32B_user.cfi_jt(uint64_t param_1)

{
    if (99999 < param_1) {
        return 1;
    }
    return *(obj.package_uid_32B + (param_1 >> 6 & 0x3ffffff) * 8) >> (param_1 & 0x3f) & 1;
}


// ===== sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002448 (size 8) =====

ulong sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    int iVar8;
    int iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong *in_x18;
    int64_t iVar15;
    uint32_t uVar16;
    code *pcVar17;
    int iVar18;
    int64_t *piVar19;
    uint32_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint64_t *arg1;
    ulong unaff_x30;
    int64_t iVar23;
    uint32_t uVar24;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = **(param_1 + 0x80);
    uVar11 = jiffies_to_usecs(_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28));
    iVar18 = _segment.ehdr;
    iVar21 = CONCAT44(*0x8000004,_segment.ehdr);
    *(iVar21 + 0x20) = _seq_lseek;
    if (iVar18 != 0) {
        *(iVar21 + 0x20) = _seq_lseek;
        uVar11 = jiffies_to_usecs(_seq_lseek - *(iVar21 + 0x28));
    }
    uVar11 = (uVar11 & 0xffffffff) * 1000;
    seq_printf(param_1,"traced uid %d time delta is %llu\n",iVar8);
    seq_printf(param_1,"time info: from [%llu]s to [%llu]s ago\n",
               (_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x20)) / 0xfa,
               (_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28)) / 0xfa);
    __rcu_read_lock();
    iVar22 = 0;
    pcVar17 = init_task;
    iVar21 = 0;
    uVar16 = 0;
    iVar18 = 0;
    uStack_70 = 0;
    iStack_68 = 0;
    while( true ) {
        iVar15 = *(pcVar17 + 0x4d0);
        pcVar17 = iVar15 + -0x4d0;
        if (pcVar17 == init_task) break;
        __rcu_read_lock();
        iVar9 = *(*(iVar15 + 0x2c0) + 4);
        __rcu_read_unlock();
        if ((iVar9 == iVar8) && (piVar19 = *(*(iVar15 + 800) + 0x10), *(iVar15 + 800) + 0x10 != piVar19)) {
            do {
                arg1 = piVar19 + -0xd3;
                iVar12 = sym.get_mi_task_struct(arg1);
                if (iVar12 != 0) {
                    uVar16 = *arg1 >> 0x16 & 1 | uVar16;
                    iVar13 = *(iVar12 + 0x78) - *(iVar12 + 0x80);
                    iVar14 = *(iVar12 + 0xa8) - *(iVar12 + 0xb0);
                    if (((iVar14 + iVar13 + iVar14 != 0) && (*(iVar12 + 0x80) <= *(iVar12 + 0x78))) &&
                       (*(iVar12 + 0xb0) <= *(iVar12 + 0xa8))) {
                        if (*(iVar12 + 0xe0) <= *(iVar12 + 0xd8)) {
                            iVar12 = *(iVar12 + 0xd8) - *(iVar12 + 0xe0);
                            uVar1 = iVar12 + iVar14 + iVar13;
                            iVar21 = iVar13 + iVar21;
                            iVar22 = iVar12 + iVar22;
                            uVar2 = 0;
                            if (uVar11 != 0) {
                                uVar2 = (iVar12 * 10000) / uVar11;
                            }
                            uVar2 = uVar2 & (uVar2 >> 0x1f ^ 0xffffffffU);
                            uVar3 = 0;
                            if (uVar1 != 0) {
                                uVar3 = (iVar13 * 10000) / uVar1;
                            }
                            iVar18 = uVar2 + iVar18;
                            uVar3 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
                            uVar4 = 0;
                            if (uVar11 != 0) {
                                uVar4 = (iVar13 * 10000) / uVar11;
                            }
                            uVar4 = uVar4 & (uVar4 >> 0x1f ^ 0xffffffffU);
                            uVar5 = 0;
                            if (uVar1 != 0) {
                                uVar5 = (iVar14 * 10000) / uVar1;
                            }
                            uVar5 = uVar5 & (uVar5 >> 0x1f ^ 0xffffffffU);
                            uVar20 = uVar2 / 100;
                            uVar10 = uVar2 % 100;
                            uVar6 = 0;
                            if (uVar11 != 0) {
                                uVar6 = (iVar14 * 10000) / uVar11;
                            }
                            iStack_68 = iVar14 + iStack_68;
                            uVar6 = uVar6 & (uVar6 >> 0x1f ^ 0xffffffffU);
                            uStack_70 = CONCAT44(uVar6 + uStack_70._4_4_,uVar4 + uStack_70);
                            iVar23 = iVar12;
                            uVar24 = uVar10;
                            seq_printf(param_1,"%5d,%16s,s:%16llu [%3d.%02d],b:%16llu [%3d.%02d]",piVar19[-0x18],
                                       piVar19 + 0x22,iVar13,uVar4 / 100,uVar4 % 100,iVar14,uVar6 / 100,
                                       uVar6 % 100,iVar12,uVar20,uVar10);
                            uVar7 = 0x8000bc5;
                            if ((*arg1 & 0x400000) != 0) {
                                uVar7 = 0x8000d1e;
                            }
                            seq_printf(param_1,"l:%16llu [%3d.%02d],| s:[%3d.%02d], b:[%3d.%02d] %s\n",iVar12,
                                       uVar2 / 100,uVar10,uVar3 / 100,uVar3 % 100,uVar5 / 100,uVar5 % 100,uVar7,
                                       iVar23,uVar20,uVar24);
                        }
                    }
                }
                piVar19 = *piVar19;
            } while (*(iVar15 + 800) + 0x10 != piVar19);
        }
    }
    uVar7 = 0x8000d1e;
    if (uVar16 == 0) {
        uVar7 = 0x8000bc5;
    }
    seq_printf(param_1,"[%s]usage total sup:[%d.%d] big:[%d.%d] little:[%d.%d] \n",uVar7,uStack_70 / 100,
               uStack_70 % 100,uStack_70._4_4_ / 100,uStack_70._4_4_ % 100,iVar18 / 100,iVar18 % 100);
    seq_printf(param_1,"\ntotal_usage---sup cluster:[%llu] big cluster:[%llu] little cluster:[%llu] \n",iVar21,
               iStack_68,iVar22);
    __rcu_read_unlock();
    return 0;
}


// ===== sym.reset_traced_window_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002450 (size 8) =====

ulong sym.reset_traced_window_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.set_traced_window(_segment.ehdr);
    seq_printf(param_1,"reset traced window show success!\n");
    return 0;
}


// ===== sym.window_size_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002458 (size 8) =====

ulong sym.window_size_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,"window size is %d\n",_segment.ehdr);
    return 0;
}


// ===== sym.package_trace_stat.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002460 (size 8) =====

ulong sym.package_trace_stat.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,"traced uid  is %d\n",_segment.ehdr);
    seq_printf(param_1,"traced max uid is %d\n",_segment.ehdr);
    return 0;
}


// ===== sym.package_compact_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002468 (size 8) =====

ulong sym.package_compact_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = **(param_1 + 0x80);
    if (uVar2 != 0) {
        uVar3 = sym.is_32B_user(uVar2);
        iVar1 = 8;
        if ((uVar3 & 1) == 0) {
            iVar1 = 0x10;
        }
        seq_printf(param_1,"%d:%sBit\n",uVar2,*(iVar1 + 0x80011e0));
    }
    return 0;
}


// ===== sym.traced_window_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002470 (size 8) =====

ulong sym.traced_window_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,"traced window is last %d\n",_segment.ehdr);
    return 0;
}


// ===== sym.pause_mode_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002478 (size 8) =====

ulong sym.pause_mode_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0x80008c3;
    if (_segment.ehdr != 0) {
        uVar1 = 0x80006ea;
    }
    seq_printf(param_1,"pause mode %s\n",uVar1);
    return 0;
}


// ===== sym.runtime_show_all.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002480 (size 8) =====

ulong sym.runtime_show_all.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t arg1;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    ulong *in_x18;
    int64_t iVar20;
    int iVar21;
    int iVar22;
    int64_t iVar23;
    int64_t iVar24;
    ulong unaff_x30;
    int iStack_94;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    int iStack_64;
    
    *in_x18 = unaff_x30;
    iVar6 = 99999;
    if (_segment.ehdr + 1 < 99999) {
        iVar6 = _segment.ehdr + 1;
    }
    uVar10 = jiffies_to_usecs(_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28));
    uVar11 = _segment.ehdr;
    iVar24 = CONCAT44(*0x8000004,_segment.ehdr);
    *(iVar24 + 0x20) = _seq_lseek;
    if (uVar11 != 0) {
        *(iVar24 + 0x20) = _seq_lseek;
        uVar10 = jiffies_to_usecs(_seq_lseek - *(iVar24 + 0x28));
    }
    if (uVar10 != 0) {
        seq_printf(param_1,"time info: from [%llu]s to [%llu]s ago\n",
                   (_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x20)) / 0xfa,
                   (_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28)) / 0xfa);
        uVar11 = _find_first_bit(0x80038f8,iVar6);
        if (uVar11 < iVar6) {
            iVar23 = 0;
            iVar24 = 0;
            iVar20 = 0;
            uVar16 = uVar10 * 1000;
            iVar21 = 0;
            iVar22 = 0;
            uVar10 = 0;
            iStack_64 = 0;
            uStack_90 = 0;
            uStack_8c = 0;
            iStack_94 = 0;
            do {
                arg1 = find_user(uVar11);
                if (arg1 != 0) {
                    iVar13 = sym.get_mi_user_struct(arg1);
                    if (iVar13 == 0) {
                        _printk("mi user struct is null\n");
                    }
                    else {
                        uVar12 = *(iVar13 + 0x48);
                        uVar5 = *(iVar13 + 0x50);
                        uVar18 = *(iVar13 + 0x78);
                        uVar19 = *(iVar13 + 0x80);
                        uVar17 = (uVar18 + uVar12 + *(iVar13 + 0xa8)) - (uVar5 + uVar19 + *(iVar13 + 0xb0));
                        if (((uVar17 != 0 && uVar5 <= uVar12) && uVar19 <= uVar18) &&
                            *(iVar13 + 0xb0) <= *(iVar13 + 0xa8)) {
                            uVar7 = 0;
                            if (uVar16 != 0) {
                                uVar7 = ((uVar12 - uVar5) * 10000) / uVar16;
                            }
                            if (uVar10 <= uVar7) {
                                uVar18 = *(iVar13 + 0x78);
                                uVar19 = *(iVar13 + 0x80);
                                uVar10 = uVar7;
                                _segment.ehdr = uVar11;
                            }
                            uVar8 = 0;
                            if (uVar16 != 0) {
                                uVar8 = ((uVar18 - uVar19) * 10000) / uVar16;
                            }
                            if (uStack_90 <= uVar8) {
                                _segment.ehdr = uVar11;
                                uStack_90 = uVar8;
                            }
                            uVar9 = 0;
                            if (uVar16 != 0) {
                                uVar9 = ((*(iVar13 + 0xa8) - *(iVar13 + 0xb0)) * 10000) / uVar16;
                            }
                            if (uStack_8c <= uVar9) {
                                _segment.ehdr = uVar11;
                                uStack_8c = uVar9;
                            }
                            iVar1 = uVar8 + uVar7 + uVar9;
                            if (iStack_94 < iVar1) {
                                _segment.ehdr = uVar11;
                                iStack_94 = iVar1;
                            }
                            iVar15 = *(iVar13 + 0x78) - *(iVar13 + 0x80);
                            iVar21 = (uVar9 & (uVar9 >> 0x1f ^ 0xffffffffU)) + iVar21;
                            iVar22 = (uVar8 & (uVar8 >> 0x1f ^ 0xffffffffU)) + iVar22;
                            iVar24 = iVar15 + iVar24;
                            uVar2 = 0;
                            if (uVar17 != 0) {
                                uVar2 = (iVar15 * 10000) / uVar17;
                            }
                            iVar14 = *(iVar13 + 0x48) - *(iVar13 + 0x50);
                            iStack_64 = (uVar7 & (uVar7 >> 0x1f ^ 0xffffffffU)) + iStack_64;
                            iVar20 = iVar14 + iVar20;
                            uVar3 = 0;
                            if (uVar17 != 0) {
                                uVar3 = (iVar14 * 10000) / uVar17;
                            }
                            uVar2 = uVar2 & (uVar2 >> 0x1f ^ 0xffffffffU);
                            iVar13 = *(iVar13 + 0xa8) - *(iVar13 + 0xb0);
                            uVar3 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
                            iVar23 = iVar13 + iVar23;
                            seq_printf(param_1,"%5d: <s>%16llu [%3d.%02d] <b>%16llu [%3d.%02d] <l>: %16llu ",uVar11,
                                       iVar14,uVar7 / 100,uVar7 % 100,iVar15,uVar8 / 100,uVar8 % 100,iVar13);
                            uVar12 = sym.is_32B_user(uVar11);
                            pcVar4 = "32BIT";
                            if ((uVar12 & 1) == 0) {
                                pcVar4 = "64BIT";
                            }
                            seq_printf(param_1," [%3d.%02d]--bias: s-[%3d.%02d] b-[%3d.%02d] %s\n",uVar3 / 100,
                                       uVar3 % 100,uVar2 / 100,uVar2 % 100,uVar9 / 100,uVar9 % 100,pcVar4,iVar13);
                            free_uid(arg1);
                        }
                    }
                }
                uVar11 = _find_next_bit(0x80038f8,0,iVar6,uVar11 + 1,0,0);
            } while (uVar11 < iVar6);
        }
        else {
            iStack_94 = 0;
            uStack_90 = 0;
            uVar10 = 0;
            uStack_8c = 0;
            iVar22 = 0;
            iVar21 = 0;
            iVar20 = 0;
            iVar24 = 0;
            iVar23 = 0;
            iStack_64 = 0;
        }
        seq_printf(param_1,"\nusage---sup cluster:[%d.%d] big cluster:[%d.%d] little cluster :[%d.%d]\n",
                   iStack_64 / 100,iStack_64 % 100,iVar22 / 100,iVar22 % 100,iVar21 / 100,iVar21 % 100);
        seq_printf(param_1,"total_usage---sup cluster:[%llu] big cluster:[%llu] little cluster:[%llu] \n",iVar20,
                   iVar24,iVar23);
        seq_printf(param_1,"top load package info--- 0 for s/b/l cluster\n");
        seq_printf(param_1,"%s: %d %3d.%02d\n","g:     top_package",_obj.top_package_uid,iStack_94 / 100,
                   iStack_94 % 100);
        seq_printf(param_1,"%s: %d %3d.%02d\n","score: top_package",*0x8000634,uVar10 / 100,uVar10 % 100);
        seq_printf(param_1,"%s: %d %3d.%02d\n","bcore: top_package",*0x8000638,uStack_90 / 100,uStack_90 % 100);
        seq_printf(param_1,"%s: %d %3d.%02d\n","lcore: top_package",*0x800063c,uStack_8c / 100,uStack_8c % 100);
    }
    return 0;
}


// ===== sym.develop_mode_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002488 (size 8) =====

ulong sym.develop_mode_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1)

{
    char *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "close";
    if (_segment.ehdr != 0) {
        pcVar1 = "open";
    }
    seq_printf(param_1,"develop mode %s\n",pcVar1);
    return 0;
}


// ===== sym.pause_mode_set.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002490 (size 8) =====

uint64_t sym.pause_mode_set.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t arg3;
    ulong uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    arg3 = param_3;
    if (0x1f < param_3) {
        arg3 = 0x20;
    }
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    __check_object_size(&uStack_58,arg3,0);
    iVar2 = sym._copy_from_user(&uStack_58,param_2,arg3);
    if (iVar2 == 0) {
        _segment.ehdr = simple_strtol(&uStack_58,0,10);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_3;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.pause_mode_show;
    uVar1 = 0x80008c3;
    if (_segment.ehdr != 0) {
        uVar1 = 0x80006ea;
    }
    seq_printf(uVar3,"pause mode %s\n",uVar1);
    return 0;
}


// ===== sym.traced_window_write.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002498 (size 8) =====

uint64_t sym.traced_window_write.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt
                   (ulong param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t arg3;
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    arg3 = param_3;
    if (0x1f < param_3) {
        arg3 = 0x20;
    }
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    __check_object_size(&uStack_58,arg3,0);
    iVar1 = sym._copy_from_user(&uStack_58,param_2,arg3);
    if (iVar1 == 0) {
        _segment.ehdr = simple_strtol(&uStack_58,0,10);
        _printk(0x8000bc9);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return param_3;
    }
    uVar2 = __stack_chk_fail();
    *extraout_x18 = sym.traced_window_show;
    seq_printf(uVar2,"traced window is last %d\n",_segment.ehdr);
    return 0;
}


// ===== sym.develop_mode_set.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024a0 (size 8) =====

uint64_t sym.develop_mode_set.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t arg3;
    char *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    arg3 = param_3;
    if (0x1f < param_3) {
        arg3 = 0x20;
    }
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    __check_object_size(&uStack_58,arg3,0);
    iVar2 = sym._copy_from_user(&uStack_58,param_2,arg3);
    if (iVar2 == 0) {
        _segment.ehdr = simple_strtol(&uStack_58,0,10);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_3;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.develop_mode_show;
    pcVar1 = "close";
    if (_segment.ehdr != 0) {
        pcVar1 = "open";
    }
    seq_printf(uVar3,"develop mode %s\n",pcVar1);
    return 0;
}


// ===== sym.trace_package_write.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024a8 (size 8) =====

uint64_t sym.trace_package_write.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t arg3;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    arg3 = param_3;
    if (0x1f < param_3) {
        arg3 = 0x20;
    }
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    __check_object_size(&uStack_58,arg3,0);
    iVar6 = sym._copy_from_user(&uStack_58,param_2,arg3);
    if (iVar6 == 0) {
        arg3 = 10;
        uVar5 = simple_strtol(&uStack_58,0);
        _printk(0x80008d9,uVar5);
        **(*(param_1 + 0xd8) + 0x80) = uVar5;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return param_3;
    }
    auVar10 = __stack_chk_fail();
    uVar8 = auVar10._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar3 = (uVar8 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar8, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar9 = uVar8 & uVar3;
    }
    bVar4 = CARRY8(uVar9,arg3);
    uVar9 = uVar9 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar9 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar9 = 0xffffffffffffffff;
    }
    uVar7 = arg3;
    if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar4) || uVar9 == uVar1 + !bVar4) {
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
        if ((uVar8 & uVar3 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        uVar7 = __arch_copy_from_user(auVar10._0_8_,uVar8,arg3);
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (uVar7 != 0) {
        memset(auVar10._0_8_ + (arg3 - uVar7),0,uVar7);
    }
    return uVar7;
}


// ===== sym.single_release.cfi_jt @ 0x080024b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.top_package_on_lcore_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024b8 (size 8) =====

void sym.top_package_on_lcore_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(param_2,sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(param_2 + 0xd8) + 0x80) = 0x800063c;
    }
    return;
}


// ===== sym.pause_mode_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024c0 (size 8) =====

void sym.pause_mode_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.pause_mode_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.package_tracestat_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024c8 (size 8) =====

void sym.package_tracestat_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.package_trace_stat.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.top_package_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024d0 (size 8) =====

void sym.top_package_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(param_2,sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(param_2 + 0xd8) + 0x80) = obj.top_package_uid;
    }
    return;
}


// ===== sym.package_compact_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024d8 (size 8) =====

void sym.package_compact_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(param_2,sym.package_compact_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(param_2 + 0xd8) + 0x80) = obj.package_dir;
    }
    return;
}


// ===== sym.package_open_traced_window.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024e0 (size 8) =====

void sym.package_open_traced_window.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.traced_window_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.package_runtime_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024e8 (size 8) =====

void sym.package_runtime_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(param_2,sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(param_2 + 0xd8) + 0x80) = obj.runtime_traced_uid;
    }
    return;
}


// ===== sym.package_reset_traced_window.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024f0 (size 8) =====

void sym.package_reset_traced_window.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.reset_traced_window_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.runtime_open_all.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x080024f8 (size 8) =====

void sym.runtime_open_all.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.runtime_show_all.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.develop_mode_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002500 (size 8) =====

void sym.develop_mode_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.develop_mode_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.top_package_on_bcore_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002508 (size 8) =====

void sym.top_package_on_bcore_open.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(param_2,sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(param_2 + 0xd8) + 0x80) = 0x8000638;
    }
    return;
}


// ===== sym.package_open_window_size.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt @ 0x08002510 (size 8) =====

void sym.package_open_window_size.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.window_size_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.mi_sched_tick.cfi_jt @ 0x08002518 (size 8) =====

void sym.mi_sched_tick.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _jiffies_to_usecs;
    if ((*0x80037b0 == '\x01' && _segment.ehdr == 0) &&
       (sym.check_userlist(*(param_2 + 0xaa0)), _segment.ehdr * 0xfa <= iVar1 - CONCAT44(*0x8000004,_segment.ehdr))) {
        queue_work_on(0,__find_first_bit,obj.mi_user_monitor_wk);
    }
    return;
}


// ===== sym.create_runtime_proc @ 0x08002520 (size 596) =====

void sym.create_runtime_proc(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = obj.package_top_bcore_entry;
    _segment.ehdr = proc_mkdir("package",0);
    if (_segment.ehdr != NULL) {
        _segment.ehdr = proc_mkdir(0x8000bf9,_segment.ehdr);
        if (_segment.ehdr != NULL) {
            uVar2 = proc_create("show_all",0x1b4,_segment.ehdr,obj.package_show_all_fops);
            iVar1 = _segment.ehdr;
            _segment.ehdr = uVar2;
            uVar3 = proc_create("top_package_on_bcore",0x1b4,iVar1,obj.package_top_bcore_fops);
            uVar2 = _segment.ehdr;
            _segment.ehdr = uVar3;
            uVar3 = proc_create("top_package_on_lcore",0x1b4,uVar2,obj.package_top_lcore_fops);
            uVar2 = _segment.ehdr;
            _segment.ehdr = uVar3;
            uVar3 = proc_create("top_package",0x1b4,uVar2,obj.package_top_fops);
            uVar2 = _segment.ehdr;
            _segment.ehdr = uVar3;
            uVar3 = proc_create("show_traced_package",0x1b6,uVar2,obj.package_trace_fops);
            uVar2 = _segment.ehdr;
            _segment.ehdr = uVar3;
            uVar3 = proc_create("show_32B_compact",0x1b6,uVar2,obj.package_compact_fops);
            uVar2 = _segment.ehdr;
            _segment.ehdr = uVar3;
            _segment.ehdr = proc_mkdir("stat",uVar2);
            if (_segment.ehdr != NULL) {
                uVar2 = proc_create("show_tracestat",0x1b4,_segment.ehdr,obj.package_tracestat_fops);
                iVar1 = _segment.ehdr;
                _segment.ehdr = uVar2;
                uVar3 = proc_create("show_traced_window",0x1b4,iVar1,obj.package_tracedwindow_fops);
                uVar2 = _segment.ehdr;
                _segment.ehdr = uVar3;
                uVar3 = proc_create("show_windowsize",0x1b4,uVar2,obj.package_windowsize_fops);
                uVar2 = _segment.ehdr;
                _segment.ehdr = uVar3;
                uVar3 = proc_create("develop_mode",0x1b6,uVar2,obj.develop_mode_fops);
                uVar2 = _segment.ehdr;
                _segment.ehdr = uVar3;
                uVar3 = proc_create("reset_traced_window",0x1b4,uVar2,obj.package_reset_tracedwindow_fops);
                uVar2 = _segment.ehdr;
                _segment.ehdr = uVar3;
                proc_create("pause_mode",0x1b6,uVar2,obj.pause_mode_fops);
                _segment.ehdr = obj.package_runtime_info.llvm.9016335817048903536;
            }
        }
    }
    return;
}


// ===== sym.delete_runtimeproc @ 0x08002774 (size 292) =====

void sym.delete_runtimeproc(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (_segment.ehdr != 0) {
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            proc_remove(_segment.ehdr);
            if (_segment.ehdr == 0) {
                return;
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            if (_segment.ehdr != 0) {
                proc_remove();
            }
            proc_remove(_segment.ehdr);
        }
        proc_remove(_segment.ehdr);
    }
    return;
}


// ===== sym.runtime_open_all @ 0x08002898 (size 52) =====

void sym.runtime_open_all(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.runtime_show_all.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.runtime_show_all @ 0x080028cc (size 1404) =====

ulong sym.runtime_show_all(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t arg1_00;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    ulong *in_x18;
    int64_t iVar20;
    int iVar21;
    int iVar22;
    int64_t iVar23;
    int64_t iVar24;
    ulong unaff_x30;
    int iStack_94;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    int iStack_64;
    
    *in_x18 = unaff_x30;
    iVar6 = 99999;
    if (_segment.ehdr + 1 < 99999) {
        iVar6 = _segment.ehdr + 1;
    }
    uVar10 = jiffies_to_usecs(_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28));
    uVar11 = _segment.ehdr;
    iVar24 = CONCAT44(*0x8000004,_segment.ehdr);
    *(iVar24 + 0x20) = _seq_lseek;
    if (uVar11 != 0) {
        *(iVar24 + 0x20) = _seq_lseek;
        uVar10 = jiffies_to_usecs(_seq_lseek - *(iVar24 + 0x28));
    }
    if (uVar10 != 0) {
        seq_printf(arg1,"time info: from [%llu]s to [%llu]s ago\n",
                   (_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x20)) / 0xfa,
                   (_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28)) / 0xfa);
        uVar11 = _find_first_bit(0x80038f8,iVar6);
        if (uVar11 < iVar6) {
            iVar23 = 0;
            iVar24 = 0;
            iVar20 = 0;
            uVar16 = uVar10 * 1000;
            iVar21 = 0;
            iVar22 = 0;
            uVar10 = 0;
            iStack_64 = 0;
            uStack_90 = 0;
            uStack_8c = 0;
            iStack_94 = 0;
            do {
                arg1_00 = find_user(uVar11);
                if (arg1_00 != 0) {
                    iVar13 = sym.get_mi_user_struct(arg1_00);
                    if (iVar13 == 0) {
                        _printk("mi user struct is null\n");
                    }
                    else {
                        uVar12 = *(iVar13 + 0x48);
                        uVar5 = *(iVar13 + 0x50);
                        uVar18 = *(iVar13 + 0x78);
                        uVar19 = *(iVar13 + 0x80);
                        uVar17 = (uVar18 + uVar12 + *(iVar13 + 0xa8)) - (uVar5 + uVar19 + *(iVar13 + 0xb0));
                        if (((uVar17 != 0 && uVar5 <= uVar12) && uVar19 <= uVar18) &&
                            *(iVar13 + 0xb0) <= *(iVar13 + 0xa8)) {
                            uVar7 = 0;
                            if (uVar16 != 0) {
                                uVar7 = ((uVar12 - uVar5) * 10000) / uVar16;
                            }
                            if (uVar10 <= uVar7) {
                                uVar18 = *(iVar13 + 0x78);
                                uVar19 = *(iVar13 + 0x80);
                                uVar10 = uVar7;
                                _segment.ehdr = uVar11;
                            }
                            uVar8 = 0;
                            if (uVar16 != 0) {
                                uVar8 = ((uVar18 - uVar19) * 10000) / uVar16;
                            }
                            if (uStack_90 <= uVar8) {
                                _segment.ehdr = uVar11;
                                uStack_90 = uVar8;
                            }
                            uVar9 = 0;
                            if (uVar16 != 0) {
                                uVar9 = ((*(iVar13 + 0xa8) - *(iVar13 + 0xb0)) * 10000) / uVar16;
                            }
                            if (uStack_8c <= uVar9) {
                                _segment.ehdr = uVar11;
                                uStack_8c = uVar9;
                            }
                            iVar1 = uVar8 + uVar7 + uVar9;
                            if (iStack_94 < iVar1) {
                                _segment.ehdr = uVar11;
                                iStack_94 = iVar1;
                            }
                            iVar15 = *(iVar13 + 0x78) - *(iVar13 + 0x80);
                            iVar21 = (uVar9 & (uVar9 >> 0x1f ^ 0xffffffffU)) + iVar21;
                            iVar22 = (uVar8 & (uVar8 >> 0x1f ^ 0xffffffffU)) + iVar22;
                            iVar24 = iVar15 + iVar24;
                            uVar2 = 0;
                            if (uVar17 != 0) {
                                uVar2 = (iVar15 * 10000) / uVar17;
                            }
                            iVar14 = *(iVar13 + 0x48) - *(iVar13 + 0x50);
                            iStack_64 = (uVar7 & (uVar7 >> 0x1f ^ 0xffffffffU)) + iStack_64;
                            iVar20 = iVar14 + iVar20;
                            uVar3 = 0;
                            if (uVar17 != 0) {
                                uVar3 = (iVar14 * 10000) / uVar17;
                            }
                            uVar2 = uVar2 & (uVar2 >> 0x1f ^ 0xffffffffU);
                            iVar13 = *(iVar13 + 0xa8) - *(iVar13 + 0xb0);
                            uVar3 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
                            iVar23 = iVar13 + iVar23;
                            seq_printf(arg1,"%5d: <s>%16llu [%3d.%02d] <b>%16llu [%3d.%02d] <l>: %16llu ",uVar11,
                                       iVar14,uVar7 / 100,uVar7 % 100,iVar15,uVar8 / 100,uVar8 % 100,iVar13);
                            uVar12 = sym.is_32B_user(uVar11);
                            pcVar4 = "32BIT";
                            if ((uVar12 & 1) == 0) {
                                pcVar4 = "64BIT";
                            }
                            seq_printf(arg1," [%3d.%02d]--bias: s-[%3d.%02d] b-[%3d.%02d] %s\n",uVar3 / 100,
                                       uVar3 % 100,uVar2 / 100,uVar2 % 100,uVar9 / 100,uVar9 % 100,pcVar4,iVar13);
                            free_uid(arg1_00);
                        }
                    }
                }
                uVar11 = _find_next_bit(0x80038f8,0,iVar6,uVar11 + 1,0,0);
            } while (uVar11 < iVar6);
        }
        else {
            iStack_94 = 0;
            uStack_90 = 0;
            uVar10 = 0;
            uStack_8c = 0;
            iVar22 = 0;
            iVar21 = 0;
            iVar20 = 0;
            iVar24 = 0;
            iVar23 = 0;
            iStack_64 = 0;
        }
        seq_printf(arg1,"\nusage---sup cluster:[%d.%d] big cluster:[%d.%d] little cluster :[%d.%d]\n",iStack_64 / 100
                   ,iStack_64 % 100,iVar22 / 100,iVar22 % 100,iVar21 / 100,iVar21 % 100);
        seq_printf(arg1,"total_usage---sup cluster:[%llu] big cluster:[%llu] little cluster:[%llu] \n",iVar20,iVar24
                   ,iVar23);
        seq_printf(arg1,"top load package info--- 0 for s/b/l cluster\n");
        seq_printf(arg1,"%s: %d %3d.%02d\n","g:     top_package",_obj.top_package_uid,iStack_94 / 100,
                   iStack_94 % 100);
        seq_printf(arg1,"%s: %d %3d.%02d\n","score: top_package",*0x8000634,uVar10 / 100,uVar10 % 100);
        seq_printf(arg1,"%s: %d %3d.%02d\n","bcore: top_package",*0x8000638,uStack_90 / 100,uStack_90 % 100);
        seq_printf(arg1,"%s: %d %3d.%02d\n","lcore: top_package",*0x800063c,uStack_8c / 100,uStack_8c % 100);
    }
    return 0;
}


// ===== sym.top_package_on_bcore_open @ 0x08002e48 (size 84) =====

void sym.top_package_on_bcore_open(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(arg1,sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(arg1 + 0xd8) + 0x80) = 0x8000638;
    }
    return;
}


// ===== sym.package_runtime_show @ 0x08002e9c (size 1012) =====

ulong sym.package_runtime_show(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    int iVar8;
    int iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong *in_x18;
    int64_t iVar15;
    uint32_t uVar16;
    code *pcVar17;
    int iVar18;
    int64_t *piVar19;
    uint32_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint64_t *arg1_00;
    ulong unaff_x30;
    int64_t iVar23;
    uint32_t uVar24;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = **(arg1 + 0x80);
    uVar11 = jiffies_to_usecs(_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28));
    iVar18 = _segment.ehdr;
    iVar21 = CONCAT44(*0x8000004,_segment.ehdr);
    *(iVar21 + 0x20) = _seq_lseek;
    if (iVar18 != 0) {
        *(iVar21 + 0x20) = _seq_lseek;
        uVar11 = jiffies_to_usecs(_seq_lseek - *(iVar21 + 0x28));
    }
    uVar11 = (uVar11 & 0xffffffff) * 1000;
    seq_printf(arg1,"traced uid %d time delta is %llu\n",iVar8);
    seq_printf(arg1,"time info: from [%llu]s to [%llu]s ago\n",
               (_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x20)) / 0xfa,
               (_seq_lseek - *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28)) / 0xfa);
    __rcu_read_lock();
    iVar22 = 0;
    pcVar17 = init_task;
    iVar21 = 0;
    uVar16 = 0;
    iVar18 = 0;
    uStack_70 = 0;
    iStack_68 = 0;
    while( true ) {
        iVar15 = *(pcVar17 + 0x4d0);
        pcVar17 = iVar15 + -0x4d0;
        if (pcVar17 == init_task) break;
        __rcu_read_lock();
        iVar9 = *(*(iVar15 + 0x2c0) + 4);
        __rcu_read_unlock();
        if ((iVar9 == iVar8) && (piVar19 = *(*(iVar15 + 800) + 0x10), *(iVar15 + 800) + 0x10 != piVar19)) {
            do {
                arg1_00 = piVar19 + -0xd3;
                iVar12 = sym.get_mi_task_struct(arg1_00);
                if (iVar12 != 0) {
                    uVar16 = *arg1_00 >> 0x16 & 1 | uVar16;
                    iVar13 = *(iVar12 + 0x78) - *(iVar12 + 0x80);
                    iVar14 = *(iVar12 + 0xa8) - *(iVar12 + 0xb0);
                    if (((iVar14 + iVar13 + iVar14 != 0) && (*(iVar12 + 0x80) <= *(iVar12 + 0x78))) &&
                       (*(iVar12 + 0xb0) <= *(iVar12 + 0xa8))) {
                        if (*(iVar12 + 0xe0) <= *(iVar12 + 0xd8)) {
                            iVar12 = *(iVar12 + 0xd8) - *(iVar12 + 0xe0);
                            uVar1 = iVar12 + iVar14 + iVar13;
                            iVar21 = iVar13 + iVar21;
                            iVar22 = iVar12 + iVar22;
                            uVar2 = 0;
                            if (uVar11 != 0) {
                                uVar2 = (iVar12 * 10000) / uVar11;
                            }
                            uVar2 = uVar2 & (uVar2 >> 0x1f ^ 0xffffffffU);
                            uVar3 = 0;
                            if (uVar1 != 0) {
                                uVar3 = (iVar13 * 10000) / uVar1;
                            }
                            iVar18 = uVar2 + iVar18;
                            uVar3 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
                            uVar4 = 0;
                            if (uVar11 != 0) {
                                uVar4 = (iVar13 * 10000) / uVar11;
                            }
                            uVar4 = uVar4 & (uVar4 >> 0x1f ^ 0xffffffffU);
                            uVar5 = 0;
                            if (uVar1 != 0) {
                                uVar5 = (iVar14 * 10000) / uVar1;
                            }
                            uVar5 = uVar5 & (uVar5 >> 0x1f ^ 0xffffffffU);
                            uVar20 = uVar2 / 100;
                            uVar10 = uVar2 % 100;
                            uVar6 = 0;
                            if (uVar11 != 0) {
                                uVar6 = (iVar14 * 10000) / uVar11;
                            }
                            iStack_68 = iVar14 + iStack_68;
                            uVar6 = uVar6 & (uVar6 >> 0x1f ^ 0xffffffffU);
                            uStack_70 = CONCAT44(uVar6 + uStack_70._4_4_,uVar4 + uStack_70);
                            iVar23 = iVar12;
                            uVar24 = uVar10;
                            seq_printf(arg1,"%5d,%16s,s:%16llu [%3d.%02d],b:%16llu [%3d.%02d]",piVar19[-0x18],
                                       piVar19 + 0x22,iVar13,uVar4 / 100,uVar4 % 100,iVar14,uVar6 / 100,
                                       uVar6 % 100,iVar12,uVar20,uVar10);
                            uVar7 = 0x8000bc5;
                            if ((*arg1_00 & 0x400000) != 0) {
                                uVar7 = 0x8000d1e;
                            }
                            seq_printf(arg1,"l:%16llu [%3d.%02d],| s:[%3d.%02d], b:[%3d.%02d] %s\n",iVar12,
                                       uVar2 / 100,uVar10,uVar3 / 100,uVar3 % 100,uVar5 / 100,uVar5 % 100,uVar7,
                                       iVar23,uVar20,uVar24);
                        }
                    }
                }
                piVar19 = *piVar19;
            } while (*(iVar15 + 800) + 0x10 != piVar19);
        }
    }
    uVar7 = 0x8000d1e;
    if (uVar16 == 0) {
        uVar7 = 0x8000bc5;
    }
    seq_printf(arg1,"[%s]usage total sup:[%d.%d] big:[%d.%d] little:[%d.%d] \n",uVar7,uStack_70 / 100,
               uStack_70 % 100,uStack_70._4_4_ / 100,uStack_70._4_4_ % 100,iVar18 / 100,iVar18 % 100);
    seq_printf(arg1,"\ntotal_usage---sup cluster:[%llu] big cluster:[%llu] little cluster:[%llu] \n",iVar21,iStack_68
               ,iVar22);
    __rcu_read_unlock();
    return 0;
}


// ===== sym.top_package_on_lcore_open @ 0x080032a0 (size 84) =====

void sym.top_package_on_lcore_open(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(arg1,sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(arg1 + 0xd8) + 0x80) = 0x800063c;
    }
    return;
}


// ===== sym.top_package_open @ 0x080032f4 (size 84) =====

void sym.top_package_open(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(arg1,sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(arg1 + 0xd8) + 0x80) = obj.top_package_uid;
    }
    return;
}


// ===== sym.package_runtime_open @ 0x08003348 (size 84) =====

void sym.package_runtime_open(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(arg1,sym.package_runtime_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(arg1 + 0xd8) + 0x80) = obj.runtime_traced_uid;
    }
    return;
}


// ===== sym.trace_package_write @ 0x0800339c (size 216) =====

uint64_t sym.trace_package_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    uint uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t arg3_00;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    uVar8 = arg3;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    arg3_00 = uVar8;
    if (0x1f < uVar8) {
        arg3_00 = 0x20;
    }
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    __check_object_size(&uStack_58,arg3_00,0);
    iVar5 = sym._copy_from_user(&uStack_58,arg2,arg3_00);
    if (iVar5 == 0) {
        arg3_00 = 10;
        uVar4 = simple_strtol(&uStack_58,0);
        _printk(0x80008d9,uVar4);
        **(*(arg1 + 0xd8) + 0x80) = uVar4;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    auVar10 = __stack_chk_fail();
    uVar7 = auVar10._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar8 = (uVar7 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar7, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar9 = uVar7 & uVar8;
    }
    bVar3 = CARRY8(uVar9,arg3_00);
    uVar9 = uVar9 + arg3_00;
    uVar1 = 0;
    if (!bVar3 || uVar9 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar9 = 0xffffffffffffffff;
    }
    uVar6 = arg3_00;
    if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar3) || uVar9 == uVar1 + !bVar3) {
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
        if ((uVar7 & uVar8 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        uVar6 = __arch_copy_from_user(auVar10._0_8_,uVar7,arg3_00);
        if ((_single_release >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
    }
    if (uVar6 != 0) {
        memset(auVar10._0_8_ + (arg3_00 - uVar6),0,uVar6);
    }
    return uVar6;
}


// ===== sym._copy_from_user @ 0x08003474 (size 376) =====

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
        if ((_single_release >> 0x18 & 1) == 0) {
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
        if ((_single_release >> 0x18 & 1) == 0) {
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


// ===== sym.package_compact_open @ 0x08003628 (size 84) =====

void sym.package_compact_open(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(arg1,sym.package_compact_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(arg1 + 0xd8) + 0x80) = obj.package_dir;
    }
    return;
}


// ===== sym.package_compact_show @ 0x0800367c (size 116) =====

ulong sym.package_compact_show(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = **(arg1 + 0x80);
    if (uVar2 != 0) {
        uVar3 = sym.is_32B_user(uVar2);
        iVar1 = 8;
        if ((uVar3 & 1) == 0) {
            iVar1 = 0x10;
        }
        seq_printf(arg1,"%d:%sBit\n",uVar2,*(iVar1 + 0x80011e0));
    }
    return 0;
}


// ===== sym.package_tracestat_open @ 0x080036f0 (size 52) =====

void sym.package_tracestat_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.package_trace_stat.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.package_trace_stat @ 0x08003724 (size 92) =====

ulong sym.package_trace_stat(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(arg1,"traced uid  is %d\n",_segment.ehdr);
    seq_printf(arg1,"traced max uid is %d\n",_segment.ehdr);
    return 0;
}


// ===== sym.package_open_traced_window @ 0x08003780 (size 52) =====

void sym.package_open_traced_window(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.traced_window_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.traced_window_write @ 0x080037b4 (size 4) =====

int64_t sym.traced_window_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar2 = arg2;
    if (0x1f < arg2) {
        iVar2 = 0x20;
    }
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    __check_object_size(&uStack_58,iVar2,0);
    iVar2 = sym._copy_from_user(&uStack_58,arg1,iVar2);
    if (iVar2 == 0) {
        _segment.ehdr = simple_strtol(&uStack_58,0,10);
        _printk(0x8000bc9);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return arg2;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.traced_window_show;
    seq_printf(uVar3,"traced window is last %d\n",_segment.ehdr);
    return 0;
}


// ===== obj.mi_user_monitor_wk @ 0x080037b8 (size 200) =====

void obj.mi_user_monitor_wk(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    if (0x1f < arg2) {
        arg2 = 0x20;
    }
    uStack_38 = *(iVar1 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    __check_object_size(&uStack_58,arg2,0);
    return;
}


// ===== sym.traced_window_show @ 0x08003880 (size 56) =====

ulong sym.traced_window_show(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,"traced window is last %d\n",_segment.ehdr);
    return 0;
}


// ===== sym.package_open_window_size @ 0x080038b8 (size 52) =====

void sym.package_open_window_size(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.window_size_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.window_size_show @ 0x080038ec (size 56) =====

ulong sym.window_size_show(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,"window size is %d\n",_segment.ehdr);
    return 0;
}


// ===== sym.develop_mode_open @ 0x08003924 (size 52) =====

void sym.develop_mode_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.develop_mode_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.develop_mode_set @ 0x08003958 (size 184) =====

uint64_t sym.develop_mode_set(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint64_t arg3;
    char *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    uVar4 = arg2;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    arg3 = uVar4;
    if (0x1f < uVar4) {
        arg3 = 0x20;
    }
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    __check_object_size(&uStack_58,arg3,0);
    iVar2 = sym._copy_from_user(&uStack_58,arg1,arg3);
    if (iVar2 == 0) {
        _segment.ehdr = simple_strtol(&uStack_58,0,10);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.develop_mode_show;
    pcVar1 = "close";
    if (_segment.ehdr != 0) {
        pcVar1 = "open";
    }
    seq_printf(uVar3,"develop mode %s\n",pcVar1);
    return 0;
}


// ===== sym.develop_mode_show @ 0x08003a10 (size 80) =====

ulong sym.develop_mode_show(ulong param_1)

{
    char *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "close";
    if (_segment.ehdr != 0) {
        pcVar1 = "open";
    }
    seq_printf(param_1,"develop mode %s\n",pcVar1);
    return 0;
}


// ===== sym.package_reset_traced_window @ 0x08003a60 (size 52) =====

void sym.package_reset_traced_window(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.reset_traced_window_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.reset_traced_window_show @ 0x08003a94 (size 76) =====

ulong sym.reset_traced_window_show(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.set_traced_window(_segment.ehdr);
    seq_printf(arg1,"reset traced window show success!\n");
    return 0;
}


// ===== sym.set_traced_window @ 0x08003ae0 (size 644) =====

void sym.set_traced_window(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    code *pcVar8;
    int iVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *puVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = 2;
    if (arg1 < 4) {
        iVar4 = 4 - arg1;
    }
    uVar7 = (_segment.ehdr + iVar4) % 4;
    iVar4 = 99999;
    if (_segment.ehdr != 0) {
        uVar7 = 4;
    }
    if (_segment.ehdr + 1 < 99999) {
        iVar4 = _segment.ehdr + 1;
    }
    iVar9 = _find_first_bit(0x80038f8,iVar4);
    iVar13 = uVar7;
    do {
        if (iVar4 <= iVar9) {
            *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28) = _seq_lseek;
            __rcu_read_lock();
            puVar10 = *0x8025510;
            do {
                if (puVar10 == 0x8025510) {
                    __rcu_read_unlock();
                    return;
                }
                for (puVar12 = *(puVar10[100] + 0x10); puVar10[100] + 0x10 != puVar12; puVar12 = *puVar12) {
                    iVar11 = sym.get_mi_task_struct(puVar12 + -0xd3);
                    if (iVar11 != 0) {
                        if (5 < uVar7) goto code_r0x08003d44;
                        iVar1 = iVar11 + iVar13 * 8;
                        *(iVar11 + 0x80) = *(iVar1 + 0x58);
                        *(iVar11 + 0xb0) = *(iVar1 + 0x88);
                        *(iVar11 + 0xe0) = *(iVar1 + 0xb8);
                    }
                }
                puVar10 = *puVar10;
            } while( true );
        }
        puVar10 = find_user(iVar9);
        if (puVar10 == NULL) {
            iVar11 = sym.get_mi_user_struct(CONCAT44(*0x8000004,_segment.ehdr));
            if (5 < uVar7) {
code_r0x08003d44:
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x5512,0x8003d48);
                (*pcVar8)();
            }
            iVar1 = iVar11 + iVar13 * 8;
            *(iVar11 + 0x50) = *(iVar1 + 0x28);
            *(iVar11 + 0x80) = *(iVar1 + 0x58);
            *(iVar11 + 0xb0) = *(iVar1 + 0x88);
code_r0x08003c48:
            if (*puVar10 == 1) {
                uVar3 = *(puVar10 + 10);
                puVar2 = (uVar3 >> 3 & 0x1ffffff8) + 0x80038f8;
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar6) {
                        *puVar2 = *puVar2 & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                free_uid(puVar10);
            }
        }
        else {
            iVar11 = sym.get_mi_user_struct(puVar10);
            if (iVar11 != 0) {
                if (uVar7 < 6) {
                    iVar1 = iVar11 + iVar13 * 8;
                    *(iVar11 + 0x50) = *(iVar1 + 0x28);
                    *(iVar11 + 0x80) = *(iVar1 + 0x58);
                    *(iVar11 + 0xb0) = *(iVar1 + 0x88);
                    free_uid(puVar10);
                    goto code_r0x08003c48;
                }
                goto code_r0x08003d44;
            }
            _printk("mi user struct is null\n");
        }
        iVar9 = _find_next_bit(0x80038f8,0,iVar4,iVar9 + 1,0,0);
    } while( true );
}


// ===== sym.pause_mode_open @ 0x08003d74 (size 52) =====

void sym.pause_mode_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.pause_mode_show.67c872e9bb86dbf2445abc6f088d2e0e.cfi_jt,0);
    return;
}


// ===== sym.pause_mode_set @ 0x08003da8 (size 184) =====

uint64_t sym.pause_mode_set(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint64_t arg3;
    ulong uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    uVar4 = arg2;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    arg3 = uVar4;
    if (0x1f < uVar4) {
        arg3 = 0x20;
    }
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    __check_object_size(&uStack_58,arg3,0);
    iVar2 = sym._copy_from_user(&uStack_58,arg1,arg3);
    if (iVar2 == 0) {
        _segment.ehdr = simple_strtol(&uStack_58,0,10);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.pause_mode_show;
    uVar1 = 0x80008c3;
    if (_segment.ehdr != 0) {
        uVar1 = 0x80006ea;
    }
    seq_printf(uVar3,"pause mode %s\n",uVar1);
    return 0;
}


// ===== sym.pause_mode_show @ 0x08003e60 (size 80) =====

ulong sym.pause_mode_show(ulong param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0x80008c3;
    if (_segment.ehdr != 0) {
        uVar1 = 0x80006ea;
    }
    seq_printf(param_1,"pause mode %s\n",uVar1);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08003eb0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003ef4

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
    //switch table (4 cases) at 0x8000690
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003f08);
    (*pcVar1)();
}


// ===== sym.get_curr_runtime_items @ 0x08003f08 (size 20) =====

code * sym.get_curr_runtime_items(void)

{
    return obj.curr_runtime_items.llvm.9016335817048903536;
}


// ===== sym.get_uid_max_value @ 0x08003f1c (size 20) =====

code * sym.get_uid_max_value(void)

{
    return obj.uid_max_value.llvm.9016335817048903536;
}


// ===== sym.get_runtime_window_size @ 0x08003f30 (size 20) =====

code * sym.get_runtime_window_size(void)

{
    return obj.package_showall_entry;
}


// ===== sym.get_user_zero @ 0x08003f44 (size 20) =====

code * sym.get_user_zero(void)

{
    return obj.package_top_bcore_entry;
}


// ===== sym.cpu_coregroup_mask @ 0x08003f58 (size 112) =====

code * sym.cpu_coregroup_mask(uint32_t arg1)

{
    code *pcVar1;
    code *pcVar2;
    
    if (0x1f < arg1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x8003fc8);
        (*pcVar1)();
    }
    pcVar1 = jiffies_64 + arg1 * 0x30;
    if ((*(jiffies_64 + arg1 * 0x30) & (___cpu_online_mask ^ 0xffffffff)) != 0) {
        pcVar1 = __cpu_online_mask;
    }
    pcVar2 = pcVar1;
    if ((*(cpumask_next + arg1 * 0x30) != -1) &&
       (pcVar2 = queue_work_on + arg1 * 0x30, (*(queue_work_on + arg1 * 0x30) & (*pcVar1 ^ 0xffffffff)) != 0)) {
        pcVar2 = pcVar1;
    }
    return pcVar2;
}


// ===== sym.get_cluster_type @ 0x08003fc8 (size 364) =====

uint32_t sym.get_cluster_type(uint32_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    code *pcVar7;
    int iVar8;
    uint64_t unaff_x25;
    ulong unaff_x26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0x1f < arg1) {
code_r0x08004130:
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8004134);
        (*pcVar2)();
    }
    uVar3 = *(obj.cpu_cluster_map + arg1 * 4);
    if (uVar3 == 0) {
        iVar8 = 0;
        uVar6 = 0xffffffff;
        _seq_lseek = unaff_x25;
        *arg1 = unaff_x26;
        while( true ) {
            uVar3 = cpumask_next(uVar6,__cpu_online_mask);
            if (unaff_x26 <= uVar3) break;
            uVar6 = uVar3;
            if (0x1f < uVar3) goto code_r0x08004130;
            pcVar2 = jiffies_64 + uVar6 * 0x30;
            if ((*(jiffies_64 + uVar6 * 0x30) & (unaff_x25 ^ 0xffffffff)) != 0) {
                pcVar2 = __cpu_online_mask;
            }
            pcVar7 = pcVar2;
            if ((*(cpumask_next + uVar6 * 0x30) != -1) &&
               (pcVar7 = queue_work_on + uVar3 * 0x30, (*(queue_work_on + uVar3 * 0x30) & (*pcVar2 ^ 0xffffffff)) != 0)
               ) {
                pcVar7 = pcVar2;
            }
            uVar4 = *pcVar7 & unaff_x25;
            uVar1 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
            uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
            uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            uVar5 = 0x20;
            if (uVar4 != 0) {
                uVar5 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
            }
            if (uVar3 == uVar5) {
                uVar4 = 0xffffffff;
                while( true ) {
                    uVar4 = cpumask_next(uVar4,pcVar7);
                    if (unaff_x26 <= uVar4) break;
                    if (0x1f < uVar4) goto code_r0x08004130;
                    *(obj.cpu_cluster_map + (uVar4 & 0xffffffff) * 4) = iVar8;
                }
                iVar8 = iVar8 + 1;
            }
        }
        uVar3 = *(obj.cpu_cluster_map + arg1 * 4);
    }
    if (2 < uVar3) {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.get_mi_user_struct @ 0x08004134 (size 56) =====

ulong sym.get_mi_user_struct(int64_t arg1)

{
    if (*(arg1 + 0x88) == -0x2345edcb5432bcdf) {
        return *(arg1 + 0x90);
    }
    return 0;
}


// ===== sym.mi_task_exiting @ 0x0800416c (size 52) =====

bool sym.mi_task_exiting(int64_t arg1)

{
    if ((arg1 != 0) && (*(arg1 + 0x28) != 0x80)) {
        return *(arg1 + 0x56c) != 0;
    }
    return true;
}


// ===== sym.get_mi_task_struct @ 0x080041a0 (size 80) =====

ulong sym.get_mi_task_struct(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (arg1 != 0) {
        if (((*(arg1 + 0x28) == 0x80) || (*(arg1 + 0x56c) != 0)) || (*(arg1 + 0xd40) != -0x5432543253425244)) {
            return 0;
        }
        uVar1 = *(arg1 + 0xd48);
    }
    return uVar1;
}


// ===== sym.get_mi_task_struct_unsafe @ 0x080041f0 (size 60) =====

ulong sym.get_mi_task_struct_unsafe(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (arg1 != 0) {
        if (*(arg1 + 0xd40) != -0x5432543253425244) {
            return 0;
        }
        uVar1 = *(arg1 + 0xd48);
    }
    return uVar1;
}


// ===== sym.is_32B_user @ 0x0800422c (size 64) =====

uint32_t sym.is_32B_user(int64_t arg1)

{
    if (99999 < arg1) {
        return 1;
    }
    return *(obj.package_uid_32B + (arg1 >> 6 & 0x3ffffff) * 8) >> (arg1 & 0x3fU) & 1;
}


// ===== sym.update_pkg_load @ 0x0800426c (size 184) =====

void sym.update_pkg_load(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.update_task_runtime_info(arg1,in_x4,arg2 & 0xffffffffU);
    pcVar1 = *0x8003000;
    if (*0x8003000 != NULL) {
        if (*0x8003000 != sym.__typeid__ZTSFvP11task_structiiyyE_global_addr) {
            __cfi_slowpath_diag(0xa89045965ac71c23,*0x8003000,0x8000670);
        }
        (*pcVar1)(arg1,arg2 & 0xffffffffU,arg3 & 0xffffffff,arg4);
    }
    return;
}


// ===== sym.update_task_runtime_info @ 0x08004324 (size 752) =====

//WARNING: Removing unreachable block (ram,0x0800457c)

void sym.update_task_runtime_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    code *pcVar8;
    ulong uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sym.get_cluster_type(arg3);
    if (*0x80037b0 != '\x01') {
        return;
    }
    if (_segment.ehdr != 0) {
        return;
    }
    if ((*(arg1 + 0x3c) >> 1 & 1) != 0) {
        return;
    }
    pcVar8 = sym.task_user(arg1);
    pcVar2 = obj.package_top_bcore_entry;
    if (pcVar8 != NULL) {
        pcVar2 = pcVar8;
    }
    uVar3 = *(pcVar2 + 0x50);
    if (((*arg1 >> 0x16 & 1) != 0) && (uVar3 < 100000)) {
        pcVar8 = obj.package_uid_32B + (uVar3 >> 3 & 0x1ffffff8);
        Hint_Prefetch(pcVar8,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar6) {
                *pcVar8 = *pcVar8 | 1L << (uVar3 & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
    }
    if ((*(pcVar2 + 0x88) != -0x2345edcb5432bcdf) || (iVar12 = *(pcVar2 + 0x90), iVar12 == 0)) {
        if (0x1869e < uVar3) {
            uVar3 = 99999;
        }
        uVar11 = 1L << (uVar3 & 0x3f);
        puVar1 = (uVar3 >> 3 & 0x1ffffff8) + 0x80038f8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar14 = *puVar1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = uVar14 | uVar11;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar14 & uVar11) != 0) goto code_r0x08004548;
        Hint_Prefetch(pcVar2,2,0,1);
        do {
            uVar4 = *pcVar2;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar6) {
                *pcVar2 = uVar4 + 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        if (uVar4 == 0) {
            uVar9 = 2;
code_r0x080045b4:
            refcount_warn_saturate(pcVar2,uVar9);
        }
        else if ((uVar4 + 1 | uVar4) < 0) {
            uVar9 = 1;
            goto code_r0x080045b4;
        }
        if (_segment.ehdr < uVar3) {
            _segment.ehdr = uVar3;
        }
        goto code_r0x08004548;
    }
    if ((((arg1 == 0) || (*(arg1 + 0x28) == 0x80)) || (*(arg1 + 0x56c) != 0)) ||
       ((*(arg1 + 0xd40) != -0x5432543253425244 || (iVar10 = *(arg1 + 0xd48), iVar10 == 0)))) goto code_r0x08004548;
    if (iVar7 == 0) {
        piVar13 = iVar12 + 0xa8;
        *(iVar10 + 0xd8) = *(iVar10 + 0xd8) + arg2;
code_r0x08004514:
        *piVar13 = *piVar13 + arg2;
    }
    else {
        if (iVar7 == 1) {
            piVar13 = iVar12 + 0x78;
            *(iVar10 + 0xa8) = *(iVar10 + 0xa8) + arg2;
            goto code_r0x08004514;
        }
        if (iVar7 == 2) {
            piVar13 = iVar12 + 0x48;
            *(iVar10 + 0x78) = *(iVar10 + 0x78) + arg2;
            goto code_r0x08004514;
        }
    }
    *(iVar10 + 0x58) = *(iVar10 + 0x78);
    *(iVar10 + 0x88) = *(iVar10 + 0xa8);
    *(iVar10 + 0xb8) = *(iVar10 + 0xd8);
code_r0x08004548:
    if (pcVar2 != obj.package_top_bcore_entry) {
        free_uid();
    }
    return;
}


// ===== sym.register_sched_load_update_hook @ 0x08004614 (size 112) =====

void sym.register_sched_load_update_hook(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 1) {
        _printk(0x8000d3f,arg1 & 0xffffffff,"register_sched_load_update_hook");
        iVar1 = arg2;
        if (arg1 != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8004684);
            (*pcVar2)();
        }
    }
    else {
        _printk(0x8000af8);
        iVar1 = *0x8003000;
    }
    *0x8003000 = iVar1;
    return;
}


// ===== sym.unregister_sched_load_update_hook @ 0x08004684 (size 108) =====

void sym.unregister_sched_load_update_hook(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 1) {
        _printk(0x8000d3f,arg1 & 0xffffffff,"unregister_sched_load_update_hook");
        if (arg1 != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x80046f0);
            (*pcVar1)();
        }
        *0x8003000 = 0;
    }
    else {
        _printk(0x80008f2);
    }
    return;
}


// ===== sym.pkg_enable @ 0x080046f0 (size 28) =====

bool sym.pkg_enable(void)

{
    return _segment.ehdr == 0;
}


// ===== sym.mi_sched_tick @ 0x0800470c (size 144) =====

void sym.mi_sched_tick(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _jiffies_to_usecs;
    if ((*0x80037b0 == '\x01' && _segment.ehdr == 0) &&
       (sym.check_userlist(*(arg1 + 0xaa0)), _segment.ehdr * 0xfa <= iVar1 - CONCAT44(*0x8000004,_segment.ehdr))) {
        queue_work_on(0,__find_first_bit,obj.mi_user_monitor_wk);
    }
    return;
}


// ===== sym.check_userlist @ 0x0800479c (size 612) =====

void sym.check_userlist(int64_t arg1)

{
    uint32_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    ulong uVar6;
    uint32_t uVar7;
    int64_t arg1_00;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x3c) >> 1 & 1) != 0) {
        return;
    }
    pcVar5 = sym.task_user(arg1);
    if (pcVar5 == NULL) {
        return;
    }
    if ((*(pcVar5 + 0x88) != -0x2345edcb5432bcdf) || (arg2 = *(pcVar5 + 0x90), arg2 == 0)) goto code_r0x08004970;
    iVar2 = *(pcVar5 + 0x50);
    puVar1 = arg1 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar7 == 0) {
        uVar6 = 2;
code_r0x08004904:
        refcount_warn_saturate(puVar1,uVar6);
        if (arg1 == 0) goto code_r0x080049e8;
code_r0x08004820:
        if ((((*(arg1 + 0x28) == 0x80) || (*(arg1 + 0x56c) != 0)) || (*(arg1 + 0xd40) != -0x5432543253425244)) ||
           (arg1_00 = *(arg1 + 0xd48), arg1_00 == 0)) goto code_r0x080049e8;
        if (*puVar1 == 0) {
            sym.put_task_struct(arg1);
            goto code_r0x08004970;
        }
        if (((*(arg1_00 + 8) == '\0') ||
            ((*(arg1_00 + 0xc) != iVar2 && (sym.task_add_to_userlist(arg1_00,arg2,1), *(arg1_00 + 8) == '\0')))) &&
           (*(arg1_00 + 9) == '\0')) {
            sym.task_add_to_userlist(arg1_00,arg2,0);
        }
        *(arg1_00 + 0xc) = iVar2;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar7 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x08004930;
        }
    }
    else {
        if ((uVar7 + 1 | uVar7) < 0) {
            uVar6 = 1;
            goto code_r0x08004904;
        }
        if (arg1 != 0) goto code_r0x08004820;
code_r0x080049e8:
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar7 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 1) {
            DataMemoryBarrier(2,1);
code_r0x08004930:
            __put_task_struct(arg1);
            goto code_r0x08004970;
        }
    }
    if (uVar7 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
code_r0x08004970:
    if (pcVar5 != obj.package_top_bcore_entry) {
        free_uid(pcVar5);
    }
    return;
}


// ===== sym.mi_task_fork @ 0x08004a00 (size 96) =====

void sym.mi_task_fork(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        *(arg1 + 0xd48) = 0;
        *(arg1 + 0xd40) = 0;
        iVar1 = sym.__get_mi_task_struct(arg1);
        if (iVar1 == 0) {
            _printk(0x80007b0,arg1 + 0x7a8,*(arg1 + 0x5d8));
        }
    }
    return;
}


// ===== sym.__get_mi_task_struct @ 0x08004a60 (size 312) =====

ulong * sym.__get_mi_task_struct(int64_t arg1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xd40) == -0x5432543253425244) {
        puVar3 = *(arg1 + 0xd48);
    }
    else {
        iVar2 = sp_el0;
        puVar1 = iVar2 + 0x10;
        if (((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) {
            puVar3 = kmem_cache_alloc(*0x8003000);
            if (puVar3 != NULL) {
                *(puVar3 + 1) = 0;
                puVar3[5] = arg1;
                puVar3[6] = 0;
                *(puVar3 + 0xc) = 0xffffffff;
                *puVar3 = 0xacbdacbd;
                uVar4 = *(arg1 + 0x438);
                puVar3[0x35] = 0;
                puVar3[0x36] = 0;
                puVar3[0x1f] = 0;
                puVar3[0x20] = 0;
                puVar3[3] = uVar4;
                puVar3[0x21] = 0;
                *(puVar3 + 0x22) = 0;
                puVar3[0x23] = 0;
                puVar3[0x24] = 0;
                puVar3[0x25] = 0;
                puVar3[0x26] = 0;
                puVar3[0x27] = 0;
                *(puVar3 + 0x28) = 0;
                puVar3[0x2d] = 0;
                puVar3[0x2e] = 0;
                puVar3[0x2b] = 0;
                puVar3[0x2c] = 0;
                puVar3[0x29] = 0;
                puVar3[0x2a] = 0;
                puVar3[0xb] = 0;
                puVar3[0xc] = 0;
                puVar3[0xd] = 0;
                puVar3[0xe] = 0;
                puVar3[0xf] = 0;
                puVar3[0x10] = 0;
                puVar3[0x11] = 0;
                puVar3[0x12] = 0;
                puVar3[0x13] = 0;
                puVar3[0x14] = 0;
                puVar3[0x15] = 0;
                puVar3[0x16] = 0;
                puVar3[0x17] = 0;
                puVar3[0x18] = 0;
                puVar3[0x19] = 0;
                puVar3[0x1a] = 0;
                puVar3[0x1b] = 0;
                puVar3[0x1c] = 0;
                puVar3[0x1d] = 0;
                *(puVar3 + 0x1e) = 0;
                puVar3[0x2f] = puVar3 + 0x2f;
                *(puVar3 + 0x32) = 0;
                *(puVar3 + 10) = 0;
                puVar3[0x37] = 0;
                *(puVar3 + 0x38) = 0xffffffff;
                puVar3[0x33] = 0;
                puVar3[0x34] = 0;
                *(puVar3 + 0x39) = 0;
                *(arg1 + 0xd48) = puVar3;
                *(arg1 + 0xd40) = 0xabcdabcdacbdadbc;
            }
        }
        else {
            puVar3 = NULL;
        }
    }
    return puVar3;
}


// ===== sym.free_mi_task_struct @ 0x08004ba4 (size 308) =====

int64_t sym.free_mi_task_struct(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    code *pcVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0xd40) == -0x5432543253425244) {
        piVar7 = *(arg2 + 0xd48);
        *(arg2 + 0xd40) = 0;
        if (*piVar7 == 0xacbdacbd) {
            *piVar7 = 0;
            if ((piVar7[1] != '\0') && (piVar7[6] != 0)) {
                iVar6 = piVar7[6] + 0x10;
                piVar7[6] = 0;
                _raw_write_lock_irq(iVar6);
                uVar4 = __list_del_entry_valid(piVar7 + 7);
                if ((uVar4 & 1) != 0) {
                    iVar1 = piVar7[7];
                    piVar2 = piVar7[8];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                piVar7[7] = -0x2152ffffffffff00;
                piVar7[8] = -0x2152fffffffffede;
                _raw_write_unlock_irq(iVar6);
            }
            if (piVar7[0x32] != '\0') {
                if (0x1f < *(arg2 + 0x58)) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8004cd8);
                    (*pcVar3)();
                }
                piVar2 = piVar7 + 0x2f;
                iVar6 = *(__per_cpu_offset + (*(arg2 + 0x58) & 0xffffffff) * 8);
                *(piVar7 + 0x32) = 0;
                if (*(iVar6 + 0x8005f68) == piVar2) {
                    uVar5 = rb_next(piVar2);
                    *(iVar6 + 0x8005f68) = uVar5;
                }
                rb_erase(piVar2,iVar6 + 0x8005f60);
            }
            arg1 = kmem_cache_free(*0x8003000,piVar7);
        }
    }
    return arg1;
}


// ===== sym.get_package_runtime_info @ 0x08004cdc (size 20) =====

ulong sym.get_package_runtime_info(void)

{
    return 0x80037f0;
}


// ===== sym.task_user @ 0x08004cf0 (size 188) =====

code * sym.task_user(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    __rcu_read_lock();
    pcVar5 = *(*(arg1 + 0x790) + 0x80);
    __rcu_read_unlock();
    if (pcVar5 == NULL) {
        pcVar5 = obj.package_top_bcore_entry;
    }
    else {
        Hint_Prefetch(pcVar5,2,0,1);
        do {
            uVar1 = *pcVar5;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar3) {
                *pcVar5 = uVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 0) {
            uVar4 = 2;
        }
        else {
            if (-1 < (uVar1 + 1 | uVar1)) goto code_r0x08004d44;
            uVar4 = 1;
        }
        refcount_warn_saturate(pcVar5,uVar4);
    }
code_r0x08004d44:
    __rcu_read_unlock();
    return pcVar5;
}


// ===== sym.put_task_struct @ 0x08004dac (size 148) =====

void sym.put_task_struct(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x38;
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
    if (iVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.task_add_to_userlist @ 0x08004e40 (size 344) =====

void sym.task_add_to_userlist(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    ulong *puVar4;
    uint32_t *puVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = kmem_cache_alloc_trace(__find_next_bit,0xa20,0x48);
    if (puVar4 == NULL) {
        return;
    }
    puVar5 = *(arg1 + 0x28) + 0x38;
    *(arg1 + 9) = 1;
    Hint_Prefetch(puVar5,2,0,1);
    do {
        uVar1 = *puVar5;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
            *puVar5 = uVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar1 == 0) {
        uVar6 = 2;
code_r0x08004f48:
        refcount_warn_saturate(puVar5,uVar6);
    }
    else if ((uVar1 + 1 | uVar1) < 0) {
        uVar6 = 1;
        goto code_r0x08004f48;
    }
    puVar5 = *(arg2 + 0xb8);
    Hint_Prefetch(puVar5,2,0,1);
    do {
        uVar1 = *puVar5;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
            *puVar5 = uVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar1 == 0) {
        uVar6 = 2;
    }
    else {
        if (-1 < (uVar1 + 1 | uVar1)) goto code_r0x08004ed4;
        uVar6 = 1;
    }
    refcount_warn_saturate(puVar5,uVar6);
code_r0x08004ed4:
    *(puVar4 + 6) = arg3;
    puVar4[7] = arg1;
    puVar4[8] = arg2;
    *puVar4 = 0xfffffffe0;
    puVar4[1] = puVar4 + 1;
    puVar4[2] = puVar4 + 1;
    uVar6 = *0x8003000;
    puVar4[3] = sym.task_add_work.7e18d739403c60a2bcec1f1f68693b6b.cfi_jt;
    queue_work_on(0x20,uVar6,puVar4);
    return;
}


// ===== sym.task_add_work @ 0x08004f98 (size 512) =====

void sym.task_add_work(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *piVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x38);
    iVar3 = *(arg1 + 0x40);
    iVar4 = *(arg1 + 0x30);
    if (iVar4 == 2) {
        if (*(iVar2 + 0x30) != 0) {
            iVar8 = *(iVar2 + 0x30) + 0x10;
            _raw_write_lock_irq(iVar8);
            if ((*(iVar2 + 9) != '\0') && (*(iVar2 + 8) != '\0')) {
                uVar7 = __list_del_entry_valid(iVar2 + 0x38);
                if ((uVar7 & 1) != 0) {
                    iVar10 = *(iVar2 + 0x38);
                    piVar9 = *(iVar2 + 0x40);
                    *(iVar10 + 8) = piVar9;
                    *piVar9 = iVar10;
                }
                *(iVar2 + 8) = 0;
                *(iVar2 + 0x38) = 0xdead000000000100;
                *(iVar2 + 0x40) = 0xdead000000000122;
            }
            _raw_write_unlock_irq(iVar8);
        }
        *(iVar2 + 0x30) = 0;
    }
    else {
        if (iVar4 == 1) {
            if (*(iVar2 + 0x30) != 0) {
                iVar8 = *(iVar2 + 0x30) + 0x10;
                _raw_write_lock_irq(iVar8);
                if (*(iVar2 + 8) != '\0') {
                    __list_del_entry_valid(iVar2 + 0x38);
                    return;
                }
                _raw_write_unlock_irq(iVar8);
            }
        }
        else if (iVar4 != 0) goto code_r0x080050f0;
        _raw_write_lock_irq(iVar3 + 0x10);
        if ((*(iVar2 + 9) != '\0') && (*(iVar2 + 8) == '\0')) {
            iVar8 = iVar2 + 0x38;
            piVar9 = iVar3 + 0x18;
            iVar10 = *piVar9;
            uVar7 = __list_add_valid(iVar8,piVar9,iVar10);
            if ((uVar7 & 1) != 0) {
                *(iVar10 + 8) = iVar8;
                *(iVar2 + 0x38) = iVar10;
                *(iVar2 + 0x40) = piVar9;
                *piVar9 = iVar8;
            }
            *(iVar2 + 8) = 1;
        }
        _raw_write_unlock_irq(iVar3 + 0x10);
        *(iVar2 + 0x30) = iVar3;
    }
code_r0x080050f0:
    iVar8 = *(iVar2 + 0x28);
    *(iVar2 + 9) = 0;
    piVar1 = iVar8 + 0x38;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    if (iVar4 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(iVar8);
    }
    else if (iVar4 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    free_uid(*(iVar3 + 0xb8));
    kfree(arg1);
    return;
}


// ===== sym.init_user_zero @ 0x08005198 (size 464) =====

//WARNING: Removing unreachable block (ram,0x08005274)

void sym.init_user_zero(void)

{
    char cVar1;
    bool bVar2;
    uint *puVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) != -0x2345edcb5432bcdf) {
        return;
    }
    puVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    if (puVar3 == NULL) {
        return;
    }
    *(puVar3 + 2) = 0xacbdacbd;
    *(puVar3 + 4) = 0;
    *(puVar3 + 6) = puVar3 + 6;
    *(puVar3 + 8) = puVar3 + 6;
    *puVar3 = 1;
    *(puVar3 + 0x2e) = obj.package_top_bcore_entry;
    Hint_Prefetch(0x80005c8,2,0,1);
    do {
        uVar4 = _obj.package_top_bcore_entry;
        cVar1 = '\x01';
        bVar2 = ExclusiveMonitorPass(0x80005c8,0x10);
        if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            _obj.package_top_bcore_entry = _obj.package_top_bcore_entry + 1;
        }
    } while (cVar1 != '\0');
    if (uVar4 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar4 + 1 | uVar4)) goto code_r0x08005224;
        uVar5 = 1;
    }
    refcount_warn_saturate(obj.package_top_bcore_entry,uVar5);
code_r0x08005224:
    *(puVar3 + 0x2a) = 0;
    *(puVar3 + 0x2c) = 0;
    *(puVar3 + 0x26) = 0;
    *(puVar3 + 0x28) = 0;
    *(puVar3 + 0x22) = 0;
    *(puVar3 + 0x24) = 0;
    *(puVar3 + 0x1e) = 0;
    *(puVar3 + 0x20) = 0;
    *(puVar3 + 0x1a) = 0;
    *(puVar3 + 0x1c) = 0;
    *(puVar3 + 0x16) = 0;
    *(puVar3 + 0x18) = 0;
    *(puVar3 + 0x12) = 0;
    *(puVar3 + 0x14) = 0;
    *(puVar3 + 0xe) = 0;
    *(puVar3 + 0x10) = 0;
    *(puVar3 + 10) = 0;
    *(puVar3 + 0xc) = 0;
    Hint_Prefetch(0x80038f8,2,0,1);
    do {
        cVar1 = '\x01';
        bVar2 = ExclusiveMonitorPass(0x80038f8,0x10);
        if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            *0x80038f8 = *0x80038f8 | 1;
        }
    } while (cVar1 != '\0');
    _segment.ehdr = 0;
    Hint_Prefetch(0x80005c8,2,0,1);
    do {
        uVar4 = _obj.package_top_bcore_entry;
        cVar1 = '\x01';
        bVar2 = ExclusiveMonitorPass(0x80005c8,0x10);
        if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            _obj.package_top_bcore_entry = _obj.package_top_bcore_entry + 1;
        }
    } while (cVar1 != '\0');
    if (uVar4 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar4 + 1 | uVar4)) {
            _segment.ehdr = 0;
            return;
        }
        uVar5 = 1;
    }
    refcount_warn_saturate(obj.package_top_bcore_entry,uVar5);
    return;
}


// ===== sym.mi_user_roll_wk @ 0x08005368 (size 968) =====

void sym.mi_user_roll_wk(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    int64_t *piVar7;
    code *pcVar8;
    uint64_t *in_tmp_ldXn;
    int iVar9;
    uint uVar10;
    ulong *arg1_00;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    uint64_t extraout_x9;
    ulong uVar15;
    ulong uVar16;
    ulong *in_x18;
    char *unaff_x21;
    int64_t unaff_x22;
    ulong *unaff_x23;
    int64_t unaff_x24;
    int64_t *piVar17;
    int64_t unaff_x25;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uStack_6c = 0;
    if ((*0x80038f0 & 1) == 0) {
        *0x80038f0 = 1;
        iVar11 = ktime_get();
        iVar13 = SUB168(SEXT816(iVar11) * SEXT816(-0x20c49ba5e353f7cf),8);
        uVar10 = sym.mi_task_world_init(&uStack_6c);
        iVar11 = ktime_get();
        _printk(0x80006ee,uStack_6c,uVar10,iVar11 / 1000 + ((iVar13 >> 7) - (iVar13 >> 0x3f)));
    }
    iVar4 = 99999;
    iVar2 = iVar4;
    if (_segment.ehdr + 1 < 99999) {
        iVar2 = _segment.ehdr + 1;
    }
    iVar9 = _find_first_bit(0x80038f8,iVar2);
    iVar2 = iVar4;
    if (_segment.ehdr + 1 < 99999) {
        iVar2 = _segment.ehdr + 1;
    }
    if (iVar2 <= iVar9) goto code_r0x08005620;
    unaff_x21 = str._C4;
    unaff_x22 = -0x2345edcb5432bcdf;
    unaff_x24 = 1;
    unaff_x25 = 0xacbdacbd;
    do {
        arg1_00 = find_user(iVar9);
        if (arg1_00 == NULL) {
            iVar11 = *(unaff_x21 + 8);
            if (*unaff_x21 != unaff_x22) {
                iVar11 = 0;
            }
            if (5 < _segment.ehdr) {
code_r0x08005708:
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x5512,0x800570c);
                (*pcVar8)();
            }
            iVar13 = iVar11 + _segment.ehdr * 8;
            uVar16 = *(iVar11 + 0x78);
            uVar15 = *(iVar11 + 0xa8);
            *(iVar13 + 0x28) = *(iVar11 + 0x48);
            *(iVar13 + 0x58) = uVar16;
            *(iVar13 + 0x88) = uVar15;
        }
        else {
            iVar11 = sym.__get_mi_user_struct(arg1_00);
            if (iVar11 != 0) {
                if (5 < _segment.ehdr) goto code_r0x08005708;
                iVar13 = iVar11 + _segment.ehdr * 8;
                uVar15 = *(iVar11 + 0x78);
                uVar16 = *(iVar11 + 0xa8);
                *(iVar13 + 0x28) = *(iVar11 + 0x48);
                *(iVar13 + 0x58) = uVar15;
                *(iVar13 + 0x88) = uVar16;
            }
            free_uid(arg1_00);
            unaff_x23 = arg1_00;
            if (*arg1_00 == 1) {
                uVar12 = unaff_x24 << (*(arg1_00 + 10) & 0x3f);
                puVar14 = (*(arg1_00 + 10) >> 3 & 0x1ffffff8) + 0x80038f8;
                goto code_r0x08005718;
            }
        }
        while( true ) {
            iVar2 = iVar4;
            if (_segment.ehdr + 1 < 99999) {
                iVar2 = _segment.ehdr + 1;
            }
            iVar9 = _find_next_bit(0x80038f8,0,iVar2,iVar9 + 1,0,0);
            iVar2 = iVar4;
            if (_segment.ehdr + 1 < 99999) {
                iVar2 = _segment.ehdr + 1;
            }
            if (iVar9 < iVar2) break;
code_r0x08005620:
            if (5 < _segment.ehdr) goto code_r0x08005708;
            *((_segment.ehdr & 0xffffffff) * 8 + 0x80037f0) = _segment.ehdr;
            *0x8003810 = _seq_lseek;
            *0x8000004 = _seq_lseek >> 0x20;
            _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1) & 0xffffffff00000003;
            iVar11 = sp_el0;
            if (*(iVar11 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail();
            puVar14 = in_tmp_ldXn;
            uVar12 = extraout_x9;
code_r0x08005718:
            Hint_Prefetch(puVar14,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar14,0x10);
                if (bVar6) {
                    *puVar14 = *puVar14 & (uVar12 ^ 0xffffffffffffffff);
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            _printk(0x80007f8,*(unaff_x23 + 10));
            if (unaff_x23[0x11] == unaff_x22) {
                iVar11 = unaff_x23[0x12];
                unaff_x23[0x11] = 0;
                if (*(iVar11 + 8) != unaff_x25) {
                    _printk(0x800096a);
                }
                *(iVar11 + 8) = 0;
                _raw_write_lock_irq();
                piVar1 = iVar11 + 0x18;
                if (piVar1 != *piVar1) {
                    piVar7 = *piVar1;
                    while (piVar7 != piVar1) {
                        piVar17 = *piVar7;
                        uVar12 = __list_del_entry_valid();
                        if ((uVar12 & 1) != 0) {
                            iVar13 = *piVar7;
                            piVar3 = piVar7[1];
                            *(iVar13 + 8) = piVar3;
                            *piVar3 = iVar13;
                        }
                        *(piVar7 + -6) = 0;
                        piVar7[-1] = 0;
                        *piVar7 = -0x2152ffffffffff00;
                        piVar7[1] = -0x2152fffffffffede;
                        piVar7 = piVar17;
                    }
                }
                _raw_write_unlock_irq(iVar11 + 0x10);
                kmem_cache_free(*0x8003000,iVar11);
                unaff_x24 = 1;
                unaff_x25 = 0xacbdacbd;
                unaff_x22 = -0x2345edcb5432bcdf;
            }
            free_uid(unaff_x23);
        }
    } while( true );
}


// ===== sym.mi_task_world_init @ 0x08005730 (size 640) =====

int sym.mi_task_world_init(int64_t arg1)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *puVar7;
    int iVar8;
    uint32_t *puVar9;
    ulong *arg1_00;
    int iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    if (*0x8025510 == 0x8025510) {
        iVar10 = 0;
        iVar8 = 0;
    }
    else {
        iVar8 = 0;
        iVar10 = 0;
        piVar11 = *0x8025510;
        do {
            for (puVar7 = *(piVar11[100] + 0x10); piVar11[100] + 0x10 != puVar7; puVar7 = *puVar7) {
                puVar9 = puVar7 + -0xcc;
                Hint_Prefetch(puVar9,2,0,1);
                do {
                    uVar6 = *puVar9;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                    if (bVar3) {
                        *puVar9 = uVar6 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                arg1_00 = puVar7 + -0xd3;
                if (uVar6 == 0) {
                    uVar5 = 2;
code_r0x080058d8:
                    refcount_warn_saturate(puVar9,uVar5);
                    uVar6 = *arg1_00;
                }
                else {
                    if ((uVar6 + 1 | uVar6) < 0) {
                        uVar5 = 1;
                        goto code_r0x080058d8;
                    }
                    uVar6 = *arg1_00;
                }
                if ((uVar6 >> 0x16 & 1) != 0) {
                    __rcu_read_lock();
                    uVar6 = *(puVar7[0x1f] + 4);
                    __rcu_read_unlock();
                    if (uVar6 >> 5 < 0xc35) {
                        __rcu_read_lock();
                        uVar6 = *(puVar7[0x1f] + 4);
                        __rcu_read_unlock();
                        pcVar1 = obj.package_uid_32B + (uVar6 >> 3 & 0x1ffffff8);
                        Hint_Prefetch(pcVar1,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
                            if (bVar3) {
                                *pcVar1 = *pcVar1 | 1L << (uVar6 & 0x3f);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                    }
                }
                iVar4 = sym.__get_mi_task_struct(arg1_00);
                if (iVar4 == 0) {
                    _printk(0x80007b0,puVar7 + 0x22,*(puVar7 + -0x18));
                    iVar8 = iVar8 + 1;
                }
                else {
                    iVar10 = iVar10 + 1;
                }
                Hint_Prefetch(puVar9,2,0,1);
                do {
                    uVar6 = *puVar9;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                    if (bVar3) {
                        *puVar9 = uVar6 - 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (uVar6 == 1) {
                    DataMemoryBarrier(2,1);
                    __put_task_struct(arg1_00);
                }
                else if (uVar6 < 1) {
                    refcount_warn_saturate(puVar9,3);
                }
            }
            piVar11 = *piVar11;
        } while (piVar11 != 0x8025510);
    }
    __rcu_read_unlock();
    if (arg1 != 0) {
        *arg1 = iVar10;
    }
    return iVar8;
}


// ===== sym.__get_mi_user_struct @ 0x080059b0 (size 348) =====

uint * sym.__get_mi_user_struct(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    uint *puVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x88) == -0x2345edcb5432bcdf) {
        return *(arg1 + 0x90);
    }
    iVar5 = sp_el0;
    puVar1 = iVar5 + 0x10;
    if (((*puVar1 & 0xf0000) != 0 || (*puVar1 & 0xf00000) != 0) || (*puVar1 & 0xff00) != 0) {
        return NULL;
    }
    puVar6 = kmem_cache_alloc(*0x8003000,0xcc0);
    if (puVar6 == NULL) {
        return NULL;
    }
    *(puVar6 + 2) = 0xacbdacbd;
    *(puVar6 + 4) = 0;
    *(puVar6 + 6) = puVar6 + 6;
    *(puVar6 + 8) = puVar6 + 6;
    *puVar6 = 1;
    *(puVar6 + 0x2e) = arg1;
    Hint_Prefetch(arg1,2,0,1);
    do {
        uVar2 = *arg1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(arg1,0x10);
        if (bVar4) {
            *arg1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar7 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08005a78;
        uVar7 = 1;
    }
    refcount_warn_saturate(arg1,uVar7);
code_r0x08005a78:
    *(puVar6 + 0x2a) = 0;
    *(puVar6 + 0x2c) = 0;
    *(puVar6 + 0x26) = 0;
    *(puVar6 + 0x28) = 0;
    *(puVar6 + 0x22) = 0;
    *(puVar6 + 0x24) = 0;
    *(puVar6 + 0x1e) = 0;
    *(puVar6 + 0x20) = 0;
    *(puVar6 + 0x1a) = 0;
    *(puVar6 + 0x1c) = 0;
    *(puVar6 + 0x16) = 0;
    *(puVar6 + 0x18) = 0;
    *(puVar6 + 0x12) = 0;
    *(puVar6 + 0x14) = 0;
    *(puVar6 + 0xe) = 0;
    *(puVar6 + 0x10) = 0;
    *(puVar6 + 10) = 0;
    *(puVar6 + 0xc) = 0;
    *(arg1 + 0x88) = 0xdcba1234abcd4321;
    *(arg1 + 0x90) = puVar6;
    return puVar6;
}


// ===== sym.init_module @ 0x08005c1c (size 344) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000bdd,"mi_sched_init");
    *0x8003000 = kmem_cache_create("mi_task_struct",0x1d0,0,0x4042000,0);
    *0x8003000 = kmem_cache_create("mi_user_struct",0xc0,0,0x4042000,0);
    *0x8003000 = alloc_workqueue("mi_sched",2,0);
    if (*0x8003000 == 0) {
        kmem_cache_destroy(0);
        kmem_cache_destroy(*0x8003000);
    }
    else {
        sym.create_runtime_proc();
        *0x8003810 = 0;
        *0x8003818 = 0;
        *0x8003800 = 0;
        *0x8003808 = 0;
        *0x80037f0 = 0;
        *0x80037f8 = 0;
        sym.init_user_zero();
        _obj.mi_user_monitor_wk = 0xfffffffe0;
        *0x80037c0 = 0x80037c0;
        *0x80037c8 = 0x80037c0;
        *0x80037d0 = sym.mi_user_roll_wk.7e18d739403c60a2bcec1f1f68693b6b.cfi_jt;
        _segment.ehdr = _seq_lseek;
        *0x8003810 = _seq_lseek;
        *0x8003818 = _seq_lseek;
        tracepoint_probe_register(__tracepoint_android_vh_free_task,sym.free_mi_task_struct.cfi_jt,0);
        tracepoint_probe_register(__tracepoint_android_vh_scheduler_tick,sym.mi_sched_tick.cfi_jt,0);
        *0x80037b0 = 1;
    }
    return 0;
}


// ===== sym.cleanup_module @ 0x08005d74 (size 80) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000bdd,"mi_sched_exit");
    sym.delete_runtimeproc();
    kmem_cache_destroy(*0x8003000);
    kmem_cache_destroy(*0x8003000);
    return;
}

