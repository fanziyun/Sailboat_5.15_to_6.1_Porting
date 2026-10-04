// decompiled from stm_p_basic by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 136) =====

//WARNING: Switch with 1 destination removed at 0x08001224

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar2 = arg1;
    if (uVar2 == 0x2b3a43e29242445) {
        uVar3 = 0x8001098;
    }
    else if (uVar2 == 0x385a013b97bc5986) {
        uVar3 = 0x80010a0;
    }
    else {
        if (uVar2 != 0x7e04a0fb7ad8bcd5) goto code_r0x080011e4;
        uVar3 = 0x8001090;
    }
    if (arg2 == uVar3) {
        return;
    }
code_r0x080011e4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001238);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001090 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_unregister_protocol(reloc.__this_module);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001098 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    stm_register_protocol(reloc.__this_module);
    return;
}


// ===== sym.basic_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010a0 (size 8) =====

uchar * sym.basic_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,int64_t param_2,int param_3,ulong param_4,ulong param_5)

{
    uint uVar1;
    int64_t iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uVar1 = *(param_2 + 4);
    auStack_4c[0] = 0;
    param_3 = *(param_2 + 8) + param_3;
    puVar3 = stm_data_write(param_1,uVar1,param_3,1,param_4,param_5);
    if (0 < puVar3) {
        pcVar4 = *(param_1 + 0x28);
        __cfi_slowpath_diag(0x8e7df4cec2cf72c,pcVar4,0x8000040);
        (*pcVar4)(param_1,uVar1,param_3,1,0,0,auStack_4c);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_48) {
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
        pcVar4 = SoftwareBreakpoint(0x5502,0x8001238);
        (*pcVar4)();
    }
    return puVar3;
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


// ===== sym.basic_write @ 0x08001100 (size 224) =====

uchar * sym.basic_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uVar2 = *(arg2 + 4);
    auStack_4c[0] = 0;
    iVar1 = *(arg2 + 8) + arg3;
    puVar4 = stm_data_write(arg1,uVar2,iVar1,1,arg4);
    if (0 < puVar4) {
        pcVar5 = *(arg1 + 0x28);
        __cfi_slowpath_diag(0x8e7df4cec2cf72c,pcVar5,0x8000040);
        (*pcVar5)(arg1,uVar2,iVar1,1,0,0,auStack_4c);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8001238);
        (*pcVar5)();
    }
    return puVar4;
}


// ===== sym.__cfi_check_fail @ 0x080011e0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001224

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
    //switch table (4 cases) at 0x8000060
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001238);
    (*pcVar1)();
}

