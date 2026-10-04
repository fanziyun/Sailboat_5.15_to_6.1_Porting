// decompiled from perfmgr by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 680) =====

//WARNING: Switch with 1 destination removed at 0x0800167c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x890743871a4a53) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 == -0x57be845bca9148ef) {
                pcVar2 = sym.perfmgr_suspend.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt;
            }
            else {
                if (arg1 == -0x550b9e52359ac614) {
                    if ((pcVar1 + -0x80012f8 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x0800163c;
                }
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800163c;
                pcVar2 = sym.perfmgr_remove.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt;
            }
code_r0x0800127c:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800163c;
        }
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else {
                if (arg1 != -0x157da1f33160804c) goto code_r0x0800163c;
                pcVar2 = sym.__typeid__ZTSFviyiE_global_addr;
            }
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.single_release.cfi_jt;
                goto code_r0x0800127c;
            }
            if (arg1 != -0x57a29a6189e3d76) goto code_r0x0800163c;
            pcVar2 = sym.__typeid__ZTSFviyE_global_addr;
        }
    }
    else if (arg1 < 0x199c66976d43c92e) {
        if (arg1 == -0x890743871a4a53) {
            pcVar2 = sym.device_ioctl.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x0800163c;
            pcVar2 = sym.seq_read.cfi_jt;
        }
    }
    else if (arg1 < 0x4a220a35dbe7fc62) {
        if (arg1 == 0x199c66976d43c92e) {
            pcVar2 = sym.perfmgr_ddrfreq_remap_set.cdf25b9854308a0d2def1eed9f0d6c89.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x0800163c;
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
    }
    else if (arg1 == 0x4a220a35dbe7fc62) {
        pcVar2 = sym.perfmgr_ddrfreq_remap_get.cdf25b9854308a0d2def1eed9f0d6c89.cfi_jt;
    }
    else {
        if (arg1 != 0x5233d5bc7887ae44) goto code_r0x0800163c;
        pcVar2 = sym.device_show.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800163c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001690);
    (*pcVar1)();
}


// ===== sym.seq_lseek.cfi_jt @ 0x080012b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080012b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x080012c0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.init_perfmgr();
    return 0;
}


// ===== sym.perfmgr_ddrfreq_remap_set.cdf25b9854308a0d2def1eed9f0d6c89.cfi_jt @ 0x080012c8 (size 8) =====

uint64_t sym.perfmgr_ddrfreq_remap_set.cdf25b9854308a0d2def1eed9f0d6c89.cfi_jt(ulong param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_24;
    int64_t iStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_18 = *(iVar4 + 0x5e0);
    iStack_24 = 0;
    iVar4 = kstrdup(param_1,0xcc0);
    if (iVar4 == 0) {
        uVar5 = 0xfffffff4;
    }
    else {
        iStack_20 = iVar4;
        iVar4 = strsep(&iStack_20,0x8000b89);
        if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
            _segment.ehdr = iStack_24;
            iVar4 = strsep(&iStack_20,0x80009a1);
            if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                _segment.ehdr = iStack_24;
                iVar4 = strsep(&iStack_20,0x8000b89);
                if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                    _segment.ehdr = iStack_24;
                    iVar4 = strsep(&iStack_20,0x80009a1);
                    if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                        _segment.ehdr = iStack_24;
                        iVar4 = strsep(&iStack_20,0x8000b89);
                        if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                            _segment.ehdr = iStack_24;
                            iVar4 = strsep(&iStack_20,0x80009a1);
                            if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                                _segment.ehdr = iStack_24;
                                iVar4 = strsep(&iStack_20,0x8000b89);
                                if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                                    _segment.ehdr = iStack_24;
                                    iVar4 = strsep(&iStack_20,0x80009a1);
                                    if ((iVar4 != 0) && (uVar5 = kstrtouint(iVar4,10,&iStack_24), -1 < uVar5)) {
                                        _segment.ehdr = iStack_24;
                                        goto code_r0x08001a24;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        uVar5 = 0xffffffea;
    }
code_r0x08001a24:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_18) {
        return uVar5;
    }
    iVar4 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.perfmgr_ddrfreq_remap_get;
    uVar2 = scnprintf(iVar4,0x1000,"CPU freq (MHz)\tMem freq (kHz)\n");
    uVar5 = uVar2;
    if (_segment.ehdr != 0) {
        iVar1 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,"%14u\t%14u\n",_segment.ehdr,*0x8000214);
        uVar5 = iVar1 + uVar2;
        if (*0x8000218 != 0) {
            iVar3 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,"%14u\t%14u\n",*0x8000218,*0x800021c);
            uVar2 = iVar3 + iVar1 + uVar2;
            uVar5 = uVar2;
            if (*0x8000220 != 0) {
                iVar1 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,"%14u\t%14u\n",*0x8000220,*0x8000224);
                uVar2 = iVar1 + uVar2;
                uVar5 = uVar2;
                if (*0x8000228 != 0) {
                    iVar1 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,"%14u\t%14u\n",*0x8000228,_segment.ehdr);
                    uVar2 = iVar1 + uVar2;
                    uVar5 = uVar2;
                }
                goto joined_r0x08001b98;
            }
        }
    }
    uVar2 = uVar5;
joined_r0x08001b98:
    if (uVar2 < 0x1000) {
        iVar1 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,0x8000b63);
        uVar5 = iVar1 + uVar5;
    }
    return uVar5;
}


// ===== sym.device_show.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt @ 0x080012d0 (size 8) =====

ulong sym.device_show.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt(void)

{
    return 0;
}


// ===== sym.perfmgr_ddrfreq_remap_get.cdf25b9854308a0d2def1eed9f0d6c89.cfi_jt @ 0x080012d8 (size 8) =====

uint64_t sym.perfmgr_ddrfreq_remap_get.cdf25b9854308a0d2def1eed9f0d6c89.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = scnprintf(param_1,0x1000,"CPU freq (MHz)\tMem freq (kHz)\n");
    uVar4 = uVar1;
    if (_segment.ehdr != 0) {
        iVar2 = scnprintf(param_1 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",_segment.ehdr,*0x8000214);
        uVar4 = iVar2 + uVar1;
        if (*0x8000218 != 0) {
            iVar3 = scnprintf(param_1 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",*0x8000218,*0x800021c);
            uVar1 = iVar3 + iVar2 + uVar1;
            uVar4 = uVar1;
            if (*0x8000220 != 0) {
                iVar2 = scnprintf(param_1 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",*0x8000220,*0x8000224);
                uVar1 = iVar2 + uVar1;
                uVar4 = uVar1;
                if (*0x8000228 != 0) {
                    iVar2 = scnprintf(param_1 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",*0x8000228,_segment.ehdr);
                    uVar1 = iVar2 + uVar1;
                    uVar4 = uVar1;
                }
                goto joined_r0x08001b98;
            }
        }
    }
    uVar1 = uVar4;
joined_r0x08001b98:
    if (uVar1 < 0x1000) {
        iVar2 = scnprintf(param_1 + uVar4,0x1000 - uVar4,0x8000b63);
        uVar4 = iVar2 + uVar4;
    }
    return uVar4;
}


// ===== sym.seq_read.cfi_jt @ 0x080012e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.single_release.cfi_jt @ 0x080012e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.device_open.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt @ 0x080012f0 (size 8) =====

void sym.device_open.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.device_show.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.perfmgr_ddrfreq_release_work.cdf25b9854308a0d2def1eed9f0d6c89.cfi_jt @ 0x080012f8 (size 8) =====

void sym.perfmgr_ddrfreq_release_work.cdf25b9854308a0d2def1eed9f0d6c89.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    boost_ddr_freq(0x858b8);
    return;
}


// ===== sym.do_maxfreq_release_work.6b4feefd42840a24f0640c08ab2173d0.cfi_jt @ 0x08001300 (size 8) =====

void sym.do_maxfreq_release_work.6b4feefd42840a24f0640c08ab2173d0.cfi_jt(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    bool bVar4;
    uint64_t uVar5;
    uint32_t *in_x4;
    uint uVar6;
    ulong *in_x18;
    uint32_t unaff_w20;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _segment.ehdr;
    *in_x4 = unaff_w20;
    uVar2 = _segment.ehdr;
    uVar7 = _segment.ehdr;
    bVar4 = _segment.ehdr == 0;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    if (uVar5 < unaff_w20) {
        do {
            if (uVar2 <= uVar5) {
                if (0x1f < uVar5) {
code_r0x080032a0:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x80032a4);
                    (*pcVar3)();
                }
                if (uVar1 == 0 || bVar4) {
                    uVar6 = 0;
                    _segment.ehdr = 0;
                }
                else {
                    if (0x23 < uVar2) goto code_r0x080032a0;
                    uVar6 = *(obj.cpufreq_table4 + uVar7 * 4);
                    _segment.ehdr = uVar2;
                }
                *(*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8) + 0x80047b4) = uVar6;
            }
            uVar5 = cpumask_next(uVar5,__cpu_possible_mask);
        } while (uVar5 < unaff_w20);
    }
    sym.update_policy_online();
    return;
}


// ===== sym.perfmgr_notifer_wq_cb.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt @ 0x08001308 (size 8) =====

void sym.perfmgr_notifer_wq_cb.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt(int64_t param_1)

{
    int *piVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_1 + -0x18;
    if (piVar1 != NULL) {
        if (*piVar1 == 2) {
            sym.perfmgr_notify_connect_cb(*(param_1 + -0x14),*(param_1 + -8),*(param_1 + -0x10));
        }
        else if (*piVar1 == 1) {
            sym.perfmgr_notify_qudeq_cb(*(param_1 + -0x14),*(param_1 + -8));
        }
        kfree(piVar1);
    }
    return;
}


// ===== sym.__typeid__ZTSFviyE_global_addr @ 0x08001310 (size 8) =====

void sym.__typeid__ZTSFviyE_global_addr(int64_t param_1,ulong param_2)

{
    int iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.perfmgr_is_enable(param_1);
    if ((iVar1 != 0) && (puVar2 = kmem_cache_alloc_trace(_proc_create,0xa20,0x78), puVar2 != NULL)) {
        if (_segment.ehdr == 0) {
            kfree();
        }
        else {
            *(puVar2 + 4) = param_2;
            *puVar2 = 1;
            puVar2[1] = param_1;
            *(puVar2 + 6) = 0xfffffffe0;
            *(puVar2 + 8) = puVar2 + 8;
            *(puVar2 + 10) = puVar2 + 8;
            *(puVar2 + 0xc) = sym.perfmgr_notifer_wq_cb.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt;
            queue_work_on(0x20);
        }
    }
    return;
}


// ===== sym.perfmgr_suspend.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt @ 0x08001318 (size 8) =====

ulong sym.perfmgr_suspend.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt(void)

{
    return 0;
}


// ===== sym.perfmgr_resume.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt @ 0x08001320 (size 8) =====

ulong sym.perfmgr_resume.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt(void)

{
    return 0;
}


// ===== sym.device_ioctl.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt @ 0x08001328 (size 8) =====

void sym.device_ioctl.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt(ulong param_1,uint32_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    pcVar5 = param_2;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    if ((_seq_lseek >> 0x18 & 1) == 0) {
        uVar1 = daif;
        if ((uVar1 & 0x80) == 0) {
            uVar2 = daif;
            daif = uVar2 | 0xc0;
        }
        iVar3 = sp_el0;
        uVar2 = ttbr1_el1;
        ttbr1_el1 = *(iVar3 + 8) & 0xffff000000000000 | uVar2 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        ttbr0_el1 = *(iVar3 + 8);
        InstructionSynchronizationBarrier();
        daif = uVar1;
    }
    if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
        param_3 = 0;
    }
    iVar3 = __arch_copy_from_user(&uStack_50,param_3,0x28);
    pcVar6 = _segment.ehdr;
    if ((_seq_lseek >> 0x18 & 1) == 0) {
        uVar1 = daif;
        if ((uVar1 & 0x80) == 0) {
            uVar2 = daif;
            daif = uVar2 | 0xc0;
        }
        uVar2 = ttbr1_el1;
        ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
        InstructionSynchronizationBarrier();
        ttbr1_el1 = uVar2 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        daif = uVar1;
    }
    if (iVar3 == 0) {
        if (param_2 == 0x4028670f) {
            if (_segment.ehdr == NULL) goto code_r0x08001540;
            pcVar5 = _segment.ehdr;
            if (_segment.ehdr != sym.__typeid__ZTSFviyiE_global_addr) goto code_r0x0800157c;
            goto code_r0x08001534;
        }
        if (param_2 == 0x40286701) {
            uVar4 = 0;
            pcVar5 = _segment.ehdr;
            if ((_segment.ehdr != NULL) && (uStack_50._4_4_ != 0)) {
                if (_segment.ehdr != sym.__typeid__ZTSFviyE_global_addr) {
                    __cfi_slowpath_diag(0xfa85d659e761c28a,_segment.ehdr,0x8000860);
                }
                (*pcVar6)(uStack_50 & 0xffffffff,uStack_30);
                goto code_r0x08001540;
            }
        }
        else {
            uVar4 = 0xffffffffffffffff;
        }
    }
    else {
        uVar4 = 0xfffffffffffffff2;
    }
    while( true ) {
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_28) break;
        __stack_chk_fail(uVar4);
code_r0x0800157c:
        __cfi_slowpath_diag(0xea825e0cce9f7fb4,pcVar5,0x8000880);
        pcVar6 = pcVar5;
code_r0x08001534:
        (*pcVar6)(uStack_50 & 0xffffffff,uStack_30,uStack_50._4_4_);
code_r0x08001540:
        uVar4 = 0;
        pcVar5 = pcVar6;
    }
    return;
}


// ===== sym.perfmgr_remove.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt @ 0x08001330 (size 8) =====

ulong sym.perfmgr_remove.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt(void)

{
    return 0;
}


// ===== sym.perfmgr_probe.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt @ 0x08001338 (size 8) =====

ulong sym.perfmgr_probe.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt(void)

{
    return 0;
}


// ===== sym.__typeid__ZTSFviyiE_global_addr @ 0x08001340 (size 8) =====

void sym.__typeid__ZTSFviyiE_global_addr(int64_t param_1,ulong param_2,uint param_3)

{
    int iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.perfmgr_is_enable(param_1);
    if ((iVar1 != 0) && (puVar2 = kmem_cache_alloc_trace(_proc_create,0xa20,0x48), puVar2 != NULL)) {
        if (_segment.ehdr == 0) {
            kfree();
        }
        else {
            *(puVar2 + 4) = param_2;
            *puVar2 = 2;
            puVar2[1] = param_1;
            puVar2[2] = param_3;
            *(puVar2 + 6) = 0xfffffffe0;
            *(puVar2 + 8) = puVar2 + 8;
            *(puVar2 + 10) = puVar2 + 8;
            *(puVar2 + 0xc) = sym.perfmgr_notifer_wq_cb.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt;
            queue_work_on(0x20);
        }
    }
    return;
}


// ===== sym.init_perfctl @ 0x08001348 (size 72) =====

uint sym.init_perfctl(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = proc_create("perf_ioctl",0x1b4,arg1,obj.Fops.llvm.15109857883525283874);
    uVar2 = 0xfffffff4;
    if (iVar1 != 0) {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.device_open @ 0x08001390 (size 56) =====

void sym.device_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.device_show.910388afcfa7c5a2b5c2bb7e9b312364.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.device_ioctl @ 0x080013c8 (size 548) =====

void sym.device_ioctl(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    pcVar5 = arg1 & 0xffffffff;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    if ((_seq_lseek >> 0x18 & 1) == 0) {
        uVar1 = daif;
        if ((uVar1 & 0x80) == 0) {
            uVar2 = daif;
            daif = uVar2 | 0xc0;
        }
        iVar3 = sp_el0;
        uVar2 = ttbr1_el1;
        ttbr1_el1 = *(iVar3 + 8) & 0xffff000000000000 | uVar2 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        ttbr0_el1 = *(iVar3 + 8);
        InstructionSynchronizationBarrier();
        daif = uVar1;
    }
    if ((arg2 & (arg2 << 8) >> 8 & 0xffffff8000000000U) != 0) {
        arg2 = 0;
    }
    iVar3 = __arch_copy_from_user(&uStack_50,arg2,0x28);
    pcVar6 = _segment.ehdr;
    if ((_seq_lseek >> 0x18 & 1) == 0) {
        uVar1 = daif;
        if ((uVar1 & 0x80) == 0) {
            uVar2 = daif;
            daif = uVar2 | 0xc0;
        }
        uVar2 = ttbr1_el1;
        ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
        InstructionSynchronizationBarrier();
        ttbr1_el1 = uVar2 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        daif = uVar1;
    }
    if (iVar3 == 0) {
        if (arg1 == 0x4028670f) {
            if (_segment.ehdr == NULL) goto code_r0x08001540;
            pcVar5 = _segment.ehdr;
            if (_segment.ehdr != sym.__typeid__ZTSFviyiE_global_addr) goto code_r0x0800157c;
            goto code_r0x08001534;
        }
        if (arg1 == 0x40286701) {
            uVar4 = 0;
            pcVar5 = _segment.ehdr;
            if ((_segment.ehdr != NULL) && (uStack_50._4_4_ != 0)) {
                if (_segment.ehdr != sym.__typeid__ZTSFviyE_global_addr) {
                    __cfi_slowpath_diag(0xfa85d659e761c28a,_segment.ehdr,0x8000860);
                }
                (*pcVar6)(uStack_50 & 0xffffffff,uStack_30);
                goto code_r0x08001540;
            }
        }
        else {
            uVar4 = 0xffffffffffffffff;
        }
    }
    else {
        uVar4 = 0xfffffffffffffff2;
    }
    while( true ) {
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_28) break;
        __stack_chk_fail(uVar4);
code_r0x0800157c:
        __cfi_slowpath_diag(0xea825e0cce9f7fb4,pcVar5,0x8000880);
        pcVar6 = pcVar5;
code_r0x08001534:
        (*pcVar6)(uStack_50 & 0xffffffff,uStack_30,uStack_50._4_4_);
code_r0x08001540:
        uVar4 = 0;
        pcVar5 = pcVar6;
    }
    return;
}


// ===== sym.device_show @ 0x08001628 (size 16) =====

ulong sym.device_show(int64_t arg1)

{
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001638 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800167c

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
    //switch table (4 cases) at 0x80008a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001690);
    (*pcVar1)();
}


// ===== sym.perfmgr_boost_ddrfreq_and_timeout @ 0x08001690 (size 236) =====

void sym.perfmgr_boost_ddrfreq_and_timeout(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        return;
    }
    uVar1 = arg1;
    uVar4 = 0x858b8;
    cancel_delayed_work(obj.ddrfreq_release_work);
    if (uVar1 != 0) {
        if (_segment.ehdr < uVar1) {
            iVar3 = 0;
        }
        else if (_segment.ehdr < uVar1) {
            iVar3 = 1;
        }
        else if (_segment.ehdr < uVar1) {
            iVar3 = 2;
        }
        else {
            if (uVar1 <= _segment.ehdr) goto code_r0x08001738;
            iVar3 = 3;
        }
        uVar4 = *(iVar3 * 8 + 0x8000214);
    }
code_r0x08001738:
    boost_ddr_freq(uVar4);
    uVar2 = __msecs_to_jiffies(_segment.ehdr);
    queue_delayed_work_on(0x20,_seq_read,obj.ddrfreq_release_work,uVar2);
    return;
}


// ===== sym.perfmgr_remap_init @ 0x0800177c (size 184) =====

ulong sym.perfmgr_remap_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.remap_table = 0x383e700019f0a0;
    *0x8000218 = 0x30a1380016e360;
    *0x8000220 = 0x29bf800013d620;
    *0x8000228 = 0x1ffb8000124f80;
    _obj.ddrfreq_release_work = 0xfffffffe0;
    *0x8000190 = 0x8000190;
    *0x8000198 = 0x8000190;
    *0x80001a0 = sym.perfmgr_ddrfreq_release_work.cdf25b9854308a0d2def1eed9f0d6c89.cfi_jt;
    init_timer_key(0x80001b8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    return 0;
}


// ===== sym.perfmgr_ddrfreq_release_work @ 0x08001834 (size 44) =====

void sym.perfmgr_ddrfreq_release_work(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    boost_ddr_freq(0x858b8);
    return;
}


// ===== sym.perfmgr_ddrfreq_remap_set @ 0x08001860 (size 496) =====

uint64_t sym.perfmgr_ddrfreq_remap_set(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_24;
    int64_t iStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_18 = *(iVar4 + 0x5e0);
    iStack_24 = 0;
    iVar4 = kstrdup(arg1,0xcc0);
    if (iVar4 == 0) {
        uVar5 = 0xfffffff4;
    }
    else {
        iStack_20 = iVar4;
        iVar4 = strsep(&iStack_20,0x8000b89);
        if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
            _segment.ehdr = iStack_24;
            iVar4 = strsep(&iStack_20,0x80009a1);
            if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                _segment.ehdr = iStack_24;
                iVar4 = strsep(&iStack_20,0x8000b89);
                if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                    _segment.ehdr = iStack_24;
                    iVar4 = strsep(&iStack_20,0x80009a1);
                    if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                        _segment.ehdr = iStack_24;
                        iVar4 = strsep(&iStack_20,0x8000b89);
                        if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                            _segment.ehdr = iStack_24;
                            iVar4 = strsep(&iStack_20,0x80009a1);
                            if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                                _segment.ehdr = iStack_24;
                                iVar4 = strsep(&iStack_20,0x8000b89);
                                if ((iVar4 != 0) && (iVar1 = kstrtouint(iVar4,10,&iStack_24), -1 < iVar1)) {
                                    _segment.ehdr = iStack_24;
                                    iVar4 = strsep(&iStack_20,0x80009a1);
                                    if ((iVar4 != 0) && (uVar5 = kstrtouint(iVar4,10,&iStack_24), -1 < uVar5)) {
                                        _segment.ehdr = iStack_24;
                                        goto code_r0x08001a24;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        uVar5 = 0xffffffea;
    }
code_r0x08001a24:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_18) {
        return uVar5;
    }
    iVar4 = __stack_chk_fail(uVar5);
    *extraout_x18 = sym.perfmgr_ddrfreq_remap_get;
    uVar2 = scnprintf(iVar4,0x1000,"CPU freq (MHz)\tMem freq (kHz)\n");
    uVar5 = uVar2;
    if (_segment.ehdr != 0) {
        iVar1 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,"%14u\t%14u\n",_segment.ehdr,*0x8000214);
        uVar5 = iVar1 + uVar2;
        if (*0x8000218 != 0) {
            iVar3 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,"%14u\t%14u\n",*0x8000218,*0x800021c);
            uVar2 = iVar3 + iVar1 + uVar2;
            uVar5 = uVar2;
            if (*0x8000220 != 0) {
                iVar1 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,"%14u\t%14u\n",*0x8000220,*0x8000224);
                uVar2 = iVar1 + uVar2;
                uVar5 = uVar2;
                if (*0x8000228 != 0) {
                    iVar1 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,"%14u\t%14u\n",*0x8000228,_segment.ehdr);
                    uVar2 = iVar1 + uVar2;
                    uVar5 = uVar2;
                }
                goto joined_r0x08001b98;
            }
        }
    }
    uVar2 = uVar5;
joined_r0x08001b98:
    if (uVar2 < 0x1000) {
        iVar1 = scnprintf(iVar4 + uVar5,0x1000 - uVar5,0x8000b63);
        uVar5 = iVar1 + uVar5;
    }
    return uVar5;
}


// ===== sym.perfmgr_ddrfreq_remap_get @ 0x08001a50 (size 336) =====

uint64_t sym.perfmgr_ddrfreq_remap_get(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = scnprintf(arg1,0x1000,"CPU freq (MHz)\tMem freq (kHz)\n");
    uVar4 = uVar1;
    if (_segment.ehdr != 0) {
        iVar2 = scnprintf(arg1 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",_segment.ehdr,*0x8000214);
        uVar4 = iVar2 + uVar1;
        if (*0x8000218 != 0) {
            iVar3 = scnprintf(arg1 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",*0x8000218,*0x800021c);
            uVar1 = iVar3 + iVar2 + uVar1;
            uVar4 = uVar1;
            if (*0x8000220 != 0) {
                iVar2 = scnprintf(arg1 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",*0x8000220,*0x8000224);
                uVar1 = iVar2 + uVar1;
                uVar4 = uVar1;
                if (*0x8000228 != 0) {
                    iVar2 = scnprintf(arg1 + uVar4,0x1000 - uVar4,"%14u\t%14u\n",*0x8000228,_segment.ehdr);
                    uVar1 = iVar2 + uVar1;
                    uVar4 = uVar1;
                }
                goto joined_r0x08001b98;
            }
        }
    }
    uVar1 = uVar4;
joined_r0x08001b98:
    if (uVar1 < 0x1000) {
        iVar2 = scnprintf(arg1 + uVar4,0x1000 - uVar4,0x8000b63);
        uVar4 = iVar2 + uVar4;
    }
    return uVar4;
}


// ===== sym.perfmgr_alloc_atomic @ 0x08001ba0 (size 64) =====

void sym.perfmgr_alloc_atomic(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1;
    if (uVar1 < 0x1001) {
        __kmalloc(uVar1,0xa20);
    }
    else {
        vmalloc(uVar1);
    }
    return;
}


// ===== sym.perfmgr_free @ 0x08001be0 (size 56) =====

void sym.perfmgr_free(ulong noname_0,uint32_t arg1)

{
    int64_t in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x0 != 0) {
        if (arg1 < 0x1001) {
            kfree();
        }
        else {
            vfree();
        }
    }
    return;
}


// ===== sym.perfmgr_is_enable @ 0x08001c18 (size 280) =====

uint sym.perfmgr_is_enable(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        sym.maxfreq_release_timeout(0x50);
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        uVar5 = 0;
        obj.perfmgr_is_enable.need_delayed_enable = 0x1;
    }
    else {
        bVar3 = _segment.ehdr == 1;
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        if (bVar3 && obj.perfmgr_is_enable.need_delayed_enable != 0x0) {
            uVar4 = ktime_get();
            iVar1 = _segment.ehdr;
            _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
            uVar2 = uVar4;
            if (iVar1 != 0) {
                uVar2 = _segment.ehdr;
            }
            _segment.ehdr = uVar2;
            uVar5 = 0;
            if ((_segment.ehdr == 1) && (14999999999 < uVar4 - _segment.ehdr)) {
                uVar5 = 1;
                obj.perfmgr_is_enable.need_delayed_enable = 0x0;
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            }
        }
        else {
            mutex_lock(obj.notify_lock);
            uVar5 = _segment.ehdr;
            mutex_unlock(obj.notify_lock);
        }
    }
    return uVar5;
}


// ===== sym.perfmgr_do_filter @ 0x08001d30 (size 704) =====

ulong sym.perfmgr_do_filter(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t arg1_00;
    ulong uVar7;
    code *pcVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = ktime_get();
    if (obj.perfmgr_do_filter.stop_buffer == 0x1 && iVar5 - _segment.ehdr < 50000000) {
code_r0x08001f94:
        uVar7 = 0;
    }
    else {
        obj.perfmgr_do_filter.stop_buffer = 0x0;
        if (_segment.ehdr != 0) {
            mutex_lock(obj.list_lock);
            for (pcVar8 = _obj.connected_buffer_list; pcVar8 != obj.connected_buffer_list; pcVar8 = *pcVar8) {
                if ((*(pcVar8 + -100) != 0) && (*(pcVar8 + -8) != arg2)) {
                    _printk(0x80008b0);
                    obj.perfmgr_do_filter.stop_buffer = 0x1;
                    _segment.ehdr = iVar5;
                    mutex_unlock(obj.list_lock);
                    goto code_r0x08001f94;
                }
            }
            mutex_unlock(obj.list_lock);
        }
        iVar6 = find_get_pid(arg1 & 0xffffffff);
        if (iVar6 == 0) {
            _printk(0x8000b0e,"perfmgr_do_filter");
        }
        else {
            arg1_00 = get_pid_task(iVar6,0);
            if (arg1_00 == 0) {
                _printk(0x8000ad0,"perfmgr_do_filter");
            }
            else {
                if ((_segment.ehdr != 0) && (iVar4 = strcmp(arg1_00 + 0x7a8,"surfaceflinger"), iVar4 == 0)) {
                    _printk(0x8000aeb,"perfmgr_do_filter");
                    obj.perfmgr_do_filter.stop_buffer = 0x1;
                    _segment.ehdr = iVar5;
                    sym.put_task_struct(arg1_00);
code_r0x08001f8c:
                    put_pid(iVar6);
                    goto code_r0x08001f94;
                }
                if (_segment.ehdr != 0) {
                    iVar4 = strcmp(arg1_00 + 0x7a8,"surfaceflinger");
                    if ((iVar4 == 0) || (iVar4 = strcmp(arg1_00 + 0x7a8,"curitycenter:ui"), iVar4 == 0)) {
                        piVar1 = arg1_00 + 0x38;
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
                        if (iVar4 == 1) {
                            DataMemoryBarrier(2,1);
                            __put_task_struct(arg1_00);
                        }
                        else if (iVar4 < 1) {
                            refcount_warn_saturate(piVar1,3);
                        }
                        goto code_r0x08001f8c;
                    }
                }
                piVar1 = arg1_00 + 0x38;
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
                if (iVar4 == 1) {
                    DataMemoryBarrier(2,1);
                    __put_task_struct(arg1_00);
                }
                else if (iVar4 < 1) {
                    refcount_warn_saturate(piVar1,3);
                }
            }
            put_pid(iVar6);
        }
        uVar7 = 1;
    }
    return uVar7;
}


// ===== sym.put_task_struct @ 0x08001ff0 (size 148) =====

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


// ===== sym.perfmgr_notify_connect_cb @ 0x08002084 (size 616) =====

ulong sym.perfmgr_notify_connect_cb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    ulong *puVar4;
    ulong uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    int iVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong *puVar10;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = _segment.ehdr;
    uVar5 = sym.perfmgr_do_filter(arg1,arg2);
    if (uVar5 != 0) {
        mutex_lock(obj.list_lock);
        pcVar9 = CONCAT44(*0x8000004,_segment.ehdr);
        if (arg3 == 0) {
            if (pcVar9 != obj.connected_buffer_list) {
                do {
                    if (*(pcVar9 + -8) == arg2) {
                        uVar7 = __list_del_entry_valid(pcVar9);
                        if ((uVar7 & 1) != 0) {
                            iVar1 = *pcVar9;
                            piVar2 = *(pcVar9 + 8);
                            *(iVar1 + 8) = piVar2;
                            *piVar2 = iVar1;
                        }
                        *pcVar9 = -0x2152ffffffffff00;
                        *(pcVar9 + 8) = -0x2152fffffffffede;
                        kfree(pcVar9 + -0x68);
                        break;
                    }
                    pcVar9 = *pcVar9;
                } while (pcVar9 != obj.connected_buffer_list);
            }
            mutex_unlock(obj.list_lock);
            if (_obj.connected_buffer_list != obj.connected_buffer_list) {
                iVar8 = 0;
                pcVar9 = _obj.connected_buffer_list;
                do {
                    pcVar9 = *pcVar9;
                    iVar8 = iVar8 + 1;
                } while (pcVar9 != obj.connected_buffer_list);
                if (0x18 < iVar8) {
                    if (iVar3 != 0) {
                        _segment.ehdr = 0;
                    }
                    mutex_lock(obj.list_lock);
                    pcVar9 = _obj.connected_buffer_list;
                    if (_obj.connected_buffer_list != obj.connected_buffer_list) {
                        do {
                            pcVar11 = *pcVar9;
                            uVar7 = __list_del_entry_valid(pcVar9);
                            if ((uVar7 & 1) != 0) {
                                iVar1 = *pcVar9;
                                piVar2 = *(pcVar9 + 8);
                                *(iVar1 + 8) = piVar2;
                                *piVar2 = iVar1;
                            }
                            *pcVar9 = -0x2152ffffffffff00;
                            *(pcVar9 + 8) = -0x2152fffffffffede;
                            kfree(pcVar9 + -0x68);
                            pcVar9 = pcVar11;
                        } while (pcVar11 != obj.connected_buffer_list);
                    }
                    mutex_unlock(obj.list_lock);
                    if (iVar3 != 0) {
                        _segment.ehdr = 1;
                    }
                    _printk(0x80009a3);
                }
            }
        }
        else {
            for (; pcVar9 != obj.connected_buffer_list; pcVar9 = *pcVar9) {
                if (*(pcVar9 + -8) == arg2) goto code_r0x08002184;
            }
            mutex_unlock(obj.list_lock);
            puVar6 = kmem_cache_alloc_trace(_proc_create,0xdc0,0x78);
            if (puVar6 == NULL) {
                return 0xfffffff4;
            }
            puVar6[0xe] = 0;
            puVar6[10] = 0;
            puVar6[0xb] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar10 = puVar6 + 0xd;
            *puVar10 = 0;
            *puVar6 = arg1;
            puVar6[0xc] = arg2;
            mutex_lock(obj.list_lock);
            puVar4 = *0x80002c8;
            uVar7 = __list_add_valid(puVar10,*0x80002c8,obj.connected_buffer_list);
            if ((uVar7 & 1) != 0) {
                *0x80002c8 = puVar10;
                puVar6[0xd] = obj.connected_buffer_list;
                puVar6[0xe] = puVar4;
                *puVar4 = puVar10;
            }
code_r0x08002184:
            mutex_unlock(obj.list_lock);
        }
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.perfmgr_notify_qudeq_cb @ 0x080022ec (size 260) =====

ulong sym.perfmgr_notify_qudeq_cb(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg1_00;
    uint *puVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.list_lock);
    pcVar3 = _obj.connected_buffer_list;
    while( true ) {
        if (pcVar3 == obj.connected_buffer_list) {
            arg1_00 = mutex_unlock(obj.list_lock);
            iVar1 = sym.perfmgr_is_enable(arg1_00);
            if ((iVar1 != 0) && (puVar2 = kmem_cache_alloc_trace(_proc_create,0xa20,0x48), puVar2 != NULL)) {
                if (_segment.ehdr == 0) {
                    kfree();
                }
                else {
                    *(puVar2 + 4) = arg2;
                    *puVar2 = 2;
                    puVar2[1] = arg1;
                    puVar2[2] = 1;
                    *(puVar2 + 6) = 0xfffffffe0;
                    *(puVar2 + 8) = puVar2 + 8;
                    *(puVar2 + 10) = puVar2 + 8;
                    *(puVar2 + 0xc) = sym.perfmgr_notifer_wq_cb.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt;
                    queue_work_on(0x20);
                }
            }
            return 0;
        }
        if (*(pcVar3 + -8) == arg2) break;
        pcVar3 = *pcVar3;
    }
    sym.perfmgr_do_policy(pcVar3 + -0x68);
    mutex_unlock(obj.list_lock);
    return 0;
}


// ===== sym.perfmgr_notify_connect @ 0x080023f0 (size 172) =====

void sym.perfmgr_notify_connect(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.perfmgr_is_enable(arg1);
    if ((iVar1 != 0) && (puVar2 = kmem_cache_alloc_trace(_proc_create,0xa20,0x48), puVar2 != NULL)) {
        if (_segment.ehdr == 0) {
            kfree();
        }
        else {
            *(puVar2 + 4) = arg2;
            *puVar2 = 2;
            puVar2[1] = arg1;
            puVar2[2] = arg3;
            *(puVar2 + 6) = 0xfffffffe0;
            *(puVar2 + 8) = puVar2 + 8;
            *(puVar2 + 10) = puVar2 + 8;
            *(puVar2 + 0xc) = sym.perfmgr_notifer_wq_cb.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt;
            queue_work_on(0x20);
        }
    }
    return;
}


// ===== sym.perfmgr_notifer_wq_cb @ 0x0800249c (size 104) =====

void sym.perfmgr_notifer_wq_cb(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int *piVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + -0x18;
    if (piVar1 != NULL) {
        if (*piVar1 == 2) {
            noname_1 = sym.perfmgr_notify_connect_cb(*(arg1 + -0x14),*(arg1 + -8),*(arg1 + -0x10));
        }
        else if (*piVar1 == 1) {
            noname_1 = sym.perfmgr_notify_qudeq_cb(*(arg1 + -0x14),*(arg1 + -8));
        }
        kfree(noname_1,piVar1);
    }
    return;
}


// ===== sym.perfmgr_notify_qudeq @ 0x08002504 (size 156) =====

void sym.perfmgr_notify_qudeq(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.perfmgr_is_enable(arg1);
    if ((iVar1 != 0) && (puVar2 = kmem_cache_alloc_trace(_proc_create,0xa20,0x78), puVar2 != NULL)) {
        if (_segment.ehdr == 0) {
            kfree();
        }
        else {
            *(puVar2 + 4) = arg2;
            *puVar2 = 1;
            puVar2[1] = arg1;
            *(puVar2 + 6) = 0xfffffffe0;
            *(puVar2 + 8) = puVar2 + 8;
            *(puVar2 + 10) = puVar2 + 8;
            *(puVar2 + 0xc) = sym.perfmgr_notifer_wq_cb.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt;
            queue_work_on(0x20);
        }
    }
    return;
}


// ===== sym.init_perfmgr @ 0x080025a0 (size 284) =====

ulong sym.init_perfmgr(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = platform_device_register(obj.perfmgr_notify_connect_fp);
    if ((uVar1 == 0) &&
       (uVar1 = __platform_driver_register
                          (reloc.perfmgr_probe.cf4b5b363d1dbdf43cc396aa37f8bf68.cfi_jt,obj.__this_module), uVar1 == 0)
       ) {
        _segment.ehdr = alloc_workqueue(0x80009c1,0xa001a,1,"perfmgr_notifier_wq");
        if (_segment.ehdr == NULL) {
            uVar1 = 0xfffffff2;
            _segment.ehdr = NULL;
        }
        else {
            __mutex_init(obj.notify_lock,"&notify_lock",obj.init_perfmgr.__key);
            __mutex_init(obj.list_lock,"&list_lock",obj.init_perfmgr.__key);
            _obj.connected_buffer_list = obj.connected_buffer_list;
            *0x80002c8 = obj.connected_buffer_list;
            _segment.ehdr = sym.__typeid__ZTSFviyiE_global_addr;
            uVar1 = proc_mkdir("perfmgr",0);
            proc_create("perf_ioctl",0x1b4,uVar1,obj.Fops.llvm.15109857883525283874);
            sym.perfmgr_policy_init();
            sym.perfmgr_remap_init();
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.init_module @ 0x080026bc (size 40) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.init_perfmgr();
    return 0;
}


// ===== sym.perfmgr_probe @ 0x080026e4 (size 16) =====

ulong sym.perfmgr_probe(int64_t arg1)

{
    return 0;
}


// ===== sym.perfmgr_remove @ 0x080026f4 (size 16) =====

ulong sym.perfmgr_remove(int64_t arg1)

{
    return 0;
}


// ===== sym.perfmgr_suspend @ 0x08002704 (size 16) =====

ulong sym.perfmgr_suspend(int64_t arg1)

{
    return 0;
}


// ===== sym.perfmgr_resume @ 0x08002714 (size 16) =====

ulong sym.perfmgr_resume(int64_t arg1)

{
    return 0;
}


// ===== sym.maxfreq_release_timeout @ 0x08002724 (size 76) =====

void sym.maxfreq_release_timeout(void)

{
    ulong uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _segment.ehdr;
    uVar2 = __msecs_to_jiffies();
    queue_delayed_work_on(0x20,uVar1,obj.maxfreq_release_work,uVar2);
    return;
}


// ===== sym.perfmgr_do_policy @ 0x08002770 (size 1360) =====

//WARNING: Removing unreachable block (ram,0x080029c0)
//WARNING: Removing unreachable block (ram,0x080029d4)
//WARNING: Removing unreachable block (ram,0x080029e4)
//WARNING: Removing unreachable block (ram,0x080029e8)
//WARNING: Removing unreachable block (ram,0x08002b44)
//WARNING: Removing unreachable block (ram,0x08002b54)
//WARNING: Removing unreachable block (ram,0x08002c0c)

void sym.perfmgr_do_policy(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    uint64_t arg2;
    uint64_t arg3;
    uint32_t uVar6;
    int64_t iVar7;
    int iVar8;
    int64_t iVar9;
    int iVar10;
    int64_t iVar11;
    int iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    cancel_delayed_work(obj.maxfreq_release_work);
    iVar5 = ktime_get();
    iVar7 = *(arg1 + 8);
    *(arg1 + 8) = iVar5;
    iVar7 = (iVar5 - iVar7) / 1000;
    queue_delayed_work_on(0x20,_segment.ehdr,obj.maxfreq_release_work,0x14);
    iVar8 = *(arg1 + 0x40);
    if (iVar8 == 0) {
        uVar6 = *(arg1 + 0x50);
        if (uVar6 < 5) {
            if (uVar6 < 5) {
                *(arg1 + uVar6 * 8 + 0x18) = iVar7;
                *(arg1 + 0x50) = *(arg1 + 0x50) + 1;
                return;
            }
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8002cc0);
            (*pcVar4)();
        }
    }
    iVar1 = *(arg1 + 0x20);
    iVar2 = *(arg1 + 0x30);
    iVar3 = *(arg1 + 0x38);
    *(arg1 + 0x38) = iVar7;
    iVar12 = _segment.ehdr;
    *(arg1 + 0x18) = iVar1;
    *(arg1 + 0x20) = *(arg1 + 0x28);
    iVar1 = *(arg1 + 0x28) + iVar1;
    *(arg1 + 0x28) = iVar2;
    *(arg1 + 0x30) = iVar3;
    if (iVar12 == -1) {
        if (iVar8 == 0) {
            iVar11 = (iVar1 + iVar7 + iVar2 + iVar3 + *(arg1 + 0x58)) * 6;
code_r0x08002af8:
            *(arg1 + 0x50) = 0;
            iVar10 = iVar11;
            *(arg1 + 0x58) = 0;
            if (iVar10 * 0x78 + 0xfe8287c0U < 13000000) {
                iVar12 = 0x78;
                if (_segment.ehdr != 0) {
                    iVar12 = 0x79;
                }
            }
            else {
                iVar12 = 0x5a;
                if ((iVar10 * 0x5a + 0xfe54c100U < 14000000) || (iVar12 = 0x3c, iVar10 * 0x3c + 0xfe54c100U < 0xa7d8c1)
                   ) {
                    if (_segment.ehdr != 0) {
                        iVar12 = iVar12 + 1;
                    }
                }
                else {
                    iVar12 = 0x2d;
                    if ((13000000 < iVar10 * 0x2d + 0xfe457ec0U) &&
                       (iVar12 = 0x1e, 8000000 < iVar10 * 0x1e + 0xfe54c100U)) goto code_r0x0800284c;
                }
            }
            goto code_r0x08002844;
        }
        iVar12 = *(arg1 + 0x50) + 1;
        *(arg1 + 0x50) = iVar12;
        iVar11 = *(arg1 + 0x58) + iVar7;
        *(arg1 + 0x58) = iVar11;
        if (iVar12 == 0x1e) goto code_r0x08002af8;
    }
    else {
code_r0x08002844:
        iVar8 = iVar12;
        *(arg1 + 0x40) = iVar8;
    }
code_r0x0800284c:
    iVar13 = iVar8;
    iVar9 = iVar7 * iVar13;
    iVar11 = _segment.ehdr * 1000 + 1000000;
    if (iVar9 - iVar11 == 0 || iVar9 < iVar11) {
        iVar7 = (iVar7 + (iVar1 + iVar2 + iVar3)) * iVar13;
        if (iVar7 < _segment.ehdr * -1000 + 5000000) {
            iVar8 = *(arg1 + 0x4c) + 1;
            iVar12 = *(arg1 + 0x44) + 1;
            iVar10 = _segment.ehdr;
            if (obj.jank_happened == 0x0) {
                iVar10 = 0;
            }
            iVar10 = iVar10 + _segment.ehdr;
            *(arg1 + 0x44) = iVar12;
            *(arg1 + 0x48) = iVar10;
            *(arg1 + 0x4c) = iVar8;
            if (iVar12 < iVar10) {
                if (_segment.ehdr == 0) {
                    return;
                }
                if (iVar8 <= _segment.ehdr) {
                    return;
                }
            }
            iVar13 = (iVar5 - _segment.ehdr) * iVar13;
            if (iVar13 - _segment.ehdr * 1000000 == 0 || iVar13 < _segment.ehdr * 1000000) {
                return;
            }
            obj.jank_happened = 0x0;
            *(arg1 + 0x44) = 0;
            *(arg1 + 0x4c) = 0;
            sym.perfmgr_set_freq(arg1,0,0xffffffff);
            _segment.ehdr = iVar5;
            return;
        }
        iVar5 = _segment.ehdr * 1000 + 5000000;
        *(arg1 + 0x4c) = *(arg1 + 0x4c) + 1;
        if (iVar7 - iVar5 == 0 || iVar7 < iVar5) {
            return;
        }
        if (_segment.ehdr == 0) {
            arg3 = 1;
            arg2 = 0;
            goto code_r0x08002ca0;
        }
        if ((_segment.ehdr != 1) || (iVar7 < 0x6acfc1)) {
            iVar5 = _segment.ehdr * 3000 + 5000000;
            if (iVar7 - iVar5 == 0 || iVar7 < iVar5) {
                iVar5 = _segment.ehdr * 2000 + 5000000;
                uVar6 = 1;
                if (iVar7 - iVar5 != 0 && iVar5 <= iVar7) {
                    uVar6 = 2;
                }
                arg3 = uVar6;
            }
            else {
                arg3 = 3;
            }
            arg2 = _segment.ehdr & 0xffffffff;
            goto code_r0x08002ca0;
        }
    }
    else {
        *(arg1 + 0x44) = 0;
        obj.jank_happened = 0x1;
        iVar8 = _segment.ehdr;
        *(arg1 + 0x4c) = 0;
        if (_segment.ehdr == 0) {
            if ((iVar8 != 1) || (iVar9 < 1)) {
                arg3 = 1;
                arg2 = _segment.ehdr & 0xffffffff;
                goto code_r0x08002ca0;
            }
        }
        else if ((iVar8 != 1) || (iVar9 - _segment.ehdr * 2000000 == 0 || iVar9 < _segment.ehdr * 2000000)) {
            iVar7 = _segment.ehdr * 4000 + 1000000;
            if (iVar9 - iVar7 == 0 || iVar9 < iVar7) {
                iVar7 = _segment.ehdr * 2000 + 1000000;
                uVar6 = 1;
                if (iVar9 - iVar7 != 0 && iVar7 <= iVar9) {
                    uVar6 = 2;
                }
                arg3 = uVar6;
            }
            else {
                arg3 = 3;
            }
            arg2 = _segment.ehdr & 0xffffffff;
            goto code_r0x08002ca0;
        }
    }
    arg2 = 0;
    arg3 = 0;
code_r0x08002ca0:
    sym.perfmgr_set_freq(arg1,arg2,arg3);
    return;
}


// ===== sym.perfmgr_set_freq @ 0x08002cc0 (size 716) =====

void sym.perfmgr_set_freq(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong *in_x4;
    int iVar7;
    int64_t iVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong unaff_x24;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    uVar2 = _segment.ehdr - (arg3 + arg2);
    uVar5 = 0x23;
    if (obj.max_freq_limit_level_limit == 0x0) {
        uVar5 = 0;
    }
    if (uVar5 < _segment.ehdr) {
        _segment.ehdr = uVar5;
    }
    uVar1 = _segment.ehdr;
    *in_x4 = unaff_x24;
    uVar3 = _segment.ehdr;
    uVar5 = uVar1;
    if (uVar1 <= uVar2) {
        uVar5 = uVar2;
    }
    if (uVar5 <= uVar1) {
        uVar1 = uVar5;
    }
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    if (uVar6 < unaff_x24) {
        iVar8 = uVar1 * 4;
        do {
            uVar5 = uVar6;
            if (uVar5 - 3 < 4) {
                if (uVar3 <= uVar5) {
                    if (0x23 < uVar1) goto code_r0x08002e74;
                    pcVar4 = __per_cpu_offset + (uVar6 & 0xffffffff) * 8;
                    pcVar9 = obj.cpufreq_table4 + iVar8;
                    goto code_r0x08002dd4;
                }
            }
            else if (uVar5 < 3) {
                if (uVar3 <= uVar5) {
                    if (0x23 < uVar1) {
code_r0x08002e74:
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8002e78);
                        (*pcVar4)();
                    }
                    pcVar4 = __per_cpu_offset + (uVar6 & 0xffffffff) * 8;
                    pcVar9 = obj.cpufreq_table0 + iVar8;
code_r0x08002dd4:
                    *(*pcVar4 + 0x80047b4) = *pcVar9 + uVar3;
                }
            }
            else if ((uVar5 == 7) && (uVar3 < 8)) {
                pcVar4 = __per_cpu_offset;
                pcVar9 = obj.cpufreq_table7 + iVar8;
                if (0x23 < uVar1) goto code_r0x08002e74;
                goto code_r0x08002dd4;
            }
            uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
        } while (uVar6 < unaff_x24);
    }
    sym.update_policy_online();
    if (arg3 < 0) {
        _segment.ehdr = uVar1;
        return;
    }
    if (uVar1 == 0) {
        _segment.ehdr = uVar1;
        return;
    }
    uVar5 = *(arg1 + 0x40) - 0x1e;
    if (uVar5 < 0x20) {
    //switch table (31 cases) at 0x8000c6f
        switch(*(uVar5 + 0x8000c6f) * 4 + 0x8002ed4) {
        case 0x8002ed8:
            goto code_r0x08002ed8;
        case 0x8002efc:
            iVar7 = 0x8235;
            break;
        case 0x8002f08:
            iVar7 = 0x56ce;
            break;
        case 0x8002f14:
            iVar7 = 0x411a;
            break;
        case 0x8002f20:
            iVar7 = 0x4009;
        }
        goto code_r0x08002f40;
    }
    uVar5 = *(arg1 + 0x40) - 0x5a;
    if (uVar5 < 0x20) {
        iVar7 = 0x2048;
    //switch table (31 cases) at 0x8000c8f
        switch(*(uVar5 + 0x8000c8f) * 4 + 0x8002ed4) {
        case 0x8002ed8:
            goto code_r0x08002ed8;
        case 0x8002f2c:
            iVar7 = 0x2aed;
            break;
        case 0x8002f38:
            iVar7 = 0x208d;
        }
    }
    else {
code_r0x08002ed8:
        iVar7 = 0x2b67;
    }
code_r0x08002f40:
    _segment.ehdr = uVar1;
    *(arg1 + 0x38) = (uVar1 * iVar7 >> (uVar1 & 0x1f)) + iVar7;
    return;
}


// ===== sym.perfmgr_policy_init @ 0x08002f8c (size 508) =====

int sym.perfmgr_policy_init(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    uint32_t extraout_w8;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.max_freq_limit_level_limit = 0x1;
    _printk(0x8000959,"perfmgr_policy_init",0x23);
    _segment.ehdr = alloc_workqueue("cpufreq_wq",0x10,0);
    if (_segment.ehdr == 0) {
        iVar3 = -0xe;
    }
    else {
        _obj.maxfreq_release_work = 0xfffffffe0;
        puVar5 = NULL;
        *0x8000320 = 0x8000320;
        *0x8000328 = 0x8000320;
        *0x8000330 = sym.do_maxfreq_release_work.6b4feefd42840a24f0640c08ab2173d0.cfi_jt;
        init_timer_key(0x8000348,sym.delayed_work_timer_fn.cfi_jt,0x200000,0);
        uVar6 = 0xffffffff;
        do {
            uVar2 = cpumask_next(uVar6,__cpu_possible_mask);
            *puVar5 = extraout_w8;
            if (extraout_w8 <= uVar2) {
                _segment.ehdr = kobject_create_and_add("perfmgr_policy",___cfi_slowpath_diag);
                return 0;
            }
            uVar6 = uVar2;
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8003188);
                (*pcVar1)();
            }
            *(obj.sync_info + *(__per_cpu_offset + uVar6 * 8)) = uVar2;
            iVar7 = *(__per_cpu_offset + uVar6 * 8);
            iVar4 = cpufreq_cpu_get(uVar6);
            if (iVar4 == 0) {
code_r0x08003164:
                _printk(0x8000b29,"perfmgr_policy_init",uVar6);
                return -3;
            }
            iVar3 = freq_qos_add_request(iVar4 + 0xa0,obj.qos_max_req + iVar7,2,*(iVar4 + 0x38));
            if (iVar3 < 0) break;
            iVar7 = *(__per_cpu_offset + uVar6 * 8);
            iVar4 = cpufreq_cpu_get(uVar2);
            if (iVar4 == 0) goto code_r0x08003164;
            iVar3 = freq_qos_add_request(iVar4 + 0xa0,obj.qos_min_req + iVar7,1,*(iVar4 + 0x34));
        } while (-1 < iVar3);
        _printk(0x8000a96,"perfmgr_policy_init",iVar3);
    }
    return iVar3;
}


// ===== sym.do_maxfreq_release_work @ 0x08003188 (size 284) =====

void sym.do_maxfreq_release_work(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    bool bVar4;
    uint64_t uVar5;
    uint32_t *in_x4;
    uint uVar6;
    ulong *in_x18;
    uint32_t unaff_w20;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _segment.ehdr;
    *in_x4 = unaff_w20;
    uVar2 = _segment.ehdr;
    uVar7 = _segment.ehdr;
    bVar4 = _segment.ehdr == 0;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    if (uVar5 < unaff_w20) {
        do {
            if (uVar2 <= uVar5) {
                if (0x1f < uVar5) {
code_r0x080032a0:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x80032a4);
                    (*pcVar3)();
                }
                if (uVar1 == 0 || bVar4) {
                    uVar6 = 0;
                    _segment.ehdr = 0;
                }
                else {
                    if (0x23 < uVar2) goto code_r0x080032a0;
                    uVar6 = *(obj.cpufreq_table4 + uVar7 * 4);
                    _segment.ehdr = uVar2;
                }
                *(*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8) + 0x80047b4) = uVar6;
            }
            uVar5 = cpumask_next(uVar5,__cpu_possible_mask);
        } while (uVar5 < unaff_w20);
    }
    sym.update_policy_online();
    return;
}


// ===== sym.update_policy_online @ 0x080032a4 (size 484) =====

//WARNING: Control flow encountered bad instruction data

void sym.update_policy_online(void)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t arg1;
    uint32_t *in_x4;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    cpus_read_lock();
    uStack_70 = ___ubsan_handle_cfi_check_fail_abort;
    uVar3 = cpumask_next(0xffffffff,&uStack_70);
    *in_x4 = extraout_w8;
    if (uVar3 < extraout_w8) {
        do {
            iVar5 = cpufreq_cpu_get(uVar3);
            if (iVar5 == 0) {
                _printk(0x8000b29,"update_policy_online",uVar3);
                goto code_r0x08003428;
            }
            uVar9 = *(iVar5 + 0x1c);
            uStack_70 = uStack_70 & (*(iVar5 + 8) ^ 0xffffffff);
            if (0x1f < *(iVar5 + 0x1c)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8003484);
                (*pcVar2)();
            }
            iVar6 = *(__per_cpu_offset + uVar9 * 8);
            uVar8 = *(iVar6 + 0x80047b4);
            arg1 = uVar8;
            uVar1 = *(iVar5 + 0x28);
            if ((uVar8 == 0) || (uVar1 = uVar8, uVar8 == *(iVar5 + 0x28))) {
                uVar8 = uVar1;
                arg1 = 0;
            }
            sym.perfmgr_boost_ddrfreq_and_timeout(arg1);
            uVar7 = *(iVar5 + 0x2c);
            uVar1 = *(iVar5 + 0x28);
            if (uVar8 <= *(iVar5 + 0x28)) {
                uVar1 = uVar8;
            }
            if ((_segment.ehdr != 0) && (obj.jank_happened == 0x1)) {
                uVar7 = *(iVar6 + 0x80047b8);
            }
            iVar4 = freq_qos_update_request(obj.qos_max_req + *(__per_cpu_offset + uVar9 * 8),uVar1);
            if (iVar4 < 0) {
                _printk(0x80009e5,uVar1);
            }
            iVar4 = freq_qos_update_request(obj.qos_min_req + *(__per_cpu_offset + uVar9 * 8),uVar7);
            if (iVar4 < 0) {
                _printk(0x80009e5,uVar7);
            }
            uVar3 = cpumask_next(uVar3,&uStack_70);
            *in_x4 = extraout_w8_00;
        } while (uVar3 < extraout_w8_00);
    }
    cpus_read_unlock();
code_r0x08003428:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return;
}

