// decompiled from stm_p_ost by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 136) =====

//WARNING: Switch with 1 destination removed at 0x080012a4

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar2 = arg1;
    if (uVar2 == 0x2b3a43e29242445) {
        uVar3 = 0x80010a0;
    }
    else if (uVar2 == 0x385a013b97bc5986) {
        uVar3 = 0x8001090;
    }
    else {
        if (uVar2 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001264;
        uVar3 = 0x8001098;
    }
    if (arg2 == uVar3) {
        return;
    }
code_r0x08001264:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012b8);
    (*pcVar1)();
}


// ===== sym.ost_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001090 (size 8) =====

uchar * sym.ost_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,int64_t param_2,int param_3,ulong param_4,ulong param_5)

{
    uint uVar1;
    int64_t iVar2;
    ulong uVar3;
    code *pcVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint uStack_68;
    uchar auStack_64 [4];
    uint uStack_60;
    uint uStack_5c;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uVar1 = *(param_2 + 4);
    auStack_64[0] = 0;
    uStack_68 = 0x11010;
    param_3 = *(param_2 + 8) + param_3;
    puVar5 = (**(param_1 + 0x28))(param_1,uVar1,param_3,0,1,4,&uStack_68);
    if (0 < puVar5) {
        uStack_60 = 0x59530003;
        iVar2 = tpidr_el1;
        uStack_5c = *(cpu_number + iVar2);
        uStack_58 = sched_clock();
        iVar2 = sp_el0;
        iStack_50 = *(iVar2 + 0x5dc);
        puVar5 = stm_data_write(param_1,uVar1,param_3,0,&uStack_60,0x18);
        if ((0 < puVar5) && (puVar5 = stm_data_write(param_1,uVar1,param_3,0,param_4,param_5), 0 < puVar5)) {
            (**(param_1 + 0x28))(param_1,uVar1,param_3,1,2,0,auStack_64);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail();
        puVar5 = auVar6._0_8_;
        uVar3 = tpidr_el2;
        *extraout_x18 = 0x800125c;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar6._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5502,0x80012b8);
        (*pcVar4)();
    }
    return puVar5;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001098 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_unregister_protocol(reloc.__this_module);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010a0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_register_protocol(reloc.__this_module);
    return;
}


// ===== sym.init_module @ 0x080010a8 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_register_protocol(reloc.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080010d4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_unregister_protocol(reloc.__this_module);
    return;
}


// ===== sym.ost_write @ 0x08001100 (size 352) =====

uchar * sym.ost_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong uVar4;
    code *pcVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint uStack_68;
    uchar auStack_64 [4];
    uint uStack_60;
    uint uStack_5c;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uVar2 = *(arg2 + 4);
    auStack_64[0] = 0;
    uStack_68 = 0x11010;
    iVar1 = *(arg2 + 8) + arg3;
    puVar6 = (**(arg1 + 0x28))(arg1,uVar2,iVar1,0,1,4,&stack0xffffffffffffff98);
    if (0 < puVar6) {
        uStack_60 = 0x59530003;
        iVar3 = tpidr_el1;
        uStack_5c = *(cpu_number + iVar3);
        uStack_58 = sched_clock();
        iVar3 = sp_el0;
        iStack_50 = *(iVar3 + 0x5dc);
        puVar6 = stm_data_write(arg1,uVar2,iVar1,0,&stack0xffffffffffffffa0,0x18);
        if ((0 < puVar6) && (puVar6 = stm_data_write(arg1,uVar2,iVar1,0,arg4), 0 < puVar6)) {
            (**(arg1 + 0x28))(arg1,uVar2,iVar1,1,2,0,&stack0xffffffffffffff9c);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        auVar7 = __stack_chk_fail();
        puVar6 = auVar7._0_8_;
        uVar4 = tpidr_el2;
        *extraout_x18 = 0x800125c;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar7._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x80012b8);
        (*pcVar5)();
    }
    return puVar6;
}


// ===== sym.__cfi_check_fail @ 0x08001260 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080012a4

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
    //switch table (4 cases) at 0x8000050
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012b8);
    (*pcVar1)();
}

