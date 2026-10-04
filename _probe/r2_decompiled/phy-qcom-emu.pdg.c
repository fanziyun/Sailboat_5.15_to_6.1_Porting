// decompiled from phy-qcom-emu by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 208) =====

//WARNING: Switch with 1 destination removed at 0x080015f4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x80010f0 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080015b4;
        }
        if (arg1 != -0x5e5b96c73454931) goto code_r0x080015b4;
        pcVar2 = sym.qcusb_emu_phy_init.c96a930596e8da711feb3fda5d955735.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080015b4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080015b4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001608);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcusb_emu_phy_probe.c96a930596e8da711feb3fda5d955735.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcusb_emu_phy_probe.c96a930596e8da711feb3fda5d955735.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcusb_emu_phy_init.c96a930596e8da711feb3fda5d955735.cfi_jt @ 0x080010e8 (size 8) =====

ulong sym.qcusb_emu_phy_init.c96a930596e8da711feb3fda5d955735.cfi_jt(ulong *param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int iVar3;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xffffffff,param_1[0x2f] + 4);
    usleep_range_state(10000,12000,2);
    uVar1 = sym.readl_relaxed(param_1[0x2f] + 0x34);
    sym.writel_relaxed(uVar1 | 0x2000000,param_1[0x2f] + 0x34);
    usleep_range_state(10000,12000,2);
    uVar1 = sym.readl_relaxed(param_1[0x2f] + 0x34);
    sym.writel_relaxed(uVar1 & 0xfdffffff,param_1[0x2f] + 0x34);
    usleep_range_state(10000,12000,2);
    sym.writel_relaxed(0xfffffff3,param_1[0x2f] + 4);
    usleep_range_state(10000,12000,2);
    sym.writel_relaxed(0xfffffff0,param_1[0x2f] + 4);
    usleep_range_state(10000,12000,2);
    if (0 < *(param_1 + 0x32)) {
        iVar3 = 0;
        do {
            sym.writel_relaxed(*(param_1[0x31] + iVar3 * 4),param_1[0x2f] + *(param_1[0x31] + (iVar3 + 1) * 4));
            usleep_range_state(10000,12000,2);
            iVar3 = iVar3 + 2;
        } while (iVar3 < *(param_1 + 0x32));
    }
    sym.writel_relaxed(0,param_1[0x2f] + 4);
    usleep_range_state(10000,12000,2);
    sym.writel_relaxed(9,param_1[0x2f] + 0x14);
    usleep_range_state(10000,12000,2);
    uVar4 = *param_1;
    uVar2 = sym.readl_relaxed(param_1[0x2f] + 0x10);
    _dev_info(uVar4,"PHY UTMI/ULPI CLK frequency:%d MHz\n",(uVar2 & 0xffffffff) / 1000);
    if (param_1[0x30] != 0) {
        uVar1 = sym.readl_relaxed(param_1[0x30] + 0x10);
        sym.writel_relaxed(uVar1 & 0xefffffff,param_1[0x30] + 0x10);
    }
    return 0;
}


// ===== sym.qcusb_emu_phy_probe.c96a930596e8da711feb3fda5d955735.cfi_jt @ 0x080010f0 (size 8) =====

uint64_t sym.qcusb_emu_phy_probe.c96a930596e8da711feb3fda5d955735.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar9 = param_1 + 0x10;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_3c = 0;
    piVar2 = devm_kmalloc(iVar9,0x198,0xdc0);
    if (piVar2 == NULL) {
code_r0x08001254:
        uVar4 = 0xfffffff4;
    }
    else {
        *piVar2 = iVar9;
        uVar3 = platform_get_resource(param_1,0x200,0);
        uVar4 = devm_ioremap_resource(iVar9,uVar3);
        piVar2[0x2f] = uVar4;
        if (0xfffffffffffff000 < uVar4) goto code_r0x08001258;
        of_get_property(*(param_1 + 0x300),"qcom,emu-init-seq",&uStack_3c);
        if (uStack_3c == 0) {
            pcVar10 = "emu-init-seq not specified\n";
        }
        else {
            iVar5 = devm_kmalloc(iVar9,uStack_3c,0xdc0);
            piVar2[0x31] = iVar5;
            if (iVar5 == 0) goto code_r0x08001254;
            *(piVar2 + 0x32) = uStack_3c >> 2;
            if ((uStack_3c >> 2 & 1) == 0) {
                uVar1 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x300),"qcom,emu-init-seq",iVar5,uStack_3c >> 2,0);
                if (uVar1 < 0) {
                    uVar4 = uVar1;
                    _dev_err(iVar9,"could not read emu-init-seq, returned %d\n",uVar4);
                }
                else {
                    *(param_1 + 0xa8) = piVar2;
                    piVar2[1] = "qcom-usb-emu-phy";
                    piVar2[0x23] = sym.qcusb_emu_phy_init.c96a930596e8da711feb3fda5d955735.cfi_jt;
                    *(piVar2 + 0x14) = 1;
                    uVar6 = usb_add_phy_dev(piVar2);
                    uVar4 = uVar6 & 0xffffffff;
                    if (uVar6 == 0) {
                        piVar7 = platform_get_resource_byname(param_1,0x200,"qscratch_base");
                        if (piVar7 == NULL) {
                            uVar4 = 0;
                        }
                        else {
                            uVar8 = devm_ioremap(iVar9,*piVar7,(piVar7[1] - *piVar7) + 1);
                            uVar4 = 0;
                            uVar6 = 0;
                            if (uVar8 < 0xfffffffffffff001) {
                                uVar6 = uVar8;
                            }
                            piVar2[0x30] = uVar6;
                        }
                    }
                }
                goto code_r0x08001258;
            }
            pcVar10 = "invalid emu_init_seq_len, must be in <data,addr> pairs\n";
        }
        _dev_err(iVar9,pcVar10);
        uVar4 = 0xffffffea;
    }
code_r0x08001258:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_38) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.qcusb_emu_phy_remove;
        usb_remove_phy(*(iVar9 + 0xa8));
        return 0;
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.qcusb_emu_phy_remove.c96a930596e8da711feb3fda5d955735.cfi_jt @ 0x080010f8 (size 8) =====

ulong sym.qcusb_emu_phy_remove.c96a930596e8da711feb3fda5d955735.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_remove_phy(*(param_1 + 0xa8));
    return 0;
}


// ===== sym.qcusb_emu_phy_probe @ 0x08001100 (size 472) =====

uint64_t sym.qcusb_emu_phy_probe(int64_t arg1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar9 = arg1 + 0x10;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_3c = 0;
    piVar2 = devm_kmalloc(iVar9,0x198,0xdc0);
    if (piVar2 == NULL) {
code_r0x08001254:
        uVar4 = 0xfffffff4;
    }
    else {
        *piVar2 = iVar9;
        uVar3 = platform_get_resource(arg1,0x200,0);
        uVar4 = devm_ioremap_resource(iVar9,uVar3);
        piVar2[0x2f] = uVar4;
        if (0xfffffffffffff000 < uVar4) goto code_r0x08001258;
        of_get_property(*(arg1 + 0x300),"qcom,emu-init-seq",&uStack_3c);
        if (uStack_3c == 0) {
            pcVar10 = "emu-init-seq not specified\n";
        }
        else {
            iVar5 = devm_kmalloc(iVar9,uStack_3c,0xdc0);
            piVar2[0x31] = iVar5;
            if (iVar5 == 0) goto code_r0x08001254;
            *(piVar2 + 0x32) = uStack_3c >> 2;
            if ((uStack_3c >> 2 & 1) == 0) {
                uVar1 = of_property_read_variable_u32_array
                                  (*(arg1 + 0x300),"qcom,emu-init-seq",iVar5,uStack_3c >> 2,0);
                if (uVar1 < 0) {
                    uVar4 = uVar1;
                    _dev_err(iVar9,"could not read emu-init-seq, returned %d\n",uVar4);
                }
                else {
                    *(arg1 + 0xa8) = piVar2;
                    piVar2[1] = "qcom-usb-emu-phy";
                    piVar2[0x23] = sym.qcusb_emu_phy_init.c96a930596e8da711feb3fda5d955735.cfi_jt;
                    *(piVar2 + 0x14) = 1;
                    uVar6 = usb_add_phy_dev(piVar2);
                    uVar4 = uVar6 & 0xffffffff;
                    if (uVar6 == 0) {
                        piVar7 = platform_get_resource_byname(arg1,0x200,"qscratch_base");
                        if (piVar7 == NULL) {
                            uVar4 = 0;
                        }
                        else {
                            uVar8 = devm_ioremap(iVar9,*piVar7,(piVar7[1] - *piVar7) + 1);
                            uVar4 = 0;
                            uVar6 = 0;
                            if (uVar8 < 0xfffffffffffff001) {
                                uVar6 = uVar8;
                            }
                            piVar2[0x30] = uVar6;
                        }
                    }
                }
                goto code_r0x08001258;
            }
            pcVar10 = "invalid emu_init_seq_len, must be in <data,addr> pairs\n";
        }
        _dev_err(iVar9,pcVar10);
        uVar4 = 0xffffffea;
    }
code_r0x08001258:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_38) {
        iVar9 = __stack_chk_fail();
        *extraout_x18 = sym.qcusb_emu_phy_remove;
        usb_remove_phy(*(iVar9 + 0xa8));
        return 0;
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.qcusb_emu_phy_remove @ 0x080012d8 (size 44) =====

ulong sym.qcusb_emu_phy_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_remove_phy(*(arg1 + 0xa8));
    return 0;
}


// ===== sym.qcusb_emu_phy_init @ 0x08001304 (size 452) =====

ulong sym.qcusb_emu_phy_init(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int iVar3;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xffffffff,*(arg1 + 0x178) + 4);
    usleep_range_state(10000,12000,2);
    uVar1 = sym.readl_relaxed(*(arg1 + 0x178) + 0x34);
    sym.writel_relaxed(uVar1 | 0x2000000,*(arg1 + 0x178) + 0x34);
    usleep_range_state(10000,12000,2);
    uVar1 = sym.readl_relaxed(*(arg1 + 0x178) + 0x34);
    sym.writel_relaxed(uVar1 & 0xfdffffff,*(arg1 + 0x178) + 0x34);
    usleep_range_state(10000,12000,2);
    sym.writel_relaxed(0xfffffff3,*(arg1 + 0x178) + 4);
    usleep_range_state(10000,12000,2);
    sym.writel_relaxed(0xfffffff0,*(arg1 + 0x178) + 4);
    usleep_range_state(10000,12000,2);
    if (0 < *(arg1 + 400)) {
        iVar3 = 0;
        do {
            sym.writel_relaxed(*(*(arg1 + 0x188) + iVar3 * 4),*(arg1 + 0x178) + *(*(arg1 + 0x188) + (iVar3 + 1) * 4));
            usleep_range_state(10000,12000,2);
            iVar3 = iVar3 + 2;
        } while (iVar3 < *(arg1 + 400));
    }
    sym.writel_relaxed(0,*(arg1 + 0x178) + 4);
    usleep_range_state(10000,12000,2);
    sym.writel_relaxed(9,*(arg1 + 0x178) + 0x14);
    usleep_range_state(10000,12000,2);
    uVar4 = *arg1;
    uVar2 = sym.readl_relaxed(*(arg1 + 0x178) + 0x10);
    _dev_info(uVar4,"PHY UTMI/ULPI CLK frequency:%d MHz\n",(uVar2 & 0xffffffff) / 1000);
    if (*(arg1 + 0x180) != 0) {
        uVar1 = sym.readl_relaxed(*(arg1 + 0x180) + 0x10);
        sym.writel_relaxed(uVar1 & 0xefffffff,*(arg1 + 0x180) + 0x10);
    }
    return 0;
}


// ===== sym.writel_relaxed @ 0x080014c8 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80014e4);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800150c);
    return;
}


// ===== sym.readl_relaxed @ 0x08001540 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001544);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001578);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x080015b0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080015f4

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001608);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001614 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcusb_emu_phy_probe.c96a930596e8da711feb3fda5d955735.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001648 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcusb_emu_phy_probe.c96a930596e8da711feb3fda5d955735.cfi_jt);
    return;
}

