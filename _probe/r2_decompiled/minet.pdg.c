// decompiled from minet by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 416) =====

//WARNING: Switch with 1 destination removed at 0x08002938

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x4d7e2f04b135d45c) {
            if (arg1 == -0x73fe26196dddb6ca) {
                if ((pcVar1 + -0x80011c8 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080028f8;
            }
            if (arg1 != -0x550b9e52359ac614) goto code_r0x080028f8;
            pcVar2 = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
        }
        else {
            if (arg1 == -0x4d7e2f04b135d45c) {
                if ((pcVar1 + -0x80011e8 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x080028f8;
            }
            if (arg1 != -0x2ee0710dce68437c) goto code_r0x080028f8;
            pcVar2 = sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x641d19c7be126e92) goto code_r0x080028f8;
            pcVar2 = sym.minet_thread.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt;
        }
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080028f8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080028f8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800294c);
    (*pcVar1)();
}


// ===== sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt @ 0x080011a8 (size 8) =====

void sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt(int64_t param_1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    char *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t iStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
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
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    uint64_t uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    if (*(param_1 + 0xa2) == '\0') goto code_r0x080039b4;
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
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    iStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    iVar3 = snprintf(&uStack_88,0x40,"INTERFACE=%s",0x800048c);
    if (0x3f < iVar3) {
        uStack_88 = uStack_88 & 0xffffffffffffff00;
        _printk(0x8000519,iVar3);
    }
    ktime_get_with_offset(1);
    auVar8 = ns_to_timespec64();
    _raw_spin_lock_bh(obj.timestamp_lock);
    *(param_1 + 0xa1) = 0;
    iVar5 = *(param_1 + 0x98);
    iVar6 = *(param_1 + 0x50);
    if (iVar5 < auVar8._0_8_ - *(param_1 + 0x60)) {
        if (iVar6 == 0) {
            iStack_188 = 0;
            uStack_180 = 0;
            set_normalized_timespec64(&iStack_188,*(param_1 + 0x60) + iVar5,*(param_1 + 0x68));
            iVar5 = iStack_188;
            uVar7 = uStack_180;
        }
        else {
code_r0x08003880:
            iStack_188 = 0;
            uStack_180 = 0;
            set_normalized_timespec64(&iStack_188,iVar6 + iVar5,*(param_1 + 0x58));
            uVar7 = uStack_180;
            iVar5 = iStack_188;
            *(param_1 + 0x50) = 0;
            *(param_1 + 0xa1) = 1;
            queue_work_on(0x20,__raw_spin_unlock_bh,param_1);
        }
        auVar8._8_8_ = uVar7;
        auVar8._0_8_ = iVar5;
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar2 = false;
        pcVar4 = "inactive";
    }
    else {
        if (iVar6 != 0) goto code_r0x08003880;
        cVar1 = *(param_1 + 0xa3);
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar2 = cVar1 != '\0';
        pcVar4 = "active";
        if (!bVar2) {
            pcVar4 = "inactive";
        }
    }
    iVar5 = auVar8._0_8_;
    iVar3 = snprintf(&uStack_c8,0x40,"STATE=%s",pcVar4);
    if (0x3f < iVar3) {
        _printk(0x800060e,iVar3);
    }
    if ((bVar2) && (iVar3 = snprintf(&uStack_148,0x40,"UID=%u",*(param_1 + 0xa4)), 0x3f < iVar3)) {
        _printk(0x8000632,iVar3);
    }
    if (iVar5 < 0x225c17d04) {
        if (iVar5 < -0x225c17d03) {
            iVar5 = -0x8000000000000000;
        }
        else {
            iVar5 = auVar8._8_8_ + iVar5 * 1000000000;
        }
    }
    else {
        iVar5 = 0x7fffffffffffffff;
    }
    iVar3 = snprintf(&uStack_108,0x40,"TIME_NS=%llu",iVar5);
    if (0x3f < iVar3) {
        _printk(0x80008b5,iVar3);
    }
    uStack_178 = *(param_1 + 0x30);
    uStack_170 = *(param_1 + 0x38);
    uStack_168 = *(param_1 + 0x40);
    uStack_160 = CONCAT44(CONCAT31(uStack_160._5_3_,bVar2),*(param_1 + 0x48));
    uStack_150 = CONCAT44(uStack_150._4_4_,*(param_1 + 0xa4));
    iStack_158 = iVar5;
    sym.minet_nl_msg(&uStack_178,0x30,0,4);
code_r0x080039b4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.idletimer_tg_expired;
        _raw_spin_lock_bh(obj.timestamp_lock);
        *(iVar5 + 0xdb) = 0;
        *(iVar5 + 0xd9) = 1;
        queue_work_on(0x20,__raw_spin_unlock_bh,iVar5 + 0x38);
        _raw_spin_unlock_bh(obj.timestamp_lock);
        return;
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    nf_unregister_net_hooks(init_net,obj.minet_hooks,4);
    arg1 = 0;
    if (*(_segment.ehdr + 8) != 0) {
        arg1 = kthread_stop();
        *(_segment.ehdr + 8) = 0;
    }
    sym.clear_app(arg1);
    sym.clear_tc_app.llvm.6928247255886231775();
    sym.mi_idletimer_tg_destroy_v1(_segment.ehdr);
    if (_segment.ehdr != 0) {
        kfree();
        _segment.ehdr = 0;
    }
    sym.minet_nl_finit();
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x310);
    if (iVar2 == 0) {
        _segment.ehdr = iVar2;
        return 0xffffffff;
    }
    _segment.ehdr = iVar2;
    memset(iVar2,0,0x310);
    iVar5 = 0;
    *(iVar2 + 0x18) = iVar2 + 0x18;
    *(iVar2 + 0x20) = iVar2 + 0x18;
    *(iVar2 + 0x2c) = 0;
    *(iVar2 + 0x30) = iVar2 + 0x30;
    *(iVar2 + 0x38) = iVar2 + 0x30;
    do {
        iVar2 = _segment.ehdr + iVar5;
        iVar5 = iVar5 + 0x18;
        *(iVar2 + 0x44) = 0;
        *(iVar2 + 0x48) = iVar2 + 0x48;
        *(iVar2 + 0x50) = iVar2 + 0x48;
    } while (iVar5 != 0x2d0);
    iVar1 = sym.minet_tc_limiter_init();
    if (iVar1 == 0) {
        iVar1 = nf_register_net_hooks(init_net,obj.minet_hooks,4);
        if (iVar1 == 0) {
            uVar3 = kthread_create_on_node
                              (sym.minet_thread.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt,_segment.ehdr,0xffffffff,
                               "minet_thread");
            if (uVar3 < 0xfffffffffffff001) {
                wake_up_process(uVar3);
                *(_segment.ehdr + 8) = uVar3;
                if (uVar3 != 0) {
                    uVar4 = sym.minet_nl_init();
                    if (uVar4 == 0) {
                        return uVar4;
                    }
                    goto code_r0x080046e8;
                }
            }
            else {
                *(_segment.ehdr + 8) = uVar3;
            }
            _printk(0x80004d0,"minet_init_module");
        }
        else {
            _printk(0x800086f,"minet_init_module",iVar1);
        }
    }
code_r0x080046e8:
    if (_segment.ehdr != 0) {
        kfree();
    }
    _segment.ehdr = 0;
    return 0xffffffff;
}


// ===== sym.minet_thread.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt @ 0x080011c0 (size 8) =====

ulong sym.minet_thread.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt(void)

{
    uint64_t uVar1;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = kthread_should_stop();
    while ((uVar1 & 1) == 0) {
        schedule_timeout_interruptible(0x4e2);
        arg1 = sym.merge_app_flow();
        sym.minet_notify_app_flow(arg1);
        uVar1 = kthread_should_stop();
    }
    return 0;
}


// ===== sym.hook6.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.hook6.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt(ulong param_1,int64_t param_2,char *param_3)

{
    int64_t iVar1;
    int64_t *piVar2;
    char cVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong *in_x18;
    uint32_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_2 + 0xd0) + *(param_2 + 0xb4);
    if (iVar4 == 0) {
        return 1;
    }
    cVar3 = *(iVar4 + 6);
    if (cVar3 != '\x11' && cVar3 != '\x06') {
        return 1;
    }
    iVar4 = *(param_2 + 0x18);
    if ((iVar4 == 0) ||
       ((((*(iVar4 + 0x12) == '\f' && (iVar4 = *(iVar4 + 0x60), iVar4 == 0)) ||
         ((1 << (*(iVar4 + 0x12) & 0x1f) & 0xffffefbfU) == 0)) || (1 < *(iVar4 + 0x22a) - 1)))) {
        uVar5 = *(param_2 + 0x68);
        if ((uVar5 & 0xfffffffffffffff8) == 0) {
            return 1;
        }
        if (((uVar5 & 7) != 3) && ((uVar5 & 7) != 0)) {
            return 1;
        }
        uVar7 = *((uVar5 & 0xfffffffffffffff8) + 0x100);
        if (uVar7 == 0xffffffff) {
            return 1;
        }
    }
    else {
        uVar7 = *(iVar4 + 600);
    }
    cVar3 = *param_3;
    if (cVar3 == '\x03') {
        uVar5 = *(param_2 + 0x68) & 0xfffffffffffffff8;
        if ((uVar5 == 0) || ((*(param_2 + 0x68) & 7) != 2)) goto code_r0x080024a0;
        *(uVar5 + 0x100) = uVar7;
        cVar3 = *param_3;
    }
    if (cVar3 == '\x01') {
        sym.tl_after_filter_in(param_2,uVar7);
    }
code_r0x080024a0:
    iVar4 = sp_el0;
    *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
    iVar1 = tpidr_el1;
    if (*(cpu_number + iVar1) < 0x20) {
        iVar8 = _segment.ehdr + *(cpu_number + iVar1) * 0x18;
        iVar1 = iVar8 + 0x14;
        _raw_spin_lock_bh(iVar1);
        piVar2 = iVar8 + 0x18;
        piVar6 = piVar2;
        do {
            piVar6 = *piVar6;
            if (piVar6 == piVar2) goto code_r0x0800251c;
        } while (*(piVar6 + -0x1c) != uVar7);
        if (piVar6 + -4 != NULL) {
            sym.app_flow_stat(piVar6 + -4,param_2,param_3);
        }
code_r0x0800251c:
        _raw_spin_unlock_bh(iVar1);
    }
    iVar1 = *(iVar4 + 0x10) + -1;
    *(iVar4 + 0x10) = iVar1;
    if ((iVar1 == 0) || (*(iVar4 + 0x10) == 0)) {
        preempt_schedule();
    }
    return 1;
}


// ===== sym.hook4.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt @ 0x080011d0 (size 8) =====

ulong sym.hook4.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt(ulong param_1,int64_t param_2,char *param_3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_2 + 0xd0) + *(param_2 + 0xb4);
    if (iVar2 == 0) {
        return 1;
    }
    if (*(iVar2 + 9) != '\x11' && *(iVar2 + 9) != '\x06') {
        return 1;
    }
    iVar5 = *(param_2 + 0x18);
    if ((iVar5 == 0) ||
       ((((*(iVar5 + 0x12) == '\f' && (iVar5 = *(iVar5 + 0x60), iVar5 == 0)) ||
         ((1 << (*(iVar5 + 0x12) & 0x1f) & 0xffffefbfU) == 0)) || (1 < *(iVar5 + 0x22a) - 1)))) {
        uVar7 = *(param_2 + 0x68);
        if ((uVar7 & 0xfffffffffffffff8) == 0) {
            return 1;
        }
        if (((uVar7 & 7) != 3) && ((uVar7 & 7) != 0)) {
            return 1;
        }
        uVar8 = *((uVar7 & 0xfffffffffffffff8) + 0x100);
        if (uVar8 == 0xffffffff) {
            return 1;
        }
    }
    else {
        uVar8 = *(iVar5 + 600);
    }
    cVar4 = *param_3;
    if (cVar4 == '\x03') {
        uVar7 = *(param_2 + 0x68) & 0xfffffffffffffff8;
        if ((uVar7 != 0) && ((*(param_2 + 0x68) & 7) == 2)) {
            *(uVar7 + 0x100) = uVar8;
            cVar4 = *param_3;
            if (cVar4 != '\x03') goto code_r0x08002248;
        }
        uVar3 = *(iVar2 + 0x10);
        if ((uVar3 & 0xf0ff) == 0x10ac) {
            return 1;
        }
        if ((uVar3 & 0xff) == 10) {
            return 1;
        }
        if (uVar3 == 0xffffffff) {
            return 1;
        }
        if ((uVar3 & 0xffffff) == 0xe0) {
            return 1;
        }
        if ((uVar3 & 0xff) == 0x7f) {
            return 1;
        }
        if ((uVar3 & 0xf0) == 0xe0) {
            return 1;
        }
        if ((uVar3 & 0xffff) == 0xa8c0) {
            return 1;
        }
        if ((uVar3 & 0xffff) == 0xfea9) {
            return 1;
        }
    }
    else {
code_r0x08002248:
        if (cVar4 == '\x01') {
            uVar3 = *(iVar2 + 0xc);
            if ((uVar3 & 0xf0ff) == 0x10ac) {
                return 1;
            }
            if ((uVar3 & 0xff) == 10) {
                return 1;
            }
            if (uVar3 == 0xffffffff) {
                return 1;
            }
            if ((uVar3 & 0xffffff) == 0xe0) {
                return 1;
            }
            if ((uVar3 & 0xff) == 0x7f) {
                return 1;
            }
            if ((uVar3 & 0xf0) == 0xe0) {
                return 1;
            }
            if ((uVar3 & 0xffff) == 0xa8c0) {
                return 1;
            }
            if ((uVar3 & 0xffff) == 0xfea9) {
                return 1;
            }
            sym.tl_after_filter_in(param_2,uVar8);
        }
    }
    iVar2 = sp_el0;
    *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
    iVar5 = tpidr_el1;
    if (*(cpu_number + iVar5) < 0x20) {
        iVar9 = _segment.ehdr + *(cpu_number + iVar5) * 0x18;
        iVar5 = iVar9 + 0x14;
        _raw_spin_lock_bh(iVar5);
        piVar1 = iVar9 + 0x18;
        piVar6 = piVar1;
        do {
            piVar6 = *piVar6;
            if (piVar6 == piVar1) goto code_r0x08002340;
        } while (*(piVar6 + -0x1c) != uVar8);
        if (piVar6 + -4 != NULL) {
            sym.app_flow_stat(piVar6 + -4,param_2,param_3);
        }
code_r0x08002340:
        _raw_spin_unlock_bh(iVar5);
    }
    iVar5 = *(iVar2 + 0x10) + -1;
    *(iVar2 + 0x10) = iVar5;
    if ((iVar5 == 0) || (*(iVar2 + 0x10) == 0)) {
        preempt_schedule();
    }
    return 1;
}


// ===== sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt @ 0x080011d8 (size 8) =====

int64_t sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt(int64_t param_1,int64_t param_2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
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
    uint64_t uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = _android_kmalloc_64_create;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    if (param_1 != 0x148) {
        if (param_2 == 4) {
            if (*(param_1 + 0x28) != '\0') {
                *(param_1 + 0x28) = 0;
                _raw_spin_lock_bh(obj.timestamp_lock);
                if ((*(param_1 + 0x23) != '\0') && (iVar4 - *(param_1 + -0xa8) < 0)) {
                    ktime_get_with_offset(1);
                    auVar9 = ns_to_timespec64();
                    uStack_48 = 0;
                    uStack_40 = 0;
                    set_normalized_timespec64
                              (&uStack_48,auVar9._0_8_ - *(param_1 + -0x10),auVar9._8_8_ - *(param_1 + -8));
                    uStack_58 = uStack_48;
                    uStack_50 = uStack_40;
                    iVar6 = timespec64_to_jiffies(&uStack_58);
                    if (iVar6 + iVar4 < *(param_1 + -0xa8)) {
                        mod_timer_pending(param_1 + -0xb8,*(param_1 + -0xa8) - iVar6);
                    }
                    else {
                        del_timer(param_1 + -0xb8);
                        *(param_1 + -0xa8) = 0;
                        *(param_1 + 0x23) = 0;
                        *(param_1 + 0x21) = 1;
                        queue_work_on(0x20,__raw_spin_unlock_bh,param_1 + -0x80);
                    }
                }
                _raw_spin_unlock_bh(obj.timestamp_lock);
            }
        }
        else if (param_2 == 3) {
            ktime_get_with_offset(1);
            auVar9 = ns_to_timespec64();
            *(param_1 + 0x28) = 1;
            *(param_1 + -0x10) = auVar9;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.idletimer_tg_work;
    pcStack_98 = sym.idletimer_tg_work;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (*(iVar4 + 0xa2) == '\0') goto code_r0x080039b4;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    iStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    iVar3 = snprintf(&uStack_e8,0x40,"INTERFACE=%s",0x800048c);
    if (0x3f < iVar3) {
        uStack_e8 = uStack_e8 & 0xffffffffffffff00;
        _printk(0x8000519,iVar3);
    }
    ktime_get_with_offset(1);
    auVar9 = ns_to_timespec64();
    _raw_spin_lock_bh(obj.timestamp_lock);
    *(iVar4 + 0xa1) = 0;
    iVar6 = *(iVar4 + 0x98);
    iVar7 = *(iVar4 + 0x50);
    if (iVar6 < auVar9._0_8_ - *(iVar4 + 0x60)) {
        if (iVar7 == 0) {
            iStack_1e8 = 0;
            uStack_1e0 = 0;
            set_normalized_timespec64(&iStack_1e8,*(iVar4 + 0x60) + iVar6,*(iVar4 + 0x68));
            iVar6 = iStack_1e8;
            uVar8 = uStack_1e0;
        }
        else {
code_r0x08003880:
            iStack_1e8 = 0;
            uStack_1e0 = 0;
            set_normalized_timespec64(&iStack_1e8,iVar7 + iVar6,*(iVar4 + 0x58));
            uVar8 = uStack_1e0;
            iVar6 = iStack_1e8;
            *(iVar4 + 0x50) = 0;
            *(iVar4 + 0xa1) = 1;
            queue_work_on(0x20,__raw_spin_unlock_bh,iVar4);
        }
        auVar9._8_8_ = uVar8;
        auVar9._0_8_ = iVar6;
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar2 = false;
        pcVar5 = "inactive";
    }
    else {
        if (iVar7 != 0) goto code_r0x08003880;
        cVar1 = *(iVar4 + 0xa3);
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar2 = cVar1 != '\0';
        pcVar5 = "active";
        if (!bVar2) {
            pcVar5 = "inactive";
        }
    }
    iVar6 = auVar9._0_8_;
    iVar3 = snprintf(&uStack_128,0x40,"STATE=%s",pcVar5);
    if (0x3f < iVar3) {
        _printk(0x800060e,iVar3);
    }
    if ((bVar2) && (iVar3 = snprintf(&uStack_1a8,0x40,"UID=%u",*(iVar4 + 0xa4)), 0x3f < iVar3)) {
        _printk(0x8000632,iVar3);
    }
    if (iVar6 < 0x225c17d04) {
        if (iVar6 < -0x225c17d03) {
            iVar6 = -0x8000000000000000;
        }
        else {
            iVar6 = auVar9._8_8_ + iVar6 * 1000000000;
        }
    }
    else {
        iVar6 = 0x7fffffffffffffff;
    }
    iVar3 = snprintf(&uStack_168,0x40,"TIME_NS=%llu",iVar6);
    if (0x3f < iVar3) {
        _printk(0x80008b5,iVar3);
    }
    uStack_1d8 = *(iVar4 + 0x30);
    uStack_1d0 = *(iVar4 + 0x38);
    uStack_1c8 = *(iVar4 + 0x40);
    uStack_1c0 = CONCAT44(CONCAT31(uStack_1c0._5_3_,bVar2),*(iVar4 + 0x48));
    uStack_1b0 = CONCAT44(uStack_1b0._4_4_,*(iVar4 + 0xa4));
    iStack_1b8 = iVar6;
    iVar4 = sym.minet_nl_msg(&uStack_1d8,0x30,0,4);
code_r0x080039b4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_a8) {
        iVar6 = __stack_chk_fail();
        *extraout_x18_00 = sym.idletimer_tg_expired;
        _raw_spin_lock_bh(obj.timestamp_lock);
        *(iVar6 + 0xdb) = 0;
        *(iVar6 + 0xd9) = 1;
        queue_work_on(0x20,__raw_spin_unlock_bh,iVar6 + 0x38);
        iVar6 = _raw_spin_unlock_bh(obj.timestamp_lock);
        return iVar6;
    }
    return iVar4;
}


// ===== sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt @ 0x080011e0 (size 8) =====

void sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(obj.timestamp_lock);
    *(param_1 + 0xdb) = 0;
    *(param_1 + 0xd9) = 1;
    queue_work_on(0x20,__raw_spin_unlock_bh,param_1 + 0x38);
    _raw_spin_unlock_bh(obj.timestamp_lock);
    return;
}


// ===== sym.minet_nl_tc_list_set.88083d61cc22609357293105b954a33d.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.minet_nl_tc_list_set.88083d61cc22609357293105b954a33d.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *puVar9;
    code *pcVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar12 [16];
    ulong uStack_a0;
    uint16_t *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    ulong uStack_50;
    uint16_t *puStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    puStack_48 = NULL;
    uStack_40 = 0;
    uStack_50 = 0;
    uVar3 = __nla_parse(&uStack_50,4,*(param_1 + 0xd8) + 5,**(param_1 + 0xd8) + -0x14,obj.minet_hooks,0,
                        *(param_2 + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_48 != NULL)) {
        uVar3 = sym.minet_set_tc_list(puStack_48 + 2,*puStack_48 - 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = sym.minet_nl_tc_list_dump;
    pcStack_68 = sym.minet_nl_tc_list_dump;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar12._0_8_ + 0xd8);
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_98 = NULL;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    iStack_60 = param_2;
    uVar3 = __nla_parse(&uStack_a0,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar12._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_98 != NULL)) {
        uVar3 = sym.minet_dump_tc_list(*puStack_98,noname_1,auVar12._8_8_);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_00 = sym.mi_idletimer_tg_checkentry_v1;
    if (puVar4 == NULL) {
        _printk(0x8000911,"mi_idletimer_tg_checkentry_v1");
        return 0xffffffea;
    }
    if (*puVar4 == 0) {
        uVar3 = 0x800096a;
    }
    else if (*puVar4 < 0x20c49b) {
        puVar9 = puVar4 + 1;
        if ((*puVar9 != '\0') && (iVar5 = strnlen(puVar9,0x1c), iVar5 != 0x1c)) {
            if (puVar4[8] < 2) {
                mutex_lock(obj.list_mutex);
                pcVar10 = _obj.idletimer_tg_list;
                do {
                    if (pcVar10 == obj.idletimer_tg_list) {
                        puVar4[0x12] = 0;
                        puVar4[0x13] = 0;
code_r0x08002fc4:
                        puVar11 = puVar4 + 0x12;
                        pcVar10 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x178);
                        *puVar11 = pcVar10;
                        if (pcVar10 == NULL) {
                            mutex_unlock(obj.list_mutex);
                            return 0xfffffff4;
                        }
                        strncpy(pcVar10 + 0xf8,puVar9,0x1c);
                        pcVar1 = _obj.idletimer_tg_list;
                        uVar6 = __list_add_valid(pcVar10,obj.idletimer_tg_list,_obj.idletimer_tg_list);
                        if ((uVar6 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar10;
                            *pcVar10 = pcVar1;
                            *(pcVar10 + 8) = obj.idletimer_tg_list;
                            _obj.idletimer_tg_list = pcVar10;
                        }
                        *(*(puVar4 + 0x12) + 0x168) = 0;
                        *(*(puVar4 + 0x12) + 0x164) = 1;
                        *(*(puVar4 + 0x12) + 0x16a) = 1;
                        *(*(puVar4 + 0x12) + 0x16b) = 1;
                        *(*(puVar4 + 0x12) + 0x160) = *puVar4;
                        *(*(puVar4 + 0x12) + 0x118) = 0;
                        *(*(puVar4 + 0x12) + 0x120) = 0;
                        *(*(puVar4 + 0x12) + 0x169) = 0;
                        *(*(puVar4 + 0x12) + 0x16c) = 0;
                        iVar5 = *(puVar4 + 0x12);
                        ktime_get_with_offset(1);
                        auVar12 = ns_to_timespec64();
                        *(iVar5 + 0x128) = auVar12;
                        *(*(puVar4 + 0x12) + 0x148) = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        iVar2 = register_pm_notifier(*(puVar4 + 0x12) + 0x148);
                        if (iVar2 != 0) {
                            _printk(0x800080e,"idletimer_tg_create_v1",iVar2);
                        }
                        *(*puVar11 + 200) = 0xfffffffe0;
                        iVar5 = *puVar11;
                        *(iVar5 + 0xd0) = iVar5 + 0xd0;
                        *(iVar5 + 0xd8) = iVar5 + 0xd0;
                        *(*puVar11 + 0xe0) = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        init_timer_key(*puVar11 + 0x90,sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt
                                       ,0,0,0);
                        iVar8 = *puVar11;
                        iVar5 = __msecs_to_jiffies(*(iVar8 + 0x160) * 1000);
                        mod_timer(iVar8 + 0x90,_android_kmalloc_64_create + iVar5);
code_r0x08003140:
                        mutex_unlock(obj.list_mutex);
                        return 0;
                    }
                    iVar2 = strcmp(puVar9,pcVar10 + 0xf8);
                    if (iVar2 == 0) {
                        *(puVar4 + 0x12) = pcVar10;
                        if (pcVar10 == NULL) goto code_r0x08002fc4;
                        *(pcVar10 + 0x164) = *(pcVar10 + 0x164) + 1;
                        iVar5 = *(puVar4 + 0x12);
                        sym.reset_timer.llvm.10987903973441270003(iVar5,*(iVar5 + 0x160),0);
                        goto code_r0x08003140;
                    }
                    pcVar10 = *pcVar10;
                } while( true );
            }
            uVar3 = 0x8000579;
            goto code_r0x080031ac;
        }
        uVar3 = 0x800036b;
    }
    else {
        uVar3 = 0x80009c8;
    }
    _printk(uVar3);
    uVar3 = 0x8000703;
code_r0x080031ac:
    _printk(uVar3);
    return 0xffffffea;
}


// ===== sym.minet_nl_tc_list_dump.88083d61cc22609357293105b954a33d.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.minet_nl_tc_list_dump.88083d61cc22609357293105b954a33d.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar8;
    code *pcVar9;
    uint32_t *puVar10;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar11 [16];
    ulong uStack_50;
    uint16_t *puStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    puStack_48 = NULL;
    uStack_40 = 0;
    uStack_50 = 0;
    uVar3 = __nla_parse(&uStack_50,4,*(param_1 + 0xd8) + 5,**(param_1 + 0xd8) + -0x14,obj.minet_hooks,0,
                        *(param_2 + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_48 != NULL)) {
        uVar3 = sym.minet_dump_tc_list(*puStack_48,noname_1,param_2);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym.mi_idletimer_tg_checkentry_v1;
    if (puVar4 == NULL) {
        _printk(0x8000911,"mi_idletimer_tg_checkentry_v1");
        return 0xffffffea;
    }
    if (*puVar4 == 0) {
        uVar3 = 0x800096a;
    }
    else if (*puVar4 < 0x20c49b) {
        puVar8 = puVar4 + 1;
        if ((*puVar8 != '\0') && (iVar5 = strnlen(puVar8,0x1c), iVar5 != 0x1c)) {
            if (puVar4[8] < 2) {
                mutex_lock(obj.list_mutex);
                pcVar9 = _obj.idletimer_tg_list;
                do {
                    if (pcVar9 == obj.idletimer_tg_list) {
                        puVar4[0x12] = 0;
                        puVar4[0x13] = 0;
code_r0x08002fc4:
                        puVar10 = puVar4 + 0x12;
                        pcVar9 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x178);
                        *puVar10 = pcVar9;
                        if (pcVar9 == NULL) {
                            mutex_unlock(obj.list_mutex);
                            return 0xfffffff4;
                        }
                        strncpy(pcVar9 + 0xf8,puVar8,0x1c);
                        pcVar1 = _obj.idletimer_tg_list;
                        uVar6 = __list_add_valid(pcVar9,obj.idletimer_tg_list,_obj.idletimer_tg_list);
                        if ((uVar6 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar9;
                            *pcVar9 = pcVar1;
                            *(pcVar9 + 8) = obj.idletimer_tg_list;
                            _obj.idletimer_tg_list = pcVar9;
                        }
                        *(*(puVar4 + 0x12) + 0x168) = 0;
                        *(*(puVar4 + 0x12) + 0x164) = 1;
                        *(*(puVar4 + 0x12) + 0x16a) = 1;
                        *(*(puVar4 + 0x12) + 0x16b) = 1;
                        *(*(puVar4 + 0x12) + 0x160) = *puVar4;
                        *(*(puVar4 + 0x12) + 0x118) = 0;
                        *(*(puVar4 + 0x12) + 0x120) = 0;
                        *(*(puVar4 + 0x12) + 0x169) = 0;
                        *(*(puVar4 + 0x12) + 0x16c) = 0;
                        iVar5 = *(puVar4 + 0x12);
                        ktime_get_with_offset(1);
                        auVar11 = ns_to_timespec64();
                        *(iVar5 + 0x128) = auVar11;
                        *(*(puVar4 + 0x12) + 0x148) = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        iVar2 = register_pm_notifier(*(puVar4 + 0x12) + 0x148);
                        if (iVar2 != 0) {
                            _printk(0x800080e,"idletimer_tg_create_v1",iVar2);
                        }
                        *(*puVar10 + 200) = 0xfffffffe0;
                        iVar5 = *puVar10;
                        *(iVar5 + 0xd0) = iVar5 + 0xd0;
                        *(iVar5 + 0xd8) = iVar5 + 0xd0;
                        *(*puVar10 + 0xe0) = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        init_timer_key(*puVar10 + 0x90,sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt
                                       ,0,0,0);
                        iVar7 = *puVar10;
                        iVar5 = __msecs_to_jiffies(*(iVar7 + 0x160) * 1000);
                        mod_timer(iVar7 + 0x90,_android_kmalloc_64_create + iVar5);
code_r0x08003140:
                        mutex_unlock(obj.list_mutex);
                        return 0;
                    }
                    iVar2 = strcmp(puVar8,pcVar9 + 0xf8);
                    if (iVar2 == 0) {
                        *(puVar4 + 0x12) = pcVar9;
                        if (pcVar9 == NULL) goto code_r0x08002fc4;
                        *(pcVar9 + 0x164) = *(pcVar9 + 0x164) + 1;
                        iVar5 = *(puVar4 + 0x12);
                        sym.reset_timer.llvm.10987903973441270003(iVar5,*(iVar5 + 0x160),0);
                        goto code_r0x08003140;
                    }
                    pcVar9 = *pcVar9;
                } while( true );
            }
            uVar3 = 0x8000579;
            goto code_r0x080031ac;
        }
        uVar3 = 0x800036b;
    }
    else {
        uVar3 = 0x80009c8;
    }
    _printk(uVar3);
    uVar3 = 0x8000703;
code_r0x080031ac:
    _printk(uVar3);
    return 0xffffffea;
}


// ===== sym.minet_nl_tc_enable_set.88083d61cc22609357293105b954a33d.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.minet_nl_tc_enable_set.88083d61cc22609357293105b954a33d.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t *puVar9;
    code *pcVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar12 [16];
    uchar auVar13 [16];
    ulong uStack_f0;
    uint16_t *puStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    ulong uStack_a0;
    uint16_t *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    ulong uStack_50;
    uint16_t *puStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    puStack_48 = NULL;
    uStack_40 = 0;
    uStack_50 = 0;
    uVar3 = __nla_parse(&uStack_50,4,*(param_1 + 0xd8) + 5,**(param_1 + 0xd8) + -0x14,obj.minet_hooks,0,
                        *(param_2 + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_48 != NULL)) {
        uVar3 = sym.minet_set_tc_enable(puStack_48 + 2,*puStack_48 - 4,param_2);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = sym.minet_nl_tc_list_set;
    pcStack_68 = sym.minet_nl_tc_list_set;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar12._0_8_ + 0xd8);
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_98 = NULL;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    iStack_60 = param_2;
    uVar3 = __nla_parse(&uStack_a0,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar12._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_98 != NULL)) {
        uVar3 = sym.minet_set_tc_list(puStack_98 + 2,*puStack_98 - 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return uVar3;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.minet_nl_tc_list_dump;
    pcStack_b8 = sym.minet_nl_tc_list_dump;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar13._0_8_ + 0xd8);
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_e8 = NULL;
    uStack_e0 = 0;
    uStack_f0 = 0;
    ppuStack_c0 = &puStack_70;
    iStack_b0 = auVar12._8_8_;
    uVar3 = __nla_parse(&uStack_f0,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar13._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_e8 != NULL)) {
        uVar3 = sym.minet_dump_tc_list(*puStack_e8,noname_1,auVar13._8_8_);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_c8) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_01 = sym.mi_idletimer_tg_checkentry_v1;
    if (puVar4 == NULL) {
        _printk(0x8000911,"mi_idletimer_tg_checkentry_v1");
        return 0xffffffea;
    }
    if (*puVar4 == 0) {
        uVar3 = 0x800096a;
    }
    else if (*puVar4 < 0x20c49b) {
        puVar9 = puVar4 + 1;
        if ((*puVar9 != '\0') && (iVar5 = strnlen(puVar9,0x1c), iVar5 != 0x1c)) {
            if (puVar4[8] < 2) {
                mutex_lock(obj.list_mutex);
                pcVar10 = _obj.idletimer_tg_list;
                do {
                    if (pcVar10 == obj.idletimer_tg_list) {
                        puVar4[0x12] = 0;
                        puVar4[0x13] = 0;
code_r0x08002fc4:
                        puVar11 = puVar4 + 0x12;
                        pcVar10 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x178);
                        *puVar11 = pcVar10;
                        if (pcVar10 == NULL) {
                            mutex_unlock(obj.list_mutex);
                            return 0xfffffff4;
                        }
                        strncpy(pcVar10 + 0xf8,puVar9,0x1c);
                        pcVar1 = _obj.idletimer_tg_list;
                        uVar6 = __list_add_valid(pcVar10,obj.idletimer_tg_list,_obj.idletimer_tg_list);
                        if ((uVar6 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar10;
                            *pcVar10 = pcVar1;
                            *(pcVar10 + 8) = obj.idletimer_tg_list;
                            _obj.idletimer_tg_list = pcVar10;
                        }
                        *(*(puVar4 + 0x12) + 0x168) = 0;
                        *(*(puVar4 + 0x12) + 0x164) = 1;
                        *(*(puVar4 + 0x12) + 0x16a) = 1;
                        *(*(puVar4 + 0x12) + 0x16b) = 1;
                        *(*(puVar4 + 0x12) + 0x160) = *puVar4;
                        *(*(puVar4 + 0x12) + 0x118) = 0;
                        *(*(puVar4 + 0x12) + 0x120) = 0;
                        *(*(puVar4 + 0x12) + 0x169) = 0;
                        *(*(puVar4 + 0x12) + 0x16c) = 0;
                        iVar5 = *(puVar4 + 0x12);
                        ktime_get_with_offset(1);
                        auVar12 = ns_to_timespec64();
                        *(iVar5 + 0x128) = auVar12;
                        *(*(puVar4 + 0x12) + 0x148) = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        iVar2 = register_pm_notifier(*(puVar4 + 0x12) + 0x148);
                        if (iVar2 != 0) {
                            _printk(0x800080e,"idletimer_tg_create_v1",iVar2);
                        }
                        *(*puVar11 + 200) = 0xfffffffe0;
                        iVar5 = *puVar11;
                        *(iVar5 + 0xd0) = iVar5 + 0xd0;
                        *(iVar5 + 0xd8) = iVar5 + 0xd0;
                        *(*puVar11 + 0xe0) = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        init_timer_key(*puVar11 + 0x90,sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt
                                       ,0,0,0);
                        iVar8 = *puVar11;
                        iVar5 = __msecs_to_jiffies(*(iVar8 + 0x160) * 1000);
                        mod_timer(iVar8 + 0x90,_android_kmalloc_64_create + iVar5);
code_r0x08003140:
                        mutex_unlock(obj.list_mutex);
                        return 0;
                    }
                    iVar2 = strcmp(puVar9,pcVar10 + 0xf8);
                    if (iVar2 == 0) {
                        *(puVar4 + 0x12) = pcVar10;
                        if (pcVar10 == NULL) goto code_r0x08002fc4;
                        *(pcVar10 + 0x164) = *(pcVar10 + 0x164) + 1;
                        iVar5 = *(puVar4 + 0x12);
                        sym.reset_timer.llvm.10987903973441270003(iVar5,*(iVar5 + 0x160),0);
                        goto code_r0x08003140;
                    }
                    pcVar10 = *pcVar10;
                } while( true );
            }
            uVar3 = 0x8000579;
            goto code_r0x080031ac;
        }
        uVar3 = 0x800036b;
    }
    else {
        uVar3 = 0x80009c8;
    }
    _printk(uVar3);
    uVar3 = 0x8000703;
code_r0x080031ac:
    _printk(uVar3);
    return 0xffffffea;
}


// ===== sym.minet_nl_cmd_set.88083d61cc22609357293105b954a33d.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.minet_nl_cmd_set.88083d61cc22609357293105b954a33d.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t *puVar9;
    code *pcVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar12 [16];
    uchar auVar13 [16];
    ulong uStack_130;
    uint16_t *puStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar ***pppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    ulong uStack_e0;
    uint16_t *puStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    ulong uStack_90;
    uint16_t *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_18 = *(iVar5 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
    iStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    uVar3 = __nla_parse(&uStack_40,4,*(param_1 + 0xd8) + 5,**(param_1 + 0xd8) + -0x14,obj.minet_hooks,0,
                        *(param_2 + 0x40));
    if (uVar3 == 0) {
        if (iStack_38 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = sym.minet_set_app(iStack_38 + 4);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail(uVar3);
    iVar8 = auVar12._8_8_;
    *extraout_x18 = sym.minet_nl_tc_enable_set;
    pcStack_58 = sym.minet_nl_tc_enable_set;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar12._0_8_ + 0xd8);
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_88 = NULL;
    uStack_80 = 0;
    uStack_90 = 0;
    puStack_60 = &stack0xfffffffffffffff0;
    uVar3 = __nla_parse(&uStack_90,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(iVar8 + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_88 != NULL)) {
        uVar3 = sym.minet_set_tc_enable(puStack_88 + 2,*puStack_88 - 4,iVar8);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.minet_nl_tc_list_set;
    pcStack_a8 = sym.minet_nl_tc_list_set;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar12._0_8_ + 0xd8);
    uStack_c8 = 0;
    uStack_c0 = 0;
    puStack_d8 = NULL;
    uStack_d0 = 0;
    uStack_e0 = 0;
    ppuStack_b0 = &puStack_60;
    iStack_a0 = iVar8;
    uVar3 = __nla_parse(&uStack_e0,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar12._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_d8 != NULL)) {
        uVar3 = sym.minet_set_tc_list(puStack_d8 + 2,*puStack_d8 - 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return uVar3;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_01 = sym.minet_nl_tc_list_dump;
    pcStack_f8 = sym.minet_nl_tc_list_dump;
    iVar5 = sp_el0;
    iStack_108 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar13._0_8_ + 0xd8);
    uStack_118 = 0;
    uStack_110 = 0;
    puStack_128 = NULL;
    uStack_120 = 0;
    uStack_130 = 0;
    pppuStack_100 = &ppuStack_b0;
    iStack_f0 = auVar12._8_8_;
    uVar3 = __nla_parse(&uStack_130,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar13._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_128 != NULL)) {
        uVar3 = sym.minet_dump_tc_list(*puStack_128,noname_1,auVar13._8_8_);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_108) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_02 = sym.mi_idletimer_tg_checkentry_v1;
    if (puVar4 == NULL) {
        _printk(0x8000911,"mi_idletimer_tg_checkentry_v1");
        return 0xffffffea;
    }
    if (*puVar4 == 0) {
        uVar3 = 0x800096a;
    }
    else if (*puVar4 < 0x20c49b) {
        puVar9 = puVar4 + 1;
        if ((*puVar9 != '\0') && (iVar5 = strnlen(puVar9,0x1c), iVar5 != 0x1c)) {
            if (puVar4[8] < 2) {
                mutex_lock(obj.list_mutex);
                pcVar10 = _obj.idletimer_tg_list;
                do {
                    if (pcVar10 == obj.idletimer_tg_list) {
                        puVar4[0x12] = 0;
                        puVar4[0x13] = 0;
code_r0x08002fc4:
                        puVar11 = puVar4 + 0x12;
                        pcVar10 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x178);
                        *puVar11 = pcVar10;
                        if (pcVar10 == NULL) {
                            mutex_unlock(obj.list_mutex);
                            return 0xfffffff4;
                        }
                        strncpy(pcVar10 + 0xf8,puVar9,0x1c);
                        pcVar1 = _obj.idletimer_tg_list;
                        uVar6 = __list_add_valid(pcVar10,obj.idletimer_tg_list,_obj.idletimer_tg_list);
                        if ((uVar6 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar10;
                            *pcVar10 = pcVar1;
                            *(pcVar10 + 8) = obj.idletimer_tg_list;
                            _obj.idletimer_tg_list = pcVar10;
                        }
                        *(*(puVar4 + 0x12) + 0x168) = 0;
                        *(*(puVar4 + 0x12) + 0x164) = 1;
                        *(*(puVar4 + 0x12) + 0x16a) = 1;
                        *(*(puVar4 + 0x12) + 0x16b) = 1;
                        *(*(puVar4 + 0x12) + 0x160) = *puVar4;
                        *(*(puVar4 + 0x12) + 0x118) = 0;
                        *(*(puVar4 + 0x12) + 0x120) = 0;
                        *(*(puVar4 + 0x12) + 0x169) = 0;
                        *(*(puVar4 + 0x12) + 0x16c) = 0;
                        iVar5 = *(puVar4 + 0x12);
                        ktime_get_with_offset(1);
                        auVar12 = ns_to_timespec64();
                        *(iVar5 + 0x128) = auVar12;
                        *(*(puVar4 + 0x12) + 0x148) = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        iVar2 = register_pm_notifier(*(puVar4 + 0x12) + 0x148);
                        if (iVar2 != 0) {
                            _printk(0x800080e,"idletimer_tg_create_v1",iVar2);
                        }
                        *(*puVar11 + 200) = 0xfffffffe0;
                        iVar5 = *puVar11;
                        *(iVar5 + 0xd0) = iVar5 + 0xd0;
                        *(iVar5 + 0xd8) = iVar5 + 0xd0;
                        *(*puVar11 + 0xe0) = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        init_timer_key(*puVar11 + 0x90,sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt
                                       ,0,0,0);
                        iVar8 = *puVar11;
                        iVar5 = __msecs_to_jiffies(*(iVar8 + 0x160) * 1000);
                        mod_timer(iVar8 + 0x90,_android_kmalloc_64_create + iVar5);
code_r0x08003140:
                        mutex_unlock(obj.list_mutex);
                        return 0;
                    }
                    iVar2 = strcmp(puVar9,pcVar10 + 0xf8);
                    if (iVar2 == 0) {
                        *(puVar4 + 0x12) = pcVar10;
                        if (pcVar10 == NULL) goto code_r0x08002fc4;
                        *(pcVar10 + 0x164) = *(pcVar10 + 0x164) + 1;
                        iVar5 = *(puVar4 + 0x12);
                        sym.reset_timer.llvm.10987903973441270003(iVar5,*(iVar5 + 0x160),0);
                        goto code_r0x08003140;
                    }
                    pcVar10 = *pcVar10;
                } while( true );
            }
            uVar3 = 0x8000579;
            goto code_r0x080031ac;
        }
        uVar3 = 0x800036b;
    }
    else {
        uVar3 = 0x80009c8;
    }
    _printk(uVar3);
    uVar3 = 0x8000703;
code_r0x080031ac:
    _printk(uVar3);
    return 0xffffffea;
}


// ===== sym.add_new_flow @ 0x08001208 (size 204) =====

ulong * sym.add_new_flow(int64_t arg1)

{
    ulong *puVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80003fc,"add_new_flow");
        puVar1 = NULL;
    }
    else {
        puVar1 = kmem_cache_alloc_trace(_kmalloc_caches,0xa20,0x48);
        if (puVar1 != NULL) {
            puVar4 = *(arg1 + 0x10);
            puVar1[8] = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
            puVar3 = puVar1 + 7;
            *puVar3 = 0;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = 0;
            uVar2 = __list_add_valid(puVar3,puVar4,arg1 + 8);
            if ((uVar2 & 1) != 0) {
                *(arg1 + 0x10) = puVar3;
                puVar1[7] = arg1 + 8;
                puVar1[8] = puVar4;
                *puVar4 = puVar3;
            }
            *arg1 = *arg1 + 1;
        }
    }
    return puVar1;
}


// ===== sym.match_flow @ 0x080012d4 (size 160) =====

int64_t * sym.match_flow(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    piVar1 = arg1 + 8;
    if (*piVar1 != piVar1) {
        piVar2 = *piVar1;
        do {
            piVar4 = *piVar2;
            if (((*(piVar2 + -0x36) == *(arg2 + 2)) && (piVar3 = piVar2 + -7, *piVar3 == *arg2)) &&
               (*(piVar2 + -0x34) == *(arg2 + 4))) {
                if (*(arg2 + 2) == 2) {
                    if (piVar2[-6] == *(arg2 + 8)) {
                        return piVar3;
                    }
                }
                else if ((piVar2[-6] == *(arg2 + 8)) && (piVar2[-5] == *(arg2 + 0x10))) {
                    return piVar3;
                }
            }
            piVar2 = piVar4;
        } while (piVar4 != piVar1);
    }
    return NULL;
}


// ===== sym.add_new_app @ 0x08001374 (size 240) =====

ulong * sym.add_new_app(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80003fc,"add_new_app");
        puVar2 = NULL;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xa20,0x30);
        if (puVar2 != NULL) {
            puVar2[3] = 0;
            puVar2[5] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar4 = puVar2 + 4;
            *puVar4 = 0;
            puVar5 = puVar2 + 2;
            *puVar5 = 0;
            *puVar5 = puVar5;
            puVar2[3] = puVar5;
            puVar5 = *(arg1 + 0x10);
            uVar3 = __list_add_valid(puVar4,puVar5,arg1 + 8);
            if ((uVar3 & 1) != 0) {
                *(arg1 + 0x10) = puVar4;
                puVar2[4] = arg1 + 8;
                puVar2[5] = puVar5;
                *puVar5 = puVar4;
            }
            *arg1 = *arg1 + 1;
        }
    }
    return puVar2;
}


// ===== sym.match_app @ 0x08001464 (size 60) =====

int64_t sym.match_app(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    do {
        piVar1 = *piVar1;
        if (piVar1 == arg1 + 8) {
            return 0;
        }
    } while (*(piVar1 + -0x1c) != arg2);
    return piVar1 + -4;
}


// ===== sym.merge_one_app_flow @ 0x080014a0 (size 728) =====

ulong sym.merge_one_app_flow(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    int iVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    int *piVar10;
    ulong uVar11;
    int *piVar12;
    ulong *in_x18;
    int *piVar13;
    ulong *puVar14;
    int *piVar15;
    ulong *puVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(arg4 + 4);
    piVar1 = arg4 + 8;
    piVar9 = piVar1;
    do {
        piVar9 = *piVar9;
        if (piVar9 == piVar1) goto code_r0x08001508;
    } while (*(piVar9 + -0x1c) != arg1);
    piVar15 = piVar9 + -3;
    if (piVar15 == NULL) {
code_r0x08001508:
        if (arg4 == 0) {
            _printk(0x80003fc,"add_new_app");
            puVar7 = NULL;
        }
        else {
            iVar2 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar2 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xa20,0x30);
            if (puVar7 != NULL) {
                puVar7[3] = 0;
                puVar7[5] = 0;
                *puVar7 = 0;
                puVar7[1] = 0;
                puVar14 = puVar7 + 4;
                *puVar14 = 0;
                puVar16 = puVar7 + 2;
                *puVar16 = 0;
                *puVar16 = puVar16;
                puVar7[3] = puVar16;
                puVar16 = *(arg4 + 0x10);
                uVar8 = __list_add_valid(puVar14,puVar16,piVar1);
                if ((uVar8 & 1) != 0) {
                    *(arg4 + 0x10) = puVar14;
                    puVar7[4] = piVar1;
                    puVar7[5] = puVar16;
                    *puVar16 = puVar14;
                }
                iVar6 = *arg4;
                *(puVar7 + 4) = arg1;
                *arg4 = iVar6 + 2;
            }
        }
        piVar15 = puVar7 + 1;
    }
    _raw_spin_unlock_bh(arg4 + 4);
    _raw_spin_lock_bh(piVar15 + 1);
    piVar13 = piVar15 + 2;
    if (*piVar13 != piVar13) {
        piVar10 = *piVar13;
        do {
            piVar12 = *piVar10;
            if (((*(piVar10 + -0x36) == *(arg2 + 2)) && (piVar10[-0xe] == *arg2)) && (piVar10[-0xd] == *(arg2 + 4))) {
                if (*(arg2 + 2) == 2) {
                    if (piVar10[-0xc] != *(arg2 + 8)) goto code_r0x080015dc;
                }
                else if ((*(piVar10 + -0xc) != *(arg2 + 8)) || (*(piVar10 + -10) != *(arg2 + 0x10)))
                goto code_r0x080015dc;
                piVar10[-4] = piVar10[-4] + *arg3;
                piVar10[-3] = piVar10[-3] + *(arg3 + 4);
                piVar10[-2] = piVar10[-2] + *(arg3 + 8);
                piVar10[-1] = piVar10[-1] + *(arg3 + 0xc);
                if (piVar10 + -0xe != NULL) goto code_r0x08001714;
                break;
            }
code_r0x080015dc:
            piVar10 = piVar12;
        } while (piVar12 != piVar13);
    }
    if (piVar15 == NULL) {
        _printk(0x80003fc,"add_new_flow");
    }
    else {
        puVar7 = kmem_cache_alloc_trace(_kmalloc_caches,0xa20,0x48);
        if (puVar7 != NULL) {
            puVar7[8] = 0;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            puVar16 = puVar7 + 7;
            *puVar16 = 0;
            puVar14 = *(piVar15 + 4);
            uVar8 = __list_add_valid(puVar16,puVar14,piVar13);
            if ((uVar8 & 1) != 0) {
                *(piVar15 + 4) = puVar16;
                puVar7[7] = piVar13;
                puVar7[8] = puVar14;
                *puVar14 = puVar16;
            }
            *piVar15 = *piVar15 + 1;
            uVar4 = *(arg2 + 0x18);
            uVar3 = *arg2;
            uVar5 = *(arg2 + 8);
            puVar7[2] = *(arg2 + 0x10);
            puVar7[3] = uVar4;
            uVar11 = *(arg2 + 0x20);
            *puVar7 = uVar3;
            puVar7[1] = uVar5;
            uVar3 = *arg3;
            uVar4 = *(arg3 + 8);
            puVar7[4] = uVar11;
            puVar7[5] = uVar3;
            puVar7[6] = uVar4;
            *piVar15 = *piVar15 + 1;
        }
    }
code_r0x08001714:
    _raw_spin_unlock_bh(piVar15 + 1);
    return 0;
}


// ===== sym.merge_app_flow @ 0x08001778 (size 416) =====

ulong * sym.merge_app_flow(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong *arg4;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar9 = 0x30;
    }
    arg4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xcc0,0x18);
    if (arg4 != NULL) {
        iVar9 = 0;
        *arg4 = 0;
        arg4[1] = arg4 + 1;
        arg4[2] = arg4 + 1;
        do {
            piVar1 = _segment.ehdr + iVar9 * 0x18 + 0x18;
            if (piVar1 != *piVar1) {
                iVar7 = _segment.ehdr + iVar9 * 0x18;
                _raw_spin_lock_bh();
                piVar10 = *piVar1;
                while (piVar4 = piVar10, piVar4 != piVar1) {
                    piVar11 = piVar4 + -2;
                    piVar10 = *piVar4;
                    if (*piVar11 != piVar11) {
                        _raw_spin_lock_bh(piVar4 + -0x14);
                        piVar5 = piVar4[-2];
                        while (piVar5 != piVar11) {
                            piVar8 = *piVar5;
                            uVar6 = __list_del_entry_valid(piVar5);
                            if ((uVar6 & 1) != 0) {
                                iVar2 = *piVar5;
                                piVar3 = piVar5[1];
                                *(iVar2 + 8) = piVar3;
                                *piVar3 = iVar2;
                            }
                            *piVar5 = piVar5;
                            piVar5[1] = piVar5;
                            *(piVar4 + -3) = *(piVar4 + -3) + -1;
                            sym.merge_one_app_flow(*(piVar4 + -0x1c),piVar5 + -7,piVar5 + -2,arg4);
                            kfree(piVar5 + -7);
                            piVar5 = piVar8;
                        }
                        _raw_spin_unlock_bh(piVar4 + -0x14);
                    }
                }
                _raw_spin_unlock_bh(iVar7 + 0x14);
            }
            iVar9 = iVar9 + 1;
        } while (iVar9 != 0x20);
    }
    return arg4;
}


// ===== sym.minet_notify_app_flow @ 0x08001920 (size 516) =====

ulong sym.minet_notify_app_flow(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    uint16_t uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    ushort *arg1_00;
    ulong uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80003fc,"minet_notify_app_flow");
        uVar9 = 0xffffffff;
    }
    else {
        _raw_spin_lock_bh();
        piVar7 = *(arg1 + 8);
        while (piVar7 != arg1 + 8) {
            piVar12 = *piVar7;
            uVar8 = __list_del_entry_valid(piVar7);
            if ((uVar8 & 1) != 0) {
                iVar1 = *piVar7;
                piVar2 = piVar7[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar7 = piVar7;
            piVar7[1] = piVar7;
            arg1_00 = __kmalloc(*(piVar7 + -3) * 0x38 + 0xc,0xa20);
            if (arg1_00 == NULL) {
                _printk(0x80007d9,"minet_notify_app_flow");
            }
            else {
                *arg1_00 = 1;
                uVar5 = *(piVar7 + -0x1c);
                arg1_00[4] = 0;
                *(arg1_00 + 2) = uVar5;
            }
            _raw_spin_lock_bh(piVar7 + -0x14);
            piVar2 = piVar7[-2];
            while (piVar2 != piVar7 + -2) {
                piVar11 = *piVar2;
                uVar8 = __list_del_entry_valid(piVar2);
                if ((uVar8 & 1) != 0) {
                    iVar1 = *piVar2;
                    piVar10 = piVar2[1];
                    *(iVar1 + 8) = piVar10;
                    *piVar10 = iVar1;
                }
                *piVar2 = piVar2;
                piVar2[1] = piVar2;
                if (arg1_00 != NULL) {
                    uVar6 = arg1_00[4];
                    piVar10 = arg1_00 + uVar6 * 0x1c + 6;
                    *piVar10 = piVar2[-7];
                    iVar3 = piVar2[-3];
                    iVar1 = piVar2[-6];
                    iVar4 = piVar2[-5];
                    piVar10[3] = piVar2[-4];
                    piVar10[4] = iVar3;
                    piVar10[1] = iVar1;
                    piVar10[2] = iVar4;
                    iVar1 = piVar2[-2];
                    iVar3 = piVar2[-1];
                    arg1_00[4] = uVar6 + 1;
                    piVar10[5] = iVar1;
                    piVar10[6] = iVar3;
                }
                kfree(piVar2 + -7);
                piVar2 = piVar11;
            }
            _raw_spin_unlock_bh(piVar7 + -0x14);
            kfree(piVar7 + -4);
            piVar7 = piVar12;
            if (arg1_00 != NULL) {
                sym.minet_nl_msg(arg1_00,arg1_00[4] * 0x38 + 0xc,0,2);
                kfree(arg1_00);
            }
        }
        _raw_spin_unlock_bh(arg1 + 4);
        kfree(arg1);
        uVar9 = 0;
    }
    return uVar9;
}


// ===== sym.get_sock_uid @ 0x08001b24 (size 16) =====

uint sym.get_sock_uid(int64_t arg1)

{
    return *(arg1 + 600);
}


// ===== sym.add_app @ 0x08001b34 (size 320) =====

ulong sym.add_app(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = 0;
    do {
        iVar3 = _segment.ehdr;
        iVar2 = _segment.ehdr + iVar8;
        iVar1 = iVar2 + 0x14;
        _raw_spin_lock_bh(iVar1);
        if (iVar2 == -0x10) {
            _printk(0x80003fc,"add_new_app");
        }
        else {
            iVar2 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar2 = 0x30;
            }
            puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xa20,0x30);
            if (puVar4 != NULL) {
                iVar3 = iVar3 + iVar8;
                puVar4[3] = 0;
                puVar4[5] = 0;
                *puVar4 = 0;
                puVar4[1] = 0;
                puVar6 = puVar4 + 4;
                *puVar6 = 0;
                puVar7 = puVar4 + 2;
                *puVar7 = 0;
                *puVar7 = puVar7;
                puVar4[3] = puVar7;
                puVar7 = *(iVar3 + 0x20);
                uVar5 = __list_add_valid(puVar6,puVar7,iVar3 + 0x18);
                if ((uVar5 & 1) != 0) {
                    *(iVar3 + 0x20) = puVar6;
                    puVar4[4] = iVar3 + 0x18;
                    puVar4[5] = puVar7;
                    *puVar7 = puVar6;
                }
                *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
                *(puVar4 + 4) = arg1;
            }
        }
        _raw_spin_unlock_bh(iVar1);
        iVar8 = iVar8 + 0x18;
    } while (iVar8 != 0x300);
    return 0;
}


// ===== sym.del_app @ 0x08001c74 (size 416) =====

ulong sym.del_app(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    do {
        piVar1 = _segment.ehdr + iVar7 * 0x18 + 0x18;
        if (piVar1 != *piVar1) {
            iVar8 = _segment.ehdr + iVar7 * 0x18;
            _raw_spin_lock_bh();
            if (*piVar1 != piVar1) {
                piVar2 = iVar8 + 0x10;
                piVar11 = *piVar1;
                do {
                    piVar12 = *piVar11;
                    if (*(piVar11 + -0x1c) == arg1) {
                        uVar6 = __list_del_entry_valid(piVar11);
                        if ((uVar6 & 1) != 0) {
                            iVar3 = *piVar11;
                            piVar10 = piVar11[1];
                            *(iVar3 + 8) = piVar10;
                            *piVar10 = iVar3;
                        }
                        *piVar11 = piVar11;
                        piVar10 = piVar11 + -2;
                        piVar11[1] = piVar11;
                        *piVar2 = *piVar2 + -1;
                        if (*piVar10 != piVar10) {
                            _raw_spin_lock_bh(piVar11 + -0x14);
                            piVar5 = piVar11[-2];
                            while (piVar5 != piVar10) {
                                piVar9 = *piVar5;
                                uVar6 = __list_del_entry_valid(piVar5);
                                if ((uVar6 & 1) != 0) {
                                    iVar3 = *piVar5;
                                    piVar4 = piVar5[1];
                                    *(iVar3 + 8) = piVar4;
                                    *piVar4 = iVar3;
                                }
                                *piVar5 = piVar5;
                                piVar5[1] = piVar5;
                                *(piVar11 + -3) = piVar11[-3] + -1;
                                kfree(piVar5 + -7);
                                piVar5 = piVar9;
                            }
                            _raw_spin_unlock_bh(piVar11 + -0x14);
                        }
                        kfree(piVar11 + -4);
                    }
                    piVar11 = piVar12;
                } while (piVar12 != piVar1);
            }
            _raw_spin_unlock_bh(iVar8 + 0x14);
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 != 0x20);
    return 0;
}


// ===== sym.clear_app @ 0x08001e1c (size 392) =====

ulong sym.clear_app(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    do {
        piVar1 = _segment.ehdr + iVar7 * 0x18 + 0x18;
        if (piVar1 != *piVar1) {
            iVar8 = _segment.ehdr + iVar7 * 0x18;
            _raw_spin_lock_bh();
            if (*piVar1 != piVar1) {
                piVar2 = iVar8 + 0x10;
                piVar9 = *piVar1;
                do {
                    piVar11 = *piVar9;
                    uVar6 = __list_del_entry_valid(piVar9);
                    if ((uVar6 & 1) != 0) {
                        iVar3 = *piVar9;
                        piVar12 = piVar9[1];
                        *(iVar3 + 8) = piVar12;
                        *piVar12 = iVar3;
                    }
                    *piVar9 = piVar9;
                    piVar12 = piVar9 + -2;
                    piVar9[1] = piVar9;
                    *piVar2 = *piVar2 + -1;
                    if (*piVar12 != piVar12) {
                        _raw_spin_lock_bh(piVar9 + -0x14);
                        piVar5 = piVar9[-2];
                        while (piVar5 != piVar12) {
                            piVar10 = *piVar5;
                            uVar6 = __list_del_entry_valid(piVar5);
                            if ((uVar6 & 1) != 0) {
                                iVar3 = *piVar5;
                                piVar4 = piVar5[1];
                                *(iVar3 + 8) = piVar4;
                                *piVar4 = iVar3;
                            }
                            *piVar5 = piVar5;
                            piVar5[1] = piVar5;
                            *(piVar9 + -3) = piVar9[-3] + -1;
                            kfree(piVar5 + -7);
                            piVar5 = piVar10;
                        }
                        _raw_spin_unlock_bh(piVar9 + -0x14);
                    }
                    kfree(piVar9 + -4);
                    piVar9 = piVar11;
                } while (piVar11 != piVar1);
            }
            _raw_spin_unlock_bh(iVar8 + 0x14);
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 != 0x20);
    return 0;
}


// ===== sym.minet_set_app @ 0x08001fac (size 248) =====

ulong sym.minet_set_app(int64_t arg1)

{
    int16_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80003fc,"minet_set_app");
        uVar2 = 0xffffffff;
    }
    else if (*arg1 == 1) {
        iVar1 = *(arg1 + 2);
        if (iVar1 == 1) {
            if (*(arg1 + 4) != 0) {
                uVar3 = 0;
                do {
                    sym.add_app(*(arg1 + 8 + uVar3 * 4));
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(arg1 + 4));
            }
        }
        else if (iVar1 == 3) {
            sym.clear_app(arg1);
        }
        else if ((iVar1 == 2) && (*(arg1 + 4) != 0)) {
            uVar3 = 0;
            do {
                sym.del_app(*(arg1 + 8 + uVar3 * 4));
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(arg1 + 4));
        }
        uVar2 = 0;
    }
    else {
        _printk(0x8000563,"minet_set_app");
        uVar2 = 0xffffffff;
    }
    return uVar2;
}


// ===== sym.minet_thread @ 0x080020a4 (size 68) =====

ulong sym.minet_thread(void)

{
    uint64_t uVar1;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = kthread_should_stop();
    while ((uVar1 & 1) == 0) {
        schedule_timeout_interruptible(0x4e2);
        arg1 = sym.merge_app_flow();
        sym.minet_notify_app_flow(arg1);
        uVar1 = kthread_should_stop();
    }
    return 0;
}


// ===== sym.hook4 @ 0x080020e8 (size 680) =====

ulong sym.hook4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
    if (iVar2 == 0) {
        return 1;
    }
    if (*(iVar2 + 9) != '\x11' && *(iVar2 + 9) != '\x06') {
        return 1;
    }
    iVar5 = *(arg1 + 0x18);
    if ((iVar5 == 0) ||
       ((((*(iVar5 + 0x12) == '\f' && (iVar5 = *(iVar5 + 0x60), iVar5 == 0)) ||
         ((1 << (*(iVar5 + 0x12) & 0x1f) & 0xffffefbfU) == 0)) || (1 < *(iVar5 + 0x22a) - 1)))) {
        uVar7 = *(arg1 + 0x68);
        if ((uVar7 & 0xfffffffffffffff8) == 0) {
            return 1;
        }
        if (((uVar7 & 7) != 3) && ((uVar7 & 7) != 0)) {
            return 1;
        }
        uVar8 = *((uVar7 & 0xfffffffffffffff8) + 0x100);
        if (uVar8 == 0xffffffff) {
            return 1;
        }
    }
    else {
        uVar8 = *(iVar5 + 600);
    }
    cVar4 = *arg2;
    if (cVar4 == '\x03') {
        uVar7 = *(arg1 + 0x68) & 0xfffffffffffffff8;
        if ((uVar7 != 0) && ((*(arg1 + 0x68) & 7) == 2)) {
            *(uVar7 + 0x100) = uVar8;
            cVar4 = *arg2;
            if (cVar4 != '\x03') goto code_r0x08002248;
        }
        uVar3 = *(iVar2 + 0x10);
        if ((uVar3 & 0xf0ff) == 0x10ac) {
            return 1;
        }
        if ((uVar3 & 0xff) == 10) {
            return 1;
        }
        if (uVar3 == 0xffffffff) {
            return 1;
        }
        if ((uVar3 & 0xffffff) == 0xe0) {
            return 1;
        }
        if ((uVar3 & 0xff) == 0x7f) {
            return 1;
        }
        if ((uVar3 & 0xf0) == 0xe0) {
            return 1;
        }
        if ((uVar3 & 0xffff) == 0xa8c0) {
            return 1;
        }
        if ((uVar3 & 0xffff) == 0xfea9) {
            return 1;
        }
    }
    else {
code_r0x08002248:
        if (cVar4 == '\x01') {
            uVar3 = *(iVar2 + 0xc);
            if ((uVar3 & 0xf0ff) == 0x10ac) {
                return 1;
            }
            if ((uVar3 & 0xff) == 10) {
                return 1;
            }
            if (uVar3 == 0xffffffff) {
                return 1;
            }
            if ((uVar3 & 0xffffff) == 0xe0) {
                return 1;
            }
            if ((uVar3 & 0xff) == 0x7f) {
                return 1;
            }
            if ((uVar3 & 0xf0) == 0xe0) {
                return 1;
            }
            if ((uVar3 & 0xffff) == 0xa8c0) {
                return 1;
            }
            if ((uVar3 & 0xffff) == 0xfea9) {
                return 1;
            }
            sym.tl_after_filter_in(arg1,uVar8);
        }
    }
    iVar2 = sp_el0;
    *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
    iVar5 = tpidr_el1;
    if (*(cpu_number + iVar5) < 0x20) {
        iVar9 = _segment.ehdr + *(cpu_number + iVar5) * 0x18;
        iVar5 = iVar9 + 0x14;
        _raw_spin_lock_bh(iVar5);
        piVar1 = iVar9 + 0x18;
        piVar6 = piVar1;
        do {
            piVar6 = *piVar6;
            if (piVar6 == piVar1) goto code_r0x08002340;
        } while (*(piVar6 + -0x1c) != uVar8);
        if (piVar6 + -4 != NULL) {
            sym.app_flow_stat(piVar6 + -4,arg1,arg2);
        }
code_r0x08002340:
        _raw_spin_unlock_bh(iVar5);
    }
    iVar5 = *(iVar2 + 0x10) + -1;
    *(iVar2 + 0x10) = iVar5;
    if ((iVar5 == 0) || (*(iVar2 + 0x10) == 0)) {
        preempt_schedule();
    }
    return 1;
}


// ===== sym.hook6 @ 0x080023a0 (size 460) =====

ulong sym.hook6(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    char cVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong *in_x18;
    uint32_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
    if (iVar4 == 0) {
        return 1;
    }
    cVar3 = *(iVar4 + 6);
    if (cVar3 != '\x11' && cVar3 != '\x06') {
        return 1;
    }
    iVar4 = *(arg1 + 0x18);
    if ((iVar4 == 0) ||
       ((((*(iVar4 + 0x12) == '\f' && (iVar4 = *(iVar4 + 0x60), iVar4 == 0)) ||
         ((1 << (*(iVar4 + 0x12) & 0x1f) & 0xffffefbfU) == 0)) || (1 < *(iVar4 + 0x22a) - 1)))) {
        uVar5 = *(arg1 + 0x68);
        if ((uVar5 & 0xfffffffffffffff8) == 0) {
            return 1;
        }
        if (((uVar5 & 7) != 3) && ((uVar5 & 7) != 0)) {
            return 1;
        }
        uVar7 = *((uVar5 & 0xfffffffffffffff8) + 0x100);
        if (uVar7 == 0xffffffff) {
            return 1;
        }
    }
    else {
        uVar7 = *(iVar4 + 600);
    }
    cVar3 = *arg2;
    if (cVar3 == '\x03') {
        uVar5 = *(arg1 + 0x68) & 0xfffffffffffffff8;
        if ((uVar5 == 0) || ((*(arg1 + 0x68) & 7) != 2)) goto code_r0x080024a0;
        *(uVar5 + 0x100) = uVar7;
        cVar3 = *arg2;
    }
    if (cVar3 == '\x01') {
        sym.tl_after_filter_in(arg1,uVar7);
    }
code_r0x080024a0:
    iVar4 = sp_el0;
    *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
    iVar1 = tpidr_el1;
    if (*(cpu_number + iVar1) < 0x20) {
        iVar8 = _segment.ehdr + *(cpu_number + iVar1) * 0x18;
        iVar1 = iVar8 + 0x14;
        _raw_spin_lock_bh(iVar1);
        piVar2 = iVar8 + 0x18;
        piVar6 = piVar2;
        do {
            piVar6 = *piVar6;
            if (piVar6 == piVar2) goto code_r0x0800251c;
        } while (*(piVar6 + -0x1c) != uVar7);
        if (piVar6 + -4 != NULL) {
            sym.app_flow_stat(piVar6 + -4,arg1,arg2);
        }
code_r0x0800251c:
        _raw_spin_unlock_bh(iVar1);
    }
    iVar1 = *(iVar4 + 0x10) + -1;
    *(iVar4 + 0x10) = iVar1;
    if ((iVar1 == 0) || (*(iVar4 + 0x10) == 0)) {
        preempt_schedule();
    }
    return 1;
}


// ===== sym.app_flow_stat @ 0x0800257c (size 888) =====

void sym.app_flow_stat(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    code *pcVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    uchar *puVar10;
    int64_t iVar11;
    uint16_t *puVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar15;
    uint16_t uVar16;
    int64_t iVar17;
    int64_t *piVar18;
    ulong *puVar19;
    char cVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uint uStack_90;
    uint32_t uStack_7c;
    ulong uStack_78;
    uint uStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar11 = *(iVar11 + 0x5e0);
    uVar5 = *(arg3 + 1);
    uStack_70 = 0;
    uStack_78 = 0;
    if (uVar5 == 10) {
        iVar2 = *(arg2 + 0xd0) + *(arg2 + 0xb4);
        if ((iVar2 != 0) && (puVar12 = *(arg2 + 0xd0) + *(arg2 + 0xb2), puVar12 != NULL)) {
            cVar20 = *(iVar2 + 6);
            if (*arg3 == '\x01') {
                uStack_7c = *(iVar2 + 8);
                uVar3 = *(iVar2 + 0xc);
                iVar17 = *(iVar2 + 0x10);
                uStack_78 = *(iVar2 + 0x1c);
                uStack_70 = *(iVar2 + 0x24);
                uStack_90 = *(iVar2 + 0x18);
                uVar16 = *puVar12 >> 8 | *puVar12 << 8;
                puVar12 = puVar12 + 1;
            }
            else {
                uStack_7c = *(iVar2 + 0x18);
                uVar3 = *(iVar2 + 0x1c);
                iVar17 = *(iVar2 + 0x20);
                uStack_78 = *(iVar2 + 0xc);
                uVar16 = puVar12[1] >> 8 | puVar12[1] << 8;
                uStack_70 = *(iVar2 + 0x14);
                uStack_90 = *(iVar2 + 8);
            }
            uVar15 = uVar3;
code_r0x080026d4:
            uVar6 = *puVar12 >> 8 | *puVar12 << 8;
            goto code_r0x080026e4;
        }
    }
    else if (uVar5 == 2) {
        iVar2 = *(arg2 + 0xd0) + *(arg2 + 0xb4);
        if ((iVar2 != 0) && (puVar12 = *(arg2 + 0xd0) + *(arg2 + 0xb2), puVar12 != NULL)) {
            cVar20 = *(iVar2 + 9);
            if (*arg3 == '\x01') {
                uVar16 = *puVar12;
                uStack_7c = *(iVar2 + 0xc);
                uStack_90 = *(iVar2 + 0x10);
                puVar12 = puVar12 + 1;
            }
            else {
                uStack_90 = *(iVar2 + 0xc);
                uStack_7c = *(iVar2 + 0x10);
                uVar16 = puVar12[1];
            }
            uVar15 = 0;
            iVar17 = 0;
            uVar16 = uVar16 >> 8 | uVar16 << 8;
            goto code_r0x080026d4;
        }
    }
    cVar20 = '\0';
    uVar16 = 0;
    uVar6 = 0;
    uVar15 = 0;
    uStack_7c = 0;
    iVar17 = 0;
    uStack_90 = 0;
code_r0x080026e4:
    _raw_spin_lock_bh();
    piVar18 = arg1 + 0x10;
    if (*piVar18 != piVar18) {
        piVar14 = *piVar18;
        do {
            piVar13 = *piVar14;
            if (((*(piVar14 + -0x36) == uVar5) && (piVar8 = piVar14 + -7, *piVar8 == cVar20)) &&
               (*(piVar14 + -0x34) == uVar16)) {
                if (uVar5 == 2) {
                    if (*(piVar14 + -6) == uStack_7c) goto code_r0x0800277c;
                }
                else if ((piVar14[-6] == (uStack_7c | uVar15 << 0x20)) && (piVar14[-5] == iVar17)) {
code_r0x0800277c:
                    if (piVar8 != NULL) goto code_r0x0800284c;
                    break;
                }
            }
            piVar14 = piVar13;
        } while (piVar13 != piVar18);
    }
    piVar1 = arg1 + 8;
    if (piVar1 == NULL) {
        _printk(0x80003fc,"add_new_flow");
    }
    else {
        piVar8 = kmem_cache_alloc_trace(_kmalloc_caches,0xa20,0x48);
        if (piVar8 != NULL) {
            puVar19 = *(arg1 + 0x18);
            piVar8[8] = 0;
            piVar8[5] = 0;
            piVar8[6] = 0;
            piVar8[3] = 0;
            piVar8[4] = 0;
            piVar8[1] = 0;
            piVar8[2] = 0;
            *piVar8 = 0;
            piVar14 = piVar8 + 7;
            *piVar14 = 0;
            uVar9 = __list_add_valid(piVar14,puVar19,piVar18);
            if ((uVar9 & 1) != 0) {
                *(arg1 + 0x18) = piVar14;
                piVar8[7] = piVar18;
                piVar8[8] = puVar19;
                *puVar19 = piVar14;
            }
            *piVar8 = cVar20;
            iVar4 = *piVar1;
            *(piVar8 + 1) = '\0';
            *(piVar8 + 2) = uVar5;
            *(piVar8 + 6) = uVar6;
            *(piVar8 + 4) = uVar16;
            piVar8[1] = uStack_7c | uVar15 << 0x20;
            *piVar1 = iVar4 + 1;
            *(piVar8 + 3) = uStack_90;
            piVar8[2] = iVar17;
            *(piVar8 + 0x1c) = uStack_78;
            *(piVar8 + 0x24) = uStack_70;
code_r0x0800284c:
            if (*arg3 == '\x03') {
                *(piVar8 + 6) = piVar8[6] + 1;
                *(piVar8 + 0x34) = *(piVar8 + 0x34) + *(arg2 + 0x70);
            }
            else if (*arg3 == '\x01') {
                *(piVar8 + 5) = piVar8[5] + 1;
                *(piVar8 + 0x2c) = *(piVar8 + 0x2c) + *(arg2 + 0x70);
            }
        }
    }
    _raw_spin_unlock_bh(arg1 + 0xc);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar11) {
        auVar21 = __stack_chk_fail();
        puVar10 = auVar21._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar10 != NULL) {
            switch(*puVar10) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar10,auVar21._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5502,0x800294c);
        (*pcVar7)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080028f4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002938

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
    //switch table (4 cases) at 0x8000364
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800294c);
    (*pcVar1)();
}


// ===== sym.minet_nl_msg @ 0x0800294c (size 368) =====

uint32_t sym.minet_nl_msg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uchar in_w4;
    int *piVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = __alloc_skb((arg2 + 7U & 0xfffffffc) + 0x14,0xa20,0,0xffffffff);
    if (iVar6 == 0) {
        uVar5 = 0xfffffff4;
    }
    else {
        iVar7 = genlmsg_put(iVar6,arg3 & 0xffffffff,0,obj.minet_nl_family,0,arg4 & 0xffffffff);
        if (iVar7 != 0) {
            iVar4 = nla_put(iVar6,in_w4,arg2 & 0xffffffff,arg1);
            piVar8 = iVar7 + -0x14;
            if (iVar4 == 0) {
                *piVar8 = (*(iVar6 + 0xd0) + *(iVar6 + 200)) - piVar8;
                uVar2 = ___list_add_valid;
                uVar1 = *0x8004000;
                if (arg3 != 0) {
                    uVar5 = netlink_unicast(___list_add_valid,iVar6,arg3 & 0xffffffff,0x40);
                    return uVar5 & uVar5 >> 0x1f;
                }
                if (*0x8004a97 != '\0') {
                    *(iVar6 + 0x38) = *0x8004000;
                    uVar5 = netlink_broadcast(uVar2,iVar6,0,uVar1,0xa20);
                    return uVar5 & uVar5 >> 0x1f;
                }
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8002abc);
                (*pcVar3)();
            }
            if (piVar8 != NULL) {
                if (piVar8 < *(iVar6 + 0xd8)) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x800,0x8002aac);
                    (*pcVar3)();
                }
                skb_trim(iVar6,piVar8 - *(iVar6 + 0xd8));
            }
        }
        kfree_skb(iVar6);
        uVar5 = 0xffffffa6;
    }
    return uVar5;
}


// ===== sym.minet_nl_notify @ 0x08002ac0 (size 48) =====

void sym.minet_nl_notify(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.minet_nl_msg(arg1,arg2,0,2);
    return;
}


// ===== sym.minet_idletimer_notify @ 0x08002af0 (size 48) =====

void sym.minet_idletimer_notify(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.minet_nl_msg(arg1,arg2,0,4);
    return;
}


// ===== sym.minet_nl_reply @ 0x08002b20 (size 304) =====

uint32_t sym.minet_nl_reply(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uchar in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = __alloc_skb((arg2 + 7U & 0xfffffffc) + 0x14,0xcc0,0,0xffffffff);
    if (iVar5 == 0) {
        uVar4 = 0xfffffff4;
    }
    else {
        iVar6 = genlmsg_put(iVar5,*(arg3 + 4),*arg3,obj.minet_nl_family,0,arg4 & 0xffffffff);
        if (iVar6 != 0) {
            if (((arg1 == 0) || (arg2 < 1)) || (iVar3 = nla_put(iVar5,in_w4,arg2 & 0xffffffff,arg1), iVar3 == 0)) {
                *(iVar6 + -0x14) = (*(iVar5 + 0xd0) + *(iVar5 + 200)) - (iVar6 + -0x14);
                uVar4 = netlink_unicast(*(*(arg3 + 0x28) + 0x118),iVar5,*(arg3 + 4),0x40);
                return uVar4 & uVar4 >> 0x1f;
            }
            uVar1 = iVar6 - 0x14;
            if (uVar1 != 0) {
                if (uVar1 < *(iVar5 + 0xd8)) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8002c50);
                    (*pcVar2)();
                }
                skb_trim(iVar5,uVar1 - *(iVar5 + 0xd8));
            }
        }
        kfree_skb(iVar5);
        uVar4 = 0xffffffa6;
    }
    return uVar4;
}


// ===== sym.minet_nl_finit @ 0x08002c58 (size 44) =====

void sym.minet_nl_finit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_unregister_family(obj.minet_nl_family);
    return;
}


// ===== sym.minet_nl_cmd_set @ 0x08002c84 (size 156) =====

ulong sym.minet_nl_cmd_set(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t *puVar9;
    code *pcVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar12 [16];
    uchar auVar13 [16];
    ulong uStack_130;
    uint16_t *puStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar ***pppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    ulong uStack_e0;
    uint16_t *puStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    ulong uStack_90;
    uint16_t *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_18 = *(iVar5 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
    iStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    uVar3 = __nla_parse(&uStack_40,4,*(arg1 + 0xd8) + 5,**(arg1 + 0xd8) + -0x14,obj.minet_hooks,0,*(arg2 + 0x40));
    if (uVar3 == 0) {
        if (iStack_38 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = sym.minet_set_app(iStack_38 + 4);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail(uVar3);
    iVar8 = auVar12._8_8_;
    *extraout_x18 = sym.minet_nl_tc_enable_set;
    pcStack_58 = sym.minet_nl_tc_enable_set;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar12._0_8_ + 0xd8);
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_88 = NULL;
    uStack_80 = 0;
    uStack_90 = 0;
    puStack_60 = &stack0xfffffffffffffff0;
    uVar3 = __nla_parse(&uStack_90,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(iVar8 + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_88 != NULL)) {
        uVar3 = sym.minet_set_tc_enable(puStack_88 + 2,*puStack_88 - 4,iVar8);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.minet_nl_tc_list_set;
    pcStack_a8 = sym.minet_nl_tc_list_set;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar12._0_8_ + 0xd8);
    uStack_c8 = 0;
    uStack_c0 = 0;
    puStack_d8 = NULL;
    uStack_d0 = 0;
    uStack_e0 = 0;
    ppuStack_b0 = &puStack_60;
    iStack_a0 = iVar8;
    uVar3 = __nla_parse(&uStack_e0,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar12._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_d8 != NULL)) {
        uVar3 = sym.minet_set_tc_list(puStack_d8 + 2,*puStack_d8 - 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return uVar3;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_01 = sym.minet_nl_tc_list_dump;
    pcStack_f8 = sym.minet_nl_tc_list_dump;
    iVar5 = sp_el0;
    iStack_108 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar13._0_8_ + 0xd8);
    uStack_118 = 0;
    uStack_110 = 0;
    puStack_128 = NULL;
    uStack_120 = 0;
    uStack_130 = 0;
    pppuStack_100 = &ppuStack_b0;
    iStack_f0 = auVar12._8_8_;
    uVar3 = __nla_parse(&uStack_130,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar13._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_128 != NULL)) {
        uVar3 = sym.minet_dump_tc_list(*puStack_128,noname_1,auVar13._8_8_);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_108) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_02 = sym.mi_idletimer_tg_checkentry_v1;
    if (puVar4 == NULL) {
        _printk(0x8000911,"mi_idletimer_tg_checkentry_v1");
        return 0xffffffea;
    }
    if (*puVar4 == 0) {
        uVar3 = 0x800096a;
    }
    else if (*puVar4 < 0x20c49b) {
        puVar9 = puVar4 + 1;
        if ((*puVar9 != '\0') && (iVar5 = strnlen(puVar9,0x1c), iVar5 != 0x1c)) {
            if (puVar4[8] < 2) {
                mutex_lock(obj.list_mutex);
                pcVar10 = _obj.idletimer_tg_list;
                do {
                    if (pcVar10 == obj.idletimer_tg_list) {
                        puVar4[0x12] = 0;
                        puVar4[0x13] = 0;
code_r0x08002fc4:
                        puVar11 = puVar4 + 0x12;
                        pcVar10 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x178);
                        *puVar11 = pcVar10;
                        if (pcVar10 == NULL) {
                            mutex_unlock(obj.list_mutex);
                            return 0xfffffff4;
                        }
                        strncpy(pcVar10 + 0xf8,puVar9,0x1c);
                        pcVar1 = _obj.idletimer_tg_list;
                        uVar6 = __list_add_valid(pcVar10,obj.idletimer_tg_list,_obj.idletimer_tg_list);
                        if ((uVar6 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar10;
                            *pcVar10 = pcVar1;
                            *(pcVar10 + 8) = obj.idletimer_tg_list;
                            _obj.idletimer_tg_list = pcVar10;
                        }
                        *(*(puVar4 + 0x12) + 0x168) = 0;
                        *(*(puVar4 + 0x12) + 0x164) = 1;
                        *(*(puVar4 + 0x12) + 0x16a) = 1;
                        *(*(puVar4 + 0x12) + 0x16b) = 1;
                        *(*(puVar4 + 0x12) + 0x160) = *puVar4;
                        *(*(puVar4 + 0x12) + 0x118) = 0;
                        *(*(puVar4 + 0x12) + 0x120) = 0;
                        *(*(puVar4 + 0x12) + 0x169) = 0;
                        *(*(puVar4 + 0x12) + 0x16c) = 0;
                        iVar5 = *(puVar4 + 0x12);
                        ktime_get_with_offset(1);
                        auVar12 = ns_to_timespec64();
                        *(iVar5 + 0x128) = auVar12;
                        *(*(puVar4 + 0x12) + 0x148) = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        iVar2 = register_pm_notifier(*(puVar4 + 0x12) + 0x148);
                        if (iVar2 != 0) {
                            _printk(0x800080e,"idletimer_tg_create_v1",iVar2);
                        }
                        *(*puVar11 + 200) = 0xfffffffe0;
                        iVar5 = *puVar11;
                        *(iVar5 + 0xd0) = iVar5 + 0xd0;
                        *(iVar5 + 0xd8) = iVar5 + 0xd0;
                        *(*puVar11 + 0xe0) = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        init_timer_key(*puVar11 + 0x90,sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt
                                       ,0,0,0);
                        iVar8 = *puVar11;
                        iVar5 = __msecs_to_jiffies(*(iVar8 + 0x160) * 1000);
                        mod_timer(iVar8 + 0x90,_android_kmalloc_64_create + iVar5);
code_r0x08003140:
                        mutex_unlock(obj.list_mutex);
                        return 0;
                    }
                    iVar2 = strcmp(puVar9,pcVar10 + 0xf8);
                    if (iVar2 == 0) {
                        *(puVar4 + 0x12) = pcVar10;
                        if (pcVar10 == NULL) goto code_r0x08002fc4;
                        *(pcVar10 + 0x164) = *(pcVar10 + 0x164) + 1;
                        iVar5 = *(puVar4 + 0x12);
                        sym.reset_timer.llvm.10987903973441270003(iVar5,*(iVar5 + 0x160),0);
                        goto code_r0x08003140;
                    }
                    pcVar10 = *pcVar10;
                } while( true );
            }
            uVar3 = 0x8000579;
            goto code_r0x080031ac;
        }
        uVar3 = 0x800036b;
    }
    else {
        uVar3 = 0x80009c8;
    }
    _printk(uVar3);
    uVar3 = 0x8000703;
code_r0x080031ac:
    _printk(uVar3);
    return 0xffffffea;
}


// ===== sym.minet_nl_tc_enable_set @ 0x08002d20 (size 168) =====

ulong sym.minet_nl_tc_enable_set(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t *puVar9;
    code *pcVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar12 [16];
    uchar auVar13 [16];
    ulong uStack_f0;
    uint16_t *puStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    ulong uStack_a0;
    uint16_t *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    ulong uStack_50;
    uint16_t *puStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    puStack_48 = NULL;
    uStack_40 = 0;
    uStack_50 = 0;
    uVar3 = __nla_parse(&uStack_50,4,*(arg1 + 0xd8) + 5,**(arg1 + 0xd8) + -0x14,obj.minet_hooks,0,*(arg2 + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_48 != NULL)) {
        uVar3 = sym.minet_set_tc_enable(puStack_48 + 2,*puStack_48 - 4,arg2);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = sym.minet_nl_tc_list_set;
    pcStack_68 = sym.minet_nl_tc_list_set;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar12._0_8_ + 0xd8);
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_98 = NULL;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    iStack_60 = arg2;
    uVar3 = __nla_parse(&uStack_a0,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar12._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_98 != NULL)) {
        uVar3 = sym.minet_set_tc_list(puStack_98 + 2,*puStack_98 - 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return uVar3;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.minet_nl_tc_list_dump;
    pcStack_b8 = sym.minet_nl_tc_list_dump;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar13._0_8_ + 0xd8);
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_e8 = NULL;
    uStack_e0 = 0;
    uStack_f0 = 0;
    ppuStack_c0 = &puStack_70;
    iStack_b0 = auVar12._8_8_;
    uVar3 = __nla_parse(&uStack_f0,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar13._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_e8 != NULL)) {
        uVar3 = sym.minet_dump_tc_list(*puStack_e8,noname_1,auVar13._8_8_);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_c8) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_01 = sym.mi_idletimer_tg_checkentry_v1;
    if (puVar4 == NULL) {
        _printk(0x8000911,"mi_idletimer_tg_checkentry_v1");
        return 0xffffffea;
    }
    if (*puVar4 == 0) {
        uVar3 = 0x800096a;
    }
    else if (*puVar4 < 0x20c49b) {
        puVar9 = puVar4 + 1;
        if ((*puVar9 != '\0') && (iVar5 = strnlen(puVar9,0x1c), iVar5 != 0x1c)) {
            if (puVar4[8] < 2) {
                mutex_lock(obj.list_mutex);
                pcVar10 = _obj.idletimer_tg_list;
                do {
                    if (pcVar10 == obj.idletimer_tg_list) {
                        puVar4[0x12] = 0;
                        puVar4[0x13] = 0;
code_r0x08002fc4:
                        puVar11 = puVar4 + 0x12;
                        pcVar10 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x178);
                        *puVar11 = pcVar10;
                        if (pcVar10 == NULL) {
                            mutex_unlock(obj.list_mutex);
                            return 0xfffffff4;
                        }
                        strncpy(pcVar10 + 0xf8,puVar9,0x1c);
                        pcVar1 = _obj.idletimer_tg_list;
                        uVar6 = __list_add_valid(pcVar10,obj.idletimer_tg_list,_obj.idletimer_tg_list);
                        if ((uVar6 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar10;
                            *pcVar10 = pcVar1;
                            *(pcVar10 + 8) = obj.idletimer_tg_list;
                            _obj.idletimer_tg_list = pcVar10;
                        }
                        *(*(puVar4 + 0x12) + 0x168) = 0;
                        *(*(puVar4 + 0x12) + 0x164) = 1;
                        *(*(puVar4 + 0x12) + 0x16a) = 1;
                        *(*(puVar4 + 0x12) + 0x16b) = 1;
                        *(*(puVar4 + 0x12) + 0x160) = *puVar4;
                        *(*(puVar4 + 0x12) + 0x118) = 0;
                        *(*(puVar4 + 0x12) + 0x120) = 0;
                        *(*(puVar4 + 0x12) + 0x169) = 0;
                        *(*(puVar4 + 0x12) + 0x16c) = 0;
                        iVar5 = *(puVar4 + 0x12);
                        ktime_get_with_offset(1);
                        auVar12 = ns_to_timespec64();
                        *(iVar5 + 0x128) = auVar12;
                        *(*(puVar4 + 0x12) + 0x148) = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        iVar2 = register_pm_notifier(*(puVar4 + 0x12) + 0x148);
                        if (iVar2 != 0) {
                            _printk(0x800080e,"idletimer_tg_create_v1",iVar2);
                        }
                        *(*puVar11 + 200) = 0xfffffffe0;
                        iVar5 = *puVar11;
                        *(iVar5 + 0xd0) = iVar5 + 0xd0;
                        *(iVar5 + 0xd8) = iVar5 + 0xd0;
                        *(*puVar11 + 0xe0) = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        init_timer_key(*puVar11 + 0x90,sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt
                                       ,0,0,0);
                        iVar8 = *puVar11;
                        iVar5 = __msecs_to_jiffies(*(iVar8 + 0x160) * 1000);
                        mod_timer(iVar8 + 0x90,_android_kmalloc_64_create + iVar5);
code_r0x08003140:
                        mutex_unlock(obj.list_mutex);
                        return 0;
                    }
                    iVar2 = strcmp(puVar9,pcVar10 + 0xf8);
                    if (iVar2 == 0) {
                        *(puVar4 + 0x12) = pcVar10;
                        if (pcVar10 == NULL) goto code_r0x08002fc4;
                        *(pcVar10 + 0x164) = *(pcVar10 + 0x164) + 1;
                        iVar5 = *(puVar4 + 0x12);
                        sym.reset_timer.llvm.10987903973441270003(iVar5,*(iVar5 + 0x160),0);
                        goto code_r0x08003140;
                    }
                    pcVar10 = *pcVar10;
                } while( true );
            }
            uVar3 = 0x8000579;
            goto code_r0x080031ac;
        }
        uVar3 = 0x800036b;
    }
    else {
        uVar3 = 0x80009c8;
    }
    _printk(uVar3);
    uVar3 = 0x8000703;
code_r0x080031ac:
    _printk(uVar3);
    return 0xffffffea;
}


// ===== sym.minet_nl_tc_list_set @ 0x08002dc8 (size 168) =====

ulong sym.minet_nl_tc_list_set(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *puVar9;
    code *pcVar10;
    uint32_t *puVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar12 [16];
    ulong uStack_a0;
    uint16_t *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    ulong uStack_50;
    uint16_t *puStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    puStack_48 = NULL;
    uStack_40 = 0;
    uStack_50 = 0;
    uVar3 = __nla_parse(&uStack_50,4,*(arg1 + 0xd8) + 5,**(arg1 + 0xd8) + -0x14,obj.minet_hooks,0,*(arg2 + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_48 != NULL)) {
        uVar3 = sym.minet_set_tc_list(puStack_48 + 2,*puStack_48 - 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = sym.minet_nl_tc_list_dump;
    pcStack_68 = sym.minet_nl_tc_list_dump;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    piVar7 = *(auVar12._0_8_ + 0xd8);
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_98 = NULL;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    iStack_60 = arg2;
    uVar3 = __nla_parse(&uStack_a0,4,piVar7 + 5,*piVar7 + -0x14,obj.minet_hooks,0,*(auVar12._8_8_ + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_98 != NULL)) {
        uVar3 = sym.minet_dump_tc_list(*puStack_98,noname_1,auVar12._8_8_);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_00 = sym.mi_idletimer_tg_checkentry_v1;
    if (puVar4 == NULL) {
        _printk(0x8000911,"mi_idletimer_tg_checkentry_v1");
        return 0xffffffea;
    }
    if (*puVar4 == 0) {
        uVar3 = 0x800096a;
    }
    else if (*puVar4 < 0x20c49b) {
        puVar9 = puVar4 + 1;
        if ((*puVar9 != '\0') && (iVar5 = strnlen(puVar9,0x1c), iVar5 != 0x1c)) {
            if (puVar4[8] < 2) {
                mutex_lock(obj.list_mutex);
                pcVar10 = _obj.idletimer_tg_list;
                do {
                    if (pcVar10 == obj.idletimer_tg_list) {
                        puVar4[0x12] = 0;
                        puVar4[0x13] = 0;
code_r0x08002fc4:
                        puVar11 = puVar4 + 0x12;
                        pcVar10 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x178);
                        *puVar11 = pcVar10;
                        if (pcVar10 == NULL) {
                            mutex_unlock(obj.list_mutex);
                            return 0xfffffff4;
                        }
                        strncpy(pcVar10 + 0xf8,puVar9,0x1c);
                        pcVar1 = _obj.idletimer_tg_list;
                        uVar6 = __list_add_valid(pcVar10,obj.idletimer_tg_list,_obj.idletimer_tg_list);
                        if ((uVar6 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar10;
                            *pcVar10 = pcVar1;
                            *(pcVar10 + 8) = obj.idletimer_tg_list;
                            _obj.idletimer_tg_list = pcVar10;
                        }
                        *(*(puVar4 + 0x12) + 0x168) = 0;
                        *(*(puVar4 + 0x12) + 0x164) = 1;
                        *(*(puVar4 + 0x12) + 0x16a) = 1;
                        *(*(puVar4 + 0x12) + 0x16b) = 1;
                        *(*(puVar4 + 0x12) + 0x160) = *puVar4;
                        *(*(puVar4 + 0x12) + 0x118) = 0;
                        *(*(puVar4 + 0x12) + 0x120) = 0;
                        *(*(puVar4 + 0x12) + 0x169) = 0;
                        *(*(puVar4 + 0x12) + 0x16c) = 0;
                        iVar5 = *(puVar4 + 0x12);
                        ktime_get_with_offset(1);
                        auVar12 = ns_to_timespec64();
                        *(iVar5 + 0x128) = auVar12;
                        *(*(puVar4 + 0x12) + 0x148) = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        iVar2 = register_pm_notifier(*(puVar4 + 0x12) + 0x148);
                        if (iVar2 != 0) {
                            _printk(0x800080e,"idletimer_tg_create_v1",iVar2);
                        }
                        *(*puVar11 + 200) = 0xfffffffe0;
                        iVar5 = *puVar11;
                        *(iVar5 + 0xd0) = iVar5 + 0xd0;
                        *(iVar5 + 0xd8) = iVar5 + 0xd0;
                        *(*puVar11 + 0xe0) = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        init_timer_key(*puVar11 + 0x90,sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt
                                       ,0,0,0);
                        iVar8 = *puVar11;
                        iVar5 = __msecs_to_jiffies(*(iVar8 + 0x160) * 1000);
                        mod_timer(iVar8 + 0x90,_android_kmalloc_64_create + iVar5);
code_r0x08003140:
                        mutex_unlock(obj.list_mutex);
                        return 0;
                    }
                    iVar2 = strcmp(puVar9,pcVar10 + 0xf8);
                    if (iVar2 == 0) {
                        *(puVar4 + 0x12) = pcVar10;
                        if (pcVar10 == NULL) goto code_r0x08002fc4;
                        *(pcVar10 + 0x164) = *(pcVar10 + 0x164) + 1;
                        iVar5 = *(puVar4 + 0x12);
                        sym.reset_timer.llvm.10987903973441270003(iVar5,*(iVar5 + 0x160),0);
                        goto code_r0x08003140;
                    }
                    pcVar10 = *pcVar10;
                } while( true );
            }
            uVar3 = 0x8000579;
            goto code_r0x080031ac;
        }
        uVar3 = 0x800036b;
    }
    else {
        uVar3 = 0x80009c8;
    }
    _printk(uVar3);
    uVar3 = 0x8000703;
code_r0x080031ac:
    _printk(uVar3);
    return 0xffffffea;
}


// ===== sym.minet_nl_tc_list_dump @ 0x08002e70 (size 168) =====

ulong sym.minet_nl_tc_list_dump(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar8;
    code *pcVar9;
    uint32_t *puVar10;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar11 [16];
    ulong uStack_50;
    uint16_t *puStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    puStack_48 = NULL;
    uStack_40 = 0;
    uStack_50 = 0;
    uVar3 = __nla_parse(&uStack_50,4,*(arg1 + 0xd8) + 5,**(arg1 + 0xd8) + -0x14,obj.minet_hooks,0,*(arg2 + 0x40));
    if ((uVar3 == 0) && (uVar3 = 0, puStack_48 != NULL)) {
        uVar3 = sym.minet_dump_tc_list(*puStack_48,noname_1,arg2);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym.mi_idletimer_tg_checkentry_v1;
    if (puVar4 == NULL) {
        _printk(0x8000911,"mi_idletimer_tg_checkentry_v1");
        return 0xffffffea;
    }
    if (*puVar4 == 0) {
        uVar3 = 0x800096a;
    }
    else if (*puVar4 < 0x20c49b) {
        puVar8 = puVar4 + 1;
        if ((*puVar8 != '\0') && (iVar5 = strnlen(puVar8,0x1c), iVar5 != 0x1c)) {
            if (puVar4[8] < 2) {
                mutex_lock(obj.list_mutex);
                pcVar9 = _obj.idletimer_tg_list;
                do {
                    if (pcVar9 == obj.idletimer_tg_list) {
                        puVar4[0x12] = 0;
                        puVar4[0x13] = 0;
code_r0x08002fc4:
                        puVar10 = puVar4 + 0x12;
                        pcVar9 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x178);
                        *puVar10 = pcVar9;
                        if (pcVar9 == NULL) {
                            mutex_unlock(obj.list_mutex);
                            return 0xfffffff4;
                        }
                        strncpy(pcVar9 + 0xf8,puVar8,0x1c);
                        pcVar1 = _obj.idletimer_tg_list;
                        uVar6 = __list_add_valid(pcVar9,obj.idletimer_tg_list,_obj.idletimer_tg_list);
                        if ((uVar6 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar9;
                            *pcVar9 = pcVar1;
                            *(pcVar9 + 8) = obj.idletimer_tg_list;
                            _obj.idletimer_tg_list = pcVar9;
                        }
                        *(*(puVar4 + 0x12) + 0x168) = 0;
                        *(*(puVar4 + 0x12) + 0x164) = 1;
                        *(*(puVar4 + 0x12) + 0x16a) = 1;
                        *(*(puVar4 + 0x12) + 0x16b) = 1;
                        *(*(puVar4 + 0x12) + 0x160) = *puVar4;
                        *(*(puVar4 + 0x12) + 0x118) = 0;
                        *(*(puVar4 + 0x12) + 0x120) = 0;
                        *(*(puVar4 + 0x12) + 0x169) = 0;
                        *(*(puVar4 + 0x12) + 0x16c) = 0;
                        iVar5 = *(puVar4 + 0x12);
                        ktime_get_with_offset(1);
                        auVar11 = ns_to_timespec64();
                        *(iVar5 + 0x128) = auVar11;
                        *(*(puVar4 + 0x12) + 0x148) = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        iVar2 = register_pm_notifier(*(puVar4 + 0x12) + 0x148);
                        if (iVar2 != 0) {
                            _printk(0x800080e,"idletimer_tg_create_v1",iVar2);
                        }
                        *(*puVar10 + 200) = 0xfffffffe0;
                        iVar5 = *puVar10;
                        *(iVar5 + 0xd0) = iVar5 + 0xd0;
                        *(iVar5 + 0xd8) = iVar5 + 0xd0;
                        *(*puVar10 + 0xe0) = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        init_timer_key(*puVar10 + 0x90,sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt
                                       ,0,0,0);
                        iVar7 = *puVar10;
                        iVar5 = __msecs_to_jiffies(*(iVar7 + 0x160) * 1000);
                        mod_timer(iVar7 + 0x90,_android_kmalloc_64_create + iVar5);
code_r0x08003140:
                        mutex_unlock(obj.list_mutex);
                        return 0;
                    }
                    iVar2 = strcmp(puVar8,pcVar9 + 0xf8);
                    if (iVar2 == 0) {
                        *(puVar4 + 0x12) = pcVar9;
                        if (pcVar9 == NULL) goto code_r0x08002fc4;
                        *(pcVar9 + 0x164) = *(pcVar9 + 0x164) + 1;
                        iVar5 = *(puVar4 + 0x12);
                        sym.reset_timer.llvm.10987903973441270003(iVar5,*(iVar5 + 0x160),0);
                        goto code_r0x08003140;
                    }
                    pcVar9 = *pcVar9;
                } while( true );
            }
            uVar3 = 0x8000579;
            goto code_r0x080031ac;
        }
        uVar3 = 0x800036b;
    }
    else {
        uVar3 = 0x80009c8;
    }
    _printk(uVar3);
    uVar3 = 0x8000703;
code_r0x080031ac:
    _printk(uVar3);
    return 0xffffffea;
}


// ===== sym.mi_idletimer_tg_checkentry_v1 @ 0x08002f18 (size 736) =====

ulong sym.mi_idletimer_tg_checkentry_v1(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    char *pcVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000911,"mi_idletimer_tg_checkentry_v1");
        return 0xffffffea;
    }
    if (*arg1 == 0) {
        uVar5 = 0x800096a;
    }
    else if (*arg1 < 0x20c49b) {
        pcVar7 = arg1 + 4;
        if ((*pcVar7 != '\0') && (iVar3 = strnlen(pcVar7,0x1c), iVar3 != 0x1c)) {
            if (*(arg1 + 0x20) < 2) {
                mutex_lock(obj.list_mutex);
                pcVar8 = _obj.idletimer_tg_list;
                do {
                    if (pcVar8 == obj.idletimer_tg_list) {
                        *(arg1 + 0x48) = 0;
code_r0x08002fc4:
                        piVar9 = arg1 + 0x48;
                        pcVar8 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x178);
                        *piVar9 = pcVar8;
                        if (pcVar8 == NULL) {
                            mutex_unlock(obj.list_mutex);
                            return 0xfffffff4;
                        }
                        strncpy(pcVar8 + 0xf8,pcVar7,0x1c);
                        pcVar1 = _obj.idletimer_tg_list;
                        uVar4 = __list_add_valid(pcVar8,obj.idletimer_tg_list,_obj.idletimer_tg_list);
                        if ((uVar4 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar8;
                            *pcVar8 = pcVar1;
                            *(pcVar8 + 8) = obj.idletimer_tg_list;
                            _obj.idletimer_tg_list = pcVar8;
                        }
                        *(*(arg1 + 0x48) + 0x168) = 0;
                        *(*(arg1 + 0x48) + 0x164) = 1;
                        *(*(arg1 + 0x48) + 0x16a) = 1;
                        *(*(arg1 + 0x48) + 0x16b) = 1;
                        *(*(arg1 + 0x48) + 0x160) = *arg1;
                        *(*(arg1 + 0x48) + 0x118) = 0;
                        *(*(arg1 + 0x48) + 0x120) = 0;
                        *(*(arg1 + 0x48) + 0x169) = 0;
                        *(*(arg1 + 0x48) + 0x16c) = 0;
                        iVar3 = *(arg1 + 0x48);
                        ktime_get_with_offset(1);
                        auVar10 = ns_to_timespec64();
                        *(iVar3 + 0x128) = auVar10;
                        *(*(arg1 + 0x48) + 0x148) = sym.idletimer_resume.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        iVar2 = register_pm_notifier(*(arg1 + 0x48) + 0x148);
                        if (iVar2 != 0) {
                            _printk(0x800080e,"idletimer_tg_create_v1",iVar2);
                        }
                        *(*piVar9 + 200) = 0xfffffffe0;
                        iVar3 = *piVar9;
                        *(iVar3 + 0xd0) = iVar3 + 0xd0;
                        *(iVar3 + 0xd8) = iVar3 + 0xd0;
                        *(*piVar9 + 0xe0) = sym.idletimer_tg_work.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt;
                        init_timer_key(*piVar9 + 0x90,sym.idletimer_tg_expired.c7825cb30afbb70c5bf2958fe5beb083.cfi_jt
                                       ,0,0,0);
                        iVar6 = *piVar9;
                        iVar3 = __msecs_to_jiffies(*(iVar6 + 0x160) * 1000);
                        mod_timer(iVar6 + 0x90,_android_kmalloc_64_create + iVar3);
code_r0x08003140:
                        mutex_unlock(obj.list_mutex);
                        return 0;
                    }
                    iVar2 = strcmp(pcVar7,pcVar8 + 0xf8);
                    if (iVar2 == 0) {
                        *(arg1 + 0x48) = pcVar8;
                        if (pcVar8 == NULL) goto code_r0x08002fc4;
                        *(pcVar8 + 0x164) = *(pcVar8 + 0x164) + 1;
                        iVar3 = *(arg1 + 0x48);
                        sym.reset_timer.llvm.10987903973441270003(iVar3,*(iVar3 + 0x160),0);
                        goto code_r0x08003140;
                    }
                    pcVar8 = *pcVar8;
                } while( true );
            }
            uVar5 = 0x8000579;
            goto code_r0x080031ac;
        }
        uVar5 = 0x800036b;
    }
    else {
        uVar5 = 0x80009c8;
    }
    _printk(uVar5);
    uVar5 = 0x8000703;
code_r0x080031ac:
    _printk(uVar5);
    return 0xffffffea;
}


// ===== sym.reset_timer.llvm.10987903973441270003 @ 0x080031f8 (size 216) =====

void sym.reset_timer.llvm.10987903973441270003(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = _android_kmalloc_64_create;
    _raw_spin_lock_bh(obj.timestamp_lock);
    cVar1 = *(arg1 + 0x16b);
    *(arg1 + 0x16b) = 1;
    if (cVar1 == '\0') {
        if (arg3 != 0) {
            *(arg1 + 0x16c) = *arg3;
        }
        uVar3 = __raw_spin_unlock_bh;
        if (*(arg1 + 0x169) == '\0') {
            *(arg1 + 0x169) = 1;
            queue_work_on(0x20,uVar3,arg1 + 200);
        }
        else {
            *(arg1 + 0x118) = *(arg1 + 0x128);
            *(arg1 + 0x120) = *(arg1 + 0x130);
        }
    }
    ktime_get_with_offset(1);
    auVar5 = ns_to_timespec64();
    *(arg1 + 0x128) = auVar5;
    iVar4 = __msecs_to_jiffies(arg2 * 1000);
    mod_timer(arg1 + 0x90,iVar4 + iVar2);
    _raw_spin_unlock_bh(obj.timestamp_lock);
    return;
}


// ===== sym.mi_idletimer_tg_target_v1 @ 0x080032d0 (size 56) =====

ulong sym.mi_idletimer_tg_target_v1(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.reset_timer.llvm.10987903973441270003(arg2,*(arg2 + 0x160),arg1);
    return 0;
}


// ===== sym.mi_idletimer_tg_destroy_v1 @ 0x08003308 (size 188) =====

void sym.mi_idletimer_tg_destroy_v1(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80009af,"mi_idletimer_tg_destroy_v1");
    }
    else {
        mutex_lock(obj.list_mutex);
        iVar3 = *(arg1 + 0x164) + -1;
        *(arg1 + 0x164) = iVar3;
        if (iVar3 == 0) {
            uVar4 = __list_del_entry_valid(arg1);
            if ((uVar4 & 1) != 0) {
                iVar1 = *arg1;
                piVar2 = *(arg1 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *arg1 = 0xdead000000000100;
            *(arg1 + 8) = 0xdead000000000122;
            del_timer_sync(arg1 + 0x90);
            unregister_pm_notifier(arg1 + 0x148);
            cancel_work_sync(arg1 + 200);
            kfree(arg1);
        }
        mutex_unlock(obj.list_mutex);
    }
    return;
}


// ===== sym.print_idletimer_info_safe @ 0x080033c4 (size 596) =====

uint64_t sym.print_idletimer_info_safe(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar7;
    uchar *puVar8;
    uint32_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x19;
    ulong *unaff_x20;
    ulong uVar13;
    uint64_t unaff_x22;
    ulong unaff_x30;
    uchar auVar14 [16];
    int64_t iStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    uint64_t uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar **ppuStack_190;
    code *pcStack_188;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uchar *puStack_100;
    uint64_t uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
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
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    int64_t iVar6;
    
    puVar8 = arg2;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    if (arg1 == 0) {
        _printk(0x80003e0,"print_idletimer_info_safe");
        uVar7 = 0;
    }
    else {
        uVar9 = arg3;
        bVar3 = uVar9 < 0x94;
        if (puVar8 == NULL || bVar3) {
            uVar9 = 0x94;
        }
        unaff_x19 = uVar9;
        unaff_x20 = puVar8;
        if (puVar8 == NULL || bVar3) {
            unaff_x20 = &uStack_f0;
        }
        iVar4 = snprintf(unaff_x20,unaff_x19,0x80003f8,*arg1);
        iVar5 = uVar9 - iVar4;
        if (0x1b < iVar5) {
            iVar5 = 0x1c;
        }
        iVar5 = snprintf(unaff_x20 + iVar4,iVar5,0x80004fc,arg1 + 4);
        iVar5 = iVar5 + iVar4;
        iVar4 = snprintf(unaff_x20 + iVar5,uVar9 - iVar5,0x80004ff);
        iVar5 = iVar5 + iVar4;
        iVar4 = snprintf(unaff_x20 + iVar5,uVar9 - iVar5,0x80003f8,*(arg1 + 0x20));
        iVar4 = iVar4 + iVar5;
        iVar5 = snprintf(unaff_x20 + iVar4,uVar9 - iVar4,0x80003f8,*(arg1 + 0x21));
        iVar5 = iVar5 + iVar4;
        iVar4 = uVar9 - iVar5;
        if (0xf < iVar4) {
            iVar4 = 0x10;
        }
        iVar4 = snprintf(unaff_x20 + iVar5,iVar4,0x80004fc,arg1 + 0x22);
        iVar5 = iVar5 + iVar4;
        iVar4 = snprintf(unaff_x20 + iVar5,uVar9 - iVar5,0x80004ff);
        iVar5 = iVar5 + iVar4;
        iVar4 = snprintf(unaff_x20 + iVar5,uVar9 - iVar5,0x8000369);
        iVar11 = 0;
        unaff_x22 = iVar5 + iVar4;
        do {
            iVar4 = unaff_x22;
            iVar5 = snprintf(unaff_x20 + iVar4,uVar9 - iVar4,"0x%02x ",*(arg1 + 0x32 + iVar11));
            iVar11 = iVar11 + 1;
            uVar1 = iVar5 + iVar4;
            unaff_x22 = uVar1;
        } while (iVar11 != 0x10);
        iVar5 = snprintf(unaff_x20 + uVar1,uVar9 - uVar1,0x800075b);
        uVar7 = iVar5 + uVar1;
        *(unaff_x20 + (uVar9 - 1)) = 0;
        _printk(0x8000a89,unaff_x20,uVar9,uVar7);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    auVar14 = __stack_chk_fail();
    iVar6 = auVar14._0_8_;
    *extraout_x18 = sym.idletimer_resume;
    iVar12 = _android_kmalloc_64_create;
    pcStack_118 = sym.idletimer_resume;
    iVar11 = sp_el0;
    iStack_128 = *(iVar11 + 0x5e0);
    uStack_148 = 0;
    uStack_140 = 0;
    puStack_120 = &stack0xffffffffffffffb0;
    uStack_110 = unaff_x22;
    uStack_108 = uVar7;
    puStack_100 = unaff_x20;
    uStack_f8 = unaff_x19;
    if (iVar6 != 0x148) {
        if (auVar14._8_8_ == 4) {
            if (*(iVar6 + 0x28) != '\0') {
                *(iVar6 + 0x28) = 0;
                _raw_spin_lock_bh(obj.timestamp_lock);
                if ((*(iVar6 + 0x23) != '\0') && (iVar12 - *(iVar6 + -0xa8) < 0)) {
                    ktime_get_with_offset(1);
                    auVar14 = ns_to_timespec64();
                    uStack_138 = 0;
                    uStack_130 = 0;
                    set_normalized_timespec64
                              (&uStack_138,auVar14._0_8_ - *(iVar6 + -0x10),auVar14._8_8_ - *(iVar6 + -8));
                    uStack_148 = uStack_138;
                    uStack_140 = uStack_130;
                    iVar11 = timespec64_to_jiffies(&uStack_148);
                    if (iVar11 + iVar12 < *(iVar6 + -0xa8)) {
                        mod_timer_pending(iVar6 + -0xb8,*(iVar6 + -0xa8) - iVar11);
                    }
                    else {
                        del_timer(iVar6 + -0xb8);
                        *(iVar6 + -0xa8) = 0;
                        *(iVar6 + 0x23) = 0;
                        *(iVar6 + 0x21) = 1;
                        queue_work_on(0x20,__raw_spin_unlock_bh,iVar6 + -0x80);
                    }
                }
                _raw_spin_unlock_bh(obj.timestamp_lock);
            }
        }
        else if (auVar14._8_8_ == 3) {
            ktime_get_with_offset(1);
            auVar14 = ns_to_timespec64();
            *(iVar6 + 0x28) = 1;
            *(iVar6 + -0x10) = auVar14;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_128) {
        return 0;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.idletimer_tg_work;
    pcStack_188 = sym.idletimer_tg_work;
    iVar11 = sp_el0;
    iStack_198 = *(iVar11 + 0x5e0);
    ppuStack_190 = &puStack_120;
    if (*(uVar7 + 0xa2) == '\0') goto code_r0x080039b4;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    iStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    iVar5 = snprintf(&uStack_1d8,0x40,"INTERFACE=%s",0x800048c);
    if (0x3f < iVar5) {
        uStack_1d8 = uStack_1d8 & 0xffffffffffffff00;
        _printk(0x8000519,iVar5);
    }
    ktime_get_with_offset(1);
    auVar14 = ns_to_timespec64();
    _raw_spin_lock_bh(obj.timestamp_lock);
    *(uVar7 + 0xa1) = 0;
    iVar11 = *(uVar7 + 0x98);
    iVar12 = *(uVar7 + 0x50);
    if (iVar11 < auVar14._0_8_ - *(uVar7 + 0x60)) {
        if (iVar12 == 0) {
            iStack_2d8 = 0;
            uStack_2d0 = 0;
            set_normalized_timespec64(&iStack_2d8,*(uVar7 + 0x60) + iVar11,*(uVar7 + 0x68));
            iVar11 = iStack_2d8;
            uVar13 = uStack_2d0;
        }
        else {
code_r0x08003880:
            iStack_2d8 = 0;
            uStack_2d0 = 0;
            set_normalized_timespec64(&iStack_2d8,iVar12 + iVar11,*(uVar7 + 0x58));
            uVar13 = uStack_2d0;
            iVar11 = iStack_2d8;
            *(uVar7 + 0x50) = 0;
            *(uVar7 + 0xa1) = 1;
            queue_work_on(0x20,__raw_spin_unlock_bh,uVar7);
        }
        auVar14._8_8_ = uVar13;
        auVar14._0_8_ = iVar11;
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar3 = false;
        pcVar10 = "inactive";
    }
    else {
        if (iVar12 != 0) goto code_r0x08003880;
        cVar2 = *(uVar7 + 0xa3);
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar3 = cVar2 != '\0';
        pcVar10 = "active";
        if (!bVar3) {
            pcVar10 = "inactive";
        }
    }
    iVar11 = auVar14._0_8_;
    iVar5 = snprintf(&uStack_218,0x40,"STATE=%s",pcVar10);
    if (0x3f < iVar5) {
        _printk(0x800060e,iVar5);
    }
    if ((bVar3) && (iVar5 = snprintf(&uStack_298,0x40,"UID=%u",*(uVar7 + 0xa4)), 0x3f < iVar5)) {
        _printk(0x8000632,iVar5);
    }
    if (iVar11 < 0x225c17d04) {
        if (iVar11 < -0x225c17d03) {
            iVar11 = -0x8000000000000000;
        }
        else {
            iVar11 = auVar14._8_8_ + iVar11 * 1000000000;
        }
    }
    else {
        iVar11 = 0x7fffffffffffffff;
    }
    iVar5 = snprintf(&uStack_258,0x40,"TIME_NS=%llu",iVar11);
    if (0x3f < iVar5) {
        _printk(0x80008b5,iVar5);
    }
    uStack_2c8 = *(uVar7 + 0x30);
    uStack_2c0 = *(uVar7 + 0x38);
    uStack_2b8 = *(uVar7 + 0x40);
    uStack_2b0 = CONCAT44(CONCAT31(uStack_2b0._5_3_,bVar3),*(uVar7 + 0x48));
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,*(uVar7 + 0xa4));
    iStack_2a8 = iVar11;
    uVar7 = sym.minet_nl_msg(&uStack_2c8,0x30,0,4);
code_r0x080039b4:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_198) {
        iVar11 = __stack_chk_fail();
        *extraout_x18_01 = sym.idletimer_tg_expired;
        _raw_spin_lock_bh(obj.timestamp_lock);
        *(iVar11 + 0xdb) = 0;
        *(iVar11 + 0xd9) = 1;
        queue_work_on(0x20,__raw_spin_unlock_bh,iVar11 + 0x38);
        uVar7 = _raw_spin_unlock_bh(obj.timestamp_lock);
        return uVar7;
    }
    return uVar7;
}


// ===== sym.idletimer_resume @ 0x08003618 (size 352) =====

int64_t sym.idletimer_resume(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
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
    uint64_t uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = _android_kmalloc_64_create;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    if (arg1 != 0x148) {
        if (arg2 == 4) {
            if (*(arg1 + 0x28) != '\0') {
                *(arg1 + 0x28) = 0;
                _raw_spin_lock_bh(obj.timestamp_lock);
                if ((*(arg1 + 0x23) != '\0') && (iVar4 - *(arg1 + -0xa8) < 0)) {
                    ktime_get_with_offset(1);
                    auVar9 = ns_to_timespec64();
                    uStack_48 = 0;
                    uStack_40 = 0;
                    set_normalized_timespec64(&uStack_48,auVar9._0_8_ - *(arg1 + -0x10),auVar9._8_8_ - *(arg1 + -8));
                    uStack_58 = uStack_48;
                    uStack_50 = uStack_40;
                    iVar6 = timespec64_to_jiffies(&uStack_58);
                    if (iVar6 + iVar4 < *(arg1 + -0xa8)) {
                        mod_timer_pending(arg1 + -0xb8,*(arg1 + -0xa8) - iVar6);
                    }
                    else {
                        del_timer(arg1 + -0xb8);
                        *(arg1 + -0xa8) = 0;
                        *(arg1 + 0x23) = 0;
                        *(arg1 + 0x21) = 1;
                        queue_work_on(0x20,__raw_spin_unlock_bh,arg1 + -0x80);
                    }
                }
                _raw_spin_unlock_bh(obj.timestamp_lock);
            }
        }
        else if (arg2 == 3) {
            ktime_get_with_offset(1);
            auVar9 = ns_to_timespec64();
            *(arg1 + 0x28) = 1;
            *(arg1 + -0x10) = auVar9;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.idletimer_tg_work;
    pcStack_98 = sym.idletimer_tg_work;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (*(iVar4 + 0xa2) == '\0') goto code_r0x080039b4;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    iStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    iVar3 = snprintf(&uStack_e8,0x40,"INTERFACE=%s",0x800048c);
    if (0x3f < iVar3) {
        uStack_e8 = uStack_e8 & 0xffffffffffffff00;
        _printk(0x8000519,iVar3);
    }
    ktime_get_with_offset(1);
    auVar9 = ns_to_timespec64();
    _raw_spin_lock_bh(obj.timestamp_lock);
    *(iVar4 + 0xa1) = 0;
    iVar6 = *(iVar4 + 0x98);
    iVar7 = *(iVar4 + 0x50);
    if (iVar6 < auVar9._0_8_ - *(iVar4 + 0x60)) {
        if (iVar7 == 0) {
            iStack_1e8 = 0;
            uStack_1e0 = 0;
            set_normalized_timespec64(&iStack_1e8,*(iVar4 + 0x60) + iVar6,*(iVar4 + 0x68));
            iVar6 = iStack_1e8;
            uVar8 = uStack_1e0;
        }
        else {
code_r0x08003880:
            iStack_1e8 = 0;
            uStack_1e0 = 0;
            set_normalized_timespec64(&iStack_1e8,iVar7 + iVar6,*(iVar4 + 0x58));
            uVar8 = uStack_1e0;
            iVar6 = iStack_1e8;
            *(iVar4 + 0x50) = 0;
            *(iVar4 + 0xa1) = 1;
            queue_work_on(0x20,__raw_spin_unlock_bh,iVar4);
        }
        auVar9._8_8_ = uVar8;
        auVar9._0_8_ = iVar6;
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar2 = false;
        pcVar5 = "inactive";
    }
    else {
        if (iVar7 != 0) goto code_r0x08003880;
        cVar1 = *(iVar4 + 0xa3);
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar2 = cVar1 != '\0';
        pcVar5 = "active";
        if (!bVar2) {
            pcVar5 = "inactive";
        }
    }
    iVar6 = auVar9._0_8_;
    iVar3 = snprintf(&uStack_128,0x40,"STATE=%s",pcVar5);
    if (0x3f < iVar3) {
        _printk(0x800060e,iVar3);
    }
    if ((bVar2) && (iVar3 = snprintf(&uStack_1a8,0x40,"UID=%u",*(iVar4 + 0xa4)), 0x3f < iVar3)) {
        _printk(0x8000632,iVar3);
    }
    if (iVar6 < 0x225c17d04) {
        if (iVar6 < -0x225c17d03) {
            iVar6 = -0x8000000000000000;
        }
        else {
            iVar6 = auVar9._8_8_ + iVar6 * 1000000000;
        }
    }
    else {
        iVar6 = 0x7fffffffffffffff;
    }
    iVar3 = snprintf(&uStack_168,0x40,"TIME_NS=%llu",iVar6);
    if (0x3f < iVar3) {
        _printk(0x80008b5,iVar3);
    }
    uStack_1d8 = *(iVar4 + 0x30);
    uStack_1d0 = *(iVar4 + 0x38);
    uStack_1c8 = *(iVar4 + 0x40);
    uStack_1c0 = CONCAT44(CONCAT31(uStack_1c0._5_3_,bVar2),*(iVar4 + 0x48));
    uStack_1b0 = CONCAT44(uStack_1b0._4_4_,*(iVar4 + 0xa4));
    iStack_1b8 = iVar6;
    iVar4 = sym.minet_nl_msg(&uStack_1d8,0x30,0,4);
code_r0x080039b4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_a8) {
        iVar6 = __stack_chk_fail();
        *extraout_x18_00 = sym.idletimer_tg_expired;
        _raw_spin_lock_bh(obj.timestamp_lock);
        *(iVar6 + 0xdb) = 0;
        *(iVar6 + 0xd9) = 1;
        queue_work_on(0x20,__raw_spin_unlock_bh,iVar6 + 0x38);
        iVar6 = _raw_spin_unlock_bh(obj.timestamp_lock);
        return iVar6;
    }
    return iVar4;
}


// ===== sym.idletimer_tg_work @ 0x08003778 (size 764) =====

void sym.idletimer_tg_work(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    char *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t iStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
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
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    uint64_t uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    if (*(arg1 + 0xa2) == '\0') goto code_r0x080039b4;
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
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    iStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    iVar3 = snprintf(&uStack_88,0x40,"INTERFACE=%s",0x800048c);
    if (0x3f < iVar3) {
        uStack_88 = uStack_88 & 0xffffffffffffff00;
        _printk(0x8000519,iVar3);
    }
    ktime_get_with_offset(1);
    auVar8 = ns_to_timespec64();
    _raw_spin_lock_bh(obj.timestamp_lock);
    *(arg1 + 0xa1) = 0;
    iVar5 = *(arg1 + 0x98);
    iVar6 = *(arg1 + 0x50);
    if (iVar5 < auVar8._0_8_ - *(arg1 + 0x60)) {
        if (iVar6 == 0) {
            iStack_188 = 0;
            uStack_180 = 0;
            set_normalized_timespec64(&iStack_188,*(arg1 + 0x60) + iVar5,*(arg1 + 0x68));
            iVar5 = iStack_188;
            uVar7 = uStack_180;
        }
        else {
code_r0x08003880:
            iStack_188 = 0;
            uStack_180 = 0;
            set_normalized_timespec64(&iStack_188,iVar6 + iVar5,*(arg1 + 0x58));
            uVar7 = uStack_180;
            iVar5 = iStack_188;
            *(arg1 + 0x50) = 0;
            *(arg1 + 0xa1) = 1;
            queue_work_on(0x20,__raw_spin_unlock_bh,arg1);
        }
        auVar8._8_8_ = uVar7;
        auVar8._0_8_ = iVar5;
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar2 = false;
        pcVar4 = "inactive";
    }
    else {
        if (iVar6 != 0) goto code_r0x08003880;
        cVar1 = *(arg1 + 0xa3);
        _raw_spin_unlock_bh(obj.timestamp_lock);
        bVar2 = cVar1 != '\0';
        pcVar4 = "active";
        if (!bVar2) {
            pcVar4 = "inactive";
        }
    }
    iVar5 = auVar8._0_8_;
    iVar3 = snprintf(&uStack_c8,0x40,"STATE=%s",pcVar4);
    if (0x3f < iVar3) {
        _printk(0x800060e,iVar3);
    }
    if ((bVar2) && (iVar3 = snprintf(&uStack_148,0x40,"UID=%u",*(arg1 + 0xa4)), 0x3f < iVar3)) {
        _printk(0x8000632,iVar3);
    }
    if (iVar5 < 0x225c17d04) {
        if (iVar5 < -0x225c17d03) {
            iVar5 = -0x8000000000000000;
        }
        else {
            iVar5 = auVar8._8_8_ + iVar5 * 1000000000;
        }
    }
    else {
        iVar5 = 0x7fffffffffffffff;
    }
    iVar3 = snprintf(&uStack_108,0x40,"TIME_NS=%llu",iVar5);
    if (0x3f < iVar3) {
        _printk(0x80008b5,iVar3);
    }
    uStack_178 = *(arg1 + 0x30);
    uStack_170 = *(arg1 + 0x38);
    uStack_168 = *(arg1 + 0x40);
    uStack_160 = CONCAT44(CONCAT31(uStack_160._5_3_,bVar2),*(arg1 + 0x48));
    uStack_150 = CONCAT44(uStack_150._4_4_,*(arg1 + 0xa4));
    iStack_158 = iVar5;
    sym.minet_nl_msg(&uStack_178,0x30,0,4);
code_r0x080039b4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.idletimer_tg_expired;
        _raw_spin_lock_bh(obj.timestamp_lock);
        *(iVar5 + 0xdb) = 0;
        *(iVar5 + 0xd9) = 1;
        queue_work_on(0x20,__raw_spin_unlock_bh,iVar5 + 0x38);
        _raw_spin_unlock_bh(obj.timestamp_lock);
        return;
    }
    return;
}


// ===== sym.idletimer_tg_expired @ 0x08003a74 (size 100) =====

void sym.idletimer_tg_expired(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(obj.timestamp_lock);
    *(arg1 + 0xdb) = 0;
    *(arg1 + 0xd9) = 1;
    queue_work_on(0x20,__raw_spin_unlock_bh,arg1 + 0x38);
    _raw_spin_unlock_bh(obj.timestamp_lock);
    return;
}


// ===== sym.tl_after_filter_in @ 0x08003ad8 (size 320) =====

int64_t sym.tl_after_filter_in(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint uVar3;
    int iVar4;
    uint8_t *puVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint8_t extraout_w1;
    uint64_t *puVar8;
    uint *extraout_x8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint8_t uVar10;
    uint32_t uVar11;
    uint8_t *puVar12;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar4 = arg2;
    iStack_2c = iVar4;
    if ((((arg1 != 0) && (_obj.m_tc_enable != 0)) && (puVar8 = *(arg1 + 0x10), puVar8 != NULL)) &&
       (((*0x80001fa ^ puVar8[1]) & *0x800020a) == 0 && ((*0x80001f2 ^ *puVar8) & *0x8000202) == 0)) {
        _raw_read_lock_bh(0x8000224);
        if ((*0x8000230 == 0x8000230) || (*0x8000230 == 0x8000230)) {
            arg1 = _raw_read_unlock_bh(0x8000224);
        }
        else {
            uVar10 = 0;
            piVar9 = *0x8000230;
            do {
                if (*(piVar9 + -4) == iVar4) {
                    uVar10 = *(piVar9 + -1) & 1;
                }
                piVar9 = *piVar9;
            } while (piVar9 != 0x8000230);
            arg1 = _raw_read_unlock_bh(0x8000224);
            if (uVar10 != 0) {
                arg1 = sym.reset_timer.llvm.10987903973441270003
                                 (CONCAT44(*0x8000004,_segment.ehdr),*(CONCAT44(*0x8000004,_segment.ehdr) + 0x160),
                                  &stack0xffffffffffffffd4);
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg1;
    }
    iVar4 = __stack_chk_fail();
    uVar3 = *extraout_x8;
    *extraout_x18 = 0x8003c10;
    _raw_write_lock_bh(uVar3,0x8000224);
    piVar9 = 0x8000230;
    if (*0x8000230 == 0x8000230) {
code_r0x08003c98:
        if (_segment.ehdr < 0x200) {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xa20,0x18);
            puVar2 = *0x8000238;
            if (puVar5 != NULL) {
                puVar5[0x10] = 0;
                puVar5[0x11] = 0;
                puVar5[0x12] = 0;
                puVar5[0x13] = 0;
                puVar5[0x14] = 0;
                puVar5[0x15] = 0;
                puVar5[0x16] = 0;
                puVar5[0x17] = 0;
                puVar5[0] = 0;
                puVar5[1] = 0;
                puVar5[2] = 0;
                puVar5[3] = 0;
                puVar5[4] = 0;
                puVar5[5] = 0;
                puVar5[6] = 0;
                puVar5[7] = 0;
                puVar12 = puVar5 + 8;
                puVar12[0] = 0;
                puVar12[1] = 0;
                puVar12[2] = 0;
                puVar12[3] = 0;
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[6] = 0;
                puVar12[7] = 0;
                uVar6 = __list_add_valid(puVar12,puVar2,0x8000230);
                if ((uVar6 & 1) != 0) {
                    *0x8000238 = puVar12;
                    puVar5[8] = 0x30;
                    puVar5[9] = 2;
                    puVar5[10] = 0;
                    puVar5[0xb] = 8;
                    puVar5[0xc] = 0;
                    puVar5[0xd] = 0;
                    puVar5[0xe] = 0;
                    puVar5[0xf] = 0;
                    *(puVar5 + 0x10) = puVar2;
                    *puVar2 = puVar12;
                }
                uVar11 = 0;
                *(puVar5 + 4) = iVar4;
                *puVar5 = extraout_w1;
                _segment.ehdr = _segment.ehdr + 1;
                goto code_r0x08003d2c;
            }
            uVar7 = 0x8000929;
        }
        else {
            uVar7 = 0x8000499;
        }
        _printk(uVar7,"add_tc_app");
        uVar11 = 0xffffffff;
    }
    else {
        do {
            piVar9 = *piVar9;
            if (piVar9 == 0x8000230) goto code_r0x08003c98;
        } while (*(piVar9 + -4) != iVar4);
        uVar11 = 0;
        *(piVar9 + -1) = *(piVar9 + -1) | extraout_w1;
    }
code_r0x08003d2c:
    _raw_write_unlock_bh(0x8000224);
    return uVar11;
}


// ===== sym.add_tc_app @ 0x08003c18 (size 364) =====

uint sym.add_tc_app(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint8_t *puVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t *piVar6;
    ulong *in_x18;
    uint uVar7;
    uint8_t *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_write_lock_bh(0x8000224);
    piVar6 = 0x8000230;
    if (*0x8000230 == 0x8000230) {
code_r0x08003c98:
        if (_segment.ehdr < 0x200) {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xa20,0x18);
            puVar2 = *0x8000238;
            if (puVar3 != NULL) {
                puVar3[0x10] = 0;
                puVar3[0x11] = 0;
                puVar3[0x12] = 0;
                puVar3[0x13] = 0;
                puVar3[0x14] = 0;
                puVar3[0x15] = 0;
                puVar3[0x16] = 0;
                puVar3[0x17] = 0;
                puVar3[0] = 0;
                puVar3[1] = 0;
                puVar3[2] = 0;
                puVar3[3] = 0;
                puVar3[4] = 0;
                puVar3[5] = 0;
                puVar3[6] = 0;
                puVar3[7] = 0;
                puVar8 = puVar3 + 8;
                puVar8[0] = 0;
                puVar8[1] = 0;
                puVar8[2] = 0;
                puVar8[3] = 0;
                puVar8[4] = 0;
                puVar8[5] = 0;
                puVar8[6] = 0;
                puVar8[7] = 0;
                uVar4 = __list_add_valid(puVar8,puVar2,0x8000230);
                if ((uVar4 & 1) != 0) {
                    *0x8000238 = puVar8;
                    puVar3[8] = 0x30;
                    puVar3[9] = 2;
                    puVar3[10] = 0;
                    puVar3[0xb] = 8;
                    puVar3[0xc] = 0;
                    puVar3[0xd] = 0;
                    puVar3[0xe] = 0;
                    puVar3[0xf] = 0;
                    *(puVar3 + 0x10) = puVar2;
                    *puVar2 = puVar8;
                }
                uVar7 = 0;
                *(puVar3 + 4) = arg1;
                *puVar3 = arg2;
                _segment.ehdr = _segment.ehdr + 1;
                goto code_r0x08003d2c;
            }
            uVar5 = 0x8000929;
        }
        else {
            uVar5 = 0x8000499;
        }
        _printk(uVar5,"add_tc_app");
        uVar7 = 0xffffffff;
    }
    else {
        do {
            piVar6 = *piVar6;
            if (piVar6 == 0x8000230) goto code_r0x08003c98;
        } while (*(piVar6 + -4) != arg1);
        uVar7 = 0;
        *(piVar6 + -1) = *(piVar6 + -1) | arg2;
    }
code_r0x08003d2c:
    _raw_write_unlock_bh(0x8000224);
    return uVar7;
}


// ===== sym.minet_set_tc_enable @ 0x08003d88 (size 472) =====

uint64_t sym.minet_set_tc_enable(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    uint8_t uVar5;
    uint uVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint8_t *puVar9;
    uint8_t uVar10;
    uint uVar11;
    int64_t *piVar12;
    uint *extraout_x10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar13 [16];
    int aiStack_38 [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    aiStack_38[1] = 0;
    aiStack_38[2] = 0;
    aiStack_38[0] = _obj.m_tc_enable;
    if (arg1 == 0) {
        _printk(0x80003fc,"minet_set_tc_enable");
    }
    else if (arg2 == 0x18) {
        uVar1 = *arg1;
        if (uVar1 < 2) {
            if ((aiStack_38[0] == 0) && (uVar1 != 0)) {
                _segment.ehdr = 1;
                aiStack_38[0] = *arg1;
                sym.reset_timer.llvm.10987903973441270003
                          (CONCAT44(*0x8000004,1),*(CONCAT44(*0x8000004,1) + 0x160),0);
                uVar8 = 0x8000687;
            }
            else {
                if (uVar1 != 0) {
                    _printk(0x800069f,"minet_set_tc_enable",_obj.m_tc_enable,1);
                    aiStack_38[1] = 1;
                    goto code_r0x08003e40;
                }
                if (aiStack_38[0] == 0) {
                    uVar8 = 0x800053d;
                }
                else {
                    _segment.ehdr = 0;
                    aiStack_38[0] = *arg1;
                    uVar8 = 0x80004b7;
                }
            }
            _printk(uVar8,"minet_set_tc_enable");
            goto code_r0x08003e40;
        }
        _printk(0x80008dd,"minet_set_tc_enable",uVar1,1);
    }
    else {
        _printk(0x800078f,"minet_set_tc_enable",arg2,0x18);
    }
    aiStack_38[1] = 3;
code_r0x08003e40:
    uVar7 = sym.minet_nl_reply(&stack0xffffffffffffffc8,0xc,arg3,7);
    uVar11 = arg3 >> 0x20;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar7;
    }
    auVar13 = __stack_chk_fail();
    puVar9 = auVar13._0_8_;
    uVar6 = *extraout_x10;
    *extraout_x18 = 0x8003f5c;
    if (puVar9 == NULL) {
        _printk(0x80003fc,"minet_set_tc_list",CONCAT44(uVar11,uVar6));
    }
    else if (auVar13._8_4_ == 8) {
        uVar10 = *puVar9;
        if ((uVar10 & 0xf0) == 0) {
            uVar5 = puVar9[1];
            if (uVar5 == 3) {
                sym.clear_tc_app.llvm.6928247255886231775();
                return 0;
            }
            if (uVar5 == 2) {
                iVar4 = *(puVar9 + 4);
                _raw_write_lock_bh(0x8000224);
                if (*0x8000230 == 0x8000230) {
code_r0x080040cc:
                    _printk(0x80007ef,"del_tc_app",iVar4);
                    uVar7 = 0xffffffff;
                }
                else {
                    piVar12 = 0x8000230;
                    do {
                        piVar12 = *piVar12;
                        if (piVar12 == 0x8000230) goto code_r0x080040cc;
                    } while (*(piVar12 + -4) != iVar4);
                    puVar9 = piVar12 + -1;
                    uVar1 = *puVar9 & (uVar10 ^ 0xffffffff);
                    *puVar9 = uVar1;
                    if (uVar1 == 0) {
                        if (puVar9 == NULL) {
                            _printk(0x8000911,"destroy_app");
                            uVar7 = 0;
                        }
                        else {
                            uVar7 = __list_del_entry_valid(piVar12);
                            if ((uVar7 & 1) != 0) {
                                iVar2 = *piVar12;
                                piVar3 = piVar12[1];
                                *(iVar2 + 8) = piVar3;
                                *piVar3 = iVar2;
                            }
                            *piVar12 = piVar12;
                            piVar12[1] = piVar12;
                            kfree(puVar9);
                            uVar7 = 0;
                            _segment.ehdr = _segment.ehdr + -1;
                        }
                    }
                    else {
                        uVar7 = 0;
                    }
                }
                _raw_write_unlock_bh(0x8000224);
                return uVar7;
            }
            if (uVar5 == 1) {
                uVar7 = sym.add_tc_app(*(puVar9 + 4),uVar10);
                return uVar7 & 0xffffffff;
            }
            uVar8 = 0x800094d;
            uVar10 = uVar5;
        }
        else {
            uVar8 = 0x800040f;
        }
        _printk(uVar8,"minet_set_tc_list",uVar10);
    }
    else {
        _printk(0x800078f,"minet_set_tc_list",auVar13._8_8_ & 0xffffffff,8);
    }
    return 0xffffffff;
}


// ===== sym.minet_set_tc_list @ 0x08003f60 (size 488) =====

uint sym.minet_set_tc_list(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    uint8_t uVar5;
    uint uVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint8_t uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    uint8_t *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80003fc,"minet_set_tc_list");
    }
    else if (arg2 == 8) {
        uVar9 = *arg1;
        if ((uVar9 & 0xf0) == 0) {
            uVar5 = *(arg1 + 1);
            if (uVar5 == 3) {
                sym.clear_tc_app.llvm.6928247255886231775();
                return 0;
            }
            if (uVar5 == 2) {
                iVar4 = *(arg1 + 4);
                _raw_write_lock_bh(0x8000224);
                if (*0x8000230 == 0x8000230) {
code_r0x080040cc:
                    _printk(0x80007ef,"del_tc_app",iVar4);
                    uVar6 = 0xffffffff;
                }
                else {
                    piVar10 = 0x8000230;
                    do {
                        piVar10 = *piVar10;
                        if (piVar10 == 0x8000230) goto code_r0x080040cc;
                    } while (*(piVar10 + -4) != iVar4);
                    puVar11 = piVar10 + -1;
                    uVar1 = *puVar11 & (uVar9 ^ 0xffffffff);
                    *puVar11 = uVar1;
                    if (uVar1 == 0) {
                        if (puVar11 == NULL) {
                            _printk(0x8000911,"destroy_app");
                            uVar6 = 0;
                        }
                        else {
                            uVar7 = __list_del_entry_valid(piVar10);
                            if ((uVar7 & 1) != 0) {
                                iVar2 = *piVar10;
                                piVar3 = piVar10[1];
                                *(iVar2 + 8) = piVar3;
                                *piVar3 = iVar2;
                            }
                            *piVar10 = piVar10;
                            piVar10[1] = piVar10;
                            kfree(puVar11);
                            uVar6 = 0;
                            _segment.ehdr = _segment.ehdr + -1;
                        }
                    }
                    else {
                        uVar6 = 0;
                    }
                }
                _raw_write_unlock_bh(0x8000224);
                return uVar6;
            }
            if (uVar5 == 1) {
                uVar6 = sym.add_tc_app(*(arg1 + 4),uVar9);
                return uVar6;
            }
            uVar8 = 0x800094d;
            uVar9 = uVar5;
        }
        else {
            uVar8 = 0x800040f;
        }
        _printk(uVar8,"minet_set_tc_list",uVar9);
    }
    else {
        _printk(0x800078f,"minet_set_tc_list",arg2,8);
    }
    return 0xffffffff;
}


// ===== sym.clear_tc_app.llvm.6928247255886231775 @ 0x0800414c (size 264) =====

void sym.clear_tc_app.llvm.6928247255886231775(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_write_lock_bh(0x8000224);
    piVar3 = *0x8000230;
    while (piVar3 != 0x8000230) {
        piVar5 = *piVar3;
        if (piVar3 + -1 == NULL) {
            _printk(0x8000911,"destroy_app");
            piVar3 = piVar5;
        }
        else {
            uVar4 = __list_del_entry_valid(piVar3);
            if ((uVar4 & 1) != 0) {
                iVar1 = *piVar3;
                piVar2 = piVar3[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar3 = piVar3;
            piVar3[1] = piVar3;
            kfree(piVar3 + -1);
            _segment.ehdr = _segment.ehdr + -1;
            piVar3 = piVar5;
        }
    }
    _raw_write_unlock_bh(0x8000224);
    _printk(0x8000501,"clear_tc_app");
    return;
}


// ===== sym.minet_dump_tc_list @ 0x08004258 (size 864) =====

ulong sym.minet_dump_tc_list(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    uint *arg1_00;
    ulong uVar5;
    uint extraout_x1;
    uint *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    uint uVar7;
    uint64_t uVar8;
    uint *puVar9;
    uint *puVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uint uStack_cc;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    uint uStack_bc;
    uint uStack_b8;
    uint uStack_b4;
    uint uStack_b0;
    uint uStack_ac;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    uint uStack_90;
    ulong uStack_8c;
    ulong uStack_84;
    ulong uStack_7c;
    ulong uStack_74;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    if (obj.minet_dump_tc_list.dumping == 0x1) {
        _printk(0x800042d,"minet_dump_tc_list");
    }
    else {
        obj.minet_dump_tc_list.dumping = 0x1;
        _printk(0x800039c);
        uStack_c8 = _obj.m_tc_enable;
        _printk(0x800044b);
        uStack_c4 = _segment.ehdr;
        uStack_c0 = _segment.ehdr;
        uStack_bc = _segment.ehdr;
        uStack_b8 = _segment.ehdr;
        uStack_b4 = _segment.ehdr;
        uStack_b0 = 1;
        _printk(0x80009ed);
        uStack_ac = _obj.m_idletimer_info.llvm.6928247255886231775;
        uStack_a8 = *0x80001d4;
        uStack_a0 = *0x80001dc;
        uStack_90 = *0x80001ec;
        uStack_98 = *0x80001e4;
        uStack_8c = *0x80001f2;
        uStack_84 = *0x80001fa;
        uStack_74 = *0x800020a;
        uStack_7c = *0x8000202;
        sym.print_idletimer_info_safe(0x80001d0,0,0);
        uStack_cc = 2;
        _raw_read_lock_bh(0x8000224);
        uVar8 = _obj.m_tc_list * 5;
        uVar6 = uVar8 + 8;
        arg1_00 = __kmalloc(uVar6,0xb20);
        uVar3 = _segment.ehdr;
        if (arg1_00 == NULL) {
            _printk(0x80003bc,"minet_dump_tc_list");
            uVar6 = 0;
            uVar8 = 0;
            puVar9 = NULL;
            uVar7 = 2;
            uVar3 = _segment.ehdr;
        }
        else {
            uVar7 = 3;
            puVar9 = arg1_00 + 2;
            uStack_cc = 3;
            *arg1_00 = 1;
            arg1_00[1] = uVar3;
        }
        _printk(0x8000463,uVar3);
        piVar11 = *0x8000230;
        if (*0x8000230 != 0x8000230) {
            while (piVar2 = piVar11, piVar2 != 0x8000230) {
                piVar11 = *piVar2;
                _printk(0x8000838,*(piVar2 + -4),*(piVar2 + -1));
                puVar10 = puVar9;
                if ((puVar9 != NULL) && (3 < uVar8)) {
                    puVar10 = puVar9 + 1;
                    *puVar9 = *(piVar2 + -4);
                    uVar8 = uVar8 - 4;
                }
                puVar9 = puVar10;
                uVar7 = uStack_cc;
                if ((puVar10 != NULL) && (uVar8 != 0)) {
                    uVar8 = uVar8 - 1;
                    puVar9 = puVar10 + 1;
                    *puVar10 = *(piVar2 + -1);
                }
            }
        }
        _raw_read_unlock_bh(0x8000224);
        _printk(0x8000ab1,uVar7);
        iVar4 = sym.minet_nl_reply(&stack0xffffffffffffff38,0x5c,arg1,7);
        if (iVar4 != 0) {
            _printk(0x80006e1,"minet_dump_tc_list");
        }
        if (((arg1_00 != NULL) && (uVar8 == 0)) &&
           (iVar4 = sym.minet_nl_reply(arg1_00,uVar6 & 0xffffffff,arg1,7), iVar4 != 0)) {
            _printk(0x800098c,"minet_dump_tc_list");
        }
        iVar4 = sym.minet_nl_reply(&stack0xffffffffffffff34,4,arg1,7);
        if (iVar4 != 0) {
            _printk(0x800098c,"minet_dump_tc_list");
        }
        obj.minet_dump_tc_list.dumping = 0x0;
        if (arg1_00 != NULL) {
            obj.minet_dump_tc_list.dumping = 0x0;
            kfree(arg1_00);
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        uVar5 = __stack_chk_fail();
        uVar3 = *extraout_x8;
        *extraout_x18 = 0x80045b0;
        sym.clear_tc_app.llvm.6928247255886231775(in_tmp_ldXn,uVar5,CONCAT44(extraout_x1,uVar3));
        uVar5 = sym.mi_idletimer_tg_destroy_v1(CONCAT44(*0x8000004,_segment.ehdr));
        return uVar5;
    }
    return 0;
}


// ===== sym.minet_tc_limiter_finit @ 0x080045b8 (size 48) =====

void sym.minet_tc_limiter_finit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.clear_tc_app.llvm.6928247255886231775();
    sym.mi_idletimer_tg_destroy_v1(_segment.ehdr);
    return;
}


// ===== sym.init_module @ 0x080045f4 (size 356) =====

ulong sym.init_module(void)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x310);
    if (iVar2 == 0) {
        _segment.ehdr = iVar2;
        return 0xffffffff;
    }
    _segment.ehdr = iVar2;
    memset(iVar2,0,0x310);
    iVar5 = 0;
    *(iVar2 + 0x18) = iVar2 + 0x18;
    *(iVar2 + 0x20) = iVar2 + 0x18;
    *(iVar2 + 0x2c) = 0;
    *(iVar2 + 0x30) = iVar2 + 0x30;
    *(iVar2 + 0x38) = iVar2 + 0x30;
    do {
        iVar2 = _segment.ehdr + iVar5;
        iVar5 = iVar5 + 0x18;
        *(iVar2 + 0x44) = 0;
        *(iVar2 + 0x48) = iVar2 + 0x48;
        *(iVar2 + 0x50) = iVar2 + 0x48;
    } while (iVar5 != 0x2d0);
    iVar1 = sym.minet_tc_limiter_init();
    if (iVar1 == 0) {
        iVar1 = nf_register_net_hooks(init_net,obj.minet_hooks,4);
        if (iVar1 == 0) {
            uVar3 = kthread_create_on_node
                              (sym.minet_thread.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt,_segment.ehdr,0xffffffff,
                               "minet_thread");
            if (uVar3 < 0xfffffffffffff001) {
                wake_up_process(uVar3);
                *(_segment.ehdr + 8) = uVar3;
                if (uVar3 != 0) {
                    uVar4 = sym.minet_nl_init();
                    if (uVar4 == 0) {
                        return uVar4;
                    }
                    goto code_r0x080046e8;
                }
            }
            else {
                *(_segment.ehdr + 8) = uVar3;
            }
            _printk(0x80004d0,"minet_init_module");
        }
        else {
            _printk(0x800086f,"minet_init_module",iVar1);
        }
    }
code_r0x080046e8:
    if (_segment.ehdr != 0) {
        kfree();
    }
    _segment.ehdr = 0;
    return 0xffffffff;
}


// ===== sym.minet_nl_init @ 0x08004758 (size 92) =====

int sym.minet_nl_init(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = genl_register_family(obj.minet_nl_family);
    if (iVar1 != 0) {
        _printk(0x8000a63,"minet_nl_init",iVar1);
    }
    return iVar1;
}


// ===== sym.minet_tc_limiter_init @ 0x080047b4 (size 184) =====

ulong sym.minet_tc_limiter_init(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000224 = 0;
    *0x8000230 = 0x8000230;
    *0x8000238 = 0x8000230;
    _obj.m_idletimer_info.llvm.6928247255886231775 = 3;
    *0x80001dc = 0;
    _reloc.hook6.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt = 1;
    *0x80001d4 = str.tc_high[0];
    *0x80001d5 = str.tc_high[1];
    *0x80001d6 = str.tc_high[2];
    *0x80001d7 = str.tc_high[3];
    *0x80001d8 = str.tc_high[4];
    *0x80001d9 = str.tc_high[5];
    *0x80001da = str.tc_high[6];
    *0x80001db = str.tc_high[7];
    *0x80001e4 = 0;
    *0x80001ec = 0;
    *0x80001fa = 0;
    reloc.hook6.4d937b07f0038c5ccbeed8819a3a275c.cfi_jt = 0x306e616c77;
    *0x8000202 = 0xffffffff;
    *0x8000206 = 0xffff;
    iVar1 = sym.mi_idletimer_tg_checkentry_v1(0x80001d0);
    uVar2 = 0;
    if (iVar1 != 0) {
        _printk(0x8000667,"minet_tc_limiter_init");
        uVar2 = 0xffffffff;
    }
    return uVar2;
}


// ===== sym.cleanup_module @ 0x0800486c (size 132) =====

void sym.cleanup_module(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    nf_unregister_net_hooks(init_net,obj.minet_hooks,4);
    arg1 = 0;
    if (*(_segment.ehdr + 8) != 0) {
        arg1 = kthread_stop();
        *(_segment.ehdr + 8) = 0;
    }
    sym.clear_app(arg1);
    sym.clear_tc_app.llvm.6928247255886231775();
    sym.mi_idletimer_tg_destroy_v1(_segment.ehdr);
    if (_segment.ehdr != 0) {
        kfree();
        _segment.ehdr = 0;
    }
    sym.minet_nl_finit();
    return;
}

