// decompiled from coresight by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1940) =====

//WARNING: Switch with 1 destination removed at 0x08006258

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1a95f7cc941e07d9) {
        if (arg1 < -0x45ee7ff0d9813a84) {
            if (arg1 < -0x5c23742f35b32fab) {
                if (arg1 < -0x6867729b3be4e2a0) {
                    if (arg1 == -0x7c18270728e5bd21) {
                        pcVar2 = sym.coresight_disable_path.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x7ab3b44e14e4ae67) goto code_r0x08006218;
                        pcVar2 = sym.coresight_set_assoc_ectdev_mutex.cfi_jt;
                    }
                }
                else if (arg1 == -0x6867729b3be4e2a0) {
                    pcVar2 = sym.cscfg_register_csdev.cfi_jt;
                }
                else {
                    if (arg1 == -0x66d421a09845f9f8) {
                        if ((pcVar1 + -0x8002980 >> 3 | pcVar1 << 0x3d) < 0xf) {
                            return;
                        }
                        goto code_r0x08006218;
                    }
                    if (arg1 != -0x662ac840ce4f74a6) goto code_r0x08006218;
                    pcVar2 = sym.cscfg_load_config_sets.cfi_jt;
                }
            }
            else if (arg1 < -0x550b9e52359ac614) {
                if (arg1 == -0x5c23742f35b32fab) {
                    pcVar2 = sym.coresight_alloc_device_name.cfi_jt;
                }
                else {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x08006218;
                    pcVar2 = sym.coresight_get_cpu.cfi_jt;
                }
            }
            else if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.free_event_data.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
            }
            else if (arg1 == -0x528edbf716122826) {
                pcVar2 = sym.reset_source_sink_store.7cdf4684e306b03727f219798c76cd56.cfi_jt;
            }
            else {
                if (arg1 != -0x46e4198d82690985) goto code_r0x08006218;
                pcVar2 = sym.etm_event_init.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
            }
        }
        else if (arg1 < -0x24709a60bea86fe2) {
            if (arg1 < -0x2d1ef4d8549a89e5) {
                if (arg1 != -0x45ee7ff0d9813a84) {
                    if (arg1 != -0x456f1acda78e3a69) goto code_r0x08006218;
                    pcVar2 = sym.coresight_enabled_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt;
                    goto code_r0x08002750;
                }
                pcVar2 = sym.coresight_remove_sysfs_link.cfi_jt;
            }
            else {
                if (arg1 == -0x2d1ef4d8549a89e5) {
                    if ((pcVar1 + -0x8002958 >> 3 | pcVar1 << 0x3d) < 5) {
                        return;
                    }
                    goto code_r0x08006218;
                }
                if (arg1 == -0x2becf0b2c07d5f76) {
                    pcVar2 = sym.etm_perf_symlink.cfi_jt;
                }
                else {
                    if (arg1 != -0x2bde3f224c24837b) goto code_r0x08006218;
                    pcVar2 = sym.cscfg_deactivate_config.cfi_jt;
                }
            }
        }
        else if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x24709a60bea86fe2) {
                pcVar2 = sym.coresight_loses_context_with_cpu.cfi_jt;
            }
            else {
                if (arg1 != 0x1196c13cb1cd802) goto code_r0x08006218;
                pcVar2 = sym.etm_event_add.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 == 0xeeff0ad281f3bef) {
                    pcVar2 = sym.cscfg_feat_description_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt;
                    goto code_r0x080026f8;
                }
                if (arg1 != 0x10e66a4aa457de25) goto code_r0x08006218;
                pcVar2 = sym.etm_event_del.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
                goto code_r0x08002750;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x4f27a3949e6efaa1) {
        if (arg1 < 0x34e3d70bc7a101f5) {
            if (arg1 < 0x2262dd4780ec9206) {
                if (arg1 != 0x1a95f7cc941e07d9) {
                    if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08006218;
                    pcVar2 = sym.enable_sink_store.7cdf4684e306b03727f219798c76cd56.cfi_jt;
                    goto code_r0x08002750;
                }
                pcVar2 = sym.coresight_get_platform_data.cfi_jt;
            }
            else if (arg1 == 0x2262dd4780ec9206) {
                pcVar2 = sym.coresight_set_percpu_sink.cfi_jt;
            }
            else if (arg1 == 0x249f8b9a5d247f16) {
                pcVar2 = sym.coresight_set_cti_ops.cfi_jt;
            }
            else {
                if (arg1 != 0x2db7671219a1cbff) goto code_r0x08006218;
                pcVar2 = sym.cscfg_csdev_enable_active_config.cfi_jt;
            }
        }
        else if (arg1 < 0x3a4aa1703f90ff56) {
            if (arg1 == 0x34e3d70bc7a101f5) {
                pcVar2 = sym.etm_event_read.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
                goto code_r0x08002750;
            }
            if (arg1 != 0x3972d2eacd7a3ebc) goto code_r0x08006218;
            pcVar2 = sym.coresight_set_csr_ops.cfi_jt;
        }
        else {
            if (arg1 == 0x3a4aa1703f90ff56) {
                pcVar2 = sym.__typeid__ZTSFvP16coresight_deviceE_global_addr;
code_r0x080026f8:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 7) {
                    return;
                }
                goto code_r0x08006218;
            }
            if (arg1 == 0x49c1cb99fa586144) {
                pcVar2 = sym.etm_addr_filters_validate.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
            }
            else {
                if (arg1 != 0x4c550309df1cf4c1) goto code_r0x08006218;
                pcVar2 = sym.__typeid__ZTSFvPvE_global_addr;
            }
        }
    }
    else if (arg1 < 0x63cbeba280ab7603) {
        if (arg1 < 0x5b25abe30df04fc4) {
            if (arg1 == 0x4f27a3949e6efaa1) {
                pcVar2 = sym.etm_setup_aux.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
            }
            else {
                if (arg1 != 0x5834b8cbc65de9c1) goto code_r0x08006218;
                pcVar2 = sym.coresight_find_csdev_by_fwnode.cfi_jt;
            }
        }
        else if (arg1 == 0x5b25abe30df04fc4) {
            pcVar2 = sym.cscfg_activate_config.cfi_jt;
        }
        else {
            if (arg1 == 0x5b83a3fd302a5421) {
                if ((pcVar1 + -0x80027f8 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08006218;
            }
            if (arg1 != 0x5e5abc5d4e4f5823) goto code_r0x08006218;
            pcVar2 = sym.coresight_add_sysfs_link.cfi_jt;
        }
    }
    else {
        if (0x76439dfb02cc8755 < arg1) {
            if (arg1 == 0x76439dfb02cc8756) {
                pcVar2 = sym.__typeid__ZTSFiP16coresight_deviceE_global_addr;
            }
            else {
                if (arg1 == 0x7af7fc99d4cd4338) {
                    pcVar2 = sym.coresight_register.cfi_jt;
                    goto code_r0x08002784;
                }
                if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08006218;
                pcVar2 = sym.coresight_remove_cti_ops.cfi_jt;
            }
code_r0x08002750:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08006218;
        }
        if (arg1 == 0x63cbeba280ab7603) {
            pcVar2 = sym.cscfg_param_value_store.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt;
        }
        else if (arg1 == 0x67e6aac40c6d6ff6) {
            pcVar2 = sym.coresight_timeout.cfi_jt;
        }
        else {
            if (arg1 != 0x68246a4e7133c66e) goto code_r0x08006218;
            pcVar2 = sym.coresight_get_percpu_sink.cfi_jt;
        }
    }
code_r0x08002784:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08006218:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800626c);
    (*pcVar1)();
}


// ===== sym.coresight_get_cpu.cfi_jt @ 0x080027a0 (size 8) =====

ulong sym.coresight_get_cpu.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(param_1 + 0x2f8);
    uVar1 = 0;
    if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
        if (*(uVar3 + 8) == of_fwnode_ops) {
            if ((*(param_1 + 0x2f0) == 0) || (iVar2 = of_parse_phandle(*(param_1 + 0x2f0),0x8001783,0), iVar2 == 0))
            {
                uVar1 = 0xffffffed;
            }
            else {
                uVar1 = of_cpu_node_to_id();
            }
        }
        else {
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.coresight_add_sysfs_link.cfi_jt @ 0x080027a8 (size 8) =====

int sym.coresight_add_sysfs_link.cfi_jt(int64_t *param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 == NULL) || (iVar2 = *param_1, iVar2 == 0)) || (iVar3 = param_1[2], iVar3 == 0)) ||
       (((param_1[1] == 0 || (param_1[3] == 0)) || ((*(iVar2 + 0x3f4) == '\0' || (*(iVar3 + 0x3f4) == '\0')))))) {
        iVar1 = -0x16;
    }
    else {
        iVar1 = sysfs_add_link_to_group(iVar2 + 0x38,_segment.ehdr,iVar3 + 0x38);
        if (iVar1 == 0) {
            iVar1 = sysfs_add_link_to_group(param_1[2] + 0x38,_segment.ehdr,*param_1 + 0x38,param_1[3]);
            iVar2 = *param_1;
            if (iVar1 == 0) {
                *(iVar2 + 0x3f0) = *(iVar2 + 0x3f0) + 1;
                *(param_1[2] + 0x3f0) = *(param_1[2] + 0x3f0) + 1;
            }
            else {
                sysfs_remove_link_from_group(iVar2 + 0x38,_segment.ehdr,param_1[1]);
            }
        }
    }
    return iVar1;
}


// ===== sym.__typeid__ZTSFvPvE_global_addr @ 0x080027b0 (size 8) =====

void sym.__typeid__ZTSFvPvE_global_addr(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_work_on(0x20,_mutex_unlock,param_1);
    return;
}


// ===== sym.coresight_disable_path.cfi_jt @ 0x080027b8 (size 8) =====

void sym.coresight_disable_path.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.coresight_disable_path_from.llvm.6468340166659988919(param_1,0);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080027c0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bus_register(obj.coresight_bustype);
    if (iVar1 == 0) {
        iVar1 = sym.etm_perf_init();
        if (iVar1 == 0) {
            iVar1 = sym.cscfg_init();
            if (iVar1 == 0) {
                return 0;
            }
            perf_pmu_unregister(obj.etm_pmu.llvm.15995262632889499196);
        }
        bus_unregister(obj.coresight_bustype);
    }
    return iVar1;
}


// ===== sym.cscfg_register_csdev.cfi_jt @ 0x080027c8 (size 8) =====

int sym.cscfg_register_csdev.cfi_jt(int64_t param_1,uint32_t param_2,int64_t *param_3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x28);
    if (piVar4 == NULL) {
        iVar3 = -0xc;
        goto code_r0x080085f4;
    }
    iVar7 = *param_3;
    *piVar4 = param_1;
    piVar2 = piVar4 + 3;
    *(piVar4 + 1) = param_2;
    iVar6 = _segment.ehdr;
    piVar4[2] = iVar7;
    iVar7 = *(iVar6 + 0x390);
    piVar1 = iVar6 + 0x390;
    uVar5 = __list_add_valid(piVar2,piVar1,iVar7);
    if ((uVar5 & 1) != 0) {
        *(iVar7 + 8) = piVar2;
        piVar4[3] = iVar7;
        piVar4[4] = piVar1;
        *piVar1 = piVar2;
    }
    *(param_1 + 0x3f8) = param_1 + 0x3f8;
    *(param_1 + 0x400) = param_1 + 0x3f8;
    *(param_1 + 0x408) = param_1 + 0x408;
    *(param_1 + 0x410) = param_1 + 0x408;
    *(param_1 + 0x418) = 0;
    if (*param_3 != 0) {
        iVar6 = _segment.ehdr;
        for (puVar8 = *(_segment.ehdr + 0x3a0); iVar6 + 0x3a0 != puVar8; puVar8 = *puVar8) {
            if (((*(puVar8 + 2) & param_2) != 0) &&
               (iVar3 = sym.cscfg_load_feat_csdev(param_1,puVar8 + -2,param_3), iVar6 = _segment.ehdr, iVar3 != 0))
            goto code_r0x08008598;
        }
        piVar4 = *(iVar6 + 0x3b0);
        for (; iVar6 + 0x3b0 != piVar4; piVar4 = *piVar4) {
            iVar3 = sym.cscfg_add_csdev_cfg(param_1,piVar4 + -2);
            if (iVar3 != 0) {
                piVar4 = _segment.ehdr + 0x390;
                goto code_r0x08008570;
            }
            iVar6 = _segment.ehdr;
        }
        iVar6 = *(param_1 + 0xa8);
        if (iVar6 == 0) {
            iVar6 = *(param_1 + 0x38);
        }
        _printk(0x800148a,iVar6);
        iVar3 = 0;
        goto code_r0x080085f4;
    }
    iVar3 = -0x16;
code_r0x08008598:
    piVar4 = _segment.ehdr + 0x390;
    do {
        piVar4 = *piVar4;
        if (_segment.ehdr + 0x390 == piVar4) goto code_r0x080085f4;
    } while (piVar4[-3] != param_1);
    goto code_r0x080085bc;
    while (piVar4[-3] != param_1) {
code_r0x08008570:
        piVar4 = *piVar4;
        if (_segment.ehdr + 0x390 == piVar4) goto code_r0x080085f4;
    }
code_r0x080085bc:
    uVar5 = __list_del_entry_valid(piVar4);
    if ((uVar5 & 1) != 0) {
        iVar6 = *piVar4;
        piVar2 = piVar4[1];
        *(iVar6 + 8) = piVar2;
        *piVar2 = iVar6;
    }
    *piVar4 = -0x2152ffffffffff00;
    piVar4[1] = -0x2152fffffffffede;
    kfree(piVar4 + -3);
code_r0x080085f4:
    mutex_unlock(obj.cscfg_mutex);
    return iVar3;
}


// ===== sym.etm_addr_filters_validate.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080027d0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007044)

uint sym.etm_addr_filters_validate.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(int64_t *param_1)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    int64_t *piVar4;
    int64_t iVar5;
    
    piVar4 = *param_1;
    if (piVar4 == param_1) {
        return 0;
    }
    iVar5 = piVar4[5];
    if ((iVar5 != 0) && (*(piVar4 + 6) < 2)) {
        return 0xffffffa1;
    }
    piVar4 = *piVar4;
    if (piVar4 == param_1) {
        return 0;
    }
    bVar3 = iVar5 != 0;
    if (piVar4[5] == 0) {
        bVar1 = true;
        bVar2 = bVar1;
        if (!bVar3) goto code_r0x0800705c;
    }
    else {
        if (*(piVar4 + 6) < 2) {
            return 0xffffffa1;
        }
        bVar3 = true;
        bVar2 = iVar5 == 0;
    }
    bVar1 = false;
    if (bVar2) {
        return 0xffffffa1;
    }
code_r0x0800705c:
    piVar4 = *piVar4;
    if (piVar4 != param_1) {
        if (piVar4[5] == 0) {
            bVar1 = true;
        }
        else {
            if (*(piVar4 + 6) < 2) {
                return 0xffffffa1;
            }
            bVar3 = true;
        }
        if ((bVar3) && (bVar1)) {
            return 0xffffffa1;
        }
        piVar4 = *piVar4;
        if (piVar4 != param_1) {
            if (piVar4[5] == 0) {
                bVar1 = true;
            }
            else {
                if (*(piVar4 + 6) < 2) {
                    return 0xffffffa1;
                }
                bVar3 = true;
            }
            if ((bVar3) && (bVar1)) {
                return 0xffffffa1;
            }
            piVar4 = *piVar4;
            if (piVar4 != param_1) {
                if (piVar4[5] == 0) {
                    bVar1 = true;
                }
                else {
                    if (*(piVar4 + 6) < 2) {
                        return 0xffffffa1;
                    }
                    bVar3 = true;
                }
                if ((bVar3) && (bVar1)) {
                    return 0xffffffa1;
                }
                piVar4 = *piVar4;
                if (piVar4 != param_1) {
                    if (piVar4[5] == 0) {
                        bVar1 = true;
                    }
                    else {
                        if (*(piVar4 + 6) < 2) {
                            return 0xffffffa1;
                        }
                        bVar3 = true;
                    }
                    if ((bVar3) && (bVar1)) {
                        return 0xffffffa1;
                    }
                    piVar4 = *piVar4;
                    if (piVar4 != param_1) {
                        if (piVar4[5] == 0) {
                            bVar1 = true;
                        }
                        else {
                            if (*(piVar4 + 6) < 2) {
                                return 0xffffffa1;
                            }
                            bVar3 = true;
                        }
                        if ((bVar3) && (bVar1)) {
                            return 0xffffffa1;
                        }
                        piVar4 = *piVar4;
                        if (piVar4 != param_1) {
                            if (piVar4[5] == 0) {
                                bVar1 = true;
                            }
                            else {
                                if (*(piVar4 + 6) < 2) {
                                    return 0xffffffa1;
                                }
                                bVar3 = true;
                            }
                            if ((bVar3) && (bVar1)) {
                                return 0xffffffa1;
                            }
                            if (*piVar4 != param_1) {
                                return 0xffffffa1;
                            }
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}


// ===== sym.cscfg_csdev_enable_active_config.cfi_jt @ 0x080027d8 (size 8) =====

int sym.cscfg_csdev_enable_active_config.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t *arg1;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x3c0) == 0) {
code_r0x08008a4c:
        iVar2 = 0;
    }
    else {
        iVar1 = param_1 + 0x418;
        uVar3 = _raw_spin_lock_irqsave(iVar1);
        for (piVar4 = *(param_1 + 0x408); param_1 + 0x408 != piVar4; piVar4 = *piVar4) {
            arg1 = piVar4 + -3;
            if ((*(*arg1 + 0x48) != 0) && (*(*(*arg1 + 0x40) + 0x20) == param_2)) {
                *(param_1 + 0x420) = arg1;
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                if (arg1 == NULL) goto code_r0x08008a4c;
                iVar2 = sym.cscfg_csdev_enable_config(arg1,param_3);
                if (iVar2 != 0) {
                    return iVar2;
                }
                uVar3 = _raw_spin_lock_irqsave(iVar1);
                if (*(param_1 + 0x420) == 0) {
                    iVar2 = -0x10;
                }
                else {
                    iVar2 = 0;
                    *(piVar4 + -1) = 1;
                }
                goto code_r0x080089c8;
            }
        }
        iVar2 = 0;
code_r0x080089c8:
        _raw_spin_unlock_irqrestore(iVar1,uVar3);
    }
    return iVar2;
}


// ===== sym.etm_perf_symlink.cfi_jt @ 0x080027e0 (size 8) =====

void sym.etm_perf_symlink.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    unkbyte7 Stack_48;
    uint uStack_41;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    Stack_48 = 0;
    uStack_41 = 0;
    pcVar4 = **(*(param_1 + 0x18) + 0x10);
    if (2 < (pcVar4 + -0x8002890 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar4,0x8001170);
    }
    uVar2 = (*pcVar4)(param_1);
    uVar3 = _segment.ehdr;
    sprintf(&Stack_48,"cpu%d",uVar2);
    if (obj.etm_perf_up == 0x1) {
        if ((param_2 & 1) == 0) {
            sysfs_remove_link(uVar3,&Stack_48);
            if (0x1f < uVar2) goto code_r0x080063b8;
            param_1 = 0;
        }
        else {
            uVar3 = sysfs_create_link(uVar3,param_1 + 0x38,&Stack_48);
            if (uVar3 != 0) goto code_r0x08006360;
            if (0x1f < uVar2) goto code_r0x080063b8;
        }
        uVar3 = 0;
        *(obj.csdev_src + *(__per_cpu_offset + uVar2 * 8)) = param_1;
    }
    else {
        uVar3 = 0xfffffdfb;
    }
code_r0x08006360:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x080063b8:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80063bc);
    (*pcVar4)();
}


// ===== sym.coresight_find_csdev_by_fwnode.cfi_jt @ 0x080027e8 (size 8) =====

int64_t sym.coresight_find_csdev_by_fwnode.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bus_find_device(obj.coresight_bustype,0,param_1,sym.device_match_fwnode.cfi_jt);
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = iVar1 + -0x38;
        put_device();
    }
    return iVar1;
}


// ===== sym.cscfg_load_config_sets.cfi_jt @ 0x080027f0 (size 8) =====

int sym.cscfg_load_config_sets.cfi_jt(int64_t *param_1,int64_t *param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int iVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    if ((param_2 != NULL) && (iVar7 = *param_2, iVar7 != 0)) {
        iVar13 = 0;
        piVar5 = param_2;
        do {
            iVar4 = _segment.ehdr;
            for (puVar9 = *(_segment.ehdr + 0x390); iVar4 + 0x390 != puVar9; puVar9 = *puVar9) {
                if (((*(iVar7 + 0x20) & *(puVar9 + -2)) != 0) &&
                   (iVar2 = sym.cscfg_load_feat_csdev(puVar9[-3],iVar7,puVar9 + -1), iVar4 = _segment.ehdr,
                   iVar2 != 0)) goto code_r0x080083b4;
            }
            iVar10 = *(iVar4 + 0x3a0);
            iVar11 = iVar7 + 0x10;
            piVar6 = iVar4 + 0x3a0;
            uVar3 = __list_add_valid(iVar11,piVar6,iVar10);
            if ((uVar3 & 1) != 0) {
                *(iVar10 + 8) = iVar11;
                *(iVar7 + 0x10) = iVar10;
                *(iVar7 + 0x18) = piVar6;
                *piVar6 = iVar11;
            }
            iVar2 = sym.cscfg_configfs_add_feature(*piVar5);
            if (iVar2 != 0) {
code_r0x080083b4:
                puVar9 = *piVar5;
                uVar8 = 0x8001822;
                goto code_r0x080083c4;
            }
            iVar13 = iVar13 + 1;
            piVar5 = param_2 + iVar13;
            iVar7 = *piVar5;
        } while (iVar7 != 0);
    }
    if ((param_1 == NULL) || (iVar7 = *param_1, iVar7 == 0)) {
        iVar2 = 0;
    }
    else {
        iVar13 = 0;
        piVar5 = param_1;
        do {
            iVar4 = _segment.ehdr;
            uVar1 = *(iVar7 + 0x20);
            if (0 < uVar1) {
                piVar12 = *(_segment.ehdr + 0x3a0);
                piVar6 = _segment.ehdr + 0x3a0;
                if (piVar6 != piVar12) {
                    uVar3 = 0;
                    iVar11 = *(iVar7 + 0x28);
                    do {
                        uVar8 = *(iVar11 + uVar3 * 8);
                        piVar14 = piVar12;
                        while (iVar2 = strcmp(piVar14[-2],uVar8), iVar2 != 0) {
                            piVar14 = *piVar14;
                            if (piVar6 == piVar14) goto code_r0x0800839c;
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 != uVar1);
                    goto code_r0x080082f4;
                }
code_r0x0800839c:
                iVar2 = -0x16;
code_r0x080083a4:
                puVar9 = *piVar5;
                uVar8 = 0x8001261;
code_r0x080083c4:
                _printk(uVar8,*puVar9);
                break;
            }
code_r0x080082f4:
            piVar6 = *(iVar4 + 0x390);
            for (; iVar4 + 0x390 != piVar6; piVar6 = *piVar6) {
                iVar2 = sym.cscfg_add_csdev_cfg(piVar6[-3],iVar7);
                if (iVar2 != 0) goto code_r0x080083a4;
                iVar4 = _segment.ehdr;
            }
            iVar2 = sym.etm_perf_add_symlink_cscfg(iVar4,iVar7);
            if (iVar2 != 0) goto code_r0x080083a4;
            iVar4 = iVar7 + 0x10;
            iVar11 = *(_segment.ehdr + 0x3b0);
            piVar6 = _segment.ehdr + 0x3b0;
            uVar3 = __list_add_valid(iVar4,piVar6,iVar11);
            if ((uVar3 & 1) != 0) {
                *(iVar11 + 8) = iVar4;
                *(iVar7 + 0x10) = iVar11;
                *(iVar7 + 0x18) = piVar6;
                *piVar6 = iVar4;
            }
            *(iVar7 + 0x48) = 0;
            iVar2 = sym.cscfg_configfs_add_config(*piVar5);
            if (iVar2 != 0) goto code_r0x080083a4;
            iVar13 = iVar13 + 1;
            piVar5 = param_1 + iVar13;
            iVar7 = *piVar5;
        } while (iVar7 != 0);
    }
    mutex_unlock(obj.cscfg_mutex);
    return iVar2;
}


// ===== sym.coresight_device_release.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x080027f8 (size 8) =====

void sym.coresight_device_release.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    fwnode_handle_put(*(param_1 + 0x2f8));
    kfree(*(param_1 + 0x390));
    kfree(param_1 + -0x38);
    return;
}


// ===== sym.cscfg_dev_release.37c2f3aa70cc11a07ef3719d1c86758a.cfi_jt @ 0x08002800 (size 8) =====

void sym.cscfg_dev_release.37c2f3aa70cc11a07ef3719d1c86758a.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}


// ===== sym.reset_source_sink_store.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x08002808 (size 8) =====

int64_t sym.reset_source_sink_store.7cdf4684e306b03727f219798c76cd56.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar2 = kstrtoull(param_2,10,&uStack_40);
    if (iVar2 == 0) {
        mutex_lock(obj.cti_assoc_ops);
        pcVar4 = _obj.cs_active_paths;
        if (_obj.cs_active_paths != obj.cs_active_paths) {
            do {
                pcVar1 = *pcVar4;
                if ((*(pcVar4 + -8) != NULL) && (iVar3 = *(**(pcVar4 + -8) + -8), *(iVar3 + 8) == 4 && iVar3 != 0)) {
                    **(iVar3 + 0x3c8) = 1;
                    sym.__coresight_disable(iVar3);
                }
                pcVar4 = pcVar1;
            } while (pcVar1 != obj.cs_active_paths);
        }
        bus_for_each_dev(obj.coresight_bustype,0,0,sym.coresight_reset_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt);
        mutex_unlock(obj.cti_assoc_ops);
    }
    else {
        param_3 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_3;
    }
    iVar3 = __stack_chk_fail();
    if (((*(iVar3 + -0x30) | 2) == 3) && (*(iVar3 + 0x39a) != '\0')) {
        *(iVar3 + 0x39a) = 0;
    }
    return 0;
}


// ===== sym.coresight_set_percpu_sink.cfi_jt @ 0x08002810 (size 8) =====

void sym.coresight_set_percpu_sink.cfi_jt(uint32_t param_1,ulong param_2)

{
    code *pcVar1;
    
    if (param_1 < 0x20) {
        *(obj.csdev_sink + *(__per_cpu_offset + param_1 * 8)) = param_2;
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002a9c);
    (*pcVar1)();
}


// ===== sym.coresight_set_assoc_ectdev_mutex.cfi_jt @ 0x08002818 (size 8) =====

void sym.coresight_set_assoc_ectdev_mutex.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cti_assoc_ops);
    *(param_1 + 1000) = param_2;
    mutex_unlock(obj.cti_assoc_ops);
    return;
}


// ===== sym.etm_event_read.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002820 (size 8) =====

void sym.etm_event_read.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(void)

{
    return;
}


// ===== sym.etm_event_destroy.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002828 (size 8) =====

void sym.etm_event_destroy.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(param_1 + 0x1c8));
    *(param_1 + 0x1c8) = 0;
    return;
}


// ===== sym.etm_addr_filters_sync.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002830 (size 8) =====

void sym.etm_addr_filters_sync.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    uint uVar11;
    
    iVar1 = param_1;
    if (*(param_1 + 0x280) != 0) {
        iVar1 = *(param_1 + 0x280);
    }
    piVar8 = *(iVar1 + 0x360);
    iVar6 = *(param_1 + 0x1c8);
    if (piVar8 == iVar1 + 0x360) {
        iVar7 = 0;
    }
    else {
        iVar7 = 0;
        piVar10 = iVar6 + 8;
        piVar9 = *(param_1 + 0x378) + 8;
        do {
            if (iVar7 == 9) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x8006fe8);
                (*pcVar5)();
            }
            iVar2 = piVar9[-1];
            iVar3 = *piVar9;
            iVar4 = piVar8[6];
            if (iVar4 == 0) {
                uVar11 = 4;
code_r0x08006f78:
                *piVar10 = iVar3 + iVar2;
code_r0x08006f7c:
                *(piVar10 + 1) = uVar11;
            }
            else {
                if (iVar4 == 1) {
                    uVar11 = 3;
                    piVar10[-1] = iVar2;
                    goto code_r0x08006f7c;
                }
                if (iVar4 == 2) {
                    piVar10[-1] = iVar2;
                    uVar11 = 2;
                    goto code_r0x08006f78;
                }
            }
            piVar8 = *piVar8;
            iVar7 = iVar7 + 1;
            piVar9 = piVar9 + 2;
            piVar10 = piVar10 + 3;
        } while (piVar8 != iVar1 + 0x360);
    }
    *(iVar6 + 0xc0) = iVar7;
    return;
}


// ===== sym.coresight_set_cti_ops.cfi_jt @ 0x08002838 (size 8) =====

void sym.coresight_set_cti_ops.cfi_jt(ulong param_1)

{
    _segment.ehdr = param_1;
    return;
}


// ===== sym.coresight_register.cfi_jt @ 0x08002840 (size 8) =====

int64_t * sym.coresight_register.cfi_jt(uint32_t *param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t *arg1;
    int64_t iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t iVar8;
    code *pcVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = kmem_cache_alloc_trace(_device_match_fwnode,0xdc0,0x428);
    if (arg1 != NULL) {
        if ((*param_1 & 0xfffffffe) == 2) {
            if (param_1[2] == 2) {
                uVar6 = *(*(param_1 + 6) + 4);
            }
            else {
                if (param_1[2] != 1) goto code_r0x08004a80;
                uVar6 = **(param_1 + 6);
            }
        }
        else {
code_r0x08004a80:
            uVar6 = 1;
        }
        if ((uVar6 >> 0x3e == 0) &&
           (iVar4 = __kmalloc(-(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2,0xdc0), iVar4 != 0)) {
            uVar7 = *(param_1 + 1);
            arg1[0x79] = iVar4;
            iVar4 = *(param_1 + 4);
            iVar11 = *(param_1 + 6);
            *(arg1 + 0x7a) = 0;
            *(arg1 + 0xc) = uVar7;
            iVar8 = *(param_1 + 0xe);
            iVar10 = *(param_1 + 0x10);
            *arg1 = iVar11;
            uVar2 = *param_1;
            arg1[3] = iVar4;
            arg1[4] = iVar8;
            iVar4 = *(param_1 + 0x12);
            *(arg1 + 1) = uVar2;
            arg1[5] = iVar10;
            arg1[6] = iVar4;
            if (7 < uVar2) {
    //WARNING: Does not return
                pcVar9 = SoftwareBreakpoint(0x5512,0x8004d40);
                (*pcVar9)();
            }
            iVar4 = *(param_1 + 10);
            piVar1 = arg1 + 7;
            arg1[0x13] = *(param_1 + 8);
            arg1[0x6c] = iVar4;
            arg1[0x6d] = sym.coresight_device_release.7cdf4684e306b03727f219798c76cd56.cfi_jt;
            arg1[0x16] = obj.coresight_dev_type + uVar2 * 0x30;
            arg1[0x17] = obj.coresight_bustype;
            dev_fwnode();
            iVar4 = fwnode_handle_get();
            uVar7 = *(param_1 + 0xc);
            arg1[0x66] = iVar4;
            dev_set_name(piVar1,0x8001391,uVar7);
            mutex_lock(obj.cti_assoc_ops);
            iVar3 = device_register(piVar1);
            if (iVar3 == 0) {
                if (((*(arg1 + 1) | 2) != 3) || (iVar3 = sym.etm_perf_add_symlink_sink(arg1), iVar3 == 0)) {
                    iVar3 = sym.coresight_create_conns_sysfs_group(arg1);
                    if (iVar3 == 0) {
                        iVar4 = *arg1;
                        if (0 < *(iVar4 + 4)) {
                            iVar11 = 0;
                            iVar8 = 0;
                            do {
                                iVar4 = *(iVar4 + 8) + iVar11;
                                if (*(iVar4 + 0x10) != 0) {
                                    iVar10 = sym.coresight_find_csdev_by_fwnode(*(iVar4 + 0x10));
                                    *(iVar4 + 0x18) = iVar10;
                                    if ((iVar10 == 0) || (*(iVar10 + 0x3f4) == '\0')) {
                                        *(arg1 + 0x7a) = 1;
                                    }
                                    else {
                                        iVar3 = sym.coresight_make_links(arg1,iVar4,iVar10);
                                        if (iVar3 != 0) goto code_r0x08004c28;
                                    }
                                }
                                iVar4 = *arg1;
                                iVar8 = iVar8 + 1;
                                iVar11 = iVar11 + 0x28;
                            } while (iVar8 < *(iVar4 + 4));
                        }
                        iVar3 = bus_for_each_dev(obj.coresight_bustype,0,arg1,
                                                 sym.coresight_orphan_match.7cdf4684e306b03727f219798c76cd56.cfi_jt);
                        if ((iVar3 == 0) && (_segment.ehdr != NULL)) {
                            pcVar9 = *_segment.ehdr;
                            if (pcVar9 != NULL) {
                                if (6 < (pcVar9 + -0x8002a00 >> 3 | pcVar9 << 0x3d)) {
                                    __cfi_slowpath_diag(0x3a4aa1703f90ff56,pcVar9,0x8000e70);
                                }
                                (*pcVar9)(arg1);
                            }
                            mutex_unlock(obj.cti_assoc_ops);
                            return arg1;
                        }
                        mutex_unlock(obj.cti_assoc_ops);
                        if (iVar3 == 0) {
                            return arg1;
                        }
                    }
                    else {
code_r0x08004c28:
                        mutex_unlock(obj.cti_assoc_ops);
                    }
                    sym.coresight_unregister(arg1);
                    return iVar3;
                }
                device_unregister(piVar1);
            }
            else {
                put_device(piVar1);
            }
            mutex_unlock(obj.cti_assoc_ops);
            goto code_r0x08004b9c;
        }
        kfree(arg1);
    }
    iVar3 = -0xc;
code_r0x08004b9c:
    iVar4 = *(param_1 + 6);
    iVar5 = *(iVar4 + 4);
    if (0 < iVar5) {
        iVar8 = 0;
        iVar10 = *(iVar4 + 8);
        iVar11 = 0x10;
        do {
            if (*(iVar10 + iVar11) != 0) {
                fwnode_handle_put();
                *(*(iVar4 + 8) + iVar11) = 0;
                iVar5 = *(iVar4 + 4);
            }
            iVar8 = iVar8 + 1;
            iVar11 = iVar11 + 0x28;
        } while (iVar8 < iVar5);
    }
    return iVar3;
}


// ===== sym.cscfg_param_value_store.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt @ 0x08002848 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.cscfg_param_value_store.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt
               (int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + -8);
    iStack_40 = 0;
    uVar1 = *(param_1 + -0x10);
    iVar2 = kstrtoull(param_2,0,&iStack_40);
    if (iVar2 == 0) {
        iVar2 = sym.cscfg_update_feat_param_val(iVar3,uVar1,iStack_40);
    }
    iVar3 = sp_el0;
    if (iVar2 != 0) {
        param_3 = iVar2;
    }
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(param_3);
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.coresight_set_csr_ops.cfi_jt @ 0x08002850 (size 8) =====

void sym.coresight_set_csr_ops.cfi_jt(ulong param_1)

{
    _segment.ehdr = param_1;
    return;
}


// ===== sym.coresight_loses_context_with_cpu.cfi_jt @ 0x08002858 (size 8) =====

uint32_t sym.coresight_loses_context_with_cpu.cfi_jt(void)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = dev_fwnode();
    uVar1 = fwnode_property_present(uVar2,"arm,coresight-loses-context-with-cpu");
    return uVar1 & 1;
}


// ===== sym.coresight_enabled_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x08002860 (size 8) =====

uchar sym.coresight_enabled_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1,char *param_2)

{
    uchar uVar1;
    
    if ((*(param_1 + -0x30) | 2) == 3) {
        uVar1 = 0;
        if (*(param_1 + 0x39a) != '\0') {
            if (*param_2 == '\0') {
                uVar1 = 1;
            }
            else {
                uVar1 = 1;
                *(param_1 + 0x39a) = 0;
            }
        }
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.device_match_fwnode.cfi_jt @ 0x08002868 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.device_match_fwnode.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.coresight_sink_by_id.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x08002870 (size 8) =====

ulong sym.coresight_sink_by_id.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1,int *param_2)

{
    if ((((*(param_1 + -0x30) | 2) == 3) && (*(param_1 + 0x3a0) != 0)) && (*param_2 == *(*(param_1 + 0x3a0) + 0x20))) {
        return 1;
    }
    return 0;
}


// ===== sym.etm_event_init.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002878 (size 8) =====

ulong sym.etm_event_init.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xd8) == _segment.ehdr) {
        iVar1 = kmem_cache_alloc_trace(_device_match_fwnode,0xdc0,200);
        if (iVar1 == 0) {
            uVar2 = 0xfffffff4;
        }
        else {
            if (*(param_1 + 0x280) != 0) {
                memcpy(iVar1,*(*(param_1 + 0x280) + 0x1c8),200);
            }
            uVar2 = 0;
            *(param_1 + 0x1c8) = iVar1;
            *(param_1 + 0x390) = sym.etm_event_destroy.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
        }
    }
    else {
        uVar2 = 0xfffffffe;
    }
    return uVar2;
}


// ===== sym.etm_event_add.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002880 (size 8) =====

uint32_t sym.etm_event_add.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 1) == 0) {
        uVar1 = 0;
        *(param_1 + 0x1d8) = 1;
    }
    else {
        sym.etm_event_start(param_1);
        uVar1 = -(*(param_1 + 0x1d8) & 1) & 0xffffffea;
    }
    return uVar1;
}


// ===== sym.coresight_remove_sysfs_link.cfi_jt @ 0x08002888 (size 8) =====

void sym.coresight_remove_sysfs_link.cfi_jt(int64_t *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 != NULL) && (*param_1 != 0)) && (param_1[2] != 0)) && ((param_1[1] != 0 && (param_1[3] != 0)))) {
        sysfs_remove_link_from_group(*param_1 + 0x38,_segment.ehdr);
        sysfs_remove_link_from_group(param_1[2] + 0x38,_segment.ehdr,param_1[3]);
        *(*param_1 + 0x3f0) = *(*param_1 + 0x3f0) + -1;
        *(param_1[2] + 0x3f0) = *(param_1[2] + 0x3f0) + -1;
    }
    return;
}


// ===== sym.__typeid__ZTSFiP16coresight_deviceE_global_addr @ 0x08002890 (size 8) =====

uint64_t sym.__typeid__ZTSFiP16coresight_deviceE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    uint64_t *puVar4;
    int iVar5;
    uint32_t arg1;
    uint64_t *puVar7;
    char *pcVar8;
    int *piVar9;
    ulong *in_x18;
    uint64_t arg3;
    uint64_t *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint64_t uVar6;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0xc);
    mutex_lock(obj.cti_assoc_ops);
    if (*(param_1 + 8) == 4) {
        if ((*(param_1 + 0xc) & 0xfffffffd) != 1) {
            pcVar8 = "wrong device subtype in %s\n";
            goto code_r0x08003f60;
        }
        if (*(param_1 + 0x3d1) != '\0') {
            if (iVar5 == 3) {
                piVar9 = *(param_1 + 0x3c8);
                Hint_Prefetch(piVar9,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar9,0x10);
                    if (bVar3) {
                        *piVar9 = *piVar9 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                arg3 = 0;
            }
            else {
                arg3 = 0;
            }
            goto code_r0x08003f74;
        }
        iVar11 = *(param_1 + 0x3e0);
        if (iVar11 != 0) {
            *(iVar11 + 0x3d2) = 1;
code_r0x08003e78:
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
            if (arg3 == 0) {
                arg3 = 0xfffffffffffffff4;
            }
            else {
                *arg3 = arg3;
                *(arg3 + 8) = arg3;
                iVar5 = sym._coresight_build_path(param_1,iVar11,arg3,param_1);
                if (iVar5 != 0) {
                    kfree(arg3);
                    arg3 = iVar5;
                }
                if (arg3 < 0xfffffffffffff001) {
                    arg1 = arg3;
                    uVar6 = sym.coresight_enable_path(arg1,1,0);
                    uVar12 = uVar6 & 0xffffffff;
                    if (uVar6 == 0) {
                        uVar6 = sym.coresight_enable_source(param_1);
                        uVar12 = uVar6 & 0xffffffff;
                        if (uVar6 == 0) {
                            iVar11 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar11 = 0x30;
                            }
                            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x18);
                            if (puVar7 != NULL) {
                                puVar10 = puVar7 + 1;
                                *puVar7 = arg3;
                                puVar4 = _obj.cs_active_paths;
                                uVar12 = __list_add_valid(puVar10,obj.cs_active_paths,_obj.cs_active_paths);
                                arg3 = 0;
                                if ((uVar12 & 1) != 0) {
                                    puVar4[1] = puVar10;
                                    puVar7[1] = puVar4;
                                    puVar7[2] = obj.cs_active_paths;
                                    _obj.cs_active_paths = puVar10;
                                }
                                goto code_r0x08003f74;
                            }
                            uVar12 = 0xfffffff4;
                        }
                        sym.coresight_disable_path_from.llvm.6468340166659988919(arg3,0);
                    }
                    arg3 = uVar12;
                    sym.coresight_release_path(arg1);
                    goto code_r0x08003f74;
                }
            }
            _printk(0x800175b,arg3 & 0xffffffff);
            goto code_r0x08003f74;
        }
        if ((param_1 != 0) && (iVar11 = sym.coresight_find_enabled_sink(param_1), iVar11 != 0)) goto code_r0x08003e78;
    }
    else {
        pcVar8 = "wrong device type in %s\n";
code_r0x08003f60:
        _dev_err(param_1 + 0x38,pcVar8,"coresight_enable");
    }
    arg3 = 0xffffffea;
code_r0x08003f74:
    mutex_unlock(obj.cti_assoc_ops);
    return arg3 & 0xffffffff;
}


// ===== sym.coresight_claim_device_unlocked.cfi_jt @ 0x08002898 (size 8) =====

ulong sym.coresight_claim_device_unlocked.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8002b74);
        (*pcVar2)();
    }
    if (*(param_1 + 0x20) == '\0') {
        pcVar2 = *(param_1 + 0x28);
        __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar2,0x8001090);
        iVar1 = (*pcVar2)(0xfa4,1,0);
    }
    else {
        iVar1 = sym.readl_relaxed(*(param_1 + 0x28) + 0xfa4);
    }
    if (iVar1 == 0) {
        if (*(param_1 + 0x20) == '\0') {
            pcVar2 = *(param_1 + 0x30);
            __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar2,0x80010b0);
            (*pcVar2)(2,4000,1,0);
        }
        else {
            sym.writel_relaxed(2,*(param_1 + 0x28) + 4000);
        }
        InstructionSynchronizationBarrier();
        if (*(param_1 + 0x20) == '\0') {
            pcVar2 = *(param_1 + 0x28);
            __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar2,0x8001090);
            iVar1 = (*pcVar2)(0xfa4,1,0);
        }
        else {
            iVar1 = sym.readl_relaxed(*(param_1 + 0x28) + 0xfa4);
        }
        if (iVar1 == 2) {
            return 0;
        }
        if (*(param_1 + 0x20) == '\0') {
            pcVar2 = *(param_1 + 0x30);
            __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar2,0x80010b0);
            (*pcVar2)(2,0xfa4,1,0);
        }
        else {
            sym.writel_relaxed(2,*(param_1 + 0x28) + 0xfa4);
        }
        InstructionSynchronizationBarrier();
    }
    return 0xfffffff0;
}


// ===== sym.coresight_claim_device.cfi_jt @ 0x080028a0 (size 8) =====

uint sym.coresight_claim_device.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        sym.writel_relaxed(0xc5acce55,*(param_1 + 0x28) + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar2 = sym.coresight_claim_device_unlocked(param_1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*(param_1 + 0x28) + 0xfb0);
        return uVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002d10);
    (*pcVar1)();
}


// ===== sym.coresight_get_percpu_sink.cfi_jt @ 0x080028a8 (size 8) =====

ulong sym.coresight_get_percpu_sink.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (param_1 < 0x20) {
        return *(obj.csdev_sink + *(__per_cpu_offset + param_1 * 8));
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002ad0);
    (*pcVar1)();
}


// ===== sym.coresight_remove_cti_ops.cfi_jt @ 0x080028b0 (size 8) =====

void sym.coresight_remove_cti_ops.cfi_jt(void)

{
    _segment.ehdr = 0;
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080028b8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cscfg_exit();
    perf_pmu_unregister(obj.etm_pmu.llvm.15995262632889499196);
    bus_unregister(obj.coresight_bustype);
    return;
}


// ===== sym.coresight_remove_csr_ops.cfi_jt @ 0x080028c0 (size 8) =====

void sym.coresight_remove_csr_ops.cfi_jt(void)

{
    _segment.ehdr = 0;
    return;
}


// ===== sym.cscfg_deactivate_config.cfi_jt @ 0x080028c8 (size 8) =====

void sym.cscfg_deactivate_config.cfi_jt(int64_t param_1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    piVar4 = *(_segment.ehdr + 0x3b0);
    while( true ) {
        if (_segment.ehdr + 0x3b0 == piVar4) goto code_r0x080088f8;
        if (*(piVar4[6] + 0x20) == param_1) break;
        piVar4 = *piVar4;
    }
    piVar1 = piVar4 + 7;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    piVar1 = _segment.ehdr + 0x3c0;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
code_r0x080088f8:
    mutex_unlock(obj.cscfg_mutex);
    return;
}


// ===== sym.enable_sink_store.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x080028d0 (size 8) =====

uint64_t sym.enable_sink_store.7cdf4684e306b03727f219798c76cd56.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    int64_t iStack_38;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_38 = 0;
    iVar1 = kstrtoull(param_3,10,&iStack_38);
    if (iVar1 == 0) {
        if (iStack_38 == 0) {
            *(param_1 + 0x39a) = 0;
        }
        else {
            auStack_2c[0] = 0;
            iVar2 = bus_find_device(obj.coresight_bustype,0,auStack_2c,
                                    sym.coresight_enabled_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt);
            if (((iVar2 == 0) || (iVar2 == 0x38)) || (*(iVar2 + -0x30) == *(param_1 + -0x30))) {
                *(param_1 + 0x39a) = 1;
            }
            else {
                _dev_err(param_1,"Another type sink is enabled.\n");
                param_4 = 0xffffffffffffffea;
            }
        }
    }
    else {
        param_4 = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_4;
    }
    auVar4 = __stack_chk_fail();
    iVar2 = auVar4._0_8_;
    if ((*(iVar2 + -0x30) | 2) == 3) {
        uVar3 = *(iVar2 + 0x39a);
        if (*(iVar2 + 0x39a) != 0) {
            if (*auVar4._8_8_ == '\0') {
                uVar3 = 1;
            }
            else {
                uVar3 = 1;
                *(iVar2 + 0x39a) = 0;
            }
        }
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.sink_name_store.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x080028d8 (size 8) =====

uint64_t sym.sink_name_store.7cdf4684e306b03727f219798c76cd56.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t arg2;
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *arg3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1;
    int64_t iVar6;
    uchar uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint32_t uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (param_4 < 0x14) {
        if (param_4 == 0) {
            *(param_1 + 0x3a8) = 0;
            goto code_r0x08005f14;
        }
        iVar1 = sscanf(param_3,0x8001391,&uStack_50);
        if (iVar1 == 1) {
            uStack_54 = hashlen_string(0,&uStack_50);
            iVar2 = bus_find_device(obj.coresight_bustype,0,&uStack_54,
                                    sym.coresight_sink_by_id.7cdf4684e306b03727f219798c76cd56.cfi_jt);
            uStack_54 = uStack_54 & 0xffffff00;
            iVar3 = bus_find_device(obj.coresight_bustype,0,&uStack_54,
                                    sym.coresight_enabled_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt);
            iVar4 = 0;
            if (iVar3 != 0) {
                iVar4 = iVar3 + -0x38;
            }
            if (((iVar2 != 0) && (iVar2 + -0x38 != 0)) && ((iVar4 == 0 || (*(iVar4 + 8) == *(iVar2 + -0x30))))) {
                *(param_1 + 0x3a8) = iVar2 + -0x38;
                goto code_r0x08005f14;
            }
            _dev_err(param_1,"Sink name [%s] is invalid or another type sink is enabled.\n",&uStack_50);
        }
    }
    param_4 = 0xffffffffffffffea;
code_r0x08005f14:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    auVar8 = __stack_chk_fail();
    arg3 = auVar8._8_8_;
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.coresight_orphan_match;
    arg1 = iVar4 + -0x38;
    if ((arg1 != arg3) && (*(iVar4 + 0x398) != '\0')) {
        iVar2 = *arg1;
        if (*(iVar2 + 4) < 1) {
            uVar7 = 0;
        }
        else {
            iVar6 = 0;
            iVar3 = 0;
            uVar7 = 0;
            do {
                arg2 = *(iVar2 + 8) + iVar6;
                if ((*(arg2 + 0x10) != 0) && (*(arg2 + 0x18) == 0)) {
                    if (*(arg2 + 0x10) == arg3[0x66]) {
                        uVar5 = sym.coresight_make_links(arg1,arg2,arg3);
                        if (uVar5 != 0) {
                            return uVar5;
                        }
                        iVar2 = *arg1;
                    }
                    else {
                        uVar7 = 1;
                    }
                }
                iVar3 = iVar3 + 1;
                iVar6 = iVar6 + 0x28;
            } while (iVar3 < *(iVar2 + 4));
        }
        *(iVar4 + 0x398) = uVar7;
    }
    return 0;
}


// ===== sym.enable_source_store.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x080028e0 (size 8) =====

int64_t sym.enable_source_store.7cdf4684e306b03727f219798c76cd56.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar3 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    iVar1 = kstrtoull(param_3,10,&iStack_40);
    if (iVar1 == 0) {
        if (iStack_40 == 0) {
            mutex_lock(obj.cti_assoc_ops);
            sym.__coresight_disable(param_1 + -0x38);
            mutex_unlock(obj.cti_assoc_ops);
        }
        else {
            iVar1 = sym.coresight_enable(param_1 + -0x38);
            if (iVar1 != 0) {
                param_4 = iVar1;
            }
        }
    }
    else {
        param_4 = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        iVar2 = __stack_chk_fail();
        *extraout_x18 = sym.sink_name_show;
        iVar2 = *(iVar2 + 0x3a8);
        if (iVar2 == 0) {
            iVar1 = scnprintf(piVar3,0x1000,0x80017b3);
        }
        else {
            iVar4 = *(iVar2 + 0xa8);
            if (iVar4 == 0) {
                iVar4 = *(iVar2 + 0x38);
            }
            iVar1 = scnprintf(piVar3,0x1000,0x8001961,iVar4);
        }
        return iVar1;
    }
    return param_4;
}


// ===== sym.coresight_alloc_device_name.cfi_jt @ 0x080028e8 (size 8) =====

void sym.coresight_alloc_device_name.cfi_jt(uint32_t *param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint *puVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    iVar3 = of_property_read_string(*(param_2 + 0x2f0),"coresight-name",&uStack_50);
    if (iVar3 != 0) {
        mutex_lock(obj.cti_assoc_ops);
        iVar4 = dev_fwnode(param_2);
        uVar2 = *param_1;
        if (0 < uVar2) {
            uVar8 = 0;
            do {
                if (*(*(param_1 + 4) + uVar8 * 8) == iVar4) {
                    if (-1 < uVar8) goto code_r0x08005038;
                    break;
                }
                uVar8 = uVar8 + 1;
            } while (uVar2 != uVar8);
        }
        uVar1 = uVar2 + 1;
        if ((uVar1 >> 0x3d == 0) &&
           (uVar5 = krealloc(*(param_1 + 4),-(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar1 << 3,0xcc0), 0x10 < uVar5))
        {
            uVar6 = dev_fwnode(param_2);
            uVar8 = uVar2;
            *(uVar5 + uVar2 * 8) = uVar6;
            *(param_1 + 4) = uVar5;
            *param_1 = uVar1;
code_r0x08005038:
            uStack_50 = devm_kasprintf(param_2,0xcc0,"%s%d",*(param_1 + 2),uVar8);
        }
        mutex_unlock(obj.cti_assoc_ops);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        auVar9 = __stack_chk_fail(uStack_50);
        puVar7 = auVar9._8_8_;
        *extraout_x18 = sym.writel_relaxed;
        uVar8 = auVar9._0_8_ & 0xffffffff;
        log_write_mmio(uVar8,0x20,puVar7,0x80050b8);
        *puVar7 = auVar9._0_4_;
        log_post_write_mmio(uVar8,0x20,puVar7,0x80050e0);
        return;
    }
    return;
}


// ===== sym.free_event_data.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080028f0 (size 8) =====

void sym.free_event_data.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *extraout_x11;
    ulong *extraout_x11_00;
    ulong *in_x18;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x38) != 0) {
        uVar2 = *(param_1 + 0x30);
        if (uVar2 == 0) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x80075ac);
            (*pcVar4)();
        }
        uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        iVar3 = LZCOUNT((uVar2 >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10) << 0x20);
        if ((iVar3 >> 5 & 1) != 0) {
code_r0x080075b0:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x80075b4);
            (*pcVar4)();
        }
        iVar3 = sym.coresight_get_sink(*(*(__per_cpu_offset + iVar3 * 8) + *(param_1 + 0x48)));
        pcVar4 = *(**(iVar3 + 0x18) + 0x18);
        if (pcVar4 != sym.__typeid__ZTSFvPvE_global_addr) {
            __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar4,0x80011b0);
        }
        (*pcVar4)(*(param_1 + 0x38));
    }
    if (*(param_1 + 0x40) != 0) {
        sym.cscfg_deactivate_config(*(param_1 + 0x40));
    }
    uVar1 = cpumask_next(0xffffffff,param_1 + 0x30);
    *extraout_x11 = extraout_x8;
    if (uVar1 < extraout_x8) {
        do {
            if (0x1f < uVar1) goto code_r0x080075b0;
            iVar3 = *(param_1 + 0x48);
            iVar5 = *(__per_cpu_offset + uVar1 * 8);
            if ((*(iVar5 + iVar3) != 0) && (*(iVar5 + iVar3) < 0xfffffffffffff001)) {
                sym.coresight_release_path(*(iVar3 + iVar5));
            }
            *(iVar3 + iVar5) = 0;
            uVar1 = cpumask_next(uVar1,param_1 + 0x30);
            *extraout_x11_00 = extraout_x8_00;
        } while (uVar1 < extraout_x8_00);
    }
    free_percpu(*(param_1 + 0x48));
    kfree(param_1);
    return;
}


// ===== sym.cscfg_activate_config.cfi_jt @ 0x080028f8 (size 8) =====

ulong sym.cscfg_activate_config.cfi_jt(int64_t param_1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    piVar4 = *(_segment.ehdr + 0x3b0);
    do {
        if (_segment.ehdr + 0x3b0 == piVar4) {
            uVar5 = 0xffffffea;
code_r0x080087f8:
            mutex_unlock(obj.cscfg_mutex);
            return uVar5;
        }
        if (*(piVar4[6] + 0x20) == param_1) {
            piVar1 = _segment.ehdr + 0x3c0;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            piVar1 = piVar4 + 7;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            uVar5 = 0;
            goto code_r0x080087f8;
        }
        piVar4 = *piVar4;
    } while( true );
}


// ===== sym.coresight_get_platform_data.cfi_jt @ 0x08002900 (size 8) =====

uint32_t * sym.coresight_get_platform_data.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uchar auVar2 [16];
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t *piVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint *puVar17;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar7 = dev_fwnode();
    iVar6 = -2;
    if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
        puVar8 = devm_kmalloc(param_1,0x10,0xdc0);
        if (puVar8 == NULL) {
            iVar6 = -0xc;
        }
        else {
            if (*(uVar7 + 8) == of_fwnode_ops) {
                iVar12 = *(param_1 + 0x2f0);
                iVar9 = of_get_child_by_name(iVar12,"in-ports");
                iVar10 = of_get_child_by_name(iVar12,"out-ports");
                if (iVar9 == 0 && iVar10 == 0) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uVar7 = of_graph_is_present(iVar12);
                    if ((uVar7 & 1) != 0) {
                        iVar9 = of_graph_get_next_endpoint(iVar12,0);
                        if (iVar9 == 0) {
                            uVar16 = 0;
                            uVar15 = 0;
                        }
                        else {
                            uVar15 = 0;
                            uVar16 = 0;
                            do {
                                iVar6 = of_graph_parse_endpoint(iVar9,&uStack_78);
                                uVar4 = uVar15;
                                uVar5 = uVar16;
                                if (iVar6 == 0) {
                                    iVar10 = of_find_property(iVar9,"slave-mode",0);
                                    uVar1 = uStack_78 + 1;
                                    if (iVar10 == 0) {
                                        uVar4 = uVar1;
                                        if (uVar1 <= uVar15) {
                                            uVar4 = uVar15;
                                        }
                                    }
                                    else {
                                        uVar5 = uVar1;
                                        if (uVar1 <= uVar16) {
                                            uVar5 = uVar16;
                                        }
                                    }
                                }
                                uVar16 = uVar5;
                                uVar15 = uVar4;
                                iVar9 = of_graph_get_next_endpoint(iVar12,iVar9);
                            } while (iVar9 != 0);
                        }
                        *puVar8 = uVar16;
                        puVar8[1] = uVar15;
                    }
code_r0x08007970:
                    uVar15 = puVar8[1];
                }
                else {
                    if (iVar9 != 0) {
                        uVar15 = 0;
                        iVar13 = 0;
                        uStack_78 = 0;
                        uStack_70 = 0;
                        while (iVar13 = of_graph_get_next_endpoint(iVar9,iVar13), iVar13 != 0) {
                            iVar6 = of_graph_parse_endpoint(iVar13,&uStack_78);
                            if ((iVar6 == 0) && (uVar15 < uStack_78 + 1U)) {
                                uVar15 = uStack_78 + 1;
                            }
                        }
                        *puVar8 = uVar15;
                    }
                    if (iVar10 == 0) goto code_r0x08007970;
                    uVar15 = 0;
                    iVar9 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    while (iVar9 = of_graph_get_next_endpoint(iVar10,iVar9), iVar9 != 0) {
                        iVar6 = of_graph_parse_endpoint(iVar9,&uStack_78);
                        if ((iVar6 == 0) && (uVar15 < uStack_78 + 1U)) {
                            uVar15 = uStack_78 + 1;
                        }
                    }
                    puVar8[1] = uVar15;
                }
                if (uVar15 == 0) goto code_r0x080077d0;
                auVar2._8_8_ = 0;
                auVar2._0_8_ = uVar15;
                if (SUB168(auVar2 * ZEXT816(0x28),8) == 0) {
                    iVar9 = devm_kmalloc(param_1,(uVar15 + uVar15 * 4) * 8,0xdc0);
                    *(puVar8 + 2) = iVar9;
                    if (iVar9 != 0) {
                        iVar9 = of_get_child_by_name(iVar12,"out-ports");
                        if (iVar9 == 0) {
                            bVar3 = true;
                            if ((obj.of_get_coresight_platform_data.__print_once & 1) == 0) {
                                obj.of_get_coresight_platform_data.__print_once = 0x1;
                                _dev_warn(param_1,"Uses obsolete Coresight DT bindings\n");
                            }
                        }
                        else {
                            bVar3 = false;
                            iVar12 = iVar9;
                        }
                        for (iVar9 = of_graph_get_next_endpoint(iVar12,0); iVar9 != 0;
                            iVar9 = of_graph_get_next_endpoint(iVar12,iVar9)) {
                            if ((!bVar3) || (iVar10 = of_find_property(iVar9,"slave-mode",0), iVar10 == 0)) {
                                uStack_78 = 0;
                                uStack_70 = 0;
                                uStack_88 = 0;
                                uStack_80 = 0;
                                iVar6 = of_graph_parse_endpoint(iVar9,&uStack_78);
                                iVar10 = 0;
                                if (iVar6 == 0) {
                                    iVar13 = of_graph_get_remote_endpoint(iVar9);
                                    iVar10 = 0;
                                    if (iVar13 != 0) {
                                        iVar11 = of_graph_get_port_parent(iVar13);
                                        uVar7 = of_node_name_eq(iVar11,"in-ports");
                                        if (((uVar7 & 1) != 0) ||
                                           (uVar7 = of_node_name_eq(iVar11,"out-ports"), (uVar7 & 1) != 0)) {
                                            iVar11 = of_get_next_parent(iVar11);
                                        }
                                        if ((iVar11 != 0) &&
                                           (iVar6 = of_graph_parse_endpoint(iVar13,&uStack_88), iVar6 == 0)) {
                                            iVar11 = iVar11 + 0x18;
                                            iVar10 = bus_find_device(platform_bus_type,0,iVar11,
                                                                     sym.device_match_fwnode.cfi_jt);
                                            if ((iVar10 == 0) &&
                                               (iVar10 = bus_find_device(amba_bustype,0,iVar11,
                                                                         sym.device_match_fwnode.cfi_jt), iVar10 == 0))
                                            {
                                                iVar6 = -0x205;
                                            }
                                            else {
                                                piVar14 = *(puVar8 + 2) + (uStack_78 & 0xffffffff) * 0x28 + 0x10;
                                                if (*piVar14 == 0) {
                                                    puVar17 = *(puVar8 + 2) + (uStack_78 & 0xffffffff) * 0x28;
                                                    *puVar17 = uStack_78;
                                                    iVar13 = fwnode_handle_get(iVar11);
                                                    *piVar14 = iVar13;
                                                    *(puVar17 + 2) = 0;
                                                    puVar17[1] = uStack_88;
                                                    iVar13 = of_parse_phandle(iVar9,"source",0);
                                                    if (iVar13 == 0) goto code_r0x08007a2c;
                                                    iVar6 = of_property_read_string
                                                                      (iVar13,"coresight-name",puVar17 + 2);
                                                    put_device(iVar10);
                                                    if (iVar6 == 0) goto code_r0x08007a34;
                                                    goto code_r0x080077b0;
                                                }
                                                _dev_warn(param_1,"Duplicate output port %d\n");
                                                iVar6 = -0x16;
                                            }
                                            put_device(iVar10);
                                            goto code_r0x080077b0;
                                        }
                                        iVar10 = 0;
                                    }
                                }
code_r0x08007a2c:
                                put_device(iVar10);
                            }
code_r0x08007a34:
                        }
                        goto code_r0x080077d0;
                    }
                    iVar6 = -0xc;
                }
                else {
                    iVar6 = -0xc;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                }
            }
            else {
                iVar6 = -2;
            }
code_r0x080077b0:
            if (puVar8 < 0xfffffffffffff001) {
                sym.coresight_release_platform_data(0,puVar8);
            }
        }
    }
    puVar8 = iVar6;
code_r0x080077d0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return puVar8;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.coresight_create_conns_sysfs_group;
    if (iVar12 == 0) {
        puVar8 = 0xffffffea;
    }
    else {
        puVar8 = sysfs_create_group(iVar12 + 0x38,obj.coresight_conns_group);
        if (puVar8 == 0) {
            *(iVar12 + 0x3f4) = 1;
        }
    }
    return puVar8;
}


// ===== sym.cscfg_feat_description_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt @ 0x08002908 (size 8) =====

int64_t sym.cscfg_feat_description_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_2,0x1000,0x8001391,*(*(param_1 + -8) + 8));
    return iVar1;
}


// ===== sym.cscfg_param_value_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt @ 0x08002910 (size 8) =====

int64_t sym.cscfg_param_value_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_2,0x1000,"0x%llx\n",*(*(*(param_1 + -8) + 0x28) + *(param_1 + -0x10) * 0x10 + 8));
    return iVar1;
}


// ===== sym.cscfg_feat_matches_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt @ 0x08002918 (size 8) =====

int64_t sym.cscfg_feat_matches_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + -8) + 0x20);
    if ((uVar1 & 1) == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = scnprintf(param_2,0x1000,"SRC_ALL ");
    }
    if ((uVar1 >> 1 & 1) != 0) {
        iVar3 = scnprintf(param_2 + iVar2,0x1000 - iVar2,"SRC_ETMV4 ");
        iVar2 = iVar3 + iVar2;
    }
    iVar3 = scnprintf(param_2 + iVar2,0x1000 - iVar2,0x80017b3);
    return iVar3 + iVar2;
}


// ===== sym.cscfg_cfg_feature_refs_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt @ 0x08002920 (size 8) =====

int64_t sym.cscfg_cfg_feature_refs_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + -8);
    if (*(iVar3 + 0x20) < 1) {
        iVar2 = 0;
    }
    else {
        iVar4 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(param_2 + iVar2,0x1000 - iVar2,0x8001961,*(*(iVar3 + 0x28) + iVar4 * 8));
            iVar2 = iVar2 + iVar1;
            iVar4 = iVar4 + 1;
        } while (iVar4 < *(iVar3 + 0x20));
    }
    return iVar2;
}


// ===== sym.cscfg_cfg_description_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt @ 0x08002928 (size 8) =====

int64_t sym.cscfg_cfg_description_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_2,0x1000,0x8001391,*(*(param_1 + -8) + 8));
    return iVar1;
}


// ===== sym.cscfg_cfg_values_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt @ 0x08002930 (size 8) =====

int64_t sym.cscfg_cfg_values_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + -8);
    if (*(iVar5 + 0x30) == 0) {
        iVar4 = 0;
    }
    else {
        if (*(iVar5 + 0x20) < 1) {
            iVar4 = 0;
        }
        else {
            iVar6 = 0;
            iVar4 = 0;
            iVar2 = (*(param_1 + -0x10) + -1) * *(iVar5 + 0x34);
            do {
                puVar3 = sym.cscfg_get_named_feat_desc(*(*(iVar5 + 0x28) + iVar6 * 8));
                if (0 < *(puVar3 + 0x24)) {
                    iVar8 = 0;
                    iVar7 = 0;
                    do {
                        iVar1 = scnprintf(param_2 + iVar4,0x1000 - iVar4,"%s.%s = 0x%llx ",*puVar3,
                                          *(puVar3[5] + iVar8),*(*(iVar5 + 0x38) + (iVar2 + iVar7) * 8));
                        iVar4 = iVar4 + iVar1;
                        iVar7 = iVar7 + 1;
                        iVar8 = iVar8 + 0x10;
                    } while (iVar7 < *(puVar3 + 0x24));
                    iVar2 = iVar2 + iVar7;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < *(iVar5 + 0x20));
        }
        iVar2 = scnprintf(param_2 + iVar4,0x1000 - iVar4,0x80017b3);
        iVar4 = iVar4 + iVar2;
    }
    return iVar4;
}


// ===== sym.cscfg_feat_nr_params_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt @ 0x08002938 (size 8) =====

int64_t sym.cscfg_feat_nr_params_show.bab4a2bacba9b9821ffc1cdc3310be99.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_2,0x1000,0x8001687,*(*(param_1 + -8) + 0x24));
    return iVar1;
}


// ===== sym.etm_event_del.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002940 (size 8) =====

void sym.etm_event_del.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.etm_event_stop(param_1,4);
    return;
}


// ===== sym.etm_event_stop.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002948 (size 8) =====

void sym.etm_event_stop.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(int64_t param_1,uint32_t param_2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = tpidr_el1;
    uVar3 = *(cpu_number + iVar4);
    if (0x1f < *(cpu_number + iVar4)) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x8006eb4);
        (*pcVar1)();
    }
    pcVar1 = obj.etm_ctxt + iVar4;
    iVar5 = *(obj.csdev_src + *(__per_cpu_offset + uVar3 * 8));
    if (*pcVar1 == 0) {
        iVar7 = *(iVar4 + 0x800a2d0);
    }
    else {
        iVar2 = perf_get_aux(pcVar1);
        iVar7 = *(iVar4 + 0x800a2d0);
        if (iVar2 != iVar7) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8006d4c);
            (*pcVar1)();
        }
    }
    *(iVar4 + 0x800a2d0) = 0;
    if (*(param_1 + 0x1d8) != 1) {
        if (iVar7 == 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8006e9c);
            (*pcVar1)();
        }
        if ((((param_2 >> 2 & 1) == 0) || (*pcVar1 == 0)) || ((*(iVar7 + 0x30) >> (uVar3 & 0x3f) & 1) != 0)) {
            if (((iVar5 != 0) && (iVar4 = *(*(__per_cpu_offset + uVar3 * 8) + *(iVar7 + 0x48)), iVar4 != 0)) &&
               (iVar2 = sym.coresight_get_sink(iVar4), iVar2 != 0)) {
                pcVar6 = *(*(*(iVar5 + 0x18) + 0x10) + 0x18);
                __cfi_slowpath_diag(0x4b596879dd0fbb8,pcVar6,0x80011f0);
                (*pcVar6)(iVar5,param_1);
                *(param_1 + 0x1d8) = 1;
                if (((param_2 >> 2 & 1) != 0) && (*pcVar1 != 0)) {
                    if (*pcVar1 != param_1) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x800,0x8006ea4);
                        (*pcVar1)();
                    }
                    pcVar6 = *(**(iVar2 + 0x18) + 0x20);
                    if (pcVar6 == NULL) {
                        return;
                    }
                    __cfi_slowpath_diag(0x324b6be2b7e3c193,pcVar6,0x8001210);
                    iVar5 = (*pcVar6)(iVar2,pcVar1,*(iVar7 + 0x38));
                    if (*pcVar1 == 0) {
                        if (iVar5 != 0) {
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x800,0x8006eac);
                            (*pcVar1)();
                        }
                    }
                    else {
                        perf_aux_output_end(pcVar1);
                    }
                }
                sym.coresight_disable_path_from.llvm.6468340166659988919(iVar4,0);
            }
        }
        else {
            *(param_1 + 0x1d8) = 1;
            perf_aux_output_end(pcVar1,0);
        }
    }
    return;
}


// ===== sym.etm_event_start.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002950 (size 8) =====

void sym.etm_event_start.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t arg1;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    uVar7 = *(cpu_number + iVar1);
    if (0x1f < *(cpu_number + iVar1)) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8006cbc);
        (*pcVar2)();
    }
    iVar6 = *(obj.csdev_src + *(__per_cpu_offset + uVar7 * 8));
    if (iVar6 != 0) {
        pcVar2 = obj.etm_ctxt + iVar1;
        if (*(iVar1 + 0x800a2d0) != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006ca4);
            (*pcVar2)();
        }
        iVar4 = perf_aux_output_begin(pcVar2,param_1);
        if (iVar4 != 0) {
            if ((*(iVar4 + 0x30) >> (uVar7 & 0x3f) & 1) == 0) {
code_r0x08006c94:
                *(param_1 + 0x1d8) = 0;
                *(iVar1 + 0x800a2d0) = iVar4;
                return;
            }
            arg1 = *(*(__per_cpu_offset + uVar7 * 8) + *(iVar4 + 0x48));
            iVar5 = sym.coresight_get_sink(arg1);
            if (iVar5 == 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8006cac);
                (*pcVar2)();
            }
            iVar3 = sym.coresight_enable_path(arg1,2,pcVar2);
            if (iVar3 == 0) {
                pcVar8 = *(*(*(iVar6 + 0x18) + 0x10) + 0x10);
                __cfi_slowpath_diag(0x7a682b931f8f094,pcVar8,0x80011d0);
                iVar3 = (*pcVar8)(iVar6,param_1,2);
                if (iVar3 == 0) goto code_r0x08006c94;
                sym.coresight_disable_path_from.llvm.6468340166659988919(arg1,0);
            }
            if (*pcVar2 != 0) {
                perf_aux_output_flag(pcVar2,1);
                perf_aux_output_end(pcVar2,0);
            }
        }
    }
    *(param_1 + 0x1d8) = 1;
    return;
}


// ===== sym.coresight_reset_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x08002958 (size 8) =====

ulong sym.coresight_reset_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1)

{
    if (((*(param_1 + -0x30) | 2) == 3) && (*(param_1 + 0x39a) != '\0')) {
        *(param_1 + 0x39a) = 0;
    }
    return 0;
}


// ===== sym.coresight_id_match.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x08002960 (size 8) =====

bool sym.coresight_id_match.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1,int64_t param_2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 + -0x38 == param_2) || (*(param_1 + 0x399) == '\0')) || (*(param_1 + -0x30) != 4)) {
        bVar1 = false;
    }
    else {
        pcVar4 = *(*(*(param_2 + 0x18) + 0x10) + 8);
        if (2 < (pcVar4 + -0x8002890 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar4,0x8001010);
        }
        iVar2 = (*pcVar4)(param_2);
        pcVar4 = *(*(*(param_1 + -0x20) + 0x10) + 8);
        if (2 < (pcVar4 + -0x8002890 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar4,0x8001030);
        }
        iVar3 = (*pcVar4)(param_1 + -0x38);
        bVar1 = iVar2 == iVar3;
    }
    return bVar1;
}


// ===== sym.coresight_orphan_match.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x08002968 (size 8) =====

ulong sym.coresight_orphan_match.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t arg2;
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *arg1;
    int64_t iVar3;
    uchar uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + -0x38;
    if ((arg1 != param_2) && (*(param_1 + 0x398) != '\0')) {
        iVar2 = *arg1;
        if (*(iVar2 + 4) < 1) {
            uVar4 = 0;
        }
        else {
            iVar3 = 0;
            iVar5 = 0;
            uVar4 = 0;
            do {
                arg2 = *(iVar2 + 8) + iVar3;
                if ((*(arg2 + 0x10) != 0) && (*(arg2 + 0x18) == 0)) {
                    if (*(arg2 + 0x10) == param_2[0x66]) {
                        uVar1 = sym.coresight_make_links(arg1,arg2,param_2);
                        if (uVar1 != 0) {
                            return uVar1;
                        }
                        iVar2 = *arg1;
                    }
                    else {
                        uVar4 = 1;
                    }
                }
                iVar5 = iVar5 + 1;
                iVar3 = iVar3 + 0x28;
            } while (iVar5 < *(iVar2 + 4));
        }
        *(param_1 + 0x398) = uVar4;
    }
    return 0;
}


// ===== sym.coresight_remove_sink_ref.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x08002970 (size 8) =====

ulong sym.coresight_remove_sink_ref.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1,int64_t param_2)

{
    if (*(param_1 + 0x3a8) == param_2) {
        *(param_1 + 0x3a8) = 0;
    }
    return 0;
}


// ===== sym.coresight_remove_match.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x08002978 (size 8) =====

ulong sym.coresight_remove_match.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1,int64_t *param_2)

{
    uint32_t uVar1;
    int64_t *arg1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + -0x38;
    if (arg1 != param_2) {
        uVar1 = *(*arg1 + 4);
        uVar2 = uVar1;
        if (0 < uVar1) {
            arg2 = *(*arg1 + 8);
            do {
                if (((*(arg2 + 0x18) != 0) && (*(arg2 + 0x10) != 0)) && (param_2[0x66] == *(arg2 + 0x10))) {
                    *(param_1 + 0x398) = 1;
                    sym.coresight_remove_links(arg1,arg2);
                    fwnode_handle_put(*(arg2 + 0x10));
                    *(arg2 + 0x10) = 0;
                    return 0;
                }
                arg2 = arg2 + 0x28;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }
    return 0;
}


// ===== sym.etm_perf_sink_name_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002980 (size 8) =====

int64_t sym.etm_perf_sink_name_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt
                  (ulong param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"0x%lx\n",*(param_2 + 0x20));
    return iVar1;
}


// ===== sym.enable_source_show.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x08002988 (size 8) =====

int64_t sym.enable_source_show.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001451,*(param_1 + 0x399));
    return iVar1;
}


// ===== sym.retstack_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002990 (size 8) =====

ulong sym.retstack_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    
    uVar1 = str.config:29_n._0_8_;
    param_3[7] = '2';
    param_3[8] = '9';
    param_3[9] = '\n';
    param_3[10] = '\0';
    *param_3 = uVar1;
    return 10;
}


// ===== sym.nr_links_show.93dede26e6a1e4d7858c05c3a10b53a1.cfi_jt @ 0x08002998 (size 8) =====

int64_t sym.nr_links_show.93dede26e6a1e4d7858c05c3a10b53a1.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x8001687,*(param_1 + 0x3b8));
    return iVar1;
}


// ===== sym.etm_perf_cscfg_event_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080029a0 (size 8) =====

int64_t sym.etm_perf_cscfg_event_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt
                  (ulong param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"configid=0x%lx\n",*(param_2 + 0x20));
    return iVar1;
}


// ===== sym.sink_name_show.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x080029a8 (size 8) =====

int64_t sym.sink_name_show.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x3a8);
    if (iVar3 == 0) {
        iVar1 = scnprintf(param_3,0x1000,0x80017b3);
    }
    else {
        iVar2 = *(iVar3 + 0xa8);
        if (iVar2 == 0) {
            iVar2 = *(iVar3 + 0x38);
        }
        iVar1 = scnprintf(param_3,0x1000,0x8001961,iVar2);
    }
    return iVar1;
}


// ===== sym.preset_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080029b0 (size 8) =====

ulong sym.preset_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    
    uVar1 = str.config:0_3_n._0_8_;
    param_3[8] = '-';
    param_3[9] = '3';
    param_3[10] = '\n';
    param_3[0xb] = '\0';
    *param_3 = uVar1;
    return 0xb;
}


// ===== sym.sinkid_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080029b8 (size 8) =====

ulong sym.sinkid_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(ulong param_1,ulong param_2,ulong *param_3)

{
    ulong uVar1;
    
    uVar1 = CONCAT26(str.config2:0_31_n._6_2_,str.config2:0_31_n._0_6_);
    *(param_3 + 6) = CONCAT62(str.config2:0_31_n._8_6_,str.config2:0_31_n._6_2_);
    *param_3 = uVar1;
    return 0xd;
}


// ===== sym.cycacc_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080029c0 (size 8) =====

ulong sym.cycacc_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    
    uVar1 = str.config:12_n._0_8_;
    param_3[7] = '1';
    param_3[8] = '2';
    param_3[9] = '\n';
    param_3[10] = '\0';
    *param_3 = uVar1;
    return 10;
}


// ===== sym.enable_sink_show.7cdf4684e306b03727f219798c76cd56.cfi_jt @ 0x080029c8 (size 8) =====

int64_t sym.enable_sink_show.7cdf4684e306b03727f219798c76cd56.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001451,*(param_1 + 0x39a));
    return iVar1;
}


// ===== sym.format_attr_contextid_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080029d0 (size 8) =====

int64_t sym.format_attr_contextid_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,"config:%d\n",0xe);
    return iVar1;
}


// ===== sym.timestamp_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080029d8 (size 8) =====

ulong sym.timestamp_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    
    uVar1 = str.config:28_n._0_8_;
    param_3[7] = '2';
    param_3[8] = '8';
    param_3[9] = '\n';
    param_3[10] = '\0';
    *param_3 = uVar1;
    return 10;
}


// ===== sym.configid_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080029e0 (size 8) =====

ulong sym.configid_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(ulong param_1,ulong param_2,ulong *param_3)

{
    ulong uVar1;
    
    uVar1 = CONCAT17(str.config2:32_63_n[7],str.config2:32_63_n._0_7_);
    *(param_3 + 7) = CONCAT71(str.config2:32_63_n._8_7_,str.config2:32_63_n[7]);
    *param_3 = uVar1;
    return 0xe;
}


// ===== sym.contextid2_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080029e8 (size 8) =====

ulong sym.contextid2_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    
    uVar1 = str.config:15_n._0_8_;
    param_3[7] = '1';
    param_3[8] = '5';
    param_3[9] = '\n';
    param_3[10] = '\0';
    *param_3 = uVar1;
    return 10;
}


// ===== sym.contextid1_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x080029f0 (size 8) =====

ulong sym.contextid1_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    
    uVar1 = str.config:14_n._0_8_;
    param_3[7] = '1';
    param_3[8] = '4';
    param_3[9] = '\n';
    param_3[10] = '\0';
    *param_3 = uVar1;
    return 10;
}


// ===== sym.coresight_timeout.cfi_jt @ 0x080029f8 (size 8) =====

ulong sym.coresight_timeout.cfi_jt(char *param_1,uint32_t param_2,uint64_t param_3,int param_4)

{
    uint64_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = -99;
    if (*param_1 == '\0') goto code_r0x080044f0;
    do {
        uVar1 = sym.readl(*(param_1 + 8) + param_2);
        while( true ) {
            uVar1 = 1L << (param_3 & 0x3f) & uVar1 & 0xffffffff;
            if (param_4 == 0) {
                if (uVar1 == 0) {
                    return 0;
                }
            }
            else if (uVar1 != 0) {
                return 0;
            }
            if (iVar3 == 0) {
                return 0xfffffff5;
            }
            __const_udelay(0x10c7);
            iVar3 = iVar3 + 1;
            if (*param_1 != '\0') break;
code_r0x080044f0:
            pcVar2 = *(param_1 + 8);
            __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar2,0x8001070);
            uVar1 = (*pcVar2)(param_2,0,0);
        }
    } while( true );
}


// ===== sym.__typeid__ZTSFvP16coresight_deviceE_global_addr @ 0x08002a00 (size 8) =====

void sym.__typeid__ZTSFvP16coresight_deviceE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    piVar4 = _segment.ehdr + 0x390;
    do {
        piVar4 = *piVar4;
        if (_segment.ehdr + 0x390 == piVar4) goto code_r0x080086c8;
    } while (piVar4[-3] != param_1);
    uVar3 = __list_del_entry_valid(piVar4);
    if ((uVar3 & 1) != 0) {
        iVar1 = *piVar4;
        piVar2 = piVar4[1];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *piVar4 = -0x2152ffffffffff00;
    piVar4[1] = -0x2152fffffffffede;
    kfree(piVar4 + -3);
code_r0x080086c8:
    mutex_unlock(obj.cscfg_mutex);
    return;
}


// ===== sym.coresight_disclaim_device.cfi_jt @ 0x08002a08 (size 8) =====

void sym.coresight_disclaim_device.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        sym.writel_relaxed(0xc5acce55,*(param_1 + 0x28) + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.coresight_disclaim_device_unlocked(param_1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*(param_1 + 0x28) + 0xfb0);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002e74);
    (*pcVar1)();
}


// ===== sym.cscfg_csdev_reset_feats.cfi_jt @ 0x08002a10 (size 8) =====

void sym.cscfg_csdev_reset_feats.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(param_1 + 0x418);
    piVar1 = param_1 + 0x3f8;
    if (piVar1 != *piVar1) {
        for (piVar3 = *piVar1; piVar1 != piVar3; piVar3 = *piVar3) {
            sym.cscfg_reset_feat(piVar3 + -2);
        }
    }
    _raw_spin_unlock_irqrestore(param_1 + 0x418,uVar2);
    return;
}


// ===== sym.coresight_disclaim_device_unlocked.cfi_jt @ 0x08002a18 (size 8) =====

void sym.coresight_disclaim_device_unlocked.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8002d70);
        (*pcVar2)();
    }
    if (*(param_1 + 0x20) == '\0') {
        pcVar2 = *(param_1 + 0x28);
        __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar2,0x8001090);
        iVar1 = (*pcVar2)(0xfa4,1,0);
    }
    else {
        iVar1 = sym.readl_relaxed(*(param_1 + 0x28) + 0xfa4);
    }
    if (iVar1 == 2) {
        if (*(param_1 + 0x20) == '\0') {
            pcVar2 = *(param_1 + 0x30);
            __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar2,0x80010b0);
            (*pcVar2)(2,0xfa4,1,0);
            InstructionSynchronizationBarrier();
        }
        else {
            sym.writel_relaxed(2,*(param_1 + 0x28) + 0xfa4);
            InstructionSynchronizationBarrier();
        }
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8002db4);
    (*pcVar2)();
}


// ===== sym.coresight_disable.cfi_jt @ 0x08002a20 (size 8) =====

void sym.coresight_disable.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cti_assoc_ops);
    sym.__coresight_disable(param_1);
    mutex_unlock(obj.cti_assoc_ops);
    return;
}


// ===== sym.cscfg_csdev_disable_active_config.cfi_jt @ 0x08002a28 (size 8) =====

void sym.cscfg_csdev_disable_active_config.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x418;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    arg1 = *(param_1 + 0x420);
    if ((arg1 == 0) || (*(arg1 + 0x10) == '\0')) {
        *(param_1 + 0x420) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
    }
    else {
        *(arg1 + 0x10) = 0;
        *(param_1 + 0x420) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        sym.cscfg_csdev_disable_config(arg1);
    }
    return;
}


// ===== sym.coresight_unregister.cfi_jt @ 0x08002a30 (size 8) =====

void sym.coresight_unregister.cfi_jt(int64_t *param_1)

{
    int64_t arg2;
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.etm_perf_del_symlink_sink(param_1);
    if ((_segment.ehdr != 0) && (pcVar1 = *(_segment.ehdr + 8), pcVar1 != NULL)) {
        if (6 < (pcVar1 + -0x8002a00 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x3a4aa1703f90ff56,pcVar1,0x8000e90);
        }
        (*pcVar1)(param_1);
    }
    if (**param_1 != 0) {
        bus_for_each_dev(obj.coresight_bustype,0,param_1,
                         sym.coresight_remove_match.7cdf4684e306b03727f219798c76cd56.cfi_jt);
    }
    if ((*(param_1 + 1) | 2) == 3) {
        bus_for_each_dev(obj.coresight_bustype,0,param_1,
                         sym.coresight_remove_sink_ref.7cdf4684e306b03727f219798c76cd56.cfi_jt);
    }
    iVar2 = *param_1;
    if (0 < *(iVar2 + 4)) {
        iVar3 = 0;
        iVar4 = 0;
        iVar5 = *(iVar2 + 8);
        do {
            if ((param_1 != NULL) && (arg2 = iVar5 + iVar3, *(arg2 + 0x18) != 0)) {
                sym.coresight_remove_links(param_1,arg2);
            }
            if (*(iVar5 + iVar3 + 0x10) != 0) {
                fwnode_handle_put();
                *(*(iVar2 + 8) + iVar3 + 0x10) = 0;
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x28;
        } while (iVar4 < *(iVar2 + 4));
    }
    if (param_1 != NULL) {
        sym.coresight_remove_conns_sysfs_group(param_1);
    }
    device_unregister(param_1 + 7);
    return;
}


// ===== sym.etm_setup_aux.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt @ 0x08002a38 (size 8) =====

ulong * sym.etm_setup_aux.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt
                  (int64_t param_1,ulong param_2,uint param_3,uint32_t param_4)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    int iVar6;
    uint32_t uVar7;
    ulong *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t arg2;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *extraout_x11;
    ulong *extraout_x11_00;
    ulong *in_x18;
    code *pcVar12;
    int64_t arg1;
    ulong unaff_x30;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    puVar8 = sym.alloc_event_data(*(param_1 + 0x28c));
    if (puVar8 == NULL) {
        return NULL;
    }
    *puVar8 = 0xfffffffe0;
    puVar8[1] = puVar8 + 1;
    puVar8[2] = puVar8 + 1;
    puVar8[3] = sym.free_event_data.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    uVar9 = *(param_1 + 0x118);
    if (uVar9 == 0) {
        iVar10 = 0;
        iVar6 = uVar9 >> 0x20;
    }
    else {
        iVar10 = sym.coresight_get_sink_by_id(uVar9);
        uVar9 = *(param_1 + 0x118);
        iVar6 = uVar9 >> 0x20;
    }
    if (iVar6 != 0) {
        iVar6 = sym.cscfg_activate_config(uVar9 >> 0x20);
        if (iVar6 != 0) goto code_r0x08006a74;
        *(puVar8 + 8) = uVar9 >> 0x20;
    }
    puVar1 = puVar8 + 6;
    uVar7 = cpumask_next(0xffffffff,puVar1);
    *extraout_x11 = extraout_x8;
    uVar4 = extraout_x8;
    arg2 = iVar10;
    if (uVar7 < extraout_x8) {
        iStack_68 = 0;
        do {
            uVar9 = uVar7;
            if (0x1f < uVar7) {
    //WARNING: Does not return
                pcVar12 = SoftwareBreakpoint(0x5512,0x8006abc);
                (*pcVar12)();
            }
            arg1 = *(obj.csdev_src + *(__per_cpu_offset + uVar9 * 8));
            if (arg1 == 0) {
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            else {
                iVar5 = iStack_68;
                if (iVar10 == 0) {
                    arg2 = sym.coresight_find_default_sink(arg1);
                    if (arg2 == 0) {
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                                *puVar1 = *puVar1 & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        arg2 = 0;
                    }
                    else {
                        iVar5 = arg2;
                        if ((iStack_68 == 0) ||
                           ((*(iStack_68 + 0xc) == *(arg2 + 0xc) && (**(iStack_68 + 0x18) == **(arg2 + 0x18)))))
                        goto code_r0x080068ec;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                                *puVar1 = *puVar1 & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                    }
                }
                else {
code_r0x080068ec:
                    iStack_68 = iVar5;
                    uVar11 = sym.coresight_build_path(arg1,arg2);
                    if (uVar11 < 0xfffffffffffff001) {
                        *(*(__per_cpu_offset + uVar9 * 8) + puVar8[9]) = uVar11;
                    }
                    else {
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                                *puVar1 = *puVar1 & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                    }
                }
            }
            uVar7 = cpumask_next(uVar9,puVar1);
            *extraout_x11_00 = extraout_x8_00;
            uVar4 = extraout_x8_00;
        } while (uVar7 < extraout_x8_00);
    }
    if (arg2 != 0) {
        uVar11 = *puVar1;
        uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar7 = 0x20;
        if (uVar11 != 0) {
            uVar7 = LZCOUNT((uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        if (uVar7 < uVar4) {
            pcVar12 = *(**(arg2 + 0x18) + 0x10);
            if ((pcVar12 != NULL) && (*(**(arg2 + 0x18) + 0x18) != 0)) {
                __cfi_slowpath_diag(0x572ebecfa6e4eece,pcVar12,0x8001190);
                iVar10 = (*pcVar12)(arg2,param_1,param_2,param_3,param_4 & 1);
                puVar8[7] = iVar10;
                if (iVar10 != 0) {
                    return puVar8;
                }
            }
        }
    }
code_r0x08006a74:
    queue_work_on(0x20,_mutex_unlock,puVar8);
    return NULL;
}


// ===== sym.coresight_set_cti_ops @ 0x08002a40 (size 20) =====

void sym.coresight_set_cti_ops(int64_t arg1)

{
    _segment.ehdr = arg1;
    return;
}


// ===== sym.coresight_remove_cti_ops @ 0x08002a54 (size 20) =====

void sym.coresight_remove_cti_ops(void)

{
    _segment.ehdr = 0;
    return;
}


// ===== sym.coresight_set_percpu_sink @ 0x08002a68 (size 52) =====

void sym.coresight_set_percpu_sink(uint32_t arg1,int64_t arg2)

{
    code *pcVar1;
    
    if (arg1 < 0x20) {
        *(obj.csdev_sink + *(__per_cpu_offset + arg1 * 8)) = arg2;
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002a9c);
    (*pcVar1)();
}


// ===== sym.coresight_get_percpu_sink @ 0x08002a9c (size 52) =====

ulong sym.coresight_get_percpu_sink(uint32_t arg1)

{
    code *pcVar1;
    
    if (arg1 < 0x20) {
        return *(obj.csdev_sink + *(__per_cpu_offset + arg1 * 8));
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002ad0);
    (*pcVar1)();
}


// ===== sym.coresight_set_csr_ops @ 0x08002ad0 (size 20) =====

void sym.coresight_set_csr_ops(int64_t arg1)

{
    _segment.ehdr = arg1;
    return;
}


// ===== sym.coresight_remove_csr_ops @ 0x08002ae4 (size 20) =====

void sym.coresight_remove_csr_ops(void)

{
    _segment.ehdr = 0;
    return;
}


// ===== sym.coresight_claim_device_unlocked @ 0x08002af8 (size 420) =====

ulong sym.coresight_claim_device_unlocked(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8002b74);
        (*pcVar2)();
    }
    if (*(arg1 + 0x20) == '\0') {
        pcVar2 = *(arg1 + 0x28);
        __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar2,0x8001090);
        iVar1 = (*pcVar2)(0xfa4,1,0);
    }
    else {
        iVar1 = sym.readl_relaxed(*(arg1 + 0x28) + 0xfa4);
    }
    if (iVar1 == 0) {
        if (*(arg1 + 0x20) == '\0') {
            pcVar2 = *(arg1 + 0x30);
            __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar2,0x80010b0);
            (*pcVar2)(2,4000,1,0);
        }
        else {
            sym.writel_relaxed(2,*(arg1 + 0x28) + 4000);
        }
        InstructionSynchronizationBarrier();
        if (*(arg1 + 0x20) == '\0') {
            pcVar2 = *(arg1 + 0x28);
            __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar2,0x8001090);
            iVar1 = (*pcVar2)(0xfa4,1,0);
        }
        else {
            iVar1 = sym.readl_relaxed(*(arg1 + 0x28) + 0xfa4);
        }
        if (iVar1 == 2) {
            return 0;
        }
        if (*(arg1 + 0x20) == '\0') {
            pcVar2 = *(arg1 + 0x30);
            __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar2,0x80010b0);
            (*pcVar2)(2,0xfa4,1,0);
        }
        else {
            sym.writel_relaxed(2,*(arg1 + 0x28) + 0xfa4);
        }
        InstructionSynchronizationBarrier();
    }
    return 0xfffffff0;
}


// ===== sym.coresight_claim_device @ 0x08002c9c (size 116) =====

uint sym.coresight_claim_device(int64_t arg1)

{
    code *pcVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        sym.writel_relaxed(0xc5acce55,*(arg1 + 0x28) + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar2 = sym.coresight_claim_device_unlocked(arg1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*(arg1 + 0x28) + 0xfb0);
        return uVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002d10);
    (*pcVar1)();
}


// ===== sym.coresight_disclaim_device_unlocked @ 0x08002d14 (size 244) =====

void sym.coresight_disclaim_device_unlocked(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8002d70);
        (*pcVar2)();
    }
    if (*(arg1 + 0x20) == '\0') {
        pcVar2 = *(arg1 + 0x28);
        __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar2,0x8001090);
        iVar1 = (*pcVar2)(0xfa4,1,0);
    }
    else {
        iVar1 = sym.readl_relaxed(*(arg1 + 0x28) + 0xfa4);
    }
    if (iVar1 == 2) {
        if (*(arg1 + 0x20) == '\0') {
            pcVar2 = *(arg1 + 0x30);
            __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar2,0x80010b0);
            (*pcVar2)(2,0xfa4,1,0);
            InstructionSynchronizationBarrier();
        }
        else {
            sym.writel_relaxed(2,*(arg1 + 0x28) + 0xfa4);
            InstructionSynchronizationBarrier();
        }
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8002db4);
    (*pcVar2)();
}


// ===== sym.coresight_disclaim_device @ 0x08002e08 (size 108) =====

void sym.coresight_disclaim_device(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        sym.writel_relaxed(0xc5acce55,*(arg1 + 0x28) + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.coresight_disclaim_device_unlocked(arg1);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*(arg1 + 0x28) + 0xfb0);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002e74);
    (*pcVar1)();
}


// ===== sym.coresight_set_assoc_ectdev_mutex @ 0x08002e78 (size 84) =====

void sym.coresight_set_assoc_ectdev_mutex(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cti_assoc_ops);
    *(arg1 + 1000) = arg2;
    mutex_unlock(obj.cti_assoc_ops);
    return;
}


// ===== sym.coresight_disable_path @ 0x08002ecc (size 40) =====

void sym.coresight_disable_path(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.coresight_disable_path_from.llvm.6468340166659988919(arg1,0);
    return;
}


// ===== sym.coresight_disable_path_from.llvm.6468340166659988919 @ 0x08002ef4 (size 604) =====

void sym.coresight_disable_path_from.llvm.6468340166659988919(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    uint32_t uVar6;
    int64_t *arg1_00;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        arg2 = *arg1 + -8;
    }
    piVar8 = *(arg2 + 8);
    do {
        if (piVar8 == arg1) {
            return;
        }
        arg1_00 = piVar8[-1];
    //switch table (4 cases) at 0x8001984
        switch(arg1_00[1]) {
        case 1:
            sym.coresight_set_csr_atid(arg1,arg1_00,0);
            goto code_r0x08003034;
        case 2:
code_r0x08002fcc:
            if ((*(piVar8[1] + -8) != 0) && (iVar7 = *(*piVar8 + -8), iVar7 != 0)) {
                uVar2 = sym.coresight_find_link_inport(arg1_00,*(piVar8[1] + -8),arg1);
                uVar3 = sym.coresight_find_link_outport(arg1_00,iVar7,arg1);
                if (arg1_00[2] == 2) {
                    uVar6 = *(*arg1_00 + 4);
                }
                else if (arg1_00[2] == 1) {
                    uVar6 = **arg1_00;
                }
                else {
                    uVar6 = 1;
                }
                pcVar1 = *(*(arg1_00[3] + 8) + 8);
                if (pcVar1 != NULL) {
                    __cfi_slowpath_diag(0x993c50d2d386f782,pcVar1,0x8000f10);
                    (*pcVar1)(arg1_00,uVar2,uVar3);
                    sym.coresight_control_assoc_ectdev(arg1_00,0);
                }
                if (0 < uVar6) {
                    iVar7 = 0;
                    do {
                        if (*(arg1_00[0x79] + iVar7) != 0) goto code_r0x08002f58;
                        iVar7 = iVar7 + 4;
                    } while (uVar6 * 4 - iVar7 != 0);
                }
                *(arg1_00 + 0x3d1) = 0;
            }
            break;
        case 3:
            if (arg1 == 0) {
                if (arg1_00 != NULL) goto code_r0x08002fcc;
            }
            else {
                piVar5 = *(*(arg1 + 8) + -8);
                if ((*(piVar5 + 1) | 2) != 3) {
                    piVar5 = NULL;
                }
                if (arg1_00 != piVar5) goto code_r0x08002fcc;
            }
code_r0x08003034:
            pcVar1 = *(*arg1_00[3] + 8);
            if (pcVar1 != NULL) {
                if (2 < (pcVar1 + -0x8002890 >> 3 | pcVar1 << 0x3d)) {
                    __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar1,0x8000eb0);
                }
                iVar4 = (*pcVar1)(arg1_00);
                if (iVar4 == 0) {
                    sym.coresight_control_assoc_ectdev(arg1_00,0);
                    *(arg1_00 + 0x3d1) = 0;
                }
            }
            break;
        case 4:
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8002f58);
            (*pcVar1)();
        }
code_r0x08002f58:
        piVar8 = *piVar8;
    } while( true );
}


// ===== sym.coresight_enable_path @ 0x08003154 (size 668) =====

int sym.coresight_enable_path(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t *arg3_00;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t arg1_00;
    int64_t arg2_00;
    code *pcVar5;
    ulong unaff_x30;
    
    arg3_00 = arg1;
    *in_x18 = unaff_x30;
    piVar4 = arg3_00[1];
    if (piVar4 == arg3_00) {
        return 0;
    }
    iVar3 = 0;
    do {
        arg1_00 = piVar4[-1];
    //switch table (4 cases) at 0x8001994
        switch(*(arg1_00 + 8)) {
        case 2:
code_r0x0800321c:
            iVar3 = -0x16;
            if ((*(piVar4[1] + -8) == 0) || (arg2_00 = *(*piVar4 + -8), arg2_00 == 0)) {
code_r0x080033bc:
                sym.coresight_disable_path_from.llvm.6468340166659988919(arg3_00,piVar4 + -1);
                return iVar3;
            }
            iVar1 = sym.coresight_find_link_inport(arg1_00,*(piVar4[1] + -8),arg3_00);
            iVar2 = sym.coresight_find_link_outport(arg1_00,arg2_00,arg3_00);
            if (((*(arg1_00 + 0x10) == 1) && (iVar3 = iVar1, iVar1 < 0)) ||
               ((*(arg1_00 + 0x10) == 2 && (iVar3 = iVar2, iVar2 < 0)))) goto code_r0x080033bc;
            if (**(*(arg1_00 + 0x18) + 8) != 0) {
                iVar3 = sym.coresight_control_assoc_ectdev(arg1_00,1);
                if (iVar3 != 0) goto code_r0x080033bc;
                pcVar5 = **(*(arg1_00 + 0x18) + 8);
                __cfi_slowpath_diag(0xab6cf6ca0af7719d,pcVar5,0x8000f70);
                iVar3 = (*pcVar5)(arg1_00,iVar1,iVar2);
                if (iVar3 != 0) {
                    sym.coresight_control_assoc_ectdev(arg1_00,0);
                    goto code_r0x080033bc;
                }
            }
            iVar3 = 0;
            *(arg1_00 + 0x3d1) = 1;
            break;
        case 3:
            if ((arg3_00 == NULL) || ((*(*(arg3_00[1] + -8) + 8) | 2) != 3)) {
                if (arg1_00 != 0) goto code_r0x0800321c;
            }
            else if (arg1_00 != *(arg3_00[1] + -8)) goto code_r0x0800321c;
        case 1:
            if (***(arg1_00 + 0x18) == 0) {
                return -0x16;
            }
            iVar3 = sym.coresight_control_assoc_ectdev(arg1_00,1);
            if (iVar3 != 0) {
                return iVar3;
            }
            pcVar5 = ***(arg1_00 + 0x18);
            __cfi_slowpath_diag(0x37c4900363bd9ece,pcVar5,0x8000f30);
            iVar3 = (*pcVar5)(arg1_00,arg2 & 0xffffffff,arg3);
            if (iVar3 != 0) {
                sym.coresight_control_assoc_ectdev(arg1_00,0);
                return iVar3;
            }
            *(arg1_00 + 0x3d1) = 1;
            if (*(arg1_00 + 8) == 1) {
                iVar3 = sym.coresight_set_csr_atid(arg3_00,arg1_00,1);
            }
            else {
                iVar3 = 0;
            }
            break;
        case 4:
            break;
        default:
            goto code_r0x080033bc;
        }
        piVar4 = piVar4[1];
        if (piVar4 == arg3_00) {
            return iVar3;
        }
    } while( true );
}


// ===== sym.coresight_get_sink @ 0x080033f0 (size 52) =====

int64_t sym.coresight_get_sink(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = 0;
    if ((arg1 != 0) && (iVar1 = *(*(arg1 + 8) + -8), (*(iVar1 + 8) | 2) != 3)) {
        return 0;
    }
    return iVar1;
}


// ===== sym.coresight_set_csr_atid @ 0x08003424 (size 376) =====

uint64_t sym.coresight_set_csr_atid(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint *arg2_00;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    code *pcVar7;
    uint *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar6 = *(*arg1 + -8), *(iVar6 + 8) != 4 || iVar6 == 0)) {
        uVar5 = 0xffffffea;
    }
    else {
        uVar3 = sym.of_coresight_get_atid_number(iVar6);
        uVar5 = uVar3;
        if (-1 < uVar3) {
            arg2_00 = __kmalloc(uVar5 << 2,0xdc0);
            if (arg2_00 == NULL) {
                uVar5 = 0xfffffff4;
            }
            else {
                uVar4 = sym.of_coresight_get_atid(iVar6,arg2_00,uVar5);
                uVar2 = uVar4 & 0xffffffff;
                if (-1 < uVar4) {
                    if (_segment.ehdr == NULL) {
                        uVar2 = 0xffffffea;
                    }
                    else if (uVar3 != 0) {
                        pcVar7 = *_segment.ehdr;
                        __cfi_slowpath_diag(0x86ccc5698960caa2,pcVar7,0x8000f50);
                        uVar4 = (*pcVar7)(arg2,*arg2_00,arg3 & 1);
                        uVar2 = uVar4 & 0xffffffff;
                        if ((-1 < uVar4) && (uVar3 != 1)) {
                            iVar6 = uVar5 - 2;
                            puVar8 = arg2_00;
                            do {
                                puVar8 = puVar8 + 1;
                                pcVar7 = *_segment.ehdr;
                                __cfi_slowpath_diag(0x86ccc5698960caa2,pcVar7,0x8000f50);
                                uVar5 = (*pcVar7)(arg2,*puVar8,arg3 & 1);
                                uVar2 = uVar5 & 0xffffffff;
                                if (uVar5 < 0) break;
                                bVar1 = iVar6 != 0;
                                iVar6 = iVar6 + -1;
                            } while (bVar1);
                        }
                    }
                }
                uVar5 = uVar2;
                kfree(arg2_00);
            }
        }
    }
    return uVar5;
}


// ===== sym.coresight_get_enabled_sink @ 0x0800359c (size 44) =====

void sym.coresight_get_enabled_sink(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        sym.coresight_find_enabled_sink(arg1);
    }
    return;
}


// ===== sym.coresight_find_enabled_sink @ 0x080035c8 (size 128) =====

int64_t sym.coresight_find_enabled_sink(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 8) | 2) != 3) || (*(arg1 + 0x3d2) == '\0')) {
        uVar1 = *(*arg1 + 4);
        uVar3 = uVar1;
        if (0 < uVar1) {
            piVar4 = *(*arg1 + 8) + 0x18;
            do {
                if ((*piVar4 != 0) && (iVar2 = sym.coresight_find_enabled_sink(*piVar4), iVar2 != 0)) {
                    return iVar2;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 5;
            } while (uVar3 != 0);
        }
        arg1 = 0;
    }
    return arg1;
}


// ===== sym.coresight_get_sink_by_id @ 0x08003648 (size 120) =====

int64_t sym.coresight_get_sink_by_id(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_18 = *(iVar3 + 0x5e0);
    uStack_1c = arg1;
    iVar2 = bus_find_device(obj.coresight_bustype,0,&uStack_1c,
                            sym.coresight_sink_by_id.7cdf4684e306b03727f219798c76cd56.cfi_jt);
    iVar1 = sp_el0;
    iVar3 = 0;
    if (iVar2 != 0) {
        iVar3 = iVar2 + -0x38;
    }
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return iVar3;
    }
    auVar4 = __stack_chk_fail(iVar3);
    if ((((*(auVar4._0_8_ + -0x30) | 2) == 3) && (iVar3 = *(auVar4._0_8_ + 0x3a0), iVar3 != 0)) &&
       (*auVar4._8_8_ == *(iVar3 + 0x20))) {
        return 1;
    }
    return 0;
}


// ===== sym.coresight_sink_by_id @ 0x080036c0 (size 68) =====

ulong sym.coresight_sink_by_id(int64_t arg1,int64_t arg2)

{
    if ((((*(arg1 + -0x30) | 2) == 3) && (*(arg1 + 0x3a0) != 0)) && (*arg2 == *(*(arg1 + 0x3a0) + 0x20))) {
        return 1;
    }
    return 0;
}


// ===== sym.coresight_build_path @ 0x08003704 (size 184) =====

int64_t sym.coresight_build_path(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        iVar2 = -0x16;
    }
    else {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x10);
        if (iVar2 == 0) {
            iVar2 = -0xc;
        }
        else {
            *iVar2 = iVar2;
            *(iVar2 + 8) = iVar2;
            iVar1 = sym._coresight_build_path(arg1,arg2,iVar2,arg1);
            if (iVar1 != 0) {
                kfree(iVar2);
                iVar2 = iVar1;
            }
        }
    }
    return iVar2;
}


// ===== sym._coresight_build_path @ 0x080037bc (size 656) =====

ulong sym._coresight_build_path(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *arg1_00;
    int64_t iVar3;
    ulong uVar4;
    int64_t *piVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t *puVar9;
    int64_t *piVar10;
    code *pcVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    arg1_00 = arg1;
    *in_x18 = unaff_x30;
    if (arg1_00 == arg2) {
code_r0x0800397c:
        uVar4 = sym.coresight_grab_device(arg1_00);
        if (uVar4 == 0) {
            iVar16 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar16 = 0x30;
            }
            puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xdc0,0x18);
            if (puVar6 == NULL) {
                uVar4 = 0xfffffff4;
            }
            else {
                uVar13 = *arg3;
                puVar9 = puVar6 + 1;
                *puVar6 = arg1_00;
                uVar7 = __list_add_valid(puVar9,arg3,uVar13);
                if ((uVar7 & 1) == 0) {
                    uVar4 = 0;
                }
                else {
                    uVar4 = 0;
                    *(uVar13 + 8) = puVar9;
                    puVar6[1] = uVar13;
                    puVar6[2] = arg3;
                    *arg3 = puVar9;
                }
            }
        }
    }
    else {
        if (((((arg1_00 != NULL) && (arg1_00[1] == 4)) && (arg2 != 0)) &&
            ((*(arg1_00 + 0xc) == 1 && (*(arg2 + 8) == 1)))) && (*(arg2 + 0xc) == 4)) {
            pcVar11 = **(arg1_00[3] + 0x10);
            if (2 < (pcVar11 + -0x8002890 >> 3 | pcVar11 << 0x3d)) {
                __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar11,0x8000f90);
            }
            uVar1 = (*pcVar11)(arg1_00);
            if (0x1f < uVar1) {
    //WARNING: Does not return
                pcVar11 = SoftwareBreakpoint(0x5512,0x8003a4c);
                (*pcVar11)();
            }
            if ((*(obj.csdev_sink + *(__per_cpu_offset + uVar1 * 8)) == arg2) &&
               (iVar2 = sym.coresight_grab_device(arg2), iVar2 == 0)) {
                iVar16 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar16 = 0x30;
                }
                piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xdc0,0x18);
                if (piVar5 != NULL) {
                    iVar16 = *arg3;
                    piVar10 = piVar5 + 1;
                    *piVar5 = arg2;
                    uVar7 = __list_add_valid(piVar10,arg3,iVar16);
                    if ((uVar7 & 1) != 0) {
                        *(iVar16 + 8) = piVar10;
                        piVar5[1] = iVar16;
                        piVar5[2] = arg3;
                        *arg3 = piVar10;
                    }
                    goto code_r0x0800397c;
                }
            }
        }
        iVar16 = *arg1_00;
        if (0 < *(iVar16 + 4)) {
            iVar14 = 0;
            iVar15 = 0;
            do {
                iVar12 = *(iVar16 + 8) + iVar14;
                iVar3 = *(iVar12 + 8);
                iVar12 = *(iVar12 + 0x18);
                if (iVar3 == 0) {
                    if (iVar12 != 0) goto code_r0x080038ac;
                }
                else {
                    iVar8 = *(arg4 + 0xa8);
                    if (iVar8 == 0) {
                        iVar8 = *(arg4 + 0x38);
                    }
                    iVar2 = strcmp(iVar3,iVar8);
                    if (iVar2 == 0 && iVar12 != 0) {
code_r0x080038ac:
                        iVar2 = sym._coresight_build_path(iVar12,arg2,arg3,arg4);
                        if (iVar2 == 0) goto code_r0x0800397c;
                        iVar16 = *arg1_00;
                    }
                }
                iVar15 = iVar15 + 1;
                iVar14 = iVar14 + 0x28;
            } while (iVar15 < *(iVar16 + 4));
        }
        uVar4 = 0xffffffed;
    }
    return uVar4;
}


// ===== sym.coresight_release_path @ 0x08003a4c (size 328) =====

void sym.coresight_release_path(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    piVar2 = arg1;
    *in_x18 = unaff_x30;
    piVar1 = *piVar2;
    while (piVar1 != piVar2) {
        piVar6 = *piVar1;
        piVar7 = piVar1[-1];
        iVar5 = piVar7[0x13];
        __pm_runtime_idle(iVar5,5);
        put_device(iVar5);
        module_put(*(*(iVar5 + 0x88) + 0x10));
        iVar5 = *piVar7;
        if (0 < *(iVar5 + 4)) {
            iVar8 = 0;
            iVar9 = 0x18;
            do {
                iVar4 = *(*(iVar5 + 8) + iVar9);
                if ((iVar4 != 0) && (*(iVar4 + 8) == 5)) {
                    iVar5 = *(iVar4 + 0x98);
                    __pm_runtime_idle(iVar5,5);
                    put_device(iVar5);
                    module_put(*(*(iVar5 + 0x88) + 0x10));
                    iVar5 = *piVar7;
                }
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + 0x28;
            } while (iVar8 < *(iVar5 + 4));
        }
        uVar3 = __list_del_entry_valid(piVar1);
        if ((uVar3 & 1) != 0) {
            iVar5 = *piVar1;
            piVar7 = piVar1[1];
            *(iVar5 + 8) = piVar7;
            *piVar7 = iVar5;
        }
        *piVar1 = -0x2152ffffffffff00;
        piVar1[1] = -0x2152fffffffffede;
        kfree(piVar1 + -1);
        piVar1 = piVar6;
    }
    kfree(piVar2);
    return;
}


// ===== sym.coresight_find_default_sink @ 0x08003b94 (size 276) =====

void sym.coresight_find_default_sink(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    code *pcVar4;
    code *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_2c = 0;
    if (*(arg1 + 0x3e0) != 0) goto code_r0x08003c48;
    if (arg1 == 0) goto code_r0x08003c38;
    if (*(arg1 + 8) != 4) goto code_r0x08003c38;
    if (*(arg1 + 0xc) != 1) goto code_r0x08003c38;
    pcVar4 = **(*(arg1 + 0x18) + 0x10);
    if (2 < (pcVar4 + -0x8002890 >> 3 | pcVar4 << 0x3d)) goto code_r0x08003c78;
    while( true ) {
        uVar1 = (*pcVar4)(arg1);
        if (0x1f < uVar1) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8003ca8);
            (*pcVar4)();
        }
        iVar2 = *(obj.csdev_sink + *(__per_cpu_offset + uVar1 * 8));
        *(arg1 + 0x3e0) = iVar2;
        if (iVar2 == 0) {
code_r0x08003c38:
            uVar3 = sym.coresight_find_sink(arg1,&uStack_2c);
            *(arg1 + 0x3e0) = uVar3;
        }
code_r0x08003c48:
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_28) break;
        __stack_chk_fail();
        pcVar4 = extraout_x8;
code_r0x08003c78:
        __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar4,0x8000e50);
    }
    return;
}


// ===== sym.coresight_find_sink @ 0x08003ca8 (size 328) =====

uint64_t sym.coresight_find_sink(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    uint64_t *puVar3;
    int iVar4;
    uint32_t arg1_00;
    int64_t iVar5;
    uint64_t *puVar7;
    char *pcVar8;
    int *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    uint64_t *puVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int iVar14;
    int iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    int iStack_5c;
    int64_t iStack_58;
    uint64_t uVar6;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar4 = *arg2 + 1;
    if (((*(arg1 + 8) | 2) == 3) && (1 < *(arg1 + 0xc))) {
        uVar10 = arg1;
        iVar14 = iVar4;
        if (*(arg1 + 8) != 1) goto code_r0x08003d28;
    }
    else {
        iVar14 = 0;
        uVar10 = 0;
code_r0x08003d28:
        iVar5 = *arg1;
        if (0 < *(iVar5 + 4)) {
            iVar12 = 0;
            iVar16 = 0x18;
            do {
                iVar5 = *(*(iVar5 + 8) + iVar16);
                uVar13 = uVar10;
                iStack_5c = iVar4;
                iVar15 = iVar14;
                if (((((iVar5 != 0) && (uVar6 = sym.coresight_find_sink(iVar5,&iStack_5c), uVar6 != 0)) &&
                     (uVar13 = uVar6, iVar15 = iStack_5c, uVar10 != 0)) &&
                    ((*(uVar6 + 0xc) <= *(uVar10 + 0xc) &&
                     (uVar13 = uVar10, iVar15 = iVar14, *(uVar6 + 0xc) == *(uVar10 + 0xc))))) &&
                   (uVar13 = uVar6, iVar15 = iStack_5c, iVar14 <= iStack_5c)) {
                    uVar13 = uVar10;
                    iVar15 = iVar14;
                }
                iVar5 = *arg1;
                iVar12 = iVar12 + 1;
                iVar16 = iVar16 + 0x28;
                uVar10 = uVar13;
                iVar14 = iVar15;
            } while (iVar12 < *(iVar5 + 4));
        }
    }
    if (uVar10 != 0) {
        *arg2 = iVar14;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.coresight_enable;
    iVar4 = *(iVar5 + 0xc);
    mutex_lock(obj.cti_assoc_ops);
    if (*(iVar5 + 8) == 4) {
        if ((*(iVar5 + 0xc) & 0xfffffffd) != 1) {
            pcVar8 = "wrong device subtype in %s\n";
            goto code_r0x08003f60;
        }
        if (*(iVar5 + 0x3d1) != '\0') {
            if (iVar4 == 3) {
                piVar9 = *(iVar5 + 0x3c8);
                Hint_Prefetch(piVar9,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(piVar9,0x10);
                    if (bVar2) {
                        *piVar9 = *piVar9 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                uVar10 = 0;
            }
            else {
                uVar10 = 0;
            }
            goto code_r0x08003f74;
        }
        iVar12 = *(iVar5 + 0x3e0);
        if (iVar12 != 0) {
            *(iVar12 + 0x3d2) = 1;
code_r0x08003e78:
            iVar16 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar16 = 0x30;
            }
            uVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xdc0,0x10);
            if (uVar10 == 0) {
                uVar10 = 0xfffffffffffffff4;
            }
            else {
                *uVar10 = uVar10;
                *(uVar10 + 8) = uVar10;
                iVar4 = sym._coresight_build_path(iVar5,iVar12,uVar10,iVar5);
                if (iVar4 != 0) {
                    kfree(uVar10);
                    uVar10 = iVar4;
                }
                if (uVar10 < 0xfffffffffffff001) {
                    arg1_00 = uVar10;
                    uVar6 = sym.coresight_enable_path(arg1_00,1,0);
                    uVar13 = uVar6 & 0xffffffff;
                    if (uVar6 == 0) {
                        uVar6 = sym.coresight_enable_source(iVar5);
                        uVar13 = uVar6 & 0xffffffff;
                        if (uVar6 == 0) {
                            iVar5 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar5 = 0x30;
                            }
                            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x18);
                            if (puVar7 != NULL) {
                                puVar11 = puVar7 + 1;
                                *puVar7 = uVar10;
                                puVar3 = _obj.cs_active_paths;
                                uVar13 = __list_add_valid(puVar11,obj.cs_active_paths,_obj.cs_active_paths);
                                uVar10 = 0;
                                if ((uVar13 & 1) != 0) {
                                    puVar3[1] = puVar11;
                                    puVar7[1] = puVar3;
                                    puVar7[2] = obj.cs_active_paths;
                                    _obj.cs_active_paths = puVar11;
                                }
                                goto code_r0x08003f74;
                            }
                            uVar13 = 0xfffffff4;
                        }
                        sym.coresight_disable_path_from.llvm.6468340166659988919(uVar10,0);
                    }
                    uVar10 = uVar13;
                    sym.coresight_release_path(arg1_00);
                    goto code_r0x08003f74;
                }
            }
            _printk(0x800175b,uVar10 & 0xffffffff);
            goto code_r0x08003f74;
        }
        if ((iVar5 != 0) && (iVar12 = sym.coresight_find_enabled_sink(iVar5), iVar12 != 0)) goto code_r0x08003e78;
    }
    else {
        pcVar8 = "wrong device type in %s\n";
code_r0x08003f60:
        _dev_err(iVar5 + 0x38,pcVar8,"coresight_enable");
    }
    uVar10 = 0xffffffea;
code_r0x08003f74:
    mutex_unlock(obj.cti_assoc_ops);
    return uVar10 & 0xffffffff;
}


// ===== sym.coresight_enable @ 0x08003df0 (size 608) =====

uint64_t sym.coresight_enable(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    uint64_t *puVar4;
    int iVar5;
    uint32_t arg1_00;
    uint64_t *puVar7;
    char *pcVar8;
    int *piVar9;
    ulong *in_x18;
    uint64_t arg3;
    uint64_t *puVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint64_t uVar6;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xc);
    mutex_lock(obj.cti_assoc_ops);
    if (*(arg1 + 8) == 4) {
        if ((*(arg1 + 0xc) & 0xfffffffd) != 1) {
            pcVar8 = "wrong device subtype in %s\n";
            goto code_r0x08003f60;
        }
        if (*(arg1 + 0x3d1) != '\0') {
            if (iVar5 == 3) {
                piVar9 = *(arg1 + 0x3c8);
                Hint_Prefetch(piVar9,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar9,0x10);
                    if (bVar3) {
                        *piVar9 = *piVar9 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                arg3 = 0;
            }
            else {
                arg3 = 0;
            }
            goto code_r0x08003f74;
        }
        iVar11 = *(arg1 + 0x3e0);
        if (iVar11 != 0) {
            *(iVar11 + 0x3d2) = 1;
code_r0x08003e78:
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
            if (arg3 == 0) {
                arg3 = 0xfffffffffffffff4;
            }
            else {
                *arg3 = arg3;
                *(arg3 + 8) = arg3;
                iVar5 = sym._coresight_build_path(arg1,iVar11,arg3,arg1);
                if (iVar5 != 0) {
                    kfree(arg3);
                    arg3 = iVar5;
                }
                if (arg3 < 0xfffffffffffff001) {
                    arg1_00 = arg3;
                    uVar6 = sym.coresight_enable_path(arg1_00,1,0);
                    uVar12 = uVar6 & 0xffffffff;
                    if (uVar6 == 0) {
                        uVar6 = sym.coresight_enable_source(arg1);
                        uVar12 = uVar6 & 0xffffffff;
                        if (uVar6 == 0) {
                            iVar11 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar11 = 0x30;
                            }
                            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x18);
                            if (puVar7 != NULL) {
                                puVar10 = puVar7 + 1;
                                *puVar7 = arg3;
                                puVar4 = _obj.cs_active_paths;
                                uVar12 = __list_add_valid(puVar10,obj.cs_active_paths,_obj.cs_active_paths);
                                arg3 = 0;
                                if ((uVar12 & 1) != 0) {
                                    puVar4[1] = puVar10;
                                    puVar7[1] = puVar4;
                                    puVar7[2] = obj.cs_active_paths;
                                    _obj.cs_active_paths = puVar10;
                                }
                                goto code_r0x08003f74;
                            }
                            uVar12 = 0xfffffff4;
                        }
                        sym.coresight_disable_path_from.llvm.6468340166659988919(arg3,0);
                    }
                    arg3 = uVar12;
                    sym.coresight_release_path(arg1_00);
                    goto code_r0x08003f74;
                }
            }
            _printk(0x800175b,arg3 & 0xffffffff);
            goto code_r0x08003f74;
        }
        if ((arg1 != 0) && (iVar11 = sym.coresight_find_enabled_sink(arg1), iVar11 != 0)) goto code_r0x08003e78;
    }
    else {
        pcVar8 = "wrong device type in %s\n";
code_r0x08003f60:
        _dev_err(arg1 + 0x38,pcVar8,"coresight_enable");
    }
    arg3 = 0xffffffea;
code_r0x08003f74:
    mutex_unlock(obj.cti_assoc_ops);
    return arg3 & 0xffffffff;
}


// ===== sym.coresight_enable_source @ 0x08004050 (size 468) =====

int sym.coresight_enable_source(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint uVar4;
    int *piVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar6 = *(*(*(arg1 + 0x18) + 0x10) + 8);
    if (2 < (pcVar6 + -0x8002890 >> 3 | pcVar6 << 0x3d)) {
        __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar6,0x8000ff0);
    }
    iVar3 = (*pcVar6)(arg1);
    if ((iVar3 < 0) ||
       (iVar3 = bus_for_each_dev(obj.coresight_bustype,0,arg1,
                                 sym.coresight_id_match.7cdf4684e306b03727f219798c76cd56.cfi_jt), iVar3 != 0)) {
        pcVar6 = *(*(*(arg1 + 0x18) + 0x10) + 8);
        if (2 < (pcVar6 + -0x8002890 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar6,0x8000fb0);
        }
        uVar4 = (*pcVar6)(arg1);
        _dev_warn(arg1 + 0x38,"traceID %d not unique\n",uVar4);
        return -0x16;
    }
    if (*(arg1 + 0x3d1) == '\0') {
        if (*(*(*(arg1 + 0x18) + 0x10) + 0x10) != 0) {
            iVar3 = sym.coresight_control_assoc_ectdev(arg1,1);
            if (iVar3 != 0) {
                return iVar3;
            }
            pcVar6 = *(*(*(arg1 + 0x18) + 0x10) + 0x10);
            __cfi_slowpath_diag(0x7a682b931f8f094,pcVar6,0x8000fd0);
            iVar3 = (*pcVar6)(arg1,0,1);
            if (iVar3 != 0) {
                sym.coresight_control_assoc_ectdev(arg1,0);
                return iVar3;
            }
        }
        *(arg1 + 0x3d1) = 1;
    }
    piVar5 = *(arg1 + 0x3c8);
    Hint_Prefetch(piVar5,2,0,1);
    do {
        cVar1 = '\x01';
        bVar2 = ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
        }
    } while (cVar1 != '\0');
    return 0;
}


// ===== sym.coresight_disable @ 0x08004224 (size 76) =====

void sym.coresight_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cti_assoc_ops);
    sym.__coresight_disable(arg1);
    mutex_unlock(obj.cti_assoc_ops);
    return;
}


// ===== sym.__coresight_disable @ 0x08004270 (size 504) =====

void sym.__coresight_disable(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    char *pcVar5;
    int *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    code *pcVar8;
    int64_t *piVar9;
    code *pcVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 8) == 4) {
        if ((*(arg1 + 0xc) & 0xfffffffd) == 1) {
            if (*(arg1 + 0x3e0) != 0) {
                *(arg1 + 0x3e0) = 0;
            }
            if (*(arg1 + 0x3d1) == '\0') {
                return;
            }
            piVar6 = *(arg1 + 0x3c8);
            Hint_Prefetch(piVar6,2,0,1);
            do {
                iVar1 = *piVar6;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar6,0x10);
                if (bVar3) {
                    *piVar6 = iVar1 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar1 + -1 == 0) {
                pcVar8 = *(*(*(arg1 + 0x18) + 0x10) + 0x18);
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0x4b596879dd0fbb8,pcVar8,0x8001050);
                    (*pcVar8)(arg1,0);
                }
                sym.coresight_control_assoc_ectdev(arg1,0);
                pcVar8 = _obj.cs_active_paths;
                *(arg1 + 0x3d1) = 0;
                if (pcVar8 == obj.cs_active_paths) {
                    return;
                }
            }
            else {
                if (*(arg1 + 0x3d1) != '\0') {
                    return;
                }
                pcVar8 = _segment.ehdr;
                if (_segment.ehdr == obj.cs_active_paths) {
                    return;
                }
            }
            piVar9 = NULL;
            do {
                pcVar10 = *pcVar8;
                piVar11 = *(pcVar8 + -8);
                if (piVar11 != NULL) {
                    iVar7 = *(*piVar11 + -8);
                    if (*(iVar7 + 8) != 4) {
                        iVar7 = 0;
                    }
                    if (iVar7 != 0 && iVar7 == arg1) {
                        uVar4 = __list_del_entry_valid(pcVar8);
                        if ((uVar4 & 1) != 0) {
                            iVar7 = *pcVar8;
                            piVar9 = *(pcVar8 + 8);
                            *(iVar7 + 8) = piVar9;
                            *piVar9 = iVar7;
                        }
                        *pcVar8 = -0x2152ffffffffff00;
                        *(pcVar8 + 8) = -0x2152fffffffffede;
                        kfree(pcVar8 + -8);
                        piVar9 = piVar11;
                    }
                }
                pcVar8 = pcVar10;
            } while (pcVar10 != obj.cs_active_paths);
            if (piVar9 == NULL) {
                return;
            }
            sym.coresight_disable_path_from.llvm.6468340166659988919(piVar9,0);
            sym.coresight_release_path(piVar9);
            return;
        }
        pcVar5 = "wrong device subtype in %s\n";
    }
    else {
        pcVar5 = "wrong device type in %s\n";
    }
    _dev_err(arg1 + 0x38,pcVar5,"__coresight_disable");
    return;
}


// ===== sym.coresight_timeout @ 0x08004468 (size 232) =====

ulong sym.coresight_timeout(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = -99;
    if (*arg1 == '\0') goto code_r0x080044f0;
    do {
        uVar1 = sym.readl(*(arg1 + 8) + (arg2 & 0xffffffffU));
        while( true ) {
            uVar1 = 1L << (arg3 & 0x3fU) & uVar1 & 0xffffffff;
            if (arg4 == 0) {
                if (uVar1 == 0) {
                    return 0;
                }
            }
            else if (uVar1 != 0) {
                return 0;
            }
            if (iVar3 == 0) {
                return 0xfffffff5;
            }
            __const_udelay(0x10c7);
            iVar3 = iVar3 + 1;
            if (*arg1 != '\0') break;
code_r0x080044f0:
            pcVar2 = *(arg1 + 8);
            __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar2,0x8001070);
            uVar1 = (*pcVar2)(arg2 & 0xffffffff,0,0);
        }
    } while( true );
}


// ===== sym.coresight_relaxed_read32 @ 0x08004550 (size 120) =====

void sym.coresight_relaxed_read32(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20) == '\0') {
        pcVar1 = *(arg1 + 0x28);
        __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar1,0x8001090);
        (*pcVar1)(arg2 & 0xffffffffU,1,0);
    }
    else {
        sym.readl_relaxed(*(arg1 + 0x28) + (arg2 & 0xffffffffU));
    }
    return;
}


// ===== sym.coresight_read32 @ 0x080045c8 (size 120) =====

void sym.coresight_read32(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20) == '\0') {
        pcVar1 = *(arg1 + 0x28);
        __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar1,0x8001070);
        (*pcVar1)(arg2 & 0xffffffffU,0,0);
    }
    else {
        sym.readl(*(arg1 + 0x28) + (arg2 & 0xffffffffU));
    }
    return;
}


// ===== sym.coresight_relaxed_write32 @ 0x08004640 (size 140) =====

void sym.coresight_relaxed_write32(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20) == '\0') {
        pcVar1 = *(arg1 + 0x30);
        __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar1,0x80010b0);
        (*pcVar1)(arg2 & 0xffffffffU,arg3 & 0xffffffffU,1,0);
    }
    else {
        sym.writel_relaxed(arg2 & 0xffffffffU,*(arg1 + 0x28) + (arg3 & 0xffffffffU));
    }
    return;
}


// ===== sym.coresight_write32 @ 0x080046cc (size 140) =====

void sym.coresight_write32(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20) == '\0') {
        pcVar1 = *(arg1 + 0x30);
        __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar1,0x80010d0);
        (*pcVar1)(arg2 & 0xffffffffU,arg3 & 0xffffffffU,0,0);
    }
    else {
        sym.writel(arg2 & 0xffffffffU,*(arg1 + 0x28) + (arg3 & 0xffffffffU));
    }
    return;
}


// ===== sym.coresight_relaxed_read64 @ 0x08004758 (size 120) =====

void sym.coresight_relaxed_read64(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20) == '\0') {
        pcVar1 = *(arg1 + 0x28);
        __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar1,0x80010f0);
        (*pcVar1)(arg2 & 0xffffffffU,1,1);
    }
    else {
        sym.readq_relaxed(*(arg1 + 0x28) + (arg2 & 0xffffffffU));
    }
    return;
}


// ===== sym.coresight_read64 @ 0x080047d0 (size 120) =====

void sym.coresight_read64(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20) == '\0') {
        pcVar1 = *(arg1 + 0x28);
        __cfi_slowpath_diag(0x984dd4adec1a3a92,pcVar1,0x8001110);
        (*pcVar1)(arg2 & 0xffffffffU,0,1);
    }
    else {
        sym.readq(*(arg1 + 0x28) + (arg2 & 0xffffffffU));
    }
    return;
}


// ===== sym.coresight_relaxed_write64 @ 0x08004848 (size 140) =====

void sym.coresight_relaxed_write64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20) == '\0') {
        pcVar1 = *(arg1 + 0x30);
        __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar1,0x8001130);
        (*pcVar1)(arg2,arg3 & 0xffffffffU,1,1);
    }
    else {
        sym.writeq_relaxed(arg2,*(arg1 + 0x28) + (arg3 & 0xffffffffU));
    }
    return;
}


// ===== sym.coresight_write64 @ 0x080048d4 (size 140) =====

void sym.coresight_write64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20) == '\0') {
        pcVar1 = *(arg1 + 0x30);
        __cfi_slowpath_diag(0x4b8ea40b87ed0f16,pcVar1,0x8001150);
        (*pcVar1)(arg2,arg3 & 0xffffffffU,0,1);
    }
    else {
        sym.writeq(arg2,*(arg1 + 0x28) + (arg3 & 0xffffffffU));
    }
    return;
}


// ===== sym.coresight_release_platform_data @ 0x08004960 (size 180) =====

void sym.coresight_release_platform_data(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    ulong *in_x18;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(arg2 + 4)) {
        iVar1 = 0;
        iVar2 = 0;
        iVar3 = *(arg2 + 8);
        do {
            if ((arg1 != 0) && (arg2_00 = iVar3 + iVar1, *(arg2_00 + 0x18) != 0)) {
                sym.coresight_remove_links(arg1,arg2_00);
            }
            if (*(iVar3 + iVar1 + 0x10) != 0) {
                fwnode_handle_put();
                *(*(arg2 + 8) + iVar1 + 0x10) = 0;
            }
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 0x28;
        } while (iVar2 < *(arg2 + 4));
    }
    if (arg1 != 0) {
        sym.coresight_remove_conns_sysfs_group(arg1);
    }
    return;
}


// ===== sym.coresight_register @ 0x08004a14 (size 848) =====

int64_t * sym.coresight_register(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t *arg1_00;
    int64_t iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t iVar8;
    code *pcVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = kmem_cache_alloc_trace(_device_match_fwnode,0xdc0,0x428);
    if (arg1_00 != NULL) {
        if ((*arg1 & 0xfffffffe) == 2) {
            if (*(arg1 + 8) == 2) {
                uVar6 = *(*(arg1 + 0x18) + 4);
            }
            else {
                if (*(arg1 + 8) != 1) goto code_r0x08004a80;
                uVar6 = **(arg1 + 0x18);
            }
        }
        else {
code_r0x08004a80:
            uVar6 = 1;
        }
        if ((uVar6 >> 0x3e == 0) &&
           (iVar4 = __kmalloc(-(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2,0xdc0), iVar4 != 0)) {
            uVar7 = *(arg1 + 4);
            arg1_00[0x79] = iVar4;
            iVar4 = *(arg1 + 0x10);
            iVar11 = *(arg1 + 0x18);
            *(arg1_00 + 0x7a) = 0;
            *(arg1_00 + 0xc) = uVar7;
            iVar8 = *(arg1 + 0x38);
            iVar10 = *(arg1 + 0x40);
            *arg1_00 = iVar11;
            uVar2 = *arg1;
            arg1_00[3] = iVar4;
            arg1_00[4] = iVar8;
            iVar4 = *(arg1 + 0x48);
            *(arg1_00 + 1) = uVar2;
            arg1_00[5] = iVar10;
            arg1_00[6] = iVar4;
            if (7 < uVar2) {
    //WARNING: Does not return
                pcVar9 = SoftwareBreakpoint(0x5512,0x8004d40);
                (*pcVar9)();
            }
            iVar4 = *(arg1 + 0x28);
            piVar1 = arg1_00 + 7;
            arg1_00[0x13] = *(arg1 + 0x20);
            arg1_00[0x6c] = iVar4;
            arg1_00[0x6d] = sym.coresight_device_release.7cdf4684e306b03727f219798c76cd56.cfi_jt;
            arg1_00[0x16] = obj.coresight_dev_type + uVar2 * 0x30;
            arg1_00[0x17] = obj.coresight_bustype;
            dev_fwnode();
            iVar4 = fwnode_handle_get();
            uVar7 = *(arg1 + 0x30);
            arg1_00[0x66] = iVar4;
            dev_set_name(piVar1,0x8001391,uVar7);
            mutex_lock(obj.cti_assoc_ops);
            iVar3 = device_register(piVar1);
            if (iVar3 == 0) {
                if (((*(arg1_00 + 1) | 2) != 3) || (iVar3 = sym.etm_perf_add_symlink_sink(arg1_00), iVar3 == 0)) {
                    iVar3 = sym.coresight_create_conns_sysfs_group(arg1_00);
                    if (iVar3 == 0) {
                        iVar4 = *arg1_00;
                        if (0 < *(iVar4 + 4)) {
                            iVar11 = 0;
                            iVar8 = 0;
                            do {
                                iVar4 = *(iVar4 + 8) + iVar11;
                                if (*(iVar4 + 0x10) != 0) {
                                    iVar10 = sym.coresight_find_csdev_by_fwnode(*(iVar4 + 0x10));
                                    *(iVar4 + 0x18) = iVar10;
                                    if ((iVar10 == 0) || (*(iVar10 + 0x3f4) == '\0')) {
                                        *(arg1_00 + 0x7a) = 1;
                                    }
                                    else {
                                        iVar3 = sym.coresight_make_links(arg1_00,iVar4,iVar10);
                                        if (iVar3 != 0) goto code_r0x08004c28;
                                    }
                                }
                                iVar4 = *arg1_00;
                                iVar8 = iVar8 + 1;
                                iVar11 = iVar11 + 0x28;
                            } while (iVar8 < *(iVar4 + 4));
                        }
                        iVar3 = bus_for_each_dev(obj.coresight_bustype,0,arg1_00,
                                                 sym.coresight_orphan_match.7cdf4684e306b03727f219798c76cd56.cfi_jt);
                        if ((iVar3 == 0) && (_segment.ehdr != NULL)) {
                            pcVar9 = *_segment.ehdr;
                            if (pcVar9 != NULL) {
                                if (6 < (pcVar9 + -0x8002a00 >> 3 | pcVar9 << 0x3d)) {
                                    __cfi_slowpath_diag(0x3a4aa1703f90ff56,pcVar9,0x8000e70);
                                }
                                (*pcVar9)(arg1_00);
                            }
                            mutex_unlock(obj.cti_assoc_ops);
                            return arg1_00;
                        }
                        mutex_unlock(obj.cti_assoc_ops);
                        if (iVar3 == 0) {
                            return arg1_00;
                        }
                    }
                    else {
code_r0x08004c28:
                        mutex_unlock(obj.cti_assoc_ops);
                    }
                    sym.coresight_unregister(arg1_00);
                    return iVar3;
                }
                device_unregister(piVar1);
            }
            else {
                put_device(piVar1);
            }
            mutex_unlock(obj.cti_assoc_ops);
            goto code_r0x08004b9c;
        }
        kfree(arg1_00);
    }
    iVar3 = -0xc;
code_r0x08004b9c:
    iVar4 = *(arg1 + 0x18);
    iVar5 = *(iVar4 + 4);
    if (0 < iVar5) {
        iVar8 = 0;
        iVar10 = *(iVar4 + 8);
        iVar11 = 0x10;
        do {
            if (*(iVar10 + iVar11) != 0) {
                fwnode_handle_put();
                *(*(iVar4 + 8) + iVar11) = 0;
                iVar5 = *(iVar4 + 4);
            }
            iVar8 = iVar8 + 1;
            iVar11 = iVar11 + 0x28;
        } while (iVar8 < iVar5);
    }
    return iVar3;
}


// ===== sym.coresight_device_release @ 0x08004d64 (size 72) =====

void sym.coresight_device_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    fwnode_handle_put(*(arg1 + 0x2f8));
    kfree(*(arg1 + 0x390));
    kfree(arg1 + -0x38);
    return;
}


// ===== sym.coresight_unregister @ 0x08004dac (size 372) =====

void sym.coresight_unregister(int64_t arg1)

{
    int64_t arg2;
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.etm_perf_del_symlink_sink(arg1);
    if ((_segment.ehdr != 0) && (pcVar1 = *(_segment.ehdr + 8), pcVar1 != NULL)) {
        if (6 < (pcVar1 + -0x8002a00 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x3a4aa1703f90ff56,pcVar1,0x8000e90);
        }
        (*pcVar1)(arg1);
    }
    if (**arg1 != 0) {
        bus_for_each_dev(obj.coresight_bustype,0,arg1,
                         sym.coresight_remove_match.7cdf4684e306b03727f219798c76cd56.cfi_jt);
    }
    if ((*(arg1 + 8) | 2) == 3) {
        bus_for_each_dev(obj.coresight_bustype,0,arg1,
                         sym.coresight_remove_sink_ref.7cdf4684e306b03727f219798c76cd56.cfi_jt);
    }
    iVar2 = *arg1;
    if (0 < *(iVar2 + 4)) {
        iVar3 = 0;
        iVar4 = 0;
        iVar5 = *(iVar2 + 8);
        do {
            if ((arg1 != 0) && (arg2 = iVar5 + iVar3, *(arg2 + 0x18) != 0)) {
                sym.coresight_remove_links(arg1,arg2);
            }
            if (*(iVar5 + iVar3 + 0x10) != 0) {
                fwnode_handle_put();
                *(*(iVar2 + 8) + iVar3 + 0x10) = 0;
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x28;
        } while (iVar4 < *(iVar2 + 4));
    }
    if (arg1 != 0) {
        sym.coresight_remove_conns_sysfs_group(arg1);
    }
    device_unregister(arg1 + 0x38);
    return;
}


// ===== sym.coresight_loses_context_with_cpu @ 0x08004f20 (size 52) =====

uint32_t sym.coresight_loses_context_with_cpu(void)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = dev_fwnode();
    uVar1 = fwnode_property_present(uVar2,"arm,coresight-loses-context-with-cpu");
    return uVar1 & 1;
}


// ===== sym.coresight_alloc_device_name @ 0x08004f54 (size 328) =====

void sym.coresight_alloc_device_name(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint *puVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    iVar3 = of_property_read_string(*(arg2 + 0x2f0),"coresight-name",&uStack_50);
    if (iVar3 != 0) {
        mutex_lock(obj.cti_assoc_ops);
        iVar4 = dev_fwnode(arg2);
        uVar2 = *arg1;
        if (0 < uVar2) {
            uVar8 = 0;
            do {
                if (*(*(arg1 + 0x10) + uVar8 * 8) == iVar4) {
                    if (-1 < uVar8) goto code_r0x08005038;
                    break;
                }
                uVar8 = uVar8 + 1;
            } while (uVar2 != uVar8);
        }
        uVar1 = uVar2 + 1;
        if ((uVar1 >> 0x3d == 0) &&
           (uVar5 = krealloc(*(arg1 + 0x10),-(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar1 << 3,0xcc0), 0x10 < uVar5))
        {
            uVar6 = dev_fwnode(arg2);
            uVar8 = uVar2;
            *(uVar5 + uVar2 * 8) = uVar6;
            *(arg1 + 0x10) = uVar5;
            *arg1 = uVar1;
code_r0x08005038:
            uStack_50 = devm_kasprintf(arg2,0xcc0,"%s%d",*(arg1 + 8),uVar8);
        }
        mutex_unlock(obj.cti_assoc_ops);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        auVar9 = __stack_chk_fail(uStack_50);
        puVar7 = auVar9._8_8_;
        *extraout_x18 = sym.writel_relaxed;
        uVar8 = auVar9._0_8_ & 0xffffffff;
        log_write_mmio(uVar8,0x20,puVar7,0x80050b8);
        *puVar7 = auVar9._0_4_;
        log_post_write_mmio(uVar8,0x20,puVar7,0x80050e0);
        return;
    }
    return;
}


// ===== sym.writel_relaxed @ 0x0800509c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80050b8);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80050e0);
    return;
}


// ===== sym.coresight_control_assoc_ectdev @ 0x08005114 (size 428) =====

int sym.coresight_control_assoc_ectdev(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong uVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 1000);
    if ((iVar6 == 0) || (piVar5 = *(*(iVar6 + 0x18) + 0x20), *piVar5 == 0)) {
code_r0x0800520c:
        iVar2 = 0;
    }
    else {
        pcVar8 = piVar5[1];
        if (pcVar8 == NULL) {
            return 0;
        }
        uVar7 = *(*(*(iVar6 + 0x98) + 0x88) + 0x10);
        if ((arg2 & 1U) == 0) {
            if (*(arg1 + 0x3f5) == '\0') goto code_r0x0800520c;
            if (2 < (pcVar8 + -0x8002890 >> 3 | pcVar8 << 0x3d)) {
                __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar8,0x8000ef0);
            }
            iVar2 = (*pcVar8)(iVar6);
            put_device(*(iVar6 + 0x98));
            module_put(uVar7);
            *(arg1 + 0x3f5) = 0;
            if (iVar2 == 0) {
                return 0;
            }
        }
        else {
            uVar3 = try_module_get(uVar7);
            if ((uVar3 & 1) == 0) {
                iVar2 = -0x13;
            }
            else {
                pcVar8 = **(*(iVar6 + 0x18) + 0x20);
                if (2 < (pcVar8 + -0x8002890 >> 3 | pcVar8 << 0x3d)) {
                    __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar8,0x8000ed0);
                }
                iVar2 = (*pcVar8)(iVar6);
                if (iVar2 == 0) {
                    get_device(*(iVar6 + 0x98));
                    *(arg1 + 0x3f5) = 1;
                    return 0;
                }
                module_put(uVar7);
            }
        }
        iVar4 = *(iVar6 + 0xa8);
        if (iVar4 == 0) {
            iVar4 = *(iVar6 + 0x38);
        }
        pcVar1 = "enable";
        if ((arg2 & 1U) == 0) {
            pcVar1 = "disable";
        }
        _dev_info(arg1 + 0x38,"Associated ECT device (%s) %s failed\n",iVar4,pcVar1);
    }
    return iVar2;
}


// ===== sym.coresight_find_link_inport @ 0x080052c0 (size 244) =====

uint sym.coresight_find_link_inport(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*arg2 + 4);
    uVar5 = uVar1;
    if (0 < uVar1) {
        piVar6 = *(*arg2 + 8) + 0x18;
        do {
            if (((arg3 == 0) || (piVar6[-2] == 0)) || (iVar4 = *(*arg3 + -8), *(iVar4 + 8) != 4 || iVar4 == 0)) {
code_r0x08005304:
                if (*piVar6 == arg1) {
                    return *(piVar6 + -0x14);
                }
            }
            else {
                if (*(iVar4 + 0xa8) == 0) {
                    iVar2 = strcmp(piVar6[-2],*(iVar4 + 0x38));
                }
                else {
                    iVar2 = strcmp();
                }
                if (iVar2 == 0) goto code_r0x08005304;
            }
            piVar6 = piVar6 + 5;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    iVar4 = *(arg2 + 0xa8);
    if (iVar4 == 0) {
        iVar4 = *(arg2 + 0x38);
    }
    iVar3 = *(arg1 + 0xa8);
    if (iVar3 == 0) {
        iVar3 = *(arg1 + 0x38);
    }
    _dev_err(arg1 + 0x38,"couldn\'t find inport, parent: %s, child: %s\n",iVar4,iVar3);
    return 0xffffffed;
}


// ===== sym.coresight_find_link_outport @ 0x080053b4 (size 240) =====

uint sym.coresight_find_link_outport(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    uint *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*arg1 + 4);
    uVar5 = uVar1;
    if (0 < uVar1) {
        puVar6 = *(*arg1 + 8);
        do {
            if (((arg3 == 0) || (*(puVar6 + 2) == 0)) || (iVar4 = *(*arg3 + -8), *(iVar4 + 8) != 4 || iVar4 == 0)) {
code_r0x080053f4:
                if (*(puVar6 + 6) == arg2) {
                    return *puVar6;
                }
            }
            else {
                if (*(iVar4 + 0xa8) == 0) {
                    iVar2 = strcmp(*(puVar6 + 2),*(iVar4 + 0x38));
                }
                else {
                    iVar2 = strcmp();
                }
                if (iVar2 == 0) goto code_r0x080053f4;
            }
            puVar6 = puVar6 + 10;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    iVar4 = *(arg1 + 0xa8);
    if (iVar4 == 0) {
        iVar4 = *(arg1 + 0x38);
    }
    iVar3 = *(arg2 + 0xa8);
    if (iVar3 == 0) {
        iVar3 = *(arg2 + 0x38);
    }
    _dev_err(arg1 + 0x38,"couldn\'t find outport, parent: %s, child: %s\n",iVar4,iVar3);
    return 0xffffffed;
}


// ===== sym.coresight_grab_device @ 0x080054a4 (size 564) =====

ulong sym.coresight_grab_device(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *arg1;
    if (*(iVar7 + 4) < 1) {
        iVar10 = 0;
    }
    else {
        iVar10 = 0;
        iVar11 = 0x18;
        do {
            iVar9 = *(*(iVar7 + 8) + iVar11);
            if ((iVar9 != 0) && (*(iVar9 + 8) == 5)) {
                iVar7 = *(iVar9 + 0x98);
                uVar6 = try_module_get(*(*(iVar7 + 0x88) + 0x10));
                if ((uVar6 & 1) == 0) goto code_r0x08005604;
                get_device(iVar7);
                iVar5 = __pm_runtime_resume(iVar7,4);
                if (iVar5 < 0) {
                    puVar1 = iVar7 + 0x1f8;
                    uVar6 = *puVar1;
                    goto code_r0x080055c4;
                }
                iVar7 = *arg1;
            }
            iVar10 = iVar10 + 1;
            iVar11 = iVar11 + 0x28;
        } while (iVar10 < *(iVar7 + 4));
    }
    iVar7 = *(arg1 + 0x98);
    uVar6 = try_module_get(*(*(iVar7 + 0x88) + 0x10));
    if ((uVar6 & 1) != 0) {
        get_device(iVar7);
        iVar5 = __pm_runtime_resume(iVar7,4);
        if (-1 < iVar5) {
            return 0;
        }
        puVar1 = iVar7 + 0x1f8;
        uVar6 = *puVar1;
        do {
            uVar8 = uVar6;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar8) goto code_r0x080055a0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar8 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080055a0:
        } while (uVar8 != uVar2);
    }
code_r0x08005604:
    uVar8 = iVar10 - 1;
    if (-1 < uVar8) {
        iVar7 = uVar8 + 1;
        iVar10 = uVar8 * 0x28 + 0x18;
        do {
            iVar11 = *(*(*arg1 + 8) + iVar10);
            if ((iVar11 != 0) && (*(iVar11 + 8) == 5)) {
                iVar11 = *(iVar11 + 0x98);
                __pm_runtime_idle(iVar11,5);
                put_device(iVar11);
                module_put(*(*(iVar11 + 0x88) + 0x10));
            }
            iVar7 = iVar7 + -1;
            iVar10 = iVar10 + -0x28;
        } while (0 < iVar7);
    }
    return 0xffffffed;
code_r0x080055c4:
    do {
        uVar8 = uVar6;
        if (uVar8 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            uVar6 = uVar2;
            if (uVar2 != uVar8) goto code_r0x080055e8;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar8 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080055e8:
    } while (uVar8 != uVar2);
    goto code_r0x08005604;
}


// ===== sym.coresight_id_match @ 0x080056d8 (size 268) =====

bool sym.coresight_id_match(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg2;
    *in_x18 = unaff_x30;
    if (((arg1 - 0x38U == uVar4) || (*(arg1 + 0x399) == '\0')) || (*(arg1 + -0x30) != 4)) {
        bVar1 = false;
    }
    else {
        pcVar5 = *(*(*(uVar4 + 0x18) + 0x10) + 8);
        if (2 < (pcVar5 + -0x8002890 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar5,0x8001010);
        }
        iVar2 = (*pcVar5)(uVar4);
        pcVar5 = *(*(*(arg1 + -0x20) + 0x10) + 8);
        if (2 < (pcVar5 + -0x8002890 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar5,0x8001030);
        }
        iVar3 = (*pcVar5)(arg1 - 0x38U);
        bVar1 = iVar2 == iVar3;
    }
    return bVar1;
}


// ===== sym.readl @ 0x080057e4 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80057e8);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x800582c);
    return uVar1;
}


// ===== sym.readl_relaxed @ 0x08005864 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8005868);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800589c);
    return uVar1;
}


// ===== sym.writel @ 0x080058d4 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80058f0);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800591c);
    return;
}


// ===== sym.readq_relaxed @ 0x08005950 (size 108) =====

ulong sym.readq_relaxed(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x8005954);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x40,arg1,0x8005988);
    return uVar1;
}


// ===== sym.readq @ 0x080059c0 (size 120) =====

ulong sym.readq(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x80059c4);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x40,arg1,0x8005a04);
    return uVar1;
}


// ===== sym.writeq_relaxed @ 0x08005a3c (size 108) =====

void sym.writeq_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1,0x40,arg2,0x8005a40);
    *arg2 = arg1;
    log_post_write_mmio(arg1,0x40,arg2,0x8005a78);
    return;
}


// ===== sym.writeq @ 0x08005aa8 (size 112) =====

void sym.writeq(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1,0x40,arg2,0x8005aac);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1,0x40,arg2,0x8005ae8);
    return;
}


// ===== sym.enable_sink_show @ 0x08005b18 (size 64) =====

int64_t sym.enable_sink_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001451,*(arg1 + 0x39a));
    return iVar1;
}


// ===== sym.enable_sink_store @ 0x08005b58 (size 240) =====

uint64_t sym.enable_sink_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    int64_t iStack_38;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_38 = 0;
    iVar1 = kstrtoull(arg2,10,&iStack_38);
    if (iVar1 == 0) {
        if (iStack_38 == 0) {
            *(arg1 + 0x39a) = 0;
        }
        else {
            auStack_2c[0] = 0;
            iVar2 = bus_find_device(obj.coresight_bustype,0,auStack_2c,
                                    sym.coresight_enabled_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt);
            if (((iVar2 == 0) || (iVar2 == 0x38)) || (*(iVar2 + -0x30) == *(arg1 + -0x30))) {
                *(arg1 + 0x39a) = 1;
            }
            else {
                _dev_err(arg1,"Another type sink is enabled.\n");
                arg3 = 0xffffffffffffffea;
            }
        }
    }
    else {
        arg3 = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar4 = __stack_chk_fail();
    iVar2 = auVar4._0_8_;
    if ((*(iVar2 + -0x30) | 2) == 3) {
        uVar3 = *(iVar2 + 0x39a);
        if (*(iVar2 + 0x39a) != 0) {
            if (*auVar4._8_8_ == '\0') {
                uVar3 = 1;
            }
            else {
                uVar3 = 1;
                *(iVar2 + 0x39a) = 0;
            }
        }
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.coresight_enabled_sink @ 0x08005c48 (size 72) =====

uchar sym.coresight_enabled_sink(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    
    if ((*(arg1 + -0x30) | 2) == 3) {
        uVar1 = 0;
        if (*(arg1 + 0x39a) != '\0') {
            if (*arg2 == '\0') {
                uVar1 = 1;
            }
            else {
                uVar1 = 1;
                *(arg1 + 0x39a) = 0;
            }
        }
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.enable_source_show @ 0x08005c90 (size 64) =====

int64_t sym.enable_source_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001451,*(arg1 + 0x399));
    return iVar1;
}


// ===== sym.enable_source_store @ 0x08005cd0 (size 208) =====

int64_t sym.enable_source_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar3 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    iVar1 = kstrtoull(arg2,10,&iStack_40);
    if (iVar1 == 0) {
        if (iStack_40 == 0) {
            mutex_lock(obj.cti_assoc_ops);
            sym.__coresight_disable(arg1 + -0x38);
            mutex_unlock(obj.cti_assoc_ops);
        }
        else {
            iVar1 = sym.coresight_enable(arg1 + -0x38);
            if (iVar1 != 0) {
                arg3 = iVar1;
            }
        }
    }
    else {
        arg3 = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        iVar2 = __stack_chk_fail();
        *extraout_x18 = sym.sink_name_show;
        iVar2 = *(iVar2 + 0x3a8);
        if (iVar2 == 0) {
            iVar1 = scnprintf(piVar3,0x1000,0x80017b3);
        }
        else {
            iVar4 = *(iVar2 + 0xa8);
            if (iVar4 == 0) {
                iVar4 = *(iVar2 + 0x38);
            }
            iVar1 = scnprintf(piVar3,0x1000,0x8001961,iVar4);
        }
        return iVar1;
    }
    return arg3;
}


// ===== sym.sink_name_show @ 0x08005da0 (size 108) =====

int64_t sym.sink_name_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x3a8);
    if (iVar3 == 0) {
        iVar1 = scnprintf(arg2,0x1000,0x80017b3);
    }
    else {
        iVar2 = *(iVar3 + 0xa8);
        if (iVar2 == 0) {
            iVar2 = *(iVar3 + 0x38);
        }
        iVar1 = scnprintf(arg2,0x1000,0x8001961,iVar2);
    }
    return iVar1;
}


// ===== sym.sink_name_store @ 0x08005e0c (size 320) =====

uint64_t sym.sink_name_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,uint32_t arg3)

{
    int64_t arg2_00;
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *arg3_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1_00;
    int64_t iVar6;
    uchar uVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar8 [16];
    uint32_t uStack_54;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    uVar5 = arg3;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (uVar5 < 0x14) {
        if (uVar5 == 0) {
            *(arg1 + 0x3a8) = 0;
            goto code_r0x08005f14;
        }
        iVar1 = sscanf(arg2,0x8001391,&uStack_50);
        noname_1 = extraout_q0;
        if (iVar1 == 1) {
            uStack_54 = hashlen_string(0,&uStack_50);
            iVar2 = bus_find_device(obj.coresight_bustype,0,&uStack_54,
                                    sym.coresight_sink_by_id.7cdf4684e306b03727f219798c76cd56.cfi_jt);
            uStack_54 = uStack_54 & 0xffffff00;
            iVar3 = bus_find_device(obj.coresight_bustype,0,&uStack_54,
                                    sym.coresight_enabled_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt);
            iVar4 = 0;
            if (iVar3 != 0) {
                iVar4 = iVar3 + -0x38;
            }
            if (((iVar2 != 0) && (iVar2 + -0x38 != 0)) && ((iVar4 == 0 || (*(iVar4 + 8) == *(iVar2 + -0x30))))) {
                *(arg1 + 0x3a8) = iVar2 + -0x38;
                noname_1 = extraout_q0_00;
                goto code_r0x08005f14;
            }
            noname_1 = _dev_err(arg1,"Sink name [%s] is invalid or another type sink is enabled.\n",&uStack_50);
        }
    }
    uVar5 = 0xffffffffffffffea;
code_r0x08005f14:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    auVar8 = __stack_chk_fail(noname_1);
    arg3_00 = auVar8._8_8_;
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.coresight_orphan_match;
    arg1_00 = iVar4 + -0x38;
    if ((arg1_00 != arg3_00) && (*(iVar4 + 0x398) != '\0')) {
        iVar2 = *arg1_00;
        if (*(iVar2 + 4) < 1) {
            uVar7 = 0;
        }
        else {
            iVar6 = 0;
            iVar3 = 0;
            uVar7 = 0;
            do {
                arg2_00 = *(iVar2 + 8) + iVar6;
                if ((*(arg2_00 + 0x10) != 0) && (*(arg2_00 + 0x18) == 0)) {
                    if (*(arg2_00 + 0x10) == arg3_00[0x66]) {
                        uVar5 = sym.coresight_make_links(arg1_00,arg2_00,arg3_00);
                        if (uVar5 != 0) {
                            return uVar5;
                        }
                        iVar2 = *arg1_00;
                    }
                    else {
                        uVar7 = 1;
                    }
                }
                iVar3 = iVar3 + 1;
                iVar6 = iVar6 + 0x28;
            } while (iVar3 < *(iVar2 + 4));
        }
        *(iVar4 + 0x398) = uVar7;
    }
    return 0;
}


// ===== sym.coresight_orphan_match @ 0x08005f4c (size 220) =====

ulong sym.coresight_orphan_match(int64_t arg1,uint32_t arg2)

{
    int64_t arg2_00;
    ulong uVar1;
    int64_t *arg3;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t iVar3;
    uchar uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    arg3 = arg2;
    *in_x18 = unaff_x30;
    arg1_00 = arg1 - 0x38;
    if ((arg1_00 != arg3) && (*(arg1 + 0x398) != '\0')) {
        iVar2 = *arg1_00;
        if (*(iVar2 + 4) < 1) {
            uVar4 = 0;
        }
        else {
            iVar3 = 0;
            iVar5 = 0;
            uVar4 = 0;
            do {
                arg2_00 = *(iVar2 + 8) + iVar3;
                if ((*(arg2_00 + 0x10) != 0) && (*(arg2_00 + 0x18) == 0)) {
                    if (*(arg2_00 + 0x10) == arg3[0x66]) {
                        uVar1 = sym.coresight_make_links(arg1_00,arg2_00,arg3);
                        if (uVar1 != 0) {
                            return uVar1;
                        }
                        iVar2 = *arg1_00;
                    }
                    else {
                        uVar4 = 1;
                    }
                }
                iVar5 = iVar5 + 1;
                iVar3 = iVar3 + 0x28;
            } while (iVar5 < *(iVar2 + 4));
        }
        *(arg1 + 0x398) = uVar4;
    }
    return 0;
}


// ===== sym.coresight_remove_match @ 0x08006028 (size 148) =====

ulong sym.coresight_remove_match(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t *arg1_00;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 - 0x38;
    if (arg1_00 != arg2) {
        uVar1 = *(*arg1_00 + 4);
        uVar2 = uVar1;
        if (0 < uVar1) {
            arg2_00 = *(*arg1_00 + 8);
            do {
                if (((*(arg2_00 + 0x18) != 0) && (*(arg2_00 + 0x10) != 0)) && (*(arg2 + 0x330) == *(arg2_00 + 0x10))) {
                    *(arg1 + 0x398) = 1;
                    sym.coresight_remove_links(arg1_00,arg2_00);
                    fwnode_handle_put(*(arg2_00 + 0x10));
                    *(arg2_00 + 0x10) = 0;
                    return 0;
                }
                arg2_00 = arg2_00 + 0x28;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }
    return 0;
}


// ===== sym.coresight_remove_sink_ref @ 0x080060bc (size 32) =====

ulong sym.coresight_remove_sink_ref(int64_t arg1,uint32_t arg2)

{
    if (*(arg1 + 0x3a8) == arg2) {
        *(arg1 + 0x3a8) = 0;
    }
    return 0;
}


// ===== sym.reset_source_sink_store @ 0x080060dc (size 268) =====

int64_t sym.reset_source_sink_store(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar2 = kstrtoull(arg1,10,&uStack_40);
    if (iVar2 == 0) {
        mutex_lock(obj.cti_assoc_ops);
        pcVar4 = _obj.cs_active_paths;
        if (_obj.cs_active_paths != obj.cs_active_paths) {
            do {
                pcVar1 = *pcVar4;
                if ((*(pcVar4 + -8) != NULL) && (iVar3 = *(**(pcVar4 + -8) + -8), *(iVar3 + 8) == 4 && iVar3 != 0)) {
                    **(iVar3 + 0x3c8) = 1;
                    sym.__coresight_disable(iVar3);
                }
                pcVar4 = pcVar1;
            } while (pcVar1 != obj.cs_active_paths);
        }
        bus_for_each_dev(obj.coresight_bustype,0,0,sym.coresight_reset_sink.7cdf4684e306b03727f219798c76cd56.cfi_jt);
        mutex_unlock(obj.cti_assoc_ops);
    }
    else {
        arg2 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg2;
    }
    iVar3 = __stack_chk_fail();
    if (((*(iVar3 + -0x30) | 2) == 3) && (*(iVar3 + 0x39a) != '\0')) {
        *(iVar3 + 0x39a) = 0;
    }
    return 0;
}


// ===== sym.coresight_reset_sink @ 0x080061e8 (size 44) =====

ulong sym.coresight_reset_sink(int64_t arg1)

{
    if (((*(arg1 + -0x30) | 2) == 3) && (*(arg1 + 0x39a) != '\0')) {
        *(arg1 + 0x39a) = 0;
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08006214 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08006258

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
    //switch table (4 cases) at 0x8001998
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800626c);
    (*pcVar1)();
}


// ===== sym.etm_perf_symlink @ 0x0800626c (size 336) =====

void sym.etm_perf_symlink(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    unkbyte7 Stack_48;
    uint uStack_41;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    Stack_48 = 0;
    uStack_41 = 0;
    pcVar4 = **(*(arg1 + 0x18) + 0x10);
    if (2 < (pcVar4 + -0x8002890 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0x76439dfb02cc8756,pcVar4,0x8001170);
    }
    uVar2 = (*pcVar4)(arg1);
    uVar3 = _segment.ehdr;
    sprintf(&Stack_48,"cpu%d",uVar2);
    if (obj.etm_perf_up == 0x1) {
        if ((arg2 & 1U) == 0) {
            sysfs_remove_link(uVar3,&Stack_48);
            if (0x1f < uVar2) goto code_r0x080063b8;
            arg1 = 0;
        }
        else {
            uVar3 = sysfs_create_link(uVar3,arg1 + 0x38,&Stack_48);
            if (uVar3 != 0) goto code_r0x08006360;
            if (0x1f < uVar2) goto code_r0x080063b8;
        }
        uVar3 = 0;
        *(obj.csdev_src + *(__per_cpu_offset + uVar2 * 8)) = arg1;
    }
    else {
        uVar3 = 0xfffffdfb;
    }
code_r0x08006360:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x080063b8:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80063bc);
    (*pcVar4)();
}


// ===== sym.etm_perf_add_symlink_sink @ 0x080063bc (size 304) =====

int64_t * sym.etm_perf_add_symlink_sink(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _segment.ehdr;
    if (((*(arg1 + 8) | 2) == 3) && (*(arg1 + 0x3d8) == 0)) {
        iVar6 = *(arg1 + 0xa8);
        piVar3 = arg1 + 0x38;
        if (iVar6 == 0) {
            iVar6 = *piVar3;
        }
        if (obj.etm_perf_up == 0x1) {
            piVar4 = devm_kmalloc(piVar3,0x28,0xdc0);
            if (piVar4 != NULL) {
                uVar5 = hashlen_string(0,iVar6);
                iVar6 = devm_kstrdup(piVar3,iVar6,0xcc0);
                *piVar4 = iVar6;
                if (iVar6 != 0) {
                    *(piVar4 + 1) = 0x124;
                    piVar4[4] = uVar5 & 0xffffffff;
                    iVar2 = sysfs_add_file_to_group(uVar1,piVar4,"sinks");
                    if (iVar2 != 0) {
                        piVar4 = iVar2;
                    }
                    *(arg1 + 0x3d8) = piVar4;
                    if (0xfffffffffffff000 < piVar4) {
                        *(arg1 + 0x3d8) = 0;
                        return piVar4;
                    }
                    piVar4[2] = sym.etm_perf_sink_name_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
                    return NULL;
                }
            }
            piVar3 = 0xfffffffffffffff4;
            *(arg1 + 0x3d8) = 0;
        }
        else {
            piVar3 = 0xfffffffffffffdfb;
            *(arg1 + 0x3d8) = 0;
        }
    }
    else {
        piVar3 = 0xffffffea;
    }
    return piVar3;
}


// ===== sym.etm_perf_sink_name_show @ 0x080064ec (size 60) =====

int64_t sym.etm_perf_sink_name_show(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"0x%lx\n",*(arg1 + 0x20));
    return iVar1;
}


// ===== sym.etm_perf_del_symlink_sink @ 0x08006528 (size 92) =====

void sym.etm_perf_del_symlink_sink(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 8) | 2) == 3) && (*(arg1 + 0x3d8) != 0)) {
        sysfs_remove_file_from_group(_segment.ehdr,*(arg1 + 0x3d8),"sinks");
        *(arg1 + 0x3d8) = 0;
    }
    return;
}


// ===== sym.etm_perf_add_symlink_cscfg @ 0x08006584 (size 260) =====

int64_t * sym.etm_perf_add_symlink_cscfg(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _segment.ehdr;
    if (*(arg2 + 0x40) != 0) {
        return NULL;
    }
    if (obj.etm_perf_up == 0x1) {
        uVar6 = *arg2;
        piVar3 = devm_kmalloc(arg1,0x28,0xdc0);
        if (piVar3 != NULL) {
            uVar4 = hashlen_string(0,uVar6);
            iVar5 = devm_kstrdup(arg1,uVar6,0xcc0);
            *piVar3 = iVar5;
            if (iVar5 != 0) {
                *(piVar3 + 1) = 0x124;
                piVar3[4] = uVar4 & 0xffffffff;
                iVar2 = sysfs_add_file_to_group(uVar1,piVar3,"events");
                if (iVar2 != 0) {
                    piVar3 = iVar2;
                }
                *(arg2 + 0x40) = piVar3;
                if (piVar3 < 0xfffffffffffff001) {
                    piVar3[2] = sym.etm_perf_cscfg_event_show.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
                    return NULL;
                }
                goto code_r0x08006668;
            }
        }
        piVar3 = 0xfffffffffffffff4;
    }
    else {
        piVar3 = 0xfffffffffffffdfb;
    }
code_r0x08006668:
    *(arg2 + 0x40) = 0;
    return piVar3;
}


// ===== sym.etm_perf_cscfg_event_show @ 0x08006688 (size 60) =====

int64_t sym.etm_perf_cscfg_event_show(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"configid=0x%lx\n",*(arg1 + 0x20));
    return iVar1;
}


// ===== sym.etm_perf_del_symlink_cscfg @ 0x080066c4 (size 76) =====

void sym.etm_perf_del_symlink_cscfg(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x40) != 0) {
        sysfs_remove_file_from_group(_segment.ehdr,*(arg1 + 0x40),"events");
        *(arg1 + 0x40) = 0;
    }
    return;
}


// ===== sym.etm_event_read @ 0x08006710 (size 12) =====

void sym.etm_event_read(void)

{
    return;
}


// ===== sym.etm_event_init @ 0x0800671c (size 152) =====

ulong sym.etm_event_init(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xd8) == _segment.ehdr) {
        iVar1 = kmem_cache_alloc_trace(_device_match_fwnode,0xdc0,200);
        if (iVar1 == 0) {
            uVar2 = 0xfffffff4;
        }
        else {
            if (*(arg1 + 0x280) != 0) {
                memcpy(iVar1,*(*(arg1 + 0x280) + 0x1c8),200);
            }
            uVar2 = 0;
            *(arg1 + 0x1c8) = iVar1;
            *(arg1 + 0x390) = sym.etm_event_destroy.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
        }
    }
    else {
        uVar2 = 0xfffffffe;
    }
    return uVar2;
}


// ===== sym.etm_setup_aux @ 0x080067b4 (size 872) =====

ulong * sym.etm_setup_aux(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    int iVar6;
    uint32_t uVar7;
    ulong *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t arg2_00;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *extraout_x11;
    ulong *extraout_x11_00;
    ulong *in_x18;
    code *pcVar12;
    int64_t arg1_00;
    ulong unaff_x30;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    puVar8 = sym.alloc_event_data(*(arg1 + 0x28c));
    if (puVar8 == NULL) {
        return NULL;
    }
    *puVar8 = 0xfffffffe0;
    puVar8[1] = puVar8 + 1;
    puVar8[2] = puVar8 + 1;
    puVar8[3] = sym.free_event_data.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    uVar9 = *(arg1 + 0x118);
    if (uVar9 == 0) {
        iVar10 = 0;
        iVar6 = uVar9 >> 0x20;
    }
    else {
        iVar10 = sym.coresight_get_sink_by_id(uVar9);
        uVar9 = *(arg1 + 0x118);
        iVar6 = uVar9 >> 0x20;
    }
    if (iVar6 != 0) {
        iVar6 = sym.cscfg_activate_config(uVar9 >> 0x20);
        if (iVar6 != 0) goto code_r0x08006a74;
        *(puVar8 + 8) = uVar9 >> 0x20;
    }
    puVar1 = puVar8 + 6;
    uVar7 = cpumask_next(0xffffffff,puVar1);
    *extraout_x11 = extraout_x8;
    uVar4 = extraout_x8;
    arg2_00 = iVar10;
    if (uVar7 < extraout_x8) {
        iStack_68 = 0;
        do {
            uVar9 = uVar7;
            if (0x1f < uVar7) {
    //WARNING: Does not return
                pcVar12 = SoftwareBreakpoint(0x5512,0x8006abc);
                (*pcVar12)();
            }
            arg1_00 = *(obj.csdev_src + *(__per_cpu_offset + uVar9 * 8));
            if (arg1_00 == 0) {
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            else {
                iVar5 = iStack_68;
                if (iVar10 == 0) {
                    arg2_00 = sym.coresight_find_default_sink(arg1_00);
                    if (arg2_00 == 0) {
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                                *puVar1 = *puVar1 & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        arg2_00 = 0;
                    }
                    else {
                        iVar5 = arg2_00;
                        if ((iStack_68 == 0) ||
                           ((*(iStack_68 + 0xc) == *(arg2_00 + 0xc) && (**(iStack_68 + 0x18) == **(arg2_00 + 0x18)))))
                        goto code_r0x080068ec;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                                *puVar1 = *puVar1 & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                    }
                }
                else {
code_r0x080068ec:
                    iStack_68 = iVar5;
                    uVar11 = sym.coresight_build_path(arg1_00,arg2_00);
                    if (uVar11 < 0xfffffffffffff001) {
                        *(*(__per_cpu_offset + uVar9 * 8) + puVar8[9]) = uVar11;
                    }
                    else {
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                                *puVar1 = *puVar1 & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                    }
                }
            }
            uVar7 = cpumask_next(uVar9,puVar1);
            *extraout_x11_00 = extraout_x8_00;
            uVar4 = extraout_x8_00;
        } while (uVar7 < extraout_x8_00);
    }
    if (arg2_00 != 0) {
        uVar11 = *puVar1;
        uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar7 = 0x20;
        if (uVar11 != 0) {
            uVar7 = LZCOUNT((uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        if (uVar7 < uVar4) {
            pcVar12 = *(**(arg2_00 + 0x18) + 0x10);
            if ((pcVar12 != NULL) && (*(**(arg2_00 + 0x18) + 0x18) != 0)) {
                __cfi_slowpath_diag(0x572ebecfa6e4eece,pcVar12,0x8001190);
                iVar10 = (*pcVar12)(arg2_00,arg1,arg2,arg3 & 0xffffffff,arg4 & 1);
                puVar8[7] = iVar10;
                if (iVar10 != 0) {
                    return puVar8;
                }
            }
        }
    }
code_r0x08006a74:
    queue_work_on(0x20,_mutex_unlock,puVar8);
    return NULL;
}


// ===== sym.etm_free_aux @ 0x08006b1c (size 52) =====

void sym.etm_free_aux(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_work_on(0x20,_mutex_unlock,arg1);
    return;
}


// ===== sym.etm_event_start @ 0x08006b50 (size 364) =====

void sym.etm_event_start(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t arg1_00;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    uVar7 = *(cpu_number + iVar1);
    if (0x1f < *(cpu_number + iVar1)) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8006cbc);
        (*pcVar2)();
    }
    iVar6 = *(obj.csdev_src + *(__per_cpu_offset + uVar7 * 8));
    if (iVar6 != 0) {
        pcVar2 = obj.etm_ctxt + iVar1;
        if (*(iVar1 + 0x800a2d0) != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006ca4);
            (*pcVar2)();
        }
        iVar4 = perf_aux_output_begin(pcVar2,arg1);
        if (iVar4 != 0) {
            if ((*(iVar4 + 0x30) >> (uVar7 & 0x3f) & 1) == 0) {
code_r0x08006c94:
                *(arg1 + 0x1d8) = 0;
                *(iVar1 + 0x800a2d0) = iVar4;
                return;
            }
            arg1_00 = *(*(__per_cpu_offset + uVar7 * 8) + *(iVar4 + 0x48));
            iVar5 = sym.coresight_get_sink(arg1_00);
            if (iVar5 == 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8006cac);
                (*pcVar2)();
            }
            iVar3 = sym.coresight_enable_path(arg1_00,2,pcVar2);
            if (iVar3 == 0) {
                pcVar8 = *(*(*(iVar6 + 0x18) + 0x10) + 0x10);
                __cfi_slowpath_diag(0x7a682b931f8f094,pcVar8,0x80011d0);
                iVar3 = (*pcVar8)(iVar6,arg1,2);
                if (iVar3 == 0) goto code_r0x08006c94;
                sym.coresight_disable_path_from.llvm.6468340166659988919(arg1_00,0);
            }
            if (*pcVar2 != 0) {
                perf_aux_output_flag(pcVar2,1);
                perf_aux_output_end(pcVar2,0);
            }
        }
    }
    *(arg1 + 0x1d8) = 1;
    return;
}


// ===== sym.etm_event_stop @ 0x08006cc8 (size 492) =====

void sym.etm_event_stop(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = tpidr_el1;
    uVar3 = *(cpu_number + iVar4);
    if (0x1f < *(cpu_number + iVar4)) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x8006eb4);
        (*pcVar1)();
    }
    pcVar1 = obj.etm_ctxt + iVar4;
    iVar5 = *(obj.csdev_src + *(__per_cpu_offset + uVar3 * 8));
    if (*pcVar1 == 0) {
        iVar7 = *(iVar4 + 0x800a2d0);
    }
    else {
        iVar2 = perf_get_aux(pcVar1);
        iVar7 = *(iVar4 + 0x800a2d0);
        if (iVar2 != iVar7) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8006d4c);
            (*pcVar1)();
        }
    }
    *(iVar4 + 0x800a2d0) = 0;
    if (*(arg1 + 0x1d8) != 1) {
        if (iVar7 == 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8006e9c);
            (*pcVar1)();
        }
        if ((((arg2 >> 2 & 1) == 0) || (*pcVar1 == 0)) || ((*(iVar7 + 0x30) >> (uVar3 & 0x3f) & 1) != 0)) {
            if (((iVar5 != 0) && (iVar4 = *(*(__per_cpu_offset + uVar3 * 8) + *(iVar7 + 0x48)), iVar4 != 0)) &&
               (iVar2 = sym.coresight_get_sink(iVar4), iVar2 != 0)) {
                pcVar6 = *(*(*(iVar5 + 0x18) + 0x10) + 0x18);
                __cfi_slowpath_diag(0x4b596879dd0fbb8,pcVar6,0x80011f0);
                (*pcVar6)(iVar5,arg1);
                *(arg1 + 0x1d8) = 1;
                if (((arg2 >> 2 & 1) != 0) && (*pcVar1 != 0)) {
                    if (*pcVar1 != arg1) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x800,0x8006ea4);
                        (*pcVar1)();
                    }
                    pcVar6 = *(**(iVar2 + 0x18) + 0x20);
                    if (pcVar6 == NULL) {
                        return;
                    }
                    __cfi_slowpath_diag(0x324b6be2b7e3c193,pcVar6,0x8001210);
                    iVar5 = (*pcVar6)(iVar2,pcVar1,*(iVar7 + 0x38));
                    if (*pcVar1 == 0) {
                        if (iVar5 != 0) {
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x800,0x8006eac);
                            (*pcVar1)();
                        }
                    }
                    else {
                        perf_aux_output_end(pcVar1);
                    }
                }
                sym.coresight_disable_path_from.llvm.6468340166659988919(iVar4,0);
            }
        }
        else {
            *(arg1 + 0x1d8) = 1;
            perf_aux_output_end(pcVar1,0);
        }
    }
    return;
}


// ===== sym.etm_event_add @ 0x08006ebc (size 88) =====

uint32_t sym.etm_event_add(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t in_w1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_w1 & 1) == 0) {
        uVar1 = 0;
        *(arg1 + 0x1d8) = 1;
    }
    else {
        sym.etm_event_start(arg1);
        uVar1 = -(*(arg1 + 0x1d8) & 1) & 0xffffffea;
    }
    return uVar1;
}


// ===== sym.etm_event_del @ 0x08006f14 (size 40) =====

void sym.etm_event_del(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.etm_event_stop(arg1,4);
    return;
}


// ===== sym.etm_addr_filters_sync @ 0x08006f3c (size 172) =====

void sym.etm_addr_filters_sync(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    uint uVar11;
    
    iVar1 = arg1;
    if (*(arg1 + 0x280) != 0) {
        iVar1 = *(arg1 + 0x280);
    }
    piVar8 = *(iVar1 + 0x360);
    iVar6 = *(arg1 + 0x1c8);
    if (piVar8 == iVar1 + 0x360) {
        iVar7 = 0;
    }
    else {
        iVar7 = 0;
        piVar10 = iVar6 + 8;
        piVar9 = *(arg1 + 0x378) + 8;
        do {
            if (iVar7 == 9) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x8006fe8);
                (*pcVar5)();
            }
            iVar2 = piVar9[-1];
            iVar3 = *piVar9;
            iVar4 = piVar8[6];
            if (iVar4 == 0) {
                uVar11 = 4;
code_r0x08006f78:
                *piVar10 = iVar3 + iVar2;
code_r0x08006f7c:
                *(piVar10 + 1) = uVar11;
            }
            else {
                if (iVar4 == 1) {
                    uVar11 = 3;
                    piVar10[-1] = iVar2;
                    goto code_r0x08006f7c;
                }
                if (iVar4 == 2) {
                    piVar10[-1] = iVar2;
                    uVar11 = 2;
                    goto code_r0x08006f78;
                }
            }
            piVar8 = *piVar8;
            iVar7 = iVar7 + 1;
            piVar9 = piVar9 + 2;
            piVar10 = piVar10 + 3;
        } while (piVar8 != iVar1 + 0x360);
    }
    *(iVar6 + 0xc0) = iVar7;
    return;
}


// ===== sym.etm_addr_filters_validate @ 0x08006fe8 (size 464) =====

//WARNING: Removing unreachable block (ram,0x08007044)

uint sym.etm_addr_filters_validate(uint32_t arg1)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    uint64_t *puVar4;
    ulong *puVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    
    puVar4 = arg1;
    puVar5 = *puVar4;
    if (puVar5 == puVar4) {
        return 0;
    }
    iVar7 = puVar5[5];
    if ((iVar7 != 0) && (*(puVar5 + 6) < 2)) {
        return 0xffffffa1;
    }
    puVar6 = *puVar5;
    if (puVar6 == puVar4) {
        return 0;
    }
    bVar3 = iVar7 != 0;
    if (puVar6[5] == 0) {
        bVar1 = true;
        bVar2 = bVar1;
        if (!bVar3) goto code_r0x0800705c;
    }
    else {
        if (puVar6[6] < 2) {
            return 0xffffffa1;
        }
        bVar3 = true;
        bVar2 = iVar7 == 0;
    }
    bVar1 = false;
    if (bVar2) {
        return 0xffffffa1;
    }
code_r0x0800705c:
    puVar6 = *puVar6;
    if (puVar6 != puVar4) {
        if (puVar6[5] == 0) {
            bVar1 = true;
        }
        else {
            if (puVar6[6] < 2) {
                return 0xffffffa1;
            }
            bVar3 = true;
        }
        if ((bVar3) && (bVar1)) {
            return 0xffffffa1;
        }
        puVar6 = *puVar6;
        if (puVar6 != puVar4) {
            if (puVar6[5] == 0) {
                bVar1 = true;
            }
            else {
                if (puVar6[6] < 2) {
                    return 0xffffffa1;
                }
                bVar3 = true;
            }
            if ((bVar3) && (bVar1)) {
                return 0xffffffa1;
            }
            puVar6 = *puVar6;
            if (puVar6 != puVar4) {
                if (puVar6[5] == 0) {
                    bVar1 = true;
                }
                else {
                    if (puVar6[6] < 2) {
                        return 0xffffffa1;
                    }
                    bVar3 = true;
                }
                if ((bVar3) && (bVar1)) {
                    return 0xffffffa1;
                }
                puVar6 = *puVar6;
                if (puVar6 != puVar4) {
                    if (puVar6[5] == 0) {
                        bVar1 = true;
                    }
                    else {
                        if (puVar6[6] < 2) {
                            return 0xffffffa1;
                        }
                        bVar3 = true;
                    }
                    if ((bVar3) && (bVar1)) {
                        return 0xffffffa1;
                    }
                    puVar6 = *puVar6;
                    if (puVar6 != puVar4) {
                        if (puVar6[5] == 0) {
                            bVar1 = true;
                        }
                        else {
                            if (puVar6[6] < 2) {
                                return 0xffffffa1;
                            }
                            bVar3 = true;
                        }
                        if ((bVar3) && (bVar1)) {
                            return 0xffffffa1;
                        }
                        puVar6 = *puVar6;
                        if (puVar6 != puVar4) {
                            if (puVar6[5] == 0) {
                                bVar1 = true;
                            }
                            else {
                                if (puVar6[6] < 2) {
                                    return 0xffffffa1;
                                }
                                bVar3 = true;
                            }
                            if ((bVar3) && (bVar1)) {
                                return 0xffffffa1;
                            }
                            if (*puVar6 != puVar4) {
                                return 0xffffffa1;
                            }
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}


// ===== sym.etm_perf_exit @ 0x080071b8 (size 44) =====

void sym.etm_perf_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    perf_pmu_unregister(obj.etm_pmu.llvm.15995262632889499196);
    return;
}


// ===== sym.cycacc_show @ 0x080071e4 (size 44) =====

ulong sym.cycacc_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = str.config:12_n._0_8_;
    *(arg1 + 7) = 0xa3231;
    *arg1 = uVar1;
    return 10;
}


// ===== sym.format_attr_contextid_show @ 0x08007210 (size 56) =====

int64_t sym.format_attr_contextid_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,"config:%d\n",0xe);
    return iVar1;
}


// ===== sym.contextid1_show @ 0x08007248 (size 44) =====

ulong sym.contextid1_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = str.config:14_n._0_8_;
    *(arg1 + 7) = 0xa3431;
    *arg1 = uVar1;
    return 10;
}


// ===== sym.contextid2_show @ 0x08007274 (size 44) =====

ulong sym.contextid2_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = str.config:15_n._0_8_;
    *(arg1 + 7) = 0xa3531;
    *arg1 = uVar1;
    return 10;
}


// ===== sym.timestamp_show @ 0x080072a0 (size 44) =====

ulong sym.timestamp_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = str.config:28_n._0_8_;
    *(arg1 + 7) = 0xa3832;
    *arg1 = uVar1;
    return 10;
}


// ===== sym.retstack_show @ 0x080072cc (size 44) =====

ulong sym.retstack_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = str.config:29_n._0_8_;
    *(arg1 + 7) = 0xa3932;
    *arg1 = uVar1;
    return 10;
}


// ===== sym.sinkid_show @ 0x080072f8 (size 40) =====

ulong sym.sinkid_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = CONCAT26(str.config2:0_31_n._6_2_,str.config2:0_31_n._0_6_);
    *(arg1 + 6) = CONCAT62(str.config2:0_31_n._8_6_,str.config2:0_31_n._6_2_);
    *arg1 = uVar1;
    return 0xd;
}


// ===== sym.preset_show @ 0x08007320 (size 44) =====

ulong sym.preset_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = str.config:0_3_n._0_8_;
    *(arg1 + 8) = 0xa332d;
    *arg1 = uVar1;
    return 0xb;
}


// ===== sym.configid_show @ 0x0800734c (size 40) =====

ulong sym.configid_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = CONCAT17(str.config2:32_63_n[7],str.config2:32_63_n._0_7_);
    *(arg1 + 7) = CONCAT71(str.config2:32_63_n._8_7_,str.config2:32_63_n[7]);
    *arg1 = uVar1;
    return 0xe;
}


// ===== sym.etm_event_destroy @ 0x08007374 (size 56) =====

void sym.etm_event_destroy(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(arg1 + 0x1c8));
    *(arg1 + 0x1c8) = 0;
    return;
}


// ===== sym.alloc_event_data @ 0x080073ac (size 208) =====

int64_t sym.alloc_event_data(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = kmem_cache_alloc_trace(_device_match_fwnode,0xdc0,0x50);
    if (iVar4 != 0) {
        if (arg1 == 0xffffffff) {
            *(iVar4 + 0x30) = _kfree;
        }
        else {
            puVar1 = iVar4 + 0x30 + (arg1 >> 3 & 0x1ffffff8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 1L << (arg1 & 0x3fU);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        iVar5 = __alloc_percpu(8,8);
        *(iVar4 + 0x48) = iVar5;
        if (iVar5 == 0) {
            kfree(iVar4);
            iVar4 = 0;
        }
    }
    return iVar4;
}


// ===== sym.free_event_data @ 0x0800747c (size 348) =====

void sym.free_event_data(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *extraout_x11;
    ulong *extraout_x11_00;
    ulong *in_x18;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) != 0) {
        uVar2 = *(arg1 + 0x30);
        if (uVar2 == 0) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x80075ac);
            (*pcVar4)();
        }
        uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        iVar3 = LZCOUNT((uVar2 >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10) << 0x20);
        if ((iVar3 >> 5 & 1) != 0) {
code_r0x080075b0:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x80075b4);
            (*pcVar4)();
        }
        iVar3 = sym.coresight_get_sink(*(*(__per_cpu_offset + iVar3 * 8) + *(arg1 + 0x48)));
        pcVar4 = *(**(iVar3 + 0x18) + 0x18);
        if (pcVar4 != sym.__typeid__ZTSFvPvE_global_addr) {
            __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar4,0x80011b0);
        }
        (*pcVar4)(*(arg1 + 0x38));
    }
    if (*(arg1 + 0x40) != 0) {
        sym.cscfg_deactivate_config(*(arg1 + 0x40));
    }
    uVar1 = cpumask_next(0xffffffff,arg1 + 0x30);
    *extraout_x11 = extraout_x8;
    if (uVar1 < extraout_x8) {
        do {
            if (0x1f < uVar1) goto code_r0x080075b0;
            iVar3 = *(arg1 + 0x48);
            iVar5 = *(__per_cpu_offset + uVar1 * 8);
            if ((*(iVar5 + iVar3) != 0) && (*(iVar5 + iVar3) < 0xfffffffffffff001)) {
                sym.coresight_release_path(*(iVar3 + iVar5));
            }
            *(iVar3 + iVar5) = 0;
            uVar1 = cpumask_next(uVar1,arg1 + 0x30);
            *extraout_x11_00 = extraout_x8_00;
        } while (uVar1 < extraout_x8_00);
    }
    free_percpu(*(arg1 + 0x48));
    kfree(arg1);
    return;
}


// ===== sym.coresight_find_csdev_by_fwnode @ 0x080075d8 (size 92) =====

int64_t sym.coresight_find_csdev_by_fwnode(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bus_find_device(obj.coresight_bustype,0,arg1,sym.device_match_fwnode.cfi_jt);
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = iVar1 + -0x38;
        put_device();
    }
    return iVar1;
}


// ===== sym.of_coresight_get_atid_number @ 0x08007634 (size 56) =====

void sym.of_coresight_get_atid_number(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    of_property_count_elems_of_size(*(*(arg1 + 0x98) + 0x2f0),"atid",4);
    return;
}


// ===== sym.of_coresight_get_atid @ 0x0800766c (size 72) =====

uint32_t sym.of_coresight_get_atid(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = of_property_read_variable_u32_array(*(*(arg1 + 0x98) + 0x2f0),"atid",arg2,arg3,0);
    return uVar1 & uVar1 >> 0x1f;
}


// ===== sym.coresight_get_cpu @ 0x080076b4 (size 124) =====

ulong sym.coresight_get_cpu(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 0x2f8);
    uVar1 = 0;
    if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
        if (*(uVar3 + 8) == of_fwnode_ops) {
            if ((*(arg1 + 0x2f0) == 0) || (iVar2 = of_parse_phandle(*(arg1 + 0x2f0),0x8001783,0), iVar2 == 0)) {
                uVar1 = 0xffffffed;
            }
            else {
                uVar1 = of_cpu_node_to_id();
            }
        }
        else {
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.coresight_get_platform_data @ 0x08007730 (size 1232) =====

uint32_t * sym.coresight_get_platform_data(int64_t arg1)

{
    uint32_t uVar1;
    uchar auVar2 [16];
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t *piVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint *puVar17;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar7 = dev_fwnode();
    iVar6 = -2;
    if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
        puVar8 = devm_kmalloc(arg1,0x10,0xdc0);
        if (puVar8 == NULL) {
            iVar6 = -0xc;
        }
        else {
            if (*(uVar7 + 8) == of_fwnode_ops) {
                iVar12 = *(arg1 + 0x2f0);
                iVar9 = of_get_child_by_name(iVar12,"in-ports");
                iVar10 = of_get_child_by_name(iVar12,"out-ports");
                if (iVar9 == 0 && iVar10 == 0) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uVar7 = of_graph_is_present(iVar12);
                    if ((uVar7 & 1) != 0) {
                        iVar9 = of_graph_get_next_endpoint(iVar12,0);
                        if (iVar9 == 0) {
                            uVar16 = 0;
                            uVar15 = 0;
                        }
                        else {
                            uVar15 = 0;
                            uVar16 = 0;
                            do {
                                iVar6 = of_graph_parse_endpoint(iVar9,&uStack_78);
                                uVar4 = uVar15;
                                uVar5 = uVar16;
                                if (iVar6 == 0) {
                                    iVar10 = of_find_property(iVar9,"slave-mode",0);
                                    uVar1 = uStack_78 + 1;
                                    if (iVar10 == 0) {
                                        uVar4 = uVar1;
                                        if (uVar1 <= uVar15) {
                                            uVar4 = uVar15;
                                        }
                                    }
                                    else {
                                        uVar5 = uVar1;
                                        if (uVar1 <= uVar16) {
                                            uVar5 = uVar16;
                                        }
                                    }
                                }
                                uVar16 = uVar5;
                                uVar15 = uVar4;
                                iVar9 = of_graph_get_next_endpoint(iVar12,iVar9);
                            } while (iVar9 != 0);
                        }
                        *puVar8 = uVar16;
                        puVar8[1] = uVar15;
                    }
code_r0x08007970:
                    uVar15 = puVar8[1];
                }
                else {
                    if (iVar9 != 0) {
                        uVar15 = 0;
                        iVar13 = 0;
                        uStack_78 = 0;
                        uStack_70 = 0;
                        while (iVar13 = of_graph_get_next_endpoint(iVar9,iVar13), iVar13 != 0) {
                            iVar6 = of_graph_parse_endpoint(iVar13,&uStack_78);
                            if ((iVar6 == 0) && (uVar15 < uStack_78 + 1U)) {
                                uVar15 = uStack_78 + 1;
                            }
                        }
                        *puVar8 = uVar15;
                    }
                    if (iVar10 == 0) goto code_r0x08007970;
                    uVar15 = 0;
                    iVar9 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    while (iVar9 = of_graph_get_next_endpoint(iVar10,iVar9), iVar9 != 0) {
                        iVar6 = of_graph_parse_endpoint(iVar9,&uStack_78);
                        if ((iVar6 == 0) && (uVar15 < uStack_78 + 1U)) {
                            uVar15 = uStack_78 + 1;
                        }
                    }
                    puVar8[1] = uVar15;
                }
                if (uVar15 == 0) goto code_r0x080077d0;
                auVar2._8_8_ = 0;
                auVar2._0_8_ = uVar15;
                if (SUB168(auVar2 * ZEXT816(0x28),8) == 0) {
                    iVar9 = devm_kmalloc(arg1,(uVar15 + uVar15 * 4) * 8,0xdc0);
                    *(puVar8 + 2) = iVar9;
                    if (iVar9 != 0) {
                        iVar9 = of_get_child_by_name(iVar12,"out-ports");
                        if (iVar9 == 0) {
                            bVar3 = true;
                            if ((obj.of_get_coresight_platform_data.__print_once & 1) == 0) {
                                obj.of_get_coresight_platform_data.__print_once = 0x1;
                                _dev_warn(arg1,"Uses obsolete Coresight DT bindings\n");
                            }
                        }
                        else {
                            bVar3 = false;
                            iVar12 = iVar9;
                        }
                        for (iVar9 = of_graph_get_next_endpoint(iVar12,0); iVar9 != 0;
                            iVar9 = of_graph_get_next_endpoint(iVar12,iVar9)) {
                            if ((!bVar3) || (iVar10 = of_find_property(iVar9,"slave-mode",0), iVar10 == 0)) {
                                uStack_78 = 0;
                                uStack_70 = 0;
                                uStack_88 = 0;
                                uStack_80 = 0;
                                iVar6 = of_graph_parse_endpoint(iVar9,&uStack_78);
                                iVar10 = 0;
                                if (iVar6 == 0) {
                                    iVar13 = of_graph_get_remote_endpoint(iVar9);
                                    iVar10 = 0;
                                    if (iVar13 != 0) {
                                        iVar11 = of_graph_get_port_parent(iVar13);
                                        uVar7 = of_node_name_eq(iVar11,"in-ports");
                                        if (((uVar7 & 1) != 0) ||
                                           (uVar7 = of_node_name_eq(iVar11,"out-ports"), (uVar7 & 1) != 0)) {
                                            iVar11 = of_get_next_parent(iVar11);
                                        }
                                        if ((iVar11 != 0) &&
                                           (iVar6 = of_graph_parse_endpoint(iVar13,&uStack_88), iVar6 == 0)) {
                                            iVar11 = iVar11 + 0x18;
                                            iVar10 = bus_find_device(platform_bus_type,0,iVar11,
                                                                     sym.device_match_fwnode.cfi_jt);
                                            if ((iVar10 == 0) &&
                                               (iVar10 = bus_find_device(amba_bustype,0,iVar11,
                                                                         sym.device_match_fwnode.cfi_jt), iVar10 == 0))
                                            {
                                                iVar6 = -0x205;
                                            }
                                            else {
                                                piVar14 = *(puVar8 + 2) + (uStack_78 & 0xffffffff) * 0x28 + 0x10;
                                                if (*piVar14 == 0) {
                                                    puVar17 = *(puVar8 + 2) + (uStack_78 & 0xffffffff) * 0x28;
                                                    *puVar17 = uStack_78;
                                                    iVar13 = fwnode_handle_get(iVar11);
                                                    *piVar14 = iVar13;
                                                    *(puVar17 + 2) = 0;
                                                    puVar17[1] = uStack_88;
                                                    iVar13 = of_parse_phandle(iVar9,"source",0);
                                                    if (iVar13 == 0) goto code_r0x08007a2c;
                                                    iVar6 = of_property_read_string
                                                                      (iVar13,"coresight-name",puVar17 + 2);
                                                    put_device(iVar10);
                                                    if (iVar6 == 0) goto code_r0x08007a34;
                                                    goto code_r0x080077b0;
                                                }
                                                _dev_warn(arg1,"Duplicate output port %d\n");
                                                iVar6 = -0x16;
                                            }
                                            put_device(iVar10);
                                            goto code_r0x080077b0;
                                        }
                                        iVar10 = 0;
                                    }
                                }
code_r0x08007a2c:
                                put_device(iVar10);
                            }
code_r0x08007a34:
                        }
                        goto code_r0x080077d0;
                    }
                    iVar6 = -0xc;
                }
                else {
                    iVar6 = -0xc;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                }
            }
            else {
                iVar6 = -2;
            }
code_r0x080077b0:
            if (puVar8 < 0xfffffffffffff001) {
                sym.coresight_release_platform_data(0,puVar8);
            }
        }
    }
    puVar8 = iVar6;
code_r0x080077d0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return puVar8;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.coresight_create_conns_sysfs_group;
    if (iVar12 == 0) {
        puVar8 = 0xffffffea;
    }
    else {
        puVar8 = sysfs_create_group(iVar12 + 0x38,obj.coresight_conns_group);
        if (puVar8 == 0) {
            *(iVar12 + 0x3f4) = 1;
        }
    }
    return puVar8;
}


// ===== sym.coresight_create_conns_sysfs_group @ 0x08007c00 (size 84) =====

ulong sym.coresight_create_conns_sysfs_group(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = sysfs_create_group(arg1 + 0x38,obj.coresight_conns_group);
        if (uVar1 == 0) {
            *(arg1 + 0x3f4) = 1;
        }
    }
    return uVar1;
}


// ===== sym.coresight_remove_conns_sysfs_group @ 0x08007c54 (size 76) =====

void sym.coresight_remove_conns_sysfs_group(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (*(arg1 + 0x3f4) != '\0')) {
        sysfs_remove_group(arg1 + 0x38,obj.coresight_conns_group);
        *(arg1 + 0x3f4) = 0;
    }
    return;
}


// ===== sym.coresight_add_sysfs_link @ 0x08007ca0 (size 228) =====

int sym.coresight_add_sysfs_link(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 == 0) || (iVar2 = *arg1, iVar2 == 0)) || (iVar3 = *(arg1 + 0x10), iVar3 == 0)) ||
       (((*(arg1 + 8) == 0 || (*(arg1 + 0x18) == 0)) || ((*(iVar2 + 0x3f4) == '\0' || (*(iVar3 + 0x3f4) == '\0')))))) {
        iVar1 = -0x16;
    }
    else {
        iVar1 = sysfs_add_link_to_group(iVar2 + 0x38,_segment.ehdr,iVar3 + 0x38);
        if (iVar1 == 0) {
            iVar1 = sysfs_add_link_to_group(*(arg1 + 0x10) + 0x38,_segment.ehdr,*arg1 + 0x38,*(arg1 + 0x18));
            iVar2 = *arg1;
            if (iVar1 == 0) {
                *(iVar2 + 0x3f0) = *(iVar2 + 0x3f0) + 1;
                *(*(arg1 + 0x10) + 0x3f0) = *(*(arg1 + 0x10) + 0x3f0) + 1;
            }
            else {
                sysfs_remove_link_from_group(iVar2 + 0x38,_segment.ehdr,*(arg1 + 8));
            }
        }
    }
    return iVar1;
}


// ===== sym.coresight_remove_sysfs_link @ 0x08007d84 (size 144) =====

void sym.coresight_remove_sysfs_link(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 != 0) && (*arg1 != 0)) && (*(arg1 + 0x10) != 0)) && ((*(arg1 + 8) != 0 && (*(arg1 + 0x18) != 0)))) {
        sysfs_remove_link_from_group(*arg1 + 0x38,_segment.ehdr);
        sysfs_remove_link_from_group(*(arg1 + 0x10) + 0x38,_segment.ehdr,*(arg1 + 0x18));
        *(*arg1 + 0x3f0) = *(*arg1 + 0x3f0) + -1;
        *(*(arg1 + 0x10) + 0x3f0) = *(*(arg1 + 0x10) + 0x3f0) + -1;
    }
    return;
}


// ===== sym.coresight_make_links @ 0x08007e14 (size 188) =====

ulong sym.coresight_make_links(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *arg1_00;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = devm_kasprintf(arg1 + 0x38,0xcc0,"out:%d",*arg2);
    if (((iVar1 == 0) || (iVar2 = devm_kasprintf(arg3 + 0x38,0xcc0,"in:%d",*(arg2 + 4)), iVar2 == 0)) ||
       (arg1_00 = devm_kmalloc(arg1 + 0x38,0x20,0xdc0), arg1_00 == NULL)) {
        uVar3 = 0xfffffff4;
    }
    else {
        *arg1_00 = arg1;
        arg1_00[1] = iVar1;
        arg1_00[2] = arg3;
        arg1_00[3] = iVar2;
        uVar3 = sym.coresight_add_sysfs_link(arg1_00);
        if (uVar3 == 0) {
            *(arg2 + 0x18) = arg3;
            *(arg2 + 0x20) = arg1_00;
        }
    }
    return uVar3;
}


// ===== sym.coresight_remove_links @ 0x08007ed0 (size 220) =====

void sym.coresight_remove_links(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (piVar1 = *(arg2 + 0x20), piVar1 != NULL)) {
        if ((*piVar1 != 0) && (((piVar1[2] != 0 && (piVar1[1] != 0)) && (piVar1[3] != 0)))) {
            sysfs_remove_link_from_group(*piVar1 + 0x38,_segment.ehdr);
            sysfs_remove_link_from_group(piVar1[2] + 0x38,_segment.ehdr,piVar1[3]);
            *(*piVar1 + 0x3f0) = *(*piVar1 + 0x3f0) + -1;
            *(piVar1[2] + 0x3f0) = *(piVar1[2] + 0x3f0) + -1;
            piVar1 = *(arg2 + 0x20);
        }
        devm_kfree(*(arg2 + 0x18) + 0x38,piVar1[3]);
        devm_kfree(arg1 + 0x38,*(*(arg2 + 0x20) + 8));
        devm_kfree(arg1 + 0x38,*(arg2 + 0x20));
        *(arg2 + 0x18) = 0;
        *(arg2 + 0x20) = 0;
    }
    return;
}


// ===== sym.nr_links_show @ 0x08007fac (size 60) =====

int64_t sym.nr_links_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,0x8001687,*(arg1 + 0x3b8));
    return iVar1;
}


// ===== sym.cscfg_get_named_feat_desc @ 0x08007fe8 (size 140) =====

ulong * sym.cscfg_get_named_feat_desc(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *puVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    iVar1 = _segment.ehdr + 0x3a0;
    for (piVar4 = *(_segment.ehdr + 0x3a0); iVar1 != piVar4; piVar4 = *piVar4) {
        puVar3 = piVar4 + -2;
        iVar2 = strcmp(*puVar3,arg1);
        if (iVar2 == 0) goto code_r0x0800804c;
    }
    puVar3 = NULL;
code_r0x0800804c:
    mutex_unlock(obj.cscfg_mutex);
    return puVar3;
}


// ===== sym.cscfg_update_feat_param_val @ 0x08008074 (size 276) =====

uint sym.cscfg_update_feat_param_val(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    if (*(_segment.ehdr + 0x3c0) == 0) {
        if ((arg2 < 0) || (*(arg1 + 0x24) <= arg2)) {
            uVar4 = 0xffffffea;
        }
        else {
            *(*(arg1 + 0x28) + (arg2 & 0xffffffffU) * 0x10 + 8) = arg3;
            piVar1 = *(_segment.ehdr + 0x390);
            if (_segment.ehdr + 0x390 != piVar1) {
                iVar2 = _segment.ehdr;
                do {
                    for (piVar3 = *(piVar1[-3] + 0x3f8); piVar1[-3] + 0x3f8 != piVar3; piVar3 = *piVar3) {
                        if (piVar3[-2] == arg1) {
                            if (piVar3 + -2 != NULL) {
                                *(piVar3[4] + (arg2 & 0xffffffffU) * 0x20 + 0x10) = arg3;
                                iVar2 = _segment.ehdr;
                            }
                            break;
                        }
                    }
                    piVar1 = *piVar1;
                } while (iVar2 + 0x390 != piVar1);
            }
            uVar4 = 0;
        }
    }
    else {
        uVar4 = 0xfffffff0;
    }
    mutex_unlock(obj.cscfg_mutex);
    return uVar4;
}


// ===== sym.cscfg_load_config_sets @ 0x0800818c (size 644) =====

int sym.cscfg_load_config_sets(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int iVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    if ((arg2 != 0) && (iVar7 = *arg2, iVar7 != 0)) {
        iVar13 = 0;
        piVar5 = arg2;
        do {
            iVar4 = _segment.ehdr;
            for (puVar9 = *(_segment.ehdr + 0x390); iVar4 + 0x390 != puVar9; puVar9 = *puVar9) {
                if (((*(iVar7 + 0x20) & *(puVar9 + -2)) != 0) &&
                   (iVar2 = sym.cscfg_load_feat_csdev(puVar9[-3],iVar7,puVar9 + -1), iVar4 = _segment.ehdr,
                   iVar2 != 0)) goto code_r0x080083b4;
            }
            iVar10 = *(iVar4 + 0x3a0);
            iVar11 = iVar7 + 0x10;
            piVar6 = iVar4 + 0x3a0;
            uVar3 = __list_add_valid(iVar11,piVar6,iVar10);
            if ((uVar3 & 1) != 0) {
                *(iVar10 + 8) = iVar11;
                *(iVar7 + 0x10) = iVar10;
                *(iVar7 + 0x18) = piVar6;
                *piVar6 = iVar11;
            }
            iVar2 = sym.cscfg_configfs_add_feature(*piVar5);
            if (iVar2 != 0) {
code_r0x080083b4:
                puVar9 = *piVar5;
                uVar8 = 0x8001822;
                goto code_r0x080083c4;
            }
            iVar13 = iVar13 + 1;
            piVar5 = arg2 + iVar13 * 8;
            iVar7 = *piVar5;
        } while (iVar7 != 0);
    }
    if ((arg1 == 0) || (iVar7 = *arg1, iVar7 == 0)) {
        iVar2 = 0;
    }
    else {
        iVar13 = 0;
        piVar5 = arg1;
        do {
            iVar4 = _segment.ehdr;
            uVar1 = *(iVar7 + 0x20);
            if (0 < uVar1) {
                piVar12 = *(_segment.ehdr + 0x3a0);
                piVar6 = _segment.ehdr + 0x3a0;
                if (piVar6 != piVar12) {
                    uVar3 = 0;
                    iVar11 = *(iVar7 + 0x28);
                    do {
                        uVar8 = *(iVar11 + uVar3 * 8);
                        piVar14 = piVar12;
                        while (iVar2 = strcmp(piVar14[-2],uVar8), iVar2 != 0) {
                            piVar14 = *piVar14;
                            if (piVar6 == piVar14) goto code_r0x0800839c;
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 != uVar1);
                    goto code_r0x080082f4;
                }
code_r0x0800839c:
                iVar2 = -0x16;
code_r0x080083a4:
                puVar9 = *piVar5;
                uVar8 = 0x8001261;
code_r0x080083c4:
                _printk(uVar8,*puVar9);
                break;
            }
code_r0x080082f4:
            piVar6 = *(iVar4 + 0x390);
            for (; iVar4 + 0x390 != piVar6; piVar6 = *piVar6) {
                iVar2 = sym.cscfg_add_csdev_cfg(piVar6[-3],iVar7);
                if (iVar2 != 0) goto code_r0x080083a4;
                iVar4 = _segment.ehdr;
            }
            iVar2 = sym.etm_perf_add_symlink_cscfg(iVar4,iVar7);
            if (iVar2 != 0) goto code_r0x080083a4;
            iVar4 = iVar7 + 0x10;
            iVar11 = *(_segment.ehdr + 0x3b0);
            piVar6 = _segment.ehdr + 0x3b0;
            uVar3 = __list_add_valid(iVar4,piVar6,iVar11);
            if ((uVar3 & 1) != 0) {
                *(iVar11 + 8) = iVar4;
                *(iVar7 + 0x10) = iVar11;
                *(iVar7 + 0x18) = piVar6;
                *piVar6 = iVar4;
            }
            *(iVar7 + 0x48) = 0;
            iVar2 = sym.cscfg_configfs_add_config(*piVar5);
            if (iVar2 != 0) goto code_r0x080083a4;
            iVar13 = iVar13 + 1;
            piVar5 = arg1 + iVar13 * 8;
            iVar7 = *piVar5;
        } while (iVar7 != 0);
    }
    mutex_unlock(obj.cscfg_mutex);
    return iVar2;
}


// ===== sym.cscfg_register_csdev @ 0x08008410 (size 564) =====

int sym.cscfg_register_csdev(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x28);
    if (piVar4 == NULL) {
        iVar3 = -0xc;
        goto code_r0x080085f4;
    }
    iVar7 = *arg3;
    *piVar4 = arg1;
    piVar2 = piVar4 + 3;
    *(piVar4 + 1) = arg2;
    iVar6 = _segment.ehdr;
    piVar4[2] = iVar7;
    iVar7 = *(iVar6 + 0x390);
    piVar1 = iVar6 + 0x390;
    uVar5 = __list_add_valid(piVar2,piVar1,iVar7);
    if ((uVar5 & 1) != 0) {
        *(iVar7 + 8) = piVar2;
        piVar4[3] = iVar7;
        piVar4[4] = piVar1;
        *piVar1 = piVar2;
    }
    *(arg1 + 0x3f8) = arg1 + 0x3f8;
    *(arg1 + 0x400) = arg1 + 0x3f8;
    *(arg1 + 0x408) = arg1 + 0x408;
    *(arg1 + 0x410) = arg1 + 0x408;
    *(arg1 + 0x418) = 0;
    if (*arg3 != 0) {
        iVar6 = _segment.ehdr;
        for (puVar8 = *(_segment.ehdr + 0x3a0); iVar6 + 0x3a0 != puVar8; puVar8 = *puVar8) {
            if (((*(puVar8 + 2) & arg2) != 0) &&
               (iVar3 = sym.cscfg_load_feat_csdev(arg1,puVar8 + -2,arg3), iVar6 = _segment.ehdr, iVar3 != 0))
            goto code_r0x08008598;
        }
        piVar4 = *(iVar6 + 0x3b0);
        for (; iVar6 + 0x3b0 != piVar4; piVar4 = *piVar4) {
            iVar3 = sym.cscfg_add_csdev_cfg(arg1,piVar4 + -2);
            if (iVar3 != 0) {
                piVar4 = _segment.ehdr + 0x390;
                goto code_r0x08008570;
            }
            iVar6 = _segment.ehdr;
        }
        iVar6 = *(arg1 + 0xa8);
        if (iVar6 == 0) {
            iVar6 = *(arg1 + 0x38);
        }
        _printk(0x800148a,iVar6);
        iVar3 = 0;
        goto code_r0x080085f4;
    }
    iVar3 = -0x16;
code_r0x08008598:
    piVar4 = _segment.ehdr + 0x390;
    do {
        piVar4 = *piVar4;
        if (_segment.ehdr + 0x390 == piVar4) goto code_r0x080085f4;
    } while (piVar4[-3] != arg1);
    goto code_r0x080085bc;
    while (piVar4[-3] != arg1) {
code_r0x08008570:
        piVar4 = *piVar4;
        if (_segment.ehdr + 0x390 == piVar4) goto code_r0x080085f4;
    }
code_r0x080085bc:
    uVar5 = __list_del_entry_valid(piVar4);
    if ((uVar5 & 1) != 0) {
        iVar6 = *piVar4;
        piVar2 = piVar4[1];
        *(iVar6 + 8) = piVar2;
        *piVar2 = iVar6;
    }
    *piVar4 = -0x2152ffffffffff00;
    piVar4[1] = -0x2152fffffffffede;
    kfree(piVar4 + -3);
code_r0x080085f4:
    mutex_unlock(obj.cscfg_mutex);
    return iVar3;
}


// ===== sym.cscfg_unregister_csdev @ 0x08008644 (size 164) =====

void sym.cscfg_unregister_csdev(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    piVar4 = _segment.ehdr + 0x390;
    do {
        piVar4 = *piVar4;
        if (_segment.ehdr + 0x390 == piVar4) goto code_r0x080086c8;
    } while (piVar4[-3] != arg1);
    uVar3 = __list_del_entry_valid(piVar4);
    if ((uVar3 & 1) != 0) {
        iVar1 = *piVar4;
        piVar2 = piVar4[1];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *piVar4 = -0x2152ffffffffff00;
    piVar4[1] = -0x2152fffffffffede;
    kfree(piVar4 + -3);
code_r0x080086c8:
    mutex_unlock(obj.cscfg_mutex);
    return;
}


// ===== sym.cscfg_csdev_reset_feats @ 0x080086e8 (size 128) =====

void sym.cscfg_csdev_reset_feats(int64_t arg1)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x418);
    piVar1 = arg1 + 0x3f8;
    if (piVar1 != *piVar1) {
        for (piVar3 = *piVar1; piVar1 != piVar3; piVar3 = *piVar3) {
            sym.cscfg_reset_feat(piVar3 + -2);
        }
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x418,uVar2);
    return;
}


// ===== sym.cscfg_activate_config @ 0x0800876c (size 252) =====

ulong sym.cscfg_activate_config(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    piVar4 = *(_segment.ehdr + 0x3b0);
    do {
        if (_segment.ehdr + 0x3b0 == piVar4) {
            uVar5 = 0xffffffea;
code_r0x080087f8:
            mutex_unlock(obj.cscfg_mutex);
            return uVar5;
        }
        if (*(piVar4[6] + 0x20) == arg1) {
            piVar1 = _segment.ehdr + 0x3c0;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            piVar1 = piVar4 + 7;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            uVar5 = 0;
            goto code_r0x080087f8;
        }
        piVar4 = *piVar4;
    } while( true );
}


// ===== sym.cscfg_deactivate_config @ 0x08008868 (size 256) =====

void sym.cscfg_deactivate_config(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    piVar4 = *(_segment.ehdr + 0x3b0);
    while( true ) {
        if (_segment.ehdr + 0x3b0 == piVar4) goto code_r0x080088f8;
        if (*(piVar4[6] + 0x20) == arg1) break;
        piVar4 = *piVar4;
    }
    piVar1 = piVar4 + 7;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    piVar1 = _segment.ehdr + 0x3c0;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
code_r0x080088f8:
    mutex_unlock(obj.cscfg_mutex);
    return;
}


// ===== sym.cscfg_csdev_enable_active_config @ 0x08008968 (size 272) =====

int sym.cscfg_csdev_enable_active_config(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x3c0) == 0) {
code_r0x08008a4c:
        iVar2 = 0;
    }
    else {
        iVar1 = arg1 + 0x418;
        uVar3 = _raw_spin_lock_irqsave(iVar1);
        for (piVar4 = *(arg1 + 0x408); arg1 + 0x408 != piVar4; piVar4 = *piVar4) {
            arg1_00 = piVar4 + -3;
            if ((*(*arg1_00 + 0x48) != 0) && (*(*(*arg1_00 + 0x40) + 0x20) == arg2)) {
                *(arg1 + 0x420) = arg1_00;
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                if (arg1_00 == NULL) goto code_r0x08008a4c;
                iVar2 = sym.cscfg_csdev_enable_config(arg1_00,arg3 & 0xffffffff);
                if (iVar2 != 0) {
                    return iVar2;
                }
                uVar3 = _raw_spin_lock_irqsave(iVar1);
                if (*(arg1 + 0x420) == 0) {
                    iVar2 = -0x10;
                }
                else {
                    iVar2 = 0;
                    *(piVar4 + -1) = 1;
                }
                goto code_r0x080089c8;
            }
        }
        iVar2 = 0;
code_r0x080089c8:
        _raw_spin_unlock_irqrestore(iVar1,uVar3);
    }
    return iVar2;
}


// ===== sym.cscfg_csdev_disable_active_config @ 0x08008a80 (size 124) =====

void sym.cscfg_csdev_disable_active_config(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x418;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    arg1_00 = *(arg1 + 0x420);
    if ((arg1_00 == 0) || (*(arg1_00 + 0x10) == '\0')) {
        *(arg1 + 0x420) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
    }
    else {
        *(arg1_00 + 0x10) = 0;
        *(arg1 + 0x420) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        sym.cscfg_csdev_disable_config(arg1_00);
    }
    return;
}


// ===== sym.cscfg_device @ 0x08008afc (size 20) =====

ulong sym.cscfg_device(void)

{
    return _segment.ehdr;
}


// ===== sym.cscfg_exit @ 0x08008b10 (size 124) =====

void sym.cscfg_exit(void)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    for (piVar1 = *(_segment.ehdr + 0x3b0); _segment.ehdr + 0x3b0 != piVar1; piVar1 = *piVar1) {
        sym.etm_perf_del_symlink_cscfg(piVar1 + -2);
    }
    configfs_unregister_subsystem(_segment.ehdr + 0x3c8);
    device_unregister(_segment.ehdr);
    mutex_unlock(obj.cscfg_mutex);
    return;
}


// ===== sym.cscfg_load_feat_csdev @ 0x08008b8c (size 464) =====

ulong sym.cscfg_load_feat_csdev(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    uchar auVar4 [16];
    int64_t *arg1_00;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg3 == 0) {
        return 0xffffffea;
    }
    uVar10 = *(arg1 + 0x98);
    arg1_00 = devm_kmalloc(uVar10,0x48,0xdc0);
    if (arg1_00 != NULL) {
        uVar2 = *(arg2 + 0x24);
        *(arg1_00 + 5) = uVar2;
        if (uVar2 != 0) {
            if (uVar2 >> 0x3b != 0) {
                arg1_00[6] = 0;
                return 0xfffffff4;
            }
            piVar5 = devm_kmalloc(uVar10,uVar2 << 5,0xdc0);
            arg1_00[6] = piVar5;
            if (piVar5 == NULL) {
                return 0xfffffff4;
            }
            if ((((0 < uVar2) && (*piVar5 = arg1_00, uVar2 != 1)) && (piVar5[4] = arg1_00, 2 < uVar2)) &&
               (iVar7 = arg1_00[5], piVar5[8] = arg1_00, 3 < iVar7)) {
                iVar7 = 3;
                iVar8 = 0x60;
                do {
                    iVar7 = iVar7 + 1;
                    *(arg1_00[6] + iVar8) = arg1_00;
                    iVar8 = iVar8 + 0x20;
                } while (iVar7 < arg1_00[5]);
            }
        }
        iVar3 = *(arg2 + 0x30);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = iVar3;
        *(arg1_00 + 7) = iVar3;
        if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
            arg1_00[8] = 0;
            return 0xfffffff4;
        }
        iVar7 = devm_kmalloc(uVar10,iVar3 * 0x18,0xdc0);
        arg1_00[8] = iVar7;
        if (iVar7 != 0) {
            pcVar9 = *arg3;
            *arg1_00 = arg2;
            arg1_00[1] = arg1;
            __cfi_slowpath_diag(0xdb4d30d9e318d390,pcVar9,0x8001230);
            uVar10 = (*pcVar9)(arg1,arg1_00);
            if (uVar10 == 0) {
                sym.cscfg_reset_feat(arg1_00);
                uVar10 = _raw_spin_lock_irqsave(arg1 + 0x418);
                piVar5 = arg1 + 0x3f8;
                iVar7 = *(arg1 + 0x3f8);
                piVar1 = arg1_00 + 2;
                uVar6 = __list_add_valid(piVar1,piVar5,iVar7);
                if ((uVar6 & 1) != 0) {
                    *(iVar7 + 8) = piVar1;
                    arg1_00[2] = iVar7;
                    arg1_00[3] = piVar5;
                    *piVar5 = piVar1;
                }
                _raw_spin_unlock_irqrestore(arg1 + 0x418,uVar10);
                return 0;
            }
            return uVar10;
        }
    }
    return 0xfffffff4;
}


// ===== sym.cscfg_add_csdev_cfg @ 0x08008d5c (size 336) =====

ulong sym.cscfg_add_csdev_cfg(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *(arg2 + 0x20);
    if (0 < *(arg2 + 0x20)) {
        iVar6 = 0;
        piVar4 = NULL;
        piVar1 = arg1 + 0x3f8;
        do {
            piVar9 = *piVar1;
            if (piVar1 != piVar9) {
                uVar5 = *(*(arg2 + 0x28) + iVar6 * 8);
                do {
                    piVar8 = piVar9 + -2;
                    iVar3 = strcmp(**piVar8,uVar5);
                    if (iVar3 == 0) {
                        if (piVar8 != NULL) {
                            if (piVar4 == NULL) {
                                piVar4 = devm_kmalloc(*(arg1 + 0x98),
                                                      (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3) + 0x30,0xdc0
                                                     );
                                if (piVar4 == NULL) {
                                    return 0xfffffff4;
                                }
                                *piVar4 = arg2;
                                piVar4[1] = arg1;
                            }
                            iVar2 = piVar4[5];
                            *(piVar4 + 5) = iVar2 + 1;
                            piVar4[iVar2 + 6] = piVar8;
                            uVar7 = *(arg2 + 0x20);
                        }
                        break;
                    }
                    piVar9 = *piVar9;
                } while (piVar1 != piVar9);
            }
            iVar6 = iVar6 + 1;
        } while (iVar6 < uVar7);
        if (piVar4 != NULL) {
            uVar5 = _raw_spin_lock_irqsave(arg1 + 0x418);
            piVar1 = arg1 + 0x408;
            iVar6 = *(arg1 + 0x408);
            piVar9 = piVar4 + 3;
            uVar7 = __list_add_valid(piVar9,piVar1,iVar6);
            if ((uVar7 & 1) != 0) {
                *(iVar6 + 8) = piVar9;
                piVar4[3] = iVar6;
                piVar4[4] = piVar1;
                *piVar1 = piVar9;
            }
            _raw_spin_unlock_irqrestore(arg1 + 0x418,uVar5);
        }
    }
    return 0;
}


// ===== sym.cscfg_dev_release @ 0x08008eac (size 56) =====

void sym.cscfg_dev_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}


// ===== sym.cscfg_reset_feat @ 0x08008ee4 (size 236) =====

void sym.cscfg_reset_feat(int64_t arg1)

{
    ulong *puVar1;
    uchar *puVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    
    if (0 < *(arg1 + 0x28)) {
        iVar4 = 0;
        iVar5 = 0x10;
        iVar6 = 8;
        do {
            iVar4 = iVar4 + 1;
            puVar1 = *(*arg1 + 0x28) + iVar6;
            iVar6 = iVar6 + 0x10;
            *(*(arg1 + 0x30) + iVar5) = *puVar1;
            iVar5 = iVar5 + 0x20;
        } while (iVar4 < *(arg1 + 0x28));
    }
    if (0 < *(arg1 + 0x38)) {
        iVar5 = 0;
        iVar6 = 0;
        iVar4 = 0;
        do {
            iVar8 = *(*arg1 + 0x38);
            iVar7 = *(arg1 + 0x40);
            puVar2 = iVar7 + iVar6;
            *puVar2 = *(iVar8 + iVar5);
            if ((*(iVar8 + iVar5) >> 3 & 1) == 0) {
                *(puVar2 + 8) = *(iVar8 + iVar5 + 8);
            }
            else {
                iVar8 = *(arg1 + 0x30) + *(iVar8 + iVar5 + 8) * 0x20;
                *(iVar8 + 8) = puVar2;
                uVar3 = *(iVar7 + iVar6);
                *(iVar8 + 0x18) = uVar3 >> 1 & 1;
                if ((uVar3 >> 1 & 1) == 0) {
                    *(iVar7 + iVar6 + 8) = *(iVar8 + 0x10);
                }
                else {
                    *(iVar7 + iVar6 + 8) = *(iVar8 + 0x10);
                }
            }
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + 0x18;
            iVar5 = iVar5 + 0x10;
        } while (iVar4 < *(arg1 + 0x38));
    }
    return;
}


// ===== sym.cscfg_csdev_enable_config @ 0x08008fd0 (size 572) =====

ulong sym.cscfg_csdev_enable_config(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int iVar7;
    uint32_t *puVar8;
    int iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong uVar15;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg2;
    if (iVar5 == 0) {
        iVar9 = *(arg1 + 0x28);
        if (iVar9 < 1) {
            return 0;
        }
        iVar12 = 0;
        do {
            iVar6 = *(arg1 + iVar12 * 8 + 0x30);
            if (0 < *(iVar6 + 0x28)) {
                iVar11 = 0;
                iVar13 = 0;
                do {
                    iVar14 = *(iVar6 + 0x30) + iVar11;
                    if (*(iVar14 + 0x18) == '\0') {
                        *(*(iVar14 + 8) + 8) = *(iVar14 + 0x10);
                    }
                    else {
                        *(*(iVar14 + 8) + 8) = *(iVar14 + 0x10);
                    }
                    iVar13 = iVar13 + 1;
                    iVar11 = iVar11 + 0x20;
                } while (iVar13 < *(iVar6 + 0x28));
                iVar9 = *(arg1 + 0x28);
            }
            iVar12 = iVar12 + 1;
        } while (iVar12 < iVar9);
    }
    else {
        if ((iVar5 < 1) || (iVar12 = *arg1, *(iVar12 + 0x30) < iVar5)) {
            return 0xffffffea;
        }
        iVar9 = *(arg1 + 0x28);
        if (iVar9 < 1) {
            return 0;
        }
        iVar3 = *(iVar12 + 0x34);
        iVar6 = 0;
        iVar12 = *(iVar12 + 0x38);
        iVar7 = 0;
        do {
            iVar13 = *(arg1 + iVar6 * 8 + 0x30);
            if (*(iVar13 + 0x28) != 0) {
                if (0 < *(iVar13 + 0x28)) {
                    iVar14 = 0;
                    iVar11 = 0;
                    do {
                        iVar1 = *(iVar13 + 0x30) + iVar14;
                        uVar15 = *(iVar12 + iVar3 * (iVar5 + -1) * 8 + (iVar7 + iVar11) * 8);
                        if (*(iVar1 + 0x18) == '\0') {
                            *(*(iVar1 + 8) + 8) = uVar15;
                        }
                        else {
                            *(*(iVar1 + 8) + 8) = uVar15;
                        }
                        iVar11 = iVar11 + 1;
                        iVar14 = iVar14 + 0x20;
                    } while (iVar11 < *(iVar13 + 0x28));
                    iVar7 = iVar7 + iVar11;
                }
                iVar9 = *(arg1 + 0x28);
                if (iVar3 <= iVar7) break;
            }
            iVar6 = iVar6 + 1;
        } while (iVar6 < iVar9);
    }
    if (0 < iVar9) {
        iVar12 = 0;
        do {
            iVar6 = *(arg1 + iVar12 * 8 + 0x30);
            uVar15 = _raw_spin_lock_irqsave(*(iVar6 + 0x20));
            if (0 < *(iVar6 + 0x38)) {
                iVar11 = 0;
                iVar13 = 0;
                do {
                    puVar2 = *(iVar6 + 0x40) + iVar11;
                    puVar8 = *(puVar2 + 4);
                    if ((*puVar2 >> 1 & 1) == 0) {
                        uVar10 = puVar2[2];
                        if ((*puVar2 >> 2 & 1) != 0) {
                            uVar4 = *(*(iVar6 + 0x40) + iVar11 + 0xc);
                            uVar10 = *puVar8 & (uVar4 ^ 0xffffffff) | uVar4 & uVar10;
                        }
                        *puVar8 = uVar10;
                    }
                    else {
                        *puVar8 = *(puVar2 + 2);
                    }
                    iVar13 = iVar13 + 1;
                    iVar11 = iVar11 + 0x18;
                } while (iVar13 < *(iVar6 + 0x38));
            }
            _raw_spin_unlock_irqrestore(*(iVar6 + 0x20),uVar15);
            iVar12 = iVar12 + 1;
        } while (iVar12 < *(arg1 + 0x28));
    }
    return 0;
}


// ===== sym.cscfg_csdev_disable_config @ 0x0800920c (size 208) =====

void sym.cscfg_csdev_disable_config(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(arg1 + 0x28)) {
        iVar6 = 0;
        do {
            iVar7 = *(arg1 + iVar6 * 8 + 0x30);
            uVar3 = _raw_spin_lock_irqsave(*(iVar7 + 0x20));
            if (0 < *(iVar7 + 0x38)) {
                iVar4 = 0;
                iVar5 = 0;
                do {
                    uVar2 = *(*(iVar7 + 0x40) + iVar4);
                    if ((uVar2 & 1) != 0) {
                        iVar1 = *(iVar7 + 0x40) + iVar4;
                        if ((uVar2 >> 1 & 1) == 0) {
                            *(iVar1 + 8) = **(iVar1 + 0x10);
                        }
                        else {
                            *(iVar1 + 8) = **(iVar1 + 0x10);
                        }
                    }
                    iVar5 = iVar5 + 1;
                    iVar4 = iVar4 + 0x18;
                } while (iVar5 < *(iVar7 + 0x38));
            }
            _raw_spin_unlock_irqrestore(*(iVar7 + 0x20),uVar3);
            iVar6 = iVar6 + 1;
        } while (iVar6 < *(arg1 + 0x28));
    }
    return;
}


// ===== sym.cscfg_preload @ 0x080092dc (size 52) =====

void sym.cscfg_preload(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cscfg_load_config_sets(0x80006d8,0x80006e0);
    return;
}


// ===== sym.cscfg_configfs_add_config @ 0x08009310 (size 416) =====

uint64_t sym.cscfg_configfs_add_config(int64_t arg1)

{
    int *piVar1;
    uint *puVar2;
    int64_t *piVar3;
    int *piVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint *puVar8;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    int iVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    if (_segment.ehdr == 0) {
        piVar12 = 0xffffffffffffffea;
    }
    else {
        piVar3 = devm_kmalloc(_segment.ehdr,0x90,0xdc0);
        if (piVar3 == NULL) {
code_r0x08009468:
            piVar12 = 0xfffffffffffffff4;
        }
        else {
            piVar12 = piVar3 + 1;
            uVar9 = *arg1;
            *piVar3 = arg1;
            config_group_init_type_name(piVar12,uVar9,obj.cscfg_config_view_type);
            iVar14 = *piVar3;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            iVar13 = *(iVar14 + 0x30);
            if ((iVar13 != 0) && (0 < iVar13)) {
                iVar13 = 1;
                do {
                    piVar4 = devm_kmalloc(_segment.ehdr,0x98,0xdc0);
                    if (piVar4 == NULL) goto code_r0x08009468;
                    snprintf(&uStack_80,0x14,"preset%d",iVar13);
                    iVar10 = *piVar3;
                    *piVar4 = iVar13;
                    *(piVar4 + 2) = iVar10;
                    config_group_init_type_name(piVar4 + 4,&uStack_80,obj.cscfg_config_preset_type);
                    piVar16 = piVar3[0xf];
                    piVar1 = piVar4 + 0x22;
                    uVar5 = __list_add_valid(piVar1,piVar16,piVar3 + 0xe);
                    if ((uVar5 & 1) != 0) {
                        piVar3[0xf] = piVar1;
                        *(piVar4 + 0x22) = piVar3 + 0xe;
                        *(piVar4 + 0x24) = piVar16;
                        *piVar16 = piVar1;
                    }
                    iVar13 = iVar13 + 1;
                } while (iVar13 <= *(iVar14 + 0x30));
            }
            if (piVar12 < 0xfffffffffffff001) {
                uVar5 = configfs_register_group(obj.cscfg_configs_grp,piVar12);
                piVar12 = uVar5 & 0xffffffff;
            }
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return piVar12 & 0xffffffff;
    }
    puVar6 = __stack_chk_fail();
    *extraout_x18 = sym.cscfg_configfs_add_feature;
    iVar14 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        piVar12 = 0xffffffffffffffea;
        goto code_r0x0800964c;
    }
    piVar3 = devm_kmalloc(_segment.ehdr,0x90,0xdc0);
    if (piVar3 == NULL) {
code_r0x08009648:
        piVar12 = 0xfffffffffffffff4;
    }
    else {
        if (*(puVar6 + 0x24) == 0) {
            puVar7 = NULL;
            iVar14 = 0;
        }
        else {
            iVar14 = devm_kmalloc(iVar14,0x88,0xdc0);
            if ((iVar14 == 0) || (puVar7 = devm_kmalloc(_segment.ehdr,0x28,0xdc0), puVar7 == NULL))
            goto code_r0x08009648;
            *puVar7 = obj.__this_module;
        }
        uVar9 = *puVar6;
        piVar12 = piVar3 + 1;
        *piVar3 = puVar6;
        config_group_init_type_name(piVar12,uVar9,obj.cscfg_feature_view_type);
        if (iVar14 != 0) {
            config_group_init_type_name(iVar14,"params",puVar7);
            piVar16 = piVar3[0xf];
            iVar10 = iVar14 + 0x78;
            uVar5 = __list_add_valid(iVar10,piVar16,piVar3 + 0xe);
            if ((uVar5 & 1) != 0) {
                piVar3[0xf] = iVar10;
                *(iVar14 + 0x78) = piVar3 + 0xe;
                *(iVar14 + 0x80) = piVar16;
                *piVar16 = iVar10;
            }
            iVar10 = _segment.ehdr;
            if (0 < *(puVar6 + 0x24)) {
                iVar17 = 0;
                iVar15 = 0;
                do {
                    puVar8 = devm_kmalloc(iVar10,0x98,0xdc0);
                    if (puVar8 == NULL) goto code_r0x08009648;
                    iVar11 = puVar6[5];
                    *(puVar8 + 2) = puVar6;
                    *puVar8 = iVar15;
                    config_group_init_type_name(puVar8 + 4,*(iVar11 + iVar17),obj.cscfg_param_view_type);
                    piVar3 = *(iVar14 + 0x70);
                    puVar2 = puVar8 + 0x22;
                    uVar5 = __list_add_valid(puVar2,piVar3,iVar14 + 0x68);
                    if ((uVar5 & 1) != 0) {
                        *(iVar14 + 0x70) = puVar2;
                        *(puVar8 + 0x22) = iVar14 + 0x68;
                        *(puVar8 + 0x24) = piVar3;
                        *piVar3 = puVar2;
                    }
                    iVar15 = iVar15 + 1;
                    iVar17 = iVar17 + 0x10;
                } while (iVar15 < *(puVar6 + 0x24));
            }
        }
        if (piVar12 < 0xfffffffffffff001) {
            uVar5 = configfs_register_group(obj.cscfg_features_grp,piVar12);
            piVar12 = uVar5 & 0xffffffff;
        }
    }
code_r0x0800964c:
    return piVar12 & 0xffffffff;
}


// ===== sym.cscfg_configfs_add_feature @ 0x080094b0 (size 484) =====

uint64_t sym.cscfg_configfs_add_feature(int64_t arg1)

{
    int64_t iVar1;
    uint *puVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    uint *puVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        piVar10 = 0xffffffffffffffea;
        goto code_r0x0800964c;
    }
    piVar3 = devm_kmalloc(_segment.ehdr,0x90,0xdc0);
    if (piVar3 == NULL) {
code_r0x08009648:
        piVar10 = 0xfffffffffffffff4;
    }
    else {
        if (*(arg1 + 0x24) == 0) {
            puVar5 = NULL;
            iVar4 = 0;
        }
        else {
            iVar4 = devm_kmalloc(iVar4,0x88,0xdc0);
            if ((iVar4 == 0) || (puVar5 = devm_kmalloc(_segment.ehdr,0x28,0xdc0), puVar5 == NULL))
            goto code_r0x08009648;
            *puVar5 = obj.__this_module;
        }
        uVar8 = *arg1;
        piVar10 = piVar3 + 1;
        *piVar3 = arg1;
        config_group_init_type_name(piVar10,uVar8,obj.cscfg_feature_view_type);
        if (iVar4 != 0) {
            config_group_init_type_name(iVar4,"params",puVar5);
            piVar11 = piVar3[0xf];
            iVar1 = iVar4 + 0x78;
            uVar6 = __list_add_valid(iVar1,piVar11,piVar3 + 0xe);
            if ((uVar6 & 1) != 0) {
                piVar3[0xf] = iVar1;
                *(iVar4 + 0x78) = piVar3 + 0xe;
                *(iVar4 + 0x80) = piVar11;
                *piVar11 = iVar1;
            }
            iVar1 = _segment.ehdr;
            if (0 < *(arg1 + 0x24)) {
                iVar13 = 0;
                iVar12 = 0;
                do {
                    puVar7 = devm_kmalloc(iVar1,0x98,0xdc0);
                    if (puVar7 == NULL) goto code_r0x08009648;
                    iVar9 = *(arg1 + 0x28);
                    *(puVar7 + 2) = arg1;
                    *puVar7 = iVar12;
                    config_group_init_type_name(puVar7 + 4,*(iVar9 + iVar13),obj.cscfg_param_view_type);
                    piVar3 = *(iVar4 + 0x70);
                    puVar2 = puVar7 + 0x22;
                    uVar6 = __list_add_valid(puVar2,piVar3,iVar4 + 0x68);
                    if ((uVar6 & 1) != 0) {
                        *(iVar4 + 0x70) = puVar2;
                        *(puVar7 + 0x22) = iVar4 + 0x68;
                        *(puVar7 + 0x24) = piVar3;
                        *piVar3 = puVar2;
                    }
                    iVar12 = iVar12 + 1;
                    iVar13 = iVar13 + 0x10;
                } while (iVar12 < *(arg1 + 0x24));
            }
        }
        if (piVar10 < 0xfffffffffffff001) {
            uVar6 = configfs_register_group(obj.cscfg_features_grp,piVar10);
            piVar10 = uVar6 & 0xffffffff;
        }
    }
code_r0x0800964c:
    return piVar10 & 0xffffffff;
}


// ===== sym.cscfg_configfs_init @ 0x08009694 (size 308) =====

ulong sym.cscfg_configfs_init(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar5 = 0xffffffea;
    }
    else {
        puVar3 = devm_kmalloc(_segment.ehdr,0x28,0xdc0);
        if (puVar3 == NULL) {
            uVar5 = 0xfffffff4;
        }
        else {
            iVar1 = arg1 + 0x3c8;
            *puVar3 = obj.__this_module;
            config_item_set_name(iVar1,"cs-syscfg");
            *(arg1 + 0x408) = puVar3;
            config_group_init(iVar1);
            __mutex_init(arg1 + 0x450,"&subsys->su_mutex",obj.cscfg_configfs_init.__key);
            config_group_init(obj.cscfg_configs_grp);
            puVar3 = *(arg1 + 0x438);
            iVar2 = arg1 + 0x430;
            uVar4 = __list_add_valid(0x8000b58,puVar3,iVar2);
            if ((uVar4 & 1) != 0) {
                *(arg1 + 0x438) = 0x8000b58;
                *0x8000b58 = iVar2;
                *0x8000b60 = puVar3;
                *puVar3 = 0x8000b58;
            }
            config_group_init(obj.cscfg_features_grp);
            puVar3 = *(arg1 + 0x438);
            uVar4 = __list_add_valid(0x8000be0,puVar3,iVar2);
            if ((uVar4 & 1) != 0) {
                *(arg1 + 0x438) = 0x8000be0;
                *0x8000be0 = iVar2;
                *0x8000be8 = puVar3;
                *puVar3 = 0x8000be0;
            }
            uVar5 = configfs_register_subsystem(iVar1);
        }
    }
    return uVar5;
}


// ===== sym.cscfg_configfs_release @ 0x080097c8 (size 40) =====

void sym.cscfg_configfs_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    configfs_unregister_subsystem(arg1 + 0x3c8);
    return;
}


// ===== sym.cscfg_cfg_description_show @ 0x080097f0 (size 64) =====

int64_t sym.cscfg_cfg_description_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001391,*(*(arg1 + -8) + 8));
    return iVar1;
}


// ===== sym.cscfg_cfg_feature_refs_show @ 0x08009830 (size 152) =====

int64_t sym.cscfg_cfg_feature_refs_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + -8);
    if (*(iVar3 + 0x20) < 1) {
        iVar2 = 0;
    }
    else {
        iVar4 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,0x8001961,*(*(iVar3 + 0x28) + iVar4 * 8));
            iVar2 = iVar2 + iVar1;
            iVar4 = iVar4 + 1;
        } while (iVar4 < *(iVar3 + 0x20));
    }
    return iVar2;
}


// ===== sym.cscfg_cfg_values_show @ 0x080098c8 (size 324) =====

int64_t sym.cscfg_cfg_values_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + -8);
    if (*(iVar5 + 0x30) == 0) {
        iVar4 = 0;
    }
    else {
        if (*(iVar5 + 0x20) < 1) {
            iVar4 = 0;
        }
        else {
            iVar6 = 0;
            iVar4 = 0;
            iVar2 = (*(arg1 + -0x10) + -1) * *(iVar5 + 0x34);
            do {
                puVar3 = sym.cscfg_get_named_feat_desc(*(*(iVar5 + 0x28) + iVar6 * 8));
                if (0 < *(puVar3 + 0x24)) {
                    iVar8 = 0;
                    iVar7 = 0;
                    do {
                        iVar1 = scnprintf(arg2 + iVar4,0x1000 - iVar4,"%s.%s = 0x%llx ",*puVar3,*(puVar3[5] + iVar8)
                                          ,*(*(iVar5 + 0x38) + (iVar2 + iVar7) * 8));
                        iVar4 = iVar4 + iVar1;
                        iVar7 = iVar7 + 1;
                        iVar8 = iVar8 + 0x10;
                    } while (iVar7 < *(puVar3 + 0x24));
                    iVar2 = iVar2 + iVar7;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < *(iVar5 + 0x20));
        }
        iVar2 = scnprintf(arg2 + iVar4,0x1000 - iVar4,0x80017b3);
        iVar4 = iVar4 + iVar2;
    }
    return iVar4;
}


// ===== sym.cscfg_feat_description_show @ 0x08009a0c (size 64) =====

int64_t sym.cscfg_feat_description_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001391,*(*(arg1 + -8) + 8));
    return iVar1;
}


// ===== sym.cscfg_feat_matches_show @ 0x08009a4c (size 176) =====

int64_t sym.cscfg_feat_matches_show(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + -8) + 0x20);
    if ((uVar1 & 1) == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = scnprintf(arg2,0x1000,"SRC_ALL ");
    }
    if ((uVar1 >> 1 & 1) != 0) {
        iVar3 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"SRC_ETMV4 ");
        iVar2 = iVar3 + iVar2;
    }
    iVar3 = scnprintf(arg2 + iVar2,0x1000 - iVar2,0x80017b3);
    return iVar3 + iVar2;
}


// ===== sym.cscfg_feat_nr_params_show @ 0x08009afc (size 64) =====

int64_t sym.cscfg_feat_nr_params_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001687,*(*(arg1 + -8) + 0x24));
    return iVar1;
}


// ===== sym.cscfg_param_value_show @ 0x08009b3c (size 76) =====

int64_t sym.cscfg_param_value_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"0x%llx\n",*(*(*(arg1 + -8) + 0x28) + *(arg1 + -0x10) * 0x10 + 8));
    return iVar1;
}


// ===== sym.cscfg_param_value_store @ 0x08009b88 (size 156) =====

//WARNING: Control flow encountered bad instruction data

void sym.cscfg_param_value_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + -8);
    iStack_40 = 0;
    uVar1 = *(arg1 + -0x10);
    iVar2 = kstrtoull(arg2,0,&iStack_40);
    if (iVar2 == 0) {
        iVar2 = sym.cscfg_update_feat_param_val(iVar3,uVar1,iStack_40);
    }
    iVar3 = sp_el0;
    if (iVar2 != 0) {
        arg3 = iVar2;
    }
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(arg3);
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x08009f84 (size 120) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bus_register(obj.coresight_bustype);
    if (iVar1 == 0) {
        iVar1 = sym.etm_perf_init();
        if (iVar1 == 0) {
            iVar1 = sym.cscfg_init();
            if (iVar1 == 0) {
                return 0;
            }
            perf_pmu_unregister(obj.etm_pmu.llvm.15995262632889499196);
        }
        bus_unregister(obj.coresight_bustype);
    }
    return iVar1;
}


// ===== sym.etm_perf_init @ 0x08009ffc (size 216) =====

void sym.etm_perf_init(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x80005cc = 0x30;
    _obj.coresight_bustype = obj.etm_pmu_attr_groups;
    *0x80005e4 = 1;
    *0x8000600 = sym.etm_event_init.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    *0x8000678 = sym.etm_setup_aux.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    _obj.coresight_dev_type = sym.__typeid__ZTSFvPvE_global_addr;
    *0x8000630 = sym.etm_event_stop.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    *0x8000638 = sym.etm_event_read.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    *0x8000618 = sym.etm_event_add.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    *0x8000620 = sym.etm_event_del.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    *0x8000628 = sym.etm_event_start.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    *0x80005ec = 8;
    *0x8000690 = sym.etm_addr_filters_validate.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    *0x8000698 = sym.etm_addr_filters_sync.0d04cec92c17ffd4e0d42e899a29ce76.cfi_jt;
    iVar1 = perf_pmu_register(obj.etm_pmu.llvm.15995262632889499196,"cs_etm",0xffffffff);
    if (iVar1 == 0) {
        obj.etm_perf_up = 0x1;
    }
    return;
}


// ===== sym.cscfg_init @ 0x0800a0d4 (size 372) =====

int sym.cscfg_init(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.cscfg_mutex);
    if (_segment.ehdr == 0) {
        iVar5 = kmem_cache_alloc_trace(_device_match_fwnode,0xdc0,0x480);
        _segment.ehdr = iVar5;
        if (iVar5 == 0) {
            iVar4 = -0xc;
        }
        else {
            *(iVar5 + 0x330) = sym.cscfg_dev_release.37c2f3aa70cc11a07ef3719d1c86758a.cfi_jt;
            *(iVar5 + 0x70) = "cs_system_cfg";
            iVar4 = device_register();
            if (iVar4 == 0) {
                mutex_unlock(obj.cscfg_mutex);
                iVar4 = sym.cscfg_configfs_init(_segment.ehdr);
                iVar5 = _segment.ehdr;
                if (iVar4 == 0) {
                    iVar1 = _segment.ehdr + 0x390;
                    iVar2 = _segment.ehdr + 0x3a0;
                    iVar3 = _segment.ehdr + 0x3b0;
                    *(_segment.ehdr + 0x390) = iVar1;
                    *(iVar5 + 0x398) = iVar1;
                    *(iVar5 + 0x3a0) = iVar2;
                    *(iVar5 + 0x3a8) = iVar2;
                    *(iVar5 + 0x3b0) = iVar3;
                    *(iVar5 + 0x3b8) = iVar3;
                    *(iVar5 + 0x3c0) = 0;
                    iVar4 = sym.cscfg_load_config_sets(0x80006d8,0x80006e0);
                    if (iVar4 == 0) {
                        _dev_info(_segment.ehdr,"CoreSight Configuration manager initialised");
                        return 0;
                    }
                }
                mutex_lock(obj.cscfg_mutex);
                for (piVar6 = *(_segment.ehdr + 0x3b0); _segment.ehdr + 0x3b0 != piVar6; piVar6 = *piVar6) {
                    sym.etm_perf_del_symlink_cscfg(piVar6 + -2);
                }
                configfs_unregister_subsystem(_segment.ehdr + 0x3c8);
                device_unregister(_segment.ehdr);
            }
            else {
                put_device(iVar5);
            }
        }
    }
    else {
        iVar4 = -0x16;
    }
    mutex_unlock(obj.cscfg_mutex);
    return iVar4;
}


// ===== sym.cleanup_module @ 0x0800a248 (size 60) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cscfg_exit();
    perf_pmu_unregister(obj.etm_pmu.llvm.15995262632889499196);
    bus_unregister(obj.coresight_bustype);
    return;
}

