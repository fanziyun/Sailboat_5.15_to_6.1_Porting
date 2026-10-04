// decompiled from cpq by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 908) =====

//WARNING: Switch with 1 destination removed at 0x080038a8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x235c6ecf1ef7980d) {
        if (arg1 < -0x5470764ad92ba0a) {
            if (arg1 < -0x23528e63c7da67a0) {
                if (arg1 == -0x7024a2cdb6544642) {
                    pcVar2 = sym.cpq_cpq_log_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08001334:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 0xc) {
                        return;
                    }
                    goto code_r0x08003868;
                }
                if (arg1 != -0x48c218ecc3c1d9d3) goto code_r0x08003868;
                pcVar2 = sym.cpq_insert_requests.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x23528e63c7da67a0) {
                    if (arg1 != -0xfeafaf8ef609a99) goto code_r0x08003868;
                    pcVar2 = sym.cpq_io_threshold_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    goto code_r0x08001334;
                }
                pcVar2 = sym.cpq_has_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 < -0x323ea04e3ec6a03) {
            if (arg1 == -0x5470764ad92ba0a) {
                pcVar2 = sym.cpq_limit_depth.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x44c152abec6d3f5) goto code_r0x08003868;
                pcVar2 = sym.cpq_depth_updated.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x323ea04e3ec6a03) {
                pcVar2 = sym.cpq_prepare_request.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08001318:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08003868;
            }
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x65e8a2510d675b4) goto code_r0x08003868;
                pcVar2 = sym.cpq_bio_merge.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x45fb189a50e0709d) {
        if (arg1 < 0x39e63916c3db07da) {
            if (arg1 == 0x235c6ecf1ef7980d) {
                pcVar2 = sym.cpq_init_sched.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != 0x2fb072567306bdcb) goto code_r0x08003868;
                pcVar2 = sym.cpq_request_merge.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 == 0x39e63916c3db07da) {
            pcVar2 = sym.cpq_idle_slice_timer.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == 0x3b1d764844b89cff) {
            pcVar2 = sym.cpq_exit_sched.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x3f49d8e53b28bdfe) goto code_r0x08003868;
            pcVar2 = sym.cpq_merged_requests.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x5ed2640578467c25) {
        if (arg1 == 0x45fb189a50e0709d) {
            pcVar2 = sym.cpq_dispatch_request.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x5b8cdba3f689d201) goto code_r0x08003868;
            pcVar2 = sym.cpq_init_hctx.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x5ed2640578467c25) {
        pcVar2 = sym.cpq_request_merged.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 == 0x6432cea61139cae2) {
            pcVar2 = sym.elv_rb_latter_request.cfi_jt;
            goto code_r0x08001318;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003868;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003868:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80038bc);
    (*pcVar1)();
}


// ===== sym.cpq_init_hctx.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001398 (size 8) =====

ulong sym.cpq_init_hctx.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 0xe8) + 0xf8) * 3;
    uVar3 = uVar1 >> 2;
    if (uVar1 < 4) {
        uVar3 = 1;
    }
    iVar2 = *(param_1 + 0x178);
    *(*(*(*(param_1 + 0xe8) + 8) + 8) + 0x294) = uVar3;
    sbitmap_queue_min_shallow_depth(*(iVar2 + 0x10));
    return 0;
}


// ===== sym.cpq_insert_requests.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013a0 (size 8) =====

void sym.cpq_insert_requests.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2,uint32_t param_3)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_2 != param_2) {
        do {
            piVar4 = *param_2;
            uVar3 = __list_del_entry_valid(piVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar4;
                piVar2 = piVar4[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar4 = piVar4;
            piVar4[1] = piVar4;
            sym.cpq_insert_request(param_1,piVar4 + -9,param_3 & 1);
        } while (*param_2 != param_2);
    }
    return;
}


// ===== sym.cpq_request_merge.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013a8 (size 8) =====

uint sym.cpq_request_merge.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2,int64_t param_3)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_3 + 0x16) < 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8001bec);
        (*pcVar3)();
    }
    iVar7 = *(*(param_1 + 8) + 8);
    if (*(iVar7 + 0x290) == 0) {
code_r0x08001bc0:
        uVar6 = 0;
    }
    else {
        uVar2 = *(obj.ioprio_class_to_prio + (*(param_3 + 0x16) >> 0xd & 7) * 4);
        iVar1 = *(param_3 + 0x20) + (*(param_3 + 0x28) >> 9);
        piVar4 = elv_rb_find(iVar7 + uVar2 * 0x60 + (*(param_3 + 0x10) & 1) * 8 + 0x10,iVar1);
        if (piVar4 == NULL) {
code_r0x08001b54:
            piVar4 = elv_rb_find(iVar7 + uVar2 * 0x60 + (*(param_3 + 0x10) & 1) * 8 + 0x148,iVar1);
            if (piVar4 == NULL) {
                return 0;
            }
            if (iVar1 != piVar4[6]) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8001bf4);
                (*pcVar3)();
            }
            uVar5 = elv_bio_merge_ok(piVar4,param_3);
            if ((uVar5 & 1) == 0) goto code_r0x08001bc0;
        }
        else {
            if (iVar1 != piVar4[6]) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8001bf0);
                (*pcVar3)();
            }
            uVar5 = elv_bio_merge_ok(piVar4,param_3);
            if ((uVar5 & 1) == 0) goto code_r0x08001b54;
        }
        *param_2 = piVar4;
        if (piVar4[3] == '\x03') {
            uVar6 = 3;
            if (*(*piVar4 + 0x514) < 2) {
                uVar6 = 1;
            }
        }
        else {
            uVar6 = 1;
        }
    }
    return uVar6;
}


// ===== sym.cpq_idle_slice_timer.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013b0 (size 8) =====

ulong sym.cpq_idle_slice_timer.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(param_1 + 100);
    *(param_1 + 0x54) = 0;
    if (*(param_1 + 0x50) != 0) {
        iVar1 = sp_el0;
        _printk(0x8000636,"cpq_idle_slice_timer",0x298,*(iVar1 + 0x5d8));
    }
    _raw_spin_unlock_irqrestore(param_1 + 100,uVar2);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080013b8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    elv_unregister(obj.iosched_cpq_mq);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080013c0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    elv_register(obj.iosched_cpq_mq);
    return;
}


// ===== sym.cpq_exit_sched.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013c8 (size 8) =====

void sym.cpq_exit_sched.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    bool bVar5;
    code *pcVar6;
    bool bVar7;
    ulong *in_x18;
    int64_t iVar8;
    int *piVar9;
    char *pcVar10;
    int64_t iVar11;
    int *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 8);
    iVar13 = 0;
    pcVar10 = "fore";
    iVar1 = iVar8 + 0x304;
    bVar5 = false;
    while( true ) {
        bVar7 = bVar5;
        piVar2 = iVar8 + iVar13 * 0x138 + 0x20;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x800187c);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0x30;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001884);
            (*pcVar6)();
        }
        _raw_spin_lock_irq(iVar1);
        iVar11 = iVar8 + iVar13 * 0x138;
        piVar12 = iVar11 + 0x50;
        iVar3 = *piVar12;
        piVar9 = iVar11 + 0x5c;
        iVar4 = *piVar9;
        _raw_spin_unlock_irq(iVar1);
        if ((iVar3 != iVar4) && (obj.cpq_exit_sched.__already_done == 0x0)) {
            iVar8 = iVar8 + iVar13 * 0x138;
            obj.cpq_exit_sched.__already_done = 0x1;
            __warn_printk("statistics for group %s priority %d: i %u m %u d %u c %u\n",pcVar10,0,*piVar12,
                          *(iVar8 + 0x54),*(iVar8 + 0x58),*piVar9);
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80018bc);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0x80;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80018c4);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0x90;
        if (piVar2 != *piVar2) break;
        _raw_spin_lock_irq(iVar1);
        iVar11 = iVar8 + iVar13 * 0x138;
        piVar12 = iVar11 + 0xbc;
        iVar3 = *piVar12;
        piVar9 = iVar11 + 0xb0;
        iVar4 = *piVar9;
        _raw_spin_unlock_irq(iVar1);
        if ((iVar4 != iVar3) && (obj.cpq_exit_sched.__already_done == 0x0)) {
            iVar8 = iVar8 + iVar13 * 0x138;
            obj.cpq_exit_sched.__already_done = 0x1;
            __warn_printk("statistics for group %s priority %d: i %u m %u d %u c %u\n",pcVar10,1,*piVar9,
                          *(iVar8 + 0xb4),*(iVar8 + 0xb8),*piVar12);
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001904);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0xe0;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x800190c);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0xf0;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001914);
            (*pcVar6)();
        }
        _raw_spin_lock_irq(iVar1);
        iVar11 = iVar8 + iVar13 * 0x138;
        iVar3 = *(iVar11 + 0x110);
        iVar4 = *(iVar11 + 0x11c);
        _raw_spin_unlock_irq(iVar1);
        if ((iVar3 != iVar4) && (obj.cpq_exit_sched.__already_done == 0x0)) {
            iVar8 = iVar8 + iVar13 * 0x138;
            obj.cpq_exit_sched.__already_done = 0x1;
            __warn_printk("statistics for group %s priority %d: i %u m %u d %u c %u\n",pcVar10,2,*(iVar11 + 0x110),
                          *(iVar8 + 0x114),*(iVar8 + 0x118),*(iVar11 + 0x11c));
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001874);
            (*pcVar6)();
        }
        pcVar10 = "back";
        iVar13 = 1;
        bVar5 = true;
        if (bVar7) {
            hrtimer_cancel(iVar8 + 0x2a0);
            kfree(iVar8);
            return;
        }
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x80018cc);
    (*pcVar6)();
}


// ===== sym.cpq_merged_requests.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013d0 (size 8) =====

void sym.cpq_merged_requests.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    code *pcVar4;
    uint64_t uVar5;
    int64_t arg2;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (-1 < *(param_3 + 0xe2)) {
        arg2 = *(*(param_1 + 8) + 8) + *(obj.ioprio_class_to_prio + (*(param_3 + 0xe2) >> 0xd & 7) * 4) * 0x60;
        if (*(param_3 + 0x90) != 0) {
            arg2 = arg2 + 0x138;
        }
        *(arg2 + 0x54) = *(arg2 + 0x54) + 1;
        if ((((*(param_2 + 0x90) == *(param_3 + 0x90)) && (piVar1 = param_2 + 0x48, piVar1 != *piVar1)) &&
            (piVar2 = param_3 + 0x48, piVar2 != *piVar2)) && (*(param_3 + 0xf8) - *(param_2 + 0xf8) < 0)) {
            uVar5 = __list_del_entry_valid(piVar1);
            if ((uVar5 & 1) != 0) {
                iVar6 = *(param_2 + 0x48);
                piVar3 = *(param_2 + 0x50);
                *(iVar6 + 8) = piVar3;
                *piVar3 = iVar6;
            }
            iVar6 = *piVar2;
            uVar5 = __list_add_valid(piVar1,piVar2,iVar6);
            if ((uVar5 & 1) != 0) {
                *(iVar6 + 8) = piVar1;
                *(param_2 + 0x48) = iVar6;
                *(param_2 + 0x50) = piVar2;
                *piVar2 = piVar1;
            }
            *(param_2 + 0xf8) = *(param_3 + 0xf8);
        }
        sym.cpq_remove_request(param_1,arg2,param_3);
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8001dbc);
    (*pcVar4)();
}


// ===== sym.elv_rb_latter_request.cfi_jt @ 0x080013d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.elv_rb_latter_request.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.elv_rb_former_request.cfi_jt @ 0x080013e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.elv_rb_former_request.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cpq_limit_depth.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013e8 (size 8) =====

void sym.cpq_limit_depth.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(uint32_t param_1,int64_t *param_2)

{
    if (((param_1 & 1) == 0) && ((param_1 & 0xff) == 0 || (param_1 & 0x60800) != 0)) {
        return;
    }
    *(param_2 + 0xc) = *(*(*(*param_2 + 8) + 8) + 0x294);
    return;
}


// ===== sym.cpq_bio_merge.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013f0 (size 8) =====

uint32_t sym.cpq_bio_merge.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,uint64_t param_3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    param_3 = param_3 & 0xffffffff;
    iStack_40 = 0;
    iVar6 = *(*(param_1 + 8) + 8) + 0x304;
    _raw_spin_lock_irq(iVar6);
    uVar3 = blk_mq_sched_try_merge(param_1,param_2,param_3,&iStack_40);
    _raw_spin_unlock_irq(iVar6);
    if (iStack_40 != 0) {
        blk_mq_free_request();
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar3 & 1;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_request_merge;
    if (*(param_3 + 0x16) < 0) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8001bec);
        (*pcVar2)();
    }
    iVar6 = *(*(auVar7._0_8_ + 8) + 8);
    if (*(iVar6 + 0x290) == 0) {
code_r0x08001bc0:
        uVar3 = 0;
    }
    else {
        uVar3 = *(obj.ioprio_class_to_prio + (*(param_3 + 0x16) >> 0xd & 7) * 4);
        iVar1 = *(param_3 + 0x20) + (*(param_3 + 0x28) >> 9);
        piVar4 = elv_rb_find(iVar6 + uVar3 * 0x60 + (*(param_3 + 0x10) & 1) * 8 + 0x10,iVar1);
        if (piVar4 == NULL) {
code_r0x08001b54:
            piVar4 = elv_rb_find(iVar6 + uVar3 * 0x60 + (*(param_3 + 0x10) & 1) * 8 + 0x148,iVar1);
            if (piVar4 == NULL) {
                return 0;
            }
            if (iVar1 != piVar4[6]) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001bf4);
                (*pcVar2)();
            }
            uVar5 = elv_bio_merge_ok(piVar4,param_3);
            if ((uVar5 & 1) == 0) goto code_r0x08001bc0;
        }
        else {
            if (iVar1 != piVar4[6]) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001bf0);
                (*pcVar2)();
            }
            uVar5 = elv_bio_merge_ok(piVar4,param_3);
            if ((uVar5 & 1) == 0) goto code_r0x08001b54;
        }
        *auVar7._8_8_ = piVar4;
        if (piVar4[3] == '\x03') {
            uVar3 = 3;
            if (*(*piVar4 + 0x514) < 2) {
                uVar3 = 1;
            }
        }
        else {
            uVar3 = 1;
        }
    }
    return uVar3;
}


// ===== sym.cpq_depth_updated.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013f8 (size 8) =====

void sym.cpq_depth_updated.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 0xe8) + 0xf8) * 3;
    uVar3 = uVar1 >> 2;
    if (uVar1 < 4) {
        uVar3 = 1;
    }
    iVar2 = *(param_1 + 0x178);
    *(*(*(*(param_1 + 0xe8) + 8) + 8) + 0x294) = uVar3;
    sbitmap_queue_min_shallow_depth(*(iVar2 + 0x10));
    return;
}


// ===== sym.cpq_request_merged.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001400 (size 8) =====

void sym.cpq_request_merged.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,int param_3)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (-1 < *(param_2 + 0xe2)) {
        iVar2 = *(*(param_1 + 8) + 8) + *(obj.ioprio_class_to_prio + (*(param_2 + 0xe2) >> 0xd & 7) * 4) * 0x60;
        if (*(param_2 + 0x90) != 0) {
            iVar2 = iVar2 + 0x138;
        }
        if (param_3 == 1) {
            elv_rb_del(iVar2 + 0x10 + (*(param_2 + 0x18) & 1) * 8,param_2);
            elv_rb_add(iVar2 + 0x10 + (*(param_2 + 0x18) & 1) * 8,param_2);
        }
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8001c90);
    (*pcVar1)();
}


// ===== sym.cpq_dispatch_request.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001408 (size 8) =====

int64_t sym.cpq_dispatch_request.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t arg1;
    code *pcVar3;
    bool bVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint uVar8;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(*(param_1 + 0xe8) + 8) + 8);
    _raw_spin_lock_irq(arg1_00 + 0x304);
    uVar1 = *(arg1_00 + 0x270);
    uVar9 = uVar1;
    if (2 < uVar1) goto code_r0x080022b8;
    iVar11 = arg1_00 + uVar9 * 0x138;
    arg1 = arg1_00;
    if (*(iVar11 + 0x120) < *(iVar11 + 0x128)) {
        uVar6 = sym.cpq_group_no_more_request(arg1 + uVar1 * 0x138);
        if ((uVar6 & 1) == 0) {
            if (*(arg1_00 + 0x2f4) == '\0') {
code_r0x080020f0:
                iVar2 = *(arg1_00 + 0x270);
            }
            else {
                iVar2 = *(arg1_00 + 0x270);
                if (iVar2 == 0) {
                    hrtimer_try_to_cancel(arg1_00 + 0x2a0);
                    *(arg1_00 + 0x2f4) = 0;
                    goto code_r0x080020f0;
                }
            }
            if (((iVar2 == 1) && (uVar6 = sym.cpq_group_no_more_request(arg1), (uVar6 & 1) == 0)) &&
               (*(arg1_00 + 0x130) == 0)) {
                uVar8 = 2;
                goto code_r0x08002058;
            }
        }
        else {
            if (*(arg1_00 + 0x270) != 0) {
code_r0x08002020:
                *(arg1_00 + uVar9 * 0x138 + 0x130) = 0;
                goto code_r0x0800205c;
            }
            if (*(arg1_00 + 0x2f4) == '\0') {
                if ((*(arg1_00 + 0x2f5) == '\0') || (*(arg1_00 + 0x2fc) + *(arg1_00 + 0x2f8) < *(arg1_00 + 0x300)))
                goto code_r0x08002020;
                uVar10 = *(arg1_00 + 0x2e8);
                *(arg1_00 + 0x2f4) = 1;
                if (*(arg1_00 + 0x2f0) != 0) {
                    iVar11 = sp_el0;
                    _printk(0x800064c,"cpq_arm_slice_timer",0x2a8,*(iVar11 + 0x5d8),uVar10);
                }
                hrtimer_start_range_ns(arg1_00 + 0x2a0,uVar10,0,1);
                *(arg1_00 + 0x2f5) = 0;
            }
        }
code_r0x08002110:
        uVar9 = *(arg1_00 + 0x270);
        if (2 < *(arg1_00 + 0x270)) {
code_r0x080022b8:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x80022bc);
            (*pcVar3)();
        }
    }
    else {
        uVar6 = sym.cpq_group_no_more_request(arg1 + (uVar1 == 0) * 0x138);
        if ((uVar6 & 1) != 0) goto code_r0x08002110;
        uVar8 = 1;
        *(iVar11 + 0x120) = 0;
code_r0x08002058:
        *(arg1_00 + uVar9 * 0x138 + 0x130) = uVar8;
code_r0x0800205c:
        bVar4 = *(arg1_00 + 0x270) == 0;
        uVar9 = bVar4;
        *(arg1_00 + 0x270) = bVar4;
    }
    iVar11 = _elevator_alloc;
    iVar12 = arg1_00 + uVar9 * 0x138;
    uVar5 = *(iVar12 + 0xb0) != *(iVar12 + 0xbc);
    if (*(iVar12 + 0x50) != *(iVar12 + 0x5c)) {
        uVar5 = uVar5 + 1;
    }
    if (*(iVar12 + 0x110) != *(iVar12 + 0x11c)) {
        uVar5 = uVar5 + 1;
    }
    iVar2 = uVar9;
    if (((uVar5 < 2) ||
        ((iVar7 = sym.__cpq_dispatch_request(arg1_00,arg1 + iVar2 * 0x138 + 0x60,_elevator_alloc - *(arg1_00 + 0x298))
         , iVar7 == 0 &&
         (iVar7 = sym.__cpq_dispatch_request(arg1_00,arg1 + iVar2 * 0x138 + 0xc0,iVar11 - *(arg1_00 + 0x298)),
         iVar7 == 0)))) && (iVar7 = sym.__cpq_dispatch_request(arg1_00,arg1 + iVar2 * 0x138,iVar11), iVar7 == 0)) {
        if (*(iVar12 + 0x50) != *(iVar12 + 0x5c)) {
code_r0x0800224c:
            iVar7 = 0;
            goto code_r0x08002250;
        }
        iVar7 = sym.__cpq_dispatch_request(arg1_00,arg1 + iVar2 * 0x138 + 0x60,iVar11);
        if (iVar7 == 0) {
            if (*(iVar12 + 0xb0) != *(iVar12 + 0xbc)) goto code_r0x0800224c;
            iVar7 = sym.__cpq_dispatch_request(arg1_00,arg1 + iVar2 * 0x138 + 0xc0,iVar11);
            if (iVar7 == 0) goto code_r0x08002250;
        }
    }
    if (*(iVar7 + 0x90) == 0) {
        *(arg1_00 + 0x2f5) = 1;
    }
code_r0x08002250:
    _raw_spin_unlock_irq(arg1_00 + 0x304);
    return iVar7;
}


// ===== sym.cpq_has_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001410 (size 8) =====

uint sym.cpq_has_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    bool bVar1;
    bool bVar2;
    uint uVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint uVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    
    iVar6 = 0;
    iVar5 = *(*(*(param_1 + 0xe8) + 8) + 8);
    uVar3 = 1;
    uVar7 = 1;
    bVar1 = false;
    while( true ) {
        uVar4 = uVar7;
        uVar7 = uVar3;
        piVar8 = iVar5 + iVar6 * 0x138;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 8)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x20;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x28)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x30;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x38)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x60;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x68)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x80;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x88)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x90;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x98)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0xc0;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 200)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0xe0;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0xe8)) break;
        piVar8 = iVar5 + iVar6 * 0x138 + 0xf0;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        piVar9 = *(iVar5 + iVar6 * 0x138 + 0xf8);
        iVar6 = 1;
        bVar2 = bVar1 || piVar8 != piVar9;
        uVar3 = 0;
        bVar1 = true;
        if (bVar2) {
            if (piVar8 == piVar9) {
                uVar4 = uVar7;
            }
            return uVar4;
        }
    }
    return uVar4;
}


// ===== sym.cpq_init_sched.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001418 (size 8) =====

ulong sym.cpq_init_sched.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = elevator_alloc();
    if (iVar1 != 0) {
        iVar2 = kmem_cache_alloc_trace(_elv_rb_latter_request,0xdc0,0x310);
        if (iVar2 != 0) {
            *(iVar1 + 8) = iVar2;
            *iVar2 = iVar2;
            *(iVar2 + 8) = iVar2;
            *(iVar2 + 0x20) = iVar2 + 0x20;
            *(iVar2 + 0x28) = iVar2 + 0x20;
            *(iVar2 + 0x30) = iVar2 + 0x30;
            *(iVar2 + 0x38) = iVar2 + 0x30;
            *(iVar2 + 0x10) = 0;
            *(iVar2 + 0x18) = 0;
            *(iVar2 + 0x60) = iVar2 + 0x60;
            *(iVar2 + 0x68) = iVar2 + 0x60;
            *(iVar2 + 0x80) = iVar2 + 0x80;
            *(iVar2 + 0x88) = iVar2 + 0x80;
            *(iVar2 + 0x90) = iVar2 + 0x90;
            *(iVar2 + 0x98) = iVar2 + 0x90;
            *(iVar2 + 0x70) = 0;
            *(iVar2 + 0x78) = 0;
            *(iVar2 + 0xc0) = iVar2 + 0xc0;
            *(iVar2 + 200) = iVar2 + 0xc0;
            *(iVar2 + 0xe0) = iVar2 + 0xe0;
            *(iVar2 + 0xe8) = iVar2 + 0xe0;
            *(iVar2 + 0xf0) = iVar2 + 0xf0;
            *(iVar2 + 0xf8) = iVar2 + 0xf0;
            *(iVar2 + 0xd0) = 0;
            *(iVar2 + 0xd8) = 0;
            *(iVar2 + 0x138) = iVar2 + 0x138;
            *(iVar2 + 0x140) = iVar2 + 0x138;
            *(iVar2 + 0x158) = iVar2 + 0x158;
            *(iVar2 + 0x160) = iVar2 + 0x158;
            *(iVar2 + 0x168) = iVar2 + 0x168;
            *(iVar2 + 0x170) = iVar2 + 0x168;
            *(iVar2 + 0x148) = 0;
            *(iVar2 + 0x150) = 0;
            *(iVar2 + 0x198) = iVar2 + 0x198;
            *(iVar2 + 0x1a0) = iVar2 + 0x198;
            *(iVar2 + 0x1b8) = iVar2 + 0x1b8;
            *(iVar2 + 0x1c0) = iVar2 + 0x1b8;
            *(iVar2 + 0x1c8) = iVar2 + 0x1c8;
            *(iVar2 + 0x1d0) = iVar2 + 0x1c8;
            *(iVar2 + 0x1a8) = 0;
            *(iVar2 + 0x1b0) = 0;
            *(iVar2 + 0x1f8) = iVar2 + 0x1f8;
            *(iVar2 + 0x200) = iVar2 + 0x1f8;
            *(iVar2 + 0x218) = iVar2 + 0x218;
            *(iVar2 + 0x220) = iVar2 + 0x218;
            *(iVar2 + 0x228) = iVar2 + 0x228;
            *(iVar2 + 0x230) = iVar2 + 0x228;
            *(iVar2 + 0x210) = 0;
            *(iVar2 + 0x208) = 0;
            hrtimer_init(iVar2 + 0x2a0,1,1);
            *(iVar2 + 0x290) = 1;
            *(iVar2 + 0x2c8) = sym.cpq_idle_slice_timer.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            *(iVar2 + 0x280) = 0x4e20000007d;
            *(iVar2 + 0x128) = 4000;
            *(iVar2 + 0x274) = 1;
            *(iVar2 + 0x298) = 0x9c4;
            *(iVar2 + 0x288) = 0x200000010;
            *(iVar2 + 0x300) = 8;
            *(iVar2 + 0x308) = 0;
            *(iVar2 + 0x260) = 1000;
            *(iVar2 + 0x2e8) = 1000000;
            *(param_1 + 8) = iVar1;
            return 0;
        }
        kobject_put(iVar1 + 0x10);
    }
    return 0xfffffff4;
}


// ===== sym.cpq_cpq_log_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001420 (size 8) =====

int64_t sym.cpq_cpq_log_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&uStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        *(iVar2 + 0x2f0) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_slice_idle_show;
    iVar1 = sprintf(auVar3._8_8_,0x8000622,*(*(auVar3._0_8_ + 8) + 0x2e8) / 1000000);
    return iVar1;
}


// ===== sym.cpq_io_threshold_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001428 (size 8) =====

uchar * sym.cpq_io_threshold_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,uchar *param_3)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 8);
    uStack_2c = 0;
    iVar2 = kstrtoint(param_2,0,&uStack_2c);
    if (iVar2 < 0) {
        param_3 = iVar2;
    }
    else {
        *(iVar4 + 0x300) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x80038bc);
        (*pcVar1)();
    }
    return param_3;
}


// ===== sym.cpq_read_expire_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001430 (size 8) =====

int64_t sym.cpq_read_expire_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&iStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        if (iStack_2c < 0) {
            iStack_2c = 0;
        }
        uVar2 = __msecs_to_jiffies(iStack_2c);
        *(iVar3 + 0x280) = uVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_write_expire_show;
    uVar2 = jiffies_to_msecs(*(*(auVar4._0_8_ + 8) + 0x284));
    iVar1 = sysfs_emit(auVar4._8_8_,0x80006a2,uVar2);
    return iVar1;
}


// ===== sym.cpq_fore_timeout_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001438 (size 8) =====

int64_t sym.cpq_fore_timeout_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&uStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        *(iVar2 + 0x128) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_back_timeout_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x260));
    return iVar1;
}


// ===== sym.cpq_back_timeout_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001440 (size 8) =====

int64_t sym.cpq_back_timeout_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&uStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        *(iVar2 + 0x260) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_cpq_log_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x2f0));
    return iVar1;
}


// ===== sym.cpq_writes_starved_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001448 (size 8) =====

int64_t sym.cpq_writes_starved_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&uStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        *(iVar2 + 0x28c) = uStack_2c;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_front_merges_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x290));
    return iVar1;
}


// ===== sym.cpq_slice_idle_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001450 (size 8) =====

int64_t sym.cpq_slice_idle_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&uStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        *(iVar2 + 0x2e8) = (uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU)) * 1000000;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_io_threshold_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x300));
    return iVar1;
}


// ===== sym.cpq_async_depth_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001458 (size 8) =====

int64_t sym.cpq_async_depth_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&iStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        iVar1 = iStack_2c;
        if (iStack_2c < 2) {
            iVar1 = 1;
        }
        *(iVar2 + 0x294) = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_fifo_batch_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x288));
    return iVar1;
}


// ===== sym.cpq_fifo_batch_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001460 (size 8) =====

int64_t sym.cpq_fifo_batch_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&uStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        *(iVar3 + 0x288) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_prio_aging_expire_show;
    uVar2 = jiffies_to_msecs(*(*(auVar4._0_8_ + 8) + 0x298));
    iVar1 = sysfs_emit(auVar4._8_8_,0x80006a2,uVar2);
    return iVar1;
}


// ===== sym.cpq_write_expire_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001468 (size 8) =====

int64_t sym.cpq_write_expire_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&iStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        if (iStack_2c < 0) {
            iStack_2c = 0;
        }
        uVar2 = __msecs_to_jiffies(iStack_2c);
        *(iVar3 + 0x284) = uVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_writes_starved_show;
    iVar1 = sysfs_emit(auVar4._8_8_,0x80006a2,*(*(auVar4._0_8_ + 8) + 0x28c));
    return iVar1;
}


// ===== sym.cpq_prio_aging_expire_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001470 (size 8) =====

int64_t sym.cpq_prio_aging_expire_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&iStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        if (iStack_2c < 0) {
            iStack_2c = 0;
        }
        uVar2 = __msecs_to_jiffies(iStack_2c);
        *(iVar3 + 0x298) = uVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_fore_timeout_show;
    iVar1 = sysfs_emit(auVar4._8_8_,0x80006a2,*(*(auVar4._0_8_ + 8) + 0x128));
    return iVar1;
}


// ===== sym.cpq_front_merges_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001478 (size 8) =====

int64_t sym.cpq_front_merges_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(param_2,0,&iStack_2c);
    if (iVar1 < 0) {
        param_3 = iVar1;
    }
    else {
        *(iVar2 + 0x290) = 0 < iStack_2c;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_async_depth_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x294));
    return iVar1;
}


// ===== sym.cpq_io_threshold_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001480 (size 8) =====

int64_t sym.cpq_io_threshold_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_2,0x80006a2,*(*(param_1 + 8) + 0x300));
    return iVar1;
}


// ===== sym.cpq_back_timeout_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001488 (size 8) =====

int64_t sym.cpq_back_timeout_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_2,0x80006a2,*(*(param_1 + 8) + 0x260));
    return iVar1;
}


// ===== sym.cpq_writes_starved_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001490 (size 8) =====

int64_t sym.cpq_writes_starved_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_2,0x80006a2,*(*(param_1 + 8) + 0x28c));
    return iVar1;
}


// ===== sym.cpq_slice_idle_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001498 (size 8) =====

int64_t sym.cpq_slice_idle_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_2,0x8000622,*(*(param_1 + 8) + 0x2e8) / 1000000);
    return iVar1;
}


// ===== sym.cpq_front_merges_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014a0 (size 8) =====

int64_t sym.cpq_front_merges_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_2,0x80006a2,*(*(param_1 + 8) + 0x290));
    return iVar1;
}


// ===== sym.cpq_read_expire_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014a8 (size 8) =====

int64_t sym.cpq_read_expire_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = jiffies_to_msecs(*(*(param_1 + 8) + 0x280));
    iVar2 = sysfs_emit(param_2,0x80006a2,uVar1);
    return iVar2;
}


// ===== sym.cpq_cpq_log_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014b0 (size 8) =====

int64_t sym.cpq_cpq_log_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_2,0x80006a2,*(*(param_1 + 8) + 0x2f0));
    return iVar1;
}


// ===== sym.cpq_async_depth_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014b8 (size 8) =====

int64_t sym.cpq_async_depth_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_2,0x80006a2,*(*(param_1 + 8) + 0x294));
    return iVar1;
}


// ===== sym.cpq_prio_aging_expire_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014c0 (size 8) =====

int64_t sym.cpq_prio_aging_expire_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = jiffies_to_msecs(*(*(param_1 + 8) + 0x298));
    iVar2 = sysfs_emit(param_2,0x80006a2,uVar1);
    return iVar2;
}


// ===== sym.cpq_fifo_batch_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014c8 (size 8) =====

int64_t sym.cpq_fifo_batch_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_2,0x80006a2,*(*(param_1 + 8) + 0x288));
    return iVar1;
}


// ===== sym.cpq_write_expire_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014d0 (size 8) =====

int64_t sym.cpq_write_expire_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = jiffies_to_msecs(*(*(param_1 + 8) + 0x284));
    iVar2 = sysfs_emit(param_2,0x80006a2,uVar1);
    return iVar2;
}


// ===== sym.cpq_fore_timeout_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014d8 (size 8) =====

int64_t sym.cpq_fore_timeout_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(param_2,0x80006a2,*(*(param_1 + 8) + 0x128));
    return iVar1;
}


// ===== sym.cpq_prepare_request.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014e0 (size 8) =====

void sym.cpq_prepare_request.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x88) = 0;
    *(param_1 + 0x90) = 0;
    return;
}


// ===== sym.cpq_finish_request.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080014e8 (size 8) =====

void sym.cpq_finish_request.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t *param_1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    code *pcVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0xe2);
    if (uVar2 < 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8001f04);
        (*pcVar3)();
    }
    if (param_1[0x11] != 0) {
        if ((uVar2 >> 0xd & 7) == 4) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x8001f08);
            (*pcVar3)();
        }
        iVar6 = *(*(*param_1 + 8) + 8);
        uVar1 = *(obj.ioprio_class_to_prio + (uVar2 >> 0xd) * 4);
        uVar4 = _raw_spin_lock_irqsave(iVar6 + 0x304);
        iVar5 = iVar6 + (param_1[0x12] != 0) * 0x138 + uVar1 * 0x60;
        *(iVar5 + 0x5c) = *(iVar5 + 0x5c) + 1;
        iVar5 = iVar6 + ((*(param_1 + 3) & 0xff) == 0 || (*(param_1 + 3) & 0x60800) != 0) * 4;
        *(iVar5 + 0x2f8) = *(iVar5 + 0x2f8) + -1;
        _raw_spin_unlock_irqrestore(iVar6 + 0x304,uVar4);
    }
    return;
}


// ===== sym.cpq_init_sched @ 0x080014f0 (size 472) =====

ulong sym.cpq_init_sched(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = elevator_alloc();
    if (iVar1 != 0) {
        iVar2 = kmem_cache_alloc_trace(_elv_rb_latter_request,0xdc0,0x310);
        if (iVar2 != 0) {
            *(iVar1 + 8) = iVar2;
            *iVar2 = iVar2;
            *(iVar2 + 8) = iVar2;
            *(iVar2 + 0x20) = iVar2 + 0x20;
            *(iVar2 + 0x28) = iVar2 + 0x20;
            *(iVar2 + 0x30) = iVar2 + 0x30;
            *(iVar2 + 0x38) = iVar2 + 0x30;
            *(iVar2 + 0x10) = 0;
            *(iVar2 + 0x18) = 0;
            *(iVar2 + 0x60) = iVar2 + 0x60;
            *(iVar2 + 0x68) = iVar2 + 0x60;
            *(iVar2 + 0x80) = iVar2 + 0x80;
            *(iVar2 + 0x88) = iVar2 + 0x80;
            *(iVar2 + 0x90) = iVar2 + 0x90;
            *(iVar2 + 0x98) = iVar2 + 0x90;
            *(iVar2 + 0x70) = 0;
            *(iVar2 + 0x78) = 0;
            *(iVar2 + 0xc0) = iVar2 + 0xc0;
            *(iVar2 + 200) = iVar2 + 0xc0;
            *(iVar2 + 0xe0) = iVar2 + 0xe0;
            *(iVar2 + 0xe8) = iVar2 + 0xe0;
            *(iVar2 + 0xf0) = iVar2 + 0xf0;
            *(iVar2 + 0xf8) = iVar2 + 0xf0;
            *(iVar2 + 0xd0) = 0;
            *(iVar2 + 0xd8) = 0;
            *(iVar2 + 0x138) = iVar2 + 0x138;
            *(iVar2 + 0x140) = iVar2 + 0x138;
            *(iVar2 + 0x158) = iVar2 + 0x158;
            *(iVar2 + 0x160) = iVar2 + 0x158;
            *(iVar2 + 0x168) = iVar2 + 0x168;
            *(iVar2 + 0x170) = iVar2 + 0x168;
            *(iVar2 + 0x148) = 0;
            *(iVar2 + 0x150) = 0;
            *(iVar2 + 0x198) = iVar2 + 0x198;
            *(iVar2 + 0x1a0) = iVar2 + 0x198;
            *(iVar2 + 0x1b8) = iVar2 + 0x1b8;
            *(iVar2 + 0x1c0) = iVar2 + 0x1b8;
            *(iVar2 + 0x1c8) = iVar2 + 0x1c8;
            *(iVar2 + 0x1d0) = iVar2 + 0x1c8;
            *(iVar2 + 0x1a8) = 0;
            *(iVar2 + 0x1b0) = 0;
            *(iVar2 + 0x1f8) = iVar2 + 0x1f8;
            *(iVar2 + 0x200) = iVar2 + 0x1f8;
            *(iVar2 + 0x218) = iVar2 + 0x218;
            *(iVar2 + 0x220) = iVar2 + 0x218;
            *(iVar2 + 0x228) = iVar2 + 0x228;
            *(iVar2 + 0x230) = iVar2 + 0x228;
            *(iVar2 + 0x210) = 0;
            *(iVar2 + 0x208) = 0;
            hrtimer_init(iVar2 + 0x2a0,1,1);
            *(iVar2 + 0x290) = 1;
            *(iVar2 + 0x2c8) = sym.cpq_idle_slice_timer.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            *(iVar2 + 0x280) = 0x4e20000007d;
            *(iVar2 + 0x128) = 4000;
            *(iVar2 + 0x274) = 1;
            *(iVar2 + 0x298) = 0x9c4;
            *(iVar2 + 0x288) = 0x200000010;
            *(iVar2 + 0x300) = 8;
            *(iVar2 + 0x308) = 0;
            *(iVar2 + 0x260) = 1000;
            *(iVar2 + 0x2e8) = 1000000;
            *(arg1 + 8) = iVar1;
            return 0;
        }
        kobject_put(iVar1 + 0x10);
    }
    return 0xfffffff4;
}


// ===== sym.cpq_exit_sched @ 0x080016c8 (size 644) =====

void sym.cpq_exit_sched(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    bool bVar5;
    code *pcVar6;
    bool bVar7;
    ulong *in_x18;
    int64_t iVar8;
    int *piVar9;
    char *pcVar10;
    int64_t iVar11;
    int *piVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 8);
    iVar13 = 0;
    pcVar10 = "fore";
    iVar1 = iVar8 + 0x304;
    bVar5 = false;
    while( true ) {
        bVar7 = bVar5;
        piVar2 = iVar8 + iVar13 * 0x138 + 0x20;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x800187c);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0x30;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001884);
            (*pcVar6)();
        }
        _raw_spin_lock_irq(iVar1);
        iVar11 = iVar8 + iVar13 * 0x138;
        piVar12 = iVar11 + 0x50;
        iVar3 = *piVar12;
        piVar9 = iVar11 + 0x5c;
        iVar4 = *piVar9;
        _raw_spin_unlock_irq(iVar1);
        if ((iVar3 != iVar4) && (obj.cpq_exit_sched.__already_done == 0x0)) {
            iVar8 = iVar8 + iVar13 * 0x138;
            obj.cpq_exit_sched.__already_done = 0x1;
            __warn_printk("statistics for group %s priority %d: i %u m %u d %u c %u\n",pcVar10,0,*piVar12,
                          *(iVar8 + 0x54),*(iVar8 + 0x58),*piVar9);
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80018bc);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0x80;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80018c4);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0x90;
        if (piVar2 != *piVar2) break;
        _raw_spin_lock_irq(iVar1);
        iVar11 = iVar8 + iVar13 * 0x138;
        piVar12 = iVar11 + 0xbc;
        iVar3 = *piVar12;
        piVar9 = iVar11 + 0xb0;
        iVar4 = *piVar9;
        _raw_spin_unlock_irq(iVar1);
        if ((iVar4 != iVar3) && (obj.cpq_exit_sched.__already_done == 0x0)) {
            iVar8 = iVar8 + iVar13 * 0x138;
            obj.cpq_exit_sched.__already_done = 0x1;
            __warn_printk("statistics for group %s priority %d: i %u m %u d %u c %u\n",pcVar10,1,*piVar9,
                          *(iVar8 + 0xb4),*(iVar8 + 0xb8),*piVar12);
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001904);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0xe0;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x800190c);
            (*pcVar6)();
        }
        piVar2 = iVar8 + iVar13 * 0x138 + 0xf0;
        if (piVar2 != *piVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001914);
            (*pcVar6)();
        }
        _raw_spin_lock_irq(iVar1);
        iVar11 = iVar8 + iVar13 * 0x138;
        iVar3 = *(iVar11 + 0x110);
        iVar4 = *(iVar11 + 0x11c);
        _raw_spin_unlock_irq(iVar1);
        if ((iVar3 != iVar4) && (obj.cpq_exit_sched.__already_done == 0x0)) {
            iVar8 = iVar8 + iVar13 * 0x138;
            obj.cpq_exit_sched.__already_done = 0x1;
            __warn_printk("statistics for group %s priority %d: i %u m %u d %u c %u\n",pcVar10,2,*(iVar11 + 0x110),
                          *(iVar8 + 0x114),*(iVar8 + 0x118),*(iVar11 + 0x11c));
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8001874);
            (*pcVar6)();
        }
        pcVar10 = "back";
        iVar13 = 1;
        bVar5 = true;
        if (bVar7) {
            hrtimer_cancel(iVar8 + 0x2a0);
            kfree(iVar8);
            return;
        }
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x80018cc);
    (*pcVar6)();
}


// ===== sym.cpq_init_hctx @ 0x08001964 (size 84) =====

ulong sym.cpq_init_hctx(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0xe8) + 0xf8) * 3;
    uVar3 = uVar1 >> 2;
    if (uVar1 < 4) {
        uVar3 = 1;
    }
    iVar2 = *(arg1 + 0x178);
    *(*(*(*(arg1 + 0xe8) + 8) + 8) + 0x294) = uVar3;
    sbitmap_queue_min_shallow_depth(*(iVar2 + 0x10));
    return 0;
}


// ===== sym.cpq_depth_updated @ 0x080019b8 (size 80) =====

void sym.cpq_depth_updated(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0xe8) + 0xf8) * 3;
    uVar3 = uVar1 >> 2;
    if (uVar1 < 4) {
        uVar3 = 1;
    }
    iVar2 = *(arg1 + 0x178);
    *(*(*(*(arg1 + 0xe8) + 8) + 8) + 0x294) = uVar3;
    sbitmap_queue_min_shallow_depth(*(iVar2 + 0x10));
    return;
}


// ===== sym.cpq_bio_merge @ 0x08001a08 (size 176) =====

uint32_t sym.cpq_bio_merge(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar6 = arg3 & 0xffffffff;
    iStack_40 = 0;
    iVar7 = *(*(arg1 + 8) + 8) + 0x304;
    _raw_spin_lock_irq(iVar7);
    uVar3 = blk_mq_sched_try_merge(arg1,arg2,uVar6,&iStack_40);
    _raw_spin_unlock_irq(iVar7);
    if (iStack_40 != 0) {
        blk_mq_free_request();
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar3 & 1;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_request_merge;
    if (*(uVar6 + 0x16) < 0) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8001bec);
        (*pcVar2)();
    }
    iVar7 = *(*(auVar8._0_8_ + 8) + 8);
    if (*(iVar7 + 0x290) == 0) {
code_r0x08001bc0:
        uVar3 = 0;
    }
    else {
        uVar3 = *(obj.ioprio_class_to_prio + (*(uVar6 + 0x16) >> 0xd & 7) * 4);
        iVar1 = *(uVar6 + 0x20) + (*(uVar6 + 0x28) >> 9);
        piVar4 = elv_rb_find(iVar7 + uVar3 * 0x60 + (*(uVar6 + 0x10) & 1) * 8 + 0x10,iVar1);
        if (piVar4 == NULL) {
code_r0x08001b54:
            piVar4 = elv_rb_find(iVar7 + uVar3 * 0x60 + (*(uVar6 + 0x10) & 1) * 8 + 0x148,iVar1);
            if (piVar4 == NULL) {
                return 0;
            }
            if (iVar1 != piVar4[6]) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001bf4);
                (*pcVar2)();
            }
            uVar6 = elv_bio_merge_ok(piVar4,uVar6);
            if ((uVar6 & 1) == 0) goto code_r0x08001bc0;
        }
        else {
            if (iVar1 != piVar4[6]) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001bf0);
                (*pcVar2)();
            }
            uVar5 = elv_bio_merge_ok(piVar4,uVar6);
            if ((uVar5 & 1) == 0) goto code_r0x08001b54;
        }
        *auVar8._8_8_ = piVar4;
        if (piVar4[3] == '\x03') {
            uVar3 = 3;
            if (*(*piVar4 + 0x514) < 2) {
                uVar3 = 1;
            }
        }
        else {
            uVar3 = 1;
        }
    }
    return uVar3;
}


// ===== sym.cpq_request_merge @ 0x08001ab8 (size 316) =====

uint sym.cpq_request_merge(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg3 + 0x16) < 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8001bec);
        (*pcVar3)();
    }
    iVar7 = *(*(arg1 + 8) + 8);
    if (*(iVar7 + 0x290) == 0) {
code_r0x08001bc0:
        uVar6 = 0;
    }
    else {
        uVar2 = *(obj.ioprio_class_to_prio + (*(arg3 + 0x16) >> 0xd & 7) * 4);
        iVar1 = *(arg3 + 0x20) + (*(arg3 + 0x28) >> 9);
        piVar4 = elv_rb_find(iVar7 + uVar2 * 0x60 + (*(arg3 + 0x10) & 1) * 8 + 0x10,iVar1);
        if (piVar4 == NULL) {
code_r0x08001b54:
            piVar4 = elv_rb_find(iVar7 + uVar2 * 0x60 + (*(arg3 + 0x10) & 1) * 8 + 0x148,iVar1);
            if (piVar4 == NULL) {
                return 0;
            }
            if (iVar1 != piVar4[6]) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8001bf4);
                (*pcVar3)();
            }
            uVar5 = elv_bio_merge_ok(piVar4,arg3);
            if ((uVar5 & 1) == 0) goto code_r0x08001bc0;
        }
        else {
            if (iVar1 != piVar4[6]) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8001bf0);
                (*pcVar3)();
            }
            uVar5 = elv_bio_merge_ok(piVar4,arg3);
            if ((uVar5 & 1) == 0) goto code_r0x08001b54;
        }
        *arg2 = piVar4;
        if (piVar4[3] == '\x03') {
            uVar6 = 3;
            if (*(*piVar4 + 0x514) < 2) {
                uVar6 = 1;
            }
        }
        else {
            uVar6 = 1;
        }
    }
    return uVar6;
}


// ===== sym.cpq_request_merged @ 0x08001bf4 (size 156) =====

void sym.cpq_request_merged(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (-1 < *(arg2 + 0xe2)) {
        iVar2 = *(*(arg1 + 8) + 8) + *(obj.ioprio_class_to_prio + (*(arg2 + 0xe2) >> 0xd & 7) * 4) * 0x60;
        if (*(arg2 + 0x90) != 0) {
            iVar2 = iVar2 + 0x138;
        }
        if (arg3 == 1) {
            elv_rb_del(iVar2 + 0x10 + (*(arg2 + 0x18) & 1) * 8,arg2);
            elv_rb_add(iVar2 + 0x10 + (*(arg2 + 0x18) & 1) * 8,arg2);
        }
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8001c90);
    (*pcVar1)();
}


// ===== sym.cpq_merged_requests @ 0x08001c90 (size 300) =====

void sym.cpq_merged_requests(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    code *pcVar4;
    uint64_t uVar5;
    int64_t arg2_00;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (-1 < *(arg3 + 0xe2)) {
        arg2_00 = *(*(arg1 + 8) + 8) + *(obj.ioprio_class_to_prio + (*(arg3 + 0xe2) >> 0xd & 7) * 4) * 0x60;
        if (*(arg3 + 0x90) != 0) {
            arg2_00 = arg2_00 + 0x138;
        }
        *(arg2_00 + 0x54) = *(arg2_00 + 0x54) + 1;
        if ((((*(arg2 + 0x90) == *(arg3 + 0x90)) && (piVar1 = arg2 + 0x48, piVar1 != *piVar1)) &&
            (piVar2 = arg3 + 0x48, piVar2 != *piVar2)) && (*(arg3 + 0xf8) - *(arg2 + 0xf8) < 0)) {
            uVar5 = __list_del_entry_valid(piVar1);
            if ((uVar5 & 1) != 0) {
                iVar6 = *(arg2 + 0x48);
                piVar3 = *(arg2 + 0x50);
                *(iVar6 + 8) = piVar3;
                *piVar3 = iVar6;
            }
            iVar6 = *piVar2;
            uVar5 = __list_add_valid(piVar1,piVar2,iVar6);
            if ((uVar5 & 1) != 0) {
                *(iVar6 + 8) = piVar1;
                *(arg2 + 0x48) = iVar6;
                *(arg2 + 0x50) = piVar2;
                *piVar2 = piVar1;
            }
            *(arg2 + 0xf8) = *(arg3 + 0xf8);
        }
        sym.cpq_remove_request(arg1,arg2_00,arg3);
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8001dbc);
    (*pcVar4)();
}


// ===== sym.cpq_limit_depth @ 0x08001dc4 (size 76) =====

void sym.cpq_limit_depth(uint32_t arg1,int64_t arg2)

{
    if (((arg1 & 1) == 0) && ((arg1 & 0xff) == 0 || (arg1 & 0x60800) != 0)) {
        return;
    }
    *(arg2 + 0xc) = *(*(*(*arg2 + 8) + 8) + 0x294);
    return;
}


// ===== sym.cpq_prepare_request @ 0x08001e10 (size 16) =====

void sym.cpq_prepare_request(int64_t arg1)

{
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x90) = 0;
    return;
}


// ===== sym.cpq_finish_request @ 0x08001e20 (size 232) =====

void sym.cpq_finish_request(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    code *pcVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0xe2);
    if (uVar2 < 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8001f04);
        (*pcVar3)();
    }
    if (*(arg1 + 0x88) != 0) {
        if ((uVar2 >> 0xd & 7) == 4) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x8001f08);
            (*pcVar3)();
        }
        iVar6 = *(*(*arg1 + 8) + 8);
        uVar1 = *(obj.ioprio_class_to_prio + (uVar2 >> 0xd) * 4);
        uVar4 = _raw_spin_lock_irqsave(iVar6 + 0x304);
        iVar5 = iVar6 + (*(arg1 + 0x90) != 0) * 0x138 + uVar1 * 0x60;
        *(iVar5 + 0x5c) = *(iVar5 + 0x5c) + 1;
        iVar5 = iVar6 + ((*(arg1 + 0x18) & 0xff) == 0 || (*(arg1 + 0x18) & 0x60800) != 0) * 4;
        *(iVar5 + 0x2f8) = *(iVar5 + 0x2f8) + -1;
        _raw_spin_unlock_irqrestore(iVar6 + 0x304,uVar4);
    }
    return;
}


// ===== sym.cpq_insert_requests @ 0x08001f08 (size 156) =====

void sym.cpq_insert_requests(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *puVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    puVar4 = arg2;
    *in_x18 = unaff_x30;
    if (*puVar4 != puVar4) {
        do {
            piVar5 = *puVar4;
            uVar3 = __list_del_entry_valid(piVar5);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar5;
                piVar2 = piVar5[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar5 = piVar5;
            piVar5[1] = piVar5;
            sym.cpq_insert_request(arg1,piVar5 + -9,arg3 & 1);
        } while (*puVar4 != puVar4);
    }
    return;
}


// ===== sym.cpq_dispatch_request @ 0x08001fac (size 784) =====

int64_t sym.cpq_dispatch_request(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t arg1_00;
    code *pcVar3;
    bool bVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint uVar8;
    ulong *in_x18;
    int64_t arg1_01;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_01 = *(*(*(arg1 + 0xe8) + 8) + 8);
    _raw_spin_lock_irq(arg1_01 + 0x304);
    uVar1 = *(arg1_01 + 0x270);
    uVar9 = uVar1;
    if (2 < uVar1) goto code_r0x080022b8;
    iVar11 = arg1_01 + uVar9 * 0x138;
    arg1_00 = arg1_01;
    if (*(iVar11 + 0x120) < *(iVar11 + 0x128)) {
        uVar6 = sym.cpq_group_no_more_request(arg1_00 + uVar1 * 0x138);
        if ((uVar6 & 1) == 0) {
            if (*(arg1_01 + 0x2f4) == '\0') {
code_r0x080020f0:
                iVar2 = *(arg1_01 + 0x270);
            }
            else {
                iVar2 = *(arg1_01 + 0x270);
                if (iVar2 == 0) {
                    hrtimer_try_to_cancel(arg1_01 + 0x2a0);
                    *(arg1_01 + 0x2f4) = 0;
                    goto code_r0x080020f0;
                }
            }
            if (((iVar2 == 1) && (uVar6 = sym.cpq_group_no_more_request(arg1_00), (uVar6 & 1) == 0)) &&
               (*(arg1_01 + 0x130) == 0)) {
                uVar8 = 2;
                goto code_r0x08002058;
            }
        }
        else {
            if (*(arg1_01 + 0x270) != 0) {
code_r0x08002020:
                *(arg1_01 + uVar9 * 0x138 + 0x130) = 0;
                goto code_r0x0800205c;
            }
            if (*(arg1_01 + 0x2f4) == '\0') {
                if ((*(arg1_01 + 0x2f5) == '\0') || (*(arg1_01 + 0x2fc) + *(arg1_01 + 0x2f8) < *(arg1_01 + 0x300)))
                goto code_r0x08002020;
                uVar10 = *(arg1_01 + 0x2e8);
                *(arg1_01 + 0x2f4) = 1;
                if (*(arg1_01 + 0x2f0) != 0) {
                    iVar11 = sp_el0;
                    _printk(0x800064c,"cpq_arm_slice_timer",0x2a8,*(iVar11 + 0x5d8),uVar10);
                }
                hrtimer_start_range_ns(arg1_01 + 0x2a0,uVar10,0,1);
                *(arg1_01 + 0x2f5) = 0;
            }
        }
code_r0x08002110:
        uVar9 = *(arg1_01 + 0x270);
        if (2 < *(arg1_01 + 0x270)) {
code_r0x080022b8:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x80022bc);
            (*pcVar3)();
        }
    }
    else {
        uVar6 = sym.cpq_group_no_more_request(arg1_00 + (uVar1 == 0) * 0x138);
        if ((uVar6 & 1) != 0) goto code_r0x08002110;
        uVar8 = 1;
        *(iVar11 + 0x120) = 0;
code_r0x08002058:
        *(arg1_01 + uVar9 * 0x138 + 0x130) = uVar8;
code_r0x0800205c:
        bVar4 = *(arg1_01 + 0x270) == 0;
        uVar9 = bVar4;
        *(arg1_01 + 0x270) = bVar4;
    }
    iVar11 = _elevator_alloc;
    iVar12 = arg1_01 + uVar9 * 0x138;
    uVar5 = *(iVar12 + 0xb0) != *(iVar12 + 0xbc);
    if (*(iVar12 + 0x50) != *(iVar12 + 0x5c)) {
        uVar5 = uVar5 + 1;
    }
    if (*(iVar12 + 0x110) != *(iVar12 + 0x11c)) {
        uVar5 = uVar5 + 1;
    }
    iVar2 = uVar9;
    if (((uVar5 < 2) ||
        ((iVar7 = sym.__cpq_dispatch_request
                            (arg1_01,arg1_00 + iVar2 * 0x138 + 0x60,_elevator_alloc - *(arg1_01 + 0x298)), iVar7 == 0
         && (iVar7 = sym.__cpq_dispatch_request(arg1_01,arg1_00 + iVar2 * 0x138 + 0xc0,iVar11 - *(arg1_01 + 0x298)),
            iVar7 == 0)))) &&
       (iVar7 = sym.__cpq_dispatch_request(arg1_01,arg1_00 + iVar2 * 0x138,iVar11), iVar7 == 0)) {
        if (*(iVar12 + 0x50) != *(iVar12 + 0x5c)) {
code_r0x0800224c:
            iVar7 = 0;
            goto code_r0x08002250;
        }
        iVar7 = sym.__cpq_dispatch_request(arg1_01,arg1_00 + iVar2 * 0x138 + 0x60,iVar11);
        if (iVar7 == 0) {
            if (*(iVar12 + 0xb0) != *(iVar12 + 0xbc)) goto code_r0x0800224c;
            iVar7 = sym.__cpq_dispatch_request(arg1_01,arg1_00 + iVar2 * 0x138 + 0xc0,iVar11);
            if (iVar7 == 0) goto code_r0x08002250;
        }
    }
    if (*(iVar7 + 0x90) == 0) {
        *(arg1_01 + 0x2f5) = 1;
    }
code_r0x08002250:
    _raw_spin_unlock_irq(arg1_01 + 0x304);
    return iVar7;
}


// ===== sym.cpq_has_work @ 0x080022bc (size 444) =====

uint sym.cpq_has_work(int64_t arg1)

{
    bool bVar1;
    bool bVar2;
    uint uVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint uVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    
    iVar6 = 0;
    iVar5 = *(*(*(arg1 + 0xe8) + 8) + 8);
    uVar3 = 1;
    uVar7 = 1;
    bVar1 = false;
    while( true ) {
        uVar4 = uVar7;
        uVar7 = uVar3;
        piVar8 = iVar5 + iVar6 * 0x138;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 8)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x20;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x28)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x30;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x38)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x60;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x68)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x80;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x88)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0x90;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0x98)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0xc0;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 200)) {
            return uVar4;
        }
        piVar8 = iVar5 + iVar6 * 0x138 + 0xe0;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        if (piVar8 != *(iVar5 + iVar6 * 0x138 + 0xe8)) break;
        piVar8 = iVar5 + iVar6 * 0x138 + 0xf0;
        if (piVar8 != *piVar8) {
            return uVar4;
        }
        piVar9 = *(iVar5 + iVar6 * 0x138 + 0xf8);
        iVar6 = 1;
        bVar2 = bVar1 || piVar8 != piVar9;
        uVar3 = 0;
        bVar1 = true;
        if (bVar2) {
            if (piVar8 == piVar9) {
                uVar4 = uVar7;
            }
            return uVar4;
        }
    }
    return uVar4;
}


// ===== sym.cpq_idle_slice_timer @ 0x0800249c (size 132) =====

ulong sym.cpq_idle_slice_timer(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(arg1 + 100);
    *(arg1 + 0x54) = 0;
    if (*(arg1 + 0x50) != 0) {
        iVar1 = sp_el0;
        _printk(0x8000636,"cpq_idle_slice_timer",0x298,*(iVar1 + 0x5d8));
    }
    _raw_spin_unlock_irqrestore(arg1 + 100,uVar2);
    return 0;
}


// ===== sym.cpq_remove_request @ 0x08002520 (size 208) =====

void sym.cpq_remove_request(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg3 + 0x48;
    uVar2 = __list_del_entry_valid(iVar1);
    if ((uVar2 & 1) != 0) {
        iVar3 = *(arg3 + 0x48);
        piVar4 = *(arg3 + 0x50);
        *(iVar3 + 8) = piVar4;
        *piVar4 = iVar3;
    }
    *(arg3 + 0x48) = iVar1;
    *(arg3 + 0x50) = iVar1;
    if (*(arg3 + 0x68) != arg3 + 0x68) {
        uVar2 = *(arg3 + 0x18) & 1;
        piVar4 = arg2 + uVar2 * 8 + 0x40;
        if (*piVar4 == arg3) {
            iVar3 = rb_next();
            iVar1 = 0;
            if (iVar3 != 0) {
                iVar1 = iVar3 + -0x68;
            }
            *piVar4 = iVar1;
            uVar2 = *(arg3 + 0x18) & 1;
        }
        elv_rb_del(arg2 + uVar2 * 8 + 0x10,arg3);
    }
    elv_rqhash_del(arg1,arg3);
    if (*arg1 == arg3) {
        *arg1 = 0;
    }
    return;
}


// ===== sym.cpq_insert_request @ 0x080025f0 (size 888) =====

void sym.cpq_insert_request(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t ***pppiVar2;
    int64_t ***pppiVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int16_t iVar6;
    int64_t iVar7;
    bool bVar8;
    code *pcVar9;
    int iVar10;
    int64_t iVar11;
    ulong *in_x18;
    int64_t ****ppppiVar12;
    int64_t ****ppppiVar13;
    int64_t ****ppppiVar14;
    int64_t ****ppppiVar15;
    int64_t ****ppppiVar16;
    int64_t ****ppppiVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    int64_t ***pppiStack_78;
    int64_t ***pppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    ppppiVar16 = arg3 & 0xffffffff;
    iStack_68 = *(iVar7 + 0x5e0);
    ppppiVar13 = *(arg1 + 0xe8);
    uVar4 = *(arg2 + 0x18);
    iVar6 = *(arg2 + 0xe2);
    ppppiVar17 = ppppiVar13[1][1];
    pppiStack_78 = &pppiStack_78;
    ppppiVar12 = ppppiVar17 + 0x304;
    pppiStack_70 = pppiStack_78;
    _raw_spin_lock_irq(ppppiVar12);
    if (iVar6 < 0) {
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5512,0x80028f8);
        (*pcVar9)();
    }
    iVar7 = sp_el0;
    bVar8 = (*(arg2 + 0x18) & 0xff) == 0 || (*(arg2 + 0x18) & 0x60800) != 0;
    *(ppppiVar17 + bVar8 * 4 + 0x2f8) = *(ppppiVar17 + bVar8 * 4 + 0x2f8) + 1;
    uVar18 = *(obj.ioprio_class_to_prio + (iVar6 >> 0xd & 7) * 4);
    iVar10 = strncmp(*(*(***(iVar7 + 0x978) + 0x118) + 0x10),"background",0xb);
    if (iVar10 == 0) {
        ppppiVar15 = ppppiVar17 + uVar18 * 0xc + 0x27;
        *(arg2 + 0x90) = 1;
        if (*(arg2 + 0x88) != 0) goto code_r0x08002728;
        iVar11 = uVar18 * 0xc + 0x31;
    }
    else {
        ppppiVar15 = ppppiVar17 + uVar18 * 0xc;
        *(arg2 + 0x90) = 0;
        if (*(arg2 + 0x88) != 0) goto code_r0x08002728;
        iVar11 = uVar18 * 0xc + 10;
    }
    *(ppppiVar17 + iVar11) = *(ppppiVar17 + iVar11) + 1;
    *(arg2 + 0x88) = 1;
code_r0x08002728:
    uVar18 = blk_mq_sched_try_insert_merge(ppppiVar13,arg2,&pppiStack_78);
    ppppiVar14 = ppppiVar15;
    if ((uVar18 & 1) == 0) goto code_r0x080027a0;
    _raw_spin_unlock_irq(ppppiVar12);
    if (&pppiStack_78 != pppiStack_78) {
        ppppiVar13 = &pppiStack_78;
        do {
            arg2 = pppiStack_78;
            ppppiVar12 = pppiStack_78 + -9;
            uVar18 = __list_del_entry_valid(pppiStack_78);
            if ((uVar18 & 1) != 0) {
                pppiVar2 = *arg2;
                pppiVar3 = *(arg2 + 8);
                pppiVar2[1] = pppiVar3;
                *pppiVar3 = pppiVar2;
            }
            *arg2 = arg2;
            *(arg2 + 8) = arg2;
            blk_mq_free_request(ppppiVar12);
        } while (ppppiVar13 != pppiStack_78);
    }
    while( true ) {
        iVar11 = sp_el0;
        if (*(iVar11 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
        iVar11 = tpidr_el1;
        ppppiVar14 = ppppiVar15;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar11) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar11) & 0x3f) & 1)
            != 0) {
            piVar1 = iVar7 + 0x10;
            *(iVar7 + 0x10) = *piVar1 + 1;
            __traceiter_block_rq_insert(0,arg2);
            iVar11 = *piVar1;
            *(iVar7 + 0x10) = iVar11 + -1;
            if ((iVar11 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
code_r0x080027a0:
        if ((ppppiVar16 & 1) == 0) {
            uVar18 = uVar4 & 1;
            elv_rb_add(ppppiVar14 + (*(arg2 + 0x18) & 1) + 2,arg2);
            uVar5 = *(arg2 + 0x18);
            if ((((uVar5 & 0xfe) != 0x22) &&
                (((0xd < (uVar5 & 0xff) || ((1 << (uVar5 & 0x1f) & 0x2204U) == 0)) && ((uVar5 & 0x64000) == 0)))) &&
               (((*(arg2 + 0x1c) & 0x4001a) == 0 && (elv_rqhash_add(ppppiVar13,arg2), *ppppiVar13 == NULL)))) {
                *ppppiVar13 = arg2;
            }
            ppppiVar15 = arg2 + 0x48;
            *(arg2 + 0xf8) = _elevator_alloc + *(ppppiVar17 + uVar18 * 4 + 0x280);
            ppppiVar17 = ppppiVar14 + uVar18 * 2 + 5;
            ppppiVar13 = *ppppiVar17;
            ppppiVar16 = ppppiVar14 + uVar18 * 2 + 4;
            uVar18 = __list_add_valid(ppppiVar15,ppppiVar13,ppppiVar16);
            if ((uVar18 & 1) != 0) {
                *ppppiVar17 = ppppiVar15;
                *(arg2 + 0x48) = ppppiVar16;
                *(arg2 + 0x50) = ppppiVar13;
                *ppppiVar13 = ppppiVar15;
            }
        }
        else {
            ppppiVar16 = *ppppiVar14;
            ppppiVar13 = arg2 + 0x48;
            uVar18 = __list_add_valid(ppppiVar13,ppppiVar14,ppppiVar16);
            if ((uVar18 & 1) != 0) {
                ppppiVar16[1] = ppppiVar13;
                *(arg2 + 0x48) = ppppiVar16;
                *(arg2 + 0x50) = ppppiVar14;
                *ppppiVar14 = ppppiVar13;
            }
            *(arg2 + 0xf8) = _elevator_alloc;
            ppppiVar15 = ppppiVar14;
        }
        _raw_spin_unlock_irq(ppppiVar12);
    }
    return;
}


// ===== sym.cpq_group_no_more_request @ 0x08002984 (size 308) =====

bool sym.cpq_group_no_more_request(uint32_t arg1)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    
    puVar2 = arg1;
    if (((((((puVar2 == *puVar2) && (puVar2 == puVar2[1])) && (puVar1 = puVar2 + 4, puVar1 == *puVar1)) &&
          ((puVar1 == puVar2[5] && (puVar1 = puVar2 + 6, puVar1 == *puVar1)))) &&
         ((puVar1 == puVar2[7] && ((puVar1 = puVar2 + 0xc, puVar1 == *puVar1 && (puVar1 == puVar2[0xd])))))) &&
        (puVar1 = puVar2 + 0x10, puVar1 == *puVar1)) &&
       ((((puVar1 == puVar2[0x11] && (puVar1 = puVar2 + 0x12, puVar1 == *puVar1)) && (puVar1 == puVar2[0x13])) &&
        (((puVar1 = puVar2 + 0x18, puVar1 == *puVar1 && (puVar1 == puVar2[0x19])) &&
         ((puVar1 = puVar2 + 0x1c, puVar1 == *puVar1 &&
          ((puVar1 == puVar2[0x1d] && (puVar1 = puVar2 + 0x1e, puVar1 == *puVar1)))))))))) {
        return puVar1 == puVar2[0x1f];
    }
    return false;
}


// ===== sym.__cpq_dispatch_request @ 0x08002adc (size 864) =====

int64_t * sym.__cpq_dispatch_request(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int iVar2;
    int16_t iVar3;
    code *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *arg2_00;
    uint32_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    char32_t *pcVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    arg2_00 = arg2;
    *in_x18 = unaff_x30;
    if (arg2_00 == *arg2_00) {
        if (1 < *(arg1 + 0x274)) goto code_r0x08002e30;
        piVar11 = arg2_00[*(arg1 + 0x274) + 8];
        if ((piVar11 == NULL) || (uVar8 = *(arg1 + 0x278), *(arg1 + 0x288) <= uVar8)) {
            if (arg2_00 + 4 == arg2_00[4]) {
                if (arg2_00 + 6 == arg2_00[6]) {
                    return NULL;
                }
code_r0x08002bec:
                if (arg2_00[3] == 0) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8002e3c);
                    (*pcVar4)();
                }
                uVar7 = 1;
                *(arg1 + 0x27c) = 0;
            }
            else {
                if (arg2_00[2] == 0) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8002e38);
                    (*pcVar4)();
                }
                piVar11 = arg2_00 + 6;
                if (((piVar11 != *piVar11) && (*piVar11 != 0x48)) &&
                   (uVar8 = *(arg1 + 0x27c), *(arg1 + 0x27c) = uVar8 + 1, *(arg1 + 0x28c) <= uVar8))
                goto code_r0x08002bec;
                uVar7 = 0;
            }
            piVar11 = arg2_00[uVar7 + 8];
            if ((-1 < _elevator_alloc - *(arg2_00[uVar7 * 2 + 4] + 0xb0)) || (piVar11 == NULL)) {
                piVar11 = arg2_00 + uVar7 * 2 + 4;
                if (piVar11 == *piVar11) {
                    return NULL;
                }
                piVar11 = *piVar11 + -0x48;
                if (piVar11 == NULL) {
                    return NULL;
                }
            }
            uVar8 = 0;
            *(arg1 + 0x274) = uVar7;
            *(arg1 + 0x278) = 0;
        }
        if ((arg3 - piVar11[0x1f]) + *(arg1 + (*(piVar11 + 3) & 1) * 4 + 0x280) < 0) {
            return NULL;
        }
        *(arg1 + 0x278) = uVar8 + 1;
        uVar8 = *(piVar11 + 3);
        iVar6 = rb_next(piVar11 + 0xd);
        iVar9 = 0;
        if (iVar6 != 0) {
            iVar9 = iVar6 + -0x68;
        }
        arg2_00[(uVar8 & 1) + 8] = iVar9;
        sym.cpq_remove_request(*piVar11,arg2_00,piVar11);
        iVar3 = *(piVar11 + 0xe2);
    }
    else {
        piVar12 = *arg2_00;
        if ((arg3 - piVar12[0x16]) + *(arg1 + (*(piVar12 + -6) & 1) * 4 + 0x280) < 0) {
            return NULL;
        }
        piVar11 = piVar12 + -9;
        uVar5 = __list_del_entry_valid(piVar12);
        if ((uVar5 & 1) != 0) {
            iVar9 = *piVar12;
            piVar1 = piVar12[1];
            *(iVar9 + 8) = piVar1;
            *piVar1 = iVar9;
        }
        *piVar12 = piVar12;
        piVar12[1] = piVar12;
        iVar3 = *(piVar12 + 0x9a);
    }
    if (-1 < iVar3) {
        uVar8 = *(piVar11 + 5);
        uVar5 = *(piVar11 + 3) & 1;
        if (piVar11[0x12] != 0) {
            arg1 = arg1 + 0x138;
        }
        if (uVar8 < 0x1001) {
            pcVar10 = str.Ykv + uVar5 * 8;
        }
        else if (uVar8 < 0x2001) {
            pcVar10 = str.Ykv + uVar5 * 8 + 1;
        }
        else if (uVar8 < 0x4001) {
            pcVar10 = str.Ykv + uVar5 * 8 + 2;
        }
        else if (uVar8 < 0x8001) {
            pcVar10 = str.Ykv + uVar5 * 8 + 3;
        }
        else if (uVar8 < 0x10001) {
            pcVar10 = str.Ykv + uVar5 * 8 + 4;
        }
        else if (uVar8 < 0x20001) {
            pcVar10 = uVar5 * 0x20 + 0x8000780;
        }
        else if (uVar8 < 0x40001) {
            pcVar10 = uVar5 * 0x20 + 0x8000784;
        }
        else {
            pcVar10 = uVar5 * 0x20 + 0x8000788;
        }
        iVar9 = arg1 + *(obj.ioprio_class_to_prio + (iVar3 >> 0xd & 7) * 4) * 0x60;
        iVar2 = *(iVar9 + 0x58);
        *(arg1 + 0x120) = *(arg1 + 0x120) + *pcVar10;
        *(iVar9 + 0x58) = iVar2 + 1;
        *(piVar11 + 0x1c) = *(piVar11 + 0x1c) | 2;
        return piVar11;
    }
code_r0x08002e30:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8002e34);
    (*pcVar4)();
}


// ===== sym.cpq_read_expire_show @ 0x08002e58 (size 80) =====

int64_t sym.cpq_read_expire_show(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = jiffies_to_msecs(*(*(arg1 + 8) + 0x280));
    iVar2 = sysfs_emit(arg2,0x80006a2,uVar1);
    return iVar2;
}


// ===== sym.cpq_read_expire_store @ 0x08002ea8 (size 152) =====

int64_t sym.cpq_read_expire_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&iStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (iStack_2c < 0) {
            iStack_2c = 0;
        }
        uVar2 = __msecs_to_jiffies(iStack_2c);
        *(iVar3 + 0x280) = uVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_write_expire_show;
    uVar2 = jiffies_to_msecs(*(*(auVar4._0_8_ + 8) + 0x284));
    iVar1 = sysfs_emit(auVar4._8_8_,0x80006a2,uVar2);
    return iVar1;
}


// ===== sym.cpq_write_expire_show @ 0x08002f40 (size 80) =====

int64_t sym.cpq_write_expire_show(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = jiffies_to_msecs(*(*(arg1 + 8) + 0x284));
    iVar2 = sysfs_emit(arg2,0x80006a2,uVar1);
    return iVar2;
}


// ===== sym.cpq_write_expire_store @ 0x08002f90 (size 152) =====

int64_t sym.cpq_write_expire_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&iStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (iStack_2c < 0) {
            iStack_2c = 0;
        }
        uVar2 = __msecs_to_jiffies(iStack_2c);
        *(iVar3 + 0x284) = uVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_writes_starved_show;
    iVar1 = sysfs_emit(auVar4._8_8_,0x80006a2,*(*(auVar4._0_8_ + 8) + 0x28c));
    return iVar1;
}


// ===== sym.cpq_writes_starved_show @ 0x08003028 (size 64) =====

int64_t sym.cpq_writes_starved_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80006a2,*(*(arg1 + 8) + 0x28c));
    return iVar1;
}


// ===== sym.cpq_writes_starved_store @ 0x08003068 (size 136) =====

int64_t sym.cpq_writes_starved_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&uStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        *(iVar2 + 0x28c) = uStack_2c;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_front_merges_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x290));
    return iVar1;
}


// ===== sym.cpq_front_merges_show @ 0x080030f0 (size 64) =====

int64_t sym.cpq_front_merges_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80006a2,*(*(arg1 + 8) + 0x290));
    return iVar1;
}


// ===== sym.cpq_front_merges_store @ 0x08003130 (size 144) =====

int64_t sym.cpq_front_merges_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&iStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        *(iVar2 + 0x290) = 0 < iStack_2c;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_async_depth_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x294));
    return iVar1;
}


// ===== sym.cpq_async_depth_show @ 0x080031c0 (size 64) =====

int64_t sym.cpq_async_depth_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80006a2,*(*(arg1 + 8) + 0x294));
    return iVar1;
}


// ===== sym.cpq_async_depth_store @ 0x08003200 (size 144) =====

int64_t sym.cpq_async_depth_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&iStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        iVar1 = iStack_2c;
        if (iStack_2c < 2) {
            iVar1 = 1;
        }
        *(iVar2 + 0x294) = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_fifo_batch_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x288));
    return iVar1;
}


// ===== sym.cpq_fifo_batch_show @ 0x08003290 (size 64) =====

int64_t sym.cpq_fifo_batch_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80006a2,*(*(arg1 + 8) + 0x288));
    return iVar1;
}


// ===== sym.cpq_fifo_batch_store @ 0x080032d0 (size 140) =====

int64_t sym.cpq_fifo_batch_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&uStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        *(iVar3 + 0x288) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_prio_aging_expire_show;
    uVar2 = jiffies_to_msecs(*(*(auVar4._0_8_ + 8) + 0x298));
    iVar1 = sysfs_emit(auVar4._8_8_,0x80006a2,uVar2);
    return iVar1;
}


// ===== sym.cpq_prio_aging_expire_show @ 0x0800335c (size 80) =====

int64_t sym.cpq_prio_aging_expire_show(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = jiffies_to_msecs(*(*(arg1 + 8) + 0x298));
    iVar2 = sysfs_emit(arg2,0x80006a2,uVar1);
    return iVar2;
}


// ===== sym.cpq_prio_aging_expire_store @ 0x080033ac (size 152) =====

int64_t sym.cpq_prio_aging_expire_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 8);
    iStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&iStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        if (iStack_2c < 0) {
            iStack_2c = 0;
        }
        uVar2 = __msecs_to_jiffies(iStack_2c);
        *(iVar3 + 0x298) = uVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_fore_timeout_show;
    iVar1 = sysfs_emit(auVar4._8_8_,0x80006a2,*(*(auVar4._0_8_ + 8) + 0x128));
    return iVar1;
}


// ===== sym.cpq_fore_timeout_show @ 0x08003444 (size 64) =====

int64_t sym.cpq_fore_timeout_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80006a2,*(*(arg1 + 8) + 0x128));
    return iVar1;
}


// ===== sym.cpq_fore_timeout_store @ 0x08003484 (size 140) =====

int64_t sym.cpq_fore_timeout_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&uStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        *(iVar2 + 0x128) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_back_timeout_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x260));
    return iVar1;
}


// ===== sym.cpq_back_timeout_show @ 0x08003510 (size 64) =====

int64_t sym.cpq_back_timeout_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80006a2,*(*(arg1 + 8) + 0x260));
    return iVar1;
}


// ===== sym.cpq_back_timeout_store @ 0x08003550 (size 140) =====

int64_t sym.cpq_back_timeout_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&uStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        *(iVar2 + 0x260) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_cpq_log_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x2f0));
    return iVar1;
}


// ===== sym.cpq_cpq_log_show @ 0x080035dc (size 64) =====

int64_t sym.cpq_cpq_log_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80006a2,*(*(arg1 + 8) + 0x2f0));
    return iVar1;
}


// ===== sym.cpq_cpq_log_store @ 0x0800361c (size 140) =====

int64_t sym.cpq_cpq_log_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&uStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        *(iVar2 + 0x2f0) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_slice_idle_show;
    iVar1 = sprintf(auVar3._8_8_,0x8000622,*(*(auVar3._0_8_ + 8) + 0x2e8) / 1000000);
    return iVar1;
}


// ===== sym.cpq_slice_idle_show @ 0x080036a8 (size 88) =====

int64_t sym.cpq_slice_idle_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,0x8000622,*(*(arg1 + 8) + 0x2e8) / 1000000);
    return iVar1;
}


// ===== sym.cpq_slice_idle_store @ 0x08003700 (size 152) =====

int64_t sym.cpq_slice_idle_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 8);
    uStack_2c = 0;
    iVar1 = kstrtoint(arg2,0,&uStack_2c);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        *(iVar2 + 0x2e8) = (uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU)) * 1000000;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cpq_io_threshold_show;
    iVar1 = sysfs_emit(auVar3._8_8_,0x80006a2,*(*(auVar3._0_8_ + 8) + 0x300));
    return iVar1;
}


// ===== sym.cpq_io_threshold_show @ 0x08003798 (size 64) =====

int64_t sym.cpq_io_threshold_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_emit(arg2,0x80006a2,*(*(arg1 + 8) + 0x300));
    return iVar1;
}


// ===== sym.cpq_io_threshold_store @ 0x080037d8 (size 140) =====

uchar * sym.cpq_io_threshold_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 8);
    uStack_2c = 0;
    iVar2 = kstrtoint(arg2,0,&uStack_2c);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        *(iVar4 + 0x300) = uStack_2c & (uStack_2c >> 0x1f ^ 0xffffffffU);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x80038bc);
        (*pcVar1)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x08003864 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080038a8

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
    //switch table (4 cases) at 0x8000754
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80038bc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080038c4 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    elv_register(obj.iosched_cpq_mq);
    return;
}


// ===== sym.cleanup_module @ 0x080038f0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    elv_unregister(obj.iosched_cpq_mq);
    return;
}

