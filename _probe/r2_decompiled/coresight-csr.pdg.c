// decompiled from coresight-csr by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 540) =====

//WARNING: Switch with 1 destination removed at 0x08002790

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1e3d0ffe3d0499e9) {
        if (arg1 < -0x69c30fd37699d47) {
            if (arg1 != -0x66d421a09845f9f8) {
                if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x8001278 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08002750;
            }
            pcVar2 = sym.msr_show.6f4c84a8aa575570f427705a306ccafe.cfi_jt;
code_r0x08001208:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08002750;
        }
        if (arg1 == -0x69c30fd37699d47) {
            if ((pcVar1 + -0x80012a0 >> 3 | pcVar1 << 0x3d) < 6) {
                return;
            }
            goto code_r0x08002750;
        }
        if (arg1 == -0x5f1dfcffd7306c0) {
            pcVar2 = sym.coresight_csr_get.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002750;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x716eb3f3f593e7ab) {
        if (arg1 == 0x1e3d0ffe3d0499e9) {
            pcVar2 = sym.msr_reset_store.6f4c84a8aa575570f427705a306ccafe.cfi_jt;
            goto code_r0x08001208;
        }
        if (arg1 == 0x29e95aa76693c578) {
            pcVar2 = sym.coresight_csr_set_byte_cntr.cfi_jt;
        }
        else {
            if (arg1 != 0x3c89d2993a67ca23) goto code_r0x08002750;
            pcVar2 = sym.of_get_coresight_csr_name.cfi_jt;
        }
    }
    else if (arg1 == 0x716eb3f3f593e7ab) {
        pcVar2 = sym.coresight_csr_hwctrl_set.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7f8e408cfa701173) goto code_r0x08002750;
        pcVar2 = sym.coresight_csr_set_etr_atid.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002750:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80027a4);
    (*pcVar1)();
}


// ===== sym.coresight_csr_hwctrl_set.cfi_jt @ 0x08001228 (size 8) =====

uint sym.coresight_csr_hwctrl_set.cfi_jt(int64_t param_1,int64_t param_2,uint param_3)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        piVar1 = param_1 - 0x48;
        if (piVar1 == NULL) {
            return 0xffffffea;
        }
        if (0xfffffffffffff000 < piVar1) {
            return 0xffffffea;
        }
        if (*(param_1 + 0x26) != '\0') {
            uVar2 = _raw_spin_lock_irqsave(param_1 + 0x20);
            *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar3 = *(param_1 + -0x40);
            if (iVar3 + 0x20 == param_2) {
                uVar4 = 0;
                *(*piVar1 + 0x20) = param_3;
            }
            else if (iVar3 + 0x24 == param_2) {
                uVar4 = 0;
                *(*piVar1 + 0x24) = param_3;
            }
            else if (iVar3 + 0x28 == param_2) {
                uVar4 = 0;
                *(*piVar1 + 0x28) = param_3;
            }
            else if (iVar3 + 0x2c == param_2) {
                uVar4 = 0;
                *(*piVar1 + 0x2c) = param_3;
            }
            else {
                uVar4 = 0xffffffea;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar1 + 0xfb0) = 0;
            _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar2);
            return uVar4;
        }
    }
    return 0xffffffea;
}


// ===== sym.coresight_csr_get.cfi_jt @ 0x08001230 (size 8) =====

code * sym.coresight_csr_get.cfi_jt(ulong param_1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.csr_lock);
    for (pcVar3 = _obj.csr_list; pcVar3 != obj.csr_list; pcVar3 = *pcVar3) {
        pcVar2 = pcVar3 + -8;
        iVar1 = strcmp(*pcVar2,param_1);
        if (iVar1 == 0) goto code_r0x08001ac0;
    }
    pcVar2 = 0xffffffffffffffea;
code_r0x08001ac0:
    mutex_unlock(obj.csr_lock);
    return pcVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001238 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.csr_probe.6f4c84a8aa575570f427705a306ccafe.cfi_jt);
    return;
}


// ===== sym.coresight_csr_set_byte_cntr.cfi_jt @ 0x08001240 (size 8) =====

void sym.coresight_csr_set_byte_cntr.cfi_jt(int64_t param_1,int param_2,uint param_3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 != 0) && (param_1 != 0x48)) && (param_1 - 0x48U < 0xfffffffffffff001)) && (*(param_1 + 0x27) != '\0')
       ) {
        uVar1 = _raw_spin_lock_irqsave(param_1 + 0x20);
        *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + param_2) = param_3;
        DataSynchronizationBarrier(3,3,0);
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar1);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001248 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.csr_probe.6f4c84a8aa575570f427705a306ccafe.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.of_get_coresight_csr_name.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.of_get_coresight_csr_name.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_parse_phandle(param_1,"coresight-csr",0);
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = of_property_read_string(iVar1,"coresight-name",param_2);
    }
    return uVar2;
}


// ===== sym.coresight_csr_set_etr_atid.cfi_jt @ 0x08001258 (size 8) =====

uint sym.coresight_csr_set_etr_atid.cfi_jt(int64_t param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        uVar6 = 0xffffffea;
        if (((param_2 != 0) && (piVar7 = param_1 + -0x48, piVar7 != NULL)) && (piVar7 < 0xfffffffffffff001)) {
            uVar4 = _raw_spin_lock_irqsave(param_1 + 0x20);
            *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar1 = param_3 >> 3 & 0x1ffffffc;
            if (uVar1 < 0xd) {
                uVar5 = uVar1 + param_2;
                uVar3 = 1 << (param_3 & 0x1f);
                uVar6 = 0;
                uVar2 = *(*piVar7 + uVar5);
                uVar1 = uVar2 | uVar3;
                if ((param_4 & 1) == 0) {
                    uVar1 = uVar2 & (uVar3 ^ 0xffffffff);
                }
                *(*piVar7 + uVar5) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0xfb0) = 0;
            }
            else {
                DataSynchronizationBarrier(3,3,0);
                uVar6 = 0xffffffea;
                *(*piVar7 + 0xfb0) = 0;
            }
            _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar4);
        }
    }
    return uVar6;
}


// ===== sym.msr_reset_store.6f4c84a8aa575570f427705a306ccafe.cfi_jt @ 0x08001260 (size 8) =====

int64_t sym.msr_reset_store.6f4c84a8aa575570f427705a306ccafe.cfi_jt
                  (int64_t param_1,ulong param_2,uchar *param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar4 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_40 = 0;
    piVar7 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = -0x16;
    if ((piVar7 == NULL) || (0xfffffffffffff000 < piVar7)) goto code_r0x08002548;
    if (*(piVar7 + 0x72) != '\0') {
        iVar6 = -0x16;
        if ((piVar7[6] == 0) || (0xfffffffffffff000 < piVar7[6])) goto code_r0x08002548;
        iVar2 = kstrtoull(param_3,0,&iStack_40);
        iVar6 = -0x16;
        param_3 = piVar4;
        if ((iVar2 != 0) || (iStack_40 != 1)) goto code_r0x08002548;
        if (*piVar7[7] != 0) {
            *piVar7[7] = 0;
            uVar3 = _raw_spin_lock_irqsave(piVar7 + 0xd);
            *(*piVar7 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar6 = piVar7[2];
            if (3 < (piVar7[3] - iVar6) + 1U) {
                uVar5 = 0;
                do {
                    *(*piVar7 + iVar6 + (uVar5 << 2)) = 0;
                    *(piVar7[6] + uVar5 * 4) = 0;
                    iVar6 = piVar7[2];
                    uVar5 = uVar5 + 1;
                } while (uVar5 < (piVar7[3] - iVar6) + 1U >> 2);
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar7 + 0xfb0) = 0;
            _raw_spin_unlock_irqrestore(piVar7 + 0xd,uVar3);
            iVar6 = piVar7[0xc];
            clk_disable(iVar6);
            clk_unprepare(iVar6);
            iVar6 = param_4;
            param_3 = piVar4;
            goto code_r0x08002548;
        }
    }
    iVar6 = -0x16;
code_r0x08002548:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar6;
    }
    iVar6 = __stack_chk_fail(iVar6);
    *extraout_x18 = 0x800257c;
    uVar5 = *(*(iVar6 + 0x60) + 0x98);
    if (((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) || (*(uVar5 + 0x6c) == '\0')) {
        _dev_err(iVar6,"Invalid param\n");
        iVar6 = -0x16;
    }
    else {
        iVar2 = scnprintf(param_3,0x1000,"%#lx\n",*(uVar5 + 0x44));
        iVar6 = iVar2;
    }
    return iVar6;
}


// ===== sym.flushperiod_store.6f4c84a8aa575570f427705a306ccafe.cfi_jt @ 0x08001268 (size 8) =====

uchar * sym.flushperiod_store.6f4c84a8aa575570f427705a306ccafe.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int64_t *piVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_50 = 0;
    piVar7 = *(*(param_1 + 0x60) + 0x98);
    if (((piVar7 == NULL) || (0xfffffffffffff000 < piVar7)) || (*(piVar7 + 0x6c) == '\0')) {
        _dev_err(param_1,"Invalid param\n");
    }
    else {
        piVar1 = piVar7 + 0xd;
        uVar5 = _raw_spin_lock_irqsave(piVar1);
        iVar4 = kstrtoull(param_3,0,&uStack_50);
        if ((iVar4 == 0) && (uStack_50 < 0x10000)) {
            if ((uStack_50 != *(piVar7 + 0x44)) && (*(piVar7 + 0x44) = uStack_50, *(piVar7 + 0x71) != '\0')) {
                *(*piVar7 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0x34) = *(*piVar7 + 0x34) & 0xfffc0003 | *(piVar7 + 0x44) << 2;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0xfb0) = 0;
            }
            _raw_spin_unlock_irqrestore(piVar1,uVar5);
            goto code_r0x0800270c;
        }
        _raw_spin_unlock_irqrestore(piVar1,uVar5);
    }
    param_4 = 0xffffffffffffffea;
code_r0x0800270c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_48) {
        auVar8 = __stack_chk_fail();
        puVar6 = auVar8._0_8_;
        *extraout_x18 = 0x8002748;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar8._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x80027a4);
        (*pcVar3)();
    }
    return param_4;
}


// ===== sym.msr_store.6f4c84a8aa575570f427705a306ccafe.cfi_jt @ 0x08001270 (size 8) =====

void sym.msr_store.6f4c84a8aa575570f427705a306ccafe.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int *piVar7;
    int *extraout_x8;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t *piVar8;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = -0x16;
    uStack_40 = 0;
    piVar8 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar8 == NULL) || (0xfffffffffffff000 < piVar8)) goto code_r0x08002360;
    if (*(piVar8 + 0x72) != '\0') {
        iVar5 = -0x16;
        if ((piVar8[6] == 0) || (0xfffffffffffff000 < piVar8[6])) goto code_r0x08002360;
        iVar4 = sscanf(param_3,"%x %x",&uStack_40 + 4,&uStack_40);
        unaff_x19 = param_4;
        if ((iVar4 == 2) && (uStack_40 >> 0x20 < (piVar8[3] - piVar8[2]) + 1U >> 2)) {
            iVar5 = param_4;
            if (*piVar8[7] != 0) goto code_r0x080022c8;
            iVar4 = sym.clk_prepare_enable(piVar8[0xc]);
            if (iVar4 == 0) {
                piVar7 = piVar8[7];
                goto code_r0x080023c4;
            }
            iVar5 = iVar4;
            goto code_r0x08002360;
        }
    }
    iVar5 = -0x16;
code_r0x08002360:
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_38) {
        __stack_chk_fail(iVar5);
        piVar7 = extraout_x8;
        iVar5 = unaff_x19;
code_r0x080023c4:
        Hint_Prefetch(piVar7,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
                *piVar7 = *piVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
code_r0x080022c8:
        uVar6 = _raw_spin_lock_irqsave(piVar8 + 0xd);
        *(*piVar8 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar8 + piVar8[2] + (uStack_40._4_4_ << 2)) = uStack_40;
        *(piVar8[6] + uStack_40._4_4_ * 4) = *(*piVar8 + piVar8[2] + (uStack_40._4_4_ << 2));
        DataSynchronizationBarrier(3,3,0);
        *(*piVar8 + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(piVar8 + 0xd,uVar6);
        unaff_x19 = iVar5;
    }
    return;
}


// ===== sym.csr_probe.6f4c84a8aa575570f427705a306ccafe.cfi_jt @ 0x08001278 (size 8) =====

uint64_t sym.csr_probe.6f4c84a8aa575570f427705a306ccafe.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    ulong uVar8;
    uint64_t *puVar9;
    uint *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t auStack_98 [5];
    code *pcStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar11 = param_1 + 0x10;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    auStack_98[4] = 0;
    pcStack_70 = NULL;
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    iStack_68 = coresight_alloc_device_name(obj.csr_devs,iVar11);
    if (iStack_68 != 0) {
        uVar4 = coresight_get_platform_data(iVar11);
        if (0xfffffffffffff000 < uVar4) goto code_r0x08001e1c;
        *(param_1 + 0xa0) = uVar4;
        piVar5 = devm_kmalloc(iVar11,0x78,0xdc0);
        if (piVar5 != NULL) {
            piVar5[4] = iVar11;
            *(param_1 + 0xa8) = piVar5;
            iVar6 = devm_clk_get(iVar11,"apb_pclk");
            piVar5[0xc] = iVar6;
            puVar7 = platform_get_resource_byname(param_1,0x200,"csr-base");
            if (puVar7 == NULL) {
code_r0x08001d7c:
                uVar4 = 0xffffffed;
                goto code_r0x08001e1c;
            }
            piVar5[1] = *puVar7;
            iVar6 = devm_ioremap(iVar11,*puVar7,(puVar7[1] - *puVar7) + 1);
            *piVar5 = iVar6;
            if (iVar6 != 0) {
                iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,blk-size",piVar5 + 8,1,0);
                if (iVar3 < 0) {
                    *(piVar5 + 8) = 0;
                }
                iVar6 = of_find_property(*(param_1 + 0x300),"qcom,usb-bam-support",0);
                uVar8 = *(param_1 + 0x300);
                *(piVar5 + 0x6c) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,hwctrl-set-support",0);
                uVar8 = *(param_1 + 0x300);
                *(piVar5 + 0x6e) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,set-byte-cntr-support",0);
                uVar8 = *(param_1 + 0x300);
                *(piVar5 + 0x6f) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,timestamp-support",0);
                uVar8 = *(param_1 + 0x300);
                *(piVar5 + 0xe) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,aodbg-csr-support",0);
                uVar8 = *(param_1 + 0x300);
                *(piVar5 + 0x73) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,perflsheot-set-support",0);
                *(piVar5 + 0x6d) = iVar6 != 0;
                if (*(piVar5 + 0x6c) != '\0') {
                    *(piVar5 + 0x44) = 1;
                }
                iVar6 = of_find_property(*(param_1 + 0x300),"qcom,msr-support",0);
                *(piVar5 + 0x72) = iVar6 != 0;
                if (iVar6 == 0) {
code_r0x08001dd8:
                    auStack_98[3] = *(param_1 + 0xa0);
                    auStack_98[0] = auStack_98[0] & 0xffffffff00000000;
                    if ((piVar5[0xe] == '\0') && (*(piVar5 + 0x72) == '\0')) {
                        if (*(piVar5 + 0x6c) != '\0') {
                            pcStack_70 = obj.csr_attr_grps;
                        }
                    }
                    else {
                        pcStack_70 = obj.swao_csr_attr_grps;
                    }
                    auStack_98[4] = iVar11;
                    uVar4 = coresight_register(auStack_98);
                    piVar5[5] = uVar4;
                    if (uVar4 < 0xfffffffffffff001) {
                        *(piVar5 + 0xd) = 0;
                        piVar5[9] = iStack_68;
                        mutex_lock(obj.csr_lock);
                        piVar2 = *0x80001e8;
                        piVar1 = piVar5 + 10;
                        uVar4 = __list_add_valid(piVar1,*0x80001e8,obj.csr_list);
                        if ((uVar4 & 1) != 0) {
                            *0x80001e8 = piVar1;
                            piVar5[10] = obj.csr_list;
                            piVar5[0xb] = piVar2;
                            *piVar2 = piVar1;
                        }
                        mutex_unlock(obj.csr_lock);
                        _dev_info(iVar11,"CSR initialized: %s\n",piVar5[9]);
                        uVar4 = 0;
                    }
                    goto code_r0x08001e1c;
                }
                puVar9 = platform_get_resource_byname(param_1,0x200,"msr-base");
                if (((puVar9 == NULL) || (iVar6 = *puVar9 - *puVar7, *puVar9 < *puVar7)) || (puVar7[1] < puVar9[1]))
                goto code_r0x08001d7c;
                piVar5[2] = iVar6;
                uVar4 = *puVar7;
                uVar12 = puVar9[1];
                piVar5[3] = uVar12 - uVar4;
                iVar6 = devm_kmalloc(iVar11,(uVar12 - (iVar6 + uVar4)) + 1 & 0xfffffffffffffffc,0xdc0);
                piVar5[6] = iVar6;
                if (iVar6 != 0) {
                    puVar10 = devm_kmalloc(iVar11,4,0xdc0);
                    piVar5[7] = puVar10;
                    if (puVar10 != NULL) {
                        *puVar10 = 0;
                        goto code_r0x08001dd8;
                    }
                }
            }
        }
    }
    uVar4 = 0xfffffff4;
code_r0x08001e1c:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_48) {
        iVar11 = __stack_chk_fail(uVar4);
        *extraout_x18 = sym.csr_remove;
        iVar11 = *(iVar11 + 0xa8);
        mutex_lock(obj.csr_lock);
        uVar4 = __list_del_entry_valid(iVar11 + 0x50);
        if ((uVar4 & 1) != 0) {
            iVar6 = *(iVar11 + 0x50);
            piVar5 = *(iVar11 + 0x58);
            *(iVar6 + 8) = piVar5;
            *piVar5 = iVar6;
        }
        *(iVar11 + 0x50) = 0xdead000000000100;
        *(iVar11 + 0x58) = 0xdead000000000122;
        mutex_unlock(obj.csr_lock);
        coresight_unregister(*(iVar11 + 0x28));
        return 0;
    }
    return uVar4;
}


// ===== sym.csr_remove.6f4c84a8aa575570f427705a306ccafe.cfi_jt @ 0x08001280 (size 8) =====

ulong sym.csr_remove.6f4c84a8aa575570f427705a306ccafe.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0xa8);
    mutex_lock(obj.csr_lock);
    uVar3 = __list_del_entry_valid(iVar4 + 0x50);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(iVar4 + 0x50);
        piVar2 = *(iVar4 + 0x58);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(iVar4 + 0x50) = 0xdead000000000100;
    *(iVar4 + 0x58) = 0xdead000000000122;
    mutex_unlock(obj.csr_lock);
    coresight_unregister(*(iVar4 + 0x28));
    return 0;
}


// ===== sym.msr_show.6f4c84a8aa575570f427705a306ccafe.cfi_jt @ 0x08001288 (size 8) =====

int64_t sym.msr_show.6f4c84a8aa575570f427705a306ccafe.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = -0x16;
    uVar5 = *(*(param_1 + 0x60) + 0x98);
    if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
        if (*(uVar5 + 0x72) == '\0') {
            iVar3 = -0x16;
        }
        else {
            uVar2 = *(uVar5 + 0x30);
            iVar3 = -0x16;
            if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
                if ((*(uVar5 + 0x18) - *(uVar5 + 0x10)) + 1U < 4) {
                    iVar3 = 0;
                }
                else {
                    uVar4 = 0;
                    iVar3 = 0;
                    while( true ) {
                        iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,"%d 0x%x\n",uVar4 & 0xffffffff,
                                          *(uVar2 + uVar4 * 4));
                        iVar3 = iVar3 + iVar1;
                        uVar4 = uVar4 + 1;
                        if ((*(uVar5 + 0x18) - *(uVar5 + 0x10)) + 1U >> 2 <= uVar4) break;
                        uVar2 = *(uVar5 + 0x30);
                    }
                }
            }
        }
    }
    return iVar3;
}


// ===== sym.timestamp_show.6f4c84a8aa575570f427705a306ccafe.cfi_jt @ 0x08001290 (size 8) =====

int64_t sym.timestamp_show.6f4c84a8aa575570f427705a306ccafe.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(param_1 + 0x60) + 0x98);
    if (((piVar8 == NULL) || (0xfffffffffffff000 < piVar8)) || (piVar8[0xe] == '\0')) {
        _dev_err(param_1,"Invalid param\n");
        iVar5 = 0;
    }
    else {
        iVar7 = piVar8[0xc];
        iVar5 = 0;
        if (*(piVar8 + 0x73) != '\0') {
            iVar5 = -0x14;
        }
        iVar4 = clk_prepare(iVar7);
        if (iVar4 == 0) {
            iVar4 = clk_enable(iVar7);
            if (iVar4 == 0) {
                uVar6 = _raw_spin_lock_irqsave(piVar8 + 0xd);
                *(*piVar8 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar8 + iVar5 + 0x38);
                *(*piVar8 + iVar5 + 0x38) = uVar1 & 0xfffffffe;
                *(*piVar8 + iVar5 + 0x38) = uVar1 | 1;
                uVar2 = *(*piVar8 + iVar5 + 0x44);
                uVar3 = *(*piVar8 + iVar5 + 0x48);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar8 + 0xfb0) = 0;
                _raw_spin_unlock_irqrestore(piVar8 + 0xd,uVar6);
                iVar5 = piVar8[0xc];
                clk_disable(iVar5);
                clk_unprepare(iVar5);
                iVar4 = scnprintf(param_3,0x1000,"%llu\n",CONCAT44(uVar3,uVar2));
                return iVar4;
            }
            clk_unprepare(iVar7);
        }
        iVar5 = iVar4;
    }
    return iVar5;
}


// ===== sym.flushperiod_show.6f4c84a8aa575570f427705a306ccafe.cfi_jt @ 0x08001298 (size 8) =====

int64_t sym.flushperiod_show.6f4c84a8aa575570f427705a306ccafe.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(*(param_1 + 0x60) + 0x98);
    if (((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) || (*(uVar3 + 0x6c) == '\0')) {
        _dev_err(param_1,"Invalid param\n");
        iVar2 = -0x16;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,"%#lx\n",*(uVar3 + 0x44));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.msm_qdss_csr_enable_eth.cfi_jt @ 0x080012a0 (size 8) =====

void sym.msm_qdss_csr_enable_eth.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 != 0) && (param_1 != 0x48)) && (param_1 - 0x48U < 0xfffffffffffff001)) {
        uVar1 = _raw_spin_lock_irqsave(param_1 + 0x20);
        *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0x130) = 0x104;
        *(*(param_1 + -0x48) + 0x134) = 0x104;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar1);
    }
    return;
}


// ===== sym.msm_qdss_csr_enable_flush.cfi_jt @ 0x080012a8 (size 8) =====

void sym.msm_qdss_csr_enable_flush.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 != 0) && (param_1 != 0x48)) && (param_1 - 0x48U < 0xfffffffffffff001)) && (*(param_1 + 0x24) != '\0')
       ) {
        uVar2 = _raw_spin_lock_irqsave(param_1 + 0x20);
        *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0x34) = *(*(param_1 + -0x48) + 0x34) & 0xfffc0003 | *(param_1 + -4) << 2;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0xfb0) = 0;
        *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = 2;
        if (*(param_1 + 0x25) != '\0') {
            uVar1 = 0x40002;
        }
        *(*(param_1 + -0x48) + 0x34) = uVar1 | *(*(param_1 + -0x48) + 0x34);
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0xfb0) = 0;
        *(param_1 + 0x29) = 1;
        _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar2);
    }
    return;
}


// ===== sym.msm_qdss_csr_enable_bam_to_usb.cfi_jt @ 0x080012b0 (size 8) =====

void sym.msm_qdss_csr_enable_bam_to_usb.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 != 0) && (param_1 != 0x48)) && (param_1 - 0x48U < 0xfffffffffffff001)) && (*(param_1 + 0x24) != '\0')
       ) {
        uVar2 = _raw_spin_lock_irqsave(param_1 + 0x20);
        *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*(param_1 + -0x48) + 0x30) & 0xfffffffc | *(param_1 + -8);
        *(*(param_1 + -0x48) + 0x30) = uVar1;
        *(*(param_1 + -0x48) + 0x30) = uVar1 | 4;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar2);
    }
    return;
}


// ===== sym.msm_qdss_csr_disable_bam_to_usb.cfi_jt @ 0x080012b8 (size 8) =====

void sym.msm_qdss_csr_disable_bam_to_usb.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 != 0) && (param_1 != 0x48)) && (param_1 - 0x48U < 0xfffffffffffff001)) && (*(param_1 + 0x24) != '\0')
       ) {
        uVar1 = _raw_spin_lock_irqsave(param_1 + 0x20);
        *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0x30) = *(*(param_1 + -0x48) + 0x30) & 0xfffffffb;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar1);
    }
    return;
}


// ===== sym.msm_qdss_csr_disable_flush.cfi_jt @ 0x080012c0 (size 8) =====

void sym.msm_qdss_csr_disable_flush.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 != 0) && (param_1 != 0x48)) && (param_1 - 0x48U < 0xfffffffffffff001)) && (*(param_1 + 0x24) != '\0')
       ) {
        uVar2 = _raw_spin_lock_irqsave(param_1 + 0x20);
        *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = 0xfffffffd;
        if (*(param_1 + 0x25) != '\0') {
            uVar1 = 0xfffbfffd;
        }
        *(*(param_1 + -0x48) + 0x34) = uVar1 & *(*(param_1 + -0x48) + 0x34);
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0xfb0) = 0;
        *(param_1 + 0x29) = 0;
        _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar2);
    }
    return;
}


// ===== sym.msm_qdss_csr_disable_eth.cfi_jt @ 0x080012c8 (size 8) =====

void sym.msm_qdss_csr_disable_eth.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 != 0) && (param_1 != 0x48)) && (param_1 - 0x48U < 0xfffffffffffff001)) {
        uVar1 = _raw_spin_lock_irqsave(param_1 + 0x20);
        *(*(param_1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0x130) = 0;
        *(*(param_1 + -0x48) + 0x134) = 0;
        DataSynchronizationBarrier(3,3,0);
        *(*(param_1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(param_1 + 0x20,uVar1);
    }
    return;
}


// ===== sym.msm_qdss_csr_enable_bam_to_usb @ 0x080012d0 (size 192) =====

void sym.msm_qdss_csr_enable_bam_to_usb(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 != 0) && (arg1 != 0x48)) && (arg1 - 0x48U < 0xfffffffffffff001)) && (*(arg1 + 0x24) != '\0')) {
        uVar2 = _raw_spin_lock_irqsave(arg1 + 0x20);
        *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*(arg1 + -0x48) + 0x30) & 0xfffffffc | *(arg1 + -8);
        *(*(arg1 + -0x48) + 0x30) = uVar1;
        *(*(arg1 + -0x48) + 0x30) = uVar1 | 4;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(arg1 + 0x20,uVar2);
    }
    return;
}


// ===== sym.msm_qdss_csr_enable_flush @ 0x08001394 (size 268) =====

void sym.msm_qdss_csr_enable_flush(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 != 0) && (arg1 != 0x48)) && (arg1 - 0x48U < 0xfffffffffffff001)) && (*(arg1 + 0x24) != '\0')) {
        uVar2 = _raw_spin_lock_irqsave(arg1 + 0x20);
        *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0x34) = *(*(arg1 + -0x48) + 0x34) & 0xfffc0003 | *(arg1 + -4) << 2;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0xfb0) = 0;
        *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = 2;
        if (*(arg1 + 0x25) != '\0') {
            uVar1 = 0x40002;
        }
        *(*(arg1 + -0x48) + 0x34) = uVar1 | *(*(arg1 + -0x48) + 0x34);
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0xfb0) = 0;
        *(arg1 + 0x29) = 1;
        _raw_spin_unlock_irqrestore(arg1 + 0x20,uVar2);
    }
    return;
}


// ===== sym.msm_qdss_csr_disable_bam_to_usb @ 0x080014a8 (size 168) =====

void sym.msm_qdss_csr_disable_bam_to_usb(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 != 0) && (arg1 != 0x48)) && (arg1 - 0x48U < 0xfffffffffffff001)) && (*(arg1 + 0x24) != '\0')) {
        uVar1 = _raw_spin_lock_irqsave(arg1 + 0x20);
        *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0x30) = *(*(arg1 + -0x48) + 0x30) & 0xfffffffb;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(arg1 + 0x20,uVar1);
    }
    return;
}


// ===== sym.msm_qdss_csr_disable_flush @ 0x08001554 (size 196) =====

void sym.msm_qdss_csr_disable_flush(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 != 0) && (arg1 != 0x48)) && (arg1 - 0x48U < 0xfffffffffffff001)) && (*(arg1 + 0x24) != '\0')) {
        uVar2 = _raw_spin_lock_irqsave(arg1 + 0x20);
        *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = 0xfffffffd;
        if (*(arg1 + 0x25) != '\0') {
            uVar1 = 0xfffbfffd;
        }
        *(*(arg1 + -0x48) + 0x34) = uVar1 & *(*(arg1 + -0x48) + 0x34);
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0xfb0) = 0;
        *(arg1 + 0x29) = 0;
        _raw_spin_unlock_irqrestore(arg1 + 0x20,uVar2);
    }
    return;
}


// ===== sym.msm_qdss_csr_enable_eth @ 0x0800161c (size 160) =====

void sym.msm_qdss_csr_enable_eth(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 != 0) && (arg1 != 0x48)) && (arg1 - 0x48U < 0xfffffffffffff001)) {
        uVar1 = _raw_spin_lock_irqsave(arg1 + 0x20);
        *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0x130) = 0x104;
        *(*(arg1 + -0x48) + 0x134) = 0x104;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(arg1 + 0x20,uVar1);
    }
    return;
}


// ===== sym.msm_qdss_csr_disable_eth @ 0x080016bc (size 156) =====

void sym.msm_qdss_csr_disable_eth(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 != 0) && (arg1 != 0x48)) && (arg1 - 0x48U < 0xfffffffffffff001)) {
        uVar1 = _raw_spin_lock_irqsave(arg1 + 0x20);
        *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0x130) = 0;
        *(*(arg1 + -0x48) + 0x134) = 0;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(arg1 + 0x20,uVar1);
    }
    return;
}


// ===== sym.coresight_csr_hwctrl_set @ 0x08001758 (size 316) =====

uint sym.coresight_csr_hwctrl_set(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        piVar1 = arg1 - 0x48;
        if (piVar1 == NULL) {
            return 0xffffffea;
        }
        if (0xfffffffffffff000 < piVar1) {
            return 0xffffffea;
        }
        if (*(arg1 + 0x26) != '\0') {
            uVar2 = arg3;
            uVar3 = _raw_spin_lock_irqsave(arg1 + 0x20);
            *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar4 = *(arg1 + -0x40);
            if (iVar4 + 0x20 == arg2) {
                uVar5 = 0;
                *(*piVar1 + 0x20) = uVar2;
            }
            else if (iVar4 + 0x24 == arg2) {
                uVar5 = 0;
                *(*piVar1 + 0x24) = uVar2;
            }
            else if (iVar4 + 0x28 == arg2) {
                uVar5 = 0;
                *(*piVar1 + 0x28) = uVar2;
            }
            else if (iVar4 + 0x2c == arg2) {
                uVar5 = 0;
                *(*piVar1 + 0x2c) = uVar2;
            }
            else {
                uVar5 = 0xffffffea;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar1 + 0xfb0) = 0;
            _raw_spin_unlock_irqrestore(arg1 + 0x20,uVar3);
            return uVar5;
        }
    }
    return 0xffffffea;
}


// ===== sym.coresight_csr_set_byte_cntr @ 0x08001894 (size 172) =====

void sym.coresight_csr_set_byte_cntr(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 != 0) && (arg1 != 0x48)) && (arg1 - 0x48U < 0xfffffffffffff001)) && (*(arg1 + 0x27) != '\0')) {
        uVar1 = _raw_spin_lock_irqsave(arg1 + 0x20);
        *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + arg2) = arg3;
        DataSynchronizationBarrier(3,3,0);
        DataSynchronizationBarrier(3,3,0);
        *(*(arg1 + -0x48) + 0xfb0) = 0;
        _raw_spin_unlock_irqrestore(arg1 + 0x20,uVar1);
    }
    return;
}


// ===== sym.coresight_csr_set_etr_atid @ 0x08001940 (size 284) =====

uint sym.coresight_csr_set_etr_atid(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar6 = 0xffffffea;
    }
    else {
        uVar6 = 0xffffffea;
        if (((arg2 != 0) && (piVar7 = arg1 + -0x48, piVar7 != NULL)) && (piVar7 < 0xfffffffffffff001)) {
            uVar4 = _raw_spin_lock_irqsave(arg1 + 0x20);
            *(*(arg1 + -0x48) + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar1 = (arg3 & 0xffffffffU) >> 3 & 0x1ffffffc;
            if (uVar1 < 0xd) {
                uVar5 = uVar1 + arg2;
                uVar3 = 1 << (arg3 & 0x1f);
                uVar6 = 0;
                uVar2 = *(*piVar7 + uVar5);
                uVar1 = uVar2 | uVar3;
                if ((arg4 & 1U) == 0) {
                    uVar1 = uVar2 & (uVar3 ^ 0xffffffff);
                }
                *(*piVar7 + uVar5) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0xfb0) = 0;
            }
            else {
                DataSynchronizationBarrier(3,3,0);
                uVar6 = 0xffffffea;
                *(*piVar7 + 0xfb0) = 0;
            }
            _raw_spin_unlock_irqrestore(arg1 + 0x20,uVar4);
        }
    }
    return uVar6;
}


// ===== sym.coresight_csr_get @ 0x08001a60 (size 136) =====

code * sym.coresight_csr_get(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.csr_lock);
    for (pcVar3 = _obj.csr_list; pcVar3 != obj.csr_list; pcVar3 = *pcVar3) {
        pcVar2 = pcVar3 + -8;
        iVar1 = strcmp(*pcVar2,arg1);
        if (iVar1 == 0) goto code_r0x08001ac0;
    }
    pcVar2 = 0xffffffffffffffea;
code_r0x08001ac0:
    mutex_unlock(obj.csr_lock);
    return pcVar2;
}


// ===== sym.of_get_coresight_csr_name @ 0x08001ae8 (size 88) =====

ulong sym.of_get_coresight_csr_name(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_parse_phandle(arg1,"coresight-csr",0);
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = of_property_read_string(iVar1,"coresight-name",arg2);
    }
    return uVar2;
}


// ===== sym.csr_probe @ 0x08001b40 (size 920) =====

uint64_t sym.csr_probe(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    ulong uVar8;
    uint64_t *puVar9;
    uint *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t auStack_98 [5];
    code *pcStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar11 = arg1 + 0x10;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    auStack_98[4] = 0;
    pcStack_70 = NULL;
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    iStack_68 = coresight_alloc_device_name(obj.csr_devs,iVar11);
    if (iStack_68 != 0) {
        uVar4 = coresight_get_platform_data(iVar11);
        if (0xfffffffffffff000 < uVar4) goto code_r0x08001e1c;
        *(arg1 + 0xa0) = uVar4;
        piVar5 = devm_kmalloc(iVar11,0x78,0xdc0);
        if (piVar5 != NULL) {
            piVar5[4] = iVar11;
            *(arg1 + 0xa8) = piVar5;
            iVar6 = devm_clk_get(iVar11,"apb_pclk");
            piVar5[0xc] = iVar6;
            puVar7 = platform_get_resource_byname(arg1,0x200,"csr-base");
            if (puVar7 == NULL) {
code_r0x08001d7c:
                uVar4 = 0xffffffed;
                goto code_r0x08001e1c;
            }
            piVar5[1] = *puVar7;
            iVar6 = devm_ioremap(iVar11,*puVar7,(puVar7[1] - *puVar7) + 1);
            *piVar5 = iVar6;
            if (iVar6 != 0) {
                iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,blk-size",piVar5 + 8,1,0);
                if (iVar3 < 0) {
                    *(piVar5 + 8) = 0;
                }
                iVar6 = of_find_property(*(arg1 + 0x300),"qcom,usb-bam-support",0);
                uVar8 = *(arg1 + 0x300);
                *(piVar5 + 0x6c) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,hwctrl-set-support",0);
                uVar8 = *(arg1 + 0x300);
                *(piVar5 + 0x6e) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,set-byte-cntr-support",0);
                uVar8 = *(arg1 + 0x300);
                *(piVar5 + 0x6f) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,timestamp-support",0);
                uVar8 = *(arg1 + 0x300);
                *(piVar5 + 0xe) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,aodbg-csr-support",0);
                uVar8 = *(arg1 + 0x300);
                *(piVar5 + 0x73) = iVar6 != 0;
                iVar6 = of_find_property(uVar8,"qcom,perflsheot-set-support",0);
                *(piVar5 + 0x6d) = iVar6 != 0;
                if (*(piVar5 + 0x6c) != '\0') {
                    *(piVar5 + 0x44) = 1;
                }
                iVar6 = of_find_property(*(arg1 + 0x300),"qcom,msr-support",0);
                *(piVar5 + 0x72) = iVar6 != 0;
                if (iVar6 == 0) {
code_r0x08001dd8:
                    auStack_98[3] = *(arg1 + 0xa0);
                    auStack_98[0] = auStack_98[0] & 0xffffffff00000000;
                    if ((piVar5[0xe] == '\0') && (*(piVar5 + 0x72) == '\0')) {
                        if (*(piVar5 + 0x6c) != '\0') {
                            pcStack_70 = obj.csr_attr_grps;
                        }
                    }
                    else {
                        pcStack_70 = obj.swao_csr_attr_grps;
                    }
                    auStack_98[4] = iVar11;
                    uVar4 = coresight_register(auStack_98);
                    piVar5[5] = uVar4;
                    if (uVar4 < 0xfffffffffffff001) {
                        *(piVar5 + 0xd) = 0;
                        piVar5[9] = iStack_68;
                        mutex_lock(obj.csr_lock);
                        piVar2 = *0x80001e8;
                        piVar1 = piVar5 + 10;
                        uVar4 = __list_add_valid(piVar1,*0x80001e8,obj.csr_list);
                        if ((uVar4 & 1) != 0) {
                            *0x80001e8 = piVar1;
                            piVar5[10] = obj.csr_list;
                            piVar5[0xb] = piVar2;
                            *piVar2 = piVar1;
                        }
                        mutex_unlock(obj.csr_lock);
                        _dev_info(iVar11,"CSR initialized: %s\n",piVar5[9]);
                        uVar4 = 0;
                    }
                    goto code_r0x08001e1c;
                }
                puVar9 = platform_get_resource_byname(arg1,0x200,"msr-base");
                if (((puVar9 == NULL) || (iVar6 = *puVar9 - *puVar7, *puVar9 < *puVar7)) || (puVar7[1] < puVar9[1]))
                goto code_r0x08001d7c;
                piVar5[2] = iVar6;
                uVar4 = *puVar7;
                uVar12 = puVar9[1];
                piVar5[3] = uVar12 - uVar4;
                iVar6 = devm_kmalloc(iVar11,(uVar12 - (iVar6 + uVar4)) + 1 & 0xfffffffffffffffc,0xdc0);
                piVar5[6] = iVar6;
                if (iVar6 != 0) {
                    puVar10 = devm_kmalloc(iVar11,4,0xdc0);
                    piVar5[7] = puVar10;
                    if (puVar10 != NULL) {
                        *puVar10 = 0;
                        goto code_r0x08001dd8;
                    }
                }
            }
        }
    }
    uVar4 = 0xfffffff4;
code_r0x08001e1c:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_48) {
        iVar11 = __stack_chk_fail(uVar4);
        *extraout_x18 = sym.csr_remove;
        iVar11 = *(iVar11 + 0xa8);
        mutex_lock(obj.csr_lock);
        uVar4 = __list_del_entry_valid(iVar11 + 0x50);
        if ((uVar4 & 1) != 0) {
            iVar6 = *(iVar11 + 0x50);
            piVar5 = *(iVar11 + 0x58);
            *(iVar6 + 8) = piVar5;
            *piVar5 = iVar6;
        }
        *(iVar11 + 0x50) = 0xdead000000000100;
        *(iVar11 + 0x58) = 0xdead000000000122;
        mutex_unlock(obj.csr_lock);
        coresight_unregister(*(iVar11 + 0x28));
        return 0;
    }
    return uVar4;
}


// ===== sym.csr_remove @ 0x08001ed8 (size 124) =====

ulong sym.csr_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xa8);
    mutex_lock(obj.csr_lock);
    uVar3 = __list_del_entry_valid(iVar4 + 0x50);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(iVar4 + 0x50);
        piVar2 = *(iVar4 + 0x58);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(iVar4 + 0x50) = 0xdead000000000100;
    *(iVar4 + 0x58) = 0xdead000000000122;
    mutex_unlock(obj.csr_lock);
    coresight_unregister(*(iVar4 + 0x28));
    return 0;
}


// ===== sym.timestamp_show @ 0x08001f54 (size 384) =====

int64_t sym.timestamp_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(arg1 + 0x60) + 0x98);
    if (((piVar8 == NULL) || (0xfffffffffffff000 < piVar8)) || (piVar8[0xe] == '\0')) {
        _dev_err(arg1,"Invalid param\n");
        iVar5 = 0;
    }
    else {
        iVar7 = piVar8[0xc];
        iVar5 = 0;
        if (*(piVar8 + 0x73) != '\0') {
            iVar5 = -0x14;
        }
        iVar4 = clk_prepare(iVar7);
        if (iVar4 == 0) {
            iVar4 = clk_enable(iVar7);
            if (iVar4 == 0) {
                uVar6 = _raw_spin_lock_irqsave(piVar8 + 0xd);
                *(*piVar8 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar8 + iVar5 + 0x38);
                *(*piVar8 + iVar5 + 0x38) = uVar1 & 0xfffffffe;
                *(*piVar8 + iVar5 + 0x38) = uVar1 | 1;
                uVar2 = *(*piVar8 + iVar5 + 0x44);
                uVar3 = *(*piVar8 + iVar5 + 0x48);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar8 + 0xfb0) = 0;
                _raw_spin_unlock_irqrestore(piVar8 + 0xd,uVar6);
                iVar5 = piVar8[0xc];
                clk_disable(iVar5);
                clk_unprepare(iVar5);
                iVar4 = scnprintf(arg2,0x1000,"%llu\n",CONCAT44(uVar3,uVar2));
                return iVar4;
            }
            clk_unprepare(iVar7);
        }
        iVar5 = iVar4;
    }
    return iVar5;
}


// ===== sym.clk_prepare_enable @ 0x080020e0 (size 84) =====

int sym.clk_prepare_enable(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = clk_prepare();
    if (iVar1 == 0) {
        iVar1 = clk_enable(arg1);
        if (iVar1 != 0) {
            clk_unprepare(arg1);
        }
    }
    return iVar1;
}


// ===== sym.msr_show @ 0x08002134 (size 232) =====

int64_t sym.msr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar3 = -0x16;
    uVar5 = *(*(arg1 + 0x60) + 0x98);
    if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
        if (*(uVar5 + 0x72) == '\0') {
            iVar3 = -0x16;
        }
        else {
            uVar2 = *(uVar5 + 0x30);
            iVar3 = -0x16;
            if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
                if ((*(uVar5 + 0x18) - *(uVar5 + 0x10)) + 1U < 4) {
                    iVar3 = 0;
                }
                else {
                    uVar4 = 0;
                    iVar3 = 0;
                    while( true ) {
                        iVar1 = scnprintf(noname_1,arg2 + iVar3,0x1000 - iVar3,"%d 0x%x\n",uVar4 & 0xffffffff,
                                          *(uVar2 + uVar4 * 4));
                        iVar3 = iVar3 + iVar1;
                        uVar4 = uVar4 + 1;
                        if ((*(uVar5 + 0x18) - *(uVar5 + 0x10)) + 1U >> 2 <= uVar4) break;
                        uVar2 = *(uVar5 + 0x30);
                        noname_1 = extraout_q0;
                    }
                }
            }
        }
    }
    return iVar3;
}


// ===== sym.msr_store @ 0x0800221c (size 464) =====

void sym.msr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int *piVar7;
    int *extraout_x8;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t *piVar8;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = -0x16;
    uStack_40 = 0;
    piVar8 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar8 == NULL) || (0xfffffffffffff000 < piVar8)) goto code_r0x08002360;
    if (*(piVar8 + 0x72) != '\0') {
        iVar5 = -0x16;
        if ((piVar8[6] == 0) || (0xfffffffffffff000 < piVar8[6])) goto code_r0x08002360;
        iVar4 = sscanf(arg2,"%x %x",&uStack_40 + 4,&uStack_40);
        unaff_x19 = arg3;
        noname_1 = extraout_q0;
        if ((iVar4 == 2) && (uStack_40 >> 0x20 < (piVar8[3] - piVar8[2]) + 1U >> 2)) {
            iVar5 = arg3;
            if (*piVar8[7] != 0) goto code_r0x080022c8;
            iVar4 = sym.clk_prepare_enable(piVar8[0xc]);
            if (iVar4 == 0) {
                piVar7 = piVar8[7];
                goto code_r0x080023c4;
            }
            iVar5 = iVar4;
            noname_1 = extraout_q0_00;
            goto code_r0x08002360;
        }
    }
    iVar5 = -0x16;
code_r0x08002360:
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_38) {
        __stack_chk_fail(noname_1,iVar5);
        piVar7 = extraout_x8;
        iVar5 = unaff_x19;
code_r0x080023c4:
        Hint_Prefetch(piVar7,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
                *piVar7 = *piVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
code_r0x080022c8:
        uVar6 = _raw_spin_lock_irqsave(piVar8 + 0xd);
        *(*piVar8 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar8 + piVar8[2] + (uStack_40._4_4_ << 2)) = uStack_40;
        *(piVar8[6] + uStack_40._4_4_ * 4) = *(*piVar8 + piVar8[2] + (uStack_40._4_4_ << 2));
        DataSynchronizationBarrier(3,3,0);
        *(*piVar8 + 0xfb0) = 0;
        noname_1 = _raw_spin_unlock_irqrestore(piVar8 + 0xd,uVar6);
        unaff_x19 = iVar5;
    }
    return;
}


// ===== sym.msr_reset_store @ 0x080023ec (size 404) =====

int64_t sym.msr_reset_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    uchar *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    int64_t iStack_40;
    int64_t iStack_38;
    
    puVar4 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_40 = 0;
    piVar7 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = -0x16;
    if ((piVar7 == NULL) || (0xfffffffffffff000 < piVar7)) goto code_r0x08002548;
    if (*(piVar7 + 0x72) != '\0') {
        iVar6 = -0x16;
        if ((piVar7[6] == 0) || (0xfffffffffffff000 < piVar7[6])) goto code_r0x08002548;
        iVar2 = kstrtoull(arg2,0,&stack0xffffffffffffffc0);
        iVar6 = -0x16;
        arg2 = puVar4;
        noname_1 = extraout_q0;
        if ((iVar2 != 0) || (iStack_40 != 1)) goto code_r0x08002548;
        if (*piVar7[7] != 0) {
            *piVar7[7] = 0;
            uVar3 = _raw_spin_lock_irqsave(piVar7 + 0xd);
            *(*piVar7 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar6 = piVar7[2];
            if (3 < (piVar7[3] - iVar6) + 1U) {
                uVar5 = 0;
                do {
                    *(*piVar7 + iVar6 + (uVar5 << 2)) = 0;
                    *(piVar7[6] + uVar5 * 4) = 0;
                    iVar6 = piVar7[2];
                    uVar5 = uVar5 + 1;
                } while (uVar5 < (piVar7[3] - iVar6) + 1U >> 2);
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar7 + 0xfb0) = 0;
            _raw_spin_unlock_irqrestore(piVar7 + 0xd,uVar3);
            iVar6 = piVar7[0xc];
            clk_disable(iVar6);
            noname_1 = clk_unprepare(iVar6);
            iVar6 = arg3;
            arg2 = puVar4;
            goto code_r0x08002548;
        }
    }
    iVar6 = -0x16;
code_r0x08002548:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar6;
    }
    iVar6 = __stack_chk_fail(noname_1,iVar6);
    *extraout_x18 = 0x800257c;
    uVar5 = *(*(iVar6 + 0x60) + 0x98);
    if (((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) || (*(uVar5 + 0x6c) == '\0')) {
        _dev_err(iVar6,"Invalid param\n");
        iVar6 = -0x16;
    }
    else {
        iVar2 = scnprintf(arg2,0x1000,"%#lx\n",*(uVar5 + 0x44));
        iVar6 = iVar2;
    }
    return iVar6;
}


// ===== sym.flushperiod_show @ 0x08002580 (size 112) =====

int64_t sym.flushperiod_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(*(arg1 + 0x60) + 0x98);
    if (((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) || (*(uVar3 + 0x6c) == '\0')) {
        _dev_err(arg1,"Invalid param\n");
        iVar2 = -0x16;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,"%#lx\n",*(uVar3 + 0x44));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.flushperiod_store @ 0x080025f0 (size 348) =====

uchar * sym.flushperiod_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_50 = 0;
    piVar7 = *(*(arg1 + 0x60) + 0x98);
    if (((piVar7 == NULL) || (0xfffffffffffff000 < piVar7)) || (*(piVar7 + 0x6c) == '\0')) {
        _dev_err(arg1,"Invalid param\n");
    }
    else {
        piVar1 = piVar7 + 0xd;
        uVar5 = _raw_spin_lock_irqsave(piVar1);
        iVar4 = kstrtoull(arg2,0,&stack0xffffffffffffffb0);
        if ((iVar4 == 0) && (uStack_50 < 0x10000)) {
            if ((uStack_50 != *(piVar7 + 0x44)) && (*(piVar7 + 0x44) = uStack_50, *(piVar7 + 0x71) != '\0')) {
                *(*piVar7 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0x34) = *(*piVar7 + 0x34) & 0xfffc0003 | *(piVar7 + 0x44) << 2;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0xfb0) = 0;
            }
            _raw_spin_unlock_irqrestore(piVar1,uVar5);
            goto code_r0x0800270c;
        }
        _raw_spin_unlock_irqrestore(piVar1,uVar5);
    }
    arg3 = -0x16;
code_r0x0800270c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_48) {
        auVar8 = __stack_chk_fail();
        puVar6 = auVar8._0_8_;
        *extraout_x18 = 0x8002748;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar8._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x80027a4);
        (*pcVar3)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x0800274c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002790

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
    //switch table (4 cases) at 0x8000418
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80027a4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080028d8 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.csr_probe.6f4c84a8aa575570f427705a306ccafe.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800290c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.csr_probe.6f4c84a8aa575570f427705a306ccafe.cfi_jt);
    return;
}

