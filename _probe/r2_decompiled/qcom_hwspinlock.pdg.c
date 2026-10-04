// decompiled from qcom_hwspinlock by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x080014a0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            uVar2 = 0x80010f0;
        }
        else {
            if (arg1 != -0x11bd673163e043ac) goto code_r0x08001460;
            uVar2 = 0x80010f8;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x8001108;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        uVar2 = 0x8001100;
    }
    else {
        if (arg1 != 0x7f738a5b5f2da1f7) goto code_r0x08001460;
        uVar2 = 0x8001110;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001460:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80014b4);
    (*pcVar1)();
}


// ===== sym.qcom_hwspinlock_probe.ec7b54528b020c18571992c3df1c5e24.cfi_jt @ 0x080010f0 (size 8) =====

uchar * sym.qcom_hwspinlock_probe.ec7b54528b020c18571992c3df1c5e24.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    uchar *puVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong uVar9;
    int64_t iVar10;
    ulong *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    int iStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int aiStack_78 [6];
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    iVar1 = param_1 + 0x10;
    uStack_60 = 0;
    iVar4 = of_parse_phandle(*(param_1 + 0x300),"syscon",0);
    if (iVar4 == 0) {
code_r0x080011bc:
        uStack_60 = 0x100000000000;
        uVar5 = devm_platform_ioremap_resource(param_1,0);
        if (uVar5 < 0xfffffffffffff001) {
            uVar5 = __devm_regmap_init_mmio_clk(iVar1,0,uVar5,obj.tcsr_mutex_config,0,0);
        }
code_r0x08001200:
        if (uVar5 < 0xfffffffffffff001) {
            iVar4 = devm_kmalloc(iVar1,0x318,0xdc0);
            if (iVar4 == 0) {
                uVar5 = 0xfffffff4;
            }
            else {
                iVar10 = 0;
                *(param_1 + 0xa8) = iVar4;
                puVar11 = iVar4 + 0x28;
                do {
                    aiStack_78[1] = 0;
                    aiStack_78[2] = 0x1f;
                    aiStack_78[3] = 0;
                    aiStack_78[4] = 0;
                    aiStack_78[0] = uStack_60 + uStack_60._4_4_ * iVar10;
                    uVar6 = devm_regmap_field_alloc(iVar1,uVar5,aiStack_78);
                    iVar10 = iVar10 + 1;
                    *puVar11 = uVar6;
                    puVar11 = puVar11 + 3;
                } while (iVar10 != 0x20);
                uVar5 = devm_hwspin_lock_register
                                  (iVar1,iVar4,reloc.qcom_hwspinlock_trylock.ec7b54528b020c18571992c3df1c5e24.cfi_jt,
                                   0,0x20);
                uVar5 = uVar5 & 0xffffffff;
            }
        }
    }
    else {
        uVar5 = syscon_node_to_regmap();
        if (0xfffffffffffff000 < uVar5) {
code_r0x080011b4:
            if (uVar5 == 0xffffffffffffffed) goto code_r0x080011bc;
            goto code_r0x08001200;
        }
        iVar3 = of_property_read_u32_index(*(param_1 + 0x300),"syscon",1,&uStack_60);
        if (iVar3 < 0) {
            pcVar8 = "no offset in syscon\n";
        }
        else {
            iVar3 = of_property_read_u32_index(*(param_1 + 0x300),"syscon",2,&uStack_60 + 4);
            if (-1 < iVar3) goto code_r0x080011b4;
            pcVar8 = "no stride syscon\n";
        }
        _dev_err(iVar1,pcVar8);
        uVar5 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar5 & 0xffffffff;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_hwspinlock_trylock;
    pcStack_98 = sym.qcom_hwspinlock_trylock;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    uVar6 = *(iVar10 + 0x10);
    iStack_ac = 0;
    puStack_a0 = &stack0xffffffffffffffb0;
    iStack_90 = iVar1;
    puVar7 = regmap_field_update_bits_base(uVar6,0xffffffff,1,0,0,0);
    if ((puVar7 == 0) && (puVar7 = regmap_field_read(uVar6,&iStack_ac), puVar7 == 0)) {
        puVar7 = iStack_ac == 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return puVar7;
    }
    iVar4 = __stack_chk_fail(puVar7);
    *extraout_x18_00 = sym.qcom_hwspinlock_unlock;
    pcStack_c8 = sym.qcom_hwspinlock_unlock;
    iVar1 = sp_el0;
    iStack_d8 = *(iVar1 + 0x5e0);
    uVar9 = *(iVar4 + 0x10);
    iStack_dc = 0;
    ppuStack_d0 = &puStack_a0;
    uStack_c0 = uVar6;
    iVar3 = regmap_field_read(uVar9,&iStack_dc);
    if (iVar3 == 0) {
        if (iStack_dc != 1) {
            _printk(0x80003b1,"qcom_hwspinlock_unlock");
        }
        puVar7 = regmap_field_update_bits_base(uVar9,0xffffffff,0,0,0,0);
        if (puVar7 == 0) goto code_r0x080013f0;
        uVar6 = 0x8000390;
    }
    else {
        uVar6 = 0x80003f6;
    }
    puVar7 = _printk(uVar6,"qcom_hwspinlock_unlock");
code_r0x080013f0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_d8) {
        auVar12 = __stack_chk_fail();
        puVar7 = auVar12._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar12._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80014b4);
        (*pcVar2)();
    }
    return puVar7;
}


// ===== sym.qcom_hwspinlock_unlock.ec7b54528b020c18571992c3df1c5e24.cfi_jt @ 0x080010f8 (size 8) =====

void sym.qcom_hwspinlock_unlock.ec7b54528b020c18571992c3df1c5e24.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar5 = *(param_1 + 0x10);
    iStack_2c = 0;
    iVar3 = regmap_field_read(uVar5,&iStack_2c);
    if (iVar3 == 0) {
        if (iStack_2c != 1) {
            _printk(0x80003b1,"qcom_hwspinlock_unlock");
        }
        iVar3 = regmap_field_update_bits_base(uVar5,0xffffffff,0,0,0,0);
        if (iVar3 == 0) goto code_r0x080013f0;
        uVar5 = 0x8000390;
    }
    else {
        uVar5 = 0x80003f6;
    }
    _printk(uVar5,"qcom_hwspinlock_unlock");
code_r0x080013f0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
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
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80014b4);
        (*pcVar2)();
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_hwspinlock_probe.ec7b54528b020c18571992c3df1c5e24.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_hwspinlock_probe.ec7b54528b020c18571992c3df1c5e24.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_hwspinlock_trylock.ec7b54528b020c18571992c3df1c5e24.cfi_jt @ 0x08001110 (size 8) =====

void sym.qcom_hwspinlock_trylock.ec7b54528b020c18571992c3df1c5e24.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar7;
    ulong uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int iStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_40;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar7 = *(param_1 + 0x10);
    iStack_2c = 0;
    uVar4 = regmap_field_update_bits_base(uVar7,0xffffffff,1,0,0,0);
    if ((uVar4 == 0) && (uVar4 = regmap_field_read(uVar7,&iStack_2c), uVar4 == 0)) {
        uVar4 = iStack_2c == 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.qcom_hwspinlock_unlock;
    pcStack_48 = sym.qcom_hwspinlock_unlock;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uVar8 = *(iVar5 + 0x10);
    iStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uStack_40 = uVar7;
    iVar3 = regmap_field_read(uVar8,&iStack_5c);
    if (iVar3 == 0) {
        if (iStack_5c != 1) {
            _printk(0x80003b1,"qcom_hwspinlock_unlock");
        }
        iVar3 = regmap_field_update_bits_base(uVar8,0xffffffff,0,0,0,0);
        if (iVar3 == 0) goto code_r0x080013f0;
        uVar7 = 0x8000390;
    }
    else {
        uVar7 = 0x80003f6;
    }
    _printk(uVar7,"qcom_hwspinlock_unlock");
code_r0x080013f0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_58) {
        auVar9 = __stack_chk_fail();
        puVar6 = auVar9._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar9._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80014b4);
        (*pcVar2)();
    }
    return;
}


// ===== sym.qcom_hwspinlock_probe @ 0x08001118 (size 472) =====

uchar * sym.qcom_hwspinlock_probe(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    uchar *puVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong uVar9;
    int64_t iVar10;
    ulong *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    int iStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int aiStack_78 [6];
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    iVar1 = arg1 + 0x10;
    uStack_60 = 0;
    iVar4 = of_parse_phandle(*(arg1 + 0x300),"syscon",0);
    if (iVar4 == 0) {
code_r0x080011bc:
        uStack_60 = 0x100000000000;
        uVar5 = devm_platform_ioremap_resource(arg1,0);
        if (uVar5 < 0xfffffffffffff001) {
            uVar5 = __devm_regmap_init_mmio_clk(iVar1,0,uVar5,obj.tcsr_mutex_config,0,0);
        }
code_r0x08001200:
        if (uVar5 < 0xfffffffffffff001) {
            iVar4 = devm_kmalloc(iVar1,0x318,0xdc0);
            if (iVar4 == 0) {
                uVar5 = 0xfffffff4;
            }
            else {
                iVar10 = 0;
                *(arg1 + 0xa8) = iVar4;
                puVar11 = iVar4 + 0x28;
                do {
                    aiStack_78[1] = 0;
                    aiStack_78[2] = 0x1f;
                    aiStack_78[3] = 0;
                    aiStack_78[4] = 0;
                    aiStack_78[0] = uStack_60 + uStack_60._4_4_ * iVar10;
                    uVar6 = devm_regmap_field_alloc(iVar1,uVar5,aiStack_78);
                    iVar10 = iVar10 + 1;
                    *puVar11 = uVar6;
                    puVar11 = puVar11 + 3;
                } while (iVar10 != 0x20);
                uVar5 = devm_hwspin_lock_register
                                  (iVar1,iVar4,reloc.qcom_hwspinlock_trylock.ec7b54528b020c18571992c3df1c5e24.cfi_jt,
                                   0,0x20);
                uVar5 = uVar5 & 0xffffffff;
            }
        }
    }
    else {
        uVar5 = syscon_node_to_regmap();
        if (0xfffffffffffff000 < uVar5) {
code_r0x080011b4:
            if (uVar5 == 0xffffffffffffffed) goto code_r0x080011bc;
            goto code_r0x08001200;
        }
        iVar3 = of_property_read_u32_index(*(arg1 + 0x300),"syscon",1,&uStack_60);
        if (iVar3 < 0) {
            pcVar8 = "no offset in syscon\n";
        }
        else {
            iVar3 = of_property_read_u32_index(*(arg1 + 0x300),"syscon",2,&uStack_60 + 4);
            if (-1 < iVar3) goto code_r0x080011b4;
            pcVar8 = "no stride syscon\n";
        }
        _dev_err(iVar1,pcVar8);
        uVar5 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar5 & 0xffffffff;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_hwspinlock_trylock;
    pcStack_98 = sym.qcom_hwspinlock_trylock;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    uVar6 = *(iVar10 + 0x10);
    iStack_ac = 0;
    puStack_a0 = &stack0xffffffffffffffb0;
    iStack_90 = iVar1;
    puVar7 = regmap_field_update_bits_base(uVar6,0xffffffff,1,0,0,0);
    if ((puVar7 == 0) && (puVar7 = regmap_field_read(uVar6,&iStack_ac), puVar7 == 0)) {
        puVar7 = iStack_ac == 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return puVar7;
    }
    iVar4 = __stack_chk_fail(puVar7);
    *extraout_x18_00 = sym.qcom_hwspinlock_unlock;
    pcStack_c8 = sym.qcom_hwspinlock_unlock;
    iVar1 = sp_el0;
    iStack_d8 = *(iVar1 + 0x5e0);
    uVar9 = *(iVar4 + 0x10);
    iStack_dc = 0;
    ppuStack_d0 = &puStack_a0;
    uStack_c0 = uVar6;
    iVar3 = regmap_field_read(uVar9,&iStack_dc);
    if (iVar3 == 0) {
        if (iStack_dc != 1) {
            _printk(0x80003b1,"qcom_hwspinlock_unlock");
        }
        puVar7 = regmap_field_update_bits_base(uVar9,0xffffffff,0,0,0,0);
        if (puVar7 == 0) goto code_r0x080013f0;
        uVar6 = 0x8000390;
    }
    else {
        uVar6 = 0x80003f6;
    }
    puVar7 = _printk(uVar6,"qcom_hwspinlock_unlock");
code_r0x080013f0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_d8) {
        auVar12 = __stack_chk_fail();
        puVar7 = auVar12._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar12._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80014b4);
        (*pcVar2)();
    }
    return puVar7;
}


// ===== sym.qcom_hwspinlock_trylock @ 0x080012f0 (size 152) =====

void sym.qcom_hwspinlock_trylock(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar7;
    ulong uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int iStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_40;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar7 = *(arg1 + 0x10);
    iStack_2c = 0;
    uVar4 = regmap_field_update_bits_base(uVar7,0xffffffff,1,0,0,0);
    if ((uVar4 == 0) && (uVar4 = regmap_field_read(uVar7,&iStack_2c), uVar4 == 0)) {
        uVar4 = iStack_2c == 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.qcom_hwspinlock_unlock;
    pcStack_48 = sym.qcom_hwspinlock_unlock;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uVar8 = *(iVar5 + 0x10);
    iStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uStack_40 = uVar7;
    iVar3 = regmap_field_read(uVar8,&iStack_5c);
    if (iVar3 == 0) {
        if (iStack_5c != 1) {
            _printk(0x80003b1,"qcom_hwspinlock_unlock");
        }
        iVar3 = regmap_field_update_bits_base(uVar8,0xffffffff,0,0,0,0);
        if (iVar3 == 0) goto code_r0x080013f0;
        uVar7 = 0x8000390;
    }
    else {
        uVar7 = 0x80003f6;
    }
    _printk(uVar7,"qcom_hwspinlock_unlock");
code_r0x080013f0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_58) {
        auVar9 = __stack_chk_fail();
        puVar6 = auVar9._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar9._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80014b4);
        (*pcVar2)();
    }
    return;
}


// ===== sym.qcom_hwspinlock_unlock @ 0x08001388 (size 212) =====

void sym.qcom_hwspinlock_unlock(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar5 = *(arg1 + 0x10);
    iStack_2c = 0;
    iVar3 = regmap_field_read(uVar5,&iStack_2c);
    if (iVar3 == 0) {
        if (iStack_2c != 1) {
            _printk(0x80003b1,"qcom_hwspinlock_unlock");
        }
        iVar3 = regmap_field_update_bits_base(uVar5,0xffffffff,0,0,0,0);
        if (iVar3 == 0) goto code_r0x080013f0;
        uVar5 = 0x8000390;
    }
    else {
        uVar5 = 0x80003f6;
    }
    _printk(uVar5,"qcom_hwspinlock_unlock");
code_r0x080013f0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
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
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80014b4);
        (*pcVar2)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800145c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080014a0

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x80014b4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080014c4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_hwspinlock_probe.ec7b54528b020c18571992c3df1c5e24.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080014f8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_hwspinlock_probe.ec7b54528b020c18571992c3df1c5e24.cfi_jt);
    return;
}

