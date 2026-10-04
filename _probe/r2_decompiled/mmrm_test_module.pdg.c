// decompiled from mmrm_test_module by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800e000 (size 208) =====

//WARNING: Switch with 1 destination removed at 0x0800e6ec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xb912697328ee41f) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x800e0e8 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800e6ac;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x0800e6ac;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0xb912697328ee41f) {
        pcVar2 = sym.test_mmrm_client_callback.8b92bbb225e8c57223d19f29712ef528.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800e6ac;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800e6ac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800e700);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800e0d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mmrm_test_probe.8ef21dc1832445db79dad52bec5f67dd.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x0800e0e0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.mmrm_test_probe.8ef21dc1832445db79dad52bec5f67dd.cfi_jt,obj.__this_module)
    ;
    if (iVar1 != 0) {
        _printk(0x800d54a,"mmrm_test_init");
    }
    return iVar1;
}


// ===== sym.mmrm_test_remove.cfi_jt @ 0x0800e0e8 (size 8) =====

ulong sym.mmrm_test_remove.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (_segment.ehdr = *(param_1 + 0xa8), _segment.ehdr != 0)) {
        if (*(_segment.ehdr + 8) != 0) {
            kfree(*(_segment.ehdr + 8));
        }
        iVar1 = _segment.ehdr;
        *(param_1 + 0xa8) = 0;
        kfree(iVar1);
        _segment.ehdr = 0xfffffffffffffdfb;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.mmrm_test_probe.8ef21dc1832445db79dad52bec5f67dd.cfi_jt @ 0x0800e0f0 (size 8) =====

ulong sym.mmrm_test_probe.8ef21dc1832445db79dad52bec5f67dd.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = of_device_is_compatible(*(param_1 + 0x300),0x800db76);
    if (iVar1 == 0) {
        _dev_info(param_1 + 0x10,"No compatible device node\n");
        return 1;
    }
    uVar2 = mmrm_client_check_scaling_supported(0,0);
    if ((uVar2 & 1) == 0) {
        uVar4 = socinfo_get_id_string();
        _printk(0x800d646,"mmrm_test_probe",uVar4);
        return 0;
    }
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x18);
    if (piVar3 == NULL) {
        _segment.ehdr = piVar3;
        return 0;
    }
    _segment.ehdr = piVar3;
    *piVar3 = param_1;
    *(param_1 + 0xa8) = piVar3;
    _printk(0x800d771,"mmrm_test_read_platform_resources",param_1,piVar3);
    if ((param_1 == 0) || (*(param_1 + 0x300) == 0)) {
code_r0x0800e588:
        _printk(0x800d46d,"mmrm_test_probe");
    }
    else {
        if (_segment.ehdr == 0xfffffffffffffdfb) {
            _printk(0x800d8f8,"mmrm_test_read_platform_resources");
        }
        else {
            iVar1 = sym.mmrm_load_mmrm_test_table(_segment.ehdr);
            if (iVar1 != 0) goto code_r0x0800e588;
        }
        uVar4 = socinfo_get_id_string();
        _dev_info(param_1 + 0x10,"%s: Validating mmrm on target: %s\n","mmrm_test_probe",uVar4);
        iVar1 = socinfo_get_id();
        if (iVar1 == 0x207) {
            iVar5 = 0x20;
        }
        else {
            if (iVar1 != 0x1c9) {
                if (iVar1 == 0x19f) {
                    sym.test_mmrm_client(param_1,noname_1,0x17);
                    return 0;
                }
                uVar4 = socinfo_get_id_string();
                _printk(0x800d818,"mmrm_test_probe",iVar1,uVar4);
                return 0xffffffed;
            }
            iVar5 = 0x1c;
        }
        sym.test_mmrm_client(param_1,noname_1,iVar5);
        sym.test_mmrm_concurrent_client_cases(param_1,0x800caa8,*0x800c000);
        sym.test_mmrm_switch_volt_corner_client_testcases(param_1,0x800d450,*0x800d000);
    }
    return 0;
}


// ===== sym.test_mmrm_client_callback.8b92bbb225e8c57223d19f29712ef528.cfi_jt @ 0x0800e0f8 (size 8) =====

ulong sym.test_mmrm_client_callback.8b92bbb225e8c57223d19f29712ef528.cfi_jt(void)

{
    return 0;
}


// ===== sym.mmrm_load_mmrm_test_table @ 0x0800e100 (size 496) =====

ulong sym.mmrm_load_mmrm_test_table(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int iVar5;
    ulong *puVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *arg1;
    uVar1 = of_property_read_string_helper(*(iVar8 + 0x300),"clock-names",0,0,0);
    if (uVar1 < 1) {
        uVar2 = 0;
        *(arg1 + 0x10) = 0;
    }
    else {
        uVar4 = uVar1;
        _printk(0x800d52e,"mmrm_load_mmrm_test_table",uVar4);
        iVar3 = devm_kmalloc(iVar8 + 0x10,uVar4 * 0x28,0xdc0);
        *(arg1 + 8) = iVar3;
        if (iVar3 == 0) {
            uVar2 = 0xfffffff4;
        }
        else {
            uVar7 = 0;
            *(arg1 + 0x10) = uVar1;
            do {
                of_property_read_string_helper(*(iVar8 + 0x300),"clock-names",iVar3,1,uVar7);
                uVar7 = uVar7 + 1;
                iVar3 = iVar3 + 0x28;
            } while (uVar1 != uVar7);
            iVar5 = 0;
            iVar3 = *(arg1 + 8) + 0x20;
            uVar9 = uVar4;
            do {
                of_property_read_u32_index(*(iVar8 + 0x300),"clock_rates",iVar5,iVar3 + -0x18);
                of_property_read_u32_index(*(iVar8 + 0x300),"clock_rates",iVar5 + 1,iVar3 + -0x14);
                of_property_read_u32_index(*(iVar8 + 0x300),"clock_rates",iVar5 + 2,iVar3 + -0x10);
                of_property_read_u32_index(*(iVar8 + 0x300),"clock_rates",iVar5 + 3,iVar3 + -0xc);
                of_property_read_u32_index(*(iVar8 + 0x300),"clock_rates",iVar5 + 4,iVar3 + -8);
                of_property_read_u32_index(*(iVar8 + 0x300),"clock_rates",iVar5 + 5,iVar3 + -4);
                of_property_read_u32_index(*(iVar8 + 0x300),"clock_rates",iVar5 + 6,iVar3);
                iVar3 = iVar3 + 0x28;
                uVar1 = uVar9 - 1;
                uVar9 = uVar1;
                iVar5 = iVar5 + 7;
            } while (uVar1 != 0);
            puVar6 = *(arg1 + 8);
            do {
                _printk(0x800d60e,*puVar6,*(puVar6 + 1),*(puVar6 + 0xc),*(puVar6 + 2),*(puVar6 + 0x14),
                        *(puVar6 + 3),*(puVar6 + 0x1c),*(puVar6 + 4));
                uVar2 = 0;
                uVar1 = uVar4 - 1;
                uVar4 = uVar1;
                puVar6 = puVar6 + 5;
            } while (uVar1 != 0);
        }
    }
    return uVar2;
}


// ===== sym.find_clk_by_name @ 0x0800e2f0 (size 108) =====

ulong * sym.find_clk_by_name(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(_segment.ehdr + 0x10);
    if (iVar3 != 0) {
        puVar2 = *(_segment.ehdr + 8);
        do {
            iVar1 = strcmp(arg1,*puVar2);
            if (iVar1 == 0) {
                return puVar2;
            }
            puVar2 = puVar2 + 5;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    return NULL;
}


// ===== sym.get_nth_clock @ 0x0800e35c (size 56) =====

int64_t sym.get_nth_clock(uint32_t arg1)

{
    if (arg1 < *(_segment.ehdr + 0x10)) {
        return *(_segment.ehdr + 8) + arg1 * 0x28;
    }
    return 0;
}


// ===== sym.mmrm_test_read_platform_resources @ 0x0800e394 (size 140) =====

ulong sym.mmrm_test_read_platform_resources(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800d771,"mmrm_test_read_platform_resources",arg1,_segment.ehdr);
    if ((arg1 == 0) || (*(arg1 + 0x300) == 0)) {
        uVar1 = 0xffffffea;
    }
    else if (_segment.ehdr == -0x205) {
        _printk(0x800d8f8,"mmrm_test_read_platform_resources");
        uVar1 = 0;
    }
    else {
        uVar1 = sym.mmrm_load_mmrm_test_table(_segment.ehdr);
    }
    return uVar1;
}


// ===== sym.mmrm_test_remove @ 0x0800e420 (size 112) =====

ulong sym.mmrm_test_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (_segment.ehdr = *(arg1 + 0xa8), _segment.ehdr != 0)) {
        if (*(_segment.ehdr + 8) != 0) {
            kfree(*(_segment.ehdr + 8));
        }
        iVar1 = _segment.ehdr;
        *(arg1 + 0xa8) = 0;
        kfree(iVar1);
        _segment.ehdr = 0xfffffffffffffdfb;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.mmrm_test_probe @ 0x0800e490 (size 536) =====

ulong sym.mmrm_test_probe(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = of_device_is_compatible(*(arg1 + 0x300),0x800db76);
    if (iVar1 == 0) {
        _dev_info(arg1 + 0x10,"No compatible device node\n");
        return 1;
    }
    uVar2 = mmrm_client_check_scaling_supported(0,0);
    if ((uVar2 & 1) == 0) {
        uVar4 = socinfo_get_id_string();
        _printk(0x800d646,"mmrm_test_probe",uVar4);
        return 0;
    }
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x18);
    if (piVar3 == NULL) {
        _segment.ehdr = piVar3;
        return 0;
    }
    _segment.ehdr = piVar3;
    *piVar3 = arg1;
    *(arg1 + 0xa8) = piVar3;
    _printk(0x800d771,"mmrm_test_read_platform_resources",arg1,piVar3);
    if ((arg1 == 0) || (*(arg1 + 0x300) == 0)) {
code_r0x0800e588:
        _printk(0x800d46d,"mmrm_test_probe");
    }
    else {
        if (_segment.ehdr == 0xfffffffffffffdfb) {
            _printk(0x800d8f8,"mmrm_test_read_platform_resources");
        }
        else {
            iVar1 = sym.mmrm_load_mmrm_test_table(_segment.ehdr);
            if (iVar1 != 0) goto code_r0x0800e588;
        }
        uVar4 = socinfo_get_id_string();
        _dev_info(arg1 + 0x10,"%s: Validating mmrm on target: %s\n","mmrm_test_probe",uVar4);
        iVar1 = socinfo_get_id();
        if (iVar1 == 0x207) {
            iVar5 = 0x20;
        }
        else {
            if (iVar1 != 0x1c9) {
                if (iVar1 == 0x19f) {
                    sym.test_mmrm_client(arg1,noname_1,0x17);
                    return 0;
                }
                uVar4 = socinfo_get_id_string();
                _printk(0x800d818,"mmrm_test_probe",iVar1,uVar4);
                return 0xffffffed;
            }
            iVar5 = 0x1c;
        }
        sym.test_mmrm_client(arg1,noname_1,iVar5);
        sym.test_mmrm_concurrent_client_cases(arg1,0x800caa8,*0x800c000);
        sym.test_mmrm_switch_volt_corner_client_testcases(arg1,0x800d450,*0x800d000);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x0800e6a8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800e6ec

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
    //switch table (4 cases) at 0x800d468
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800e700);
    (*pcVar1)();
}


// ===== sym.test_mmrm_client @ 0x0800e700 (size 1060) =====

ulong sym.test_mmrm_client(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int iVar7;
    uint32_t arg1_00;
    uint uVar8;
    ulong unaff_x30;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    uint64_t uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_70 = *(iVar5 + 0x5e0);
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_80 = 0;
    pcStack_78 = NULL;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    _printk(0x800dc56,"test_mmrm_client");
    if (arg2 < 1) {
        iVar7 = 0;
    }
    else {
        arg1_00 = 0;
        iVar2 = 0;
        iVar7 = 0;
        do {
            puVar3 = sym.get_nth_clock(arg1_00);
            if (puVar3 == NULL) break;
            uStack_80 = 0;
            pcStack_78 = sym.test_mmrm_client_callback.8b92bbb225e8c57223d19f29712ef528.cfi_jt;
            uStack_120 = uStack_120 & 0xffffffff00000000;
            uStack_88 = CONCAT44(uStack_88._4_4_,1);
            uStack_118 = puVar3[1];
            strlcpy(&uStack_110,*puVar3,0x80);
            uVar4 = clk_get(arg1 + 0x10,&uStack_110);
            if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
                _printk(0x800db89,"test_mmrm_client",&uStack_110);
                iVar1 = -0x16;
            }
            else {
                uStack_90 = uVar4;
                _printk(0x800d852,"test_mmrm_client",uVar4);
                iVar5 = sym.test_mmrm_client_register(&uStack_120);
                if (iVar5 == 0) {
                    iVar1 = -0x16;
                }
                else {
                    uStack_128 = 0x100000001;
                    uVar8 = *(puVar3 + 2);
                    _printk(0x800d57f,"test_mmrm_client_set_value",*(iVar5 + 4),uVar8);
                    iVar1 = mmrm_client_set_value(iVar5,&uStack_128,uVar8);
                    if (iVar1 == 0) {
                        uVar8 = *(puVar3 + 0x14);
                        _printk(0x800d57f,"test_mmrm_client_set_value",*(iVar5 + 4),uVar8);
                        iVar1 = mmrm_client_set_value(iVar5,&uStack_128,uVar8);
                        if (iVar1 != 0) goto code_r0x0800e9d0;
                        uVar8 = *(puVar3 + 3);
                        _printk(0x800d57f,"test_mmrm_client_set_value",*(iVar5 + 4),uVar8);
                        iVar1 = mmrm_client_set_value(iVar5,&uStack_128,uVar8);
                        if (iVar1 != 0) goto code_r0x0800e9d0;
                        uVar8 = *(puVar3 + 0x1c);
                        _printk(0x800d57f,"test_mmrm_client_set_value",*(iVar5 + 4),uVar8);
                        iVar1 = mmrm_client_set_value(iVar5,&uStack_128,uVar8);
                        if (iVar1 != 0) goto code_r0x0800e9d0;
                        uVar8 = *(puVar3 + 4);
                        _printk(0x800d57f,"test_mmrm_client_set_value",*(iVar5 + 4),uVar8);
                        iVar1 = mmrm_client_set_value(iVar5,&uStack_128,uVar8);
                        if (iVar1 != 0) goto code_r0x0800e9d0;
                        _printk(0x800d4f5,"test_mmrm_client_get_value",*(iVar5 + 4));
                        iVar1 = mmrm_client_get_value(iVar5,&uStack_140);
                        if (iVar1 == 0) {
                            _printk(0x800da8c,"test_mmrm_client_get_value",*(iVar5 + 4),uStack_140,uStack_138,
                                    uStack_130);
                        }
                        else {
                            _printk(0x800d7ba,"test_mmrm_client_get_value",*(iVar5 + 4),iVar1);
                        }
                    }
                    else {
code_r0x0800e9d0:
                        _printk(0x800dbfc,"test_mmrm_client_set_value",*(iVar5 + 4),uVar8,iVar1);
                    }
                    _printk(0x800d57f,"test_mmrm_client_set_value",*(iVar5 + 4),0);
                    iVar2 = mmrm_client_set_value(iVar5,&uStack_128,0);
                    if (iVar2 != 0) {
                        _printk(0x800dbfc,"test_mmrm_client_set_value",*(iVar5 + 4),0,iVar2);
                    }
                    _printk(0x800dccf,"test_mmrm_client_deregister",*(iVar5 + 4));
                    iVar2 = mmrm_client_deregister(iVar5);
                    if (iVar2 != 0) {
                        _printk(0x800db26,"test_mmrm_client_deregister",*(iVar5 + 4),iVar2);
                    }
                }
            }
            if (iVar1 == 0 && iVar2 == 0) {
                iVar7 = iVar7 + 1;
            }
            if (uVar4 != 0) {
                clk_put(uVar4);
            }
            arg1_00 = arg1_00 + 1;
        } while (arg2 != arg1_00);
    }
    uVar6 = _printk(0x800dbb1,"test_mmrm_client",iVar7,arg2 & 0xffffffff);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_70) {
        __stack_chk_fail();
        return 0;
    }
    return uVar6;
}


// ===== sym.test_mmrm_client_callback @ 0x0800eb24 (size 16) =====

ulong sym.test_mmrm_client_callback(int64_t arg1)

{
    return 0;
}


// ===== sym.test_mmrm_client_register @ 0x0800eb34 (size 232) =====

int64_t sym.test_mmrm_client_register(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800dc99,"test_mmrm_client_register");
        iVar2 = 0;
    }
    else {
        iVar1 = arg1 + 0x10;
        _printk(0x800d6e8,"test_mmrm_client_register",*(arg1 + 8),*(arg1 + 0xc),iVar1,*arg1,*(arg1 + 0x98),
                *(arg1 + 0xa0),*(arg1 + 0xa8));
        _printk(0x800d5e1,"test_mmrm_client_register",iVar1);
        iVar2 = mmrm_client_register(arg1);
        if (iVar2 == 0) {
            _printk(0x800d97f,"test_mmrm_client_register",iVar1);
        }
        else {
            _printk(0x800d73c,"test_mmrm_client_register",*(iVar2 + 4));
        }
    }
    return iVar2;
}


// ===== sym.test_mmrm_testcase_client_register @ 0x0800ec1c (size 236) =====

int sym.test_mmrm_testcase_client_register(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int *piVar2;
    uint uVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t *extraout_x1;
    uint64_t uVar10;
    uint32_t uVar11;
    int iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar13;
    int64_t iVar14;
    int iVar15;
    uint64_t uVar16;
    uint64_t *puVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_218;
    uchar auStack_210 [8];
    uint uStack_208;
    uint uStack_204;
    uchar auStack_200 [128];
    uint64_t uStack_180;
    int64_t iStack_160;
    uchar *puStack_150;
    code *pcStack_148;
    uchar auStack_e8 [8];
    int iStack_e0;
    uint uStack_dc;
    uchar auStack_d8 [128];
    uint64_t uStack_58;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_38 = *(iVar14 + 0x5e0);
    memcpy(auStack_e8,0x800df10,0xb0);
    iStack_e0 = *(arg2 + 0x8c);
    uStack_dc = *(arg2 + 0x90);
    iVar5 = 0x80;
    strlcpy(auStack_d8,arg2);
    uVar6 = clk_get(arg1 + 0x10,auStack_d8);
    if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
        iVar5 = iStack_e0;
        _printk(0x800d86d,"test_mmrm_testcase_client_register",iStack_e0,uStack_dc,auStack_d8);
        iVar12 = -3;
    }
    else {
        uStack_58 = uVar6;
        uVar7 = sym.test_mmrm_client_register(auStack_e8);
        iVar12 = 0;
        *(arg2 + 0xa8) = uVar7;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_38) {
        return iVar12;
    }
    auVar18 = __stack_chk_fail(iVar12);
    uVar6 = auVar18._8_8_;
    *extraout_x18 = sym.test_mmrm_run_one_case;
    pcStack_148 = sym.test_mmrm_run_one_case;
    iVar14 = sp_el0;
    iStack_160 = *(iVar14 + 0x5e0);
    uVar11 = *(uVar6 + 0x80);
    uStack_218 = 0x100000000;
    puStack_150 = &stack0xffffffffffffffd0;
    if (uVar11 == 5) {
        iVar12 = 0;
    }
    else {
        uVar10 = uVar6;
        do {
            if (4 < uVar11) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800f018);
                (*pcVar4)();
            }
            uVar16 = *(uVar10 + uVar11 * 4 + 0x94);
            memcpy(auStack_210,0x800df10,0xb0);
            uStack_208 = *(uVar10 + 0x8c);
            uStack_204 = *(uVar10 + 0x90);
            strlcpy(auStack_200,uVar10,0x80);
            uVar8 = clk_get(auVar18._0_8_ + 0x10,auStack_200);
            if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
                _printk(0x800d86d,"test_mmrm_testcase_client_register",uStack_208,uStack_204,auStack_200);
code_r0x0800efb4:
                _printk(0x800d9de,"test_mmrm_run_one_case");
                iVar12 = -1;
                goto code_r0x0800ee64;
            }
            uStack_180 = uVar8;
            uVar8 = sym.test_mmrm_client_register(auStack_210);
            *(uVar10 + 0xa8) = uVar8;
            if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) goto code_r0x0800efb4;
            iVar5 = *(uVar10 + 0x88);
            uVar8 = *(uVar10 + 0x8c);
            if (iVar5 == 0) {
                iVar5 = 1;
            }
            uStack_218 = CONCAT44(uStack_218._4_4_,iVar5);
            _printk(0x800dd04,"test_mmrm_run_one_case",uVar8,*(uVar10 + 0x90));
            iVar14 = *(uVar10 + 0xa8);
            if (iVar14 == 0) {
                _printk(0x800dc99,"test_mmrm_client_set_value");
code_r0x0800efe8:
                iVar12 = -2;
                uVar10 = uVar8;
                goto code_r0x0800ee64;
            }
            _printk(0x800d57f,"test_mmrm_client_set_value",*(iVar14 + 4),uVar16);
            uVar8 = uVar16;
            iVar5 = mmrm_client_set_value(iVar14,&uStack_218);
            if (iVar5 != 0) {
                uVar8 = *(iVar14 + 4);
                _printk(0x800dbfc,"test_mmrm_client_set_value",uVar8,uVar16,iVar5);
                goto code_r0x0800efe8;
            }
            uVar11 = *(uVar10 + 0x130);
            uVar10 = uVar10 + 0xb0;
        } while (uVar11 != 5);
        iVar12 = 0;
        uVar10 = uVar8;
code_r0x0800ee64:
        iVar5 = uVar10;
        if (*(uVar6 + 0x80) != 5) {
            puVar17 = uVar6 + 0xa8;
            do {
                uVar6 = *puVar17;
                if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
                    _printk(0x800d57f,"test_mmrm_client_set_value",*(uVar6 + 4),0);
                    uVar10 = 0;
                    iVar5 = mmrm_client_set_value(uVar6,&uStack_218);
                    if (iVar5 != 0) {
                        uVar10 = *(uVar6 + 4);
                        _printk(0x800dbfc,"test_mmrm_client_set_value",uVar10,0,iVar5);
                    }
                    uVar6 = *puVar17;
                    if (uVar6 == 0) {
                        _printk(0x800dc99,"test_mmrm_client_deregister");
                    }
                    else {
                        uVar10 = *(uVar6 + 4);
                        _printk(0x800dccf,"test_mmrm_client_deregister");
                        iVar5 = mmrm_client_deregister(uVar6);
                        if (iVar5 != 0) {
                            uVar10 = *(uVar6 + 4);
                            _printk(0x800db26,"test_mmrm_client_deregister",uVar10,iVar5);
                        }
                    }
                }
                iVar5 = uVar10;
                puVar1 = puVar17 + 0x11;
                puVar17 = puVar17 + 0x16;
            } while (*puVar1 != 5);
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_160) {
        __stack_chk_fail();
        *extraout_x18_00 = sym.test_mmrm_populate_testcase;
        iVar12 = 0;
        if ((0 < iVar5) && (iVar14 = *extraout_x1, *(iVar14 + 0x90) == 0)) {
            iVar15 = 0;
            piVar13 = extraout_x1;
            while( true ) {
                iVar12 = *(iVar14 + 0x80);
                while (iVar12 != 5) {
                    iVar9 = sym.find_clk_by_name(iVar14);
                    if (iVar9 != 0) {
                        *(iVar14 + 0x8c) = *(iVar9 + 8);
                        *(iVar14 + 0x90) = *(iVar9 + 0xc);
                        uVar7 = *(iVar9 + 0x18);
                        uVar3 = *(iVar9 + 0x20);
                        *(iVar14 + 0x94) = *(iVar9 + 0x10);
                        *(iVar14 + 0xa4) = uVar3;
                        *(iVar14 + 0x9c) = uVar7;
                        if (*(iVar14 + 0x88) == 0) {
                            *(iVar14 + 0x88) = 1;
                        }
                    }
                    piVar2 = iVar14 + 0x130;
                    iVar14 = iVar14 + 0xb0;
                    iVar12 = *piVar2;
                }
                iVar15 = iVar15 + 1;
                iVar12 = iVar5;
                if (iVar15 == iVar5) break;
                piVar13 = piVar13 + 1;
                iVar14 = *piVar13;
            }
        }
        return iVar12;
    }
    return iVar12;
}


// ===== sym.test_mmrm_run_one_case @ 0x0800ed08 (size 788) =====

int sym.test_mmrm_run_one_case(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int *piVar2;
    ulong uVar3;
    uint uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t *extraout_x1;
    int in_w2;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    int64_t iVar13;
    uint64_t uVar14;
    uint64_t *puVar15;
    ulong unaff_x30;
    ulong uStack_128;
    uchar auStack_120 [8];
    uint uStack_118;
    uint uStack_114;
    uchar auStack_110 [128];
    uint64_t uStack_90;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_70 = *(iVar13 + 0x5e0);
    uVar11 = *(arg2 + 0x80);
    uStack_128 = 0x100000000;
    if (uVar11 == 5) {
        iVar6 = 0;
    }
    else {
        uVar10 = arg2;
        do {
            if (4 < uVar11) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x800f018);
                (*pcVar5)();
            }
            uVar14 = *(uVar10 + uVar11 * 4 + 0x94);
            memcpy(auStack_120,0x800df10,0xb0);
            uStack_118 = *(uVar10 + 0x8c);
            uStack_114 = *(uVar10 + 0x90);
            strlcpy(auStack_110,uVar10,0x80);
            uVar8 = clk_get(arg1 + 0x10,auStack_110);
            if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
                _printk(0x800d86d,"test_mmrm_testcase_client_register",uStack_118,uStack_114,auStack_110);
code_r0x0800efb4:
                _printk(0x800d9de,"test_mmrm_run_one_case");
                iVar6 = -1;
                goto code_r0x0800ee64;
            }
            uStack_90 = uVar8;
            uVar8 = sym.test_mmrm_client_register(auStack_120);
            *(uVar10 + 0xa8) = uVar8;
            if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) goto code_r0x0800efb4;
            iVar6 = *(uVar10 + 0x88);
            uVar8 = *(uVar10 + 0x8c);
            if (iVar6 == 0) {
                iVar6 = 1;
            }
            uStack_128 = CONCAT44(uStack_128._4_4_,iVar6);
            _printk(0x800dd04,"test_mmrm_run_one_case",uVar8,*(uVar10 + 0x90));
            iVar13 = *(uVar10 + 0xa8);
            if (iVar13 == 0) {
                _printk(0x800dc99,"test_mmrm_client_set_value");
code_r0x0800efe8:
                iVar6 = -2;
                uVar10 = uVar8;
                goto code_r0x0800ee64;
            }
            _printk(0x800d57f,"test_mmrm_client_set_value",*(iVar13 + 4),uVar14);
            uVar8 = uVar14;
            iVar6 = mmrm_client_set_value(iVar13,&uStack_128);
            if (iVar6 != 0) {
                uVar8 = *(iVar13 + 4);
                _printk(0x800dbfc,"test_mmrm_client_set_value",uVar8,uVar14,iVar6);
                goto code_r0x0800efe8;
            }
            uVar11 = *(uVar10 + 0x130);
            uVar10 = uVar10 + 0xb0;
        } while (uVar11 != 5);
        iVar6 = 0;
        uVar10 = uVar8;
code_r0x0800ee64:
        in_w2 = uVar10;
        if (*(arg2 + 0x80) != 5) {
            puVar15 = arg2 + 0xa8;
            do {
                uVar8 = *puVar15;
                if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
                    _printk(0x800d57f,"test_mmrm_client_set_value",*(uVar8 + 4),0);
                    uVar10 = 0;
                    iVar7 = mmrm_client_set_value(uVar8,&uStack_128);
                    if (iVar7 != 0) {
                        uVar10 = *(uVar8 + 4);
                        _printk(0x800dbfc,"test_mmrm_client_set_value",uVar10,0,iVar7);
                    }
                    uVar8 = *puVar15;
                    if (uVar8 == 0) {
                        _printk(0x800dc99,"test_mmrm_client_deregister");
                    }
                    else {
                        uVar10 = *(uVar8 + 4);
                        _printk(0x800dccf,"test_mmrm_client_deregister");
                        iVar7 = mmrm_client_deregister(uVar8);
                        if (iVar7 != 0) {
                            uVar10 = *(uVar8 + 4);
                            _printk(0x800db26,"test_mmrm_client_deregister",uVar10,iVar7);
                        }
                    }
                }
                in_w2 = uVar10;
                puVar1 = puVar15 + 0x11;
                puVar15 = puVar15 + 0x16;
            } while (*puVar1 != 5);
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_70) {
        __stack_chk_fail();
        *extraout_x18 = sym.test_mmrm_populate_testcase;
        iVar6 = 0;
        if ((0 < in_w2) && (iVar13 = *extraout_x1, *(iVar13 + 0x90) == 0)) {
            iVar7 = 0;
            piVar12 = extraout_x1;
            while( true ) {
                iVar6 = *(iVar13 + 0x80);
                while (iVar6 != 5) {
                    iVar9 = sym.find_clk_by_name(iVar13);
                    if (iVar9 != 0) {
                        *(iVar13 + 0x8c) = *(iVar9 + 8);
                        *(iVar13 + 0x90) = *(iVar9 + 0xc);
                        uVar3 = *(iVar9 + 0x18);
                        uVar4 = *(iVar9 + 0x20);
                        *(iVar13 + 0x94) = *(iVar9 + 0x10);
                        *(iVar13 + 0xa4) = uVar4;
                        *(iVar13 + 0x9c) = uVar3;
                        if (*(iVar13 + 0x88) == 0) {
                            *(iVar13 + 0x88) = 1;
                        }
                    }
                    piVar2 = iVar13 + 0x130;
                    iVar13 = iVar13 + 0xb0;
                    iVar6 = *piVar2;
                }
                iVar7 = iVar7 + 1;
                iVar6 = in_w2;
                if (iVar7 == in_w2) break;
                piVar12 = piVar12 + 1;
                iVar13 = *piVar12;
            }
        }
        return iVar6;
    }
    return iVar6;
}


// ===== sym.test_mmrm_populate_testcase @ 0x0800f01c (size 208) =====

uint64_t sym.test_mmrm_populate_testcase(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    ulong uVar2;
    uint uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int iVar6;
    ulong *in_x18;
    int64_t arg1_00;
    int iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = 0;
    if ((0 < arg3) && (arg1_00 = *arg2, *(arg1_00 + 0x90) == 0)) {
        iVar7 = 0;
        while( true ) {
            iVar6 = *(arg1_00 + 0x80);
            while (iVar6 != 5) {
                iVar5 = sym.find_clk_by_name(arg1_00);
                if (iVar5 != 0) {
                    *(arg1_00 + 0x8c) = *(iVar5 + 8);
                    *(arg1_00 + 0x90) = *(iVar5 + 0xc);
                    uVar2 = *(iVar5 + 0x18);
                    uVar3 = *(iVar5 + 0x20);
                    *(arg1_00 + 0x94) = *(iVar5 + 0x10);
                    *(arg1_00 + 0xa4) = uVar3;
                    *(arg1_00 + 0x9c) = uVar2;
                    if (*(arg1_00 + 0x88) == 0) {
                        *(arg1_00 + 0x88) = 1;
                    }
                }
                piVar1 = arg1_00 + 0x130;
                arg1_00 = arg1_00 + 0xb0;
                iVar6 = *piVar1;
            }
            iVar7 = iVar7 + 1;
            if (iVar7 == arg3) break;
            arg2 = arg2 + 8;
            arg1_00 = *arg2;
        }
        uVar4 = arg3 & 0xffffffff;
    }
    return uVar4;
}


// ===== sym.test_mmrm_concurrent_client_cases @ 0x0800f0ec (size 504) =====

void sym.test_mmrm_concurrent_client_cases(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    ulong uVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t arg1_00;
    int iVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = arg3;
    _printk(0x800d8b0,"test_mmrm_concurrent_client_cases");
    if ((0 < iVar9) && (arg1_00 = *arg2, *(arg1_00 + 0x90) == 0)) {
        iVar4 = 0;
        piVar11 = arg2;
        while( true ) {
            iVar7 = *(arg1_00 + 0x80);
            while (iVar7 != 5) {
                iVar5 = sym.find_clk_by_name(arg1_00);
                if (iVar5 != 0) {
                    *(arg1_00 + 0x8c) = *(iVar5 + 8);
                    *(arg1_00 + 0x90) = *(iVar5 + 0xc);
                    uVar2 = *(iVar5 + 0x18);
                    uVar3 = *(iVar5 + 0x20);
                    *(arg1_00 + 0x94) = *(iVar5 + 0x10);
                    *(arg1_00 + 0xa4) = uVar3;
                    *(arg1_00 + 0x9c) = uVar2;
                    if (*(arg1_00 + 0x88) == 0) {
                        *(arg1_00 + 0x88) = 1;
                    }
                }
                piVar1 = arg1_00 + 0x130;
                arg1_00 = arg1_00 + 0xb0;
                iVar7 = *piVar1;
            }
            iVar4 = iVar4 + 1;
            if (iVar4 == iVar9) break;
            piVar11 = piVar11 + 1;
            arg1_00 = *piVar11;
        }
    }
    uVar6 = __kmalloc(iVar9 << 2,0xdc0);
    if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
        _printk(0x800dd39,"test_mmrm_concurrent_client_cases");
    }
    else {
        if (iVar9 < 1) {
            _printk(0x800d4aa,"test_mmrm_concurrent_client_cases",0,arg3 & 0xffffffff);
        }
        else {
            uVar10 = 0;
            iVar9 = 0;
            uVar8 = arg3 & 0xffffffff;
            do {
                _printk(0x800d5bc,"test_mmrm_concurrent_client_cases",uVar10 & 0xffffffff);
                iVar4 = sym.test_mmrm_run_one_case(arg1,*(arg2 + uVar10 * 8));
                *(uVar6 + uVar10 * 4) = iVar4;
                if (iVar4 == 0) {
                    iVar9 = iVar9 + 1;
                }
                uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
            _printk(0x800d4aa,"test_mmrm_concurrent_client_cases",iVar9,uVar8);
            uVar10 = 0;
            do {
                if (*(uVar6 + uVar10 * 4) != 0) {
                    _printk(0x800da09,"test_mmrm_concurrent_client_cases",uVar10 & 0xffffffff);
                }
                uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
        }
        kfree(uVar6);
    }
    return;
}


// ===== sym.test_mmrm_switch_volt_corner_client_testcases @ 0x0800f2e4 (size 504) =====

void sym.test_mmrm_switch_volt_corner_client_testcases(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    ulong uVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t arg1_00;
    int iVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = arg3;
    _printk(0x800d8b0,"test_mmrm_switch_volt_corner_client_testcases");
    if ((0 < iVar9) && (arg1_00 = *arg2, *(arg1_00 + 0x90) == 0)) {
        iVar4 = 0;
        piVar11 = arg2;
        while( true ) {
            iVar7 = *(arg1_00 + 0x80);
            while (iVar7 != 5) {
                iVar5 = sym.find_clk_by_name(arg1_00);
                if (iVar5 != 0) {
                    *(arg1_00 + 0x8c) = *(iVar5 + 8);
                    *(arg1_00 + 0x90) = *(iVar5 + 0xc);
                    uVar2 = *(iVar5 + 0x18);
                    uVar3 = *(iVar5 + 0x20);
                    *(arg1_00 + 0x94) = *(iVar5 + 0x10);
                    *(arg1_00 + 0xa4) = uVar3;
                    *(arg1_00 + 0x9c) = uVar2;
                    if (*(arg1_00 + 0x88) == 0) {
                        *(arg1_00 + 0x88) = 1;
                    }
                }
                piVar1 = arg1_00 + 0x130;
                arg1_00 = arg1_00 + 0xb0;
                iVar7 = *piVar1;
            }
            iVar4 = iVar4 + 1;
            if (iVar4 == iVar9) break;
            piVar11 = piVar11 + 1;
            arg1_00 = *piVar11;
        }
    }
    uVar6 = __kmalloc(iVar9 << 2,0xdc0);
    if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
        _printk(0x800dd39,"test_mmrm_switch_volt_corner_client_testcases");
    }
    else {
        if (iVar9 < 1) {
            _printk(0x800d92c,"test_mmrm_switch_volt_corner_client_testcases",0,arg3 & 0xffffffff);
        }
        else {
            uVar10 = 0;
            iVar9 = 0;
            uVar8 = arg3 & 0xffffffff;
            do {
                _printk(0x800d6b0,"test_mmrm_switch_volt_corner_client_testcases",uVar10 & 0xffffffff);
                iVar4 = sym.test_mmrm_run_one_case(arg1,*(arg2 + uVar10 * 8));
                *(uVar6 + uVar10 * 4) = iVar4;
                if (iVar4 == 0) {
                    iVar9 = iVar9 + 1;
                }
                uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
            _printk(0x800d92c,"test_mmrm_switch_volt_corner_client_testcases",iVar9,uVar8);
            uVar10 = 0;
            do {
                if (*(uVar6 + uVar10 * 4) != 0) {
                    _printk(0x800da09,"test_mmrm_switch_volt_corner_client_testcases",uVar10 & 0xffffffff);
                }
                uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
        }
        kfree(uVar6);
    }
    return;
}


// ===== sym.init_module @ 0x0800f4e4 (size 96) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.mmrm_test_probe.8ef21dc1832445db79dad52bec5f67dd.cfi_jt,obj.__this_module)
    ;
    if (iVar1 != 0) {
        _printk(0x800d54a,"mmrm_test_init");
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x0800f544 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mmrm_test_probe.8ef21dc1832445db79dad52bec5f67dd.cfi_jt);
    return;
}

