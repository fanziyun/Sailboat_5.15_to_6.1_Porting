// decompiled from spmi-pmic-arb-debug by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 284) =====

//WARNING: Switch with 1 destination removed at 0x08001a78

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x70d74b9759644a47) {
            pcVar2 = sym.pmic_arb_debug_read_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt;
        }
        else {
            if (arg1 != -0x3694e78aa0bd29dd) {
                if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x8001148 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08001a38;
            }
            pcVar2 = sym.pmic_arb_debug_write_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0xf445eaa7552bd33) {
        pcVar2 = sym.pmic_arb_debug_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001a38;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001a38:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001a8c);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spmi_pmic_arb_debug_probe.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001130 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.spmi_pmic_arb_debug_probe.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.pmic_arb_debug_write_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt @ 0x08001138 (size 8) =====

int sym.pmic_arb_debug_write_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt
              (int64_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4,int64_t param_5,uint64_t param_6)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_6 < 9) {
        piVar6 = *(param_1 + 0x98);
        if ((param_2 & 0xe0) == 0x40) {
            uVar3 = 0xe;
        }
        else if ((param_2 & 0xff) < 0x10) {
            uVar3 = 2;
        }
        else if ((param_2 & 0xf8) == 0x30) {
            uVar3 = 0;
        }
        else {
            if ((param_2 & 0xff) >> 7 == 0) {
                return -0x16;
            }
            uVar3 = 0x10;
        }
        iVar5 = piVar6[2];
        iVar1 = clk_prepare(iVar5);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar5);
            if (iVar1 == 0) {
                uVar2 = _raw_spin_lock_irqsave(piVar6 + 1);
                if (param_6 != 0) {
                    uVar4 = 0;
                    do {
                        sym.writel_relaxed(*(param_5 + uVar4),*piVar6 + uVar4 * 4 + 0x18);
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < param_6);
                }
                iVar1 = sym.pmic_arb_debug_issue_command(param_1,uVar3,param_3 & 0xffffffff,param_4 & 0xffffffff);
                _raw_spin_unlock_irqrestore(piVar6 + 1,uVar2);
                iVar5 = piVar6[2];
                clk_disable(iVar5);
                clk_unprepare(iVar5);
                return iVar1;
            }
            clk_unprepare(iVar5);
        }
        _printk(0x8000340,"pmic_arb_debug_write_cmd",iVar1);
    }
    else {
        _dev_err(param_1,"pmic-arb supports 1 to %d bytes per transaction, but %zu requested\n",8,param_6);
        iVar1 = -0x16;
    }
    return iVar1;
}


// ===== sym.pmic_arb_debug_read_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt @ 0x08001140 (size 8) =====

int sym.pmic_arb_debug_read_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt
              (int64_t param_1,uint8_t param_2,uint64_t param_3,uint64_t param_4,int64_t param_5,uint64_t param_6)

{
    uchar uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar7 = *(param_1 + 0x98);
    if (param_2 < '`') {
        if ((param_2 & 0xf0) == 0x20) {
            iVar6 = 0xd;
        }
        else {
            if ((param_2 & 0xf8) != 0x38) {
                return -0x16;
            }
            iVar6 = 1;
        }
    }
    else {
        iVar6 = 0xf;
    }
    iVar5 = piVar7[2];
    iVar2 = clk_prepare(iVar5);
    if (iVar2 == 0) {
        iVar2 = clk_enable(iVar5);
        if (iVar2 == 0) {
            uVar3 = _raw_spin_lock_irqsave(piVar7 + 1);
            iVar2 = sym.pmic_arb_debug_issue_command(param_1,iVar6,param_3 & 0xffffffff,param_4 & 0xffffffff);
            if ((iVar2 == 0) && (param_6 != 0)) {
                uVar4 = 0;
                do {
                    uVar1 = sym.readl_relaxed(*piVar7 + uVar4 * 4 + 0x38);
                    *(param_5 + uVar4) = uVar1;
                    uVar4 = uVar4 + 1;
                } while (uVar4 < param_6);
            }
            _raw_spin_unlock_irqrestore(piVar7 + 1,uVar3);
            iVar6 = piVar7[2];
            clk_disable(iVar6);
            clk_unprepare(iVar6);
            return iVar2;
        }
        clk_unprepare(iVar5);
    }
    _printk(0x8000340,"pmic_arb_debug_read_cmd",iVar2);
    return iVar2;
}


// ===== sym.spmi_pmic_arb_debug_remove.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt @ 0x08001148 (size 8) =====

ulong sym.spmi_pmic_arb_debug_remove.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    spmi_controller_remove(iVar1);
    if (iVar1 != 0) {
        put_device(iVar1);
    }
    return 0;
}


// ===== sym.spmi_pmic_arb_debug_probe.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt @ 0x08001150 (size 8) =====

uint64_t sym.spmi_pmic_arb_debug_probe.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar11;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    iVar10 = param_1 + 0x10;
    uStack_4c = 0;
    iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,fuse-disable-bit",&uStack_4c,1,0);
    if ((-1 < iVar3) ||
       (iVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,fuse-enable-bit",&uStack_4c,1,0),
       -1 < iVar4)) {
        if (0x1f < uStack_4c) {
            pcVar2 = "disable";
            if (iVar3 < 0) {
                pcVar2 = "enable";
            }
            _dev_err(iVar10,"qcom,fuse-%s-bit supports values 0 to 31, but %u specified\n",pcVar2);
            uVar7 = 0xffffffea;
            goto code_r0x08001358;
        }
        piVar5 = platform_get_resource_byname(param_1,0x200,"fuse");
        if (piVar5 == NULL) {
            _dev_err(iVar10,"fuse address not specified\n");
            uVar7 = 0xffffffea;
            goto code_r0x08001358;
        }
        uVar1 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar1 = 0x68000000000f13;
        }
        iVar6 = __ioremap(*piVar5,(piVar5[1] - *piVar5) + 1,uVar1);
        if (iVar6 == 0) {
            uVar7 = 0xffffffea;
            goto code_r0x08001358;
        }
        uVar7 = sym.readl_relaxed(iVar6);
        iounmap(iVar6);
        if (-1 < iVar3 != (((uVar7 & 0xffffffff) >> (uStack_4c & 0x3f) & 1) == 0)) {
            _dev_err(iVar10,"SPMI PMIC arbiter debug bus disabled by fuse\n");
            uVar7 = 0xffffffed;
            goto code_r0x08001358;
        }
    }
    iVar6 = spmi_controller_alloc(iVar10,0x18);
    if (iVar6 == 0) {
        uVar7 = 0xfffffff4;
        goto code_r0x08001358;
    }
    puVar11 = *(iVar6 + 0x98);
    iVar8 = platform_get_resource_byname(param_1,0x200,"core");
    if (iVar8 == 0) {
        _dev_err(iVar10,"core address not specified\n");
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = devm_ioremap_resource(iVar6,iVar8);
        *puVar11 = uVar7;
        if (uVar7 < 0xfffffffffffff001) {
            iVar8 = of_find_property(*(param_1 + 0x300),"clock-names",0);
            if (iVar8 != 0) {
                uVar7 = devm_clk_get(iVar10,"core_clk");
                puVar11[2] = uVar7;
                if (0xfffffffffffff000 < uVar7) {
                    if (uVar7 == -0x205) {
                        uVar7 = 0xfffffdfb;
                    }
                    else {
                        _dev_err(iVar10,"unable to request core clock, rc=%d\n",uVar7 & 0xffffffff);
                    }
                    goto code_r0x08001350;
                }
            }
            *(param_1 + 0xa8) = iVar6;
            *(puVar11 + 1) = 0;
            *(iVar6 + 0x398) = sym.pmic_arb_debug_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt;
            *(iVar6 + 0x3a0) = sym.pmic_arb_debug_read_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt;
            *(iVar6 + 0x3a8) = sym.pmic_arb_debug_write_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt;
            uVar9 = spmi_controller_add(iVar6);
            uVar7 = uVar9 & 0xffffffff;
            if (uVar9 == 0) {
                _dev_info(iVar6,"SPMI PMIC arbiter debug bus controller added\n");
                goto code_r0x08001358;
            }
        }
        else {
            uVar7 = uVar7 & 0xffffffff;
        }
    }
code_r0x08001350:
    put_device(iVar6);
code_r0x08001358:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return uVar7 & 0xffffffff;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.spmi_pmic_arb_debug_remove;
    iVar10 = *(iVar10 + 0xa8);
    spmi_controller_remove(iVar10);
    if (iVar10 != 0) {
        put_device(iVar10);
    }
    return 0;
}


// ===== sym.pmic_arb_debug_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt @ 0x08001158 (size 8) =====

uint sym.pmic_arb_debug_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt(ulong param_1,uint32_t param_2)

{
    uint uVar1;
    
    uVar1 = 0xffffffea;
    if (0xfffffffb < (param_2 & 0xff) - 0x14) {
        uVar1 = 0xffffffa1;
    }
    return uVar1;
}


// ===== sym.spmi_pmic_arb_debug_probe @ 0x08001160 (size 728) =====

uint64_t sym.spmi_pmic_arb_debug_probe(int64_t arg1)

{
    ulong uVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar11;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    iVar10 = arg1 + 0x10;
    uStack_4c = 0;
    iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,fuse-disable-bit",&uStack_4c,1,0);
    if ((-1 < iVar3) ||
       (iVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,fuse-enable-bit",&uStack_4c,1,0),
       -1 < iVar4)) {
        if (0x1f < uStack_4c) {
            pcVar2 = "disable";
            if (iVar3 < 0) {
                pcVar2 = "enable";
            }
            _dev_err(iVar10,"qcom,fuse-%s-bit supports values 0 to 31, but %u specified\n",pcVar2);
            uVar7 = 0xffffffea;
            goto code_r0x08001358;
        }
        piVar5 = platform_get_resource_byname(arg1,0x200,"fuse");
        if (piVar5 == NULL) {
            _dev_err(iVar10,"fuse address not specified\n");
            uVar7 = 0xffffffea;
            goto code_r0x08001358;
        }
        uVar1 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar1 = 0x68000000000f13;
        }
        iVar6 = __ioremap(*piVar5,(piVar5[1] - *piVar5) + 1,uVar1);
        if (iVar6 == 0) {
            uVar7 = 0xffffffea;
            goto code_r0x08001358;
        }
        uVar7 = sym.readl_relaxed(iVar6);
        iounmap(iVar6);
        if (-1 < iVar3 != (((uVar7 & 0xffffffff) >> (uStack_4c & 0x3f) & 1) == 0)) {
            _dev_err(iVar10,"SPMI PMIC arbiter debug bus disabled by fuse\n");
            uVar7 = 0xffffffed;
            goto code_r0x08001358;
        }
    }
    iVar6 = spmi_controller_alloc(iVar10,0x18);
    if (iVar6 == 0) {
        uVar7 = 0xfffffff4;
        goto code_r0x08001358;
    }
    puVar11 = *(iVar6 + 0x98);
    iVar8 = platform_get_resource_byname(arg1,0x200,"core");
    if (iVar8 == 0) {
        _dev_err(iVar10,"core address not specified\n");
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = devm_ioremap_resource(iVar6,iVar8);
        *puVar11 = uVar7;
        if (uVar7 < 0xfffffffffffff001) {
            iVar8 = of_find_property(*(arg1 + 0x300),"clock-names",0);
            if (iVar8 != 0) {
                uVar7 = devm_clk_get(iVar10,"core_clk");
                puVar11[2] = uVar7;
                if (0xfffffffffffff000 < uVar7) {
                    if (uVar7 == -0x205) {
                        uVar7 = 0xfffffdfb;
                    }
                    else {
                        _dev_err(iVar10,"unable to request core clock, rc=%d\n",uVar7 & 0xffffffff);
                    }
                    goto code_r0x08001350;
                }
            }
            *(arg1 + 0xa8) = iVar6;
            *(puVar11 + 1) = 0;
            *(iVar6 + 0x398) = sym.pmic_arb_debug_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt;
            *(iVar6 + 0x3a0) = sym.pmic_arb_debug_read_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt;
            *(iVar6 + 0x3a8) = sym.pmic_arb_debug_write_cmd.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt;
            uVar9 = spmi_controller_add(iVar6);
            uVar7 = uVar9 & 0xffffffff;
            if (uVar9 == 0) {
                _dev_info(iVar6,"SPMI PMIC arbiter debug bus controller added\n");
                goto code_r0x08001358;
            }
        }
        else {
            uVar7 = uVar7 & 0xffffffff;
        }
    }
code_r0x08001350:
    put_device(iVar6);
code_r0x08001358:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return uVar7 & 0xffffffff;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.spmi_pmic_arb_debug_remove;
    iVar10 = *(iVar10 + 0xa8);
    spmi_controller_remove(iVar10);
    if (iVar10 != 0) {
        put_device(iVar10);
    }
    return 0;
}


// ===== sym.spmi_pmic_arb_debug_remove @ 0x08001438 (size 68) =====

ulong sym.spmi_pmic_arb_debug_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    spmi_controller_remove(iVar1);
    if (iVar1 != 0) {
        put_device(iVar1);
    }
    return 0;
}


// ===== sym.readl_relaxed @ 0x0800147c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001480);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80014b4);
    return uVar1;
}


// ===== sym.pmic_arb_debug_cmd @ 0x080014ec (size 36) =====

uint sym.pmic_arb_debug_cmd(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    
    uVar1 = 0xffffffea;
    if (0xfffffffb < (arg1 & 0xff) - 0x14) {
        uVar1 = 0xffffffa1;
    }
    return uVar1;
}


// ===== sym.pmic_arb_debug_read_cmd @ 0x08001510 (size 372) =====

int sym.pmic_arb_debug_read_cmd(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    int iVar2;
    ulong uVar3;
    int64_t in_x4;
    uint64_t in_x5;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar7 = *(arg1 + 0x98);
    if (arg2 < '`') {
        if ((arg2 & 0xf0) == 0x20) {
            iVar6 = 0xd;
        }
        else {
            if ((arg2 & 0xf8) != 0x38) {
                return -0x16;
            }
            iVar6 = 1;
        }
    }
    else {
        iVar6 = 0xf;
    }
    iVar5 = piVar7[2];
    iVar2 = clk_prepare(iVar5);
    if (iVar2 == 0) {
        iVar2 = clk_enable(iVar5);
        if (iVar2 == 0) {
            uVar3 = _raw_spin_lock_irqsave(piVar7 + 1);
            iVar2 = sym.pmic_arb_debug_issue_command(arg1,iVar6,arg3 & 0xffffffff,arg4 & 0xffffffff);
            if ((iVar2 == 0) && (in_x5 != 0)) {
                uVar4 = 0;
                do {
                    uVar1 = sym.readl_relaxed(*piVar7 + uVar4 * 4 + 0x38);
                    *(in_x4 + uVar4) = uVar1;
                    uVar4 = uVar4 + 1;
                } while (uVar4 < in_x5);
            }
            _raw_spin_unlock_irqrestore(piVar7 + 1,uVar3);
            iVar6 = piVar7[2];
            clk_disable(iVar6);
            clk_unprepare(iVar6);
            return iVar2;
        }
        clk_unprepare(iVar5);
    }
    _printk(0x8000340,"pmic_arb_debug_read_cmd",iVar2);
    return iVar2;
}


// ===== sym.pmic_arb_debug_write_cmd @ 0x08001684 (size 416) =====

int sym.pmic_arb_debug_write_cmd(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    int64_t in_x4;
    uint64_t in_x5;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x5 < 9) {
        uVar3 = arg2;
        piVar6 = *(arg1 + 0x98);
        if ((uVar3 & 0xe0) == 0x40) {
            uVar3 = 0xe;
        }
        else if ((uVar3 & 0xff) < 0x10) {
            uVar3 = 2;
        }
        else if ((uVar3 & 0xf8) == 0x30) {
            uVar3 = 0;
        }
        else {
            if ((uVar3 & 0xff) >> 7 == 0) {
                return -0x16;
            }
            uVar3 = 0x10;
        }
        iVar5 = piVar6[2];
        iVar1 = clk_prepare(iVar5);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar5);
            if (iVar1 == 0) {
                uVar2 = _raw_spin_lock_irqsave(piVar6 + 1);
                if (in_x5 != 0) {
                    uVar4 = 0;
                    do {
                        sym.writel_relaxed(*(in_x4 + uVar4),*piVar6 + uVar4 * 4 + 0x18);
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < in_x5);
                }
                iVar1 = sym.pmic_arb_debug_issue_command(arg1,uVar3,arg3 & 0xffffffff,arg4 & 0xffffffff);
                _raw_spin_unlock_irqrestore(piVar6 + 1,uVar2);
                iVar5 = piVar6[2];
                clk_disable(iVar5);
                clk_unprepare(iVar5);
                return iVar1;
            }
            clk_unprepare(iVar5);
        }
        _printk(0x8000340,"pmic_arb_debug_write_cmd",iVar1);
    }
    else {
        _dev_err(arg1,"pmic-arb supports 1 to %d bytes per transaction, but %zu requested\n",8);
        iVar1 = -0x16;
    }
    return iVar1;
}


// ===== sym.pmic_arb_debug_issue_command @ 0x08001824 (size 408) =====

ulong sym.pmic_arb_debug_issue_command(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    bool bVar2;
    uint32_t uVar3;
    ulong uVar4;
    char *pcVar5;
    int in_w4;
    ulong *in_x18;
    int iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = in_w4 - 1U & 0xff;
    if (uVar3 < 8) {
        uVar1 = arg3 & 0xff;
        if (uVar1 < 0x10) {
            piVar7 = *(arg1 + 0x98);
            sym.writel_relaxed(arg4 & 0xff,*piVar7 + 0xc);
            sym.writel_relaxed(arg4 >> 8 & 0xff,*piVar7 + 8);
            sym.writel_relaxed(uVar1 | uVar3 << 4,*piVar7 + 4);
            sym.writel_relaxed((arg2 & 0xff) << 1,*piVar7);
            piVar7 = *(arg1 + 0x98);
            iVar6 = -100;
            do {
                uVar3 = sym.readl_relaxed(*piVar7 + 0x14);
                if ((uVar3 & 1) != 0) {
                    if ((uVar3 >> 2 & 1) != 0) {
                        _dev_err(arg1,"%s: transaction denied (0x%x)\n","pmic_arb_debug_wait_for_done",uVar3);
                        return 0xffffffff;
                    }
                    if ((uVar3 >> 1 & 1) == 0) {
                        if ((uVar3 >> 3 & 1) == 0) {
                            return 0;
                        }
                        pcVar5 = "%s: transaction dropped (0x%x)\n";
                    }
                    else {
                        pcVar5 = "%s: transaction failed (0x%x)\n";
                    }
                    _dev_err(arg1,pcVar5,"pmic_arb_debug_wait_for_done",uVar3);
                    return 0xfffffffb;
                }
                __const_udelay(0x10c7);
                bVar2 = iVar6 != -1;
                iVar6 = iVar6 + 1;
            } while (bVar2);
            _dev_err(arg1,"%s: timeout, status 0x%x\n","pmic_arb_debug_wait_for_done",uVar3);
            uVar4 = 0xffffff92;
        }
        else {
            _dev_err(arg1,"pmic-arb supports sid 0 to %u, but %u requested\n",0xf,uVar1);
            uVar4 = 0xffffffea;
        }
    }
    else {
        _dev_err(arg1,"pmic-arb supports 1 to %d bytes per transaction, but %zu requested\n",8);
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.writel_relaxed @ 0x080019bc (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80019d8);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001a00);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001a34 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001a78

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001a8c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001a94 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.spmi_pmic_arb_debug_probe.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001ac8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spmi_pmic_arb_debug_probe.fa23538a9ab76f2ae8641cb77d4ef0a9.cfi_jt);
    return;
}

