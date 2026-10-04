// decompiled from qcom_llcc_pmu by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 404) =====

//WARNING: Switch with 1 destination removed at 0x08001b88

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x530e21862dd8f955) {
                pcVar2 = sym.qcom_llcc_pmu_hw_type.cfi_jt;
            }
            else {
                if (arg1 != -0x46e4198d82690985) goto code_r0x08001b48;
                pcVar2 = sym.qcom_llcc_event_init.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
            }
        }
        else if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.qcom_llcc_pmu_probe.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
        }
        else {
            if (arg1 != 0x1196c13cb1cd802) goto code_r0x08001b48;
            pcVar2 = sym.qcom_llcc_event_add.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
        }
    }
    else if (arg1 < 0x34e3d70bc7a101f5) {
        if (arg1 != 0x2b3a43e29242445) {
            if ((arg1 == 0x10e66a4aa457de25) && ((pcVar1 + -0x80011b8 >> 3 | pcVar1 << 0x3d) < 3)) {
                return;
            }
            goto code_r0x08001b48;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x34e3d70bc7a101f5) {
        pcVar2 = sym.qcom_llcc_event_read.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001b48;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001b48:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b9c);
    (*pcVar1)();
}


// ===== sym.qcom_llcc_event_init.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt @ 0x080011a0 (size 8) =====

uint sym.qcom_llcc_event_init.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt(int64_t param_1)

{
    uint uVar1;
    
    if (*(param_1 + 0xe0) == 0x1000) {
        uVar1 = 0;
        *(param_1 + 0x170) = 0x1000;
    }
    else {
        uVar1 = 0xfffffffe;
    }
    return uVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_llcc_pmu_probe.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_llcc_pmu_probe.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_llcc_event_start.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt @ 0x080011b8 (size 8) =====

void sym.qcom_llcc_event_start.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    code *pcVar1;
    
    if (((param_2 >> 1 & 1) != 0) && ((*(param_1 + 0x1d8) >> 1 & 1) == 0)) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8001698);
        (*pcVar1)();
    }
    *(param_1 + 0x1d8) = 0;
    return;
}


// ===== sym.qcom_llcc_event_stop.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt @ 0x080011c0 (size 8) =====

void sym.qcom_llcc_event_stop.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_llcc_event_read(param_1);
    *(param_1 + 0x1d8) = *(param_1 + 0x1d8) | 3;
    return;
}


// ===== sym.qcom_llcc_event_del.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt @ 0x080011c8 (size 8) =====

void sym.qcom_llcc_event_del.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.users_lock);
    iVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    iVar1 = *(iVar4 + 0x550);
    if (iVar1 == 1) {
        _segment.ehdr = _segment.ehdr + -1;
        if (_segment.ehdr == 0) {
            sym.writel_relaxed(0,*(iVar4 + 0x138) + 0x200);
        }
code_r0x0800164c:
        _raw_spin_unlock(obj.users_lock);
        return;
    }
    uVar2 = *(param_1 + 0x28c);
    if (uVar2 < 0x20) {
        iVar3 = *(obj.users_alive + *(__per_cpu_offset + uVar2 * 8));
        if (iVar3 + -1 == 0) {
            if (iVar1 == 2) {
                uVar6 = sym.readl_relaxed(*(iVar4 + 0x138) + 0x200);
                sym.writel_relaxed(uVar6 & (1 << (uVar2 & 0x1f) ^ 0xffffffffU),
                                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x138) + 0x200);
            }
            else if (iVar1 == 0) {
                _printk(0x800021a);
            }
        }
        if (*(param_1 + 0x28c) < 0x20) {
            *(obj.users_alive + *(__per_cpu_offset + *(param_1 + 0x28c) * 8)) = iVar3 + -1;
            goto code_r0x0800164c;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8001678);
    (*pcVar5)();
}


// ===== sym.qcom_llcc_pmu_hw_type.cfi_jt @ 0x080011d0 (size 8) =====

uint sym.qcom_llcc_pmu_hw_type.cfi_jt(int *param_1)

{
    uint uVar1;
    
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x38) == 0)) {
        uVar1 = 0xfffffdfb;
    }
    else {
        uVar1 = 0;
        *param_1 = *(_segment.ehdr + 0x38);
    }
    return uVar1;
}


// ===== sym.qcom_llcc_event_read.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt @ 0x080011d8 (size 8) =====

void sym.qcom_llcc_event_read.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t arg1;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0x28c);
    arg1 = uVar1;
    uVar6 = _raw_spin_lock_irqsave(obj.counter_lock);
    iVar4 = *(_segment.ehdr + 0x550);
    if (iVar4 == 1) {
        iVar8 = ktime_get();
        if (1999999 < iVar8 - _segment.ehdr) {
            iVar4 = *(_segment.ehdr + 0x550);
            if (iVar4 == 1) {
                iVar9 = *(_segment.ehdr + 0x138);
                uVar7 = 0;
code_r0x08001860:
                sym.writel_relaxed(uVar7,iVar9 + 0x200);
            }
            else {
                if (iVar4 == 2) {
                    uVar5 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + 0x200);
                    uVar7 = uVar5 & (1 << (uVar1 & 0x1f) ^ 0xffffffffU);
                    iVar9 = *(_segment.ehdr + 0x138);
                    goto code_r0x08001860;
                }
                if (iVar4 == 0) {
                    _printk(0x800021a);
                }
            }
            iVar9 = 0x220;
            pcVar3 = obj.llcc_stats;
            do {
                if (*(_segment.ehdr + 0x550) == 0) {
                    _printk(0x800021a);
                    iVar4 = -0x16;
                }
                else {
                    iVar4 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + iVar9);
                }
                iVar9 = iVar9 + 4;
                *pcVar3 = (iVar4 << 3 & 0x7fffff8) + *pcVar3;
                pcVar3 = pcVar3 + 8;
            } while (iVar9 != 0x2a0);
            _segment.ehdr = iVar8;
            sym.mon_clear(arg1);
            iVar4 = *(_segment.ehdr + 0x550);
            if (iVar4 == 1) goto code_r0x0800190c;
            if (iVar4 == 2) goto code_r0x08001918;
            if (iVar4 == 0) goto code_r0x080018f4;
        }
code_r0x08001828:
        uVar2 = *(param_1 + 0x1d8);
    }
    else {
        if (iVar4 == 2) {
            uVar5 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + 0x200);
            sym.writel_relaxed(uVar5 & (1 << (uVar1 & 0x1f) ^ 0xffffffffU),*(_segment.ehdr + 0x138) + 0x200);
        }
        else if (iVar4 == 0) {
            _printk(0x800021a);
        }
        if (*(_segment.ehdr + 0x550) == 0) {
            _printk(0x800021a);
            uVar7 = 0x7ffff50;
        }
        else {
            iVar4 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + (uVar1 << 2) + 0x220);
            uVar7 = iVar4 << 3 & 0x7fffff8;
        }
        if (0x1f < uVar1) goto code_r0x080019a8;
        *(obj.llcc_stats + arg1 * 8) = *(obj.llcc_stats + arg1 * 8) + uVar7;
        sym.mon_clear(arg1);
        iVar4 = *(_segment.ehdr + 0x550);
        if (iVar4 == 1) {
code_r0x0800190c:
            iVar8 = *(_segment.ehdr + 0x138);
            uVar7 = 1;
        }
        else {
            if (iVar4 != 2) {
                if (iVar4 != 0) goto code_r0x08001828;
code_r0x080018f4:
                _printk(0x800021a);
                uVar2 = *(param_1 + 0x1d8);
                goto joined_r0x0800182c;
            }
code_r0x08001918:
            uVar5 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + 0x200);
            uVar7 = uVar5 | 1 << (uVar1 & 0x1f);
            iVar8 = *(_segment.ehdr + 0x138);
        }
        sym.writel_relaxed(uVar7,iVar8 + 0x200);
        uVar2 = *(param_1 + 0x1d8);
    }
joined_r0x0800182c:
    if ((uVar2 & 1) == 0) {
        if (0x1f < uVar1) {
code_r0x080019a8:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x80019ac);
            (*pcVar3)();
        }
        *(param_1 + 0xb0) = *(obj.llcc_stats + arg1 * 8);
    }
    _raw_spin_unlock_irqrestore(obj.counter_lock,uVar6);
    return;
}


// ===== sym.qcom_llcc_event_add.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.qcom_llcc_event_add.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.users_lock);
    iVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    iVar1 = *(iVar4 + 0x550);
    if (iVar1 == 1) {
        if (_segment.ehdr == 0) {
            sym.writel_relaxed(1,*(iVar4 + 0x138) + 0x200);
        }
        _segment.ehdr = _segment.ehdr + 1;
code_r0x0800151c:
        _raw_spin_unlock(obj.users_lock);
        uVar7 = 3;
        if ((param_2 & 1) != 0) {
            uVar7 = 0;
        }
        *(param_1 + 0x1d8) = uVar7;
        return 0;
    }
    uVar2 = *(param_1 + 0x28c);
    if (uVar2 < 0x20) {
        iVar3 = *(obj.users_alive + *(__per_cpu_offset + uVar2 * 8));
        if (iVar3 == 0) {
            if (iVar1 == 2) {
                uVar6 = sym.readl_relaxed(*(iVar4 + 0x138) + 0x200);
                sym.writel_relaxed(uVar6 | 1 << (uVar2 & 0x1f),*(CONCAT44(*0x8000004,_segment.ehdr) + 0x138) + 0x200);
            }
            else if (iVar1 == 0) {
                _printk(0x800021a);
            }
        }
        if (*(param_1 + 0x28c) < 0x20) {
            *(obj.users_alive + *(__per_cpu_offset + *(param_1 + 0x28c) * 8)) = iVar3 + 1;
            goto code_r0x0800151c;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8001560);
    (*pcVar5)();
}


// ===== sym.qcom_llcc_pmu_probe.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt @ 0x080011e8 (size 8) =====

uint sym.qcom_llcc_pmu_probe.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    if (_segment.ehdr == NULL) {
        _segment.ehdr = devm_kmalloc(iVar1,0x558,0xdc0);
        if (_segment.ehdr == NULL) {
            uVar3 = 0xfffffff4;
        }
        else {
            iVar4 = of_device_get_match_data(iVar1);
            puVar2 = _segment.ehdr;
            *(_segment.ehdr + 0xaa) = iVar4;
            if (iVar4 == 0) {
                _printk(0x8000239);
                uVar3 = 0xffffffed;
            }
            else {
                puVar2[10] = 0xffffffff00000000;
                puVar2[0xb] = 0;
                puVar2[8] = 0;
                puVar2[9] = 0;
                puVar2[6] = 0;
                puVar2[7] = 0;
                puVar2[0xe] = sym.qcom_llcc_event_init.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0xf] = 0;
                puVar2[4] = 0;
                puVar2[5] = 0;
                puVar2[2] = 0;
                puVar2[3] = 0;
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar2[0x10] = 0;
                puVar2[0x11] = sym.qcom_llcc_event_add.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0xc] = 0;
                puVar2[0xd] = 0;
                puVar2[0x16] = 0;
                puVar2[0x17] = 0;
                puVar2[0x18] = 0;
                puVar2[0x19] = 0;
                puVar2[0x12] = sym.qcom_llcc_event_del.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0x13] = sym.qcom_llcc_event_start.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0x1a] = 0;
                puVar2[0x1b] = 0;
                puVar2[0x1c] = 0;
                puVar2[0x1d] = 0;
                puVar2[0x1e] = 0;
                puVar2[0x1f] = 0;
                puVar2[0x14] = sym.qcom_llcc_event_stop.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0x15] = sym.qcom_llcc_event_read.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0x20] = 0;
                puVar2[0x21] = 0;
                puVar2[0x22] = 0;
                puVar2[0x23] = 0;
                puVar2[0x24] = 0;
                uVar5 = platform_get_resource_byname(param_1,0x200,"lagg-base");
                uVar6 = devm_ioremap_resource(iVar1,uVar5);
                puVar2 = _segment.ehdr;
                _segment.ehdr[0x27] = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                    iVar4 = perf_pmu_register(puVar2,"llcc-pmu",0xffffffff);
                    if (iVar4 < 0) {
                        _dev_err(iVar1,"",iVar4);
                    }
                    _dev_info(iVar1,"Registered llcc_pmu, type: %d\n",*(_segment.ehdr + 7));
                    uVar3 = 0;
                }
                else {
                    _dev_err(iVar1,"Can\'t map PMU lagg base: @%pa\n",uVar5);
                    uVar3 = *(_segment.ehdr + 0x27);
                }
            }
        }
    }
    else {
        _dev_err(iVar1,"Only one LLCC PMU allowed!\n");
        uVar3 = 0xffffffed;
    }
    return uVar3;
}


// ===== sym.qcom_llcc_pmu_hw_type @ 0x080011f0 (size 52) =====

uint sym.qcom_llcc_pmu_hw_type(int64_t arg1)

{
    uint uVar1;
    
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x38) == 0)) {
        uVar1 = 0xfffffdfb;
    }
    else {
        uVar1 = 0;
        *arg1 = *(_segment.ehdr + 0x38);
    }
    return uVar1;
}


// ===== sym.qcom_llcc_pmu_probe @ 0x08001224 (size 464) =====

uint sym.qcom_llcc_pmu_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    if (_segment.ehdr == NULL) {
        _segment.ehdr = devm_kmalloc(iVar1,0x558,0xdc0);
        if (_segment.ehdr == NULL) {
            uVar3 = 0xfffffff4;
        }
        else {
            iVar4 = of_device_get_match_data(iVar1);
            puVar2 = _segment.ehdr;
            *(_segment.ehdr + 0xaa) = iVar4;
            if (iVar4 == 0) {
                _printk(0x8000239);
                uVar3 = 0xffffffed;
            }
            else {
                puVar2[10] = 0xffffffff00000000;
                puVar2[0xb] = 0;
                puVar2[8] = 0;
                puVar2[9] = 0;
                puVar2[6] = 0;
                puVar2[7] = 0;
                puVar2[0xe] = sym.qcom_llcc_event_init.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0xf] = 0;
                puVar2[4] = 0;
                puVar2[5] = 0;
                puVar2[2] = 0;
                puVar2[3] = 0;
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar2[0x10] = 0;
                puVar2[0x11] = sym.qcom_llcc_event_add.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0xc] = 0;
                puVar2[0xd] = 0;
                puVar2[0x16] = 0;
                puVar2[0x17] = 0;
                puVar2[0x18] = 0;
                puVar2[0x19] = 0;
                puVar2[0x12] = sym.qcom_llcc_event_del.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0x13] = sym.qcom_llcc_event_start.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0x1a] = 0;
                puVar2[0x1b] = 0;
                puVar2[0x1c] = 0;
                puVar2[0x1d] = 0;
                puVar2[0x1e] = 0;
                puVar2[0x1f] = 0;
                puVar2[0x14] = sym.qcom_llcc_event_stop.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0x15] = sym.qcom_llcc_event_read.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt;
                puVar2[0x20] = 0;
                puVar2[0x21] = 0;
                puVar2[0x22] = 0;
                puVar2[0x23] = 0;
                puVar2[0x24] = 0;
                uVar5 = platform_get_resource_byname(arg1,0x200,"lagg-base");
                uVar6 = devm_ioremap_resource(iVar1,uVar5);
                puVar2 = _segment.ehdr;
                _segment.ehdr[0x27] = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                    iVar4 = perf_pmu_register(puVar2,"llcc-pmu",0xffffffff);
                    if (iVar4 < 0) {
                        _dev_err(iVar1,"",iVar4);
                    }
                    _dev_info(iVar1,"Registered llcc_pmu, type: %d\n",*(_segment.ehdr + 7));
                    uVar3 = 0;
                }
                else {
                    _dev_err(iVar1,"Can\'t map PMU lagg base: @%pa\n",uVar5);
                    uVar3 = *(_segment.ehdr + 0x27);
                }
            }
        }
    }
    else {
        _dev_err(iVar1,"Only one LLCC PMU allowed!\n");
        uVar3 = 0xffffffed;
    }
    return uVar3;
}


// ===== sym.qcom_llcc_event_init @ 0x080013f4 (size 48) =====

uint sym.qcom_llcc_event_init(int64_t arg1)

{
    uint uVar1;
    
    if (*(arg1 + 0xe0) == 0x1000) {
        uVar1 = 0;
        *(arg1 + 0x170) = 0x1000;
    }
    else {
        uVar1 = 0xfffffffe;
    }
    return uVar1;
}


// ===== sym.qcom_llcc_event_add @ 0x08001424 (size 316) =====

ulong sym.qcom_llcc_event_add(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.users_lock);
    iVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    iVar1 = *(iVar4 + 0x550);
    if (iVar1 == 1) {
        if (_segment.ehdr == 0) {
            sym.writel_relaxed(1,*(iVar4 + 0x138) + 0x200);
        }
        _segment.ehdr = _segment.ehdr + 1;
code_r0x0800151c:
        _raw_spin_unlock(obj.users_lock);
        uVar7 = 3;
        if ((arg2 & 1U) != 0) {
            uVar7 = 0;
        }
        *(arg1 + 0x1d8) = uVar7;
        return 0;
    }
    uVar2 = *(arg1 + 0x28c);
    if (uVar2 < 0x20) {
        iVar3 = *(obj.users_alive + *(__per_cpu_offset + uVar2 * 8));
        if (iVar3 == 0) {
            if (iVar1 == 2) {
                uVar6 = sym.readl_relaxed(*(iVar4 + 0x138) + 0x200);
                sym.writel_relaxed(uVar6 | 1 << (uVar2 & 0x1f),*(CONCAT44(*0x8000004,_segment.ehdr) + 0x138) + 0x200);
            }
            else if (iVar1 == 0) {
                _printk(0x800021a);
            }
        }
        if (*(arg1 + 0x28c) < 0x20) {
            *(obj.users_alive + *(__per_cpu_offset + *(arg1 + 0x28c) * 8)) = iVar3 + 1;
            goto code_r0x0800151c;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8001560);
    (*pcVar5)();
}


// ===== sym.qcom_llcc_event_del @ 0x08001560 (size 280) =====

void sym.qcom_llcc_event_del(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.users_lock);
    iVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    iVar1 = *(iVar4 + 0x550);
    if (iVar1 == 1) {
        _segment.ehdr = _segment.ehdr + -1;
        if (_segment.ehdr == 0) {
            sym.writel_relaxed(0,*(iVar4 + 0x138) + 0x200);
        }
code_r0x0800164c:
        _raw_spin_unlock(obj.users_lock);
        return;
    }
    uVar2 = *(arg1 + 0x28c);
    if (uVar2 < 0x20) {
        iVar3 = *(obj.users_alive + *(__per_cpu_offset + uVar2 * 8));
        if (iVar3 + -1 == 0) {
            if (iVar1 == 2) {
                uVar6 = sym.readl_relaxed(*(iVar4 + 0x138) + 0x200);
                sym.writel_relaxed(uVar6 & (1 << (uVar2 & 0x1f) ^ 0xffffffffU),
                                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x138) + 0x200);
            }
            else if (iVar1 == 0) {
                _printk(0x800021a);
            }
        }
        if (*(arg1 + 0x28c) < 0x20) {
            *(obj.users_alive + *(__per_cpu_offset + *(arg1 + 0x28c) * 8)) = iVar3 + -1;
            goto code_r0x0800164c;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8001678);
    (*pcVar5)();
}


// ===== sym.qcom_llcc_event_start @ 0x08001678 (size 32) =====

void sym.qcom_llcc_event_start(int64_t arg1)

{
    code *pcVar1;
    uint32_t in_w1;
    
    if (((in_w1 >> 1 & 1) != 0) && ((*(arg1 + 0x1d8) >> 1 & 1) == 0)) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8001698);
        (*pcVar1)();
    }
    *(arg1 + 0x1d8) = 0;
    return;
}


// ===== sym.qcom_llcc_event_stop @ 0x0800169c (size 60) =====

void sym.qcom_llcc_event_stop(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_llcc_event_read(arg1);
    *(arg1 + 0x1d8) = *(arg1 + 0x1d8) | 3;
    return;
}


// ===== sym.qcom_llcc_event_read @ 0x080016d8 (size 724) =====

void sym.qcom_llcc_event_read(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t arg1_00;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x28c);
    arg1_00 = uVar1;
    uVar6 = _raw_spin_lock_irqsave(obj.counter_lock);
    iVar4 = *(_segment.ehdr + 0x550);
    if (iVar4 == 1) {
        iVar8 = ktime_get();
        if (1999999 < iVar8 - _segment.ehdr) {
            iVar4 = *(_segment.ehdr + 0x550);
            if (iVar4 == 1) {
                iVar9 = *(_segment.ehdr + 0x138);
                uVar7 = 0;
code_r0x08001860:
                sym.writel_relaxed(uVar7,iVar9 + 0x200);
            }
            else {
                if (iVar4 == 2) {
                    uVar5 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + 0x200);
                    uVar7 = uVar5 & (1 << (uVar1 & 0x1f) ^ 0xffffffffU);
                    iVar9 = *(_segment.ehdr + 0x138);
                    goto code_r0x08001860;
                }
                if (iVar4 == 0) {
                    _printk(0x800021a);
                }
            }
            iVar9 = 0x220;
            pcVar3 = obj.llcc_stats;
            do {
                if (*(_segment.ehdr + 0x550) == 0) {
                    _printk(0x800021a);
                    iVar4 = -0x16;
                }
                else {
                    iVar4 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + iVar9);
                }
                iVar9 = iVar9 + 4;
                *pcVar3 = (iVar4 << 3 & 0x7fffff8) + *pcVar3;
                pcVar3 = pcVar3 + 8;
            } while (iVar9 != 0x2a0);
            _segment.ehdr = iVar8;
            sym.mon_clear(arg1_00);
            iVar4 = *(_segment.ehdr + 0x550);
            if (iVar4 == 1) goto code_r0x0800190c;
            if (iVar4 == 2) goto code_r0x08001918;
            if (iVar4 == 0) goto code_r0x080018f4;
        }
code_r0x08001828:
        uVar2 = *(arg1 + 0x1d8);
    }
    else {
        if (iVar4 == 2) {
            uVar5 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + 0x200);
            sym.writel_relaxed(uVar5 & (1 << (uVar1 & 0x1f) ^ 0xffffffffU),*(_segment.ehdr + 0x138) + 0x200);
        }
        else if (iVar4 == 0) {
            _printk(0x800021a);
        }
        if (*(_segment.ehdr + 0x550) == 0) {
            _printk(0x800021a);
            uVar7 = 0x7ffff50;
        }
        else {
            iVar4 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + (uVar1 << 2) + 0x220);
            uVar7 = iVar4 << 3 & 0x7fffff8;
        }
        if (0x1f < uVar1) goto code_r0x080019a8;
        *(obj.llcc_stats + arg1_00 * 8) = *(obj.llcc_stats + arg1_00 * 8) + uVar7;
        sym.mon_clear(arg1_00);
        iVar4 = *(_segment.ehdr + 0x550);
        if (iVar4 == 1) {
code_r0x0800190c:
            iVar8 = *(_segment.ehdr + 0x138);
            uVar7 = 1;
        }
        else {
            if (iVar4 != 2) {
                if (iVar4 != 0) goto code_r0x08001828;
code_r0x080018f4:
                _printk(0x800021a);
                uVar2 = *(arg1 + 0x1d8);
                goto joined_r0x0800182c;
            }
code_r0x08001918:
            uVar5 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + 0x200);
            uVar7 = uVar5 | 1 << (uVar1 & 0x1f);
            iVar8 = *(_segment.ehdr + 0x138);
        }
        sym.writel_relaxed(uVar7,iVar8 + 0x200);
        uVar2 = *(arg1 + 0x1d8);
    }
joined_r0x0800182c:
    if ((uVar2 & 1) == 0) {
        if (0x1f < uVar1) {
code_r0x080019a8:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x80019ac);
            (*pcVar3)();
        }
        *(arg1 + 0xb0) = *(obj.llcc_stats + arg1_00 * 8);
    }
    _raw_spin_unlock_irqrestore(obj.counter_lock,uVar6);
    return;
}


// ===== sym.writel_relaxed @ 0x080019ac (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80019c8);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80019f0);
    return;
}


// ===== sym.readl_relaxed @ 0x08001a24 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001a28);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001a5c);
    return uVar1;
}


// ===== sym.mon_clear @ 0x08001a94 (size 176) =====

void sym.mon_clear(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t arg1_00;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(_segment.ehdr + 0x550);
    if (iVar1 == 1) {
        iVar4 = *(_segment.ehdr + 0x138);
        arg1_00 = 0x10;
    }
    else {
        if (iVar1 != 2) {
            if (iVar1 != 0) {
                return;
            }
            _printk(0x800021a);
            return;
        }
        uVar3 = sym.readl_relaxed(*(_segment.ehdr + 0x138) + 0x200);
        uVar2 = 1 << (arg1 + 0x10U & 0x1f);
        sym.writel_relaxed(uVar3 | uVar2,*(_segment.ehdr + 0x138) + 0x200);
        arg1_00 = uVar3 & (uVar2 ^ 0xffffffff);
        iVar4 = *(_segment.ehdr + 0x138);
    }
    sym.writel_relaxed(arg1_00,iVar4 + 0x200);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001b44 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001b88

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
    //switch table (4 cases) at 0x8000251
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b9c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001bbc (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_llcc_pmu_probe.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001bf0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_llcc_pmu_probe.b385dfa2d7c3700155bed33b47ba4d1c.cfi_jt);
    return;
}

