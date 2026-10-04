// decompiled from coresight-cti by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 576) =====

//WARNING: Switch with 1 destination removed at 0x08004264

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x3a4aa1703f90ff56) {
        if (-0x333e5f8f10676d43 < arg1) {
            if (arg1 == -0x333e5f8f10676d42) {
                pcVar2 = sym.cti_probe.0b2860deecf0024ca480057a9d0b4816.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) {
                    if ((arg1 == 0x1e3d0ffe3d0499e9) && ((pcVar1 + -0x80023e8 >> 3 | pcVar1 << 0x3d) < 0x16)) {
                        return;
                    }
                    goto code_r0x08004224;
                }
                pcVar2 = sym.init_module.cfi_jt;
            }
            goto code_r0x08002230;
        }
        if (arg1 == -0x66d421a09845f9f8) {
            if ((pcVar1 + -0x80022b8 >> 3 | pcVar1 << 0x3d) < 0x26) {
                return;
            }
            goto code_r0x08004224;
        }
        if (arg1 == -0x57be845bca9148ef) {
            pcVar2 = sym.cti_freeze.0b2860deecf0024ca480057a9d0b4816.cfi_jt;
        }
        else {
            if (arg1 != -0x53c887a672ae5243) goto code_r0x08004224;
            pcVar2 = sym.cti_dying_cpu.0b2860deecf0024ca480057a9d0b4816.cfi_jt;
        }
    }
    else if (arg1 < 0x76439dfb02cc8756) {
        if (arg1 != 0x3a4aa1703f90ff56) {
            if (arg1 == 0x5b83a3fd302a5421) {
                pcVar2 = sym.__typeid__ZTSFvP6deviceE_global_addr;
            }
            else {
                if (arg1 != 0x5ca94cbce5f388f2) goto code_r0x08004224;
                pcVar2 = sym.cti_remove.0b2860deecf0024ca480057a9d0b4816.cfi_jt;
            }
code_r0x08002230:
            if (pcVar1 == pcVar2) {
                return;
            }
            goto code_r0x08004224;
        }
        pcVar2 = sym.cti_remove_assoc_from_csdev.0b2860deecf0024ca480057a9d0b4816.cfi_jt;
    }
    else {
        if (arg1 != 0x76439dfb02cc8756) {
            if (arg1 == 0x7d57972cd3914fb1) {
                pcVar2 = sym.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt;
            }
            else {
                if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004224;
                pcVar2 = sym.cleanup_module.cfi_jt;
            }
            goto code_r0x08002230;
        }
        pcVar2 = sym.cti_disable.cfi_jt;
    }
    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
        return;
    }
code_r0x08004224:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004278);
    (*pcVar1)();
}


// ===== sym.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt @ 0x08002248 (size 8) =====

ulong sym.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong uVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = tpidr_el1;
    uVar1 = *(cpu_number + iVar4);
    if (0x1f < uVar1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8003fc0);
        (*pcVar2)();
    }
    iVar4 = *(obj.cti_cpu_drvdata + uVar1 * 8);
    if (iVar4 == 0) {
        return 1;
    }
    if (*(iVar4 + 0x28) != uVar1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8003fb8);
        (*pcVar2)();
    }
    uVar6 = *(iVar4 + 8);
    _raw_spin_lock(iVar4 + 0x38);
    if (param_2 == 2) {
        *(iVar4 + 0x4c) = 0x100;
        if (*(iVar4 + 0x48) != 0) {
            iVar3 = coresight_claim_device(uVar6);
            uVar5 = 1;
            if (iVar3 == 0) {
                *(iVar4 + 0x4c) = 1;
                sym.cti_write_all_hw_regs(iVar4);
            }
            goto code_r0x08003f8c;
        }
    }
    else {
        if (param_2 == 1) {
            *(iVar4 + 0x4d) = 1;
            uVar5 = 1;
            if (*(iVar4 + 0x4c) != '\0') {
                iVar3 = coresight_claim_device(uVar6);
                uVar5 = 1;
                if (iVar3 != 0) {
                    *(iVar4 + 0x4c) = 0;
                }
            }
            goto code_r0x08003f8c;
        }
        if (param_2 != 0) {
            uVar5 = 0;
            goto code_r0x08003f8c;
        }
        *(iVar4 + 0x4d) = 0;
        if (*(iVar4 + 0x4c) != '\0') {
            coresight_disclaim_device(uVar6);
        }
    }
    uVar5 = 1;
code_r0x08003f8c:
    _raw_spin_unlock(iVar4 + 0x38);
    return uVar5;
}


// ===== sym.cti_remove.0b2860deecf0024ca480057a9d0b4816.cfi_jt @ 0x08002250 (size 8) =====

ulong sym.cti_remove.0b2860deecf0024ca480057a9d0b4816.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong *puVar3;
    ulong unaff_x30;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iVar2 = *(param_1 + 0x98);
    mutex_lock(obj.ect_mutex);
    sym.cti_disable_hw(iVar2);
    for (puVar3 = *(iVar2 + 0x18); iVar2 + 0x18 != puVar3; puVar3 = *puVar3) {
        if (puVar3[-2] != 0) {
            coresight_set_assoc_ectdev_mutex(puVar3[-2],0);
            iStack_58 = *(iVar2 + 8);
            uStack_50 = puVar3[-1];
            iStack_40 = *(iStack_58 + 0xa8);
            uStack_48 = puVar3[-2];
            if (iStack_40 == 0) {
                iStack_40 = *(iStack_58 + 0x38);
            }
            coresight_remove_sysfs_link(&iStack_58);
            puVar3[-2] = 0;
        }
    }
    mutex_unlock(obj.ect_mutex);
    uVar1 = coresight_unregister(*(iVar2 + 8));
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.cti_freeze;
    iVar2 = *(iVar2 + 0x98);
    if (*(iVar2 + 0x4c) != '\0') {
        *(iVar2 + 0x4e) = 1;
        sym.cti_disable_hw(*(*(*(iVar2 + 8) + 0x98) + 0x98));
    }
    return 0;
}


// ===== sym.cti_dying_cpu.0b2860deecf0024ca480057a9d0b4816.cfi_jt @ 0x08002258 (size 8) =====

ulong sym.cti_dying_cpu.0b2860deecf0024ca480057a9d0b4816.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (param_1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar2 = *(obj.cti_cpu_drvdata + param_1 * 8);
        if (iVar2 != 0) {
            _raw_spin_lock(iVar2 + 0x38);
            *(iVar2 + 0x4d) = 0;
            if (*(iVar2 + 0x4c) != '\0') {
                coresight_disclaim_device(*(iVar2 + 8));
            }
            _raw_spin_unlock(iVar2 + 0x38);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003e94);
    (*pcVar1)();
}


// ===== sym.cti_starting_cpu.0b2860deecf0024ca480057a9d0b4816.cfi_jt @ 0x08002260 (size 8) =====

ulong sym.cti_starting_cpu.0b2860deecf0024ca480057a9d0b4816.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    if (param_1 < 0x20) {
        *in_x18 = unaff_x30;
        arg1 = *(obj.cti_cpu_drvdata + param_1 * 8);
        if (arg1 != 0) {
            _raw_spin_lock(arg1 + 0x38);
            *(arg1 + 0x4d) = 1;
            if ((*(arg1 + 0x48) != 0) && (iVar2 = coresight_claim_device(*(arg1 + 8)), iVar2 == 0)) {
                sym.cti_write_all_hw_regs(arg1);
                *(arg1 + 0x4c) = 1;
            }
            _raw_spin_unlock(arg1 + 0x38);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003e1c);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x08002268 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = amba_driver_register(obj.cti_driver);
    if (iVar1 != 0) {
        _printk(0x800126c);
    }
    coresight_set_cti_ops(reloc.cti_add_assoc_to_csdev.0b2860deecf0024ca480057a9d0b4816.cfi_jt);
    return iVar1;
}


// ===== sym.__typeid__ZTSFvP6deviceE_global_addr @ 0x08002270 (size 8) =====

void sym.__typeid__ZTSFvP6deviceE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar6 = *(*(param_1 + 0x60) + 0x98);
    mutex_lock(obj.ect_mutex);
    uVar3 = *(pcVar6 + 0x28);
    if (uVar3 != 0xffffffff) {
        if (0x1f < uVar3) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8003c88);
            (*pcVar6)();
        }
        *(obj.cti_cpu_drvdata + uVar3 * 8) = 0;
        _segment.ehdr = _segment.ehdr + -1;
        if (_segment.ehdr == 0) {
            cpu_pm_unregister_notifier(reloc.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt);
            __cpuhp_remove_state(0x8f,0);
        }
    }
    pcVar5 = obj.ect_net;
    do {
        pcVar5 = *pcVar5;
        if (pcVar5 == obj.ect_net) goto code_r0x08003c40;
    } while (pcVar5 + -0x498 != pcVar6);
    uVar4 = __list_del_entry_valid(pcVar5);
    if ((uVar4 & 1) != 0) {
        iVar1 = *pcVar5;
        piVar2 = *(pcVar5 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *pcVar5 = 0xdead000000000100;
    *(pcVar5 + 8) = 0xdead000000000122;
code_r0x08003c40:
    mutex_unlock(obj.ect_mutex);
    pcVar6 = *(pcVar6 + 0x4a8);
    if (pcVar6 != NULL) {
        if (pcVar6 != sym.__typeid__ZTSFvP6deviceE_global_addr) {
            __cfi_slowpath_diag(0x5b83a3fd302a5421,pcVar6,0x8000cd0);
        }
        (*pcVar6)(param_1);
    }
    return;
}


// ===== sym.cti_probe.0b2860deecf0024ca480057a9d0b4816.cfi_jt @ 0x08002278 (size 8) =====

uint64_t sym.cti_probe.0b2860deecf0024ca480057a9d0b4816.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    code *pcVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t *arg2;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    code *pcStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_60 = 0;
    uStack_58 = 0;
    iStack_70 = 0;
    uStack_68 = 0;
    iStack_80 = 0;
    uStack_78 = 0;
    pcStack_90 = NULL;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    arg2 = devm_kmalloc(param_1,0x4c8,0xdc0);
    if (arg2 == NULL) goto code_r0x08003684;
    uVar8 = devm_ioremap_resource(param_1,param_1 + 0x390);
    if (uVar8 < 0xfffffffffffff001) {
        *arg2 = uVar8;
        *(param_1 + 0x98) = arg2;
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        *(arg2 + 5) = 0xffffffff;
        arg2[2] = 0;
        arg2[3] = arg2 + 3;
        arg2[4] = arg2 + 3;
        *(arg2 + 7) = 0;
        uStack_60 = uVar8;
        uVar6 = sym.readl_relaxed(uVar8 + 0xfc8);
        uVar7 = uVar6 >> 8 & 0xff;
        *(arg2 + 0x44) = uVar7;
        if (0x80 < uVar7) {
            if ((obj.cti_set_default_config.__print_once & 1) == 0) {
                obj.cti_set_default_config.__print_once = 0x1;
                _dev_warn(param_1,"Limiting HW MaxTrig value(%d) to driver max(%d)\n",uVar7,0x80);
            }
            *(arg2 + 0x44) = 0x80;
        }
        uVar7 = uVar6 >> 0x10 & 0xf;
        *(arg2 + 0x10) = 1;
        *(arg2 + 8) = uVar7;
        *(arg2 + 0x48c) = 0xffffffffffffffff >> (-uVar7 & 0x3f);
        *(arg2 + 9) = 0;
        uVar9 = sym.coresight_cti_get_platform_data(param_1);
        if (uVar9 < 0xfffffffffffff001) {
            uVar7 = arg2[5];
            *(arg2 + 0x4d) = 1;
            if ((uVar7 < 0) || ((*(__cpu_active_mask + (uVar7 >> 3 & 0x1ffffff8)) >> (uVar7 & 0x3f) & 1) != 0)) {
                iStack_70 = coresight_alloc_device_name(obj.cti_sys_devs,param_1);
                if (iStack_70 != 0) {
                    uStack_4c = 0;
                    uVar8 = devm_kmalloc(param_1,0x10,0xdc0);
                    arg2[0x97] = uVar8;
                    if (uVar8 != 0) {
                        uVar11 = *(param_1 + 0x2f0);
                        *(uVar8 + 8) = 0xffffffff;
                        uVar7 = of_property_read_variable_u32_array(uVar11,"qcom,cti-gpio-trigin",&uStack_4c,1,0);
                        uVar7 = uVar7 & uVar7 >> 0x1f;
                        if (uVar7 == 0xffffffea) {
code_r0x08003624:
                            uVar8 = devm_kmalloc(param_1,0x10,0xdc0);
                            arg2[0x98] = uVar8;
                            if (uVar8 == 0) goto code_r0x08003684;
                            uVar11 = *(param_1 + 0x2f0);
                            *(uVar8 + 8) = 0xffffffff;
                            uVar7 = of_property_read_variable_u32_array
                                              (uVar11,"qcom,cti-gpio-trigout",&uStack_4c,1,0);
                            uVar7 = uVar7 & uVar7 >> 0x1f;
                            if (uVar7 != 0xffffffea) {
                                if (uVar7 != 0) goto code_r0x080036c8;
                                *(arg2[0x98] + 8) = uStack_4c;
                            }
                        }
                        else {
                            if (uVar7 == 0) {
                                *(arg2[0x97] + 8) = uStack_4c;
                                goto code_r0x08003624;
                            }
code_r0x080036c8:
                            uVar8 = uVar7;
                            if (uVar7 != 0) goto code_r0x08003688;
                        }
                        uVar7 = arg2[5];
                        if (uVar7 == 0xffffffff) {
code_r0x08003700:
                            uVar7 = sym.cti_create_cons_sysfs(param_1,arg2);
                            if (uVar7 == 0) {
                                uStack_78 = arg2[6];
                                uStack_a0 = 0x100000006;
                                pcStack_90 = obj.cti_ops;
                                uStack_88 = uVar9;
                                iStack_80 = param_1;
                                uVar8 = coresight_register(&uStack_a0);
                                arg2[1] = uVar8;
                                if (uVar8 < 0xfffffffffffff001) {
                                    mutex_lock(obj.ect_mutex);
                                    puVar3 = _obj.ect_net;
                                    puVar1 = arg2 + 0x93;
                                    uVar8 = __list_add_valid(puVar1,obj.ect_net,_obj.ect_net);
                                    if ((uVar8 & 1) != 0) {
                                        puVar3[1] = puVar1;
                                        arg2[0x93] = puVar3;
                                        arg2[0x94] = obj.ect_net;
                                        _obj.ect_net = puVar1;
                                    }
                                    sym.cti_update_conn_xrefs(arg2);
                                    mutex_unlock(obj.ect_mutex);
                                    arg2[0x95] = *(arg2[1] + 0x368);
                                    *(arg2[1] + 0x368) = sym.__typeid__ZTSFvP6deviceE_global_addr;
                                    uVar5 = fwnode_property_present(*(param_1 + 0x2f8),"qcom,extended_cti");
                                    *(arg2 + 0x96) = uVar5 & 1;
                                    __pm_runtime_idle(param_1,5);
                                    _dev_info(arg2[1] + 0x38,"CTI initialized\n");
                                    uVar8 = 0;
                                    goto code_r0x08003688;
                                }
                                uVar8 = uVar8 & 0xffffffff;
                            }
                            else {
                                uVar8 = uVar7;
                                _dev_err(param_1,"%s: create dynamic sysfs entries failed\n",iStack_70);
                            }
                            uVar7 = arg2[5];
                            if (uVar7 != 0xffffffff) {
                                if (0x1f < uVar7) goto code_r0x080038fc;
                                _segment.ehdr = _segment.ehdr + -1;
                                *(obj.cti_cpu_drvdata + uVar7 * 8) = 0;
                                if (_segment.ehdr == 0) {
                                    cpu_pm_unregister_notifier
                                              (reloc.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt);
                                    goto code_r0x08003814;
                                }
                            }
                        }
                        else {
                            if (_segment.ehdr != 0) {
code_r0x080036e4:
                                _segment.ehdr = _segment.ehdr + 1;
                                if (0x1f < uVar7) goto code_r0x080038fc;
                                *(obj.cti_cpu_drvdata + uVar7 * 8) = arg2;
                                goto code_r0x08003700;
                            }
                            cpus_read_lock();
                            uVar8 = __cpuhp_setup_state_cpuslocked
                                              (0x8f,"arm/coresight_cti:starting",0,
                                               sym.cti_starting_cpu.0b2860deecf0024ca480057a9d0b4816.cfi_jt,
                                               sym.cti_dying_cpu.0b2860deecf0024ca480057a9d0b4816.cfi_jt,0);
                            if (uVar8 != 0) {
                                uVar8 = uVar8 & 0xffffffff;
                                cpus_read_unlock();
                                goto code_r0x08003688;
                            }
                            uVar10 = cpu_pm_register_notifier
                                               (reloc.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt);
                            uVar8 = uVar10 & 0xffffffff;
                            cpus_read_unlock();
                            if (uVar10 == 0) {
                                uVar7 = arg2[5];
                                goto code_r0x080036e4;
                            }
code_r0x08003814:
                            __cpuhp_remove_state(0x8f,0);
                        }
                        goto code_r0x08003688;
                    }
                }
code_r0x08003684:
                uVar8 = 0xfffffff4;
            }
            else {
                uVar8 = 0xfffffffa;
            }
        }
        else {
            _dev_err(param_1,"coresight_cti_get_platform_data err\n");
            uVar8 = uVar9 & 0xffffffff;
        }
    }
code_r0x08003688:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return uVar8 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x080038fc:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8003900);
    (*pcVar4)();
}


// ===== sym.cti_freeze.0b2860deecf0024ca480057a9d0b4816.cfi_jt @ 0x08002280 (size 8) =====

ulong sym.cti_freeze.0b2860deecf0024ca480057a9d0b4816.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if (*(iVar1 + 0x4c) != '\0') {
        *(iVar1 + 0x4e) = 1;
        sym.cti_disable_hw(*(*(*(iVar1 + 8) + 0x98) + 0x98));
    }
    return 0;
}


// ===== sym.cti_restore.0b2860deecf0024ca480057a9d0b4816.cfi_jt @ 0x08002288 (size 8) =====

ulong sym.cti_restore.0b2860deecf0024ca480057a9d0b4816.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (*(iVar2 + 0x4e) == '\0') {
        uVar1 = 0;
    }
    else {
        uVar1 = sym.cti_enable_hw(*(*(*(iVar2 + 8) + 0x98) + 0x98));
        *(iVar2 + 0x4e) = 0;
    }
    return uVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002290 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_remove_cti_ops();
    amba_driver_unregister(obj.cti_driver);
    return;
}


// ===== sym.cti_disable.cfi_jt @ 0x08002298 (size 8) =====

ulong sym.cti_disable.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cti_disable_hw(*(*(param_1 + 0x98) + 0x98));
    return 0;
}


// ===== sym.cti_enable.cfi_jt @ 0x080022a0 (size 8) =====

void sym.cti_enable.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cti_enable_hw(*(*(param_1 + 0x98) + 0x98));
    return;
}


// ===== sym.cti_remove_assoc_from_csdev.0b2860deecf0024ca480057a9d0b4816.cfi_jt @ 0x080022a8 (size 8) =====

void sym.cti_remove_assoc_from_csdev.0b2860deecf0024ca480057a9d0b4816.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    code *pcVar2;
    uchar *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_48;
    ulong uStack_40;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    mutex_lock(obj.ect_mutex);
    if (*(param_1 + 1000) != 0) {
        iVar4 = *(*(*(param_1 + 1000) + 0x98) + 0x98);
        piVar1 = iVar4 + 0x18;
        piVar5 = piVar1;
        do {
            piVar5 = *piVar5;
            if (piVar5 == piVar1) goto code_r0x080041e0;
        } while (piVar5[-2] != param_1);
        iStack_48 = *(iVar4 + 8);
        uStack_40 = piVar5[-1];
        iStack_30 = *(iStack_48 + 0xa8);
        uStack_38 = piVar5[-2];
        if (iStack_30 == 0) {
            iStack_30 = *(iStack_48 + 0x38);
        }
        coresight_remove_sysfs_link(&iStack_48);
        piVar5[-2] = 0;
code_r0x080041e0:
        *(param_1 + 1000) = 0;
    }
    mutex_unlock(obj.ect_mutex);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        puVar3 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar6._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8004278);
        (*pcVar2)();
    }
    return;
}


// ===== sym.cti_add_assoc_to_csdev.0b2860deecf0024ca480057a9d0b4816.cfi_jt @ 0x080022b0 (size 8) =====

void sym.cti_add_assoc_to_csdev.0b2860deecf0024ca480057a9d0b4816.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    int64_t *piVar6;
    code *pcVar7;
    code *pcVar8;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    mutex_lock(obj.ect_mutex);
    if ((*(param_1 + 8) != 6) && (_obj.ect_net != obj.ect_net)) {
        iVar3 = dev_fwnode(*(param_1 + 0x98));
        iVar3 = sym.cti_plat_get_node_name(iVar3);
        if ((iVar3 != 0) && (pcVar7 = _obj.ect_net, _obj.ect_net != obj.ect_net)) {
            do {
                for (pcVar8 = *(pcVar7 + -0x480); unaff_x20 = iVar3, pcVar7 + -0x480 != pcVar8; pcVar8 = *pcVar8) {
                    if ((*(pcVar8 + -8) != 0) && (iVar2 = strcmp(iVar3), iVar2 == 0)) {
                        iVar5 = *(param_1 + 0xa8);
                        if (iVar5 == 0) {
                            iVar5 = *(param_1 + 0x38);
                        }
                        pcVar9 = pcVar7 + -0x490;
                        *(pcVar8 + -0x10) = param_1;
                        *(pcVar8 + -8) = iVar5;
                        iStack_78 = *pcVar9;
                        uStack_70 = *(pcVar8 + -8);
                        iStack_60 = *(iStack_78 + 0xa8);
                        uStack_68 = *(pcVar8 + -0x10);
                        if (iStack_60 == 0) {
                            iStack_60 = *(iStack_78 + 0x38);
                        }
                        iVar2 = coresight_add_sysfs_link(&iStack_78);
                        if (iVar2 == 0) {
                            *(param_1 + 1000) = *pcVar9;
                            goto code_r0x080040fc;
                        }
                        _dev_warn(*pcVar9 + 0x38,"Failed to set CTI sysfs link %s<=>%s\n",uStack_70,iStack_60);
                        *(pcVar8 + -0x10) = 0;
                        break;
                    }
                }
                pcVar7 = *pcVar7;
            } while (pcVar7 != obj.ect_net);
        }
    }
code_r0x080040fc:
    mutex_unlock(obj.ect_mutex);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = 0x8004144;
    uStack_98 = 0x8004144;
    iVar3 = sp_el0;
    iStack_a8 = *(iVar3 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffb0;
    iStack_90 = unaff_x20;
    iStack_88 = param_1;
    mutex_lock(obj.ect_mutex);
    if (*(iVar5 + 1000) != 0) {
        iVar3 = *(*(*(iVar5 + 1000) + 0x98) + 0x98);
        piVar1 = iVar3 + 0x18;
        piVar6 = piVar1;
        do {
            piVar6 = *piVar6;
            if (piVar6 == piVar1) goto code_r0x080041e0;
        } while (piVar6[-2] != iVar5);
        iStack_c8 = *(iVar3 + 8);
        uStack_c0 = piVar6[-1];
        iStack_b0 = *(iStack_c8 + 0xa8);
        uStack_b8 = piVar6[-2];
        if (iStack_b0 == 0) {
            iStack_b0 = *(iStack_c8 + 0x38);
        }
        coresight_remove_sysfs_link(&iStack_c8);
        piVar6[-2] = 0;
code_r0x080041e0:
        *(iVar5 + 1000) = 0;
    }
    mutex_unlock(obj.ect_mutex);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_a8) {
        auVar10 = __stack_chk_fail();
        puVar4 = auVar10._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar10._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5502,0x8004278);
        (*pcVar7)();
    }
    return;
}


// ===== sym.trigin_sig_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080022b8 (size 8) =====

int64_t sym.trigin_sig_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bitmap_print_to_pagebuf(1,param_3,**(param_2 + 0x20) + 8,*(*(*(param_1 + 0x60) + 0x98) + 0x44));
    return iVar1;
}


// ===== sym.trigout_filtered_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080022c0 (size 8) =====

int64_t sym.trigout_filtered_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = bitmap_print_to_pagebuf(1,param_3,iVar2 + 0x70,*(iVar2 + 0x44));
    return iVar1;
}


// ===== sym.chan_free_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080022c8 (size 8) =====

int64_t sym.chan_free_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ushort *param_3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uchar uVar3;
    code *pcVar4;
    int iVar5;
    ushort *puVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar7 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(*(param_1 + 0x60) + 0x98);
    puVar6 = param_3;
    _raw_spin_lock(iVar11 + 0x38);
    uVar8 = *(iVar11 + 0x44);
    if (*(iVar11 + 0x44) < 1) {
        uVar9 = 0xffffffffffffffff;
    }
    else {
        uVar9 = 0;
        uVar10 = uVar8 - 0x81;
        iVar12 = iVar11;
        do {
            if (uVar10 < 0xffffffffffffff80) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007b74);
                (*pcVar4)();
            }
            puVar1 = iVar12 + 0x8c;
            uVar8 = uVar8 - 1;
            puVar2 = iVar12 + 0x28c;
            iVar12 = iVar12 + 4;
            uVar9 = uVar9 | *puVar1 | *puVar2;
        } while (uVar8 != 0);
        uVar9 = ~uVar9;
    }
    _raw_spin_unlock(iVar11 + 0x38);
    uStack_40 = uVar9;
    if (uVar9 << (-*(iVar11 + 0x40) & 0x3f) == 0) {
        iVar11 = 1;
        *param_3 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,param_3,&uStack_40);
        iVar11 = iVar5;
        puVar6 = puVar7;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return iVar11;
    }
    iVar11 = __stack_chk_fail(iVar11);
    *extraout_x18 = sym.chan_xtrigs_sel_show;
    iVar12 = *(*(iVar11 + 0x60) + 0x98);
    iVar11 = iVar12 + 0x38;
    _raw_spin_lock(iVar11);
    uVar3 = *(iVar12 + 0x81);
    _raw_spin_unlock(iVar11);
    iVar5 = sprintf(puVar6,"%ld\n",uVar3);
    return iVar5;
}


// ===== sym.ctmid_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080022d0 (size 8) =====

int64_t sym.ctmid_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x8000fec,*(*(*(param_1 + 0x60) + 0x98) + 0x14));
    return iVar1;
}


// ===== sym.pidr3_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080022d8 (size 8) =====

int64_t sym.pidr3_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005ec0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005ec0:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfec);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.nr_trigger_cons_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080022e0 (size 8) =====

int64_t sym.nr_trigger_cons_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x8000fec,*(*(*(param_1 + 0x60) + 0x98) + 0x10));
    return iVar1;
}


// ===== sym.gate_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080022e8 (size 8) =====

int64_t sym.gate_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    _raw_spin_lock(piVar4 + 7);
    if ((*(piVar4 + 0x4d) == '\0') || (*(piVar4 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar4 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar1 = 0x140;
        if (piVar4[0x96] != '\0') {
            iVar1 = 0x88;
        }
        uVar2 = sym.readl_relaxed_1(*piVar4 + iVar1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar4 + 0xfb0);
    }
    _raw_spin_unlock(piVar4 + 7);
    iVar3 = scnprintf(param_3,0x1000,"%#x\n",uVar2);
    return iVar3;
}


// ===== sym.powered_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080022f0 (size 8) =====

int64_t sym.powered_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    uchar uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = iVar4 + 0x38;
    _raw_spin_lock(iVar1);
    uVar2 = *(iVar4 + 0x4d);
    _raw_spin_unlock(iVar1);
    iVar3 = sprintf(param_3,0x8000fec,uVar2);
    return iVar3;
}


// ===== sym.devid_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080022f8 (size 8) =====

int64_t sym.devid_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005934;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005934:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfc8);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.trigin_type_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002300 (size 8) =====

int64_t sym.trigin_type_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int *piVar4;
    ulong *in_x18;
    int iVar5;
    ulong *puVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(param_2 + 0x20);
    piVar4 = *puVar6;
    if (*piVar4 < 1) {
        iVar5 = 0;
    }
    else {
        iVar7 = 0;
        iVar5 = 0;
        do {
            uVar1 = piVar4[iVar7 + 6];
            if (0x18 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8005138);
                (*pcVar2)();
            }
            if (200 < uVar1 << 3) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x800513c);
                (*pcVar2)();
            }
            iVar3 = sprintf(param_3 + iVar5,0x80013af,*(obj.sig_type_names + uVar1 * 8));
            piVar4 = *puVar6;
            iVar5 = iVar3 + iVar5;
            iVar7 = iVar7 + 1;
        } while (iVar7 < *piVar4);
    }
    *(param_3 + iVar5) = 10;
    return iVar5 + 1;
}


// ===== sym.devtype_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002308 (size 8) =====

int64_t sym.devtype_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005a50;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005a50:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfcc);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.trigoutstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002310 (size 8) =====

int64_t sym.trigoutstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint64_t *puVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar2 = *(param_1 + 0x60) + 0x1f8;
        uVar12 = *puVar2;
        do {
            uVar9 = uVar12;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar1 = *puVar2;
                uVar12 = uVar1;
                if (uVar1 != uVar9) goto code_r0x08006ea0;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = uVar9 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006ea0:
        } while (uVar9 != uVar1);
        return iVar6;
    }
    _raw_spin_lock(piVar11 + 7);
    if (*(piVar11 + 0x4d) == '\0') {
        uVar7 = 0;
    }
    else {
        if (piVar11[0x96] != '\0') {
            iVar10 = 0;
            uVar12 = 0x60;
            iVar8 = *(piVar11 + 0x44) + -1;
            iVar6 = 0x1f;
            iVar3 = *(piVar11 + 0x44) + 0x1e;
            if (-1 < iVar8) {
                iVar3 = iVar8;
            }
            uVar9 = 0;
            do {
                uVar7 = sym.readl_relaxed_1(*piVar11 + uVar12);
                uVar1 = uVar9 + 1;
                iVar8 = scnprintf(param_3 + iVar10,0x1000 - iVar10,"%u - %u : 0x%x\n",uVar9,iVar6,uVar7);
                uVar12 = uVar12 + 4;
                iVar10 = iVar10 + iVar8;
                iVar6 = iVar6 + 0x20;
                uVar9 = uVar1;
            } while (uVar1 <= iVar3 >> 5);
            goto code_r0x08006ee0;
        }
        uVar7 = sym.readl_relaxed_1(*piVar11 + 0x134);
    }
    iVar10 = 0;
code_r0x08006ee0:
    _raw_spin_unlock(piVar11 + 7);
    __pm_runtime_idle(*(param_1 + 0x60),4);
    if (piVar11[0x96] == '\0') {
        iVar6 = scnprintf(param_3,0x1000,"0x%x\n",uVar7);
        iVar10 = iVar6;
    }
    return iVar10;
}


// ===== sym.chan_xtrigs_in_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002318 (size 8) =====

int64_t sym.chan_xtrigs_in_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(param_1 + 0x60) + 0x98);
    uVar1 = *(iVar5 + 0x44);
    if (uVar1 < 1) {
        iVar7 = 0;
    }
    else {
        uVar2 = *(iVar5 + 0x81);
        uVar6 = 0;
        iVar7 = 0;
        do {
            if (uVar6 == 0x80) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007d70);
                (*pcVar3)();
            }
            if ((*(iVar5 + 0x8c + uVar6 * 4) & 1L << (uVar2 & 0x3f)) != 0) {
                iVar4 = sprintf(param_3 + iVar7,0x80012bc,uVar6 & 0xffffffff);
                iVar7 = iVar4 + iVar7;
            }
            uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
    }
    *(param_3 + iVar7) = 10;
    return iVar7 + 1;
}


// ===== sym.chan_xtrigs_sel_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002320 (size 8) =====

int64_t sym.chan_xtrigs_sel_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    uchar uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = iVar4 + 0x38;
    _raw_spin_lock(iVar1);
    uVar2 = *(iVar4 + 0x81);
    _raw_spin_unlock(iVar1);
    iVar3 = sprintf(param_3,"%ld\n",uVar2);
    return iVar3;
}


// ===== sym.trigout_sig_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002328 (size 8) =====

int64_t sym.trigout_sig_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bitmap_print_to_pagebuf(1,param_3,*(*(param_2 + 0x20) + 8) + 8,*(*(*(param_1 + 0x60) + 0x98) + 0x44));
    return iVar1;
}


// ===== sym.pidr4_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002330 (size 8) =====

int64_t sym.pidr4_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005fdc;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005fdc:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfd0);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.asicctl_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002338 (size 8) =====

int64_t sym.asicctl_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    _raw_spin_lock(piVar4 + 7);
    if ((*(piVar4 + 0x4d) == '\0') || (*(piVar4 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar4 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar1 = 0x144;
        if (piVar4[0x96] != '\0') {
            iVar1 = 0x8c;
        }
        uVar2 = sym.readl_relaxed_1(*piVar4 + iVar1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar4 + 0xfb0);
    }
    _raw_spin_unlock(piVar4 + 7);
    iVar3 = scnprintf(param_3,0x1000,"%#x\n",uVar2);
    return iVar3;
}


// ===== sym.chinstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002340 (size 8) =====

int64_t sym.chinstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar9 = *puVar1;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar9 = uVar3;
                if (uVar3 != uVar8) goto code_r0x0800700c;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800700c:
        } while (uVar8 != uVar3);
    }
    else {
        _raw_spin_lock(piVar10 + 7);
        if (*(piVar10 + 0x4d) == '\0') {
            uVar7 = 0;
        }
        else {
            iVar2 = 0x138;
            if (piVar10[0x96] != '\0') {
                iVar2 = 0x80;
            }
            uVar7 = sym.readl_relaxed_1(*piVar10 + iVar2);
        }
        _raw_spin_unlock(piVar10 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%x\n",uVar7);
    }
    return iVar6;
}


// ===== sym.enable_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002348 (size 8) =====

int64_t sym.enable_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    char cVar1;
    uchar uVar2;
    uchar uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(param_1 + 0x60) + 0x98);
    uVar6 = *(iVar5 + 0x48);
    _raw_spin_lock(iVar5 + 0x38);
    cVar1 = *(iVar5 + 0x4d);
    uVar2 = *(iVar5 + 0x4c);
    _raw_spin_unlock(iVar5 + 0x38);
    uVar3 = uVar6 != 0;
    if (cVar1 != '\0') {
        uVar3 = uVar2;
    }
    iVar4 = sprintf(param_3,0x8000fec,uVar3);
    return iVar4;
}


// ===== sym.trig_filter_enable_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002350 (size 8) =====

int64_t sym.trig_filter_enable_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    uchar uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = iVar4 + 0x38;
    _raw_spin_lock(iVar1);
    uVar2 = *(iVar4 + 0x80);
    _raw_spin_unlock(iVar1);
    iVar3 = sprintf(param_3,0x8000fec,uVar2);
    return iVar3;
}


// ===== sym.con_name_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002358 (size 8) =====

int64_t sym.con_name_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x800135f,*(*(param_2 + 0x20) + 0x18));
    return iVar1;
}


// ===== sym.chan_gate_enable_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002360 (size 8) =====

uint64_t sym.chan_gate_enable_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                   (int64_t param_1,ulong param_2,ushort *param_3,uint64_t param_4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uchar uVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t *puVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    int64_t iVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong unaff_x30;
    uint64_t uStack_190;
    int64_t iStack_188;
    ulong ***pppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    int64_t iStack_168;
    int64_t iStack_160;
    uint32_t *puStack_158;
    uint64_t uStack_150;
    int64_t iStack_148;
    ulong ***pppuStack_140;
    code *pcStack_138;
    uint32_t uStack_10c;
    int64_t iStack_108;
    ulong ***pppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    uint64_t uStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    ulong ***pppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar ***pppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uint64_t uStack_88;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar **ppuStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    uchar *puStack_40;
    code *pcStack_38;
    uint64_t uStack_20;
    int64_t iStack_18;
    
    puVar11 = &uStack_20;
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_18 = *(iVar15 + 0x5e0);
    iVar15 = *(*(param_1 + 0x60) + 0x98);
    uVar2 = *(iVar15 + 0x48c);
    uStack_20 = uVar2;
    if (uVar2 == 0) {
        uVar6 = 1;
        *param_3 = 10;
    }
    else {
        param_4 = *(iVar15 + 0x40);
        iVar5 = bitmap_print_to_pagebuf(1,param_3,&uStack_20);
        uVar6 = iVar5;
        param_3 = puVar11;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_18) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.chan_gate_enable_store;
    pcStack_38 = sym.chan_gate_enable_store;
    iVar15 = sp_el0;
    iStack_48 = *(iVar15 + 0x5e0);
    puVar13 = &uStack_4c;
    uStack_4c = 0;
    uVar6 = param_4;
    puStack_40 = &stack0xfffffffffffffff0;
    iVar5 = kstrtoint(param_3,0,puVar13);
    if (iVar5 == 0) {
        puVar13 = uStack_4c;
        iVar5 = sym.cti_channel_gate_op(iVar7,0,uStack_4c);
        uVar9 = param_4;
        if (iVar5 != 0) {
            uVar9 = iVar5;
        }
    }
    else {
        uVar9 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_48) {
        return uVar9;
    }
    iVar8 = __stack_chk_fail(uVar9);
    *extraout_x18_00 = sym.chan_gate_disable_store;
    pcStack_68 = sym.chan_gate_disable_store;
    iVar15 = sp_el0;
    iStack_78 = *(iVar15 + 0x5e0);
    puVar12 = &uStack_7c;
    uStack_7c = 0;
    uVar9 = uVar6;
    ppuStack_70 = &puStack_40;
    iStack_60 = iVar7;
    uStack_58 = param_4;
    iVar5 = kstrtoint(puVar13,0,puVar12);
    if (iVar5 == 0) {
        puVar12 = uStack_7c;
        iVar5 = sym.cti_channel_gate_op(iVar8,1,uStack_7c);
        uVar16 = uVar6;
        if (iVar5 != 0) {
            uVar16 = iVar5;
        }
    }
    else {
        uVar16 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_78) {
        return uVar16;
    }
    iVar7 = __stack_chk_fail(uVar16);
    *extraout_x18_01 = sym.chan_set_store;
    pcStack_98 = sym.chan_set_store;
    iVar15 = sp_el0;
    iStack_a8 = *(iVar15 + 0x5e0);
    puVar13 = &uStack_ac;
    uStack_ac = 0;
    uVar16 = uVar9;
    pppuStack_a0 = &ppuStack_70;
    iStack_90 = iVar8;
    uStack_88 = uVar6;
    iVar5 = kstrtoint(puVar12,0,puVar13);
    if (iVar5 == 0) {
        puVar13 = uStack_ac;
        iVar5 = sym.cti_channel_setop(iVar7,0,uStack_ac);
        uVar6 = uVar9;
        if (iVar5 != 0) {
            uVar6 = iVar5;
        }
    }
    else {
        uVar6 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_a8) {
        return uVar6;
    }
    iVar8 = __stack_chk_fail(uVar6);
    *extraout_x18_02 = sym.chan_clear_store;
    pcStack_c8 = sym.chan_clear_store;
    iVar15 = sp_el0;
    iStack_d8 = *(iVar15 + 0x5e0);
    puVar12 = &uStack_dc;
    uStack_dc = 0;
    uVar6 = uVar16;
    pppuStack_d0 = &pppuStack_a0;
    iStack_c0 = iVar7;
    uStack_b8 = uVar9;
    iVar5 = kstrtoint(puVar13,0,puVar12);
    if (iVar5 == 0) {
        puVar12 = uStack_dc;
        iVar5 = sym.cti_channel_setop(iVar8,1,uStack_dc);
        uVar9 = uVar16;
        if (iVar5 != 0) {
            uVar9 = iVar5;
        }
    }
    else {
        uVar9 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_d8) {
        return uVar9;
    }
    iVar7 = __stack_chk_fail(uVar9);
    *extraout_x18_03 = sym.chan_pulse_store;
    pcStack_f8 = sym.chan_pulse_store;
    iVar15 = sp_el0;
    iStack_108 = *(iVar15 + 0x5e0);
    puVar13 = &uStack_10c;
    uStack_10c = 0;
    pppuStack_100 = &pppuStack_d0;
    iStack_f0 = iVar8;
    uStack_e8 = uVar16;
    iVar5 = kstrtoint(puVar12,0);
    if (iVar5 == 0) {
        puVar13 = uStack_10c;
        iVar5 = sym.cti_channel_setop(iVar7,2,uStack_10c);
        if (iVar5 != 0) {
            uVar6 = iVar5;
        }
    }
    else {
        uVar6 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_108) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    puVar11 = &uStack_150;
    *extraout_x18_04 = sym.chan_inuse_show;
    pcStack_138 = sym.chan_inuse_show;
    iVar15 = sp_el0;
    iStack_148 = *(iVar15 + 0x5e0);
    uStack_150 = 0;
    iVar7 = *(*(iVar7 + 0x60) + 0x98);
    iVar15 = iVar7 + 0x38;
    puVar12 = puVar13;
    pppuStack_140 = &pppuStack_100;
    _raw_spin_lock(iVar15);
    if (*(iVar7 + 0x44) < 1) {
        uVar6 = 0;
    }
    else {
        iVar8 = 0;
        uVar6 = 0;
        do {
            if (iVar8 == 0x200) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar4)();
            }
            iVar10 = iVar7 + iVar8;
            iVar8 = iVar8 + 4;
            uVar6 = uVar6 | *(iVar10 + 0x8c) | *(iVar10 + 0x28c);
            uStack_150 = uVar6;
        } while (*(iVar7 + 0x44) * 4 - iVar8 != 0);
    }
    _raw_spin_unlock(iVar15);
    if (uVar6 << (-*(iVar7 + 0x40) & 0x3f) == 0) {
        uVar9 = 1;
        *puVar13 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,puVar13);
        uVar9 = iVar5;
        puVar12 = puVar11;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_148) {
        return uVar9;
    }
    iVar10 = __stack_chk_fail(uVar9);
    puVar11 = &uStack_190;
    *extraout_x18_05 = sym.chan_free_show;
    pcStack_178 = sym.chan_free_show;
    iVar8 = sp_el0;
    iStack_188 = *(iVar8 + 0x5e0);
    iVar8 = *(*(iVar10 + 0x60) + 0x98);
    puVar14 = puVar12;
    pppuStack_180 = &pppuStack_140;
    uStack_170 = uVar6;
    iStack_168 = iVar7;
    iStack_160 = iVar15;
    puStack_158 = puVar13;
    _raw_spin_lock(iVar8 + 0x38);
    uVar6 = *(iVar8 + 0x44);
    if (*(iVar8 + 0x44) < 1) {
        uVar9 = 0xffffffffffffffff;
    }
    else {
        uVar9 = 0;
        uVar16 = uVar6 - 0x81;
        iVar15 = iVar8;
        do {
            if (uVar16 < 0xffffffffffffff80) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007b74);
                (*pcVar4)();
            }
            puVar13 = iVar15 + 0x8c;
            uVar6 = uVar6 - 1;
            puVar1 = iVar15 + 0x28c;
            iVar15 = iVar15 + 4;
            uVar9 = uVar9 | *puVar13 | *puVar1;
        } while (uVar6 != 0);
        uVar9 = ~uVar9;
    }
    _raw_spin_unlock(iVar8 + 0x38);
    uStack_190 = uVar9;
    if (uVar9 << (-*(iVar8 + 0x40) & 0x3f) == 0) {
        uVar6 = 1;
        *puVar12 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,puVar12,&uStack_190);
        uVar6 = iVar5;
        puVar14 = puVar11;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_188) {
        iVar15 = __stack_chk_fail(uVar6);
        *extraout_x18_06 = sym.chan_xtrigs_sel_show;
        iVar7 = *(*(iVar15 + 0x60) + 0x98);
        iVar15 = iVar7 + 0x38;
        _raw_spin_lock(iVar15);
        uVar3 = *(iVar7 + 0x81);
        _raw_spin_unlock(iVar15);
        iVar5 = sprintf(puVar14,"%ld\n",uVar3);
        return iVar5;
    }
    return uVar6;
}


// ===== sym.triginstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002368 (size 8) =====

int64_t sym.triginstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint64_t *puVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar2 = *(param_1 + 0x60) + 0x1f8;
        uVar12 = *puVar2;
        do {
            uVar9 = uVar12;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar1 = *puVar2;
                uVar12 = uVar1;
                if (uVar1 != uVar9) goto code_r0x08006cb4;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = uVar9 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006cb4:
        } while (uVar9 != uVar1);
        return iVar6;
    }
    _raw_spin_lock(piVar11 + 7);
    if (*(piVar11 + 0x4d) == '\0') {
        uVar7 = 0;
    }
    else {
        if (piVar11[0x96] != '\0') {
            iVar10 = 0;
            uVar12 = 0x40;
            iVar8 = *(piVar11 + 0x44) + -1;
            iVar6 = 0x1f;
            iVar3 = *(piVar11 + 0x44) + 0x1e;
            if (-1 < iVar8) {
                iVar3 = iVar8;
            }
            uVar9 = 0;
            do {
                uVar7 = sym.readl_relaxed_1(*piVar11 + uVar12);
                uVar1 = uVar9 + 1;
                iVar8 = scnprintf(param_3 + iVar10,0x1000 - iVar10,"%u - %u : 0x%x\n",uVar9,iVar6,uVar7);
                uVar12 = uVar12 + 4;
                iVar10 = iVar10 + iVar8;
                iVar6 = iVar6 + 0x20;
                uVar9 = uVar1;
            } while (uVar1 <= iVar3 >> 5);
            goto code_r0x08006cf4;
        }
        uVar7 = sym.readl_relaxed_1(*piVar11 + 0x130);
    }
    iVar10 = 0;
code_r0x08006cf4:
    _raw_spin_unlock(piVar11 + 7);
    __pm_runtime_idle(*(param_1 + 0x60),4);
    if (piVar11[0x96] == '\0') {
        iVar6 = scnprintf(param_3,0x1000,"0x%x\n",uVar7);
        iVar10 = iVar6;
    }
    return iVar10;
}


// ===== sym.choutstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002370 (size 8) =====

int64_t sym.choutstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar9 = *puVar1;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar9 = uVar3;
                if (uVar3 != uVar8) goto code_r0x08007140;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08007140:
        } while (uVar8 != uVar3);
    }
    else {
        _raw_spin_lock(piVar10 + 7);
        if (*(piVar10 + 0x4d) == '\0') {
            uVar7 = 0;
        }
        else {
            iVar2 = 0x13c;
            if (piVar10[0x96] != '\0') {
                iVar2 = 0x84;
            }
            uVar7 = sym.readl_relaxed_1(*piVar10 + iVar2);
        }
        _raw_spin_unlock(piVar10 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%x\n",uVar7);
    }
    return iVar6;
}


// ===== sym.pidr1_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002378 (size 8) =====

int64_t sym.pidr1_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005c88;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005c88:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfe4);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.devaff1_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002380 (size 8) =====

int64_t sym.devaff1_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x080055e0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080055e0:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfac);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.chan_xtrigs_out_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002388 (size 8) =====

int64_t sym.chan_xtrigs_out_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(param_1 + 0x60) + 0x98);
    uVar1 = *(iVar5 + 0x44);
    if (uVar1 < 1) {
        iVar7 = 0;
    }
    else {
        uVar2 = *(iVar5 + 0x81);
        uVar6 = 0;
        iVar7 = 0;
        do {
            if (uVar6 == 0x80) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007e3c);
                (*pcVar3)();
            }
            if ((*(iVar5 + 0x28c + uVar6 * 4) & 1L << (uVar2 & 0x3f)) != 0) {
                iVar4 = sprintf(param_3 + iVar7,0x80012bc,uVar6 & 0xffffffff);
                iVar7 = iVar4 + iVar7;
            }
            uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
    }
    *(param_3 + iVar7) = 10;
    return iVar7 + 1;
}


// ===== sym.devarch_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002390 (size 8) =====

int64_t sym.devarch_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005818;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005818:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfbc);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.inen_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002398 (size 8) =====

int64_t sym.inen_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    _raw_spin_lock(iVar4 + 0x38);
    if (-1 < *(iVar4 + 0x88)) {
        uVar1 = *(iVar4 + *(iVar4 + 0x88) * 4 + 0x8c);
        _raw_spin_unlock(iVar4 + 0x38);
        iVar3 = sprintf(param_3,"%#lx\n",uVar1);
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80061e4);
    (*pcVar2)();
}


// ===== sym.chan_inuse_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023a0 (size 8) =====

int64_t sym.chan_inuse_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ushort *param_3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uchar uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ushort *puVar8;
    uint64_t *puVar9;
    ushort *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    ushort *puStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar9 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_40 = 0;
    iVar14 = *(*(param_1 + 0x60) + 0x98);
    iVar7 = iVar14 + 0x38;
    puVar8 = param_3;
    _raw_spin_lock(iVar7);
    if (*(iVar14 + 0x44) < 1) {
        uVar15 = 0;
    }
    else {
        iVar11 = 0;
        uVar15 = 0;
        do {
            if (iVar11 == 0x200) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar4)();
            }
            iVar6 = iVar14 + iVar11;
            iVar11 = iVar11 + 4;
            uVar15 = uVar15 | *(iVar6 + 0x8c) | *(iVar6 + 0x28c);
            uStack_40 = uVar15;
        } while (*(iVar14 + 0x44) * 4 - iVar11 != 0);
    }
    _raw_spin_unlock(iVar7);
    if (uVar15 << (-*(iVar14 + 0x40) & 0x3f) == 0) {
        iVar11 = 1;
        *param_3 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,param_3);
        iVar11 = iVar5;
        puVar8 = puVar9;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar11;
    }
    iVar6 = __stack_chk_fail(iVar11);
    puVar9 = &uStack_80;
    *extraout_x18 = sym.chan_free_show;
    pcStack_68 = sym.chan_free_show;
    iVar11 = sp_el0;
    iStack_78 = *(iVar11 + 0x5e0);
    iVar11 = *(*(iVar6 + 0x60) + 0x98);
    puVar10 = puVar8;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar15;
    iStack_58 = iVar14;
    iStack_50 = iVar7;
    puStack_48 = param_3;
    _raw_spin_lock(iVar11 + 0x38);
    uVar15 = *(iVar11 + 0x44);
    if (*(iVar11 + 0x44) < 1) {
        uVar12 = 0xffffffffffffffff;
    }
    else {
        uVar12 = 0;
        uVar13 = uVar15 - 0x81;
        iVar7 = iVar11;
        do {
            if (uVar13 < 0xffffffffffffff80) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007b74);
                (*pcVar4)();
            }
            puVar1 = iVar7 + 0x8c;
            uVar15 = uVar15 - 1;
            puVar2 = iVar7 + 0x28c;
            iVar7 = iVar7 + 4;
            uVar12 = uVar12 | *puVar1 | *puVar2;
        } while (uVar15 != 0);
        uVar12 = ~uVar12;
    }
    _raw_spin_unlock(iVar11 + 0x38);
    uStack_80 = uVar12;
    if (uVar12 << (-*(iVar11 + 0x40) & 0x3f) == 0) {
        iVar7 = 1;
        *puVar8 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,puVar8,&uStack_80);
        iVar7 = iVar5;
        puVar10 = puVar9;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_78) {
        iVar7 = __stack_chk_fail(iVar7);
        *extraout_x18_00 = sym.chan_xtrigs_sel_show;
        iVar14 = *(*(iVar7 + 0x60) + 0x98);
        iVar7 = iVar14 + 0x38;
        _raw_spin_lock(iVar7);
        uVar3 = *(iVar14 + 0x81);
        _raw_spin_unlock(iVar7);
        iVar5 = sprintf(puVar10,"%ld\n",uVar3);
        return iVar5;
    }
    return iVar7;
}


// ===== sym.outen_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023a8 (size 8) =====

int64_t sym.outen_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    _raw_spin_lock(iVar4 + 0x38);
    if (-1 < *(iVar4 + 0x88)) {
        uVar1 = *(iVar4 + *(iVar4 + 0x88) * 4 + 0x28c);
        _raw_spin_unlock(iVar4 + 0x38);
        iVar3 = sprintf(param_3,"%#lx\n",uVar1);
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800635c);
    (*pcVar2)();
}


// ===== sym.pidr0_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023b0 (size 8) =====

int64_t sym.pidr0_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005b6c;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005b6c:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfe0);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.devaff0_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023b8 (size 8) =====

int64_t sym.devaff0_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x080054c4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080054c4:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfa8);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.trigout_type_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023c0 (size 8) =====

int64_t sym.trigout_type_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int *piVar4;
    ulong *in_x18;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_2 + 0x20);
    piVar4 = *(iVar6 + 8);
    if (*piVar4 < 1) {
        iVar5 = 0;
    }
    else {
        iVar7 = 0;
        iVar5 = 0;
        do {
            uVar1 = piVar4[iVar7 + 6];
            if (0x18 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8005204);
                (*pcVar2)();
            }
            if (200 < uVar1 << 3) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8005208);
                (*pcVar2)();
            }
            iVar3 = sprintf(param_3 + iVar5,0x80013af,*(obj.sig_type_names + uVar1 * 8));
            piVar4 = *(iVar6 + 8);
            iVar5 = iVar3 + iVar5;
            iVar7 = iVar7 + 1;
        } while (iVar7 < *piVar4);
    }
    *(param_3 + iVar5) = 10;
    return iVar5 + 1;
}


// ===== sym.inout_sel_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023c8 (size 8) =====

int64_t sym.inout_sel_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x8000fec,*(*(*(param_1 + 0x60) + 0x98) + 0x88));
    return iVar1;
}


// ===== sym.appset_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023d0 (size 8) =====

int64_t sym.appset_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    _raw_spin_lock(piVar4 + 7);
    if ((*(piVar4 + 0x4d) == '\0') || (*(piVar4 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar4 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar1 = 0x14;
        if (piVar4[0x96] != '\0') {
            iVar1 = 4;
        }
        uVar2 = sym.readl_relaxed_1(*piVar4 + iVar1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar4 + 0xfb0);
    }
    _raw_spin_unlock(piVar4 + 7);
    iVar3 = scnprintf(param_3,0x1000,"%#x\n",uVar2);
    return iVar3;
}


// ===== sym.pidr2_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023d8 (size 8) =====

int64_t sym.pidr2_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005da4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005da4:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfe8);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.authstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023e0 (size 8) =====

int64_t sym.authstatus_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x080056fc;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080056fc:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfb8);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = sprintf(param_3,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.chan_pulse_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023e8 (size 8) =====

int64_t sym.chan_pulse_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t *puVar10;
    uint32_t *puVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar15;
    ulong unaff_x30;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    uint32_t *puStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    puVar8 = &uStack_2c;
    uStack_2c = 0;
    iVar4 = kstrtoint(param_3,0);
    if (iVar4 == 0) {
        puVar8 = uStack_2c;
        iVar4 = sym.cti_channel_setop(param_1,2,uStack_2c);
        if (iVar4 != 0) {
            param_4 = iVar4;
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar5 = __stack_chk_fail(param_4);
    puVar10 = &uStack_70;
    *extraout_x18 = sym.chan_inuse_show;
    pcStack_58 = sym.chan_inuse_show;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_70 = 0;
    iVar5 = *(*(iVar5 + 0x60) + 0x98);
    iVar7 = iVar5 + 0x38;
    puVar9 = puVar8;
    puStack_60 = &stack0xffffffffffffffe0;
    _raw_spin_lock(iVar7);
    if (*(iVar5 + 0x44) < 1) {
        uVar15 = 0;
    }
    else {
        iVar12 = 0;
        uVar15 = 0;
        do {
            if (iVar12 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar6 = iVar5 + iVar12;
            iVar12 = iVar12 + 4;
            uVar15 = uVar15 | *(iVar6 + 0x8c) | *(iVar6 + 0x28c);
            uStack_70 = uVar15;
        } while (*(iVar5 + 0x44) * 4 - iVar12 != 0);
    }
    _raw_spin_unlock(iVar7);
    if (uVar15 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
        iVar12 = 1;
        *puVar8 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar8);
        iVar12 = iVar4;
        puVar9 = puVar10;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_68) {
        iVar6 = __stack_chk_fail(iVar12);
        puVar10 = &uStack_b0;
        *extraout_x18_00 = sym.chan_free_show;
        pcStack_98 = sym.chan_free_show;
        iVar12 = sp_el0;
        iStack_a8 = *(iVar12 + 0x5e0);
        iVar12 = *(*(iVar6 + 0x60) + 0x98);
        puVar11 = puVar9;
        ppuStack_a0 = &puStack_60;
        uStack_90 = uVar15;
        iStack_88 = iVar5;
        iStack_80 = iVar7;
        puStack_78 = puVar8;
        _raw_spin_lock(iVar12 + 0x38);
        uVar15 = *(iVar12 + 0x44);
        if (*(iVar12 + 0x44) < 1) {
            uVar13 = 0xffffffffffffffff;
        }
        else {
            uVar13 = 0;
            uVar14 = uVar15 - 0x81;
            iVar7 = iVar12;
            do {
                if (uVar14 < 0xffffffffffffff80) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                    (*pcVar3)();
                }
                puVar8 = iVar7 + 0x8c;
                uVar15 = uVar15 - 1;
                puVar1 = iVar7 + 0x28c;
                iVar7 = iVar7 + 4;
                uVar13 = uVar13 | *puVar8 | *puVar1;
            } while (uVar15 != 0);
            uVar13 = ~uVar13;
        }
        _raw_spin_unlock(iVar12 + 0x38);
        uStack_b0 = uVar13;
        if (uVar13 << (-*(iVar12 + 0x40) & 0x3f) == 0) {
            iVar7 = 1;
            *puVar9 = 10;
        }
        else {
            iVar4 = bitmap_print_to_pagebuf(1,puVar9,&uStack_b0);
            iVar7 = iVar4;
            puVar11 = puVar10;
        }
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) != iStack_a8) {
            iVar7 = __stack_chk_fail(iVar7);
            *extraout_x18_01 = sym.chan_xtrigs_sel_show;
            iVar5 = *(*(iVar7 + 0x60) + 0x98);
            iVar7 = iVar5 + 0x38;
            _raw_spin_lock(iVar7);
            uVar2 = *(iVar5 + 0x81);
            _raw_spin_unlock(iVar7);
            iVar4 = sprintf(puVar11,"%ld\n",uVar2);
            return iVar4;
        }
        return iVar7;
    }
    return iVar12;
}


// ===== sym.inen_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023f0 (size 8) =====

ulong sym.inen_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint32_t uVar1;
    char cVar2;
    uint8_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    iVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = kstrtoull(param_3,0,&uStack_40);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar6 + 0x38);
        uVar3 = *(iVar6 + 0x88);
        if (uVar3 < '\0') goto code_r0x080062d8;
        cVar2 = *(iVar6 + 0x4d);
        *(iVar6 + uVar3 * 4 + 0x8c) = uStack_40;
        if ((cVar2 != '\0') && (*(iVar6 + 0x4c) != '\0')) {
            uVar1 = uVar3 * 4 + 0x20;
            if (*(iVar6 + 0x4b0) != '\0') {
                uVar1 = uVar3 << 2 | 0x400;
            }
            sym.cti_write_single_reg(iVar6,uVar1,uStack_40 & 0xffffffff);
        }
        _raw_spin_unlock(iVar6 + 0x38);
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
code_r0x080062d8:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80062dc);
    (*pcVar4)();
}


// ===== sym.chan_gate_disable_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x080023f8 (size 8) =====

int64_t sym.chan_gate_disable_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar16;
    ulong unaff_x30;
    uint64_t uStack_140;
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    int64_t iStack_118;
    int64_t iStack_110;
    uint32_t *puStack_108;
    uint64_t uStack_100;
    int64_t iStack_f8;
    ulong ***pppuStack_f0;
    code *pcStack_e8;
    uint32_t uStack_bc;
    int64_t iStack_b8;
    uchar ***pppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    puVar10 = &uStack_2c;
    uStack_2c = 0;
    iVar9 = param_4;
    iVar4 = kstrtoint(param_3,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_2c;
        iVar4 = sym.cti_channel_gate_op(param_1,1,uStack_2c);
        iVar7 = param_4;
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar7;
    }
    iVar5 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.chan_set_store;
    pcStack_48 = sym.chan_set_store;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puVar11 = &uStack_5c;
    uStack_5c = 0;
    iVar7 = iVar9;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = param_1;
    iStack_38 = param_4;
    iVar4 = kstrtoint(puVar10,0,puVar11);
    if (iVar4 == 0) {
        puVar11 = uStack_5c;
        iVar4 = sym.cti_channel_setop(iVar5,0,uStack_5c);
        iVar8 = iVar9;
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar6 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.chan_clear_store;
    pcStack_78 = sym.chan_clear_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    puVar10 = &uStack_8c;
    uStack_8c = 0;
    iVar8 = iVar7;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar5;
    iStack_68 = iVar9;
    iVar4 = kstrtoint(puVar11,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_8c;
        iVar4 = sym.cti_channel_setop(iVar6,1,uStack_8c);
        iVar9 = iVar7;
        if (iVar4 != 0) {
            iVar9 = iVar4;
        }
    }
    else {
        iVar9 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return iVar9;
    }
    iVar5 = __stack_chk_fail(iVar9);
    *extraout_x18_01 = sym.chan_pulse_store;
    pcStack_a8 = sym.chan_pulse_store;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    puVar11 = &uStack_bc;
    uStack_bc = 0;
    pppuStack_b0 = &ppuStack_80;
    iStack_a0 = iVar6;
    iStack_98 = iVar7;
    iVar4 = kstrtoint(puVar10,0);
    if (iVar4 == 0) {
        puVar11 = uStack_bc;
        iVar4 = sym.cti_channel_setop(iVar5,2,uStack_bc);
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return iVar8;
    }
    iVar7 = __stack_chk_fail(iVar8);
    puVar12 = &uStack_100;
    *extraout_x18_02 = sym.chan_inuse_show;
    pcStack_e8 = sym.chan_inuse_show;
    iVar9 = sp_el0;
    iStack_f8 = *(iVar9 + 0x5e0);
    uStack_100 = 0;
    iVar7 = *(*(iVar7 + 0x60) + 0x98);
    iVar9 = iVar7 + 0x38;
    puVar10 = puVar11;
    pppuStack_f0 = &pppuStack_b0;
    _raw_spin_lock(iVar9);
    if (*(iVar7 + 0x44) < 1) {
        uVar16 = 0;
    }
    else {
        iVar5 = 0;
        uVar16 = 0;
        do {
            if (iVar5 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar8 = iVar7 + iVar5;
            iVar5 = iVar5 + 4;
            uVar16 = uVar16 | *(iVar8 + 0x8c) | *(iVar8 + 0x28c);
            uStack_100 = uVar16;
        } while (*(iVar7 + 0x44) * 4 - iVar5 != 0);
    }
    _raw_spin_unlock(iVar9);
    if (uVar16 << (-*(iVar7 + 0x40) & 0x3f) == 0) {
        iVar5 = 1;
        *puVar11 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar11);
        iVar5 = iVar4;
        puVar10 = puVar12;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_f8) {
        iVar8 = __stack_chk_fail(iVar5);
        puVar12 = &uStack_140;
        *extraout_x18_03 = sym.chan_free_show;
        pcStack_128 = sym.chan_free_show;
        iVar5 = sp_el0;
        iStack_138 = *(iVar5 + 0x5e0);
        iVar5 = *(*(iVar8 + 0x60) + 0x98);
        puVar13 = puVar10;
        pppuStack_130 = &pppuStack_f0;
        uStack_120 = uVar16;
        iStack_118 = iVar7;
        iStack_110 = iVar9;
        puStack_108 = puVar11;
        _raw_spin_lock(iVar5 + 0x38);
        uVar16 = *(iVar5 + 0x44);
        if (*(iVar5 + 0x44) < 1) {
            uVar14 = 0xffffffffffffffff;
        }
        else {
            uVar14 = 0;
            uVar15 = uVar16 - 0x81;
            iVar9 = iVar5;
            do {
                if (uVar15 < 0xffffffffffffff80) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                    (*pcVar3)();
                }
                puVar11 = iVar9 + 0x8c;
                uVar16 = uVar16 - 1;
                puVar1 = iVar9 + 0x28c;
                iVar9 = iVar9 + 4;
                uVar14 = uVar14 | *puVar11 | *puVar1;
            } while (uVar16 != 0);
            uVar14 = ~uVar14;
        }
        _raw_spin_unlock(iVar5 + 0x38);
        uStack_140 = uVar14;
        if (uVar14 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
            iVar9 = 1;
            *puVar10 = 10;
        }
        else {
            iVar4 = bitmap_print_to_pagebuf(1,puVar10,&uStack_140);
            iVar9 = iVar4;
            puVar13 = puVar12;
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) != iStack_138) {
            iVar9 = __stack_chk_fail(iVar9);
            *extraout_x18_04 = sym.chan_xtrigs_sel_show;
            iVar7 = *(*(iVar9 + 0x60) + 0x98);
            iVar9 = iVar7 + 0x38;
            _raw_spin_lock(iVar9);
            uVar2 = *(iVar7 + 0x81);
            _raw_spin_unlock(iVar9);
            iVar4 = sprintf(puVar13,"%ld\n",uVar2);
            return iVar4;
        }
        return iVar9;
    }
    return iVar5;
}


// ===== sym.gate_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002400 (size 8) =====

int64_t sym.gate_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint uVar2;
    uint64_t *arg3;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    arg3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0,&uStack_40);
    if (iVar1 == 0) {
        _raw_spin_lock(iVar4 + 0x38);
        if ((*(iVar4 + 0x4d) != '\0') && (*(iVar4 + 0x4c) != '\0')) {
            arg3 = uStack_40 & 0xffffffff;
            uVar3 = 0x140;
            if (*(iVar4 + 0x4b0) != '\0') {
                uVar3 = 0x88;
            }
            sym.cti_write_single_reg(iVar4,uVar3,arg3);
        }
        _raw_spin_unlock(iVar4 + 0x38);
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.asicctl_show;
    piVar5 = *(*(iVar4 + 0x60) + 0x98);
    _raw_spin_lock(piVar5 + 7);
    if ((*(piVar5 + 0x4d) == '\0') || (*(piVar5 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar5 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar4 = 0x144;
        if (piVar5[0x96] != '\0') {
            iVar4 = 0x8c;
        }
        uVar2 = sym.readl_relaxed_1(*piVar5 + iVar4);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar5 + 0xfb0);
    }
    _raw_spin_unlock(piVar5 + 7);
    iVar1 = scnprintf(arg3,0x1000,"%#x\n",uVar2);
    return iVar1;
}


// ===== sym.intack_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002408 (size 8) =====

int64_t sym.intack_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar4 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar1 = kstrtoull(param_3,0,&uStack_30);
    if (iVar1 == 0) {
        sym.cti_write_intack(param_1,uStack_30 & 0xffffffff);
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.appset_show;
    piVar5 = *(*(iVar3 + 0x60) + 0x98);
    _raw_spin_lock(piVar5 + 7);
    if ((*(piVar5 + 0x4d) == '\0') || (*(piVar5 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar5 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar3 = 0x14;
        if (piVar5[0x96] != '\0') {
            iVar3 = 4;
        }
        uVar2 = sym.readl_relaxed_1(*piVar5 + iVar3);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar5 + 0xfb0);
    }
    _raw_spin_unlock(piVar5 + 7);
    iVar1 = scnprintf(puVar4,0x1000,"%#x\n",uVar2);
    return iVar1;
}


// ===== sym.inout_sel_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002410 (size 8) =====

int64_t sym.inout_sel_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = kstrtoull(param_3,0,&uStack_40);
    iVar4 = -0x16;
    if ((iVar3 == 0) && (uStack_40 < 0x80)) {
        iVar4 = iVar6 + 0x38;
        _raw_spin_lock(iVar4);
        *(iVar6 + 0x88) = uStack_40;
        _raw_spin_unlock(iVar4);
        iVar4 = param_4;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail(iVar4);
    *extraout_x18 = sym.inen_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    _raw_spin_lock(iVar4 + 0x38);
    if (-1 < *(iVar4 + 0x88)) {
        uVar1 = *(iVar4 + *(iVar4 + 0x88) * 4 + 0x8c);
        _raw_spin_unlock(iVar4 + 0x38);
        iVar3 = sprintf(puVar5,"%#lx\n",uVar1);
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80061e4);
    (*pcVar2)();
}


// ===== sym.chan_gate_enable_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002418 (size 8) =====

int64_t sym.chan_gate_enable_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar16;
    ulong unaff_x30;
    uint64_t uStack_170;
    int64_t iStack_168;
    ulong ***pppuStack_160;
    code *pcStack_158;
    uint64_t uStack_150;
    int64_t iStack_148;
    int64_t iStack_140;
    uint32_t *puStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    ulong ***pppuStack_120;
    code *pcStack_118;
    uint32_t uStack_ec;
    int64_t iStack_e8;
    ulong ***pppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uint32_t uStack_bc;
    int64_t iStack_b8;
    uchar ***pppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    puVar11 = &uStack_2c;
    uStack_2c = 0;
    iVar9 = param_4;
    iVar4 = kstrtoint(param_3,0,puVar11);
    if (iVar4 == 0) {
        puVar11 = uStack_2c;
        iVar4 = sym.cti_channel_gate_op(param_1,0,uStack_2c);
        iVar7 = param_4;
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar7;
    }
    iVar5 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.chan_gate_disable_store;
    pcStack_48 = sym.chan_gate_disable_store;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puVar10 = &uStack_5c;
    uStack_5c = 0;
    iVar7 = iVar9;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = param_1;
    iStack_38 = param_4;
    iVar4 = kstrtoint(puVar11,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_5c;
        iVar4 = sym.cti_channel_gate_op(iVar5,1,uStack_5c);
        iVar8 = iVar9;
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar6 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.chan_set_store;
    pcStack_78 = sym.chan_set_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    puVar11 = &uStack_8c;
    uStack_8c = 0;
    iVar8 = iVar7;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar5;
    iStack_68 = iVar9;
    iVar4 = kstrtoint(puVar10,0,puVar11);
    if (iVar4 == 0) {
        puVar11 = uStack_8c;
        iVar4 = sym.cti_channel_setop(iVar6,0,uStack_8c);
        iVar9 = iVar7;
        if (iVar4 != 0) {
            iVar9 = iVar4;
        }
    }
    else {
        iVar9 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return iVar9;
    }
    iVar5 = __stack_chk_fail(iVar9);
    *extraout_x18_01 = sym.chan_clear_store;
    pcStack_a8 = sym.chan_clear_store;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    puVar10 = &uStack_bc;
    uStack_bc = 0;
    iVar9 = iVar8;
    pppuStack_b0 = &ppuStack_80;
    iStack_a0 = iVar6;
    iStack_98 = iVar7;
    iVar4 = kstrtoint(puVar11,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_bc;
        iVar4 = sym.cti_channel_setop(iVar5,1,uStack_bc);
        iVar7 = iVar8;
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b8) {
        return iVar7;
    }
    iVar6 = __stack_chk_fail(iVar7);
    *extraout_x18_02 = sym.chan_pulse_store;
    pcStack_d8 = sym.chan_pulse_store;
    iVar7 = sp_el0;
    iStack_e8 = *(iVar7 + 0x5e0);
    puVar11 = &uStack_ec;
    uStack_ec = 0;
    pppuStack_e0 = &pppuStack_b0;
    iStack_d0 = iVar5;
    iStack_c8 = iVar8;
    iVar4 = kstrtoint(puVar10,0);
    if (iVar4 == 0) {
        puVar11 = uStack_ec;
        iVar4 = sym.cti_channel_setop(iVar6,2,uStack_ec);
        if (iVar4 != 0) {
            iVar9 = iVar4;
        }
    }
    else {
        iVar9 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return iVar9;
    }
    iVar7 = __stack_chk_fail(iVar9);
    puVar12 = &uStack_130;
    *extraout_x18_03 = sym.chan_inuse_show;
    pcStack_118 = sym.chan_inuse_show;
    iVar9 = sp_el0;
    iStack_128 = *(iVar9 + 0x5e0);
    uStack_130 = 0;
    iVar7 = *(*(iVar7 + 0x60) + 0x98);
    iVar9 = iVar7 + 0x38;
    puVar10 = puVar11;
    pppuStack_120 = &pppuStack_e0;
    _raw_spin_lock(iVar9);
    if (*(iVar7 + 0x44) < 1) {
        uVar16 = 0;
    }
    else {
        iVar5 = 0;
        uVar16 = 0;
        do {
            if (iVar5 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar8 = iVar7 + iVar5;
            iVar5 = iVar5 + 4;
            uVar16 = uVar16 | *(iVar8 + 0x8c) | *(iVar8 + 0x28c);
            uStack_130 = uVar16;
        } while (*(iVar7 + 0x44) * 4 - iVar5 != 0);
    }
    _raw_spin_unlock(iVar9);
    if (uVar16 << (-*(iVar7 + 0x40) & 0x3f) == 0) {
        iVar5 = 1;
        *puVar11 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar11);
        iVar5 = iVar4;
        puVar10 = puVar12;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_128) {
        iVar8 = __stack_chk_fail(iVar5);
        puVar12 = &uStack_170;
        *extraout_x18_04 = sym.chan_free_show;
        pcStack_158 = sym.chan_free_show;
        iVar5 = sp_el0;
        iStack_168 = *(iVar5 + 0x5e0);
        iVar5 = *(*(iVar8 + 0x60) + 0x98);
        puVar13 = puVar10;
        pppuStack_160 = &pppuStack_120;
        uStack_150 = uVar16;
        iStack_148 = iVar7;
        iStack_140 = iVar9;
        puStack_138 = puVar11;
        _raw_spin_lock(iVar5 + 0x38);
        uVar16 = *(iVar5 + 0x44);
        if (*(iVar5 + 0x44) < 1) {
            uVar14 = 0xffffffffffffffff;
        }
        else {
            uVar14 = 0;
            uVar15 = uVar16 - 0x81;
            iVar9 = iVar5;
            do {
                if (uVar15 < 0xffffffffffffff80) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                    (*pcVar3)();
                }
                puVar11 = iVar9 + 0x8c;
                uVar16 = uVar16 - 1;
                puVar1 = iVar9 + 0x28c;
                iVar9 = iVar9 + 4;
                uVar14 = uVar14 | *puVar11 | *puVar1;
            } while (uVar16 != 0);
            uVar14 = ~uVar14;
        }
        _raw_spin_unlock(iVar5 + 0x38);
        uStack_170 = uVar14;
        if (uVar14 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
            iVar9 = 1;
            *puVar10 = 10;
        }
        else {
            iVar4 = bitmap_print_to_pagebuf(1,puVar10,&uStack_170);
            iVar9 = iVar4;
            puVar13 = puVar12;
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) != iStack_168) {
            iVar9 = __stack_chk_fail(iVar9);
            *extraout_x18_05 = sym.chan_xtrigs_sel_show;
            iVar7 = *(*(iVar9 + 0x60) + 0x98);
            iVar9 = iVar7 + 0x38;
            _raw_spin_lock(iVar9);
            uVar2 = *(iVar7 + 0x81);
            _raw_spin_unlock(iVar9);
            iVar4 = sprintf(puVar13,"%ld\n",uVar2);
            return iVar4;
        }
        return iVar9;
    }
    return iVar5;
}


// ===== sym.trigout_detach_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002420 (size 8) =====

int64_t sym.trigout_detach_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int param_4)

{
    uchar uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iVar4 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(param_3,"%d %d",iVar4,&uStack_30);
    if (iVar2 == 2) {
        iVar4 = 1;
        iVar2 = sym.cti_channel_trig_op(param_1,1,1,uStack_30._4_4_);
        if (iVar2 != 0) {
            param_4 = iVar2;
        }
        iVar3 = param_4;
    }
    else {
        iVar3 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    iVar3 = __stack_chk_fail(iVar3);
    *extraout_x18 = sym.trig_filter_enable_show;
    iVar5 = *(*(iVar3 + 0x60) + 0x98);
    iVar3 = iVar5 + 0x38;
    _raw_spin_lock(iVar3);
    uVar1 = *(iVar5 + 0x80);
    _raw_spin_unlock(iVar3);
    iVar2 = sprintf(iVar4,0x8000fec,uVar1);
    return iVar2;
}


// ===== sym.apppulse_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002428 (size 8) =====

int64_t sym.apppulse_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint64_t *puVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar8 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    uStack_40 = 0;
    iVar10 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = kstrtoull(param_3,0,&uStack_40);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar10 + 0x38);
        if ((*(iVar10 + 0x4d) != '\0') && (*(iVar10 + 0x4c) != '\0')) {
            puVar8 = uStack_40 & 0xffffffff;
            uVar9 = 0x1c;
            if (*(iVar10 + 0x4b0) != '\0') {
                uVar9 = 0xc;
            }
            sym.cti_write_single_reg(iVar10,uVar9,puVar8);
        }
        _raw_spin_unlock(iVar10 + 0x38);
    }
    else {
        param_4 = -0x16;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.triginstatus_show;
    piVar12 = *(*(iVar10 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(iVar10 + 0x60),4);
    if (iVar5 < 0) {
        puVar8 = *(iVar10 + 0x60) + 0x1f8;
        uVar13 = *puVar8;
        do {
            uVar9 = uVar13;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar8,2,0,1);
            do {
                uVar1 = *puVar8;
                uVar13 = uVar1;
                if (uVar1 != uVar9) goto code_r0x08006cb4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar8,0x10);
                if (bVar4) {
                    *puVar8 = uVar9 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006cb4:
        } while (uVar9 != uVar1);
        return iVar5;
    }
    _raw_spin_lock(piVar12 + 7);
    if (*(piVar12 + 0x4d) == '\0') {
        uVar6 = 0;
    }
    else {
        if (piVar12[0x96] != '\0') {
            iVar11 = 0;
            uVar13 = 0x40;
            iVar7 = *(piVar12 + 0x44) + -1;
            iVar5 = 0x1f;
            iVar2 = *(piVar12 + 0x44) + 0x1e;
            if (-1 < iVar7) {
                iVar2 = iVar7;
            }
            uVar9 = 0;
            do {
                uVar6 = sym.readl_relaxed_1(*piVar12 + uVar13);
                uVar1 = uVar9 + 1;
                iVar7 = scnprintf(puVar8 + iVar11,0x1000 - iVar11,"%u - %u : 0x%x\n",uVar9,iVar5,uVar6);
                uVar13 = uVar13 + 4;
                iVar11 = iVar11 + iVar7;
                iVar5 = iVar5 + 0x20;
                uVar9 = uVar1;
            } while (uVar1 <= iVar2 >> 5);
            goto code_r0x08006cf4;
        }
        uVar6 = sym.readl_relaxed_1(*piVar12 + 0x130);
    }
    iVar11 = 0;
code_r0x08006cf4:
    _raw_spin_unlock(piVar12 + 7);
    __pm_runtime_idle(*(iVar10 + 0x60),4);
    if (piVar12[0x96] == '\0') {
        iVar5 = scnprintf(puVar8,0x1000,"0x%x\n",uVar6);
        iVar11 = iVar5;
    }
    return iVar11;
}


// ===== sym.trigin_attach_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002430 (size 8) =====

int64_t sym.trigin_attach_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uchar uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong *puVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x30;
    ulong uStack_c0;
    int64_t iStack_b8;
    ulong **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    uchar *puStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uchar *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar10 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iVar8 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(param_3,"%d %d",iVar8);
    if (iVar2 == 2) {
        puVar10 = uStack_30._4_4_;
        iVar8 = 0;
        iVar3 = sym.cti_channel_trig_op(param_1,0,0,uStack_30._4_4_);
        iVar2 = param_4;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar5 = iVar2;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(iVar5);
    puVar11 = &uStack_60;
    *extraout_x18 = sym.trigin_detach_store;
    pcStack_48 = sym.trigin_detach_store;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_60 + 4;
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = param_1;
    uStack_38 = param_4;
    iVar2 = sscanf(iVar8,"%d %d",iVar5);
    if (iVar2 == 2) {
        puVar11 = uStack_60._4_4_;
        iVar5 = 0;
        iVar3 = sym.cti_channel_trig_op(iVar6,1,0,uStack_60._4_4_);
        iVar2 = puVar10;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar8 = iVar2;
    }
    else {
        iVar8 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar7 = __stack_chk_fail(iVar8);
    uVar9 = &uStack_90;
    *extraout_x18_00 = sym.trigout_attach_store;
    pcStack_78 = sym.trigout_attach_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    iVar8 = &uStack_90 + 4;
    uStack_90 = 0;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar6;
    puStack_68 = puVar10;
    iVar2 = sscanf(iVar5,"%d %d",iVar8);
    if (iVar2 == 2) {
        iVar8 = 1;
        uVar9 = uStack_90._4_4_;
        iVar3 = sym.cti_channel_trig_op(iVar7,0,1,uStack_90._4_4_);
        iVar2 = puVar11;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar5 = iVar2;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_88) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(iVar5);
    *extraout_x18_01 = sym.trigout_detach_store;
    pcStack_a8 = sym.trigout_detach_store;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_c0 + 4;
    uStack_c0 = 0;
    ppuStack_b0 = &ppuStack_80;
    iStack_a0 = iVar7;
    puStack_98 = puVar11;
    iVar2 = sscanf(iVar8,"%d %d",iVar5,&uStack_c0);
    if (iVar2 == 2) {
        iVar5 = 1;
        uVar4 = sym.cti_channel_trig_op(iVar6,1,1,uStack_c0._4_4_);
        if (uVar4 != 0) {
            uVar9 = uVar4;
        }
        iVar8 = uVar9;
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b8) {
        return iVar8;
    }
    iVar8 = __stack_chk_fail(iVar8);
    *extraout_x18_02 = sym.trig_filter_enable_show;
    iVar6 = *(*(iVar8 + 0x60) + 0x98);
    iVar8 = iVar6 + 0x38;
    _raw_spin_lock(iVar8);
    uVar1 = *(iVar6 + 0x80);
    _raw_spin_unlock(iVar8);
    iVar2 = sprintf(iVar5,0x8000fec,uVar1);
    return iVar2;
}


// ===== sym.trigin_detach_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002438 (size 8) =====

int64_t sym.trigin_detach_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uchar uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
    ulong uStack_90;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uchar *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar10 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iVar8 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(param_3,"%d %d",iVar8);
    if (iVar2 == 2) {
        puVar10 = uStack_30._4_4_;
        iVar8 = 0;
        iVar3 = sym.cti_channel_trig_op(param_1,1,0,uStack_30._4_4_);
        iVar2 = param_4;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar5 = iVar2;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(iVar5);
    uVar9 = &uStack_60;
    *extraout_x18 = sym.trigout_attach_store;
    pcStack_48 = sym.trigout_attach_store;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_60 + 4;
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = param_1;
    uStack_38 = param_4;
    iVar2 = sscanf(iVar8,"%d %d",iVar5);
    if (iVar2 == 2) {
        iVar5 = 1;
        uVar9 = uStack_60._4_4_;
        iVar3 = sym.cti_channel_trig_op(iVar6,0,1,uStack_60._4_4_);
        iVar2 = puVar10;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar8 = iVar2;
    }
    else {
        iVar8 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar7 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.trigout_detach_store;
    pcStack_78 = sym.trigout_detach_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    iVar8 = &uStack_90 + 4;
    uStack_90 = 0;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar6;
    puStack_68 = puVar10;
    iVar2 = sscanf(iVar5,"%d %d",iVar8,&uStack_90);
    if (iVar2 == 2) {
        iVar8 = 1;
        uVar4 = sym.cti_channel_trig_op(iVar7,1,1,uStack_90._4_4_);
        if (uVar4 != 0) {
            uVar9 = uVar4;
        }
        iVar5 = uVar9;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_88) {
        return iVar5;
    }
    iVar5 = __stack_chk_fail(iVar5);
    *extraout_x18_01 = sym.trig_filter_enable_show;
    iVar6 = *(*(iVar5 + 0x60) + 0x98);
    iVar5 = iVar6 + 0x38;
    _raw_spin_lock(iVar5);
    uVar1 = *(iVar6 + 0x80);
    _raw_spin_unlock(iVar5);
    iVar2 = sprintf(iVar8,0x8000fec,uVar1);
    return iVar2;
}


// ===== sym.outen_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002440 (size 8) =====

ulong sym.outen_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint32_t uVar1;
    char cVar2;
    uint8_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    iVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = kstrtoull(param_3,0,&uStack_40);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar6 + 0x38);
        uVar3 = *(iVar6 + 0x88);
        if (uVar3 < '\0') goto code_r0x08006450;
        cVar2 = *(iVar6 + 0x4d);
        *(iVar6 + uVar3 * 4 + 0x28c) = uStack_40;
        if ((cVar2 != '\0') && (*(iVar6 + 0x4c) != '\0')) {
            uVar1 = uVar3 * 4 + 0xa0;
            if (*(iVar6 + 0x4b0) != '\0') {
                uVar1 = uVar3 << 2 | 0x800;
            }
            sym.cti_write_single_reg(iVar6,uVar1,uStack_40 & 0xffffffff);
        }
        _raw_spin_unlock(iVar6 + 0x38);
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
code_r0x08006450:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8006454);
    (*pcVar4)();
}


// ===== sym.chan_xtrigs_sel_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002448 (size 8) =====

int64_t sym.chan_xtrigs_sel_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint64_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar6 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    iVar8 = *(*(param_1 + 0x60) + 0x98);
    iVar4 = kstrtoull(param_3,0);
    if ((iVar4 == 0) && (uStack_40 <= *(iVar8 + 0x40) + -1)) {
        _raw_spin_lock(iVar8 + 0x38);
        *(iVar8 + 0x81) = uStack_40;
        _raw_spin_unlock(iVar8 + 0x38);
    }
    else {
        param_4 = -0x16;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.chan_xtrigs_in_show;
    iVar8 = *(*(iVar8 + 0x60) + 0x98);
    uVar1 = *(iVar8 + 0x44);
    if (uVar1 < 1) {
        iVar4 = 0;
    }
    else {
        uVar2 = *(iVar8 + 0x81);
        uVar7 = 0;
        iVar4 = 0;
        do {
            if (uVar7 == 0x80) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007d70);
                (*pcVar3)();
            }
            if ((*(iVar8 + 0x8c + uVar7 * 4) & 1L << (uVar2 & 0x3f)) != 0) {
                iVar5 = sprintf(puVar6 + iVar4,0x80012bc,uVar7 & 0xffffffff);
                iVar4 = iVar5 + iVar4;
            }
            uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
    }
    *(puVar6 + iVar4) = 10;
    return iVar4 + 1;
}


// ===== sym.enable_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002450 (size 8) =====

int64_t sym.enable_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uchar uVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar3 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iStack_30 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = kstrtoull(param_3,0,&iStack_30);
    if (iVar2 == 0) {
        iVar4 = *(iVar4 + 8);
        if (iStack_30 == 0) {
            iVar2 = sym.cti_disable(iVar4);
        }
        else {
            iVar2 = sym.cti_enable(iVar4);
        }
        if (iVar2 != 0) {
            param_4 = iVar2;
        }
    }
    else {
        param_4 = iVar2;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        iVar4 = __stack_chk_fail(param_4);
        *extraout_x18 = sym.powered_show;
        iVar5 = *(*(iVar4 + 0x60) + 0x98);
        iVar4 = iVar5 + 0x38;
        _raw_spin_lock(iVar4);
        uVar1 = *(iVar5 + 0x4d);
        _raw_spin_unlock(iVar4);
        iVar2 = sprintf(piVar3,0x8000fec,uVar1);
        return iVar2;
    }
    return param_4;
}


// ===== sym.trig_filter_enable_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002458 (size 8) =====

int64_t sym.trig_filter_enable_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar3 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = kstrtoull(param_3,0,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x38;
        _raw_spin_lock(iVar1);
        *(iVar4 + 0x80) = iStack_40 != 0;
        _raw_spin_unlock(iVar1);
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.trigout_filtered_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    iVar2 = bitmap_print_to_pagebuf(1,piVar3,iVar4 + 0x70,*(iVar4 + 0x44));
    return iVar2;
}


// ===== sym.appset_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002460 (size 8) =====

int64_t sym.appset_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t *arg3;
    uint64_t *puVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t unaff_x21;
    int64_t *piVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_90;
    int64_t iStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar10 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    uStack_40 = 0;
    iVar14 = *(*(param_1 + 0x60) + 0x98);
    iVar12 = param_4;
    iVar5 = kstrtoull(param_3,0,&uStack_40);
    if (iVar5 == 0) {
        unaff_x21 = iVar14 + 0x38;
        _raw_spin_lock(unaff_x21);
        if ((*(iVar14 + 0x4d) != '\0') && (*(iVar14 + 0x4c) != '\0')) {
            puVar10 = uStack_40 & 0xffffffff;
            uVar11 = 0x14;
            if (*(iVar14 + 0x4b0) != '\0') {
                uVar11 = 4;
            }
            sym.cti_write_single_reg(iVar14,uVar11,puVar10);
        }
        _raw_spin_unlock(unaff_x21);
    }
    else {
        param_4 = -0x16;
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar8 = __stack_chk_fail();
    arg3 = &uStack_80;
    *extraout_x18 = sym.appclear_store;
    pcStack_68 = sym.appclear_store;
    iVar13 = sp_el0;
    iStack_78 = *(iVar13 + 0x5e0);
    uStack_80 = 0;
    iVar8 = *(*(iVar8 + 0x60) + 0x98);
    iVar13 = iVar12;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = unaff_x21;
    iStack_50 = iVar14;
    iStack_48 = param_4;
    iVar5 = kstrtoull(puVar10,0,&uStack_80);
    if (iVar5 == 0) {
        unaff_x21 = iVar8 + 0x38;
        _raw_spin_lock(unaff_x21);
        arg3 = uStack_80 & 0xffffffff;
        *(iVar8 + 0x84) = *(iVar8 + 0x84) & (uStack_80 ^ 0xffffffff);
        if ((*(iVar8 + 0x4d) != '\0') && (*(iVar8 + 0x4c) != '\0')) {
            uVar11 = 8;
            if (*(iVar8 + 0x4b0) != '\0') {
                uVar11 = 0x18;
            }
            sym.cti_write_single_reg(iVar8,uVar11,arg3);
        }
        _raw_spin_unlock(unaff_x21);
    }
    else {
        iVar12 = -0x16;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_78) {
        return iVar12;
    }
    iVar9 = __stack_chk_fail();
    puVar10 = &uStack_c0;
    *extraout_x18_00 = sym.apppulse_store;
    pcStack_a8 = sym.apppulse_store;
    iVar14 = sp_el0;
    iStack_b8 = *(iVar14 + 0x5e0);
    uStack_c0 = 0;
    iVar14 = *(*(iVar9 + 0x60) + 0x98);
    ppuStack_b0 = &puStack_70;
    iStack_a0 = unaff_x21;
    iStack_90 = iVar8;
    iStack_88 = iVar12;
    iVar5 = kstrtoull(arg3,0,&uStack_c0);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar14 + 0x38);
        if ((*(iVar14 + 0x4d) != '\0') && (*(iVar14 + 0x4c) != '\0')) {
            puVar10 = uStack_c0 & 0xffffffff;
            uVar11 = 0x1c;
            if (*(iVar14 + 0x4b0) != '\0') {
                uVar11 = 0xc;
            }
            sym.cti_write_single_reg(iVar14,uVar11,puVar10);
        }
        _raw_spin_unlock(iVar14 + 0x38);
    }
    else {
        iVar13 = -0x16;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_b8) {
        return iVar13;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.triginstatus_show;
    piVar15 = *(*(iVar12 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(iVar12 + 0x60),4);
    if (iVar5 < 0) {
        puVar10 = *(iVar12 + 0x60) + 0x1f8;
        uVar16 = *puVar10;
        do {
            uVar11 = uVar16;
            if (uVar11 == 0) break;
            Hint_Prefetch(puVar10,2,0,1);
            do {
                uVar1 = *puVar10;
                uVar16 = uVar1;
                if (uVar1 != uVar11) goto code_r0x08006cb4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar4) {
                    *puVar10 = uVar11 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006cb4:
        } while (uVar11 != uVar1);
        return iVar5;
    }
    _raw_spin_lock(piVar15 + 7);
    if (*(piVar15 + 0x4d) == '\0') {
        uVar6 = 0;
    }
    else {
        if (piVar15[0x96] != '\0') {
            iVar14 = 0;
            uVar16 = 0x40;
            iVar7 = *(piVar15 + 0x44) + -1;
            iVar5 = 0x1f;
            iVar2 = *(piVar15 + 0x44) + 0x1e;
            if (-1 < iVar7) {
                iVar2 = iVar7;
            }
            uVar11 = 0;
            do {
                uVar6 = sym.readl_relaxed_1(*piVar15 + uVar16);
                uVar1 = uVar11 + 1;
                iVar7 = scnprintf(puVar10 + iVar14,0x1000 - iVar14,"%u - %u : 0x%x\n",uVar11,iVar5,uVar6);
                uVar16 = uVar16 + 4;
                iVar14 = iVar14 + iVar7;
                iVar5 = iVar5 + 0x20;
                uVar11 = uVar1;
            } while (uVar1 <= iVar2 >> 5);
            goto code_r0x08006cf4;
        }
        uVar6 = sym.readl_relaxed_1(*piVar15 + 0x130);
    }
    iVar14 = 0;
code_r0x08006cf4:
    _raw_spin_unlock(piVar15 + 7);
    __pm_runtime_idle(*(iVar12 + 0x60),4);
    if (piVar15[0x96] == '\0') {
        iVar5 = scnprintf(puVar10,0x1000,"0x%x\n",uVar6);
        iVar14 = iVar5;
    }
    return iVar14;
}


// ===== sym.chan_clear_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002468 (size 8) =====

int64_t sym.chan_clear_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint64_t *puVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar15;
    ulong unaff_x30;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar ***pppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    uint32_t *puStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    puVar9 = &uStack_2c;
    uStack_2c = 0;
    iVar8 = param_4;
    iVar4 = kstrtoint(param_3,0,puVar9);
    if (iVar4 == 0) {
        puVar9 = uStack_2c;
        iVar4 = sym.cti_channel_setop(param_1,1,uStack_2c);
        iVar6 = param_4;
        if (iVar4 != 0) {
            iVar6 = iVar4;
        }
    }
    else {
        iVar6 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar6;
    }
    iVar5 = __stack_chk_fail(iVar6);
    *extraout_x18 = sym.chan_pulse_store;
    pcStack_48 = sym.chan_pulse_store;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    puVar10 = &uStack_5c;
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = param_1;
    iStack_38 = param_4;
    iVar4 = kstrtoint(puVar9,0);
    if (iVar4 == 0) {
        puVar10 = uStack_5c;
        iVar4 = sym.cti_channel_setop(iVar5,2,uStack_5c);
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar6 = __stack_chk_fail(iVar8);
    puVar11 = &uStack_a0;
    *extraout_x18_00 = sym.chan_inuse_show;
    pcStack_88 = sym.chan_inuse_show;
    iVar8 = sp_el0;
    iStack_98 = *(iVar8 + 0x5e0);
    uStack_a0 = 0;
    iVar6 = *(*(iVar6 + 0x60) + 0x98);
    iVar8 = iVar6 + 0x38;
    puVar9 = puVar10;
    ppuStack_90 = &puStack_50;
    _raw_spin_lock(iVar8);
    if (*(iVar6 + 0x44) < 1) {
        uVar15 = 0;
    }
    else {
        iVar5 = 0;
        uVar15 = 0;
        do {
            if (iVar5 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar7 = iVar6 + iVar5;
            iVar5 = iVar5 + 4;
            uVar15 = uVar15 | *(iVar7 + 0x8c) | *(iVar7 + 0x28c);
            uStack_a0 = uVar15;
        } while (*(iVar6 + 0x44) * 4 - iVar5 != 0);
    }
    _raw_spin_unlock(iVar8);
    if (uVar15 << (-*(iVar6 + 0x40) & 0x3f) == 0) {
        iVar5 = 1;
        *puVar10 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar10);
        iVar5 = iVar4;
        puVar9 = puVar11;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_98) {
        iVar7 = __stack_chk_fail(iVar5);
        puVar11 = &uStack_e0;
        *extraout_x18_01 = sym.chan_free_show;
        pcStack_c8 = sym.chan_free_show;
        iVar5 = sp_el0;
        iStack_d8 = *(iVar5 + 0x5e0);
        iVar5 = *(*(iVar7 + 0x60) + 0x98);
        puVar12 = puVar9;
        pppuStack_d0 = &ppuStack_90;
        uStack_c0 = uVar15;
        iStack_b8 = iVar6;
        iStack_b0 = iVar8;
        puStack_a8 = puVar10;
        _raw_spin_lock(iVar5 + 0x38);
        uVar15 = *(iVar5 + 0x44);
        if (*(iVar5 + 0x44) < 1) {
            uVar13 = 0xffffffffffffffff;
        }
        else {
            uVar13 = 0;
            uVar14 = uVar15 - 0x81;
            iVar8 = iVar5;
            do {
                if (uVar14 < 0xffffffffffffff80) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                    (*pcVar3)();
                }
                puVar10 = iVar8 + 0x8c;
                uVar15 = uVar15 - 1;
                puVar1 = iVar8 + 0x28c;
                iVar8 = iVar8 + 4;
                uVar13 = uVar13 | *puVar10 | *puVar1;
            } while (uVar15 != 0);
            uVar13 = ~uVar13;
        }
        _raw_spin_unlock(iVar5 + 0x38);
        uStack_e0 = uVar13;
        if (uVar13 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
            iVar8 = 1;
            *puVar9 = 10;
        }
        else {
            iVar4 = bitmap_print_to_pagebuf(1,puVar9,&uStack_e0);
            iVar8 = iVar4;
            puVar12 = puVar11;
        }
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) != iStack_d8) {
            iVar8 = __stack_chk_fail(iVar8);
            *extraout_x18_02 = sym.chan_xtrigs_sel_show;
            iVar6 = *(*(iVar8 + 0x60) + 0x98);
            iVar8 = iVar6 + 0x38;
            _raw_spin_lock(iVar8);
            uVar2 = *(iVar6 + 0x81);
            _raw_spin_unlock(iVar8);
            iVar4 = sprintf(puVar12,"%ld\n",uVar2);
            return iVar4;
        }
        return iVar8;
    }
    return iVar5;
}


// ===== sym.chan_xtrigs_reset_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002470 (size 8) =====

ulong sym.chan_xtrigs_reset_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t arg1;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x60) + 0x98);
    _raw_spin_lock(arg1 + 0x38);
    if (0 < *(arg1 + 0x44)) {
        uVar3 = 0;
        do {
            if (uVar3 == 0x80) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8007f3c);
                (*pcVar2)();
            }
            iVar1 = arg1 + uVar3 * 4;
            *(iVar1 + 0x8c) = 0;
            *(iVar1 + 0x28c) = 0;
            if (uVar3 == *(*(arg1 + 0x4b8) + 8)) {
                sym.cti_trigin_gpio_disable(arg1);
            }
            if (uVar3 == *(*(arg1 + 0x4c0) + 8)) {
                sym.cti_trigout_gpio_disable(arg1);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(arg1 + 0x44));
    }
    *(arg1 + 0x490) = 0;
    *(arg1 + 0x84) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x81) = 0;
    *(arg1 + 0x48c) = 0xffffffffffffffff >> (-*(arg1 + 0x40) & 0x3f);
    if ((*(arg1 + 0x4d) != '\0') && (*(arg1 + 0x4c) != '\0')) {
        sym.cti_write_all_hw_regs(arg1);
    }
    _raw_spin_unlock(arg1 + 0x38);
    return param_4;
}


// ===== sym.chan_set_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002478 (size 8) =====

int64_t sym.chan_set_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar16;
    ulong unaff_x30;
    uint64_t uStack_110;
    int64_t iStack_108;
    ulong ***pppuStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    uint32_t *puStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uchar ***pppuStack_c0;
    code *pcStack_b8;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    puVar11 = &uStack_2c;
    uStack_2c = 0;
    iVar9 = param_4;
    iVar4 = kstrtoint(param_3,0,puVar11);
    if (iVar4 == 0) {
        puVar11 = uStack_2c;
        iVar4 = sym.cti_channel_setop(param_1,0,uStack_2c);
        iVar7 = param_4;
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar7;
    }
    iVar5 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.chan_clear_store;
    pcStack_48 = sym.chan_clear_store;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puVar10 = &uStack_5c;
    uStack_5c = 0;
    iVar7 = iVar9;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = param_1;
    iStack_38 = param_4;
    iVar4 = kstrtoint(puVar11,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_5c;
        iVar4 = sym.cti_channel_setop(iVar5,1,uStack_5c);
        iVar8 = iVar9;
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar6 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.chan_pulse_store;
    pcStack_78 = sym.chan_pulse_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    puVar11 = &uStack_8c;
    uStack_8c = 0;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar5;
    iStack_68 = iVar9;
    iVar4 = kstrtoint(puVar10,0);
    if (iVar4 == 0) {
        puVar11 = uStack_8c;
        iVar4 = sym.cti_channel_setop(iVar6,2,uStack_8c);
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_88) {
        return iVar7;
    }
    iVar7 = __stack_chk_fail(iVar7);
    puVar12 = &uStack_d0;
    *extraout_x18_01 = sym.chan_inuse_show;
    pcStack_b8 = sym.chan_inuse_show;
    iVar9 = sp_el0;
    iStack_c8 = *(iVar9 + 0x5e0);
    uStack_d0 = 0;
    iVar7 = *(*(iVar7 + 0x60) + 0x98);
    iVar9 = iVar7 + 0x38;
    puVar10 = puVar11;
    pppuStack_c0 = &ppuStack_80;
    _raw_spin_lock(iVar9);
    if (*(iVar7 + 0x44) < 1) {
        uVar16 = 0;
    }
    else {
        iVar5 = 0;
        uVar16 = 0;
        do {
            if (iVar5 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar8 = iVar7 + iVar5;
            iVar5 = iVar5 + 4;
            uVar16 = uVar16 | *(iVar8 + 0x8c) | *(iVar8 + 0x28c);
            uStack_d0 = uVar16;
        } while (*(iVar7 + 0x44) * 4 - iVar5 != 0);
    }
    _raw_spin_unlock(iVar9);
    if (uVar16 << (-*(iVar7 + 0x40) & 0x3f) == 0) {
        iVar5 = 1;
        *puVar11 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar11);
        iVar5 = iVar4;
        puVar10 = puVar12;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_c8) {
        return iVar5;
    }
    iVar8 = __stack_chk_fail(iVar5);
    puVar12 = &uStack_110;
    *extraout_x18_02 = sym.chan_free_show;
    pcStack_f8 = sym.chan_free_show;
    iVar5 = sp_el0;
    iStack_108 = *(iVar5 + 0x5e0);
    iVar5 = *(*(iVar8 + 0x60) + 0x98);
    puVar13 = puVar10;
    pppuStack_100 = &pppuStack_c0;
    uStack_f0 = uVar16;
    iStack_e8 = iVar7;
    iStack_e0 = iVar9;
    puStack_d8 = puVar11;
    _raw_spin_lock(iVar5 + 0x38);
    uVar16 = *(iVar5 + 0x44);
    if (*(iVar5 + 0x44) < 1) {
        uVar14 = 0xffffffffffffffff;
    }
    else {
        uVar14 = 0;
        uVar15 = uVar16 - 0x81;
        iVar9 = iVar5;
        do {
            if (uVar15 < 0xffffffffffffff80) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                (*pcVar3)();
            }
            puVar11 = iVar9 + 0x8c;
            uVar16 = uVar16 - 1;
            puVar1 = iVar9 + 0x28c;
            iVar9 = iVar9 + 4;
            uVar14 = uVar14 | *puVar11 | *puVar1;
        } while (uVar16 != 0);
        uVar14 = ~uVar14;
    }
    _raw_spin_unlock(iVar5 + 0x38);
    uStack_110 = uVar14;
    if (uVar14 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
        iVar9 = 1;
        *puVar10 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar10,&uStack_110);
        iVar9 = iVar4;
        puVar13 = puVar12;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_108) {
        iVar9 = __stack_chk_fail(iVar9);
        *extraout_x18_03 = sym.chan_xtrigs_sel_show;
        iVar7 = *(*(iVar9 + 0x60) + 0x98);
        iVar9 = iVar7 + 0x38;
        _raw_spin_lock(iVar9);
        uVar2 = *(iVar7 + 0x81);
        _raw_spin_unlock(iVar9);
        iVar4 = sprintf(puVar13,"%ld\n",uVar2);
        return iVar4;
    }
    return iVar9;
}


// ===== sym.asicctl_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002480 (size 8) =====

int64_t sym.asicctl_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    int64_t arg1;
    uint64_t *arg3;
    uint64_t *puVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    arg3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    iVar7 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = param_4;
    iVar2 = kstrtoull(param_3,0,&uStack_40);
    if (iVar2 == 0) {
        _raw_spin_lock(iVar7 + 0x38);
        if ((*(iVar7 + 0x4d) != '\0') && (*(iVar7 + 0x4c) != '\0')) {
            arg3 = uStack_40 & 0xffffffff;
            uVar5 = 0x144;
            if (*(iVar7 + 0x4b0) != '\0') {
                uVar5 = 0x8c;
            }
            sym.cti_write_single_reg(iVar7,uVar5,arg3);
        }
        _raw_spin_unlock(iVar7 + 0x38);
    }
    else {
        param_4 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return param_4;
    }
    arg1 = __stack_chk_fail();
    puVar4 = &uStack_70;
    *extraout_x18 = sym.intack_store;
    pcStack_58 = sym.intack_store;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffd0;
    iStack_50 = iVar7;
    iStack_48 = param_4;
    iVar2 = kstrtoull(arg3,0,&uStack_70);
    if (iVar2 == 0) {
        sym.cti_write_intack(arg1,uStack_70 & 0xffffffff);
    }
    else {
        iVar6 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.appset_show;
    piVar8 = *(*(iVar6 + 0x60) + 0x98);
    _raw_spin_lock(piVar8 + 7);
    if ((*(piVar8 + 0x4d) == '\0') || (*(piVar8 + 0x4c) == '\0')) {
        uVar3 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar8 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar6 = 0x14;
        if (piVar8[0x96] != '\0') {
            iVar6 = 4;
        }
        uVar3 = sym.readl_relaxed_1(*piVar8 + iVar6);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar8 + 0xfb0);
    }
    _raw_spin_unlock(piVar8 + 7);
    iVar2 = scnprintf(puVar4,0x1000,"%#x\n",uVar3);
    return iVar2;
}


// ===== sym.appclear_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002488 (size 8) =====

int64_t sym.appclear_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t *puVar9;
    uint64_t *arg3;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t unaff_x21;
    int64_t *piVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar9 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_40 = 0;
    iVar12 = *(*(param_1 + 0x60) + 0x98);
    iVar11 = param_4;
    iVar5 = kstrtoull(param_3,0,&uStack_40);
    if (iVar5 == 0) {
        unaff_x21 = iVar12 + 0x38;
        _raw_spin_lock(unaff_x21);
        puVar9 = uStack_40 & 0xffffffff;
        *(iVar12 + 0x84) = *(iVar12 + 0x84) & (uStack_40 ^ 0xffffffff);
        if ((*(iVar12 + 0x4d) != '\0') && (*(iVar12 + 0x4c) != '\0')) {
            uVar10 = 8;
            if (*(iVar12 + 0x4b0) != '\0') {
                uVar10 = 0x18;
            }
            sym.cti_write_single_reg(iVar12,uVar10,puVar9);
        }
        _raw_spin_unlock(unaff_x21);
    }
    else {
        param_4 = -0x16;
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar8 = __stack_chk_fail();
    arg3 = &uStack_80;
    *extraout_x18 = sym.apppulse_store;
    pcStack_68 = sym.apppulse_store;
    iVar13 = sp_el0;
    iStack_78 = *(iVar13 + 0x5e0);
    uStack_80 = 0;
    iVar13 = *(*(iVar8 + 0x60) + 0x98);
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = unaff_x21;
    iStack_50 = iVar12;
    iStack_48 = param_4;
    iVar5 = kstrtoull(puVar9,0,&uStack_80);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar13 + 0x38);
        if ((*(iVar13 + 0x4d) != '\0') && (*(iVar13 + 0x4c) != '\0')) {
            arg3 = uStack_80 & 0xffffffff;
            uVar10 = 0x1c;
            if (*(iVar13 + 0x4b0) != '\0') {
                uVar10 = 0xc;
            }
            sym.cti_write_single_reg(iVar13,uVar10,arg3);
        }
        _raw_spin_unlock(iVar13 + 0x38);
    }
    else {
        iVar11 = -0x16;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_78) {
        return iVar11;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.triginstatus_show;
    piVar14 = *(*(iVar11 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(iVar11 + 0x60),4);
    if (iVar5 < 0) {
        puVar9 = *(iVar11 + 0x60) + 0x1f8;
        uVar15 = *puVar9;
        do {
            uVar10 = uVar15;
            if (uVar10 == 0) break;
            Hint_Prefetch(puVar9,2,0,1);
            do {
                uVar1 = *puVar9;
                uVar15 = uVar1;
                if (uVar1 != uVar10) goto code_r0x08006cb4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar9,0x10);
                if (bVar4) {
                    *puVar9 = uVar10 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006cb4:
        } while (uVar10 != uVar1);
        return iVar5;
    }
    _raw_spin_lock(piVar14 + 7);
    if (*(piVar14 + 0x4d) == '\0') {
        uVar6 = 0;
    }
    else {
        if (piVar14[0x96] != '\0') {
            iVar12 = 0;
            uVar15 = 0x40;
            iVar7 = *(piVar14 + 0x44) + -1;
            iVar5 = 0x1f;
            iVar2 = *(piVar14 + 0x44) + 0x1e;
            if (-1 < iVar7) {
                iVar2 = iVar7;
            }
            uVar10 = 0;
            do {
                uVar6 = sym.readl_relaxed_1(*piVar14 + uVar15);
                uVar1 = uVar10 + 1;
                iVar7 = scnprintf(arg3 + iVar12,0x1000 - iVar12,"%u - %u : 0x%x\n",uVar10,iVar5,uVar6);
                uVar15 = uVar15 + 4;
                iVar12 = iVar12 + iVar7;
                iVar5 = iVar5 + 0x20;
                uVar10 = uVar1;
            } while (uVar1 <= iVar2 >> 5);
            goto code_r0x08006cf4;
        }
        uVar6 = sym.readl_relaxed_1(*piVar14 + 0x130);
    }
    iVar12 = 0;
code_r0x08006cf4:
    _raw_spin_unlock(piVar14 + 7);
    __pm_runtime_idle(*(iVar11 + 0x60),4);
    if (piVar14[0x96] == '\0') {
        iVar5 = scnprintf(arg3,0x1000,"0x%x\n",uVar6);
        iVar12 = iVar5;
    }
    return iVar12;
}


// ===== sym.trigout_attach_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt @ 0x08002490 (size 8) =====

int64_t sym.trigout_attach_store.09db333e583f75c3fe7adf9a7b72000f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uchar uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    uVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iVar7 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(param_3,"%d %d",iVar7);
    if (iVar2 == 2) {
        iVar7 = 1;
        uVar8 = uStack_30._4_4_;
        iVar3 = sym.cti_channel_trig_op(param_1,0,1,uStack_30._4_4_);
        iVar2 = param_4;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar5 = iVar2;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.trigout_detach_store;
    pcStack_48 = sym.trigout_detach_store;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_60 + 4;
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = param_1;
    uStack_38 = param_4;
    iVar2 = sscanf(iVar7,"%d %d",iVar5,&uStack_60);
    if (iVar2 == 2) {
        iVar5 = 1;
        uVar4 = sym.cti_channel_trig_op(iVar6,1,1,uStack_60._4_4_);
        if (uVar4 != 0) {
            uVar8 = uVar4;
        }
        iVar7 = uVar8;
    }
    else {
        iVar7 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar7;
    }
    iVar7 = __stack_chk_fail(iVar7);
    *extraout_x18_00 = sym.trig_filter_enable_show;
    iVar6 = *(*(iVar7 + 0x60) + 0x98);
    iVar7 = iVar6 + 0x38;
    _raw_spin_lock(iVar7);
    uVar1 = *(iVar6 + 0x80);
    _raw_spin_unlock(iVar7);
    iVar2 = sprintf(iVar5,0x8000fec,uVar1);
    return iVar2;
}


// ===== sym.cti_write_all_hw_regs @ 0x08002498 (size 436) =====

void sym.cti_write_all_hw_regs(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xc5acce55,*arg1 + 0xfb0);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0,*arg1);
    if (*(arg1 + 0x4b0) == '\0') {
        if (*(arg1 + 0x44) < 1) {
            iVar2 = 0x14;
            iVar3 = 0x144;
            iVar4 = 0x140;
        }
        else {
            iVar5 = 0;
            iVar6 = 0x28c;
            iVar2 = 0x14;
            iVar3 = 0x144;
            iVar4 = 0x140;
            do {
                if (iVar5 == 0x80) goto code_r0x08002648;
                sym.writel_relaxed(*(arg1 + iVar5 * 4 + 0x8c),*arg1 + iVar6 + -0x26c);
                sym.writel_relaxed(*(arg1 + iVar6),*arg1 + iVar6 + -0x1ec);
                iVar5 = iVar5 + 1;
                iVar6 = iVar6 + 4;
            } while (iVar5 < *(arg1 + 0x44));
        }
    }
    else if (*(arg1 + 0x44) < 1) {
        iVar2 = 4;
        iVar3 = 0x8c;
        iVar4 = 0x88;
    }
    else {
        iVar5 = 0;
        iVar6 = 0x400;
        iVar2 = 4;
        iVar3 = 0x8c;
        iVar4 = 0x88;
        do {
            if (iVar5 == 0x80) {
code_r0x08002648:
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800264c);
                (*pcVar1)();
            }
            sym.writel_relaxed(*(arg1 + iVar6 + -0x374),*arg1 + iVar6);
            sym.writel_relaxed(*(arg1 + iVar6 + -0x174),*arg1 + iVar6 + 0x400);
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 4;
        } while (iVar5 < *(arg1 + 0x44));
    }
    sym.writel_relaxed(*(arg1 + 0x48c),*arg1 + iVar4);
    sym.writel_relaxed(*(arg1 + 0x490),*arg1 + iVar3);
    sym.writel_relaxed(*(arg1 + 0x84),*arg1 + iVar2);
    sym.writel_relaxed(1,*arg1);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0,*arg1 + 0xfb0);
    return;
}


// ===== sym.writel_relaxed @ 0x0800264c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002668);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002690);
    return;
}


// ===== sym.writel_relaxed_1 @ 0x080026c4 (size 120) =====

void sym.writel_relaxed_1(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80026e0);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002708);
    return;
}


// ===== sym.cti_write_single_reg @ 0x0800273c (size 120) =====

void sym.cti_write_single_reg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xc5acce55,*arg1 + 0xfb0);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(arg3 & 0xffffffff,*arg1 + arg2);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0,*arg1 + 0xfb0);
    return;
}


// ===== sym.cti_write_intack @ 0x080027b4 (size 156) =====

void sym.cti_write_intack(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(*(arg1 + 0x60) + 0x98);
    _raw_spin_lock(piVar1 + 7);
    if ((*(piVar1 + 0x4d) != '\0') && (*(piVar1 + 0x4c) != '\0')) {
        sym.writel_relaxed(0xc5acce55,*piVar1 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(arg2 & 0xffffffff,*piVar1 + 0x10);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar1 + 0xfb0);
    }
    _raw_spin_unlock(piVar1 + 7);
    return;
}


// ===== sym.cti_add_connection_entry @ 0x08002850 (size 228) =====

ulong sym.cti_add_connection_entry(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t in_x4;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg2 + 0x10) = arg3;
    if (arg3 == 0) {
        if (in_x4 != 0) {
            iVar2 = devm_kstrdup();
            *(arg2 + 0x18) = iVar2;
            if (iVar2 == 0) {
                return 0xfffffff4;
            }
        }
    }
    else {
        iVar2 = *(arg3 + 0xa8);
        if (iVar2 == 0) {
            iVar2 = *(arg3 + 0x38);
        }
        *(arg2 + 0x18) = iVar2;
    }
    piVar3 = *(arg1 + 0x20);
    iVar2 = arg2 + 0x20;
    uVar1 = __list_add_valid(iVar2,piVar3,arg1 + 0x18);
    if ((uVar1 & 1) != 0) {
        *(arg1 + 0x20) = iVar2;
        *(arg2 + 0x20) = arg1 + 0x18;
        *(arg2 + 0x28) = piVar3;
        *piVar3 = iVar2;
    }
    *(arg1 + 0x10) = *(arg1 + 0x10) + 1;
    __bitmap_or(arg1 + 0x50,arg1 + 0x50,*arg2 + 8,*(arg1 + 0x44));
    __bitmap_or(arg1 + 0x60,arg1 + 0x60,*(arg2 + 8) + 8,*(arg1 + 0x44));
    return 0;
}


// ===== sym.cti_allocate_trig_con @ 0x08002934 (size 164) =====

int64_t * sym.cti_allocate_trig_con(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint *puVar2;
    uint *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = devm_kmalloc(arg1,0x40,0xdc0);
    if (piVar1 != NULL) {
        puVar2 = devm_kmalloc(arg1,(-((arg2 & 0xffffffffU) >> 0x1f) & 0xfffffffc00000000 | (arg2 & 0xffffffffU) << 2) +
                                    0x18,0xdc0);
        if ((puVar2 == NULL) ||
           (puVar3 = devm_kmalloc(arg1,(-((arg3 & 0xffffffffU) >> 0x1f) & 0xfffffffc00000000 |
                                        (arg3 & 0xffffffffU) << 2) + 0x18,0xdc0), puVar3 == NULL)) {
            piVar1 = NULL;
        }
        else {
            *piVar1 = puVar2;
            piVar1[1] = puVar3;
            *puVar2 = arg2;
            *puVar3 = arg3;
        }
    }
    return piVar1;
}


// ===== sym.cti_add_default_connection @ 0x080029d8 (size 252) =====

ulong sym.cti_add_default_connection(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *arg2_00;
    uint32_t *puVar3;
    uint32_t *puVar4;
    ulong uVar5;
    ulong noname_0;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0x44);
    arg2_00 = devm_kmalloc(arg1,0x40,0xdc0);
    if (arg2_00 != NULL) {
        iVar1 = uVar2 * 4 + 0x18;
        puVar3 = devm_kmalloc(arg1,iVar1,0xdc0);
        if ((puVar3 != NULL) && (puVar4 = devm_kmalloc(arg1,iVar1,0xdc0), puVar4 != NULL)) {
            *arg2_00 = puVar3;
            arg2_00[1] = puVar4;
            uVar6 = uVar2 + 0x3f >> 3 & 0x3ffffff8;
            *puVar3 = uVar2;
            *puVar4 = uVar2;
            memset(puVar3 + 2,0xff,uVar6);
            memset(puVar4 + 2,0xff,uVar6);
            uVar5 = sym.cti_add_connection_entry(noname_0,arg2,arg2_00,0);
            return uVar5;
        }
    }
    return 0xfffffff4;
}


// ===== sym.cti_trigin_gpio_disable @ 0x08002ad4 (size 68) =====

void sym.cti_trigin_gpio_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (**(arg1 + 0x4b8) != 0) {
        devm_pinctrl_put();
        **(arg1 + 0x4b8) = 0;
    }
    return;
}


// ===== sym.cti_trigout_gpio_disable @ 0x08002b18 (size 68) =====

void sym.cti_trigout_gpio_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (**(arg1 + 0x4c0) != 0) {
        devm_pinctrl_put();
        **(arg1 + 0x4c0) = 0;
    }
    return;
}


// ===== sym.cti_channel_trig_op @ 0x08002b5c (size 576) =====

ulong sym.cti_channel_trig_op(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    bool bVar4;
    int iVar5;
    uint32_t in_w4;
    int iVar6;
    ulong *puVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *arg1_00;
    uint64_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    
    iVar5 = arg3;
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x60) + 0x98);
    if ((*(arg1_00 + 8) <= arg4) || (uVar10 = in_w4, *(arg1_00 + 0x44) <= in_w4)) {
        return 0xffffffea;
    }
    iVar2 = arg2;
    if (iVar5 == 0) {
        if ((arg1_00[(in_w4 >> 6) + 10] >> (uVar10 & 0x3f) & 1) == 0) {
            return 0xffffffea;
        }
        iVar6 = 0x20;
        iVar8 = 0x400;
    }
    else {
        uVar9 = 1L << (uVar10 & 0x3f);
        if ((arg1_00[(in_w4 >> 6) + 0xc] & uVar9) == 0) {
            return 0xffffffea;
        }
        if ((arg1_00[0x10] != '\0') && ((arg1_00[(in_w4 >> 6) + 0xe] & uVar9) != 0)) {
            return 0xffffffea;
        }
        iVar6 = 0xa0;
        iVar8 = 0x800;
    }
    if (arg1_00[0x96] != '\0') {
        iVar6 = iVar8;
    }
    _raw_spin_lock(arg1_00 + 7);
    uVar12 = 1L << (arg4 & 0x3f);
    if (iVar5 == 0) {
        if (0x7f < in_w4) goto code_r0x08002d98;
        uVar11 = *(arg1_00 + uVar10 * 4 + 0x8c);
        uVar1 = uVar11 | uVar12;
        uVar11 = uVar11 & (uVar12 ^ 0xffffffff);
        uVar12 = uVar1;
        if (iVar2 != 0) {
            uVar12 = uVar11;
        }
        *(arg1_00 + uVar10 * 4 + 0x8c) = uVar12;
        bVar4 = *(arg1_00[0x97] + 1) == in_w4;
        if (iVar2 == 0) {
            uVar11 = uVar1;
            if (bVar4) {
                sym.cti_trigin_gpio_enable(arg1_00);
            }
            goto code_r0x08002d38;
        }
        if ((!bVar4) || (*arg1_00[0x97] == 0)) goto code_r0x08002d38;
        devm_pinctrl_put();
        puVar7 = arg1_00[0x97];
    }
    else {
        if (0x7f < in_w4) {
code_r0x08002d98:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8002d9c);
            (*pcVar3)();
        }
        uVar11 = *(arg1_00 + uVar10 * 4 + 0x28c);
        uVar1 = uVar11 | uVar12;
        uVar11 = uVar11 & (uVar12 ^ 0xffffffff);
        uVar12 = uVar1;
        if (iVar2 != 0) {
            uVar12 = uVar11;
        }
        *(arg1_00 + uVar10 * 4 + 0x28c) = uVar12;
        if (iVar2 == 0) {
            uVar11 = uVar1;
            if ((iVar5 == 1) && (*(arg1_00[0x98] + 8) == in_w4)) {
                sym.cti_trigout_gpio_enable(arg1_00);
            }
            goto code_r0x08002d38;
        }
        if (((iVar5 != 1) || (*(arg1_00[0x98] + 1) != in_w4)) || (*arg1_00[0x98] == 0)) goto code_r0x08002d38;
        devm_pinctrl_put();
        puVar7 = arg1_00[0x98];
    }
    *puVar7 = 0;
code_r0x08002d38:
    if ((*(arg1_00 + 0x4d) != '\0') && (*(arg1_00 + 0x4c) != '\0')) {
        sym.writel_relaxed(0xc5acce55,*arg1_00 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(uVar11,*arg1_00 + iVar6 + in_w4 * 4);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*arg1_00 + 0xfb0);
    }
    _raw_spin_unlock(arg1_00 + 7);
    return 0;
}


// ===== sym.cti_trigin_gpio_enable @ 0x08002d9c (size 192) =====

void sym.cti_trigin_gpio_enable(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (**(arg1 + 0x4b8) == 0) {
        uVar2 = devm_pinctrl_get(*(*(arg1 + 8) + 0x98));
        if (uVar2 < 0xfffffffffffff001) {
            uVar3 = pinctrl_lookup_state(uVar2,"cti-trigin-pctrl");
            if (uVar3 < 0xfffffffffffff001) {
                iVar1 = pinctrl_select_state(uVar2,uVar3);
                if (iVar1 == 0) {
                    **(arg1 + 0x4b8) = uVar2;
                    return;
                }
                pcVar4 = "pinctrl enable state failed\n";
            }
            else {
                pcVar4 = "pinctrl get state failed\n";
            }
            _dev_err(*(arg1 + 8) + 0x38,pcVar4);
            devm_pinctrl_put(uVar2);
        }
        else {
            _dev_err(*(arg1 + 8) + 0x38,"pinctrl get failed\n");
        }
    }
    return;
}


// ===== sym.cti_trigout_gpio_enable @ 0x08002e5c (size 192) =====

void sym.cti_trigout_gpio_enable(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (**(arg1 + 0x4c0) == 0) {
        uVar2 = devm_pinctrl_get(*(*(arg1 + 8) + 0x98));
        if (uVar2 < 0xfffffffffffff001) {
            uVar3 = pinctrl_lookup_state(uVar2,"cti-trigout-pctrl");
            if (uVar3 < 0xfffffffffffff001) {
                iVar1 = pinctrl_select_state(uVar2,uVar3);
                if (iVar1 == 0) {
                    **(arg1 + 0x4c0) = uVar2;
                    return;
                }
                pcVar4 = "pinctrl enable state failed\n";
            }
            else {
                pcVar4 = "pinctrl get state failed\n";
            }
            _dev_err(*(arg1 + 8) + 0x38,pcVar4);
            devm_pinctrl_put(uVar2);
        }
        else {
            _dev_err(*(arg1 + 8) + 0x38,"pinctrl get failed\n");
        }
    }
    return;
}


// ===== sym.cti_channel_gate_op @ 0x08002f1c (size 264) =====

uint sym.cti_channel_gate_op(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    uint uVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if (*(piVar4 + 8) <= arg3) {
        return 0xffffffea;
    }
    _raw_spin_lock(piVar4 + 7);
    uVar2 = 1L << (arg3 & 0x3f);
    if (arg2 == 1) {
        uVar2 = *(piVar4 + 0x48c) & (uVar2 ^ 0xffffffff);
    }
    else {
        if (arg2 != 0) {
            uVar3 = 0xffffffea;
            goto code_r0x08003000;
        }
        uVar2 = *(piVar4 + 0x48c) | uVar2;
    }
    *(piVar4 + 0x48c) = uVar2;
    if ((*(piVar4 + 0x4d) != '\0') && (*(piVar4 + 0x4c) != '\0')) {
        iVar1 = piVar4[0x96];
        sym.writel_relaxed(0xc5acce55,*piVar4 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        if (iVar1 == '\0') {
            sym.writel_relaxed(uVar2,*piVar4 + 0x140);
            iVar1 = *piVar4;
            DataSynchronizationBarrier(3,3,0);
        }
        else {
            sym.writel_relaxed(uVar2,*piVar4 + 0x88);
            iVar1 = *piVar4;
            DataSynchronizationBarrier(3,3,0);
        }
        sym.writel_relaxed(0,iVar1 + 0xfb0);
    }
    uVar3 = 0;
code_r0x08003000:
    _raw_spin_unlock(piVar4 + 7);
    return uVar3;
}


// ===== sym.cti_channel_setop @ 0x08003024 (size 316) =====

uint sym.cti_channel_setop(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(arg1 + 0x60) + 0x98);
    if (*(piVar8 + 8) <= arg3) {
        return 0xffffffea;
    }
    iVar3 = arg2;
    uVar7 = 1L << (arg3 & 0x3f);
    _raw_spin_lock(piVar8 + 7);
    if (iVar3 == 2) {
        cVar1 = piVar8[0x96];
        iVar5 = 0x1c;
        iVar4 = 0xc;
code_r0x080030dc:
        if (cVar1 != '\0') {
            iVar5 = iVar4;
        }
        *(piVar8 + 0x84) = *(piVar8 + 0x84) & (uVar7 ^ 0xffffffff);
        cVar1 = *(piVar8 + 0x4d);
    }
    else {
        if (iVar3 == 1) {
            cVar1 = piVar8[0x96];
            iVar5 = 0x18;
            iVar4 = 8;
            goto code_r0x080030dc;
        }
        if (iVar3 != 0) {
            uVar6 = 0xffffffea;
            goto code_r0x0800313c;
        }
        uVar2 = *(piVar8 + 0x84) | uVar7;
        uVar7 = uVar2;
        iVar5 = 0x14;
        if (piVar8[0x96] != '\0') {
            iVar5 = 4;
        }
        *(piVar8 + 0x84) = uVar2;
        cVar1 = *(piVar8 + 0x4d);
    }
    if ((cVar1 != '\0') && (*(piVar8 + 0x4c) != '\0')) {
        sym.writel_relaxed(0xc5acce55,*piVar8 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(uVar7 & 0xffffffff,*piVar8 + iVar5);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar8 + 0xfb0);
    }
    uVar6 = 0;
code_r0x0800313c:
    _raw_spin_unlock(piVar8 + 7);
    return uVar6;
}


// ===== sym.cti_enable @ 0x08003160 (size 44) =====

void sym.cti_enable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cti_enable_hw(*(*(arg1 + 0x98) + 0x98));
    return;
}


// ===== sym.cti_enable_hw @ 0x0800318c (size 428) =====

int sym.cti_enable_hw(int64_t arg1)

{
    int64_t iVar1;
    int *piVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    ulong uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(arg1 + 8);
    iVar7 = __pm_runtime_resume(*(iVar12 + 0x98),4);
    if (-1 < iVar7) {
        iVar1 = arg1 + 0x38;
        uVar9 = _raw_spin_lock_irqsave(iVar1);
        if ((*(arg1 + 0x4c) == '\0') && (*(arg1 + 0x4d) != '\0')) {
            if ((*(arg1 + 0x4b0) != '\0') || (iVar8 = coresight_claim_device(*(arg1 + 8)), iVar7 = 0, iVar8 == 0)) {
                sym.cti_write_all_hw_regs(arg1);
                piVar2 = arg1 + 0x48;
                *(arg1 + 0x4c) = 1;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar6) {
                        *piVar2 = *piVar2 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                _raw_spin_unlock_irqrestore(iVar1,uVar9);
                return iVar7;
            }
        }
        else {
            piVar2 = arg1 + 0x48;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
                iVar8 = iVar7;
            } while (cVar5 != '\0');
        }
        _raw_spin_unlock_irqrestore(iVar1,uVar9);
        __pm_runtime_idle(*(iVar12 + 0x98),5);
        return iVar8;
    }
    puVar3 = *(iVar12 + 0x98) + 0x1f8;
    uVar11 = *puVar3;
    do {
        uVar10 = uVar11;
        if (uVar10 == 0) {
            return iVar7;
        }
        Hint_Prefetch(puVar3,2,0,1);
        do {
            uVar4 = *puVar3;
            uVar11 = uVar4;
            if (uVar4 != uVar10) goto code_r0x08003258;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
                *puVar3 = uVar10 - 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08003258:
        if (uVar10 == uVar4) {
            return iVar7;
        }
    } while( true );
}


// ===== sym.cti_disable @ 0x08003338 (size 48) =====

ulong sym.cti_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cti_disable_hw(*(*(arg1 + 0x98) + 0x98));
    return 0;
}


// ===== sym.cti_disable_hw @ 0x08003368 (size 276) =====

void sym.cti_disable_hw(int64_t arg1)

{
    int64_t iVar1;
    int *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x38;
    iVar6 = *(arg1 + 8);
    _raw_spin_lock(iVar1);
    piVar2 = arg1 + 0x48;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (((iVar3 + -1 < 1) && (*(arg1 + 0x4c) != '\0')) && (*(arg1 + 0x4d) != '\0')) {
        sym.writel_relaxed(0xc5acce55,*arg1 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*arg1);
        *(arg1 + 0x4c) = 0;
        if (*(arg1 + 0x4b0) == '\0') {
            coresight_disclaim_device_unlocked(iVar6);
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*arg1 + 0xfb0);
        _raw_spin_unlock(iVar1);
        __pm_runtime_idle(*(iVar6 + 0x98),5);
    }
    else {
        _raw_spin_unlock(iVar1);
    }
    return;
}


// ===== sym.cti_probe @ 0x0800347c (size 1156) =====

uint64_t sym.cti_probe(int64_t arg1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    code *pcVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t *arg2;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    code *pcStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_60 = 0;
    uStack_58 = 0;
    iStack_70 = 0;
    uStack_68 = 0;
    iStack_80 = 0;
    uStack_78 = 0;
    pcStack_90 = NULL;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    arg2 = devm_kmalloc(arg1,0x4c8,0xdc0);
    if (arg2 == NULL) goto code_r0x08003684;
    uVar8 = devm_ioremap_resource(arg1,arg1 + 0x390);
    if (uVar8 < 0xfffffffffffff001) {
        *arg2 = uVar8;
        *(arg1 + 0x98) = arg2;
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        *(arg2 + 5) = 0xffffffff;
        arg2[2] = 0;
        arg2[3] = arg2 + 3;
        arg2[4] = arg2 + 3;
        *(arg2 + 7) = 0;
        uStack_60 = uVar8;
        uVar6 = sym.readl_relaxed(uVar8 + 0xfc8);
        uVar7 = uVar6 >> 8 & 0xff;
        *(arg2 + 0x44) = uVar7;
        if (0x80 < uVar7) {
            if ((obj.cti_set_default_config.__print_once & 1) == 0) {
                obj.cti_set_default_config.__print_once = 0x1;
                _dev_warn(arg1,"Limiting HW MaxTrig value(%d) to driver max(%d)\n",uVar7,0x80);
            }
            *(arg2 + 0x44) = 0x80;
        }
        uVar7 = uVar6 >> 0x10 & 0xf;
        *(arg2 + 0x10) = 1;
        *(arg2 + 8) = uVar7;
        *(arg2 + 0x48c) = 0xffffffffffffffff >> (-uVar7 & 0x3f);
        *(arg2 + 9) = 0;
        uVar9 = sym.coresight_cti_get_platform_data(arg1);
        if (uVar9 < 0xfffffffffffff001) {
            uVar7 = arg2[5];
            *(arg2 + 0x4d) = 1;
            if ((uVar7 < 0) || ((*(__cpu_active_mask + (uVar7 >> 3 & 0x1ffffff8)) >> (uVar7 & 0x3f) & 1) != 0)) {
                iStack_70 = coresight_alloc_device_name(obj.cti_sys_devs,arg1);
                if (iStack_70 != 0) {
                    uStack_4c = 0;
                    uVar8 = devm_kmalloc(arg1,0x10,0xdc0);
                    arg2[0x97] = uVar8;
                    if (uVar8 != 0) {
                        uVar11 = *(arg1 + 0x2f0);
                        *(uVar8 + 8) = 0xffffffff;
                        uVar7 = of_property_read_variable_u32_array(uVar11,"qcom,cti-gpio-trigin",&uStack_4c,1,0);
                        uVar7 = uVar7 & uVar7 >> 0x1f;
                        if (uVar7 == 0xffffffea) {
code_r0x08003624:
                            uVar8 = devm_kmalloc(arg1,0x10,0xdc0);
                            arg2[0x98] = uVar8;
                            if (uVar8 == 0) goto code_r0x08003684;
                            uVar11 = *(arg1 + 0x2f0);
                            *(uVar8 + 8) = 0xffffffff;
                            uVar7 = of_property_read_variable_u32_array
                                              (uVar11,"qcom,cti-gpio-trigout",&uStack_4c,1,0);
                            uVar7 = uVar7 & uVar7 >> 0x1f;
                            if (uVar7 != 0xffffffea) {
                                if (uVar7 != 0) goto code_r0x080036c8;
                                *(arg2[0x98] + 8) = uStack_4c;
                            }
                        }
                        else {
                            if (uVar7 == 0) {
                                *(arg2[0x97] + 8) = uStack_4c;
                                goto code_r0x08003624;
                            }
code_r0x080036c8:
                            uVar8 = uVar7;
                            if (uVar7 != 0) goto code_r0x08003688;
                        }
                        uVar7 = arg2[5];
                        if (uVar7 == 0xffffffff) {
code_r0x08003700:
                            uVar7 = sym.cti_create_cons_sysfs(arg1,arg2);
                            if (uVar7 == 0) {
                                uStack_78 = arg2[6];
                                uStack_a0 = 0x100000006;
                                pcStack_90 = obj.cti_ops;
                                uStack_88 = uVar9;
                                iStack_80 = arg1;
                                uVar8 = coresight_register(&uStack_a0);
                                arg2[1] = uVar8;
                                if (uVar8 < 0xfffffffffffff001) {
                                    mutex_lock(obj.ect_mutex);
                                    puVar3 = _obj.ect_net;
                                    puVar1 = arg2 + 0x93;
                                    uVar8 = __list_add_valid(puVar1,obj.ect_net,_obj.ect_net);
                                    if ((uVar8 & 1) != 0) {
                                        puVar3[1] = puVar1;
                                        arg2[0x93] = puVar3;
                                        arg2[0x94] = obj.ect_net;
                                        _obj.ect_net = puVar1;
                                    }
                                    sym.cti_update_conn_xrefs(arg2);
                                    mutex_unlock(obj.ect_mutex);
                                    arg2[0x95] = *(arg2[1] + 0x368);
                                    *(arg2[1] + 0x368) = sym.__typeid__ZTSFvP6deviceE_global_addr;
                                    uVar5 = fwnode_property_present(*(arg1 + 0x2f8),"qcom,extended_cti");
                                    *(arg2 + 0x96) = uVar5 & 1;
                                    __pm_runtime_idle(arg1,5);
                                    _dev_info(arg2[1] + 0x38,"CTI initialized\n");
                                    uVar8 = 0;
                                    goto code_r0x08003688;
                                }
                                uVar8 = uVar8 & 0xffffffff;
                            }
                            else {
                                uVar8 = uVar7;
                                _dev_err(arg1,"%s: create dynamic sysfs entries failed\n",iStack_70);
                            }
                            uVar7 = arg2[5];
                            if (uVar7 != 0xffffffff) {
                                if (0x1f < uVar7) goto code_r0x080038fc;
                                _segment.ehdr = _segment.ehdr + -1;
                                *(obj.cti_cpu_drvdata + uVar7 * 8) = 0;
                                if (_segment.ehdr == 0) {
                                    cpu_pm_unregister_notifier
                                              (reloc.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt);
                                    goto code_r0x08003814;
                                }
                            }
                        }
                        else {
                            if (_segment.ehdr != 0) {
code_r0x080036e4:
                                _segment.ehdr = _segment.ehdr + 1;
                                if (0x1f < uVar7) goto code_r0x080038fc;
                                *(obj.cti_cpu_drvdata + uVar7 * 8) = arg2;
                                goto code_r0x08003700;
                            }
                            cpus_read_lock();
                            uVar8 = __cpuhp_setup_state_cpuslocked
                                              (0x8f,"arm/coresight_cti:starting",0,
                                               sym.cti_starting_cpu.0b2860deecf0024ca480057a9d0b4816.cfi_jt,
                                               sym.cti_dying_cpu.0b2860deecf0024ca480057a9d0b4816.cfi_jt,0);
                            if (uVar8 != 0) {
                                uVar8 = uVar8 & 0xffffffff;
                                cpus_read_unlock();
                                goto code_r0x08003688;
                            }
                            uVar10 = cpu_pm_register_notifier
                                               (reloc.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt);
                            uVar8 = uVar10 & 0xffffffff;
                            cpus_read_unlock();
                            if (uVar10 == 0) {
                                uVar7 = arg2[5];
                                goto code_r0x080036e4;
                            }
code_r0x08003814:
                            __cpuhp_remove_state(0x8f,0);
                        }
                        goto code_r0x08003688;
                    }
                }
code_r0x08003684:
                uVar8 = 0xfffffff4;
            }
            else {
                uVar8 = 0xfffffffa;
            }
        }
        else {
            _dev_err(arg1,"coresight_cti_get_platform_data err\n");
            uVar8 = uVar9 & 0xffffffff;
        }
    }
code_r0x08003688:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return uVar8 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x080038fc:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8003900);
    (*pcVar4)();
}


// ===== sym.cti_remove @ 0x08003900 (size 232) =====

ulong sym.cti_remove(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong *puVar3;
    ulong unaff_x30;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iVar2 = *(arg1 + 0x98);
    mutex_lock(obj.ect_mutex);
    sym.cti_disable_hw(iVar2);
    for (puVar3 = *(iVar2 + 0x18); iVar2 + 0x18 != puVar3; puVar3 = *puVar3) {
        if (puVar3[-2] != 0) {
            coresight_set_assoc_ectdev_mutex(puVar3[-2],0);
            iStack_58 = *(iVar2 + 8);
            uStack_50 = puVar3[-1];
            iStack_40 = *(iStack_58 + 0xa8);
            uStack_48 = puVar3[-2];
            if (iStack_40 == 0) {
                iStack_40 = *(iStack_58 + 0x38);
            }
            coresight_remove_sysfs_link(&iStack_58);
            puVar3[-2] = 0;
        }
    }
    mutex_unlock(obj.ect_mutex);
    uVar1 = coresight_unregister(*(iVar2 + 8));
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.cti_freeze;
    iVar2 = *(iVar2 + 0x98);
    if (*(iVar2 + 0x4c) != '\0') {
        *(iVar2 + 0x4e) = 1;
        sym.cti_disable_hw(*(*(*(iVar2 + 8) + 0x98) + 0x98));
    }
    return 0;
}


// ===== sym.cti_freeze @ 0x080039e8 (size 72) =====

ulong sym.cti_freeze(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if (*(iVar1 + 0x4c) != '\0') {
        *(iVar1 + 0x4e) = 1;
        sym.cti_disable_hw(*(*(*(iVar1 + 8) + 0x98) + 0x98));
    }
    return 0;
}


// ===== sym.cti_restore @ 0x08003a30 (size 80) =====

ulong sym.cti_restore(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (*(iVar2 + 0x4e) == '\0') {
        uVar1 = 0;
    }
    else {
        uVar1 = sym.cti_enable_hw(*(*(*(iVar2 + 8) + 0x98) + 0x98));
        *(iVar2 + 0x4e) = 0;
    }
    return uVar1;
}


// ===== sym.cti_update_conn_xrefs @ 0x08003a80 (size 244) =====

void sym.cti_update_conn_xrefs(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    code *pcVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    for (piVar8 = *(arg1 + 0x18); arg1 + 0x18 != piVar8; piVar8 = *piVar8) {
        if (piVar8[-2] != 0) {
            iStack_58 = *(arg1 + 8);
            uStack_50 = piVar8[-1];
            iStack_40 = *(iStack_58 + 0xa8);
            uStack_48 = piVar8[-2];
            if (iStack_40 == 0) {
                iStack_40 = *(iStack_58 + 0x38);
            }
            iVar3 = coresight_add_sysfs_link(&iStack_58);
            if (iVar3 == 0) {
                coresight_set_assoc_ectdev_mutex(piVar8[-2],*(arg1 + 8));
            }
            else {
                _dev_warn(*(arg1 + 8) + 0x38,"Failed to set CTI sysfs link %s<=>%s\n",uStack_50,iStack_40);
                piVar8[-2] = 0;
            }
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cti_device_release;
    pcVar7 = *(*(iVar4 + 0x60) + 0x98);
    mutex_lock(obj.ect_mutex);
    uVar2 = *(pcVar7 + 0x28);
    if (uVar2 != 0xffffffff) {
        if (0x1f < uVar2) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x5512,0x8003c88);
            (*pcVar7)();
        }
        *(obj.cti_cpu_drvdata + uVar2 * 8) = 0;
        _segment.ehdr = _segment.ehdr + -1;
        if (_segment.ehdr == 0) {
            cpu_pm_unregister_notifier(reloc.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt);
            __cpuhp_remove_state(0x8f,0);
        }
    }
    pcVar6 = obj.ect_net;
    do {
        pcVar6 = *pcVar6;
        if (pcVar6 == obj.ect_net) goto code_r0x08003c40;
    } while (pcVar6 + -0x498 != pcVar7);
    uVar5 = __list_del_entry_valid(pcVar6);
    if ((uVar5 & 1) != 0) {
        iVar1 = *pcVar6;
        piVar8 = *(pcVar6 + 8);
        *(iVar1 + 8) = piVar8;
        *piVar8 = iVar1;
    }
    *pcVar6 = 0xdead000000000100;
    *(pcVar6 + 8) = 0xdead000000000122;
code_r0x08003c40:
    mutex_unlock(obj.ect_mutex);
    pcVar7 = *(pcVar7 + 0x4a8);
    if (pcVar7 != NULL) {
        if (pcVar7 != sym.__typeid__ZTSFvP6deviceE_global_addr) {
            __cfi_slowpath_diag(0x5b83a3fd302a5421,pcVar7,0x8000cd0);
        }
        (*pcVar7)(iVar4);
    }
    return;
}


// ===== sym.cti_device_release @ 0x08003b74 (size 312) =====

void sym.cti_device_release(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar6 = *(*(arg1 + 0x60) + 0x98);
    mutex_lock(obj.ect_mutex);
    uVar3 = *(pcVar6 + 0x28);
    if (uVar3 != 0xffffffff) {
        if (0x1f < uVar3) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8003c88);
            (*pcVar6)();
        }
        *(obj.cti_cpu_drvdata + uVar3 * 8) = 0;
        _segment.ehdr = _segment.ehdr + -1;
        if (_segment.ehdr == 0) {
            cpu_pm_unregister_notifier(reloc.cti_cpu_pm_notify.0b2860deecf0024ca480057a9d0b4816.cfi_jt);
            __cpuhp_remove_state(0x8f,0);
        }
    }
    pcVar5 = obj.ect_net;
    do {
        pcVar5 = *pcVar5;
        if (pcVar5 == obj.ect_net) goto code_r0x08003c40;
    } while (pcVar5 + -0x498 != pcVar6);
    uVar4 = __list_del_entry_valid(pcVar5);
    if ((uVar4 & 1) != 0) {
        iVar1 = *pcVar5;
        piVar2 = *(pcVar5 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *pcVar5 = 0xdead000000000100;
    *(pcVar5 + 8) = 0xdead000000000122;
code_r0x08003c40:
    mutex_unlock(obj.ect_mutex);
    pcVar6 = *(pcVar6 + 0x4a8);
    if (pcVar6 != NULL) {
        if (pcVar6 != sym.__typeid__ZTSFvP6deviceE_global_addr) {
            __cfi_slowpath_diag(0x5b83a3fd302a5421,pcVar6,0x8000cd0);
        }
        (*pcVar6)(arg1);
    }
    return;
}


// ===== sym.readl_relaxed @ 0x08003cac (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003cb0);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003ce4);
    return uVar1;
}


// ===== sym.readl_relaxed_1 @ 0x08003d1c (size 108) =====

uint sym.readl_relaxed_1(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003d20);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003d54);
    return uVar1;
}


// ===== sym.cti_starting_cpu @ 0x08003d8c (size 144) =====

ulong sym.cti_starting_cpu(uint32_t arg1)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    if (arg1 < 0x20) {
        *in_x18 = unaff_x30;
        arg1_00 = *(obj.cti_cpu_drvdata + arg1 * 8);
        if (arg1_00 != 0) {
            _raw_spin_lock(arg1_00 + 0x38);
            *(arg1_00 + 0x4d) = 1;
            if ((*(arg1_00 + 0x48) != 0) && (iVar2 = coresight_claim_device(*(arg1_00 + 8)), iVar2 == 0)) {
                sym.cti_write_all_hw_regs(arg1_00);
                *(arg1_00 + 0x4c) = 1;
            }
            _raw_spin_unlock(arg1_00 + 0x38);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003e1c);
    (*pcVar1)();
}


// ===== sym.cti_dying_cpu @ 0x08003e20 (size 116) =====

ulong sym.cti_dying_cpu(uint32_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (arg1 < 0x20) {
        *in_x18 = unaff_x30;
        iVar2 = *(obj.cti_cpu_drvdata + arg1 * 8);
        if (iVar2 != 0) {
            _raw_spin_lock(iVar2 + 0x38);
            *(iVar2 + 0x4d) = 0;
            if (*(iVar2 + 0x4c) != '\0') {
                coresight_disclaim_device(*(iVar2 + 8));
            }
            _raw_spin_unlock(iVar2 + 0x38);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003e94);
    (*pcVar1)();
}


// ===== sym.cti_cpu_pm_notify @ 0x08003e94 (size 300) =====

ulong sym.cti_cpu_pm_notify(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong uVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = tpidr_el1;
    uVar1 = *(cpu_number + iVar4);
    if (0x1f < uVar1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8003fc0);
        (*pcVar2)();
    }
    iVar4 = *(obj.cti_cpu_drvdata + uVar1 * 8);
    if (iVar4 == 0) {
        return 1;
    }
    if (*(iVar4 + 0x28) != uVar1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8003fb8);
        (*pcVar2)();
    }
    uVar6 = *(iVar4 + 8);
    _raw_spin_lock(iVar4 + 0x38);
    if (arg1 == 2) {
        *(iVar4 + 0x4c) = 0x100;
        if (*(iVar4 + 0x48) != 0) {
            iVar3 = coresight_claim_device(uVar6);
            uVar5 = 1;
            if (iVar3 == 0) {
                *(iVar4 + 0x4c) = 1;
                sym.cti_write_all_hw_regs(iVar4);
            }
            goto code_r0x08003f8c;
        }
    }
    else {
        if (arg1 == 1) {
            *(iVar4 + 0x4d) = 1;
            uVar5 = 1;
            if (*(iVar4 + 0x4c) != '\0') {
                iVar3 = coresight_claim_device(uVar6);
                uVar5 = 1;
                if (iVar3 != 0) {
                    *(iVar4 + 0x4c) = 0;
                }
            }
            goto code_r0x08003f8c;
        }
        if (arg1 != 0) {
            uVar5 = 0;
            goto code_r0x08003f8c;
        }
        *(iVar4 + 0x4d) = 0;
        if (*(iVar4 + 0x4c) != '\0') {
            coresight_disclaim_device(uVar6);
        }
    }
    uVar5 = 1;
code_r0x08003f8c:
    _raw_spin_unlock(iVar4 + 0x38);
    return uVar5;
}


// ===== sym.cti_add_assoc_to_csdev @ 0x08003fc8 (size 384) =====

void sym.cti_add_assoc_to_csdev(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    int64_t *piVar6;
    code *pcVar7;
    code *pcVar8;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    mutex_lock(obj.ect_mutex);
    if ((*(arg1 + 8) != 6) && (_obj.ect_net != obj.ect_net)) {
        iVar3 = dev_fwnode(*(arg1 + 0x98));
        iVar3 = sym.cti_plat_get_node_name(iVar3);
        if ((iVar3 != 0) && (pcVar7 = _obj.ect_net, _obj.ect_net != obj.ect_net)) {
            do {
                for (pcVar8 = *(pcVar7 + -0x480); unaff_x20 = iVar3, pcVar7 + -0x480 != pcVar8; pcVar8 = *pcVar8) {
                    if ((*(pcVar8 + -8) != 0) && (iVar2 = strcmp(iVar3), iVar2 == 0)) {
                        iVar5 = *(arg1 + 0xa8);
                        if (iVar5 == 0) {
                            iVar5 = *(arg1 + 0x38);
                        }
                        pcVar9 = pcVar7 + -0x490;
                        *(pcVar8 + -0x10) = arg1;
                        *(pcVar8 + -8) = iVar5;
                        iStack_78 = *pcVar9;
                        uStack_70 = *(pcVar8 + -8);
                        iStack_60 = *(iStack_78 + 0xa8);
                        uStack_68 = *(pcVar8 + -0x10);
                        if (iStack_60 == 0) {
                            iStack_60 = *(iStack_78 + 0x38);
                        }
                        iVar2 = coresight_add_sysfs_link(&stack0xffffffffffffff88);
                        if (iVar2 == 0) {
                            *(arg1 + 1000) = *pcVar9;
                            goto code_r0x080040fc;
                        }
                        _dev_warn(*pcVar9 + 0x38,"Failed to set CTI sysfs link %s<=>%s\n",uStack_70,iStack_60);
                        *(pcVar8 + -0x10) = 0;
                        break;
                    }
                }
                pcVar7 = *pcVar7;
            } while (pcVar7 != obj.ect_net);
        }
    }
code_r0x080040fc:
    mutex_unlock(obj.ect_mutex);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = 0x8004144;
    uStack_98 = 0x8004144;
    iVar3 = sp_el0;
    iStack_a8 = *(iVar3 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffb0;
    iStack_90 = unaff_x20;
    iStack_88 = arg1;
    mutex_lock(obj.ect_mutex);
    if (*(iVar5 + 1000) != 0) {
        iVar3 = *(*(*(iVar5 + 1000) + 0x98) + 0x98);
        piVar1 = iVar3 + 0x18;
        piVar6 = piVar1;
        do {
            piVar6 = *piVar6;
            if (piVar6 == piVar1) goto code_r0x080041e0;
        } while (piVar6[-2] != iVar5);
        iStack_c8 = *(iVar3 + 8);
        uStack_c0 = piVar6[-1];
        iStack_b0 = *(iStack_c8 + 0xa8);
        uStack_b8 = piVar6[-2];
        if (iStack_b0 == 0) {
            iStack_b0 = *(iStack_c8 + 0x38);
        }
        coresight_remove_sysfs_link(&stack0xffffffffffffff38);
        piVar6[-2] = 0;
code_r0x080041e0:
        *(iVar5 + 1000) = 0;
    }
    mutex_unlock(obj.ect_mutex);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_a8) {
        auVar10 = __stack_chk_fail();
        puVar4 = auVar10._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar10._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5502,0x8004278);
        (*pcVar7)();
    }
    return;
}


// ===== sym.cti_remove_assoc_from_csdev @ 0x08004148 (size 216) =====

void sym.cti_remove_assoc_from_csdev(int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    uchar *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t iStack_48;
    ulong uStack_40;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    mutex_lock(obj.ect_mutex);
    if (*(arg1 + 1000) != 0) {
        iVar4 = *(*(*(arg1 + 1000) + 0x98) + 0x98);
        piVar1 = iVar4 + 0x18;
        piVar5 = piVar1;
        do {
            piVar5 = *piVar5;
            if (piVar5 == piVar1) goto code_r0x080041e0;
        } while (piVar5[-2] != arg1);
        iStack_48 = *(iVar4 + 8);
        uStack_40 = piVar5[-1];
        iStack_30 = *(iStack_48 + 0xa8);
        uStack_38 = piVar5[-2];
        if (iStack_30 == 0) {
            iStack_30 = *(iStack_48 + 0x38);
        }
        coresight_remove_sysfs_link(&iStack_48);
        piVar5[-2] = 0;
code_r0x080041e0:
        *(arg1 + 1000) = 0;
    }
    mutex_unlock(obj.ect_mutex);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        puVar3 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar6._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8004278);
        (*pcVar2)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08004220 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004264

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
    //switch table (4 cases) at 0x80013cd
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004278);
    (*pcVar1)();
}


// ===== sym.cti_plat_get_node_name @ 0x08004278 (size 100) =====

char * sym.cti_plat_get_node_name(int64_t arg1)

{
    char *pcVar1;
    
    pcVar1 = "unknown";
    if ((arg1 != 0) && (arg1 < 0xfffffffffffff001)) {
        if (*(arg1 + 8) != of_fwnode_ops) {
            return "unknown";
        }
        if (arg1 == 0x18) {
            return "<no-node>";
        }
        pcVar1 = *(arg1 + -8);
    }
    return pcVar1;
}


// ===== sym.coresight_cti_get_platform_data @ 0x080042dc (size 1176) =====

uint64_t sym.coresight_cti_get_platform_data(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t arg1_00;
    char *noname_0;
    char *extraout_x8;
    int64_t *piVar11;
    char *extraout_x8_00;
    ulong noname_0_00;
    code *extraout_x8_01;
    code *pcVar12;
    uint64_t *extraout_x8_02;
    uint64_t *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x21;
    uint64_t unaff_x22;
    uint64_t unaff_x23;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    int64_t iStack_88;
    char *pcStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uVar6 = dev_fwnode();
    iVar5 = -2;
    if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
code_r0x080046e4:
        uVar6 = iVar5;
    }
    else {
        unaff_x21 = *(arg1 + 0x98);
        uVar6 = devm_kmalloc(arg1,0x10,0xdc0);
        if (uVar6 == 0) {
            iVar5 = -0xc;
            goto code_r0x080046e4;
        }
        device_property_read_u32_array(arg1,"arm,cti-ctm-id",unaff_x21 + 0x14,1);
        uVar7 = dev_fwnode(arg1);
        if ((((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) || (*(uVar7 + 8) != of_fwnode_ops)) ||
           (iVar5 = of_device_is_compatible(uVar7 - 0x18,"arm,coresight-cti-v8-arch"), iVar5 == 0)) {
            uVar7 = dev_fwnode(arg1);
            iVar5 = -0x16;
            if ((uVar7 == 0) || (unaff_x23 = uVar7, 0xfffffffffffff000 < uVar7)) goto code_r0x080046e4;
            unaff_x22 = fwnode_get_next_child_node(uVar7,0);
            if (unaff_x22 != 0) {
                iStack_88 = unaff_x21 + 0x70;
                do {
                    if ((unaff_x22 < 0xfffffffffffff001) && (*(unaff_x22 + 8) == of_fwnode_ops)) {
                        iVar14 = unaff_x22 - 0x18;
                        uVar8 = of_node_name_eq(iVar14,"trig-conns");
                        if ((uVar8 & 1) != 0) {
                            pcStack_80 = "unknown";
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uVar3 = fwnode_property_read_u32_array(unaff_x22,"arm,trig-in-sigs",0,0);
                            uVar3 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
                            uVar4 = fwnode_property_read_u32_array(unaff_x22,"arm,trig-out-sigs",0,0);
                            iVar5 = -0x16;
                            if ((*(unaff_x21 + 0x44) < uVar3) ||
                               (uVar4 = uVar4 & (uVar4 >> 0x1f ^ 0xffffffffU), *(unaff_x21 + 0x44) < uVar4))
                            goto code_r0x080046d8;
                            piVar9 = sym.cti_allocate_trig_con(arg1,uVar3,uVar4);
                            if (piVar9 == NULL) {
code_r0x08004750:
                                iVar5 = -0xc;
                                goto code_r0x080046d8;
                            }
                            iVar5 = sym.cti_plat_read_trig_group(*piVar9,unaff_x22,0x800102c);
                            if ((((iVar5 != 0) ||
                                 (iVar5 = sym.cti_plat_read_trig_types(*piVar9,unaff_x22,0x8000ee9), iVar5 != 0)) ||
                                (iVar5 = sym.cti_plat_read_trig_group(piVar9[1],unaff_x22,0x8000d24), iVar5 != 0)) ||
                               (iVar5 = sym.cti_plat_read_trig_types(piVar9[1],unaff_x22,0x80011b3), iVar5 != 0))
                            goto code_r0x080046d8;
                            iVar5 = fwnode_property_read_u32_array(unaff_x22,"arm,trig-filters",0,0);
                            if (0 < iVar5) {
                                if (*(unaff_x21 + 0x44) < iVar5) {
                                    iVar5 = -0x16;
                                    goto code_r0x080046d8;
                                }
                                iVar10 = 0x38;
                                if (android_kmalloc_64_create != 0x0) {
                                    iVar10 = 0x30;
                                }
                                iVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x18);
                                if (iVar10 == 0) goto code_r0x08004750;
                                iVar5 = sym.cti_plat_read_trig_group(iVar10,unaff_x22,0x800128c);
                                if (iVar5 != 0) {
                                    kfree(iVar10);
                                    goto code_r0x080046d8;
                                }
                                __bitmap_or(iStack_88,iStack_88,iVar10 + 8,*(unaff_x21 + 0x44));
                                kfree(iVar10);
                            }
                            fwnode_property_read_string(unaff_x22,"arm,trig-conn-name",&pcStack_80);
                            if (((*(unaff_x22 + 8) == of_fwnode_ops) && (iVar14 != 0)) &&
                               ((iVar14 = of_parse_phandle(iVar14,0x8001108,0), iVar14 != 0 &&
                                (iVar5 = of_cpu_node_to_id(), -1 < iVar5)))) {
                                *(unaff_x21 + 0x28) = iVar5;
                                scnprintf(&uStack_78,0x10,"cpu%d",iVar5);
                                iVar14 = 0;
                                noname_0 = &uStack_78;
                                pcStack_80 = noname_0;
                            }
                            else {
                                uVar8 = fwnode_find_reference(unaff_x22,"arm,cs-dev-assoc",0);
                                if (uVar8 < 0xfffffffffffff001) {
                                    iVar14 = coresight_find_csdev_by_fwnode();
                                    if (iVar14 == 0) {
                                        if (uVar8 == 0) {
                                            pcStack_80 = "unknown";
                                        }
                                        else {
                                            pcStack_80 = "unknown";
                                            if (*(uVar8 + 8) == of_fwnode_ops) {
                                                if (uVar8 != 0x18) {
                                                    piVar11 = uVar8 - 8;
                                                    goto code_r0x08004680;
                                                }
                                                pcStack_80 = "<no-node>";
                                            }
                                        }
                                    }
                                    else {
                                        pcStack_80 = *(iVar14 + 0xa8);
                                        if (pcStack_80 == NULL) {
                                            piVar11 = iVar14 + 0x38;
code_r0x08004680:
                                            pcStack_80 = *piVar11;
                                        }
                                    }
                                    fwnode_handle_put(uVar8);
                                    noname_0 = extraout_x8_00;
                                }
                                else {
                                    iVar14 = 0;
                                    noname_0 = extraout_x8;
                                }
                            }
                            iVar5 = sym.cti_add_connection_entry(noname_0,unaff_x21,piVar9,iVar14);
                            if (iVar5 != 0) goto code_r0x080046d8;
                        }
                    }
                    unaff_x22 = fwnode_get_next_child_node(uVar7,unaff_x22);
                } while (unaff_x22 != 0);
            }
            iVar5 = 0;
code_r0x080046d8:
            fwnode_handle_put(unaff_x22);
        }
        else {
            iVar5 = sym.cti_plat_create_v8_connections(arg1,unaff_x21);
        }
        if ((iVar5 != 0) ||
           ((*(unaff_x21 + 0x10) == 0 && (iVar5 = sym.cti_add_default_connection(arg1,unaff_x21), iVar5 != 0))))
        goto code_r0x080046e4;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    auVar15 = __stack_chk_fail();
    arg1_00 = auVar15._8_8_;
    iVar10 = auVar15._0_8_;
    *extraout_x18 = sym.cti_plat_create_v8_connections;
    pcStack_c8 = sym.cti_plat_create_v8_connections;
    iVar14 = sp_el0;
    iStack_d8 = *(iVar14 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = unaff_x23;
    uStack_b0 = unaff_x22;
    iStack_a8 = unaff_x21;
    uStack_a0 = uVar6;
    iStack_98 = arg1;
    uVar6 = dev_fwnode();
    if ((((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) || (*(uVar6 + 8) != of_fwnode_ops)) ||
       (((uVar6 - 0x18 == 0 || (iVar14 = of_parse_phandle(uVar6 - 0x18,0x8001108,0), iVar14 == 0)) ||
        (iVar5 = of_cpu_node_to_id(), iVar5 < 0)))) {
        _dev_warn(iVar10,"ARM v8 architectural CTI connection: missing cpu\n");
        uVar6 = 0xffffffea;
    }
    else {
        *(arg1_00 + 0x28) = iVar5;
        piVar9 = sym.cti_allocate_trig_con(iVar10,2,3);
        if (piVar9 == NULL) {
            uVar6 = 0xfffffff4;
        }
        else {
            __bitmap_set(*piVar9 + 8,0,2);
            *(*piVar9 + 0x18) = 9;
            *(*piVar9 + 0x1c) = 8;
            __bitmap_set(piVar9[1] + 8,0,3);
            *(piVar9[1] + 0x18) = 5;
            *(piVar9[1] + 0x1c) = 6;
            *(piVar9[1] + 0x20) = 7;
            scnprintf(&uStack_e8,0x10,"cpu%d",iVar5);
            uVar3 = sym.cti_add_connection_entry(noname_0_00,arg1_00,piVar9,0);
            uVar6 = uVar3;
            if (uVar3 == 0) {
                uVar7 = dev_fwnode(iVar10);
                uVar6 = 0xffffffea;
                if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
                    uVar7 = fwnode_find_reference(uVar7,"arm,cs-dev-assoc",0);
                    if (0xfffffffffffff000 < uVar7) {
code_r0x080048e0:
                        puVar13 = arg1_00 + 0x70;
                        goto code_r0x08004a70;
                    }
                    piVar9 = sym.cti_allocate_trig_con(iVar10,4,4);
                    if (piVar9 == NULL) {
                        fwnode_handle_put(uVar7);
                        uVar6 = 0xfffffff4;
                    }
                    else {
                        __bitmap_set(*piVar9 + 8,4,4);
                        __bitmap_set(piVar9[1] + 8,4,4);
                        *(*piVar9 + 0x18) = 10;
                        *(piVar9[1] + 0x18) = 0xb;
                        *(*piVar9 + 0x1c) = 10;
                        *(piVar9[1] + 0x1c) = 0xb;
                        *(*piVar9 + 0x20) = 10;
                        *(piVar9[1] + 0x20) = 0xb;
                        *(*piVar9 + 0x24) = 10;
                        *(piVar9[1] + 0x24) = 0xb;
                        iVar14 = coresight_find_csdev_by_fwnode(uVar7);
                        pcVar12 = extraout_x8_01;
                        if (iVar14 == 0) {
                            if ((uVar7 != 0) && (pcVar12 = *(uVar7 + 8), pcVar12 == of_fwnode_ops)) {
                                if (uVar7 == 0x18) {
                                    pcVar12 = NULL;
                                }
                                else {
                                    pcVar12 = uVar7 - 8;
                                }
                            }
                        }
                        else if (*(iVar14 + 0xa8) == 0) {
                            pcVar12 = iVar14 + 0x38;
                        }
                        uVar3 = sym.cti_add_connection_entry(pcVar12,arg1_00,piVar9,iVar14);
                        uVar6 = uVar3;
                        fwnode_handle_put(uVar7);
                        if (uVar3 == 0) goto code_r0x080048e0;
                    }
                }
            }
        }
    }
    while (iVar14 = sp_el0, *(iVar14 + 0x5e0) != iStack_d8) {
        __stack_chk_fail();
        puVar13 = extraout_x8_02;
code_r0x08004a70:
        Hint_Prefetch(puVar13,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar13,0x10);
            if (bVar2) {
                *puVar13 = *puVar13 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.cti_plat_create_v8_connections @ 0x08004774 (size 796) =====

int sym.cti_plat_create_v8_connections(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong noname_0;
    code *extraout_x8;
    code *pcVar7;
    uint64_t *extraout_x8_00;
    uint64_t *puVar8;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uVar4 = dev_fwnode();
    if (((((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) && (*(uVar4 + 8) == of_fwnode_ops)) &&
        ((uVar4 - 0x18 != 0 && (iVar5 = of_parse_phandle(uVar4 - 0x18,0x8001108,0), iVar5 != 0)))) &&
       (iVar3 = of_cpu_node_to_id(), -1 < iVar3)) {
        *(arg2 + 0x28) = iVar3;
        piVar6 = sym.cti_allocate_trig_con(arg1,2,3);
        if (piVar6 == NULL) {
            iVar3 = -0xc;
            goto code_r0x08004918;
        }
        __bitmap_set(*piVar6 + 8,0,2);
        *(*piVar6 + 0x18) = 9;
        *(*piVar6 + 0x1c) = 8;
        __bitmap_set(piVar6[1] + 8,0,3);
        *(piVar6[1] + 0x18) = 5;
        *(piVar6[1] + 0x1c) = 6;
        *(piVar6[1] + 0x20) = 7;
        scnprintf(&uStack_58,0x10,"cpu%d",iVar3);
        iVar3 = sym.cti_add_connection_entry(noname_0,arg2,piVar6,0);
        if (iVar3 != 0) goto code_r0x08004918;
        uVar4 = dev_fwnode(arg1);
        iVar3 = -0x16;
        if (uVar4 == 0) goto code_r0x08004918;
        if (0xfffffffffffff000 < uVar4) goto code_r0x08004918;
        uVar4 = fwnode_find_reference(uVar4,"arm,cs-dev-assoc",0);
        if (uVar4 < 0xfffffffffffff001) {
            piVar6 = sym.cti_allocate_trig_con(arg1,4,4);
            if (piVar6 == NULL) {
                fwnode_handle_put(uVar4);
                iVar3 = -0xc;
                goto code_r0x08004918;
            }
            __bitmap_set(*piVar6 + 8,4,4);
            __bitmap_set(piVar6[1] + 8,4,4);
            *(*piVar6 + 0x18) = 10;
            *(piVar6[1] + 0x18) = 0xb;
            *(*piVar6 + 0x1c) = 10;
            *(piVar6[1] + 0x1c) = 0xb;
            *(*piVar6 + 0x20) = 10;
            *(piVar6[1] + 0x20) = 0xb;
            *(*piVar6 + 0x24) = 10;
            *(piVar6[1] + 0x24) = 0xb;
            iVar5 = coresight_find_csdev_by_fwnode(uVar4);
            pcVar7 = extraout_x8;
            if (iVar5 == 0) {
                if ((uVar4 != 0) && (pcVar7 = *(uVar4 + 8), pcVar7 == of_fwnode_ops)) {
                    if (uVar4 == 0x18) {
                        pcVar7 = NULL;
                    }
                    else {
                        pcVar7 = uVar4 - 8;
                    }
                }
            }
            else if (*(iVar5 + 0xa8) == 0) {
                pcVar7 = iVar5 + 0x38;
            }
            iVar3 = sym.cti_add_connection_entry(pcVar7,arg2,piVar6,iVar5);
            fwnode_handle_put(uVar4);
            if (iVar3 != 0) goto code_r0x08004918;
        }
        puVar8 = arg2 + 0x70;
        while( true ) {
            Hint_Prefetch(puVar8,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar8,0x10);
                if (bVar2) {
                    *puVar8 = *puVar8 | 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            iVar3 = 0;
code_r0x08004918:
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_48) break;
            __stack_chk_fail();
            puVar8 = extraout_x8_00;
        }
        return iVar3;
    }
    _dev_warn(arg1,"ARM v8 architectural CTI connection: missing cpu\n");
    iVar3 = -0x16;
    goto code_r0x08004918;
}


// ===== sym.cti_plat_read_trig_group @ 0x08004a90 (size 264) =====

int sym.cti_plat_read_trig_group(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *arg1;
    if (iVar5 == 0) {
        iVar5 = 0;
    }
    else if ((iVar5 >> 0x3e == 0) && (iVar6 = __kmalloc(iVar5 << 2,0xdc0), iVar6 != 0)) {
        iVar5 = fwnode_property_read_u32_array(arg2,arg3,iVar6,*arg1);
        if ((iVar5 == 0) && (0 < *arg1)) {
            iVar7 = 0;
            do {
                uVar2 = *(iVar6 + iVar7 * 4);
                puVar1 = arg1 + (uVar2 >> 3 & 0x1ffffff8) + 8;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 | 1L << (uVar2 & 0x3f);
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                iVar7 = iVar7 + 1;
            } while (iVar7 < *arg1);
        }
        kfree(iVar6);
    }
    else {
        iVar5 = -0xc;
    }
    return iVar5;
}


// ===== sym.cti_plat_read_trig_types @ 0x08004b98 (size 268) =====

int sym.cti_plat_read_trig_types(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *arg1;
    if (uVar1 == 0) {
        return 0;
    }
    uVar2 = fwnode_property_read_u32_array(arg2,arg3,0,0);
    uVar6 = uVar2 & (uVar2 >> 0x1f ^ 0xffffffffU);
    uVar7 = uVar6;
    if (uVar1 < uVar6) {
        return -0x16;
    }
    if (uVar2 < 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = __kmalloc(uVar7 << 2,0xdc0);
        if (iVar4 == 0) {
            return -0xc;
        }
        iVar3 = fwnode_property_read_u32_array(arg2,arg3,iVar4,uVar7);
        if (iVar3 != 0) goto code_r0x08004c74;
    }
    uVar5 = 0;
    do {
        if (uVar5 < uVar7) {
            uVar6 = *(iVar4 + uVar5 * 4);
            if (0x18 < uVar6) {
                uVar6 = 0;
            }
        }
        else {
            uVar6 = 0;
        }
        *(arg1 + 0x18 + uVar5 * 4) = uVar6;
        uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
    iVar3 = 0;
code_r0x08004c74:
    kfree(iVar4);
    return iVar3;
}


// ===== sym.cti_create_cons_sysfs @ 0x08004ca4 (size 760) =====

ulong sym.cti_create_cons_sysfs(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *puVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    int iVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg2 + 0x10) + 5;
    if (uVar1 >> 0x3d == 0) {
        puVar4 = devm_kmalloc(arg1,-(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar1 << 3,0xdc0);
        *(arg2 + 0x30) = puVar4;
        uVar3 = *0x8000598;
        uVar2 = *0x8000590;
        uVar9 = *0x8000588;
        if (puVar4 == NULL) {
code_r0x08004f68:
            uVar9 = 0xfffffff4;
        }
        else {
            piVar13 = arg2 + 0x18;
            piVar12 = *piVar13;
            *puVar4 = _obj.coresight_cti_groups;
            puVar4[1] = uVar9;
            puVar4[2] = uVar2;
            puVar4[3] = uVar3;
            if (piVar13 != piVar12) {
                iVar11 = 4;
                do {
                    piVar5 = devm_kmalloc(arg1,0x28,0xdc0);
                    if (piVar5 == NULL) goto code_r0x08004f68;
                    iVar6 = devm_kasprintf(arg1,0xcc0,"triggers%d",iVar11 + -4);
                    *piVar5 = iVar6;
                    if (iVar6 == 0) goto code_r0x08004f68;
                    *(*(arg2 + 0x30) + iVar11 * 8) = piVar5;
                    piVar12[3] = piVar5;
                    iVar6 = devm_kmalloc(arg1,0x30,0xdc0);
                    piVar12[2] = iVar6;
                    if (((iVar6 == 0) || (piVar7 = devm_kmalloc(arg1,0x28,0xdc0), piVar7 == NULL)) ||
                       (iVar6 = devm_kstrdup(arg1,"name",0xcc0), iVar6 == 0)) goto code_r0x08004f68;
                    piVar10 = piVar12 + -4;
                    *piVar7 = iVar6;
                    *(piVar7 + 1) = 0x124;
                    piVar7[4] = piVar10;
                    piVar7[2] = sym.con_name_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt;
                    *piVar12[2] = piVar7;
                    if (*piVar12[-4] < 1) {
                        iVar6 = 1;
                    }
                    else {
                        piVar7 = devm_kmalloc(arg1,0x28,0xdc0);
                        if ((piVar7 == NULL) || (iVar6 = devm_kstrdup(arg1,"in_signals",0xcc0), iVar6 == 0))
                        goto code_r0x08004f68;
                        *piVar7 = iVar6;
                        *(piVar7 + 1) = 0x124;
                        piVar7[4] = piVar10;
                        piVar7[2] = sym.trigin_sig_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt;
                        *(piVar12[2] + 8) = piVar7;
                        piVar7 = devm_kmalloc(arg1,0x28,0xdc0);
                        if ((piVar7 == NULL) || (iVar6 = devm_kstrdup(arg1,"in_types",0xcc0), iVar6 == 0))
                        goto code_r0x08004f68;
                        *piVar7 = iVar6;
                        *(piVar7 + 1) = 0x124;
                        piVar7[4] = piVar10;
                        iVar6 = 3;
                        piVar7[2] = sym.trigin_type_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt;
                        *(piVar12[2] + 0x10) = piVar7;
                    }
                    if (0 < *piVar12[-3]) {
                        piVar7 = devm_kmalloc(arg1,0x28,0xdc0);
                        if ((piVar7 == NULL) || (iVar8 = devm_kstrdup(arg1,"out_signals",0xcc0), iVar8 == 0))
                        goto code_r0x08004f68;
                        *piVar7 = iVar8;
                        *(piVar7 + 1) = 0x124;
                        piVar7[4] = piVar10;
                        piVar7[2] = sym.trigout_sig_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt;
                        *(piVar12[2] + iVar6 * 8) = piVar7;
                        piVar7 = devm_kmalloc(arg1,0x28,0xdc0);
                        if ((piVar7 == NULL) || (iVar8 = devm_kstrdup(arg1,"out_types",0xcc0), iVar8 == 0))
                        goto code_r0x08004f68;
                        *piVar7 = iVar8;
                        *(piVar7 + 1) = 0x124;
                        piVar7[4] = piVar10;
                        piVar7[2] = sym.trigout_type_show.09db333e583f75c3fe7adf9a7b72000f.cfi_jt;
                        *(piVar12[2] + (iVar6 + 1) * 8) = piVar7;
                    }
                    iVar11 = iVar11 + 1;
                    piVar5[3] = piVar12[2];
                    piVar12 = *piVar12;
                } while (piVar13 != piVar12);
            }
            uVar9 = 0;
        }
    }
    else {
        uVar9 = 0xfffffff4;
        *(arg2 + 0x30) = 0;
    }
    return uVar9;
}


// ===== sym.con_name_show @ 0x08004f9c (size 60) =====

int64_t sym.con_name_show(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,0x800135f,*(*(arg1 + 0x20) + 0x18));
    return iVar1;
}


// ===== sym.trigin_sig_show @ 0x08004fd8 (size 76) =====

int64_t sym.trigin_sig_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bitmap_print_to_pagebuf(1,arg3,**(arg2 + 0x20) + 8,*(*(*(arg1 + 0x60) + 0x98) + 0x44));
    return iVar1;
}


// ===== sym.trigout_sig_show @ 0x08005024 (size 76) =====

int64_t sym.trigout_sig_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bitmap_print_to_pagebuf(1,arg3,*(*(arg2 + 0x20) + 8) + 8,*(*(*(arg1 + 0x60) + 0x98) + 0x44));
    return iVar1;
}


// ===== sym.trigin_type_show @ 0x08005070 (size 204) =====

int64_t sym.trigin_type_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int *piVar4;
    ulong *in_x18;
    int iVar5;
    ulong *puVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(arg2 + 0x20);
    piVar4 = *puVar6;
    if (*piVar4 < 1) {
        iVar5 = 0;
    }
    else {
        iVar7 = 0;
        iVar5 = 0;
        do {
            uVar1 = piVar4[iVar7 + 6];
            if (0x18 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8005138);
                (*pcVar2)();
            }
            if (200 < uVar1 << 3) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x800513c);
                (*pcVar2)();
            }
            iVar3 = sprintf(arg3 + iVar5,0x80013af,*(obj.sig_type_names + uVar1 * 8));
            piVar4 = *puVar6;
            iVar5 = iVar3 + iVar5;
            iVar7 = iVar7 + 1;
        } while (iVar7 < *piVar4);
    }
    *(arg3 + iVar5) = 10;
    return iVar5 + 1;
}


// ===== sym.trigout_type_show @ 0x0800513c (size 204) =====

int64_t sym.trigout_type_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int *piVar4;
    ulong *in_x18;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg2 + 0x20);
    piVar4 = *(iVar6 + 8);
    if (*piVar4 < 1) {
        iVar5 = 0;
    }
    else {
        iVar7 = 0;
        iVar5 = 0;
        do {
            uVar1 = piVar4[iVar7 + 6];
            if (0x18 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8005204);
                (*pcVar2)();
            }
            if (200 < uVar1 << 3) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8005208);
                (*pcVar2)();
            }
            iVar3 = sprintf(arg3 + iVar5,0x80013af,*(obj.sig_type_names + uVar1 * 8));
            piVar4 = *(iVar6 + 8);
            iVar5 = iVar3 + iVar5;
            iVar7 = iVar7 + 1;
        } while (iVar7 < *piVar4);
    }
    *(arg3 + iVar5) = 10;
    return iVar5 + 1;
}


// ===== sym.enable_show @ 0x08005208 (size 140) =====

int64_t sym.enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char cVar1;
    uchar uVar2;
    uchar uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 0x60) + 0x98);
    uVar6 = *(iVar5 + 0x48);
    _raw_spin_lock(iVar5 + 0x38);
    cVar1 = *(iVar5 + 0x4d);
    uVar2 = *(iVar5 + 0x4c);
    _raw_spin_unlock(iVar5 + 0x38);
    uVar3 = uVar6 != 0;
    if (cVar1 != '\0') {
        uVar3 = uVar2;
    }
    iVar4 = sprintf(arg2,0x8000fec,uVar3);
    return iVar4;
}


// ===== sym.enable_store @ 0x08005298 (size 168) =====

int64_t sym.enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar3 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iStack_30 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = kstrtoull(arg2,0,&iStack_30);
    if (iVar2 == 0) {
        iVar4 = *(iVar4 + 8);
        if (iStack_30 == 0) {
            iVar2 = sym.cti_disable(iVar4);
        }
        else {
            iVar2 = sym.cti_enable(iVar4);
        }
        if (iVar2 != 0) {
            arg3 = iVar2;
        }
    }
    else {
        arg3 = iVar2;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        iVar4 = __stack_chk_fail(arg3);
        *extraout_x18 = sym.powered_show;
        iVar5 = *(*(iVar4 + 0x60) + 0x98);
        iVar4 = iVar5 + 0x38;
        _raw_spin_lock(iVar4);
        uVar1 = *(iVar5 + 0x4d);
        _raw_spin_unlock(iVar4);
        iVar2 = sprintf(piVar3,0x8000fec,uVar1);
        return iVar2;
    }
    return arg3;
}


// ===== sym.powered_show @ 0x08005340 (size 108) =====

int64_t sym.powered_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = iVar4 + 0x38;
    _raw_spin_lock(iVar1);
    uVar2 = *(iVar4 + 0x4d);
    _raw_spin_unlock(iVar1);
    iVar3 = sprintf(arg2,0x8000fec,uVar2);
    return iVar3;
}


// ===== sym.ctmid_show @ 0x080053ac (size 68) =====

int64_t sym.ctmid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,0x8000fec,*(*(*(arg1 + 0x60) + 0x98) + 0x14));
    return iVar1;
}


// ===== sym.nr_trigger_cons_show @ 0x080053f0 (size 68) =====

int64_t sym.nr_trigger_cons_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,0x8000fec,*(*(*(arg1 + 0x60) + 0x98) + 0x10));
    return iVar1;
}


// ===== sym.devaff0_show @ 0x08005434 (size 284) =====

int64_t sym.devaff0_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x080054c4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080054c4:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfa8);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.devaff1_show @ 0x08005550 (size 284) =====

int64_t sym.devaff1_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x080055e0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080055e0:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfac);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.authstatus_show @ 0x0800566c (size 284) =====

int64_t sym.authstatus_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x080056fc;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080056fc:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfb8);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.devarch_show @ 0x08005788 (size 284) =====

int64_t sym.devarch_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005818;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005818:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfbc);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.devid_show @ 0x080058a4 (size 284) =====

int64_t sym.devid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005934;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005934:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfc8);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.devtype_show @ 0x080059c0 (size 284) =====

int64_t sym.devtype_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005a50;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005a50:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfcc);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.pidr0_show @ 0x08005adc (size 284) =====

int64_t sym.pidr0_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005b6c;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005b6c:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfe0);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.pidr1_show @ 0x08005bf8 (size 284) =====

int64_t sym.pidr1_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005c88;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005c88:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfe4);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.pidr2_show @ 0x08005d14 (size 284) =====

int64_t sym.pidr2_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005da4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005da4:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfe8);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.pidr3_show @ 0x08005e30 (size 284) =====

int64_t sym.pidr3_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005ec0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005ec0:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfec);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.pidr4_show @ 0x08005f4c (size 284) =====

int64_t sym.pidr4_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005fdc;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005fdc:
        } while (uVar7 != uVar2);
    }
    else {
        _raw_spin_lock(piVar9 + 7);
        if (*(piVar9 + 0x4d) == '\0') {
            uVar6 = 0;
        }
        else {
            uVar6 = sym.readl_relaxed_1(*piVar9 + 0xfd0);
        }
        _raw_spin_unlock(piVar9 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = sprintf(arg2,"0x%x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.inout_sel_show @ 0x08006068 (size 68) =====

int64_t sym.inout_sel_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,0x8000fec,*(*(*(arg1 + 0x60) + 0x98) + 0x88));
    return iVar1;
}


// ===== sym.inout_sel_store @ 0x080060ac (size 184) =====

int64_t sym.inout_sel_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = kstrtoull(arg2,0,&uStack_40);
    iVar4 = -0x16;
    if ((iVar3 == 0) && (uStack_40 < 0x80)) {
        iVar4 = iVar6 + 0x38;
        _raw_spin_lock(iVar4);
        *(iVar6 + 0x88) = uStack_40;
        _raw_spin_unlock(iVar4);
        iVar4 = arg3;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail(iVar4);
    *extraout_x18 = sym.inen_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    _raw_spin_lock(iVar4 + 0x38);
    if (-1 < *(iVar4 + 0x88)) {
        uVar1 = *(iVar4 + *(iVar4 + 0x88) * 4 + 0x8c);
        _raw_spin_unlock(iVar4 + 0x38);
        iVar3 = sprintf(puVar5,"%#lx\n",uVar1);
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80061e4);
    (*pcVar2)();
}


// ===== sym.inen_show @ 0x08006164 (size 128) =====

int64_t sym.inen_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    _raw_spin_lock(iVar4 + 0x38);
    if (-1 < *(iVar4 + 0x88)) {
        uVar1 = *(iVar4 + *(iVar4 + 0x88) * 4 + 0x8c);
        _raw_spin_unlock(iVar4 + 0x38);
        iVar3 = sprintf(arg2,"%#lx\n",uVar1);
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80061e4);
    (*pcVar2)();
}


// ===== sym.inen_store @ 0x080061e4 (size 248) =====

int64_t sym.inen_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint8_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    iVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = kstrtoull(arg2,0,&uStack_40);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar6 + 0x38);
        uVar3 = *(iVar6 + 0x88);
        if (uVar3 < '\0') goto code_r0x080062d8;
        cVar2 = *(iVar6 + 0x4d);
        *(iVar6 + uVar3 * 4 + 0x8c) = uStack_40;
        if ((cVar2 != '\0') && (*(iVar6 + 0x4c) != '\0')) {
            uVar1 = uVar3 * 4 + 0x20;
            if (*(iVar6 + 0x4b0) != '\0') {
                uVar1 = uVar3 << 2 | 0x400;
            }
            sym.cti_write_single_reg(iVar6,uVar1,uStack_40 & 0xffffffff);
        }
        _raw_spin_unlock(iVar6 + 0x38);
    }
    else {
        arg3 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail();
code_r0x080062d8:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80062dc);
    (*pcVar4)();
}


// ===== sym.outen_show @ 0x080062dc (size 128) =====

int64_t sym.outen_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    _raw_spin_lock(iVar4 + 0x38);
    if (-1 < *(iVar4 + 0x88)) {
        uVar1 = *(iVar4 + *(iVar4 + 0x88) * 4 + 0x28c);
        _raw_spin_unlock(iVar4 + 0x38);
        iVar3 = sprintf(arg2,"%#lx\n",uVar1);
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800635c);
    (*pcVar2)();
}


// ===== sym.outen_store @ 0x0800635c (size 248) =====

int64_t sym.outen_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint8_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    iVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = kstrtoull(arg2,0,&uStack_40);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar6 + 0x38);
        uVar3 = *(iVar6 + 0x88);
        if (uVar3 < '\0') goto code_r0x08006450;
        cVar2 = *(iVar6 + 0x4d);
        *(iVar6 + uVar3 * 4 + 0x28c) = uStack_40;
        if ((cVar2 != '\0') && (*(iVar6 + 0x4c) != '\0')) {
            uVar1 = uVar3 * 4 + 0xa0;
            if (*(iVar6 + 0x4b0) != '\0') {
                uVar1 = uVar3 << 2 | 0x800;
            }
            sym.cti_write_single_reg(iVar6,uVar1,uStack_40 & 0xffffffff);
        }
        _raw_spin_unlock(iVar6 + 0x38);
    }
    else {
        arg3 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail();
code_r0x08006450:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8006454);
    (*pcVar4)();
}


// ===== sym.gate_show @ 0x08006454 (size 212) =====

int64_t sym.gate_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    _raw_spin_lock(piVar4 + 7);
    if ((*(piVar4 + 0x4d) == '\0') || (*(piVar4 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar4 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar1 = 0x140;
        if (piVar4[0x96] != '\0') {
            iVar1 = 0x88;
        }
        uVar2 = sym.readl_relaxed_1(*piVar4 + iVar1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar4 + 0xfb0);
    }
    _raw_spin_unlock(piVar4 + 7);
    iVar3 = scnprintf(arg2,0x1000,"%#x\n",uVar2);
    return iVar3;
}


// ===== sym.gate_store @ 0x08006528 (size 212) =====

int64_t sym.gate_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    uint64_t *arg3_00;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    arg3_00 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0,&uStack_40);
    if (iVar1 == 0) {
        _raw_spin_lock(iVar4 + 0x38);
        if ((*(iVar4 + 0x4d) != '\0') && (*(iVar4 + 0x4c) != '\0')) {
            arg3_00 = uStack_40 & 0xffffffff;
            uVar3 = 0x140;
            if (*(iVar4 + 0x4b0) != '\0') {
                uVar3 = 0x88;
            }
            sym.cti_write_single_reg(iVar4,uVar3,arg3_00);
        }
        _raw_spin_unlock(iVar4 + 0x38);
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.asicctl_show;
    piVar5 = *(*(iVar4 + 0x60) + 0x98);
    _raw_spin_lock(piVar5 + 7);
    if ((*(piVar5 + 0x4d) == '\0') || (*(piVar5 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar5 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar4 = 0x144;
        if (piVar5[0x96] != '\0') {
            iVar4 = 0x8c;
        }
        uVar2 = sym.readl_relaxed_1(*piVar5 + iVar4);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar5 + 0xfb0);
    }
    _raw_spin_unlock(piVar5 + 7);
    iVar1 = scnprintf(arg3_00,0x1000,"%#x\n",uVar2);
    return iVar1;
}


// ===== sym.asicctl_show @ 0x080065fc (size 212) =====

int64_t sym.asicctl_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    _raw_spin_lock(piVar4 + 7);
    if ((*(piVar4 + 0x4d) == '\0') || (*(piVar4 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar4 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar1 = 0x144;
        if (piVar4[0x96] != '\0') {
            iVar1 = 0x8c;
        }
        uVar2 = sym.readl_relaxed_1(*piVar4 + iVar1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar4 + 0xfb0);
    }
    _raw_spin_unlock(piVar4 + 7);
    iVar3 = scnprintf(arg2,0x1000,"%#x\n",uVar2);
    return iVar3;
}


// ===== sym.asicctl_store @ 0x080066d0 (size 212) =====

int64_t sym.asicctl_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    int64_t arg1_00;
    uint64_t *arg3_00;
    uint64_t *puVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    arg3_00 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    iVar7 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = arg3;
    iVar2 = kstrtoull(arg2,0,&uStack_40);
    if (iVar2 == 0) {
        _raw_spin_lock(iVar7 + 0x38);
        if ((*(iVar7 + 0x4d) != '\0') && (*(iVar7 + 0x4c) != '\0')) {
            arg3_00 = uStack_40 & 0xffffffff;
            uVar5 = 0x144;
            if (*(iVar7 + 0x4b0) != '\0') {
                uVar5 = 0x8c;
            }
            sym.cti_write_single_reg(iVar7,uVar5,arg3_00);
        }
        _raw_spin_unlock(iVar7 + 0x38);
    }
    else {
        arg3 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return arg3;
    }
    arg1_00 = __stack_chk_fail();
    puVar4 = &uStack_70;
    *extraout_x18 = sym.intack_store;
    pcStack_58 = sym.intack_store;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffd0;
    iStack_50 = iVar7;
    iStack_48 = arg3;
    iVar2 = kstrtoull(arg3_00,0,&uStack_70);
    if (iVar2 == 0) {
        sym.cti_write_intack(arg1_00,uStack_70 & 0xffffffff);
    }
    else {
        iVar6 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.appset_show;
    piVar8 = *(*(iVar6 + 0x60) + 0x98);
    _raw_spin_lock(piVar8 + 7);
    if ((*(piVar8 + 0x4d) == '\0') || (*(piVar8 + 0x4c) == '\0')) {
        uVar3 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar8 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar6 = 0x14;
        if (piVar8[0x96] != '\0') {
            iVar6 = 4;
        }
        uVar3 = sym.readl_relaxed_1(*piVar8 + iVar6);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar8 + 0xfb0);
    }
    _raw_spin_unlock(piVar8 + 7);
    iVar2 = scnprintf(puVar4,0x1000,"%#x\n",uVar3);
    return iVar2;
}


// ===== sym.intack_store @ 0x080067a4 (size 144) =====

int64_t sym.intack_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar4 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar1 = kstrtoull(arg2,0,&uStack_30);
    if (iVar1 == 0) {
        sym.cti_write_intack(arg1,uStack_30 & 0xffffffff);
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.appset_show;
    piVar5 = *(*(iVar3 + 0x60) + 0x98);
    _raw_spin_lock(piVar5 + 7);
    if ((*(piVar5 + 0x4d) == '\0') || (*(piVar5 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar5 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar3 = 0x14;
        if (piVar5[0x96] != '\0') {
            iVar3 = 4;
        }
        uVar2 = sym.readl_relaxed_1(*piVar5 + iVar3);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar5 + 0xfb0);
    }
    _raw_spin_unlock(piVar5 + 7);
    iVar1 = scnprintf(puVar4,0x1000,"%#x\n",uVar2);
    return iVar1;
}


// ===== sym.appset_show @ 0x08006834 (size 212) =====

int64_t sym.appset_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    _raw_spin_lock(piVar4 + 7);
    if ((*(piVar4 + 0x4d) == '\0') || (*(piVar4 + 0x4c) == '\0')) {
        uVar2 = 0;
    }
    else {
        sym.writel_relaxed_1(0xc5acce55,*piVar4 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        iVar1 = 0x14;
        if (piVar4[0x96] != '\0') {
            iVar1 = 4;
        }
        uVar2 = sym.readl_relaxed_1(*piVar4 + iVar1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*piVar4 + 0xfb0);
    }
    _raw_spin_unlock(piVar4 + 7);
    iVar3 = scnprintf(arg2,0x1000,"%#x\n",uVar2);
    return iVar3;
}


// ===== sym.appset_store @ 0x08006908 (size 212) =====

int64_t sym.appset_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t *arg3_00;
    uint64_t *puVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t unaff_x21;
    int64_t *piVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_90;
    int64_t iStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar10 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    uStack_40 = 0;
    iVar14 = *(*(arg1 + 0x60) + 0x98);
    iVar12 = arg3;
    iVar5 = kstrtoull(arg2,0,&uStack_40);
    if (iVar5 == 0) {
        unaff_x21 = iVar14 + 0x38;
        _raw_spin_lock(unaff_x21);
        if ((*(iVar14 + 0x4d) != '\0') && (*(iVar14 + 0x4c) != '\0')) {
            puVar10 = uStack_40 & 0xffffffff;
            uVar11 = 0x14;
            if (*(iVar14 + 0x4b0) != '\0') {
                uVar11 = 4;
            }
            sym.cti_write_single_reg(iVar14,uVar11,puVar10);
        }
        _raw_spin_unlock(unaff_x21);
    }
    else {
        arg3 = -0x16;
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar8 = __stack_chk_fail();
    arg3_00 = &uStack_80;
    *extraout_x18 = sym.appclear_store;
    pcStack_68 = sym.appclear_store;
    iVar13 = sp_el0;
    iStack_78 = *(iVar13 + 0x5e0);
    uStack_80 = 0;
    iVar8 = *(*(iVar8 + 0x60) + 0x98);
    iVar13 = iVar12;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = unaff_x21;
    iStack_50 = iVar14;
    iStack_48 = arg3;
    iVar5 = kstrtoull(puVar10,0,&uStack_80);
    if (iVar5 == 0) {
        unaff_x21 = iVar8 + 0x38;
        _raw_spin_lock(unaff_x21);
        arg3_00 = uStack_80 & 0xffffffff;
        *(iVar8 + 0x84) = *(iVar8 + 0x84) & (uStack_80 ^ 0xffffffff);
        if ((*(iVar8 + 0x4d) != '\0') && (*(iVar8 + 0x4c) != '\0')) {
            uVar11 = 8;
            if (*(iVar8 + 0x4b0) != '\0') {
                uVar11 = 0x18;
            }
            sym.cti_write_single_reg(iVar8,uVar11,arg3_00);
        }
        _raw_spin_unlock(unaff_x21);
    }
    else {
        iVar12 = -0x16;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_78) {
        return iVar12;
    }
    iVar9 = __stack_chk_fail();
    puVar10 = &uStack_c0;
    *extraout_x18_00 = sym.apppulse_store;
    pcStack_a8 = sym.apppulse_store;
    iVar14 = sp_el0;
    iStack_b8 = *(iVar14 + 0x5e0);
    uStack_c0 = 0;
    iVar14 = *(*(iVar9 + 0x60) + 0x98);
    ppuStack_b0 = &puStack_70;
    iStack_a0 = unaff_x21;
    iStack_90 = iVar8;
    iStack_88 = iVar12;
    iVar5 = kstrtoull(arg3_00,0,&uStack_c0);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar14 + 0x38);
        if ((*(iVar14 + 0x4d) != '\0') && (*(iVar14 + 0x4c) != '\0')) {
            puVar10 = uStack_c0 & 0xffffffff;
            uVar11 = 0x1c;
            if (*(iVar14 + 0x4b0) != '\0') {
                uVar11 = 0xc;
            }
            sym.cti_write_single_reg(iVar14,uVar11,puVar10);
        }
        _raw_spin_unlock(iVar14 + 0x38);
    }
    else {
        iVar13 = -0x16;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_b8) {
        return iVar13;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.triginstatus_show;
    piVar15 = *(*(iVar12 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(iVar12 + 0x60),4);
    if (iVar5 < 0) {
        puVar10 = *(iVar12 + 0x60) + 0x1f8;
        uVar16 = *puVar10;
        do {
            uVar11 = uVar16;
            if (uVar11 == 0) break;
            Hint_Prefetch(puVar10,2,0,1);
            do {
                uVar1 = *puVar10;
                uVar16 = uVar1;
                if (uVar1 != uVar11) goto code_r0x08006cb4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar10,0x10);
                if (bVar4) {
                    *puVar10 = uVar11 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006cb4:
        } while (uVar11 != uVar1);
        return iVar5;
    }
    _raw_spin_lock(piVar15 + 7);
    if (*(piVar15 + 0x4d) == '\0') {
        uVar6 = 0;
    }
    else {
        if (piVar15[0x96] != '\0') {
            iVar14 = 0;
            uVar16 = 0x40;
            iVar7 = *(piVar15 + 0x44) + -1;
            iVar5 = 0x1f;
            iVar2 = *(piVar15 + 0x44) + 0x1e;
            if (-1 < iVar7) {
                iVar2 = iVar7;
            }
            uVar11 = 0;
            do {
                uVar6 = sym.readl_relaxed_1(*piVar15 + uVar16);
                uVar1 = uVar11 + 1;
                iVar7 = scnprintf(puVar10 + iVar14,0x1000 - iVar14,"%u - %u : 0x%x\n",uVar11,iVar5,uVar6);
                uVar16 = uVar16 + 4;
                iVar14 = iVar14 + iVar7;
                iVar5 = iVar5 + 0x20;
                uVar11 = uVar1;
            } while (uVar1 <= iVar2 >> 5);
            goto code_r0x08006cf4;
        }
        uVar6 = sym.readl_relaxed_1(*piVar15 + 0x130);
    }
    iVar14 = 0;
code_r0x08006cf4:
    _raw_spin_unlock(piVar15 + 7);
    __pm_runtime_idle(*(iVar12 + 0x60),4);
    if (piVar15[0x96] == '\0') {
        iVar5 = scnprintf(puVar10,0x1000,"0x%x\n",uVar6);
        iVar14 = iVar5;
    }
    return iVar14;
}


// ===== sym.appclear_store @ 0x080069dc (size 224) =====

int64_t sym.appclear_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t *puVar9;
    uint64_t *arg3_00;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t unaff_x21;
    int64_t *piVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar9 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_40 = 0;
    iVar12 = *(*(arg1 + 0x60) + 0x98);
    iVar11 = arg3;
    iVar5 = kstrtoull(arg2,0,&uStack_40);
    if (iVar5 == 0) {
        unaff_x21 = iVar12 + 0x38;
        _raw_spin_lock(unaff_x21);
        puVar9 = uStack_40 & 0xffffffff;
        *(iVar12 + 0x84) = *(iVar12 + 0x84) & (uStack_40 ^ 0xffffffff);
        if ((*(iVar12 + 0x4d) != '\0') && (*(iVar12 + 0x4c) != '\0')) {
            uVar10 = 8;
            if (*(iVar12 + 0x4b0) != '\0') {
                uVar10 = 0x18;
            }
            sym.cti_write_single_reg(iVar12,uVar10,puVar9);
        }
        _raw_spin_unlock(unaff_x21);
    }
    else {
        arg3 = -0x16;
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar8 = __stack_chk_fail();
    arg3_00 = &uStack_80;
    *extraout_x18 = sym.apppulse_store;
    pcStack_68 = sym.apppulse_store;
    iVar13 = sp_el0;
    iStack_78 = *(iVar13 + 0x5e0);
    uStack_80 = 0;
    iVar13 = *(*(iVar8 + 0x60) + 0x98);
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = unaff_x21;
    iStack_50 = iVar12;
    iStack_48 = arg3;
    iVar5 = kstrtoull(puVar9,0,&uStack_80);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar13 + 0x38);
        if ((*(iVar13 + 0x4d) != '\0') && (*(iVar13 + 0x4c) != '\0')) {
            arg3_00 = uStack_80 & 0xffffffff;
            uVar10 = 0x1c;
            if (*(iVar13 + 0x4b0) != '\0') {
                uVar10 = 0xc;
            }
            sym.cti_write_single_reg(iVar13,uVar10,arg3_00);
        }
        _raw_spin_unlock(iVar13 + 0x38);
    }
    else {
        iVar11 = -0x16;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_78) {
        return iVar11;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.triginstatus_show;
    piVar14 = *(*(iVar11 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(iVar11 + 0x60),4);
    if (iVar5 < 0) {
        puVar9 = *(iVar11 + 0x60) + 0x1f8;
        uVar15 = *puVar9;
        do {
            uVar10 = uVar15;
            if (uVar10 == 0) break;
            Hint_Prefetch(puVar9,2,0,1);
            do {
                uVar1 = *puVar9;
                uVar15 = uVar1;
                if (uVar1 != uVar10) goto code_r0x08006cb4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar9,0x10);
                if (bVar4) {
                    *puVar9 = uVar10 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006cb4:
        } while (uVar10 != uVar1);
        return iVar5;
    }
    _raw_spin_lock(piVar14 + 7);
    if (*(piVar14 + 0x4d) == '\0') {
        uVar6 = 0;
    }
    else {
        if (piVar14[0x96] != '\0') {
            iVar12 = 0;
            uVar15 = 0x40;
            iVar7 = *(piVar14 + 0x44) + -1;
            iVar5 = 0x1f;
            iVar2 = *(piVar14 + 0x44) + 0x1e;
            if (-1 < iVar7) {
                iVar2 = iVar7;
            }
            uVar10 = 0;
            do {
                uVar6 = sym.readl_relaxed_1(*piVar14 + uVar15);
                uVar1 = uVar10 + 1;
                iVar7 = scnprintf(arg3_00 + iVar12,0x1000 - iVar12,"%u - %u : 0x%x\n",uVar10,iVar5,uVar6);
                uVar15 = uVar15 + 4;
                iVar12 = iVar12 + iVar7;
                iVar5 = iVar5 + 0x20;
                uVar10 = uVar1;
            } while (uVar1 <= iVar2 >> 5);
            goto code_r0x08006cf4;
        }
        uVar6 = sym.readl_relaxed_1(*piVar14 + 0x130);
    }
    iVar12 = 0;
code_r0x08006cf4:
    _raw_spin_unlock(piVar14 + 7);
    __pm_runtime_idle(*(iVar11 + 0x60),4);
    if (piVar14[0x96] == '\0') {
        iVar5 = scnprintf(arg3_00,0x1000,"0x%x\n",uVar6);
        iVar12 = iVar5;
    }
    return iVar12;
}


// ===== sym.apppulse_store @ 0x08006abc (size 212) =====

int64_t sym.apppulse_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint64_t *puVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar8 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    uStack_40 = 0;
    iVar10 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = kstrtoull(arg2,0,&uStack_40);
    if (iVar5 == 0) {
        _raw_spin_lock(iVar10 + 0x38);
        if ((*(iVar10 + 0x4d) != '\0') && (*(iVar10 + 0x4c) != '\0')) {
            puVar8 = uStack_40 & 0xffffffff;
            uVar9 = 0x1c;
            if (*(iVar10 + 0x4b0) != '\0') {
                uVar9 = 0xc;
            }
            sym.cti_write_single_reg(iVar10,uVar9,puVar8);
        }
        _raw_spin_unlock(iVar10 + 0x38);
    }
    else {
        arg3 = -0x16;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.triginstatus_show;
    piVar12 = *(*(iVar10 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(iVar10 + 0x60),4);
    if (iVar5 < 0) {
        puVar8 = *(iVar10 + 0x60) + 0x1f8;
        uVar13 = *puVar8;
        do {
            uVar9 = uVar13;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar8,2,0,1);
            do {
                uVar1 = *puVar8;
                uVar13 = uVar1;
                if (uVar1 != uVar9) goto code_r0x08006cb4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar8,0x10);
                if (bVar4) {
                    *puVar8 = uVar9 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006cb4:
        } while (uVar9 != uVar1);
        return iVar5;
    }
    _raw_spin_lock(piVar12 + 7);
    if (*(piVar12 + 0x4d) == '\0') {
        uVar6 = 0;
    }
    else {
        if (piVar12[0x96] != '\0') {
            iVar11 = 0;
            uVar13 = 0x40;
            iVar7 = *(piVar12 + 0x44) + -1;
            iVar5 = 0x1f;
            iVar2 = *(piVar12 + 0x44) + 0x1e;
            if (-1 < iVar7) {
                iVar2 = iVar7;
            }
            uVar9 = 0;
            do {
                uVar6 = sym.readl_relaxed_1(*piVar12 + uVar13);
                uVar1 = uVar9 + 1;
                iVar7 = scnprintf(puVar8 + iVar11,0x1000 - iVar11,"%u - %u : 0x%x\n",uVar9,iVar5,uVar6);
                uVar13 = uVar13 + 4;
                iVar11 = iVar11 + iVar7;
                iVar5 = iVar5 + 0x20;
                uVar9 = uVar1;
            } while (uVar1 <= iVar2 >> 5);
            goto code_r0x08006cf4;
        }
        uVar6 = sym.readl_relaxed_1(*piVar12 + 0x130);
    }
    iVar11 = 0;
code_r0x08006cf4:
    _raw_spin_unlock(piVar12 + 7);
    __pm_runtime_idle(*(iVar10 + 0x60),4);
    if (piVar12[0x96] == '\0') {
        iVar5 = scnprintf(puVar8,0x1000,"0x%x\n",uVar6);
        iVar11 = iVar5;
    }
    return iVar11;
}


// ===== sym.triginstatus_show @ 0x08006b90 (size 492) =====

int64_t sym.triginstatus_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint64_t *puVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar2 = *(arg1 + 0x60) + 0x1f8;
        uVar12 = *puVar2;
        do {
            uVar9 = uVar12;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar1 = *puVar2;
                uVar12 = uVar1;
                if (uVar1 != uVar9) goto code_r0x08006cb4;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = uVar9 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006cb4:
        } while (uVar9 != uVar1);
        return iVar6;
    }
    _raw_spin_lock(piVar11 + 7);
    if (*(piVar11 + 0x4d) == '\0') {
        uVar7 = 0;
    }
    else {
        if (piVar11[0x96] != '\0') {
            iVar10 = 0;
            uVar12 = 0x40;
            iVar8 = *(piVar11 + 0x44) + -1;
            iVar6 = 0x1f;
            iVar3 = *(piVar11 + 0x44) + 0x1e;
            if (-1 < iVar8) {
                iVar3 = iVar8;
            }
            uVar9 = 0;
            do {
                uVar7 = sym.readl_relaxed_1(*piVar11 + uVar12);
                uVar1 = uVar9 + 1;
                iVar8 = scnprintf(arg2 + iVar10,0x1000 - iVar10,"%u - %u : 0x%x\n",uVar9,iVar6,uVar7);
                uVar12 = uVar12 + 4;
                iVar10 = iVar10 + iVar8;
                iVar6 = iVar6 + 0x20;
                uVar9 = uVar1;
            } while (uVar1 <= iVar3 >> 5);
            goto code_r0x08006cf4;
        }
        uVar7 = sym.readl_relaxed_1(*piVar11 + 0x130);
    }
    iVar10 = 0;
code_r0x08006cf4:
    _raw_spin_unlock(piVar11 + 7);
    __pm_runtime_idle(*(arg1 + 0x60),4);
    if (piVar11[0x96] == '\0') {
        iVar6 = scnprintf(arg2,0x1000,"0x%x\n",uVar7);
        iVar10 = iVar6;
    }
    return iVar10;
}


// ===== sym.trigoutstatus_show @ 0x08006d7c (size 492) =====

int64_t sym.trigoutstatus_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint64_t *puVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar2 = *(arg1 + 0x60) + 0x1f8;
        uVar12 = *puVar2;
        do {
            uVar9 = uVar12;
            if (uVar9 == 0) break;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar1 = *puVar2;
                uVar12 = uVar1;
                if (uVar1 != uVar9) goto code_r0x08006ea0;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = uVar9 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006ea0:
        } while (uVar9 != uVar1);
        return iVar6;
    }
    _raw_spin_lock(piVar11 + 7);
    if (*(piVar11 + 0x4d) == '\0') {
        uVar7 = 0;
    }
    else {
        if (piVar11[0x96] != '\0') {
            iVar10 = 0;
            uVar12 = 0x60;
            iVar8 = *(piVar11 + 0x44) + -1;
            iVar6 = 0x1f;
            iVar3 = *(piVar11 + 0x44) + 0x1e;
            if (-1 < iVar8) {
                iVar3 = iVar8;
            }
            uVar9 = 0;
            do {
                uVar7 = sym.readl_relaxed_1(*piVar11 + uVar12);
                uVar1 = uVar9 + 1;
                iVar8 = scnprintf(arg2 + iVar10,0x1000 - iVar10,"%u - %u : 0x%x\n",uVar9,iVar6,uVar7);
                uVar12 = uVar12 + 4;
                iVar10 = iVar10 + iVar8;
                iVar6 = iVar6 + 0x20;
                uVar9 = uVar1;
            } while (uVar1 <= iVar3 >> 5);
            goto code_r0x08006ee0;
        }
        uVar7 = sym.readl_relaxed_1(*piVar11 + 0x134);
    }
    iVar10 = 0;
code_r0x08006ee0:
    _raw_spin_unlock(piVar11 + 7);
    __pm_runtime_idle(*(arg1 + 0x60),4);
    if (piVar11[0x96] == '\0') {
        iVar6 = scnprintf(arg2,0x1000,"0x%x\n",uVar7);
        iVar10 = iVar6;
    }
    return iVar10;
}


// ===== sym.chinstatus_show @ 0x08006f68 (size 308) =====

int64_t sym.chinstatus_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar9 = *puVar1;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar9 = uVar3;
                if (uVar3 != uVar8) goto code_r0x0800700c;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800700c:
        } while (uVar8 != uVar3);
    }
    else {
        _raw_spin_lock(piVar10 + 7);
        if (*(piVar10 + 0x4d) == '\0') {
            uVar7 = 0;
        }
        else {
            iVar2 = 0x138;
            if (piVar10[0x96] != '\0') {
                iVar2 = 0x80;
            }
            uVar7 = sym.readl_relaxed_1(*piVar10 + iVar2);
        }
        _raw_spin_unlock(piVar10 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%x\n",uVar7);
    }
    return iVar6;
}


// ===== sym.choutstatus_show @ 0x0800709c (size 308) =====

int64_t sym.choutstatus_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar9 = *puVar1;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar9 = uVar3;
                if (uVar3 != uVar8) goto code_r0x08007140;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08007140:
        } while (uVar8 != uVar3);
    }
    else {
        _raw_spin_lock(piVar10 + 7);
        if (*(piVar10 + 0x4d) == '\0') {
            uVar7 = 0;
        }
        else {
            iVar2 = 0x13c;
            if (piVar10[0x96] != '\0') {
                iVar2 = 0x84;
            }
            uVar7 = sym.readl_relaxed_1(*piVar10 + iVar2);
        }
        _raw_spin_unlock(piVar10 + 7);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%x\n",uVar7);
    }
    return iVar6;
}


// ===== sym.trigin_attach_store @ 0x080071d0 (size 172) =====

int64_t sym.trigin_attach_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong *puVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x30;
    ulong uStack_c0;
    int64_t iStack_b8;
    ulong **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    uchar *puStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uchar *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar10 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iVar8 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(arg2,"%d %d",iVar8);
    if (iVar2 == 2) {
        puVar10 = uStack_30._4_4_;
        iVar8 = 0;
        iVar3 = sym.cti_channel_trig_op(arg1,0,0,uStack_30._4_4_);
        iVar2 = arg3;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar5 = iVar2;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(iVar5);
    puVar11 = &uStack_60;
    *extraout_x18 = sym.trigin_detach_store;
    pcStack_48 = sym.trigin_detach_store;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_60 + 4;
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg1;
    iStack_38 = arg3;
    iVar2 = sscanf(iVar8,"%d %d",iVar5);
    if (iVar2 == 2) {
        puVar11 = uStack_60._4_4_;
        iVar5 = 0;
        iVar3 = sym.cti_channel_trig_op(iVar6,1,0,uStack_60._4_4_);
        iVar2 = puVar10;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar8 = iVar2;
    }
    else {
        iVar8 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar7 = __stack_chk_fail(iVar8);
    uVar9 = &uStack_90;
    *extraout_x18_00 = sym.trigout_attach_store;
    pcStack_78 = sym.trigout_attach_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    iVar8 = &uStack_90 + 4;
    uStack_90 = 0;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar6;
    puStack_68 = puVar10;
    iVar2 = sscanf(iVar5,"%d %d",iVar8);
    if (iVar2 == 2) {
        iVar8 = 1;
        uVar9 = uStack_90._4_4_;
        iVar3 = sym.cti_channel_trig_op(iVar7,0,1,uStack_90._4_4_);
        iVar2 = puVar11;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar5 = iVar2;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_88) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(iVar5);
    *extraout_x18_01 = sym.trigout_detach_store;
    pcStack_a8 = sym.trigout_detach_store;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_c0 + 4;
    uStack_c0 = 0;
    ppuStack_b0 = &ppuStack_80;
    iStack_a0 = iVar7;
    puStack_98 = puVar11;
    iVar2 = sscanf(iVar8,"%d %d",iVar5,&uStack_c0);
    if (iVar2 == 2) {
        iVar5 = 1;
        uVar4 = sym.cti_channel_trig_op(iVar6,1,1,uStack_c0._4_4_);
        if (uVar4 != 0) {
            uVar9 = uVar4;
        }
        iVar8 = uVar9;
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b8) {
        return iVar8;
    }
    iVar8 = __stack_chk_fail(iVar8);
    *extraout_x18_02 = sym.trig_filter_enable_show;
    iVar6 = *(*(iVar8 + 0x60) + 0x98);
    iVar8 = iVar6 + 0x38;
    _raw_spin_lock(iVar8);
    uVar1 = *(iVar6 + 0x80);
    _raw_spin_unlock(iVar8);
    iVar2 = sprintf(iVar5,0x8000fec,uVar1);
    return iVar2;
}


// ===== sym.trigin_detach_store @ 0x0800727c (size 172) =====

int64_t sym.trigin_detach_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
    ulong uStack_90;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uchar *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar10 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iVar8 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(arg2,"%d %d",iVar8);
    if (iVar2 == 2) {
        puVar10 = uStack_30._4_4_;
        iVar8 = 0;
        iVar3 = sym.cti_channel_trig_op(arg1,1,0,uStack_30._4_4_);
        iVar2 = arg3;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar5 = iVar2;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(iVar5);
    uVar9 = &uStack_60;
    *extraout_x18 = sym.trigout_attach_store;
    pcStack_48 = sym.trigout_attach_store;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_60 + 4;
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg1;
    iStack_38 = arg3;
    iVar2 = sscanf(iVar8,"%d %d",iVar5);
    if (iVar2 == 2) {
        iVar5 = 1;
        uVar9 = uStack_60._4_4_;
        iVar3 = sym.cti_channel_trig_op(iVar6,0,1,uStack_60._4_4_);
        iVar2 = puVar10;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar8 = iVar2;
    }
    else {
        iVar8 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar7 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.trigout_detach_store;
    pcStack_78 = sym.trigout_detach_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    iVar8 = &uStack_90 + 4;
    uStack_90 = 0;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar6;
    puStack_68 = puVar10;
    iVar2 = sscanf(iVar5,"%d %d",iVar8,&uStack_90);
    if (iVar2 == 2) {
        iVar8 = 1;
        uVar4 = sym.cti_channel_trig_op(iVar7,1,1,uStack_90._4_4_);
        if (uVar4 != 0) {
            uVar9 = uVar4;
        }
        iVar5 = uVar9;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_88) {
        return iVar5;
    }
    iVar5 = __stack_chk_fail(iVar5);
    *extraout_x18_01 = sym.trig_filter_enable_show;
    iVar6 = *(*(iVar5 + 0x60) + 0x98);
    iVar5 = iVar6 + 0x38;
    _raw_spin_lock(iVar5);
    uVar1 = *(iVar6 + 0x80);
    _raw_spin_unlock(iVar5);
    iVar2 = sprintf(iVar8,0x8000fec,uVar1);
    return iVar2;
}


// ===== sym.trigout_attach_store @ 0x08007328 (size 172) =====

int64_t sym.trigout_attach_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    uVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iVar7 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(arg2,"%d %d",iVar7);
    if (iVar2 == 2) {
        iVar7 = 1;
        uVar8 = uStack_30._4_4_;
        iVar3 = sym.cti_channel_trig_op(arg1,0,1,uStack_30._4_4_);
        iVar2 = arg3;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar5 = iVar2;
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.trigout_detach_store;
    pcStack_48 = sym.trigout_detach_store;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_60 + 4;
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg1;
    iStack_38 = arg3;
    iVar2 = sscanf(iVar7,"%d %d",iVar5,&uStack_60);
    if (iVar2 == 2) {
        iVar5 = 1;
        uVar4 = sym.cti_channel_trig_op(iVar6,1,1,uStack_60._4_4_);
        if (uVar4 != 0) {
            uVar8 = uVar4;
        }
        iVar7 = uVar8;
    }
    else {
        iVar7 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar7;
    }
    iVar7 = __stack_chk_fail(iVar7);
    *extraout_x18_00 = sym.trig_filter_enable_show;
    iVar6 = *(*(iVar7 + 0x60) + 0x98);
    iVar7 = iVar6 + 0x38;
    _raw_spin_lock(iVar7);
    uVar1 = *(iVar6 + 0x80);
    _raw_spin_unlock(iVar7);
    iVar2 = sprintf(iVar5,0x8000fec,uVar1);
    return iVar2;
}


// ===== sym.trigout_detach_store @ 0x080073d4 (size 172) =====

int64_t sym.trigout_detach_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_30 + 4;
    uStack_30 = 0;
    iVar2 = sscanf(arg2,"%d %d",iVar5,&uStack_30);
    if (iVar2 == 2) {
        iVar5 = 1;
        iVar3 = sym.cti_channel_trig_op(arg1,1,1,uStack_30._4_4_);
        iVar2 = arg3;
        if (iVar3 != 0) {
            iVar2 = iVar3;
        }
        iVar4 = iVar2;
    }
    else {
        iVar4 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail(iVar4);
    *extraout_x18 = sym.trig_filter_enable_show;
    iVar6 = *(*(iVar4 + 0x60) + 0x98);
    iVar4 = iVar6 + 0x38;
    _raw_spin_lock(iVar4);
    uVar1 = *(iVar6 + 0x80);
    _raw_spin_unlock(iVar4);
    iVar2 = sprintf(iVar5,0x8000fec,uVar1);
    return iVar2;
}


// ===== sym.trig_filter_enable_show @ 0x08007480 (size 108) =====

int64_t sym.trig_filter_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = iVar4 + 0x38;
    _raw_spin_lock(iVar1);
    uVar2 = *(iVar4 + 0x80);
    _raw_spin_unlock(iVar1);
    iVar3 = sprintf(arg2,0x8000fec,uVar2);
    return iVar3;
}


// ===== sym.trig_filter_enable_store @ 0x080074ec (size 180) =====

int64_t sym.trig_filter_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar3 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = kstrtoull(arg2,0,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x38;
        _raw_spin_lock(iVar1);
        *(iVar4 + 0x80) = iStack_40 != 0;
        _raw_spin_unlock(iVar1);
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.trigout_filtered_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    iVar2 = bitmap_print_to_pagebuf(1,piVar3,iVar4 + 0x70,*(iVar4 + 0x44));
    return iVar2;
}


// ===== sym.trigout_filtered_show @ 0x080075a0 (size 64) =====

int64_t sym.trigout_filtered_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = bitmap_print_to_pagebuf(1,arg2,iVar2 + 0x70,*(iVar2 + 0x44));
    return iVar1;
}


// ===== sym.chan_gate_enable_show @ 0x080075e0 (size 136) =====

uint64_t sym.chan_gate_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uchar uVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t *puVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t in_x3;
    int64_t iVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint64_t uStack_190;
    int64_t iStack_188;
    ulong ***pppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    int64_t iStack_168;
    int64_t iStack_160;
    uint32_t *puStack_158;
    uint64_t uStack_150;
    int64_t iStack_148;
    ulong ***pppuStack_140;
    code *pcStack_138;
    uint32_t uStack_10c;
    int64_t iStack_108;
    ulong ***pppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    uint64_t uStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    ulong ***pppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar ***pppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uint64_t uStack_88;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar **ppuStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    uchar *puStack_40;
    code *pcStack_38;
    uint64_t uStack_20;
    int64_t iStack_18;
    
    puVar11 = &uStack_20;
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_18 = *(iVar15 + 0x5e0);
    iVar15 = *(*(arg1 + 0x60) + 0x98);
    uVar2 = *(iVar15 + 0x48c);
    uStack_20 = uVar2;
    if (uVar2 == 0) {
        uVar6 = 1;
        *arg2 = 10;
    }
    else {
        in_x3 = *(iVar15 + 0x40);
        iVar5 = bitmap_print_to_pagebuf(1,arg2,&uStack_20);
        uVar6 = iVar5;
        arg2 = puVar11;
        noname_1 = extraout_q0;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_18) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(noname_1,uVar6);
    *extraout_x18 = sym.chan_gate_enable_store;
    pcStack_38 = sym.chan_gate_enable_store;
    iVar15 = sp_el0;
    iStack_48 = *(iVar15 + 0x5e0);
    puVar13 = &uStack_4c;
    uStack_4c = 0;
    uVar6 = in_x3;
    puStack_40 = &stack0xfffffffffffffff0;
    iVar5 = kstrtoint(arg2,0,puVar13);
    if (iVar5 == 0) {
        puVar13 = uStack_4c;
        iVar5 = sym.cti_channel_gate_op(iVar7,0,uStack_4c);
        uVar9 = in_x3;
        if (iVar5 != 0) {
            uVar9 = iVar5;
        }
    }
    else {
        uVar9 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_48) {
        return uVar9;
    }
    iVar8 = __stack_chk_fail(uVar9);
    *extraout_x18_00 = sym.chan_gate_disable_store;
    pcStack_68 = sym.chan_gate_disable_store;
    iVar15 = sp_el0;
    iStack_78 = *(iVar15 + 0x5e0);
    puVar12 = &uStack_7c;
    uStack_7c = 0;
    uVar9 = uVar6;
    ppuStack_70 = &puStack_40;
    iStack_60 = iVar7;
    uStack_58 = in_x3;
    iVar5 = kstrtoint(puVar13,0,puVar12);
    if (iVar5 == 0) {
        puVar12 = uStack_7c;
        iVar5 = sym.cti_channel_gate_op(iVar8,1,uStack_7c);
        uVar16 = uVar6;
        if (iVar5 != 0) {
            uVar16 = iVar5;
        }
    }
    else {
        uVar16 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_78) {
        return uVar16;
    }
    iVar7 = __stack_chk_fail(uVar16);
    *extraout_x18_01 = sym.chan_set_store;
    pcStack_98 = sym.chan_set_store;
    iVar15 = sp_el0;
    iStack_a8 = *(iVar15 + 0x5e0);
    puVar13 = &uStack_ac;
    uStack_ac = 0;
    uVar16 = uVar9;
    pppuStack_a0 = &ppuStack_70;
    iStack_90 = iVar8;
    uStack_88 = uVar6;
    iVar5 = kstrtoint(puVar12,0,puVar13);
    if (iVar5 == 0) {
        puVar13 = uStack_ac;
        iVar5 = sym.cti_channel_setop(iVar7,0,uStack_ac);
        uVar6 = uVar9;
        if (iVar5 != 0) {
            uVar6 = iVar5;
        }
    }
    else {
        uVar6 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_a8) {
        return uVar6;
    }
    iVar8 = __stack_chk_fail(uVar6);
    *extraout_x18_02 = sym.chan_clear_store;
    pcStack_c8 = sym.chan_clear_store;
    iVar15 = sp_el0;
    iStack_d8 = *(iVar15 + 0x5e0);
    puVar12 = &uStack_dc;
    uStack_dc = 0;
    uVar6 = uVar16;
    pppuStack_d0 = &pppuStack_a0;
    iStack_c0 = iVar7;
    uStack_b8 = uVar9;
    iVar5 = kstrtoint(puVar13,0,puVar12);
    if (iVar5 == 0) {
        puVar12 = uStack_dc;
        iVar5 = sym.cti_channel_setop(iVar8,1,uStack_dc);
        uVar9 = uVar16;
        if (iVar5 != 0) {
            uVar9 = iVar5;
        }
    }
    else {
        uVar9 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_d8) {
        return uVar9;
    }
    iVar7 = __stack_chk_fail(uVar9);
    *extraout_x18_03 = sym.chan_pulse_store;
    pcStack_f8 = sym.chan_pulse_store;
    iVar15 = sp_el0;
    iStack_108 = *(iVar15 + 0x5e0);
    puVar13 = &uStack_10c;
    uStack_10c = 0;
    pppuStack_100 = &pppuStack_d0;
    iStack_f0 = iVar8;
    uStack_e8 = uVar16;
    iVar5 = kstrtoint(puVar12,0);
    if (iVar5 == 0) {
        puVar13 = uStack_10c;
        iVar5 = sym.cti_channel_setop(iVar7,2,uStack_10c);
        if (iVar5 != 0) {
            uVar6 = iVar5;
        }
    }
    else {
        uVar6 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_108) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    puVar11 = &uStack_150;
    *extraout_x18_04 = sym.chan_inuse_show;
    pcStack_138 = sym.chan_inuse_show;
    iVar15 = sp_el0;
    iStack_148 = *(iVar15 + 0x5e0);
    uStack_150 = 0;
    iVar7 = *(*(iVar7 + 0x60) + 0x98);
    iVar15 = iVar7 + 0x38;
    puVar12 = puVar13;
    pppuStack_140 = &pppuStack_100;
    _raw_spin_lock(iVar15);
    if (*(iVar7 + 0x44) < 1) {
        uVar6 = 0;
    }
    else {
        iVar8 = 0;
        uVar6 = 0;
        do {
            if (iVar8 == 0x200) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar4)();
            }
            iVar10 = iVar7 + iVar8;
            iVar8 = iVar8 + 4;
            uVar6 = uVar6 | *(iVar10 + 0x8c) | *(iVar10 + 0x28c);
            uStack_150 = uVar6;
        } while (*(iVar7 + 0x44) * 4 - iVar8 != 0);
    }
    _raw_spin_unlock(iVar15);
    if (uVar6 << (-*(iVar7 + 0x40) & 0x3f) == 0) {
        uVar9 = 1;
        *puVar13 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,puVar13);
        uVar9 = iVar5;
        puVar12 = puVar11;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_148) {
        return uVar9;
    }
    iVar10 = __stack_chk_fail(uVar9);
    puVar11 = &uStack_190;
    *extraout_x18_05 = sym.chan_free_show;
    pcStack_178 = sym.chan_free_show;
    iVar8 = sp_el0;
    iStack_188 = *(iVar8 + 0x5e0);
    iVar8 = *(*(iVar10 + 0x60) + 0x98);
    puVar14 = puVar12;
    pppuStack_180 = &pppuStack_140;
    uStack_170 = uVar6;
    iStack_168 = iVar7;
    iStack_160 = iVar15;
    puStack_158 = puVar13;
    _raw_spin_lock(iVar8 + 0x38);
    uVar6 = *(iVar8 + 0x44);
    if (*(iVar8 + 0x44) < 1) {
        uVar9 = 0xffffffffffffffff;
    }
    else {
        uVar9 = 0;
        uVar16 = uVar6 - 0x81;
        iVar15 = iVar8;
        do {
            if (uVar16 < 0xffffffffffffff80) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007b74);
                (*pcVar4)();
            }
            puVar13 = iVar15 + 0x8c;
            uVar6 = uVar6 - 1;
            puVar1 = iVar15 + 0x28c;
            iVar15 = iVar15 + 4;
            uVar9 = uVar9 | *puVar13 | *puVar1;
        } while (uVar6 != 0);
        uVar9 = ~uVar9;
    }
    _raw_spin_unlock(iVar8 + 0x38);
    uStack_190 = uVar9;
    if (uVar9 << (-*(iVar8 + 0x40) & 0x3f) == 0) {
        uVar6 = 1;
        *puVar12 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,puVar12,&uStack_190);
        uVar6 = iVar5;
        puVar14 = puVar11;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_188) {
        iVar15 = __stack_chk_fail(uVar6);
        *extraout_x18_06 = sym.chan_xtrigs_sel_show;
        iVar7 = *(*(iVar15 + 0x60) + 0x98);
        iVar15 = iVar7 + 0x38;
        _raw_spin_lock(iVar15);
        uVar3 = *(iVar7 + 0x81);
        _raw_spin_unlock(iVar15);
        iVar5 = sprintf(puVar14,"%ld\n",uVar3);
        return iVar5;
    }
    return uVar6;
}


// ===== sym.chan_gate_enable_store @ 0x08007668 (size 156) =====

int64_t sym.chan_gate_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar16;
    ulong unaff_x30;
    uint64_t uStack_170;
    int64_t iStack_168;
    ulong ***pppuStack_160;
    code *pcStack_158;
    uint64_t uStack_150;
    int64_t iStack_148;
    int64_t iStack_140;
    uint32_t *puStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    ulong ***pppuStack_120;
    code *pcStack_118;
    uint32_t uStack_ec;
    int64_t iStack_e8;
    ulong ***pppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uint32_t uStack_bc;
    int64_t iStack_b8;
    uchar ***pppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    puVar11 = &uStack_2c;
    uStack_2c = 0;
    iVar9 = arg3;
    iVar4 = kstrtoint(arg2,0,puVar11);
    if (iVar4 == 0) {
        puVar11 = uStack_2c;
        iVar4 = sym.cti_channel_gate_op(arg1,0,uStack_2c);
        iVar7 = arg3;
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar7;
    }
    iVar5 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.chan_gate_disable_store;
    pcStack_48 = sym.chan_gate_disable_store;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puVar10 = &uStack_5c;
    uStack_5c = 0;
    iVar7 = iVar9;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg1;
    iStack_38 = arg3;
    iVar4 = kstrtoint(puVar11,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_5c;
        iVar4 = sym.cti_channel_gate_op(iVar5,1,uStack_5c);
        iVar8 = iVar9;
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar6 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.chan_set_store;
    pcStack_78 = sym.chan_set_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    puVar11 = &uStack_8c;
    uStack_8c = 0;
    iVar8 = iVar7;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar5;
    iStack_68 = iVar9;
    iVar4 = kstrtoint(puVar10,0,puVar11);
    if (iVar4 == 0) {
        puVar11 = uStack_8c;
        iVar4 = sym.cti_channel_setop(iVar6,0,uStack_8c);
        iVar9 = iVar7;
        if (iVar4 != 0) {
            iVar9 = iVar4;
        }
    }
    else {
        iVar9 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return iVar9;
    }
    iVar5 = __stack_chk_fail(iVar9);
    *extraout_x18_01 = sym.chan_clear_store;
    pcStack_a8 = sym.chan_clear_store;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    puVar10 = &uStack_bc;
    uStack_bc = 0;
    iVar9 = iVar8;
    pppuStack_b0 = &ppuStack_80;
    iStack_a0 = iVar6;
    iStack_98 = iVar7;
    iVar4 = kstrtoint(puVar11,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_bc;
        iVar4 = sym.cti_channel_setop(iVar5,1,uStack_bc);
        iVar7 = iVar8;
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b8) {
        return iVar7;
    }
    iVar6 = __stack_chk_fail(iVar7);
    *extraout_x18_02 = sym.chan_pulse_store;
    pcStack_d8 = sym.chan_pulse_store;
    iVar7 = sp_el0;
    iStack_e8 = *(iVar7 + 0x5e0);
    puVar11 = &uStack_ec;
    uStack_ec = 0;
    pppuStack_e0 = &pppuStack_b0;
    iStack_d0 = iVar5;
    iStack_c8 = iVar8;
    iVar4 = kstrtoint(puVar10,0);
    if (iVar4 == 0) {
        puVar11 = uStack_ec;
        iVar4 = sym.cti_channel_setop(iVar6,2,uStack_ec);
        if (iVar4 != 0) {
            iVar9 = iVar4;
        }
    }
    else {
        iVar9 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return iVar9;
    }
    iVar7 = __stack_chk_fail(iVar9);
    puVar12 = &uStack_130;
    *extraout_x18_03 = sym.chan_inuse_show;
    pcStack_118 = sym.chan_inuse_show;
    iVar9 = sp_el0;
    iStack_128 = *(iVar9 + 0x5e0);
    uStack_130 = 0;
    iVar7 = *(*(iVar7 + 0x60) + 0x98);
    iVar9 = iVar7 + 0x38;
    puVar10 = puVar11;
    pppuStack_120 = &pppuStack_e0;
    _raw_spin_lock(iVar9);
    if (*(iVar7 + 0x44) < 1) {
        uVar16 = 0;
    }
    else {
        iVar5 = 0;
        uVar16 = 0;
        do {
            if (iVar5 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar8 = iVar7 + iVar5;
            iVar5 = iVar5 + 4;
            uVar16 = uVar16 | *(iVar8 + 0x8c) | *(iVar8 + 0x28c);
            uStack_130 = uVar16;
        } while (*(iVar7 + 0x44) * 4 - iVar5 != 0);
    }
    _raw_spin_unlock(iVar9);
    if (uVar16 << (-*(iVar7 + 0x40) & 0x3f) == 0) {
        iVar5 = 1;
        *puVar11 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar11);
        iVar5 = iVar4;
        puVar10 = puVar12;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_128) {
        iVar8 = __stack_chk_fail(iVar5);
        puVar12 = &uStack_170;
        *extraout_x18_04 = sym.chan_free_show;
        pcStack_158 = sym.chan_free_show;
        iVar5 = sp_el0;
        iStack_168 = *(iVar5 + 0x5e0);
        iVar5 = *(*(iVar8 + 0x60) + 0x98);
        puVar13 = puVar10;
        pppuStack_160 = &pppuStack_120;
        uStack_150 = uVar16;
        iStack_148 = iVar7;
        iStack_140 = iVar9;
        puStack_138 = puVar11;
        _raw_spin_lock(iVar5 + 0x38);
        uVar16 = *(iVar5 + 0x44);
        if (*(iVar5 + 0x44) < 1) {
            uVar14 = 0xffffffffffffffff;
        }
        else {
            uVar14 = 0;
            uVar15 = uVar16 - 0x81;
            iVar9 = iVar5;
            do {
                if (uVar15 < 0xffffffffffffff80) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                    (*pcVar3)();
                }
                puVar11 = iVar9 + 0x8c;
                uVar16 = uVar16 - 1;
                puVar1 = iVar9 + 0x28c;
                iVar9 = iVar9 + 4;
                uVar14 = uVar14 | *puVar11 | *puVar1;
            } while (uVar16 != 0);
            uVar14 = ~uVar14;
        }
        _raw_spin_unlock(iVar5 + 0x38);
        uStack_170 = uVar14;
        if (uVar14 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
            iVar9 = 1;
            *puVar10 = 10;
        }
        else {
            iVar4 = bitmap_print_to_pagebuf(1,puVar10,&uStack_170);
            iVar9 = iVar4;
            puVar13 = puVar12;
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) != iStack_168) {
            iVar9 = __stack_chk_fail(iVar9);
            *extraout_x18_05 = sym.chan_xtrigs_sel_show;
            iVar7 = *(*(iVar9 + 0x60) + 0x98);
            iVar9 = iVar7 + 0x38;
            _raw_spin_lock(iVar9);
            uVar2 = *(iVar7 + 0x81);
            _raw_spin_unlock(iVar9);
            iVar4 = sprintf(puVar13,"%ld\n",uVar2);
            return iVar4;
        }
        return iVar9;
    }
    return iVar5;
}


// ===== sym.chan_gate_disable_store @ 0x08007704 (size 156) =====

int64_t sym.chan_gate_disable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar16;
    ulong unaff_x30;
    uint64_t uStack_140;
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    int64_t iStack_118;
    int64_t iStack_110;
    uint32_t *puStack_108;
    uint64_t uStack_100;
    int64_t iStack_f8;
    ulong ***pppuStack_f0;
    code *pcStack_e8;
    uint32_t uStack_bc;
    int64_t iStack_b8;
    uchar ***pppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    puVar10 = &uStack_2c;
    uStack_2c = 0;
    iVar9 = arg3;
    iVar4 = kstrtoint(arg2,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_2c;
        iVar4 = sym.cti_channel_gate_op(arg1,1,uStack_2c);
        iVar7 = arg3;
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar7;
    }
    iVar5 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.chan_set_store;
    pcStack_48 = sym.chan_set_store;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puVar11 = &uStack_5c;
    uStack_5c = 0;
    iVar7 = iVar9;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg1;
    iStack_38 = arg3;
    iVar4 = kstrtoint(puVar10,0,puVar11);
    if (iVar4 == 0) {
        puVar11 = uStack_5c;
        iVar4 = sym.cti_channel_setop(iVar5,0,uStack_5c);
        iVar8 = iVar9;
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar6 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.chan_clear_store;
    pcStack_78 = sym.chan_clear_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    puVar10 = &uStack_8c;
    uStack_8c = 0;
    iVar8 = iVar7;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar5;
    iStack_68 = iVar9;
    iVar4 = kstrtoint(puVar11,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_8c;
        iVar4 = sym.cti_channel_setop(iVar6,1,uStack_8c);
        iVar9 = iVar7;
        if (iVar4 != 0) {
            iVar9 = iVar4;
        }
    }
    else {
        iVar9 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return iVar9;
    }
    iVar5 = __stack_chk_fail(iVar9);
    *extraout_x18_01 = sym.chan_pulse_store;
    pcStack_a8 = sym.chan_pulse_store;
    iVar9 = sp_el0;
    iStack_b8 = *(iVar9 + 0x5e0);
    puVar11 = &uStack_bc;
    uStack_bc = 0;
    pppuStack_b0 = &ppuStack_80;
    iStack_a0 = iVar6;
    iStack_98 = iVar7;
    iVar4 = kstrtoint(puVar10,0);
    if (iVar4 == 0) {
        puVar11 = uStack_bc;
        iVar4 = sym.cti_channel_setop(iVar5,2,uStack_bc);
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return iVar8;
    }
    iVar7 = __stack_chk_fail(iVar8);
    puVar12 = &uStack_100;
    *extraout_x18_02 = sym.chan_inuse_show;
    pcStack_e8 = sym.chan_inuse_show;
    iVar9 = sp_el0;
    iStack_f8 = *(iVar9 + 0x5e0);
    uStack_100 = 0;
    iVar7 = *(*(iVar7 + 0x60) + 0x98);
    iVar9 = iVar7 + 0x38;
    puVar10 = puVar11;
    pppuStack_f0 = &pppuStack_b0;
    _raw_spin_lock(iVar9);
    if (*(iVar7 + 0x44) < 1) {
        uVar16 = 0;
    }
    else {
        iVar5 = 0;
        uVar16 = 0;
        do {
            if (iVar5 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar8 = iVar7 + iVar5;
            iVar5 = iVar5 + 4;
            uVar16 = uVar16 | *(iVar8 + 0x8c) | *(iVar8 + 0x28c);
            uStack_100 = uVar16;
        } while (*(iVar7 + 0x44) * 4 - iVar5 != 0);
    }
    _raw_spin_unlock(iVar9);
    if (uVar16 << (-*(iVar7 + 0x40) & 0x3f) == 0) {
        iVar5 = 1;
        *puVar11 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar11);
        iVar5 = iVar4;
        puVar10 = puVar12;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_f8) {
        iVar8 = __stack_chk_fail(iVar5);
        puVar12 = &uStack_140;
        *extraout_x18_03 = sym.chan_free_show;
        pcStack_128 = sym.chan_free_show;
        iVar5 = sp_el0;
        iStack_138 = *(iVar5 + 0x5e0);
        iVar5 = *(*(iVar8 + 0x60) + 0x98);
        puVar13 = puVar10;
        pppuStack_130 = &pppuStack_f0;
        uStack_120 = uVar16;
        iStack_118 = iVar7;
        iStack_110 = iVar9;
        puStack_108 = puVar11;
        _raw_spin_lock(iVar5 + 0x38);
        uVar16 = *(iVar5 + 0x44);
        if (*(iVar5 + 0x44) < 1) {
            uVar14 = 0xffffffffffffffff;
        }
        else {
            uVar14 = 0;
            uVar15 = uVar16 - 0x81;
            iVar9 = iVar5;
            do {
                if (uVar15 < 0xffffffffffffff80) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                    (*pcVar3)();
                }
                puVar11 = iVar9 + 0x8c;
                uVar16 = uVar16 - 1;
                puVar1 = iVar9 + 0x28c;
                iVar9 = iVar9 + 4;
                uVar14 = uVar14 | *puVar11 | *puVar1;
            } while (uVar16 != 0);
            uVar14 = ~uVar14;
        }
        _raw_spin_unlock(iVar5 + 0x38);
        uStack_140 = uVar14;
        if (uVar14 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
            iVar9 = 1;
            *puVar10 = 10;
        }
        else {
            iVar4 = bitmap_print_to_pagebuf(1,puVar10,&uStack_140);
            iVar9 = iVar4;
            puVar13 = puVar12;
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) != iStack_138) {
            iVar9 = __stack_chk_fail(iVar9);
            *extraout_x18_04 = sym.chan_xtrigs_sel_show;
            iVar7 = *(*(iVar9 + 0x60) + 0x98);
            iVar9 = iVar7 + 0x38;
            _raw_spin_lock(iVar9);
            uVar2 = *(iVar7 + 0x81);
            _raw_spin_unlock(iVar9);
            iVar4 = sprintf(puVar13,"%ld\n",uVar2);
            return iVar4;
        }
        return iVar9;
    }
    return iVar5;
}


// ===== sym.chan_set_store @ 0x080077a0 (size 156) =====

int64_t sym.chan_set_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar16;
    ulong unaff_x30;
    uint64_t uStack_110;
    int64_t iStack_108;
    ulong ***pppuStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    int64_t iStack_e0;
    uint32_t *puStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uchar ***pppuStack_c0;
    code *pcStack_b8;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    puVar11 = &uStack_2c;
    uStack_2c = 0;
    iVar9 = arg3;
    iVar4 = kstrtoint(arg2,0,puVar11);
    if (iVar4 == 0) {
        puVar11 = uStack_2c;
        iVar4 = sym.cti_channel_setop(arg1,0,uStack_2c);
        iVar7 = arg3;
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar7;
    }
    iVar5 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.chan_clear_store;
    pcStack_48 = sym.chan_clear_store;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puVar10 = &uStack_5c;
    uStack_5c = 0;
    iVar7 = iVar9;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg1;
    iStack_38 = arg3;
    iVar4 = kstrtoint(puVar11,0,puVar10);
    if (iVar4 == 0) {
        puVar10 = uStack_5c;
        iVar4 = sym.cti_channel_setop(iVar5,1,uStack_5c);
        iVar8 = iVar9;
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar6 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.chan_pulse_store;
    pcStack_78 = sym.chan_pulse_store;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    puVar11 = &uStack_8c;
    uStack_8c = 0;
    ppuStack_80 = &puStack_50;
    iStack_70 = iVar5;
    iStack_68 = iVar9;
    iVar4 = kstrtoint(puVar10,0);
    if (iVar4 == 0) {
        puVar11 = uStack_8c;
        iVar4 = sym.cti_channel_setop(iVar6,2,uStack_8c);
        if (iVar4 != 0) {
            iVar7 = iVar4;
        }
    }
    else {
        iVar7 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_88) {
        return iVar7;
    }
    iVar7 = __stack_chk_fail(iVar7);
    puVar12 = &uStack_d0;
    *extraout_x18_01 = sym.chan_inuse_show;
    pcStack_b8 = sym.chan_inuse_show;
    iVar9 = sp_el0;
    iStack_c8 = *(iVar9 + 0x5e0);
    uStack_d0 = 0;
    iVar7 = *(*(iVar7 + 0x60) + 0x98);
    iVar9 = iVar7 + 0x38;
    puVar10 = puVar11;
    pppuStack_c0 = &ppuStack_80;
    _raw_spin_lock(iVar9);
    if (*(iVar7 + 0x44) < 1) {
        uVar16 = 0;
    }
    else {
        iVar5 = 0;
        uVar16 = 0;
        do {
            if (iVar5 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar8 = iVar7 + iVar5;
            iVar5 = iVar5 + 4;
            uVar16 = uVar16 | *(iVar8 + 0x8c) | *(iVar8 + 0x28c);
            uStack_d0 = uVar16;
        } while (*(iVar7 + 0x44) * 4 - iVar5 != 0);
    }
    _raw_spin_unlock(iVar9);
    if (uVar16 << (-*(iVar7 + 0x40) & 0x3f) == 0) {
        iVar5 = 1;
        *puVar11 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar11);
        iVar5 = iVar4;
        puVar10 = puVar12;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_c8) {
        return iVar5;
    }
    iVar8 = __stack_chk_fail(iVar5);
    puVar12 = &uStack_110;
    *extraout_x18_02 = sym.chan_free_show;
    pcStack_f8 = sym.chan_free_show;
    iVar5 = sp_el0;
    iStack_108 = *(iVar5 + 0x5e0);
    iVar5 = *(*(iVar8 + 0x60) + 0x98);
    puVar13 = puVar10;
    pppuStack_100 = &pppuStack_c0;
    uStack_f0 = uVar16;
    iStack_e8 = iVar7;
    iStack_e0 = iVar9;
    puStack_d8 = puVar11;
    _raw_spin_lock(iVar5 + 0x38);
    uVar16 = *(iVar5 + 0x44);
    if (*(iVar5 + 0x44) < 1) {
        uVar14 = 0xffffffffffffffff;
    }
    else {
        uVar14 = 0;
        uVar15 = uVar16 - 0x81;
        iVar9 = iVar5;
        do {
            if (uVar15 < 0xffffffffffffff80) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                (*pcVar3)();
            }
            puVar11 = iVar9 + 0x8c;
            uVar16 = uVar16 - 1;
            puVar1 = iVar9 + 0x28c;
            iVar9 = iVar9 + 4;
            uVar14 = uVar14 | *puVar11 | *puVar1;
        } while (uVar16 != 0);
        uVar14 = ~uVar14;
    }
    _raw_spin_unlock(iVar5 + 0x38);
    uStack_110 = uVar14;
    if (uVar14 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
        iVar9 = 1;
        *puVar10 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar10,&uStack_110);
        iVar9 = iVar4;
        puVar13 = puVar12;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_108) {
        iVar9 = __stack_chk_fail(iVar9);
        *extraout_x18_03 = sym.chan_xtrigs_sel_show;
        iVar7 = *(*(iVar9 + 0x60) + 0x98);
        iVar9 = iVar7 + 0x38;
        _raw_spin_lock(iVar9);
        uVar2 = *(iVar7 + 0x81);
        _raw_spin_unlock(iVar9);
        iVar4 = sprintf(puVar13,"%ld\n",uVar2);
        return iVar4;
    }
    return iVar9;
}


// ===== sym.chan_clear_store @ 0x0800783c (size 156) =====

int64_t sym.chan_clear_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint64_t *puVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar15;
    ulong unaff_x30;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar ***pppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    uint32_t *puStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    puVar9 = &uStack_2c;
    uStack_2c = 0;
    iVar8 = arg3;
    iVar4 = kstrtoint(arg2,0,puVar9);
    if (iVar4 == 0) {
        puVar9 = uStack_2c;
        iVar4 = sym.cti_channel_setop(arg1,1,uStack_2c);
        iVar6 = arg3;
        if (iVar4 != 0) {
            iVar6 = iVar4;
        }
    }
    else {
        iVar6 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar6;
    }
    iVar5 = __stack_chk_fail(iVar6);
    *extraout_x18 = sym.chan_pulse_store;
    pcStack_48 = sym.chan_pulse_store;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    puVar10 = &uStack_5c;
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg1;
    iStack_38 = arg3;
    iVar4 = kstrtoint(puVar9,0);
    if (iVar4 == 0) {
        puVar10 = uStack_5c;
        iVar4 = sym.cti_channel_setop(iVar5,2,uStack_5c);
        if (iVar4 != 0) {
            iVar8 = iVar4;
        }
    }
    else {
        iVar8 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar6 = __stack_chk_fail(iVar8);
    puVar11 = &uStack_a0;
    *extraout_x18_00 = sym.chan_inuse_show;
    pcStack_88 = sym.chan_inuse_show;
    iVar8 = sp_el0;
    iStack_98 = *(iVar8 + 0x5e0);
    uStack_a0 = 0;
    iVar6 = *(*(iVar6 + 0x60) + 0x98);
    iVar8 = iVar6 + 0x38;
    puVar9 = puVar10;
    ppuStack_90 = &puStack_50;
    _raw_spin_lock(iVar8);
    if (*(iVar6 + 0x44) < 1) {
        uVar15 = 0;
    }
    else {
        iVar5 = 0;
        uVar15 = 0;
        do {
            if (iVar5 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar7 = iVar6 + iVar5;
            iVar5 = iVar5 + 4;
            uVar15 = uVar15 | *(iVar7 + 0x8c) | *(iVar7 + 0x28c);
            uStack_a0 = uVar15;
        } while (*(iVar6 + 0x44) * 4 - iVar5 != 0);
    }
    _raw_spin_unlock(iVar8);
    if (uVar15 << (-*(iVar6 + 0x40) & 0x3f) == 0) {
        iVar5 = 1;
        *puVar10 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar10);
        iVar5 = iVar4;
        puVar9 = puVar11;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_98) {
        iVar7 = __stack_chk_fail(iVar5);
        puVar11 = &uStack_e0;
        *extraout_x18_01 = sym.chan_free_show;
        pcStack_c8 = sym.chan_free_show;
        iVar5 = sp_el0;
        iStack_d8 = *(iVar5 + 0x5e0);
        iVar5 = *(*(iVar7 + 0x60) + 0x98);
        puVar12 = puVar9;
        pppuStack_d0 = &ppuStack_90;
        uStack_c0 = uVar15;
        iStack_b8 = iVar6;
        iStack_b0 = iVar8;
        puStack_a8 = puVar10;
        _raw_spin_lock(iVar5 + 0x38);
        uVar15 = *(iVar5 + 0x44);
        if (*(iVar5 + 0x44) < 1) {
            uVar13 = 0xffffffffffffffff;
        }
        else {
            uVar13 = 0;
            uVar14 = uVar15 - 0x81;
            iVar8 = iVar5;
            do {
                if (uVar14 < 0xffffffffffffff80) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                    (*pcVar3)();
                }
                puVar10 = iVar8 + 0x8c;
                uVar15 = uVar15 - 1;
                puVar1 = iVar8 + 0x28c;
                iVar8 = iVar8 + 4;
                uVar13 = uVar13 | *puVar10 | *puVar1;
            } while (uVar15 != 0);
            uVar13 = ~uVar13;
        }
        _raw_spin_unlock(iVar5 + 0x38);
        uStack_e0 = uVar13;
        if (uVar13 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
            iVar8 = 1;
            *puVar9 = 10;
        }
        else {
            iVar4 = bitmap_print_to_pagebuf(1,puVar9,&uStack_e0);
            iVar8 = iVar4;
            puVar12 = puVar11;
        }
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) != iStack_d8) {
            iVar8 = __stack_chk_fail(iVar8);
            *extraout_x18_02 = sym.chan_xtrigs_sel_show;
            iVar6 = *(*(iVar8 + 0x60) + 0x98);
            iVar8 = iVar6 + 0x38;
            _raw_spin_lock(iVar8);
            uVar2 = *(iVar6 + 0x81);
            _raw_spin_unlock(iVar8);
            iVar4 = sprintf(puVar12,"%ld\n",uVar2);
            return iVar4;
        }
        return iVar8;
    }
    return iVar5;
}


// ===== sym.chan_pulse_store @ 0x080078d8 (size 156) =====

int64_t sym.chan_pulse_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uchar uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t *puVar10;
    uint32_t *puVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar15;
    ulong unaff_x30;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    uint32_t *puStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    puVar8 = &uStack_2c;
    uStack_2c = 0;
    iVar4 = kstrtoint(arg2,0);
    if (iVar4 == 0) {
        puVar8 = uStack_2c;
        iVar4 = sym.cti_channel_setop(arg1,2,uStack_2c);
        if (iVar4 != 0) {
            arg3 = iVar4;
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar5 = __stack_chk_fail(arg3);
    puVar10 = &uStack_70;
    *extraout_x18 = sym.chan_inuse_show;
    pcStack_58 = sym.chan_inuse_show;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_70 = 0;
    iVar5 = *(*(iVar5 + 0x60) + 0x98);
    iVar7 = iVar5 + 0x38;
    puVar9 = puVar8;
    puStack_60 = &stack0xffffffffffffffe0;
    _raw_spin_lock(iVar7);
    if (*(iVar5 + 0x44) < 1) {
        uVar15 = 0;
    }
    else {
        iVar12 = 0;
        uVar15 = 0;
        do {
            if (iVar12 == 0x200) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar3)();
            }
            iVar6 = iVar5 + iVar12;
            iVar12 = iVar12 + 4;
            uVar15 = uVar15 | *(iVar6 + 0x8c) | *(iVar6 + 0x28c);
            uStack_70 = uVar15;
        } while (*(iVar5 + 0x44) * 4 - iVar12 != 0);
    }
    _raw_spin_unlock(iVar7);
    if (uVar15 << (-*(iVar5 + 0x40) & 0x3f) == 0) {
        iVar12 = 1;
        *puVar8 = 10;
    }
    else {
        iVar4 = bitmap_print_to_pagebuf(1,puVar8);
        iVar12 = iVar4;
        puVar9 = puVar10;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_68) {
        iVar6 = __stack_chk_fail(iVar12);
        puVar10 = &uStack_b0;
        *extraout_x18_00 = sym.chan_free_show;
        pcStack_98 = sym.chan_free_show;
        iVar12 = sp_el0;
        iStack_a8 = *(iVar12 + 0x5e0);
        iVar12 = *(*(iVar6 + 0x60) + 0x98);
        puVar11 = puVar9;
        ppuStack_a0 = &puStack_60;
        uStack_90 = uVar15;
        iStack_88 = iVar5;
        iStack_80 = iVar7;
        puStack_78 = puVar8;
        _raw_spin_lock(iVar12 + 0x38);
        uVar15 = *(iVar12 + 0x44);
        if (*(iVar12 + 0x44) < 1) {
            uVar13 = 0xffffffffffffffff;
        }
        else {
            uVar13 = 0;
            uVar14 = uVar15 - 0x81;
            iVar7 = iVar12;
            do {
                if (uVar14 < 0xffffffffffffff80) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8007b74);
                    (*pcVar3)();
                }
                puVar8 = iVar7 + 0x8c;
                uVar15 = uVar15 - 1;
                puVar1 = iVar7 + 0x28c;
                iVar7 = iVar7 + 4;
                uVar13 = uVar13 | *puVar8 | *puVar1;
            } while (uVar15 != 0);
            uVar13 = ~uVar13;
        }
        _raw_spin_unlock(iVar12 + 0x38);
        uStack_b0 = uVar13;
        if (uVar13 << (-*(iVar12 + 0x40) & 0x3f) == 0) {
            iVar7 = 1;
            *puVar9 = 10;
        }
        else {
            iVar4 = bitmap_print_to_pagebuf(1,puVar9,&uStack_b0);
            iVar7 = iVar4;
            puVar11 = puVar10;
        }
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) != iStack_a8) {
            iVar7 = __stack_chk_fail(iVar7);
            *extraout_x18_01 = sym.chan_xtrigs_sel_show;
            iVar5 = *(*(iVar7 + 0x60) + 0x98);
            iVar7 = iVar5 + 0x38;
            _raw_spin_lock(iVar7);
            uVar2 = *(iVar5 + 0x81);
            _raw_spin_unlock(iVar7);
            iVar4 = sprintf(puVar11,"%ld\n",uVar2);
            return iVar4;
        }
        return iVar7;
    }
    return iVar12;
}


// ===== sym.chan_inuse_show @ 0x08007974 (size 260) =====

int64_t sym.chan_inuse_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uchar uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ushort *puVar8;
    uint64_t *puVar9;
    ushort *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar9 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_40 = 0;
    iVar14 = *(*(arg1 + 0x60) + 0x98);
    iVar7 = iVar14 + 0x38;
    puVar8 = arg2;
    _raw_spin_lock(iVar7);
    if (*(iVar14 + 0x44) < 1) {
        uVar15 = 0;
    }
    else {
        iVar11 = 0;
        uVar15 = 0;
        do {
            if (iVar11 == 0x200) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007a74);
                (*pcVar4)();
            }
            iVar6 = iVar14 + iVar11;
            iVar11 = iVar11 + 4;
            uVar15 = uVar15 | *(iVar6 + 0x8c) | *(iVar6 + 0x28c);
            uStack_40 = uVar15;
        } while (*(iVar14 + 0x44) * 4 - iVar11 != 0);
    }
    _raw_spin_unlock(iVar7);
    if (uVar15 << (-*(iVar14 + 0x40) & 0x3f) == 0) {
        iVar11 = 1;
        *arg2 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,arg2);
        iVar11 = iVar5;
        puVar8 = puVar9;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar11;
    }
    iVar6 = __stack_chk_fail(iVar11);
    puVar9 = &uStack_80;
    *extraout_x18 = sym.chan_free_show;
    pcStack_68 = sym.chan_free_show;
    iVar11 = sp_el0;
    iStack_78 = *(iVar11 + 0x5e0);
    iVar11 = *(*(iVar6 + 0x60) + 0x98);
    puVar10 = puVar8;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar15;
    iStack_58 = iVar14;
    iStack_50 = iVar7;
    iStack_48 = arg2;
    _raw_spin_lock(iVar11 + 0x38);
    uVar15 = *(iVar11 + 0x44);
    if (*(iVar11 + 0x44) < 1) {
        uVar12 = 0xffffffffffffffff;
    }
    else {
        uVar12 = 0;
        uVar13 = uVar15 - 0x81;
        iVar7 = iVar11;
        do {
            if (uVar13 < 0xffffffffffffff80) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007b74);
                (*pcVar4)();
            }
            puVar1 = iVar7 + 0x8c;
            uVar15 = uVar15 - 1;
            puVar2 = iVar7 + 0x28c;
            iVar7 = iVar7 + 4;
            uVar12 = uVar12 | *puVar1 | *puVar2;
        } while (uVar15 != 0);
        uVar12 = ~uVar12;
    }
    _raw_spin_unlock(iVar11 + 0x38);
    uStack_80 = uVar12;
    if (uVar12 << (-*(iVar11 + 0x40) & 0x3f) == 0) {
        iVar7 = 1;
        *puVar8 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,puVar8,&uStack_80);
        iVar7 = iVar5;
        puVar10 = puVar9;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_78) {
        iVar7 = __stack_chk_fail(iVar7);
        *extraout_x18_00 = sym.chan_xtrigs_sel_show;
        iVar14 = *(*(iVar7 + 0x60) + 0x98);
        iVar7 = iVar14 + 0x38;
        _raw_spin_lock(iVar7);
        uVar3 = *(iVar14 + 0x81);
        _raw_spin_unlock(iVar7);
        iVar5 = sprintf(puVar10,"%ld\n",uVar3);
        return iVar5;
    }
    return iVar7;
}


// ===== sym.chan_free_show @ 0x08007a78 (size 256) =====

int64_t sym.chan_free_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uchar uVar3;
    code *pcVar4;
    int iVar5;
    uchar *puVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar7 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(*(arg1 + 0x60) + 0x98);
    puVar6 = arg2;
    _raw_spin_lock(iVar11 + 0x38);
    uVar8 = *(iVar11 + 0x44);
    if (*(iVar11 + 0x44) < 1) {
        uVar9 = 0xffffffffffffffff;
    }
    else {
        uVar9 = 0;
        uVar10 = uVar8 - 0x81;
        iVar12 = iVar11;
        do {
            if (uVar10 < 0xffffffffffffff80) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007b74);
                (*pcVar4)();
            }
            puVar1 = iVar12 + 0x8c;
            uVar8 = uVar8 - 1;
            puVar2 = iVar12 + 0x28c;
            iVar12 = iVar12 + 4;
            uVar9 = uVar9 | *puVar1 | *puVar2;
        } while (uVar8 != 0);
        uVar9 = ~uVar9;
    }
    _raw_spin_unlock(iVar11 + 0x38);
    uStack_40 = uVar9;
    if (uVar9 << (-*(iVar11 + 0x40) & 0x3f) == 0) {
        iVar11 = 1;
        *arg2 = 10;
    }
    else {
        iVar5 = bitmap_print_to_pagebuf(1,arg2,&uStack_40);
        iVar11 = iVar5;
        puVar6 = puVar7;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return iVar11;
    }
    iVar11 = __stack_chk_fail(iVar11);
    *extraout_x18 = sym.chan_xtrigs_sel_show;
    iVar12 = *(*(iVar11 + 0x60) + 0x98);
    iVar11 = iVar12 + 0x38;
    _raw_spin_lock(iVar11);
    uVar3 = *(iVar12 + 0x81);
    _raw_spin_unlock(iVar11);
    iVar5 = sprintf(puVar6,"%ld\n",uVar3);
    return iVar5;
}


// ===== sym.chan_xtrigs_sel_show @ 0x08007b78 (size 108) =====

int64_t sym.chan_xtrigs_sel_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = iVar4 + 0x38;
    _raw_spin_lock(iVar1);
    uVar2 = *(iVar4 + 0x81);
    _raw_spin_unlock(iVar1);
    iVar3 = sprintf(arg2,"%ld\n",uVar2);
    return iVar3;
}


// ===== sym.chan_xtrigs_sel_store @ 0x08007be4 (size 192) =====

int64_t sym.chan_xtrigs_sel_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint64_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar6 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    iVar8 = *(*(arg1 + 0x60) + 0x98);
    iVar4 = kstrtoull(arg2,0);
    if ((iVar4 == 0) && (uStack_40 <= *(iVar8 + 0x40) + -1)) {
        _raw_spin_lock(iVar8 + 0x38);
        *(iVar8 + 0x81) = uStack_40;
        _raw_spin_unlock(iVar8 + 0x38);
    }
    else {
        arg3 = -0x16;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.chan_xtrigs_in_show;
    iVar8 = *(*(iVar8 + 0x60) + 0x98);
    uVar1 = *(iVar8 + 0x44);
    if (uVar1 < 1) {
        iVar4 = 0;
    }
    else {
        uVar2 = *(iVar8 + 0x81);
        uVar7 = 0;
        iVar4 = 0;
        do {
            if (uVar7 == 0x80) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007d70);
                (*pcVar3)();
            }
            if ((*(iVar8 + 0x8c + uVar7 * 4) & 1L << (uVar2 & 0x3f)) != 0) {
                iVar5 = sprintf(puVar6 + iVar4,0x80012bc,uVar7 & 0xffffffff);
                iVar4 = iVar5 + iVar4;
            }
            uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
    }
    *(puVar6 + iVar4) = 10;
    return iVar4 + 1;
}


// ===== sym.chan_xtrigs_in_show @ 0x08007ca4 (size 204) =====

int64_t sym.chan_xtrigs_in_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int iVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 0x60) + 0x98);
    uVar1 = *(iVar5 + 0x44);
    if (uVar1 < 1) {
        iVar7 = 0;
    }
    else {
        uVar2 = *(iVar5 + 0x81);
        uVar6 = 0;
        iVar7 = 0;
        do {
            if (uVar6 == 0x80) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007d70);
                (*pcVar3)();
            }
            if ((*(iVar5 + 0x8c + uVar6 * 4) & 1L << (uVar2 & 0x3f)) != 0) {
                iVar4 = sprintf(noname_1,arg2 + iVar7,0x80012bc,uVar6 & 0xffffffff);
                iVar7 = iVar4 + iVar7;
                noname_1 = extraout_q0;
            }
            uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
    }
    *(arg2 + iVar7) = 10;
    return iVar7 + 1;
}


// ===== sym.chan_xtrigs_out_show @ 0x08007d70 (size 204) =====

int64_t sym.chan_xtrigs_out_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int iVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 0x60) + 0x98);
    uVar1 = *(iVar5 + 0x44);
    if (uVar1 < 1) {
        iVar7 = 0;
    }
    else {
        uVar2 = *(iVar5 + 0x81);
        uVar6 = 0;
        iVar7 = 0;
        do {
            if (uVar6 == 0x80) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8007e3c);
                (*pcVar3)();
            }
            if ((*(iVar5 + 0x28c + uVar6 * 4) & 1L << (uVar2 & 0x3f)) != 0) {
                iVar4 = sprintf(noname_1,arg2 + iVar7,0x80012bc,uVar6 & 0xffffffff);
                iVar7 = iVar4 + iVar7;
                noname_1 = extraout_q0;
            }
            uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
    }
    *(arg2 + iVar7) = 10;
    return iVar7 + 1;
}


// ===== sym.chan_xtrigs_reset_store @ 0x08007e3c (size 256) =====

int64_t sym.chan_xtrigs_reset_store(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x60) + 0x98);
    _raw_spin_lock(arg1_00 + 0x38);
    if (0 < *(arg1_00 + 0x44)) {
        uVar3 = 0;
        do {
            if (uVar3 == 0x80) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8007f3c);
                (*pcVar2)();
            }
            iVar1 = arg1_00 + uVar3 * 4;
            *(iVar1 + 0x8c) = 0;
            *(iVar1 + 0x28c) = 0;
            if (uVar3 == *(*(arg1_00 + 0x4b8) + 8)) {
                sym.cti_trigin_gpio_disable(arg1_00);
            }
            if (uVar3 == *(*(arg1_00 + 0x4c0) + 8)) {
                sym.cti_trigout_gpio_disable(arg1_00);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(arg1_00 + 0x44));
    }
    *(arg1_00 + 0x490) = 0;
    *(arg1_00 + 0x84) = 0;
    *(arg1_00 + 0x88) = 0;
    *(arg1_00 + 0x81) = 0;
    *(arg1_00 + 0x48c) = 0xffffffffffffffff >> (-*(arg1_00 + 0x40) & 0x3f);
    if ((*(arg1_00 + 0x4d) != '\0') && (*(arg1_00 + 0x4c) != '\0')) {
        sym.cti_write_all_hw_regs(arg1_00);
    }
    _raw_spin_unlock(arg1_00 + 0x38);
    return arg2;
}


// ===== sym.init_module @ 0x08007f44 (size 92) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = amba_driver_register(obj.cti_driver);
    if (iVar1 != 0) {
        _printk(0x800126c);
    }
    coresight_set_cti_ops(reloc.cti_add_assoc_to_csdev.0b2860deecf0024ca480057a9d0b4816.cfi_jt);
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08007fa0 (size 48) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_remove_cti_ops();
    amba_driver_unregister(obj.cti_driver);
    return;
}

