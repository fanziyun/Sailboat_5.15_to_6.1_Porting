// decompiled from qcom-cpufreq-hw-debug by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x08001880

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x8001120 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001840;
        }
        if (arg1 != -0xec78b8726b9c1e8) goto code_r0x08001840;
        pcVar2 = sym.cpufreq_hwregs_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.cpufreq_panic_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001840;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001840:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001894);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_cpufreq_hw_debug_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_cpufreq_hw_debug_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cpufreq_panic_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001110 (size 8) =====

ulong sym.cpufreq_panic_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    code *pcVar1;
    uint uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (0 < *(_segment.ehdr + 0x30)) {
        uVar3 = 0;
        do {
            _printk(0x800029f,"cpufreq_panic_callback",uVar3 & 0xffffffff);
            if (uVar3 == 6) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x80017cc);
                (*pcVar1)();
            }
            uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *_segment.ehdr);
            _printk(0x80001fd,"cpufreq_panic_callback","PERF_STATE_DESIRED",uVar2);
            uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 2));
            _printk(0x80001fd,"cpufreq_panic_callback","CYCLE_CNTR_VAL",uVar2);
            uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 4));
            _printk(0x80001fd,"cpufreq_panic_callback","PSTATE_STATUS",uVar2);
            if (pcVar1 == obj.cpufreq_qcom_std_epss_data) {
                uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 6));
                _printk(0x80001fd,"cpufreq_panic_callback","EPSS_DEBUG_STATUS",uVar2);
                uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 8));
                _printk(0x80001fd,"cpufreq_panic_callback","EPSS_DEBUG_SRB",uVar2);
                uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 10));
                _printk(0x80001fd,"cpufreq_panic_callback","EPSS_DEBUG_LUT",uVar2);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(_segment.ehdr + 0x30));
    }
    return 1;
}


// ===== sym.cpufreq_hwregs_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001118 (size 8) =====

uint32_t sym.cpufreq_hwregs_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    code *pcVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (*(_segment.ehdr + 0x30) < 1) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        uVar5 = 0;
        do {
            iVar2 = scnprintf(param_3 + uVar6,0x1000,"FREQUENCY DOMAIN %d\n",uVar5 & 0xffffffff);
            if (uVar5 == 6) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x80015d4);
                (*pcVar1)();
            }
            uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *_segment.ehdr);
            iVar4 = scnprintf(param_3 + iVar2 + uVar6,0x1000,"%25s: 0x%.8x\n","PERF_STATE_DESIRED",uVar3);
            uVar6 = iVar4 + iVar2 + uVar6;
            uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 2));
            iVar2 = scnprintf(param_3 + uVar6,0x1000,"%25s: 0x%.8x\n","CYCLE_CNTR_VAL",uVar3);
            uVar6 = iVar2 + uVar6;
            uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 4));
            iVar2 = scnprintf(param_3 + uVar6,0x1000,"%25s: 0x%.8x\n","PSTATE_STATUS",uVar3);
            uVar6 = iVar2 + uVar6;
            if (pcVar1 == obj.cpufreq_qcom_std_epss_data) {
                uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 6));
                iVar2 = scnprintf(param_3 + uVar6,0x1000,"%25s: 0x%.8x\n","EPSS_DEBUG_STATUS",uVar3);
                uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 8));
                iVar4 = scnprintf(param_3 + iVar2 + uVar6,0x1000,"%25s: 0x%.8x\n","EPSS_DEBUG_SRB",uVar3);
                uVar6 = iVar4 + iVar2 + uVar6;
                uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 10));
                iVar2 = scnprintf(param_3 + uVar6,0x1000,"%25s: 0x%.8x\n","EPSS_DEBUG_LUT",uVar3);
                uVar6 = iVar2 + uVar6;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(_segment.ehdr + 0x30));
    }
    return uVar6;
}


// ===== sym.qcom_cpufreq_hw_debug_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001120 (size 8) =====

int sym.qcom_cpufreq_hw_debug_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    int64_t iStack_f8;
    int64_t iStack_f0;
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
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar1 = param_1 + 0x10;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
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
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    iStack_f8 = 0;
    iStack_f0 = 0;
    _segment.ehdr = of_device_get_match_data(iVar1);
    if (_segment.ehdr == 0) {
code_r0x08001300:
        iVar3 = -0x16;
    }
    else {
        _segment.ehdr = devm_kmalloc(iVar1,0x38,0xdc0);
        if (_segment.ehdr != 0) {
            iVar4 = of_find_property(*(param_1 + 0x300),"qcom,freq-hw-domain",0);
            if (iVar4 != 0) {
                iVar3 = *(iVar4 + 8);
                *(_segment.ehdr + 0x30) = iVar3 >> 3;
                if (7 < iVar3) {
                    uVar6 = 0;
                    do {
                        iVar3 = of_parse_phandle_with_fixed_args
                                          (*(param_1 + 0x300),"qcom,freq-hw-domain",1,uVar6 & 0xffffffff,&uStack_98)
                        ;
                        if ((iVar3 != 0) ||
                           (iVar3 = of_address_to_resource(uStack_98,uStack_90._4_4_,&iStack_f8), iVar3 != 0)) {
                            if (-1 < iVar3) goto code_r0x08001284;
                            goto code_r0x0800130c;
                        }
                        iVar5 = devm_ioremap(iVar1,iStack_f8,(iStack_f0 - iStack_f8) + 1);
                        iVar4 = _segment.ehdr;
                        if (iVar5 == 0) goto code_r0x08001308;
                        if (uVar6 == 6) {
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x5512,0x8001358);
                            (*pcVar2)();
                        }
                        *(_segment.ehdr + uVar6 * 8) = iVar5;
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < *(iVar4 + 0x30));
                }
                atomic_notifier_chain_register
                          (panic_notifier_list,reloc.cpufreq_panic_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
code_r0x08001284:
                _segment.ehdr = kobject_create_and_add("qcom-cpufreq-hw",_of_device_get_match_data);
                if (_segment.ehdr == 0) {
                    iVar3 = -0xc;
                }
                else {
                    _reloc.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt =
                         "print_cpufreq_debug_regs";
                    *0x8000068 = sym.cpufreq_hwregs_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *0x8000060 = 0x124;
                    iVar3 = sysfs_create_file_ns
                                      (_segment.ehdr,
                                       reloc.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0);
                    if (iVar3 != 0) {
                        _dev_err(iVar1,"Failed to create sysfs entry\n");
                        kobject_put(_segment.ehdr);
                    }
                }
                goto code_r0x0800131c;
            }
            goto code_r0x08001300;
        }
code_r0x08001308:
        iVar3 = -0xc;
    }
code_r0x0800130c:
    _dev_err(iVar1,"Failed to map cpufreq hw regs\n");
code_r0x0800131c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_cpufreq_hw_debug_remove;
    sysfs_remove_file_ns
              (_of_device_get_match_data,reloc.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0)
    ;
    kobject_put(_segment.ehdr);
    return 0;
}


// ===== sym.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sysfs_remove_file_ns
              (_of_device_get_match_data,reloc.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0)
    ;
    kobject_put(_segment.ehdr);
    return 0;
}


// ===== sym.qcom_cpufreq_hw_debug_probe @ 0x08001130 (size 556) =====

int sym.qcom_cpufreq_hw_debug_probe(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    int64_t iStack_f8;
    int64_t iStack_f0;
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
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar1 = arg1 + 0x10;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
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
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    iStack_f8 = 0;
    iStack_f0 = 0;
    _segment.ehdr = of_device_get_match_data(iVar1);
    if (_segment.ehdr == 0) {
code_r0x08001300:
        iVar3 = -0x16;
    }
    else {
        _segment.ehdr = devm_kmalloc(iVar1,0x38,0xdc0);
        if (_segment.ehdr != 0) {
            iVar4 = of_find_property(*(arg1 + 0x300),"qcom,freq-hw-domain",0);
            if (iVar4 != 0) {
                iVar3 = *(iVar4 + 8);
                *(_segment.ehdr + 0x30) = iVar3 >> 3;
                if (7 < iVar3) {
                    uVar6 = 0;
                    do {
                        iVar3 = of_parse_phandle_with_fixed_args
                                          (*(arg1 + 0x300),"qcom,freq-hw-domain",1,uVar6 & 0xffffffff,&uStack_98);
                        if ((iVar3 != 0) ||
                           (iVar3 = of_address_to_resource(uStack_98,uStack_90._4_4_,&iStack_f8), iVar3 != 0)) {
                            if (-1 < iVar3) goto code_r0x08001284;
                            goto code_r0x0800130c;
                        }
                        iVar5 = devm_ioremap(iVar1,iStack_f8,(iStack_f0 - iStack_f8) + 1);
                        iVar4 = _segment.ehdr;
                        if (iVar5 == 0) goto code_r0x08001308;
                        if (uVar6 == 6) {
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x5512,0x8001358);
                            (*pcVar2)();
                        }
                        *(_segment.ehdr + uVar6 * 8) = iVar5;
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < *(iVar4 + 0x30));
                }
                atomic_notifier_chain_register
                          (panic_notifier_list,reloc.cpufreq_panic_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
code_r0x08001284:
                _segment.ehdr = kobject_create_and_add("qcom-cpufreq-hw",_of_device_get_match_data);
                if (_segment.ehdr == 0) {
                    iVar3 = -0xc;
                }
                else {
                    _reloc.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt =
                         "print_cpufreq_debug_regs";
                    *0x8000068 = sym.cpufreq_hwregs_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *0x8000060 = 0x124;
                    iVar3 = sysfs_create_file_ns
                                      (_segment.ehdr,
                                       reloc.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0);
                    if (iVar3 != 0) {
                        _dev_err(iVar1,"Failed to create sysfs entry\n");
                        kobject_put(_segment.ehdr);
                    }
                }
                goto code_r0x0800131c;
            }
            goto code_r0x08001300;
        }
code_r0x08001308:
        iVar3 = -0xc;
    }
code_r0x0800130c:
    _dev_err(iVar1,"Failed to map cpufreq hw regs\n");
code_r0x0800131c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_cpufreq_hw_debug_remove;
    sysfs_remove_file_ns
              (_of_device_get_match_data,reloc.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0)
    ;
    kobject_put(_segment.ehdr);
    return 0;
}


// ===== sym.qcom_cpufreq_hw_debug_remove @ 0x0800135c (size 72) =====

ulong sym.qcom_cpufreq_hw_debug_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sysfs_remove_file_ns
              (_of_device_get_match_data,reloc.qcom_cpufreq_hw_debug_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0)
    ;
    kobject_put(_segment.ehdr);
    return 0;
}


// ===== sym.cpufreq_hwregs_show @ 0x080013a4 (size 560) =====

uint32_t sym.cpufreq_hwregs_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (*(_segment.ehdr + 0x30) < 1) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        uVar5 = 0;
        do {
            iVar2 = scnprintf(noname_1,arg2 + uVar6,0x1000,"FREQUENCY DOMAIN %d\n",uVar5 & 0xffffffff);
            if (uVar5 == 6) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x80015d4);
                (*pcVar1)();
            }
            uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *_segment.ehdr);
            iVar4 = scnprintf(arg2 + iVar2 + uVar6,0x1000,"%25s: 0x%.8x\n","PERF_STATE_DESIRED",uVar3);
            uVar6 = iVar4 + iVar2 + uVar6;
            uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 2));
            iVar2 = scnprintf(arg2 + uVar6,0x1000,"%25s: 0x%.8x\n","CYCLE_CNTR_VAL",uVar3);
            uVar6 = iVar2 + uVar6;
            uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 4));
            iVar2 = scnprintf(arg2 + uVar6,0x1000,"%25s: 0x%.8x\n","PSTATE_STATUS",uVar3);
            uVar6 = iVar2 + uVar6;
            noname_1 = extraout_q0;
            if (pcVar1 == obj.cpufreq_qcom_std_epss_data) {
                uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 6));
                iVar2 = scnprintf(arg2 + uVar6,0x1000,"%25s: 0x%.8x\n","EPSS_DEBUG_STATUS",uVar3);
                uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 8));
                iVar4 = scnprintf(arg2 + iVar2 + uVar6,0x1000,"%25s: 0x%.8x\n","EPSS_DEBUG_SRB",uVar3);
                uVar6 = iVar4 + iVar2 + uVar6;
                uVar3 = sym.readl_relaxed(*(_segment.ehdr + uVar5 * 8) + *(_segment.ehdr + 10));
                iVar2 = scnprintf(arg2 + uVar6,0x1000,"%25s: 0x%.8x\n","EPSS_DEBUG_LUT",uVar3);
                uVar6 = iVar2 + uVar6;
                noname_1 = extraout_q0_00;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(_segment.ehdr + 0x30));
    }
    return uVar6;
}


// ===== sym.cpufreq_panic_callback @ 0x080015d4 (size 504) =====

ulong sym.cpufreq_panic_callback(void)

{
    code *pcVar1;
    uint uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (0 < *(_segment.ehdr + 0x30)) {
        uVar3 = 0;
        do {
            _printk(0x800029f,"cpufreq_panic_callback",uVar3 & 0xffffffff);
            if (uVar3 == 6) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x80017cc);
                (*pcVar1)();
            }
            uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *_segment.ehdr);
            _printk(0x80001fd,"cpufreq_panic_callback","PERF_STATE_DESIRED",uVar2);
            uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 2));
            _printk(0x80001fd,"cpufreq_panic_callback","CYCLE_CNTR_VAL",uVar2);
            uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 4));
            _printk(0x80001fd,"cpufreq_panic_callback","PSTATE_STATUS",uVar2);
            if (pcVar1 == obj.cpufreq_qcom_std_epss_data) {
                uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 6));
                _printk(0x80001fd,"cpufreq_panic_callback","EPSS_DEBUG_STATUS",uVar2);
                uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 8));
                _printk(0x80001fd,"cpufreq_panic_callback","EPSS_DEBUG_SRB",uVar2);
                uVar2 = sym.readl_relaxed(*(_segment.ehdr + uVar3 * 8) + *(_segment.ehdr + 10));
                _printk(0x80001fd,"cpufreq_panic_callback","EPSS_DEBUG_LUT",uVar2);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(_segment.ehdr + 0x30));
    }
    return 1;
}


// ===== sym.readl_relaxed @ 0x080017cc (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80017d0);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001804);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x0800183c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001880

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
    //switch table (4 cases) at 0x8000158
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001894);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080018a4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_cpufreq_hw_debug_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080018d8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_cpufreq_hw_debug_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

