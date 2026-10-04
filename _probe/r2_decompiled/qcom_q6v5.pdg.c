// decompiled from qcom_q6v5 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08011000 (size 592) =====

//WARNING: Switch with 1 destination removed at 0x08012614

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x321969b888d4949e) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 != -0x550b9e52359ac614) {
                if (arg1 == -0x3c3b0e3cdc490194) {
                    if ((pcVar1 + -0x8011290 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                }
                else if ((arg1 == -0x3987c0e26ee29729) && ((pcVar1 + -0x80112c0 >> 3 | pcVar1 << 0x3d) < 5)) {
                    return;
                }
                goto code_r0x080125d4;
            }
            pcVar2 = sym.qcom_q6v5_crash_handler_work.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x80112e8 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x080125d4;
            }
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.seq_read.cfi_jt;
            }
            else {
                if (arg1 != 0x1551cb5912fc4697) goto code_r0x080125d4;
                pcVar2 = sym.qcom_q6v5_register_ssr_subdev.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
        else if (arg1 == 0x441b62e48fb63438) {
            pcVar2 = sym.qcom_q6v5_panic.cfi_jt;
        }
        else {
            if (arg1 != 0x474deb6be12ed93a) goto code_r0x080125d4;
            pcVar2 = sym.qcom_q6v5_init.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            if ((pcVar1 + -0x80112a0 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x080125d4;
        }
        if (arg1 == 0x57556e39741f2fca) {
            pcVar2 = sym.qcom_q6v5_request_stop.cfi_jt;
        }
        else {
            if (arg1 != 0x5b2db2bdde9e09be) goto code_r0x080125d4;
            pcVar2 = sym.qcom_q6v5_wait_for_start.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080125d4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8012628);
    (*pcVar1)();
}


// ===== sym.qcom_q6v5_register_ssr_subdev.cfi_jt @ 0x08011258 (size 8) =====

void sym.qcom_q6v5_register_ssr_subdev.cfi_jt(int64_t param_1,ulong param_2)

{
    *(param_1 + 0x38) = param_2;
    return;
}


// ===== sym.qcom_q6v5_wait_for_start.cfi_jt @ 0x08011260 (size 8) =====

ulong sym.qcom_q6v5_wait_for_start.cfi_jt(int64_t param_1,int param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = wait_for_completion_timeout(param_1 + 0x78,param_2);
    if (iVar1 == 0) {
        disable_irq(*(param_1 + 0x30));
        uVar2 = 0xffffff92;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08011268 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_q6v5_request_stop.cfi_jt @ 0x08011270 (size 8) =====

uint sym.qcom_q6v5_request_stop.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    uint64_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        remove_proc_entry("last_mcrash",0);
        _segment.ehdr = 0;
    }
    if (_segment.ehdr != 0) {
        remove_proc_entry("modem_sleep_stats",0);
        _segment.ehdr = 0;
    }
    if (_segment.ehdr != 0) {
        remove_proc_entry("apss_sleep_stats",0);
        _segment.ehdr = 0;
    }
    *(param_1 + 0xbc) = 0;
    uVar3 = 0;
    if (*(*(param_1 + 8) + 0x3cc) == 2) {
        uVar2 = qcom_sysmon_shutdown_acked(param_2);
        if ((uVar2 & 1) == 0) {
            uVar2 = 1L << (*(param_1 + 0x20) & 0x3f);
            qcom_smem_state_update_bits(*(param_1 + 0x18),uVar2,uVar2 & 0xffffffff);
            iVar1 = wait_for_completion_timeout(param_1 + 0x98,0x4e2);
            qcom_smem_state_update_bits(*(param_1 + 0x18),1L << (*(param_1 + 0x20) & 0x3f),0);
            uVar3 = 0xffffff92;
            if (iVar1 != 0) {
                uVar3 = 0;
            }
        }
        else {
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.qcom_q6v5_crash_handler_work.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x08011278 (size 8) =====

void sym.qcom_q6v5_crash_handler_work.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + -0x38);
    iVar1 = iVar7 + 0x3d8;
    mutex_lock(iVar1);
    piVar2 = iVar7 + 0x3c8;
    *(iVar7 + 0x3cc) = 3;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
            *piVar2 = 0;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar3 == 0) {
        mutex_unlock(iVar1);
        return;
    }
    iVar6 = *(iVar7 + 0x468);
    do {
        if (iVar6 == iVar7 + 0x460) {
            mutex_unlock(iVar1);
            msleep(100);
            panic("Panicking, remoteproc %s crashed\n",*(*(param_1 + -0x38) + 0x18));
        }
        pcVar8 = *(iVar6 + 0x20);
        if (pcVar8 != NULL) {
            __cfi_slowpath_diag(0xe2f088f3a2afdbfa,pcVar8,0x8010320);
            (*pcVar8)(iVar6,1);
        }
        iVar6 = *(iVar6 + 8);
    } while( true );
}


// ===== sym.seq_read.cfi_jt @ 0x08011280 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_q6v5_init.cfi_jt @ 0x08011288 (size 8) =====

int sym.qcom_q6v5_init.cfi_jt(int64_t *param_1,int64_t param_2,int64_t param_3,uint param_4,int64_t param_5)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr == 0) &&
       (_segment.ehdr = proc_create("last_mcrash",0x8124,0,obj.last_modem_sfr_file_ops), _segment.ehdr == 0)) {
        _printk(0x8010404);
    }
    if ((_segment.ehdr == 0) &&
       (_segment.ehdr = proc_create("modem_sleep_stats",0x8124,0,obj.modem_sleep_stats_file_ops), _segment.ehdr == 0
       )) {
        _printk(0x8010723);
    }
    if ((_segment.ehdr == 0) &&
       (_segment.ehdr = proc_create("apss_sleep_stats",0x8124,0,obj.apss_sleep_stats_file_ops), _segment.ehdr == 0))
    {
        _printk(0x8010599);
    }
    iVar1 = param_2 + 0x10;
    param_1[0x18] = param_5;
    *(param_1 + 0x17) = param_4;
    *param_1 = iVar1;
    param_1[1] = param_3;
    param_1[7] = 0;
    *(param_1 + 0xf) = 0;
    __init_swait_queue_head(param_1 + 0x10,"&x->wait",obj.init_completion.__key);
    *(param_1 + 0x13) = 0;
    __init_swait_queue_head(param_1 + 0x14,"&x->wait",obj.init_completion.__key);
    iVar3 = platform_get_resource(param_2,0x200,1);
    if (iVar3 == 0) {
        uVar5 = 0;
    }
    else {
        uVar4 = devm_ioremap_resource(iVar1,iVar3);
        uVar5 = 0;
        if (uVar4 < 0xfffffffffffff001) {
            uVar5 = uVar4;
        }
    }
    param_1[2] = uVar5;
    iVar2 = platform_get_irq_byname(param_2,"wdog");
    *(param_1 + 0x24) = iVar2;
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = devm_request_threaded_irq
                      (iVar1,iVar2,0,sym.q6v5_wdog_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0x2000,
                       0x801050c,param_1);
    if (iVar2 == 0) {
        iVar2 = platform_get_irq_byname(param_2,"fatal");
        *(param_1 + 5) = iVar2;
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = devm_request_threaded_irq
                          (iVar1,iVar2,0,sym.q6v5_fatal_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0x2001,
                           "q6v5 fatal",param_1);
        if (iVar2 == 0) {
            iVar2 = platform_get_irq_byname(param_2,"ready");
            *(param_1 + 0x2c) = iVar2;
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = devm_request_threaded_irq
                              (iVar1,iVar2,0,sym.q6v5_ready_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0x2001
                               ,"q6v5 ready",param_1);
            if (iVar2 == 0) {
                iVar2 = platform_get_irq_byname(param_2,"handover");
                *(param_1 + 6) = iVar2;
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = devm_request_threaded_irq
                                  (iVar1,iVar2,0,sym.q6v5_handover_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt
                                   ,0x2001,"q6v5 handover",param_1);
                if (iVar2 == 0) {
                    disable_irq(param_1[6]);
                    iVar2 = platform_get_irq_byname(param_2,"stop-ack");
                    *(param_1 + 0x34) = iVar2;
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    iVar2 = devm_request_threaded_irq
                                      (iVar1,iVar2,0,sym.q6v5_stop_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt
                                       ,0x2001,"q6v5 stop",param_1);
                    if (iVar2 == 0) {
                        uVar5 = qcom_smem_state_get(iVar1,"stop",param_1 + 4);
                        param_1[3] = uVar5;
                        if (uVar5 < 0xfffffffffffff001) {
                            param_1[8] = 0xfffffffe0;
                            param_1[9] = param_1 + 9;
                            param_1[10] = param_1 + 9;
                            param_1[0xb] = sym.qcom_q6v5_crash_handler_work.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt;
                            return 0;
                        }
                        _dev_err(iVar1,"failed to acquire stop state\n");
                        return param_1[3];
                    }
                    pcVar6 = "failed to acquire stop-ack IRQ\n";
                }
                else {
                    pcVar6 = "failed to acquire handover IRQ\n";
                }
            }
            else {
                pcVar6 = "failed to acquire ready IRQ\n";
            }
        }
        else {
            pcVar6 = "failed to acquire fatal IRQ\n";
        }
    }
    else {
        pcVar6 = "failed to acquire wdog IRQ\n";
    }
    _dev_err(iVar1,pcVar6);
    return iVar2;
}


// ===== sym.qcom_q6v5_unprepare.cfi_jt @ 0x08011290 (size 8) =====

uint8_t sym.qcom_q6v5_unprepare.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    disable_irq(*(param_1 + 0x30));
    return *(param_1 + 0x70) ^ 1;
}


// ===== sym.qcom_q6v5_prepare.cfi_jt @ 0x08011298 (size 8) =====

ulong sym.qcom_q6v5_prepare.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _segment.ehdr = proc_create("last_mcrash",0x8124,0,obj.last_modem_sfr_file_ops);
        if (_segment.ehdr == 0) {
            _printk(0x8010404);
        }
    }
    *(param_1 + 0x78) = 0;
    if (_segment.ehdr == 0) {
        _segment.ehdr = proc_create("modem_sleep_stats",0x8124,0,obj.modem_sleep_stats_file_ops);
        if (_segment.ehdr == 0) {
            _printk(0x8010723);
        }
    }
    if (_segment.ehdr == 0) {
        _segment.ehdr = proc_create("apss_sleep_stats",0x8124,0,obj.apss_sleep_stats_file_ops);
        if (_segment.ehdr == 0) {
            _printk(0x8010599);
        }
    }
    *(param_1 + 0x98) = 0;
    *(param_1 + 0x70) = 0;
    *(param_1 + 0xbc) = 1;
    enable_irq(*(param_1 + 0x30));
    return 0;
}


// ===== sym.modem_sleep_stats_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112a0 (size 8) =====

uint64_t sym.modem_sleep_stats_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1)

{
    code *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = qcom_smem_get(1,0x25d,0);
    pcVar1 = _single_release;
    if (uVar2 < 0xfffffffffffff001) {
        iVar4 = *(uVar2 + 0x18);
        if (*(uVar2 + 0x10) < *(uVar2 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_single_release,0x80102c0);
            iVar3 = (*pcVar1)();
            iVar4 = (iVar3 + iVar4) - *(uVar2 + 8);
        }
        seq_printf(param_1,"Count = %u\n",*(uVar2 + 4));
        seq_printf(param_1,"Last Entered At = %llu\n",*(uVar2 + 8));
        seq_printf(param_1,"Last Exited At = %llu\n",*(uVar2 + 0x10));
        seq_printf(param_1,"Accumulated Duration = %llu\n",iVar4);
        uVar2 = 0;
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.last_modem_sfr_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112a8 (size 8) =====

ulong sym.last_modem_sfr_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,0x801078e,"");
    return 0;
}


// ===== sym.apss_sleep_stats_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112b0 (size 8) =====

uint64_t sym.apss_sleep_stats_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1)

{
    code *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = qcom_smem_get(0xffffffff,0x277,0);
    pcVar1 = _single_release;
    if (uVar2 < 0xfffffffffffff001) {
        iVar4 = *(uVar2 + 0x18);
        if (*(uVar2 + 0x10) < *(uVar2 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_single_release,0x80102e0);
            iVar3 = (*pcVar1)();
            iVar4 = (iVar3 + iVar4) - *(uVar2 + 8);
        }
        seq_printf(param_1,"Count = %u\n",*(uVar2 + 4));
        seq_printf(param_1,"Last Entered At = %llu\n",*(uVar2 + 8));
        seq_printf(param_1,"Last Exited At = %llu\n",*(uVar2 + 0x10));
        seq_printf(param_1,"Accumulated Duration = %llu\n",iVar4);
        uVar2 = 0;
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.qcom_q6v5_panic.cfi_jt @ 0x080112b8 (size 8) =====

ulong sym.qcom_q6v5_panic.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 1L << (*(param_1 + 0x20) & 0x3f);
    qcom_smem_state_update_bits(*(param_1 + 0x18),uVar1,uVar1 & 0xffffffff);
    return 200;
}


// ===== sym.q6v5_stop_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112c0 (size 8) =====

ulong sym.q6v5_stop_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(param_2 + 0x98);
    return 1;
}


// ===== sym.q6v5_ready_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112c8 (size 8) =====

ulong sym.q6v5_ready_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(param_2 + 0x78);
    return 1;
}


// ===== sym.q6v5_fatal_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112d0 (size 8) =====

ulong sym.q6v5_fatal_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1,ulong *param_2)

{
    int64_t *piVar1;
    char *pcVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    ulong extraout_x1;
    int64_t iVar8;
    ulong *in_x18;
    char *unaff_x20;
    uint64_t uVar9;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    if (*(param_2 + 0xbc) == '\0') {
        _dev_info(*param_2,"received fatal irq while q6 is offline\n");
        goto code_r0x08012068;
    }
    unaff_x20 = qcom_smem_get(0xffffffff,*(param_2 + 0x17),&iStack_60);
    if (((unaff_x20 < 0xfffffffffffff001) && (iStack_60 != 0)) && (*unaff_x20 != '\0')) {
        _dev_err(*param_2,"fatal error received: %s\n",unaff_x20);
        _dev_err(*param_2,"subsystem failure reason: %s. \n",unaff_x20);
        strlcpy("",unaff_x20,0x100);
        uVar9 = _segment.ehdr;
        uVar3 = _segment.ehdr + 1;
        bVar5 = 0x100 < _segment.ehdr;
        _segment.ehdr = uVar3;
        if (bVar5) goto code_r0x080120ac;
        strlcpy(obj.modem_crash_reason + uVar9 * 0x100,unaff_x20,0x100);
        iVar7 = strstr(unaff_x20,"Xiaomi ERR_FATAL code: 0x00080000");
        if (iVar7 == 0) {
            *(param_2[1] + 0x3d0) = 1;
        }
        else {
            *(param_2[1] + 0x3d0) = 0;
        }
    }
    else {
        _dev_err(*param_2,"fatal error without message\n");
        _dev_err(*param_2,"subsystem failure reason: fatal error without message. \n");
    }
    uVar3 = _segment.ehdr;
    *(param_2 + 0xbc) = 0;
    if (9 < uVar3) {
        uVar3 = uVar3 - 1;
        uVar9 = uVar3;
        if (0x100 < uVar3) {
code_r0x080120ac:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x80120b0);
            (*pcVar4)();
        }
        iVar7 = uVar9 << 8;
        do {
            if (0x100 < uVar9 - 1) goto code_r0x080120ac;
            iVar6 = strcmp(obj.modem_crash_reason + uVar9 * 0x100,"" + iVar7);
            if (iVar6 == 0) {
                _segment.ehdr = uVar3;
                *(param_2[1] + 0x3d0) = 0;
                _printk(0x801066f);
                goto code_r0x08011fe8;
            }
            iVar7 = iVar7 + -0x100;
        } while (iVar7 != 0);
        *(param_2[1] + 0x3d0) = 1;
    }
code_r0x08011fe8:
    while( true ) {
        _dev_err(*param_2,"rproc coredump state: %s\n",*(param_2[1] + 0x3d0));
        pcVar2 = "enabled and kick reovery process";
        if (*(param_2[1] + 0x4c4) != '\0') {
            pcVar2 = "disabled and lead to device crash";
        }
        _dev_err(*param_2,"rproc recovery state: %s\n",pcVar2);
        iVar7 = param_2[1];
        if (*(iVar7 + 0x4c4) == '\0') {
            if (param_2[7] != 0) {
                qcom_notify_early_ssr_clients(param_2[7]);
                iVar7 = param_2[1];
            }
            rproc_report_crash(iVar7,2);
        }
        else {
            queue_work_on(0x20,_seq_lseek,param_2 + 8);
        }
code_r0x08012068:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
        iVar7 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar7 = sp_el0;
            piVar1 = iVar7 + 0x10;
            *(iVar7 + 0x10) = *piVar1 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x1,0x80104c8,unaff_x20);
            iVar8 = *piVar1;
            *(iVar7 + 0x10) = iVar8 + -1;
            if ((iVar8 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 1;
}


// ===== sym.q6v5_wdog_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112d8 (size 8) =====

ulong sym.q6v5_wdog_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1,ulong *param_2)

{
    int64_t *piVar1;
    char *pcVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    ulong extraout_x1;
    int64_t iVar8;
    ulong *in_x18;
    ulong *puVar9;
    char *unaff_x20;
    uint64_t uVar10;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    if (*(param_2 + 0xbc) == '\0') {
        puVar9 = param_2 + 0x13;
        _dev_info(*param_2,"received wdog irq while q6 is offline\n");
        complete(puVar9);
        goto code_r0x08011c9c;
    }
    unaff_x20 = qcom_smem_get(0xffffffff,*(param_2 + 0x17),&iStack_60);
    if (((unaff_x20 < 0xfffffffffffff001) && (iStack_60 != 0)) && (*unaff_x20 != '\0')) {
        _dev_err(*param_2,"watchdog received: %s\n",unaff_x20);
        _dev_err(*param_2,"subsystem failure reason: %s. \n",unaff_x20);
        strlcpy("",unaff_x20,0x100);
        uVar10 = _segment.ehdr;
        uVar3 = _segment.ehdr + 1;
        bVar5 = 0x100 < _segment.ehdr;
        _segment.ehdr = uVar3;
        if (bVar5) goto code_r0x08011ce0;
        strlcpy(obj.modem_crash_reason + uVar10 * 0x100,unaff_x20,0x100);
        iVar7 = strstr(unaff_x20,"Xiaomi ERR_FATAL code: 0x00080000");
        if (iVar7 == 0) {
            *(param_2[1] + 0x3d0) = 1;
        }
        else {
            *(param_2[1] + 0x3d0) = 0;
        }
    }
    else {
        _dev_err(*param_2,"watchdog without message\n");
        _dev_err(*param_2,"subsystem failure reason: watchdog without message. \n");
    }
    uVar3 = _segment.ehdr;
    *(param_2 + 0xbc) = 0;
    puVar9 = param_2;
    if (9 < uVar3) {
        uVar3 = uVar3 - 1;
        uVar10 = uVar3;
        if (0x100 < uVar3) {
code_r0x08011ce0:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8011ce4);
            (*pcVar4)();
        }
        iVar7 = uVar10 << 8;
        do {
            if (0x100 < uVar10 - 1) goto code_r0x08011ce0;
            iVar6 = strcmp(obj.modem_crash_reason + uVar10 * 0x100,"" + iVar7);
            if (iVar6 == 0) {
                _segment.ehdr = uVar3;
                *(param_2[1] + 0x3d0) = 0;
                _printk(0x801066f);
                goto code_r0x08011c1c;
            }
            iVar7 = iVar7 + -0x100;
        } while (iVar7 != 0);
        *(param_2[1] + 0x3d0) = 1;
    }
code_r0x08011c1c:
    while( true ) {
        _dev_err(*puVar9,"rproc coredump state: %s\n",*(puVar9[1] + 0x3d0));
        pcVar2 = "enabled and kick reovery process";
        if (*(puVar9[1] + 0x4c4) != '\0') {
            pcVar2 = "disabled and lead to device crash";
        }
        _dev_err(*puVar9,"rproc recovery state: %s\n",pcVar2);
        iVar7 = puVar9[1];
        if (*(iVar7 + 0x4c4) == '\0') {
            if (puVar9[7] != 0) {
                qcom_notify_early_ssr_clients(puVar9[7]);
                iVar7 = puVar9[1];
            }
            rproc_report_crash(iVar7,1);
        }
        else {
            queue_work_on(0x20,_seq_lseek,puVar9 + 8);
        }
code_r0x08011c9c:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
        iVar7 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar7 = sp_el0;
            piVar1 = iVar7 + 0x10;
            *(iVar7 + 0x10) = *piVar1 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x1,"q6v5_wdog",unaff_x20);
            iVar8 = *piVar1;
            *(iVar7 + 0x10) = iVar8 + -1;
            if ((iVar8 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 1;
}


// ===== sym.q6v5_handover_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112e0 (size 8) =====

ulong sym.q6v5_handover_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(param_2 + 0xc0);
    if (pcVar1 != NULL) {
        __cfi_slowpath_diag(0xa174d683a0938f31,pcVar1,0x8010300);
        (*pcVar1)(param_2);
    }
    *(param_2 + 0x70) = 1;
    return 1;
}


// ===== sym.single_release.cfi_jt @ 0x080112e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.apss_sleep_stats_proc_open.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112f0 (size 8) =====

void sym.apss_sleep_stats_proc_open.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.apss_sleep_stats_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0);
    return;
}


// ===== sym.last_modem_sfr_proc_open.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x080112f8 (size 8) =====

void sym.last_modem_sfr_proc_open.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.last_modem_sfr_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0);
    return;
}


// ===== sym.modem_sleep_stats_proc_open.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt @ 0x08011300 (size 8) =====

void sym.modem_sleep_stats_proc_open.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.modem_sleep_stats_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0);
    return;
}


// ===== sym.qcom_q6v5_prepare @ 0x08011308 (size 268) =====

ulong sym.qcom_q6v5_prepare(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _segment.ehdr = proc_create("last_mcrash",0x8124,0,obj.last_modem_sfr_file_ops);
        if (_segment.ehdr == 0) {
            _printk(0x8010404);
        }
    }
    *(arg1 + 0x78) = 0;
    if (_segment.ehdr == 0) {
        _segment.ehdr = proc_create("modem_sleep_stats",0x8124,0,obj.modem_sleep_stats_file_ops);
        if (_segment.ehdr == 0) {
            _printk(0x8010723);
        }
    }
    if (_segment.ehdr == 0) {
        _segment.ehdr = proc_create("apss_sleep_stats",0x8124,0,obj.apss_sleep_stats_file_ops);
        if (_segment.ehdr == 0) {
            _printk(0x8010599);
        }
    }
    *(arg1 + 0x98) = 0;
    *(arg1 + 0x70) = 0;
    *(arg1 + 0xbc) = 1;
    enable_irq(*(arg1 + 0x30));
    return 0;
}


// ===== sym.qcom_q6v5_unprepare @ 0x08011414 (size 60) =====

uint8_t sym.qcom_q6v5_unprepare(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    disable_irq(*(arg1 + 0x30));
    return *(arg1 + 0x70) ^ 1;
}


// ===== sym.qcom_q6v5_register_ssr_subdev @ 0x08011450 (size 16) =====

void sym.qcom_q6v5_register_ssr_subdev(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x38) = arg2;
    return;
}


// ===== sym.qcom_q6v5_wait_for_start @ 0x08011460 (size 80) =====

ulong sym.qcom_q6v5_wait_for_start(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = wait_for_completion_timeout(arg1 + 0x78,arg2);
    if (iVar1 == 0) {
        disable_irq(*(arg1 + 0x30));
        uVar2 = 0xffffff92;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.qcom_q6v5_request_stop @ 0x080114b0 (size 268) =====

uint sym.qcom_q6v5_request_stop(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        remove_proc_entry("last_mcrash",0);
        _segment.ehdr = 0;
    }
    if (_segment.ehdr != 0) {
        remove_proc_entry("modem_sleep_stats",0);
        _segment.ehdr = 0;
    }
    if (_segment.ehdr != 0) {
        remove_proc_entry("apss_sleep_stats",0);
        _segment.ehdr = 0;
    }
    *(arg1 + 0xbc) = 0;
    uVar3 = 0;
    if (*(*(arg1 + 8) + 0x3cc) == 2) {
        uVar2 = qcom_sysmon_shutdown_acked(arg2);
        if ((uVar2 & 1) == 0) {
            uVar2 = 1L << (*(arg1 + 0x20) & 0x3f);
            qcom_smem_state_update_bits(*(arg1 + 0x18),uVar2,uVar2 & 0xffffffff);
            iVar1 = wait_for_completion_timeout(arg1 + 0x98,0x4e2);
            qcom_smem_state_update_bits(*(arg1 + 0x18),1L << (*(arg1 + 0x20) & 0x3f),0);
            uVar3 = 0xffffff92;
            if (iVar1 != 0) {
                uVar3 = 0;
            }
        }
        else {
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.qcom_q6v5_panic @ 0x080115bc (size 60) =====

ulong sym.qcom_q6v5_panic(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 1L << (*(arg1 + 0x20) & 0x3f);
    qcom_smem_state_update_bits(*(arg1 + 0x18),uVar1,uVar1 & 0xffffffff);
    return 200;
}


// ===== sym.qcom_q6v5_init @ 0x080115f8 (size 948) =====

int sym.qcom_q6v5_init(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    ulong in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr == 0) &&
       (_segment.ehdr = proc_create("last_mcrash",0x8124,0,obj.last_modem_sfr_file_ops), _segment.ehdr == 0)) {
        _printk(0x8010404);
    }
    if ((_segment.ehdr == 0) &&
       (_segment.ehdr = proc_create("modem_sleep_stats",0x8124,0,obj.modem_sleep_stats_file_ops), _segment.ehdr == 0
       )) {
        _printk(0x8010723);
    }
    if ((_segment.ehdr == 0) &&
       (_segment.ehdr = proc_create("apss_sleep_stats",0x8124,0,obj.apss_sleep_stats_file_ops), _segment.ehdr == 0))
    {
        _printk(0x8010599);
    }
    iVar1 = arg2 + 0x10;
    *(arg1 + 0xc0) = in_x4;
    *(arg1 + 0xb8) = arg4;
    *arg1 = iVar1;
    *(arg1 + 8) = arg3;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x78) = 0;
    __init_swait_queue_head(arg1 + 0x80,"&x->wait",obj.init_completion.__key);
    *(arg1 + 0x98) = 0;
    __init_swait_queue_head(arg1 + 0xa0,"&x->wait",obj.init_completion.__key);
    iVar3 = platform_get_resource(arg2,0x200,1);
    if (iVar3 == 0) {
        uVar5 = 0;
    }
    else {
        uVar4 = devm_ioremap_resource(iVar1,iVar3);
        uVar5 = 0;
        if (uVar4 < 0xfffffffffffff001) {
            uVar5 = uVar4;
        }
    }
    *(arg1 + 0x10) = uVar5;
    iVar2 = platform_get_irq_byname(arg2,"wdog");
    *(arg1 + 0x24) = iVar2;
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = devm_request_threaded_irq
                      (iVar1,iVar2,0,sym.q6v5_wdog_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0x2000,
                       0x801050c,arg1);
    if (iVar2 == 0) {
        iVar2 = platform_get_irq_byname(arg2,"fatal");
        *(arg1 + 0x28) = iVar2;
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = devm_request_threaded_irq
                          (iVar1,iVar2,0,sym.q6v5_fatal_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0x2001,
                           "q6v5 fatal",arg1);
        if (iVar2 == 0) {
            iVar2 = platform_get_irq_byname(arg2,"ready");
            *(arg1 + 0x2c) = iVar2;
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = devm_request_threaded_irq
                              (iVar1,iVar2,0,sym.q6v5_ready_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0x2001
                               ,"q6v5 ready",arg1);
            if (iVar2 == 0) {
                iVar2 = platform_get_irq_byname(arg2,"handover");
                *(arg1 + 0x30) = iVar2;
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = devm_request_threaded_irq
                                  (iVar1,iVar2,0,sym.q6v5_handover_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt
                                   ,0x2001,"q6v5 handover",arg1);
                if (iVar2 == 0) {
                    disable_irq(*(arg1 + 0x30));
                    iVar2 = platform_get_irq_byname(arg2,"stop-ack");
                    *(arg1 + 0x34) = iVar2;
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    iVar2 = devm_request_threaded_irq
                                      (iVar1,iVar2,0,sym.q6v5_stop_interrupt.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt
                                       ,0x2001,"q6v5 stop",arg1);
                    if (iVar2 == 0) {
                        uVar5 = qcom_smem_state_get(iVar1,"stop",arg1 + 0x20);
                        *(arg1 + 0x18) = uVar5;
                        if (uVar5 < 0xfffffffffffff001) {
                            *(arg1 + 0x40) = 0xfffffffe0;
                            *(arg1 + 0x48) = arg1 + 0x48;
                            *(arg1 + 0x50) = arg1 + 0x48;
                            *(arg1 + 0x58) = sym.qcom_q6v5_crash_handler_work.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt;
                            return 0;
                        }
                        _dev_err(iVar1,"failed to acquire stop state\n");
                        return *(arg1 + 0x18);
                    }
                    pcVar6 = "failed to acquire stop-ack IRQ\n";
                }
                else {
                    pcVar6 = "failed to acquire handover IRQ\n";
                }
            }
            else {
                pcVar6 = "failed to acquire ready IRQ\n";
            }
        }
        else {
            pcVar6 = "failed to acquire fatal IRQ\n";
        }
    }
    else {
        pcVar6 = "failed to acquire wdog IRQ\n";
    }
    _dev_err(iVar1,pcVar6);
    return iVar2;
}


// ===== sym.q6v5_wdog_interrupt @ 0x080119ac (size 948) =====

ulong sym.q6v5_wdog_interrupt(ulong noname_0,int64_t arg1)

{
    int64_t *piVar1;
    char *pcVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    ulong extraout_x1;
    int64_t iVar8;
    ulong *in_x18;
    ulong *puVar9;
    char *unaff_x20;
    uint64_t uVar10;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    if (*(arg1 + 0xbc) == '\0') {
        puVar9 = arg1 + 0x98;
        _dev_info(*arg1,"received wdog irq while q6 is offline\n");
        complete(puVar9);
        goto code_r0x08011c9c;
    }
    unaff_x20 = qcom_smem_get(0xffffffff,*(arg1 + 0xb8),&iStack_60);
    if (((unaff_x20 < 0xfffffffffffff001) && (iStack_60 != 0)) && (*unaff_x20 != '\0')) {
        _dev_err(*arg1,"watchdog received: %s\n",unaff_x20);
        _dev_err(*arg1,"subsystem failure reason: %s. \n",unaff_x20);
        strlcpy("",unaff_x20,0x100);
        uVar10 = _segment.ehdr;
        uVar3 = _segment.ehdr + 1;
        bVar5 = 0x100 < _segment.ehdr;
        _segment.ehdr = uVar3;
        if (bVar5) goto code_r0x08011ce0;
        strlcpy(obj.modem_crash_reason + uVar10 * 0x100,unaff_x20,0x100);
        iVar7 = strstr(unaff_x20,"Xiaomi ERR_FATAL code: 0x00080000");
        if (iVar7 == 0) {
            *(*(arg1 + 8) + 0x3d0) = 1;
        }
        else {
            *(*(arg1 + 8) + 0x3d0) = 0;
        }
    }
    else {
        _dev_err(*arg1,"watchdog without message\n");
        _dev_err(*arg1,"subsystem failure reason: watchdog without message. \n");
    }
    uVar3 = _segment.ehdr;
    *(arg1 + 0xbc) = 0;
    puVar9 = arg1;
    if (9 < uVar3) {
        uVar3 = uVar3 - 1;
        uVar10 = uVar3;
        if (0x100 < uVar3) {
code_r0x08011ce0:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8011ce4);
            (*pcVar4)();
        }
        iVar7 = uVar10 << 8;
        do {
            if (0x100 < uVar10 - 1) goto code_r0x08011ce0;
            iVar6 = strcmp(obj.modem_crash_reason + uVar10 * 0x100,"" + iVar7);
            if (iVar6 == 0) {
                _segment.ehdr = uVar3;
                *(*(arg1 + 8) + 0x3d0) = 0;
                _printk(0x801066f);
                goto code_r0x08011c1c;
            }
            iVar7 = iVar7 + -0x100;
        } while (iVar7 != 0);
        *(*(arg1 + 8) + 0x3d0) = 1;
    }
code_r0x08011c1c:
    while( true ) {
        _dev_err(*puVar9,"rproc coredump state: %s\n",*(puVar9[1] + 0x3d0));
        pcVar2 = "enabled and kick reovery process";
        if (*(puVar9[1] + 0x4c4) != '\0') {
            pcVar2 = "disabled and lead to device crash";
        }
        _dev_err(*puVar9,"rproc recovery state: %s\n",pcVar2);
        iVar7 = puVar9[1];
        if (*(iVar7 + 0x4c4) == '\0') {
            if (puVar9[7] != 0) {
                qcom_notify_early_ssr_clients(puVar9[7]);
                iVar7 = puVar9[1];
            }
            rproc_report_crash(iVar7,1);
        }
        else {
            queue_work_on(0x20,_seq_lseek,puVar9 + 8);
        }
code_r0x08011c9c:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
        iVar7 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar7 = sp_el0;
            piVar1 = iVar7 + 0x10;
            *(iVar7 + 0x10) = *piVar1 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x1,"q6v5_wdog",unaff_x20);
            iVar8 = *piVar1;
            *(iVar7 + 0x10) = iVar8 + -1;
            if ((iVar8 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 1;
}


// ===== sym.q6v5_fatal_interrupt @ 0x08011d80 (size 940) =====

ulong sym.q6v5_fatal_interrupt(ulong noname_0,int64_t arg1)

{
    int64_t *piVar1;
    char *pcVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    ulong extraout_x1;
    int64_t iVar8;
    ulong *in_x18;
    char *unaff_x20;
    uint64_t uVar9;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    if (*(arg1 + 0xbc) == '\0') {
        _dev_info(*arg1,"received fatal irq while q6 is offline\n");
        goto code_r0x08012068;
    }
    unaff_x20 = qcom_smem_get(0xffffffff,*(arg1 + 0xb8),&iStack_60);
    if (((unaff_x20 < 0xfffffffffffff001) && (iStack_60 != 0)) && (*unaff_x20 != '\0')) {
        _dev_err(*arg1,"fatal error received: %s\n",unaff_x20);
        _dev_err(*arg1,"subsystem failure reason: %s. \n",unaff_x20);
        strlcpy("",unaff_x20,0x100);
        uVar9 = _segment.ehdr;
        uVar3 = _segment.ehdr + 1;
        bVar5 = 0x100 < _segment.ehdr;
        _segment.ehdr = uVar3;
        if (bVar5) goto code_r0x080120ac;
        strlcpy(obj.modem_crash_reason + uVar9 * 0x100,unaff_x20,0x100);
        iVar7 = strstr(unaff_x20,"Xiaomi ERR_FATAL code: 0x00080000");
        if (iVar7 == 0) {
            *(*(arg1 + 8) + 0x3d0) = 1;
        }
        else {
            *(*(arg1 + 8) + 0x3d0) = 0;
        }
    }
    else {
        _dev_err(*arg1,"fatal error without message\n");
        _dev_err(*arg1,"subsystem failure reason: fatal error without message. \n");
    }
    uVar3 = _segment.ehdr;
    *(arg1 + 0xbc) = 0;
    if (9 < uVar3) {
        uVar3 = uVar3 - 1;
        uVar9 = uVar3;
        if (0x100 < uVar3) {
code_r0x080120ac:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x80120b0);
            (*pcVar4)();
        }
        iVar7 = uVar9 << 8;
        do {
            if (0x100 < uVar9 - 1) goto code_r0x080120ac;
            iVar6 = strcmp(obj.modem_crash_reason + uVar9 * 0x100,"" + iVar7);
            if (iVar6 == 0) {
                _segment.ehdr = uVar3;
                *(*(arg1 + 8) + 0x3d0) = 0;
                _printk(0x801066f);
                goto code_r0x08011fe8;
            }
            iVar7 = iVar7 + -0x100;
        } while (iVar7 != 0);
        *(*(arg1 + 8) + 0x3d0) = 1;
    }
code_r0x08011fe8:
    while( true ) {
        _dev_err(*arg1,"rproc coredump state: %s\n",*(*(arg1 + 8) + 0x3d0));
        pcVar2 = "enabled and kick reovery process";
        if (*(*(arg1 + 8) + 0x4c4) != '\0') {
            pcVar2 = "disabled and lead to device crash";
        }
        _dev_err(*arg1,"rproc recovery state: %s\n",pcVar2);
        iVar7 = *(arg1 + 8);
        if (*(iVar7 + 0x4c4) == '\0') {
            if (*(arg1 + 0x38) != 0) {
                qcom_notify_early_ssr_clients(*(arg1 + 0x38));
                iVar7 = *(arg1 + 8);
            }
            rproc_report_crash(iVar7,2);
        }
        else {
            queue_work_on(0x20,_seq_lseek,arg1 + 0x40);
        }
code_r0x08012068:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
        iVar7 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar7 = sp_el0;
            piVar1 = iVar7 + 0x10;
            *(iVar7 + 0x10) = *piVar1 + 1;
            __traceiter_rproc_qcom_event(0,extraout_x1,0x80104c8,unaff_x20);
            iVar8 = *piVar1;
            *(iVar7 + 0x10) = iVar8 + -1;
            if ((iVar8 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 1;
}


// ===== sym.q6v5_ready_interrupt @ 0x0801214c (size 44) =====

ulong sym.q6v5_ready_interrupt(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(arg1 + 0x78);
    return 1;
}


// ===== sym.q6v5_handover_interrupt @ 0x08012178 (size 104) =====

ulong sym.q6v5_handover_interrupt(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 0xc0);
    if (pcVar1 != NULL) {
        __cfi_slowpath_diag(0xa174d683a0938f31,pcVar1,0x8010300);
        (*pcVar1)(arg1);
    }
    *(arg1 + 0x70) = 1;
    return 1;
}


// ===== sym.q6v5_stop_interrupt @ 0x080121e0 (size 44) =====

ulong sym.q6v5_stop_interrupt(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(arg1 + 0x98);
    return 1;
}


// ===== sym.qcom_q6v5_crash_handler_work @ 0x0801220c (size 252) =====

void sym.qcom_q6v5_crash_handler_work(int64_t arg1)

{
    int64_t iVar1;
    int *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + -0x38);
    iVar1 = iVar7 + 0x3d8;
    mutex_lock(iVar1);
    piVar2 = iVar7 + 0x3c8;
    *(iVar7 + 0x3cc) = 3;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
            *piVar2 = 0;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar3 == 0) {
        mutex_unlock(iVar1);
        return;
    }
    iVar6 = *(iVar7 + 0x468);
    do {
        if (iVar6 == iVar7 + 0x460) {
            mutex_unlock(iVar1);
            msleep(100);
            panic("Panicking, remoteproc %s crashed\n",*(*(arg1 + -0x38) + 0x18));
        }
        pcVar8 = *(iVar6 + 0x20);
        if (pcVar8 != NULL) {
            __cfi_slowpath_diag(0xe2f088f3a2afdbfa,pcVar8,0x8010320);
            (*pcVar8)(iVar6,1);
        }
        iVar6 = *(iVar6 + 8);
    } while( true );
}


// ===== sym.last_modem_sfr_proc_open @ 0x0801231c (size 52) =====

void sym.last_modem_sfr_proc_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.last_modem_sfr_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0);
    return;
}


// ===== sym.last_modem_sfr_proc_show @ 0x08012350 (size 56) =====

ulong sym.last_modem_sfr_proc_show(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,0x801078e,"");
    return 0;
}


// ===== sym.modem_sleep_stats_proc_open @ 0x08012388 (size 52) =====

void sym.modem_sleep_stats_proc_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.modem_sleep_stats_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0);
    return;
}


// ===== sym.modem_sleep_stats_proc_show @ 0x080123bc (size 240) =====

uint64_t sym.modem_sleep_stats_proc_show(int64_t arg1)

{
    code *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = qcom_smem_get(1,0x25d,0);
    pcVar1 = _single_release;
    if (uVar2 < 0xfffffffffffff001) {
        iVar4 = *(uVar2 + 0x18);
        if (*(uVar2 + 0x10) < *(uVar2 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_single_release,0x80102c0);
            iVar3 = (*pcVar1)();
            iVar4 = (iVar3 + iVar4) - *(uVar2 + 8);
        }
        seq_printf(arg1,"Count = %u\n",*(uVar2 + 4));
        seq_printf(arg1,"Last Entered At = %llu\n",*(uVar2 + 8));
        seq_printf(arg1,"Last Exited At = %llu\n",*(uVar2 + 0x10));
        seq_printf(arg1,"Accumulated Duration = %llu\n",iVar4);
        uVar2 = 0;
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.apss_sleep_stats_proc_open @ 0x080124ac (size 52) =====

void sym.apss_sleep_stats_proc_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.apss_sleep_stats_proc_show.39e76ea07aa5fd32820af797ce41bfd4.cfi_jt,0);
    return;
}


// ===== sym.apss_sleep_stats_proc_show @ 0x080124e0 (size 240) =====

uint64_t sym.apss_sleep_stats_proc_show(int64_t arg1)

{
    code *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = qcom_smem_get(0xffffffff,0x277,0);
    pcVar1 = _single_release;
    if (uVar2 < 0xfffffffffffff001) {
        iVar4 = *(uVar2 + 0x18);
        if (*(uVar2 + 0x10) < *(uVar2 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_single_release,0x80102e0);
            iVar3 = (*pcVar1)();
            iVar4 = (iVar3 + iVar4) - *(uVar2 + 8);
        }
        seq_printf(arg1,"Count = %u\n",*(uVar2 + 4));
        seq_printf(arg1,"Last Entered At = %llu\n",*(uVar2 + 8));
        seq_printf(arg1,"Last Exited At = %llu\n",*(uVar2 + 0x10));
        seq_printf(arg1,"Accumulated Duration = %llu\n",iVar4);
        uVar2 = 0;
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.__cfi_check_fail @ 0x080125d0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08012614

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
    //switch table (4 cases) at 0x8010340
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8012628);
    (*pcVar1)();
}

