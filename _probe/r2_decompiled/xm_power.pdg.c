// decompiled from xm_power by radare2+r2ghidra (pdg); repaired by ko_repair

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====



//WARNING: Switch with 1 destination removed at 0x08002848

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.power_info_dump_func.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt;
        }
        else {
            if (arg1 != -0x2ee0710dce68437c) {
                if (arg1 != -0xec78b8726b9c1e8) goto code_r0x08002808;
                pcVar2 = sym.reset_show.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt;
code_r0x080010fc:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08002808;
            }
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x1b6c344e75cfc4ea) {
            pcVar2 = sym.task_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt;
            goto code_r0x080010fc;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002808;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002808:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800285c);
    (*pcVar1)();
}




// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001120 (size 8) =====



//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}




// ===== sym.cleanup_module.cfi_jt @ 0x08001128 (size 8) =====



void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000185);
    cancel_delayed_work(obj.attr_groups);
    return;
}




// ===== sym.init_module.cfi_jt @ 0x08001130 (size 8) =====



ulong sym.init_module.cfi_jt(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000129);
    memset(reloc.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt,0,0x2000);
    _obj.attr_groups = 0xfffffffe0;
    *0x8000078 = 0x8000078;
    _obj.g = 0x8000078;
    *0x8000088 = sym.power_info_dump_func.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt;
    init_timer_key(obj.reset_attr,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    __msecs_to_jiffies(_segment.ehdr * 1000);
    uVar1 = round_jiffies_relative();
    queue_delayed_work_on(0x20,_rtc_time64_to_tm,obj.attr_groups,uVar1);
    *0x8002000 = kobject_create_and_add("xm_power",0);
    if (*0x8002000 == 0) {
        uVar1 = 0xfffffff4;
    }
    else {
        uVar1 = sysfs_create_groups(*0x8002000,obj.attr_groups);
    }
    return uVar1;
}




// ===== sym.reset_show.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt @ 0x08001138 (size 8) =====



int64_t sym.reset_show.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x80002b0,*0x8002100);
    return iVar1;
}




// ===== sym.task_print_period_show.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt @ 0x08001140 (size 8) =====



int64_t sym.task_print_period_show.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x80002b0,_segment.ehdr);
    return iVar1;
}




// ===== sym.wakelock_print_period_show.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt @ 0x08001148 (size 8) =====



int64_t sym.wakelock_print_period_show.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x80002b0,_segment.ehdr);
    return iVar1;
}




// ===== sym.power_info_dump_func.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt @ 0x08001150 (size 8) =====


int64_t sym.power_info_dump_func.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt(void)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    uint32_t arg1;
    bool bVar6;
    uint8_t uVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong uVar15;
    uint64_t uVar16;
    ulong uVar17;
    ulong uVar18;
    ulong uVar19;
    ulong uVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint64_t uVar23;
    ulong uVar24;
    uint64_t uVar25;
    ulong uVar26;
    ulong uVar27;
    ulong uVar28;
    ulong uVar29;
    int64_t iVar30;
    int64_t iVar31;
    uint64_t uVar32;
    ulong uVar33;
    uint64_t uVar34;
    ulong uVar35;
    ulong uVar36;
    ulong uVar37;
    ulong uVar38;
    int64_t iVar39;
    int64_t iVar40;
    uint64_t uVar41;
    ulong uVar42;
    uint uVar43;
    int iVar44;
    ulong *puVar45;
    int64_t iVar46;
    int64_t iVar47;
    ulong uVar48;
    uint64_t uVar49;
    ulong uVar50;
    int64_t *piVar51;
    uint64_t uVar52;
    uint64_t uVar53;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar54;
    ulong *puVar55;
    int *piVar56;
    ulong *puVar57;
    code *pcVar58;
    code *pcVar59;
    int64_t iVar60;
    uint64_t uVar61;
    int64_t iVar62;
    ulong unaff_x30;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    uint uStack_270;
    uint64_t uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    int64_t iStack_238;
    uint64_t uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    int64_t iStack_160;
    uint64_t uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    int64_t iStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    uint64_t uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar46 = sp_el0;
    iStack_70 = *(iVar46 + 0x5e0);
    _printk(0x8000129);
    uVar43 = wakeup_sources_read_lock();
    puVar45 = wakeup_sources_walk_start();
    if (puVar45 != NULL) {
        bVar6 = false;
        puVar57 = NULL;
        puVar54 = NULL;
        do {
            if ((*(puVar45 + 0x19) & 1) == 0) {
                if (bVar6) goto code_r0x080016ac;
                puVar55 = puVar54;
                if ((puVar57 == NULL) || (puVar55 = puVar57, puVar57[0x10] < puVar45[0x10])) {
                    bVar6 = false;
                    uVar7 = 1;
                    puVar54 = puVar55;
                    puVar57 = puVar45;
                }
                else {
                    bVar6 = false;
                    uVar7 = 1;
                }
            }
            else {
                iVar46 = ktime_get();
                _printk(0x8000264,*puVar45,(iVar46 - puVar45[0x10]) / 1000000,puVar45[0x14]);
code_r0x080016ac:
                uVar7 = 0;
                bVar6 = true;
            }
            puVar45 = wakeup_sources_walk_next(puVar45);
        } while (puVar45 != NULL);
        if (uVar7 & puVar57 != NULL) {
            _printk(0x8000214,*puVar57,puVar57[0x10] / 1000000,puVar57[0x14]);
        }
        if (uVar7 & puVar54 != NULL) {
            _printk(0x80002b4,*puVar54,puVar54[0x10] / 1000000,puVar54[0x14]);
        }
    }
    wakeup_sources_read_unlock(uVar43);
    iVar46 = ktime_get();
    if (_segment.ehdr * 1000 <= (iVar46 - *0x8002000) / 1000000) {
        *0x8002000 = ktime_get();
        memset(&uStack_220,0,0x1b0);
        uStack_230 = 0;
        uStack_228 = 0;
        iStack_240 = 0;
        iStack_238 = 0;
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_260 = 0;
        uStack_258 = 0;
        uStack_268 = 0;
        rt_mutex_lock(0x8002110);
        iStack_1f8 = 0;
        iStack_1f0 = 0;
        uStack_1e8 = 0;
        iStack_1b0 = 0;
        iStack_1a8 = 0;
        uStack_1a0 = 0;
        iStack_168 = 0;
        iStack_160 = 0;
        uStack_158 = 0;
        iStack_120 = 0;
        iStack_118 = 0;
        uStack_110 = 0;
        iStack_d8 = 0;
        iStack_d0 = 0;
        uStack_c8 = 0;
        iStack_90 = 0;
        iStack_88 = 0;
        uStack_80 = 0;
        iVar47 = ktime_get();
        iVar46 = _segment.ehdr;
        __rcu_read_lock();
        if (_segment.ehdr != 0) {
            pcVar58 = *0x8007528 + -0x4d0;
            if (pcVar58 != init_task) {
                piVar56 = NULL;
                pcVar59 = pcVar58;
                do {
                    if (piVar56 == NULL) {
                        iVar44 = *(pcVar58 + 0x5d8);
code_r0x08001b64:
                        piVar56 = *(reloc.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt +
                                   (iVar44 * 0x61c88647 >> 0x16) * 8) + -0x28;
                        if (*(reloc.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt +
                             (iVar44 * 0x61c88647 >> 0x16) * 8) != 0 && piVar56 != NULL) {
                            do {
                                if (*piVar56 == iVar44) {
                                    if (piVar56 != NULL) goto code_r0x08001c28;
                                    break;
                                }
                                piVar51 = piVar56 + 10;
                                piVar56 = NULL;
                                if (*piVar51 != 0) {
                                    piVar56 = *piVar51 + -0x28;
                                }
                            } while (piVar56 != NULL);
                        }
                        iVar60 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar60 = 0x30;
                        }
                        piVar56 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar60),0xb20,0x38);
                        if (piVar56 == NULL) {
                            __rcu_read_unlock();
                            rt_mutex_unlock(0x8002110);
                            _printk(0x800030e,"print_all_task_stack",*(pcVar58 + 0x5d8));
                            goto code_r0x08001810;
                        }
                        iVar44 = *(pcVar58 + 0x5d8);
                        *piVar56 = iVar44;
                        strcpy(piVar56 + 1,pcVar58 + 0x7a8);
                        pcVar1 = reloc.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt +
                                 (iVar44 * 0x61c88647 >> 0x16) * 8;
                        iVar60 = *pcVar1;
                        piVar51 = piVar56 + 10;
                        *piVar51 = iVar60;
                        piVar56[6] = 0;
                        piVar56[7] = 0;
                        piVar56[8] = 0;
                        piVar56[9] = 0;
                        if (iVar60 != 0) {
                            *(iVar60 + 8) = piVar51;
                        }
                        *pcVar1 = piVar51;
                        *(piVar56 + 0xc) = pcVar1;
                    }
                    else {
                        iVar44 = *(pcVar58 + 0x5d8);
                        if (*piVar56 != iVar44) goto code_r0x08001b64;
                    }
code_r0x08001c28:
                    if ((pcVar58[0x3c] >> 2 & 1) == 0) {
                        uVar61 = *(pcVar58 + 0x108);
                        iVar60 = *(pcVar58 + 0x6c8);
                        iVar62 = *(pcVar58 + 0x6d0);
                        uVar48 = _raw_spin_lock_irqsave(pcVar58 + 0x700);
                        uVar52 = *(pcVar58 + 0x6f8);
                        uVar53 = *(pcVar58 + 0x6f0);
                        if (uVar53 + uVar52 < uVar61) {
                            if (iVar62 == 0) {
                                uVar49 = 0;
                            }
                            else {
                                uVar49 = uVar61;
                                if (iVar60 != 0) {
                                    arg1 = iVar62;
                                    uVar49 = sym.mul_u64_u64_div_u64_bak(arg1,uVar61,arg1 + iVar60);
                                }
                            }
                            uVar2 = uVar52;
                            if (uVar52 <= uVar49) {
                                uVar2 = uVar49;
                            }
                            uVar52 = uVar61 - uVar53;
                            if (uVar53 <= uVar61 - uVar2) {
                                uVar53 = uVar61 - uVar2;
                                uVar52 = uVar2;
                            }
                            *(pcVar58 + 0x6f8) = uVar52;
                            *(pcVar58 + 0x6f0) = uVar53;
                        }
                        _raw_spin_unlock_irqrestore(pcVar58 + 0x700,uVar48);
                        uVar61 = *(piVar56 + 6);
                        uVar49 = *(piVar56 + 8);
                        if (((uVar61 <= uVar53 && uVar53 - uVar61 != 0) && (uVar49 <= uVar52)) ||
                           ((uVar49 < uVar52 && (uVar61 <= uVar53)))) {
                            iStack_88 = (uVar52 - uVar49) / 1000000;
                            iStack_90 = (uVar53 - uVar61) / 1000000;
                            uStack_b8 = CONCAT44(*(*(pcVar58 + 0x618) + 0x5d8),*(pcVar58 + 0x5d8));
                            uStack_80 = iStack_88 + iStack_90;
                            uStack_78 = *(pcVar58 + 0x438);
                            strcpy(&uStack_b0,pcVar58 + 0x7a8);
                            strcpy(&uStack_a0,*(pcVar58 + 0x618) + 0x7a8);
                            uVar42 = uStack_78;
                            uVar41 = uStack_80;
                            iVar40 = iStack_88;
                            iVar39 = iStack_90;
                            uVar38 = uStack_98;
                            uVar37 = uStack_a0;
                            uVar36 = uStack_a8;
                            uVar35 = uStack_b0;
                            uVar34 = uStack_b8;
                            uVar33 = uStack_c0;
                            uVar32 = uStack_c8;
                            iVar31 = iStack_d0;
                            iVar30 = iStack_d8;
                            uVar29 = uStack_e0;
                            uVar28 = uStack_e8;
                            uVar27 = uStack_f0;
                            uVar26 = uStack_f8;
                            uVar25 = uStack_100;
                            uVar24 = uStack_108;
                            uVar23 = uStack_110;
                            iVar22 = iStack_118;
                            iVar21 = iStack_120;
                            uVar20 = uStack_128;
                            uVar19 = uStack_130;
                            uVar18 = uStack_138;
                            uVar17 = uStack_140;
                            uVar16 = uStack_148;
                            uVar15 = uStack_150;
                            uVar14 = uStack_158;
                            iVar13 = iStack_160;
                            iVar12 = iStack_168;
                            uVar11 = uStack_170;
                            uVar10 = uStack_178;
                            uVar9 = uStack_180;
                            uVar8 = uStack_188;
                            uVar2 = uStack_190;
                            uVar50 = uStack_198;
                            uVar49 = uStack_1a0;
                            iVar62 = iStack_1a8;
                            iVar60 = iStack_1b0;
                            uVar5 = uStack_1b8;
                            uVar4 = uStack_1c0;
                            uVar3 = uStack_1c8;
                            uVar48 = uStack_1d0;
                            uVar61 = uStack_1d8;
                            if (uStack_1e8 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iStack_88 = iStack_1f0;
                                uStack_80 = uStack_1e8;
                                uStack_78 = uStack_1e0;
                                uStack_a8 = uStack_210;
                                uStack_a0 = uStack_208;
                                uStack_98 = uStack_200;
                                iStack_90 = iStack_1f8;
                                uStack_b8 = uStack_220;
                                uStack_b0 = uStack_218;
                                uStack_200 = uVar38;
                                iStack_1f8 = iVar39;
                                uStack_1e0 = uVar42;
                                uStack_210 = uVar36;
                                uStack_208 = uVar37;
                                iStack_1f0 = iVar40;
                                uStack_1e8 = uVar41;
                                uStack_220 = uVar34;
                                uStack_218 = uVar35;
                            }
                            uVar42 = uStack_78;
                            uVar41 = uStack_80;
                            iVar40 = iStack_88;
                            iVar39 = iStack_90;
                            uVar38 = uStack_98;
                            uVar37 = uStack_a0;
                            uVar36 = uStack_a8;
                            uVar35 = uStack_b0;
                            uVar34 = uStack_b8;
                            if (uStack_1e8 < uStack_c8) {
                                iStack_238 = iStack_d0;
                                uStack_230 = uStack_c8;
                                uStack_228 = uStack_c0;
                                uStack_258 = uStack_f0;
                                uStack_250 = uStack_e8;
                                uStack_248 = uStack_e0;
                                iStack_240 = iStack_d8;
                                uStack_268 = uStack_100;
                                uStack_260 = uStack_f8;
                                iStack_d0 = iStack_1f0;
                                uStack_c8 = uStack_1e8;
                                uStack_c0 = uStack_1e0;
                                uStack_f0 = uStack_210;
                                uStack_e8 = uStack_208;
                                uStack_e0 = uStack_200;
                                iStack_d8 = iStack_1f8;
                                uStack_100 = uStack_220;
                                uStack_f8 = uStack_218;
                                uStack_200 = uVar29;
                                iStack_1f8 = iVar30;
                                uStack_1e0 = uVar33;
                                uStack_210 = uVar27;
                                uStack_208 = uVar28;
                                iStack_1f0 = iVar31;
                                uStack_1e8 = uVar32;
                                uStack_220 = uVar25;
                                uStack_218 = uVar26;
                            }
                            uVar33 = uStack_c0;
                            uVar32 = uStack_c8;
                            iVar31 = iStack_d0;
                            iVar30 = iStack_d8;
                            uVar29 = uStack_e0;
                            uVar28 = uStack_e8;
                            uVar27 = uStack_f0;
                            uVar26 = uStack_f8;
                            uVar25 = uStack_100;
                            if (uStack_1e8 < uStack_110) {
                                iStack_238 = iStack_118;
                                uStack_230 = uStack_110;
                                uStack_228 = uStack_108;
                                uStack_258 = uStack_138;
                                uStack_250 = uStack_130;
                                uStack_248 = uStack_128;
                                iStack_240 = iStack_120;
                                uStack_268 = uStack_148;
                                uStack_260 = uStack_140;
                                iStack_118 = iStack_1f0;
                                uStack_110 = uStack_1e8;
                                uStack_108 = uStack_1e0;
                                uStack_138 = uStack_210;
                                uStack_130 = uStack_208;
                                uStack_128 = uStack_200;
                                iStack_120 = iStack_1f8;
                                uStack_148 = uStack_220;
                                uStack_140 = uStack_218;
                                uStack_200 = uVar20;
                                iStack_1f8 = iVar21;
                                uStack_1e0 = uVar24;
                                uStack_210 = uVar18;
                                uStack_208 = uVar19;
                                iStack_1f0 = iVar22;
                                uStack_1e8 = uVar23;
                                uStack_220 = uVar16;
                                uStack_218 = uVar17;
                            }
                            uVar24 = uStack_108;
                            uVar23 = uStack_110;
                            iVar22 = iStack_118;
                            iVar21 = iStack_120;
                            uVar20 = uStack_128;
                            uVar19 = uStack_130;
                            uVar18 = uStack_138;
                            uVar17 = uStack_140;
                            uVar16 = uStack_148;
                            if (uStack_1e8 < uStack_158) {
                                iStack_238 = iStack_160;
                                uStack_230 = uStack_158;
                                uStack_228 = uStack_150;
                                uStack_258 = uStack_180;
                                uStack_250 = uStack_178;
                                uStack_248 = uStack_170;
                                iStack_240 = iStack_168;
                                uStack_268 = uStack_190;
                                uStack_260 = uStack_188;
                                iStack_160 = iStack_1f0;
                                uStack_158 = uStack_1e8;
                                uStack_150 = uStack_1e0;
                                uStack_180 = uStack_210;
                                uStack_178 = uStack_208;
                                uStack_170 = uStack_200;
                                iStack_168 = iStack_1f8;
                                uStack_190 = uStack_220;
                                uStack_188 = uStack_218;
                                uStack_200 = uVar11;
                                iStack_1f8 = iVar12;
                                uStack_1e0 = uVar15;
                                uStack_210 = uVar9;
                                uStack_208 = uVar10;
                                iStack_1f0 = iVar13;
                                uStack_1e8 = uVar14;
                                uStack_220 = uVar2;
                                uStack_218 = uVar8;
                            }
                            uVar15 = uStack_150;
                            uVar14 = uStack_158;
                            iVar13 = iStack_160;
                            iVar12 = iStack_168;
                            uVar11 = uStack_170;
                            uVar10 = uStack_178;
                            uVar9 = uStack_180;
                            uVar8 = uStack_188;
                            uVar2 = uStack_190;
                            if (uStack_1e8 < uStack_1a0) {
                                iStack_238 = iStack_1a8;
                                uStack_230 = uStack_1a0;
                                uStack_228 = uStack_198;
                                uStack_258 = uStack_1c8;
                                uStack_250 = uStack_1c0;
                                uStack_248 = uStack_1b8;
                                iStack_240 = iStack_1b0;
                                uStack_268 = uStack_1d8;
                                uStack_260 = uStack_1d0;
                                iStack_1a8 = iStack_1f0;
                                uStack_1a0 = uStack_1e8;
                                uStack_198 = uStack_1e0;
                                uStack_1c8 = uStack_210;
                                uStack_1c0 = uStack_208;
                                uStack_1b8 = uStack_200;
                                iStack_1b0 = iStack_1f8;
                                uStack_1d8 = uStack_220;
                                uStack_1d0 = uStack_218;
                                uStack_200 = uVar5;
                                iStack_1f8 = iVar60;
                                iStack_1f0 = iVar62;
                                uStack_1e8 = uVar49;
                                uStack_1e0 = uVar50;
                                uStack_210 = uVar3;
                                uStack_208 = uVar4;
                                uStack_220 = uVar61;
                                uStack_218 = uVar48;
                            }
                            if (uStack_1a0 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iStack_88 = iStack_1a8;
                                uStack_80 = uStack_1a0;
                                uStack_78 = uStack_198;
                                uStack_a8 = uStack_1c8;
                                uStack_a0 = uStack_1c0;
                                uStack_98 = uStack_1b8;
                                iStack_90 = iStack_1b0;
                                uStack_b8 = uStack_1d8;
                                uStack_b0 = uStack_1d0;
                                uStack_198 = uVar42;
                                uStack_1b8 = uVar38;
                                iStack_1b0 = iVar39;
                                iStack_1a8 = iVar40;
                                uStack_1a0 = uVar41;
                                uStack_1c8 = uVar36;
                                uStack_1c0 = uVar37;
                                uStack_1d8 = uVar34;
                                uStack_1d0 = uVar35;
                            }
                            uVar50 = uStack_78;
                            uVar49 = uStack_80;
                            iVar62 = iStack_88;
                            iVar60 = iStack_90;
                            uVar5 = uStack_98;
                            uVar4 = uStack_a0;
                            uVar3 = uStack_a8;
                            uVar48 = uStack_b0;
                            uVar61 = uStack_b8;
                            if (uStack_1a0 < uStack_c8) {
                                iStack_238 = iStack_d0;
                                uStack_230 = uStack_c8;
                                uStack_228 = uStack_c0;
                                uStack_258 = uStack_f0;
                                uStack_250 = uStack_e8;
                                uStack_248 = uStack_e0;
                                iStack_240 = iStack_d8;
                                uStack_268 = uStack_100;
                                uStack_260 = uStack_f8;
                                iStack_d0 = iStack_1a8;
                                uStack_c8 = uStack_1a0;
                                uStack_c0 = uStack_198;
                                uStack_f0 = uStack_1c8;
                                uStack_e8 = uStack_1c0;
                                uStack_e0 = uStack_1b8;
                                iStack_d8 = iStack_1b0;
                                uStack_100 = uStack_1d8;
                                uStack_f8 = uStack_1d0;
                                uStack_198 = uVar33;
                                uStack_1b8 = uVar29;
                                iStack_1b0 = iVar30;
                                iStack_1a8 = iVar31;
                                uStack_1a0 = uVar32;
                                uStack_1c8 = uVar27;
                                uStack_1c0 = uVar28;
                                uStack_1d8 = uVar25;
                                uStack_1d0 = uVar26;
                            }
                            uVar33 = uStack_c0;
                            uVar32 = uStack_c8;
                            iVar31 = iStack_d0;
                            iVar30 = iStack_d8;
                            uVar29 = uStack_e0;
                            uVar28 = uStack_e8;
                            uVar27 = uStack_f0;
                            uVar26 = uStack_f8;
                            uVar25 = uStack_100;
                            if (uStack_1a0 < uStack_110) {
                                iStack_238 = iStack_118;
                                uStack_230 = uStack_110;
                                uStack_228 = uStack_108;
                                uStack_258 = uStack_138;
                                uStack_250 = uStack_130;
                                uStack_248 = uStack_128;
                                iStack_240 = iStack_120;
                                uStack_268 = uStack_148;
                                uStack_260 = uStack_140;
                                iStack_118 = iStack_1a8;
                                uStack_110 = uStack_1a0;
                                uStack_108 = uStack_198;
                                uStack_138 = uStack_1c8;
                                uStack_130 = uStack_1c0;
                                uStack_128 = uStack_1b8;
                                iStack_120 = iStack_1b0;
                                uStack_148 = uStack_1d8;
                                uStack_140 = uStack_1d0;
                                uStack_198 = uVar24;
                                uStack_1b8 = uVar20;
                                iStack_1b0 = iVar21;
                                iStack_1a8 = iVar22;
                                uStack_1a0 = uVar23;
                                uStack_1c8 = uVar18;
                                uStack_1c0 = uVar19;
                                uStack_1d8 = uVar16;
                                uStack_1d0 = uVar17;
                            }
                            uVar24 = uStack_108;
                            uVar23 = uStack_110;
                            iVar22 = iStack_118;
                            iVar21 = iStack_120;
                            uVar20 = uStack_128;
                            uVar19 = uStack_130;
                            uVar18 = uStack_138;
                            uVar17 = uStack_140;
                            uVar16 = uStack_148;
                            if (uStack_1a0 < uStack_158) {
                                iStack_238 = iStack_160;
                                uStack_230 = uStack_158;
                                uStack_228 = uStack_150;
                                uStack_258 = uStack_180;
                                uStack_250 = uStack_178;
                                uStack_248 = uStack_170;
                                iStack_240 = iStack_168;
                                uStack_268 = uStack_190;
                                uStack_260 = uStack_188;
                                iStack_160 = iStack_1a8;
                                uStack_158 = uStack_1a0;
                                uStack_150 = uStack_198;
                                uStack_180 = uStack_1c8;
                                uStack_178 = uStack_1c0;
                                uStack_170 = uStack_1b8;
                                iStack_168 = iStack_1b0;
                                uStack_190 = uStack_1d8;
                                uStack_188 = uStack_1d0;
                                uStack_1b8 = uVar11;
                                iStack_1b0 = iVar12;
                                iStack_1a8 = iVar13;
                                uStack_1a0 = uVar14;
                                uStack_198 = uVar15;
                                uStack_1c8 = uVar9;
                                uStack_1c0 = uVar10;
                                uStack_1d8 = uVar2;
                                uStack_1d0 = uVar8;
                            }
                            if (uStack_158 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iStack_88 = iStack_160;
                                uStack_80 = uStack_158;
                                uStack_78 = uStack_150;
                                uStack_a8 = uStack_180;
                                uStack_a0 = uStack_178;
                                uStack_98 = uStack_170;
                                iStack_90 = iStack_168;
                                uStack_b8 = uStack_190;
                                uStack_b0 = uStack_188;
                                uStack_150 = uVar50;
                                uStack_170 = uVar5;
                                iStack_168 = iVar60;
                                iStack_160 = iVar62;
                                uStack_158 = uVar49;
                                uStack_180 = uVar3;
                                uStack_178 = uVar4;
                                uStack_190 = uVar61;
                                uStack_188 = uVar48;
                            }
                            uVar50 = uStack_78;
                            uVar49 = uStack_80;
                            iVar62 = iStack_88;
                            iVar60 = iStack_90;
                            uVar5 = uStack_98;
                            uVar4 = uStack_a0;
                            uVar3 = uStack_a8;
                            uVar48 = uStack_b0;
                            uVar61 = uStack_b8;
                            if (uStack_158 < uStack_c8) {
                                iStack_238 = iStack_d0;
                                uStack_230 = uStack_c8;
                                uStack_228 = uStack_c0;
                                uStack_258 = uStack_f0;
                                uStack_250 = uStack_e8;
                                uStack_248 = uStack_e0;
                                iStack_240 = iStack_d8;
                                uStack_268 = uStack_100;
                                uStack_260 = uStack_f8;
                                iStack_d0 = iStack_160;
                                uStack_c8 = uStack_158;
                                uStack_c0 = uStack_150;
                                uStack_f0 = uStack_180;
                                uStack_e8 = uStack_178;
                                uStack_e0 = uStack_170;
                                iStack_d8 = iStack_168;
                                uStack_100 = uStack_190;
                                uStack_f8 = uStack_188;
                                uStack_150 = uVar33;
                                uStack_170 = uVar29;
                                iStack_168 = iVar30;
                                iStack_160 = iVar31;
                                uStack_158 = uVar32;
                                uStack_180 = uVar27;
                                uStack_178 = uVar28;
                                uStack_190 = uVar25;
                                uStack_188 = uVar26;
                            }
                            uVar15 = uStack_c0;
                            uVar14 = uStack_c8;
                            iVar13 = iStack_d0;
                            iVar12 = iStack_d8;
                            uVar11 = uStack_e0;
                            uVar10 = uStack_e8;
                            uVar9 = uStack_f0;
                            uVar8 = uStack_f8;
                            uVar2 = uStack_100;
                            if (uStack_158 < uStack_110) {
                                iStack_238 = iStack_118;
                                uStack_230 = uStack_110;
                                uStack_228 = uStack_108;
                                uStack_258 = uStack_138;
                                uStack_250 = uStack_130;
                                uStack_248 = uStack_128;
                                iStack_240 = iStack_120;
                                uStack_268 = uStack_148;
                                uStack_260 = uStack_140;
                                iStack_118 = iStack_160;
                                uStack_110 = uStack_158;
                                uStack_108 = uStack_150;
                                uStack_138 = uStack_180;
                                uStack_130 = uStack_178;
                                uStack_128 = uStack_170;
                                iStack_120 = iStack_168;
                                uStack_148 = uStack_190;
                                uStack_140 = uStack_188;
                                uStack_170 = uVar20;
                                iStack_168 = iVar21;
                                iStack_160 = iVar22;
                                uStack_158 = uVar23;
                                uStack_150 = uVar24;
                                uStack_180 = uVar18;
                                uStack_178 = uVar19;
                                uStack_190 = uVar16;
                                uStack_188 = uVar17;
                            }
                            if (uStack_110 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iStack_88 = iStack_118;
                                uStack_80 = uStack_110;
                                uStack_78 = uStack_108;
                                uStack_a8 = uStack_138;
                                uStack_a0 = uStack_130;
                                uStack_98 = uStack_128;
                                iStack_90 = iStack_120;
                                uStack_b8 = uStack_148;
                                uStack_b0 = uStack_140;
                                uStack_108 = uVar50;
                                uStack_128 = uVar5;
                                iStack_120 = iVar60;
                                iStack_118 = iVar62;
                                uStack_110 = uVar49;
                                uStack_138 = uVar3;
                                uStack_130 = uVar4;
                                uStack_148 = uVar61;
                                uStack_140 = uVar48;
                            }
                            if (uStack_110 < uStack_c8) {
                                iStack_238 = iStack_d0;
                                uStack_230 = uStack_c8;
                                uStack_228 = uStack_c0;
                                uStack_258 = uStack_f0;
                                uStack_250 = uStack_e8;
                                uStack_248 = uStack_e0;
                                iStack_240 = iStack_d8;
                                uStack_268 = uStack_100;
                                uStack_260 = uStack_f8;
                                iStack_d0 = iStack_118;
                                uStack_c8 = uStack_110;
                                uStack_c0 = uStack_108;
                                uStack_f0 = uStack_138;
                                uStack_e8 = uStack_130;
                                uStack_e0 = uStack_128;
                                iStack_d8 = iStack_120;
                                uStack_100 = uStack_148;
                                uStack_f8 = uStack_140;
                                uStack_128 = uVar11;
                                iStack_120 = iVar12;
                                iStack_118 = iVar13;
                                uStack_110 = uVar14;
                                uStack_108 = uVar15;
                                uStack_138 = uVar9;
                                uStack_130 = uVar10;
                                uStack_148 = uVar2;
                                uStack_140 = uVar8;
                            }
                            if (uStack_c8 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iVar60 = iStack_d0;
                                uVar49 = uStack_c8;
                                uVar50 = uStack_c0;
                                uVar48 = uStack_f0;
                                uVar4 = uStack_e8;
                                uVar3 = uStack_e0;
                                iVar62 = iStack_d8;
                                uVar61 = uStack_100;
                                uVar5 = uStack_f8;
                                uStack_e0 = uStack_98;
                                iStack_d8 = iStack_90;
                                iStack_d0 = iStack_88;
                                uStack_c8 = uStack_80;
                                uStack_c0 = uStack_78;
                                uStack_f0 = uStack_a8;
                                uStack_e8 = uStack_a0;
                                uStack_100 = uStack_b8;
                                uStack_f8 = uStack_b0;
                                uStack_b8 = uVar61;
                                uStack_b0 = uVar5;
                                uStack_a8 = uVar48;
                                uStack_a0 = uVar4;
                                uStack_98 = uVar3;
                                iStack_90 = iVar62;
                                iStack_88 = iVar60;
                                uStack_80 = uVar49;
                                uStack_78 = uVar50;
                            }
                        }
                        *(piVar56 + 6) = uVar53;
                        *(piVar56 + 8) = uVar52;
                        strcpy(piVar56 + 1,pcVar58 + 0x7a8);
                    }
                    pcVar58 = *(pcVar58 + 0x688) + -0x688;
                } while ((pcVar58 != pcVar59) ||
                        (pcVar58 = *(pcVar59 + 0x4d0) + -0x4d0, pcVar59 = pcVar58, pcVar58 != init_task));
            }
            uStack_270 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            uStack_290 = 0;
            uStack_288 = 0;
            iStack_2a0 = 0;
            iStack_298 = 0;
            uVar53 = (iVar47 - iVar46) / 1000000;
            ktime_get_real_ts64(&iStack_2a0);
            iVar47 = iStack_298;
            iVar46 = iStack_2a0;
            rtc_time64_to_tm(iStack_2a0,&uStack_290);
            rtc_time64_to_tm(iVar46 + 0x1fe5c000);
            iVar44 = (SUB168(SEXT816(iVar47) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                     (SUB164(SEXT816(iVar47) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f);
            _printk(0x800013c,"dump_top5_task",0x76c,1,0,0,0,delayed_work_timer_fn,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_1f8 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_1f0 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&uStack_218,uStack_220 & 0xffffffff,uStack_1e0,&uStack_208,
                    uStack_220._4_4_,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_1b0 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_1a8 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&uStack_1d0,uStack_1d8 & 0xffffffff,uStack_198,&uStack_1c0,
                    uStack_1d8._4_4_,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_168 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_160 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&uStack_188,uStack_190 & 0xffffffff,uStack_150,&uStack_178,
                    uStack_190._4_4_,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_120 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_118 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&uStack_140,uStack_148 & 0xffffffff,uStack_108,&uStack_130,
                    uStack_148._4_4_,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_d8 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_d0 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&uStack_f8,uStack_100 & 0xffffffff,uStack_c0,&uStack_e8,
                    uStack_100._4_4_);
        }
        __rcu_read_unlock();
        _segment.ehdr = ktime_get();
        rt_mutex_unlock(0x8002110);
    }
code_r0x08001810:
    __msecs_to_jiffies(_segment.ehdr * 1000);
    uVar48 = round_jiffies_relative();
    pcVar58 = obj.attr_groups;
    iVar47 = queue_delayed_work_on(0x20,_rtc_time64_to_tm,obj.attr_groups,uVar48);
    iVar46 = sp_el0;
    if (*(iVar46 + 0x5e0) != iStack_70) {
        __stack_chk_fail();
        *extraout_x18 = 0x8002598;
        iVar44 = sprintf(pcVar58,0x80002b0,*0x8002100);
        return iVar44;
    }
    return iVar47;
}



// ===== sym.task_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt @ 0x08001158 (size 8) =====



int64_t sym.task_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar3 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar2 = kstrtoull(param_3,10,&uStack_30);
    if (iVar2 == 0) {
        _segment.ehdr = uStack_30;
    }
    else {
        param_4 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.wakelock_print_period_show;
    iVar2 = sprintf(puVar3,0x80002b0,_segment.ehdr);
    return iVar2;
}




// ===== sym.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt @ 0x08001160 (size 8) =====



uchar * sym.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt
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
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar3 = kstrtoull(param_3,10,&uStack_30);
    if (iVar3 == 0) {
        _segment.ehdr = uStack_30;
    }
    else {
        param_4 = 0xffffffffffffffea;
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
        pcVar2 = SoftwareBreakpoint(0x5502,0x800285c);
        (*pcVar2)();
    }
    return param_4;
}




// ===== sym.reset_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt @ 0x08001168 (size 8) =====



ulong sym.reset_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = memchr(param_3,10,param_4);
    iVar1 = param_4;
    if (iVar2 != 0) {
        iVar1 = iVar2 - param_3;
    }
    if ((iVar1 == 5) && (iVar1 = strncmp(param_3,"reset",5), iVar1 == 0)) {
        *0x8002100 = 1;
        _segment.ehdr = 0x14;
    }
    else {
        *0x8002100 = 0;
    }
    return param_4;
}




// ===== sym.div64_u64_bak @ 0x08001170 (size 88) =====



//WARNING: Removing unreachable block (ram,0x0800117c)
//WARNING: Removing unreachable block (ram,0x0800119c)
//WARNING: Removing unreachable block (ram,0x080011a4)
//WARNING: Removing unreachable block (ram,0x080011b0)

uint64_t sym.div64_u64_bak(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if (arg2 != 0) {
        uVar1 = arg1 / arg2;
    }
    return uVar1;
}




// ===== sym.div64_u64_rem_bak @ 0x080011c8 (size 108) =====



uint64_t sym.div64_u64_rem_bak(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = arg2;
    uVar1 = 0;
    if (uVar2 != 0) {
        uVar1 = arg1 / uVar2;
    }
    *arg3 = arg1 - uVar1 * uVar2;
    return uVar1;
}




// ===== sym.mul_u64_u64_div_u64_bak @ 0x08001234 (size 300) =====



int64_t sym.mul_u64_u64_div_u64_bak(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    
    uVar4 = arg3;
    uVar7 = arg2;
    uVar3 = arg1;
    iVar1 = 0x3f - LZCOUNT(uVar3);
    if (uVar3 == 0) {
        iVar1 = -1;
    }
    iVar2 = 0x3f - LZCOUNT(uVar7);
    if (uVar7 == 0) {
        iVar2 = -1;
    }
    if (iVar2 + iVar1 < 0x3f) {
        iVar5 = 0;
    }
    else {
        iVar1 = 0x3f - LZCOUNT(uVar3);
        uVar6 = 0;
        if (uVar4 != 0) {
            uVar6 = uVar7 / uVar4;
        }
        uVar7 = uVar7 - uVar6 * uVar4;
        if (uVar3 == 0) {
            iVar1 = -1;
        }
        iVar2 = 0x3f - LZCOUNT(uVar7);
        iVar5 = uVar6 * uVar3;
        if (uVar7 == 0) {
            iVar2 = -1;
        }
        if (0x3e < iVar2 + iVar1) {
            uVar6 = (iVar2 + iVar1) - 0x3e;
            uVar4 = arg3 >> (uVar6 & 0x3f);
            if (uVar4 == 0) {
                return iVar5;
            }
            uVar7 = uVar7 >> (uVar6 & 0x3f);
        }
    }
    uVar6 = 0;
    if (uVar4 != 0) {
        uVar6 = (uVar7 * uVar3) / uVar4;
    }
    return uVar6 + iVar5;
}




// ===== sym.get_current_timestamp @ 0x08001360 (size 248) =====



void sym.get_current_timestamp(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    int64_t *piVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t *puVar7;
    uint64_t *puVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    iStack_70 = 0;
    iStack_68 = 0;
    ktime_get_real_ts64(&iStack_70);
    iVar3 = iStack_68;
    iVar2 = iStack_70;
    rtc_time64_to_tm(iStack_70,&uStack_60);
    rtc_time64_to_tm(iVar2 + 0x1fe5c000);
    puVar8 = 0x76c;
    puVar9 = 0x1;
    _printk(0x800013c,arg1,0x76c,1,0,0,0,delayed_work_timer_fn,
            (SUB168(SEXT816(iVar3) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
            (SUB164(SEXT816(iVar3) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f));
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar12 = __stack_chk_fail();
    puVar7 = auVar12._8_8_;
    piVar4 = auVar12._0_8_;
    *extraout_x18 = sym.cputime_adjust;
    uVar5 = _raw_spin_lock_irqsave(puVar7 + 2);
    uVar11 = *puVar7;
    uVar1 = puVar7[1];
    uVar10 = piVar4[2];
    if (uVar11 + uVar1 < uVar10) {
        uVar6 = 0;
        if ((*piVar4 != 0) && (uVar6 = uVar10, piVar4[1] != 0)) {
            arg1_00 = *piVar4;
            uVar6 = sym.mul_u64_u64_div_u64_bak(arg1_00,uVar10,piVar4[1] + arg1_00);
        }
        if (uVar1 <= uVar6) {
            uVar1 = uVar6;
        }
        uVar6 = uVar10 - uVar11;
        if (uVar11 <= uVar10 - uVar1) {
            uVar11 = uVar10 - uVar1;
            uVar6 = uVar1;
        }
        *puVar7 = uVar11;
        puVar7[1] = uVar6;
    }
    *puVar8 = uVar11;
    *puVar9 = puVar7[1];
    _raw_spin_unlock_irqrestore(puVar7 + 2,uVar5);
    return;
}




// ===== sym.cputime_adjust @ 0x08001458 (size 216) =====



void sym.cputime_adjust(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t arg1_00;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(arg2 + 0x10);
    uVar5 = *arg2;
    uVar1 = *(arg2 + 8);
    uVar4 = *(arg1 + 0x10);
    if (uVar5 + uVar1 < uVar4) {
        uVar3 = 0;
        if ((*arg1 != 0) && (uVar3 = uVar4, *(arg1 + 8) != 0)) {
            arg1_00 = *arg1;
            uVar3 = sym.mul_u64_u64_div_u64_bak(arg1_00,uVar4,*(arg1 + 8) + arg1_00);
        }
        if (uVar1 <= uVar3) {
            uVar1 = uVar3;
        }
        uVar3 = uVar4 - uVar5;
        if (uVar5 <= uVar4 - uVar1) {
            uVar5 = uVar4 - uVar1;
            uVar3 = uVar1;
        }
        *arg2 = uVar5;
        *(arg2 + 8) = uVar3;
    }
    *arg3 = uVar5;
    *arg4 = *(arg2 + 8);
    _raw_spin_unlock_irqrestore(arg2 + 0x10,uVar2);
    return;
}




// ===== sym.task_cputime_adjusted @ 0x08001530 (size 232) =====



void sym.task_cputime_adjusted(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg1_00;
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 0x108);
    iVar7 = *(arg1 + 0x6c8);
    iVar4 = *(arg1 + 0x6d0);
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x700);
    uVar6 = *(arg1 + 0x6f8);
    uVar5 = *(arg1 + 0x6f0);
    if (uVar5 + uVar6 < uVar3) {
        if (iVar4 == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = uVar3;
            if (iVar7 != 0) {
                arg1_00 = iVar4;
                uVar2 = sym.mul_u64_u64_div_u64_bak(arg1_00,uVar3,arg1_00 + iVar7);
            }
        }
        if (uVar6 <= uVar2) {
            uVar6 = uVar2;
        }
        uVar2 = uVar3 - uVar5;
        if (uVar5 <= uVar3 - uVar6) {
            uVar5 = uVar3 - uVar6;
            uVar2 = uVar6;
        }
        *(arg1 + 0x6f8) = uVar2;
        *(arg1 + 0x6f0) = uVar5;
    }
    *arg2 = uVar5;
    *arg3 = *(arg1 + 0x6f8);
    _raw_spin_unlock_irqrestore(arg1 + 0x700,uVar1);
    return;
}




// ===== sym.power_info_dump_func @ 0x08001618 (size 3980) =====


int64_t sym.power_info_dump_func(void)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    uint32_t arg1;
    bool bVar6;
    uint8_t uVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong uVar15;
    uint64_t uVar16;
    ulong uVar17;
    ulong uVar18;
    ulong uVar19;
    ulong uVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint64_t uVar23;
    ulong uVar24;
    uint64_t uVar25;
    ulong uVar26;
    ulong uVar27;
    ulong uVar28;
    ulong uVar29;
    int64_t iVar30;
    int64_t iVar31;
    uint64_t uVar32;
    ulong uVar33;
    uint64_t uVar34;
    ulong uVar35;
    ulong uVar36;
    ulong uVar37;
    ulong uVar38;
    int64_t iVar39;
    int64_t iVar40;
    uint64_t uVar41;
    ulong uVar42;
    uint uVar43;
    int iVar44;
    ulong *puVar45;
    int64_t iVar46;
    int64_t iVar47;
    ulong uVar48;
    uint64_t uVar49;
    ulong uVar50;
    int64_t *piVar51;
    uint64_t uVar52;
    uint64_t uVar53;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar54;
    ulong *puVar55;
    int *piVar56;
    ulong *puVar57;
    code *pcVar58;
    code *pcVar59;
    int64_t iVar60;
    uint64_t uVar61;
    int64_t iVar62;
    ulong unaff_x30;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    uint uStack_270;
    uint64_t uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    int64_t iStack_238;
    uint64_t uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    int64_t iStack_160;
    uint64_t uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    int64_t iStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    uint64_t uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar46 = sp_el0;
    iStack_70 = *(iVar46 + 0x5e0);
    _printk(0x8000129);
    uVar43 = wakeup_sources_read_lock();
    puVar45 = wakeup_sources_walk_start();
    if (puVar45 != NULL) {
        bVar6 = false;
        puVar57 = NULL;
        puVar54 = NULL;
        do {
            if ((*(puVar45 + 0x19) & 1) == 0) {
                if (bVar6) goto code_r0x080016ac;
                puVar55 = puVar54;
                if ((puVar57 == NULL) || (puVar55 = puVar57, puVar57[0x10] < puVar45[0x10])) {
                    bVar6 = false;
                    uVar7 = 1;
                    puVar54 = puVar55;
                    puVar57 = puVar45;
                }
                else {
                    bVar6 = false;
                    uVar7 = 1;
                }
            }
            else {
                iVar46 = ktime_get();
                _printk(0x8000264,*puVar45,(iVar46 - puVar45[0x10]) / 1000000,puVar45[0x14]);
code_r0x080016ac:
                uVar7 = 0;
                bVar6 = true;
            }
            puVar45 = wakeup_sources_walk_next(puVar45);
        } while (puVar45 != NULL);
        if (uVar7 & puVar57 != NULL) {
            _printk(0x8000214,*puVar57,puVar57[0x10] / 1000000,puVar57[0x14]);
        }
        if (uVar7 & puVar54 != NULL) {
            _printk(0x80002b4,*puVar54,puVar54[0x10] / 1000000,puVar54[0x14]);
        }
    }
    wakeup_sources_read_unlock(uVar43);
    iVar46 = ktime_get();
    if (_segment.ehdr * 1000 <= (iVar46 - *0x8002000) / 1000000) {
        *0x8002000 = ktime_get();
        memset(&stack0xfffffffffffffde0,0,0x1b0);
        uStack_230 = 0;
        uStack_228 = 0;
        iStack_240 = 0;
        iStack_238 = 0;
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_260 = 0;
        uStack_258 = 0;
        uStack_268 = 0;
        rt_mutex_lock(0x8002110);
        iStack_1f8 = 0;
        iStack_1f0 = 0;
        uStack_1e8 = 0;
        iStack_1b0 = 0;
        iStack_1a8 = 0;
        uStack_1a0 = 0;
        iStack_168 = 0;
        iStack_160 = 0;
        uStack_158 = 0;
        iStack_120 = 0;
        iStack_118 = 0;
        uStack_110 = 0;
        iStack_d8 = 0;
        iStack_d0 = 0;
        uStack_c8 = 0;
        iStack_90 = 0;
        iStack_88 = 0;
        uStack_80 = 0;
        iVar47 = ktime_get();
        iVar46 = _segment.ehdr;
        __rcu_read_lock();
        if (_segment.ehdr != 0) {
            pcVar58 = *0x8007528 + -0x4d0;
            if (pcVar58 != init_task) {
                piVar56 = NULL;
                pcVar59 = pcVar58;
                do {
                    if (piVar56 == NULL) {
                        iVar44 = *(pcVar58 + 0x5d8);
code_r0x08001b64:
                        piVar56 = *(reloc.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt +
                                   (iVar44 * 0x61c88647 >> 0x16) * 8) + -0x28;
                        if (*(reloc.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt +
                             (iVar44 * 0x61c88647 >> 0x16) * 8) != 0 && piVar56 != NULL) {
                            do {
                                if (*piVar56 == iVar44) {
                                    if (piVar56 != NULL) goto code_r0x08001c28;
                                    break;
                                }
                                piVar51 = piVar56 + 10;
                                piVar56 = NULL;
                                if (*piVar51 != 0) {
                                    piVar56 = *piVar51 + -0x28;
                                }
                            } while (piVar56 != NULL);
                        }
                        iVar60 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar60 = 0x30;
                        }
                        piVar56 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar60),0xb20,0x38);
                        if (piVar56 == NULL) {
                            __rcu_read_unlock();
                            rt_mutex_unlock(0x8002110);
                            _printk(0x800030e,"print_all_task_stack",*(pcVar58 + 0x5d8));
                            goto code_r0x08001810;
                        }
                        iVar44 = *(pcVar58 + 0x5d8);
                        *piVar56 = iVar44;
                        strcpy(piVar56 + 1,pcVar58 + 0x7a8);
                        pcVar1 = reloc.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt +
                                 (iVar44 * 0x61c88647 >> 0x16) * 8;
                        iVar60 = *pcVar1;
                        piVar51 = piVar56 + 10;
                        *piVar51 = iVar60;
                        piVar56[6] = 0;
                        piVar56[7] = 0;
                        piVar56[8] = 0;
                        piVar56[9] = 0;
                        if (iVar60 != 0) {
                            *(iVar60 + 8) = piVar51;
                        }
                        *pcVar1 = piVar51;
                        *(piVar56 + 0xc) = pcVar1;
                    }
                    else {
                        iVar44 = *(pcVar58 + 0x5d8);
                        if (*piVar56 != iVar44) goto code_r0x08001b64;
                    }
code_r0x08001c28:
                    if ((pcVar58[0x3c] >> 2 & 1) == 0) {
                        uVar61 = *(pcVar58 + 0x108);
                        iVar60 = *(pcVar58 + 0x6c8);
                        iVar62 = *(pcVar58 + 0x6d0);
                        uVar48 = _raw_spin_lock_irqsave(pcVar58 + 0x700);
                        uVar52 = *(pcVar58 + 0x6f8);
                        uVar53 = *(pcVar58 + 0x6f0);
                        if (uVar53 + uVar52 < uVar61) {
                            if (iVar62 == 0) {
                                uVar49 = 0;
                            }
                            else {
                                uVar49 = uVar61;
                                if (iVar60 != 0) {
                                    arg1 = iVar62;
                                    uVar49 = sym.mul_u64_u64_div_u64_bak(arg1,uVar61,arg1 + iVar60);
                                }
                            }
                            uVar2 = uVar52;
                            if (uVar52 <= uVar49) {
                                uVar2 = uVar49;
                            }
                            uVar52 = uVar61 - uVar53;
                            if (uVar53 <= uVar61 - uVar2) {
                                uVar53 = uVar61 - uVar2;
                                uVar52 = uVar2;
                            }
                            *(pcVar58 + 0x6f8) = uVar52;
                            *(pcVar58 + 0x6f0) = uVar53;
                        }
                        _raw_spin_unlock_irqrestore(pcVar58 + 0x700,uVar48);
                        uVar61 = *(piVar56 + 6);
                        uVar49 = *(piVar56 + 8);
                        if (((uVar61 <= uVar53 && uVar53 - uVar61 != 0) && (uVar49 <= uVar52)) ||
                           ((uVar49 < uVar52 && (uVar61 <= uVar53)))) {
                            iStack_88 = (uVar52 - uVar49) / 1000000;
                            iStack_90 = (uVar53 - uVar61) / 1000000;
                            uStack_b8 = CONCAT44(*(*(pcVar58 + 0x618) + 0x5d8),*(pcVar58 + 0x5d8));
                            uStack_80 = iStack_88 + iStack_90;
                            uStack_78 = *(pcVar58 + 0x438);
                            strcpy(&stack0xffffffffffffff50,pcVar58 + 0x7a8);
                            strcpy(&stack0xffffffffffffff60,*(pcVar58 + 0x618) + 0x7a8);
                            uVar42 = uStack_78;
                            uVar41 = uStack_80;
                            iVar40 = iStack_88;
                            iVar39 = iStack_90;
                            uVar38 = uStack_98;
                            uVar37 = uStack_a0;
                            uVar36 = uStack_a8;
                            uVar35 = uStack_b0;
                            uVar34 = uStack_b8;
                            uVar33 = uStack_c0;
                            uVar32 = uStack_c8;
                            iVar31 = iStack_d0;
                            iVar30 = iStack_d8;
                            uVar29 = uStack_e0;
                            uVar28 = uStack_e8;
                            uVar27 = uStack_f0;
                            uVar26 = uStack_f8;
                            uVar25 = uStack_100;
                            uVar24 = uStack_108;
                            uVar23 = uStack_110;
                            iVar22 = iStack_118;
                            iVar21 = iStack_120;
                            uVar20 = uStack_128;
                            uVar19 = uStack_130;
                            uVar18 = uStack_138;
                            uVar17 = uStack_140;
                            uVar16 = uStack_148;
                            uVar15 = uStack_150;
                            uVar14 = uStack_158;
                            iVar13 = iStack_160;
                            iVar12 = iStack_168;
                            uVar11 = uStack_170;
                            uVar10 = uStack_178;
                            uVar9 = uStack_180;
                            uVar8 = uStack_188;
                            uVar2 = uStack_190;
                            uVar50 = uStack_198;
                            uVar49 = uStack_1a0;
                            iVar62 = iStack_1a8;
                            iVar60 = iStack_1b0;
                            uVar5 = uStack_1b8;
                            uVar4 = uStack_1c0;
                            uVar3 = uStack_1c8;
                            uVar48 = uStack_1d0;
                            uVar61 = uStack_1d8;
                            if (uStack_1e8 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iStack_88 = iStack_1f0;
                                uStack_80 = uStack_1e8;
                                uStack_78 = uStack_1e0;
                                uStack_a8 = uStack_210;
                                uStack_a0 = uStack_208;
                                uStack_98 = uStack_200;
                                iStack_90 = iStack_1f8;
                                uStack_b8 = uStack_220;
                                uStack_b0 = uStack_218;
                                uStack_200 = uVar38;
                                iStack_1f8 = iVar39;
                                uStack_1e0 = uVar42;
                                uStack_210 = uVar36;
                                uStack_208 = uVar37;
                                iStack_1f0 = iVar40;
                                uStack_1e8 = uVar41;
                                uStack_220 = uVar34;
                                uStack_218 = uVar35;
                            }
                            uVar42 = uStack_78;
                            uVar41 = uStack_80;
                            iVar40 = iStack_88;
                            iVar39 = iStack_90;
                            uVar38 = uStack_98;
                            uVar37 = uStack_a0;
                            uVar36 = uStack_a8;
                            uVar35 = uStack_b0;
                            uVar34 = uStack_b8;
                            if (uStack_1e8 < uStack_c8) {
                                iStack_238 = iStack_d0;
                                uStack_230 = uStack_c8;
                                uStack_228 = uStack_c0;
                                uStack_258 = uStack_f0;
                                uStack_250 = uStack_e8;
                                uStack_248 = uStack_e0;
                                iStack_240 = iStack_d8;
                                uStack_268 = uStack_100;
                                uStack_260 = uStack_f8;
                                iStack_d0 = iStack_1f0;
                                uStack_c8 = uStack_1e8;
                                uStack_c0 = uStack_1e0;
                                uStack_f0 = uStack_210;
                                uStack_e8 = uStack_208;
                                uStack_e0 = uStack_200;
                                iStack_d8 = iStack_1f8;
                                uStack_100 = uStack_220;
                                uStack_f8 = uStack_218;
                                uStack_200 = uVar29;
                                iStack_1f8 = iVar30;
                                uStack_1e0 = uVar33;
                                uStack_210 = uVar27;
                                uStack_208 = uVar28;
                                iStack_1f0 = iVar31;
                                uStack_1e8 = uVar32;
                                uStack_220 = uVar25;
                                uStack_218 = uVar26;
                            }
                            uVar33 = uStack_c0;
                            uVar32 = uStack_c8;
                            iVar31 = iStack_d0;
                            iVar30 = iStack_d8;
                            uVar29 = uStack_e0;
                            uVar28 = uStack_e8;
                            uVar27 = uStack_f0;
                            uVar26 = uStack_f8;
                            uVar25 = uStack_100;
                            if (uStack_1e8 < uStack_110) {
                                iStack_238 = iStack_118;
                                uStack_230 = uStack_110;
                                uStack_228 = uStack_108;
                                uStack_258 = uStack_138;
                                uStack_250 = uStack_130;
                                uStack_248 = uStack_128;
                                iStack_240 = iStack_120;
                                uStack_268 = uStack_148;
                                uStack_260 = uStack_140;
                                iStack_118 = iStack_1f0;
                                uStack_110 = uStack_1e8;
                                uStack_108 = uStack_1e0;
                                uStack_138 = uStack_210;
                                uStack_130 = uStack_208;
                                uStack_128 = uStack_200;
                                iStack_120 = iStack_1f8;
                                uStack_148 = uStack_220;
                                uStack_140 = uStack_218;
                                uStack_200 = uVar20;
                                iStack_1f8 = iVar21;
                                uStack_1e0 = uVar24;
                                uStack_210 = uVar18;
                                uStack_208 = uVar19;
                                iStack_1f0 = iVar22;
                                uStack_1e8 = uVar23;
                                uStack_220 = uVar16;
                                uStack_218 = uVar17;
                            }
                            uVar24 = uStack_108;
                            uVar23 = uStack_110;
                            iVar22 = iStack_118;
                            iVar21 = iStack_120;
                            uVar20 = uStack_128;
                            uVar19 = uStack_130;
                            uVar18 = uStack_138;
                            uVar17 = uStack_140;
                            uVar16 = uStack_148;
                            if (uStack_1e8 < uStack_158) {
                                iStack_238 = iStack_160;
                                uStack_230 = uStack_158;
                                uStack_228 = uStack_150;
                                uStack_258 = uStack_180;
                                uStack_250 = uStack_178;
                                uStack_248 = uStack_170;
                                iStack_240 = iStack_168;
                                uStack_268 = uStack_190;
                                uStack_260 = uStack_188;
                                iStack_160 = iStack_1f0;
                                uStack_158 = uStack_1e8;
                                uStack_150 = uStack_1e0;
                                uStack_180 = uStack_210;
                                uStack_178 = uStack_208;
                                uStack_170 = uStack_200;
                                iStack_168 = iStack_1f8;
                                uStack_190 = uStack_220;
                                uStack_188 = uStack_218;
                                uStack_200 = uVar11;
                                iStack_1f8 = iVar12;
                                uStack_1e0 = uVar15;
                                uStack_210 = uVar9;
                                uStack_208 = uVar10;
                                iStack_1f0 = iVar13;
                                uStack_1e8 = uVar14;
                                uStack_220 = uVar2;
                                uStack_218 = uVar8;
                            }
                            uVar15 = uStack_150;
                            uVar14 = uStack_158;
                            iVar13 = iStack_160;
                            iVar12 = iStack_168;
                            uVar11 = uStack_170;
                            uVar10 = uStack_178;
                            uVar9 = uStack_180;
                            uVar8 = uStack_188;
                            uVar2 = uStack_190;
                            if (uStack_1e8 < uStack_1a0) {
                                iStack_238 = iStack_1a8;
                                uStack_230 = uStack_1a0;
                                uStack_228 = uStack_198;
                                uStack_258 = uStack_1c8;
                                uStack_250 = uStack_1c0;
                                uStack_248 = uStack_1b8;
                                iStack_240 = iStack_1b0;
                                uStack_268 = uStack_1d8;
                                uStack_260 = uStack_1d0;
                                iStack_1a8 = iStack_1f0;
                                uStack_1a0 = uStack_1e8;
                                uStack_198 = uStack_1e0;
                                uStack_1c8 = uStack_210;
                                uStack_1c0 = uStack_208;
                                uStack_1b8 = uStack_200;
                                iStack_1b0 = iStack_1f8;
                                uStack_1d8 = uStack_220;
                                uStack_1d0 = uStack_218;
                                uStack_200 = uVar5;
                                iStack_1f8 = iVar60;
                                iStack_1f0 = iVar62;
                                uStack_1e8 = uVar49;
                                uStack_1e0 = uVar50;
                                uStack_210 = uVar3;
                                uStack_208 = uVar4;
                                uStack_220 = uVar61;
                                uStack_218 = uVar48;
                            }
                            if (uStack_1a0 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iStack_88 = iStack_1a8;
                                uStack_80 = uStack_1a0;
                                uStack_78 = uStack_198;
                                uStack_a8 = uStack_1c8;
                                uStack_a0 = uStack_1c0;
                                uStack_98 = uStack_1b8;
                                iStack_90 = iStack_1b0;
                                uStack_b8 = uStack_1d8;
                                uStack_b0 = uStack_1d0;
                                uStack_198 = uVar42;
                                uStack_1b8 = uVar38;
                                iStack_1b0 = iVar39;
                                iStack_1a8 = iVar40;
                                uStack_1a0 = uVar41;
                                uStack_1c8 = uVar36;
                                uStack_1c0 = uVar37;
                                uStack_1d8 = uVar34;
                                uStack_1d0 = uVar35;
                            }
                            uVar50 = uStack_78;
                            uVar49 = uStack_80;
                            iVar62 = iStack_88;
                            iVar60 = iStack_90;
                            uVar5 = uStack_98;
                            uVar4 = uStack_a0;
                            uVar3 = uStack_a8;
                            uVar48 = uStack_b0;
                            uVar61 = uStack_b8;
                            if (uStack_1a0 < uStack_c8) {
                                iStack_238 = iStack_d0;
                                uStack_230 = uStack_c8;
                                uStack_228 = uStack_c0;
                                uStack_258 = uStack_f0;
                                uStack_250 = uStack_e8;
                                uStack_248 = uStack_e0;
                                iStack_240 = iStack_d8;
                                uStack_268 = uStack_100;
                                uStack_260 = uStack_f8;
                                iStack_d0 = iStack_1a8;
                                uStack_c8 = uStack_1a0;
                                uStack_c0 = uStack_198;
                                uStack_f0 = uStack_1c8;
                                uStack_e8 = uStack_1c0;
                                uStack_e0 = uStack_1b8;
                                iStack_d8 = iStack_1b0;
                                uStack_100 = uStack_1d8;
                                uStack_f8 = uStack_1d0;
                                uStack_198 = uVar33;
                                uStack_1b8 = uVar29;
                                iStack_1b0 = iVar30;
                                iStack_1a8 = iVar31;
                                uStack_1a0 = uVar32;
                                uStack_1c8 = uVar27;
                                uStack_1c0 = uVar28;
                                uStack_1d8 = uVar25;
                                uStack_1d0 = uVar26;
                            }
                            uVar33 = uStack_c0;
                            uVar32 = uStack_c8;
                            iVar31 = iStack_d0;
                            iVar30 = iStack_d8;
                            uVar29 = uStack_e0;
                            uVar28 = uStack_e8;
                            uVar27 = uStack_f0;
                            uVar26 = uStack_f8;
                            uVar25 = uStack_100;
                            if (uStack_1a0 < uStack_110) {
                                iStack_238 = iStack_118;
                                uStack_230 = uStack_110;
                                uStack_228 = uStack_108;
                                uStack_258 = uStack_138;
                                uStack_250 = uStack_130;
                                uStack_248 = uStack_128;
                                iStack_240 = iStack_120;
                                uStack_268 = uStack_148;
                                uStack_260 = uStack_140;
                                iStack_118 = iStack_1a8;
                                uStack_110 = uStack_1a0;
                                uStack_108 = uStack_198;
                                uStack_138 = uStack_1c8;
                                uStack_130 = uStack_1c0;
                                uStack_128 = uStack_1b8;
                                iStack_120 = iStack_1b0;
                                uStack_148 = uStack_1d8;
                                uStack_140 = uStack_1d0;
                                uStack_198 = uVar24;
                                uStack_1b8 = uVar20;
                                iStack_1b0 = iVar21;
                                iStack_1a8 = iVar22;
                                uStack_1a0 = uVar23;
                                uStack_1c8 = uVar18;
                                uStack_1c0 = uVar19;
                                uStack_1d8 = uVar16;
                                uStack_1d0 = uVar17;
                            }
                            uVar24 = uStack_108;
                            uVar23 = uStack_110;
                            iVar22 = iStack_118;
                            iVar21 = iStack_120;
                            uVar20 = uStack_128;
                            uVar19 = uStack_130;
                            uVar18 = uStack_138;
                            uVar17 = uStack_140;
                            uVar16 = uStack_148;
                            if (uStack_1a0 < uStack_158) {
                                iStack_238 = iStack_160;
                                uStack_230 = uStack_158;
                                uStack_228 = uStack_150;
                                uStack_258 = uStack_180;
                                uStack_250 = uStack_178;
                                uStack_248 = uStack_170;
                                iStack_240 = iStack_168;
                                uStack_268 = uStack_190;
                                uStack_260 = uStack_188;
                                iStack_160 = iStack_1a8;
                                uStack_158 = uStack_1a0;
                                uStack_150 = uStack_198;
                                uStack_180 = uStack_1c8;
                                uStack_178 = uStack_1c0;
                                uStack_170 = uStack_1b8;
                                iStack_168 = iStack_1b0;
                                uStack_190 = uStack_1d8;
                                uStack_188 = uStack_1d0;
                                uStack_1b8 = uVar11;
                                iStack_1b0 = iVar12;
                                iStack_1a8 = iVar13;
                                uStack_1a0 = uVar14;
                                uStack_198 = uVar15;
                                uStack_1c8 = uVar9;
                                uStack_1c0 = uVar10;
                                uStack_1d8 = uVar2;
                                uStack_1d0 = uVar8;
                            }
                            if (uStack_158 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iStack_88 = iStack_160;
                                uStack_80 = uStack_158;
                                uStack_78 = uStack_150;
                                uStack_a8 = uStack_180;
                                uStack_a0 = uStack_178;
                                uStack_98 = uStack_170;
                                iStack_90 = iStack_168;
                                uStack_b8 = uStack_190;
                                uStack_b0 = uStack_188;
                                uStack_150 = uVar50;
                                uStack_170 = uVar5;
                                iStack_168 = iVar60;
                                iStack_160 = iVar62;
                                uStack_158 = uVar49;
                                uStack_180 = uVar3;
                                uStack_178 = uVar4;
                                uStack_190 = uVar61;
                                uStack_188 = uVar48;
                            }
                            uVar50 = uStack_78;
                            uVar49 = uStack_80;
                            iVar62 = iStack_88;
                            iVar60 = iStack_90;
                            uVar5 = uStack_98;
                            uVar4 = uStack_a0;
                            uVar3 = uStack_a8;
                            uVar48 = uStack_b0;
                            uVar61 = uStack_b8;
                            if (uStack_158 < uStack_c8) {
                                iStack_238 = iStack_d0;
                                uStack_230 = uStack_c8;
                                uStack_228 = uStack_c0;
                                uStack_258 = uStack_f0;
                                uStack_250 = uStack_e8;
                                uStack_248 = uStack_e0;
                                iStack_240 = iStack_d8;
                                uStack_268 = uStack_100;
                                uStack_260 = uStack_f8;
                                iStack_d0 = iStack_160;
                                uStack_c8 = uStack_158;
                                uStack_c0 = uStack_150;
                                uStack_f0 = uStack_180;
                                uStack_e8 = uStack_178;
                                uStack_e0 = uStack_170;
                                iStack_d8 = iStack_168;
                                uStack_100 = uStack_190;
                                uStack_f8 = uStack_188;
                                uStack_150 = uVar33;
                                uStack_170 = uVar29;
                                iStack_168 = iVar30;
                                iStack_160 = iVar31;
                                uStack_158 = uVar32;
                                uStack_180 = uVar27;
                                uStack_178 = uVar28;
                                uStack_190 = uVar25;
                                uStack_188 = uVar26;
                            }
                            uVar15 = uStack_c0;
                            uVar14 = uStack_c8;
                            iVar13 = iStack_d0;
                            iVar12 = iStack_d8;
                            uVar11 = uStack_e0;
                            uVar10 = uStack_e8;
                            uVar9 = uStack_f0;
                            uVar8 = uStack_f8;
                            uVar2 = uStack_100;
                            if (uStack_158 < uStack_110) {
                                iStack_238 = iStack_118;
                                uStack_230 = uStack_110;
                                uStack_228 = uStack_108;
                                uStack_258 = uStack_138;
                                uStack_250 = uStack_130;
                                uStack_248 = uStack_128;
                                iStack_240 = iStack_120;
                                uStack_268 = uStack_148;
                                uStack_260 = uStack_140;
                                iStack_118 = iStack_160;
                                uStack_110 = uStack_158;
                                uStack_108 = uStack_150;
                                uStack_138 = uStack_180;
                                uStack_130 = uStack_178;
                                uStack_128 = uStack_170;
                                iStack_120 = iStack_168;
                                uStack_148 = uStack_190;
                                uStack_140 = uStack_188;
                                uStack_170 = uVar20;
                                iStack_168 = iVar21;
                                iStack_160 = iVar22;
                                uStack_158 = uVar23;
                                uStack_150 = uVar24;
                                uStack_180 = uVar18;
                                uStack_178 = uVar19;
                                uStack_190 = uVar16;
                                uStack_188 = uVar17;
                            }
                            if (uStack_110 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iStack_88 = iStack_118;
                                uStack_80 = uStack_110;
                                uStack_78 = uStack_108;
                                uStack_a8 = uStack_138;
                                uStack_a0 = uStack_130;
                                uStack_98 = uStack_128;
                                iStack_90 = iStack_120;
                                uStack_b8 = uStack_148;
                                uStack_b0 = uStack_140;
                                uStack_108 = uVar50;
                                uStack_128 = uVar5;
                                iStack_120 = iVar60;
                                iStack_118 = iVar62;
                                uStack_110 = uVar49;
                                uStack_138 = uVar3;
                                uStack_130 = uVar4;
                                uStack_148 = uVar61;
                                uStack_140 = uVar48;
                            }
                            if (uStack_110 < uStack_c8) {
                                iStack_238 = iStack_d0;
                                uStack_230 = uStack_c8;
                                uStack_228 = uStack_c0;
                                uStack_258 = uStack_f0;
                                uStack_250 = uStack_e8;
                                uStack_248 = uStack_e0;
                                iStack_240 = iStack_d8;
                                uStack_268 = uStack_100;
                                uStack_260 = uStack_f8;
                                iStack_d0 = iStack_118;
                                uStack_c8 = uStack_110;
                                uStack_c0 = uStack_108;
                                uStack_f0 = uStack_138;
                                uStack_e8 = uStack_130;
                                uStack_e0 = uStack_128;
                                iStack_d8 = iStack_120;
                                uStack_100 = uStack_148;
                                uStack_f8 = uStack_140;
                                uStack_128 = uVar11;
                                iStack_120 = iVar12;
                                iStack_118 = iVar13;
                                uStack_110 = uVar14;
                                uStack_108 = uVar15;
                                uStack_138 = uVar9;
                                uStack_130 = uVar10;
                                uStack_148 = uVar2;
                                uStack_140 = uVar8;
                            }
                            if (uStack_c8 < uStack_80) {
                                iStack_238 = iStack_88;
                                uStack_230 = uStack_80;
                                uStack_228 = uStack_78;
                                uStack_258 = uStack_a8;
                                uStack_250 = uStack_a0;
                                uStack_248 = uStack_98;
                                iStack_240 = iStack_90;
                                uStack_268 = uStack_b8;
                                uStack_260 = uStack_b0;
                                iVar60 = iStack_d0;
                                uVar49 = uStack_c8;
                                uVar50 = uStack_c0;
                                uVar48 = uStack_f0;
                                uVar4 = uStack_e8;
                                uVar3 = uStack_e0;
                                iVar62 = iStack_d8;
                                uVar61 = uStack_100;
                                uVar5 = uStack_f8;
                                uStack_e0 = uStack_98;
                                iStack_d8 = iStack_90;
                                iStack_d0 = iStack_88;
                                uStack_c8 = uStack_80;
                                uStack_c0 = uStack_78;
                                uStack_f0 = uStack_a8;
                                uStack_e8 = uStack_a0;
                                uStack_100 = uStack_b8;
                                uStack_f8 = uStack_b0;
                                uStack_b8 = uVar61;
                                uStack_b0 = uVar5;
                                uStack_a8 = uVar48;
                                uStack_a0 = uVar4;
                                uStack_98 = uVar3;
                                iStack_90 = iVar62;
                                iStack_88 = iVar60;
                                uStack_80 = uVar49;
                                uStack_78 = uVar50;
                            }
                        }
                        *(piVar56 + 6) = uVar53;
                        *(piVar56 + 8) = uVar52;
                        strcpy(piVar56 + 1,pcVar58 + 0x7a8);
                    }
                    pcVar58 = *(pcVar58 + 0x688) + -0x688;
                } while ((pcVar58 != pcVar59) ||
                        (pcVar58 = *(pcVar59 + 0x4d0) + -0x4d0, pcVar59 = pcVar58, pcVar58 != init_task));
            }
            uStack_270 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            uStack_290 = 0;
            uStack_288 = 0;
            iStack_2a0 = 0;
            iStack_298 = 0;
            uVar53 = (iVar47 - iVar46) / 1000000;
            ktime_get_real_ts64(&stack0xfffffffffffffd60);
            iVar47 = iStack_298;
            iVar46 = iStack_2a0;
            rtc_time64_to_tm(iStack_2a0,&stack0xfffffffffffffd70);
            rtc_time64_to_tm(iVar46 + 0x1fe5c000);
            iVar44 = (SUB168(SEXT816(iVar47) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                     (SUB164(SEXT816(iVar47) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f);
            _printk(0x800013c,"dump_top5_task",0x76c,1,0,0,0,delayed_work_timer_fn,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_1f8 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_1f0 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&stack0xfffffffffffffde8,uStack_220 & 0xffffffff,uStack_1e0,
                    &stack0xfffffffffffffdf8,uStack_220._4_4_,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_1b0 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_1a8 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&stack0xfffffffffffffe30,uStack_1d8 & 0xffffffff,uStack_198,
                    &stack0xfffffffffffffe40,uStack_1d8._4_4_,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_168 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_160 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&stack0xfffffffffffffe78,uStack_190 & 0xffffffff,uStack_150,
                    &stack0xfffffffffffffe88,uStack_190._4_4_,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_120 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_118 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&stack0xfffffffffffffec0,uStack_148 & 0xffffffff,uStack_108,
                    &stack0xfffffffffffffed0,uStack_148._4_4_,iVar44);
            uVar52 = 0;
            if (uVar53 != 0) {
                uVar52 = (iStack_d8 * 100) / uVar53;
            }
            uVar61 = 0;
            if (uVar53 != 0) {
                uVar61 = (iStack_d0 * 100) / uVar53;
            }
            _printk(0x80001b5,uVar52,uVar61,&stack0xffffffffffffff08,uStack_100 & 0xffffffff,uStack_c0,
                    &stack0xffffffffffffff18,uStack_100._4_4_);
        }
        __rcu_read_unlock();
        _segment.ehdr = ktime_get();
        rt_mutex_unlock(0x8002110);
    }
code_r0x08001810:
    __msecs_to_jiffies(_segment.ehdr * 1000);
    uVar48 = round_jiffies_relative();
    pcVar58 = obj.attr_groups;
    iVar47 = queue_delayed_work_on(0x20,_rtc_time64_to_tm,obj.attr_groups,uVar48);
    iVar46 = sp_el0;
    if (*(iVar46 + 0x5e0) != iStack_70) {
        __stack_chk_fail();
        *extraout_x18 = 0x8002598;
        iVar44 = sprintf(pcVar58,0x80002b0,*0x8002100);
        return iVar44;
    }
    return iVar47;
}



// ===== sym.reset_show @ 0x080025a4 (size 60) =====



int64_t sym.reset_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,0x80002b0,*0x8002100);
    return iVar1;
}




// ===== sym.reset_store @ 0x080025e0 (size 156) =====



int64_t sym.reset_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = memchr(arg1,10,arg2);
    iVar1 = arg2;
    if (iVar2 != 0) {
        iVar1 = iVar2 - arg1;
    }
    if ((iVar1 == 5) && (iVar1 = strncmp(arg1,"reset",5), iVar1 == 0)) {
        *0x8002100 = 1;
        _segment.ehdr = 0x14;
    }
    else {
        *0x8002100 = 0;
    }
    return arg2;
}




// ===== sym.task_print_period_show @ 0x0800267c (size 60) =====



int64_t sym.task_print_period_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,0x80002b0,_segment.ehdr);
    return iVar1;
}




// ===== sym.task_print_period_store @ 0x080026b8 (size 136) =====



int64_t sym.task_print_period_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar3 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar2 = kstrtoull(arg1,10,&uStack_30);
    if (iVar2 == 0) {
        _segment.ehdr = uStack_30;
    }
    else {
        arg2 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.wakelock_print_period_show;
    iVar2 = sprintf(puVar3,0x80002b0,_segment.ehdr);
    return iVar2;
}




// ===== sym.wakelock_print_period_show @ 0x08002740 (size 60) =====



int64_t sym.wakelock_print_period_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,0x80002b0,_segment.ehdr);
    return iVar1;
}




// ===== sym.wakelock_print_period_store @ 0x0800277c (size 136) =====



uchar * sym.wakelock_print_period_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar3 = kstrtoull(arg1,10,&uStack_30);
    if (iVar3 == 0) {
        _segment.ehdr = uStack_30;
    }
    else {
        arg2 = -0x16;
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
        pcVar2 = SoftwareBreakpoint(0x5502,0x800285c);
        (*pcVar2)();
    }
    return arg2;
}




// ===== sym.__cfi_check_fail @ 0x08002804 (size 88) =====



//WARNING: Switch with 1 destination removed at 0x08002848

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
    //switch table (4 cases) at 0x8000100
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800285c);
    (*pcVar1)();
}




// ===== sym.init_module @ 0x08002864 (size 236) =====



ulong sym.init_module(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000129);
    memset(reloc.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt,0,0x2000);
    _obj.attr_groups = 0xfffffffe0;
    *0x8000078 = 0x8000078;
    _obj.g = 0x8000078;
    *0x8000088 = sym.power_info_dump_func.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt;
    init_timer_key(obj.reset_attr,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    __msecs_to_jiffies(_segment.ehdr * 1000);
    uVar1 = round_jiffies_relative();
    queue_delayed_work_on(0x20,_rtc_time64_to_tm,obj.attr_groups,uVar1);
    *0x8002000 = kobject_create_and_add("xm_power",0);
    if (*0x8002000 == 0) {
        uVar1 = 0xfffffff4;
    }
    else {
        uVar1 = sysfs_create_groups(*0x8002000,obj.attr_groups);
    }
    return uVar1;
}




// ===== sym.cleanup_module @ 0x08002950 (size 56) =====



void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000185);
    cancel_delayed_work(obj.attr_groups);
    return;
}

