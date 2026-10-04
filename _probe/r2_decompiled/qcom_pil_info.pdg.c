// decompiled from qcom_pil_info by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 136) =====

//WARNING: Switch with 1 destination removed at 0x08001514

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar2 = arg1;
    if (uVar2 == 0xbb0555c41cfa89ab) {
        uVar3 = 0x80010a0;
    }
    else if (uVar2 == 0x741b966c574d47b1) {
        uVar3 = 0x8001090;
    }
    else {
        if (uVar2 != 0x7e04a0fb7ad8bcd5) goto code_r0x080014d4;
        uVar3 = 0x8001098;
    }
    if (arg2 == uVar3) {
        return;
    }
code_r0x080014d4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001528);
    (*pcVar1)();
}


// ===== sym.qcom_pil_timeouts_disabled.cfi_jt @ 0x08001090 (size 8) =====

uint64_t sym.qcom_pil_timeouts_disabled.cfi_jt(void)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int *piVar5;
    ulong uVar6;
    uint *puVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_160;
    int64_t iStack_158;
    int64_t iStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    ulong uStack_e8;
    int64_t iStack_98;
    int64_t iStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    pcVar8 = "qcom,msm-imem-pil-disable-timeout";
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iStack_98 = 0;
    iStack_90 = 0;
    iVar4 = of_find_compatible_node(0,0);
    if (iVar4 == 0) {
        uVar6 = 0x80000f7;
code_r0x080011b8:
        _printk(uVar6,"qcom,msm-imem-pil-disable-timeout");
    }
    else {
        pcVar8 = &iStack_98;
        iVar2 = of_address_to_resource(iVar4,0);
        if (iVar2 < 0) {
            uVar6 = 0x80000a5;
            goto code_r0x080011b8;
        }
        pcVar8 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            pcVar8 = 0x68000000000f13;
        }
        piVar5 = __ioremap(iStack_98,(iStack_90 - iStack_98) + 1);
        if (piVar5 == NULL) {
            _printk(0x8000174);
        }
        else {
            iVar2 = *piVar5;
            if (iVar2 == 0x53444247) {
                _printk(0x800014c);
            }
            obj.timeouts_disabled = iVar2 == 0x53444247;
            iounmap(piVar5);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return obj.timeouts_disabled;
    }
    auVar11 = __stack_chk_fail(obj.timeouts_disabled);
    uVar6 = auVar11._0_8_;
    *extraout_x18 = 0x80011ec;
    uStack_e8 = 0x80011ec;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uStack_160 = 0;
    puStack_f0 = &stack0xffffffffffffffd0;
    mutex_lock(obj.pil_reloc_lock);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    iStack_158 = 0;
    iStack_150 = 0;
    uVar9 = _sym.__cfi_check;
    if (_sym.__cfi_check == 0) {
        iVar4 = of_find_compatible_node(0,0,"qcom,pil-reloc-info");
        if (iVar4 == 0) {
            uVar3 = 0xfffffffe;
            goto code_r0x08001338;
        }
        uVar3 = of_address_to_resource(iVar4,0,&iStack_158);
        if (uVar3 < 0) goto code_r0x08001338;
        uVar1 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar1 = 0x68000000000f13;
        }
        uVar9 = __ioremap(iStack_158,(iStack_150 - iStack_158) + 1,uVar1);
        if (uVar9 != 0) {
            __memset_io(uVar9,0,(iStack_150 - iStack_158) + 1);
            _sym.__cfi_check = ((iStack_150 - iStack_158) + 1) / 0x14;
            goto joined_r0x0800141c;
        }
        uVar6 = 0x800010c;
    }
    else {
joined_r0x0800141c:
        if (_sym.__cfi_check != 0) {
            __memcpy_fromio(&uStack_160,uVar9,8);
            if (uStack_160 == '\0') {
code_r0x080012f0:
                uVar10 = strlen(uVar6);
                if (0x12 < uVar10) {
                    uVar10 = 0x13;
                }
                __memcpy_toio(uVar9,uVar6,uVar10);
            }
            else {
                iVar2 = strncmp(&uStack_160,uVar6,8);
                if (iVar2 != 0) {
                    uVar10 = 0;
                    do {
                        uVar10 = uVar10 + 1;
                        if (_sym.__cfi_check <= uVar10) goto code_r0x08001420;
                        uVar9 = _sym.__cfi_check + uVar10 * 0x14;
                        __memcpy_fromio(&uStack_160,uVar9,8);
                        if (uStack_160 == '\0') goto code_r0x080012f0;
                        iVar2 = strncmp(&uStack_160,uVar6,8);
                    } while (iVar2 != 0);
                }
            }
            sym.writel(auVar11._8_8_ & 0xffffffff,uVar9 + 8);
            sym.writel(auVar11._8_8_ >> 0x20,uVar9 + 0xc);
            sym.writel(pcVar8 & 0xffffffff,uVar9 + 0x10);
            uVar3 = 0;
            goto code_r0x08001338;
        }
code_r0x08001420:
        uVar6 = 0x80001a1;
    }
    _printk(uVar6);
    uVar3 = 0xfffffff4;
code_r0x08001338:
    mutex_unlock(obj.pil_reloc_lock);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return uVar3;
    }
    auVar11 = __stack_chk_fail();
    puVar7 = auVar11._8_8_;
    *extraout_x18_00 = sym.writel;
    uVar9 = auVar11._0_8_ & 0xffffffff;
    log_write_mmio(uVar9,0x20,puVar7,0x8001470);
    DataMemoryBarrier(0,2);
    *puVar7 = auVar11._0_4_;
    uVar9 = log_post_write_mmio(uVar9,0x20,puVar7,0x800149c);
    return uVar9;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001098 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.pil_reloc_lock);
    iounmap(_sym.__cfi_check);
    _sym.__cfi_check = 0;
    mutex_unlock(obj.pil_reloc_lock);
    return;
}


// ===== sym.qcom_pil_info_store.cfi_jt @ 0x080010a0 (size 8) =====

uint64_t sym.qcom_pil_info_store.cfi_jt(ulong param_1,uint64_t param_2,uint64_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    uStack_c0 = 0;
    mutex_lock(obj.pil_reloc_lock);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    iStack_b8 = 0;
    iStack_b0 = 0;
    uVar6 = _sym.__cfi_check;
    if (_sym.__cfi_check == 0) {
        iVar3 = of_find_compatible_node(0,0,"qcom,pil-reloc-info");
        if (iVar3 == 0) {
            uVar2 = 0xfffffffe;
            goto code_r0x08001338;
        }
        uVar2 = of_address_to_resource(iVar3,0,&iStack_b8);
        if (uVar2 < 0) goto code_r0x08001338;
        uVar4 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar4 = 0x68000000000f13;
        }
        uVar6 = __ioremap(iStack_b8,(iStack_b0 - iStack_b8) + 1,uVar4);
        if (uVar6 != 0) {
            __memset_io(uVar6,0,(iStack_b0 - iStack_b8) + 1);
            _sym.__cfi_check = ((iStack_b0 - iStack_b8) + 1) / 0x14;
            goto joined_r0x0800141c;
        }
        uVar4 = 0x800010c;
    }
    else {
joined_r0x0800141c:
        if (_sym.__cfi_check != 0) {
            __memcpy_fromio(&uStack_c0,uVar6,8);
            if (uStack_c0 == '\0') {
code_r0x080012f0:
                uVar7 = strlen(param_1);
                if (0x12 < uVar7) {
                    uVar7 = 0x13;
                }
                __memcpy_toio(uVar6,param_1,uVar7);
            }
            else {
                iVar1 = strncmp(&uStack_c0,param_1,8);
                if (iVar1 != 0) {
                    uVar7 = 0;
                    do {
                        uVar7 = uVar7 + 1;
                        if (_sym.__cfi_check <= uVar7) goto code_r0x08001420;
                        uVar6 = _sym.__cfi_check + uVar7 * 0x14;
                        __memcpy_fromio(&uStack_c0,uVar6,8);
                        if (uStack_c0 == '\0') goto code_r0x080012f0;
                        iVar1 = strncmp(&uStack_c0,param_1,8);
                    } while (iVar1 != 0);
                }
            }
            sym.writel(param_2 & 0xffffffff,uVar6 + 8);
            sym.writel(param_2 >> 0x20,uVar6 + 0xc);
            sym.writel(param_3 & 0xffffffff,uVar6 + 0x10);
            uVar2 = 0;
            goto code_r0x08001338;
        }
code_r0x08001420:
        uVar4 = 0x80001a1;
    }
    _printk(uVar4);
    uVar2 = 0xfffffff4;
code_r0x08001338:
    mutex_unlock(obj.pil_reloc_lock);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    auVar8 = __stack_chk_fail();
    puVar5 = auVar8._8_8_;
    *extraout_x18 = sym.writel;
    uVar6 = auVar8._0_8_ & 0xffffffff;
    log_write_mmio(uVar6,0x20,puVar5,0x8001470);
    DataMemoryBarrier(0,2);
    *puVar5 = auVar8._0_4_;
    uVar6 = log_post_write_mmio(uVar6,0x20,puVar5,0x800149c);
    return uVar6;
}


// ===== sym.qcom_pil_timeouts_disabled @ 0x080010a8 (size 328) =====

uint64_t sym.qcom_pil_timeouts_disabled(void)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int *piVar5;
    ulong uVar6;
    uint *puVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_160;
    int64_t iStack_158;
    int64_t iStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    ulong uStack_e8;
    int64_t iStack_98;
    int64_t iStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    pcVar8 = "qcom,msm-imem-pil-disable-timeout";
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iStack_98 = 0;
    iStack_90 = 0;
    iVar4 = of_find_compatible_node(0,0);
    if (iVar4 == 0) {
        uVar6 = 0x80000f7;
code_r0x080011b8:
        _printk(uVar6,"qcom,msm-imem-pil-disable-timeout");
    }
    else {
        pcVar8 = &stack0xffffffffffffff68;
        iVar2 = of_address_to_resource(iVar4,0);
        if (iVar2 < 0) {
            uVar6 = 0x80000a5;
            goto code_r0x080011b8;
        }
        pcVar8 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            pcVar8 = 0x68000000000f13;
        }
        piVar5 = __ioremap(iStack_98,(iStack_90 - iStack_98) + 1);
        if (piVar5 == NULL) {
            _printk(0x8000174);
        }
        else {
            iVar2 = *piVar5;
            if (iVar2 == 0x53444247) {
                _printk(0x800014c);
            }
            obj.timeouts_disabled = iVar2 == 0x53444247;
            iounmap(piVar5);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return obj.timeouts_disabled;
    }
    auVar11 = __stack_chk_fail(obj.timeouts_disabled);
    uVar6 = auVar11._0_8_;
    *extraout_x18 = 0x80011ec;
    uStack_e8 = 0x80011ec;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uStack_160 = 0;
    puStack_f0 = &stack0xffffffffffffffd0;
    mutex_lock(obj.pil_reloc_lock);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    iStack_158 = 0;
    iStack_150 = 0;
    uVar9 = _sym.__cfi_check;
    if (_sym.__cfi_check == 0) {
        iVar4 = of_find_compatible_node(0,0,"qcom,pil-reloc-info");
        if (iVar4 == 0) {
            uVar3 = 0xfffffffe;
            goto code_r0x08001338;
        }
        uVar3 = of_address_to_resource(iVar4,0,&stack0xfffffffffffffea8);
        if (uVar3 < 0) goto code_r0x08001338;
        uVar1 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar1 = 0x68000000000f13;
        }
        uVar9 = __ioremap(iStack_158,(iStack_150 - iStack_158) + 1,uVar1);
        if (uVar9 != 0) {
            __memset_io(uVar9,0,(iStack_150 - iStack_158) + 1);
            _sym.__cfi_check = ((iStack_150 - iStack_158) + 1) / 0x14;
            goto joined_r0x0800141c;
        }
        uVar6 = 0x800010c;
    }
    else {
joined_r0x0800141c:
        if (_sym.__cfi_check != 0) {
            __memcpy_fromio(&stack0xfffffffffffffea0,uVar9,8);
            if (uStack_160 == '\0') {
code_r0x080012f0:
                uVar10 = strlen(uVar6);
                if (0x12 < uVar10) {
                    uVar10 = 0x13;
                }
                __memcpy_toio(uVar9,uVar6,uVar10);
            }
            else {
                iVar2 = strncmp(&stack0xfffffffffffffea0,uVar6,8);
                if (iVar2 != 0) {
                    uVar10 = 0;
                    do {
                        uVar10 = uVar10 + 1;
                        if (_sym.__cfi_check <= uVar10) goto code_r0x08001420;
                        uVar9 = _sym.__cfi_check + uVar10 * 0x14;
                        __memcpy_fromio(&stack0xfffffffffffffea0,uVar9,8);
                        if (uStack_160 == '\0') goto code_r0x080012f0;
                        iVar2 = strncmp(&stack0xfffffffffffffea0,uVar6,8);
                    } while (iVar2 != 0);
                }
            }
            sym.writel(auVar11._8_8_ & 0xffffffff,uVar9 + 8);
            sym.writel(auVar11._8_8_ >> 0x20,uVar9 + 0xc);
            sym.writel(pcVar8 & 0xffffffff,uVar9 + 0x10);
            uVar3 = 0;
            goto code_r0x08001338;
        }
code_r0x08001420:
        uVar6 = 0x80001a1;
    }
    _printk(uVar6);
    uVar3 = 0xfffffff4;
code_r0x08001338:
    mutex_unlock(obj.pil_reloc_lock);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return uVar3;
    }
    auVar11 = __stack_chk_fail();
    puVar7 = auVar11._8_8_;
    *extraout_x18_00 = sym.writel;
    uVar9 = auVar11._0_8_ & 0xffffffff;
    log_write_mmio(uVar9,0x20,puVar7,0x8001470);
    DataMemoryBarrier(0,2);
    *puVar7 = auVar11._0_4_;
    uVar9 = log_post_write_mmio(uVar9,0x20,puVar7,0x800149c);
    return uVar9;
}


// ===== sym.qcom_pil_info_store @ 0x080011f0 (size 612) =====

uint64_t sym.qcom_pil_info_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    uStack_c0 = 0;
    mutex_lock(obj.pil_reloc_lock);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    iStack_b8 = 0;
    iStack_b0 = 0;
    uVar6 = _sym.__cfi_check;
    if (_sym.__cfi_check == 0) {
        iVar3 = of_find_compatible_node(0,0,"qcom,pil-reloc-info");
        if (iVar3 == 0) {
            uVar2 = 0xfffffffe;
            goto code_r0x08001338;
        }
        uVar2 = of_address_to_resource(iVar3,0,&iStack_b8);
        if (uVar2 < 0) goto code_r0x08001338;
        uVar4 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar4 = 0x68000000000f13;
        }
        uVar6 = __ioremap(iStack_b8,(iStack_b0 - iStack_b8) + 1,uVar4);
        if (uVar6 != 0) {
            __memset_io(uVar6,0,(iStack_b0 - iStack_b8) + 1);
            _sym.__cfi_check = ((iStack_b0 - iStack_b8) + 1) / 0x14;
            goto joined_r0x0800141c;
        }
        uVar4 = 0x800010c;
    }
    else {
joined_r0x0800141c:
        if (_sym.__cfi_check != 0) {
            __memcpy_fromio(&uStack_c0,uVar6,8);
            if (uStack_c0 == '\0') {
code_r0x080012f0:
                uVar7 = strlen(arg1);
                if (0x12 < uVar7) {
                    uVar7 = 0x13;
                }
                __memcpy_toio(uVar6,arg1,uVar7);
            }
            else {
                iVar1 = strncmp(&uStack_c0,arg1,8);
                if (iVar1 != 0) {
                    uVar7 = 0;
                    do {
                        uVar7 = uVar7 + 1;
                        if (_sym.__cfi_check <= uVar7) goto code_r0x08001420;
                        uVar6 = _sym.__cfi_check + uVar7 * 0x14;
                        __memcpy_fromio(&uStack_c0,uVar6,8);
                        if (uStack_c0 == '\0') goto code_r0x080012f0;
                        iVar1 = strncmp(&uStack_c0,arg1,8);
                    } while (iVar1 != 0);
                }
            }
            sym.writel(arg2 & 0xffffffff,uVar6 + 8);
            sym.writel(arg2 >> 0x20,uVar6 + 0xc);
            sym.writel(arg3 & 0xffffffff,uVar6 + 0x10);
            uVar2 = 0;
            goto code_r0x08001338;
        }
code_r0x08001420:
        uVar4 = 0x80001a1;
    }
    _printk(uVar4);
    uVar2 = 0xfffffff4;
code_r0x08001338:
    mutex_unlock(obj.pil_reloc_lock);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    auVar8 = __stack_chk_fail();
    puVar5 = auVar8._8_8_;
    *extraout_x18 = sym.writel;
    uVar6 = auVar8._0_8_ & 0xffffffff;
    log_write_mmio(uVar6,0x20,puVar5,0x8001470);
    DataMemoryBarrier(0,2);
    *puVar5 = auVar8._0_4_;
    uVar6 = log_post_write_mmio(uVar6,0x20,puVar5,0x800149c);
    return uVar6;
}


// ===== sym.writel @ 0x08001454 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001470);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800149c);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080014d0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001514

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
    //switch table (4 cases) at 0x80000a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001528);
    (*pcVar1)();
}


// ===== sym.cleanup_module @ 0x08001564 (size 80) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.pil_reloc_lock);
    iounmap(_sym.__cfi_check);
    _sym.__cfi_check = 0;
    mutex_unlock(obj.pil_reloc_lock);
    return;
}

