// decompiled from cpu_voltage_cooling by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x08001b70

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x519d946a5cb8d608) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.cc_cooling_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x080010d8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001b30;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08001b30;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x519d946a5cb8d608) {
        pcVar2 = sym.cc_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 == 0x6b571d3f779580cd) {
            pcVar2 = sym.cc_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x080010d8;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001b30;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001b30:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b84);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cc_cooling_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cc_cooling_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cc_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001110 (size 8) =====

uint64_t sym.cc_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x3a8);
    if (*(iVar3 + 0x10) < param_2) {
        uVar2 = 0xffffffea;
    }
    else if (*(iVar3 + 0x14) == param_2) {
        uVar2 = 0;
    }
    else {
        *(iVar3 + 0x14) = param_2;
        uVar2 = freq_qos_update_request(iVar3 + 0x28,*(*(iVar3 + 0x20) + param_2 * 0x10));
        if (-1 < uVar2) {
            uVar1 = freq_qos_update_request(iVar3 + 0x70,*(*(iVar3 + 0x20) + param_2 * 0x10 + 8));
            uVar2 = uVar1 & uVar1 >> 0x1f;
        }
    }
    return uVar2;
}


// ===== sym.cc_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001118 (size 8) =====

ulong sym.cc_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    *param_2 = *(*(param_1 + 0x3a8) + 0x10);
    return 0;
}


// ===== sym.cc_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.cc_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    *param_2 = *(*(param_1 + 0x3a8) + 0x14);
    return 0;
}


// ===== sym.cc_cooling_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001128 (size 8) =====

uint64_t sym.cc_cooling_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    ulong *extraout_x1_01;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong extraout_x8_02;
    int64_t iVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    int64_t iVar21;
    code *pcVar22;
    uint64_t uVar23;
    code *pcVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint64_t uVar27;
    code *pcVar28;
    code *pcVar29;
    ulong unaff_x30;
    uchar auVar30 [16];
    ulong uStack_98;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t aiStack_78 [3];
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    aiStack_78[2] = *(iVar12 + 0x5e0);
    uVar11 = *(param_1 + 0x300);
    uStack_98 = 0;
    iVar12 = of_get_next_available_child(uVar11,0);
    if (iVar12 == 0) {
        pcVar28 = NULL;
    }
    else {
        uVar20 = 0;
        uVar26 = 0;
        uVar25 = 0;
        do {
            iVar13 = of_parse_phandle(iVar12,"qcom,cpus",0);
            uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x1 = extraout_x8;
            if (uVar8 < extraout_x8) {
                do {
                    iVar14 = get_cpu_device(uVar8);
                    if ((iVar14 != 0) && (*(iVar14 + 0x2f0) == iVar13)) {
                        uStack_98 = CONCAT44(uStack_98._4_4_,uVar8);
                        uVar25 = uVar8;
                        break;
                    }
                    uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                    *extraout_x1_00 = extraout_x8_00;
                } while (uVar8 < extraout_x8_00);
            }
            iVar13 = of_parse_phandle(iVar12,"qcom,cpus",1);
            uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x1_01 = extraout_x8_01;
            if (uVar8 < extraout_x8_01) {
                uVar27 = uVar8;
                do {
                    iVar14 = get_cpu_device(uVar27);
                    if ((iVar14 != 0) && (*(iVar14 + 0x2f0) == iVar13)) {
                        uVar26 = uVar27;
                        uStack_98 = CONCAT44(uVar26,uStack_98);
                        uVar20 = uVar27;
                        break;
                    }
                    auVar30 = cpumask_next(uVar27,__cpu_possible_mask);
                    *auVar30._8_8_ = extraout_x8_02;
                    uVar27 = auVar30._0_8_ & 0xffffffff;
                } while (auVar30._0_4_ < extraout_x8_02);
            }
            mutex_lock(obj.cc_list_lock);
            for (pcVar28 = _obj.cc_cdev_list; pcVar28 != obj.cc_cdev_list; pcVar28 = *pcVar28) {
                if ((uVar25 == *(pcVar28 + 0x18) && uVar26 == *(pcVar28 + 0x1c)) ||
                   ((uVar25 == *(pcVar28 + 0x1c) && (uVar26 == *(pcVar28 + 0x18))))) {
                    mutex_unlock(obj.cc_list_lock);
                    pcVar28 = NULL;
                    goto code_r0x080011b0;
                }
            }
            iVar13 = cpufreq_cpu_get(uVar25);
            if (iVar13 == 0) {
                _printk(0x80002e9,"cpu_voltage_cooling","cc_init",uVar25);
                mutex_unlock(obj.cc_list_lock);
                pcVar28 = 0xfffffdfb;
            }
            else {
                uVar26 = uVar20;
                if ((*(iVar13 + (uVar20 >> 6) * 8 + 8) >> (uVar20 & 0x3f) & 1) == 0) {
                    cpufreq_cpu_put(iVar13);
                    iStack_88 = 0;
                    iStack_80 = 0;
                    iVar13 = get_cpu_device(uVar25);
                    if (iVar13 == 0) {
                        uVar27 = uVar25;
code_r0x08001754:
                        _printk(0x800030f,"cpu_voltage_cooling","opp_init",uVar27);
                        pcVar28 = 0xffffffffffffffed;
                    }
                    else {
                        iVar14 = get_cpu_device(uVar20);
                        uVar27 = uVar20;
                        if (iVar14 == 0) goto code_r0x08001754;
                        uVar9 = sym.fetch_opp_table(iVar13,&iStack_80);
                        uVar8 = uVar9 - 1;
                        uStack_90 = uVar9;
                        if (uVar9 < 1) {
code_r0x08001660:
                            pcVar22 = NULL;
code_r0x08001664:
                            kfree(iStack_80);
                            kfree(iStack_88);
                            if (pcVar22 != NULL) {
                                kfree(*(pcVar22 + 0x20));
                                kfree(pcVar22);
                            }
                            pcVar28 = 0xfffffffffffffdfb;
                        }
                        else {
                            uVar10 = sym.fetch_opp_table(iVar14,&iStack_88);
                            uStack_8c = uVar10;
                            if (uVar10 < 1) goto code_r0x08001660;
                            pcVar22 = kmem_cache_alloc_trace(_nr_cpu_ids,0xdc0,0xd8);
                            iVar14 = iStack_80;
                            iVar13 = iStack_88;
                            if (pcVar22 == NULL) goto code_r0x08001660;
                            aiStack_78[0] = iStack_80;
                            aiStack_78[1] = iStack_88;
                            uVar3 = *(iStack_80 + uVar8 * 0x10 + 8);
                            uVar4 = *(iStack_88 + (uVar10 - 1) * 0x10 + 8);
                            uVar3 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
                            if (uVar3 < uVar4) {
code_r0x080013f0:
                                iVar17 = 0;
                                iVar16 = 1;
                                uVar27 = uVar10;
                                uVar8 = uVar10 - 1;
                            }
                            else {
                                iVar16 = 0;
                                iVar17 = 1;
                                uVar27 = uVar9;
                                if ((uVar3 == uVar4) && (uVar9 < uVar10)) goto code_r0x080013f0;
                            }
                            uVar5 = *(&uStack_98 | iVar16 << 2);
                            uVar6 = *(&uStack_98 | iVar17 << 2);
                            *(pcVar22 + 0x10) = uVar8;
                            *(pcVar22 + 0x14) = 0;
                            pcVar24 = pcVar22 + 0x18;
                            *pcVar24 = uVar5;
                            pcVar29 = pcVar22 + 0x1c;
                            *pcVar29 = uVar6;
                            iVar15 = __kmalloc(uVar27 << 4,0xdc0);
                            if (iVar15 == 0) goto code_r0x08001664;
                            _printk(0x80001f4,"cpu_voltage_cooling","build_unified_table",uVar5,uVar6);
                            uVar23 = 0;
                            iVar21 = aiStack_78[iVar17];
                            iVar16 = aiStack_78[iVar16];
                            uVar19 = *(&uStack_90 | iVar17 << 2) - 1;
                            do {
                                puVar1 = iVar16 + uVar8 * 0x10;
                                iVar7 = *(puVar1 + 1);
                                *(iVar15 + uVar23 * 0x10) = *puVar1;
                                if (-1 < uVar19) {
                                    do {
                                        if (*(iVar21 + uVar19 * 0x10 + 8) <= iVar7) goto code_r0x080014f8;
                                        iVar18 = uVar19;
                                        uVar19 = iVar18 - 1;
                                    } while (0 < iVar18);
                                }
                                uVar19 = 0;
code_r0x080014f8:
                                *(iVar15 + uVar23 * 0x10 + 8) = *(iVar21 + uVar19 * 0x10);
                                _printk(0x8000248,"cpu_voltage_cooling","build_unified_table");
                                uVar23 = uVar23 + 1;
                                uVar8 = uVar8 - 1;
                            } while (uVar23 != uVar27);
                            *(pcVar22 + 0x20) = iVar15;
                            kfree(iVar14);
                            kfree(iVar13);
                            pcVar28 = pcVar22;
                            if (pcVar22 < 0xfffffffffffff001) {
                                iVar13 = cpufreq_cpu_get(*pcVar24);
                                if (iVar13 == 0) {
code_r0x08001798:
                                    _printk(0x800026d,"cpu_voltage_cooling","cc_init",*pcVar24);
                                    pcVar28 = 0xffffffed;
                                }
                                else {
                                    uVar27 = freq_qos_add_request(iVar13 + 0xa0,pcVar22 + 0x28,2,**(pcVar22 + 0x20));
                                    cpufreq_cpu_put(iVar13);
                                    if (-1 < uVar27) {
                                        iVar13 = cpufreq_cpu_get(*pcVar29);
                                        pcVar24 = pcVar29;
                                        if (iVar13 == 0) goto code_r0x08001798;
                                        uVar27 = freq_qos_add_request
                                                           (iVar13 + 0xa0,pcVar22 + 0x70,2,*(*(pcVar22 + 0x20) + 8));
                                        cpufreq_cpu_put(iVar13);
                                        if (-1 < uVar27) {
                                            uVar25 = uStack_98;
                                            uVar26 = uStack_98._4_4_;
                                            uVar20 = uStack_98._4_4_;
                                            snprintf(pcVar22 + 0xb8,0x14,"thermal-cluster-%d-%d",
                                                     uStack_98 & 0xffffffff,uVar20);
                                            iVar13 = thermal_of_cooling_device_register
                                                               (iVar12,pcVar22 + 0xb8,pcVar22,
                                                                
                                                            reloc.cc_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                            );
                                            *(pcVar22 + 0xd0) = iVar13;
                                            pcVar28 = _obj.cc_cdev_list;
                                            uVar27 = __list_add_valid(pcVar22,obj.cc_cdev_list,_obj.cc_cdev_list);
                                            if ((uVar27 & 1) != 0) {
                                                *(pcVar28 + 8) = pcVar22;
                                                *pcVar22 = pcVar28;
                                                *(pcVar22 + 8) = obj.cc_cdev_list;
                                                _obj.cc_cdev_list = pcVar22;
                                            }
                                            mutex_unlock(obj.cc_list_lock);
                                            pcVar28 = NULL;
                                            goto code_r0x080011b0;
                                        }
                                    }
                                    pcVar28 = uVar27 & 0xffffffff;
                                    _printk(0x800020d,"cpu_voltage_cooling","cc_init",*pcVar24,pcVar28);
                                }
                                mutex_unlock(obj.cc_list_lock);
                                freq_qos_remove_request(pcVar22 + 0x28);
                                freq_qos_remove_request(pcVar22 + 0x70);
                                kfree(*(pcVar22 + 0x20));
                                kfree(pcVar22);
                                goto code_r0x080011b0;
                            }
                        }
                    }
                    mutex_unlock(obj.cc_list_lock);
                }
                else {
                    _printk(0x800029f,"cpu_voltage_cooling","cc_init",uVar25,uVar20);
                    cpufreq_cpu_put(iVar13);
                    mutex_unlock(obj.cc_list_lock);
                    pcVar28 = 0xffffffea;
                }
            }
code_r0x080011b0:
            iVar12 = of_get_next_available_child(uVar11,iVar12);
        } while (iVar12 != 0);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == aiStack_78[2]) {
        return pcVar28 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cc_cooling_remove;
    mutex_lock(obj.cc_list_lock);
    pcVar28 = _obj.cc_cdev_list;
    if (_obj.cc_cdev_list != obj.cc_cdev_list) {
        do {
            pcVar22 = *pcVar28;
            if (*(pcVar28 + 0xd0) != 0) {
                thermal_cooling_device_unregister();
            }
            uVar20 = __list_del_entry_valid(pcVar28);
            if ((uVar20 & 1) != 0) {
                iVar12 = *pcVar28;
                piVar2 = *(pcVar28 + 8);
                *(iVar12 + 8) = piVar2;
                *piVar2 = iVar12;
            }
            *pcVar28 = -0x2152ffffffffff00;
            *(pcVar28 + 8) = -0x2152fffffffffede;
            freq_qos_remove_request(pcVar28 + 0x28);
            freq_qos_remove_request(pcVar28 + 0x70);
            kfree(*(pcVar28 + 0x20));
            kfree(pcVar28);
            pcVar28 = pcVar22;
        } while (pcVar22 != obj.cc_cdev_list);
    }
    mutex_unlock(obj.cc_list_lock);
    return 0;
}


// ===== sym.cc_cooling_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001130 (size 8) =====

ulong sym.cc_cooling_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cc_list_lock);
    pcVar4 = _obj.cc_cdev_list;
    if (_obj.cc_cdev_list != obj.cc_cdev_list) {
        do {
            pcVar5 = *pcVar4;
            if (*(pcVar4 + 0xd0) != 0) {
                thermal_cooling_device_unregister();
            }
            uVar3 = __list_del_entry_valid(pcVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *pcVar4;
                piVar2 = *(pcVar4 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            freq_qos_remove_request(pcVar4 + 0x28);
            freq_qos_remove_request(pcVar4 + 0x70);
            kfree(*(pcVar4 + 0x20));
            kfree(pcVar4);
            pcVar4 = pcVar5;
        } while (pcVar5 != obj.cc_cdev_list);
    }
    mutex_unlock(obj.cc_list_lock);
    return 0;
}


// ===== sym.cc_cooling_probe @ 0x08001138 (size 1796) =====

uint64_t sym.cc_cooling_probe(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    ulong *extraout_x1_01;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong extraout_x8_01;
    ulong extraout_x8_02;
    int64_t iVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    int64_t iVar21;
    code *pcVar22;
    uint64_t uVar23;
    code *pcVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint64_t uVar27;
    code *pcVar28;
    code *pcVar29;
    ulong unaff_x30;
    uchar auVar30 [16];
    ulong uStack_98;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t aiStack_78 [3];
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    aiStack_78[2] = *(iVar12 + 0x5e0);
    uVar11 = *(arg1 + 0x300);
    uStack_98 = 0;
    iVar12 = of_get_next_available_child(uVar11,0);
    if (iVar12 == 0) {
        pcVar28 = NULL;
    }
    else {
        uVar20 = 0;
        uVar26 = 0;
        uVar25 = 0;
        do {
            iVar13 = of_parse_phandle(iVar12,"qcom,cpus",0);
            uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x1 = extraout_x8;
            if (uVar8 < extraout_x8) {
                do {
                    iVar14 = get_cpu_device(uVar8);
                    if ((iVar14 != 0) && (*(iVar14 + 0x2f0) == iVar13)) {
                        uStack_98 = CONCAT44(uStack_98._4_4_,uVar8);
                        uVar25 = uVar8;
                        break;
                    }
                    uVar8 = cpumask_next(uVar8,__cpu_possible_mask);
                    *extraout_x1_00 = extraout_x8_00;
                } while (uVar8 < extraout_x8_00);
            }
            iVar13 = of_parse_phandle(iVar12,"qcom,cpus",1);
            uVar8 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x1_01 = extraout_x8_01;
            if (uVar8 < extraout_x8_01) {
                uVar27 = uVar8;
                do {
                    iVar14 = get_cpu_device(uVar27);
                    if ((iVar14 != 0) && (*(iVar14 + 0x2f0) == iVar13)) {
                        uVar26 = uVar27;
                        uStack_98 = CONCAT44(uVar26,uStack_98);
                        uVar20 = uVar27;
                        break;
                    }
                    auVar30 = cpumask_next(uVar27,__cpu_possible_mask);
                    *auVar30._8_8_ = extraout_x8_02;
                    uVar27 = auVar30._0_8_ & 0xffffffff;
                } while (auVar30._0_4_ < extraout_x8_02);
            }
            mutex_lock(obj.cc_list_lock);
            for (pcVar28 = _obj.cc_cdev_list; pcVar28 != obj.cc_cdev_list; pcVar28 = *pcVar28) {
                if ((uVar25 == *(pcVar28 + 0x18) && uVar26 == *(pcVar28 + 0x1c)) ||
                   ((uVar25 == *(pcVar28 + 0x1c) && (uVar26 == *(pcVar28 + 0x18))))) {
                    mutex_unlock(obj.cc_list_lock);
                    pcVar28 = NULL;
                    goto code_r0x080011b0;
                }
            }
            iVar13 = cpufreq_cpu_get(uVar25);
            if (iVar13 == 0) {
                _printk(0x80002e9,"cpu_voltage_cooling","cc_init",uVar25);
                mutex_unlock(obj.cc_list_lock);
                pcVar28 = 0xfffffdfb;
            }
            else {
                uVar26 = uVar20;
                if ((*(iVar13 + (uVar20 >> 6) * 8 + 8) >> (uVar20 & 0x3f) & 1) == 0) {
                    cpufreq_cpu_put(iVar13);
                    iStack_88 = 0;
                    iStack_80 = 0;
                    iVar13 = get_cpu_device(uVar25);
                    if (iVar13 == 0) {
                        uVar27 = uVar25;
code_r0x08001754:
                        _printk(0x800030f,"cpu_voltage_cooling","opp_init",uVar27);
                        pcVar28 = 0xffffffffffffffed;
                    }
                    else {
                        iVar14 = get_cpu_device(uVar20);
                        uVar27 = uVar20;
                        if (iVar14 == 0) goto code_r0x08001754;
                        uVar9 = sym.fetch_opp_table(iVar13,&iStack_80);
                        uVar8 = uVar9 - 1;
                        uStack_90 = uVar9;
                        if (uVar9 < 1) {
code_r0x08001660:
                            pcVar22 = NULL;
code_r0x08001664:
                            kfree(iStack_80);
                            kfree(iStack_88);
                            if (pcVar22 != NULL) {
                                kfree(*(pcVar22 + 0x20));
                                kfree(pcVar22);
                            }
                            pcVar28 = 0xfffffffffffffdfb;
                        }
                        else {
                            uVar10 = sym.fetch_opp_table(iVar14,&iStack_88);
                            uStack_8c = uVar10;
                            if (uVar10 < 1) goto code_r0x08001660;
                            pcVar22 = kmem_cache_alloc_trace(_nr_cpu_ids,0xdc0,0xd8);
                            iVar14 = iStack_80;
                            iVar13 = iStack_88;
                            if (pcVar22 == NULL) goto code_r0x08001660;
                            aiStack_78[0] = iStack_80;
                            aiStack_78[1] = iStack_88;
                            uVar3 = *(iStack_80 + uVar8 * 0x10 + 8);
                            uVar4 = *(iStack_88 + (uVar10 - 1) * 0x10 + 8);
                            uVar3 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
                            if (uVar3 < uVar4) {
code_r0x080013f0:
                                iVar17 = 0;
                                iVar16 = 1;
                                uVar27 = uVar10;
                                uVar8 = uVar10 - 1;
                            }
                            else {
                                iVar16 = 0;
                                iVar17 = 1;
                                uVar27 = uVar9;
                                if ((uVar3 == uVar4) && (uVar9 < uVar10)) goto code_r0x080013f0;
                            }
                            uVar5 = *(&uStack_98 | iVar16 << 2);
                            uVar6 = *(&uStack_98 | iVar17 << 2);
                            *(pcVar22 + 0x10) = uVar8;
                            *(pcVar22 + 0x14) = 0;
                            pcVar24 = pcVar22 + 0x18;
                            *pcVar24 = uVar5;
                            pcVar29 = pcVar22 + 0x1c;
                            *pcVar29 = uVar6;
                            iVar15 = __kmalloc(uVar27 << 4,0xdc0);
                            if (iVar15 == 0) goto code_r0x08001664;
                            _printk(0x80001f4,"cpu_voltage_cooling","build_unified_table",uVar5,uVar6);
                            uVar23 = 0;
                            iVar21 = aiStack_78[iVar17];
                            iVar16 = aiStack_78[iVar16];
                            uVar19 = *(&uStack_90 | iVar17 << 2) - 1;
                            do {
                                puVar1 = iVar16 + uVar8 * 0x10;
                                iVar7 = *(puVar1 + 1);
                                *(iVar15 + uVar23 * 0x10) = *puVar1;
                                if (-1 < uVar19) {
                                    do {
                                        if (*(iVar21 + uVar19 * 0x10 + 8) <= iVar7) goto code_r0x080014f8;
                                        iVar18 = uVar19;
                                        uVar19 = iVar18 - 1;
                                    } while (0 < iVar18);
                                }
                                uVar19 = 0;
code_r0x080014f8:
                                *(iVar15 + uVar23 * 0x10 + 8) = *(iVar21 + uVar19 * 0x10);
                                _printk(0x8000248,"cpu_voltage_cooling","build_unified_table");
                                uVar23 = uVar23 + 1;
                                uVar8 = uVar8 - 1;
                            } while (uVar23 != uVar27);
                            *(pcVar22 + 0x20) = iVar15;
                            kfree(iVar14);
                            kfree(iVar13);
                            pcVar28 = pcVar22;
                            if (pcVar22 < 0xfffffffffffff001) {
                                iVar13 = cpufreq_cpu_get(*pcVar24);
                                if (iVar13 == 0) {
code_r0x08001798:
                                    _printk(0x800026d,"cpu_voltage_cooling","cc_init",*pcVar24);
                                    pcVar28 = 0xffffffed;
                                }
                                else {
                                    uVar27 = freq_qos_add_request(iVar13 + 0xa0,pcVar22 + 0x28,2,**(pcVar22 + 0x20));
                                    cpufreq_cpu_put(iVar13);
                                    if (-1 < uVar27) {
                                        iVar13 = cpufreq_cpu_get(*pcVar29);
                                        pcVar24 = pcVar29;
                                        if (iVar13 == 0) goto code_r0x08001798;
                                        uVar27 = freq_qos_add_request
                                                           (iVar13 + 0xa0,pcVar22 + 0x70,2,*(*(pcVar22 + 0x20) + 8));
                                        cpufreq_cpu_put(iVar13);
                                        if (-1 < uVar27) {
                                            uVar25 = uStack_98;
                                            uVar26 = uStack_98._4_4_;
                                            uVar20 = uStack_98._4_4_;
                                            snprintf(pcVar22 + 0xb8,0x14,"thermal-cluster-%d-%d",
                                                     uStack_98 & 0xffffffff,uVar20);
                                            iVar13 = thermal_of_cooling_device_register
                                                               (iVar12,pcVar22 + 0xb8,pcVar22,
                                                                
                                                            reloc.cc_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                            );
                                            *(pcVar22 + 0xd0) = iVar13;
                                            pcVar28 = _obj.cc_cdev_list;
                                            uVar27 = __list_add_valid(pcVar22,obj.cc_cdev_list,_obj.cc_cdev_list);
                                            if ((uVar27 & 1) != 0) {
                                                *(pcVar28 + 8) = pcVar22;
                                                *pcVar22 = pcVar28;
                                                *(pcVar22 + 8) = obj.cc_cdev_list;
                                                _obj.cc_cdev_list = pcVar22;
                                            }
                                            mutex_unlock(obj.cc_list_lock);
                                            pcVar28 = NULL;
                                            goto code_r0x080011b0;
                                        }
                                    }
                                    pcVar28 = uVar27 & 0xffffffff;
                                    _printk(0x800020d,"cpu_voltage_cooling","cc_init",*pcVar24,pcVar28);
                                }
                                mutex_unlock(obj.cc_list_lock);
                                freq_qos_remove_request(pcVar22 + 0x28);
                                freq_qos_remove_request(pcVar22 + 0x70);
                                kfree(*(pcVar22 + 0x20));
                                kfree(pcVar22);
                                goto code_r0x080011b0;
                            }
                        }
                    }
                    mutex_unlock(obj.cc_list_lock);
                }
                else {
                    _printk(0x800029f,"cpu_voltage_cooling","cc_init",uVar25,uVar20);
                    cpufreq_cpu_put(iVar13);
                    mutex_unlock(obj.cc_list_lock);
                    pcVar28 = 0xffffffea;
                }
            }
code_r0x080011b0:
            iVar12 = of_get_next_available_child(uVar11,iVar12);
        } while (iVar12 != 0);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == aiStack_78[2]) {
        return pcVar28 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cc_cooling_remove;
    mutex_lock(obj.cc_list_lock);
    pcVar28 = _obj.cc_cdev_list;
    if (_obj.cc_cdev_list != obj.cc_cdev_list) {
        do {
            pcVar22 = *pcVar28;
            if (*(pcVar28 + 0xd0) != 0) {
                thermal_cooling_device_unregister();
            }
            uVar20 = __list_del_entry_valid(pcVar28);
            if ((uVar20 & 1) != 0) {
                iVar12 = *pcVar28;
                piVar2 = *(pcVar28 + 8);
                *(iVar12 + 8) = piVar2;
                *piVar2 = iVar12;
            }
            *pcVar28 = -0x2152ffffffffff00;
            *(pcVar28 + 8) = -0x2152fffffffffede;
            freq_qos_remove_request(pcVar28 + 0x28);
            freq_qos_remove_request(pcVar28 + 0x70);
            kfree(*(pcVar28 + 0x20));
            kfree(pcVar28);
            pcVar28 = pcVar22;
        } while (pcVar22 != obj.cc_cdev_list);
    }
    mutex_unlock(obj.cc_list_lock);
    return 0;
}


// ===== sym.cc_cooling_remove @ 0x0800183c (size 204) =====

ulong sym.cc_cooling_remove(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cc_list_lock);
    pcVar4 = _obj.cc_cdev_list;
    if (_obj.cc_cdev_list != obj.cc_cdev_list) {
        do {
            pcVar5 = *pcVar4;
            if (*(pcVar4 + 0xd0) != 0) {
                thermal_cooling_device_unregister();
            }
            uVar3 = __list_del_entry_valid(pcVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *pcVar4;
                piVar2 = *(pcVar4 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            freq_qos_remove_request(pcVar4 + 0x28);
            freq_qos_remove_request(pcVar4 + 0x70);
            kfree(*(pcVar4 + 0x20));
            kfree(pcVar4);
            pcVar4 = pcVar5;
        } while (pcVar5 != obj.cc_cdev_list);
    }
    mutex_unlock(obj.cc_list_lock);
    return 0;
}


// ===== sym.fetch_opp_table @ 0x08001908 (size 352) =====

uint64_t sym.fetch_opp_table(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_70 = 0;
    uVar1 = dev_pm_opp_get_opp_count();
    uVar5 = uVar1;
    if (0 < uVar1) {
        iVar2 = __kmalloc(uVar5 * 0x10,0xdc0);
        if (iVar2 == 0) {
            uVar5 = 0xfffffff4;
        }
        else {
            iVar6 = 0;
            do {
                uVar3 = dev_pm_opp_find_freq_ceil(arg1,&uStack_70);
                if (0xfffffffffffff000 < uVar3) {
                    _printk(0x80001d7,"cpu_voltage_cooling","fetch_opp_table");
                    kfree(iVar2);
                    uVar5 = 0xffffffea;
                    goto code_r0x080019f8;
                }
                *(iVar2 + iVar6) = uStack_70 / 1000;
                uVar4 = dev_pm_opp_get_voltage();
                (iVar2 + iVar6)[1] = uVar4 / 1000;
                dev_pm_opp_put(uVar3);
                iVar6 = iVar6 + 0x10;
                uStack_70 = uStack_70 + 1;
            } while (uVar5 * 0x10 - iVar6 != 0);
            *arg2 = iVar2;
        }
    }
code_r0x080019f8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar7 = __stack_chk_fail();
    *auVar7._8_8_ = *(*(auVar7._0_8_ + 0x3a8) + 0x10);
    return 0;
}


// ===== sym.cc_get_max_state @ 0x08001a68 (size 28) =====

ulong sym.cc_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x3a8) + 0x10);
    return 0;
}


// ===== sym.cc_get_cur_state @ 0x08001a84 (size 28) =====

ulong sym.cc_get_cur_state(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x3a8) + 0x14);
    return 0;
}


// ===== sym.cc_set_cur_state @ 0x08001aa0 (size 140) =====

uint64_t sym.cc_set_cur_state(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    uVar3 = arg2;
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x3a8);
    if (*(iVar4 + 0x10) < uVar3) {
        uVar2 = 0xffffffea;
    }
    else if (*(iVar4 + 0x14) == uVar3) {
        uVar2 = 0;
    }
    else {
        *(iVar4 + 0x14) = arg2;
        uVar2 = freq_qos_update_request(iVar4 + 0x28,*(*(iVar4 + 0x20) + uVar3 * 0x10));
        if (-1 < uVar2) {
            uVar1 = freq_qos_update_request(iVar4 + 0x70,*(*(iVar4 + 0x20) + uVar3 * 0x10 + 8));
            uVar2 = uVar1 & uVar1 >> 0x1f;
        }
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x08001b2c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001b70

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
    //switch table (4 cases) at 0x80001a8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b84);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001b94 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cc_cooling_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001bc8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cc_cooling_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

