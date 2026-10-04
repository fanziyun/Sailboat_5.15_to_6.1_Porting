// decompiled from memlat_vendor by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 576) =====

//WARNING: Switch with 1 destination removed at 0x0800254c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x3fc582948b8475f2) {
        if (arg1 < 0x308d371319c62e56) {
            if (arg1 == -0x284747c2a30b49f0) {
                if ((pcVar1 + -0x80012c8 >> 3 | pcVar1 << 0x3d) < 0xc) {
                    return;
                }
                goto code_r0x0800250c;
            }
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x17f4128a1da16962) goto code_r0x0800250c;
                pcVar2 = sym.scmi_set_log_level.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x080011e0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800250c;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x308d371319c62e56) {
            pcVar2 = sym.scmi_set_mem_grp.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == 0x34377c6266c49fe3) {
            pcVar2 = sym.scmi_set_grp_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x376863d1de02459b) goto code_r0x0800250c;
            pcVar2 = sym.scmi_get_timestamp.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x6ac5a6004ef664b6) {
        if (arg1 == 0x3fc582948b8475f2) {
            pcVar2 = sym.scmi_set_mon.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 == 0x4e07fa4dc08e950d) {
                pcVar2 = sym.scmi_get_cur_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x080011e0;
            }
            if (arg1 != 0x51053f357f5ea05a) goto code_r0x0800250c;
            pcVar2 = sym.scmi_freq_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x6ac5a6004ef664b6) {
            if ((pcVar1 + -0x8001290 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x0800250c;
        }
        if (arg1 == 0x7b03ac44b3ee5b01) {
            pcVar2 = sym.scmi_set_common_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800250c;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800250c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002560);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001248 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_unregister(obj.scmi_memlat_vendor);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001250 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_register(obj.scmi_memlat_vendor);
    return;
}


// ===== sym.scmi_set_grp_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001258 (size 8) =====

void sym.scmi_set_grp_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_ev_map(param_1,param_2,param_3,0x13);
    return;
}


// ===== sym.scmi_set_log_level.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001260 (size 8) =====

void sym.scmi_set_log_level.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_global_var(param_1,param_2,3);
    return;
}


// ===== sym.scmi_set_sample_ms.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001268 (size 8) =====

void sym.scmi_set_sample_ms.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_global_var(param_1,param_2,0x1f);
    return;
}


// ===== sym.scmi_set_mon.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001270 (size 8) =====

uint64_t sym.scmi_set_mon.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,uint param_2,uint param_3,uint param_4,uint param_5,int64_t param_6)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iStack_60 = 0;
    pcVar6 = *(*(param_1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar6,0x8000130);
    iVar4 = 0x24;
    uVar2 = (*pcVar6)(param_1,0x11,0x24,0x24,&iStack_60);
    if (uVar2 == 0) {
        puVar5 = *(iStack_60 + 0x18);
        *puVar5 = param_2;
        puVar5[1] = param_3;
        puVar5[2] = param_4;
        puVar5[3] = param_5;
        if (param_6 != 0) {
            snprintf(puVar5 + 4,0x14,param_6);
        }
        pcVar6 = *(*(param_1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar6,0x8000150);
        uVar2 = (*pcVar6)(param_1,iStack_60);
        iVar4 = 0x8000170;
        pcVar6 = *(*(param_1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar6);
        (*pcVar6)(param_1,iStack_60);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_set_grp_map;
    uVar3 = sym.scmi_set_ev_map(auVar7._0_8_,auVar7._8_8_,iVar4,0x13);
    return uVar3;
}


// ===== sym.scmi_set_common_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001278 (size 8) =====

void sym.scmi_set_common_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_ev_map(param_1,0xff,param_2,0x12);
    return;
}


// ===== sym.scmi_freq_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001280 (size 8) =====

uint64_t sym.scmi_freq_map.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,uint param_2,uint64_t param_3,uint32_t param_4,int64_t param_5)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint *puVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0;
    if (param_4 < 0xf) {
        uVar2 = param_3;
        pcVar8 = *(*(param_1 + 8) + 8);
        uVar4 = param_4;
        __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar8,0x8000310);
        param_3 = 0x7c;
        uVar3 = (*pcVar8)(param_1,0x20,0x7c,0x7c,&iStack_50);
        uVar7 = uVar3;
        if (uVar3 == 0) {
            puVar6 = *(iStack_50 + 0x18);
            *puVar6 = param_2;
            puVar6[1] = uVar2;
            puVar6[2] = param_4;
            if (param_4 != 0) {
                puVar5 = param_5 + 4;
                puVar6 = puVar6 + 4;
                do {
                    uVar4 = uVar4 - 1;
                    puVar6[-1] = puVar5[-1];
                    *puVar6 = *puVar5;
                    puVar5 = puVar5 + 2;
                    puVar6 = puVar6 + 2;
                } while (uVar4 != 0);
            }
            pcVar8 = *(*(param_1 + 8) + 0x18);
            __cfi_slowpath_diag(0x282f982876cea641,pcVar8,0x8000330);
            uVar7 = (*pcVar8)(param_1,iStack_50);
            uVar7 = uVar7 & 0xffffffff;
            param_3 = 0x8000350;
            pcVar8 = *(*(param_1 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8);
            (*pcVar8)(param_1,iStack_50);
        }
    }
    else {
        uVar7 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_min_freq;
    uVar4 = sym.scmi_set_tunable(auVar9._0_8_,auVar9._8_8_,0x21,param_3 & 0xffffffff);
    return uVar4;
}


// ===== sym.scmi_set_mem_grp.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001288 (size 8) =====

uint64_t sym.scmi_set_mem_grp.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,uint param_2,uint param_3,ulong param_4,ulong param_5,int64_t param_6)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint uVar4;
    int64_t iVar5;
    uint uVar6;
    uint uVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    uchar auVar11 [16];
    int64_t iStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_40;
    int64_t iStack_38;
    
    uVar7 = SUB84(&iStack_40,0);
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_40 = 0;
    pcVar9 = *(*(param_1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x8000130);
    uVar4 = 0x24;
    uVar6 = 0x24;
    uVar1 = (*pcVar9)(param_1,0x10);
    if (uVar1 == 0) {
        puVar8 = *(iStack_40 + 0x18);
        *puVar8 = param_2;
        puVar8[1] = param_3;
        *(puVar8 + 2) = 0;
        pcVar9 = *(*(param_1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9,0x8000150);
        uVar1 = (*pcVar9)(param_1,iStack_40);
        uVar4 = 0x8000170;
        pcVar9 = *(*(param_1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar9);
        (*pcVar9)(param_1,iStack_40);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar10 = __stack_chk_fail();
    iVar2 = auVar10._0_8_;
    *extraout_x18 = sym.scmi_set_mon;
    pcStack_88 = sym.scmi_set_mon;
    iVar5 = sp_el0;
    iStack_98 = *(iVar5 + 0x5e0);
    iStack_a0 = 0;
    pcVar9 = *(*(iVar2 + 8) + 8);
    puStack_90 = &stack0xffffffffffffffd0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x8000130);
    iVar5 = 0x24;
    uVar1 = (*pcVar9)(iVar2,0x11,0x24,0x24,&iStack_a0);
    if (uVar1 == 0) {
        puVar8 = *(iStack_a0 + 0x18);
        *puVar8 = auVar10._8_4_;
        puVar8[1] = uVar4;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
        if (param_6 != 0) {
            snprintf(puVar8 + 4,0x14,param_6);
        }
        pcVar9 = *(*(iVar2 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9,0x8000150);
        uVar1 = (*pcVar9)(iVar2,iStack_a0);
        iVar5 = 0x8000170;
        pcVar9 = *(*(iVar2 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar9);
        (*pcVar9)(iVar2,iStack_a0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar1;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.scmi_set_grp_map;
    uVar3 = sym.scmi_set_ev_map(auVar11._0_8_,auVar11._8_8_,iVar5,0x13);
    return uVar3;
}


// ===== sym.scmi_flush_cpucp_log.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001290 (size 8) =====

uint64_t sym.scmi_flush_cpucp_log.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uchar *puVar5;
    uint64_t uVar6;
    int iVar7;
    int *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar9;
    code *unaff_x21;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [12];
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    code *pcStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    pcVar9 = *(*(param_1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x8000370);
    uVar2 = (*pcVar9)(param_1,4,0,0,&uStack_40);
    if (uVar2 == 0) {
        pcVar9 = *(*(param_1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9,0x8000390);
        uVar2 = (*pcVar9)(param_1,uStack_40);
        unaff_x21 = *(*(param_1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,unaff_x21,0x80003b0);
        (*unaff_x21)(param_1,uStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar11 = __stack_chk_fail();
    iVar3 = auVar11._0_8_;
    iVar7 = &iStack_80;
    *extraout_x18 = sym.scmi_get_timestamp;
    pcStack_68 = sym.scmi_get_timestamp;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    iStack_80 = 0;
    pcVar9 = *(*(iVar3 + 8) + 8);
    puStack_70 = &stack0xffffffffffffffd0;
    pcStack_60 = unaff_x21;
    uStack_50 = uVar2;
    iStack_48 = param_1;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x80003d0);
    puVar5 = 0x4;
    uVar6 = 0x80;
    uVar4 = (*pcVar9)(iVar3,0x26,4,0x80);
    uVar10 = uVar4 & 0xffffffff;
    if (uVar4 == 0) {
        puVar5 = 0x80003f0;
        pcVar9 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9);
        uVar10 = (*pcVar9)(iVar3,iStack_80);
        if (*(iStack_80 + 0x30) == 8) {
            uVar10 = uVar10 & 0xffffffff;
            puVar5 = 0x8000410;
            *auVar11._8_8_ = **(iStack_80 + 0x28);
            pcVar9 = *(*(iVar3 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar9);
            (*pcVar9)(iVar3,iStack_80);
        }
        else {
            uVar10 = 0xffffffa6;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return uVar10;
    }
    auVar12 = __stack_chk_fail();
    iVar3 = auVar12._0_8_;
    *extraout_x18_00 = sym.scmi_set_ev_map;
    pcStack_b8 = sym.scmi_set_ev_map;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    iStack_d0 = 0;
    pcVar9 = *(*(iVar3 + 8) + 8);
    ppuStack_c0 = &puStack_70;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x8000190);
    uVar4 = (*pcVar9)(iVar3,uVar6 & 0xffffffff,0xc,0xc,&iStack_d0);
    if (uVar4 == 0) {
        piVar8 = *(iStack_d0 + 0x18);
        *piVar8 = iVar7;
        piVar8[1] = auVar12._8_4_;
        if ((((iVar7 != 0) && (*(piVar8 + 2) = *puVar5, iVar7 != 1)) && (*(piVar8 + 9) = puVar5[1], iVar7 != 2)) &&
           ((*(piVar8 + 10) = puVar5[2], iVar7 != 3 && (*(piVar8 + 0xb) = puVar5[3], iVar7 != 4))))
        goto code_r0x0800212c;
        pcVar9 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9,0x80001b0);
        uVar4 = (*pcVar9)(iVar3,iStack_d0);
        pcVar9 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar9,0x80001d0);
        (*pcVar9)(iVar3,iStack_d0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return uVar4 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800212c:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x8002130);
    (*pcVar9)();
}


// ===== sym.scmi_stop_timer.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001298 (size 8) =====

uint64_t sym.scmi_stop_timer.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    pcVar4 = *(*(param_1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar4,0x8000370);
    uVar2 = (*pcVar4)(param_1,0x25,0,0,&uStack_40);
    if (uVar2 == 0) {
        pcVar4 = *(*(param_1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar4,0x8000390);
        uVar2 = (*pcVar4)(param_1,uStack_40);
        pcVar4 = *(*(param_1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar4,0x80003b0);
        (*pcVar4)(param_1,uStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_set_log_level;
    uVar3 = sym.scmi_set_global_var(auVar5._0_8_,auVar5._8_8_,3);
    return uVar3;
}


// ===== sym.scmi_start_timer.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012a0 (size 8) =====

uint64_t sym.scmi_start_timer.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar5;
    code *unaff_x21;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    code *pcStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    pcVar5 = *(*(param_1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x8000370);
    uVar2 = (*pcVar5)(param_1,0x24,0,0,&uStack_40);
    if (uVar2 == 0) {
        pcVar5 = *(*(param_1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x8000390);
        uVar2 = (*pcVar5)(param_1,uStack_40);
        unaff_x21 = *(*(param_1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,unaff_x21,0x80003b0);
        (*unaff_x21)(param_1,uStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_stop_timer;
    pcStack_68 = sym.scmi_stop_timer;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_80 = 0;
    pcVar5 = *(*(iVar3 + 8) + 8);
    puStack_70 = &stack0xffffffffffffffd0;
    pcStack_60 = unaff_x21;
    uStack_50 = uVar2;
    iStack_48 = param_1;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x8000370);
    uVar2 = (*pcVar5)(iVar3,0x25,0,0,&uStack_80);
    if (uVar2 == 0) {
        pcVar5 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x8000390);
        uVar2 = (*pcVar5)(iVar3,uStack_80);
        pcVar5 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar5,0x80003b0);
        (*pcVar5)(iVar3,uStack_80);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return uVar2;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.scmi_set_log_level;
    uVar4 = sym.scmi_set_global_var(auVar6._0_8_,auVar6._8_8_,3);
    return uVar4;
}


// ===== sym.scmi_memlat_vendor_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012a8 (size 8) =====

uint64_t sym.scmi_memlat_vendor_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint uVar4;
    uint uVar5;
    int64_t iVar6;
    uint uVar7;
    uint uVar8;
    int64_t in_x5;
    uint *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uchar auVar12 [16];
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uVar4 = 0x8000110;
    uStack_2c = 0;
    pcVar10 = **(param_1 + 8);
    __cfi_slowpath_diag(0x8a421e33b511c627,pcVar10);
    (*pcVar10)(param_1,&uStack_2c);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar11 = __stack_chk_fail();
    iVar2 = auVar11._0_8_;
    uVar8 = SUB84(&iStack_70,0);
    *extraout_x18 = sym.scmi_set_mem_grp;
    pcStack_58 = sym.scmi_set_mem_grp;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    pcVar10 = *(*(iVar2 + 8) + 8);
    puStack_60 = &stack0xffffffffffffffe0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar10,0x8000130);
    uVar5 = 0x24;
    uVar7 = 0x24;
    uVar1 = (*pcVar10)(iVar2,0x10);
    if (uVar1 == 0) {
        puVar9 = *(iStack_70 + 0x18);
        *puVar9 = auVar11._8_4_;
        puVar9[1] = uVar4;
        *(puVar9 + 2) = 0;
        pcVar10 = *(*(iVar2 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar10,0x8000150);
        uVar1 = (*pcVar10)(iVar2,iStack_70);
        uVar5 = 0x8000170;
        pcVar10 = *(*(iVar2 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar10);
        (*pcVar10)(iVar2,iStack_70);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar1;
    }
    auVar11 = __stack_chk_fail();
    iVar2 = auVar11._0_8_;
    *extraout_x18_00 = sym.scmi_set_mon;
    pcStack_b8 = sym.scmi_set_mon;
    iVar6 = sp_el0;
    iStack_c8 = *(iVar6 + 0x5e0);
    iStack_d0 = 0;
    pcVar10 = *(*(iVar2 + 8) + 8);
    ppuStack_c0 = &puStack_60;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar10,0x8000130);
    iVar6 = 0x24;
    uVar1 = (*pcVar10)(iVar2,0x11,0x24,0x24,&iStack_d0);
    if (uVar1 == 0) {
        puVar9 = *(iStack_d0 + 0x18);
        *puVar9 = auVar11._8_4_;
        puVar9[1] = uVar5;
        puVar9[2] = uVar7;
        puVar9[3] = uVar8;
        if (in_x5 != 0) {
            snprintf(puVar9 + 4,0x14,in_x5);
        }
        pcVar10 = *(*(iVar2 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar10,0x8000150);
        uVar1 = (*pcVar10)(iVar2,iStack_d0);
        iVar6 = 0x8000170;
        pcVar10 = *(*(iVar2 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar10);
        (*pcVar10)(iVar2,iStack_d0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return uVar1;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.scmi_set_grp_map;
    uVar3 = sym.scmi_set_ev_map(auVar12._0_8_,auVar12._8_8_,iVar6,0x13);
    return uVar3;
}


// ===== sym.scmi_get_cur_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012b0 (size 8) =====

void sym.scmi_get_cur_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_freq(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.scmi_get_adaptive_cur_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012b8 (size 8) =====

void sym.scmi_get_adaptive_cur_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_freq(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.scmi_get_timestamp.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012c0 (size 8) =====

int sym.scmi_get_timestamp.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    uint64_t uVar5;
    int iVar6;
    int *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [12];
    int64_t iStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_40;
    int64_t iStack_38;
    
    iVar6 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = 0;
    pcVar8 = *(*(param_1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar8,0x80003d0);
    puVar4 = 0x4;
    uVar5 = 0x80;
    iVar2 = (*pcVar8)(param_1,0x26,4,0x80);
    if (iVar2 == 0) {
        puVar4 = 0x80003f0;
        pcVar8 = *(*(param_1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar8);
        iVar2 = (*pcVar8)(param_1,iStack_40);
        if (*(iStack_40 + 0x30) == 8) {
            puVar4 = 0x8000410;
            *param_2 = **(iStack_40 + 0x28);
            pcVar8 = *(*(param_1 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8);
            (*pcVar8)(param_1,iStack_40);
        }
        else {
            iVar2 = -0x5a;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    *extraout_x18 = sym.scmi_set_ev_map;
    pcStack_78 = sym.scmi_set_ev_map;
    iVar1 = sp_el0;
    iStack_88 = *(iVar1 + 0x5e0);
    iStack_90 = 0;
    pcVar8 = *(*(iVar3 + 8) + 8);
    puStack_80 = &stack0xffffffffffffffd0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar8,0x8000190);
    iVar2 = (*pcVar8)(iVar3,uVar5 & 0xffffffff,0xc,0xc,&iStack_90);
    if (iVar2 == 0) {
        piVar7 = *(iStack_90 + 0x18);
        *piVar7 = iVar6;
        piVar7[1] = auVar9._8_4_;
        if ((((iVar6 != 0) && (*(piVar7 + 2) = *puVar4, iVar6 != 1)) && (*(piVar7 + 9) = puVar4[1], iVar6 != 2)) &&
           ((*(piVar7 + 10) = puVar4[2], iVar6 != 3 && (*(piVar7 + 0xb) = puVar4[3], iVar6 != 4))))
        goto code_r0x0800212c;
        pcVar8 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar8,0x80001b0);
        iVar2 = (*pcVar8)(iVar3,iStack_90);
        pcVar8 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8,0x80001d0);
        (*pcVar8)(iVar3,iStack_90);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_88) {
        return iVar2;
    }
    __stack_chk_fail();
code_r0x0800212c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8002130);
    (*pcVar8)();
}


// ===== sym.scmi_min_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012c8 (size 8) =====

void sym.scmi_min_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x21,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_freq_scale_ceil_mhz.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012d0 (size 8) =====

void sym.scmi_freq_scale_ceil_mhz.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x1d,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_adaptive_high_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012d8 (size 8) =====

void sym.scmi_adaptive_high_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x15,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_freq_scale_pct.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012e0 (size 8) =====

void sym.scmi_freq_scale_pct.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x1c,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_freq_scale_floor_mhz.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012e8 (size 8) =====

void sym.scmi_freq_scale_floor_mhz.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x1e,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_adaptive_low_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012f0 (size 8) =====

void sym.scmi_adaptive_low_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x14,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_wb_filter_ipm.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012f8 (size 8) =====

void sym.scmi_wb_filter_ipm.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x1b,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_ipm_ceil.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001300 (size 8) =====

void sym.scmi_ipm_ceil.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x17,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_wb_pct_thres.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001308 (size 8) =====

void sym.scmi_wb_pct_thres.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x1a,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_max_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001310 (size 8) =====

void sym.scmi_max_freq.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x22,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_be_stall_floor.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001318 (size 8) =====

void sym.scmi_be_stall_floor.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x19,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_fe_stall_floor.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001320 (size 8) =====

void sym.scmi_fe_stall_floor.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(param_1,param_2,0x18,param_3 & 0xffffffff);
    return;
}


// ===== sym.scmi_memlat_vendor_protocol_init @ 0x08001328 (size 148) =====

uint64_t sym.scmi_memlat_vendor_protocol_init(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint uVar4;
    uint uVar5;
    int64_t iVar6;
    uint uVar7;
    uint uVar8;
    int64_t in_x5;
    uint *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uchar auVar12 [16];
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uVar4 = 0x8000110;
    uStack_2c = 0;
    pcVar10 = **(arg1 + 8);
    __cfi_slowpath_diag(0x8a421e33b511c627,pcVar10);
    (*pcVar10)(arg1,&uStack_2c);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar11 = __stack_chk_fail();
    iVar2 = auVar11._0_8_;
    uVar8 = SUB84(&iStack_70,0);
    *extraout_x18 = sym.scmi_set_mem_grp;
    pcStack_58 = sym.scmi_set_mem_grp;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    pcVar10 = *(*(iVar2 + 8) + 8);
    puStack_60 = &stack0xffffffffffffffe0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar10,0x8000130);
    uVar5 = 0x24;
    uVar7 = 0x24;
    uVar1 = (*pcVar10)(iVar2,0x10);
    if (uVar1 == 0) {
        puVar9 = *(iStack_70 + 0x18);
        *puVar9 = auVar11._8_4_;
        puVar9[1] = uVar4;
        *(puVar9 + 2) = 0;
        pcVar10 = *(*(iVar2 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar10,0x8000150);
        uVar1 = (*pcVar10)(iVar2,iStack_70);
        uVar5 = 0x8000170;
        pcVar10 = *(*(iVar2 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar10);
        (*pcVar10)(iVar2,iStack_70);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar1;
    }
    auVar11 = __stack_chk_fail();
    iVar2 = auVar11._0_8_;
    *extraout_x18_00 = sym.scmi_set_mon;
    pcStack_b8 = sym.scmi_set_mon;
    iVar6 = sp_el0;
    iStack_c8 = *(iVar6 + 0x5e0);
    iStack_d0 = 0;
    pcVar10 = *(*(iVar2 + 8) + 8);
    ppuStack_c0 = &puStack_60;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar10,0x8000130);
    iVar6 = 0x24;
    uVar1 = (*pcVar10)(iVar2,0x11,0x24,0x24,&iStack_d0);
    if (uVar1 == 0) {
        puVar9 = *(iStack_d0 + 0x18);
        *puVar9 = auVar11._8_4_;
        puVar9[1] = uVar5;
        puVar9[2] = uVar7;
        puVar9[3] = uVar8;
        if (in_x5 != 0) {
            snprintf(puVar9 + 4,0x14,in_x5);
        }
        pcVar10 = *(*(iVar2 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar10,0x8000150);
        uVar1 = (*pcVar10)(iVar2,iStack_d0);
        iVar6 = 0x8000170;
        pcVar10 = *(*(iVar2 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar10);
        (*pcVar10)(iVar2,iStack_d0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return uVar1;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.scmi_set_grp_map;
    uVar3 = sym.scmi_set_ev_map(auVar12._0_8_,auVar12._8_8_,iVar6,0x13);
    return uVar3;
}


// ===== sym.scmi_set_mem_grp @ 0x080013bc (size 308) =====

uint64_t sym.scmi_set_mem_grp(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint uVar4;
    int64_t iVar5;
    uint uVar6;
    uint uVar7;
    int64_t in_x5;
    uint *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    uchar auVar11 [16];
    int64_t iStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_40;
    int64_t iStack_38;
    
    uVar7 = SUB84(&iStack_40,0);
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_40 = 0;
    pcVar9 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x8000130);
    uVar4 = 0x24;
    uVar6 = 0x24;
    uVar1 = (*pcVar9)(arg1,0x10);
    if (uVar1 == 0) {
        puVar8 = *(iStack_40 + 0x18);
        *puVar8 = arg2;
        puVar8[1] = arg3;
        *(puVar8 + 2) = 0;
        pcVar9 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9,0x8000150);
        uVar1 = (*pcVar9)(arg1,iStack_40);
        uVar4 = 0x8000170;
        pcVar9 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar9);
        (*pcVar9)(arg1,iStack_40);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar10 = __stack_chk_fail();
    iVar2 = auVar10._0_8_;
    *extraout_x18 = sym.scmi_set_mon;
    pcStack_88 = sym.scmi_set_mon;
    iVar5 = sp_el0;
    iStack_98 = *(iVar5 + 0x5e0);
    iStack_a0 = 0;
    pcVar9 = *(*(iVar2 + 8) + 8);
    puStack_90 = &stack0xffffffffffffffd0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x8000130);
    iVar5 = 0x24;
    uVar1 = (*pcVar9)(iVar2,0x11,0x24,0x24,&iStack_a0);
    if (uVar1 == 0) {
        puVar8 = *(iStack_a0 + 0x18);
        *puVar8 = auVar10._8_4_;
        puVar8[1] = uVar4;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
        if (in_x5 != 0) {
            snprintf(puVar8 + 4,0x14,in_x5);
        }
        pcVar9 = *(*(iVar2 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9,0x8000150);
        uVar1 = (*pcVar9)(iVar2,iStack_a0);
        iVar5 = 0x8000170;
        pcVar9 = *(*(iVar2 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar9);
        (*pcVar9)(iVar2,iStack_a0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return uVar1;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.scmi_set_grp_map;
    uVar3 = sym.scmi_set_ev_map(auVar11._0_8_,auVar11._8_8_,iVar5,0x13);
    return uVar3;
}


// ===== sym.scmi_set_mon @ 0x080014f0 (size 356) =====

uint64_t sym.scmi_set_mon(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint in_w4;
    int64_t in_x5;
    uint *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iStack_60 = 0;
    pcVar6 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar6,0x8000130);
    iVar4 = 0x24;
    uVar2 = (*pcVar6)(arg1,0x11,0x24,0x24,&iStack_60);
    if (uVar2 == 0) {
        puVar5 = *(iStack_60 + 0x18);
        *puVar5 = arg2;
        puVar5[1] = arg3;
        puVar5[2] = arg4;
        puVar5[3] = in_w4;
        if (in_x5 != 0) {
            snprintf(puVar5 + 4,0x14);
        }
        pcVar6 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar6,0x8000150);
        uVar2 = (*pcVar6)(arg1,iStack_60);
        iVar4 = 0x8000170;
        pcVar6 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar6);
        (*pcVar6)(arg1,iStack_60);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_set_grp_map;
    uVar3 = sym.scmi_set_ev_map(auVar7._0_8_,auVar7._8_8_,iVar4,0x13);
    return uVar3;
}


// ===== sym.scmi_set_grp_map @ 0x08001654 (size 44) =====

void sym.scmi_set_grp_map(int64_t arg1,int64_t arg3,int64_t arg2,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_ev_map(arg1,arg3,arg2,0x13);
    return;
}


// ===== sym.scmi_adaptive_low_freq @ 0x08001680 (size 48) =====

void sym.scmi_adaptive_low_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x14,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_adaptive_high_freq @ 0x080016b0 (size 48) =====

void sym.scmi_adaptive_high_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x15,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_get_adaptive_cur_freq @ 0x080016e0 (size 40) =====

void sym.scmi_get_adaptive_cur_freq(int64_t arg1,int64_t arg3,int64_t arg2,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_freq(arg1,arg3,arg2,arg4);
    return;
}


// ===== sym.scmi_set_common_map @ 0x08001708 (size 52) =====

void sym.scmi_set_common_map(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_ev_map(arg1,0xff,arg2,0x12);
    return;
}


// ===== sym.scmi_ipm_ceil @ 0x0800173c (size 48) =====

void sym.scmi_ipm_ceil(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x17,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_fe_stall_floor @ 0x0800176c (size 48) =====

void sym.scmi_fe_stall_floor(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x18,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_be_stall_floor @ 0x0800179c (size 48) =====

void sym.scmi_be_stall_floor(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x19,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_wb_pct_thres @ 0x080017cc (size 48) =====

void sym.scmi_wb_pct_thres(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x1a,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_wb_filter_ipm @ 0x080017fc (size 48) =====

void sym.scmi_wb_filter_ipm(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x1b,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_freq_scale_pct @ 0x0800182c (size 48) =====

void sym.scmi_freq_scale_pct(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x1c,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_freq_scale_ceil_mhz @ 0x0800185c (size 48) =====

void sym.scmi_freq_scale_ceil_mhz(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x1d,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_freq_scale_floor_mhz @ 0x0800188c (size 48) =====

void sym.scmi_freq_scale_floor_mhz(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x1e,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_set_sample_ms @ 0x080018bc (size 40) =====

void sym.scmi_set_sample_ms(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_global_var(arg1,arg2,0x1f);
    return;
}


// ===== sym.scmi_freq_map @ 0x080018e4 (size 380) =====

uint64_t sym.scmi_freq_map(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t in_x4;
    uint *puVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_50;
    int64_t iStack_48;
    
    uVar4 = arg4;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0;
    if (arg4 < 0xf) {
        uVar2 = arg3;
        pcVar8 = *(*(arg1 + 8) + 8);
        __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar8,0x8000310);
        arg3 = 0x7c;
        uVar3 = (*pcVar8)(arg1,0x20,0x7c,0x7c,&iStack_50);
        uVar7 = uVar3;
        if (uVar3 == 0) {
            puVar6 = *(iStack_50 + 0x18);
            *puVar6 = arg2;
            puVar6[1] = uVar2;
            puVar6[2] = arg4;
            if (arg4 != 0) {
                puVar5 = in_x4 + 4;
                puVar6 = puVar6 + 4;
                do {
                    uVar4 = uVar4 - 1;
                    puVar6[-1] = puVar5[-1];
                    *puVar6 = *puVar5;
                    puVar5 = puVar5 + 2;
                    puVar6 = puVar6 + 2;
                } while (uVar4 != 0);
            }
            pcVar8 = *(*(arg1 + 8) + 0x18);
            __cfi_slowpath_diag(0x282f982876cea641,pcVar8,0x8000330);
            uVar7 = (*pcVar8)(arg1,iStack_50);
            uVar7 = uVar7 & 0xffffffff;
            arg3 = 0x8000350;
            pcVar8 = *(*(arg1 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8);
            (*pcVar8)(arg1,iStack_50);
        }
    }
    else {
        uVar7 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_min_freq;
    uVar4 = sym.scmi_set_tunable(auVar9._0_8_,auVar9._8_8_,0x21,arg3 & 0xffffffff);
    return uVar4;
}


// ===== sym.scmi_min_freq @ 0x08001a60 (size 48) =====

void sym.scmi_min_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x21,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_max_freq @ 0x08001a90 (size 48) =====

void sym.scmi_max_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_tunable(arg1,in_x1,0x22,arg2 & 0xffffffff);
    return;
}


// ===== sym.scmi_get_cur_freq @ 0x08001ac0 (size 40) =====

void sym.scmi_get_cur_freq(int64_t arg1,int64_t arg3,int64_t arg2,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_get_freq(arg1,arg3,arg2,arg4);
    return;
}


// ===== sym.scmi_start_timer @ 0x08001ae8 (size 284) =====

uint64_t sym.scmi_start_timer(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar5;
    code *unaff_x21;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    code *pcStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    pcVar5 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x8000370);
    uVar2 = (*pcVar5)(arg1,0x24,0,0,&uStack_40);
    if (uVar2 == 0) {
        pcVar5 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x8000390);
        uVar2 = (*pcVar5)(arg1,uStack_40);
        unaff_x21 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,unaff_x21,0x80003b0);
        (*unaff_x21)(arg1,uStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_stop_timer;
    pcStack_68 = sym.scmi_stop_timer;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_80 = 0;
    pcVar5 = *(*(iVar3 + 8) + 8);
    puStack_70 = &stack0xffffffffffffffd0;
    pcStack_60 = unaff_x21;
    uStack_50 = uVar2;
    iStack_48 = arg1;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x8000370);
    uVar2 = (*pcVar5)(iVar3,0x25,0,0,&uStack_80);
    if (uVar2 == 0) {
        pcVar5 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x8000390);
        uVar2 = (*pcVar5)(iVar3,uStack_80);
        pcVar5 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar5,0x80003b0);
        (*pcVar5)(iVar3,uStack_80);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return uVar2;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.scmi_set_log_level;
    uVar4 = sym.scmi_set_global_var(auVar6._0_8_,auVar6._8_8_,3);
    return uVar4;
}


// ===== sym.scmi_stop_timer @ 0x08001c04 (size 284) =====

uint64_t sym.scmi_stop_timer(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    pcVar4 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar4,0x8000370);
    uVar2 = (*pcVar4)(arg1,0x25,0,0,&uStack_40);
    if (uVar2 == 0) {
        pcVar4 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar4,0x8000390);
        uVar2 = (*pcVar4)(arg1,uStack_40);
        pcVar4 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar4,0x80003b0);
        (*pcVar4)(arg1,uStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_set_log_level;
    uVar3 = sym.scmi_set_global_var(auVar5._0_8_,auVar5._8_8_,3);
    return uVar3;
}


// ===== sym.scmi_set_log_level @ 0x08001d20 (size 40) =====

void sym.scmi_set_log_level(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.scmi_set_global_var(arg1,arg2,3);
    return;
}


// ===== sym.scmi_flush_cpucp_log @ 0x08001d48 (size 284) =====

uint64_t sym.scmi_flush_cpucp_log(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uchar *puVar5;
    uint64_t uVar6;
    int iVar7;
    int *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar9;
    code *unaff_x21;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [12];
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    code *pcStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    pcVar9 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x8000370);
    uVar2 = (*pcVar9)(arg1,4,0,0,&uStack_40);
    if (uVar2 == 0) {
        pcVar9 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9,0x8000390);
        uVar2 = (*pcVar9)(arg1,uStack_40);
        unaff_x21 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,unaff_x21,0x80003b0);
        (*unaff_x21)(arg1,uStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar11 = __stack_chk_fail();
    iVar3 = auVar11._0_8_;
    iVar7 = &iStack_80;
    *extraout_x18 = sym.scmi_get_timestamp;
    pcStack_68 = sym.scmi_get_timestamp;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    iStack_80 = 0;
    pcVar9 = *(*(iVar3 + 8) + 8);
    puStack_70 = &stack0xffffffffffffffd0;
    pcStack_60 = unaff_x21;
    uStack_50 = uVar2;
    iStack_48 = arg1;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x80003d0);
    puVar5 = 0x4;
    uVar6 = 0x80;
    uVar4 = (*pcVar9)(iVar3,0x26,4,0x80);
    uVar10 = uVar4 & 0xffffffff;
    if (uVar4 == 0) {
        puVar5 = 0x80003f0;
        pcVar9 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9);
        uVar10 = (*pcVar9)(iVar3,iStack_80);
        if (*(iStack_80 + 0x30) == 8) {
            uVar10 = uVar10 & 0xffffffff;
            puVar5 = 0x8000410;
            *auVar11._8_8_ = **(iStack_80 + 0x28);
            pcVar9 = *(*(iVar3 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar9);
            (*pcVar9)(iVar3,iStack_80);
        }
        else {
            uVar10 = 0xffffffa6;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return uVar10;
    }
    auVar12 = __stack_chk_fail();
    iVar3 = auVar12._0_8_;
    *extraout_x18_00 = sym.scmi_set_ev_map;
    pcStack_b8 = sym.scmi_set_ev_map;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    iStack_d0 = 0;
    pcVar9 = *(*(iVar3 + 8) + 8);
    ppuStack_c0 = &puStack_70;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar9,0x8000190);
    uVar4 = (*pcVar9)(iVar3,uVar6 & 0xffffffff,0xc,0xc,&iStack_d0);
    if (uVar4 == 0) {
        piVar8 = *(iStack_d0 + 0x18);
        *piVar8 = iVar7;
        piVar8[1] = auVar12._8_4_;
        if ((((iVar7 != 0) && (*(piVar8 + 2) = *puVar5, iVar7 != 1)) && (*(piVar8 + 9) = puVar5[1], iVar7 != 2)) &&
           ((*(piVar8 + 10) = puVar5[2], iVar7 != 3 && (*(piVar8 + 0xb) = puVar5[3], iVar7 != 4))))
        goto code_r0x0800212c;
        pcVar9 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar9,0x80001b0);
        uVar4 = (*pcVar9)(iVar3,iStack_d0);
        pcVar9 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar9,0x80001d0);
        (*pcVar9)(iVar3,iStack_d0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return uVar4 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800212c:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x8002130);
    (*pcVar9)();
}


// ===== sym.scmi_get_timestamp @ 0x08001e64 (size 324) =====

int sym.scmi_get_timestamp(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    uint64_t uVar5;
    int iVar6;
    int *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [12];
    int64_t iStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_40;
    int64_t iStack_38;
    
    iVar6 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = 0;
    pcVar8 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar8,0x80003d0);
    puVar4 = 0x4;
    uVar5 = 0x80;
    iVar2 = (*pcVar8)(arg1,0x26,4,0x80);
    if (iVar2 == 0) {
        puVar4 = 0x80003f0;
        pcVar8 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar8);
        iVar2 = (*pcVar8)(arg1,iStack_40);
        if (*(iStack_40 + 0x30) == 8) {
            puVar4 = 0x8000410;
            *arg2 = **(iStack_40 + 0x28);
            pcVar8 = *(*(arg1 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8);
            (*pcVar8)(arg1,iStack_40);
        }
        else {
            iVar2 = -0x5a;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    *extraout_x18 = sym.scmi_set_ev_map;
    pcStack_78 = sym.scmi_set_ev_map;
    iVar1 = sp_el0;
    iStack_88 = *(iVar1 + 0x5e0);
    iStack_90 = 0;
    pcVar8 = *(*(iVar3 + 8) + 8);
    puStack_80 = &stack0xffffffffffffffd0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar8,0x8000190);
    iVar2 = (*pcVar8)(iVar3,uVar5 & 0xffffffff,0xc,0xc,&iStack_90);
    if (iVar2 == 0) {
        piVar7 = *(iStack_90 + 0x18);
        *piVar7 = iVar6;
        piVar7[1] = auVar9._8_4_;
        if ((((iVar6 != 0) && (*(piVar7 + 2) = *puVar4, iVar6 != 1)) && (*(piVar7 + 9) = puVar4[1], iVar6 != 2)) &&
           ((*(piVar7 + 10) = puVar4[2], iVar6 != 3 && (*(piVar7 + 0xb) = puVar4[3], iVar6 != 4))))
        goto code_r0x0800212c;
        pcVar8 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar8,0x80001b0);
        iVar2 = (*pcVar8)(iVar3,iStack_90);
        pcVar8 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8,0x80001d0);
        (*pcVar8)(iVar3,iStack_90);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_88) {
        return iVar2;
    }
    __stack_chk_fail();
code_r0x0800212c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8002130);
    (*pcVar8)();
}


// ===== sym.scmi_set_ev_map @ 0x08001fa8 (size 392) =====

int sym.scmi_set_ev_map(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int in_w4;
    int *piVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0;
    pcVar4 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar4,0x8000190);
    iVar2 = (*pcVar4)(arg1,arg4 & 0xffffffff,0xc,0xc,&iStack_50);
    if (iVar2 == 0) {
        piVar3 = *(iStack_50 + 0x18);
        *piVar3 = in_w4;
        piVar3[1] = arg2;
        if ((((in_w4 != 0) && (*(piVar3 + 2) = *arg3, in_w4 != 1)) && (*(piVar3 + 9) = *(arg3 + 1), in_w4 != 2)) &&
           ((*(piVar3 + 10) = *(arg3 + 2), in_w4 != 3 && (*(piVar3 + 0xb) = *(arg3 + 3), in_w4 != 4))))
        goto code_r0x0800212c;
        pcVar4 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar4,0x80001b0);
        iVar2 = (*pcVar4)(arg1,iStack_50);
        pcVar4 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar4,0x80001d0);
        (*pcVar4)(arg1,iStack_50);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return iVar2;
    }
    __stack_chk_fail();
code_r0x0800212c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8002130);
    (*pcVar4)();
}


// ===== sym.scmi_set_tunable @ 0x08002130 (size 324) =====

uchar * sym.scmi_set_tunable(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    code *pcVar8;
    uint32_t in_w4;
    int64_t *piVar9;
    uint *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar11;
    uchar *puVar12;
    code *pcVar13;
    code *pcVar14;
    ulong unaff_x30;
    uchar auVar15 [12];
    uchar auVar16 [16];
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uchar *puStack_b8;
    code *pcStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    code *pcStack_80;
    uchar *puStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    code *pcStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    piVar9 = &iStack_50;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    pcVar11 = in_w4;
    iStack_50 = 0;
    pcVar13 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar13,0x80001f0);
    uVar6 = 0xc;
    pcVar8 = 0xc;
    uVar2 = (*pcVar13)(arg1,arg3 & 0xffffffff,0xc,0xc,&iStack_50);
    if (uVar2 == 0) {
        puVar10 = *(iStack_50 + 0x18);
        *puVar10 = arg2;
        puVar10[1] = arg4;
        puVar10[2] = in_w4;
        pcVar11 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar11,0x8000210);
        uVar2 = (*pcVar11)(arg1,iStack_50);
        uVar6 = 0x8000230;
        pcVar11 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar11);
        (*pcVar11)(arg1,iStack_50);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return uVar2;
    }
    auVar15 = __stack_chk_fail();
    iVar3 = auVar15._0_8_;
    *extraout_x18 = sym.scmi_get_freq;
    pcStack_88 = sym.scmi_get_freq;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    iStack_a0 = 0;
    pcVar14 = *(*(iVar3 + 8) + 8);
    puStack_90 = &stack0xffffffffffffffc0;
    pcStack_80 = pcVar13;
    puStack_78 = uVar2;
    uStack_70 = arg2 & 0xffffffff;
    uStack_68 = arg4 & 0xffffffff;
    pcStack_60 = pcVar11;
    iStack_58 = arg1;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar14,0x8000250);
    uVar7 = 0xc;
    uVar2 = (*pcVar14)(iVar3,piVar9 & 0xffffffff,0xc,0x80,&iStack_a0);
    puVar12 = uVar2;
    if (uVar2 == 0) {
        uVar7 = 0x8000270;
        puVar10 = *(iStack_a0 + 0x18);
        *puVar10 = auVar15._8_4_;
        puVar10[1] = uVar6;
        pcVar11 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar11,0x8000270);
        uVar4 = (*pcVar11)(iVar3,iStack_a0);
        if (*(iStack_a0 + 0x30) == 4) {
            puVar12 = uVar4 & 0xffffffff;
            uVar7 = 0x8000290;
            *pcVar8 = **(iStack_a0 + 0x28);
            pcVar8 = *(*(iVar3 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8,0x8000290);
            (*pcVar8)(iVar3,iStack_a0);
        }
        else {
            puVar12 = 0xffffffa6;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_98) {
        auVar15 = __stack_chk_fail();
        iVar5 = auVar15._0_8_;
        *extraout_x18_00 = sym.scmi_set_global_var;
        pcStack_c8 = sym.scmi_set_global_var;
        iVar1 = sp_el0;
        iStack_d8 = *(iVar1 + 0x5e0);
        iStack_e0 = 0;
        pcVar11 = *(*(iVar5 + 8) + 8);
        ppuStack_d0 = &puStack_90;
        uStack_c0 = uVar6 & 0xffffffff;
        puStack_b8 = puVar12;
        pcStack_b0 = pcVar8;
        iStack_a8 = iVar3;
        __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar11,0x80002b0);
        uVar2 = (*pcVar11)(iVar5,uVar7 & 0xffffffff,4,4,&iStack_e0);
        if (uVar2 == 0) {
            **(iStack_e0 + 0x18) = auVar15._8_4_;
            pcVar8 = *(*(iVar5 + 8) + 0x18);
            __cfi_slowpath_diag(0x282f982876cea641,pcVar8,0x80002d0);
            uVar2 = (*pcVar8)(iVar5,iStack_e0);
            pcVar8 = *(*(iVar5 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8,0x80002f0);
            (*pcVar8)(iVar5,iStack_e0);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_d8) {
            auVar16 = __stack_chk_fail();
            puVar12 = auVar16._0_8_;
            *extraout_x18_01 = sym.__cfi_check_fail;
            if (puVar12 != NULL) {
                switch(*puVar12) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar12,auVar16._8_8_,0);
                    break;
                default:
                    return puVar12;
                }
            }
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x5502,0x8002560);
            (*pcVar8)();
        }
        return uVar2;
    }
    return puVar12;
}


// ===== sym.scmi_get_freq @ 0x08002274 (size 356) =====

uchar * sym.scmi_get_freq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint in_w4;
    uint *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uchar *puVar7;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [12];
    uchar auVar10 [16];
    int64_t iStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    uchar *puStack_68;
    code *pcStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0;
    pcVar8 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar8,0x8000250);
    uVar5 = 0xc;
    uVar2 = (*pcVar8)(arg1,in_w4,0xc,0x80,&iStack_50);
    puVar7 = uVar2;
    if (uVar2 == 0) {
        uVar5 = 0x8000270;
        puVar6 = *(iStack_50 + 0x18);
        *puVar6 = arg2;
        puVar6[1] = arg3;
        pcVar8 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar8,0x8000270);
        uVar3 = (*pcVar8)(arg1,iStack_50);
        if (*(iStack_50 + 0x30) == 4) {
            puVar7 = uVar3 & 0xffffffff;
            uVar5 = 0x8000290;
            *arg4 = **(iStack_50 + 0x28);
            arg4 = *(*(arg1 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,arg4,0x8000290);
            (*arg4)(arg1,iStack_50);
        }
        else {
            puVar7 = 0xffffffa6;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar9 = __stack_chk_fail();
        iVar4 = auVar9._0_8_;
        *extraout_x18 = sym.scmi_set_global_var;
        pcStack_78 = sym.scmi_set_global_var;
        iVar1 = sp_el0;
        iStack_88 = *(iVar1 + 0x5e0);
        iStack_90 = 0;
        pcVar8 = *(*(iVar4 + 8) + 8);
        puStack_80 = &stack0xffffffffffffffc0;
        uStack_70 = arg3 & 0xffffffff;
        puStack_68 = puVar7;
        pcStack_60 = arg4;
        iStack_58 = arg1;
        __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar8,0x80002b0);
        uVar2 = (*pcVar8)(iVar4,uVar5 & 0xffffffff,4,4,&iStack_90);
        if (uVar2 == 0) {
            **(iStack_90 + 0x18) = auVar9._8_4_;
            pcVar8 = *(*(iVar4 + 8) + 0x18);
            __cfi_slowpath_diag(0x282f982876cea641,pcVar8,0x80002d0);
            uVar2 = (*pcVar8)(iVar4,iStack_90);
            pcVar8 = *(*(iVar4 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar8,0x80002f0);
            (*pcVar8)(iVar4,iStack_90);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_88) {
            auVar10 = __stack_chk_fail();
            puVar7 = auVar10._0_8_;
            *extraout_x18_00 = sym.__cfi_check_fail;
            if (puVar7 != NULL) {
                switch(*puVar7) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar7,auVar10._8_8_,0);
                    break;
                default:
                    return puVar7;
                }
            }
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x5502,0x8002560);
            (*pcVar8)();
        }
        return uVar2;
    }
    return puVar7;
}


// ===== sym.scmi_set_global_var @ 0x080023d8 (size 304) =====

uchar * sym.scmi_set_global_var(int64_t arg1,int64_t arg2,int64_t arg3)

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
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar4,0x80002b0);
    uVar2 = (*pcVar4)(arg1,arg3 & 0xffffffff,4,4,&iStack_40);
    if (uVar2 == 0) {
        **(iStack_40 + 0x18) = arg2;
        pcVar4 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar4,0x80002d0);
        uVar2 = (*pcVar4)(arg1,iStack_40);
        pcVar4 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar4,0x80002f0);
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
        pcVar4 = SoftwareBreakpoint(0x5502,0x8002560);
        (*pcVar4)();
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x08002508 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800254c

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
    //switch table (4 cases) at 0x8000430
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002560);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002564 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_register(obj.scmi_memlat_vendor);
    return;
}


// ===== sym.cleanup_module @ 0x08002590 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_unregister(obj.scmi_memlat_vendor);
    return;
}

