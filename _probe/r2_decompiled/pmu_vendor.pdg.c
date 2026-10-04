// decompiled from pmu_vendor by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 212) =====

//WARNING: Switch with 1 destination removed at 0x08001540

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x6ac5a6004ef664b6) {
        if (arg1 != 0x2b3a43e29242445) {
            if ((arg1 == 0x376863d1de02459b) && ((pcVar1 + -0x80010f8 >> 3 | pcVar1 << 0x3d) < 3)) {
                return;
            }
            goto code_r0x08001500;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x6ac5a6004ef664b6) {
        pcVar2 = sym.scmi_pmu_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001500;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001500:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001554);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_unregister(obj.scmi_pmu);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_register(obj.scmi_pmu);
    return;
}


// ===== sym.scmi_pmu_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f0 (size 8) =====

uint64_t sym.scmi_pmu_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uchar *puVar1;
    uchar *puVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auVar9 [16];
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_2c = 0;
    pcVar6 = **(param_1 + 8);
    __cfi_slowpath_diag(0x8a421e33b511c627,pcVar6,0x8000060);
    (*pcVar6)(param_1,&uStack_2c);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.scmi_pmu_map;
    pcStack_68 = sym.scmi_pmu_map;
    iVar7 = sp_el0;
    iStack_78 = *(iVar7 + 0x5e0);
    iStack_80 = 0;
    pcVar6 = *(*(iVar4 + 8) + 8);
    puStack_70 = &stack0xffffffffffffffe0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar6,0x8000080);
    uVar3 = (*pcVar6)(iVar4,0xb,0x48,0x48,&iStack_80);
    if (uVar3 == 0) {
        iVar7 = *(iStack_80 + 0x18);
        auVar9 = cpumask_next(0xffffffff,__cpu_possible_mask);
        uVar5 = auVar9._0_8_;
        *auVar9._8_8_ = extraout_w8;
        if (auVar9._0_4_ < extraout_w8) {
            do {
                if (7 < uVar5) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x8001374);
                    (*pcVar6)();
                }
                puVar1 = auVar8._8_8_ + uVar5 * 9;
                puVar2 = iVar7 + (uVar5 & 0xffffffff) * 9;
                *puVar2 = *puVar1;
                puVar2[1] = puVar1[1];
                puVar2[2] = puVar1[2];
                puVar2[3] = puVar1[3];
                puVar2[4] = puVar1[4];
                puVar2[5] = puVar1[5];
                puVar2[6] = puVar1[6];
                puVar2[7] = puVar1[7];
                puVar2[8] = puVar1[8];
                auVar9 = cpumask_next(uVar5 & 0xffffffff,__cpu_possible_mask);
                uVar5 = auVar9._0_8_;
                *auVar9._8_8_ = extraout_w8_00;
            } while (auVar9._0_4_ < extraout_w8_00);
        }
        pcVar6 = *(*(iVar4 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar6,0x80000a0);
        uVar3 = (*pcVar6)(iVar4,iStack_80);
        pcVar6 = *(*(iVar4 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar6,0x80000c0);
        (*pcVar6)(iVar4,iStack_80);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_78) {
        auVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.scmi_set_enable_trace;
        uVar5 = sym.scmi_send_tunable_pmu(auVar8._0_8_,auVar8._8_8_,0xc);
        return uVar5;
    }
    return uVar3;
}


// ===== sym.scmi_set_caching_enable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f8 (size 8) =====

void sym.scmi_set_caching_enable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_pmu(param_1,param_2,0xd);
    return;
}


// ===== sym.scmi_pmu_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001100 (size 8) =====

uint64_t sym.scmi_pmu_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uchar *puVar1;
    uchar *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iStack_50 = 0;
    pcVar5 = *(*(param_1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x8000080);
    uVar3 = (*pcVar5)(param_1,0xb,0x48,0x48,&iStack_50);
    if (uVar3 == 0) {
        iVar6 = *(iStack_50 + 0x18);
        auVar7 = cpumask_next(0xffffffff,__cpu_possible_mask);
        uVar4 = auVar7._0_8_;
        *auVar7._8_8_ = extraout_w8;
        if (auVar7._0_4_ < extraout_w8) {
            do {
                if (7 < uVar4) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8001374);
                    (*pcVar5)();
                }
                puVar1 = param_2 + uVar4 * 9;
                puVar2 = iVar6 + (uVar4 & 0xffffffff) * 9;
                *puVar2 = *puVar1;
                puVar2[1] = puVar1[1];
                puVar2[2] = puVar1[2];
                puVar2[3] = puVar1[3];
                puVar2[4] = puVar1[4];
                puVar2[5] = puVar1[5];
                puVar2[6] = puVar1[6];
                puVar2[7] = puVar1[7];
                puVar2[8] = puVar1[8];
                auVar7 = cpumask_next(uVar4 & 0xffffffff,__cpu_possible_mask);
                uVar4 = auVar7._0_8_;
                *auVar7._8_8_ = extraout_w8_00;
            } while (auVar7._0_4_ < extraout_w8_00);
        }
        pcVar5 = *(*(param_1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x80000a0);
        uVar3 = (*pcVar5)(param_1,iStack_50);
        pcVar5 = *(*(param_1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar5,0x80000c0);
        (*pcVar5)(param_1,iStack_50);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_48) {
        auVar7 = __stack_chk_fail();
        *extraout_x18 = sym.scmi_set_enable_trace;
        uVar4 = sym.scmi_send_tunable_pmu(auVar7._0_8_,auVar7._8_8_,0xc);
        return uVar4;
    }
    return uVar3;
}


// ===== sym.scmi_set_enable_trace.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001108 (size 8) =====

void sym.scmi_set_enable_trace.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_pmu(param_1,param_2,0xc);
    return;
}


// ===== sym.scmi_pmu_protocol_init @ 0x08001110 (size 148) =====

uint64_t sym.scmi_pmu_protocol_init(int64_t arg1)

{
    uchar *puVar1;
    uchar *puVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auVar9 [16];
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_2c = 0;
    pcVar6 = **(arg1 + 8);
    __cfi_slowpath_diag(0x8a421e33b511c627,pcVar6,0x8000060);
    (*pcVar6)(arg1,&uStack_2c);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.scmi_pmu_map;
    pcStack_68 = sym.scmi_pmu_map;
    iVar7 = sp_el0;
    iStack_78 = *(iVar7 + 0x5e0);
    iStack_80 = 0;
    pcVar6 = *(*(iVar4 + 8) + 8);
    puStack_70 = &stack0xffffffffffffffe0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar6,0x8000080);
    uVar3 = (*pcVar6)(iVar4,0xb,0x48,0x48,&iStack_80);
    if (uVar3 == 0) {
        iVar7 = *(iStack_80 + 0x18);
        auVar9 = cpumask_next(0xffffffff,__cpu_possible_mask);
        uVar5 = auVar9._0_8_;
        *auVar9._8_8_ = extraout_w8;
        if (auVar9._0_4_ < extraout_w8) {
            do {
                if (7 < uVar5) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x8001374);
                    (*pcVar6)();
                }
                puVar1 = auVar8._8_8_ + uVar5 * 9;
                puVar2 = iVar7 + (uVar5 & 0xffffffff) * 9;
                *puVar2 = *puVar1;
                puVar2[1] = puVar1[1];
                puVar2[2] = puVar1[2];
                puVar2[3] = puVar1[3];
                puVar2[4] = puVar1[4];
                puVar2[5] = puVar1[5];
                puVar2[6] = puVar1[6];
                puVar2[7] = puVar1[7];
                puVar2[8] = puVar1[8];
                auVar9 = cpumask_next(uVar5 & 0xffffffff,__cpu_possible_mask);
                uVar5 = auVar9._0_8_;
                *auVar9._8_8_ = extraout_w8_00;
            } while (auVar9._0_4_ < extraout_w8_00);
        }
        pcVar6 = *(*(iVar4 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar6,0x80000a0);
        uVar3 = (*pcVar6)(iVar4,iStack_80);
        pcVar6 = *(*(iVar4 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar6,0x80000c0);
        (*pcVar6)(iVar4,iStack_80);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_78) {
        auVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.scmi_set_enable_trace;
        uVar5 = sym.scmi_send_tunable_pmu(auVar8._0_8_,auVar8._8_8_,0xc);
        return uVar5;
    }
    return uVar3;
}


// ===== sym.scmi_pmu_map @ 0x080011a4 (size 468) =====

uint64_t sym.scmi_pmu_map(int64_t arg1,int64_t arg2)

{
    uchar *puVar1;
    uchar *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iStack_50 = 0;
    pcVar5 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x8000080);
    uVar3 = (*pcVar5)(arg1,0xb,0x48,0x48,&iStack_50);
    if (uVar3 == 0) {
        iVar6 = *(iStack_50 + 0x18);
        auVar7 = cpumask_next(0xffffffff,__cpu_possible_mask);
        uVar4 = auVar7._0_8_;
        *auVar7._8_8_ = extraout_w8;
        if (auVar7._0_4_ < extraout_w8) {
            do {
                if (7 < uVar4) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8001374);
                    (*pcVar5)();
                }
                puVar1 = arg2 + uVar4 * 9;
                puVar2 = iVar6 + (uVar4 & 0xffffffff) * 9;
                *puVar2 = *puVar1;
                puVar2[1] = puVar1[1];
                puVar2[2] = puVar1[2];
                puVar2[3] = puVar1[3];
                puVar2[4] = puVar1[4];
                puVar2[5] = puVar1[5];
                puVar2[6] = puVar1[6];
                puVar2[7] = puVar1[7];
                puVar2[8] = puVar1[8];
                auVar7 = cpumask_next(uVar4 & 0xffffffff,__cpu_possible_mask);
                uVar4 = auVar7._0_8_;
                *auVar7._8_8_ = extraout_w8_00;
            } while (auVar7._0_4_ < extraout_w8_00);
        }
        pcVar5 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x80000a0);
        uVar3 = (*pcVar5)(arg1,iStack_50);
        pcVar5 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar5,0x80000c0);
        (*pcVar5)(arg1,iStack_50);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_48) {
        auVar7 = __stack_chk_fail();
        *extraout_x18 = sym.scmi_set_enable_trace;
        uVar4 = sym.scmi_send_tunable_pmu(auVar7._0_8_,auVar7._8_8_,0xc);
        return uVar4;
    }
    return uVar3;
}


// ===== sym.scmi_set_enable_trace @ 0x08001378 (size 40) =====

void sym.scmi_set_enable_trace(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_pmu(arg1,arg2,0xc);
    return;
}


// ===== sym.scmi_set_caching_enable @ 0x080013a0 (size 40) =====

void sym.scmi_set_caching_enable(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_send_tunable_pmu(arg1,arg2,0xd);
    return;
}


// ===== sym.scmi_send_tunable_pmu @ 0x080013c8 (size 308) =====

uchar * sym.scmi_send_tunable_pmu(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = 0;
    pcVar4 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar4,0x80000e0);
    uVar2 = (*pcVar4)(arg1,arg3 & 0xffffffff,4,4,&iStack_40);
    if (uVar2 == 0) {
        **(iStack_40 + 0x18) = *arg2;
        pcVar4 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar4,0x8000100);
        uVar2 = (*pcVar4)(arg1,iStack_40);
        pcVar4 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar4,0x8000120);
        (*pcVar4)(arg1,iStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
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
        pcVar4 = SoftwareBreakpoint(0x5502,0x8001554);
        (*pcVar4)();
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x080014fc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001540

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
    //switch table (4 cases) at 0x8000140
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001554);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001564 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_register(obj.scmi_pmu);
    return;
}


// ===== sym.cleanup_module @ 0x08001590 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_unregister(obj.scmi_pmu);
    return;
}

