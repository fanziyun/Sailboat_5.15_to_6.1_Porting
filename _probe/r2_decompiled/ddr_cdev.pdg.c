// decompiled from ddr_cdev by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x080015a0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x519d946a5cb8d608) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.ddr_cdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x080010d8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001560;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08001560;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x519d946a5cb8d608) {
        pcVar2 = sym.ddr_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 == 0x6b571d3f779580cd) {
            pcVar2 = sym.ddr_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x080010d8;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001560;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001560:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015b4);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ddr_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.ddr_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.ddr_cdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001110 (size 8) =====

ulong sym.ddr_cdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    if (*(iVar1 + 8) != 0) {
        thermal_cooling_device_unregister();
        *(iVar1 + 8) = 0;
    }
    if (*(iVar1 + 0x10) != 0) {
        icc_set_bw(*(iVar1 + 0x10),0,**(iVar1 + 0x20));
        icc_put(*(iVar1 + 0x10));
        *(iVar1 + 0x10) = 0;
    }
    return 0;
}


// ===== sym.ddr_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001118 (size 8) =====

uint64_t sym.ddr_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint *puVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar10;
    ulong unaff_x30;
    int iStack_78;
    uint32_t uStack_74;
    char acStack_70 [8];
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar7 = param_1 + 0x10;
    uVar10 = *(param_1 + 0x300);
    iStack_78 = 1;
    uStack_74 = 0;
    uStack_60 = 0;
    acStack_70[0] = str.ddr_cdev[0];
    acStack_70[1] = str.ddr_cdev[1];
    acStack_70[2] = str.ddr_cdev[2];
    acStack_70[3] = str.ddr_cdev[3];
    acStack_70[4] = str.ddr_cdev[4];
    acStack_70[5] = str.ddr_cdev[5];
    acStack_70[6] = str.ddr_cdev[6];
    acStack_70[7] = str.ddr_cdev[7];
    uStack_68 = 0;
    puVar2 = devm_kmalloc(iVar7,0x30,0xdc0);
    if (puVar2 == NULL) {
        uVar3 = 0xfffffff4;
        goto code_r0x080013e0;
    }
    uVar3 = of_icc_get(iVar7,0);
    *(puVar2 + 4) = uVar3;
    if (0xfffffffffffff000 < uVar3) {
        if (uVar3 == -0x205) {
            uVar3 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar7,"Unable to register icc path: %d\n",uVar3 & 0xffffffff);
        }
        goto code_r0x080013e0;
    }
    iVar4 = of_find_property(uVar10,"qcom,freq-table",&uStack_74);
    if (iVar4 == 0) {
        pcVar8 = "No DDR frequency entries\n";
code_r0x08001368:
        _dev_err(iVar7,pcVar8);
        uVar6 = 0xffffffed;
    }
    else {
        if (uStack_74 < 1) {
            pcVar8 = "No DDR frequency\n";
            goto code_r0x08001368;
        }
        iVar4 = (uStack_74 >> 2) + 1;
        uStack_74 = iVar4;
        piVar5 = devm_kmalloc(iVar7,iVar4 * 4,0xdc0);
        if (piVar5 == NULL) {
            uVar6 = 0xfffffff4;
        }
        else {
            *piVar5 = 0;
            uVar1 = of_property_read_variable_u32_array(uVar10,"qcom,freq-table",piVar5 + 1,uStack_74 - 1,0);
            if (uVar1 < 0) {
                uVar6 = uVar1;
                pcVar8 = "DDR frequency read error:%d\n";
            }
            else {
                puVar2[10] = uStack_74;
                *(puVar2 + 6) = iVar7;
                *(puVar2 + 8) = piVar5;
                *puVar2 = 0;
                puVar2[1] = uStack_74 - 1;
                uVar1 = of_property_read_variable_u32_array(uVar10,"qcom,bus-width",&iStack_78,1,0);
                if (uVar1 < 0) {
                    uVar6 = uVar1;
                    pcVar8 = "DDR bus width read error:%d\n";
                }
                else {
                    if (0 < uStack_74) {
                        *piVar5 = *piVar5 * iStack_78;
                        if (uStack_74 != 1) {
                            piVar5[1] = piVar5[1] * iStack_78;
                            if (2 < uStack_74) {
                                iVar4 = 2;
                                do {
                                    iVar9 = iVar4 * 4;
                                    iVar4 = iVar4 + 1;
                                    *(*(puVar2 + 8) + iVar9) = *(*(puVar2 + 8) + iVar9) * iStack_78;
                                } while (iVar4 < uStack_74);
                            }
                            uVar3 = *(puVar2 + 4);
                        }
                    }
                    uVar1 = icc_set_bw(uVar3,0,*piVar5);
                    if (-1 < uVar1) {
                        uVar6 = thermal_of_cooling_device_register
                                          (uVar10,acStack_70,puVar2,
                                           reloc.ddr_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                        *(puVar2 + 2) = uVar6;
                        if (uVar6 < 0xfffffffffffff001) {
                            uVar3 = 0;
                            *(param_1 + 0xa8) = puVar2;
                            goto code_r0x080013e0;
                        }
                        _dev_err(iVar7,"Cdev register failed for %s, ret:%d\n",acStack_70,uVar6 & 0xffffffff);
                        uVar3 = *(puVar2 + 4);
                        goto code_r0x080013d4;
                    }
                    uVar6 = uVar1;
                    pcVar8 = "Error placing DDR freq request. err:%d\n";
                }
            }
            _dev_err(iVar7,pcVar8,uVar6);
        }
    }
code_r0x080013d4:
    icc_put(uVar3);
    uVar3 = uVar6 & 0xffffffff;
code_r0x080013e0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar3 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.ddr_cdev_remove;
    iVar7 = *(iVar7 + 0xa8);
    if (*(iVar7 + 8) != 0) {
        thermal_cooling_device_unregister();
        *(iVar7 + 8) = 0;
    }
    if (*(iVar7 + 0x10) != 0) {
        icc_set_bw(*(iVar7 + 0x10),0,**(iVar7 + 0x20));
        icc_put(*(iVar7 + 0x10));
        *(iVar7 + 0x10) = 0;
    }
    return 0;
}


// ===== sym.ddr_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.ddr_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = **(param_1 + 0x3a8);
    return 0;
}


// ===== sym.ddr_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.ddr_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(*(param_1 + 0x3a8) + 4);
    return 0;
}


// ===== sym.ddr_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001130 (size 8) =====

int sym.ddr_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    uint32_t *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(param_1 + 0x3a8);
    if (puVar2[1] < param_2) {
        iVar1 = -0x16;
    }
    else if (*puVar2 == param_2) {
        iVar1 = 0;
    }
    else {
        iVar1 = icc_set_bw(*(puVar2 + 4),0,*(*(puVar2 + 8) + param_2 * 4));
        if (iVar1 < 0) {
            _dev_err(*(puVar2 + 6),"Error placing DDR freq%u. err:%d\n",*(*(puVar2 + 8) + param_2 * 4),iVar1);
        }
        else {
            *puVar2 = param_2;
        }
    }
    return iVar1;
}


// ===== sym.ddr_cdev_probe @ 0x08001138 (size 744) =====

uint64_t sym.ddr_cdev_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint *puVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar10;
    ulong unaff_x30;
    int iStack_78;
    uint32_t uStack_74;
    char acStack_70 [8];
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar7 = arg1 + 0x10;
    uVar10 = *(arg1 + 0x300);
    iStack_78 = 1;
    uStack_74 = 0;
    uStack_60 = 0;
    acStack_70[0] = str.ddr_cdev[0];
    acStack_70[1] = str.ddr_cdev[1];
    acStack_70[2] = str.ddr_cdev[2];
    acStack_70[3] = str.ddr_cdev[3];
    acStack_70[4] = str.ddr_cdev[4];
    acStack_70[5] = str.ddr_cdev[5];
    acStack_70[6] = str.ddr_cdev[6];
    acStack_70[7] = str.ddr_cdev[7];
    uStack_68 = 0;
    puVar2 = devm_kmalloc(iVar7,0x30,0xdc0);
    if (puVar2 == NULL) {
        uVar3 = 0xfffffff4;
        goto code_r0x080013e0;
    }
    uVar3 = of_icc_get(iVar7,0);
    *(puVar2 + 4) = uVar3;
    if (0xfffffffffffff000 < uVar3) {
        if (uVar3 == -0x205) {
            uVar3 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar7,"Unable to register icc path: %d\n",uVar3 & 0xffffffff);
        }
        goto code_r0x080013e0;
    }
    iVar4 = of_find_property(uVar10,"qcom,freq-table",&uStack_74);
    if (iVar4 == 0) {
        pcVar8 = "No DDR frequency entries\n";
code_r0x08001368:
        _dev_err(iVar7,pcVar8);
        uVar6 = 0xffffffed;
    }
    else {
        if (uStack_74 < 1) {
            pcVar8 = "No DDR frequency\n";
            goto code_r0x08001368;
        }
        iVar4 = (uStack_74 >> 2) + 1;
        uStack_74 = iVar4;
        piVar5 = devm_kmalloc(iVar7,iVar4 * 4,0xdc0);
        if (piVar5 == NULL) {
            uVar6 = 0xfffffff4;
        }
        else {
            *piVar5 = 0;
            uVar1 = of_property_read_variable_u32_array(uVar10,"qcom,freq-table",piVar5 + 1,uStack_74 - 1,0);
            if (uVar1 < 0) {
                uVar6 = uVar1;
                pcVar8 = "DDR frequency read error:%d\n";
            }
            else {
                puVar2[10] = uStack_74;
                *(puVar2 + 6) = iVar7;
                *(puVar2 + 8) = piVar5;
                *puVar2 = 0;
                puVar2[1] = uStack_74 - 1;
                uVar1 = of_property_read_variable_u32_array(uVar10,"qcom,bus-width",&iStack_78,1,0);
                if (uVar1 < 0) {
                    uVar6 = uVar1;
                    pcVar8 = "DDR bus width read error:%d\n";
                }
                else {
                    if (0 < uStack_74) {
                        *piVar5 = *piVar5 * iStack_78;
                        if (uStack_74 != 1) {
                            piVar5[1] = piVar5[1] * iStack_78;
                            if (2 < uStack_74) {
                                iVar4 = 2;
                                do {
                                    iVar9 = iVar4 * 4;
                                    iVar4 = iVar4 + 1;
                                    *(*(puVar2 + 8) + iVar9) = *(*(puVar2 + 8) + iVar9) * iStack_78;
                                } while (iVar4 < uStack_74);
                            }
                            uVar3 = *(puVar2 + 4);
                        }
                    }
                    uVar1 = icc_set_bw(uVar3,0,*piVar5);
                    if (-1 < uVar1) {
                        uVar6 = thermal_of_cooling_device_register
                                          (uVar10,acStack_70,puVar2,
                                           reloc.ddr_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                        *(puVar2 + 2) = uVar6;
                        if (uVar6 < 0xfffffffffffff001) {
                            uVar3 = 0;
                            *(arg1 + 0xa8) = puVar2;
                            goto code_r0x080013e0;
                        }
                        _dev_err(iVar7,"Cdev register failed for %s, ret:%d\n",acStack_70,uVar6 & 0xffffffff);
                        uVar3 = *(puVar2 + 4);
                        goto code_r0x080013d4;
                    }
                    uVar6 = uVar1;
                    pcVar8 = "Error placing DDR freq request. err:%d\n";
                }
            }
            _dev_err(iVar7,pcVar8,uVar6);
        }
    }
code_r0x080013d4:
    icc_put(uVar3);
    uVar3 = uVar6 & 0xffffffff;
code_r0x080013e0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar3 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.ddr_cdev_remove;
    iVar7 = *(iVar7 + 0xa8);
    if (*(iVar7 + 8) != 0) {
        thermal_cooling_device_unregister();
        *(iVar7 + 8) = 0;
    }
    if (*(iVar7 + 0x10) != 0) {
        icc_set_bw(*(iVar7 + 0x10),0,**(iVar7 + 0x20));
        icc_put(*(iVar7 + 0x10));
        *(iVar7 + 0x10) = 0;
    }
    return 0;
}


// ===== sym.ddr_cdev_remove @ 0x08001420 (size 100) =====

ulong sym.ddr_cdev_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    if (*(iVar1 + 8) != 0) {
        thermal_cooling_device_unregister();
        *(iVar1 + 8) = 0;
    }
    if (*(iVar1 + 0x10) != 0) {
        icc_set_bw(*(iVar1 + 0x10),0,**(iVar1 + 0x20));
        icc_put(*(iVar1 + 0x10));
        *(iVar1 + 0x10) = 0;
    }
    return 0;
}


// ===== sym.ddr_get_max_state @ 0x08001484 (size 28) =====

ulong sym.ddr_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x3a8) + 4);
    return 0;
}


// ===== sym.ddr_get_cur_state @ 0x080014a0 (size 28) =====

ulong sym.ddr_get_cur_state(int64_t arg1,int64_t arg2)

{
    *arg2 = **(arg1 + 0x3a8);
    return 0;
}


// ===== sym.ddr_set_cur_state @ 0x080014bc (size 160) =====

int sym.ddr_set_cur_state(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint32_t *puVar3;
    ulong unaff_x30;
    
    uVar2 = arg2;
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0x3a8);
    if (puVar3[1] < uVar2) {
        iVar1 = -0x16;
    }
    else if (*puVar3 == uVar2) {
        iVar1 = 0;
    }
    else {
        iVar1 = icc_set_bw(*(puVar3 + 4),0,*(*(puVar3 + 8) + uVar2 * 4));
        if (iVar1 < 0) {
            _dev_err(*(puVar3 + 6),"Error placing DDR freq%u. err:%d\n",*(*(puVar3 + 8) + uVar2 * 4),iVar1);
        }
        else {
            *puVar3 = arg2;
        }
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x0800155c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080015a0

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
    //switch table (4 cases) at 0x8000168
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015b4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080015c4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.ddr_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080015f8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.ddr_cdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

