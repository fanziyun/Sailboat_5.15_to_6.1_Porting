// decompiled from qcom-pmu-lib by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 836) =====

//WARNING: Switch with 1 destination removed at 0x0800412c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2c1d832160b5d123) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (-0x53c887a672ae5244 < arg1) {
                if (arg1 == -0x53c887a672ae5243) {
                    pcVar2 = sym.qcom_pmu_hotplug_going_down.7a5e0eb402a67213725a0fb989e80142.cfi_jt;
                }
                else {
                    if (arg1 != -0x412393381b663473) goto code_r0x080040ec;
                    pcVar2 = sym.qcom_pmu_event_supported.cfi_jt;
                }
code_r0x080012f4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080040ec;
            }
            if (arg1 == -0x6977c38b1b1eb290) {
                pcVar2 = sym.qcom_pmu_idle_exit_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt;
            }
            else {
                if (arg1 != -0x5f022a407462ae94) goto code_r0x080040ec;
                pcVar2 = sym.qcom_pmu_read_local.cfi_jt;
            }
        }
        else if (arg1 < -0x558484723f05168) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.qcom_pmu_driver_remove.7a5e0eb402a67213725a0fb989e80142.cfi_jt;
                goto code_r0x080012f4;
            }
            if (arg1 != -0x248d304fa4783d12) goto code_r0x080040ec;
            pcVar2 = sym.qcom_pmu_read_all_local.cfi_jt;
        }
        else {
            if (arg1 == -0x558484723f05168) {
                pcVar2 = sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr;
                goto code_r0x08001330;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080040ec;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 < 0x4a7363fd219dda0c) {
            if (arg1 == 0x2c1d832160b5d123) {
                pcVar2 = sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr;
code_r0x08001330:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x080040ec;
            }
            if (arg1 != 0x43e4264499c863aa) goto code_r0x080040ec;
            pcVar2 = sym.qcom_pmu_read.cfi_jt;
        }
        else if (arg1 == 0x4a7363fd219dda0c) {
            pcVar2 = sym.rimps_pmu_init.cfi_jt;
        }
        else {
            if (arg1 != 0x4bbbbc3eaae0ab1f) goto code_r0x080040ec;
            pcVar2 = sym.qcom_pmu_read_all.cfi_jt;
        }
    }
    else if (arg1 < 0x78a7f3b866f1638e) {
        if (arg1 != 0x4c550309df1cf4c1) {
            if (arg1 != 0x683a7c315b569f33) goto code_r0x080040ec;
            pcVar2 = sym.qcom_pmu_idle_register.cfi_jt;
            goto code_r0x080012f4;
        }
        pcVar2 = sym.read_amu_reg.7a5e0eb402a67213725a0fb989e80142.cfi_jt;
    }
    else if (arg1 == 0x78a7f3b866f1638e) {
        pcVar2 = sym.qcom_pmu_idle_enter_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.memlat_pm_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080040ec;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080040ec:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004140);
    (*pcVar1)();
}


// ===== sym.qcom_pmu_read_all_local.cfi_jt @ 0x08001350 (size 8) =====

void sym.qcom_pmu_read_all_local.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    sym.__qcom_pmu_read_all(*(cpu_number + iVar1),param_1,1);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001358 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001360 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt);
    return;
}


// ===== sym.qcom_pmu_read.cfi_jt @ 0x08001368 (size 8) =====

void sym.qcom_pmu_read.cfi_jt(int64_t param_1,uint32_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_pmu_read(param_1,param_2,param_3,0);
    return;
}


// ===== sym.read_amu_reg.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x08001370 (size 8) =====

void sym.read_amu_reg.7a5e0eb402a67213725a0fb989e80142.cfi_jt(uint *param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    switch(*param_1) {
    case 0:
        uVar1 = UnkSytemRegRead(3,3,0xd,4,1);
        break;
    case 1:
        uVar1 = UnkSytemRegRead(3,3,0xd,4,0);
        break;
    case 2:
        uVar1 = UnkSytemRegRead(3,3,0xd,4,2);
        break;
    case 3:
        uVar1 = UnkSytemRegRead(3,3,0xd,4,3);
        break;
    default:
        _printk(0x800056d);
        return;
    }
    *(param_1 + 2) = uVar1;
    return;
}


// ===== sym.memlat_pm_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x08001378 (size 8) =====

ulong sym.memlat_pm_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt(ulong param_1,int64_t param_2)

{
    char *pcVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    code *pcVar7;
    ulong uVar8;
    bool bVar9;
    int *extraout_x8;
    int *piVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong *in_x18;
    uint64_t uVar13;
    char *pcVar14;
    int64_t iVar15;
    uint64_t *puVar16;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = _segment.ehdr;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    iVar5 = tpidr_el1;
    uVar2 = *(cpu_number + iVar5);
    if (0x1f < uVar2) {
code_r0x080038d4:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x80038d8);
        (*pcVar7)();
    }
    pcVar14 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar2 * 8));
    pcVar1 = pcVar14 + 0x150;
    uVar8 = _raw_spin_lock_irqsave(pcVar1);
    if (pcVar14[1] == '\0') {
        iVar15 = iVar15 + uVar2 * 0x28;
        if (param_2 != 2) {
            if ((*pcVar14 == '\0') && (pcVar14[2] == '\0')) {
                piVar10 = pcVar14 + 0x14c;
                Hint_Prefetch(piVar10,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar10,0x10);
                    if (bVar4) {
                        *piVar10 = *piVar10 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                bVar4 = true;
            }
            else {
                bVar4 = false;
            }
            pcVar14[2] = '\x01';
            _raw_spin_unlock_irqrestore(pcVar1,uVar8);
            if ((_segment.ehdr != 0) && (uVar11 = *(pcVar14 + 0x148), *(pcVar14 + 0x148) != 0)) {
                uVar13 = 0;
                bVar9 = false;
                do {
                    puVar16 = pcVar14 + uVar13 * 0x28 + 0x20;
                    while( true ) {
                        if (uVar13 == 9) goto code_r0x080038d4;
                        if ((((puVar16[-3] != 0) && (uVar6 = puVar16[1], uVar6 < 4 || puVar16[-2] != 0)) &&
                            (uVar2 = *(puVar16 + 0xc), uVar2 < 9)) &&
                           (reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[uVar2 * 0x10] != 0x0))
                        break;
                        uVar13 = uVar13 + 1;
                        puVar16 = puVar16 + 5;
                        if (uVar11 <= uVar13) {
                            if (!bVar9) goto code_r0x08003898;
                            goto code_r0x0800388c;
                        }
                    }
                    if (bVar4) {
                        uStack_70 = 0;
                        if (puVar16[1] < 4) {
                            switch(puVar16[1]) {
                            case 0:
                                uStack_70 = UnkSytemRegRead(3,3,0xd,4,1);
                                break;
                            case 1:
                                uStack_70 = UnkSytemRegRead(3,3,0xd,4,0);
                                break;
                            case 2:
                                uStack_70 = UnkSytemRegRead(3,3,0xd,4,2);
                                break;
                            case 3:
                                uStack_70 = UnkSytemRegRead(3,3,0xd,4,3);
                                break;
                            default:
                                _printk(0x800056d);
                                uStack_70 = 0;
                                goto code_r0x080037b0;
                            }
code_r0x080037b0:
                            *puVar16 = uStack_70;
                            puVar12 = &uStack_70;
                        }
                        else {
                            puVar12 = puVar16;
                            if (puVar16[-2] != 0) {
                                perf_event_read_local(puVar16[-2],&uStack_70,0,0);
                                goto code_r0x080037b0;
                            }
                        }
                        uVar11 = *puVar12;
                        *puVar16 = uVar11;
                    }
                    else {
                        uVar11 = *puVar16;
                    }
                    if (3 < uVar6) {
                        if (*(*(puVar16[-2] + 0x98) + 0x138) < 6) {
                            if (puVar16[-3] == 0x11) {
                                uVar11 = uVar11 | 0xffffffff80000000;
                            }
                            else {
                                uVar11 = uVar11 & 0x7fffffff | 0x80000000;
                            }
                        }
                        else {
                            uVar6 = 0x8000000000000000;
                            if (obj.pmu_long_counter == 0x0) {
                                uVar6 = 0xffffffff80000000;
                            }
                            uVar11 = uVar6 | uVar11;
                        }
                    }
                    sym.writel_relaxed(uVar11,iVar15 + uVar2 * 4);
                    uVar11 = *(pcVar14 + 0x148);
                    uVar13 = uVar13 + 1;
                    bVar9 = true;
                } while (uVar13 < uVar11);
code_r0x0800388c:
                sym.writel_relaxed(1,iVar15 + 0x24);
            }
code_r0x08003898:
            if (bVar4) {
                piVar10 = pcVar14 + 0x14c;
                goto code_r0x080038e0;
            }
            goto code_r0x08003610;
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(0,iVar15 + 0x24);
        }
        pcVar14[2] = '\0';
    }
    _raw_spin_unlock_irqrestore(pcVar1,uVar8);
code_r0x08003610:
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        piVar10 = extraout_x8;
code_r0x080038e0:
        Hint_Prefetch(piVar10,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
                *piVar10 = *piVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
    }
    return 1;
}


// ===== sym.qcom_pmu_hotplug_going_down.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x08001380 (size 8) =====

uchar * sym.qcom_pmu_hotplug_going_down.7a5e0eb402a67213725a0fb989e80142.cfi_jt(uint32_t param_1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    ulong uVar7;
    uint64_t arg1;
    uchar *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint *puVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint64_t uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = _segment.ehdr;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    if (param_1 < 0x20) {
        if (obj.qcom_pmu_inited == 0x1) {
            iVar9 = *(obj.cpu_ev_data + *(__per_cpu_offset + param_1 * 8));
            uVar7 = _raw_spin_lock_irqsave(iVar9 + 0x150);
            *(iVar9 + 1) = 1;
            _raw_spin_unlock_irqrestore(iVar9 + 0x150,uVar7);
            iVar6 = *(iVar9 + 0x14c);
            while (0 < iVar6) {
                __const_udelay(0xa7c6);
                iVar6 = *(iVar9 + 0x14c);
            }
            if (*(iVar9 + 0x148) != 0) {
                uVar11 = 0;
                iVar10 = iVar10 + param_1 * 0x28;
                bVar4 = false;
                puVar12 = iVar9 + 0x18;
                do {
                    if (uVar11 == 9) goto code_r0x080040d8;
                    if (puVar12[-4] != 0) {
                        uVar2 = puVar12[4];
                        uVar3 = puVar12[5];
                        if ((*(puVar12 + -2) != 0) || (uVar2 < 4)) {
                            uStack_70 = 0;
                            uStack_80 = 0;
                            uStack_78 = 0;
                            uStack_88 = 0;
                            if (puVar12[4] < 4) {
                                uStack_88 = puVar12[4];
                                iVar6 = smp_call_function_single
                                                  (*puVar12,sym.read_amu_reg.7a5e0eb402a67213725a0fb989e80142.cfi_jt,
                                                   &uStack_88,1);
                                arg1 = uStack_80;
                                if (iVar6 < 0) {
code_r0x08003fdc:
                                    arg1 = *(puVar12 + 2);
                                }
                            }
                            else {
                                if (*(puVar12 + -2) == 0) goto code_r0x08003fdc;
                                arg1 = perf_event_read_value(*(puVar12 + -2),&uStack_70,&uStack_78);
                            }
                            *(puVar12 + 2) = arg1;
                            if (((_segment.ehdr != 0) && (puVar12[5] < 9)) &&
                               (reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[puVar12[5] * 0x10]
                                != 0x0)) {
                                if (3 < uVar2) {
                                    if (*(*(*(puVar12 + -2) + 0x98) + 0x138) < 6) {
                                        if (puVar12[-4] == 0x11) {
                                            arg1 = arg1 | 0xffffffff80000000;
                                        }
                                        else {
                                            arg1 = arg1 & 0x7fffffff | 0x80000000;
                                        }
                                    }
                                    else {
                                        uVar1 = 0x8000000000000000;
                                        if (obj.pmu_long_counter == 0x0) {
                                            uVar1 = 0xffffffff80000000;
                                        }
                                        arg1 = uVar1 | arg1;
                                    }
                                }
                                if (9 < uVar3) goto code_r0x080040d8;
                                sym.writel_relaxed(arg1,iVar10 + uVar3 * 4);
                                bVar4 = true;
                            }
                            if (*(puVar12 + -2) != 0) {
                                perf_event_release_kernel();
                                *(puVar12 + -2) = 0;
                            }
                        }
                    }
                    uVar11 = uVar11 + 1;
                    puVar12 = puVar12 + 10;
                } while (uVar11 < *(iVar9 + 0x148));
                if (bVar4) {
                    sym.writel_relaxed(1,iVar10 + 0x24);
                }
            }
        }
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) != iStack_68) {
            auVar13 = __stack_chk_fail();
            puVar8 = auVar13._0_8_;
            *extraout_x18 = 0x80040e0;
            if (puVar8 != NULL) {
                switch(*puVar8) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar8,auVar13._8_8_,0);
                    break;
                default:
                    return puVar8;
                }
            }
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5502,0x8004140);
            (*pcVar5)();
        }
        return NULL;
    }
code_r0x080040d8:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80040dc);
    (*pcVar5)();
}


// ===== sym.qcom_pmu_hotplug_coming_up.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x08001388 (size 8) =====

void sym.qcom_pmu_hotplug_coming_up.7a5e0eb402a67213725a0fb989e80142.cfi_jt(uint32_t param_1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t *extraout_x8;
    uint64_t *puVar9;
    uint64_t uVar10;
    uint64_t extraout_x9;
    ulong *in_x18;
    uint *arg1;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint64_t auStack_60 [2];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    auStack_60[1] = *(iVar7 + 0x5e0);
    iVar7 = kmem_cache_alloc_trace(_perf_event_read_value,0xdc0,0x80);
    if (iVar7 != 0) {
        *(iVar7 + 4) = 0x80;
        *(iVar7 + 0x28) = *(iVar7 + 0x28) | 4;
    }
    iVar4 = _segment.ehdr;
    if (0x1f < param_1) {
code_r0x08003d74:
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8003d78);
        (*pcVar5)();
    }
    uVar12 = param_1;
    iVar11 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar12 * 8));
    auStack_60[0] = 0;
    if (iVar7 == 0) {
        uVar8 = 0xfffffff4;
        goto code_r0x08003e0c;
    }
    if (obj.qcom_pmu_inited != 0x1) goto code_r0x08003e00;
    if (*(iVar11 + 0x148) == 0) goto code_r0x08003d98;
    arg1 = iVar11 + 8;
    iVar6 = sym.set_event(arg1,param_1,iVar7);
    if (-1 < iVar6) {
        if (*(iVar11 + 0x148) < 2) goto code_r0x08003d98;
        arg1 = iVar11 + 0x30;
        iVar6 = sym.set_event(arg1,param_1,iVar7);
        if (-1 < iVar6) {
            if (*(iVar11 + 0x148) < 3) goto code_r0x08003d98;
            arg1 = iVar11 + 0x58;
            iVar6 = sym.set_event(arg1,param_1,iVar7);
            if (-1 < iVar6) {
                if (*(iVar11 + 0x148) < 4) goto code_r0x08003d98;
                arg1 = iVar11 + 0x80;
                iVar6 = sym.set_event(arg1,param_1,iVar7);
                if (-1 < iVar6) {
                    if (*(iVar11 + 0x148) < 5) goto code_r0x08003d98;
                    arg1 = iVar11 + 0xa8;
                    iVar6 = sym.set_event(arg1,param_1,iVar7);
                    if (-1 < iVar6) {
                        if (*(iVar11 + 0x148) < 6) goto code_r0x08003d98;
                        arg1 = iVar11 + 0xd0;
                        iVar6 = sym.set_event(arg1,param_1,iVar7);
                        if (-1 < iVar6) {
                            if (*(iVar11 + 0x148) < 7) goto code_r0x08003d98;
                            arg1 = iVar11 + 0xf8;
                            iVar6 = sym.set_event(arg1,param_1,iVar7);
                            if (-1 < iVar6) {
                                if (*(iVar11 + 0x148) < 8) goto code_r0x08003d98;
                                arg1 = iVar11 + 0x120;
                                iVar6 = sym.set_event(arg1,param_1,iVar7);
                                if (-1 < iVar6) {
                                    if (*(iVar11 + 0x148) < 9) goto code_r0x08003d98;
                                    arg1 = iVar11 + 0x148;
                                    iVar6 = sym.set_event(arg1,param_1,iVar7);
                                    if (-1 < iVar6) {
                                        if (9 < *(iVar11 + 0x148)) goto code_r0x08003d74;
                                        goto code_r0x08003d98;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    _printk(0x800067c,*arg1,param_1,iVar6);
code_r0x08003d98:
    puVar9 = auStack_60 + (param_1 >> 3 & 0x1ffffff8);
    uVar10 = 1L << (uVar12 & 0x3f);
    auStack_60[0] = 0;
    while( true ) {
        Hint_Prefetch(puVar9,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar9,0x10);
            if (bVar2) {
                *puVar9 = *puVar9 | uVar10;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        sym.configure_cpucp_map(auStack_60[0]);
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(0,iVar4 + uVar12 * 0x28 + 0x24);
        }
        uVar8 = _raw_spin_lock_irqsave(iVar11 + 0x150);
        *(iVar11 + 1) = 0;
        _raw_spin_unlock_irqrestore(iVar11 + 0x150,uVar8);
code_r0x08003e00:
        kfree(iVar7);
        uVar8 = 0;
code_r0x08003e0c:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == auStack_60[1]) break;
        __stack_chk_fail(uVar8);
        puVar9 = extraout_x8;
        uVar10 = extraout_x9;
    }
    return;
}


// ===== sym.qcom_pmu_idle_register.cfi_jt @ 0x08001390 (size 8) =====

ulong sym.qcom_pmu_idle_register.cfi_jt(int64_t *param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (*param_1 == 0)) {
        uVar4 = 0xffffffea;
    }
    else {
        _raw_spin_lock(obj.idle_list_lock);
        piVar2 = _obj.ops;
        if (_obj.idle_notif_list != obj.idle_notif_list) {
            pcVar5 = _obj.idle_notif_list;
            do {
                if (*(pcVar5 + -8) == *param_1) goto code_r0x08001d50;
                pcVar5 = *pcVar5;
            } while (pcVar5 != obj.idle_notif_list);
        }
        piVar1 = param_1 + 1;
        uVar3 = __list_add_valid(piVar1,_obj.ops,obj.idle_notif_list);
        if ((uVar3 & 1) != 0) {
            _obj.ops = piVar1;
            param_1[1] = obj.idle_notif_list;
            param_1[2] = piVar2;
            *piVar2 = piVar1;
        }
code_r0x08001d50:
        _raw_spin_unlock(obj.idle_list_lock);
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.qcom_pmu_idle_unregister.cfi_jt @ 0x08001398 (size 8) =====

uint sym.qcom_pmu_idle_unregister.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (*param_1 == 0)) {
        uVar5 = 0xffffffea;
    }
    else {
        _raw_spin_lock(obj.idle_list_lock);
        if (_obj.idle_notif_list != obj.idle_notif_list) {
            pcVar4 = _obj.idle_notif_list;
            do {
                if (*(pcVar4 + -8) == *param_1) {
                    uVar3 = __list_del_entry_valid(pcVar4);
                    if ((uVar3 & 1) != 0) {
                        iVar1 = *pcVar4;
                        piVar2 = *(pcVar4 + 8);
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    uVar5 = 0;
                    *pcVar4 = -0x2152ffffffffff00;
                    *(pcVar4 + 8) = -0x2152fffffffffede;
                    goto code_r0x08001e20;
                }
                pcVar4 = *pcVar4;
            } while (pcVar4 != obj.idle_notif_list);
        }
        uVar5 = 0xffffffea;
code_r0x08001e20:
        _raw_spin_unlock(obj.idle_list_lock);
    }
    return uVar5;
}


// ===== sym.qcom_pmu_driver_remove.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x080013a0 (size 8) =====

ulong sym.qcom_pmu_driver_remove.7a5e0eb402a67213725a0fb989e80142.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.qcom_pmu_inited = 0x0;
    sym.delete_events();
    return 0;
}


// ===== sym.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x080013a8 (size 8) =====

int sym.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt(int64_t param_1)

{
    bool bVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint32_t *in_x6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar15;
    int iVar16;
    ulong unaff_x30;
    int64_t iStack_e8;
    int64_t iStack_e0;
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
    uint uStack_88;
    uint uStack_84;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    iVar2 = param_1 + 0x10;
    uStack_88 = 0;
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
    iStack_e8 = 0;
    iStack_e0 = 0;
    if ((_segment.ehdr == 0) &&
       (iVar6 = of_property_match_string(*(param_1 + 0x300),"reg-names","pmu-base"), -1 < iVar6)) {
        iVar6 = of_address_to_resource(*(param_1 + 0x300),iVar6,&iStack_e8);
        if (iVar6 < 0) {
            _dev_err(iVar2,"failed to get resource ret %d\n",iVar6);
        }
        else {
            _segment.ehdr = devm_ioremap(iVar2,iStack_e8,(iStack_e0 - iStack_e8) + 1);
            if (_segment.ehdr != 0) {
                __memset_io(_segment.ehdr,0,(iStack_e0 - iStack_e8) + 1);
            }
        }
    }
    iVar8 = of_find_property(*(param_1 + 0x300),"qcom,ignore-llcc-setup",&uStack_88);
    if (iVar8 != 0) {
        obj.llcc_ignore_setup = 0x1;
    }
    uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x6 = extraout_w8;
    if (uVar4 < extraout_w8) {
        do {
            iVar8 = devm_kmalloc(iVar2,0x158,0xdc0);
            if (iVar8 == 0) {
                iVar6 = -0xc;
                goto code_r0x08002618;
            }
            *(iVar8 + 0x150) = 0;
            *(iVar8 + 0x14c) = 0;
            uVar11 = uStack_78;
            if (0x1f < uVar4) {
code_r0x080026a4:
                uStack_78 = uVar11;
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80026a8);
                (*pcVar3)();
            }
            *(obj.cpu_ev_data + *(__per_cpu_offset + uVar4 * 8)) = iVar8;
            uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
            *in_x6 = extraout_w8_00;
        } while (uVar4 < extraout_w8_00);
    }
    uVar15 = *(param_1 + 0x300);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    iVar8 = of_find_property(uVar15,"qcom,long-counter",&uStack_70 + 4);
    if (iVar8 != 0) {
        obj.pmu_long_counter = 0x1;
    }
    iVar8 = of_find_property(uVar15,"qcom,pmu-events-tbl",&uStack_70 + 4);
    if (iVar8 == 0) {
        iVar6 = -0x13;
    }
    else {
        uVar4 = uStack_70._4_4_;
        iVar6 = -0x16;
        if ((3 < uStack_70._4_4_) && ((uStack_70 & 0xc00000000) == 0)) {
            iVar6 = uStack_70._4_4_ >> 2;
            iVar16 = iVar6 + 3;
            if (-1 < iVar6) {
                iVar16 = iVar6;
            }
            uStack_70 = CONCAT44(iVar16 >> 2,uStack_70);
            uVar11 = uStack_78;
            if (uVar4 < 0x80) {
                if (0xf < uVar4) {
                    uVar4 = 0;
                    iVar16 = 0;
                    do {
                        iVar5 = of_property_read_u32_index(uVar15,"qcom,pmu-events-tbl",uVar4,&uStack_78 + 4);
                        iVar6 = -0x16;
                        if ((iVar5 < 0) || (uStack_78._4_4_ == 0)) goto code_r0x08002604;
                        iVar5 = of_property_read_u32_index(uVar15,"qcom,pmu-events-tbl",uVar4 | 1,&uStack_70);
                        iVar6 = -0x16;
                        if (iVar5 < 0) goto code_r0x08002604;
                        if (uStack_70 == 0) goto code_r0x08002604;
                        uStack_80 = uStack_70 & 0xffffffff;
                        iVar6 = of_property_read_u32_index(uVar15,"qcom,pmu-events-tbl",uVar4 | 2,&uStack_84);
                        uVar11 = uStack_78;
                        if ((iVar6 < 0) ||
                           (iVar6 = of_property_read_u32_index(uVar15,"qcom,pmu-events-tbl",uVar4 | 3,&uStack_78),
                           uVar11 = uStack_78, iVar6 < 0)) {
code_r0x080025f0:
                            uStack_78 = uVar11;
                            iVar6 = -0x16;
                            goto code_r0x08002604;
                        }
                        *in_x6 = 0x80005dd;
                        uVar9 = cpumask_next(0xffffffff,&uStack_80);
                        uVar7 = uVar9;
                        uVar11 = uStack_78;
                        while (uStack_78._0_4_ = uVar11, uStack_78 = uVar11, uVar7 < 0x80005dd) {
                            uVar12 = uVar9 >> 6 & 0x3ffffff;
                            uVar13 = 1L << (uVar9 & 0x3f);
                            if ((*(__cpu_possible_mask + uVar12 * 8) & uVar13) != 0) {
                                uStack_78._4_4_ = uVar11 >> 0x20;
                                if ((uStack_78._4_4_ == 0) || ((*(__cpu_possible_mask + uVar12 * 8) & uVar13) == 0))
                                goto code_r0x080025f0;
                                if (0x1f < uVar9) goto code_r0x080026a4;
                                iVar8 = *(obj.cpu_ev_data + *(__per_cpu_offset + (uVar9 & 0xffffffff) * 8));
                                if (7 < *(iVar8 + 0x148)) goto code_r0x080025f8;
                                iVar14 = iVar8 + *(iVar8 + 0x148) * 0x28;
                                *(iVar14 + 8) = uStack_78._4_4_;
                                *(iVar14 + 0x28) = uStack_84;
                                *(iVar14 + 0x2c) = uStack_78;
                                iVar6 = *(iVar8 + 0x148);
                                *in_x6 = 0x80005dd;
                                *(iVar8 + 0x148) = iVar6 + 1;
                            }
                            uVar9 = cpumask_next(uVar9,&uStack_80);
                            uVar11 = uStack_78;
                            uVar7 = uVar9;
                        }
                        uVar11 = uVar11 & 0xffffffff;
                        if (uStack_78 < 9) {
                            reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[uVar11 * 0x10] = 0x1;
                            if (0x90 < (uVar11 << 4 | 8)) {
    //WARNING: Does not return
                                pcVar3 = SoftwareBreakpoint(1,0x80026ac);
                                (*pcVar3)();
                            }
                            *(reloc.qcom_pmu_driver_remove.7a5e0eb402a67213725a0fb989e80142.cfi_jt + uVar11 * 0x10) =
                                 uStack_80;
                        }
                        uStack_70._4_4_ = uStack_70 >> 0x20;
                        iVar16 = iVar16 + 1;
                        uVar4 = uVar4 + 4;
                        bVar1 = iVar16 < uStack_70._4_4_;
                    } while (bVar1);
                }
                iVar6 = kobject_init_and_add(obj.pmu_kobj,obj.pmu_settings_ktype,_perf_event_read_local,"pmu_lib");
                if (iVar6 < 0) {
                    pcVar10 = "failed to init pmu counters kobj: %d\n";
                }
                else {
                    iVar6 = sym.setup_events();
                    if (-1 < iVar6) {
                        obj.qcom_pmu_inited = 0x1;
                        goto code_r0x08002618;
                    }
                    pcVar10 = "failed to setup all pmu/amu events: %d\n";
                }
                _dev_err(iVar2,pcVar10,iVar6);
                kobject_put(obj.pmu_kobj);
                goto code_r0x08002618;
            }
code_r0x080025f8:
            uStack_78 = uVar11;
            iVar6 = -0x1c;
        }
    }
code_r0x08002604:
    _dev_err(iVar2,"failed to initialize pmu events: %d\n",iVar6);
code_r0x08002618:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_pmu_driver_remove;
    obj.qcom_pmu_inited = 0x0;
    sym.delete_events();
    return 0;
}


// ===== sym.qcom_pmu_read_local.cfi_jt @ 0x080013b0 (size 8) =====

void sym.qcom_pmu_read_local.cfi_jt(uint32_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    sym.__qcom_pmu_read(*(cpu_number + iVar1),param_1,param_2,1);
    return;
}


// ===== sym.qcom_pmu_read_all.cfi_jt @ 0x080013b8 (size 8) =====

void sym.qcom_pmu_read_all.cfi_jt(uint32_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_pmu_read_all(param_1,param_2,0);
    return;
}


// ===== sym.qcom_pmu_idle_exit_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x080013c0 (size 8) =====

void sym.qcom_pmu_idle_exit_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    code *pcVar1;
    
    if (*(param_3 + 4) < 0x20) {
        **(obj.cpu_ev_data + *(__per_cpu_offset + *(param_3 + 4) * 8)) = 0;
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003554);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr @ 0x080013c8 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80005f1,~obj.pmu_counters_enabled & 1);
    return iVar1;
}


// ===== sym.attr_show.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x080013d0 (size 8) =====

ulong sym.attr_show.7a5e0eb402a67213725a0fb989e80142.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (2 < (pcVar2 + -0x80013c8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x8000480);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.show_enable_trace.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x080013d8 (size 8) =====

int64_t sym.show_enable_trace.7a5e0eb402a67213725a0fb989e80142.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80005f1,_segment.ehdr);
    return iVar1;
}


// ===== sym.rimps_pmu_init.cfi_jt @ 0x080013e0 (size 8) =====

void sym.rimps_pmu_init.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint *puVar5;
    uint32_t *in_x6;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t unaff_w20;
    code *pcVar11;
    ulong unaff_x30;
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
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    if ((param_1 == 0) || (*(param_1 + 0x3a0) == 0)) {
        puVar2 = 0xffffffea;
    }
    else {
        pcVar11 = *(*(param_1 + 0x3a0) + 0x10);
        __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar11,0x8000420);
        puVar2 = (*pcVar11)(param_1,0x86,obj.idle_notif_list);
        unaff_w20 = 0x8000000;
        _segment.ehdr = puVar2;
        if (puVar2 < 0xfffffffffffff001) {
            puVar2 = sym.configure_cpucp_map(___cpu_possible_mask);
            if (-1 < puVar2) {
                uStack_2c = 1;
                if ((obj.qcom_pmu_inited & 1) == 0) {
                    puVar2 = 0xfffffdfb;
                }
                else {
                    if ((_segment.ehdr == NULL) || (_segment.ehdr == NULL)) {
                        puVar2 = NULL;
                        goto code_r0x08001f38;
                    }
                    pcVar11 = _segment.ehdr[2];
                    __cfi_slowpath_diag(0x376863d1de02459b,pcVar11,0x8000460);
                    puVar2 = (*pcVar11)(_segment.ehdr,&uStack_2c);
                    if (-1 < puVar2) goto code_r0x08001f38;
                }
            }
            _segment.ehdr = NULL;
        }
    }
code_r0x08001f38:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return;
    }
    uStack_90 = __stack_chk_fail(puVar2);
    *extraout_x18 = sym.configure_cpucp_map;
    puVar2 = _segment.ehdr;
    pcStack_78 = sym.configure_cpucp_map;
    iVar6 = sp_el0;
    iStack_88 = *(iVar6 + 0x5e0);
    puStack_80 = &stack0xffffffffffffffe0;
    if (obj.qcom_pmu_inited == 0x1) {
        if (_segment.ehdr == NULL) {
            uVar4 = 0;
        }
        else {
            *in_x6 = unaff_w20;
            uStack_a0 = 0xffffffffffffffff;
            uStack_98 = 0xffffffffffffffff;
            uStack_b0 = 0xffffffffffffffff;
            uStack_a8 = 0xffffffffffffffff;
            uStack_c0 = 0xffffffffffffffff;
            uStack_b8 = 0xffffffffffffffff;
            uStack_d0 = 0xffffffffffffffff;
            uStack_c8 = 0xffffffffffffffff;
            uStack_d8 = 0xffffffffffffffff;
            uVar1 = cpumask_next(0xffffffff,&uStack_90);
            while (uVar1 < unaff_w20) {
                if (0x1f < uVar1) {
code_r0x08002160:
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x5512,0x8002164);
                    (*pcVar11)();
                }
                uVar3 = uVar1;
                iVar6 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar3 * 8));
                uVar9 = *(iVar6 + 0x148);
                if (uVar9 != 0) {
                    uVar7 = 0;
                    puVar8 = iVar6 + 0x2c;
                    do {
                        if (uVar7 == 9) goto code_r0x08002160;
                        uVar10 = *puVar8;
                        if ((((*puVar8 < 9) &&
                             (reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[uVar10 * 0x10] != 0x0)
                             ) && (3 < puVar8[-1])) &&
                           ((*(puVar8 + -7) != 0 &&
                            ((*(reloc.qcom_pmu_driver_remove.7a5e0eb402a67213725a0fb989e80142.cfi_jt + uVar10 * 0x10) &
                             1L << (uVar3 & 0x3f)) != 0)))) {
                            if (7 < uVar1) goto code_r0x08002160;
                            if (0x47 < uVar3 * 9 + uVar10) {
    //WARNING: Does not return
                                pcVar11 = SoftwareBreakpoint(1,0x8002168);
                                (*pcVar11)();
                            }
                            *(&uStack_d8 + uVar10 + uVar3 * 9) = *(*(puVar8 + -7) + 0x184);
                            uVar9 = *(iVar6 + 0x148);
                        }
                        uVar7 = uVar7 + 1;
                        puVar8 = puVar8 + 10;
                    } while (uVar7 < uVar9);
                }
                uVar1 = cpumask_next(uVar3,&uStack_90);
            }
            pcVar11 = *puVar2;
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar11,0x8000440);
            uVar4 = (*pcVar11)(_segment.ehdr,&uStack_d8);
        }
    }
    else {
        uVar4 = 0xfffffdfb;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_88) {
        puVar5 = __stack_chk_fail(uVar4);
        *extraout_x18_00 = sym.read_amu_reg;
        switch(*puVar5) {
        case 0:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,1);
            break;
        case 1:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,0);
            break;
        case 2:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,2);
            break;
        case 3:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,3);
            break;
        default:
            _printk(0x800056d);
            return;
        }
        *(puVar5 + 2) = uVar4;
        return;
    }
    return;
}


// ===== sym.qcom_pmu_event_supported.cfi_jt @ 0x080013e8 (size 8) =====

uint sym.qcom_pmu_event_supported.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.get_event(param_1,param_2);
    uVar1 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.qcom_get_cpucp_id.cfi_jt @ 0x080013f0 (size 8) =====

uint64_t sym.qcom_get_cpucp_id.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.get_event(param_1,param_2);
    if (uVar1 < 0xfffffffffffff001) {
        uVar1 = *(uVar1 + 0x24);
    }
    else {
        _printk(0x8000748,uVar1);
    }
    return uVar1 & 0xffffffff;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr @ 0x080013f8 (size 8) =====

ulong sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr
                (ulong param_1,int64_t param_2,ulong param_3,ulong param_4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (2 < (pcVar2 + -0x80013f8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x80004a0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.store_enable_counters.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x08001400 (size 8) =====

ushort * sym.store_enable_counters.7a5e0eb402a67213725a0fb989e80142.cfi_jt
                   (ulong param_1,ulong param_2,ulong param_3,ushort *param_4,ulong param_5,int64_t *param_6,
                   uint *param_7)

{
    uint64_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t arg1;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    ushort *puVar14;
    ulong unaff_x30;
    uint64_t uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uVar7 = sysfs_streq(param_3,"BEEFDEAD");
    if ((uVar7 & 1) == 0) {
        uVar7 = sysfs_streq(param_3,"DEADBEEF");
        if ((((uVar7 & 1) != 0) && (obj.qcom_pmu_inited == 0x1)) && ((obj.pmu_counters_enabled & 1) == 0)) {
            uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *param_7 = 0x8019000;
            if (uVar6 < 0x8019000) {
code_r0x08002dac:
                if (0x1f < uVar6) {
code_r0x08002f6c:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x8002f70);
                    (*pcVar4)();
                }
                uVar7 = uVar6;
                iVar11 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar7 * 8));
                if (*(iVar11 + 0x148) != 0) {
                    uVar12 = 0;
                    bVar3 = false;
                    iVar9 = CONCAT44(*0x8000004,_segment.ehdr) + uVar7 * 0x28;
code_r0x08002df4:
                    puVar10 = iVar11 + 0x2c + uVar12 * 0x28;
                    do {
                        uVar12 = uVar12 + 1;
                        if (uVar12 == 10) goto code_r0x08002f6c;
                        if (puVar10[-9] != 0) {
                            uVar6 = puVar10[-1];
                            uVar2 = *puVar10;
                            if ((*(puVar10 + -7) != 0) || (uVar6 < 4)) {
                                uStack_78 = 0;
                                uStack_70 = 0;
                                uStack_88 = 0;
                                uStack_80 = 0;
                                if (puVar10[-1] < 4) {
                                    uStack_88 = puVar10[-1];
                                    iVar5 = smp_call_function_single
                                                      (puVar10[-5],
                                                       sym.read_amu_reg.7a5e0eb402a67213725a0fb989e80142.cfi_jt,
                                                       &uStack_88,1);
                                    uVar8 = uStack_80;
                                    if (-1 < iVar5) {
code_r0x08002e8c:
                                        *(puVar10 + -3) = uVar8;
                                    }
                                }
                                else if (*(puVar10 + -7) != 0) {
                                    uVar8 = perf_event_read_value(*(puVar10 + -7),&uStack_70,&uStack_78);
                                    goto code_r0x08002e8c;
                                }
                                if (((CONCAT44(*0x8000004,_segment.ehdr) != 0) && (*puVar10 < 9)) &&
                                   (reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[*puVar10 * 0x10]
                                    != 0x0)) goto code_r0x08002eb8;
                            }
                        }
                        puVar10 = puVar10 + 10;
                        if (*(iVar11 + 0x148) <= uVar12) {
                            if (!bVar3) break;
                            goto code_r0x08002d7c;
                        }
                    } while( true );
                }
                goto code_r0x08002d8c;
            }
code_r0x08002f48:
            sym.delete_events();
            _printk(0x80006ea);
            obj.pmu_counters_enabled = 0x1;
        }
    }
    else if (obj.pmu_counters_enabled == 0x1) {
        iVar5 = sym.setup_events();
        if (iVar5 < 0) {
            _printk(0x8000652,iVar5);
        }
        else {
            sym.configure_cpucp_map(___cpu_possible_mask);
            obj.pmu_counters_enabled = 0x0;
            _printk(0x8000829);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.delete_events;
    if (0 < _segment.ehdr) {
        __cpuhp_remove_state(_segment.ehdr,0);
    }
    tracepoint_probe_unregister
              (__tracepoint_android_vh_cpu_idle_enter,
               sym.qcom_pmu_idle_enter_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_cpu_idle_exit,
               sym.qcom_pmu_idle_exit_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt,0);
    cpu_pm_unregister_notifier(reloc.memlat_pm_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt);
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *param_6 = param_4;
    if (uVar6 < param_4) {
        do {
            if (0x1f < uVar6) goto code_r0x08003174;
            puVar14 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar6 * 8));
            param_4 = puVar14 + 0xa8;
            uVar8 = _raw_spin_lock_irqsave(param_4);
            *puVar14 = 0x101;
            *(puVar14 + 1) = 1;
            _raw_spin_unlock_irqrestore(param_4,uVar8);
            uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            *param_6 = param_4;
        } while (uVar6 < param_4);
    }
    puVar14 = cpumask_next(0xffffffff,__cpu_possible_mask);
    if (puVar14 < param_4) {
        do {
            if (0x1f < puVar14) {
code_r0x08003174:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8003178);
                (*pcVar4)();
            }
            iVar11 = *(obj.cpu_ev_data + *(__per_cpu_offset + (puVar14 & 0xffffffff) * 8));
            iVar5 = *(iVar11 + 0x14c);
            while (0 < iVar5) {
                __const_udelay(0xa7c6);
                iVar5 = *(iVar11 + 0x14c);
            }
            uVar7 = *(iVar11 + 0x148);
            if (*(iVar11 + 0x148) != 0) {
                uVar12 = 0;
                piVar13 = iVar11 + 0x10;
                do {
                    if (uVar12 == 9) goto code_r0x08003174;
                    if ((piVar13[-1] != 0) && (*piVar13 != 0)) {
                        perf_event_release_kernel();
                        *piVar13 = 0;
                        uVar7 = *(iVar11 + 0x148);
                    }
                    uVar12 = uVar12 + 1;
                    piVar13 = piVar13 + 5;
                } while (uVar12 < uVar7);
            }
            *param_6 = iVar11;
            puVar14 = cpumask_next(puVar14 & 0xffffffff,__cpu_possible_mask);
        } while (puVar14 < iVar11);
    }
    return puVar14;
code_r0x08002eb8:
    arg1 = *(puVar10 + -3);
    if (3 < uVar6) {
        if (*(*(*(puVar10 + -7) + 0x98) + 0x138) < 6) {
            if (puVar10[-9] == 0x11) {
                arg1 = arg1 | 0xffffffff80000000;
            }
            else {
                arg1 = arg1 & 0x7fffffff | 0x80000000;
            }
        }
        else {
            uVar1 = 0x8000000000000000;
            if (obj.pmu_long_counter == 0x0) {
                uVar1 = 0xffffffff80000000;
            }
            arg1 = uVar1 | arg1;
        }
    }
    if (9 < uVar2) goto code_r0x08002f6c;
    sym.writel_relaxed(arg1,iVar9 + uVar2 * 4);
    bVar3 = true;
    if (*(iVar11 + 0x148) <= uVar12) goto code_r0x08002d7c;
    goto code_r0x08002df4;
code_r0x08002d7c:
    sym.writel_relaxed(1,iVar9 + 0x24);
code_r0x08002d8c:
    uVar6 = cpumask_next(uVar7,__cpu_possible_mask);
    *param_7 = 0x8019000;
    if (0x8018fff < uVar6) goto code_r0x08002f48;
    goto code_r0x08002dac;
}


// ===== sym.store_enable_trace.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x08001408 (size 8) =====

uint64_t sym.store_enable_trace.7a5e0eb402a67213725a0fb989e80142.cfi_jt
                   (ulong param_1,ulong param_2,uint *param_3,uint64_t param_4)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    ulong uVar8;
    uint *puVar9;
    uint64_t *extraout_x8;
    uint64_t *puVar10;
    uint64_t extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint64_t auStack_d0 [2];
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uint uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_2c = 0;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        param_4 = 0xffffffffffffffed;
    }
    else {
        puVar9 = &uStack_2c;
        iVar5 = kstrtouint(param_3,10);
        if (-1 < iVar5) {
            puVar9 = 0x80004e0;
            pcVar11 = *(CONCAT44(*0x8000004,_segment.ehdr) + 8);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar11);
            iVar5 = (*pcVar11)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_2c);
            if (-1 < iVar5) {
                _segment.ehdr = uStack_2c;
                param_3 = puVar9;
                goto code_r0x08003a10;
            }
        }
        param_4 = iVar5;
        param_3 = puVar9;
    }
code_r0x08003a10:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return param_4;
    }
    auVar15 = __stack_chk_fail();
    puVar6 = auVar15._0_8_;
    *extraout_x18 = sym.set_event;
    pcStack_58 = sym.set_event;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_6c = 4;
    puStack_60 = &stack0xffffffffffffffe0;
    if (puVar6[8] < 4) {
code_r0x08003a88:
        uVar12 = 0;
        puVar6[4] = auVar15._8_4_;
    }
    else {
        puVar6[8] = 4;
        if (8 < puVar6[9]) {
            puVar6[9] = 9;
        }
        if (*puVar6 == 0) {
            uVar12 = 0;
        }
        else {
            *(param_3 + 2) = *puVar6;
            if (obj.pmu_long_counter == 0x1) {
                *(param_3 + 0xe) = 1;
            }
            if (*puVar6 == 0x1000) {
                if ((obj.llcc_ignore_setup & 1) != 0) goto code_r0x08003a88;
                uVar12 = qcom_llcc_pmu_hw_type(&uStack_6c);
                if (uVar12 < 0) {
                    uVar12 = uVar12 & 0xffffffff;
                    goto code_r0x08003b48;
                }
            }
            *param_3 = uStack_6c;
            uVar12 = perf_event_create_kernel_counter(param_3,auVar15._8_8_ & 0xffffffff,0,0,0);
            if (uVar12 < 0xfffffffffffff001) {
                perf_event_enable(uVar12);
                *(puVar6 + 2) = uVar12;
                goto code_r0x08003a88;
            }
        }
    }
code_r0x08003b48:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar12 & 0xffffffff;
    }
    uVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.qcom_pmu_hotplug_coming_up;
    pcStack_b8 = sym.qcom_pmu_hotplug_coming_up;
    iVar7 = sp_el0;
    auStack_d0[1] = *(iVar7 + 0x5e0);
    ppuStack_c0 = &puStack_60;
    iVar7 = kmem_cache_alloc_trace(_perf_event_read_value,0xdc0,0x80);
    if (iVar7 != 0) {
        *(iVar7 + 4) = 0x80;
        *(iVar7 + 0x28) = *(iVar7 + 0x28) | 4;
    }
    if (0x1f < uVar12) {
code_r0x08003d74:
    //WARNING: Does not return
        pcVar11 = SoftwareBreakpoint(0x5512,0x8003d78);
        (*pcVar11)();
    }
    uVar14 = uVar12 & 0xffffffff;
    iVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    iVar13 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar14 * 8));
    auStack_d0[0] = 0;
    if (iVar7 == 0) {
        uVar12 = 0xfffffff4;
        goto code_r0x08003e0c;
    }
    if (obj.qcom_pmu_inited != 0x1) goto code_r0x08003e00;
    if (*(iVar13 + 0x148) == 0) goto code_r0x08003d98;
    puVar9 = iVar13 + 8;
    iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
    if (-1 < iVar5) {
        if (*(iVar13 + 0x148) < 2) goto code_r0x08003d98;
        puVar9 = iVar13 + 0x30;
        iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
        if (-1 < iVar5) {
            if (*(iVar13 + 0x148) < 3) goto code_r0x08003d98;
            puVar9 = iVar13 + 0x58;
            iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
            if (-1 < iVar5) {
                if (*(iVar13 + 0x148) < 4) goto code_r0x08003d98;
                puVar9 = iVar13 + 0x80;
                iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                if (-1 < iVar5) {
                    if (*(iVar13 + 0x148) < 5) goto code_r0x08003d98;
                    puVar9 = iVar13 + 0xa8;
                    iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                    if (-1 < iVar5) {
                        if (*(iVar13 + 0x148) < 6) goto code_r0x08003d98;
                        puVar9 = iVar13 + 0xd0;
                        iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                        if (-1 < iVar5) {
                            if (*(iVar13 + 0x148) < 7) goto code_r0x08003d98;
                            puVar9 = iVar13 + 0xf8;
                            iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                            if (-1 < iVar5) {
                                if (*(iVar13 + 0x148) < 8) goto code_r0x08003d98;
                                puVar9 = iVar13 + 0x120;
                                iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                                if (-1 < iVar5) {
                                    if (*(iVar13 + 0x148) < 9) goto code_r0x08003d98;
                                    puVar9 = iVar13 + 0x148;
                                    iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                                    if (-1 < iVar5) {
                                        if (9 < *(iVar13 + 0x148)) goto code_r0x08003d74;
                                        goto code_r0x08003d98;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    _printk(0x800067c,*puVar9,uVar12 & 0xffffffff,iVar5);
code_r0x08003d98:
    puVar10 = auStack_d0 + (uVar14 >> 3 & 0x1ffffff8);
    uVar12 = 1L << (uVar12 & 0x3f);
    auStack_d0[0] = 0;
    while( true ) {
        Hint_Prefetch(puVar10,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar10,0x10);
            if (bVar2) {
                *puVar10 = *puVar10 | uVar12;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        sym.configure_cpucp_map(auStack_d0[0]);
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.writel_relaxed(0,iVar4 + uVar14 * 0x28 + 0x24);
        }
        uVar8 = _raw_spin_lock_irqsave(iVar13 + 0x150);
        *(iVar13 + 1) = 0;
        _raw_spin_unlock_irqrestore(iVar13 + 0x150,uVar8);
code_r0x08003e00:
        kfree(iVar7);
        uVar12 = 0;
code_r0x08003e0c:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == auStack_d0[1]) break;
        __stack_chk_fail(uVar12);
        puVar10 = extraout_x8;
        uVar12 = extraout_x9;
    }
    return uVar12;
}


// ===== sym.qcom_pmu_idle_enter_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt @ 0x08001410 (size 8) =====

void sym.qcom_pmu_idle_enter_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt
               (ulong param_1,uint *param_2,int64_t param_3)

{
    char cVar1;
    bool bVar2;
    code *pcVar3;
    ulong uVar4;
    ulong extraout_x1;
    uint64_t uVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    code *pcVar8;
    code *unaff_x23;
    uint32_t uVar9;
    uint64_t uVar10;
    code *pcVar11;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong auStack_b0 [8];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    if (0x1f < *(param_3 + 4)) {
code_r0x080034c4:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80034c8);
        (*pcVar3)();
    }
    pcVar8 = *(obj.cpu_ev_data + *(__per_cpu_offset + *(param_3 + 4) * 8));
    auStack_b0[7] = 0;
    uStack_70 = 0;
    auStack_b0[5] = 0;
    auStack_b0[6] = 0;
    auStack_b0[3] = 0;
    auStack_b0[4] = 0;
    auStack_b0[1] = 0;
    auStack_b0[2] = 0;
    pcVar3 = pcVar8 + 0x150;
    uStack_b8 = 0;
    auStack_b0[0] = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uVar4 = _raw_spin_lock_irqsave(pcVar3);
    if (((*pcVar8 == 0x0) && (pcVar8[1] == 0x0)) && (pcVar8[2] == 0x0)) {
        unaff_x23 = pcVar8 + 0x14c;
        *pcVar8 = 0x1;
        goto code_r0x080034d4;
    }
    _raw_spin_unlock_irqrestore(pcVar3,uVar4);
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
        uVar4 = extraout_x1;
code_r0x080034d4:
        Hint_Prefetch(unaff_x23,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar2) {
                *unaff_x23 = *unaff_x23 + 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        _raw_spin_unlock_irqrestore(pcVar3,uVar4);
        uVar5 = *(pcVar8 + 0x148);
        if (*(pcVar8 + 0x148) == 0) {
            uVar9 = 0;
        }
        else {
            uVar10 = 0;
            uVar9 = 0;
            pcVar11 = pcVar8 + 0x20;
            pcVar3 = 0x800056d;
            do {
                if (uVar10 == 9) goto code_r0x080034c4;
                if ((*(pcVar11 + -0x18) != 0) && ((*(pcVar11 + -0x10) != 0 || (*(pcVar11 + 8) < 4)))) {
                    uStack_d8 = 0;
                    if (*(pcVar11 + 8) < 4) {
                        switch(*(pcVar11 + 8)) {
                        case 0:
                            uStack_d8 = UnkSytemRegRead(3,3,0xd,4,1);
                            break;
                        case 1:
                            uStack_d8 = UnkSytemRegRead(3,3,0xd,4,0);
                            break;
                        case 2:
                            uStack_d8 = UnkSytemRegRead(3,3,0xd,4,2);
                            break;
                        case 3:
                            uStack_d8 = UnkSytemRegRead(3,3,0xd,4,3);
                            break;
                        default:
                            _printk(0x800056d);
                            uStack_d8 = 0;
                            goto code_r0x080033e0;
                        }
code_r0x080033e0:
                        *pcVar11 = uStack_d8;
                        pcVar7 = &uStack_d8;
                    }
                    else {
                        pcVar7 = pcVar11;
                        if (*(pcVar11 + -0x10) != 0) {
                            perf_event_read_local(*(pcVar11 + -0x10),&uStack_d8,0,0);
                            goto code_r0x080033e0;
                        }
                    }
                    *pcVar11 = *pcVar7;
                    if (7 < uVar9) goto code_r0x080034c4;
                    iVar6 = uVar9;
                    if ((0x68 < iVar6 * 4) ||
                       (*(&uStack_d0 + iVar6 * 4) = *(pcVar11 + -0x18), iVar6 * 8 - 0x49U < 0xffffffffffffff97)) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(1,0x80034cc);
                        (*pcVar3)();
                    }
                    uVar9 = uVar9 + 1;
                    auStack_b0[iVar6] = *pcVar11;
                    uVar5 = *(pcVar8 + 0x148);
                }
                uVar10 = uVar10 + 1;
                pcVar11 = pcVar11 + 0x28;
            } while (uVar10 < uVar5);
        }
        Hint_Prefetch(unaff_x23,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar2) {
                *unaff_x23 = *unaff_x23 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
        unaff_x23 = obj.idle_notif_list;
        if (_obj.idle_notif_list != obj.idle_notif_list) {
            pcVar3 = 0x80004c0;
            pcVar11 = _obj.idle_notif_list;
            do {
                pcVar8 = *(pcVar11 + -8);
                __cfi_slowpath_diag(0xa8991008362e5e88,pcVar8,0x80004c0);
                (*pcVar8)(&uStack_d0,*(param_3 + 4),*param_2);
                pcVar11 = *pcVar11;
            } while (pcVar11 != obj.idle_notif_list);
        }
    } while( true );
}


// ===== sym.__qcom_pmu_read_all @ 0x08001418 (size 480) =====

ulong sym.__qcom_pmu_read_all(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    ulong uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    char *pcVar9;
    uint64_t uVar10;
    char *pcVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.qcom_pmu_inited == 0x1) {
        if ((arg2 == 0) || ((*(__cpu_possible_mask + (arg1 >> 6) * 8) >> (arg1 & 0x3f) & 1) == 0)) {
            uVar6 = 0xffffffea;
        }
        else {
            if (0x1f < arg1) {
code_r0x080015a8:
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x80015ac);
                (*pcVar5)();
            }
            pcVar9 = *(obj.cpu_ev_data + *(__per_cpu_offset + arg1 * 8));
            uVar6 = _raw_spin_lock_irqsave(pcVar9 + 0x150,arg2,arg3);
            if (((pcVar9[1] == '\0') && (*pcVar9 == '\0')) && (pcVar9[2] == '\0')) {
                piVar1 = pcVar9 + 0x14c;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                        *piVar1 = *piVar1 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                bVar4 = false;
            }
            else {
                bVar4 = true;
            }
            _raw_spin_unlock_irqrestore(pcVar9 + 0x150,uVar6);
            uVar7 = *(pcVar9 + 0x148);
            if (uVar7 == 0) {
                uVar8 = 0;
            }
            else {
                uVar10 = 0;
                uVar8 = 0;
                pcVar11 = pcVar9 + 0x20;
                do {
                    if (uVar10 == 9) goto code_r0x080015a8;
                    iVar2 = *(pcVar11 + -0x18);
                    if (iVar2 != 0) {
                        if (7 < uVar8) goto code_r0x080015a8;
                        iVar12 = uVar8;
                        *(arg2 + iVar12 * 4) = iVar2;
                        if (bVar4) {
                            uVar6 = *pcVar11;
                        }
                        else {
                            uVar6 = sym.read_event(pcVar11 + -0x18);
                        }
                        uVar8 = uVar8 + 1;
                        *(arg2 + iVar12 * 8 + 0x20) = uVar6;
                        uVar7 = *(pcVar9 + 0x148);
                    }
                    uVar10 = uVar10 + 1;
                    pcVar11 = pcVar11 + 0x28;
                } while (uVar10 < uVar7);
            }
            *(arg2 + 0x60) = uVar8;
            if (!bVar4) {
                piVar1 = pcVar9 + 0x14c;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                        *piVar1 = *piVar1 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            uVar6 = 0;
        }
    }
    else {
        uVar6 = 0xffffffed;
    }
    return uVar6;
}


// ===== sym.read_event @ 0x080015f8 (size 336) =====

uint64_t sym.read_event(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t in_x1;
    uint64_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [12];
    uint64_t uStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uVar1 = *(arg1 + 0x20);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (uVar1 < 4) {
        uStack_50 = uVar1;
        if ((in_x1 & 1) == 0) {
            iVar2 = smp_call_function_single
                              (*(arg1 + 0x10),sym.read_amu_reg.7a5e0eb402a67213725a0fb989e80142.cfi_jt,
                               &stack0xffffffffffffffb0,1);
            uVar4 = uStack_48;
            if (iVar2 < 0) goto code_r0x080016b4;
        }
        else {
            if (3 < uVar1) {
                _printk(0x800056d,uVar1);
                uStack_40 = 0;
                goto code_r0x080016f0;
            }
    //switch table (3 cases) at 0x8000500
            switch(*(uVar1 * 4 + 0x8000500) + 0x8001650) {
            case 0x8001664:
                uVar4 = UnkSytemRegRead(3,3,0xd,4,1);
                break;
            case 0x80016d0:
                uVar4 = UnkSytemRegRead(3,3,0xd,4,0);
                break;
            case 0x80016dc:
                uVar4 = UnkSytemRegRead(3,3,0xd,4,2);
                break;
            case 0x80016e8:
                uVar4 = UnkSytemRegRead(3,3,0xd,4,3);
            }
        }
code_r0x080016ec:
        uStack_40 = uVar4;
    }
    else {
        iVar3 = *(arg1 + 8);
        if (iVar3 == 0) {
code_r0x080016b4:
            puVar5 = arg1 + 0x18;
            goto code_r0x080016f8;
        }
        if ((in_x1 & 1) == 0) {
            uVar4 = perf_event_read_value(iVar3,&stack0xffffffffffffffd0,&stack0xffffffffffffffc8);
            goto code_r0x080016ec;
        }
        perf_event_read_local(iVar3,&stack0xffffffffffffffc0,0,0);
    }
code_r0x080016f0:
    puVar5 = &stack0xffffffffffffffc0;
    *(arg1 + 0x18) = uStack_40;
code_r0x080016f8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail(*puVar5);
        *extraout_x18 = sym.qcom_get_cpucp_id;
        uVar4 = sym.get_event(auVar6._0_8_,auVar6._8_4_);
        if (uVar4 < 0xfffffffffffff001) {
            uVar4 = *(uVar4 + 0x24);
        }
        else {
            _printk(0x8000748,uVar4);
        }
        return uVar4 & 0xffffffff;
    }
    return *puVar5;
}


// ===== sym.qcom_get_cpucp_id @ 0x08001748 (size 84) =====

uint64_t sym.qcom_get_cpucp_id(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.get_event(arg1,arg2);
    if (uVar1 < 0xfffffffffffff001) {
        uVar1 = *(uVar1 + 0x24);
    }
    else {
        _printk(0x8000748,uVar1);
    }
    return uVar1 & 0xffffffff;
}


// ===== sym.get_event @ 0x0800179c (size 360) =====

int * sym.get_event(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int iVar2;
    code *pcVar3;
    int64_t iVar4;
    
    if (obj.qcom_pmu_inited != 0x1) {
        return 0xfffffffffffffdfb;
    }
    iVar2 = arg1;
    if ((iVar2 == 0) || ((*(__cpu_possible_mask + (arg2 >> 6) * 8) >> (arg2 & 0x3f) & 1) == 0)) {
        return 0xffffffffffffffea;
    }
    if (arg2 < 0x20) {
        iVar4 = *(obj.cpu_ev_data + *(__per_cpu_offset + arg2 * 8));
        iVar1 = *(iVar4 + 0x148);
        if (iVar1 != 0) {
            if (*(iVar4 + 8) == iVar2) {
                return iVar4 + 8;
            }
            if (iVar1 != 1) {
                if (*(iVar4 + 0x30) == iVar2) {
                    return iVar4 + 0x30;
                }
                if (iVar1 != 2) {
                    if (*(iVar4 + 0x58) == iVar2) {
                        return iVar4 + 0x58;
                    }
                    if (iVar1 != 3) {
                        if (*(iVar4 + 0x80) == iVar2) {
                            return iVar4 + 0x80;
                        }
                        if (iVar1 != 4) {
                            if (*(iVar4 + 0xa8) == iVar2) {
                                return iVar4 + 0xa8;
                            }
                            if (iVar1 != 5) {
                                if (*(iVar4 + 0xd0) == iVar2) {
                                    return iVar4 + 0xd0;
                                }
                                if (iVar1 != 6) {
                                    if (*(iVar4 + 0xf8) == iVar2) {
                                        return iVar4 + 0xf8;
                                    }
                                    if (iVar1 != 7) {
                                        if (*(iVar4 + 0x120) == iVar2) {
                                            return iVar4 + 0x120;
                                        }
                                        if (iVar1 != 8) {
                                            if (iVar1 == iVar2) {
                                                return iVar4 + 0x148;
                                            }
                                            if (iVar1 != 9) goto code_r0x08001900;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return 0xfffffffffffffffe;
    }
code_r0x08001900:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001904);
    (*pcVar3)();
}


// ===== sym.qcom_pmu_event_supported @ 0x08001904 (size 44) =====

uint sym.qcom_pmu_event_supported(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.get_event(arg1,arg2);
    uVar1 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.qcom_pmu_read @ 0x08001930 (size 40) =====

void sym.qcom_pmu_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_pmu_read(arg1,arg2,arg3,0);
    return;
}


// ===== sym.__qcom_pmu_read @ 0x08001958 (size 696) =====

ulong sym.__qcom_pmu_read(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    uint32_t *arg1_00;
    char *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.qcom_pmu_inited != 0x1) {
        return 0xffffffed;
    }
    if (arg2 == 0) {
        return 0xffffffea;
    }
    if (arg3 == 0) {
        return 0xffffffea;
    }
    if ((*(__cpu_possible_mask + ((arg1 & 0xffffffffU) >> 6) * 8) >> (arg1 & 0x3fU) & 1) == 0) {
        return 0xffffffea;
    }
    if (arg1 < 0x20) {
        pcVar9 = *(obj.cpu_ev_data + *(__per_cpu_offset + (arg1 & 0xffffffffU) * 8));
        uVar3 = *(pcVar9 + 0x148);
        if (uVar3 == 0) {
            uVar8 = 0;
            arg1_00 = NULL;
        }
        else {
            arg1_00 = pcVar9 + 8;
            if (*arg1_00 == arg2) {
                uVar8 = 0;
            }
            else {
                if (uVar3 == 1) {
                    return 0xfffffffe;
                }
                arg1_00 = pcVar9 + 0x30;
                if (*arg1_00 == arg2) {
                    uVar8 = 1;
                }
                else {
                    if (uVar3 == 2) {
                        return 0xfffffffe;
                    }
                    arg1_00 = pcVar9 + 0x58;
                    if (*arg1_00 == arg2) {
                        uVar8 = 2;
                    }
                    else {
                        if (uVar3 == 3) {
                            return 0xfffffffe;
                        }
                        arg1_00 = pcVar9 + 0x80;
                        if (*arg1_00 == arg2) {
                            uVar8 = 3;
                        }
                        else {
                            if (uVar3 == 4) {
                                return 0xfffffffe;
                            }
                            arg1_00 = pcVar9 + 0xa8;
                            if (*arg1_00 == arg2) {
                                uVar8 = 4;
                            }
                            else {
                                if (uVar3 == 5) {
                                    return 0xfffffffe;
                                }
                                arg1_00 = pcVar9 + 0xd0;
                                if (*arg1_00 == arg2) {
                                    uVar8 = 5;
                                }
                                else {
                                    if (uVar3 == 6) {
                                        return 0xfffffffe;
                                    }
                                    arg1_00 = pcVar9 + 0xf8;
                                    if (*arg1_00 == arg2) {
                                        uVar8 = 6;
                                    }
                                    else {
                                        if (uVar3 == 7) {
                                            return 0xfffffffe;
                                        }
                                        if (*(pcVar9 + 0x120) == arg2) {
                                            arg1_00 = pcVar9 + 0x120;
                                            uVar8 = 7;
                                        }
                                        else {
                                            if (uVar3 == 8) {
                                                return 0xfffffffe;
                                            }
                                            if (uVar3 != arg2) {
                                                if (uVar3 == 9) {
                                                    return 0xfffffffe;
                                                }
                                                goto code_r0x08001bc0;
                                            }
                                            arg1_00 = pcVar9 + 0x148;
                                            uVar8 = 8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (uVar8 == uVar3) {
            return 0xfffffffe;
        }
        pcVar1 = pcVar9 + 0x150;
        uVar7 = _raw_spin_lock_irqsave(pcVar1,arg2,arg3,arg4);
        if (((pcVar9[1] == '\0') && (*pcVar9 == '\0')) && (pcVar9[2] == '\0')) {
            piVar2 = pcVar9 + 0x14c;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                    *piVar2 = *piVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            _raw_spin_unlock_irqrestore(pcVar1,uVar7);
            uVar7 = sym.read_event(arg1_00);
            *arg3 = uVar7;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                    *piVar2 = *piVar2 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            return 0;
        }
        _raw_spin_unlock_irqrestore(pcVar1,uVar7);
        *arg3 = *(arg1_00 + 6);
        return 0;
    }
code_r0x08001bc0:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8001bc4);
    (*pcVar6)();
}


// ===== sym.qcom_pmu_read_local @ 0x08001c10 (size 68) =====

void sym.qcom_pmu_read_local(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    sym.__qcom_pmu_read(*(cpu_number + iVar1),arg1,arg2,1);
    return;
}


// ===== sym.qcom_pmu_read_all @ 0x08001c58 (size 40) =====

void sym.qcom_pmu_read_all(int64_t arg1)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_pmu_read_all(arg1,in_x1,0);
    return;
}


// ===== sym.qcom_pmu_read_all_local @ 0x08001c80 (size 64) =====

void sym.qcom_pmu_read_all_local(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    sym.__qcom_pmu_read_all(*(cpu_number + iVar1),arg1,1);
    return;
}


// ===== sym.qcom_pmu_idle_register @ 0x08001cc4 (size 188) =====

ulong sym.qcom_pmu_idle_register(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*arg1 == 0)) {
        uVar4 = 0xffffffea;
    }
    else {
        _raw_spin_lock(obj.idle_list_lock);
        piVar2 = _obj.ops;
        if (_obj.idle_notif_list != obj.idle_notif_list) {
            pcVar5 = _obj.idle_notif_list;
            do {
                if (*(pcVar5 + -8) == *arg1) goto code_r0x08001d50;
                pcVar5 = *pcVar5;
            } while (pcVar5 != obj.idle_notif_list);
        }
        piVar1 = arg1 + 8;
        uVar3 = __list_add_valid(piVar1,_obj.ops,obj.idle_notif_list);
        if ((uVar3 & 1) != 0) {
            _obj.ops = piVar1;
            *(arg1 + 8) = obj.idle_notif_list;
            *(arg1 + 0x10) = piVar2;
            *piVar2 = piVar1;
        }
code_r0x08001d50:
        _raw_spin_unlock(obj.idle_list_lock);
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.qcom_pmu_idle_unregister @ 0x08001d80 (size 196) =====

uint sym.qcom_pmu_idle_unregister(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*arg1 == 0)) {
        uVar5 = 0xffffffea;
    }
    else {
        _raw_spin_lock(obj.idle_list_lock);
        if (_obj.idle_notif_list != obj.idle_notif_list) {
            pcVar4 = _obj.idle_notif_list;
            do {
                if (*(pcVar4 + -8) == *arg1) {
                    uVar3 = __list_del_entry_valid(pcVar4);
                    if ((uVar3 & 1) != 0) {
                        iVar1 = *pcVar4;
                        piVar2 = *(pcVar4 + 8);
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    uVar5 = 0;
                    *pcVar4 = -0x2152ffffffffff00;
                    *(pcVar4 + 8) = -0x2152fffffffffede;
                    goto code_r0x08001e20;
                }
                pcVar4 = *pcVar4;
            } while (pcVar4 != obj.idle_notif_list);
        }
        uVar5 = 0xffffffea;
code_r0x08001e20:
        _raw_spin_unlock(obj.idle_list_lock);
    }
    return uVar5;
}


// ===== sym.rimps_pmu_init @ 0x08001e44 (size 312) =====

void sym.rimps_pmu_init(int64_t arg1)

{
    uint32_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint *puVar5;
    uint32_t *in_x6;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t unaff_w20;
    code *pcVar11;
    ulong unaff_x30;
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
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    if ((arg1 == 0) || (*(arg1 + 0x3a0) == 0)) {
        puVar2 = 0xffffffea;
    }
    else {
        pcVar11 = *(*(arg1 + 0x3a0) + 0x10);
        __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar11,0x8000420);
        puVar2 = (*pcVar11)(arg1,0x86,obj.idle_notif_list);
        unaff_w20 = 0x8000000;
        _segment.ehdr = puVar2;
        if (puVar2 < 0xfffffffffffff001) {
            puVar2 = sym.configure_cpucp_map(___cpu_possible_mask);
            if (-1 < puVar2) {
                uStack_2c = 1;
                if ((obj.qcom_pmu_inited & 1) == 0) {
                    puVar2 = 0xfffffdfb;
                }
                else {
                    if ((_segment.ehdr == NULL) || (_segment.ehdr == NULL)) {
                        puVar2 = NULL;
                        goto code_r0x08001f38;
                    }
                    pcVar11 = _segment.ehdr[2];
                    __cfi_slowpath_diag(0x376863d1de02459b,pcVar11,0x8000460);
                    puVar2 = (*pcVar11)(_segment.ehdr,&uStack_2c);
                    if (-1 < puVar2) goto code_r0x08001f38;
                }
            }
            _segment.ehdr = NULL;
        }
    }
code_r0x08001f38:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return;
    }
    uStack_90 = __stack_chk_fail(puVar2);
    *extraout_x18 = sym.configure_cpucp_map;
    puVar2 = _segment.ehdr;
    pcStack_78 = sym.configure_cpucp_map;
    iVar6 = sp_el0;
    iStack_88 = *(iVar6 + 0x5e0);
    puStack_80 = &stack0xffffffffffffffe0;
    if (obj.qcom_pmu_inited == 0x1) {
        if (_segment.ehdr == NULL) {
            uVar4 = 0;
        }
        else {
            *in_x6 = unaff_w20;
            uStack_a0 = 0xffffffffffffffff;
            uStack_98 = 0xffffffffffffffff;
            uStack_b0 = 0xffffffffffffffff;
            uStack_a8 = 0xffffffffffffffff;
            uStack_c0 = 0xffffffffffffffff;
            uStack_b8 = 0xffffffffffffffff;
            uStack_d0 = 0xffffffffffffffff;
            uStack_c8 = 0xffffffffffffffff;
            uStack_d8 = 0xffffffffffffffff;
            uVar1 = cpumask_next(0xffffffff,&uStack_90);
            while (uVar1 < unaff_w20) {
                if (0x1f < uVar1) {
code_r0x08002160:
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x5512,0x8002164);
                    (*pcVar11)();
                }
                uVar3 = uVar1;
                iVar6 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar3 * 8));
                uVar9 = *(iVar6 + 0x148);
                if (uVar9 != 0) {
                    uVar7 = 0;
                    puVar8 = iVar6 + 0x2c;
                    do {
                        if (uVar7 == 9) goto code_r0x08002160;
                        uVar10 = *puVar8;
                        if ((((*puVar8 < 9) &&
                             (reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[uVar10 * 0x10] != 0x0)
                             ) && (3 < puVar8[-1])) &&
                           ((*(puVar8 + -7) != 0 &&
                            ((*(reloc.qcom_pmu_driver_remove.7a5e0eb402a67213725a0fb989e80142.cfi_jt + uVar10 * 0x10) &
                             1L << (uVar3 & 0x3f)) != 0)))) {
                            if (7 < uVar1) goto code_r0x08002160;
                            if (0x47 < uVar3 * 9 + uVar10) {
    //WARNING: Does not return
                                pcVar11 = SoftwareBreakpoint(1,0x8002168);
                                (*pcVar11)();
                            }
                            *(&uStack_d8 + uVar10 + uVar3 * 9) = *(*(puVar8 + -7) + 0x184);
                            uVar9 = *(iVar6 + 0x148);
                        }
                        uVar7 = uVar7 + 1;
                        puVar8 = puVar8 + 10;
                    } while (uVar7 < uVar9);
                }
                uVar1 = cpumask_next(uVar3,&uStack_90);
            }
            pcVar11 = *puVar2;
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar11,0x8000440);
            uVar4 = (*pcVar11)(_segment.ehdr,&uStack_d8);
        }
    }
    else {
        uVar4 = 0xfffffdfb;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_88) {
        puVar5 = __stack_chk_fail(uVar4);
        *extraout_x18_00 = sym.read_amu_reg;
        switch(*puVar5) {
        case 0:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,1);
            break;
        case 1:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,0);
            break;
        case 2:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,2);
            break;
        case 3:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,3);
            break;
        default:
            _printk(0x800056d);
            return;
        }
        *(puVar5 + 2) = uVar4;
        return;
    }
    return;
}


// ===== sym.configure_cpucp_map @ 0x08001f7c (size 496) =====

void sym.configure_cpucp_map(int64_t arg1)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint *puVar5;
    uint32_t *in_x6;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar11;
    uint32_t unaff_w20;
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
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    puVar1 = _segment.ehdr;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    iStack_60 = arg1;
    if (obj.qcom_pmu_inited == 0x1) {
        if (_segment.ehdr == NULL) {
            uVar4 = 0;
        }
        else {
            *in_x6 = unaff_w20;
            uStack_70 = 0xffffffffffffffff;
            uStack_68 = 0xffffffffffffffff;
            uStack_80 = 0xffffffffffffffff;
            uStack_78 = 0xffffffffffffffff;
            uStack_90 = 0xffffffffffffffff;
            uStack_88 = 0xffffffffffffffff;
            uStack_a0 = 0xffffffffffffffff;
            uStack_98 = 0xffffffffffffffff;
            uStack_a8 = 0xffffffffffffffff;
            uVar2 = cpumask_next(0xffffffff,&iStack_60);
            while (uVar2 < unaff_w20) {
                if (0x1f < uVar2) {
code_r0x08002160:
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x5512,0x8002164);
                    (*pcVar11)();
                }
                uVar3 = uVar2;
                iVar6 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar3 * 8));
                uVar9 = *(iVar6 + 0x148);
                if (uVar9 != 0) {
                    uVar7 = 0;
                    puVar8 = iVar6 + 0x2c;
                    do {
                        if (uVar7 == 9) goto code_r0x08002160;
                        uVar10 = *puVar8;
                        if ((((*puVar8 < 9) &&
                             (reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[uVar10 * 0x10] != 0x0)
                             ) && (3 < puVar8[-1])) &&
                           ((*(puVar8 + -7) != 0 &&
                            ((*(reloc.qcom_pmu_driver_remove.7a5e0eb402a67213725a0fb989e80142.cfi_jt + uVar10 * 0x10) &
                             1L << (uVar3 & 0x3f)) != 0)))) {
                            if (7 < uVar2) goto code_r0x08002160;
                            if (0x47 < uVar3 * 9 + uVar10) {
    //WARNING: Does not return
                                pcVar11 = SoftwareBreakpoint(1,0x8002168);
                                (*pcVar11)();
                            }
                            *(&uStack_a8 + uVar10 + uVar3 * 9) = *(*(puVar8 + -7) + 0x184);
                            uVar9 = *(iVar6 + 0x148);
                        }
                        uVar7 = uVar7 + 1;
                        puVar8 = puVar8 + 10;
                    } while (uVar7 < uVar9);
                }
                uVar2 = cpumask_next(uVar3,&iStack_60);
            }
            pcVar11 = *puVar1;
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar11,0x8000440);
            uVar4 = (*pcVar11)(_segment.ehdr,&uStack_a8);
        }
    }
    else {
        uVar4 = 0xfffffdfb;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_58) {
        puVar5 = __stack_chk_fail(uVar4);
        *extraout_x18 = sym.read_amu_reg;
        switch(*puVar5) {
        case 0:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,1);
            break;
        case 1:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,0);
            break;
        case 2:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,2);
            break;
        case 3:
            uVar4 = UnkSytemRegRead(3,3,0xd,4,3);
            break;
        default:
            _printk(0x800056d);
            return;
        }
        *(puVar5 + 2) = uVar4;
        return;
    }
    return;
}


// ===== sym.read_amu_reg @ 0x0800216c (size 132) =====

void sym.read_amu_reg(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg1 < 4) {
    //switch table (4 cases) at 0x8000510
        switch(*(*arg1 * 4 + 0x8000510) + 0x8002190) {
        case 0x80021a4:
            uVar1 = UnkSytemRegRead(3,3,0xd,4,1);
            break;
        case 0x80021b0:
            uVar1 = UnkSytemRegRead(3,3,0xd,4,0);
            break;
        case 0x80021bc:
            uVar1 = UnkSytemRegRead(3,3,0xd,4,2);
            break;
        case 0x80021c8:
            uVar1 = UnkSytemRegRead(3,3,0xd,4,3);
        }
        *(arg1 + 8) = uVar1;
    }
    else {
        _printk(0x800056d);
    }
    return;
}


// ===== sym.qcom_pmu_driver_probe @ 0x080021f0 (size 1216) =====

int sym.qcom_pmu_driver_probe(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint32_t *in_x6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar15;
    int iVar16;
    ulong unaff_x30;
    int64_t iStack_e8;
    int64_t iStack_e0;
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
    uint uStack_88;
    uint uStack_84;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    iVar2 = arg1 + 0x10;
    uStack_88 = 0;
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
    iStack_e8 = 0;
    iStack_e0 = 0;
    if ((_segment.ehdr == 0) &&
       (iVar6 = of_property_match_string(*(arg1 + 0x300),"reg-names","pmu-base"), -1 < iVar6)) {
        iVar6 = of_address_to_resource(*(arg1 + 0x300),iVar6,&iStack_e8);
        if (iVar6 < 0) {
            _dev_err(iVar2,"failed to get resource ret %d\n",iVar6);
        }
        else {
            _segment.ehdr = devm_ioremap(iVar2,iStack_e8,(iStack_e0 - iStack_e8) + 1);
            if (_segment.ehdr != 0) {
                __memset_io(_segment.ehdr,0,(iStack_e0 - iStack_e8) + 1);
            }
        }
    }
    iVar8 = of_find_property(*(arg1 + 0x300),"qcom,ignore-llcc-setup",&uStack_88);
    if (iVar8 != 0) {
        obj.llcc_ignore_setup = 0x1;
    }
    uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x6 = extraout_w8;
    if (uVar4 < extraout_w8) {
        do {
            iVar8 = devm_kmalloc(iVar2,0x158,0xdc0);
            if (iVar8 == 0) {
                iVar6 = -0xc;
                goto code_r0x08002618;
            }
            *(iVar8 + 0x150) = 0;
            *(iVar8 + 0x14c) = 0;
            uVar11 = uStack_78;
            if (0x1f < uVar4) {
code_r0x080026a4:
                uStack_78 = uVar11;
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80026a8);
                (*pcVar3)();
            }
            *(obj.cpu_ev_data + *(__per_cpu_offset + uVar4 * 8)) = iVar8;
            uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
            *in_x6 = extraout_w8_00;
        } while (uVar4 < extraout_w8_00);
    }
    uVar15 = *(arg1 + 0x300);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    iVar8 = of_find_property(uVar15,"qcom,long-counter",&uStack_70 + 4);
    if (iVar8 != 0) {
        obj.pmu_long_counter = 0x1;
    }
    iVar8 = of_find_property(uVar15,"qcom,pmu-events-tbl",&uStack_70 + 4);
    if (iVar8 == 0) {
        iVar6 = -0x13;
    }
    else {
        uVar4 = uStack_70._4_4_;
        iVar6 = -0x16;
        if ((3 < uStack_70._4_4_) && ((uStack_70 & 0xc00000000) == 0)) {
            iVar6 = uStack_70._4_4_ >> 2;
            iVar16 = iVar6 + 3;
            if (-1 < iVar6) {
                iVar16 = iVar6;
            }
            uStack_70 = CONCAT44(iVar16 >> 2,uStack_70);
            uVar11 = uStack_78;
            if (uVar4 < 0x80) {
                if (0xf < uVar4) {
                    uVar4 = 0;
                    iVar16 = 0;
                    do {
                        iVar5 = of_property_read_u32_index(uVar15,"qcom,pmu-events-tbl",uVar4,&uStack_78 + 4);
                        iVar6 = -0x16;
                        if ((iVar5 < 0) || (uStack_78._4_4_ == 0)) goto code_r0x08002604;
                        iVar5 = of_property_read_u32_index(uVar15,"qcom,pmu-events-tbl",uVar4 | 1,&uStack_70);
                        iVar6 = -0x16;
                        if (iVar5 < 0) goto code_r0x08002604;
                        if (uStack_70 == 0) goto code_r0x08002604;
                        uStack_80 = uStack_70 & 0xffffffff;
                        iVar6 = of_property_read_u32_index(uVar15,"qcom,pmu-events-tbl",uVar4 | 2,&uStack_84);
                        uVar11 = uStack_78;
                        if ((iVar6 < 0) ||
                           (iVar6 = of_property_read_u32_index(uVar15,"qcom,pmu-events-tbl",uVar4 | 3,&uStack_78),
                           uVar11 = uStack_78, iVar6 < 0)) {
code_r0x080025f0:
                            uStack_78 = uVar11;
                            iVar6 = -0x16;
                            goto code_r0x08002604;
                        }
                        *in_x6 = 0x80005dd;
                        uVar9 = cpumask_next(0xffffffff,&uStack_80);
                        uVar7 = uVar9;
                        uVar11 = uStack_78;
                        while (uStack_78._0_4_ = uVar11, uStack_78 = uVar11, uVar7 < 0x80005dd) {
                            uVar12 = uVar9 >> 6 & 0x3ffffff;
                            uVar13 = 1L << (uVar9 & 0x3f);
                            if ((*(__cpu_possible_mask + uVar12 * 8) & uVar13) != 0) {
                                uStack_78._4_4_ = uVar11 >> 0x20;
                                if ((uStack_78._4_4_ == 0) || ((*(__cpu_possible_mask + uVar12 * 8) & uVar13) == 0))
                                goto code_r0x080025f0;
                                if (0x1f < uVar9) goto code_r0x080026a4;
                                iVar8 = *(obj.cpu_ev_data + *(__per_cpu_offset + (uVar9 & 0xffffffff) * 8));
                                if (7 < *(iVar8 + 0x148)) goto code_r0x080025f8;
                                iVar14 = iVar8 + *(iVar8 + 0x148) * 0x28;
                                *(iVar14 + 8) = uStack_78._4_4_;
                                *(iVar14 + 0x28) = uStack_84;
                                *(iVar14 + 0x2c) = uStack_78;
                                iVar6 = *(iVar8 + 0x148);
                                *in_x6 = 0x80005dd;
                                *(iVar8 + 0x148) = iVar6 + 1;
                            }
                            uVar9 = cpumask_next(uVar9,&uStack_80);
                            uVar11 = uStack_78;
                            uVar7 = uVar9;
                        }
                        uVar11 = uVar11 & 0xffffffff;
                        if (uStack_78 < 9) {
                            reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[uVar11 * 0x10] = 0x1;
                            if (0x90 < (uVar11 << 4 | 8)) {
    //WARNING: Does not return
                                pcVar3 = SoftwareBreakpoint(1,0x80026ac);
                                (*pcVar3)();
                            }
                            *(reloc.qcom_pmu_driver_remove.7a5e0eb402a67213725a0fb989e80142.cfi_jt + uVar11 * 0x10) =
                                 uStack_80;
                        }
                        uStack_70._4_4_ = uStack_70 >> 0x20;
                        iVar16 = iVar16 + 1;
                        uVar4 = uVar4 + 4;
                        bVar1 = iVar16 < uStack_70._4_4_;
                    } while (bVar1);
                }
                iVar6 = kobject_init_and_add(obj.pmu_kobj,obj.pmu_settings_ktype,_perf_event_read_local,"pmu_lib");
                if (iVar6 < 0) {
                    pcVar10 = "failed to init pmu counters kobj: %d\n";
                }
                else {
                    iVar6 = sym.setup_events();
                    if (-1 < iVar6) {
                        obj.qcom_pmu_inited = 0x1;
                        goto code_r0x08002618;
                    }
                    pcVar10 = "failed to setup all pmu/amu events: %d\n";
                }
                _dev_err(iVar2,pcVar10,iVar6);
                kobject_put(obj.pmu_kobj);
                goto code_r0x08002618;
            }
code_r0x080025f8:
            uStack_78 = uVar11;
            iVar6 = -0x1c;
        }
    }
code_r0x08002604:
    _dev_err(iVar2,"failed to initialize pmu events: %d\n",iVar6);
code_r0x08002618:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_pmu_driver_remove;
    obj.qcom_pmu_inited = 0x0;
    sym.delete_events();
    return 0;
}


// ===== sym.qcom_pmu_driver_remove @ 0x080026b0 (size 48) =====

ulong sym.qcom_pmu_driver_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.qcom_pmu_inited = 0x0;
    sym.delete_events();
    return 0;
}


// ===== sym.setup_events @ 0x080026e0 (size 1004) =====

int sym.setup_events(void)

{
    code *pcVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int64_t arg3;
    ulong uVar6;
    uint32_t *in_x6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t uVar7;
    uint32_t extraout_w8_02;
    ulong *in_x18;
    uint64_t arg2;
    int64_t iVar8;
    uint *arg1;
    uchar *puVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = kmem_cache_alloc_trace(_perf_event_read_value,0xdc0,0x80);
    if (arg3 == 0) {
        return -0xc;
    }
    *(arg3 + 4) = 0x80;
    *(arg3 + 0x28) = *(arg3 + 0x28) | 4;
    cpus_read_lock();
    uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x6 = extraout_w8;
    if (uVar3 < extraout_w8) {
        iVar4 = 0;
        do {
            arg2 = uVar3;
            if (0x1f < uVar3) goto code_r0x08002ac8;
            puVar9 = *(obj.cpu_ev_data + *(__per_cpu_offset + arg2 * 8));
            if (*(puVar9 + 0x148) != 0) {
                uVar10 = 0;
                arg1 = puVar9 + 8;
                do {
                    if (uVar10 == 9) goto code_r0x08002ac8;
                    iVar4 = sym.set_event(arg1,arg2,arg3);
                    if (iVar4 < 0) {
                        _printk(0x800067c,*arg1,arg2,iVar4);
                        bVar2 = iVar4 == -0x205;
                        iVar4 = 0;
                        *arg1 = 0;
                        if (bVar2) {
                            uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
                            *in_x6 = extraout_w8_01;
                            if (extraout_w8_01 <= uVar3) goto code_r0x08002a3c;
                            goto code_r0x0800291c;
                        }
                    }
                    uVar10 = uVar10 + 1;
                    arg1 = arg1 + 10;
                } while (uVar10 < *(puVar9 + 0x148));
            }
            uVar6 = _raw_spin_lock_irqsave(puVar9 + 0x150);
            uVar10 = ___stack_chk_fail;
            *puVar9 = 0;
            puVar9[2] = 0;
            puVar9[1] = (uVar10 >> (arg2 & 0x3f) & 1) == 0;
            _raw_spin_unlock_irqrestore(puVar9 + 0x150,uVar6);
            uVar3 = cpumask_next(arg2,__cpu_possible_mask);
            *in_x6 = extraout_w8_00;
        } while (uVar3 < extraout_w8_00);
    }
    else {
        iVar4 = 0;
    }
    iVar5 = __cpuhp_setup_state_cpuslocked
                      (0xc0,"QCOM_PMU",0,sym.qcom_pmu_hotplug_coming_up.7a5e0eb402a67213725a0fb989e80142.cfi_jt,
                       sym.qcom_pmu_hotplug_going_down.7a5e0eb402a67213725a0fb989e80142.cfi_jt,0);
    if (iVar5 < 0) {
        _printk(0x8000712,iVar5);
        _segment.ehdr = iVar5;
        _printk(0x80006ac,iVar5);
        iVar4 = iVar5;
        iVar5 = _segment.ehdr;
    }
    goto code_r0x08002a44;
    while( true ) {
        iVar8 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar3 * 8));
        uVar7 = *(iVar8 + 0x148);
        if (uVar7 != 0) {
            if (*(iVar8 + 0x10) != 0) {
                perf_event_release_kernel();
                uVar7 = *(iVar8 + 0x148);
                *(iVar8 + 0x10) = 0;
            }
            if (1 < uVar7) {
                if (*(iVar8 + 0x38) != 0) {
                    perf_event_release_kernel();
                    uVar7 = *(iVar8 + 0x148);
                    *(iVar8 + 0x38) = 0;
                }
                if (2 < uVar7) {
                    if (*(iVar8 + 0x60) != 0) {
                        perf_event_release_kernel();
                        uVar7 = *(iVar8 + 0x148);
                        *(iVar8 + 0x60) = 0;
                    }
                    if (3 < uVar7) {
                        if (*(iVar8 + 0x88) != 0) {
                            perf_event_release_kernel();
                            uVar7 = *(iVar8 + 0x148);
                            *(iVar8 + 0x88) = 0;
                        }
                        if (4 < uVar7) {
                            if (*(iVar8 + 0xb0) != 0) {
                                perf_event_release_kernel();
                                uVar7 = *(iVar8 + 0x148);
                                *(iVar8 + 0xb0) = 0;
                            }
                            if (5 < uVar7) {
                                if (*(iVar8 + 0xd8) != 0) {
                                    perf_event_release_kernel();
                                    uVar7 = *(iVar8 + 0x148);
                                    *(iVar8 + 0xd8) = 0;
                                }
                                if (6 < uVar7) {
                                    if (*(iVar8 + 0x100) != 0) {
                                        perf_event_release_kernel();
                                        uVar7 = *(iVar8 + 0x148);
                                        *(iVar8 + 0x100) = 0;
                                    }
                                    if (7 < uVar7) {
                                        if (*(iVar8 + 0x128) != 0) {
                                            perf_event_release_kernel();
                                            uVar7 = *(iVar8 + 0x148);
                                            *(iVar8 + 0x128) = 0;
                                        }
                                        if (8 < uVar7) {
                                            if (*(iVar8 + 0x150) != 0) {
                                                perf_event_release_kernel();
                                                uVar7 = *(iVar8 + 0x148);
                                                *(iVar8 + 0x150) = 0;
                                            }
                                            if (9 < uVar7) goto code_r0x08002ac8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
        *in_x6 = extraout_w8_02;
        if (extraout_w8_02 <= uVar3) break;
code_r0x0800291c:
        if (0x1f < uVar3) {
code_r0x08002ac8:
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x8002acc);
            (*pcVar1)();
        }
    }
code_r0x08002a3c:
    iVar4 = -0x205;
    iVar5 = _segment.ehdr;
code_r0x08002a44:
    _segment.ehdr = iVar5;
    cpus_read_unlock();
    if ((iVar4 != -0x205) && (iVar4 != _segment.ehdr)) {
        tracepoint_probe_register
                  (__tracepoint_android_vh_cpu_idle_enter,
                   sym.qcom_pmu_idle_enter_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt,0);
        tracepoint_probe_register
                  (__tracepoint_android_vh_cpu_idle_exit,
                   sym.qcom_pmu_idle_exit_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt,0);
        cpu_pm_register_notifier(reloc.memlat_pm_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt);
    }
    kfree(arg3);
    return iVar4;
}


// ===== sym.attr_show @ 0x08002acc (size 148) =====

ulong sym.attr_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (2 < (pcVar2 + -0x80013c8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x8000480);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.attr_store @ 0x08002b60 (size 148) =====

ulong sym.attr_store(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (2 < (pcVar2 + -0x80013f8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x80004a0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.show_enable_counters @ 0x08002bf4 (size 72) =====

int64_t sym.show_enable_counters(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x80005f1,~obj.pmu_counters_enabled & 1);
    return iVar1;
}


// ===== sym.store_enable_counters @ 0x08002c3c (size 824) =====

uint64_t sym.store_enable_counters(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t *in_x5;
    uint *in_x6;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t *piVar14;
    ushort *puVar15;
    ulong unaff_x30;
    uint64_t uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar7 = sysfs_streq(arg1,"BEEFDEAD");
    if ((uVar7 & 1) == 0) {
        uVar7 = sysfs_streq(arg1,"DEADBEEF");
        if ((((uVar7 & 1) != 0) && (obj.qcom_pmu_inited == 0x1)) && ((obj.pmu_counters_enabled & 1) == 0)) {
            uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *in_x6 = 0x8019000;
            if (uVar6 < 0x8019000) {
code_r0x08002dac:
                if (0x1f < uVar6) {
code_r0x08002f6c:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x8002f70);
                    (*pcVar4)();
                }
                uVar7 = uVar6;
                iVar12 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar7 * 8));
                if (*(iVar12 + 0x148) != 0) {
                    uVar10 = 0;
                    bVar3 = false;
                    iVar9 = CONCAT44(*0x8000004,_segment.ehdr) + uVar7 * 0x28;
code_r0x08002df4:
                    puVar11 = iVar12 + 0x2c + uVar10 * 0x28;
                    do {
                        uVar10 = uVar10 + 1;
                        if (uVar10 == 10) goto code_r0x08002f6c;
                        if (puVar11[-9] != 0) {
                            uVar6 = puVar11[-1];
                            uVar2 = *puVar11;
                            if ((*(puVar11 + -7) != 0) || (uVar6 < 4)) {
                                uStack_78 = 0;
                                uStack_70 = 0;
                                uStack_88 = 0;
                                uStack_80 = 0;
                                if (puVar11[-1] < 4) {
                                    uStack_88 = puVar11[-1];
                                    iVar5 = smp_call_function_single
                                                      (puVar11[-5],
                                                       sym.read_amu_reg.7a5e0eb402a67213725a0fb989e80142.cfi_jt,
                                                       &uStack_88,1);
                                    uVar8 = uStack_80;
                                    if (-1 < iVar5) {
code_r0x08002e8c:
                                        *(puVar11 + -3) = uVar8;
                                    }
                                }
                                else if (*(puVar11 + -7) != 0) {
                                    uVar8 = perf_event_read_value(*(puVar11 + -7),&uStack_70,&uStack_78);
                                    goto code_r0x08002e8c;
                                }
                                if (((CONCAT44(*0x8000004,_segment.ehdr) != 0) && (*puVar11 < 9)) &&
                                   (reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[*puVar11 * 0x10]
                                    != 0x0)) goto code_r0x08002eb8;
                            }
                        }
                        puVar11 = puVar11 + 10;
                        if (*(iVar12 + 0x148) <= uVar10) {
                            if (!bVar3) break;
                            goto code_r0x08002d7c;
                        }
                    } while( true );
                }
                goto code_r0x08002d8c;
            }
code_r0x08002f48:
            sym.delete_events();
            _printk(0x80006ea);
            obj.pmu_counters_enabled = 0x1;
        }
    }
    else if (obj.pmu_counters_enabled == 0x1) {
        iVar5 = sym.setup_events();
        if (iVar5 < 0) {
            _printk(0x8000652,iVar5);
        }
        else {
            sym.configure_cpucp_map(___cpu_possible_mask);
            obj.pmu_counters_enabled = 0x0;
            _printk(0x8000829);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.delete_events;
    if (0 < _segment.ehdr) {
        __cpuhp_remove_state(_segment.ehdr,0);
    }
    tracepoint_probe_unregister
              (__tracepoint_android_vh_cpu_idle_enter,
               sym.qcom_pmu_idle_enter_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_cpu_idle_exit,
               sym.qcom_pmu_idle_exit_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt,0);
    cpu_pm_unregister_notifier(reloc.memlat_pm_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt);
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x5 = arg2;
    if (uVar6 < arg2) {
        do {
            if (0x1f < uVar6) goto code_r0x08003174;
            puVar15 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar6 * 8));
            arg2 = puVar15 + 0xa8;
            uVar8 = _raw_spin_lock_irqsave(arg2);
            *puVar15 = 0x101;
            *(puVar15 + 1) = 1;
            _raw_spin_unlock_irqrestore(arg2,uVar8);
            uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            *in_x5 = arg2;
        } while (uVar6 < arg2);
    }
    uVar7 = cpumask_next(0xffffffff,__cpu_possible_mask);
    if (uVar7 < arg2) {
        do {
            if (0x1f < uVar7) {
code_r0x08003174:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8003178);
                (*pcVar4)();
            }
            iVar12 = *(obj.cpu_ev_data + *(__per_cpu_offset + (uVar7 & 0xffffffff) * 8));
            iVar5 = *(iVar12 + 0x14c);
            while (0 < iVar5) {
                __const_udelay(0xa7c6);
                iVar5 = *(iVar12 + 0x14c);
            }
            uVar10 = *(iVar12 + 0x148);
            if (*(iVar12 + 0x148) != 0) {
                uVar13 = 0;
                piVar14 = iVar12 + 0x10;
                do {
                    if (uVar13 == 9) goto code_r0x08003174;
                    if ((piVar14[-1] != 0) && (*piVar14 != 0)) {
                        perf_event_release_kernel();
                        *piVar14 = 0;
                        uVar10 = *(iVar12 + 0x148);
                    }
                    uVar13 = uVar13 + 1;
                    piVar14 = piVar14 + 5;
                } while (uVar13 < uVar10);
            }
            *in_x5 = iVar12;
            uVar7 = cpumask_next(uVar7 & 0xffffffff,__cpu_possible_mask);
        } while (uVar7 < iVar12);
    }
    return uVar7;
code_r0x08002eb8:
    uVar13 = *(puVar11 + -3);
    if (3 < uVar6) {
        if (*(*(*(puVar11 + -7) + 0x98) + 0x138) < 6) {
            if (puVar11[-9] == 0x11) {
                uVar13 = uVar13 | 0xffffffff80000000;
            }
            else {
                uVar13 = uVar13 & 0x7fffffff | 0x80000000;
            }
        }
        else {
            uVar1 = 0x8000000000000000;
            if (obj.pmu_long_counter == 0x0) {
                uVar1 = 0xffffffff80000000;
            }
            uVar13 = uVar1 | uVar13;
        }
    }
    if (9 < uVar2) goto code_r0x08002f6c;
    sym.writel_relaxed(uVar13,iVar9 + uVar2 * 4);
    bVar3 = true;
    if (*(iVar12 + 0x148) <= uVar10) goto code_r0x08002d7c;
    goto code_r0x08002df4;
code_r0x08002d7c:
    sym.writel_relaxed(1,iVar9 + 0x24);
code_r0x08002d8c:
    uVar6 = cpumask_next(uVar7,__cpu_possible_mask);
    *in_x6 = 0x8019000;
    if (0x8018fff < uVar6) goto code_r0x08002f48;
    goto code_r0x08002dac;
}


// ===== sym.delete_events @ 0x08002f74 (size 516) =====

void sym.delete_events(void)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t *in_x5;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ushort *unaff_x21;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ushort *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        __cpuhp_remove_state(_segment.ehdr,0);
    }
    tracepoint_probe_unregister
              (__tracepoint_android_vh_cpu_idle_enter,
               sym.qcom_pmu_idle_enter_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_cpu_idle_exit,
               sym.qcom_pmu_idle_exit_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt,0);
    cpu_pm_unregister_notifier(reloc.memlat_pm_notif.7a5e0eb402a67213725a0fb989e80142.cfi_jt);
    uVar2 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x5 = unaff_x21;
    if (uVar2 < unaff_x21) {
        do {
            if (0x1f < uVar2) goto code_r0x08003174;
            puVar9 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar2 * 8));
            unaff_x21 = puVar9 + 0xa8;
            uVar3 = _raw_spin_lock_irqsave(unaff_x21);
            *puVar9 = 0x101;
            *(puVar9 + 1) = 1;
            _raw_spin_unlock_irqrestore(unaff_x21,uVar3);
            uVar2 = cpumask_next(uVar2,__cpu_possible_mask);
            *in_x5 = unaff_x21;
        } while (uVar2 < unaff_x21);
    }
    uVar2 = cpumask_next(0xffffffff,__cpu_possible_mask);
    if (uVar2 < unaff_x21) {
        do {
            if (0x1f < uVar2) {
code_r0x08003174:
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8003178);
                (*pcVar1)();
            }
            iVar6 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar2 * 8));
            iVar4 = *(iVar6 + 0x14c);
            while (0 < iVar4) {
                __const_udelay(0xa7c6);
                iVar4 = *(iVar6 + 0x14c);
            }
            uVar5 = *(iVar6 + 0x148);
            if (*(iVar6 + 0x148) != 0) {
                uVar7 = 0;
                piVar8 = iVar6 + 0x10;
                do {
                    if (uVar7 == 9) goto code_r0x08003174;
                    if ((piVar8[-1] != 0) && (*piVar8 != 0)) {
                        perf_event_release_kernel();
                        *piVar8 = 0;
                        uVar5 = *(iVar6 + 0x148);
                    }
                    uVar7 = uVar7 + 1;
                    piVar8 = piVar8 + 5;
                } while (uVar7 < uVar5);
            }
            *in_x5 = iVar6;
            uVar2 = cpumask_next(uVar2,__cpu_possible_mask);
        } while (uVar2 < iVar6);
    }
    return;
}


// ===== sym.writel_relaxed @ 0x08003180 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800319c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80031c4);
    return;
}


// ===== sym.qcom_pmu_idle_enter_notif @ 0x080031f8 (size 804) =====

void sym.qcom_pmu_idle_enter_notif(ulong noname_0,int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    code *pcVar3;
    ulong uVar4;
    ulong extraout_x1;
    uint64_t uVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong *in_x18;
    code *pcVar8;
    code *unaff_x23;
    uint32_t uVar9;
    uint64_t uVar10;
    code *pcVar11;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong auStack_b0 [8];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    if (0x1f < *(arg2 + 4)) {
code_r0x080034c4:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80034c8);
        (*pcVar3)();
    }
    pcVar8 = *(obj.cpu_ev_data + *(__per_cpu_offset + *(arg2 + 4) * 8));
    auStack_b0[7] = 0;
    uStack_70 = 0;
    auStack_b0[5] = 0;
    auStack_b0[6] = 0;
    auStack_b0[3] = 0;
    auStack_b0[4] = 0;
    auStack_b0[1] = 0;
    auStack_b0[2] = 0;
    pcVar3 = pcVar8 + 0x150;
    uStack_b8 = 0;
    auStack_b0[0] = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uVar4 = _raw_spin_lock_irqsave(pcVar3);
    if (((*pcVar8 == 0x0) && (pcVar8[1] == 0x0)) && (pcVar8[2] == 0x0)) {
        unaff_x23 = pcVar8 + 0x14c;
        *pcVar8 = 0x1;
        goto code_r0x080034d4;
    }
    _raw_spin_unlock_irqrestore(pcVar3,uVar4);
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
        uVar4 = extraout_x1;
code_r0x080034d4:
        Hint_Prefetch(unaff_x23,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar2) {
                *unaff_x23 = *unaff_x23 + 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        _raw_spin_unlock_irqrestore(pcVar3,uVar4);
        uVar5 = *(pcVar8 + 0x148);
        if (*(pcVar8 + 0x148) == 0) {
            uVar9 = 0;
        }
        else {
            uVar10 = 0;
            uVar9 = 0;
            pcVar11 = pcVar8 + 0x20;
            pcVar3 = 0x800056d;
            do {
                if (uVar10 == 9) goto code_r0x080034c4;
                if ((*(pcVar11 + -0x18) != 0) && ((*(pcVar11 + -0x10) != 0 || (*(pcVar11 + 8) < 4)))) {
                    uStack_d8 = 0;
                    if (*(pcVar11 + 8) < 4) {
    //switch table (7 cases) at 0x8000520
                        switch(*(pcVar11 + 8)) {
                        case 0:
                            uStack_d8 = UnkSytemRegRead(3,3,0xd,4,1);
                            break;
                        case 1:
                            uStack_d8 = UnkSytemRegRead(3,3,0xd,4,0);
                            break;
                        case 2:
                            uStack_d8 = UnkSytemRegRead(3,3,0xd,4,2);
                            break;
                        case 3:
                            uStack_d8 = UnkSytemRegRead(3,3,0xd,4,3);
                            break;
                        default:
                            _printk(0x800056d);
                            uStack_d8 = 0;
                            goto code_r0x080033e0;
                        }
code_r0x080033e0:
                        *pcVar11 = uStack_d8;
                        pcVar7 = &uStack_d8;
                    }
                    else {
                        pcVar7 = pcVar11;
                        if (*(pcVar11 + -0x10) != 0) {
                            perf_event_read_local(*(pcVar11 + -0x10),&uStack_d8,0,0);
                            goto code_r0x080033e0;
                        }
                    }
                    *pcVar11 = *pcVar7;
                    if (7 < uVar9) goto code_r0x080034c4;
                    iVar6 = uVar9;
                    if ((0x68 < iVar6 * 4) ||
                       (*(&uStack_d0 + iVar6 * 4) = *(pcVar11 + -0x18), iVar6 * 8 - 0x49U < 0xffffffffffffff97)) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(1,0x80034cc);
                        (*pcVar3)();
                    }
                    uVar9 = uVar9 + 1;
                    auStack_b0[iVar6] = *pcVar11;
                    uVar5 = *(pcVar8 + 0x148);
                }
                uVar10 = uVar10 + 1;
                pcVar11 = pcVar11 + 0x28;
            } while (uVar10 < uVar5);
        }
        Hint_Prefetch(unaff_x23,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar2) {
                *unaff_x23 = *unaff_x23 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
        unaff_x23 = obj.idle_notif_list;
        if (_obj.idle_notif_list != obj.idle_notif_list) {
            pcVar3 = 0x80004c0;
            pcVar11 = _obj.idle_notif_list;
            do {
                pcVar8 = *(pcVar11 + -8);
                __cfi_slowpath_diag(0xa8991008362e5e88,pcVar8,0x80004c0);
                (*pcVar8)(&uStack_d0,*(arg2 + 4),*arg1);
                pcVar11 = *pcVar11;
            } while (pcVar11 != obj.idle_notif_list);
        }
    } while( true );
}


// ===== sym.qcom_pmu_idle_exit_notif @ 0x0800351c (size 56) =====

void sym.qcom_pmu_idle_exit_notif(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    
    if (*(arg2 + 4) < 0x20) {
        **(obj.cpu_ev_data + *(__per_cpu_offset + *(arg2 + 4) * 8)) = 0;
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003554);
    (*pcVar1)();
}


// ===== sym.memlat_pm_notif @ 0x08003554 (size 984) =====

ulong sym.memlat_pm_notif(ulong noname_0,int64_t arg1)

{
    char *pcVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    code *pcVar7;
    ulong uVar8;
    bool bVar9;
    int *extraout_x8;
    int *piVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong *in_x18;
    uint64_t uVar13;
    char *pcVar14;
    int64_t iVar15;
    uint64_t *puVar16;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = _segment.ehdr;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    iVar5 = tpidr_el1;
    uVar2 = *(cpu_number + iVar5);
    if (0x1f < uVar2) {
code_r0x080038d4:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x80038d8);
        (*pcVar7)();
    }
    pcVar14 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar2 * 8));
    pcVar1 = pcVar14 + 0x150;
    uVar8 = _raw_spin_lock_irqsave(pcVar1);
    if (pcVar14[1] == '\0') {
        iVar15 = iVar15 + uVar2 * 0x28;
        if (arg1 != 2) {
            if ((*pcVar14 == '\0') && (pcVar14[2] == '\0')) {
                piVar10 = pcVar14 + 0x14c;
                Hint_Prefetch(piVar10,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar10,0x10);
                    if (bVar4) {
                        *piVar10 = *piVar10 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                bVar4 = true;
            }
            else {
                bVar4 = false;
            }
            pcVar14[2] = '\x01';
            _raw_spin_unlock_irqrestore(pcVar1,uVar8);
            if ((_segment.ehdr != 0) && (uVar11 = *(pcVar14 + 0x148), *(pcVar14 + 0x148) != 0)) {
                uVar13 = 0;
                bVar9 = false;
                do {
                    puVar16 = pcVar14 + uVar13 * 0x28 + 0x20;
                    while( true ) {
                        if (uVar13 == 9) goto code_r0x080038d4;
                        if ((((puVar16[-3] != 0) && (uVar6 = puVar16[1], uVar6 < 4 || puVar16[-2] != 0)) &&
                            (uVar2 = *(puVar16 + 0xc), uVar2 < 9)) &&
                           (reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[uVar2 * 0x10] != 0x0))
                        break;
                        uVar13 = uVar13 + 1;
                        puVar16 = puVar16 + 5;
                        if (uVar11 <= uVar13) {
                            if (!bVar9) goto code_r0x08003898;
                            goto code_r0x0800388c;
                        }
                    }
                    if (bVar4) {
                        uStack_70 = 0;
                        if (puVar16[1] < 4) {
    //switch table (4 cases) at 0x8000530
                            switch(puVar16[1]) {
                            case 0:
                                uStack_70 = UnkSytemRegRead(3,3,0xd,4,1);
                                break;
                            case 1:
                                uStack_70 = UnkSytemRegRead(3,3,0xd,4,0);
                                break;
                            case 2:
                                uStack_70 = UnkSytemRegRead(3,3,0xd,4,2);
                                break;
                            case 3:
                                uStack_70 = UnkSytemRegRead(3,3,0xd,4,3);
                                break;
                            default:
                                _printk(0x800056d);
                                uStack_70 = 0;
                                goto code_r0x080037b0;
                            }
code_r0x080037b0:
                            *puVar16 = uStack_70;
                            puVar12 = &uStack_70;
                        }
                        else {
                            puVar12 = puVar16;
                            if (puVar16[-2] != 0) {
                                perf_event_read_local(puVar16[-2],&uStack_70,0,0);
                                goto code_r0x080037b0;
                            }
                        }
                        uVar11 = *puVar12;
                        *puVar16 = uVar11;
                    }
                    else {
                        uVar11 = *puVar16;
                    }
                    if (3 < uVar6) {
                        if (*(*(puVar16[-2] + 0x98) + 0x138) < 6) {
                            if (puVar16[-3] == 0x11) {
                                uVar11 = uVar11 | 0xffffffff80000000;
                            }
                            else {
                                uVar11 = uVar11 & 0x7fffffff | 0x80000000;
                            }
                        }
                        else {
                            uVar6 = 0x8000000000000000;
                            if (obj.pmu_long_counter == 0x0) {
                                uVar6 = 0xffffffff80000000;
                            }
                            uVar11 = uVar6 | uVar11;
                        }
                    }
                    sym.writel_relaxed(uVar11,iVar15 + uVar2 * 4);
                    uVar11 = *(pcVar14 + 0x148);
                    uVar13 = uVar13 + 1;
                    bVar9 = true;
                } while (uVar13 < uVar11);
code_r0x0800388c:
                sym.writel_relaxed(1,iVar15 + 0x24);
            }
code_r0x08003898:
            if (bVar4) {
                piVar10 = pcVar14 + 0x14c;
                goto code_r0x080038e0;
            }
            goto code_r0x08003610;
        }
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(0,iVar15 + 0x24);
        }
        pcVar14[2] = '\0';
    }
    _raw_spin_unlock_irqrestore(pcVar1,uVar8);
code_r0x08003610:
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        piVar10 = extraout_x8;
code_r0x080038e0:
        Hint_Prefetch(piVar10,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
                *piVar10 = *piVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
    }
    return 1;
}


// ===== sym.show_enable_trace @ 0x0800392c (size 64) =====

int64_t sym.show_enable_trace(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x80005f1,_segment.ehdr);
    return iVar1;
}


// ===== sym.store_enable_trace @ 0x0800396c (size 216) =====

uint64_t sym.store_enable_trace(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    ulong uVar8;
    uint *puVar9;
    uint64_t *extraout_x8;
    uint64_t *puVar10;
    uint64_t extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar15 [16];
    uint64_t auStack_d0 [2];
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uint uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_2c = 0;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        arg3 = 0xffffffffffffffed;
    }
    else {
        puVar9 = &uStack_2c;
        arg1 = kstrtouint(arg2,10);
        noname_1 = extraout_q0;
        if (-1 < arg1) {
            puVar9 = 0x80004e0;
            pcVar11 = *(CONCAT44(*0x8000004,_segment.ehdr) + 8);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar11);
            arg1 = (*pcVar11)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_2c);
            noname_1 = extraout_q0_00;
            if (-1 < arg1) {
                _segment.ehdr = uStack_2c;
                arg2 = puVar9;
                goto code_r0x08003a10;
            }
        }
        arg3 = arg1;
        arg2 = puVar9;
    }
code_r0x08003a10:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar15 = __stack_chk_fail(noname_1,arg1);
    puVar6 = auVar15._0_8_;
    *extraout_x18 = sym.set_event;
    pcStack_58 = sym.set_event;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_6c = 4;
    puStack_60 = &stack0xffffffffffffffe0;
    if (puVar6[8] < 4) {
code_r0x08003a88:
        uVar12 = 0;
        puVar6[4] = auVar15._8_4_;
    }
    else {
        puVar6[8] = 4;
        if (8 < puVar6[9]) {
            puVar6[9] = 9;
        }
        if (*puVar6 == 0) {
            uVar12 = 0;
        }
        else {
            *(arg2 + 8) = *puVar6;
            if (obj.pmu_long_counter == 0x1) {
                *(arg2 + 0x38) = 1;
            }
            if (*puVar6 == 0x1000) {
                if ((obj.llcc_ignore_setup & 1) != 0) goto code_r0x08003a88;
                uVar12 = qcom_llcc_pmu_hw_type(&uStack_6c);
                if (uVar12 < 0) {
                    uVar12 = uVar12 & 0xffffffff;
                    goto code_r0x08003b48;
                }
            }
            *arg2 = uStack_6c;
            uVar12 = perf_event_create_kernel_counter(arg2,auVar15._8_8_ & 0xffffffff,0,0,0);
            if (uVar12 < 0xfffffffffffff001) {
                perf_event_enable(uVar12);
                *(puVar6 + 2) = uVar12;
                goto code_r0x08003a88;
            }
        }
    }
code_r0x08003b48:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar12 & 0xffffffff;
    }
    uVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.qcom_pmu_hotplug_coming_up;
    pcStack_b8 = sym.qcom_pmu_hotplug_coming_up;
    iVar7 = sp_el0;
    auStack_d0[1] = *(iVar7 + 0x5e0);
    ppuStack_c0 = &puStack_60;
    iVar7 = kmem_cache_alloc_trace(_perf_event_read_value,0xdc0,0x80);
    if (iVar7 != 0) {
        *(iVar7 + 4) = 0x80;
        *(iVar7 + 0x28) = *(iVar7 + 0x28) | 4;
    }
    if (0x1f < uVar12) {
code_r0x08003d74:
    //WARNING: Does not return
        pcVar11 = SoftwareBreakpoint(0x5512,0x8003d78);
        (*pcVar11)();
    }
    uVar14 = uVar12 & 0xffffffff;
    iVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    iVar13 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar14 * 8));
    auStack_d0[0] = 0;
    if (iVar7 == 0) {
        uVar12 = 0xfffffff4;
        goto code_r0x08003e0c;
    }
    if (obj.qcom_pmu_inited != 0x1) goto code_r0x08003e00;
    if (*(iVar13 + 0x148) == 0) goto code_r0x08003d98;
    puVar9 = iVar13 + 8;
    iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
    if (-1 < iVar5) {
        if (*(iVar13 + 0x148) < 2) goto code_r0x08003d98;
        puVar9 = iVar13 + 0x30;
        iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
        if (-1 < iVar5) {
            if (*(iVar13 + 0x148) < 3) goto code_r0x08003d98;
            puVar9 = iVar13 + 0x58;
            iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
            if (-1 < iVar5) {
                if (*(iVar13 + 0x148) < 4) goto code_r0x08003d98;
                puVar9 = iVar13 + 0x80;
                iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                if (-1 < iVar5) {
                    if (*(iVar13 + 0x148) < 5) goto code_r0x08003d98;
                    puVar9 = iVar13 + 0xa8;
                    iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                    if (-1 < iVar5) {
                        if (*(iVar13 + 0x148) < 6) goto code_r0x08003d98;
                        puVar9 = iVar13 + 0xd0;
                        iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                        if (-1 < iVar5) {
                            if (*(iVar13 + 0x148) < 7) goto code_r0x08003d98;
                            puVar9 = iVar13 + 0xf8;
                            iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                            if (-1 < iVar5) {
                                if (*(iVar13 + 0x148) < 8) goto code_r0x08003d98;
                                puVar9 = iVar13 + 0x120;
                                iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                                if (-1 < iVar5) {
                                    if (*(iVar13 + 0x148) < 9) goto code_r0x08003d98;
                                    puVar9 = iVar13 + 0x148;
                                    iVar5 = sym.set_event(puVar9,uVar12 & 0xffffffff,iVar7);
                                    if (-1 < iVar5) {
                                        if (9 < *(iVar13 + 0x148)) goto code_r0x08003d74;
                                        goto code_r0x08003d98;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    _printk(0x800067c,*puVar9,uVar12 & 0xffffffff,iVar5);
code_r0x08003d98:
    puVar10 = auStack_d0 + (uVar14 >> 3 & 0x1ffffff8);
    uVar12 = 1L << (uVar12 & 0x3f);
    auStack_d0[0] = 0;
    while( true ) {
        Hint_Prefetch(puVar10,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar10,0x10);
            if (bVar2) {
                *puVar10 = *puVar10 | uVar12;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        sym.configure_cpucp_map(auStack_d0[0]);
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.writel_relaxed(0,iVar4 + uVar14 * 0x28 + 0x24);
        }
        uVar8 = _raw_spin_lock_irqsave(iVar13 + 0x150);
        *(iVar13 + 1) = 0;
        _raw_spin_unlock_irqrestore(iVar13 + 0x150,uVar8);
code_r0x08003e00:
        kfree(iVar7);
        uVar12 = 0;
code_r0x08003e0c:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == auStack_d0[1]) break;
        __stack_chk_fail(uVar12);
        puVar10 = extraout_x8;
        uVar12 = extraout_x9;
    }
    return uVar12;
}


// ===== sym.set_event @ 0x08003a44 (size 316) =====

uint64_t sym.set_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t *extraout_x8;
    uint64_t *puVar9;
    uint64_t extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint *arg1_00;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint64_t auStack_a0 [2];
    uchar *puStack_90;
    code *pcStack_88;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_3c = 4;
    if (*(arg1 + 0x20) < 4) {
code_r0x08003a88:
        uVar10 = 0;
        *(arg1 + 0x10) = arg2;
    }
    else {
        *(arg1 + 0x20) = 4;
        if (8 < *(arg1 + 0x24)) {
            *(arg1 + 0x24) = 9;
        }
        if (*arg1 == 0) {
            uVar10 = 0;
        }
        else {
            *(arg3 + 8) = *arg1;
            if (obj.pmu_long_counter == 0x1) {
                *(arg3 + 0x38) = 1;
            }
            if (*arg1 == 0x1000) {
                if ((obj.llcc_ignore_setup & 1) != 0) goto code_r0x08003a88;
                uVar10 = qcom_llcc_pmu_hw_type(&uStack_3c);
                if (uVar10 < 0) {
                    uVar10 = uVar10 & 0xffffffff;
                    goto code_r0x08003b48;
                }
            }
            *arg3 = uStack_3c;
            uVar10 = perf_event_create_kernel_counter(arg3,arg2 & 0xffffffff,0,0,0);
            if (uVar10 < 0xfffffffffffff001) {
                perf_event_enable(uVar10);
                *(arg1 + 8) = uVar10;
                goto code_r0x08003a88;
            }
        }
    }
code_r0x08003b48:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar10 & 0xffffffff;
    }
    uVar10 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_pmu_hotplug_coming_up;
    pcStack_88 = sym.qcom_pmu_hotplug_coming_up;
    iVar7 = sp_el0;
    auStack_a0[1] = *(iVar7 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffd0;
    iVar7 = kmem_cache_alloc_trace(_perf_event_read_value,0xdc0,0x80);
    if (iVar7 != 0) {
        *(iVar7 + 4) = 0x80;
        *(iVar7 + 0x28) = *(iVar7 + 0x28) | 4;
    }
    iVar4 = _segment.ehdr;
    if (0x1f < uVar10) {
code_r0x08003d74:
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8003d78);
        (*pcVar5)();
    }
    uVar12 = uVar10 & 0xffffffff;
    iVar11 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar12 * 8));
    auStack_a0[0] = 0;
    if (iVar7 == 0) {
        uVar10 = 0xfffffff4;
        goto code_r0x08003e0c;
    }
    if (obj.qcom_pmu_inited != 0x1) goto code_r0x08003e00;
    if (*(iVar11 + 0x148) == 0) goto code_r0x08003d98;
    arg1_00 = iVar11 + 8;
    iVar6 = sym.set_event(arg1_00,uVar10 & 0xffffffff,iVar7);
    if (-1 < iVar6) {
        if (*(iVar11 + 0x148) < 2) goto code_r0x08003d98;
        arg1_00 = iVar11 + 0x30;
        iVar6 = sym.set_event(arg1_00,uVar10 & 0xffffffff,iVar7);
        if (-1 < iVar6) {
            if (*(iVar11 + 0x148) < 3) goto code_r0x08003d98;
            arg1_00 = iVar11 + 0x58;
            iVar6 = sym.set_event(arg1_00,uVar10 & 0xffffffff,iVar7);
            if (-1 < iVar6) {
                if (*(iVar11 + 0x148) < 4) goto code_r0x08003d98;
                arg1_00 = iVar11 + 0x80;
                iVar6 = sym.set_event(arg1_00,uVar10 & 0xffffffff,iVar7);
                if (-1 < iVar6) {
                    if (*(iVar11 + 0x148) < 5) goto code_r0x08003d98;
                    arg1_00 = iVar11 + 0xa8;
                    iVar6 = sym.set_event(arg1_00,uVar10 & 0xffffffff,iVar7);
                    if (-1 < iVar6) {
                        if (*(iVar11 + 0x148) < 6) goto code_r0x08003d98;
                        arg1_00 = iVar11 + 0xd0;
                        iVar6 = sym.set_event(arg1_00,uVar10 & 0xffffffff,iVar7);
                        if (-1 < iVar6) {
                            if (*(iVar11 + 0x148) < 7) goto code_r0x08003d98;
                            arg1_00 = iVar11 + 0xf8;
                            iVar6 = sym.set_event(arg1_00,uVar10 & 0xffffffff,iVar7);
                            if (-1 < iVar6) {
                                if (*(iVar11 + 0x148) < 8) goto code_r0x08003d98;
                                arg1_00 = iVar11 + 0x120;
                                iVar6 = sym.set_event(arg1_00,uVar10 & 0xffffffff,iVar7);
                                if (-1 < iVar6) {
                                    if (*(iVar11 + 0x148) < 9) goto code_r0x08003d98;
                                    arg1_00 = iVar11 + 0x148;
                                    iVar6 = sym.set_event(arg1_00,uVar10 & 0xffffffff,iVar7);
                                    if (-1 < iVar6) {
                                        if (9 < *(iVar11 + 0x148)) goto code_r0x08003d74;
                                        goto code_r0x08003d98;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    _printk(0x800067c,*arg1_00,uVar10 & 0xffffffff,iVar6);
code_r0x08003d98:
    puVar9 = auStack_a0 + (uVar12 >> 3 & 0x1ffffff8);
    uVar10 = 1L << (uVar10 & 0x3f);
    auStack_a0[0] = 0;
    while( true ) {
        Hint_Prefetch(puVar9,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar9,0x10);
            if (bVar2) {
                *puVar9 = *puVar9 | uVar10;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        sym.configure_cpucp_map(auStack_a0[0]);
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(0,iVar4 + uVar12 * 0x28 + 0x24);
        }
        uVar8 = _raw_spin_lock_irqsave(iVar11 + 0x150);
        *(iVar11 + 1) = 0;
        _raw_spin_unlock_irqrestore(iVar11 + 0x150,uVar8);
code_r0x08003e00:
        kfree(iVar7);
        uVar10 = 0;
code_r0x08003e0c:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == auStack_a0[1]) break;
        __stack_chk_fail(uVar10);
        puVar9 = extraout_x8;
        uVar10 = extraout_x9;
    }
    return uVar10;
}


// ===== sym.qcom_pmu_hotplug_coming_up @ 0x08003b80 (size 748) =====

void sym.qcom_pmu_hotplug_coming_up(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t *extraout_x8;
    uint64_t *puVar9;
    uint64_t uVar10;
    uint64_t extraout_x9;
    ulong *in_x18;
    uint *arg1_00;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint64_t auStack_60 [2];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    auStack_60[1] = *(iVar7 + 0x5e0);
    iVar7 = kmem_cache_alloc_trace(_perf_event_read_value,0xdc0,0x80);
    if (iVar7 != 0) {
        *(iVar7 + 4) = 0x80;
        *(iVar7 + 0x28) = *(iVar7 + 0x28) | 4;
    }
    iVar4 = _segment.ehdr;
    if (0x1f < arg1) {
code_r0x08003d74:
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8003d78);
        (*pcVar5)();
    }
    uVar12 = arg1 & 0xffffffff;
    iVar11 = *(obj.cpu_ev_data + *(__per_cpu_offset + uVar12 * 8));
    auStack_60[0] = 0;
    if (iVar7 == 0) {
        uVar8 = 0xfffffff4;
        goto code_r0x08003e0c;
    }
    if (obj.qcom_pmu_inited != 0x1) goto code_r0x08003e00;
    if (*(iVar11 + 0x148) == 0) goto code_r0x08003d98;
    arg1_00 = iVar11 + 8;
    iVar6 = sym.set_event(arg1_00,arg1 & 0xffffffff,iVar7);
    if (-1 < iVar6) {
        if (*(iVar11 + 0x148) < 2) goto code_r0x08003d98;
        arg1_00 = iVar11 + 0x30;
        iVar6 = sym.set_event(arg1_00,arg1 & 0xffffffff,iVar7);
        if (-1 < iVar6) {
            if (*(iVar11 + 0x148) < 3) goto code_r0x08003d98;
            arg1_00 = iVar11 + 0x58;
            iVar6 = sym.set_event(arg1_00,arg1 & 0xffffffff,iVar7);
            if (-1 < iVar6) {
                if (*(iVar11 + 0x148) < 4) goto code_r0x08003d98;
                arg1_00 = iVar11 + 0x80;
                iVar6 = sym.set_event(arg1_00,arg1 & 0xffffffff,iVar7);
                if (-1 < iVar6) {
                    if (*(iVar11 + 0x148) < 5) goto code_r0x08003d98;
                    arg1_00 = iVar11 + 0xa8;
                    iVar6 = sym.set_event(arg1_00,arg1 & 0xffffffff,iVar7);
                    if (-1 < iVar6) {
                        if (*(iVar11 + 0x148) < 6) goto code_r0x08003d98;
                        arg1_00 = iVar11 + 0xd0;
                        iVar6 = sym.set_event(arg1_00,arg1 & 0xffffffff,iVar7);
                        if (-1 < iVar6) {
                            if (*(iVar11 + 0x148) < 7) goto code_r0x08003d98;
                            arg1_00 = iVar11 + 0xf8;
                            iVar6 = sym.set_event(arg1_00,arg1 & 0xffffffff,iVar7);
                            if (-1 < iVar6) {
                                if (*(iVar11 + 0x148) < 8) goto code_r0x08003d98;
                                arg1_00 = iVar11 + 0x120;
                                iVar6 = sym.set_event(arg1_00,arg1 & 0xffffffff,iVar7);
                                if (-1 < iVar6) {
                                    if (*(iVar11 + 0x148) < 9) goto code_r0x08003d98;
                                    arg1_00 = iVar11 + 0x148;
                                    iVar6 = sym.set_event(arg1_00,arg1 & 0xffffffff,iVar7);
                                    if (-1 < iVar6) {
                                        if (9 < *(iVar11 + 0x148)) goto code_r0x08003d74;
                                        goto code_r0x08003d98;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    _printk(0x800067c,*arg1_00,arg1 & 0xffffffff,iVar6);
code_r0x08003d98:
    puVar9 = auStack_60 + (uVar12 >> 3 & 0x1ffffff8);
    uVar10 = 1L << (arg1 & 0x3fU);
    auStack_60[0] = 0;
    while( true ) {
        Hint_Prefetch(puVar9,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar9,0x10);
            if (bVar2) {
                *puVar9 = *puVar9 | uVar10;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        sym.configure_cpucp_map(auStack_60[0]);
        if (_segment.ehdr != 0) {
            sym.writel_relaxed(0,iVar4 + uVar12 * 0x28 + 0x24);
        }
        uVar8 = _raw_spin_lock_irqsave(iVar11 + 0x150);
        *(iVar11 + 1) = 0;
        _raw_spin_unlock_irqrestore(iVar11 + 0x150,uVar8);
code_r0x08003e00:
        kfree(iVar7);
        uVar8 = 0;
code_r0x08003e0c:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == auStack_60[1]) break;
        __stack_chk_fail(uVar8);
        puVar9 = extraout_x8;
        uVar10 = extraout_x9;
    }
    return;
}


// ===== sym.qcom_pmu_hotplug_going_down @ 0x08003e6c (size 636) =====

uchar * sym.qcom_pmu_hotplug_going_down(uint32_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    ulong uVar7;
    uint64_t arg1_00;
    uchar *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint *puVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint64_t uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = _segment.ehdr;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    if (arg1 < 0x20) {
        if (obj.qcom_pmu_inited == 0x1) {
            iVar9 = *(obj.cpu_ev_data + *(__per_cpu_offset + arg1 * 8));
            uVar7 = _raw_spin_lock_irqsave(iVar9 + 0x150);
            *(iVar9 + 1) = 1;
            _raw_spin_unlock_irqrestore(iVar9 + 0x150,uVar7);
            iVar6 = *(iVar9 + 0x14c);
            while (0 < iVar6) {
                __const_udelay(0xa7c6);
                iVar6 = *(iVar9 + 0x14c);
            }
            if (*(iVar9 + 0x148) != 0) {
                uVar11 = 0;
                iVar10 = iVar10 + arg1 * 0x28;
                bVar4 = false;
                puVar12 = iVar9 + 0x18;
                do {
                    if (uVar11 == 9) goto code_r0x080040d8;
                    if (puVar12[-4] != 0) {
                        uVar2 = puVar12[4];
                        uVar3 = puVar12[5];
                        if ((*(puVar12 + -2) != 0) || (uVar2 < 4)) {
                            uStack_70 = 0;
                            uStack_80 = 0;
                            uStack_78 = 0;
                            uStack_88 = 0;
                            if (puVar12[4] < 4) {
                                uStack_88 = puVar12[4];
                                iVar6 = smp_call_function_single
                                                  (*puVar12,sym.read_amu_reg.7a5e0eb402a67213725a0fb989e80142.cfi_jt,
                                                   &stack0xffffffffffffff78,1);
                                arg1_00 = uStack_80;
                                if (iVar6 < 0) {
code_r0x08003fdc:
                                    arg1_00 = *(puVar12 + 2);
                                }
                            }
                            else {
                                if (*(puVar12 + -2) == 0) goto code_r0x08003fdc;
                                arg1_00 = perf_event_read_value
                                                    (*(puVar12 + -2),&stack0xffffffffffffff90,&stack0xffffffffffffff88
                                                    );
                            }
                            *(puVar12 + 2) = arg1_00;
                            if (((_segment.ehdr != 0) && (puVar12[5] < 9)) &&
                               (reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt[puVar12[5] * 0x10]
                                != 0x0)) {
                                if (3 < uVar2) {
                                    if (*(*(*(puVar12 + -2) + 0x98) + 0x138) < 6) {
                                        if (puVar12[-4] == 0x11) {
                                            arg1_00 = arg1_00 | 0xffffffff80000000;
                                        }
                                        else {
                                            arg1_00 = arg1_00 & 0x7fffffff | 0x80000000;
                                        }
                                    }
                                    else {
                                        uVar1 = 0x8000000000000000;
                                        if (obj.pmu_long_counter == 0x0) {
                                            uVar1 = 0xffffffff80000000;
                                        }
                                        arg1_00 = uVar1 | arg1_00;
                                    }
                                }
                                if (9 < uVar3) goto code_r0x080040d8;
                                sym.writel_relaxed(arg1_00,iVar10 + uVar3 * 4);
                                bVar4 = true;
                            }
                            if (*(puVar12 + -2) != 0) {
                                perf_event_release_kernel();
                                *(puVar12 + -2) = 0;
                            }
                        }
                    }
                    uVar11 = uVar11 + 1;
                    puVar12 = puVar12 + 10;
                } while (uVar11 < *(iVar9 + 0x148));
                if (bVar4) {
                    sym.writel_relaxed(1,iVar10 + 0x24);
                }
            }
        }
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) != iStack_68) {
            auVar13 = __stack_chk_fail();
            puVar8 = auVar13._0_8_;
            *extraout_x18 = 0x80040e0;
            if (puVar8 != NULL) {
                switch(*puVar8) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar8,auVar13._8_8_,0);
                    break;
                default:
                    return puVar8;
                }
            }
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5502,0x8004140);
            (*pcVar5)();
        }
        return NULL;
    }
code_r0x080040d8:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80040dc);
    (*pcVar5)();
}


// ===== sym.__cfi_check_fail @ 0x080040e8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800412c

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
    //switch table (4 cases) at 0x8000540
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004140);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080041fc (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08004230 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_pmu_driver_probe.7a5e0eb402a67213725a0fb989e80142.cfi_jt);
    return;
}

