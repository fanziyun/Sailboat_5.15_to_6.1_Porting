// decompiled from binder_prio by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x08001604

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x4d3e55c950c37990) {
            uVar2 = 0x8001100;
        }
        else {
            if (arg1 != -0x2db6e853f2bbe50f) goto code_r0x080015c4;
            uVar2 = 0x80010f8;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x8001108;
    }
    else if (arg1 == 0x57ab066eaa17349d) {
        uVar2 = 0x80010f0;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080015c4;
        uVar2 = 0x8001110;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080015c4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001618);
    (*pcVar1)();
}


// ===== sym.extend_surfacefinger_binder_trans_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt @ 0x080010f0 (size 8) =====

void sym.extend_surfacefinger_binder_trans_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((((param_2 != 0) && (*(param_2 + 0x48) != 0)) &&
         (iVar1 = strncmp(*(param_2 + 0x48) + 0x7a8,"surfaceflinger",0xe), iVar1 == 0)) &&
        ((param_3 != 0 && (param_4 != 0)))) &&
       ((param_5 != 0 && ((*(param_4 + 0x40) != 0 && ((*(*(param_4 + 0x40) + 0x5c) & 1) == 0)))))) {
        *(param_2 + 0x198) = 0x6200000001;
    }
    return;
}


// ===== sym.extend_android_vh_binder_proc_transaction_finish.bc0fcba933797667b9181e6bbd3107d0.cfi_jt @ 0x080010f8 (size 8) =====

void sym.extend_android_vh_binder_proc_transaction_finish.bc0fcba933797667b9181e6bbd3107d0.cfi_jt
               (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4,ulong param_5,uint32_t param_6)

{
    int iVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x24;
    ulong unaff_x30;
    int aiStack_60 [2];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar2 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar1 = *(iVar2 + 0x420);
    aiStack_60[0] = 0;
    if (((((param_6 & 1) == 0) && (unaff_x19 = param_4, 0xfffffffd < iVar1 - 3U && param_4 != 0)) &&
        (unaff_x20 = param_2, param_2 != 0)) &&
       ((unaff_x24 = *(iVar2 + 0x618), unaff_x24 != 0 && (iVar5 = *(param_2 + 0x48), iVar5 != 0)))) {
        unaff_x21 = iVar2 + 0x7a8;
        iVar3 = strcmp("ndroid.systemui",unaff_x24 + 0x7a8);
        if (iVar3 != 0) goto code_r0x080014e4;
        iVar3 = strcmp("wmshell.main",unaff_x21);
        if ((iVar3 != 0) && (iVar4 = strstr(unaff_x21,"wmshell.main"), iVar4 == 0)) goto code_r0x080014e4;
        iVar3 = strcmp("com.miui.home",iVar5 + 0x7a8);
        if (iVar3 == 0) goto code_r0x0800157c;
        goto code_r0x080014e4;
    }
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        param_4 = unaff_x19;
        param_2 = unaff_x20;
code_r0x0800157c:
        aiStack_60[0] = 99 - *(iVar2 + 0x7c);
        if ((iVar1 != *(param_4 + 0x420)) || (aiStack_60[0] != *(param_4 + 0x7c))) {
            sched_setscheduler_nocheck(param_4,0x40000001,aiStack_60);
            unaff_x24 = *(iVar2 + 0x618);
        }
code_r0x080014e4:
        iVar3 = strcmp("system_server",unaff_x24 + 0x7a8);
        unaff_x19 = param_4;
        unaff_x20 = param_2;
        if ((iVar3 == 0) &&
           ((((iVar3 = strcmp("binder:",unaff_x21), iVar3 == 0 || (iVar5 = strstr(unaff_x21,"binder:"), iVar5 != 0))
             && (iVar3 = strcmp("ndroid.systemui",*(param_2 + 0x48) + 0x7a8), iVar3 == 0)) &&
            ((aiStack_60[0] = 99 - *(iVar2 + 0x7c), iVar1 != *(param_4 + 0x420) || (aiStack_60[0] != *(param_4 + 0x7c))
             ))))) {
            sched_setscheduler_nocheck(param_4,0x40000001,aiStack_60);
        }
    }
    return;
}


// ===== sym.extend_surfacefinger_binder_set_priority_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt @ 0x08001100 (size 8) =====

void sym.extend_surfacefinger_binder_set_priority_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt
               (ulong param_1,int64_t param_2,uchar *param_3,int64_t param_4,int64_t param_5)

{
    int64_t iVar1;
    uint8_t uVar2;
    int iVar3;
    int64_t extraout_x1;
    uchar *puVar4;
    int *piVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    int aiStack_60 [2];
    int64_t iStack_58;
    
    piVar5 = aiStack_60;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar7 = *(*(param_2 + 0x50) + 0x38);
    uVar8 = *(iVar7 + 0x6a);
    uVar2 = *(iVar7 + 0x69);
    puVar4 = param_3;
    if (((param_2 == 0) || (*(param_2 + 0x20) == 0)) || (iVar7 = *(*(param_2 + 0x20) + 0x198), iVar7 == 0)) {
code_r0x080012dc:
        uVar6 = uVar2 & 3;
        if (uVar6 - 3 < 0xfffffffe) goto code_r0x08001314;
    }
    else {
        if (((*(param_2 + 0x30) == 0) || (iVar9 = *(*(param_2 + 0x30) + 0x48), iVar9 == 0)) ||
           (((*(param_2 + 0x5c) & 1) != 0 || (*(iVar7 + 0x420) - 3U < 0xfffffffe)))) {
code_r0x080012a8:
            if (((*(param_2 + 0x5c) & 1) == 0) && (0xfffffffd < *(iVar7 + 0x420) - 3U)) {
                puVar4 = 0xc;
                iVar3 = strncmp(*(iVar7 + 0x618) + 0x7a8,"cameraserver");
                if (iVar3 == 0) goto code_r0x0800134c;
            }
            goto code_r0x080012dc;
        }
        iVar1 = *(iVar7 + 0x618) + 0x7a8;
        iVar3 = strncmp(iVar1,"ndroid.systemui",0xf);
        if (iVar3 == 0) {
            puVar4 = 0xc;
            iVar3 = strncmp(iVar7 + 0x7a8,"wmshell.main");
            if (iVar3 != 0) goto code_r0x080011d4;
        }
        else {
code_r0x080011d4:
            iVar3 = strncmp(iVar1,"com.miui.home",0xd);
            if ((iVar3 == 0) && (iVar3 = strncmp(iVar7 + 0x7a8,"RenderThread",0xc), iVar3 == 0)) {
                puVar4 = 0xe;
                iVar3 = strncmp(iVar9 + 0x7a8,"surfaceflinger");
                if (iVar3 == 0) goto code_r0x0800134c;
            }
            puVar4 = 0xe;
            iVar3 = strncmp(iVar1,"surfaceflinger");
            if (iVar3 == 0) {
                puVar4 = 0x8;
                iVar3 = strncmp(iVar7 + 0x7a8,"passBlur");
                if (iVar3 == 0) goto code_r0x0800134c;
            }
            if (*(iVar7 + 0x5d8) != *(iVar7 + 0x5dc)) goto code_r0x080012a8;
            iVar9 = iVar7 + 0x7a8;
            puVar4 = 0xd;
            iVar3 = strncmp(iVar9,"com.miui.home");
            if (iVar3 != 0) {
                puVar4 = 0xf;
                iVar3 = strncmp(iVar9,"ndroid.systemui");
                if (iVar3 != 0) {
                    puVar4 = 0xe;
                    iVar3 = strncmp(iVar9,"surfaceflinger");
                    if (iVar3 != 0) goto code_r0x080012a8;
                }
            }
        }
code_r0x0800134c:
        uVar8 = 0x62;
        uVar6 = 1;
    }
    if (*(param_3 + 0x420) != uVar6) {
        aiStack_60[0] = 99 - uVar8;
        sched_setscheduler_nocheck(param_3,uVar6 | 0x40000000);
        puVar4 = piVar5;
    }
code_r0x08001314:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.extend_surfacefinger_binder_trans_handler;
    if (((((extraout_x1 != 0) && (*(extraout_x1 + 0x48) != 0)) &&
         (iVar3 = strncmp(*(extraout_x1 + 0x48) + 0x7a8,"surfaceflinger",0xe), iVar3 == 0)) &&
        ((puVar4 != NULL && (param_4 != 0)))) &&
       ((param_5 != 0 && ((*(param_4 + 0x40) != 0 && ((*(*(param_4 + 0x40) + 0x5c) & 1) == 0)))))) {
        *(extraout_x1 + 0x198) = 0x6200000001;
    }
    return;
}


// ===== sym.binder_prio_init.cfi_jt @ 0x08001108 (size 8) =====

ulong sym.binder_prio_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80000b8);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_set_priority,
               sym.extend_surfacefinger_binder_set_priority_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_trans,
               sym.extend_surfacefinger_binder_trans_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_proc_transaction_finish,
               sym.extend_android_vh_binder_proc_transaction_finish.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    return 0;
}


// ===== sym.binder_prio_exit.cfi_jt @ 0x08001110 (size 8) =====

void sym.binder_prio_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_binder_set_priority,
               sym.extend_surfacefinger_binder_set_priority_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_binder_trans,
               sym.extend_surfacefinger_binder_trans_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_binder_proc_transaction_finish,
               sym.extend_android_vh_binder_proc_transaction_finish.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    _printk(0x8000052);
    return;
}


// ===== sym.extend_surfacefinger_binder_set_priority_handler @ 0x08001118 (size 580) =====

void sym.extend_surfacefinger_binder_set_priority_handler(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    int iVar3;
    int64_t extraout_x1;
    uchar *puVar4;
    int *piVar5;
    int64_t in_x3;
    int64_t in_x4;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    int aiStack_60 [2];
    int64_t iStack_58;
    
    piVar5 = aiStack_60;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar7 = *(*(arg1 + 0x50) + 0x38);
    uVar8 = *(iVar7 + 0x6a);
    uVar2 = *(iVar7 + 0x69);
    puVar4 = arg2;
    if (((arg1 == 0) || (*(arg1 + 0x20) == 0)) || (iVar7 = *(*(arg1 + 0x20) + 0x198), iVar7 == 0)) {
code_r0x080012dc:
        uVar6 = uVar2 & 3;
        if (uVar6 - 3 < 0xfffffffe) goto code_r0x08001314;
    }
    else {
        if (((*(arg1 + 0x30) == 0) || (iVar9 = *(*(arg1 + 0x30) + 0x48), iVar9 == 0)) ||
           (((*(arg1 + 0x5c) & 1) != 0 || (*(iVar7 + 0x420) - 3U < 0xfffffffe)))) {
code_r0x080012a8:
            if (((*(arg1 + 0x5c) & 1) == 0) && (0xfffffffd < *(iVar7 + 0x420) - 3U)) {
                puVar4 = 0xc;
                iVar3 = strncmp(*(iVar7 + 0x618) + 0x7a8,"cameraserver");
                if (iVar3 == 0) goto code_r0x0800134c;
            }
            goto code_r0x080012dc;
        }
        iVar1 = *(iVar7 + 0x618) + 0x7a8;
        iVar3 = strncmp(iVar1,"ndroid.systemui",0xf);
        if (iVar3 == 0) {
            puVar4 = 0xc;
            iVar3 = strncmp(iVar7 + 0x7a8,"wmshell.main");
            if (iVar3 != 0) goto code_r0x080011d4;
        }
        else {
code_r0x080011d4:
            iVar3 = strncmp(iVar1,"com.miui.home",0xd);
            if ((iVar3 == 0) && (iVar3 = strncmp(iVar7 + 0x7a8,"RenderThread",0xc), iVar3 == 0)) {
                puVar4 = 0xe;
                iVar3 = strncmp(iVar9 + 0x7a8,"surfaceflinger");
                if (iVar3 == 0) goto code_r0x0800134c;
            }
            puVar4 = 0xe;
            iVar3 = strncmp(iVar1,"surfaceflinger");
            if (iVar3 == 0) {
                puVar4 = 0x8;
                iVar3 = strncmp(iVar7 + 0x7a8,"passBlur");
                if (iVar3 == 0) goto code_r0x0800134c;
            }
            if (*(iVar7 + 0x5d8) != *(iVar7 + 0x5dc)) goto code_r0x080012a8;
            iVar9 = iVar7 + 0x7a8;
            puVar4 = 0xd;
            iVar3 = strncmp(iVar9,"com.miui.home");
            if (iVar3 != 0) {
                puVar4 = 0xf;
                iVar3 = strncmp(iVar9,"ndroid.systemui");
                if (iVar3 != 0) {
                    puVar4 = 0xe;
                    iVar3 = strncmp(iVar9,"surfaceflinger");
                    if (iVar3 != 0) goto code_r0x080012a8;
                }
            }
        }
code_r0x0800134c:
        uVar8 = 0x62;
        uVar6 = 1;
    }
    if (*(arg2 + 0x420) != uVar6) {
        aiStack_60[0] = 99 - uVar8;
        sched_setscheduler_nocheck(arg2,uVar6 | 0x40000000);
        puVar4 = piVar5;
    }
code_r0x08001314:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.extend_surfacefinger_binder_trans_handler;
    if (((((extraout_x1 != 0) && (*(extraout_x1 + 0x48) != 0)) &&
         (iVar3 = strncmp(*(extraout_x1 + 0x48) + 0x7a8,"surfaceflinger",0xe), iVar3 == 0)) &&
        ((puVar4 != NULL && (in_x3 != 0)))) &&
       ((in_x4 != 0 && ((*(in_x3 + 0x40) != 0 && ((*(*(in_x3 + 0x40) + 0x5c) & 1) == 0)))))) {
        *(extraout_x1 + 0x198) = 0x6200000001;
    }
    return;
}


// ===== sym.extend_surfacefinger_binder_trans_handler @ 0x0800135c (size 144) =====

void sym.extend_surfacefinger_binder_trans_handler(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((((arg1 != 0) && (*(arg1 + 0x48) != 0)) &&
         (iVar1 = strncmp(*(arg1 + 0x48) + 0x7a8,"surfaceflinger",0xe), iVar1 == 0)) && ((arg2 != 0 && (arg3 != 0))))
       && ((in_x4 != 0 && ((*(arg3 + 0x40) != 0 && ((*(*(arg3 + 0x40) + 0x5c) & 1) == 0)))))) {
        *(arg1 + 0x198) = 0x6200000001;
    }
    return;
}


// ===== sym.extend_android_vh_binder_proc_transaction_finish @ 0x080013ec (size 468) =====

void sym.extend_android_vh_binder_proc_transaction_finish
               (int64_t arg1,int64_t arg2,uchar noname_2 [16],uint32_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t in_w5;
    ulong *in_x18;
    uint64_t unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x24;
    ulong unaff_x30;
    int aiStack_60 [2];
    int64_t iStack_58;
    
    uVar6 = arg3;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar2 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar1 = *(iVar2 + 0x420);
    aiStack_60[0] = 0;
    if (((((in_w5 & 1) == 0) && (unaff_x19 = uVar6, 0xfffffffd < iVar1 - 3U && uVar6 != 0)) &&
        (unaff_x20 = arg2, arg2 != 0)) &&
       ((unaff_x24 = *(iVar2 + 0x618), unaff_x24 != 0 && (iVar5 = *(arg2 + 0x48), iVar5 != 0)))) {
        unaff_x21 = iVar2 + 0x7a8;
        iVar3 = strcmp("ndroid.systemui",unaff_x24 + 0x7a8);
        if (iVar3 != 0) goto code_r0x080014e4;
        iVar3 = strcmp("wmshell.main",unaff_x21);
        if ((iVar3 != 0) && (iVar4 = strstr(unaff_x21,"wmshell.main"), iVar4 == 0)) goto code_r0x080014e4;
        iVar3 = strcmp("com.miui.home",iVar5 + 0x7a8);
        if (iVar3 == 0) goto code_r0x0800157c;
        goto code_r0x080014e4;
    }
code_r0x08001440:
    do {
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail(arg1);
        uVar6 = unaff_x19;
        arg2 = unaff_x20;
code_r0x0800157c:
        aiStack_60[0] = 99 - *(iVar2 + 0x7c);
        if ((iVar1 != *(uVar6 + 0x420)) || (aiStack_60[0] != *(uVar6 + 0x7c))) {
            sched_setscheduler_nocheck(uVar6,0x40000001,aiStack_60);
            unaff_x24 = *(iVar2 + 0x618);
        }
code_r0x080014e4:
        arg1 = strcmp("system_server",unaff_x24 + 0x7a8);
        unaff_x19 = uVar6;
        unaff_x20 = arg2;
    } while (arg1 != 0);
    iVar3 = strcmp("binder:",unaff_x21);
    if (iVar3 != 0) goto code_r0x0800150c;
    goto code_r0x08001520;
code_r0x0800150c:
    iVar5 = strstr(unaff_x21,"binder:");
    arg1 = 0;
    if (iVar5 != 0) {
code_r0x08001520:
        arg1 = strcmp("ndroid.systemui",*(arg2 + 0x48) + 0x7a8);
        if ((arg1 == 0) &&
           ((aiStack_60[0] = 99 - *(iVar2 + 0x7c), iVar1 != *(uVar6 + 0x420) || (aiStack_60[0] != *(uVar6 + 0x7c))))) {
            arg1 = sched_setscheduler_nocheck(uVar6,0x40000001,aiStack_60);
        }
    }
    goto code_r0x08001440;
}


// ===== sym.__cfi_check_fail @ 0x080015c0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001604

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
    //switch table (4 cases) at 0x8000040
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001618);
    (*pcVar1)();
}


// ===== sym.binder_prio_init @ 0x08001624 (size 120) =====

ulong sym.binder_prio_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80000b8);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_set_priority,
               sym.extend_surfacefinger_binder_set_priority_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_trans,
               sym.extend_surfacefinger_binder_trans_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_proc_transaction_finish,
               sym.extend_android_vh_binder_proc_transaction_finish.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    return 0;
}


// ===== sym.binder_prio_exit @ 0x0800169c (size 116) =====

void sym.binder_prio_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_binder_set_priority,
               sym.extend_surfacefinger_binder_set_priority_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_binder_trans,
               sym.extend_surfacefinger_binder_trans_handler.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_binder_proc_transaction_finish,
               sym.extend_android_vh_binder_proc_transaction_finish.bc0fcba933797667b9181e6bbd3107d0.cfi_jt,0);
    _printk(0x8000052);
    return;
}

