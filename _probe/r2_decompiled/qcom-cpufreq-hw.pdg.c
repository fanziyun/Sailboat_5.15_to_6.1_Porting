// decompiled from qcom-cpufreq-hw by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 980) =====

//WARNING: Switch with 1 destination removed at 0x08003128

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x349e059da691227a) {
        if (arg1 < -0x5cb4feabb3b38dc0) {
            if (arg1 < -0x69482e1959b5c6bc) {
                if (arg1 == -0x7935bbaf0f11066c) {
                    pcVar2 = sym.__bpf_trace_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
                    goto code_r0x0800139c;
                }
                if (arg1 != -0x6f1514ff4ead0440) goto code_r0x080030e8;
                pcVar2 = sym.cpufreq_generic_frequency_table_verify.cfi_jt;
            }
            else if (arg1 == -0x69482e1959b5c6bc) {
                pcVar2 = sym.__traceiter_dcvsh_throttle.cfi_jt;
            }
            else if (arg1 == -0x66d421a09845f9f8) {
                pcVar2 = sym.dcvsh_freq_limit_show.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
            }
            else {
                if (arg1 != -0x5db201c0cafc4335) goto code_r0x080030e8;
                pcVar2 = sym.__traceiter_dcvsh_freq.cfi_jt;
            }
        }
        else if (arg1 < -0x550b9e52359ac614) {
            if (arg1 == -0x5cb4feabb3b38dc0) {
                pcVar2 = sym.qcom_cpufreq_hw_cpu_init.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
code_r0x080013b8:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080030e8;
            }
            if (arg1 != -0x55d4f3678fa52a79) goto code_r0x080030e8;
            pcVar2 = sym.qcom_cpufreq_hw_fast_switch.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
        }
        else if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.qcom_lmh_dcvs_poll.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x080030e8;
                pcVar2 = sym.qcom_cpufreq_hw_driver_probe.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
                goto code_r0x080013b8;
            }
            pcVar2 = sym.qcom_lmh_dcvs_handle_irq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
        }
    }
    else if (arg1 < 0x1c2b0952efa24c7a) {
        if (arg1 < -0x26129460156ffe87) {
            if (arg1 == -0x349e059da691227a) {
                pcVar2 = sym.__bpf_trace_dcvsh_throttle.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
code_r0x0800139c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x080030e8;
            }
            if (arg1 != -0x2ee0710dce68437c) goto code_r0x080030e8;
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        else if (arg1 == -0x26129460156ffe87) {
            pcVar2 = sym.qcom_cpufreq_get_cpu_cycle_counter.cfi_jt;
        }
        else if (arg1 == -0x218c0108fde83420) {
            pcVar2 = sym.trace_event_raw_init.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080030e8;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x5a1cd46f68d821b0) {
        if (arg1 == 0x1c2b0952efa24c7a) {
            pcVar2 = sym.trace_event_reg.cfi_jt;
        }
        else {
            if (arg1 == 0x3dd1a39e589289fe) {
                pcVar2 = sym.trace_raw_output_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
                goto code_r0x080013b8;
            }
            if (arg1 != 0x447781c475ab9d7f) goto code_r0x080030e8;
            pcVar2 = sym.qcom_cpufreq_hw_target_index.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
        }
    }
    else if (arg1 == 0x5a1cd46f68d821b0) {
        pcVar2 = sym.cpufreq_register_em_with_opp.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
    }
    else if (arg1 == 0x77c30cb837e57aa5) {
        pcVar2 = sym.qcom_cpufreq_hw_get.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080030e8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080030e8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800313c);
    (*pcVar1)();
}


// ===== sym.qcom_cpufreq_hw_fast_switch.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x080013e0 (size 8) =====

uint sym.qcom_cpufreq_hw_fast_switch.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0x280);
    sym.writel_relaxed(uVar1,**(param_1 + 0x2b8) + *((*(param_1 + 0x2b8))[2] + 0x14));
    return *(*(param_1 + 400) + uVar1 * 0xc + 8);
}


// ===== sym.qcom_cpufreq_get_cpu_cycle_counter.cfi_jt @ 0x080013e8 (size 8) =====

int64_t sym.qcom_cpufreq_get_cpu_cycle_counter.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = cpufreq_cpu_get_raw();
    if (iVar6 == 0) {
        iVar6 = 0;
    }
    else {
        if (0x20 < param_1) {
code_r0x08001b30:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8001b34);
            (*pcVar4)();
        }
        iVar9 = param_1;
        piVar10 = *(iVar6 + 0x2b8);
        iVar1 = iVar9 * 0x10 + 0x8000264;
        iVar6 = piVar10[2];
        uVar7 = _raw_spin_lock_irqsave(iVar1);
        if (*(iVar6 + 0x2a) == '\0') {
            uVar8 = 0;
        }
        else {
            if (0x1f < param_1) goto code_r0x08001b30;
            uVar8 = *(_raw_spin_unlock_irqrestore + iVar9 * 0x30) * 4 + 4U & 0xfffc;
        }
        uVar5 = sym.readl_relaxed(*piVar10 + *(iVar6 + 0x18) + uVar8);
        if (0x200 < (iVar9 * 0x10 | 8U)) {
code_r0x08001b2c:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(1,0x8001b30);
            (*pcVar4)();
        }
        uVar2 = *(reloc.__traceiter_dcvsh_throttle.cfi_jt + iVar9 * 0x10);
        uVar3 = -uVar2;
        if (uVar5 < uVar2) {
            if (param_1 == 0x20) goto code_r0x08001b2c;
            uVar3 = ~uVar2;
        }
        else if (param_1 == 0x20) goto code_r0x08001b2c;
        *(reloc.__traceiter_dcvsh_throttle.cfi_jt + iVar9 * 0x10) = uVar5;
        iVar6 = *(reloc.__traceiter_dcvsh_freq.cfi_jt + iVar9 * 0x10) + uVar5 + uVar3;
        *(reloc.__traceiter_dcvsh_freq.cfi_jt + iVar9 * 0x10) = iVar6;
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
    }
    return iVar6;
}


// ===== sym.qcom_cpufreq_hw_get.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x080013f0 (size 8) =====

uint sym.qcom_cpufreq_hw_get.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(void)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = cpufreq_cpu_get_raw();
    uVar2 = 0;
    if (iVar3 != 0) {
        uVar1 = sym.readl_relaxed(**(iVar3 + 0x2b8) + *((*(iVar3 + 0x2b8))[2] + 0x14));
        if (0x26 < uVar1) {
            uVar1 = 0x27;
        }
        uVar2 = *(*(iVar3 + 400) + uVar1 * 0xc + 8);
    }
    return uVar2;
}


// ===== sym.__traceiter_dcvsh_throttle.cfi_jt @ 0x080013f8 (size 8) =====

ulong sym.__traceiter_dcvsh_throttle.cfi_jt(ulong param_1,ulong param_2,uint32_t param_3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8003278 != NULL) {
        piVar1 = *0x8003278;
        do {
            (**piVar1)(piVar1[1],param_2,param_3 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08001400 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08001408 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_cpufreq_hw_driver_probe.b61897fa48d7967df0d3263ac4417bf4.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_lmh_dcvs_poll.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001410 (size 8) =====

void sym.qcom_lmh_dcvs_poll.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_lmh_dcvs_notify(param_1 + -0x60);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001418 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_cpufreq_hw_driver_probe.b61897fa48d7967df0d3263ac4417bf4.cfi_jt);
    return;
}


// ===== sym.__traceiter_dcvsh_freq.cfi_jt @ 0x08001420 (size 8) =====

ulong sym.__traceiter_dcvsh_freq.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8003230;
    piVar1 = *0x8003230;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_raw_output_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001428 (size 8) =====

void sym.trace_raw_output_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"cpu:%lu requested_freq:%lu throttled_freq:%lu\n",*(iVar2 + 8),*(iVar2 + 0x10),
                           *(iVar2 + 0x18));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_dcvsh_throttle.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001430 (size 8) =====

void sym.trace_raw_output_dcvsh_throttle.b61897fa48d7967df0d3263ac4417bf4.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    char *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x20e8);
    iVar2 = trace_raw_output_prep(param_1,param_3);
    if (iVar2 == 1) {
        pcVar1 = 0x8000c2a;
        if (*(iVar3 + 0x10) != '\0') {
            pcVar1 = "begin";
        }
        trace_event_printf(param_1,"cpu:%lu throttle_%s\n",*(iVar3 + 8),pcVar1);
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001438 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_cpufreq_hw_target_index.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001440 (size 8) =====

ulong sym.qcom_cpufreq_hw_target_index.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 400) + param_2 * 0xc + 8);
    sym.writel_relaxed(param_2,**(param_1 + 0x2b8) + *((*(param_1 + 0x2b8))[2] + 0x14));
    if (((obj.icc_scaling_enabled == 0x1) && (iVar2 = get_cpu_device(*(param_1 + 0x1c)), iVar2 != 0)) &&
       (uVar3 = dev_pm_opp_find_freq_exact(iVar2,uVar1 * 1000,1), uVar3 < 0xfffffffffffff001)) {
        dev_pm_opp_set_opp(iVar2,uVar3);
        dev_pm_opp_put(uVar3);
    }
    return 0;
}


// ===== sym.cpufreq_register_em_with_opp.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001448 (size 8) =====

void sym.cpufreq_register_em_with_opp.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = get_cpu_device(*(param_1 + 0x1c));
    dev_pm_opp_of_register_em(uVar1,param_1 + 8);
    return;
}


// ===== sym.qcom_cpufreq_hw_cpu_init.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001450 (size 8) =====

int sym.qcom_cpufreq_hw_cpu_init.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(uint *param_1)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar15;
    uint32_t uVar16;
    int64_t *piVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    int64_t iStack_c0;
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
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = cpufreq_get_driver_data();
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
    iVar10 = get_cpu_device(param_1[7]);
    uVar2 = param_1[7];
    if (iVar10 == 0) {
        _printk(0x8000a6b,"qcom_cpufreq_hw_cpu_init",uVar2);
        iVar5 = -0x13;
        goto code_r0x08002038;
    }
    iVar11 = get_cpu_device(uVar2);
    if (iVar11 == 0) {
        iVar11 = of_get_cpu_node(uVar2,0);
    }
    else {
        iVar11 = *(iVar11 + 0x2f0);
    }
    if (iVar11 == 0) {
        iVar5 = -0x16;
        goto code_r0x08002038;
    }
    iVar5 = of_parse_phandle_with_args(iVar11,"qcom,freq-domain","#freq-domain-cells",0,&uStack_b8);
    if (iVar5 != 0) goto code_r0x08002038;
    piVar17 = *(param_1 + 0xae);
    iVar11 = iVar9 + 0x10;
    uVar3 = uStack_b0._4_4_;
    if (piVar17 == NULL) {
        piVar12 = platform_get_resource(iVar9,0x200,uStack_b0._4_4_);
        if (piVar12 == NULL) {
            _dev_err(iVar11,"failed to get mem resource %d\n",uVar3);
            iVar5 = -0x13;
            goto code_r0x08002038;
        }
        iVar9 = __devm_request_region(iVar11,iomem_resource,*piVar12,(piVar12[1] - *piVar12) + 1,piVar12[2]);
        if (iVar9 == 0) {
            _dev_err(iVar11,"failed to request resource %pR\n",piVar12);
            iVar5 = -0x10;
            goto code_r0x08002038;
        }
        iVar9 = devm_ioremap(iVar11,*piVar12,(piVar12[1] - *piVar12) + 1);
        if (iVar9 == 0) {
            _dev_err(iVar11,"failed to map resource %pR\n",piVar12);
            iVar5 = -0xc;
            goto code_r0x08002038;
        }
        piVar17 = devm_kmalloc(iVar11,0x120,0xdc0);
        if (piVar17 == NULL) {
            iVar5 = -0xc;
            goto code_r0x08002038;
        }
        iVar13 = of_device_get_match_data(iVar11);
        *piVar17 = iVar9;
        piVar17[1] = piVar12;
        piVar17[2] = iVar13;
    }
    uVar14 = sym.readl_relaxed(*piVar17 + *piVar17[2]);
    if ((uVar14 & 1) == 0) {
        _dev_err(iVar11,"Domain-%d cpufreq hardware not enabled\n",uVar3);
        iVar5 = -0x13;
    }
    else {
        sym.qcom_get_related_cpus(uVar3,param_1);
        iVar5 = __sw_hweight64(*param_1);
        if (iVar5 == 0) {
            _dev_err(iVar11,"Domain-%d failed to get related CPUs\n",uVar3);
            iVar5 = -2;
        }
        else {
            *(param_1 + 0xae) = piVar17;
            iStack_c0 = 0;
            *(param_1 + 0x9e) = 1;
            iVar13 = piVar17[2];
            iVar9 = kmem_cache_alloc_trace(_event_triggers_call,0xdc0,0x1ec);
            if (iVar9 == 0) {
                iVar5 = -0xc;
code_r0x08002538:
                _dev_err(iVar11,"Domain-%d failed to read LUT\n",uVar3);
            }
            else {
                iVar5 = dev_pm_opp_of_add_table(iVar10);
                if (iVar5 == -0x13) {
                    obj.icc_scaling_enabled = 0x0;
                    *(param_1 + 0x9c) = 1;
                }
                else {
                    if (iVar5 != 0) {
                        _dev_err(iVar10,"Invalid opp table in device tree\n");
                        goto code_r0x08002538;
                    }
                    iStack_c0 = 0;
                    obj.icc_scaling_enabled = 0x1;
                    while (uVar14 = dev_pm_opp_find_freq_ceil(iVar10,&iStack_c0), uVar14 < 0xfffffffffffff001) {
                        dev_pm_opp_put();
                        dev_pm_opp_disable(iVar10,iStack_c0);
                        iStack_c0 = iStack_c0 + 1;
                    }
                }
                uVar14 = 0;
                puVar15 = iVar9 + 8;
                uVar16 = 0;
                uVar7 = 0;
                do {
                    uVar6 = sym.readl_relaxed(*piVar17 + *(iVar13 + 8) + uVar14 * *(iVar13 + 0x28));
                    uVar4 = uVar6 >> 0x10 & 7;
                    uVar1 = uVar4;
                    if (uVar14 != 0) {
                        uVar1 = uVar7;
                    }
                    uVar7 = sym.readl_relaxed(*piVar17 + *(iVar13 + 0xc) + uVar14 * *(iVar13 + 0x28));
                    uVar18 = _segment.ehdr;
                    if (uVar6 >> 0x1e != 0) {
                        uVar18 = _segment.ehdr * (uVar6 & 0xff);
                    }
                    iVar5 = (uVar7 & 0xfff) * 1000;
                    uVar18 = uVar18 / 1000;
                    uVar7 = uVar18;
                    if ((uVar4 == 1) && (*(iVar13 + 0x2b) != '\0')) {
code_r0x08002150:
                        *puVar15 = 0xffffffff;
                    }
                    else if (uVar16 != uVar7) {
                        iVar11 = (uVar18 & 0xffffffff) * 1000;
                        if ((obj.icc_scaling_enabled & 1) == 0) {
                            iVar8 = dev_pm_opp_add(iVar10,iVar11,iVar5);
joined_r0x080021cc:
                            if (iVar8 == 0) {
                                *puVar15 = uVar7;
                                if (uVar4 < uVar1) {
                                    puVar15[-2] = 1;
                                }
                                goto code_r0x080021e4;
                            }
                        }
                        else {
                            iVar8 = dev_pm_opp_adjust_voltage(iVar10,iVar11,iVar5,iVar5,iVar5);
                            if (iVar8 == 0) {
                                iVar8 = dev_pm_opp_enable(iVar10,iVar11);
                                goto joined_r0x080021cc;
                            }
                            _dev_err(iVar10,"Voltage update failed freq=%ld\n",uVar18 & 0xffffffff);
                        }
                        _dev_warn(iVar10,"failed to update OPP for freq=%d\n",uVar18 & 0xffffffff);
                        goto code_r0x08002150;
                    }
code_r0x080021e4:
                    if ((uVar14 != 0) && (uVar16 == uVar7)) {
                        uVar18 = uVar14 - 1;
                        puVar15 = iVar9 + uVar18 * 0xc + 8;
                        if (*puVar15 != 0xffffffff) break;
                        iVar11 = uVar16 * 1000;
                        if ((obj.icc_scaling_enabled & 1) == 0) {
                            iVar5 = dev_pm_opp_add(iVar10,iVar11,iVar5);
code_r0x080022d8:
                            if (iVar5 == 0) {
                                *puVar15 = uVar16;
                                *(iVar9 + uVar18 * 0xc) = 1;
                                break;
                            }
                        }
                        else {
                            iVar5 = dev_pm_opp_adjust_voltage(iVar10,iVar11,iVar5,iVar5,iVar5);
                            if (iVar5 == 0) {
                                iVar5 = dev_pm_opp_enable(iVar10,iVar11);
                                goto code_r0x080022d8;
                            }
                            _dev_err(iVar10,"Voltage update failed freq=%ld\n",uVar16);
                        }
                        _dev_warn(iVar10,"failed to update OPP for freq=%d\n",uVar16);
                        break;
                    }
                    uVar14 = uVar14 + 1;
                    puVar15 = puVar15 + 3;
                    uVar16 = uVar7;
                    uVar7 = uVar1;
                } while (uVar14 != 0x28);
                iVar11 = 0;
                *(param_1 + 100) = iVar9;
                *(iVar9 + (uVar14 & 0xffffffff) * 0xc + 8) = 0xfffffffe;
                do {
                    uVar16 = *(iVar9 + iVar11 + 8);
                    if ((uVar16 == 0xfffffffe) || (*(iVar9 + iVar11) == 1)) break;
                    iVar11 = iVar11 + 0xc;
                    piVar17[0x1e] = uVar16;
                } while (iVar11 != 0x1e0);
                dev_pm_opp_set_sharing_cpus(iVar10,param_1);
                iVar5 = dev_pm_opp_get_opp_count(iVar10);
                if (iVar5 < 1) {
                    _dev_err(iVar10,"Failed to add OPPs\n");
                    iVar5 = -0x13;
                }
                else {
                    uVar14 = policy_has_boost_freq(param_1);
                    if (((uVar14 & 1) != 0) && (iVar5 = cpufreq_enable_boost_support(), iVar5 != 0)) {
                        _dev_warn(iVar10,"failed to enable boost: %d\n",iVar5);
                    }
                    iVar11 = *(param_1 + 0xae);
                    iVar9 = cpufreq_get_driver_data();
                    iVar5 = platform_get_irq(iVar9,uVar3);
                    *(iVar11 + 0x48) = iVar5;
                    if (0 < iVar5) {
                        *(iVar11 + 0x5b) = 0;
                        *(iVar11 + 0xe8) = param_1;
                        __mutex_init(iVar11 + 0x18,"&data->throttle_lock",obj.qcom_cpufreq_hw_lmh_init.__key);
                        *(iVar11 + 0x60) = 0xfffffffe0;
                        *(iVar11 + 0x68) = iVar11 + 0x68;
                        *(iVar11 + 0x70) = iVar11 + 0x68;
                        *(iVar11 + 0x78) = sym.qcom_lmh_dcvs_poll.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
                        init_timer_key(iVar11 + 0x90,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                        iVar13 = iVar11 + 0x4c;
                        snprintf(iVar13,0xf,"dcvsh-irq-%u",param_1[7]);
                        iVar5 = request_threaded_irq
                                          (*(iVar11 + 0x48),0,
                                           sym.qcom_lmh_dcvs_handle_irq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt,0x2000
                                           ,iVar13,iVar11);
                        if (iVar5 == 0) {
                            *(iVar11 + 0x110) = sym.dcvsh_freq_limit_show.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
                            *(iVar11 + 0x108) = 0x124;
                            *(iVar11 + 0xf8) = 0xffffffff;
                            *(iVar11 + 0x100) = "dcvsh_freq_limit";
                            device_create_file(iVar10,iVar11 + 0x100);
                            iVar5 = 0;
                        }
                        else {
                            _dev_err(iVar9 + 0x10,"Error registering %s: %d\n",iVar13,iVar5);
                            iVar5 = 0;
                        }
                        goto code_r0x08002038;
                    }
                    if (iVar5 != -0x205) {
                        iVar5 = 0;
                        goto code_r0x08002038;
                    }
                    iVar5 = -0x205;
                }
            }
        }
    }
    *(param_1 + 0xae) = 0;
code_r0x08002038:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_68) {
        auVar19 = __stack_chk_fail();
        iVar9 = auVar19._0_8_;
        *extraout_x18 = sym.qcom_cpufreq_hw_target_index;
        uVar3 = *(*(iVar9 + 400) + (auVar19._8_8_ & 0xffffffff) * 0xc + 8);
        sym.writel_relaxed(auVar19._8_8_ & 0xffffffff,**(iVar9 + 0x2b8) + *((*(iVar9 + 0x2b8))[2] + 0x14));
        if (((obj.icc_scaling_enabled == 0x1) && (iVar9 = get_cpu_device(*(iVar9 + 0x1c)), iVar9 != 0)) &&
           (uVar14 = dev_pm_opp_find_freq_exact(iVar9,uVar3 * 1000,1), uVar14 < 0xfffffffffffff001)) {
            dev_pm_opp_set_opp(iVar9,uVar14);
            dev_pm_opp_put(uVar14);
        }
        return 0;
    }
    return iVar5;
}


// ===== sym.qcom_cpufreq_hw_cpu_exit.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001458 (size 8) =====

ulong sym.qcom_cpufreq_hw_cpu_exit.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = get_cpu_device(*(param_1 + 0x1c));
    sym.qcom_cpufreq_hw_lmh_exit(*(param_1 + 0x2b8));
    dev_pm_opp_remove_all_dynamic(uVar1);
    dev_pm_opp_of_cpumask_remove_table(param_1 + 8);
    kfree(*(param_1 + 400));
    return 0;
}


// ===== sym.dcvsh_freq_limit_show.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001460 (size 8) =====

int64_t sym.dcvsh_freq_limit_show.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",*(param_2 + -8));
    return iVar1;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08001468 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_lmh_dcvs_handle_irq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001470 (size 8) =====

bool sym.qcom_lmh_dcvs_handle_irq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(ulong param_1,int64_t *param_2)

{
    bool bVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = param_2[2];
    uVar2 = sym.readl_relaxed(*param_2 + *(iVar3 + 0x1c));
    bVar1 = ((uVar2 & 0xffffffff) >> (*(iVar3 + 0x29) & 0x3f) & 1) != 0;
    if (bVar1) {
        disable_irq_nosync(param_2[9]);
        queue_delayed_work_on(0x20,_trace_event_buffer_reserve,param_2 + 0xc,0);
    }
    return bVar1;
}


// ===== sym.__bpf_trace_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001478 (size 8) =====

void sym.__bpf_trace_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3();
    return;
}


// ===== sym.trace_event_raw_event_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001480 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800174c)
//WARNING: Removing unreachable block (ram,0x08001948)

void sym.trace_event_raw_event_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t *param_3,ulong param_4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    uint8_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar11;
    ulong uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auVar14 [16];
    uchar auStack_1b0 [12];
    uint uStack_1a4;
    int64_t iStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    code *pcStack_188;
    int64_t *piStack_180;
    ulong uStack_170;
    int64_t iStack_168;
    uint64_t uStack_160;
    ulong uStack_158;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    ulong uStack_100;
    uint32_t *puStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iVar5;
    int64_t iVar6;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar11 = *(param_1 + 0x48);
    uVar10 = param_4;
    if ((uVar11 >> 8 & 1) == 0) {
        puVar8 = param_3;
        if ((uVar11 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar11 >> 6 & 1) == 0) &&
           (((uVar11 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x08001624;
    }
    else {
code_r0x08001624:
        puVar8 = 0x20;
        iVar4 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0x10) = param_3;
            *(iVar4 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar5 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_dcvsh_freq;
    pcStack_b8 = sym.perf_trace_dcvsh_freq;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(iVar5 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_d4;
        iVar4 = perf_trace_buf_alloc(0x24,&iStack_d0);
        uVar3 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            puVar9 = uStack_d4;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8001680;
            *(iStack_d0 + 0x108) = 5;
            *(iVar4 + 8) = auVar13._8_8_;
            *(iVar4 + 0x10) = puVar8;
            *(iVar4 + 0x18) = uVar10;
            perf_trace_run_bpf_submit(iVar4,0x24,puVar9,iVar5,1,iStack_d0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar6 = auVar14._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_00 = 0x80017a4;
    uStack_108 = 0x80017a4;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    uVar12 = *(iVar6 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar11 = uVar12;
    ppuStack_110 = &puStack_c0;
    puStack_f8 = puVar8;
    uStack_f0 = uVar10;
    if ((uVar11 >> 8 & 1) == 0) {
        uVar7 = puVar9;
        if ((uVar11 >> 7 & 1) != 0) {
            uVar7 = 0;
            uStack_100 = auVar13._8_8_;
            iStack_e8 = iVar5;
            event_triggers_call(iVar6,0,0,0);
            auVar13._8_8_ = uStack_100;
            auVar13._0_8_ = iStack_e8;
        }
        uStack_100 = auVar13._8_8_;
        iStack_e8 = auVar13._0_8_;
        if (((uVar11 >> 6 & 1) != 0) ||
           (((uVar11 >> 9 & 1) != 0 &&
            (uVar3 = trace_event_ignore_this_pid(iVar6), auVar13._8_8_ = uStack_100, auVar13._0_8_ = iStack_e8,
            (uVar3 & 1) != 0)))) goto code_r0x0800184c;
    }
    uStack_100 = auVar13._8_8_;
    iStack_e8 = auVar13._0_8_;
    uVar7 = 0;
    iVar4 = trace_event_buffer_reserve(&uStack_148,iVar6);
    auVar13._8_8_ = uStack_100;
    auVar13._0_8_ = iStack_e8;
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar14._8_8_;
        *(iVar4 + 0x10) = puVar9 & 1;
        trace_event_buffer_commit(&uStack_148);
        auVar13._8_8_ = uStack_100;
        auVar13._0_8_ = iStack_e8;
    }
code_r0x0800184c:
    uStack_100 = auVar13._8_8_;
    iStack_e8 = auVar13._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar5 = auVar13._0_8_;
    *extraout_x18_01 = sym.perf_trace_dcvsh_throttle;
    pcStack_188 = sym.perf_trace_dcvsh_throttle;
    iVar4 = sp_el0;
    iStack_198 = *(iVar4 + 0x5e0);
    iStack_1a0 = 0;
    uStack_1a4 = 0;
    iVar4 = tpidr_el1;
    piVar2 = iVar4 + *(iVar5 + 0x78);
    ppuStack_190 = &ppuStack_110;
    piStack_180 = piVar1;
    uStack_170 = uVar12;
    uStack_160 = puVar9 & 0xffffffff;
    if (((*(iVar5 + 0x80) != 0) || (*piVar2 != 0)) &&
       (iStack_168 = iVar6, uStack_158 = auVar14._8_8_, iVar4 = perf_trace_buf_alloc(0x1c,&iStack_1a0,&uStack_1a4),
       uVar3 = _trace_event_raw_init, auVar14._8_8_ = uStack_158, auVar14._0_8_ = iStack_168, iVar4 != 0)) {
        *(iStack_1a0 + 0xe8) = &ppuStack_190;
        *(iStack_1a0 + 0xf8) = auStack_1b0;
        *(iStack_1a0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8001880;
        *(iStack_1a0 + 0x108) = 5;
        *(iVar4 + 8) = auVar13._8_8_;
        *(iVar4 + 0x10) = uVar7 & 1;
        perf_trace_run_bpf_submit(iVar4,0x1c,uStack_1a4,iVar5,1,iStack_1a0,piVar2,0);
        auVar14._8_8_ = uStack_158;
        auVar14._0_8_ = iStack_168;
    }
    uStack_158 = auVar14._8_8_;
    iStack_168 = auVar14._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_198) {
        __stack_chk_fail();
        uVar10 = tpidr_el2;
        *extraout_x18_02 = 0x80019a4;
        bpf_trace_run3(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001488 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001948)

void sym.perf_trace_dcvsh_freq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t *param_3,ulong param_4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    uint64_t uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar10;
    ulong uVar11;
    uint64_t unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    uchar auStack_130 [12];
    uint uStack_124;
    int64_t iStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    int64_t *piStack_100;
    ulong uStack_f0;
    int64_t iStack_e8;
    uint64_t uStack_e0;
    ulong uStack_d8;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint32_t *puStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t iVar4;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (puVar8 = param_3, *piVar1 != 0)) {
        puVar8 = &uStack_54;
        iVar3 = perf_trace_buf_alloc(0x24,&iStack_50);
        uVar5 = _trace_event_raw_init;
        if (iVar3 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar8 = uStack_54;
            uVar9 = -1L << (uVar5 & 0x3f);
            uVar5 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar5 = uVar9 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = auStack_60;
            *(iStack_50 + 0x100) = uVar5;
            *(iStack_50 + 0x108) = 5;
            *(iVar3 + 8) = param_2;
            *(iVar3 + 0x10) = param_3;
            *(iVar3 + 0x18) = param_4;
            perf_trace_run_bpf_submit(iVar3,0x24,puVar8,param_1,1,iStack_50,piVar1,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar4 = auVar12._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x80017a4;
    uStack_88 = 0x80017a4;
    iVar3 = sp_el0;
    iStack_98 = *(iVar3 + 0x5e0);
    uVar11 = *(iVar4 + 0x48);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar10 = uVar11;
    puStack_90 = &stack0xffffffffffffffc0;
    uStack_80 = param_2;
    puStack_78 = param_3;
    uStack_70 = param_4;
    iStack_68 = param_1;
    if ((uVar10 >> 8 & 1) == 0) {
        uVar7 = puVar8;
        if ((uVar10 >> 7 & 1) != 0) {
            uVar7 = 0;
            event_triggers_call(iVar4,0,0,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(iVar4), (uVar5 & 1) != 0))))
        goto code_r0x0800184c;
    }
    uVar7 = 0;
    iVar3 = trace_event_buffer_reserve(&uStack_c8,iVar4);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar12._8_8_;
        *(iVar3 + 0x10) = puVar8 & 1;
        trace_event_buffer_commit(&uStack_c8);
    }
code_r0x0800184c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_98) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar6 = auVar13._0_8_;
    *extraout_x18_00 = sym.perf_trace_dcvsh_throttle;
    pcStack_108 = sym.perf_trace_dcvsh_throttle;
    iVar3 = sp_el0;
    iStack_118 = *(iVar3 + 0x5e0);
    iStack_120 = 0;
    uStack_124 = 0;
    iVar3 = tpidr_el1;
    piVar2 = iVar3 + *(iVar6 + 0x78);
    ppuStack_110 = &puStack_90;
    piStack_100 = piVar1;
    uStack_f0 = uVar11;
    uStack_e0 = puVar8 & 0xffffffff;
    if (((*(iVar6 + 0x80) != 0) || (*piVar2 != 0)) &&
       (iStack_e8 = iVar4, uStack_d8 = auVar12._8_8_, iVar3 = perf_trace_buf_alloc(0x1c,&iStack_120,&uStack_124),
       uVar5 = _trace_event_raw_init, auVar12._8_8_ = uStack_d8, auVar12._0_8_ = iStack_e8, iVar3 != 0)) {
        *(iStack_120 + 0xe8) = &ppuStack_110;
        *(iStack_120 + 0xf8) = auStack_130;
        *(iStack_120 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x8001880;
        *(iStack_120 + 0x108) = 5;
        *(iVar3 + 8) = auVar13._8_8_;
        *(iVar3 + 0x10) = uVar7 & 1;
        perf_trace_run_bpf_submit(iVar3,0x1c,uStack_124,iVar6,1,iStack_120,piVar2,0);
        auVar12._8_8_ = uStack_d8;
        auVar12._0_8_ = iStack_e8;
    }
    uStack_d8 = auVar12._8_8_;
    iStack_e8 = auVar12._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_118) {
        __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_01 = 0x80019a4;
        bpf_trace_run3(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.qcom_cpufreq_hw_driver_probe.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001490 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001d70)
//WARNING: Removing unreachable block (ram,0x08001d80)
//WARNING: Removing unreachable block (ram,0x08001dfc)
//WARNING: Removing unreachable block (ram,0x08001d88)
//WARNING: Removing unreachable block (ram,0x08001e00)
//WARNING: Removing unreachable block (ram,0x08001d9c)

uint64_t sym.qcom_cpufreq_hw_driver_probe.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint *in_x6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    uVar2 = clk_get(iVar1,0x8000aa2);
    if (uVar2 < 0xfffffffffffff001) {
        _segment.ehdr = clk_get_rate(uVar2);
        clk_put(uVar2);
        uVar2 = clk_get(iVar1,"alternate");
        if (uVar2 < 0xfffffffffffff001) {
            _segment.ehdr = clk_get_rate(uVar2);
            _segment.ehdr = _segment.ehdr >> 1;
            clk_put(uVar2);
            _segment.ehdr = param_1;
            iVar3 = get_cpu_device(0);
            if (iVar3 == 0) {
                uVar2 = 0xfffffdfb;
            }
            else {
                uVar4 = dev_pm_opp_of_find_icc_paths(iVar3,0);
                uVar2 = uVar4 & 0xffffffff;
                if (uVar4 == 0) {
                    *in_x6 = 0;
                    cpumask_next(trace_event_raw_init,0xffffffff,__cpu_possible_mask);
                    uVar4 = cpufreq_register_driver(obj.cpufreq_qcom_hw_driver);
                    uVar2 = uVar4 & 0xffffffff;
                    if (uVar4 != 0) {
                        _dev_err(iVar1,"CPUFreq HW driver failed to register\n");
                    }
                }
            }
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.qcom_cpufreq_hw_driver_remove.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x08001498 (size 8) =====

void sym.qcom_cpufreq_hw_driver_remove.b61897fa48d7967df0d3263ac4417bf4.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cpufreq_unregister_driver(obj.cpufreq_qcom_hw_driver);
    return;
}


// ===== sym.cpufreq_generic_frequency_table_verify.cfi_jt @ 0x080014a0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.cpufreq_generic_frequency_table_verify.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__bpf_trace_dcvsh_throttle.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x080014a8 (size 8) =====

void sym.__bpf_trace_dcvsh_throttle.b61897fa48d7967df0d3263ac4417bf4.cfi_jt
               (ulong param_1,ulong param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(param_1,param_2,param_3 & 1);
    return;
}


// ===== sym.trace_event_raw_event_dcvsh_throttle.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x080014b0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001948)

void sym.trace_event_raw_event_dcvsh_throttle.b61897fa48d7967df0d3263ac4417bf4.cfi_jt
               (int64_t param_1,ulong param_2,uint8_t param_3)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint8_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auStack_d0 [12];
    uint uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
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
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar7 = *(param_1 + 0x48);
    if ((uVar7 >> 8 & 1) == 0) {
        uVar6 = param_3;
        if ((uVar7 >> 7 & 1) != 0) {
            uVar6 = 0;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar7 >> 6 & 1) != 0) ||
           (((uVar7 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) != 0))))
        goto code_r0x0800184c;
    }
    uVar6 = 0;
    iVar4 = trace_event_buffer_reserve(&uStack_68,param_1);
    if (iVar4 != 0) {
        *(iVar4 + 8) = param_2;
        *(iVar4 + 0x10) = param_3 & 1;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x0800184c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar5 = auVar8._0_8_;
    *extraout_x18 = sym.perf_trace_dcvsh_throttle;
    pcStack_a8 = sym.perf_trace_dcvsh_throttle;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if (((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x1c,&iStack_c0,&uStack_c4), uVar3 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_c0 + 0xe8) = &puStack_b0;
        *(iStack_c0 + 0xf8) = auStack_d0;
        *(iStack_c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8001880;
        *(iStack_c0 + 0x108) = 5;
        *(iVar4 + 8) = auVar8._8_8_;
        *(iVar4 + 0x10) = uVar6 & 1;
        perf_trace_run_bpf_submit(iVar4,0x1c,uStack_c4,iVar5,1,iStack_c0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_b8) {
        __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x80019a4;
        bpf_trace_run3(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_dcvsh_throttle.b61897fa48d7967df0d3263ac4417bf4.cfi_jt @ 0x080014b8 (size 8) =====

void sym.perf_trace_dcvsh_throttle.b61897fa48d7967df0d3263ac4417bf4.cfi_jt
               (int64_t param_1,ulong param_2,uint8_t param_3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_60 [12];
    uint uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    if (((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x1c,&iStack_50,&uStack_54), uVar2 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_50 + 0xf8) = auStack_60;
        *(iStack_50 + 0x100) = uVar2;
        *(iStack_50 + 0x108) = 5;
        *(iVar4 + 8) = param_2;
        *(iVar4 + 0x10) = param_3 & 1;
        perf_trace_run_bpf_submit(iVar4,0x1c,uStack_54,param_1,1,iStack_50,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x80019a4;
    bpf_trace_run3(in_tmp_ldXn);
    return;
}


// ===== sym.__traceiter_dcvsh_freq @ 0x080014c0 (size 112) =====

ulong sym.__traceiter_dcvsh_freq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8003230;
    piVar1 = *0x8003230;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_dcvsh_throttle @ 0x08001538 (size 104) =====

ulong sym.__traceiter_dcvsh_throttle(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8003278 != NULL) {
        piVar1 = *0x8003278;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_dcvsh_freq @ 0x080015a8 (size 216) =====

//WARNING: Removing unreachable block (ram,0x0800174c)
//WARNING: Removing unreachable block (ram,0x08001948)

void sym.trace_event_raw_event_dcvsh_freq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    uint8_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar11;
    ulong uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auVar14 [16];
    uchar auStack_1b0 [12];
    uint uStack_1a4;
    int64_t iStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    code *pcStack_188;
    int64_t *piStack_180;
    ulong uStack_170;
    int64_t iStack_168;
    uint64_t uStack_160;
    ulong uStack_158;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    ulong uStack_100;
    uint32_t *puStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iVar5;
    int64_t iVar6;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar11 = *(arg1 + 0x48);
    iVar10 = arg4;
    if ((uVar11 >> 8 & 1) == 0) {
        puVar8 = arg3;
        if ((uVar11 >> 7 & 1) != 0) {
            puVar8 = NULL;
            iVar10 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar11 >> 6 & 1) == 0) &&
           (((uVar11 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x08001624;
    }
    else {
code_r0x08001624:
        puVar8 = 0x20;
        iVar4 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0x10) = arg3;
            *(iVar4 + 0x18) = arg4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar5 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_dcvsh_freq;
    pcStack_b8 = sym.perf_trace_dcvsh_freq;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(iVar5 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_d4;
        iVar4 = perf_trace_buf_alloc(0x24,&iStack_d0);
        uVar3 = _trace_event_raw_init;
        if (iVar4 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            puVar9 = uStack_d4;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8001680;
            *(iStack_d0 + 0x108) = 5;
            *(iVar4 + 8) = auVar13._8_8_;
            *(iVar4 + 0x10) = puVar8;
            *(iVar4 + 0x18) = iVar10;
            perf_trace_run_bpf_submit(iVar4,0x24,puVar9,iVar5,1,iStack_d0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar6 = auVar14._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_00 = 0x80017a4;
    uStack_108 = 0x80017a4;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    uVar12 = *(iVar6 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar11 = uVar12;
    ppuStack_110 = &puStack_c0;
    puStack_f8 = puVar8;
    iStack_f0 = iVar10;
    if ((uVar11 >> 8 & 1) == 0) {
        uVar7 = puVar9;
        if ((uVar11 >> 7 & 1) != 0) {
            uVar7 = 0;
            uStack_100 = auVar13._8_8_;
            iStack_e8 = iVar5;
            event_triggers_call(iVar6,0,0,0);
            auVar13._8_8_ = uStack_100;
            auVar13._0_8_ = iStack_e8;
        }
        uStack_100 = auVar13._8_8_;
        iStack_e8 = auVar13._0_8_;
        if (((uVar11 >> 6 & 1) != 0) ||
           (((uVar11 >> 9 & 1) != 0 &&
            (uVar3 = trace_event_ignore_this_pid(iVar6), auVar13._8_8_ = uStack_100, auVar13._0_8_ = iStack_e8,
            (uVar3 & 1) != 0)))) goto code_r0x0800184c;
    }
    uStack_100 = auVar13._8_8_;
    iStack_e8 = auVar13._0_8_;
    uVar7 = 0;
    iVar10 = trace_event_buffer_reserve(&uStack_148,iVar6);
    auVar13._8_8_ = uStack_100;
    auVar13._0_8_ = iStack_e8;
    if (iVar10 != 0) {
        *(iVar10 + 8) = auVar14._8_8_;
        *(iVar10 + 0x10) = puVar9 & 1;
        trace_event_buffer_commit(&uStack_148);
        auVar13._8_8_ = uStack_100;
        auVar13._0_8_ = iStack_e8;
    }
code_r0x0800184c:
    uStack_100 = auVar13._8_8_;
    iStack_e8 = auVar13._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_118) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar4 = auVar13._0_8_;
    *extraout_x18_01 = sym.perf_trace_dcvsh_throttle;
    pcStack_188 = sym.perf_trace_dcvsh_throttle;
    iVar10 = sp_el0;
    iStack_198 = *(iVar10 + 0x5e0);
    iStack_1a0 = 0;
    uStack_1a4 = 0;
    iVar10 = tpidr_el1;
    piVar2 = iVar10 + *(iVar4 + 0x78);
    ppuStack_190 = &ppuStack_110;
    piStack_180 = piVar1;
    uStack_170 = uVar12;
    uStack_160 = puVar9 & 0xffffffff;
    if (((*(iVar4 + 0x80) != 0) || (*piVar2 != 0)) &&
       (iStack_168 = iVar6, uStack_158 = auVar14._8_8_, iVar10 = perf_trace_buf_alloc(0x1c,&iStack_1a0,&uStack_1a4)
       , uVar3 = _trace_event_raw_init, auVar14._8_8_ = uStack_158, auVar14._0_8_ = iStack_168, iVar10 != 0)) {
        *(iStack_1a0 + 0xe8) = &ppuStack_190;
        *(iStack_1a0 + 0xf8) = auStack_1b0;
        *(iStack_1a0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8001880;
        *(iStack_1a0 + 0x108) = 5;
        *(iVar10 + 8) = auVar13._8_8_;
        *(iVar10 + 0x10) = uVar7 & 1;
        perf_trace_run_bpf_submit(iVar10,0x1c,uStack_1a4,iVar4,1,iStack_1a0,piVar2,0);
        auVar14._8_8_ = uStack_158;
        auVar14._0_8_ = iStack_168;
    }
    uStack_158 = auVar14._8_8_;
    iStack_168 = auVar14._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_198) {
        __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_02 = 0x80019a4;
        bpf_trace_run3(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_dcvsh_freq @ 0x08001680 (size 304) =====

//WARNING: Removing unreachable block (ram,0x08001948)

void sym.perf_trace_dcvsh_freq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    uint64_t uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uchar *puVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar10;
    ulong uVar11;
    uint64_t unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    uchar auStack_130 [12];
    uint uStack_124;
    int64_t iStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    int64_t *piStack_100;
    ulong uStack_f0;
    int64_t iStack_e8;
    uint64_t uStack_e0;
    ulong uStack_d8;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t iVar4;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (puVar8 = arg3, *piVar1 != 0)) {
        puVar8 = &stack0xffffffffffffffac;
        iVar3 = perf_trace_buf_alloc(0x24,&stack0xffffffffffffffb0);
        uVar5 = _trace_event_raw_init;
        if (iVar3 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar8 = uStack_54;
            uVar9 = -1L << (uVar5 & 0x3f);
            uVar5 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar5 = uVar9 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(iStack_50 + 0x100) = uVar5;
            *(iStack_50 + 0x108) = 5;
            *(iVar3 + 8) = arg2;
            *(iVar3 + 0x10) = arg3;
            *(iVar3 + 0x18) = arg4;
            perf_trace_run_bpf_submit(iVar3,0x24,puVar8,arg1,1,iStack_50,piVar1,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar4 = auVar12._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x80017a4;
    uStack_88 = 0x80017a4;
    iVar3 = sp_el0;
    iStack_98 = *(iVar3 + 0x5e0);
    uVar11 = *(iVar4 + 0x48);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar10 = uVar11;
    puStack_90 = &stack0xffffffffffffffc0;
    iStack_80 = arg2;
    iStack_78 = arg3;
    iStack_70 = arg4;
    iStack_68 = arg1;
    if ((uVar10 >> 8 & 1) == 0) {
        uVar7 = puVar8;
        if ((uVar10 >> 7 & 1) != 0) {
            uVar7 = 0;
            event_triggers_call(iVar4,0,0,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(iVar4), (uVar5 & 1) != 0))))
        goto code_r0x0800184c;
    }
    uVar7 = 0;
    iVar3 = trace_event_buffer_reserve(&stack0xffffffffffffff38,iVar4);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar12._8_8_;
        *(iVar3 + 0x10) = puVar8 & 1;
        trace_event_buffer_commit(&stack0xffffffffffffff38);
    }
code_r0x0800184c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_98) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar6 = auVar13._0_8_;
    *extraout_x18_00 = sym.perf_trace_dcvsh_throttle;
    pcStack_108 = sym.perf_trace_dcvsh_throttle;
    iVar3 = sp_el0;
    iStack_118 = *(iVar3 + 0x5e0);
    iStack_120 = 0;
    uStack_124 = 0;
    iVar3 = tpidr_el1;
    piVar2 = iVar3 + *(iVar6 + 0x78);
    puStack_110 = &stack0xffffffffffffff70;
    piStack_100 = piVar1;
    uStack_f0 = uVar11;
    uStack_e0 = puVar8 & 0xffffffff;
    if (((*(iVar6 + 0x80) != 0) || (*piVar2 != 0)) &&
       (iStack_e8 = iVar4, uStack_d8 = auVar12._8_8_,
       iVar3 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffee0,&stack0xfffffffffffffedc),
       uVar5 = _trace_event_raw_init, auVar12._8_8_ = uStack_d8, auVar12._0_8_ = iStack_e8, iVar3 != 0)) {
        *(iStack_120 + 0xe8) = &stack0xfffffffffffffef0;
        *(iStack_120 + 0xf8) = &stack0xfffffffffffffed0;
        *(iStack_120 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x8001880;
        *(iStack_120 + 0x108) = 5;
        *(iVar3 + 8) = auVar13._8_8_;
        *(iVar3 + 0x10) = uVar7 & 1;
        perf_trace_run_bpf_submit(iVar3,0x1c,uStack_124,iVar6,1,iStack_120,piVar2,0);
        auVar12._8_8_ = uStack_d8;
        auVar12._0_8_ = iStack_e8;
    }
    uStack_d8 = auVar12._8_8_;
    iStack_e8 = auVar12._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_118) {
        __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_01 = 0x80019a4;
        bpf_trace_run3(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_dcvsh_throttle @ 0x080017b0 (size 208) =====

//WARNING: Removing unreachable block (ram,0x08001948)

void sym.trace_event_raw_event_dcvsh_throttle(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint8_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auStack_d0 [12];
    uint uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
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
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar7 = *(arg1 + 0x48);
    if ((uVar7 >> 8 & 1) == 0) {
        uVar6 = arg3;
        if ((uVar7 >> 7 & 1) != 0) {
            uVar6 = 0;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar7 >> 6 & 1) != 0) ||
           (((uVar7 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) != 0))))
        goto code_r0x0800184c;
    }
    uVar6 = 0;
    iVar4 = trace_event_buffer_reserve(&uStack_68,arg1);
    if (iVar4 != 0) {
        *(iVar4 + 8) = arg2;
        *(iVar4 + 0x10) = arg3 & 1;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x0800184c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar5 = auVar8._0_8_;
    *extraout_x18 = sym.perf_trace_dcvsh_throttle;
    pcStack_a8 = sym.perf_trace_dcvsh_throttle;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if (((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x1c,&iStack_c0,&uStack_c4), uVar3 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_c0 + 0xe8) = &puStack_b0;
        *(iStack_c0 + 0xf8) = auStack_d0;
        *(iStack_c0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8001880;
        *(iStack_c0 + 0x108) = 5;
        *(iVar4 + 8) = auVar8._8_8_;
        *(iVar4 + 0x10) = uVar6 & 1;
        perf_trace_run_bpf_submit(iVar4,0x1c,uStack_c4,iVar5,1,iStack_c0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_b8) {
        __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x80019a4;
        bpf_trace_run3(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_dcvsh_throttle @ 0x08001880 (size 304) =====

void sym.perf_trace_dcvsh_throttle(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_60 [12];
    uint uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    if (((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffb0,&stack0xffffffffffffffac),
       uVar2 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
        *(iStack_50 + 0x100) = uVar2;
        *(iStack_50 + 0x108) = 5;
        *(iVar4 + 8) = arg2;
        *(iVar4 + 0x10) = arg3 & 1;
        perf_trace_run_bpf_submit(iVar4,0x1c,uStack_54,arg1,1,iStack_50,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x80019a4;
    bpf_trace_run3(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_dcvsh_freq @ 0x080019b0 (size 36) =====

void sym.__bpf_trace_dcvsh_freq(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3();
    return;
}


// ===== sym.__bpf_trace_dcvsh_throttle @ 0x080019d4 (size 40) =====

void sym.__bpf_trace_dcvsh_throttle(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(in_x0,in_x1,arg1 & 1);
    return;
}


// ===== sym.qcom_cpufreq_get_cpu_cycle_counter @ 0x080019fc (size 312) =====

int64_t sym.qcom_cpufreq_get_cpu_cycle_counter(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg1;
    iVar7 = cpufreq_cpu_get_raw();
    if (iVar7 == 0) {
        iVar7 = 0;
    }
    else {
        if (0x20 < uVar4) {
code_r0x08001b30:
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8001b34);
            (*pcVar5)();
        }
        iVar10 = uVar4;
        piVar11 = *(iVar7 + 0x2b8);
        iVar1 = iVar10 * 0x10 + 0x8000264;
        iVar7 = piVar11[2];
        uVar8 = _raw_spin_lock_irqsave(iVar1);
        if (*(iVar7 + 0x2a) == '\0') {
            uVar9 = 0;
        }
        else {
            if (0x1f < uVar4) goto code_r0x08001b30;
            uVar9 = *(_raw_spin_unlock_irqrestore + iVar10 * 0x30) * 4 + 4U & 0xfffc;
        }
        uVar6 = sym.readl_relaxed(*piVar11 + *(iVar7 + 0x18) + uVar9);
        if (0x200 < (iVar10 * 0x10 | 8U)) {
code_r0x08001b2c:
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x8001b30);
            (*pcVar5)();
        }
        uVar2 = *(reloc.__traceiter_dcvsh_throttle.cfi_jt + iVar10 * 0x10);
        uVar3 = -uVar2;
        if (uVar6 < uVar2) {
            if (uVar4 == 0x20) goto code_r0x08001b2c;
            uVar3 = ~uVar2;
        }
        else if (uVar4 == 0x20) goto code_r0x08001b2c;
        *(reloc.__traceiter_dcvsh_throttle.cfi_jt + iVar10 * 0x10) = uVar6;
        iVar7 = *(reloc.__traceiter_dcvsh_freq.cfi_jt + iVar10 * 0x10) + uVar6 + uVar3;
        *(reloc.__traceiter_dcvsh_freq.cfi_jt + iVar10 * 0x10) = iVar7;
        _raw_spin_unlock_irqrestore(iVar1,uVar8);
    }
    return iVar7;
}


// ===== sym.readl_relaxed @ 0x08001b34 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001b38);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001b6c);
    return uVar1;
}


// ===== sym.trace_raw_output_dcvsh_freq @ 0x08001ba4 (size 112) =====

void sym.trace_raw_output_dcvsh_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"cpu:%lu requested_freq:%lu throttled_freq:%lu\n",*(iVar2 + 8),*(iVar2 + 0x10),
                           *(iVar2 + 0x18));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_dcvsh_throttle @ 0x08001c14 (size 136) =====

void sym.trace_raw_output_dcvsh_throttle(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20e8);
    iVar2 = trace_raw_output_prep(arg1,arg2);
    if (iVar2 == 1) {
        pcVar1 = 0x8000c2a;
        if (*(iVar3 + 0x10) != '\0') {
            pcVar1 = "begin";
        }
        trace_event_printf(arg1,"cpu:%lu throttle_%s\n",*(iVar3 + 8),pcVar1);
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.qcom_cpufreq_hw_driver_probe @ 0x08001c9c (size 360) =====

//WARNING: Removing unreachable block (ram,0x08001d70)
//WARNING: Removing unreachable block (ram,0x08001d80)
//WARNING: Removing unreachable block (ram,0x08001dfc)
//WARNING: Removing unreachable block (ram,0x08001d88)
//WARNING: Removing unreachable block (ram,0x08001e00)
//WARNING: Removing unreachable block (ram,0x08001d9c)

uint64_t sym.qcom_cpufreq_hw_driver_probe(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint *in_x6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    uVar2 = clk_get(iVar1,0x8000aa2);
    if (uVar2 < 0xfffffffffffff001) {
        _segment.ehdr = clk_get_rate(uVar2);
        clk_put(uVar2);
        uVar2 = clk_get(iVar1,"alternate");
        if (uVar2 < 0xfffffffffffff001) {
            _segment.ehdr = clk_get_rate(uVar2);
            _segment.ehdr = _segment.ehdr >> 1;
            clk_put(uVar2);
            _segment.ehdr = arg1;
            iVar3 = get_cpu_device(0);
            if (iVar3 == 0) {
                uVar2 = 0xfffffdfb;
            }
            else {
                uVar4 = dev_pm_opp_of_find_icc_paths(iVar3,0);
                uVar2 = uVar4 & 0xffffffff;
                if (uVar4 == 0) {
                    *in_x6 = 0;
                    cpumask_next(trace_event_raw_init,0xffffffff,__cpu_possible_mask);
                    uVar4 = cpufreq_register_driver(obj.cpufreq_qcom_hw_driver);
                    uVar2 = uVar4 & 0xffffffff;
                    if (uVar4 != 0) {
                        _dev_err(iVar1,"CPUFreq HW driver failed to register\n");
                    }
                }
            }
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.qcom_cpufreq_hw_driver_remove @ 0x08001e04 (size 44) =====

void sym.qcom_cpufreq_hw_driver_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cpufreq_unregister_driver(obj.cpufreq_qcom_hw_driver);
    return;
}


// ===== sym.qcom_cpufreq_hw_cpu_init @ 0x08001e30 (size 1932) =====

int sym.qcom_cpufreq_hw_cpu_init(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar15;
    uint32_t uVar16;
    int64_t *piVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    int64_t iStack_c0;
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
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = cpufreq_get_driver_data();
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
    iVar10 = get_cpu_device(*(arg1 + 0x1c));
    uVar2 = *(arg1 + 0x1c);
    if (iVar10 == 0) {
        _printk(0x8000a6b,"qcom_cpufreq_hw_cpu_init",uVar2);
        iVar5 = -0x13;
        goto code_r0x08002038;
    }
    iVar11 = get_cpu_device(uVar2);
    if (iVar11 == 0) {
        iVar11 = of_get_cpu_node(uVar2,0);
    }
    else {
        iVar11 = *(iVar11 + 0x2f0);
    }
    if (iVar11 == 0) {
        iVar5 = -0x16;
        goto code_r0x08002038;
    }
    iVar5 = of_parse_phandle_with_args(iVar11,"qcom,freq-domain","#freq-domain-cells",0,&uStack_b8);
    if (iVar5 != 0) goto code_r0x08002038;
    piVar17 = *(arg1 + 0x2b8);
    iVar11 = iVar9 + 0x10;
    uVar3 = uStack_b0._4_4_;
    if (piVar17 == NULL) {
        piVar12 = platform_get_resource(iVar9,0x200,uStack_b0._4_4_);
        if (piVar12 == NULL) {
            _dev_err(iVar11,"failed to get mem resource %d\n",uVar3);
            iVar5 = -0x13;
            goto code_r0x08002038;
        }
        iVar9 = __devm_request_region(iVar11,iomem_resource,*piVar12,(piVar12[1] - *piVar12) + 1,piVar12[2]);
        if (iVar9 == 0) {
            _dev_err(iVar11,"failed to request resource %pR\n",piVar12);
            iVar5 = -0x10;
            goto code_r0x08002038;
        }
        iVar9 = devm_ioremap(iVar11,*piVar12,(piVar12[1] - *piVar12) + 1);
        if (iVar9 == 0) {
            _dev_err(iVar11,"failed to map resource %pR\n",piVar12);
            iVar5 = -0xc;
            goto code_r0x08002038;
        }
        piVar17 = devm_kmalloc(iVar11,0x120,0xdc0);
        if (piVar17 == NULL) {
            iVar5 = -0xc;
            goto code_r0x08002038;
        }
        iVar13 = of_device_get_match_data(iVar11);
        *piVar17 = iVar9;
        piVar17[1] = piVar12;
        piVar17[2] = iVar13;
    }
    uVar14 = sym.readl_relaxed(*piVar17 + *piVar17[2]);
    if ((uVar14 & 1) == 0) {
        _dev_err(iVar11,"Domain-%d cpufreq hardware not enabled\n",uVar3);
        iVar5 = -0x13;
    }
    else {
        sym.qcom_get_related_cpus(uVar3,arg1);
        iVar5 = __sw_hweight64(*arg1);
        if (iVar5 == 0) {
            _dev_err(iVar11,"Domain-%d failed to get related CPUs\n",uVar3);
            iVar5 = -2;
        }
        else {
            *(arg1 + 0x2b8) = piVar17;
            iStack_c0 = 0;
            *(arg1 + 0x278) = 1;
            iVar13 = piVar17[2];
            iVar9 = kmem_cache_alloc_trace(_event_triggers_call,0xdc0,0x1ec);
            if (iVar9 == 0) {
                iVar5 = -0xc;
code_r0x08002538:
                _dev_err(iVar11,"Domain-%d failed to read LUT\n",uVar3);
            }
            else {
                iVar5 = dev_pm_opp_of_add_table(iVar10);
                if (iVar5 == -0x13) {
                    obj.icc_scaling_enabled = 0x0;
                    *(arg1 + 0x270) = 1;
                }
                else {
                    if (iVar5 != 0) {
                        _dev_err(iVar10,"Invalid opp table in device tree\n");
                        goto code_r0x08002538;
                    }
                    iStack_c0 = 0;
                    obj.icc_scaling_enabled = 0x1;
                    while (uVar14 = dev_pm_opp_find_freq_ceil(iVar10,&iStack_c0), uVar14 < 0xfffffffffffff001) {
                        dev_pm_opp_put();
                        dev_pm_opp_disable(iVar10,iStack_c0);
                        iStack_c0 = iStack_c0 + 1;
                    }
                }
                uVar14 = 0;
                puVar15 = iVar9 + 8;
                uVar16 = 0;
                uVar7 = 0;
                do {
                    uVar6 = sym.readl_relaxed(*piVar17 + *(iVar13 + 8) + uVar14 * *(iVar13 + 0x28));
                    uVar4 = uVar6 >> 0x10 & 7;
                    uVar1 = uVar4;
                    if (uVar14 != 0) {
                        uVar1 = uVar7;
                    }
                    uVar7 = sym.readl_relaxed(*piVar17 + *(iVar13 + 0xc) + uVar14 * *(iVar13 + 0x28));
                    uVar18 = _segment.ehdr;
                    if (uVar6 >> 0x1e != 0) {
                        uVar18 = _segment.ehdr * (uVar6 & 0xff);
                    }
                    iVar5 = (uVar7 & 0xfff) * 1000;
                    uVar18 = uVar18 / 1000;
                    uVar7 = uVar18;
                    if ((uVar4 == 1) && (*(iVar13 + 0x2b) != '\0')) {
code_r0x08002150:
                        *puVar15 = 0xffffffff;
                    }
                    else if (uVar16 != uVar7) {
                        iVar11 = (uVar18 & 0xffffffff) * 1000;
                        if ((obj.icc_scaling_enabled & 1) == 0) {
                            iVar8 = dev_pm_opp_add(iVar10,iVar11,iVar5);
joined_r0x080021cc:
                            if (iVar8 == 0) {
                                *puVar15 = uVar7;
                                if (uVar4 < uVar1) {
                                    puVar15[-2] = 1;
                                }
                                goto code_r0x080021e4;
                            }
                        }
                        else {
                            iVar8 = dev_pm_opp_adjust_voltage(iVar10,iVar11,iVar5,iVar5,iVar5);
                            if (iVar8 == 0) {
                                iVar8 = dev_pm_opp_enable(iVar10,iVar11);
                                goto joined_r0x080021cc;
                            }
                            _dev_err(iVar10,"Voltage update failed freq=%ld\n",uVar18 & 0xffffffff);
                        }
                        _dev_warn(iVar10,"failed to update OPP for freq=%d\n",uVar18 & 0xffffffff);
                        goto code_r0x08002150;
                    }
code_r0x080021e4:
                    if ((uVar14 != 0) && (uVar16 == uVar7)) {
                        uVar18 = uVar14 - 1;
                        puVar15 = iVar9 + uVar18 * 0xc + 8;
                        if (*puVar15 != 0xffffffff) break;
                        iVar11 = uVar16 * 1000;
                        if ((obj.icc_scaling_enabled & 1) == 0) {
                            iVar5 = dev_pm_opp_add(iVar10,iVar11,iVar5);
code_r0x080022d8:
                            if (iVar5 == 0) {
                                *puVar15 = uVar16;
                                *(iVar9 + uVar18 * 0xc) = 1;
                                break;
                            }
                        }
                        else {
                            iVar5 = dev_pm_opp_adjust_voltage(iVar10,iVar11,iVar5,iVar5,iVar5);
                            if (iVar5 == 0) {
                                iVar5 = dev_pm_opp_enable(iVar10,iVar11);
                                goto code_r0x080022d8;
                            }
                            _dev_err(iVar10,"Voltage update failed freq=%ld\n",uVar16);
                        }
                        _dev_warn(iVar10,"failed to update OPP for freq=%d\n",uVar16);
                        break;
                    }
                    uVar14 = uVar14 + 1;
                    puVar15 = puVar15 + 3;
                    uVar16 = uVar7;
                    uVar7 = uVar1;
                } while (uVar14 != 0x28);
                iVar11 = 0;
                *(arg1 + 400) = iVar9;
                *(iVar9 + (uVar14 & 0xffffffff) * 0xc + 8) = 0xfffffffe;
                do {
                    uVar16 = *(iVar9 + iVar11 + 8);
                    if ((uVar16 == 0xfffffffe) || (*(iVar9 + iVar11) == 1)) break;
                    iVar11 = iVar11 + 0xc;
                    piVar17[0x1e] = uVar16;
                } while (iVar11 != 0x1e0);
                dev_pm_opp_set_sharing_cpus(iVar10,arg1);
                iVar5 = dev_pm_opp_get_opp_count(iVar10);
                if (iVar5 < 1) {
                    _dev_err(iVar10,"Failed to add OPPs\n");
                    iVar5 = -0x13;
                }
                else {
                    uVar14 = policy_has_boost_freq(arg1);
                    if (((uVar14 & 1) != 0) && (iVar5 = cpufreq_enable_boost_support(), iVar5 != 0)) {
                        _dev_warn(iVar10,"failed to enable boost: %d\n",iVar5);
                    }
                    iVar11 = *(arg1 + 0x2b8);
                    iVar9 = cpufreq_get_driver_data();
                    iVar5 = platform_get_irq(iVar9,uVar3);
                    *(iVar11 + 0x48) = iVar5;
                    if (0 < iVar5) {
                        *(iVar11 + 0x5b) = 0;
                        *(iVar11 + 0xe8) = arg1;
                        __mutex_init(iVar11 + 0x18,"&data->throttle_lock",obj.qcom_cpufreq_hw_lmh_init.__key);
                        *(iVar11 + 0x60) = 0xfffffffe0;
                        *(iVar11 + 0x68) = iVar11 + 0x68;
                        *(iVar11 + 0x70) = iVar11 + 0x68;
                        *(iVar11 + 0x78) = sym.qcom_lmh_dcvs_poll.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
                        init_timer_key(iVar11 + 0x90,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                        iVar13 = iVar11 + 0x4c;
                        snprintf(iVar13,0xf,"dcvsh-irq-%u",*(arg1 + 0x1c));
                        iVar5 = request_threaded_irq
                                          (*(iVar11 + 0x48),0,
                                           sym.qcom_lmh_dcvs_handle_irq.b61897fa48d7967df0d3263ac4417bf4.cfi_jt,0x2000
                                           ,iVar13,iVar11);
                        if (iVar5 == 0) {
                            *(iVar11 + 0x110) = sym.dcvsh_freq_limit_show.b61897fa48d7967df0d3263ac4417bf4.cfi_jt;
                            *(iVar11 + 0x108) = 0x124;
                            *(iVar11 + 0xf8) = 0xffffffff;
                            *(iVar11 + 0x100) = "dcvsh_freq_limit";
                            device_create_file(iVar10,iVar11 + 0x100);
                            iVar5 = 0;
                        }
                        else {
                            _dev_err(iVar9 + 0x10,"Error registering %s: %d\n",iVar13,iVar5);
                            iVar5 = 0;
                        }
                        goto code_r0x08002038;
                    }
                    if (iVar5 != -0x205) {
                        iVar5 = 0;
                        goto code_r0x08002038;
                    }
                    iVar5 = -0x205;
                }
            }
        }
    }
    *(arg1 + 0x2b8) = 0;
code_r0x08002038:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_68) {
        auVar19 = __stack_chk_fail();
        iVar9 = auVar19._0_8_;
        *extraout_x18 = sym.qcom_cpufreq_hw_target_index;
        uVar3 = *(*(iVar9 + 400) + (auVar19._8_8_ & 0xffffffff) * 0xc + 8);
        sym.writel_relaxed(auVar19._8_8_ & 0xffffffff,**(iVar9 + 0x2b8) + *((*(iVar9 + 0x2b8))[2] + 0x14));
        if (((obj.icc_scaling_enabled == 0x1) && (iVar9 = get_cpu_device(*(iVar9 + 0x1c)), iVar9 != 0)) &&
           (uVar14 = dev_pm_opp_find_freq_exact(iVar9,uVar3 * 1000,1), uVar14 < 0xfffffffffffff001)) {
            dev_pm_opp_set_opp(iVar9,uVar14);
            dev_pm_opp_put(uVar14);
        }
        return 0;
    }
    return iVar5;
}


// ===== sym.qcom_cpufreq_hw_target_index @ 0x080025bc (size 176) =====

ulong sym.qcom_cpufreq_hw_target_index(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 400) + (arg2 & 0xffffffffU) * 0xc + 8);
    sym.writel_relaxed(arg2 & 0xffffffff,**(arg1 + 0x2b8) + *((*(arg1 + 0x2b8))[2] + 0x14));
    if (((obj.icc_scaling_enabled == 0x1) && (iVar2 = get_cpu_device(*(arg1 + 0x1c)), iVar2 != 0)) &&
       (uVar3 = dev_pm_opp_find_freq_exact(iVar2,uVar1 * 1000,1), uVar3 < 0xfffffffffffff001)) {
        dev_pm_opp_set_opp(iVar2,uVar3);
        dev_pm_opp_put(uVar3);
    }
    return 0;
}


// ===== sym.qcom_cpufreq_hw_fast_switch @ 0x0800266c (size 92) =====

uint sym.qcom_cpufreq_hw_fast_switch(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x280);
    sym.writel_relaxed(uVar1,**(arg1 + 0x2b8) + *((*(arg1 + 0x2b8))[2] + 0x14));
    return *(*(arg1 + 400) + uVar1 * 0xc + 8);
}


// ===== sym.qcom_cpufreq_hw_get @ 0x080026c8 (size 104) =====

uint sym.qcom_cpufreq_hw_get(void)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = cpufreq_cpu_get_raw();
    uVar2 = 0;
    if (iVar3 != 0) {
        uVar1 = sym.readl_relaxed(**(iVar3 + 0x2b8) + *((*(iVar3 + 0x2b8))[2] + 0x14));
        if (0x26 < uVar1) {
            uVar1 = 0x27;
        }
        uVar2 = *(*(iVar3 + 400) + uVar1 * 0xc + 8);
    }
    return uVar2;
}


// ===== sym.qcom_cpufreq_hw_cpu_exit @ 0x08002730 (size 92) =====

ulong sym.qcom_cpufreq_hw_cpu_exit(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = get_cpu_device(*(arg1 + 0x1c));
    sym.qcom_cpufreq_hw_lmh_exit(*(arg1 + 0x2b8));
    dev_pm_opp_remove_all_dynamic(uVar1);
    dev_pm_opp_of_cpumask_remove_table(arg1 + 8);
    kfree(*(arg1 + 400));
    return 0;
}


// ===== sym.cpufreq_register_em_with_opp @ 0x0800278c (size 60) =====

void sym.cpufreq_register_em_with_opp(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = get_cpu_device(*(arg1 + 0x1c));
    dev_pm_opp_of_register_em(uVar1,arg1 + 8);
    return;
}


// ===== sym.qcom_get_related_cpus @ 0x080027c8 (size 376) =====

void sym.qcom_get_related_cpus(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x5;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t *extraout_x8_01;
    uint64_t *puVar6;
    uint64_t extraout_x9;
    ulong *in_x18;
    code *unaff_x21;
    uint64_t unaff_x22;
    char *unaff_x23;
    char *unaff_x24;
    int64_t unaff_x26;
    ulong unaff_x30;
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
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
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
    uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x5 = extraout_x8;
    if (extraout_x8 <= uVar4) goto code_r0x080028ec;
    unaff_x22 = uVar4 & 0xffffffff;
    unaff_x21 = __cpu_possible_mask;
    unaff_x26 = 1;
    unaff_x23 = "qcom,freq-domain";
    unaff_x24 = "#freq-domain-cells";
    while( true ) {
        iVar5 = get_cpu_device(unaff_x22);
        if (iVar5 == 0) {
            iVar5 = of_get_cpu_node(unaff_x22,0);
        }
        else {
            iVar5 = *(iVar5 + 0x2f0);
        }
        if (((iVar5 != 0) &&
            (iVar3 = of_parse_phandle_with_args(iVar5,unaff_x23,unaff_x24,0,&uStack_a8), -1 < iVar3)) &&
           (uStack_a0._4_4_ == arg1)) break;
        while( true ) {
            uVar4 = cpumask_next(unaff_x22 & 0xffffffff,unaff_x21);
            *in_x5 = extraout_x8_00;
            unaff_x22 = uVar4 & 0xffffffff;
            if (uVar4 < extraout_x8_00) break;
code_r0x080028ec:
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_58) {
                return;
            }
            __stack_chk_fail();
            puVar6 = extraout_x8_01;
            uVar4 = extraout_x9;
code_r0x08002928:
            Hint_Prefetch(puVar6,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar6,0x10);
                if (bVar2) {
                    *puVar6 = *puVar6 | uVar4;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
    }
    puVar6 = arg2 + (unaff_x22 >> 3 & 0x1ffffff8);
    uVar4 = unaff_x26 << (unaff_x22 & 0x3f);
    goto code_r0x08002928;
}


// ===== sym.qcom_lmh_dcvs_poll @ 0x08002940 (size 40) =====

void sym.qcom_lmh_dcvs_poll(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_lmh_dcvs_notify(arg1 + -0x60);
    return;
}


// ===== sym.qcom_lmh_dcvs_handle_irq @ 0x08002968 (size 172) =====

bool sym.qcom_lmh_dcvs_handle_irq(ulong noname_0,int64_t arg1)

{
    bool bVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x10);
    uVar2 = sym.readl_relaxed(*arg1 + *(iVar3 + 0x1c));
    bVar1 = ((uVar2 & 0xffffffff) >> (*(iVar3 + 0x29) & 0x3f) & 1) != 0;
    if (bVar1) {
        disable_irq_nosync(*(arg1 + 0x48));
        queue_delayed_work_on(0x20,_trace_event_buffer_reserve,arg1 + 0x60,0);
    }
    return bVar1;
}


// ===== sym.dcvsh_freq_limit_show @ 0x08002ac4 (size 60) =====

int64_t sym.dcvsh_freq_limit_show(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%lu\n",*(arg1 + -8));
    return iVar1;
}


// ===== sym.qcom_lmh_dcvs_notify @ 0x08002b00 (size 704) =====

void sym.qcom_lmh_dcvs_notify(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar11 = *(arg1 + 0xe8);
    uStack_70 = 0;
    iVar10 = *(arg1 + 0x10);
    uVar5 = *(iVar11 + 8);
    uVar8 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar3 = 0x20;
    if (uVar5 != 0) {
        uVar3 = LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar8 = uVar3;
    iVar4 = get_cpu_device(uVar8);
    if (iVar4 != 0) {
        uVar2 = *(*(arg1 + 0x10) + 0x10);
        if (uVar2 == 0) {
            uVar2 = *(*(arg1 + 0x10) + 4);
            uVar9 = 0xff;
        }
        else {
            uVar9 = 0x3ff;
        }
        uVar2 = sym.readl_relaxed(*arg1 + uVar2);
        uStack_70 = _segment.ehdr * (uVar2 & uVar9);
        uVar5 = dev_pm_opp_find_freq_floor(iVar4,&uStack_70);
        if (uVar5 == 0xffffffffffffffde) {
            uVar5 = dev_pm_opp_find_freq_ceil(iVar4,&uStack_70);
        }
        if (uVar5 < 0xfffffffffffff001) {
            dev_pm_opp_put();
        }
        uVar5 = uStack_70 / 1000;
        iVar4 = cpufreq_cpu_get_raw(uVar8);
        if (iVar4 != 0) {
            sym.readl_relaxed(**(iVar4 + 0x2b8) + *((*(iVar4 + 0x2b8))[2] + 0x14));
        }
        mutex_lock(arg1 + 0x18);
        if (*(arg1 + 0x5b) == '\0') {
            if (0x1f < uVar3) goto code_r0x08002dbc;
            uVar13 = *(iVar11 + 0x28);
            uVar12 = *(cpu_scale + *(__per_cpu_offset + uVar8 * 8));
            iVar4 = cpufreq_cpu_get_raw(uVar3);
            uVar8 = uVar12;
            if (iVar4 == 0) {
code_r0x08002d04:
                uVar3 = sym.readl_relaxed(*arg1 + *(iVar10 + 0x20));
                sym.writel_relaxed(uVar3 | 1L << (*(iVar10 + 0x29) & 0x3f),*arg1 + *(iVar10 + 0x20));
                enable_irq(*(arg1 + 0x48));
            }
            else {
                uVar3 = sym.readl_relaxed(**(iVar4 + 0x2b8) + *((*(iVar4 + 0x2b8))[2] + 0x14));
                if (0x26 < uVar3) {
                    uVar3 = 0x27;
                }
                if (*(*(iVar4 + 400) + uVar3 * 0xc + 8) <= uVar5) goto code_r0x08002d04;
                if (uVar5 < *(arg1 + 0xf0)) {
                    uVar6 = *(iVar11 + 0x28);
                    uVar13 = 0;
                    if (uVar6 != 0) {
                        uVar13 = uVar12 / uVar6;
                    }
                    uVar7 = 0;
                    if (uVar6 != 0) {
                        uVar7 = ((uVar12 - uVar13 * uVar6) * uVar5) / uVar6;
                    }
                    uVar7 = uVar7 + uVar13 * uVar5;
                    uVar13 = uVar5;
                    if (uVar7 <= uVar12) {
                        uVar8 = uVar7;
                    }
                }
                mod_delayed_work_on(0x20,___stack_chk_fail,arg1 + 0x60,3);
            }
            topology_set_thermal_pressure(iVar11 + 8,uVar12 - uVar8);
            *(arg1 + 0xf8) = uVar13;
        }
        mutex_unlock(arg1 + 0x18);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08002dbc:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002dc0);
    (*pcVar1)();
}


// ===== sym.writel_relaxed @ 0x08002f20 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002f3c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002f64);
    return;
}


// ===== sym.qcom_cpufreq_hw_lmh_exit @ 0x08002f98 (size 156) =====

void sym.qcom_cpufreq_hw_lmh_exit(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(arg1 + 0x48)) {
        iVar1 = *(arg1 + 0xe8);
        mutex_lock(arg1 + 0x18);
        *(arg1 + 0x5b) = 1;
        mutex_unlock(arg1 + 0x18);
        free_irq(*(arg1 + 0x48),arg1);
        cancel_delayed_work_sync(arg1 + 0x60);
        topology_set_thermal_pressure(iVar1 + 8,0);
        return;
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080030e4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003128

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
    //switch table (4 cases) at 0x8000718
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800313c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003170 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_cpufreq_hw_driver_probe.b61897fa48d7967df0d3263ac4417bf4.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080031a4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_cpufreq_hw_driver_probe.b61897fa48d7967df0d3263ac4417bf4.cfi_jt);
    return;
}

