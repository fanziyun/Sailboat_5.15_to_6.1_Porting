// decompiled from crypto-qti-hwkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x08001618

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x5f64418bd0a17dcc) {
        if (arg1 == -0x686df4c2ac369e2b) {
            uVar2 = 0x80010d8;
        }
        else {
            if (arg1 != -0x2969cde9f0ceb5b3) goto code_r0x080015d8;
            uVar2 = 0x80010e8;
        }
    }
    else if (arg1 == 0x5f64418bd0a17dcc) {
        uVar2 = 0x80010e0;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080015d8;
        uVar2 = 0x80010d0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080015d8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800162c);
    (*pcVar1)();
}


// ===== sym.crypto_qti_disable_platform.cfi_jt @ 0x080010d0 (size 8) =====

void sym.crypto_qti_disable_platform.cfi_jt(void)

{
    obj.qti_hwkm_init_done = 0x0;
    return;
}


// ===== sym.crypto_qti_invalidate_key.cfi_jt @ 0x080010d8 (size 8) =====

int sym.crypto_qti_invalidate_key.cfi_jt(ulong param_1,int param_2)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.qti_hwkm_init_done == 0x1) {
        iVar1 = qcom_scm_clear_ice_key(param_2 << 1,0);
        iVar2 = 0;
        if (iVar1 != 0) {
            _printk(0x80000ff,"crypto_qti_hwkm_evict_slot",iVar1);
            _printk(0x800011a,"crypto_qti_invalidate_key",iVar1,param_2);
            iVar2 = iVar1;
        }
    }
    else {
        iVar2 = 0;
    }
    return iVar2;
}


// ===== sym.crypto_qti_program_key.cfi_jt @ 0x080010e0 (size 8) =====

uint64_t sym.crypto_qti_program_key.cfi_jt
                   (int64_t *param_1,int64_t param_2,int param_3,uint32_t param_4,uint32_t param_5)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uVar3 = *(param_2 + 0x14);
    if (uVar3 < 0x21) {
        uVar5 = 0x80002a4;
code_r0x08001444:
        _printk(uVar5,"crypto_qti_program_key",uVar3);
        uVar7 = 0xffffffea;
    }
    else {
        if ((obj.qti_hwkm_init_done & 1) == 0) {
            uVar3 = qti_hwkm_init(param_1);
            if (uVar3 != 0) {
                uVar5 = 0x80001a2;
                goto code_r0x08001444;
            }
            obj.qti_hwkm_init_done = 0x1;
        }
        uVar8 = param_3 * 0x80 + 0x4040;
        sym.writel_relaxed(0,*param_1 + uVar8);
        DataSynchronizationBarrier(3,2,0);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        iVar4 = qtee_shmbridge_allocate_shm(*(param_2 + 0x14),&uStack_70);
        if (iVar4 == 0) {
            memcpy(uStack_68,param_2 + 0x18,*(param_2 + 0x14));
            qtee_shmbridge_flush_shm_buf(&uStack_70);
            uVar3 = qcom_scm_config_set_ice_key(param_3 << 1,uStack_70,*(param_2 + 0x14),0,0,0);
            uVar7 = uVar3;
            if (uVar3 == 0) {
                qtee_shmbridge_inv_shm_buf(&uStack_70);
                qtee_shmbridge_free_shm(&uStack_70);
                sym.writel_relaxed(param_4 & 0xff | (param_5 & 0xff) << 8 | 0x80000000,*param_1 + uVar8);
                DataSynchronizationBarrier(3,2,0);
                goto code_r0x0800134c;
            }
            _printk(0x80000cb,"crypto_qti_program_hwkm_tz",uVar7);
            _printk(0x8000085,"print_key",param_3 << 1);
            if (*(param_2 + 0x14) != 0) {
                uVar8 = 0;
                do {
                    if (uVar8 == 0x80) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x800145c);
                        (*pcVar2)();
                    }
                    _printk(0x800028d,uVar8 & 0xffffffff,*(param_2 + 0x18 + uVar8));
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(param_2 + 0x14));
            }
            qtee_shmbridge_inv_shm_buf(&uStack_70);
            qtee_shmbridge_free_shm(&uStack_70);
        }
        else {
            uVar7 = 0xfffffff4;
        }
        _printk(0x8000205,"crypto_qti_program_key",uVar7);
    }
code_r0x0800134c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    auVar9 = __stack_chk_fail();
    puVar6 = auVar9._8_8_;
    *extraout_x18 = sym.writel_relaxed;
    uVar7 = auVar9._0_8_ & 0xffffffff;
    log_write_mmio(uVar7,0x20,puVar6,0x800147c);
    *puVar6 = auVar9._0_4_;
    uVar7 = log_post_write_mmio(uVar7,0x20,puVar6,0x80014a4);
    return uVar7;
}


// ===== sym.crypto_qti_derive_raw_secret_platform.cfi_jt @ 0x080010e8 (size 8) =====

int sym.crypto_qti_derive_raw_secret_platform.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.crypto_qti_get_hwkm_raw_secret_tz(param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
        _printk(0x8000142,"crypto_qti_derive_raw_secret_platform",iVar1);
    }
    return iVar1;
}


// ===== sym.crypto_qti_get_hwkm_raw_secret_tz @ 0x080010f0 (size 332) =====

uint64_t sym.crypto_qti_get_hwkm_raw_secret_tz(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong *puVar5;
    int64_t *piVar6;
    ulong uVar7;
    int64_t iVar8;
    uint *puVar9;
    int64_t iVar10;
    uint32_t uVar11;
    uint32_t in_w4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    uVar4 = arg4;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    uVar12 = arg2 & 0xffffffff;
    iStack_38 = *(iVar10 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    iVar10 = arg3;
    uVar11 = uVar4;
    iVar2 = qtee_shmbridge_allocate_shm(uVar12,&uStack_50);
    uVar3 = iVar10;
    if (iVar2 == 0) {
        iVar2 = qtee_shmbridge_allocate_shm(arg4 & 0xffffffffU,&uStack_68);
        if (iVar2 == 0) {
            memcpy(uStack_48,arg1,uVar12);
            qtee_shmbridge_flush_shm_buf(&uStack_50);
            memset(uStack_60,0,arg4 & 0xffffffffU);
            qtee_shmbridge_flush_shm_buf(&uStack_68);
            uVar11 = uVar4;
            uVar3 = qcom_scm_derive_raw_secret(uStack_50,uVar12,uStack_68);
            uVar12 = uVar3;
            if (uVar3 == 0) {
                qtee_shmbridge_inv_shm_buf(&uStack_68);
                uVar3 = uVar4;
                memcpy(arg3,uStack_60);
                qtee_shmbridge_inv_shm_buf(&uStack_50);
            }
            else {
                uVar13 = uVar12;
                _printk(0x80001db,"crypto_qti_get_hwkm_raw_secret_tz");
                uVar3 = uVar13;
            }
            qtee_shmbridge_free_shm(&uStack_50);
            puVar5 = &uStack_68;
        }
        else {
            uVar12 = 0xfffffff4;
            puVar5 = &uStack_50;
        }
        qtee_shmbridge_free_shm(puVar5);
    }
    else {
        uVar12 = 0xfffffff4;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar12;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._8_8_;
    piVar6 = auVar14._0_8_;
    *extraout_x18 = sym.crypto_qti_program_key;
    pcStack_b8 = sym.crypto_qti_program_key;
    iVar10 = sp_el0;
    iStack_c8 = *(iVar10 + 0x5e0);
    uVar4 = *(iVar8 + 0x14);
    puStack_c0 = &stack0xffffffffffffffd0;
    if (uVar4 < 0x21) {
        uVar7 = 0x80002a4;
code_r0x08001444:
        _printk(uVar7,"crypto_qti_program_key",uVar4);
        uVar12 = 0xffffffea;
    }
    else {
        if ((obj.qti_hwkm_init_done & 1) == 0) {
            uVar4 = qti_hwkm_init(piVar6);
            if (uVar4 != 0) {
                uVar7 = 0x80001a2;
                goto code_r0x08001444;
            }
            obj.qti_hwkm_init_done = 0x1;
        }
        uVar13 = uVar3 * 0x80 + 0x4040;
        sym.writel_relaxed(0,*piVar6 + uVar13);
        DataSynchronizationBarrier(3,2,0);
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e0 = 0;
        iVar2 = qtee_shmbridge_allocate_shm(*(iVar8 + 0x14),&uStack_e0);
        if (iVar2 == 0) {
            memcpy(uStack_d8,iVar8 + 0x18,*(iVar8 + 0x14));
            qtee_shmbridge_flush_shm_buf(&uStack_e0);
            uVar4 = qcom_scm_config_set_ice_key(uVar3 << 1,uStack_e0,*(iVar8 + 0x14),0,0,0);
            uVar12 = uVar4;
            if (uVar4 == 0) {
                qtee_shmbridge_inv_shm_buf(&uStack_e0);
                qtee_shmbridge_free_shm(&uStack_e0);
                sym.writel_relaxed(uVar11 & 0xff | (in_w4 & 0xff) << 8 | 0x80000000,*piVar6 + uVar13);
                DataSynchronizationBarrier(3,2,0);
                goto code_r0x0800134c;
            }
            _printk(0x80000cb,"crypto_qti_program_hwkm_tz",uVar12);
            _printk(0x8000085,"print_key",uVar3 << 1);
            if (*(iVar8 + 0x14) != 0) {
                uVar13 = 0;
                do {
                    if (uVar13 == 0x80) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x5512,0x800145c);
                        (*pcVar1)();
                    }
                    _printk(0x800028d,uVar13 & 0xffffffff,*(iVar8 + 0x18 + uVar13));
                    uVar13 = uVar13 + 1;
                } while (uVar13 < *(iVar8 + 0x14));
            }
            qtee_shmbridge_inv_shm_buf(&uStack_e0);
            qtee_shmbridge_free_shm(&uStack_e0);
        }
        else {
            uVar12 = 0xfffffff4;
        }
        _printk(0x8000205,"crypto_qti_program_key",uVar12);
    }
code_r0x0800134c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_c8) {
        return uVar12;
    }
    auVar14 = __stack_chk_fail();
    puVar9 = auVar14._8_8_;
    *extraout_x18_00 = sym.writel_relaxed;
    uVar12 = auVar14._0_8_ & 0xffffffff;
    log_write_mmio(uVar12,0x20,puVar9,0x800147c);
    *puVar9 = auVar14._0_4_;
    uVar12 = log_post_write_mmio(uVar12,0x20,puVar9,0x80014a4);
    return uVar12;
}


// ===== sym.crypto_qti_program_key @ 0x0800123c (size 548) =====

uint64_t sym.crypto_qti_program_key(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    uint *puVar6;
    uint32_t in_w4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uVar3 = *(arg2 + 0x14);
    if (uVar3 < 0x21) {
        uVar5 = 0x80002a4;
code_r0x08001444:
        _printk(uVar5,"crypto_qti_program_key",uVar3);
        uVar7 = 0xffffffea;
    }
    else {
        if ((obj.qti_hwkm_init_done & 1) == 0) {
            uVar3 = qti_hwkm_init(arg1);
            if (uVar3 != 0) {
                uVar5 = 0x80001a2;
                goto code_r0x08001444;
            }
            obj.qti_hwkm_init_done = 0x1;
        }
        uVar8 = arg3 * 0x80 + 0x4040;
        sym.writel_relaxed(0,*arg1 + uVar8);
        DataSynchronizationBarrier(3,2,0);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        iVar4 = qtee_shmbridge_allocate_shm(*(arg2 + 0x14),&uStack_70);
        if (iVar4 == 0) {
            iVar4 = arg3 << 1;
            memcpy(uStack_68,arg2 + 0x18,*(arg2 + 0x14));
            qtee_shmbridge_flush_shm_buf(&uStack_70);
            uVar3 = qcom_scm_config_set_ice_key(iVar4,uStack_70,*(arg2 + 0x14),0,0,0);
            uVar7 = uVar3;
            if (uVar3 == 0) {
                qtee_shmbridge_inv_shm_buf(&uStack_70);
                qtee_shmbridge_free_shm(&uStack_70);
                sym.writel_relaxed(arg4 & 0xff | (in_w4 & 0xff) << 8 | 0x80000000,*arg1 + uVar8);
                DataSynchronizationBarrier(3,2,0);
                goto code_r0x0800134c;
            }
            _printk(0x80000cb,"crypto_qti_program_hwkm_tz",uVar7);
            _printk(0x8000085,"print_key",iVar4);
            if (*(arg2 + 0x14) != 0) {
                uVar8 = 0;
                do {
                    if (uVar8 == 0x80) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x800145c);
                        (*pcVar2)();
                    }
                    _printk(0x800028d,uVar8 & 0xffffffff,*(arg2 + 0x18 + uVar8));
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(arg2 + 0x14));
            }
            qtee_shmbridge_inv_shm_buf(&uStack_70);
            qtee_shmbridge_free_shm(&uStack_70);
        }
        else {
            uVar7 = 0xfffffff4;
        }
        _printk(0x8000205,"crypto_qti_program_key",uVar7);
    }
code_r0x0800134c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    auVar9 = __stack_chk_fail();
    puVar6 = auVar9._8_8_;
    *extraout_x18 = sym.writel_relaxed;
    uVar7 = auVar9._0_8_ & 0xffffffff;
    log_write_mmio(uVar7,0x20,puVar6,0x800147c);
    *puVar6 = auVar9._0_4_;
    uVar7 = log_post_write_mmio(uVar7,0x20,puVar6,0x80014a4);
    return uVar7;
}


// ===== sym.writel_relaxed @ 0x08001460 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800147c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80014a4);
    return;
}


// ===== sym.crypto_qti_invalidate_key @ 0x080014d8 (size 148) =====

int sym.crypto_qti_invalidate_key(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.qti_hwkm_init_done == 0x1) {
        iVar1 = qcom_scm_clear_ice_key(arg2 << 1,0);
        iVar2 = 0;
        if (iVar1 != 0) {
            _printk(0x80000ff,"crypto_qti_hwkm_evict_slot",iVar1);
            _printk(0x800011a,"crypto_qti_invalidate_key",iVar1,arg2 & 0xffffffff);
            iVar2 = iVar1;
        }
    }
    else {
        iVar2 = 0;
    }
    return iVar2;
}


// ===== sym.crypto_qti_disable_platform @ 0x0800156c (size 20) =====

void sym.crypto_qti_disable_platform(int64_t arg1)

{
    obj.qti_hwkm_init_done = 0x0;
    return;
}


// ===== sym.crypto_qti_derive_raw_secret_platform @ 0x08001580 (size 84) =====

int sym.crypto_qti_derive_raw_secret_platform(int64_t arg2,int64_t arg1,int64_t arg4,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.crypto_qti_get_hwkm_raw_secret_tz(arg2,arg1,arg4,arg3);
    if (iVar1 != 0) {
        _printk(0x8000142,"crypto_qti_derive_raw_secret_platform",iVar1);
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x080015d4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001618

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
    //switch table (4 cases) at 0x8000080
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800162c);
    (*pcVar1)();
}

