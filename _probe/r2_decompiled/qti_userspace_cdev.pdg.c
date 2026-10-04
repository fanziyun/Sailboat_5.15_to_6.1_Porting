// decompiled from qti_userspace_cdev by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x0800150c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x519d946a5cb8d608) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.userspace_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x080010d8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080014cc;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x080014cc;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x519d946a5cb8d608) {
        pcVar2 = sym.userspace_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 == 0x6b571d3f779580cd) {
            pcVar2 = sym.userspace_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x080010d8;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080014cc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080014cc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001520);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.userspace_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.userspace_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.userspace_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001110 (size 8) =====

ulong sym.userspace_set_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    
    iVar1 = *(param_1 + 0x3a8);
    if ((iVar1 != 0) && (param_2 <= *(iVar1 + 0x2c))) {
        if (*(iVar1 + 0x28) == param_2) {
            return 0;
        }
        *(iVar1 + 0x28) = param_2;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.userspace_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001118 (size 8) =====

ulong sym.userspace_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar2 = 0;
        piVar3 = CONCAT44(*0x8000004,_segment.ehdr) + 0x20;
        iVar1 = _segment.ehdr;
        do {
            if (*piVar3 != 0) {
                thermal_cooling_device_unregister();
                iVar1 = _segment.ehdr;
            }
            iVar2 = iVar2 + 1;
            *piVar3 = 0;
            piVar3 = piVar3 + 6;
        } while (iVar2 < iVar1);
    }
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.userspace_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001120 (size 8) =====

int sym.userspace_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t *puVar2;
    uchar auVar3 [16];
    int iVar4;
    int64_t iVar5;
    ulong *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong uVar9;
    int64_t *piVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = *(param_1 + 0x300);
    param_1 = param_1 + 0x10;
    iVar5 = of_get_next_available_child(uVar9,0);
    if (iVar5 != 0) {
        uVar1 = 0;
        do {
            uVar11 = uVar1;
            uVar1 = uVar11 + 1;
            iVar5 = of_get_next_available_child(uVar9,iVar5);
        } while (iVar5 != 0);
        if (uVar1 != 0) {
            uVar12 = uVar1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar12;
            if (SUB168(auVar3 * ZEXT816(0x30),8) != 0) {
                _segment.ehdr = 0;
                return -0xc;
            }
            iVar5 = devm_kmalloc(param_1,(uVar12 + uVar1 * 2) * 0x10,0xdc0);
            if (iVar5 == 0) {
                _segment.ehdr = 0;
                return -0xc;
            }
            *0x8000004 = iVar5 >> 0x20;
            _segment.ehdr = CONCAT44(*0x8000004,uVar1);
            puVar6 = of_get_next_available_child(uVar9,0);
            if (puVar6 == NULL) {
                return 0;
            }
            if (0x7ffffffe < uVar11) {
                return 0;
            }
            uVar13 = 0;
            iVar5 = 0x20;
            do {
                iVar4 = of_property_read_variable_u32_array(puVar6,"qcom,max-level",_segment.ehdr + iVar5 + 0xc,1,0)
                ;
                if (iVar4 < 0) {
                    _dev_err(param_1,"error reading qcom,max-level. ret:%d\n",iVar4);
                    iVar8 = _segment.ehdr;
code_r0x08001328:
                    _segment.ehdr = CONCAT44(*0x8000004,uVar13);
                    if (0 < uVar13) {
                        iVar5 = 0;
                        piVar10 = iVar8 + 0x20;
                        do {
                            if (*piVar10 != 0) {
                                thermal_cooling_device_unregister();
                                uVar13 = _segment.ehdr & 0xffffffff;
                            }
                            iVar5 = iVar5 + 1;
                            *piVar10 = 0;
                            piVar10 = piVar10 + 6;
                        } while (iVar5 < uVar13);
                    }
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                    return iVar4;
                }
                iVar8 = _segment.ehdr + iVar5;
                *(iVar8 + -0x20) = puVar6;
                strscpy(iVar8 + -0x18,*puVar6,0x14);
                uVar7 = thermal_of_cooling_device_register
                                  (puVar6,_segment.ehdr + iVar5 + -0x18,_segment.ehdr + iVar5 + -0x20,
                                   reloc.userspace_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                puVar2 = _segment.ehdr + iVar5;
                *puVar2 = uVar7;
                if (0xfffffffffffff000 < uVar7) {
                    _dev_err(param_1,"Error registering cdev:%s err:%d\n",puVar2 + -3,uVar7);
                    iVar8 = _segment.ehdr;
                    iVar4 = 0;
                    *(_segment.ehdr + iVar5) = 0;
                    goto code_r0x08001328;
                }
                _dev_info(param_1,"cdev:%s lvl:%d registered\n",puVar2 + -3,*(puVar2 + 0xc));
                puVar6 = of_get_next_available_child(uVar9,puVar6);
                if (puVar6 == NULL) {
                    return 0;
                }
                uVar13 = uVar13 + 1;
                iVar5 = iVar5 + 0x30;
                if (uVar12 <= uVar13) {
                    return 0;
                }
            } while( true );
        }
    }
    _dev_err(param_1,"No child node to process\n");
    return -0xe;
}


// ===== sym.userspace_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.userspace_get_cur_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    if (*(param_1 + 0x3a8) != 0) {
        *param_2 = *(*(param_1 + 0x3a8) + 0x28);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.userspace_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001130 (size 8) =====

ulong sym.userspace_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    if (*(param_1 + 0x3a8) != 0) {
        *param_2 = *(*(param_1 + 0x3a8) + 0x2c);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.userspace_device_probe @ 0x08001138 (size 620) =====

int sym.userspace_device_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t *puVar2;
    uchar auVar3 [16];
    int iVar4;
    int64_t iVar5;
    ulong *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong uVar9;
    int64_t *piVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = *(arg1 + 0x300);
    arg1 = arg1 + 0x10;
    iVar5 = of_get_next_available_child(uVar9,0);
    if (iVar5 != 0) {
        uVar1 = 0;
        do {
            uVar11 = uVar1;
            uVar1 = uVar11 + 1;
            iVar5 = of_get_next_available_child(uVar9,iVar5);
        } while (iVar5 != 0);
        if (uVar1 != 0) {
            uVar12 = uVar1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar12;
            if (SUB168(auVar3 * ZEXT816(0x30),8) != 0) {
                _segment.ehdr = 0;
                return -0xc;
            }
            iVar5 = devm_kmalloc(arg1,(uVar12 + uVar1 * 2) * 0x10,0xdc0);
            if (iVar5 == 0) {
                _segment.ehdr = 0;
                return -0xc;
            }
            *0x8000004 = iVar5 >> 0x20;
            _segment.ehdr = CONCAT44(*0x8000004,uVar1);
            puVar6 = of_get_next_available_child(uVar9,0);
            if (puVar6 == NULL) {
                return 0;
            }
            if (0x7ffffffe < uVar11) {
                return 0;
            }
            uVar13 = 0;
            iVar5 = 0x20;
            do {
                iVar4 = of_property_read_variable_u32_array(puVar6,"qcom,max-level",_segment.ehdr + iVar5 + 0xc,1,0)
                ;
                if (iVar4 < 0) {
                    _dev_err(arg1,"error reading qcom,max-level. ret:%d\n",iVar4);
                    iVar8 = _segment.ehdr;
code_r0x08001328:
                    _segment.ehdr = CONCAT44(*0x8000004,uVar13);
                    if (0 < uVar13) {
                        iVar5 = 0;
                        piVar10 = iVar8 + 0x20;
                        do {
                            if (*piVar10 != 0) {
                                thermal_cooling_device_unregister();
                                uVar13 = _segment.ehdr & 0xffffffff;
                            }
                            iVar5 = iVar5 + 1;
                            *piVar10 = 0;
                            piVar10 = piVar10 + 6;
                        } while (iVar5 < uVar13);
                    }
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                    return iVar4;
                }
                iVar8 = _segment.ehdr + iVar5;
                *(iVar8 + -0x20) = puVar6;
                strscpy(iVar8 + -0x18,*puVar6,0x14);
                uVar7 = thermal_of_cooling_device_register
                                  (puVar6,_segment.ehdr + iVar5 + -0x18,_segment.ehdr + iVar5 + -0x20,
                                   reloc.userspace_get_max_state.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                puVar2 = _segment.ehdr + iVar5;
                *puVar2 = uVar7;
                if (0xfffffffffffff000 < uVar7) {
                    _dev_err(arg1,"Error registering cdev:%s err:%d\n",puVar2 + -3,uVar7);
                    iVar8 = _segment.ehdr;
                    iVar4 = 0;
                    *(_segment.ehdr + iVar5) = 0;
                    goto code_r0x08001328;
                }
                _dev_info(arg1,"cdev:%s lvl:%d registered\n",puVar2 + -3,*(puVar2 + 0xc));
                puVar6 = of_get_next_available_child(uVar9,puVar6);
                if (puVar6 == NULL) {
                    return 0;
                }
                uVar13 = uVar13 + 1;
                iVar5 = iVar5 + 0x30;
                if (uVar12 <= uVar13) {
                    return 0;
                }
            } while( true );
        }
    }
    _dev_err(arg1,"No child node to process\n");
    return -0xe;
}


// ===== sym.userspace_device_remove @ 0x080013a4 (size 128) =====

ulong sym.userspace_device_remove(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar2 = 0;
        piVar3 = CONCAT44(*0x8000004,_segment.ehdr) + 0x20;
        iVar1 = _segment.ehdr;
        do {
            if (*piVar3 != 0) {
                thermal_cooling_device_unregister();
                iVar1 = _segment.ehdr;
            }
            iVar2 = iVar2 + 1;
            *piVar3 = 0;
            piVar3 = piVar3 + 6;
        } while (iVar2 < iVar1);
    }
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.userspace_get_max_state @ 0x08001424 (size 44) =====

ulong sym.userspace_get_max_state(int64_t arg1,int64_t arg2)

{
    if (*(arg1 + 0x3a8) != 0) {
        *arg2 = *(*(arg1 + 0x3a8) + 0x2c);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.userspace_get_cur_state @ 0x08001450 (size 44) =====

ulong sym.userspace_get_cur_state(int64_t arg1,int64_t arg2)

{
    if (*(arg1 + 0x3a8) != 0) {
        *arg2 = *(*(arg1 + 0x3a8) + 0x28);
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.userspace_set_cur_state @ 0x0800147c (size 76) =====

ulong sym.userspace_set_cur_state(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0x3a8);
    if ((iVar1 != 0) && (arg2 <= *(iVar1 + 0x2c))) {
        if (*(iVar1 + 0x28) == arg2) {
            return 0;
        }
        *(iVar1 + 0x28) = arg2;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.__cfi_check_fail @ 0x080014c8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800150c

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001520);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001524 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.userspace_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001558 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.userspace_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

