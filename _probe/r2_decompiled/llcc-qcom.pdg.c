// decompiled from llcc-qcom by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 452) =====

//WARNING: Switch with 1 destination removed at 0x080057fc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x293639a88523680f) {
        if (-0x429b1833b9fe2de0 < arg1) {
            if (arg1 == -0x429b1833b9fe2ddf) {
                pcVar2 = sym.__typeid__ZTSFijP24llcc_staling_mode_paramsE_global_addr;
            }
            else {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x080057bc;
                pcVar2 = sym.qcom_llcc_probe.14da484d958a8d62ddf67839973dacac.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080057bc;
        }
        if (arg1 == -0x7f793ba6fca3f5ed) {
            pcVar2 = sym.llcc_slice_putd.cfi_jt;
        }
        else {
            if (arg1 != -0x525003abe2e9496a) goto code_r0x080057bc;
            pcVar2 = sym.llcc_slice_getd.cfi_jt;
        }
    }
    else if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x293639a88523680f) {
            pcVar2 = sym.llcc_get_slice_size.cfi_jt;
        }
        else {
            if (arg1 != -0x1cbc4bbad119518e) goto code_r0x080057bc;
            pcVar2 = sym.llcc_configure_staling_mode.cfi_jt;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x167317fda9e56a4d) {
            if ((pcVar1 + -0x8004200 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x080057bc;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080057bc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080057bc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005810);
    (*pcVar1)();
}


// ===== sym.llcc_configure_staling_mode.cfi_jt @ 0x080041d0 (size 8) =====

uint64_t sym.llcc_configure_staling_mode.cfi_jt(uint *param_1,uint32_t *param_2)

{
    uint uVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _segment.ehdr;
    if (_segment.ehdr < 0xfffffffffffff001) {
        if (*(_segment.ehdr + 0x6c) < 0x32) {
            uVar2 = 0xffffffa1;
        }
        else {
            uVar2 = 0xffffffea;
            if (((param_1 != NULL) && (param_1 < 0xfffffffffffff001)) && (param_2 != NULL)) {
                if (1 < *param_2) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x80048f4);
                    (*pcVar3)();
                }
                uVar1 = *param_1;
                pcVar3 = *(reloc.llcc_staling_conf_capacity.14da484d958a8d62ddf67839973dacac.cfi_jt + *param_2 * 8);
                if (1 < (pcVar3 + -0x8004230 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xbd64e7cc4601d221,pcVar3,0x8000a70);
                }
                uVar2 = (*pcVar3)(uVar1,param_2);
                uVar2 = uVar2 & 0xffffffff;
            }
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.llcc_slice_putd.cfi_jt @ 0x080041d8 (size 8) =====

void sym.llcc_slice_putd.cfi_jt(uint *param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 != NULL) && (param_1 < 0xfffffffffffff001)) && (*(param_1 + 4) != 0)) {
        __warn_printk(" Slice %d is still active\n",*param_1);
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8004330);
        (*pcVar1)();
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080041e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_llcc_probe.14da484d958a8d62ddf67839973dacac.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080041e8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_llcc_probe.14da484d958a8d62ddf67839973dacac.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.llcc_slice_getd.cfi_jt @ 0x080041f0 (size 8) =====

uint64_t sym.llcc_slice_getd.cfi_jt(int param_1)

{
    uint32_t uVar1;
    bool bVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int *piVar6;
    int *piVar7;
    
    if (0xfffffffffffff000 < _segment.ehdr) {
        return _segment.ehdr;
    }
    piVar6 = *(_segment.ehdr + 0x10);
    uVar5 = 0;
    uVar1 = *(_segment.ehdr + 0x4c);
    bVar2 = piVar6 != NULL;
    if (bVar2 && uVar1 != 0) {
        while (piVar7 = piVar6 + 0xd, *piVar6 != param_1) {
            bVar2 = piVar7 != NULL;
            uVar5 = uVar5 + 1;
            if ((piVar7 == NULL) || (piVar6 = piVar7, uVar1 <= uVar5)) goto code_r0x080042b0;
        }
        bVar2 = true;
    }
code_r0x080042b0:
    uVar3 = 0xffffffffffffffed;
    if ((uVar5 != uVar1) && (bVar2)) {
        uVar4 = *(_segment.ehdr + 0x78);
        uVar3 = 0xffffffffffffffed;
        if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
            uVar3 = uVar4 + uVar5 * 0x18;
        }
    }
    return uVar3;
}


// ===== sym.llcc_get_slice_size.cfi_jt @ 0x080041f8 (size 8) =====

ulong sym.llcc_get_slice_size.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    
    uVar1 = 0;
    if ((param_1 != 0) && (param_1 < 0xfffffffffffff001)) {
        uVar1 = *(param_1 + 8);
    }
    return uVar1;
}


// ===== sym.llcc_notif_staling_inc_counter.cfi_jt @ 0x08004200 (size 8) =====

void sym.llcc_notif_staling_inc_counter.cfi_jt(int *param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr < 0xfffffffffffff001) {
        if (*(_segment.ehdr + 0x6c) < 0x32) {
            uVar4 = 0xffffffa1;
        }
        else {
            uVar4 = 0xffffffea;
            if ((param_1 != NULL) && (param_1 < 0xfffffffffffff001)) {
                uVar1 = *param_1 << 0xc | 0xc;
                uVar4 = regmap_update_bits_base(*(_segment.ehdr + 8),uVar1,1,1,0,0,0);
                if (uVar4 == 0) {
                    uVar4 = regmap_read(*(_segment.ehdr + 8),uVar1,&uStack_2c);
                }
            }
        }
    }
    else {
        uVar4 = _segment.ehdr & 0xffffffff;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.llcc_staling_conf_capacity;
    regmap_update_bits_base
              (*(_segment.ehdr + 8),iVar3 << 0xc | 0x10,1,0,0,0,0,in_x7,&stack0xffffffffffffffe0,
               sym.llcc_staling_conf_capacity);
    return;
}


// ===== sym.llcc_slice_activate.cfi_jt @ 0x08004208 (size 8) =====

uint64_t sym.llcc_slice_activate.cfi_jt(uint32_t *param_1)

{
    uint32_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0xfffffffffffff001) {
        uVar6 = 0xffffffea;
        if ((param_1 != NULL) && (param_1 < 0xfffffffffffff001)) {
            mutex_lock(_segment.ehdr + 0x18);
            puVar1 = param_1 + 4;
            if (*puVar1 < 1) {
                uVar4 = *param_1;
                uVar6 = _segment.ehdr;
                if ((*(*(_segment.ehdr + 0x58) + (uVar4 >> 3 & 0x1ffffff8)) >> (uVar4 & 0x3f) & 1) == 0) {
                    uVar4 = sym.llcc_update_act_ctrl(uVar4,2,2);
                    if (uVar4 != 0) {
                        mutex_unlock(_segment.ehdr + 0x18);
                        return uVar4;
                    }
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                            *puVar1 = *puVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                        uVar6 = _segment.ehdr;
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
                    uVar5 = *param_1 >> 3 & 0x1ffffff8;
                    *(*(_segment.ehdr + 0x58) + uVar5) = *(*(_segment.ehdr + 0x58) + uVar5) | 1L << (*param_1 & 0x3f);
                }
            }
            else {
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
                uVar6 = _segment.ehdr;
            }
            mutex_unlock(uVar6 + 0x18);
            uVar6 = 0;
        }
    }
    else {
        uVar6 = _segment.ehdr & 0xffffffff;
    }
    return uVar6;
}


// ===== sym.llcc_slice_deactivate.cfi_jt @ 0x08004210 (size 8) =====

uint64_t sym.llcc_slice_deactivate.cfi_jt(uint32_t *param_1)

{
    uint32_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0xfffffffffffff001) {
        uVar6 = 0xffffffea;
        if ((param_1 != NULL) && (param_1 < 0xfffffffffffff001)) {
            mutex_lock(_segment.ehdr + 0x18);
            puVar1 = param_1 + 4;
            if (*puVar1 < 2) {
                uVar4 = *param_1;
                if ((*(*(_segment.ehdr + 0x58) + (uVar4 >> 3 & 0x1ffffff8)) >> (uVar4 & 0x3f) & 1) != 0) {
                    uVar4 = sym.llcc_update_act_ctrl(uVar4,4,1);
                    uVar6 = _segment.ehdr;
                    if (uVar4 == 0) {
                        param_1[4] = 0;
                        uVar6 = _segment.ehdr;
                        uVar5 = *param_1 >> 3 & 0x1ffffff8;
                        *(*(_segment.ehdr + 0x58) + uVar5) =
                             *(*(_segment.ehdr + 0x58) + uVar5) & (1L << (*param_1 & 0x3f) ^ 0xffffffffffffffffU);
                    }
                    mutex_unlock(uVar6 + 0x18);
                    return uVar4;
                }
            }
            else {
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 - 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
            }
            mutex_unlock(_segment.ehdr + 0x18);
            uVar6 = 0;
        }
    }
    else {
        uVar6 = _segment.ehdr & 0xffffffff;
    }
    return uVar6;
}


// ===== sym.llcc_get_slice_id.cfi_jt @ 0x08004218 (size 8) =====

uint sym.llcc_get_slice_id.cfi_jt(uint *param_1)

{
    uint uVar1;
    
    uVar1 = 0xffffffea;
    if ((param_1 != NULL) && (param_1 < 0xfffffffffffff001)) {
        uVar1 = *param_1;
    }
    return uVar1;
}


// ===== sym.qcom_llcc_probe.14da484d958a8d62ddf67839973dacac.cfi_jt @ 0x08004220 (size 8) =====

uint64_t sym.qcom_llcc_probe.14da484d958a8d62ddf67839973dacac.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong *puVar9;
    int64_t iVar10;
    char *pcVar11;
    code *pcVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    code *pcVar15;
    ulong *in_x18;
    int64_t iVar16;
    ulong unaff_x30;
    uint32_t uStack_18c;
    ulong uStack_188;
    uint32_t uStack_180;
    uint32_t uStack_17c;
    char *pcStack_178;
    ulong uStack_170;
    ulong uStack_168;
    char *pcStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    code *pcStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uchar uStack_f8;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    pcVar1 = param_1 + 0x10;
    iStack_58 = *(iVar16 + 0x5e0);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_18c = 0;
    _segment.ehdr = devm_kmalloc(pcVar1,0x80,0xdc0);
    if (_segment.ehdr == NULL) {
code_r0x08004fa8:
        uVar6 = 0xfffffff4;
    }
    else {
        memset(&uStack_168,0,0x110);
        uStack_170 = 0x400000020;
        uStack_168 = CONCAT44(0x20,uStack_168);
        uStack_f8 = 1;
        uVar6 = devm_platform_ioremap_resource_byname(param_1,"llcc_base");
        if (uVar6 < 0xfffffffffffff001) {
            pcStack_178 = "llcc_base";
            uVar6 = __devm_regmap_init_mmio_clk(pcVar1,0,uVar6,&pcStack_178,0,0);
        }
        *_segment.ehdr = uVar6;
        if (uVar6 < 0xfffffffffffff001) {
            memset(&uStack_168,0,0x110);
            uStack_170 = 0x400000020;
            uStack_168 = CONCAT44(0x20,uStack_168);
            uStack_f8 = 1;
            uVar6 = devm_platform_ioremap_resource_byname(param_1,"llcc_broadcast_base");
            if (uVar6 < 0xfffffffffffff001) {
                pcStack_178 = "llcc_broadcast_base";
                uVar6 = __devm_regmap_init_mmio_clk(pcVar1,0,uVar6,&pcStack_178,0,0);
            }
            *(_segment.ehdr + 8) = uVar6;
            if (uVar6 < 0xfffffffffffff001) {
                iVar3 = of_property_match_string(*(param_1 + 0x300),"compatible","qcom,llcc-v50");
                if (iVar3 < 0) {
                    iVar3 = of_property_match_string(*(param_1 + 0x300),"compatible","qcom,llcc-v41");
                    if (-1 < iVar3) {
                        uVar5 = 0x29;
                        pcVar12 = _segment.ehdr;
                        goto code_r0x08004ca4;
                    }
                    iVar3 = of_property_match_string(*(param_1 + 0x300),"compatible","qcom,llcc-v31");
                    if (iVar3 < 0) {
                        iVar3 = of_property_match_string(*(param_1 + 0x300),"compatible","qcom,llcc-v21");
                        pcVar12 = _segment.ehdr;
                        if (iVar3 < 0) {
                            uVar5 = 0x14;
                            _segment.ehdr = obj.llcc_regs_v2;
                            pcVar15 = obj.llcc_offsets_v2;
                        }
                        else {
                            uVar5 = 0x15;
                            _segment.ehdr = obj.llcc_regs_v21;
                            pcVar15 = obj.llcc_offsets_v21;
                        }
                        goto code_r0x08004cb8;
                    }
                    *(_segment.ehdr + 0x6c) = 0x1f;
                    *(_segment.ehdr + 0x60) = obj.llcc_offsets_v31;
                    _segment.ehdr = obj.llcc_regs_v21;
                    iVar3 = of_property_match_string(*(param_1 + 0x300),"compatible",0x8000ac5);
                    pcVar12 = _segment.ehdr;
                    if (-1 < iVar3) {
                        pcVar15 = obj.llcc_offsets_v311_lemans;
                        *(_segment.ehdr + 0x54) = 6;
                        goto code_r0x08004cbc;
                    }
                }
                else {
                    uVar5 = 0x32;
                    pcVar12 = _segment.ehdr;
code_r0x08004ca4:
                    _segment.ehdr = obj.llcc_regs_v21;
                    pcVar15 = obj.llcc_offsets_v41;
code_r0x08004cb8:
                    *(pcVar12 + 0x6c) = uVar5;
code_r0x08004cbc:
                    *(pcVar12 + 0x60) = pcVar15;
                }
                uVar7 = regmap_read(*pcVar12,*_segment.ehdr,&uStack_17c);
                uVar6 = uVar7 & 0xffffffff;
                if (uVar7 == 0) {
                    uStack_17c = uStack_17c >> 0x1c;
                    iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"max-banks",&uStack_180,1,0);
                    uVar4 = uStack_17c;
                    if (uStack_180 <= uStack_17c) {
                        uVar4 = uStack_180;
                    }
                    if (iVar3 < 0) {
                        uVar4 = uStack_17c;
                    }
                    *(_segment.ehdr + 0x54) = uVar4;
                    piVar8 = of_device_get_match_data(pcVar1);
                    if (piVar8 == NULL) {
                        pcVar11 = "No matching LLCC configuration found\n";
code_r0x0800505c:
                        _dev_err(pcVar1,pcVar11);
                        uVar6 = 0xffffffed;
                    }
                    else {
                        puVar9 = platform_get_resource_byname(param_1,0x200,"multi_ch_reg");
                        if (puVar9 != NULL) {
                            iVar3 = of_property_read_u32_index(*(param_1 + 0x300),"multi-ch-off",1,&uStack_188 + 4);
                            if (iVar3 != 0) {
                                pcVar11 = "Couldn\'t get size of multi channel feature register\n";
                                goto code_r0x0800505c;
                            }
                            iVar3 = of_property_read_variable_u32_array
                                              (*(param_1 + 0x300),"multi-ch-off",&uStack_188,1,0);
                            if (iVar3 < 0) {
                                uStack_188 = uStack_188 & 0xffffffff00000000;
                            }
                            iVar3 = qcom_scm_io_readl(*puVar9,&uStack_18c);
                            if (iVar3 != 0) {
                                _dev_err(pcVar1,"Couldn\'t access multi channel feature register\n");
                            }
                            uStack_18c = uStack_18c >> (uStack_188 & 0x3f) & ~(-1 << (uStack_188._4_4_ & 0x1f));
                            piVar8 = piVar8 + uStack_18c * 2;
                            *(_segment.ehdr + 0x48) = uStack_18c;
                        }
                        uVar4 = *(piVar8 + 1);
                        iVar16 = *piVar8;
                        uVar7 = devm_kmalloc(pcVar1,uVar4 * 0x18,0xdc0);
                        pcVar12 = _segment.ehdr;
                        uVar6 = 0xfffffff4;
                        *(_segment.ehdr + 0x78) = uVar7;
                        if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
                            if (uVar4 != 0) {
                                uVar13 = 0;
                                uVar14 = *(pcVar12 + 0x50);
                                do {
                                    uVar2 = *(iVar16 + uVar13 * 0x34 + 4);
                                    if (uVar14 < uVar2) {
                                        *(pcVar12 + 0x50) = uVar2;
                                        uVar14 = uVar2;
                                    }
                                    uVar13 = uVar13 + 1;
                                } while (uVar4 != uVar13);
                            }
                            iVar10 = of_find_property(*(param_1 + 0x300),"cap-based-alloc-and-pwr-collapse",0);
                            pcVar12 = _segment.ehdr + 0x50;
                            _segment.ehdr[0x70] = iVar10 != 0;
                            iVar10 = devm_kmalloc(pcVar1,*pcVar12 + 0x3f >> 3 & 0x3ffffff8,0xdc0);
                            pcVar12 = _segment.ehdr;
                            *(_segment.ehdr + 0x58) = iVar10;
                            if (iVar10 == 0) goto code_r0x08004fa8;
                            *(pcVar12 + 0x10) = iVar16;
                            *(pcVar12 + 0x4c) = uVar4;
                            __mutex_init(pcVar12 + 0x18,"&drv_data->lock",obj.qcom_llcc_probe.__key);
                            *(param_1 + 0xa8) = _segment.ehdr;
                            uVar4 = sym.qcom_llcc_cfg_program(param_1);
                            if (uVar4 == 0) {
                                uVar5 = platform_get_irq(param_1,0);
                                pcStack_140 = _segment.ehdr;
                                uStack_150 = 0;
                                uStack_170 = 0;
                                *(_segment.ehdr + 0x68) = uVar5;
                                uStack_168 = 0;
                                pcStack_160 = "qcom_llcc_edac";
                                uStack_148 = 0;
                                uStack_128 = 0;
                                uStack_120 = 0;
                                uStack_158 = 0xffffffff;
                                uStack_138 = 0x80;
                                uStack_130 = 0;
                                pcStack_178 = pcVar1;
                                uVar6 = platform_device_register_full(&pcStack_178);
                                if (0xfffffffffffff000 < uVar6) {
                                    _dev_err(pcVar1,"Failed to register llcc edac driver\n");
                                }
                                iVar3 = of_platform_populate(*(param_1 + 0x300),0,0,pcVar1);
                                if (iVar3 < 0) {
                                    _dev_err(pcVar1,"llcc populate failed!!\n");
                                }
                                uVar6 = 0;
                                goto code_r0x08004fb4;
                            }
                            uVar6 = uVar4;
                            _printk(0x8000c79);
                        }
                    }
                }
            }
            else {
                uVar6 = uVar6 & 0xffffffff;
            }
        }
    }
    _segment.ehdr = 0xffffffffffffffed;
code_r0x08004fb4:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        _segment.ehdr = 0xffffffffffffffed;
        return 0;
    }
    return uVar6 & 0xffffffff;
}


// ===== sym.qcom_llcc_remove.14da484d958a8d62ddf67839973dacac.cfi_jt @ 0x08004228 (size 8) =====

ulong sym.qcom_llcc_remove.14da484d958a8d62ddf67839973dacac.cfi_jt(void)

{
    _segment.ehdr = 0xffffffffffffffed;
    return 0;
}


// ===== sym.__typeid__ZTSFijP24llcc_staling_mode_paramsE_global_addr @ 0x08004230 (size 8) =====

void sym.__typeid__ZTSFijP24llcc_staling_mode_paramsE_global_addr(int param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    regmap_update_bits_base(*(_segment.ehdr + 8),param_1 << 0xc | 0x10,1,0,0,0,0);
    return;
}


// ===== sym.llcc_staling_conf_notify.14da484d958a8d62ddf67839973dacac.cfi_jt @ 0x08004238 (size 8) =====

ulong sym.llcc_staling_conf_notify.14da484d958a8d62ddf67839973dacac.cfi_jt(int param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 8) == 0) {
        uVar1 = param_1 << 0xc | 0x10;
        uVar2 = regmap_update_bits_base(*(_segment.ehdr + 8),uVar1,1,1,0,0,0);
        if (uVar2 == 0) {
            uVar2 = regmap_update_bits_base(*(_segment.ehdr + 8),uVar1,0x70,*(param_2 + 4),0,0,0);
        }
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.llcc_slice_getd @ 0x08004240 (size 164) =====

uint64_t sym.llcc_slice_getd(uint32_t arg1)

{
    uint32_t uVar1;
    bool bVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    
    if (0xfffffffffffff000 < _segment.ehdr) {
        return _segment.ehdr;
    }
    puVar6 = *(_segment.ehdr + 0x10);
    uVar5 = 0;
    uVar1 = *(_segment.ehdr + 0x4c);
    bVar2 = puVar6 != NULL;
    if (bVar2 && uVar1 != 0) {
        while (puVar7 = puVar6 + 0xd, *puVar6 != arg1) {
            bVar2 = puVar7 != NULL;
            uVar5 = uVar5 + 1;
            if ((puVar7 == NULL) || (puVar6 = puVar7, uVar1 <= uVar5)) goto code_r0x080042b0;
        }
        bVar2 = true;
    }
code_r0x080042b0:
    uVar3 = 0xffffffffffffffed;
    if ((uVar5 != uVar1) && (bVar2)) {
        uVar4 = *(_segment.ehdr + 0x78);
        uVar3 = 0xffffffffffffffed;
        if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
            uVar3 = uVar4 + uVar5 * 0x18;
        }
    }
    return uVar3;
}


// ===== sym.llcc_slice_putd @ 0x080042e4 (size 76) =====

void sym.llcc_slice_putd(uint32_t arg1)

{
    code *pcVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    if (((puVar2 != NULL) && (puVar2 < 0xfffffffffffff001)) && (*(puVar2 + 4) != 0)) {
        __warn_printk(" Slice %d is still active\n",*puVar2);
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8004330);
        (*pcVar1)();
    }
    return;
}


// ===== sym.llcc_slice_activate @ 0x08004338 (size 380) =====

uint64_t sym.llcc_slice_activate(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0xfffffffffffff001) {
        uVar6 = 0xffffffea;
        if ((arg1 != 0) && (arg1 < 0xfffffffffffff001)) {
            mutex_lock(_segment.ehdr + 0x18);
            piVar1 = arg1 + 0x10;
            if (*piVar1 < 1) {
                uVar4 = *arg1;
                uVar6 = _segment.ehdr;
                if ((*(*(_segment.ehdr + 0x58) + (uVar4 >> 3 & 0x1ffffff8)) >> (uVar4 & 0x3f) & 1) == 0) {
                    uVar4 = sym.llcc_update_act_ctrl(uVar4,2,2);
                    if (uVar4 != 0) {
                        mutex_unlock(_segment.ehdr + 0x18);
                        return uVar4;
                    }
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                            *piVar1 = *piVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                        uVar6 = _segment.ehdr;
                    } while (cVar2 != '\0');
                    DataMemoryBarrier(2,3);
                    uVar5 = *arg1 >> 3 & 0x1ffffff8;
                    *(*(_segment.ehdr + 0x58) + uVar5) = *(*(_segment.ehdr + 0x58) + uVar5) | 1L << (*arg1 & 0x3f);
                }
            }
            else {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                        *piVar1 = *piVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
                uVar6 = _segment.ehdr;
            }
            mutex_unlock(uVar6 + 0x18);
            uVar6 = 0;
        }
    }
    else {
        uVar6 = _segment.ehdr & 0xffffffff;
    }
    return uVar6;
}


// ===== sym.llcc_update_act_ctrl @ 0x080044b4 (size 512) =====

uint64_t sym.llcc_update_act_ctrl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uStack_5c = 0;
    uVar12 = _segment.ehdr;
    if (_segment.ehdr < 0xfffffffffffff001) {
        iVar4 = arg1;
        uVar7 = regmap_write(*(_segment.ehdr + 8),iVar4 << 0xc,arg2 | 1);
        uVar12 = uVar7 & 0xffffffff;
        if (uVar7 == 0) {
            uVar7 = regmap_write(*(_segment.ehdr + 8),iVar4 << 0xc,arg2 & 0xfffffffe);
            uVar12 = uVar7 & 0xffffffff;
            if (uVar7 == 0) {
                uVar6 = iVar4 << 0xc | 4;
                if (0x28 < *(_segment.ehdr + 0x6c)) {
                    iVar8 = ktime_get();
                    do {
                        uVar5 = regmap_read(*(_segment.ehdr + 8),uVar6,&uStack_5c);
                        if (uVar5 != 0) goto code_r0x080045e8;
                        if ((uStack_5c >> 4 & 1) != 0) {
                            uVar5 = 0;
                            goto code_r0x080045e8;
                        }
                        iVar9 = ktime_get();
                    } while (iVar9 <= iVar8 + 100000);
                    uVar5 = regmap_read(*(_segment.ehdr + 8),uVar6,&uStack_5c);
code_r0x080045e8:
                    uVar11 = 0;
                    if (uVar5 == 0 && (uStack_5c & 0x10) == 0) {
                        uVar11 = 0xffffff92;
                    }
                    if (uVar5 == 0) {
                        uVar5 = uVar11;
                    }
                    uVar12 = uVar5;
                    if (uVar5 != 0) goto code_r0x0800453c;
                }
                iVar8 = ktime_get();
                do {
                    uVar12 = regmap_read(*(_segment.ehdr + 8),uVar6,&uStack_5c);
                    if (uVar12 != 0) {
                        uVar12 = uVar12 & 0xffffffff;
                        goto code_r0x0800468c;
                    }
                    if ((uStack_5c & arg3) == 0) {
                        uVar12 = 0;
                        goto code_r0x0800468c;
                    }
                    iVar9 = ktime_get();
                } while (iVar9 <= iVar8 + 100000);
                uVar7 = regmap_read(*(_segment.ehdr + 8),uVar6,&uStack_5c);
                uVar12 = uVar7 & 0xffffffff;
                uVar6 = 0;
                if ((uStack_5c & arg3) != 0) {
                    uVar6 = 0xffffff92;
                }
                if (uVar7 == 0) {
                    uVar12 = uVar6;
                }
code_r0x0800468c:
                if (0x28 < *(_segment.ehdr + 0x6c)) {
                    regmap_write(*(_segment.ehdr + 8),iVar4 << 0xc | 8,1);
                }
            }
        }
    }
code_r0x0800453c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar12 & 0xffffffff;
    }
    puVar10 = __stack_chk_fail();
    *extraout_x18 = sym.llcc_slice_deactivate;
    if (_segment.ehdr < 0xfffffffffffff001) {
        uVar12 = 0xffffffea;
        if ((puVar10 != NULL) && (puVar10 < 0xfffffffffffff001)) {
            mutex_lock(_segment.ehdr + 0x18);
            puVar1 = puVar10 + 4;
            if (*puVar1 < 2) {
                uVar6 = *puVar10;
                if ((*(*(_segment.ehdr + 0x58) + (uVar6 >> 3 & 0x1ffffff8)) >> (uVar6 & 0x3f) & 1) != 0) {
                    uVar6 = sym.llcc_update_act_ctrl(uVar6,4,1);
                    uVar12 = _segment.ehdr;
                    if (uVar6 == 0) {
                        puVar10[4] = 0;
                        uVar12 = _segment.ehdr;
                        uVar7 = *puVar10 >> 3 & 0x1ffffff8;
                        *(*(_segment.ehdr + 0x58) + uVar7) =
                             *(*(_segment.ehdr + 0x58) + uVar7) & (1L << (*puVar10 & 0x3f) ^ 0xffffffffffffffffU);
                    }
                    mutex_unlock(uVar12 + 0x18);
                    return uVar6;
                }
            }
            else {
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                        *puVar1 = *puVar1 - 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
            }
            mutex_unlock(_segment.ehdr + 0x18);
            uVar12 = 0;
        }
    }
    else {
        uVar12 = _segment.ehdr & 0xffffffff;
    }
    return uVar12;
}


// ===== sym.llcc_slice_deactivate @ 0x080046b4 (size 332) =====

uint64_t sym.llcc_slice_deactivate(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0xfffffffffffff001) {
        uVar6 = 0xffffffea;
        if ((arg1 != 0) && (arg1 < 0xfffffffffffff001)) {
            mutex_lock(_segment.ehdr + 0x18);
            piVar1 = arg1 + 0x10;
            if (*piVar1 < 2) {
                uVar4 = *arg1;
                if ((*(*(_segment.ehdr + 0x58) + (uVar4 >> 3 & 0x1ffffff8)) >> (uVar4 & 0x3f) & 1) != 0) {
                    uVar4 = sym.llcc_update_act_ctrl(uVar4,4,1);
                    uVar6 = _segment.ehdr;
                    if (uVar4 == 0) {
                        *(arg1 + 0x10) = 0;
                        uVar6 = _segment.ehdr;
                        uVar5 = *arg1 >> 3 & 0x1ffffff8;
                        *(*(_segment.ehdr + 0x58) + uVar5) =
                             *(*(_segment.ehdr + 0x58) + uVar5) & (1L << (*arg1 & 0x3f) ^ 0xffffffffffffffffU);
                    }
                    mutex_unlock(uVar6 + 0x18);
                    return uVar4;
                }
            }
            else {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                        *piVar1 = *piVar1 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
            }
            mutex_unlock(_segment.ehdr + 0x18);
            uVar6 = 0;
        }
    }
    else {
        uVar6 = _segment.ehdr & 0xffffffff;
    }
    return uVar6;
}


// ===== sym.llcc_get_slice_id @ 0x08004800 (size 40) =====

uint sym.llcc_get_slice_id(int64_t arg1)

{
    uint uVar1;
    
    uVar1 = 0xffffffea;
    if ((arg1 != 0) && (arg1 < 0xfffffffffffff001)) {
        uVar1 = *arg1;
    }
    return uVar1;
}


// ===== sym.llcc_get_slice_size @ 0x08004828 (size 40) =====

ulong sym.llcc_get_slice_size(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = 0;
    if ((arg1 != 0) && (arg1 < 0xfffffffffffff001)) {
        uVar1 = *(arg1 + 8);
    }
    return uVar1;
}


// ===== sym.llcc_configure_staling_mode @ 0x08004850 (size 216) =====

uint64_t sym.llcc_configure_staling_mode(uint32_t arg1,int64_t arg2)

{
    uint uVar1;
    uint *puVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    uVar3 = _segment.ehdr;
    if (_segment.ehdr < 0xfffffffffffff001) {
        if (*(_segment.ehdr + 0x6c) < 0x32) {
            uVar3 = 0xffffffa1;
        }
        else {
            uVar3 = 0xffffffea;
            if (((puVar2 != NULL) && (puVar2 < 0xfffffffffffff001)) && (arg2 != 0)) {
                if (1 < *arg2) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x80048f4);
                    (*pcVar4)();
                }
                uVar1 = *puVar2;
                pcVar4 = *(reloc.llcc_staling_conf_capacity.14da484d958a8d62ddf67839973dacac.cfi_jt + *arg2 * 8);
                if (1 < (pcVar4 + -0x8004230 >> 3 | pcVar4 << 0x3d)) {
                    __cfi_slowpath_diag(0xbd64e7cc4601d221,pcVar4,0x8000a70);
                }
                uVar3 = (*pcVar4)(uVar1,arg2);
                uVar3 = uVar3 & 0xffffffff;
            }
        }
    }
    return uVar3 & 0xffffffff;
}


// ===== sym.llcc_notif_staling_inc_counter @ 0x08004928 (size 220) =====

void sym.llcc_notif_staling_inc_counter(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr < 0xfffffffffffff001) {
        if (*(_segment.ehdr + 0x6c) < 0x32) {
            uVar4 = 0xffffffa1;
        }
        else {
            uVar4 = 0xffffffea;
            if ((arg1 != 0) && (arg1 < 0xfffffffffffff001)) {
                uVar1 = *arg1 << 0xc | 0xc;
                uVar4 = regmap_update_bits_base(*(_segment.ehdr + 8),uVar1,1,1,0,0,0);
                if (uVar4 == 0) {
                    uVar4 = regmap_read(*(_segment.ehdr + 8),uVar1,&uStack_2c);
                }
            }
        }
    }
    else {
        uVar4 = _segment.ehdr & 0xffffffff;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.llcc_staling_conf_capacity;
    regmap_update_bits_base
              (*(_segment.ehdr + 8),iVar3 << 0xc | 0x10,1,0,0,0,0,in_x7,&stack0xffffffffffffffe0,
               sym.llcc_staling_conf_capacity);
    return;
}


// ===== sym.llcc_staling_conf_capacity @ 0x08004a04 (size 76) =====

void sym.llcc_staling_conf_capacity(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    regmap_update_bits_base(*(_segment.ehdr + 8),arg1 << 0xc | 0x10,1,0,0,0,0);
    return;
}


// ===== sym.llcc_staling_conf_notify @ 0x08004a50 (size 156) =====

ulong sym.llcc_staling_conf_notify(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 8) == 0) {
        uVar1 = arg1 << 0xc | 0x10;
        uVar2 = regmap_update_bits_base(*(_segment.ehdr + 8),uVar1,1,1,0,0,0);
        if (uVar2 == 0) {
            uVar2 = regmap_update_bits_base(*(_segment.ehdr + 8),uVar1,0x70,*(arg2 + 4),0,0,0);
        }
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.qcom_llcc_probe @ 0x08004aec (size 1492) =====

uint64_t sym.qcom_llcc_probe(int64_t arg1)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong *puVar9;
    int64_t iVar10;
    char *pcVar11;
    code *pcVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    code *pcVar15;
    ulong *in_x18;
    int64_t iVar16;
    ulong unaff_x30;
    uint32_t uStack_18c;
    ulong uStack_188;
    uint32_t uStack_180;
    uint32_t uStack_17c;
    char *pcStack_178;
    ulong uStack_170;
    ulong uStack_168;
    char *pcStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    code *pcStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uchar uStack_f8;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    pcVar1 = arg1 + 0x10;
    iStack_58 = *(iVar16 + 0x5e0);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_18c = 0;
    _segment.ehdr = devm_kmalloc(pcVar1,0x80,0xdc0);
    if (_segment.ehdr == NULL) {
code_r0x08004fa8:
        uVar6 = 0xfffffff4;
    }
    else {
        memset(&uStack_168,0,0x110);
        uStack_170 = 0x400000020;
        uStack_168 = CONCAT44(0x20,uStack_168);
        uStack_f8 = 1;
        uVar6 = devm_platform_ioremap_resource_byname(arg1,"llcc_base");
        if (uVar6 < 0xfffffffffffff001) {
            pcStack_178 = "llcc_base";
            uVar6 = __devm_regmap_init_mmio_clk(pcVar1,0,uVar6,&pcStack_178,0,0);
        }
        *_segment.ehdr = uVar6;
        if (uVar6 < 0xfffffffffffff001) {
            memset(&uStack_168,0,0x110);
            uStack_170 = 0x400000020;
            uStack_168 = CONCAT44(0x20,uStack_168);
            uStack_f8 = 1;
            uVar6 = devm_platform_ioremap_resource_byname(arg1,"llcc_broadcast_base");
            if (uVar6 < 0xfffffffffffff001) {
                pcStack_178 = "llcc_broadcast_base";
                uVar6 = __devm_regmap_init_mmio_clk(pcVar1,0,uVar6,&pcStack_178,0,0);
            }
            *(_segment.ehdr + 8) = uVar6;
            if (uVar6 < 0xfffffffffffff001) {
                iVar3 = of_property_match_string(*(arg1 + 0x300),"compatible","qcom,llcc-v50");
                if (iVar3 < 0) {
                    iVar3 = of_property_match_string(*(arg1 + 0x300),"compatible","qcom,llcc-v41");
                    if (-1 < iVar3) {
                        uVar5 = 0x29;
                        pcVar12 = _segment.ehdr;
                        goto code_r0x08004ca4;
                    }
                    iVar3 = of_property_match_string(*(arg1 + 0x300),"compatible","qcom,llcc-v31");
                    if (iVar3 < 0) {
                        iVar3 = of_property_match_string(*(arg1 + 0x300),"compatible","qcom,llcc-v21");
                        pcVar12 = _segment.ehdr;
                        if (iVar3 < 0) {
                            uVar5 = 0x14;
                            _segment.ehdr = obj.llcc_regs_v2;
                            pcVar15 = obj.llcc_offsets_v2;
                        }
                        else {
                            uVar5 = 0x15;
                            _segment.ehdr = obj.llcc_regs_v21;
                            pcVar15 = obj.llcc_offsets_v21;
                        }
                        goto code_r0x08004cb8;
                    }
                    *(_segment.ehdr + 0x6c) = 0x1f;
                    *(_segment.ehdr + 0x60) = obj.llcc_offsets_v31;
                    _segment.ehdr = obj.llcc_regs_v21;
                    iVar3 = of_property_match_string(*(arg1 + 0x300),"compatible",0x8000ac5);
                    pcVar12 = _segment.ehdr;
                    if (-1 < iVar3) {
                        pcVar15 = obj.llcc_offsets_v311_lemans;
                        *(_segment.ehdr + 0x54) = 6;
                        goto code_r0x08004cbc;
                    }
                }
                else {
                    uVar5 = 0x32;
                    pcVar12 = _segment.ehdr;
code_r0x08004ca4:
                    _segment.ehdr = obj.llcc_regs_v21;
                    pcVar15 = obj.llcc_offsets_v41;
code_r0x08004cb8:
                    *(pcVar12 + 0x6c) = uVar5;
code_r0x08004cbc:
                    *(pcVar12 + 0x60) = pcVar15;
                }
                uVar7 = regmap_read(*pcVar12,*_segment.ehdr,&uStack_17c);
                uVar6 = uVar7 & 0xffffffff;
                if (uVar7 == 0) {
                    uStack_17c = uStack_17c >> 0x1c;
                    iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"max-banks",&uStack_180,1,0);
                    uVar4 = uStack_17c;
                    if (uStack_180 <= uStack_17c) {
                        uVar4 = uStack_180;
                    }
                    if (iVar3 < 0) {
                        uVar4 = uStack_17c;
                    }
                    *(_segment.ehdr + 0x54) = uVar4;
                    piVar8 = of_device_get_match_data(pcVar1);
                    if (piVar8 == NULL) {
                        pcVar11 = "No matching LLCC configuration found\n";
code_r0x0800505c:
                        _dev_err(pcVar1,pcVar11);
                        uVar6 = 0xffffffed;
                    }
                    else {
                        puVar9 = platform_get_resource_byname(arg1,0x200,"multi_ch_reg");
                        if (puVar9 != NULL) {
                            iVar3 = of_property_read_u32_index(*(arg1 + 0x300),"multi-ch-off",1,&uStack_188 + 4);
                            if (iVar3 != 0) {
                                pcVar11 = "Couldn\'t get size of multi channel feature register\n";
                                goto code_r0x0800505c;
                            }
                            iVar3 = of_property_read_variable_u32_array
                                              (*(arg1 + 0x300),"multi-ch-off",&uStack_188,1,0);
                            if (iVar3 < 0) {
                                uStack_188 = uStack_188 & 0xffffffff00000000;
                            }
                            iVar3 = qcom_scm_io_readl(*puVar9,&uStack_18c);
                            if (iVar3 != 0) {
                                _dev_err(pcVar1,"Couldn\'t access multi channel feature register\n");
                            }
                            uStack_18c = uStack_18c >> (uStack_188 & 0x3f) & ~(-1 << (uStack_188._4_4_ & 0x1f));
                            piVar8 = piVar8 + uStack_18c * 2;
                            *(_segment.ehdr + 0x48) = uStack_18c;
                        }
                        uVar4 = *(piVar8 + 1);
                        iVar16 = *piVar8;
                        uVar7 = devm_kmalloc(pcVar1,uVar4 * 0x18,0xdc0);
                        pcVar12 = _segment.ehdr;
                        uVar6 = 0xfffffff4;
                        *(_segment.ehdr + 0x78) = uVar7;
                        if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
                            if (uVar4 != 0) {
                                uVar13 = 0;
                                uVar14 = *(pcVar12 + 0x50);
                                do {
                                    uVar2 = *(iVar16 + uVar13 * 0x34 + 4);
                                    if (uVar14 < uVar2) {
                                        *(pcVar12 + 0x50) = uVar2;
                                        uVar14 = uVar2;
                                    }
                                    uVar13 = uVar13 + 1;
                                } while (uVar4 != uVar13);
                            }
                            iVar10 = of_find_property(*(arg1 + 0x300),"cap-based-alloc-and-pwr-collapse",0);
                            pcVar12 = _segment.ehdr + 0x50;
                            _segment.ehdr[0x70] = iVar10 != 0;
                            iVar10 = devm_kmalloc(pcVar1,*pcVar12 + 0x3f >> 3 & 0x3ffffff8,0xdc0);
                            pcVar12 = _segment.ehdr;
                            *(_segment.ehdr + 0x58) = iVar10;
                            if (iVar10 == 0) goto code_r0x08004fa8;
                            *(pcVar12 + 0x10) = iVar16;
                            *(pcVar12 + 0x4c) = uVar4;
                            __mutex_init(pcVar12 + 0x18,"&drv_data->lock",obj.qcom_llcc_probe.__key);
                            *(arg1 + 0xa8) = _segment.ehdr;
                            uVar4 = sym.qcom_llcc_cfg_program(arg1);
                            if (uVar4 == 0) {
                                uVar5 = platform_get_irq(arg1,0);
                                pcStack_140 = _segment.ehdr;
                                uStack_150 = 0;
                                uStack_170 = 0;
                                *(_segment.ehdr + 0x68) = uVar5;
                                uStack_168 = 0;
                                pcStack_160 = "qcom_llcc_edac";
                                uStack_148 = 0;
                                uStack_128 = 0;
                                uStack_120 = 0;
                                uStack_158 = 0xffffffff;
                                uStack_138 = 0x80;
                                uStack_130 = 0;
                                pcStack_178 = pcVar1;
                                uVar6 = platform_device_register_full(&pcStack_178);
                                if (0xfffffffffffff000 < uVar6) {
                                    _dev_err(pcVar1,"Failed to register llcc edac driver\n");
                                }
                                iVar3 = of_platform_populate(*(arg1 + 0x300),0,0,pcVar1);
                                if (iVar3 < 0) {
                                    _dev_err(pcVar1,"llcc populate failed!!\n");
                                }
                                uVar6 = 0;
                                goto code_r0x08004fb4;
                            }
                            uVar6 = uVar4;
                            _printk(0x8000c79);
                        }
                    }
                }
            }
            else {
                uVar6 = uVar6 & 0xffffffff;
            }
        }
    }
    _segment.ehdr = 0xffffffffffffffed;
code_r0x08004fb4:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        _segment.ehdr = 0xffffffffffffffed;
        return 0;
    }
    return uVar6 & 0xffffffff;
}


// ===== sym.qcom_llcc_remove @ 0x080050c0 (size 28) =====

ulong sym.qcom_llcc_remove(int64_t arg1)

{
    _segment.ehdr = 0xffffffffffffffed;
    return 0;
}


// ===== sym.qcom_llcc_cfg_program @ 0x080050dc (size 1756) =====

uchar * sym.qcom_llcc_cfg_program(int64_t arg1)

{
    int iVar1;
    int iVar2;
    char cVar3;
    char cVar4;
    code *pcVar5;
    bool bVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uchar *puVar9;
    char *pcVar10;
    int iVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    int *piVar16;
    int *piVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint32_t *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_74;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uVar8 = _segment.ehdr;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    iVar2 = *(_segment.ehdr + 0x4c);
    if (iVar2 == 0) {
        uVar7 = 0;
    }
    else {
        cVar3 = *(_segment.ehdr + 0x70);
        iVar11 = 0;
        iVar19 = *(_segment.ehdr + 0x10);
        do {
            iVar14 = iVar19 + iVar11 * 0x34;
            iVar15 = (iVar11 + iVar11 * 2) * 8;
            iVar11 = iVar11 + 1;
            *(*(uVar8 + 0x78) + iVar15) = *(iVar14 + 4);
            *(*(uVar8 + 0x78) + iVar15 + 8) = *(iVar14 + 8);
            *(*(uVar8 + 0x78) + iVar15 + 0x10) = 0;
        } while (iVar2 != iVar11);
        uVar18 = 0;
        iVar11 = 0;
        uStack_74 = 0;
        do {
            iVar20 = iVar19 + iVar11 * 0x34;
            iVar15 = iVar11;
            iVar14 = iVar19 + iVar15 * 0x34;
            puVar21 = iVar20 + 4;
            iVar1 = *puVar21 * 8;
            if (*(uVar8 + 0x6c) < 0x29) {
                uVar12 = *(iVar14 + 0x18) | *(iVar14 + 0x14) << 0x10;
            }
            else {
                uVar12 = *(iVar14 + 0x18);
                uStack_74 = CONCAT44(*puVar21 * 4 + 0x21100,*(iVar14 + 0x14));
            }
            uVar7 = 0;
            if (*(uVar8 + 0x54) != 0) {
                uVar7 = (*(iVar20 + 8) << 10) / *(uVar8 + 0x54);
            }
            uVar7 = regmap_write(*(uVar8 + 8),iVar1 + 0x21004,
                                 *(iVar20 + 0x1c) | *(iVar20 + 0x20) << 2 | *(iVar20 + 0x10) << 3 | *(iVar20 + 0xc) << 4
                                 | (uVar7 & 0x3fffc0) << 10);
            if ((uVar7 != 0) || (uVar7 = regmap_write(*(_segment.ehdr + 8),iVar1 + 0x21000,uVar12), uVar7 != 0))
            break;
            iVar1 = *(_segment.ehdr + 0x6c);
            if (0x28 < iVar1) {
                uVar7 = regmap_write(*(_segment.ehdr + 8),uStack_74._4_4_,uStack_74 & 0xffffffff);
                if (uVar7 != 0) break;
                iVar1 = *(_segment.ehdr + 0x6c);
            }
            if ((0x13 < iVar1) &&
               ((uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f20), uVar7 != 0 ||
                ((0x14 < *(_segment.ehdr + 0x6c) && (uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f2c), uVar7 != 0)))
                ))) break;
            if (cVar3 != '\0') {
                uVar18 = *(iVar19 + iVar15 * 0x34 + 0x24) << (*puVar21 & 0x1f) | uVar18;
                uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f00,uVar18);
                if ((uVar7 != 0) ||
                   ((*(_segment.ehdr + 0x6c) < 0x29 &&
                    (uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f04), uVar7 != 0)))) break;
            }
            if (0x28 < *(_segment.ehdr + 0x6c)) {
                uVar7 = *puVar21;
                cVar4 = *(iVar19 + iVar15 * 0x34 + 0x29);
                uStack_6c = 0;
                regmap_read(*(_segment.ehdr + 8),0x21f0c,&uStack_6c);
                uVar12 = 1L << (uVar7 & 0x3f);
                uVar7 = uStack_6c & (uVar12 ^ 0xffffffff);
                if (cVar4 != '\0') {
                    uVar7 = uStack_6c | uVar12;
                }
                uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f0c,uVar7);
                if (uVar7 != 0) break;
                uVar7 = *puVar21;
                cVar4 = *(iVar19 + iVar15 * 0x34 + 0x2a);
                uStack_6c = 0;
                regmap_read(*(_segment.ehdr + 8),0x21f10,&uStack_6c);
                uVar12 = 1L << (uVar7 & 0x3f);
                uVar7 = uStack_6c & (uVar12 ^ 0xffffffff);
                if (cVar4 != '\0') {
                    uVar7 = uStack_6c | uVar12;
                }
                uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f10,uVar7);
                if (uVar7 != 0) break;
                uVar7 = *puVar21;
                cVar4 = *(iVar19 + iVar15 * 0x34 + 0x2b);
                uStack_6c = 0;
                regmap_read(*(_segment.ehdr + 8),0x21f14,&uStack_6c);
                uVar12 = 1L << (uVar7 & 0x3f);
                uVar7 = uStack_6c & (uVar12 ^ 0xffffffff);
                if (cVar4 != '\0') {
                    uVar7 = uStack_6c | uVar12;
                }
                uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f14,uVar7);
                if (uVar7 != 0) break;
                uVar7 = *puVar21;
                cVar4 = *(iVar19 + iVar15 * 0x34 + 0x2c);
                uStack_6c = 0;
                regmap_read(*(_segment.ehdr + 8),0x21f18,&uStack_6c);
                uVar12 = 1L << (uVar7 & 0x3f);
                uVar7 = uStack_6c & (uVar12 ^ 0xffffffff);
                if (cVar4 != '\0') {
                    uVar7 = uStack_6c | uVar12;
                }
                uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f18,uVar7);
                if (uVar7 != 0) break;
                uVar7 = *puVar21;
                cVar4 = *(iVar19 + iVar15 * 0x34 + 0x2d);
                uStack_6c = 0;
                regmap_read(*(_segment.ehdr + 8),0x21f1c,&uStack_6c);
                uVar12 = 1L << (uVar7 & 0x3f);
                uVar7 = uStack_6c & (uVar12 ^ 0xffffffff);
                if (cVar4 != '\0') {
                    uVar7 = uStack_6c | uVar12;
                }
                uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f1c,uVar7);
                if (uVar7 != 0) break;
                uVar7 = *puVar21;
                cVar4 = *(iVar19 + iVar15 * 0x34 + 0x2e);
                uStack_6c = 0;
                regmap_read(*(_segment.ehdr + 8),0x21f24,&uStack_6c);
                uVar12 = 1L << (uVar7 & 0x3f);
                uVar7 = uStack_6c & (uVar12 ^ 0xffffffff);
                if (cVar4 != '\0') {
                    uVar7 = uStack_6c | uVar12;
                }
                uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f24,uVar7);
                if (uVar7 != 0) break;
                uVar7 = *puVar21;
                cVar4 = *(iVar19 + iVar15 * 0x34 + 0x2f);
                uStack_6c = 0;
                regmap_read(*(_segment.ehdr + 8),0x21f28,&uStack_6c);
                uVar12 = 1L << (uVar7 & 0x3f);
                uVar7 = uStack_6c & (uVar12 ^ 0xffffffff);
                if (cVar4 != '\0') {
                    uVar7 = uStack_6c | uVar12;
                }
                uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f28,uVar7);
                if (uVar7 != 0) break;
                uVar7 = *puVar21;
                cVar4 = *(iVar19 + iVar15 * 0x34 + 0x30);
                uStack_6c = 0;
                regmap_read(*(_segment.ehdr + 8),0x21f30,&uStack_6c);
                uVar12 = 1L << (uVar7 & 0x3f);
                uVar7 = uStack_6c & (uVar12 ^ 0xffffffff);
                if (cVar4 != '\0') {
                    uVar7 = uStack_6c | uVar12;
                }
                uVar7 = regmap_write(*(_segment.ehdr + 8),0x21f30,uVar7);
                if (uVar7 != 0) break;
            }
            if (*(iVar19 + iVar15 * 0x34 + 0x26) == '\0') {
                uVar7 = 0;
            }
            else {
                uVar8 = _segment.ehdr;
                if (_segment.ehdr < 0xfffffffffffff001) {
                    piVar16 = *(_segment.ehdr + 0x10);
                    uVar7 = 0;
                    uVar12 = *(_segment.ehdr + 0x4c);
                    bVar6 = piVar16 != NULL;
                    if ((piVar16 != NULL) && (uVar12 != 0)) {
                        uVar7 = 0;
                        while (piVar17 = piVar16 + 0xd, *piVar16 != *(iVar19 + iVar15 * 0x34)) {
                            bVar6 = piVar17 != NULL;
                            uVar7 = uVar7 + 1;
                            if ((piVar17 == NULL) || (piVar16 = piVar17, uVar12 <= uVar7)) goto code_r0x080056e8;
                        }
                        bVar6 = true;
                    }
code_r0x080056e8:
                    uVar8 = 0xffffffffffffffed;
                    if ((uVar7 != uVar12) && (bVar6)) {
                        uVar13 = *(_segment.ehdr + 0x78);
                        uVar8 = 0xffffffffffffffed;
                        if ((uVar13 != 0) && (uVar13 < 0xfffffffffffff001)) {
                            uVar8 = uVar13 + uVar7 * 0x18;
                        }
                    }
                }
                if ((uVar8 < 0xfffffffffffff001) || (uVar8 == 0)) {
                    uVar7 = sym.llcc_slice_activate(uVar8);
                    if (uVar7 == 0) goto code_r0x0800572c;
                    pcVar10 = "Failed to activate slice=%d\n";
                }
                else {
                    uVar7 = 0;
                    pcVar10 = "Failed to get slice=%d\n";
                }
                _dev_err(arg1 + 0x10,pcVar10,*puVar21);
            }
code_r0x0800572c:
            iVar11 = iVar11 + 1;
            uVar8 = _segment.ehdr;
        } while (iVar11 != iVar2);
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack_68) {
        auVar22 = __stack_chk_fail();
        puVar9 = auVar22._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar9 != NULL) {
            switch(*puVar9) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar9,auVar22._8_8_,0);
                break;
            default:
                return puVar9;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8005810);
        (*pcVar5)();
    }
    return uVar7;
}


// ===== sym.__cfi_check_fail @ 0x080057b8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080057fc

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
    //switch table (4 cases) at 0x8000d31
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005810);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080058c0 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_llcc_probe.14da484d958a8d62ddf67839973dacac.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080058f4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_llcc_probe.14da484d958a8d62ddf67839973dacac.cfi_jt);
    return;
}

