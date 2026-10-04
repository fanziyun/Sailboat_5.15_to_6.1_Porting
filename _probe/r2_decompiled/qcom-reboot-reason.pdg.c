// decompiled from qcom-reboot-reason by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x08001478

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x641d19c7be126e92) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.qcom_reboot_reason_remove.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt;
code_r0x080010d8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001438;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08001438;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x641d19c7be126e92) {
        pcVar2 = sym.ufs_ffu_reboot_reason_reboot.cfi_jt;
    }
    else {
        if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.qcom_reboot_reason_reboot.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt;
            goto code_r0x080010d8;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001438;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001438:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800148c);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_reboot_reason_probe.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_reboot_reason_probe.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.ufs_ffu_reboot_reason_reboot.cfi_jt @ 0x08001110 (size 8) =====

ulong sym.ufs_ffu_reboot_reason_reboot.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        uVar7 = 0x8002;
    }
    else if (param_1 == 0) {
        uVar4 = *(_segment.ehdr + 0x38);
        iVar5 = 0x80000d8;
code_r0x080011d0:
        uVar7 = 1;
        nvmem_cell_write(uVar4,iVar5,1);
    }
    else {
        pcVar6 = obj.ffu_reboot;
        if (_obj.ffu_reboot != 0) {
            iVar2 = 0x8000058;
            do {
                iVar5 = iVar2;
                iVar3 = strcmp(param_1);
                if (iVar3 == 0) {
                    uVar4 = *(iVar1 + 0x38);
                    goto code_r0x080011d0;
                }
                iVar2 = iVar5 + 0x10;
            } while (*(iVar5 + 8) != 0);
            pcVar6 = iVar5 + 8;
        }
        uVar7 = 1;
        nvmem_cell_write(*(iVar1 + 0x38),pcVar6 + 8,1);
    }
    return uVar7;
}


// ===== sym.qcom_reboot_reason_reboot.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt @ 0x08001118 (size 8) =====

ulong sym.qcom_reboot_reason_reboot.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt
                (int64_t param_1,ulong param_2,int64_t param_3)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == 0) {
        uVar3 = *(param_1 + 0x30);
        pcVar6 = 0x80000d8;
    }
    else {
        pcVar6 = obj.ffu_reboot;
        if (_obj.ffu_reboot != 0) {
            iVar5 = param_3;
            pcVar1 = 0x8000058;
            do {
                pcVar6 = pcVar1;
                iVar2 = strcmp(param_3);
                if (iVar2 == 0) {
                    iVar2 = strcmp("dm-verity device corrupted",param_3);
                    if (iVar2 == 0) {
                        _printk(0x80003ab);
                        iVar4 = panic(param_3);
                        *extraout_x18 = sym.panic_prep_restart;
                        iVar2 = strcmp("dm-verity device corrupted",iVar5);
                        uVar3 = 0x8000088;
                        if (iVar2 != 0) {
                            uVar3 = 0x80000c8;
                        }
                        nvmem_cell_write(*(iVar4 + 0x18),uVar3,1);
                        return 0;
                    }
                    uVar3 = *(param_1 + 0x30);
                    goto code_r0x08001398;
                }
                pcVar1 = pcVar6 + 0x10;
            } while (*(pcVar6 + 8) != 0);
            pcVar6 = pcVar6 + 8;
        }
        uVar3 = *(param_1 + 0x30);
        pcVar6 = pcVar6 + 8;
    }
code_r0x08001398:
    nvmem_cell_write(uVar3,pcVar6,1);
    return 1;
}


// ===== sym.panic_prep_restart.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.panic_prep_restart.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = strcmp("dm-verity device corrupted",param_3);
    uVar1 = 0x8000088;
    if (iVar2 != 0) {
        uVar1 = 0x80000c8;
    }
    nvmem_cell_write(*(param_1 + 0x18),uVar1,1);
    return 0;
}


// ===== sym.qcom_reboot_reason_remove.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.qcom_reboot_reason_remove.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    atomic_notifier_chain_unregister(panic_notifier_list,iVar1 + 0x20);
    unregister_reboot_notifier(iVar1 + 8);
    return 0;
}


// ===== sym.qcom_reboot_reason_probe.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt @ 0x08001130 (size 8) =====

uint64_t sym.qcom_reboot_reason_probe.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    piVar2 = devm_kmalloc(iVar1,0x40,0xdc0);
    if (piVar2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        *piVar2 = iVar1;
        uVar3 = nvmem_cell_get(iVar1,"restart_reason");
        piVar2[7] = uVar3;
        if (uVar3 < 0xfffffffffffff001) {
            piVar2[1] = sym.qcom_reboot_reason_reboot.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt;
            *(piVar2 + 3) = 0xff;
            register_reboot_notifier();
            *(param_1 + 0xa8) = piVar2;
            *(piVar2 + 6) = 0x7fffffff;
            piVar2[4] = sym.panic_prep_restart.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt;
            atomic_notifier_chain_register(panic_notifier_list);
            uVar3 = 0;
            _segment.ehdr = piVar2;
        }
    }
    return uVar3;
}


// ===== sym.ufs_ffu_reboot_reason_reboot @ 0x08001138 (size 192) =====

ulong sym.ufs_ffu_reboot_reason_reboot(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        uVar7 = 0x8002;
    }
    else if (arg1 == 0) {
        uVar4 = *(_segment.ehdr + 0x38);
        iVar5 = 0x80000d8;
code_r0x080011d0:
        uVar7 = 1;
        nvmem_cell_write(uVar4,iVar5,1);
    }
    else {
        pcVar6 = obj.ffu_reboot;
        if (_obj.ffu_reboot != 0) {
            iVar2 = 0x8000058;
            do {
                iVar5 = iVar2;
                iVar3 = strcmp(arg1);
                if (iVar3 == 0) {
                    uVar4 = *(iVar1 + 0x38);
                    goto code_r0x080011d0;
                }
                iVar2 = iVar5 + 0x10;
            } while (*(iVar5 + 8) != 0);
            pcVar6 = iVar5 + 8;
        }
        uVar7 = 1;
        nvmem_cell_write(*(iVar1 + 0x38),pcVar6 + 8,1);
    }
    return uVar7;
}


// ===== sym.qcom_reboot_reason_probe @ 0x080011f8 (size 200) =====

uint64_t sym.qcom_reboot_reason_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    piVar2 = devm_kmalloc(iVar1,0x40,0xdc0);
    if (piVar2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        *piVar2 = iVar1;
        uVar3 = nvmem_cell_get(iVar1,"restart_reason");
        piVar2[7] = uVar3;
        if (uVar3 < 0xfffffffffffff001) {
            piVar2[1] = sym.qcom_reboot_reason_reboot.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt;
            *(piVar2 + 3) = 0xff;
            register_reboot_notifier();
            *(arg1 + 0xa8) = piVar2;
            *(piVar2 + 6) = 0x7fffffff;
            piVar2[4] = sym.panic_prep_restart.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt;
            atomic_notifier_chain_register(panic_notifier_list);
            uVar3 = 0;
            _segment.ehdr = piVar2;
        }
    }
    return uVar3;
}


// ===== sym.qcom_reboot_reason_remove @ 0x080012c0 (size 72) =====

ulong sym.qcom_reboot_reason_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    atomic_notifier_chain_unregister(panic_notifier_list,iVar1 + 0x20);
    unregister_reboot_notifier(iVar1 + 8);
    return 0;
}


// ===== sym.qcom_reboot_reason_reboot @ 0x08001308 (size 200) =====

ulong sym.qcom_reboot_reason_reboot(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar3 = *(arg1 + 0x30);
        pcVar6 = 0x80000d8;
    }
    else {
        pcVar6 = obj.ffu_reboot;
        if (_obj.ffu_reboot != 0) {
            iVar5 = arg2;
            pcVar1 = 0x8000058;
            do {
                pcVar6 = pcVar1;
                iVar2 = strcmp(noname_1,arg2);
                if (iVar2 == 0) {
                    iVar2 = strcmp("dm-verity device corrupted",arg2);
                    if (iVar2 == 0) {
                        _printk(0x80003ab);
                        iVar4 = panic(arg2);
                        *extraout_x18 = sym.panic_prep_restart;
                        iVar2 = strcmp("dm-verity device corrupted",iVar5);
                        uVar3 = 0x8000088;
                        if (iVar2 != 0) {
                            uVar3 = 0x80000c8;
                        }
                        nvmem_cell_write(*(iVar4 + 0x18),uVar3,1);
                        return 0;
                    }
                    uVar3 = *(arg1 + 0x30);
                    goto code_r0x08001398;
                }
                pcVar1 = pcVar6 + 0x10;
                noname_1 = extraout_q0;
            } while (*(pcVar6 + 8) != 0);
            pcVar6 = pcVar6 + 8;
        }
        uVar3 = *(arg1 + 0x30);
        pcVar6 = pcVar6 + 8;
    }
code_r0x08001398:
    nvmem_cell_write(uVar3,pcVar6,1);
    return 1;
}


// ===== sym.panic_prep_restart @ 0x080013d0 (size 100) =====

ulong sym.panic_prep_restart(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = strcmp("dm-verity device corrupted",arg2);
    uVar1 = 0x8000088;
    if (iVar2 != 0) {
        uVar1 = 0x80000c8;
    }
    nvmem_cell_write(*(arg1 + 0x18),uVar1,1);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001434 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001478

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x800148c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080014b4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_reboot_reason_probe.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080014e8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_reboot_reason_probe.8eaaedc495b2c396f49d8d7d4c691cf7.cfi_jt);
    return;
}

