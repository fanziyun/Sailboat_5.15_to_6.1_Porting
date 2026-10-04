// decompiled from cpufreq_stats_vendor by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x08001450

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x376863d1de02459b) {
        if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x8001100;
        }
        else {
            if (arg1 != 0x17f4128a1da16962) goto code_r0x08001410;
            uVar2 = 0x80010f0;
        }
    }
    else if (arg1 == 0x376863d1de02459b) {
        uVar2 = 0x8001108;
    }
    else if (arg1 == 0x6ac5a6004ef664b6) {
        uVar2 = 0x8001110;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001410;
        uVar2 = 0x80010f8;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001410:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001464);
    (*pcVar1)();
}


// ===== sym.scmi_set_log_level.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f0 (size 8) =====

uchar * sym.scmi_set_log_level.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint param_2)

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
    pcVar4 = *(*(param_1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar4,0x80000d0);
    uVar2 = (*pcVar4)(param_1,3,4,4,&iStack_40);
    if (uVar2 == 0) {
        **(iStack_40 + 0x18) = param_2;
        pcVar4 = *(*(param_1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar4,0x80000f0);
        uVar2 = (*pcVar4)(param_1,iStack_40);
        pcVar4 = *(*(param_1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar4,0x8000110);
        (*pcVar4)(param_1,iStack_40);
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
        pcVar4 = SoftwareBreakpoint(0x5502,0x8001464);
        (*pcVar4)();
    }
    return uVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_unregister(obj.scmi_cpufreq_stats);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_register(obj.scmi_cpufreq_stats);
    return;
}


// ===== sym.scmi_get_cpufreq_stats_info.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001108 (size 8) =====

uchar * sym.scmi_get_cpufreq_stats_info.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,code *param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [12];
    uchar auVar7 [16];
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uchar *puStack_60;
    code *pcStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = 0;
    pcVar5 = *(*(param_1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x8000070);
    uVar2 = (*pcVar5)(param_1,0x10,0x10,0x80,&iStack_40);
    if (uVar2 == 0) {
        pcVar5 = *(*(param_1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x8000090);
        uVar2 = (*pcVar5)(param_1,iStack_40);
        if (uVar2 == 0) {
            memcpy(param_2,*(iStack_40 + 0x28),*(iStack_40 + 0x30));
        }
        param_2 = *(*(param_1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,param_2,0x80000b0);
        (*param_2)(param_1,iStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        iVar3 = auVar6._0_8_;
        *extraout_x18 = sym.scmi_set_log_level;
        pcStack_68 = sym.scmi_set_log_level;
        iVar1 = sp_el0;
        iStack_78 = *(iVar1 + 0x5e0);
        iStack_80 = 0;
        pcVar5 = *(*(iVar3 + 8) + 8);
        puStack_70 = &stack0xffffffffffffffd0;
        puStack_60 = uVar2;
        pcStack_50 = param_2;
        iStack_48 = param_1;
        __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x80000d0);
        uVar2 = (*pcVar5)(iVar3,3,4,4,&iStack_80);
        if (uVar2 == 0) {
            **(iStack_80 + 0x18) = auVar6._8_4_;
            pcVar5 = *(*(iVar3 + 8) + 0x18);
            __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x80000f0);
            uVar2 = (*pcVar5)(iVar3,iStack_80);
            pcVar5 = *(*(iVar3 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar5,0x8000110);
            (*pcVar5)(iVar3,iStack_80);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_78) {
            auVar7 = __stack_chk_fail();
            puVar4 = auVar7._0_8_;
            *extraout_x18_00 = sym.__cfi_check_fail;
            if (puVar4 != NULL) {
                switch(*puVar4) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar4,auVar7._8_8_,0);
                    break;
                default:
                    return puVar4;
                }
            }
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5502,0x8001464);
            (*pcVar5)();
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.scmi_cpufreq_stats_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001110 (size 8) =====

uchar * sym.scmi_cpufreq_stats_protocol_init.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar6;
    code *pcVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auVar9 [12];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uchar *puStack_90;
    code *pcStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    pcVar6 = **(param_1 + 8);
    __cfi_slowpath_diag(0x8a421e33b511c627,pcVar6,0x8000050);
    (*pcVar6)(param_1,&uStack_2c);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return NULL;
    }
    auVar8 = __stack_chk_fail();
    pcVar6 = auVar8._8_8_;
    iVar3 = auVar8._0_8_;
    *extraout_x18 = sym.scmi_get_cpufreq_stats_info;
    pcStack_58 = sym.scmi_get_cpufreq_stats_info;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_70 = 0;
    pcVar7 = *(*(iVar3 + 8) + 8);
    puStack_60 = &stack0xffffffffffffffe0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar7,0x8000070);
    uVar2 = (*pcVar7)(iVar3,0x10,0x10,0x80,&iStack_70);
    if (uVar2 == 0) {
        pcVar7 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar7,0x8000090);
        uVar2 = (*pcVar7)(iVar3,iStack_70);
        if (uVar2 == 0) {
            memcpy(pcVar6,*(iStack_70 + 0x28),*(iStack_70 + 0x30));
        }
        pcVar6 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar6,0x80000b0);
        (*pcVar6)(iVar3,iStack_70);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        auVar9 = __stack_chk_fail();
        iVar4 = auVar9._0_8_;
        *extraout_x18_00 = sym.scmi_set_log_level;
        pcStack_98 = sym.scmi_set_log_level;
        iVar1 = sp_el0;
        iStack_a8 = *(iVar1 + 0x5e0);
        iStack_b0 = 0;
        pcVar7 = *(*(iVar4 + 8) + 8);
        ppuStack_a0 = &puStack_60;
        puStack_90 = uVar2;
        pcStack_80 = pcVar6;
        iStack_78 = iVar3;
        __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar7,0x80000d0);
        uVar2 = (*pcVar7)(iVar4,3,4,4,&iStack_b0);
        if (uVar2 == 0) {
            **(iStack_b0 + 0x18) = auVar9._8_4_;
            pcVar6 = *(*(iVar4 + 8) + 0x18);
            __cfi_slowpath_diag(0x282f982876cea641,pcVar6,0x80000f0);
            uVar2 = (*pcVar6)(iVar4,iStack_b0);
            pcVar6 = *(*(iVar4 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar6,0x8000110);
            (*pcVar6)(iVar4,iStack_b0);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_a8) {
            auVar8 = __stack_chk_fail();
            puVar5 = auVar8._0_8_;
            *extraout_x18_01 = sym.__cfi_check_fail;
            if (puVar5 != NULL) {
                switch(*puVar5) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                    break;
                default:
                    return puVar5;
                }
            }
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5502,0x8001464);
            (*pcVar6)();
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.scmi_cpufreq_stats_protocol_init @ 0x08001118 (size 148) =====

uchar * sym.scmi_cpufreq_stats_protocol_init(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar6;
    code *pcVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auVar9 [12];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uchar *puStack_90;
    code *pcStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    pcVar6 = **(arg1 + 8);
    __cfi_slowpath_diag(0x8a421e33b511c627,pcVar6,0x8000050);
    (*pcVar6)(arg1,&uStack_2c);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return NULL;
    }
    auVar8 = __stack_chk_fail();
    pcVar6 = auVar8._8_8_;
    iVar3 = auVar8._0_8_;
    *extraout_x18 = sym.scmi_get_cpufreq_stats_info;
    pcStack_58 = sym.scmi_get_cpufreq_stats_info;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iStack_70 = 0;
    pcVar7 = *(*(iVar3 + 8) + 8);
    puStack_60 = &stack0xffffffffffffffe0;
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar7,0x8000070);
    uVar2 = (*pcVar7)(iVar3,0x10,0x10,0x80,&iStack_70);
    if (uVar2 == 0) {
        pcVar7 = *(*(iVar3 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar7,0x8000090);
        uVar2 = (*pcVar7)(iVar3,iStack_70);
        if (uVar2 == 0) {
            memcpy(pcVar6,*(iStack_70 + 0x28),*(iStack_70 + 0x30));
        }
        pcVar6 = *(*(iVar3 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar6,0x80000b0);
        (*pcVar6)(iVar3,iStack_70);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        auVar9 = __stack_chk_fail();
        iVar4 = auVar9._0_8_;
        *extraout_x18_00 = sym.scmi_set_log_level;
        pcStack_98 = sym.scmi_set_log_level;
        iVar1 = sp_el0;
        iStack_a8 = *(iVar1 + 0x5e0);
        iStack_b0 = 0;
        pcVar7 = *(*(iVar4 + 8) + 8);
        ppuStack_a0 = &puStack_60;
        puStack_90 = uVar2;
        pcStack_80 = pcVar6;
        iStack_78 = iVar3;
        __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar7,0x80000d0);
        uVar2 = (*pcVar7)(iVar4,3,4,4,&iStack_b0);
        if (uVar2 == 0) {
            **(iStack_b0 + 0x18) = auVar9._8_4_;
            pcVar6 = *(*(iVar4 + 8) + 0x18);
            __cfi_slowpath_diag(0x282f982876cea641,pcVar6,0x80000f0);
            uVar2 = (*pcVar6)(iVar4,iStack_b0);
            pcVar6 = *(*(iVar4 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar6,0x8000110);
            (*pcVar6)(iVar4,iStack_b0);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_a8) {
            auVar8 = __stack_chk_fail();
            puVar5 = auVar8._0_8_;
            *extraout_x18_01 = sym.__cfi_check_fail;
            if (puVar5 != NULL) {
                switch(*puVar5) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                    break;
                default:
                    return puVar5;
                }
            }
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5502,0x8001464);
            (*pcVar6)();
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.scmi_get_cpufreq_stats_info @ 0x080011ac (size 308) =====

uchar * sym.scmi_get_cpufreq_stats_info(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [12];
    uchar auVar7 [16];
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uchar *puStack_60;
    code *pcStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = 0;
    pcVar5 = *(*(arg1 + 8) + 8);
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x8000070);
    uVar2 = (*pcVar5)(arg1,0x10,0x10,0x80,&iStack_40);
    if (uVar2 == 0) {
        pcVar5 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x8000090);
        uVar2 = (*pcVar5)(arg1,iStack_40);
        if (uVar2 == 0) {
            memcpy(arg2,*(iStack_40 + 0x28),*(iStack_40 + 0x30));
        }
        arg2 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,arg2,0x80000b0);
        (*arg2)(arg1,iStack_40);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        iVar3 = auVar6._0_8_;
        *extraout_x18 = sym.scmi_set_log_level;
        pcStack_68 = sym.scmi_set_log_level;
        iVar1 = sp_el0;
        iStack_78 = *(iVar1 + 0x5e0);
        iStack_80 = 0;
        pcVar5 = *(*(iVar3 + 8) + 8);
        puStack_70 = &stack0xffffffffffffffd0;
        puStack_60 = uVar2;
        pcStack_50 = arg2;
        iStack_48 = arg1;
        __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar5,0x80000d0);
        uVar2 = (*pcVar5)(iVar3,3,4,4,&iStack_80);
        if (uVar2 == 0) {
            **(iStack_80 + 0x18) = auVar6._8_4_;
            pcVar5 = *(*(iVar3 + 8) + 0x18);
            __cfi_slowpath_diag(0x282f982876cea641,pcVar5,0x80000f0);
            uVar2 = (*pcVar5)(iVar3,iStack_80);
            pcVar5 = *(*(iVar3 + 8) + 0x28);
            __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar5,0x8000110);
            (*pcVar5)(iVar3,iStack_80);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) != iStack_78) {
            auVar7 = __stack_chk_fail();
            puVar4 = auVar7._0_8_;
            *extraout_x18_00 = sym.__cfi_check_fail;
            if (puVar4 != NULL) {
                switch(*puVar4) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar4,auVar7._8_8_,0);
                    break;
                default:
                    return puVar4;
                }
            }
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5502,0x8001464);
            (*pcVar5)();
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.scmi_set_log_level @ 0x080012e0 (size 300) =====

uchar * sym.scmi_set_log_level(int64_t arg1,int64_t arg2)

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
    __cfi_slowpath_diag(0xbde264cd4745b53b,pcVar4,0x80000d0);
    uVar2 = (*pcVar4)(arg1,3,4,4,&iStack_40);
    if (uVar2 == 0) {
        **(iStack_40 + 0x18) = arg2;
        pcVar4 = *(*(arg1 + 8) + 0x18);
        __cfi_slowpath_diag(0x282f982876cea641,pcVar4,0x80000f0);
        uVar2 = (*pcVar4)(arg1,iStack_40);
        pcVar4 = *(*(arg1 + 8) + 0x28);
        __cfi_slowpath_diag(0xbc738b94c3bb4c42,pcVar4,0x8000110);
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
        pcVar4 = SoftwareBreakpoint(0x5502,0x8001464);
        (*pcVar4)();
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x0800140c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001450

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
    //switch table (4 cases) at 0x8000130
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001464);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001474 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_register(obj.scmi_cpufreq_stats);
    return;
}


// ===== sym.cleanup_module @ 0x080014a0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_protocol_unregister(obj.scmi_cpufreq_stats);
    return;
}

