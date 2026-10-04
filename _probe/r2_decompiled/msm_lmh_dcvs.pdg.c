// decompiled from msm_lmh_dcvs by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 268) =====

//WARNING: Switch with 1 destination removed at 0x08001e80

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < -0x3557318fb8d07b71) {
        if (arg1 == -0x66d421a09845f9f8) {
            uVar2 = 0x8001138;
        }
        else if (arg1 == -0x550b9e52359ac614) {
            uVar2 = 0x8001140;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) goto code_r0x08001e40;
            uVar2 = 0x8001118;
        }
    }
    else if (arg1 == -0x3557318fb8d07b71) {
        uVar2 = 0x8001130;
    }
    else if (arg1 == -0x2ee0710dce68437c) {
        uVar2 = 0x8001120;
    }
    else {
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08001e40;
        uVar2 = 0x8001128;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001e40:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e94);
    (*pcVar1)();
}


// ===== sym.lmh_dcvs_handle_isr.7b1e68a57647800a6d568a584aee7ea4.cfi_jt @ 0x08001118 (size 8) =====

ulong sym.lmh_dcvs_handle_isr.7b1e68a57647800a6d568a584aee7ea4.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_2 + 0x208);
    if (*(param_2 + 0x200) != '\0') {
        *(param_2 + 0x200) = 0;
        disable_irq_nosync(*(param_2 + 0x18));
        sym.limits_mitigation_notify(param_2);
        mod_delayed_work_on(0x20,_cpumask_next,param_2 + 0x38,3);
    }
    mutex_unlock(param_2 + 0x208);
    return 1;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001120 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.limits_dcvs_probe.7b1e68a57647800a6d568a584aee7ea4.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.limits_dcvs_probe.7b1e68a57647800a6d568a584aee7ea4.cfi_jt @ 0x08001130 (size 8) =====

void sym.limits_dcvs_probe.7b1e68a57647800a6d568a584aee7ea4.cfi_jt(code *param_1)

{
    uint uVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *puVar11;
    uint32_t *puVar12;
    ulong uVar13;
    ulong *extraout_x1;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    int64_t iVar14;
    ulong extraout_x8_02;
    uint64_t *extraout_x8_03;
    uint64_t extraout_x9;
    ulong *in_x18;
    uint64_t unaff_x19;
    code *pcVar15;
    code *pcVar16;
    char *unaff_x23;
    uint64_t *unaff_x24;
    int64_t unaff_x26;
    ulong *puVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    int iStack_74;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    pcVar16 = *(param_1 + 0x300);
    iStack_74 = -1;
    uStack_70 = 0;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *extraout_x1 = extraout_x8;
    if (extraout_x8 <= uVar5) goto code_r0x08001254;
    unaff_x19 = uVar5;
    unaff_x24 = &uStack_70;
    unaff_x26 = 1;
    pcVar15 = __cpu_possible_mask;
    unaff_x23 = "qcom,lmh-dcvs";
    do {
        iVar7 = get_cpu_device(unaff_x19);
        if (iVar7 == 0) {
            iVar7 = of_get_cpu_node(unaff_x19,0);
        }
        else {
            iVar7 = *(iVar7 + 0x2f0);
        }
        if ((iVar7 != 0) && (pcVar8 = of_parse_phandle(iVar7,unaff_x23,0), pcVar8 == pcVar16)) {
            puVar11 = unaff_x24 + (unaff_x19 >> 3 & 0x1ffffff8);
            uVar9 = unaff_x26 << (unaff_x19 & 0x3f);
            goto code_r0x0800168c;
        }
        while( true ) {
            auVar18 = cpumask_next(unaff_x19 & 0xffffffff,pcVar15);
            *auVar18._8_8_ = extraout_x8_00;
            unaff_x19 = auVar18._0_8_ & 0xffffffff;
            if (auVar18._0_4_ < extraout_x8_00) break;
code_r0x08001254:
            pcVar15 = param_1 + 0x10;
            uVar9 = devm_kmalloc(pcVar15,600,0xdc0);
            if (uVar9 == 0) {
code_r0x0800131c:
                uVar13 = 0xfffffff4;
            }
            else {
                unaff_x19 = uVar9;
                if ((uStack_70 & 0xffffffff) == 0) {
                    sym.limits_isens_qref_init(param_1,uVar9,0,0x800036e);
                    sym.limits_isens_qref_init(param_1,uVar9,1,0x800043b);
code_r0x0800154c:
                    mutex_lock(obj.lmh_dcvs_list_access);
                    param_1 = uVar9 + 0x1f0;
                    pcVar16 = obj.limits_dcvs_probe.__key;
                    *(uVar9 + 0x1f0) = param_1;
                    *(uVar9 + 0x1f8) = param_1;
                    pcVar15 = *0x8000078;
                    uVar10 = __list_add_valid(param_1,*0x8000078,obj.limits_dcvs_probe.__key);
                    if ((uVar10 & 1) != 0) {
                        *0x8000078 = param_1;
                        *(uVar9 + 0x1f0) = obj.limits_dcvs_probe.__key;
                        *(uVar9 + 0x1f8) = pcVar15;
                        *pcVar15 = param_1;
                    }
                    mutex_unlock(obj.lmh_dcvs_list_access);
                    uVar13 = 0;
                }
                else {
                    uVar10 = __sw_hweight64();
                    puVar11 = devm_kmalloc(pcVar15,(uVar10 & 0xffffffff) << 4,0xdc0);
                    *(uVar9 + 0x238) = puVar11;
                    if (puVar11 == NULL) goto code_r0x0800131c;
                    unaff_x26 = 0xffffffff;
                    unaff_x23 = uVar9 + 0x30;
                    *unaff_x23 = uStack_70;
                    *(uVar9 + 0x240) = 0;
                    auVar18 = cpumask_next(0xffffffff,unaff_x23);
                    uVar13 = auVar18._0_8_;
                    *auVar18._8_8_ = extraout_x8_01;
                    if (auVar18._0_4_ < extraout_x8_01) {
                        iVar7 = 0;
                        iVar14 = *(uVar9 + 0x238);
                        puVar17 = uVar9 + 0xc0;
                        *puVar11 = 0;
                        *(iVar14 + 8) = 0xffffffff;
                        while( true ) {
                            *puVar17 = 0xffffffff;
                            auVar18 = cpumask_next(uVar13,unaff_x23);
                            uVar13 = auVar18._0_8_;
                            *auVar18._8_8_ = extraout_x8_02;
                            if (extraout_x8_02 <= auVar18._0_4_) break;
                            puVar17 = puVar17 + 1;
                            *(*(uVar9 + 0x238) + iVar7 + 0x10) = 0;
                            iVar14 = *(uVar9 + 0x238) + iVar7;
                            iVar7 = iVar7 + 0x10;
                            *(iVar14 + 0x18) = 0xffffffff;
                            if (iVar7 == 0x200) {
    //WARNING: Does not return
                                pcVar16 = SoftwareBreakpoint(0x5512,0x800131c);
                                (*pcVar16)();
                            }
                        }
                    }
                    iVar6 = of_property_read_variable_u32_array(pcVar16,"qcom,affinity",&iStack_74,1,0);
                    unaff_x24 = puVar11;
                    if (iVar6 < 0) {
                        uVar13 = 0xffffffed;
                        goto code_r0x080015d8;
                    }
                    uVar1 = 0x6370302d;
                    if (iStack_74 == 0) {
code_r0x08001360:
                        *(uVar9 + 0x14) = uVar1;
                        puVar12 = __of_get_address(pcVar16,0,0xffffffff,0,0);
                        if (puVar12 == NULL) {
                            uVar13 = 0x80003f2;
                        }
                        else {
                            uVar5 = *puVar12;
                            unaff_x23 = uVar5;
                            puVar12 = __of_get_address(pcVar16,1,0xffffffff,0,0);
                            if (puVar12 != NULL) {
                                uVar2 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
                                *(uVar9 + 0x1c8) = 0xffffffff;
                                snprintf(uVar9,0x14,"limits_sensor-%02d",iStack_74);
                                __mutex_init(uVar9 + 0x208,"&hw->access_lock",obj.limits_dcvs_probe.__key);
                                *(uVar9 + 0x38) = 0xfffffffe0;
                                *(uVar9 + 0x40) = uVar9 + 0x40;
                                *(uVar9 + 0x48) = uVar9 + 0x40;
                                *(uVar9 + 0x50) = sym.limits_dcvs_poll.7b1e68a57647800a6d568a584aee7ea4.cfi_jt;
                                init_timer_key(uVar9 + 0x68,sym.delayed_work_timer_fn.cfi_jt,0x280000,0,0);
                                iVar7 = devm_ioremap(pcVar15,(uVar2 >> 0x10 | uVar2 << 0x10) + 0x704,4);
                                *(uVar9 + 0x20) = iVar7;
                                if (iVar7 == 0) {
                                    uVar13 = 0x800041c;
                                }
                                else {
                                    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                                    iVar7 = devm_ioremap(pcVar15,(uVar5 >> 0x10 | uVar5 << 0x10) + 8,4);
                                    *(uVar9 + 0x28) = iVar7;
                                    if (iVar7 != 0) {
                                        iVar6 = of_irq_get(*(param_1 + 0x300),0);
                                        *(uVar9 + 0x18) = iVar6;
                                        if (iVar6 < 0) {
                                            _printk(0x80003c3,"msm_lmh_dcvs","limits_dcvs_probe",iVar6);
                                        }
                                        else {
                                            *(uVar9 + 0x200) = 1;
                                            iVar6 = devm_request_threaded_irq
                                                              (pcVar15,iVar6,0,
                                                               
                                                            sym.lmh_dcvs_handle_isr.7b1e68a57647800a6d568a584aee7ea4.cfi_jt
                                                            ,0x6084,uVar9,uVar9);
                                            if (iVar6 == 0) {
                                                sym.limits_isens_qref_init(param_1,uVar9,0,0x800036e);
                                                sym.limits_isens_qref_init(param_1,uVar9,1,0x800043b);
                                                *(uVar9 + 0x1d0) = "lmh_freq_limit";
                                                *(uVar9 + 0x1e0) =
                                                     sym.lmh_freq_limit_show.7b1e68a57647800a6d568a584aee7ea4.cfi_jt;
                                                *(uVar9 + 0x1d8) = 0x124;
                                                device_create_file(pcVar15,uVar9 + 0x1d0);
                                            }
                                            else {
                                                _printk(0x80002e6,"msm_lmh_dcvs","limits_dcvs_probe",iVar6);
                                            }
                                        }
                                        goto code_r0x0800154c;
                                    }
                                    uVar13 = 0x80001d2;
                                }
                                _printk(uVar13,"msm_lmh_dcvs","limits_dcvs_probe");
                                goto code_r0x0800154c;
                            }
                            uVar13 = 0x80004af;
                        }
                        _printk(uVar13,"msm_lmh_dcvs","limits_dcvs_probe");
                    }
                    else if (iStack_74 == 1) {
                        uVar1 = 0x6370312d;
                        goto code_r0x08001360;
                    }
                    uVar13 = 0xffffffea;
                }
            }
code_r0x080015d8:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail(uVar13);
            puVar11 = extraout_x8_03;
            uVar9 = extraout_x9;
code_r0x0800168c:
            Hint_Prefetch(puVar11,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar11,0x10);
                if (bVar4) {
                    *puVar11 = *puVar11 | uVar9;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
    } while( true );
}


// ===== sym.lmh_freq_limit_show.7b1e68a57647800a6d568a584aee7ea4.cfi_jt @ 0x08001138 (size 8) =====

int64_t sym.lmh_freq_limit_show.7b1e68a57647800a6d568a584aee7ea4.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%lu\n",*(param_2 + -8));
    return iVar1;
}


// ===== sym.limits_dcvs_poll.7b1e68a57647800a6d568a584aee7ea4.cfi_jt @ 0x08001140 (size 8) =====

ulong sym.limits_dcvs_poll.7b1e68a57647800a6d568a584aee7ea4.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *extraout_x1;
    int64_t arg1;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t uVar7;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong unaff_x25;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    mutex_lock(param_1 + 0x1d0);
    if (*(param_1 + 0x88) == 0xffffffff) {
        uVar3 = cpumask_next(0xffffffff,param_1 + -8);
        *extraout_x1 = extraout_x8;
        if (uVar3 < extraout_x8) {
            uVar8 = uVar3;
            uVar3 = 0;
            unaff_x25 = 0xffffffff;
            do {
                uStack_78 = 0;
                uStack_70 = 0xffffffff;
                iVar5 = get_cpu_device(uVar8);
                if (iVar5 == 0) {
                    _printk(0x8000474,"msm_lmh_dcvs","limits_dcvs_get_freq_limits",uVar8);
                }
                else {
                    dev_pm_opp_find_freq_floor(iVar5,&uStack_70);
                    dev_pm_opp_find_freq_ceil(iVar5,&uStack_78);
                    if (0x1f < uVar3) goto code_r0x080018c8;
                    uVar7 = uStack_70 / 1000;
                    *(param_1 + -0x38 + uVar3 * 8 + 0xc0) = uVar7;
                    if (*(param_1 + 0x188) < uVar7) {
                        *(param_1 + 0x188) = uVar7;
                    }
                }
                uVar3 = uVar3 + 1;
                auVar9 = cpumask_next(uVar8,param_1 + -8);
                *auVar9._8_8_ = extraout_x8_00;
                uVar8 = auVar9._0_8_ & 0xffffffff;
            } while (auVar9._0_4_ < extraout_x8_00);
        }
    }
    uVar8 = sym.limits_mitigation_notify(param_1 + -0x38);
    puVar1 = param_1 + -8;
    *puVar1 = unaff_x25;
    uVar6 = cpumask_next(0xffffffff);
    if (uVar6 < unaff_x25) {
        iVar5 = 0;
        uVar3 = 0;
        do {
            if (iVar5 == 0x100) {
code_r0x080018c8:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x80018cc);
                (*pcVar2)();
            }
            if (*(param_1 + 0x88 + iVar5) <= uVar8) {
                uVar3 = uVar3 + 1;
            }
            uVar6 = cpumask_next(uVar6,puVar1);
            iVar5 = iVar5 + 8;
        } while (uVar6 < unaff_x25);
    }
    else {
        uVar3 = 0;
    }
    uVar4 = __sw_hweight64(*puVar1);
    if (uVar3 < uVar4) {
        mod_delayed_work_on(0x20,_cpumask_next,param_1,3);
    }
    else {
        sym.writel_relaxed(noname_0,*(param_1 + -0x10));
        *(param_1 + 0x1c8) = 1;
        enable_irq(*(param_1 + -0x20));
    }
    uVar6 = mutex_unlock(param_1 + 0x1d0);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.lmh_dcvs_handle_isr;
        mutex_lock(arg1 + 0x208);
        if (*(arg1 + 0x200) != '\0') {
            *(arg1 + 0x200) = 0;
            disable_irq_nosync(*(arg1 + 0x18));
            sym.limits_mitigation_notify(arg1);
            mod_delayed_work_on(0x20,_cpumask_next,arg1 + 0x38,3);
        }
        mutex_unlock(arg1 + 0x208);
        return 1;
    }
    return uVar6;
}


// ===== sym.limits_dcvs_probe @ 0x08001148 (size 1372) =====

void sym.limits_dcvs_probe(int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *puVar11;
    uint32_t *puVar12;
    ulong uVar13;
    ulong *extraout_x1;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    int64_t iVar14;
    ulong extraout_x8_02;
    uint64_t *extraout_x8_03;
    uint64_t extraout_x9;
    ulong *in_x18;
    uint64_t unaff_x19;
    code *pcVar15;
    code *pcVar16;
    char *unaff_x23;
    uint64_t *unaff_x24;
    int64_t unaff_x26;
    ulong *puVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    int iStack_74;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    pcVar16 = *(arg1 + 0x300);
    iStack_74 = -1;
    uStack_70 = 0;
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *extraout_x1 = extraout_x8;
    if (extraout_x8 <= uVar5) goto code_r0x08001254;
    unaff_x19 = uVar5;
    unaff_x24 = &uStack_70;
    unaff_x26 = 1;
    pcVar15 = __cpu_possible_mask;
    unaff_x23 = "qcom,lmh-dcvs";
    do {
        iVar7 = get_cpu_device(unaff_x19);
        if (iVar7 == 0) {
            iVar7 = of_get_cpu_node(unaff_x19,0);
        }
        else {
            iVar7 = *(iVar7 + 0x2f0);
        }
        if ((iVar7 != 0) && (pcVar8 = of_parse_phandle(iVar7,unaff_x23,0), pcVar8 == pcVar16)) {
            puVar11 = unaff_x24 + (unaff_x19 >> 3 & 0x1ffffff8);
            uVar9 = unaff_x26 << (unaff_x19 & 0x3f);
            goto code_r0x0800168c;
        }
        while( true ) {
            auVar18 = cpumask_next(unaff_x19 & 0xffffffff,pcVar15);
            *auVar18._8_8_ = extraout_x8_00;
            unaff_x19 = auVar18._0_8_ & 0xffffffff;
            if (auVar18._0_4_ < extraout_x8_00) break;
code_r0x08001254:
            pcVar15 = arg1 + 0x10;
            uVar9 = devm_kmalloc(pcVar15,600,0xdc0);
            if (uVar9 == 0) {
code_r0x0800131c:
                uVar13 = 0xfffffff4;
            }
            else {
                unaff_x19 = uVar9;
                if ((uStack_70 & 0xffffffff) == 0) {
                    sym.limits_isens_qref_init(arg1,uVar9,0,0x800036e);
                    sym.limits_isens_qref_init(arg1,uVar9,1,0x800043b);
code_r0x0800154c:
                    mutex_lock(obj.lmh_dcvs_list_access);
                    arg1 = uVar9 + 0x1f0;
                    pcVar16 = obj.limits_dcvs_probe.__key;
                    *(uVar9 + 0x1f0) = arg1;
                    *(uVar9 + 0x1f8) = arg1;
                    pcVar15 = *0x8000078;
                    uVar10 = __list_add_valid(arg1,*0x8000078,obj.limits_dcvs_probe.__key);
                    if ((uVar10 & 1) != 0) {
                        *0x8000078 = arg1;
                        *(uVar9 + 0x1f0) = obj.limits_dcvs_probe.__key;
                        *(uVar9 + 0x1f8) = pcVar15;
                        *pcVar15 = arg1;
                    }
                    mutex_unlock(obj.lmh_dcvs_list_access);
                    uVar13 = 0;
                }
                else {
                    uVar10 = __sw_hweight64();
                    puVar11 = devm_kmalloc(pcVar15,(uVar10 & 0xffffffff) << 4,0xdc0);
                    *(uVar9 + 0x238) = puVar11;
                    if (puVar11 == NULL) goto code_r0x0800131c;
                    unaff_x26 = 0xffffffff;
                    unaff_x23 = uVar9 + 0x30;
                    *unaff_x23 = uStack_70;
                    *(uVar9 + 0x240) = 0;
                    auVar18 = cpumask_next(0xffffffff,unaff_x23);
                    uVar13 = auVar18._0_8_;
                    *auVar18._8_8_ = extraout_x8_01;
                    if (auVar18._0_4_ < extraout_x8_01) {
                        iVar7 = 0;
                        iVar14 = *(uVar9 + 0x238);
                        puVar17 = uVar9 + 0xc0;
                        *puVar11 = 0;
                        *(iVar14 + 8) = 0xffffffff;
                        while( true ) {
                            *puVar17 = 0xffffffff;
                            auVar18 = cpumask_next(uVar13,unaff_x23);
                            uVar13 = auVar18._0_8_;
                            *auVar18._8_8_ = extraout_x8_02;
                            if (extraout_x8_02 <= auVar18._0_4_) break;
                            puVar17 = puVar17 + 1;
                            *(*(uVar9 + 0x238) + iVar7 + 0x10) = 0;
                            iVar14 = *(uVar9 + 0x238) + iVar7;
                            iVar7 = iVar7 + 0x10;
                            *(iVar14 + 0x18) = 0xffffffff;
                            if (iVar7 == 0x200) {
    //WARNING: Does not return
                                pcVar16 = SoftwareBreakpoint(0x5512,0x800131c);
                                (*pcVar16)();
                            }
                        }
                    }
                    iVar6 = of_property_read_variable_u32_array(pcVar16,"qcom,affinity",&iStack_74,1,0);
                    unaff_x24 = puVar11;
                    if (iVar6 < 0) {
                        uVar13 = 0xffffffed;
                        goto code_r0x080015d8;
                    }
                    uVar1 = 0x6370302d;
                    if (iStack_74 == 0) {
code_r0x08001360:
                        *(uVar9 + 0x14) = uVar1;
                        puVar12 = __of_get_address(pcVar16,0,0xffffffff,0,0);
                        if (puVar12 == NULL) {
                            uVar13 = 0x80003f2;
                        }
                        else {
                            uVar5 = *puVar12;
                            unaff_x23 = uVar5;
                            puVar12 = __of_get_address(pcVar16,1,0xffffffff,0,0);
                            if (puVar12 != NULL) {
                                uVar2 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
                                *(uVar9 + 0x1c8) = 0xffffffff;
                                snprintf(uVar9,0x14,"limits_sensor-%02d",iStack_74);
                                __mutex_init(uVar9 + 0x208,"&hw->access_lock",obj.limits_dcvs_probe.__key);
                                *(uVar9 + 0x38) = 0xfffffffe0;
                                *(uVar9 + 0x40) = uVar9 + 0x40;
                                *(uVar9 + 0x48) = uVar9 + 0x40;
                                *(uVar9 + 0x50) = sym.limits_dcvs_poll.7b1e68a57647800a6d568a584aee7ea4.cfi_jt;
                                init_timer_key(uVar9 + 0x68,sym.delayed_work_timer_fn.cfi_jt,0x280000,0,0);
                                iVar7 = devm_ioremap(pcVar15,(uVar2 >> 0x10 | uVar2 << 0x10) + 0x704,4);
                                *(uVar9 + 0x20) = iVar7;
                                if (iVar7 == 0) {
                                    uVar13 = 0x800041c;
                                }
                                else {
                                    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                                    iVar7 = devm_ioremap(pcVar15,(uVar5 >> 0x10 | uVar5 << 0x10) + 8,4);
                                    *(uVar9 + 0x28) = iVar7;
                                    if (iVar7 != 0) {
                                        iVar6 = of_irq_get(*(arg1 + 0x300),0);
                                        *(uVar9 + 0x18) = iVar6;
                                        if (iVar6 < 0) {
                                            _printk(0x80003c3,"msm_lmh_dcvs","limits_dcvs_probe",iVar6);
                                        }
                                        else {
                                            *(uVar9 + 0x200) = 1;
                                            iVar6 = devm_request_threaded_irq
                                                              (pcVar15,iVar6,0,
                                                               
                                                            sym.lmh_dcvs_handle_isr.7b1e68a57647800a6d568a584aee7ea4.cfi_jt
                                                            ,0x6084,uVar9,uVar9);
                                            if (iVar6 == 0) {
                                                sym.limits_isens_qref_init(arg1,uVar9,0,0x800036e);
                                                sym.limits_isens_qref_init(arg1,uVar9,1,0x800043b);
                                                *(uVar9 + 0x1d0) = "lmh_freq_limit";
                                                *(uVar9 + 0x1e0) =
                                                     sym.lmh_freq_limit_show.7b1e68a57647800a6d568a584aee7ea4.cfi_jt;
                                                *(uVar9 + 0x1d8) = 0x124;
                                                device_create_file(pcVar15,uVar9 + 0x1d0);
                                            }
                                            else {
                                                _printk(0x80002e6,"msm_lmh_dcvs","limits_dcvs_probe",iVar6);
                                            }
                                        }
                                        goto code_r0x0800154c;
                                    }
                                    uVar13 = 0x80001d2;
                                }
                                _printk(uVar13,"msm_lmh_dcvs","limits_dcvs_probe");
                                goto code_r0x0800154c;
                            }
                            uVar13 = 0x80004af;
                        }
                        _printk(uVar13,"msm_lmh_dcvs","limits_dcvs_probe");
                    }
                    else if (iStack_74 == 1) {
                        uVar1 = 0x6370312d;
                        goto code_r0x08001360;
                    }
                    uVar13 = 0xffffffea;
                }
            }
code_r0x080015d8:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail(uVar13);
            puVar11 = extraout_x8_03;
            uVar9 = extraout_x9;
code_r0x0800168c:
            Hint_Prefetch(puVar11,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar11,0x10);
                if (bVar4) {
                    *puVar11 = *puVar11 | uVar9;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
    } while( true );
}


// ===== sym.limits_dcvs_poll @ 0x080016a4 (size 556) =====

ulong sym.limits_dcvs_poll(int64_t arg1)

{
    ulong *puVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *extraout_x1;
    int64_t arg1_00;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t uVar7;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong unaff_x25;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    mutex_lock(arg1 + 0x1d0);
    if (*(arg1 + 0x88) == 0xffffffff) {
        uVar3 = cpumask_next(0xffffffff,arg1 + -8);
        *extraout_x1 = extraout_x8;
        if (uVar3 < extraout_x8) {
            uVar8 = uVar3;
            uVar3 = 0;
            unaff_x25 = 0xffffffff;
            do {
                uStack_78 = 0;
                uStack_70 = 0xffffffff;
                iVar5 = get_cpu_device(uVar8);
                if (iVar5 == 0) {
                    _printk(0x8000474,"msm_lmh_dcvs","limits_dcvs_get_freq_limits",uVar8);
                }
                else {
                    dev_pm_opp_find_freq_floor(iVar5,&uStack_70);
                    dev_pm_opp_find_freq_ceil(iVar5,&uStack_78);
                    if (0x1f < uVar3) goto code_r0x080018c8;
                    uVar7 = uStack_70 / 1000;
                    *(arg1 + -0x38 + uVar3 * 8 + 0xc0) = uVar7;
                    if (*(arg1 + 0x188) < uVar7) {
                        *(arg1 + 0x188) = uVar7;
                    }
                }
                uVar3 = uVar3 + 1;
                auVar9 = cpumask_next(uVar8,arg1 + -8);
                *auVar9._8_8_ = extraout_x8_00;
                uVar8 = auVar9._0_8_ & 0xffffffff;
            } while (auVar9._0_4_ < extraout_x8_00);
        }
    }
    uVar8 = sym.limits_mitigation_notify(arg1 + -0x38);
    puVar1 = arg1 + -8;
    *puVar1 = unaff_x25;
    uVar6 = cpumask_next(0xffffffff);
    if (uVar6 < unaff_x25) {
        iVar5 = 0;
        uVar3 = 0;
        do {
            if (iVar5 == 0x100) {
code_r0x080018c8:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x80018cc);
                (*pcVar2)();
            }
            if (*(arg1 + 0x88 + iVar5) <= uVar8) {
                uVar3 = uVar3 + 1;
            }
            uVar6 = cpumask_next(uVar6,puVar1);
            iVar5 = iVar5 + 8;
        } while (uVar6 < unaff_x25);
    }
    else {
        uVar3 = 0;
    }
    uVar4 = __sw_hweight64(*puVar1);
    if (uVar3 < uVar4) {
        mod_delayed_work_on(0x20,_cpumask_next,arg1,3);
    }
    else {
        sym.writel_relaxed(noname_0,*(arg1 + -0x10));
        *(arg1 + 0x1c8) = 1;
        enable_irq(*(arg1 + -0x20));
    }
    uVar6 = mutex_unlock(arg1 + 0x1d0);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.lmh_dcvs_handle_isr;
        mutex_lock(arg1_00 + 0x208);
        if (*(arg1_00 + 0x200) != '\0') {
            *(arg1_00 + 0x200) = 0;
            disable_irq_nosync(*(arg1_00 + 0x18));
            sym.limits_mitigation_notify(arg1_00);
            mod_delayed_work_on(0x20,_cpumask_next,arg1_00 + 0x38,3);
        }
        mutex_unlock(arg1_00 + 0x208);
        return 1;
    }
    return uVar6;
}


// ===== sym.lmh_dcvs_handle_isr @ 0x080018d0 (size 120) =====

ulong sym.lmh_dcvs_handle_isr(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x208);
    if (*(arg1 + 0x200) != '\0') {
        *(arg1 + 0x200) = 0;
        disable_irq_nosync(*(arg1 + 0x18));
        sym.limits_mitigation_notify(arg1);
        mod_delayed_work_on(0x20,_cpumask_next,arg1 + 0x38,3);
    }
    mutex_unlock(arg1 + 0x208);
    return 1;
}


// ===== sym.lmh_freq_limit_show @ 0x08001948 (size 60) =====

int64_t sym.lmh_freq_limit_show(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%lu\n",*(arg1 + -8));
    return iVar1;
}


// ===== sym.limits_isens_qref_init @ 0x08001984 (size 368) =====

uint64_t sym.limits_isens_qref_init(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint32_t *puVar2;
    uint64_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    uint *extraout_x1_01;
    uint uVar13;
    int64_t iVar14;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int iVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar7 = of_property_read_variable_u32_array(*(arg1 + 0x300));
    uVar5 = uVar7 & uVar7 >> 0x1f;
    if (uVar5 != 0xffffffea) {
        if (uVar5 == 0) {
            uVar7 = devm_regulator_get(arg1 + 0x10,arg4);
            arg2 = arg2 + (arg3 & 0xffffffffU) * 8;
            *(arg2 + 0x248) = uVar7;
            if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                uVar7 = _printk(0x8000396,"msm_lmh_dcvs","limits_isens_qref_init");
                goto code_r0x08001a40;
            }
            uVar5 = regulator_set_voltage(uVar7,0,0);
            if (uVar5 == 0) {
                puVar1 = arg2 + 0x248;
                uVar5 = regulator_set_load(*puVar1,0);
                if (uVar5 == 0) {
                    uVar7 = regulator_enable(*puVar1);
                    if (uVar7 != 0) {
                        uVar7 = _printk(0x8000256,"msm_lmh_dcvs","limits_isens_qref_init");
                    }
                    goto code_r0x08001a40;
                }
                uVar8 = 0x80002a5;
            }
            else {
                uVar8 = 0x8000311;
            }
        }
        else {
            uVar8 = 0x8000214;
        }
        uVar7 = _printk(uVar8,"msm_lmh_dcvs","limits_isens_qref_init",uVar5);
    }
code_r0x08001a40:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iVar14) {
        return uVar7;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.limits_mitigation_notify;
    pcStack_a8 = sym.limits_mitigation_notify;
    iVar14 = sp_el0;
    iStack_b8 = *(iVar14 + 0x5e0);
    uStack_c0 = 0;
    puStack_b0 = &stack0xffffffffffffffd0;
    uVar5 = sym.readl_relaxed(*(iVar9 + 0x20));
    puVar2 = iVar9 + 0x30;
    uVar7 = (uVar5 & 0x3ff) * 0x4b00;
    uVar5 = cpumask_next(0xffffffff,puVar2);
    *extraout_x1 = extraout_x8;
    if (uVar5 < extraout_x8) {
        iVar14 = 0;
        uVar18 = 0;
        do {
            iVar10 = get_cpu_device(uVar5);
            if (iVar10 == 0) {
                uVar15 = *puVar2;
                uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                uVar13 = 0x20;
                if (uVar15 != 0) {
                    uVar13 = LZCOUNT((uVar12 >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10) << 0x20);
                }
                _printk(0x8000474,"msm_lmh_dcvs","limits_mitigation_notify",uVar13);
                goto code_r0x08001cd4;
            }
            uStack_c0 = uVar7 * 1000;
            iVar11 = dev_pm_opp_find_freq_floor(iVar10,&uStack_c0);
            if ((iVar11 == -0x22) &&
               (uVar12 = dev_pm_opp_find_freq_ceil(iVar10,&uStack_c0), 0xfffffffffffff000 < uVar12)) {
                _dev_err(iVar10,"frequency:%lu. opp error:%ld\n",uStack_c0,uVar12);
            }
            if (iVar14 == 0x20) goto code_r0x08001d54;
            uVar12 = uStack_c0 / 1000;
            uVar19 = uVar18;
            if (uVar12 != *(iVar9 + 0xc0 + iVar14 * 8)) break;
            iVar14 = iVar14 + 1;
            uVar19 = uVar12;
            if (uVar12 <= uVar18) {
                uVar19 = uVar18;
            }
            uVar5 = cpumask_next(uVar5,puVar2);
            *extraout_x1_00 = extraout_x8_00;
            uVar12 = uVar7;
            uVar18 = uVar19;
        } while (uVar5 < extraout_x8_00);
        iVar17 = iVar14;
        uVar7 = uVar12;
    }
    else {
        iVar17 = 0;
        uVar19 = 0;
    }
    iVar6 = __sw_hweight64(*puVar2);
    uVar15 = *puVar2;
    uVar12 = uVar19;
    if (iVar17 != iVar6) {
        uVar12 = uVar7;
    }
    uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar5 = 0x20;
    if (uVar15 != 0) {
        uVar5 = LZCOUNT((uVar7 >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    if (0x1f < uVar5) {
code_r0x08001d54:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8001d58);
        (*pcVar4)();
    }
    uVar16 = *(iVar9 + 0x1c0);
    uVar15 = *(cpu_scale + *(__per_cpu_offset + uVar5 * 8));
    uVar7 = uVar15;
    if (uVar12 < uVar16) {
        uVar7 = 0;
        if (uVar16 != 0) {
            uVar7 = uVar15 / uVar16;
        }
        uVar3 = 0;
        if (uVar16 != 0) {
            uVar3 = ((uVar15 - uVar7 * uVar16) * uVar12) / uVar16;
        }
        uVar7 = uVar3 + uVar7 * uVar12;
    }
    iVar14 = 0;
    if (uVar7 <= uVar15) {
        iVar14 = uVar15 - uVar7;
    }
    topology_set_thermal_pressure(puVar2,iVar14);
    uVar7 = uVar12;
code_r0x08001cd4:
    *(iVar9 + 0x1c8) = uVar7;
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_b8) {
        __stack_chk_fail();
        *extraout_x18_00 = sym.writel_relaxed;
        log_write_mmio(0xff,0x20,extraout_x1_01,0x8001d60);
        *extraout_x1_01 = 0xff;
        uVar7 = log_post_write_mmio(0xff,0x20,extraout_x1_01,0x8001d9c);
        return uVar7;
    }
    return uVar7;
}


// ===== sym.limits_mitigation_notify @ 0x08001af4 (size 616) =====

uint64_t sym.limits_mitigation_notify(int64_t arg1)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    uint *extraout_x1_01;
    uint uVar9;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    int iVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uStack_70 = 0;
    uVar4 = sym.readl_relaxed(*(arg1 + 0x20));
    puVar1 = arg1 + 0x30;
    uVar12 = (uVar4 & 0x3ff) * 0x4b00;
    uVar4 = cpumask_next(0xffffffff,puVar1);
    *extraout_x1 = extraout_x8;
    if (uVar4 < extraout_x8) {
        iVar14 = 0;
        uVar15 = 0;
        do {
            iVar6 = get_cpu_device(uVar4);
            if (iVar6 == 0) {
                uVar10 = *puVar1;
                uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
                uVar9 = 0x20;
                if (uVar10 != 0) {
                    uVar9 = LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
                }
                _printk(0x8000474,"msm_lmh_dcvs","limits_mitigation_notify",uVar9);
                goto code_r0x08001cd4;
            }
            uStack_70 = uVar12 * 1000;
            iVar7 = dev_pm_opp_find_freq_floor(iVar6,&uStack_70);
            if ((iVar7 == -0x22) && (uVar8 = dev_pm_opp_find_freq_ceil(iVar6,&uStack_70), 0xfffffffffffff000 < uVar8))
            {
                _dev_err(iVar6,"frequency:%lu. opp error:%ld\n",uStack_70,uVar8);
            }
            if (iVar14 == 0x20) goto code_r0x08001d54;
            uVar8 = uStack_70 / 1000;
            uVar16 = uVar15;
            if (uVar8 != *(arg1 + 0xc0 + iVar14 * 8)) break;
            iVar14 = iVar14 + 1;
            uVar16 = uVar8;
            if (uVar8 <= uVar15) {
                uVar16 = uVar15;
            }
            uVar4 = cpumask_next(uVar4,puVar1);
            *extraout_x1_00 = extraout_x8_00;
            uVar8 = uVar12;
            uVar15 = uVar16;
        } while (uVar4 < extraout_x8_00);
        iVar13 = iVar14;
        uVar12 = uVar8;
    }
    else {
        iVar13 = 0;
        uVar16 = 0;
    }
    iVar5 = __sw_hweight64(*puVar1);
    uVar10 = *puVar1;
    uVar8 = uVar16;
    if (iVar13 != iVar5) {
        uVar8 = uVar12;
    }
    uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar4 = 0x20;
    if (uVar10 != 0) {
        uVar4 = LZCOUNT((uVar12 >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    if (0x1f < uVar4) {
code_r0x08001d54:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8001d58);
        (*pcVar3)();
    }
    uVar11 = *(arg1 + 0x1c0);
    uVar10 = *(cpu_scale + *(__per_cpu_offset + uVar4 * 8));
    uVar12 = uVar10;
    if (uVar8 < uVar11) {
        uVar12 = 0;
        if (uVar11 != 0) {
            uVar12 = uVar10 / uVar11;
        }
        uVar2 = 0;
        if (uVar11 != 0) {
            uVar2 = ((uVar10 - uVar12 * uVar11) * uVar8) / uVar11;
        }
        uVar12 = uVar2 + uVar12 * uVar8;
    }
    iVar14 = 0;
    if (uVar12 <= uVar10) {
        iVar14 = uVar10 - uVar12;
    }
    topology_set_thermal_pressure(puVar1,iVar14);
    uVar12 = uVar8;
code_r0x08001cd4:
    *(arg1 + 0x1c8) = uVar12;
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.writel_relaxed;
        log_write_mmio(0xff,0x20,extraout_x1_01,0x8001d60);
        *extraout_x1_01 = 0xff;
        uVar12 = log_post_write_mmio(0xff,0x20,extraout_x1_01,0x8001d9c);
        return uVar12;
    }
    return uVar12;
}


// ===== sym.writel_relaxed @ 0x08001d5c (size 112) =====

void sym.writel_relaxed(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(0xff,0x20,arg1,0x8001d60);
    *arg1 = 0xff;
    log_post_write_mmio(0xff,0x20,arg1,0x8001d9c);
    return;
}


// ===== sym.readl_relaxed @ 0x08001dcc (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001dd0);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001e04);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x08001e3c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001e80

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
    //switch table (4 cases) at 0x80001a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e94);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001ea4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.limits_dcvs_probe.7b1e68a57647800a6d568a584aee7ea4.cfi_jt,obj.__this_module);
    return;
}

