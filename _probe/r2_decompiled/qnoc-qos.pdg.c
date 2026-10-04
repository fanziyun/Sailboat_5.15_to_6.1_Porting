// decompiled from qnoc-qos by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 64) =====

//WARNING: Switch with 1 destination removed at 0x0800119c

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((arg1 == 0x5be4ec59ae83617c) && (arg2 == 0x8001048)) {
        return;
    }
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80011b0);
    (*pcVar1)();
}


// ===== sym.qcom_icc_set_qos.4c67a478b4fde06e65dc103dd330a57e.cfi_jt @ 0x08001048 (size 8) =====

void sym.qcom_icc_set_qos.4c67a478b4fde06e65dc103dd330a57e.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t *puVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x168);
    if (((iVar2 != 0) && (puVar3 = *(param_1 + 0x170), puVar3 != NULL)) && (*puVar3 != 0)) {
        uVar4 = 1;
        while( true ) {
            iVar1 = uVar4 - 1;
            regmap_update_bits_base
                      (iVar2,puVar3[iVar1 + 8] + **(puVar3 + 2),0x1000000,*(*(puVar3 + 6) + 8) << 0x18,0,0,0);
            regmap_update_bits_base
                      (*(param_1 + 0x168),puVar3[iVar1 + 8] + **(puVar3 + 2),0x70,**(puVar3 + 6) << 4,0,0,0);
            regmap_update_bits_base
                      (*(param_1 + 0x168),puVar3[iVar1 + 8] + **(puVar3 + 2),8,*(*(puVar3 + 6) + 4) << 3,0,0,0);
            if (*puVar3 <= uVar4) break;
            iVar2 = *(param_1 + 0x168);
            uVar4 = uVar4 + 1;
        }
    }
    return;
}


// ===== sym.qcom_icc_set_qos @ 0x08001050 (size 264) =====

void sym.qcom_icc_set_qos(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t *puVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x168);
    if (((iVar2 != 0) && (puVar3 = *(arg1 + 0x170), puVar3 != NULL)) && (*puVar3 != 0)) {
        uVar4 = 1;
        while( true ) {
            iVar1 = uVar4 - 1;
            regmap_update_bits_base
                      (iVar2,puVar3[iVar1 + 8] + **(puVar3 + 2),0x1000000,*(*(puVar3 + 6) + 8) << 0x18,0,0,0);
            regmap_update_bits_base
                      (*(arg1 + 0x168),puVar3[iVar1 + 8] + **(puVar3 + 2),0x70,**(puVar3 + 6) << 4,0,0,0);
            regmap_update_bits_base
                      (*(arg1 + 0x168),puVar3[iVar1 + 8] + **(puVar3 + 2),8,*(*(puVar3 + 6) + 4) << 3,0,0,0);
            if (*puVar3 <= uVar4) break;
            iVar2 = *(arg1 + 0x168);
            uVar4 = uVar4 + 1;
        }
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001158 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800119c

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x80011b0);
    (*pcVar1)();
}

