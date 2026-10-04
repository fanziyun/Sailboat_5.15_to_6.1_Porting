// decompiled from c1dcvs_vendor by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 212) =====

//WARNING: Switch with 1 destination removed at 0x080017d0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x6ac5a6004ef664b6) {
        if (arg1 != 0x2b3a43e29242445) {
            if ((arg1 == 0x376863d1de02459b) && ((pcVar1 + -0x80010f8 >> 3 | pcVar1 << 0x3d) < 0xc)) {
                return;
            }
            goto code_r0x08001790;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x6ac5a6004ef664b6) {
        pcVar2 = sym.scmi_c1dcvs_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001790;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001790:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017e4);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_unregister(obj.scmi_c1dcvs);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_register(obj.scmi_c1dcvs);
    return;
}


// ===== sym.scmi_c1dcvs_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f0 (size 8) =====

ulong sym.scmi_c1dcvs_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    pcVar3 = *param_1[1];
    __cfi_slowpath_diag(0x8a421e33b511c627,pcVar3,0x80000a0);
    (*pcVar3)(param_1,&uStack_2c);
    _dev_err(*param_1,"version %d.%d\n",uStack_2c >> 0x10,uStack_2c & 0xffff);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_set_enable_c1dcvs;
    uVar2 = sym.scmi_send_tunable_c1dcvs(auVar4._0_8_,auVar4._8_8_,0xb);
    return uVar2;
}


// ===== sym.scmi_get_enable_trace.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f8 (size 8) =====

void sym.scmi_get_enable_trace.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(param_1,param_2,0xe);
    return;
}


// ===== sym.scmi_get_c1dcvs_opt_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001100 (size 8) =====

void sym.scmi_get_c1dcvs_opt_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(param_1,param_2,0x16);
    return;
}


// ===== sym.scmi_get_efreq_thresh.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001108 (size 8) =====

void sym.scmi_get_efreq_thresh.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(param_1,param_2,0x12);
    return;
}


// ===== sym.scmi_set_c1dcvs_opt_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001110 (size 8) =====

void sym.scmi_set_c1dcvs_opt_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_c1dcvs(param_1,param_2,0x15);
    return;
}


// ===== sym.scmi_set_efreq_thresh.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001118 (size 8) =====

void sym.scmi_set_efreq_thresh.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_thresh_c1dcvs(param_1,param_2,0x11);
    return;
}


// ===== sym.scmi_get_enable_c1dcvs.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001120 (size 8) =====

void sym.scmi_get_enable_c1dcvs.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(param_1,param_2,0xc);
    return;
}


// ===== sym.scmi_set_hysteresis.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001128 (size 8) =====

void sym.scmi_set_hysteresis.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_c1dcvs(param_1,param_2,0x13);
    return;
}


// ===== sym.scmi_set_enable_trace.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001130 (size 8) =====

void sym.scmi_set_enable_trace.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_c1dcvs(param_1,param_2,0xd);
    return;
}


// ===== sym.scmi_set_enable_c1dcvs.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001138 (size 8) =====

void sym.scmi_set_enable_c1dcvs.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_c1dcvs(param_1,param_2,0xb);
    return;
}


// ===== sym.scmi_get_ipc_thresh.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001140 (size 8) =====

void sym.scmi_get_ipc_thresh.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(param_1,param_2,0x10);
    return;
}


// ===== sym.scmi_get_hysteresis.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001148 (size 8) =====

void sym.scmi_get_hysteresis.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(param_1,param_2,0x14);
    return;
}


// ===== sym.scmi_set_ipc_thresh.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001150 (size 8) =====

void sym.scmi_set_ipc_thresh.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_thresh_c1dcvs(param_1,param_2,0xf);
    return;
}


// ===== sym.scmi_c1dcvs_protocol_init @ 0x08001158 (size 176) =====

ulong sym.scmi_c1dcvs_protocol_init(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    pcVar3 = **(arg1 + 8);
    __cfi_slowpath_diag(0x8a421e33b511c627,pcVar3,0x80000a0);
    (*pcVar3)(arg1,&uStack_2c);
    _dev_err(*arg1,"version %d.%d\n",uStack_2c >> 0x10,uStack_2c & 0xffff);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_set_enable_c1dcvs;
    uVar2 = sym.scmi_send_tunable_c1dcvs(auVar4._0_8_,auVar4._8_8_,0xb);
    return uVar2;
}


// ===== sym.scmi_set_enable_c1dcvs @ 0x08001208 (size 40) =====

void sym.scmi_set_enable_c1dcvs(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_c1dcvs(arg1,arg2,0xb);
    return;
}


// ===== sym.scmi_get_enable_c1dcvs @ 0x08001230 (size 40) =====

void sym.scmi_get_enable_c1dcvs(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(arg1,arg2,0xc);
    return;
}


// ===== sym.scmi_set_enable_trace @ 0x08001258 (size 40) =====

void sym.scmi_set_enable_trace(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_c1dcvs(arg1,arg2,0xd);
    return;
}


// ===== sym.scmi_get_enable_trace @ 0x08001280 (size 40) =====

void sym.scmi_get_enable_trace(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(arg1,arg2,0xe);
    return;
}


// ===== sym.scmi_set_ipc_thresh @ 0x080012a8 (size 40) =====

void sym.scmi_set_ipc_thresh(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_thresh_c1dcvs(arg1,arg2,0xf);
    return;
}


// ===== sym.scmi_get_ipc_thresh @ 0x080012d0 (size 40) =====

void sym.scmi_get_ipc_thresh(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(arg1,arg2,0x10);
    return;
}


// ===== sym.scmi_set_efreq_thresh @ 0x080012f8 (size 40) =====

void sym.scmi_set_efreq_thresh(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_thresh_c1dcvs(arg1,arg2,0x11);
    return;
}


// ===== sym.scmi_get_efreq_thresh @ 0x08001320 (size 40) =====

void sym.scmi_get_efreq_thresh(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(arg1,arg2,0x12);
    return;
}


// ===== sym.scmi_set_hysteresis @ 0x08001348 (size 40) =====

void sym.scmi_set_hysteresis(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_c1dcvs(arg1,arg2,0x13);
    return;
}


// ===== sym.scmi_get_hysteresis @ 0x08001370 (size 40) =====

void sym.scmi_get_hysteresis(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(arg1,arg2,0x14);
    return;
}


// ===== sym.scmi_set_c1dcvs_opt_mode @ 0x08001398 (size 40) =====

void sym.scmi_set_c1dcvs_opt_mode(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_c1dcvs(arg1,arg2,0x15);
    return;
}


// ===== sym.scmi_get_c1dcvs_opt_mode @ 0x080013c0 (size 40) =====

void sym.scmi_get_c1dcvs_opt_mode(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_tunable_c1dcvs(arg1,arg2,0x16);
    return;
}


// ===== sym.scmi_send_tunable_c1dcvs @ 0x080013e8 (size 308) =====

uchar * sym.scmi_send_tunable_c1dcvs(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar9;
    code *pcVar10;
    code *pcVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    uchar *puStack_98;
    code *pcStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    code *pcStack_60;
    uchar *puStack_58;
    code *pcStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = 0;
    pcVar10 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar10,0x80000c0);
    uVar6 = 4;
    uVar2 = (*pcVar10)(arg1,arg3 & 0xffffffff,4,4,&iStack_40);
    if (uVar2 == 0) {
        **(iStack_40 + 0x18) = *arg2;
        pcVar9 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9,0x80000e0);
        uVar2 = (*pcVar9)(arg1,iStack_40);
        uVar6 = 0x8000100;
        arg2 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,arg2,0x8000100);
        (*arg2)(arg1,iStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar12 = __stack_chk_fail();
    pcVar9 = auVar12._8_8_;
    iVar3 = auVar12._0_8_;
    *extraout_x18 = sym.scmi_get_tunable_c1dcvs;
    pcStack_68 = sym.scmi_get_tunable_c1dcvs;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    iStack_80 = 0;
    pcVar11 = *(*(iVar3 + 8) + 8);
    puStack_70 = &stack0xffffffffffffffd0;
    pcStack_60 = pcVar10;
    puStack_58 = uVar2;
    pcStack_50 = arg2;
    iStack_48 = arg1;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar11,0x8000120);
    uVar7 = 8;
    uVar2 = (*pcVar11)(iVar3,uVar6 & 0xffffffff,8,0x80,&iStack_80);
    if (uVar2 == 0) {
        pcVar10 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar10,0x8000140);
        uVar2 = (*pcVar10)(iVar3,iStack_80);
        memcpy(pcVar9,*(iStack_80 + 0x28),*(iStack_80 + 0x30));
        uVar7 = 0x8000160;
        pcVar9 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar9,0x8000160);
        (*pcVar9)(iVar3,iStack_80);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_78) {
        auVar12 = __stack_chk_fail();
        iVar4 = auVar12._0_8_;
        *extraout_x18_00 = sym.scmi_send_thresh_c1dcvs;
        pcStack_a8 = sym.scmi_send_thresh_c1dcvs;
        iVar1 = sp_el0;
        iStack_b8 = *(iVar1 + 0x5e0);
        iStack_c0 = 0;
        pcVar10 = *(*(iVar4 + 8) + 8);
        ppuStack_b0 = &puStack_70;
        pcStack_a0 = pcVar11;
        puStack_98 = uVar2;
        pcStack_90 = pcVar9;
        iStack_88 = iVar3;
        __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar10,0x8000180);
        uVar2 = (*pcVar10)(iVar4,uVar7 & 0xffffffff,8,8,&iStack_c0);
        if (uVar2 == 0) {
            puVar8 = *(iStack_c0 + 0x18);
            *puVar8 = *auVar12._8_8_;
            puVar8[1] = auVar12._8_8_[1];
            pcVar10 = *(*(iVar4 + 8) + 0x18);
            __cfi_slowpath_diag(0x282f982876cea641,pcVar10,0x80001a0);
            uVar2 = (*pcVar10)(iVar4,iStack_c0);
            pcVar10 = *(*(iVar4 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar10,0x80001c0);
            (*pcVar10)(iVar4,iStack_c0);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_b8) {
            auVar12 = __stack_chk_fail();
            puVar5 = auVar12._0_8_;
            *extraout_x18_01 = sym.__cfi_check_fail;
            if (puVar5 != NULL) {
                switch(*puVar5) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar5,auVar12._8_8_,0);
                    break;
                default:
                    return puVar5;
                }
            }
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x5502,0x80017e4);
            (*pcVar10)();
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.scmi_get_tunable_c1dcvs @ 0x0800151c (size 308) =====

uchar * sym.scmi_get_tunable_c1dcvs(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uchar *puVar4;
    uint64_t uVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar7;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    code *pcStack_60;
    uchar *puStack_58;
    code *pcStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = 0;
    pcVar8 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar8,0x8000120);
    uVar5 = 8;
    uVar2 = (*pcVar8)(arg1,arg3 & 0xffffffff,8,0x80,&iStack_40);
    if (uVar2 == 0) {
        pcVar7 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar7,0x8000140);
        uVar2 = (*pcVar7)(arg1,iStack_40);
        memcpy(arg2,*(iStack_40 + 0x28),*(iStack_40 + 0x30));
        uVar5 = 0x8000160;
        arg2 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,arg2,0x8000160);
        (*arg2)(arg1,iStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    *extraout_x18 = sym.scmi_send_thresh_c1dcvs;
    pcStack_68 = sym.scmi_send_thresh_c1dcvs;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    iStack_80 = 0;
    pcVar7 = *(*(iVar3 + 8) + 8);
    puStack_70 = &stack0xffffffffffffffd0;
    pcStack_60 = pcVar8;
    puStack_58 = uVar2;
    pcStack_50 = arg2;
    iStack_48 = arg1;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar7,0x8000180);
    uVar2 = (*pcVar7)(iVar3,uVar5 & 0xffffffff,8,8,&iStack_80);
    if (uVar2 == 0) {
        puVar6 = *(iStack_80 + 0x18);
        *puVar6 = *auVar9._8_8_;
        puVar6[1] = auVar9._8_8_[1];
        pcVar8 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar8,0x80001a0);
        uVar2 = (*pcVar8)(iVar3,iStack_80);
        pcVar8 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8,0x80001c0);
        (*pcVar8)(iVar3,iStack_80);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_78) {
        auVar9 = __stack_chk_fail();
        puVar4 = auVar9._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar9._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x5502,0x80017e4);
        (*pcVar8)();
    }
    return uVar2;
}


// ===== sym.scmi_send_thresh_c1dcvs @ 0x08001650 (size 316) =====

uchar * sym.scmi_send_thresh_c1dcvs(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uchar *puVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = 0;
    pcVar5 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x8000180);
    uVar2 = (*pcVar5)(arg1,arg3 & 0xffffffff,8,8,&iStack_40);
    if (uVar2 == 0) {
        puVar4 = *(iStack_40 + 0x18);
        *puVar4 = *arg2;
        puVar4[1] = *(arg2 + 4);
        pcVar5 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x80001a0);
        uVar2 = (*pcVar5)(arg1,iStack_40);
        pcVar5 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar5,0x80001c0);
        (*pcVar5)(arg1,iStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        puVar3 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar6._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x80017e4);
        (*pcVar5)();
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x0800178c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080017d0

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
    //switch table (4 cases) at 0x80001e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017e4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080017f4 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_register(obj.scmi_c1dcvs);
    return;
}


// ===== sym.cleanup_module @ 0x08001820 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_unregister(obj.scmi_c1dcvs);
    return;
}

