// decompiled from smem by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x080020cc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x57be845bca9148ef) {
                pcVar2 = sym.qcom_smem_restore.d2834457f793cc8287ed818f6dff7e92.cfi_jt;
code_r0x0800115c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800208c;
            }
            if (arg1 != -0x53c887a672ae5243) goto code_r0x0800208c;
            pcVar2 = sym.qcom_smem_get_free_space.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.qcom_smem_probe.d2834457f793cc8287ed818f6dff7e92.cfi_jt;
                goto code_r0x0800115c;
            }
            if (arg1 != -0x85702c39c529d1c) goto code_r0x0800208c;
            pcVar2 = sym.qcom_smem_alloc.cfi_jt;
        }
    }
    else if (arg1 < 0x234504959fc05934) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x23044101be64e432) goto code_r0x0800208c;
            pcVar2 = sym.qcom_smem_virt_to_phys.cfi_jt;
        }
    }
    else if (arg1 == 0x234504959fc05934) {
        pcVar2 = sym.qcom_smem_get.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800208c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800208c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80020e0);
    (*pcVar1)();
}


// ===== sym.qcom_smem_probe.d2834457f793cc8287ed818f6dff7e92.cfi_jt @ 0x08001198 (size 8) =====

uint64_t sym.qcom_smem_probe.d2834457f793cc8287ed818f6dff7e92.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t *arg1;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar12;
    int *piVar13;
    ulong unaff_x30;
    int64_t iStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    char *pcStack_a0;
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
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar4 = of_find_property(*(param_1 + 0x300),"qcom,rpm-msg-ram",0);
    iVar9 = 1;
    if (iVar4 != 0) {
        iVar9 = 2;
    }
    arg1 = __kmalloc(iVar9 * 0x18 + 0xd0,0xdc0);
    if (arg1 == NULL) {
        piVar12 = 0xfffffff4;
        goto code_r0x08001d58;
    }
    iVar1 = param_1 + 0x10;
    *(arg1 + 0x19) = iVar9;
    *arg1 = iVar1;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    pcStack_a0 = NULL;
    iStack_b8 = 0;
    iStack_b0 = 0;
    iVar5 = of_parse_phandle(*(param_1 + 0x300),"memory-region",0);
    if (iVar5 == 0) {
        pcVar8 = "memory-region";
code_r0x08001b10:
        _dev_err(iVar1,"No %s specified\n",pcVar8);
        goto code_r0x08001b18;
    }
    uVar6 = of_address_to_resource(iVar5,0,&iStack_b8);
    piVar12 = uVar6 & 0xffffffff;
    if (uVar6 == 0) {
        iVar5 = (iStack_b0 - iStack_b8) + 1;
        iVar7 = devm_ioremap_wc(iVar1,iStack_b8,iVar5);
        arg1[0x1b] = iVar7;
        if (iVar7 == 0) {
code_r0x08001af8:
            piVar12 = 0xfffffff4;
        }
        else {
            arg1[0x1c] = iVar5;
            *(arg1 + 0x1a) = iStack_b8;
            if (iVar4 != 0) {
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                pcStack_a0 = NULL;
                iStack_b8 = 0;
                iStack_b0 = 0;
                iVar4 = of_parse_phandle(*(param_1 + 0x300),"qcom,rpm-msg-ram",0);
                if (iVar4 == 0) {
                    pcVar8 = "qcom,rpm-msg-ram";
                    goto code_r0x08001b10;
                }
                uVar6 = of_address_to_resource(iVar4,0,&iStack_b8);
                piVar12 = uVar6 & 0xffffffff;
                if (uVar6 != 0) goto code_r0x08001d50;
                iVar4 = (iStack_b0 - iStack_b8) + 1;
                iVar5 = devm_ioremap_wc(iVar1,iStack_b8,iVar4);
                arg1[0x1e] = iVar5;
                if (iVar5 == 0) goto code_r0x08001af8;
                arg1[0x1f] = iVar4;
                iVar7 = arg1[0x1b];
                *(arg1 + 0x1d) = iStack_b8;
            }
            if ((*(iVar7 + 0xc0) != 1) || (*(iVar7 + 0xcc) != 0)) {
                _dev_err(iVar1,"SMEM is not initialized by SBL\n");
                goto code_r0x08001b18;
            }
            uVar10 = *(iVar7 + 0x5c) >> 0x10;
            if (uVar10 == 0xb) goto code_r0x08001bf4;
            if (uVar10 == 0xc) {
                if (arg1[2] == 0) {
                    iVar7 = iVar7 + arg1[0x1c];
                    piVar12 = iVar7 + -0x1000;
                    if (*piVar12 == 0x434f5424) {
                        if (*(iVar7 + -0xffc) == 1) {
                            if (piVar12 < 0xfffffffffffff001) {
                                if (*(iVar7 + -0xff8) != 0) {
                                    iVar9 = 0;
                                    do {
                                        iVar4 = iVar9;
                                        piVar13 = piVar12 + iVar9 * 0xc + 8;
                                        if ((((*piVar13 != 0) && (piVar12[iVar4 * 0xc + 9] != 0)) &&
                                            (piVar12[iVar4 * 0xc + 0xb] == -2)) &&
                                           (*(piVar12 + iVar4 * 0x30 + 0x2e) == -2)) {
                                            iVar4 = sym.qcom_smem_partition_header(arg1,piVar13,0xfffe,0xfffe);
                                            if (iVar4 == 0) goto code_r0x08001b18;
                                            arg1[2] = piVar13;
                                            goto code_r0x08001bdc;
                                        }
                                        iVar9 = iVar9 + 1;
                                    } while (*(iVar7 + -0xff8) != iVar9);
                                }
                                _dev_err(*arg1,"Missing entry for global partition\n");
                                goto code_r0x08001b18;
                            }
                            if (piVar12 < 0) goto code_r0x08001d50;
code_r0x08001bdc:
                            iVar7 = arg1[0x1b];
                            iVar4 = iVar7 + arg1[0x1c];
                            piVar12 = iVar4 + -0x1000;
                            if (*piVar12 == 0x434f5424) {
                                if (*(iVar4 + -0xffc) != 1) {
                                    _dev_err(*arg1,"Unsupported partition header version %d\n");
                                    iVar7 = arg1[0x1b];
                                    goto code_r0x08001bf4;
                                }
                                uVar10 = 0x200;
                                if ((piVar12 != NULL) && (piVar12 < 0xfffffffffffff001)) {
                                    if (piVar12[*(iVar4 + -0xff8) * 0xc + 8] != 0x49494953) goto code_r0x08001bf4;
                                    uVar10 = *(piVar12 + *(iVar4 + -0xff8) * 0xc + 0xc);
                                }
                            }
                            else {
code_r0x08001bf4:
                                uVar10 = 0x200;
                            }
                            *(arg1 + 0x17) = uVar10;
                            iVar7 = iVar7 + arg1[0x1c];
                            piVar12 = iVar7 + -0x1000;
                            if (*piVar12 == 0x434f5424) {
                                if (*(iVar7 + -0xffc) != 1) {
                                    _dev_err(*arg1,"Unsupported partition header version %d\n");
                                    piVar12 = 0xffffffffffffffea;
                                    goto code_r0x08001c30;
                                }
                                if (0xfffffffffffff000 < piVar12) goto code_r0x08001c30;
                                uVar10 = *(iVar7 + -0xff8);
                                if (uVar10 != 0) {
                                    uVar11 = 0;
                                    do {
                                        iVar4 = uVar11;
                                        piVar13 = piVar12 + uVar11 * 0xc + 8;
                                        if ((*piVar13 != 0) && (piVar12[iVar4 * 0xc + 9] != 0)) {
                                            uVar2 = *(piVar12 + iVar4 * 0x30 + 0x2e);
                                            uVar6 = uVar2;
                                            uVar3 = *(piVar12 + iVar4 * 0xc + 0xb);
                                            if ((uVar3 == 0) || (uVar6 = uVar3, uVar2 == 0)) {
                                                if (uVar6 < 0x14) {
                                                    if (arg1[uVar6 + 3] == 0) {
                                                        iVar4 = sym.qcom_smem_partition_header
                                                                          (arg1,piVar13,uVar3,uVar2);
                                                        if (iVar4 != 0) {
                                                            arg1[uVar6 + 3] = piVar13;
                                                            uVar10 = *(iVar7 + -0xff8);
                                                            goto code_r0x08001c60;
                                                        }
                                                        piVar12 = 0xffffffea;
                                                        goto code_r0x08001c34;
                                                    }
                                                    iVar4 = *arg1;
                                                    pcVar8 = "duplicate host %hu\n";
                                                }
                                                else {
                                                    iVar4 = *arg1;
                                                    pcVar8 = "bad host %hu\n";
                                                }
                                                _dev_err(iVar4,pcVar8);
                                                piVar12 = 0xffffffea;
                                                goto code_r0x08001c34;
                                            }
                                        }
code_r0x08001c60:
                                        uVar11 = uVar11 + 1;
                                    } while (uVar11 < uVar10);
                                }
                            }
                            else {
                                piVar12 = 0xfffffffffffffffe;
code_r0x08001c30:
                                piVar12 = piVar12 & 0xffffffff;
code_r0x08001c34:
                                if ((piVar12 < 0) && (piVar12 != -2)) goto code_r0x08001d50;
                            }
                            uVar6 = of_hwspin_lock_get_id(*(param_1 + 0x300),0);
                            piVar12 = uVar6 & 0xffffffff;
                            if (uVar6 < 0) {
                                if (uVar6 == -0x205) {
                                    piVar12 = 0xfffffdfb;
                                }
                                else {
                                    _dev_err(iVar1,"failed to retrieve hwlock\n");
                                }
                            }
                            else {
                                iVar4 = hwspin_lock_request_specific(piVar12);
                                arg1[1] = iVar4;
                                if (iVar4 != 0) {
                                    uStack_90 = 0;
                                    iStack_b0 = 0;
                                    uStack_98 = 0xffffffff;
                                    uStack_88 = 0;
                                    uStack_80 = 0;
                                    uStack_78 = 0;
                                    uStack_70 = 0;
                                    uStack_a8 = 0;
                                    pcStack_a0 = "qcom-socinfo";
                                    uStack_68 = 0;
                                    uStack_60 = 0;
                                    _segment.ehdr = arg1;
                                    iStack_b8 = iVar1;
                                    iVar4 = platform_device_register_full(&iStack_b8);
                                    piVar12 = NULL;
                                    arg1[0x18] = iVar4;
                                    goto code_r0x08001d58;
                                }
                                piVar12 = 0xfffffffa;
                            }
                        }
                        else {
                            _dev_err(*arg1,"Unsupported partition header version %d\n");
                            piVar12 = 0xffffffffffffffea;
                        }
                    }
                    else {
                        piVar12 = 0xfffffffffffffffe;
                    }
                    goto code_r0x08001d50;
                }
                _dev_err(*arg1,"Already found the global partition\n");
            }
            else {
                _dev_err(iVar1,"Unsupported SMEM version 0x%x\n");
            }
code_r0x08001b18:
            piVar12 = 0xffffffea;
        }
    }
code_r0x08001d50:
    kfree(arg1);
code_r0x08001d58:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return piVar12 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_smem_remove;
    platform_device_unregister(_segment.ehdr[0x18]);
    hwspin_lock_free(_segment.ehdr[1]);
    kfree(_segment.ehdr);
    _segment.ehdr = NULL;
    return 0;
}


// ===== sym.qcom_smem_remove.d2834457f793cc8287ed818f6dff7e92.cfi_jt @ 0x080011a0 (size 8) =====

ulong sym.qcom_smem_remove.d2834457f793cc8287ed818f6dff7e92.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_device_unregister(*(_segment.ehdr + 0xc0));
    hwspin_lock_free(*(_segment.ehdr + 8));
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_smem_probe.d2834457f793cc8287ed818f6dff7e92.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_smem_probe.d2834457f793cc8287ed818f6dff7e92.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_smem_get.cfi_jt @ 0x080011b8 (size 8) =====

int64_t sym.qcom_smem_get.cfi_jt(uint32_t param_1,uint32_t param_2,uint64_t *param_3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    if (_segment.ehdr == 0) {
        iVar8 = -0x205;
    }
    else {
        if (*(_segment.ehdr + 0xb8) <= param_2) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x800164c);
            (*pcVar4)();
        }
        iVar5 = __hwspin_lock_timeout(*(_segment.ehdr + 8),1000,1,&uStack_40);
        if (iVar5 == 0) {
            if (((param_1 < 0x14) && (iVar8 = *(_segment.ehdr + param_1 * 8 + 0x18), iVar8 != 0)) ||
               (iVar8 = *(_segment.ehdr + 0x10), iVar8 != 0)) {
                iVar8 = sym.qcom_smem_get_private(_segment.ehdr,iVar8,param_2,param_3);
            }
            else {
                if (0x200 < param_2) goto code_r0x08001660;
                iVar8 = *(_segment.ehdr + 0xd8);
                if (*(iVar8 + param_2 * 0x10 + 0xd0) == 0) {
                    iVar8 = -6;
                }
                else {
                    uVar7 = *(_segment.ehdr + 200);
                    if (*(_segment.ehdr + 200) != 0) {
                        uVar1 = *(iVar8 + param_2 * 0x10 + 0xdc) & 0xfffffffc;
                        puVar6 = _segment.ehdr + 0xe0;
                        do {
                            if ((uVar1 == 0) || (puVar6[-2] == uVar1)) {
                                iVar8 = iVar8 + param_2 * 0x10;
                                uVar7 = *(iVar8 + 0xd4);
                                uVar2 = *(iVar8 + 0xd8);
                                if (*puVar6 < uVar7 + uVar2) {
    //WARNING: Does not return
                                    pcVar4 = SoftwareBreakpoint(0x800,0x8001658);
                                    (*pcVar4)();
                                }
                                if (param_3 != NULL) {
                                    *param_3 = uVar2;
                                }
                                iVar8 = puVar6[-1] + uVar7;
                                goto code_r0x08001570;
                            }
                            puVar6 = puVar6 + 3;
                            uVar7 = uVar7 - 1;
                        } while (uVar7 != 0);
                    }
                    iVar8 = -2;
                }
            }
code_r0x08001570:
            __hwspin_unlock(*(_segment.ehdr + 8),1,&uStack_40);
        }
        else {
            iVar8 = iVar5;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x08001660:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8001664);
    (*pcVar4)();
}


// ===== sym.qcom_smem_alloc.cfi_jt @ 0x080011c0 (size 8) =====

int sym.qcom_smem_alloc.cfi_jt(uint32_t param_1,uint32_t param_2,int64_t param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int *piVar5;
    int iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    if (_segment.ehdr == NULL) {
        iVar3 = -0x205;
    }
    else if (param_2 < 8) {
        _dev_err(*_segment.ehdr,"Rejecting allocation of static entry %d\n",param_2);
        iVar3 = -0x16;
    }
    else {
        if (*(_segment.ehdr + 0x17) <= param_2) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8001370);
            (*pcVar2)();
        }
        iVar3 = __hwspin_lock_timeout(_segment.ehdr[1],1000,1,&uStack_50);
        if (iVar3 == 0) {
            if (((param_1 < 0x14) && (iVar4 = _segment.ehdr[param_1 + 3], iVar4 != 0)) ||
               (iVar4 = _segment.ehdr[2], iVar4 != 0)) {
                iVar3 = sym.qcom_smem_alloc_private(_segment.ehdr,iVar4,param_2,param_3);
            }
            else {
                if (0x200 < param_2) goto code_r0x08001384;
                iVar4 = _segment.ehdr[0x1b];
                piVar5 = iVar4 + param_2 * 0x10 + 0xd0;
                if (*piVar5 == 0) {
                    uVar7 = param_3 + 7U & 0xfffffffffffffff8;
                    if (*(iVar4 + 200) < uVar7) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x800137c);
                        (*pcVar2)();
                    }
                    iVar3 = 0;
                    iVar1 = iVar4 + param_2 * 0x10;
                    iVar6 = uVar7;
                    *(iVar1 + 0xd4) = *(iVar4 + 0xc4);
                    *(iVar1 + 0xd8) = iVar6;
                    DataSynchronizationBarrier(3,2,0);
                    *piVar5 = 1;
                    *(iVar4 + 0xc4) = *(iVar4 + 0xc4) + iVar6;
                    *(iVar4 + 200) = *(iVar4 + 200) - iVar6;
                }
                else {
                    iVar3 = -0x11;
                }
            }
            __hwspin_unlock(_segment.ehdr[1],1,&uStack_50);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    __stack_chk_fail();
code_r0x08001384:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001388);
    (*pcVar2)();
}


// ===== sym.qcom_smem_virt_to_phys.cfi_jt @ 0x080011c8 (size 8) =====

int64_t sym.qcom_smem_virt_to_phys.cfi_jt(uint64_t param_1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    
    uVar1 = *(_segment.ehdr + 200);
    if (*(_segment.ehdr + 200) != 0) {
        piVar2 = _segment.ehdr + 0xe0;
        do {
            uVar3 = piVar2[-1];
            if ((uVar3 <= param_1) && (param_1 < uVar3 + *piVar2)) {
                return (param_1 - uVar3) + *(piVar2 + -2);
            }
            piVar2 = piVar2 + 3;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    return 0;
}


// ===== sym.qcom_smem_get_free_space.cfi_jt @ 0x080011d0 (size 8) =====

uint64_t sym.qcom_smem_get_free_space.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    
    if (_segment.ehdr == 0) {
        return 0xfffffdfb;
    }
    if (((param_1 < 0x14) && (puVar4 = *(_segment.ehdr + param_1 * 8 + 0x18), puVar4 != NULL)) ||
       (puVar4 = *(_segment.ehdr + 0x10), puVar4 != NULL)) {
        iVar1 = *(_segment.ehdr + 0xd8) + *puVar4;
        uVar2 = *(iVar1 + 0x10) - *(iVar1 + 0xc);
        uVar3 = uVar2;
        if (puVar4[1] < uVar2) {
            return 0xffffffea;
        }
    }
    else {
        uVar3 = *(*(_segment.ehdr + 0xd8) + 200);
        if (*(_segment.ehdr + 0xe0) < uVar3) {
            return 0xffffffea;
        }
    }
    return uVar3;
}


// ===== sym.qcom_smem_restore.d2834457f793cc8287ed818f6dff7e92.cfi_jt @ 0x080011d8 (size 8) =====

int sym.qcom_smem_restore.d2834457f793cc8287ed818f6dff7e92.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qcom_smem_probe(param_1 + -0x10);
    if (iVar1 != 0) {
        _dev_err(param_1,"Error getting SMEM information\n");
    }
    return iVar1;
}


// ===== sym.qcom_smem_freeze.d2834457f793cc8287ed818f6dff7e92.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.qcom_smem_freeze.d2834457f793cc8287ed818f6dff7e92.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_device_unregister(*(_segment.ehdr + 0xc0));
    hwspin_lock_free(*(_segment.ehdr + 8));
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.qcom_smem_alloc @ 0x080011e8 (size 416) =====

int sym.qcom_smem_alloc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int *piVar5;
    int iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    if (_segment.ehdr == NULL) {
        iVar3 = -0x205;
    }
    else if (arg2 < 8) {
        _dev_err(*_segment.ehdr,"Rejecting allocation of static entry %d\n",arg2);
        iVar3 = -0x16;
    }
    else {
        if (*(_segment.ehdr + 0x17) <= arg2) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8001370);
            (*pcVar2)();
        }
        iVar3 = __hwspin_lock_timeout(_segment.ehdr[1],1000,1,&uStack_50);
        if (iVar3 == 0) {
            if (((arg1 < 0x14) && (iVar4 = _segment.ehdr[(arg1 & 0xffffffffU) + 3], iVar4 != 0)) ||
               (iVar4 = _segment.ehdr[2], iVar4 != 0)) {
                iVar3 = sym.qcom_smem_alloc_private(_segment.ehdr,iVar4,arg2,arg3);
            }
            else {
                if (0x200 < arg2) goto code_r0x08001384;
                iVar4 = _segment.ehdr[0x1b];
                piVar5 = iVar4 + arg2 * 0x10 + 0xd0;
                if (*piVar5 == 0) {
                    uVar7 = arg3 + 7U & 0xfffffffffffffff8;
                    if (*(iVar4 + 200) < uVar7) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x800137c);
                        (*pcVar2)();
                    }
                    iVar3 = 0;
                    iVar1 = iVar4 + arg2 * 0x10;
                    iVar6 = uVar7;
                    *(iVar1 + 0xd4) = *(iVar4 + 0xc4);
                    *(iVar1 + 0xd8) = iVar6;
                    DataSynchronizationBarrier(3,2,0);
                    *piVar5 = 1;
                    *(iVar4 + 0xc4) = *(iVar4 + 0xc4) + iVar6;
                    *(iVar4 + 200) = *(iVar4 + 200) - iVar6;
                }
                else {
                    iVar3 = -0x11;
                }
            }
            __hwspin_unlock(_segment.ehdr[1],1,&uStack_50);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    __stack_chk_fail();
code_r0x08001384:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001388);
    (*pcVar2)();
}


// ===== sym.qcom_smem_alloc_private @ 0x08001388 (size 316) =====

ulong sym.qcom_smem_alloc_private(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    int16_t *piVar6;
    code *pcVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(_segment.ehdr + 0xd8) + *arg2;
    piVar4 = iVar3 + *(arg2 + 4);
    piVar5 = iVar3 + *(iVar3 + 0xc);
    piVar6 = iVar3 + *(iVar3 + 0x10);
    if (piVar4 < piVar5 || piVar4 < piVar6) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x800,0x80014b8);
        (*pcVar7)();
    }
    piVar1 = iVar3 + 0x20;
    while( true ) {
        if (piVar5 <= piVar1) {
            if (piVar1 <= piVar4) {
                uVar9 = arg4 + 7U & 0xfffffffffffffff8;
                iVar2 = uVar9 + 0x10;
                if (piVar6 < piVar1 + iVar2) {
                    _dev_err(*arg1,"Out of memory\n");
                    uVar8 = 0xffffffe4;
                }
                else {
                    piVar1[1] = arg3;
                    *(piVar1 + 2) = uVar9;
                    uVar8 = 0;
                    *piVar1 = -0x5a5b;
                    piVar1[4] = (arg4 + 7U & 0xfff8) - arg4;
                    piVar1[5] = 0;
                    DataSynchronizationBarrier(3,2,0);
                    *(iVar3 + 0xc) = *(iVar3 + 0xc) + iVar2;
                }
                return uVar8;
            }
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x80014c4);
            (*pcVar7)();
        }
        if (*piVar1 != -0x5a5b) break;
        if (piVar1[1] == arg3) {
            return 0xffffffef;
        }
        piVar1 = piVar1 + *(piVar1 + 2) + piVar1[5] + 0x10;
    }
    _dev_err(*arg1,"Found invalid canary in hosts %hu:%hu partition\n",*(iVar3 + 4),*(iVar3 + 6));
    return 0xffffffea;
}


// ===== sym.qcom_smem_get @ 0x080014c8 (size 412) =====

int64_t sym.qcom_smem_get(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    if (_segment.ehdr == 0) {
        iVar8 = -0x205;
    }
    else {
        if (*(_segment.ehdr + 0xb8) <= arg2) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x800164c);
            (*pcVar4)();
        }
        iVar5 = __hwspin_lock_timeout(*(_segment.ehdr + 8),1000,1,&uStack_40);
        if (iVar5 == 0) {
            if (((arg1 < 0x14) && (iVar8 = *(_segment.ehdr + (arg1 & 0xffffffffU) * 8 + 0x18), iVar8 != 0)) ||
               (iVar8 = *(_segment.ehdr + 0x10), iVar8 != 0)) {
                iVar8 = sym.qcom_smem_get_private(_segment.ehdr,iVar8,arg2,arg3);
            }
            else {
                if (0x200 < arg2) goto code_r0x08001660;
                iVar8 = *(_segment.ehdr + 0xd8);
                if (*(iVar8 + arg2 * 0x10 + 0xd0) == 0) {
                    iVar8 = -6;
                }
                else {
                    uVar7 = *(_segment.ehdr + 200);
                    if (*(_segment.ehdr + 200) != 0) {
                        uVar1 = *(iVar8 + arg2 * 0x10 + 0xdc) & 0xfffffffc;
                        puVar6 = _segment.ehdr + 0xe0;
                        do {
                            if ((uVar1 == 0) || (puVar6[-2] == uVar1)) {
                                iVar8 = iVar8 + arg2 * 0x10;
                                uVar7 = *(iVar8 + 0xd4);
                                uVar2 = *(iVar8 + 0xd8);
                                if (*puVar6 < uVar7 + uVar2) {
    //WARNING: Does not return
                                    pcVar4 = SoftwareBreakpoint(0x800,0x8001658);
                                    (*pcVar4)();
                                }
                                if (arg3 != 0) {
                                    *arg3 = uVar2;
                                }
                                iVar8 = puVar6[-1] + uVar7;
                                goto code_r0x08001570;
                            }
                            puVar6 = puVar6 + 3;
                            uVar7 = uVar7 - 1;
                        } while (uVar7 != 0);
                    }
                    iVar8 = -2;
                }
            }
code_r0x08001570:
            __hwspin_unlock(*(_segment.ehdr + 8),1,&uStack_40);
        }
        else {
            iVar8 = iVar5;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x08001660:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8001664);
    (*pcVar4)();
}


// ===== sym.qcom_smem_get_private @ 0x08001664 (size 484) =====

int16_t * sym.qcom_smem_get_private(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    code *pcVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(arg2 + 4);
    piVar1 = *(_segment.ehdr + 0xd8) + *arg2;
    piVar2 = piVar1 + uVar4;
    if (piVar2 < piVar1 + *(piVar1 + 6)) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8001818);
        (*pcVar6)();
    }
    for (piVar7 = piVar1 + 0x10; piVar7 < piVar1 + *(piVar1 + 6); piVar7 = piVar7 + *(piVar7 + 2) + piVar7[5] + 0x10) {
        if (*piVar7 != -0x5a5b) goto code_r0x080017f0;
        if (piVar7[1] == arg3) {
            if (arg4 != 0) {
                uVar5 = *(piVar7 + 2);
                if (uVar4 <= uVar5) {
                    return 0xffffffffffffffea;
                }
                uVar4 = uVar5 - piVar7[4];
                if (uVar5 < piVar7[4] || uVar4 == 0) {
                    return 0xffffffffffffffea;
                }
                *arg4 = uVar4;
            }
            piVar7 = piVar7 + piVar7[5] + 0x10;
            if (piVar7 <= piVar2) {
                return piVar7;
            }
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80017a8);
            (*pcVar6)();
        }
    }
    if (piVar2 < piVar7) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8001824);
        (*pcVar6)();
    }
    uVar8 = *(arg2 + 0x10) + 0xf & -*(arg2 + 0x10);
    piVar7 = piVar1 + (*(piVar1 + 4) - uVar8);
    if ((piVar7 < piVar1) || (piVar3 = piVar1 + *(piVar1 + 8), piVar2 < piVar3)) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8001830);
        (*pcVar6)();
    }
    if (piVar3 < piVar7) {
        do {
            if (*piVar7 != -0x5a5b) {
code_r0x080017f0:
                _dev_err(*arg1,"Found invalid canary in hosts %hu:%hu partition\n",piVar1[2],piVar1[3]);
                return 0xffffffffffffffea;
            }
            if (piVar7[1] == arg3) {
                if (arg4 != 0) {
                    uVar5 = *(piVar7 + 2);
                    if (uVar4 <= uVar5) {
                        return 0xffffffffffffffea;
                    }
                    uVar4 = uVar5 - piVar7[4];
                    if (uVar5 < piVar7[4] || uVar4 == 0) {
                        return 0xffffffffffffffea;
                    }
                    *arg4 = uVar4;
                }
                if (piVar1 <= piVar7 - *(piVar7 + 2)) {
                    return piVar7 - *(piVar7 + 2);
                }
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8001848);
                (*pcVar6)();
            }
            piVar7 = piVar7 + (-*(piVar7 + 2) - uVar8);
        } while (piVar3 < piVar7);
    }
    if (piVar1 <= piVar7) {
        return 0xfffffffffffffffe;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x800183c);
    (*pcVar6)();
}


// ===== sym.qcom_smem_get_free_space @ 0x0800184c (size 120) =====

uint64_t sym.qcom_smem_get_free_space(uint32_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    
    if (_segment.ehdr == 0) {
        return 0xfffffdfb;
    }
    if (((arg1 < 0x14) && (puVar4 = *(_segment.ehdr + arg1 * 8 + 0x18), puVar4 != NULL)) ||
       (puVar4 = *(_segment.ehdr + 0x10), puVar4 != NULL)) {
        iVar1 = *(_segment.ehdr + 0xd8) + *puVar4;
        uVar2 = *(iVar1 + 0x10) - *(iVar1 + 0xc);
        uVar3 = uVar2;
        if (puVar4[1] < uVar2) {
            return 0xffffffea;
        }
    }
    else {
        uVar3 = *(*(_segment.ehdr + 0xd8) + 200);
        if (*(_segment.ehdr + 0xe0) < uVar3) {
            return 0xffffffea;
        }
    }
    return uVar3;
}


// ===== sym.qcom_smem_virt_to_phys @ 0x080018c4 (size 100) =====

int64_t sym.qcom_smem_virt_to_phys(uint32_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    
    uVar1 = arg1;
    uVar2 = *(_segment.ehdr + 200);
    if (*(_segment.ehdr + 200) != 0) {
        piVar3 = _segment.ehdr + 0xe0;
        do {
            uVar4 = piVar3[-1];
            if ((uVar4 <= uVar1) && (uVar1 < uVar4 + *piVar3)) {
                return (uVar1 - uVar4) + *(piVar3 + -2);
            }
            piVar3 = piVar3 + 3;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return 0;
}


// ===== sym.qcom_smem_probe @ 0x08001928 (size 1408) =====

uint64_t sym.qcom_smem_probe(int64_t arg1)

{
    int64_t iVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t *arg1_00;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar12;
    int *piVar13;
    ulong unaff_x30;
    int64_t iStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    char *pcStack_a0;
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
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar4 = of_find_property(*(arg1 + 0x300),"qcom,rpm-msg-ram",0);
    iVar9 = 1;
    if (iVar4 != 0) {
        iVar9 = 2;
    }
    arg1_00 = __kmalloc(iVar9 * 0x18 + 0xd0,0xdc0);
    if (arg1_00 == NULL) {
        piVar12 = 0xfffffff4;
        goto code_r0x08001d58;
    }
    iVar1 = arg1 + 0x10;
    *(arg1_00 + 0x19) = iVar9;
    *arg1_00 = iVar1;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    pcStack_a0 = NULL;
    iStack_b8 = 0;
    iStack_b0 = 0;
    iVar5 = of_parse_phandle(*(arg1 + 0x300),"memory-region",0);
    if (iVar5 == 0) {
        pcVar8 = "memory-region";
code_r0x08001b10:
        _dev_err(iVar1,"No %s specified\n",pcVar8);
        goto code_r0x08001b18;
    }
    uVar6 = of_address_to_resource(iVar5,0,&iStack_b8);
    piVar12 = uVar6 & 0xffffffff;
    if (uVar6 == 0) {
        iVar5 = (iStack_b0 - iStack_b8) + 1;
        iVar7 = devm_ioremap_wc(iVar1,iStack_b8,iVar5);
        arg1_00[0x1b] = iVar7;
        if (iVar7 == 0) {
code_r0x08001af8:
            piVar12 = 0xfffffff4;
        }
        else {
            arg1_00[0x1c] = iVar5;
            *(arg1_00 + 0x1a) = iStack_b8;
            if (iVar4 != 0) {
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                pcStack_a0 = NULL;
                iStack_b8 = 0;
                iStack_b0 = 0;
                iVar4 = of_parse_phandle(*(arg1 + 0x300),"qcom,rpm-msg-ram",0);
                if (iVar4 == 0) {
                    pcVar8 = "qcom,rpm-msg-ram";
                    goto code_r0x08001b10;
                }
                uVar6 = of_address_to_resource(iVar4,0,&iStack_b8);
                piVar12 = uVar6 & 0xffffffff;
                if (uVar6 != 0) goto code_r0x08001d50;
                iVar4 = (iStack_b0 - iStack_b8) + 1;
                iVar5 = devm_ioremap_wc(iVar1,iStack_b8,iVar4);
                arg1_00[0x1e] = iVar5;
                if (iVar5 == 0) goto code_r0x08001af8;
                arg1_00[0x1f] = iVar4;
                iVar7 = arg1_00[0x1b];
                *(arg1_00 + 0x1d) = iStack_b8;
            }
            if ((*(iVar7 + 0xc0) != 1) || (*(iVar7 + 0xcc) != 0)) {
                _dev_err(iVar1,"SMEM is not initialized by SBL\n");
                goto code_r0x08001b18;
            }
            uVar10 = *(iVar7 + 0x5c) >> 0x10;
            if (uVar10 == 0xb) goto code_r0x08001bf4;
            if (uVar10 == 0xc) {
                if (arg1_00[2] == 0) {
                    iVar7 = iVar7 + arg1_00[0x1c];
                    piVar12 = iVar7 + -0x1000;
                    if (*piVar12 == 0x434f5424) {
                        if (*(iVar7 + -0xffc) == 1) {
                            if (piVar12 < 0xfffffffffffff001) {
                                if (*(iVar7 + -0xff8) != 0) {
                                    iVar9 = 0;
                                    do {
                                        iVar4 = iVar9;
                                        piVar13 = piVar12 + iVar9 * 0xc + 8;
                                        if ((((*piVar13 != 0) && (piVar12[iVar4 * 0xc + 9] != 0)) &&
                                            (piVar12[iVar4 * 0xc + 0xb] == -2)) &&
                                           (*(piVar12 + iVar4 * 0x30 + 0x2e) == -2)) {
                                            iVar4 = sym.qcom_smem_partition_header(arg1_00,piVar13,0xfffe,0xfffe);
                                            if (iVar4 == 0) goto code_r0x08001b18;
                                            arg1_00[2] = piVar13;
                                            goto code_r0x08001bdc;
                                        }
                                        iVar9 = iVar9 + 1;
                                    } while (*(iVar7 + -0xff8) != iVar9);
                                }
                                _dev_err(*arg1_00,"Missing entry for global partition\n");
                                goto code_r0x08001b18;
                            }
                            if (piVar12 < 0) goto code_r0x08001d50;
code_r0x08001bdc:
                            iVar7 = arg1_00[0x1b];
                            iVar4 = iVar7 + arg1_00[0x1c];
                            piVar12 = iVar4 + -0x1000;
                            if (*piVar12 == 0x434f5424) {
                                if (*(iVar4 + -0xffc) != 1) {
                                    _dev_err(*arg1_00,"Unsupported partition header version %d\n");
                                    iVar7 = arg1_00[0x1b];
                                    goto code_r0x08001bf4;
                                }
                                uVar10 = 0x200;
                                if ((piVar12 != NULL) && (piVar12 < 0xfffffffffffff001)) {
                                    if (piVar12[*(iVar4 + -0xff8) * 0xc + 8] != 0x49494953) goto code_r0x08001bf4;
                                    uVar10 = *(piVar12 + *(iVar4 + -0xff8) * 0xc + 0xc);
                                }
                            }
                            else {
code_r0x08001bf4:
                                uVar10 = 0x200;
                            }
                            *(arg1_00 + 0x17) = uVar10;
                            iVar7 = iVar7 + arg1_00[0x1c];
                            piVar12 = iVar7 + -0x1000;
                            if (*piVar12 == 0x434f5424) {
                                if (*(iVar7 + -0xffc) != 1) {
                                    _dev_err(*arg1_00,"Unsupported partition header version %d\n");
                                    piVar12 = 0xffffffffffffffea;
                                    goto code_r0x08001c30;
                                }
                                if (0xfffffffffffff000 < piVar12) goto code_r0x08001c30;
                                uVar10 = *(iVar7 + -0xff8);
                                if (uVar10 != 0) {
                                    uVar11 = 0;
                                    do {
                                        iVar4 = uVar11;
                                        piVar13 = piVar12 + uVar11 * 0xc + 8;
                                        if ((*piVar13 != 0) && (piVar12[iVar4 * 0xc + 9] != 0)) {
                                            uVar2 = *(piVar12 + iVar4 * 0x30 + 0x2e);
                                            uVar6 = uVar2;
                                            uVar3 = *(piVar12 + iVar4 * 0xc + 0xb);
                                            if ((uVar3 == 0) || (uVar6 = uVar3, uVar2 == 0)) {
                                                if (uVar6 < 0x14) {
                                                    if (arg1_00[uVar6 + 3] == 0) {
                                                        iVar4 = sym.qcom_smem_partition_header
                                                                          (arg1_00,piVar13,uVar3,uVar2);
                                                        if (iVar4 != 0) {
                                                            arg1_00[uVar6 + 3] = piVar13;
                                                            uVar10 = *(iVar7 + -0xff8);
                                                            goto code_r0x08001c60;
                                                        }
                                                        piVar12 = 0xffffffea;
                                                        goto code_r0x08001c34;
                                                    }
                                                    iVar4 = *arg1_00;
                                                    pcVar8 = "duplicate host %hu\n";
                                                }
                                                else {
                                                    iVar4 = *arg1_00;
                                                    pcVar8 = "bad host %hu\n";
                                                }
                                                _dev_err(iVar4,pcVar8);
                                                piVar12 = 0xffffffea;
                                                goto code_r0x08001c34;
                                            }
                                        }
code_r0x08001c60:
                                        uVar11 = uVar11 + 1;
                                    } while (uVar11 < uVar10);
                                }
                            }
                            else {
                                piVar12 = 0xfffffffffffffffe;
code_r0x08001c30:
                                piVar12 = piVar12 & 0xffffffff;
code_r0x08001c34:
                                if ((piVar12 < 0) && (piVar12 != -2)) goto code_r0x08001d50;
                            }
                            uVar6 = of_hwspin_lock_get_id(*(arg1 + 0x300),0);
                            piVar12 = uVar6 & 0xffffffff;
                            if (uVar6 < 0) {
                                if (uVar6 == -0x205) {
                                    piVar12 = 0xfffffdfb;
                                }
                                else {
                                    _dev_err(iVar1,"failed to retrieve hwlock\n");
                                }
                            }
                            else {
                                iVar4 = hwspin_lock_request_specific(piVar12);
                                arg1_00[1] = iVar4;
                                if (iVar4 != 0) {
                                    uStack_90 = 0;
                                    iStack_b0 = 0;
                                    uStack_98 = 0xffffffff;
                                    uStack_88 = 0;
                                    uStack_80 = 0;
                                    uStack_78 = 0;
                                    uStack_70 = 0;
                                    uStack_a8 = 0;
                                    pcStack_a0 = "qcom-socinfo";
                                    uStack_68 = 0;
                                    uStack_60 = 0;
                                    _segment.ehdr = arg1_00;
                                    iStack_b8 = iVar1;
                                    iVar4 = platform_device_register_full(&iStack_b8);
                                    piVar12 = NULL;
                                    arg1_00[0x18] = iVar4;
                                    goto code_r0x08001d58;
                                }
                                piVar12 = 0xfffffffa;
                            }
                        }
                        else {
                            _dev_err(*arg1_00,"Unsupported partition header version %d\n");
                            piVar12 = 0xffffffffffffffea;
                        }
                    }
                    else {
                        piVar12 = 0xfffffffffffffffe;
                    }
                    goto code_r0x08001d50;
                }
                _dev_err(*arg1_00,"Already found the global partition\n");
            }
            else {
                _dev_err(iVar1,"Unsupported SMEM version 0x%x\n");
            }
code_r0x08001b18:
            piVar12 = 0xffffffea;
        }
    }
code_r0x08001d50:
    kfree(arg1_00);
code_r0x08001d58:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return piVar12 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_smem_remove;
    platform_device_unregister(_segment.ehdr[0x18]);
    hwspin_lock_free(_segment.ehdr[1]);
    kfree(_segment.ehdr);
    _segment.ehdr = NULL;
    return 0;
}


// ===== sym.qcom_smem_remove @ 0x08001ea8 (size 84) =====

ulong sym.qcom_smem_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_device_unregister(*(_segment.ehdr + 0xc0));
    hwspin_lock_free(*(_segment.ehdr + 8));
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.qcom_smem_partition_header @ 0x08001efc (size 228) =====

int * sym.qcom_smem_partition_header(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    int *piVar1;
    uint32_t uVar2;
    ulong uVar3;
    char *pcVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0xd8) + *arg2;
    if (*piVar1 == 0x54525024) {
        uVar5 = *(piVar1 + 1);
        if (*(piVar1 + 1) == (arg3 & 0xffff)) {
            uVar5 = *(piVar1 + 6);
            if (*(piVar1 + 6) == (arg4 & 0xffff)) {
                uVar2 = piVar1[2];
                if (uVar2 == *(arg2 + 4)) {
                    arg4 = piVar1[3];
                    if (arg4 <= uVar2) {
                        return piVar1;
                    }
                    uVar3 = *arg1;
                    pcVar4 = "bad partition free uncached (%u > %u)\n";
                    uVar5 = uVar2;
                }
                else {
                    uVar3 = *arg1;
                    pcVar4 = "bad partition size (%u != %u)\n";
                    uVar5 = *(arg2 + 4);
                    arg4 = uVar2;
                }
            }
            else {
                uVar3 = *arg1;
                arg4 = arg4 & 0xffff;
                pcVar4 = "bad host1 (%hu != %hu)\n";
            }
        }
        else {
            uVar3 = *arg1;
            arg4 = arg3 & 0xffff;
            pcVar4 = "bad host0 (%hu != %hu)\n";
        }
        _dev_err(uVar3,pcVar4,arg4,uVar5);
    }
    else {
        _dev_err(*arg1,"bad partition magic %4ph\n",piVar1);
    }
    return NULL;
}


// ===== sym.qcom_smem_freeze @ 0x08001fe0 (size 84) =====

ulong sym.qcom_smem_freeze(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_device_unregister(*(_segment.ehdr + 0xc0));
    hwspin_lock_free(*(_segment.ehdr + 8));
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.qcom_smem_restore @ 0x08002034 (size 84) =====

int sym.qcom_smem_restore(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qcom_smem_probe(arg1 + -0x10);
    if (iVar1 != 0) {
        _dev_err(arg1,"Error getting SMEM information\n");
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08002088 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080020cc

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
    //switch table (4 cases) at 0x8000465
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80020e0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002134 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_smem_probe.d2834457f793cc8287ed818f6dff7e92.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002168 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_smem_probe.d2834457f793cc8287ed818f6dff7e92.cfi_jt);
    return;
}

